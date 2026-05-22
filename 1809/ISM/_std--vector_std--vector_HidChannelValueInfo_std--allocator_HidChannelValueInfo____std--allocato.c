/*
 * XREFs of _std::vector_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo____std::allocator_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo_______::_Emplace_reallocate_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo______::_1_::catch$0 @ 0x180131C44
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z @ 0x180005544 (-deallocate@-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z.c)
 *     ?_Destroy@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@2@0@Z @ 0x18007C5D4 (-_Destroy@-$vector@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo____std::allocator_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo_______::_Emplace_reallocate_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<std::vector<HidChannelValueInfo>>::_Destroy(a1, *(_QWORD *)(a2 + 136), *(_QWORD *)(a2 + 40));
  std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(v3, *(_QWORD **)(a2 + 128), *(_QWORD *)(a2 + 152));
  throw;
}
