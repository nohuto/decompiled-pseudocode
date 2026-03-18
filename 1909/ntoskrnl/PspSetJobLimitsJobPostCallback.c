/*
 * XREFs of PspSetJobLimitsJobPostCallback @ 0x1406EE7C0
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyWorkingSetLimits @ 0x1408C7024 (PspApplyWorkingSetLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPostCallback(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
    PspApplyWorkingSetLimits(a1, a2);
  return 0LL;
}
