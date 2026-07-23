/*
 * XREFs of AslRegWildcardFindNext @ 0x1408EC908
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1408E80BC (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x1408EC840 (AslRegWildcardFindFirst.c)
 * Callees:
 *     AslpProcessMatchRegNode @ 0x1408ECFC4 (AslpProcessMatchRegNode.c)
 */

__int64 __fastcall AslRegWildcardFindNext(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int matched; // ecx

  v2 = (_QWORD *)a2[2];
  if ( !v2 )
    return 2147483674LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v2 == a2 )
      {
        matched = -2147483622;
        v2 = 0LL;
        goto LABEL_9;
      }
      matched = AslpProcessMatchRegNode(v2, a2);
      if ( matched >= 0 )
        break;
      v2 = (_QWORD *)v2[1];
    }
    if ( (_QWORD *)*v2 == a2 )
      break;
    v2 = (_QWORD *)*v2;
  }
  *a1 = v2[4];
LABEL_9:
  a2[2] = v2;
  return (unsigned int)matched;
}
