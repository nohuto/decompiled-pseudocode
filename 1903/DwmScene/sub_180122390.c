/*
 * XREFs of sub_180122390 @ 0x180122390
 * Callers:
 *     <none>
 * Callees:
 *     sub_180120324 @ 0x180120324 (sub_180120324.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

char __fastcall sub_180122390(__int64 a1, _QWORD *a2, char a3)
{
  int v4; // eax
  char v5; // dl
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_180120324(a1, a2, v7);
  v5 = a3;
  if ( !v4 )
    return v7[0];
  return v5;
}
