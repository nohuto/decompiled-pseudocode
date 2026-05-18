/*
 * XREFs of sub_180063128 @ 0x180063128
 * Callers:
 *     sub_180062D70 @ 0x180062D70 (sub_180062D70.c)
 *     sub_180062E50 @ 0x180062E50 (sub_180062E50.c)
 *     sub_180063624 @ 0x180063624 (sub_180063624.c)
 * Callees:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 */

_QWORD *__fastcall sub_180063128(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v6; // rax
  __int64 i; // rdx
  _QWORD *result; // rax

  v6 = (__int64 *)sub_1800632D0();
  for ( i = *v6; i != v6[1] && (*(_QWORD *)i != a1 || *(_BYTE *)(i + 8) != a3); i += 16LL )
    ;
  result = a2;
  *a2 = i;
  return result;
}
