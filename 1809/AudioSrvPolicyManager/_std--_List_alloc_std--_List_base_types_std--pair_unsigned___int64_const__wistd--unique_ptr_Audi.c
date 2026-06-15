/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor___________::_Buynode0_::_1_::catch$0 @ 0x1800392C8
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@2@_K@Z @ 0x18001A350 (-deallocate@-$allocator@U-$_List_node@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$default.c)
 *     _CxxThrowException_0 @ 0x180038057 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor___________::_Buynode0_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
