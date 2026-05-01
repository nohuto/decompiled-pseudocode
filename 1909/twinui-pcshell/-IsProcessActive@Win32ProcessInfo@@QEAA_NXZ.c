/*
 * XREFs of ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x1800BB348
 * Callers:
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x1800BB9F8 (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@UITreeNode@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B64B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$com_ptr_t.c)
 */

char __fastcall Win32ProcessInfo::IsProcessActive(__int64 **this)
{
  __int64 *v1; // r9
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v2 = **this;
  v4 = v2;
  while ( (__int64 *)v2 != v1 )
  {
    if ( **(_DWORD **)(v2 + 40) != 1 )
      return 1;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,wil::com_ptr_t<Windows::Internal::ComposableShell::ITreeNode,wil::err_exception_policy>>>>,std::_Iterator_base0>::operator++(&v4);
    v2 = v4;
  }
  return 0;
}
