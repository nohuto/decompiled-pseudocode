/*
 * XREFs of sub_1800894B4 @ 0x1800894B4
 * Callers:
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     sub_18008D448 @ 0x18008D448 (sub_18008D448.c)
 *     sub_18008D46C @ 0x18008D46C (sub_18008D46C.c)
 *     sub_18008D74C @ 0x18008D74C (sub_18008D74C.c)
 *     sub_18008DD18 @ 0x18008DD18 (sub_18008DD18.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800894B4(__int64 *a1)
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
