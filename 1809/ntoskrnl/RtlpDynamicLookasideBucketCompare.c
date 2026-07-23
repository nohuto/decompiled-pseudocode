/*
 * XREFs of RtlpDynamicLookasideBucketCompare @ 0x1401B7C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDynamicLookasideBucketCompare(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // edx

  v2 = a2[1];
  v3 = a1[1];
  if ( v2 >= v3 )
    return v3 < v2;
  else
    return 0xFFFFFFFFLL;
}
