/*
 * XREFs of ?deallocate@?$allocator@USystemButtonEventInfo@@@std@@QEAAXQEAUSystemButtonEventInfo@@_K@Z @ 0x18002FF10
 * Callers:
 *     _std::vector_SystemButtonEventInfo_std::allocator_SystemButtonEventInfo___::_Emplace_reallocate_SystemButtonEventInfo_const_&__::_1_::catch$33 @ 0x180030222 (_std--vector_SystemButtonEventInfo_std--allocator_SystemButtonEventInfo___--_Emplace_reallocate_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<SystemButtonEventInfo>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(16 * a3));
}
