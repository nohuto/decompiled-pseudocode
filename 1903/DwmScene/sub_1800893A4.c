/*
 * XREFs of sub_1800893A4 @ 0x1800893A4
 * Callers:
 *     sub_180088C0C @ 0x180088C0C (sub_180088C0C.c)
 *     sub_18008D338 @ 0x18008D338 (sub_18008D338.c)
 *     sub_18008D35C @ 0x18008D35C (sub_18008D35C.c)
 *     sub_18008D63C @ 0x18008D63C (sub_18008D63C.c)
 *     sub_18008DC08 @ 0x18008DC08 (sub_18008DC08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800893A4(__int64 *a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = (volatile signed __int32 *)a1[5];
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return unknown_libname_116(a1);
}
