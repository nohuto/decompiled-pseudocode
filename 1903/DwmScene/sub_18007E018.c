/*
 * XREFs of sub_18007E018 @ 0x18007E018
 * Callers:
 *     sub_18006FEE0 @ 0x18006FEE0 (sub_18006FEE0.c)
 *     sub_18012D456 @ 0x18012D456 (sub_18012D456.c)
 *     sub_18012D552 @ 0x18012D552 (sub_18012D552.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007E018(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx

  sub_180011388((__int64 *)(a2 + 48));
  v3 = *(volatile signed __int32 **)(a2 + 40);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return j_j__o_free(a2);
}
