/*
 * XREFs of sub_180075934 @ 0x180075934
 * Callers:
 *     sub_180079210 @ 0x180079210 (sub_180079210.c)
 * Callees:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18007A074 @ 0x18007A074 (sub_18007A074.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180075934(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  sub_1800632D0(a1 + 312, &v3);
  sub_18007A074(a1);
  result = *(_QWORD *)(a1 + 296);
  if ( *(_QWORD *)(a1 + 288) != result )
    result = sub_18011DA98(&unk_1802596D8, 5LL, "Engine::CheckAllLoadersDestroyed() -- detected live Loader objects!");
  if ( (_BYTE)v4 )
    return sub_180063778(v3);
  return result;
}
