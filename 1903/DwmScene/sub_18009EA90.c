/*
 * XREFs of sub_18009EA90 @ 0x18009EA90
 * Callers:
 *     sub_1800654D0 @ 0x1800654D0 (sub_1800654D0.c)
 *     sub_1800D0930 @ 0x1800D0930 (sub_1800D0930.c)
 * Callees:
 *     sub_1800641F0 @ 0x1800641F0 (sub_1800641F0.c)
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009EA90(__int64 a1, int a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  int v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
  {
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( v4 )
      (**v4)(v4, 1LL);
  }
  v6 = a2;
  sub_1800656A8((__int64 *)(a1 + 112), (unsigned int *)&v6);
  return sub_1800641F0(a1, a2);
}
