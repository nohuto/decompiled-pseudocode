/*
 * XREFs of sub_1801225A0 @ 0x1801225A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008DE18 @ 0x18008DE18 (sub_18008DE18.c)
 *     sub_1801246C8 @ 0x1801246C8 (sub_1801246C8.c)
 */

_QWORD *__fastcall sub_1801225A0(__int64 a1, _QWORD *a2, char *a3)
{
  char **v3; // rbx
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (char **)(a1 + 144);
  sub_18008DE18((char **)(a1 + 144), &v6, a3);
  if ( v6 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  else
  {
    sub_1801246C8(v6 + 64, a2);
  }
  return a2;
}
