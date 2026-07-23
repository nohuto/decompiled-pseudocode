/*
 * XREFs of ExpWnfFindStateName @ 0x1406109B0
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1406108E0 (ExpWnfLookupNameInstance.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpWnfFindStateName(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rcx

  v2 = *(_QWORD **)(a1 + 56);
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    v3 = v2[3];
    if ( a2 < v3 )
    {
      v2 = (_QWORD *)*v2;
      goto LABEL_5;
    }
    if ( a2 <= v3 )
      return v2 - 2;
    v2 = (_QWORD *)v2[1];
LABEL_5:
    if ( !v2 )
      return 0LL;
  }
}
