/*
 * XREFs of sub_180085274 @ 0x180085274
 * Callers:
 *     sub_1800851D4 @ 0x1800851D4 (sub_1800851D4.c)
 * Callees:
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_180081F80 @ 0x180081F80 (sub_180081F80.c)
 *     sub_180081FFC @ 0x180081FFC (sub_180081FFC.c)
 *     sub_1800820A4 @ 0x1800820A4 (sub_1800820A4.c)
 *     sub_180082210 @ 0x180082210 (sub_180082210.c)
 *     sub_1800822A8 @ 0x1800822A8 (sub_1800822A8.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_1800841D4 @ 0x1800841D4 (sub_1800841D4.c)
 *     sub_180086D28 @ 0x180086D28 (sub_180086D28.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_180085274(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdx
  signed __int32 v4; // eax

  sub_180087340(a1);
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        goto LABEL_7;
    }
    while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) );
    v2 = *(volatile signed __int32 **)(a1 + 80);
  }
LABEL_7:
  if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
    if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  sub_180078120();
}
