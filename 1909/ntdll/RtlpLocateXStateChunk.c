/*
 * XREFs of RtlpLocateXStateChunk @ 0x1800F2958
 * Callers:
 *     RtlLocateExtendedFeature2 @ 0x180074490 (RtlLocateExtendedFeature2.c)
 *     RtlGetExtendedFeaturesMask @ 0x1800F22C0 (RtlGetExtendedFeaturesMask.c)
 *     RtlSetExtendedFeaturesMask @ 0x1800F2300 (RtlSetExtendedFeaturesMask.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpLocateXStateChunk(_DWORD *a1)
{
  __int64 v1; // r9

  v1 = (int)a1[4];
  if ( *a1 > (int)v1 || a1[1] + *a1 < (int)v1 + a1[5] )
    return 0LL;
  else
    return (char *)a1 + v1;
}
