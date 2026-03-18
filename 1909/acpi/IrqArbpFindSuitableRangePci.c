/*
 * XREFs of IrqArbpFindSuitableRangePci @ 0x1C009C72C
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C009C430 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004C5A4 (WPP_RECORDER_SF_DD.c)
 *     IrqArbGsivFromIrq @ 0x1C0099C64 (IrqArbGsivFromIrq.c)
 *     IcGetPossibleInput @ 0x1C009C6A4 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C009C898 (IcIsInputValid.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00B6224 (LinkNodeGetPossibleGsiv.c)
 *     IrqArbIrqFromGsiv @ 0x1C00B693C (IrqArbIrqFromGsiv.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6B9C (IrqArbpAssignIrqFromLinkNode.c)
 */

char __fastcall IrqArbpFindSuitableRangePci(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF

  v20 = a1;
  if ( (int)LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &v20, &v21, 1) < 0 )
    return 0;
  if ( !v20 )
  {
    v4 = v21;
    if ( (int)IcGetPossibleInput(v21, v3, &v20) >= 0 && (v20 & 0xB) != 3 )
      return 0;
    v5 = a2[2];
    if ( v4 < v5 )
      return 0;
    v6 = a2[3];
    if ( v4 > v6 )
      return 0;
    if ( v5 <= v4 && v6 >= v4 )
    {
      if ( !(unsigned __int8)IcIsInputValid((unsigned int)v4) )
        return 0;
      v7 = a2[5];
      *a2 = v4;
      a2[1] = v4;
      *(_QWORD *)(v7 + 16) = 1LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0x19u,
          (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
          v4);
    }
    goto LABEL_11;
  }
  if ( (int)LinkNodeGetPossibleGsiv(v20, &v21) < 0 )
  {
    if ( (int)IrqArbpAssignIrqFromLinkNode(v16, a2, v16) < 0 )
      return 0;
    LODWORD(v4) = IrqArbGsivFromIrq(*(unsigned int *)a2);
LABEL_11:
    v8 = a2[7];
    v9 = a2[5];
    LODWORD(v20) = 0;
    v10 = a2[9];
    v11 = *(_DWORD *)(v9 + 36);
    v12 = *(_QWORD *)(v9 + 40);
    v13 = a2[4];
    LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)(v8 + 40) + 4LL) & 1;
    if ( (int)((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64, _DWORD, _DWORD, int, int))ProcessorFindIdtEntries)(
                *(_QWORD *)(v13 + 32),
                v12,
                v10,
                1LL,
                v4,
                (unsigned __int8)v20,
                v11 & 1,
                1) >= 0 )
      return 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x14u,
        0x1Au,
        (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
    return 0;
  }
  v17 = IrqArbIrqFromGsiv(v21, v15);
  v18 = v17;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x17u,
      (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
      v17);
  if ( a2[2] <= v18 && a2[3] >= v18 )
  {
    *a2 = v18;
    a2[1] = v18;
    *(_QWORD *)(a2[5] + 16) = 1LL;
    return 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = *(_DWORD *)a2;
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x18u,
      (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
      v19,
      *((_DWORD *)a2 + 2));
  }
  return 0;
}
