/*
 * XREFs of sub_1800B4F34 @ 0x1800B4F34
 * Callers:
 *     sub_1800B3040 @ 0x1800B3040 (sub_1800B3040.c)
 *     sub_180130093 @ 0x180130093 (sub_180130093.c)
 *     sub_1801300B7 @ 0x1801300B7 (sub_1801300B7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B4F34(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a2 + 40);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return j_j__o_free(a2);
}
