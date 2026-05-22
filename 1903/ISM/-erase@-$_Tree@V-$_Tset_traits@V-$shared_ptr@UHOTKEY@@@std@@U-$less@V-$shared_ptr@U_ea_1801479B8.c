/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@2@V32@@Z @ 0x1801479B8
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z @ 0x180145CDC (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@2@V32@0@Z @ 0x180147914 (-erase@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@UHOTKEY@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180025A18 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180086D00 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VCustomCursorApplication@.c)
 */

__int64 **__fastcall std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::erase(
        _QWORD *a1,
        __int64 **a2,
        __int64 *a3)
{
  _QWORD *v3; // r9
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 *i; // rbx
  __int64 *v8; // rdi
  std::_Ref_count_base *v9; // rcx

  v3 = a1;
  v5 = a3[2];
  v6 = a3;
  if ( *(_BYTE *)(v5 + 25) )
  {
    for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      v6 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v5);
  }
  v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>>::_Extract(
         v3,
         a3);
  v9 = (std::_Ref_count_base *)v8[5];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x30);
  *a2 = i;
  return a2;
}
