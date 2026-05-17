/*
 * XREFs of RtlLocateLegacyContext @ 0x18007FDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateLegacyContext(_DWORD *a1, _DWORD *a2)
{
  int v2; // r9d
  int v3; // r10d

  v2 = a1[2];
  if ( *a1 > v2 )
    return 0LL;
  v3 = a1[3];
  if ( a1[1] + *a1 < v3 + v2 )
    return 0LL;
  if ( a2 )
  {
    *a2 = v3;
    v2 = a1[2];
  }
  return (char *)a1 + v2;
}
