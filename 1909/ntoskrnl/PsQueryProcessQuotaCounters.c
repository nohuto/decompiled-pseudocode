/*
 * XREFs of PsQueryProcessQuotaCounters @ 0x1406D72B0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryProcessQuotaCounters(__int64 a1, int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax

  if ( a3 )
  {
    result = *(_QWORD *)(a1 + 8LL * a2 + 792);
    *a3 = result;
  }
  if ( a4 )
  {
    result = *(_QWORD *)(a1 + 8LL * a2 + 808);
    *a4 = result;
  }
  return result;
}
