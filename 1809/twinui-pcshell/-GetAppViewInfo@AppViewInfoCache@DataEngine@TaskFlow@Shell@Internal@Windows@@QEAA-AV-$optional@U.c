/*
 * XREFs of ?GetAppViewInfo@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA?AV?$optional@UAppViewInfo@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAUIApplicationView@@@Z @ 0x18008E724
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008E870 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x18008E57C (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 */

_BYTE *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::GetAppViewInfo(
        __int64 **a1,
        _BYTE *a2,
        unsigned __int64 a3)
{
  __int64 **v4; // r10
  __int128 v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 *v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    a1,
    &v8,
    &v9);
  if ( v8 == *v4 )
  {
    memset_0(a2, 0, 0x20uLL);
    *a2 = 0;
    a2[24] = 0;
  }
  else
  {
    LODWORD(v6) = *((_DWORD *)v8 + 10);
    *((_QWORD *)&v6 + 1) = v8 + 6;
    LODWORD(v7) = *((_DWORD *)v8 + 20);
    *(_OWORD *)a2 = v6;
    a2[24] = 1;
    *((_QWORD *)a2 + 2) = v7;
  }
  return a2;
}
