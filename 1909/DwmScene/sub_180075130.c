/*
 * XREFs of sub_180075130 @ 0x180075130
 * Callers:
 *     ?dtor$0@?0???0_Pad@std@@QEAA@XZ@4HA @ 0x18012D30F (-dtor$0@-0---0_Pad@std@@QEAA@XZ@4HA.c)
 * Callees:
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18012754A (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180075130(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
