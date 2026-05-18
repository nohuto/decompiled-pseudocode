/*
 * XREFs of sub_18007B724 @ 0x18007B724
 * Callers:
 *     sub_18007B830 @ 0x18007B830 (sub_18007B830.c)
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 * Callees:
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     sub_1800758B8 @ 0x1800758B8 (sub_1800758B8.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_180077B7C @ 0x180077B7C (sub_180077B7C.c)
 *     sub_18007B208 @ 0x18007B208 (sub_18007B208.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18007B724(__int64 a1)
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
  sub_180063358(a1 + 8, &v8);
  v6 = 0LL;
  v7 = 0LL;
  sub_180063358(a1 + 112, &v6);
  for ( i = 0; i < (unsigned int)sub_180077B7C(a1); ++i )
  {
    v3 = sub_180077A9C(a1, &v5, i);
    sub_18007B208(a1, v3);
  }
  *(_DWORD *)(a1 + 1368) = -8388609;
  *(_DWORD *)(a1 + 1372) = 2139095039;
  *(_DWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0LL;
  result = (__int64)sub_1800758B8((__int64 **)(a1 + 1424));
  if ( (_BYTE)v7 )
    result = sub_180063670(v6);
  if ( (_BYTE)v9 )
    return sub_180063670(v8);
  return result;
}
