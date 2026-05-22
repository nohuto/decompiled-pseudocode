/*
 * XREFs of _std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo_const_&___ptr64__::_1_::catch$0 @ 0x180130B43
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z @ 0x18005808C (-deallocate@-$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo_const_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<LegacyInputInfo>::deallocate(a1, *(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 136));
  throw;
}
