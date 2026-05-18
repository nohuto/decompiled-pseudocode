/*
 * XREFs of sub_180079FDC @ 0x180079FDC
 * Callers:
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 * Callees:
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180072334 @ 0x180072334 (sub_180072334.c)
 *     sub_18007EB24 @ 0x18007EB24 (sub_18007EB24.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180079FDC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  __int64 v4; // [rsp+48h] [rbp-20h]

  v3 = 0LL;
  v4 = 0LL;
  sub_1800632D0(a1 + 808, &v3);
  sub_180072334((__int64 *)(a1 + 888), *(char **)(a1 + 896), *(char **)(a1 + 864), *(char **)(a1 + 872));
  result = sub_18007EB24(a1 + 864);
  if ( (_BYTE)v4 )
    return sub_180063778(v3);
  return result;
}
