/*
 * XREFs of sub_1800AC420 @ 0x1800AC420
 * Callers:
 *     sub_1800AB53C @ 0x1800AB53C (sub_1800AB53C.c)
 *     sub_1800B2844 @ 0x1800B2844 (sub_1800B2844.c)
 *     sub_1800B29DC @ 0x1800B29DC (sub_1800B29DC.c)
 *     sub_1800B2A98 @ 0x1800B2A98 (sub_1800B2A98.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AC420(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 40);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
