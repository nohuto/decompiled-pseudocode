/*
 * XREFs of sub_18012822A @ 0x18012822A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_18012822A(__int64 a1, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a2 + 72);
  if ( v2 )
    (**v2)(v2, 1LL);
  throw;
}
