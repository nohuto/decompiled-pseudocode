/*
 * XREFs of sub_1800B4E24 @ 0x1800B4E24
 * Callers:
 *     sub_1800B2F30 @ 0x1800B2F30 (sub_1800B2F30.c)
 *     sub_18012FF83 @ 0x18012FF83 (sub_18012FF83.c)
 *     sub_18012FFA7 @ 0x18012FFA7 (sub_18012FFA7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B4E24(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a2 + 40);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return j_j__o_free(a2);
}
