/*
 * XREFs of sub_18002E3A4 @ 0x18002E3A4
 * Callers:
 *     sub_180128C8F @ 0x180128C8F (sub_180128C8F.c)
 * Callees:
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18012743A (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E3A4(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
