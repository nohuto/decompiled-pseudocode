/*
 * XREFs of EditionRemoveFromMsdList @ 0x1C02004E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EditionRemoveFromMsdList(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax

  v1 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = (_QWORD *)a1[1], (_QWORD *)*result != a1) )
    __fastfail(3u);
  *result = v1;
  *(_QWORD *)(v1 + 8) = result;
  return result;
}
