/*
 * XREFs of _std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo___::_Emplace_reallocate_HidChannelValueInfo_const_&___ptr64__::_1_::catch$0 @ 0x180131B52
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ?deallocate@?$allocator@VHidChannelValueInfo@@@std@@QEAAXQEAVHidChannelValueInfo@@_K@Z @ 0x180078A38 (-deallocate@-$allocator@VHidChannelValueInfo@@@std@@QEAAXQEAVHidChannelValueInfo@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo___::_Emplace_reallocate_HidChannelValueInfo_const_____ptr64__::_1_::catch_0(
        MPCClickerProcessor *a1,
        __int64 a2)
{
  __int64 v3; // rcx

  MPCClickerProcessor::Uninitialize3DComponents(a1);
  std::allocator<HidChannelValueInfo>::deallocate(v3, *(_QWORD **)(a2 + 96), *(_QWORD *)(a2 + 104));
  throw;
}
