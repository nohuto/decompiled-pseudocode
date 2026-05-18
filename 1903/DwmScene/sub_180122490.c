/*
 * XREFs of sub_180122490 @ 0x180122490
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008DD08 @ 0x18008DD08 (sub_18008DD08.c)
 *     sub_1801245B8 @ 0x1801245B8 (sub_1801245B8.c)
 */

_QWORD *__fastcall sub_180122490(__int64 a1, _QWORD *a2, char *a3)
{
  char **v3; // rbx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (char **)(a1 + 144);
  sub_18008DD08((char **)(a1 + 144), &v6, a3);
  if ( v6 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  else
  {
    sub_1801245B8(v6 + 64, a2);
  }
  return a2;
}
