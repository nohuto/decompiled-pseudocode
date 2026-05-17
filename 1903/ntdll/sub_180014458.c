/*
 * XREFs of sub_180014458 @ 0x180014458
 * Callers:
 *     sub_180014248 @ 0x180014248 (sub_180014248.c)
 * Callees:
 *     sub_180014518 @ 0x180014518 (sub_180014518.c)
 *     sub_18006FDFC @ 0x18006FDFC (sub_18006FDFC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180014458(char a1, __int64 a2, _WORD *a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *v7; // rdx
  _QWORD v9[3]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+48h] [rbp-20h]

  v7 = 0LL;
  memset(v9, 0, sizeof(v9));
  v10 = 0;
  if ( !a3 || !a2 || !a4 )
    return 3221225485LL;
  switch ( *a3 )
  {
    case 1:
      WORD2(v9[0]) = a3[2];
LABEL_10:
      v7 = v9;
      break;
    case 2:
      v7 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * (__int16)a3[2]);
      break;
    case 3:
      HIWORD(v9[0]) = a3[2];
      goto LABEL_10;
  }
  if ( a1 )
    return sub_180014518(a2, v7, a4, a5, a6);
  else
    return sub_18006FDFC(a2, v7, a4, a5, a6);
}
