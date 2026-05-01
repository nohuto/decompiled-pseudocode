/*
 * XREFs of _std::_Tree_comp_alloc_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Buynode0_::_1_::catch$10 @ 0x1800AE1FB
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@_K@Z @ 0x1800AE5EC (-deallocate@-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@QEAAXQ.c)
 */

void __fastcall __noreturn std::_Tree_comp_alloc_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::_Buynode0_::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>::deallocate(a1, *(_QWORD *)(a2 + 64));
  throw;
}
