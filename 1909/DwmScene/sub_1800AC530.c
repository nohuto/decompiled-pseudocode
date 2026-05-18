/*
 * XREFs of sub_1800AC530 @ 0x1800AC530
 * Callers:
 *     sub_1800AB64C @ 0x1800AB64C (sub_1800AB64C.c)
 *     sub_1800B2954 @ 0x1800B2954 (sub_1800B2954.c)
 *     sub_1800B2AEC @ 0x1800B2AEC (sub_1800B2AEC.c)
 *     sub_1800B2BA8 @ 0x1800B2BA8 (sub_1800B2BA8.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AC530(__int64 a1, char a2)
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
