/*
 * XREFs of sub_18009EBA0 @ 0x18009EBA0
 * Callers:
 *     sub_1800655E0 @ 0x1800655E0 (sub_1800655E0.c)
 *     sub_1800D0A40 @ 0x1800D0A40 (sub_1800D0A40.c)
 * Callees:
 *     sub_180064300 @ 0x180064300 (sub_180064300.c)
 *     sub_1800657B8 @ 0x1800657B8 (sub_1800657B8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009EBA0(__int64 a1, int a2)
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
  sub_1800657B8((__int64 *)(a1 + 112), (unsigned int *)&v6);
  return sub_180064300(a1, a2);
}
