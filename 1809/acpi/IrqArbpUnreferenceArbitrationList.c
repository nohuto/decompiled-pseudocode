/*
 * XREFs of IrqArbpUnreferenceArbitrationList @ 0x1C0091878
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008FD00 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C000F2A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C000F360 (WPP_RECORDER_SF_DDq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C000F6BC (ProcessorDeleteDeviceIdtAssignment.c)
 *     IcGetPossibleInput @ 0x1C008F808 (IcGetPossibleInput.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0091000 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0091218 (IrqArbGsivFromIrq.c)
 *     IcRemovePossibleReference @ 0x1C00939F4 (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00B2834 (LinkNodeGetPossibleGsiv.c)
 */

__int64 __fastcall IrqArbpUnreferenceArbitrationList(__int64 a1, __int64 ***a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *UserData; // rsi
  __int64 **i; // rdi
  int v9; // eax
  PRTL_RANGE v10; // rax
  unsigned int j; // r14d
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r15d
  int v15; // r8d
  __int64 v16; // rdx
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-60h]
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-2Ch]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+B0h] [rbp+30h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 40), &Iterator, &Range);
  while ( Range )
  {
    WPP_RECORDER_SF_DDq((__int64)WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5, v18);
    UserData = Range->UserData;
    UserData[1] &= ~8u;
    for ( i = *a2; a2 != (__int64 ***)i; i = (__int64 **)*i )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0x14u,
        (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
      if ( Range->Owner == i[4] )
      {
        v9 = UserData[1];
        if ( (v9 & 8) == 0 )
        {
          UserData[1] = v9 | 8;
          v10 = Range;
          for ( j = Range->Start; j <= LODWORD(v10->End); ++j )
          {
            v12 = IrqArbGsivFromIrq(j);
            v14 = v12;
            if ( v12 < 0xFFF00000 && (int)IcGetPossibleInput(v12, v13, 0LL) >= 0 )
            {
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                v15 + 20,
                v15 + 21,
                (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
              LOBYTE(v16) = Range->Attributes & 1;
              IcRemovePossibleReference(v14, v16);
            }
            if ( (int)ProcessorGetDeviceIdtAssignment(i[4], v14, 1, &v19) >= 0 )
            {
              v17 = v20;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                0x14u,
                0x16u,
                (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
              ProcessorDeleteDeviceIdtAssignment(i[4], v14, v17, 1);
            }
            v10 = Range;
          }
          if ( UserData[2] == 2 )
          {
            LinkNodeGetPossibleGsiv(*((_QWORD *)UserData + 2), 0LL);
            --*(_DWORD *)(*((_QWORD *)UserData + 2) + 28LL);
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
