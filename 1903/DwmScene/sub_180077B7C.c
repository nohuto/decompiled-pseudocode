/*
 * XREFs of sub_180077B7C @ 0x180077B7C
 * Callers:
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_180077CCC @ 0x180077CCC (sub_180077CCC.c)
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 *     sub_180079100 @ 0x180079100 (sub_180079100.c)
 *     sub_180079B84 @ 0x180079B84 (sub_180079B84.c)
 *     sub_18007B724 @ 0x18007B724 (sub_18007B724.c)
 * Callees:
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180077B7C(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  sub_180063358(a1 + 112, &v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  if ( (_BYTE)v5 )
    sub_180063670(v4);
  return (unsigned int)v2;
}
