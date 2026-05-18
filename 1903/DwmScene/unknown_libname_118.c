/*
 * XREFs of unknown_libname_118 @ 0x18002E370
 * Callers:
 *     unknown_libname_35 @ 0x180128DB1 (unknown_libname_35.c)
 *     unknown_libname_75 @ 0x1801301C3 (unknown_libname_75.c)
 *     sub_180132DF7 @ 0x180132DF7 (sub_180132DF7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_118(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
