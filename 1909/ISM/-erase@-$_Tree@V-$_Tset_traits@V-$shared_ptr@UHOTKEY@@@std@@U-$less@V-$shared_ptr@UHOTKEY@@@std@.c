/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@2@V32@0@Z @ 0x1801478F4
 * Callers:
 *     ??1?$set@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@@std@@QEAA@XZ @ 0x180145ADC (--1-$set@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@UHOTKEY@@@std@@@2@V-$allocator@V-$sh.c)
 *     ??1HotKeyProcessor@@UEAA@XZ @ 0x180145B10 (--1HotKeyProcessor@@UEAA@XZ.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180025538 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?clear@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1801473FC (-clear@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@UHOTKEY@@@std@.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@2@V32@@Z @ 0x180147998 (-erase@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHOTKEY@@@std@@U-$less@V-$shared_ptr@U_ea_180147998.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *i; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = a3;
  if ( a3 == *(_QWORD **)*a1 && a4 == (_QWORD *)*a1 )
  {
    std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::clear(a1);
    *a2 = *(_QWORD *)*a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v8 = v5[2];
      v9 = v5;
      if ( *(_BYTE *)(v8 + 25) )
      {
        for ( i = (_QWORD *)v5[1]; !*((_BYTE *)i + 25) && v5 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v5 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v8);
      }
      v5 = i;
      std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::erase(
        a1,
        &v12,
        v9);
    }
    *a2 = v5;
  }
  return a2;
}
