/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x140610CE0
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspAddAccountingValues @ 0x140611AB4 (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x140611F40 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, _QWORD *a2)
{
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, 0x58uLL);
  if ( (*(_DWORD *)(a1 + 776) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v5);
    PspAddAccountingValues(*(_QWORD *)(a1 + 952) + 1120LL, v5);
    if ( !a2[2] && *a2 && v5[1] > *a2 && ObReferenceObjectSafeWithTag(a1) )
      a2[2] = a1;
  }
  return 0LL;
}
