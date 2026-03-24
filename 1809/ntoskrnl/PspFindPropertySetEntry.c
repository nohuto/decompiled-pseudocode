/*
 * XREFs of PspFindPropertySetEntry @ 0x14010F4DC
 * Callers:
 *     PspInsertProperty @ 0x14010EFA4 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14010F08C (PspRemoveProperty.c)
 *     PspGetProperty @ 0x14010F41C (PspGetProperty.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PspFindPropertySetEntry(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8

  v2 = (_QWORD *)*a1;
  v3 = 0LL;
  while ( v2 != a1 )
  {
    if ( v2[2] == a2 )
      return v2;
    v2 = (_QWORD *)*v2;
  }
  return (_QWORD *)v3;
}
