/*
 * XREFs of ?GetActiveViews@UwpAppPackageInfo@@QEAA?AV?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800B683C
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800B7680 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180069DE8 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800B59A8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall UwpAppPackageInfo::GetActiveViews(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // r8
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+48h] [rbp+10h]

  v8 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v3 = *(__int64 **)(a1 + 32);
  v4 = *v3;
  v7 = *v3;
  while ( (__int64 *)v4 != v3 )
  {
    v5 = (__int64 *)(v4 + 32);
    if ( **(_DWORD **)(v4 + 40) != 1 )
    {
      if ( a2[2] == a2[1] )
      {
        std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const &>(
          a2,
          a2[1],
          v5);
      }
      else
      {
        wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          (_QWORD *)a2[1],
          *v5);
        a2[1] += 8LL;
      }
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v7);
    v4 = v7;
  }
  return a2;
}
