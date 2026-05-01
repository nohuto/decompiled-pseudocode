/*
 * XREFs of ??$_Eqrange@PEAUIApplicationView@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@V12@@1@AEBQEAUIApplicationView@@@Z @ 0x1801D1BA8
 * Callers:
 *     ?GetTabsForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEAV?$vector@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1801DD6D0 (-GetTabsForView@TabViewManager@@UEAAJPEAUIApplicationView@@AEAV-$vector@V-$com_ptr_t@UIShellTab@.c)
 *     ?OnTabbedWindowMisbehaving@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1801E1880 (-OnTabbedWindowMisbehaving@TabViewManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?RemoveTabAndViewFromMaps@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801E3F2C (-RemoveTabAndViewFromMaps@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windo.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801ED994 (-TryGetLastSelectedTabForView@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell.c)
 *     ?TryGetSelectedTabForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x1801EDB60 (-TryGetSelectedTabForView@TabViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801EE0F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@QEBA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801F1114 (-count@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$00@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801F1508 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_polic_ea_1801F1508.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>,1>>::_Eqrange<IApplicationView *>(
        __int64 *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // r10
  __int64 *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // rcx
  unsigned __int64 v7; // r11
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a3;
    do
    {
      if ( v6[4] >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < v6[4] )
          v4 = v6;
        v3 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *a3 >= v5[4] )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
