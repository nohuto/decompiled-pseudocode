/*
 * XREFs of sub_180099A40 @ 0x180099A40
 * Callers:
 *     sub_1800EBCE0 @ 0x1800EBCE0 (sub_1800EBCE0.c)
 *     sub_1800EFE20 @ 0x1800EFE20 (sub_1800EFE20.c)
 *     sub_1801114D0 @ 0x1801114D0 (sub_1801114D0.c)
 *     sub_180111550 @ 0x180111550 (sub_180111550.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180099A40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 96);
  }
  *a2 = *(_QWORD *)(a1 + 88);
  result = a2;
  a2[1] = v2;
  return result;
}
