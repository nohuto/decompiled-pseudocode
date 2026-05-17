/*
 * XREFs of sub_1800CCDA8 @ 0x1800CCDA8
 * Callers:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 * Callees:
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 *     sub_18006AE94 @ 0x18006AE94 (sub_18006AE94.c)
 */

__int64 __fastcall sub_1800CCDA8(_WORD *a1, _WORD *a2)
{
  int v4; // r9d
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_1800298C4((__int64)a1, v6, (unsigned __int64 *)&v8, 0LL);
  if ( v4 >= 0 )
  {
    v7 = 0LL;
    v4 = sub_18006AE94(v6[0], v8, &v7, a2, 0x7FFFLL);
    *a1 = 2 * v7;
  }
  return (unsigned int)v4;
}
