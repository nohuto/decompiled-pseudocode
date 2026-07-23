/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x1405FE500
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     PspAddAccountingValues @ 0x1405FF264 (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x1405FF700 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, unsigned __int64 *a2)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-60h]

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v5);
    PspAddAccountingValues(*(_QWORD *)(a1 + 944) + 1120LL, v5);
    if ( !a2[2] && *a2 && v6 > *a2 && ObReferenceObjectSafeWithTag(a1) )
      a2[2] = a1;
  }
  return 0LL;
}
