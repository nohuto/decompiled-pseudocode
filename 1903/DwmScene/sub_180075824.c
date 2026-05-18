/*
 * XREFs of sub_180075824 @ 0x180075824
 * Callers:
 *     sub_180079100 @ 0x180079100 (sub_180079100.c)
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180079F64 @ 0x180079F64 (sub_180079F64.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180075824(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  sub_1800631C0(a1 + 312, &v3);
  sub_180079F64(a1);
  result = *(_QWORD *)(a1 + 296);
  if ( *(_QWORD *)(a1 + 288) != result )
    result = sub_18011D988(&unk_1802586D8, 5LL, "Engine::CheckAllLoadersDestroyed() -- detected live Loader objects!");
  if ( (_BYTE)v4 )
    return sub_180063668(v3);
  return result;
}
