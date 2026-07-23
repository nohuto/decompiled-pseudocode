/*
 * XREFs of MiComputeAweCharges @ 0x140850AB0
 * Callers:
 *     MiRemoveVadCharges @ 0x1405ED820 (MiRemoveVadCharges.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 * Callees:
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     MiResidentPagesForSpan @ 0x1406C45D0 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiComputeAweCharges(__int64 a1, _DWORD *a2)
{
  int v2; // r9d
  __int64 v3; // r10
  unsigned __int64 v4; // r8

  v2 = 0;
  v3 = a1;
  v4 = 1LL;
  if ( a2 && (*a2 & 1) == 0 )
    v4 = ExGetCallBackBlockRoutine((__int64)a2);
  LOBYTE(v2) = v4 >= 0x200;
  return MiResidentPagesForSpan(
           (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12,
           ((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF,
           v2);
}
