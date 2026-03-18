/*
 * XREFs of PspUpdateJobPeakProcessMemory @ 0x1406DA8EC
 * Callers:
 *     PspFoldProcessAccountingIntoJob @ 0x1406DA794 (PspFoldProcessAccountingIntoJob.c)
 * Callees:
 *     <none>
 */

void __fastcall PspUpdateJobPeakProcessMemory(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8

  if ( a2 > *(_QWORD *)(a1 + 600) )
  {
    _m_prefetchw((const void *)(a1 + 600));
    v2 = *(_QWORD *)(a1 + 600);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 600), a2, v2);
    }
    while ( v2 != v3 && a2 > v2 );
  }
}
