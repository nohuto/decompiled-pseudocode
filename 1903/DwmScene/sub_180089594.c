/*
 * XREFs of sub_180089594 @ 0x180089594
 * Callers:
 *     sub_18008D310 @ 0x18008D310 (sub_18008D310.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180089594(__int64 *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rbx

  v2 = a1[11];
  if ( v2 )
  {
    a1[11] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (volatile signed __int32 *)a1[5];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return unknown_libname_116(a1);
}
