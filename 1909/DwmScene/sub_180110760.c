/*
 * XREFs of sub_180110760 @ 0x180110760
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 */

_QWORD *__fastcall sub_180110760(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v4; // rdx

  a2[2] = 0LL;
  switch ( a3 )
  {
    case 0:
      a2[3] = 0LL;
      v4 = &qword_18025C7B8;
      goto LABEL_12;
    case 1:
      a2[3] = 0LL;
      v4 = &qword_18025C7F8;
      goto LABEL_12;
    case 2:
      a2[3] = 0LL;
      v4 = &qword_18025C7D8;
      goto LABEL_12;
    case 3:
      a2[3] = 0LL;
      v4 = &qword_18025C798;
      goto LABEL_12;
    case 5:
      a2[3] = 0LL;
      v4 = &qword_18025C818;
LABEL_12:
      sub_18000F444(a2, (__int64)v4);
      return a2;
  }
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
