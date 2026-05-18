/*
 * XREFs of unknown_libname_119 @ 0x1800B8004
 * Callers:
 *     unknown_libname_74 @ 0x1801301B7 (unknown_libname_74.c)
 *     unknown_libname_93 @ 0x180132DDF (unknown_libname_93.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
// Hidden C++ exception states: #wind=1
__int64 __fastcall unknown_libname_119(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
