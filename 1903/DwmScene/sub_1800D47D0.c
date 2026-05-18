/*
 * XREFs of sub_1800D47D0 @ 0x1800D47D0
 * Callers:
 *     sub_1800D35E8 @ 0x1800D35E8 (sub_1800D35E8.c)
 *     sub_180130AD7 @ 0x180130AD7 (sub_180130AD7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D47D0(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a2 + 48);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return j_j__o_free(a2);
}
