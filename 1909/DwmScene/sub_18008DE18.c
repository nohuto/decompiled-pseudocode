/*
 * XREFs of sub_18008DE18 @ 0x18008DE18
 * Callers:
 *     sub_18008AE98 @ 0x18008AE98 (sub_18008AE98.c)
 *     sub_1801225A0 @ 0x1801225A0 (sub_1801225A0.c)
 * Callees:
 *     sub_18008D858 @ 0x18008D858 (sub_18008D858.c)
 */

char **__fastcall sub_18008DE18(char **a1, char **a2, char *a3)
{
  char *v3; // rsi
  char *v6; // rdi
  char *v7; // rbx
  char **result; // rax

  v3 = *a1;
  v6 = *a1;
  v7 = (char *)*((_QWORD *)*a1 + 1);
  while ( !v7[25] )
  {
    if ( (int)sub_18008D858(v7 + 32, (__int64)a3) >= 0 )
    {
      v6 = v7;
      v7 = *(char **)v7;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
    }
  }
  if ( v6 == v3 || (int)sub_18008D858(a3, (__int64)(v6 + 32)) < 0 )
    v6 = v3;
  result = a2;
  *a2 = v6;
  return result;
}
