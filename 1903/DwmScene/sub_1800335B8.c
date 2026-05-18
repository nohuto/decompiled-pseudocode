/*
 * XREFs of sub_1800335B8 @ 0x1800335B8
 * Callers:
 *     sub_1800283E0 @ 0x1800283E0 (sub_1800283E0.c)
 *     sub_18003F2C0 @ 0x18003F2C0 (sub_18003F2C0.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800335B8(__int64 a1)
{
  _BYTE v3[64]; // [rsp+30h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)(a1 + 144) + 264LL))(
           *(_QWORD *)(a1 + 144),
           8LL,
           v3);
}
