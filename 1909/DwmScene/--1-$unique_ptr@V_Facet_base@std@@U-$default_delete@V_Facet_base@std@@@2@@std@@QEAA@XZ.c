/*
 * XREFs of ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x18003DAF0
 * Callers:
 *     sub_18012D8DE @ 0x18012D8DE (sub_18012D8DE.c)
 *     sub_18012D99A @ 0x18012D99A (sub_18012D99A.c)
 *     sub_18012DBE9 @ 0x18012DBE9 (sub_18012DBE9.c)
 *     sub_180130AC7 @ 0x180130AC7 (sub_180130AC7.c)
 *     unknown_libname_162 @ 0x180132C94 (unknown_libname_162.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
