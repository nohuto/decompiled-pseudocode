/*
 * XREFs of sub_180107A64 @ 0x180107A64
 * Callers:
 *     sub_180107E30 @ 0x180107E30 (sub_180107E30.c)
 * Callees:
 *     sub_18007FDD0 @ 0x18007FDD0 (sub_18007FDD0.c)
 *     sub_1801073B0 @ 0x1801073B0 (sub_1801073B0.c)
 *     sub_18010764C @ 0x18010764C (sub_18010764C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     _alloca_probe @ 0x180126020 (_alloca_probe.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int8 __fastcall sub_180107A64(char *a1, char *a2, char a3)
{
  __int64 v6; // rbp
  unsigned __int8 result; // al
  __int64 v8; // [rsp+38h] [rbp-1030h] BYREF
  void *v9; // [rsp+40h] [rbp-1028h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-1020h]

  v6 = (a2 - a1) >> 4;
  if ( v6 > 32 )
  {
    sub_18007FDD0(&v9, ((a2 - a1) >> 4) - ((a2 - a1) >> 5));
    result = sub_18010764C(a1, a2, v6, v9, v10, a3);
    if ( v10 > 0x100 )
      return j__o_free(v9);
  }
  else if ( v6 > 1 )
  {
    return (unsigned __int8)sub_1801073B0(&v8, a1, a2);
  }
  return result;
}
