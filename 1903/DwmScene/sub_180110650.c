/*
 * XREFs of sub_180110650 @ 0x180110650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 */

_QWORD *__fastcall sub_180110650(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v4; // rdx

  a2[2] = 0LL;
  switch ( a3 )
  {
    case 0:
      a2[3] = 0LL;
      v4 = &qword_18025B7B8;
      goto LABEL_12;
    case 1:
      a2[3] = 0LL;
      v4 = &qword_18025B7F8;
      goto LABEL_12;
    case 2:
      a2[3] = 0LL;
      v4 = &qword_18025B7D8;
      goto LABEL_12;
    case 3:
      a2[3] = 0LL;
      v4 = &qword_18025B798;
      goto LABEL_12;
    case 5:
      a2[3] = 0LL;
      v4 = &qword_18025B818;
LABEL_12:
      sub_18000F3F4(a2, (__int64)v4);
      return a2;
  }
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
