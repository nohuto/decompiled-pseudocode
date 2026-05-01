/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1801F115C
 * Callers:
 *     ??1?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x1801D5440 (--1-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUR.c)
 *     ?RecoverTabGroupsFromWindowGroups@TabViewManager@@AEAAXXZ @ 0x1801E386C (-RecoverTabGroupsFromWindowGroups@TabViewManager@@AEAAXXZ.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x1802C0E28 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x18008F75C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@Z @ 0x1801F01A8 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWN.c)
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@2@@Z @ 0x1801F0344 (-_Extract@-$_Tree@V-$_Tmap_traits@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@$0A.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  char *v10; // rdx
  char v11; // r9
  __int64 v12; // rcx
  _QWORD *i; // rax
  __int64 v14; // rax
  __int64 j; // rcx
  __int64 *v16; // rax

  v5 = a3;
  v8 = *a1;
  if ( a3 == *(_QWORD **)*a1 && a4 == (_QWORD *)v8 )
  {
    std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Erase(
      (__int64)a1,
      *(void **)(v8 + 8));
    *(_QWORD *)(*a1 + 8LL) = *a1;
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
    a1[1] = 0LL;
    *a2 = *(_QWORD *)*a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v9 = (__int64)v5;
      v10 = (char *)v5 + 25;
      v11 = *((_BYTE *)v5 + 25);
      if ( !v11 )
      {
        v12 = v5[2];
        if ( *(_BYTE *)(v12 + 25) )
        {
          for ( i = (_QWORD *)v5[1]; !*((_BYTE *)i + 25) && v5 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
            v5 = i;
          v11 = *v10;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v12);
        }
        v5 = i;
      }
      v14 = v9;
      if ( !v11 && *(_BYTE *)(*(_QWORD *)(v9 + 16) + 25LL) )
      {
        for ( j = *(_QWORD *)(v9 + 8); !*(_BYTE *)(j + 25) && v14 == *(_QWORD *)(j + 16); j = *(_QWORD *)(j + 8) )
          v14 = j;
      }
      v16 = std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Extract(
              a1,
              v9);
      std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)0x30);
    }
    *a2 = v5;
  }
  return a2;
}
