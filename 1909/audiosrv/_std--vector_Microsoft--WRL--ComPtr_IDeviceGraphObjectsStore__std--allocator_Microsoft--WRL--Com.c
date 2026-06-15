/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__const_&__::_1_::catch$32 @ 0x1800F18A4
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006C94B (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x1800D7D68 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAA.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__const____::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, *(__int64 **)(a2 + 136), *(__int64 **)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
