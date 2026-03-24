/*
 * XREFs of MiGetAweVadPageSize @ 0x14084FF04
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1405EC380 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405ECBB0 (MiCommitPageTablesForVad.c)
 * Callees:
 *     ExGetCallBackBlockRoutine @ 0x140088BB0 (ExGetCallBackBlockRoutine.c)
 */

_BOOL8 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = *(_DWORD **)(a1 + 8);
  return v1 && (*v1 & 1) == 0 && (unsigned __int64)ExGetCallBackBlockRoutine((__int64)v1) >= 0x200;
}
