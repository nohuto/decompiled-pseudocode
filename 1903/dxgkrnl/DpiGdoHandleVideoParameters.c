/*
 * XREFs of DpiGdoHandleVideoParameters @ 0x1C02B05A0
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C02B0540 (DpiGdoDispatchIoctl.c)
 * Callees:
 *     DxgkHandleVideoParameters @ 0x1C026D0FC (DxgkHandleVideoParameters.c)
 */

__int64 __fastcall DpiGdoHandleVideoParameters(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0LL;
  if ( *(_DWORD *)(v3 + 16) < 0x164u || *(_DWORD *)(v3 + 8) < 0x164u )
  {
    v6 = -1073741306;
    v7 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v7 + 24) = -1073741306LL;
    WdLogEvent5_WdError(v7);
  }
  else
  {
    v6 = DxgkHandleVideoParameters(
           *(DXGADAPTER ****)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL) + 3896LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 64) + 156LL),
           *(char **)(a2 + 24));
    v4 = 356LL;
  }
  *(_DWORD *)(a2 + 48) = v6;
  result = v6;
  *(_QWORD *)(a2 + 56) = v4;
  return result;
}
