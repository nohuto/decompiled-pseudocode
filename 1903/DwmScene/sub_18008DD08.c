/*
 * XREFs of sub_18008DD08 @ 0x18008DD08
 * Callers:
 *     sub_18008AD88 @ 0x18008AD88 (sub_18008AD88.c)
 *     sub_180122490 @ 0x180122490 (sub_180122490.c)
 * Callees:
 *     sub_18008D748 @ 0x18008D748 (sub_18008D748.c)
 */

char **__fastcall sub_18008DD08(char **a1, char **a2, char *a3)
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
    if ( (int)sub_18008D748(v7 + 32, (__int64)a3) >= 0 )
    {
      v6 = v7;
      v7 = *(char **)v7;
    }
    else
    {
      v7 = (char *)*((_QWORD *)v7 + 2);
    }
  }
  if ( v6 == v3 || (int)sub_18008D748(a3, (__int64)(v6 + 32)) < 0 )
    v6 = v3;
  result = a2;
  *a2 = v6;
  return result;
}
