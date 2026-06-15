/*
 * XREFs of ?deallocate@?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@2@_K@Z @ 0x180017270
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor___________::_Buynode0_::_1_::catch$0 @ 0x180036D2E (_std--_List_alloc_std--_List_base_types_std--pair_unsigned___int64_const__wistd--unique_ptr_Audi.c)
 *     _std::_List_buy_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor______std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor_________::_Buynode_unsigned___int64_&_AudioStateMonitor____::_1_::catch$1 @ 0x180037850 (_std--_List_buy_std--pair_unsigned___int64_const__wistd--unique_ptr_AudioStateMonitor_wistd--def.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)0x20);
}
