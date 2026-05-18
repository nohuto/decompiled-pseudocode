/*
 * XREFs of sub_180079ECC @ 0x180079ECC
 * Callers:
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 * Callees:
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180072224 @ 0x180072224 (sub_180072224.c)
 *     sub_18007EA14 @ 0x18007EA14 (sub_18007EA14.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180079ECC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  __int64 v4; // [rsp+48h] [rbp-20h]

  v3 = 0LL;
  v4 = 0LL;
  sub_1800631C0(a1 + 808, &v3);
  sub_180072224((__int64 *)(a1 + 888), *(char **)(a1 + 896), *(char **)(a1 + 864), *(char **)(a1 + 872));
  result = sub_18007EA14(a1 + 864);
  if ( (_BYTE)v4 )
    return sub_180063668(v3);
  return result;
}
