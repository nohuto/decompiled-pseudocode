/*
 * XREFs of sub_180063238 @ 0x180063238
 * Callers:
 *     sub_180062E80 @ 0x180062E80 (sub_180062E80.c)
 *     sub_180062F60 @ 0x180062F60 (sub_180062F60.c)
 *     sub_180063734 @ 0x180063734 (sub_180063734.c)
 * Callees:
 *     sub_1800633E0 @ 0x1800633E0 (sub_1800633E0.c)
 */

_QWORD *__fastcall sub_180063238(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v6; // rax
  __int64 i; // rdx
  _QWORD *result; // rax

  v6 = (__int64 *)sub_1800633E0();
  for ( i = *v6; i != v6[1] && (*(_QWORD *)i != a1 || *(_BYTE *)(i + 8) != a3); i += 16LL )
    ;
  result = a2;
  *a2 = i;
  return result;
}
