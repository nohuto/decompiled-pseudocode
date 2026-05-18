/*
 * XREFs of sub_18007B834 @ 0x18007B834
 * Callers:
 *     sub_18007B940 @ 0x18007B940 (sub_18007B940.c)
 *     sub_18007BA30 @ 0x18007BA30 (sub_18007BA30.c)
 * Callees:
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     sub_1800759C8 @ 0x1800759C8 (sub_1800759C8.c)
 *     sub_180077BAC @ 0x180077BAC (sub_180077BAC.c)
 *     sub_180077C8C @ 0x180077C8C (sub_180077C8C.c)
 *     sub_18007B318 @ 0x18007B318 (sub_18007B318.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18007B834(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+40h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  sub_180063468(a1 + 8, &v8);
  v6 = 0LL;
  v7 = 0LL;
  sub_180063468(a1 + 112, &v6);
  for ( i = 0; i < (unsigned int)sub_180077C8C(a1); ++i )
  {
    v3 = sub_180077BAC(a1, &v5, i);
    sub_18007B318(a1, v3);
  }
  *(_DWORD *)(a1 + 1368) = -8388609;
  *(_DWORD *)(a1 + 1372) = 2139095039;
  *(_DWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0LL;
  result = (__int64)sub_1800759C8((__int64 **)(a1 + 1424));
  if ( (_BYTE)v7 )
    result = sub_180063780(v6);
  if ( (_BYTE)v9 )
    return sub_180063780(v8);
  return result;
}
