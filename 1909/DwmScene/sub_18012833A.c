/*
 * XREFs of sub_18012833A @ 0x18012833A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_18012833A(__int64 a1, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 72);
  if ( v2 )
    (**v2)(v2, 1LL);
  throw;
}
