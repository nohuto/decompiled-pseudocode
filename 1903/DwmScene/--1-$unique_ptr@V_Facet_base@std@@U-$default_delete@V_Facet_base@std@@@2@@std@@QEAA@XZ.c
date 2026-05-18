/*
 * XREFs of ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x18003D9E0
 * Callers:
 *     sub_18012D7CE @ 0x18012D7CE (sub_18012D7CE.c)
 *     sub_18012D88A @ 0x18012D88A (sub_18012D88A.c)
 *     sub_18012DAD9 @ 0x18012DAD9 (sub_18012DAD9.c)
 *     sub_1801309B7 @ 0x1801309B7 (sub_1801309B7.c)
 *     unknown_libname_162 @ 0x180132B84 (unknown_libname_162.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
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
