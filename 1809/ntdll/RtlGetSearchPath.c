/*
 * XREFs of RtlGetSearchPath @ 0x180054190
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x1800545E8 (RtlpGetCachedPath.c)
 */

__int64 __fastcall RtlGetSearchPath(_QWORD *a1)
{
  __int64 CachedPath; // rax

  CachedPath = RtlpGetCachedPath(&RtlpSearchPath, RtlpComputeSearchPath, 0LL, 0LL);
  if ( CachedPath )
  {
    *a1 = CachedPath + 112;
    return 0LL;
  }
  else
  {
    *a1 = 0LL;
    return 3221225495LL;
  }
}
