/*
 * XREFs of sub_180038DA0 @ 0x180038DA0
 * Callers:
 *     sub_18012F4D1 @ 0x18012F4D1 (sub_18012F4D1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180038DA0(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 80);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180063F2C(a1);
}
