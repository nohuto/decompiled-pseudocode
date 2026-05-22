/*
 * XREFs of _std::vector_SystemButtonEventInfo_std::allocator_SystemButtonEventInfo___::_Emplace_reallocate_SystemButtonEventInfo_const_&__::_1_::catch$33 @ 0x180030222
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@USystemButtonEventInfo@@@std@@QEAAXQEAUSystemButtonEventInfo@@_K@Z @ 0x18002FF10 (-deallocate@-$allocator@USystemButtonEventInfo@@@std@@QEAAXQEAUSystemButtonEventInfo@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_SystemButtonEventInfo_std::allocator_SystemButtonEventInfo___::_Emplace_reallocate_SystemButtonEventInfo_const____::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::allocator<SystemButtonEventInfo>::deallocate(a1, *(void **)(a2 + 40), *(_QWORD *)(a2 + 32));
  throw;
}
