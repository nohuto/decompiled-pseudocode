/*
 * XREFs of VidSchQueryVidPnSourceStatistics @ 0x1C0033260
 * Callers:
 *     <none>
 * Callees:
 *     CopyVidPnSourceStatistics @ 0x1C00CABE4 (CopyVidPnSourceStatistics.c)
 */

__int64 __fastcall VidSchQueryVidPnSourceStatistics(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r8

  if ( a2 >= *(_DWORD *)(a1 + 40) )
    return 3221225485LL;
  CopyVidPnSourceStatistics(a3, *(_QWORD *)(a1 + 8LL * a2 + 5792));
  CopyVidPnSourceStatistics(
    v5 + 80,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 24) + 8LL * *(unsigned int *)(v4 + 4)) + 8 * v6 + 88));
  return 0LL;
}
