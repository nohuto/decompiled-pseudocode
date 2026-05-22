/*
 * XREFs of ?clear@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1801473FC
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z @ 0x180145D1C (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@2@V32@0@Z @ 0x1801478F4 (-erase@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@UHOTKEY@@@std@.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$shared_ptr@UHOTKEY@@@std@@PEAX@2@@Z @ 0x180147344 (-_Erase@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@UHOTKEY@@@std.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::clear(
        _QWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::_Erase(
    (__int64)a1,
    *(_QWORD **)(*a1 + 8LL));
  *(_QWORD *)(*a1 + 8LL) = v2;
  *(_QWORD *)*a1 = v2;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = v2;
  a1[1] = 0LL;
  return result;
}
