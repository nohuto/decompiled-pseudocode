/*
 * XREFs of IrqArbpFindSuitableRangeMsi @ 0x1C009C330
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1C009C430 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C001DD80 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ArbFindSuitableRange @ 0x1C009C4C0 (ArbFindSuitableRange.c)
 *     ProcessorMsiSupported @ 0x1C009C5A4 (ProcessorMsiSupported.c)
 */

char __fastcall IrqArbpFindSuitableRangeMsi(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // r9
  __int64 v4; // r10
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned int v8; // esi
  BOOL v9; // ebx
  int v10; // eax
  int v11; // eax
  bool v12; // cl
  BOOL v14; // [rsp+78h] [rbp+10h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a2 + 7);
  v4 = *((_QWORD *)a2 + 5);
  v14 = 0;
  v6 = *((_QWORD *)a2 + 9);
  LOBYTE(v14) = *(_BYTE *)(v2[5] + 4LL) & 1;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) + 1;
  if ( a2[12] == 1 && v2[2] == 1LL && v2[3] == 1LL )
  {
    *((_WORD *)a2 + 32) |= 0x40u;
    v7 = *(_QWORD *)(v4 + 40);
  }
  v9 = v14;
  v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _DWORD, BOOL, _DWORD, int))ProcessorFindIdtEntries)(
          *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
          v7,
          v6,
          v8,
          *a2,
          v14,
          0,
          1);
  if ( v10 >= 0 )
    goto LABEL_6;
  if ( v8 > 1 )
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _DWORD, BOOL, _DWORD, int))ProcessorFindIdtEntries)(
            *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL),
            *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL),
            v6,
            1LL,
            *a2,
            v9,
            0,
            1);
  if ( v10 >= 0 )
  {
LABEL_6:
    v11 = ProcessorMsiSupported(v6 + 16, &v14);
    if ( v11 < 0 )
    {
      v12 = v14;
    }
    else
    {
      v12 = v14;
      v11 = 0;
    }
    if ( v11 >= 0 && v12 )
      return ArbFindSuitableRange(a1, a2);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x14u,
      0x1Eu,
      (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
      *(_QWORD *)(*((_QWORD *)a2 + 4) + 32LL));
  }
  return 0;
}
