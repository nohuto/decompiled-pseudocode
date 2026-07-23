/*
 * XREFs of PsQueryProcessQuotaCounters @ 0x14066E958
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryProcessQuotaCounters(__int64 a1, int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax

  if ( a3 )
  {
    result = *(_QWORD *)(a1 + 8LL * a2 + 784);
    *a3 = result;
  }
  if ( a4 )
  {
    result = *(_QWORD *)(a1 + 8LL * a2 + 800);
    *a4 = result;
  }
  return result;
}
