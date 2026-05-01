/*
 * XREFs of ?TrySetApplicationWindow@WindowPropertyChangedListener@@QEAA_NPEAUHWND__@@@Z @ 0x180253864
 * Callers:
 *     ?SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180253370 (-SetupAppSpecifiedIconsForView@DefaultIconManager@@UEAAJPEAUIApplicationView@@PEAUIShellTab@Tabs.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x180109E04 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ @ 0x1802538E0 (-TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ.c)
 */

char __fastcall WindowPropertyChangedListener::TrySetApplicationWindow(char *pv, HWND a2)
{
  struct _TP_WAIT **v2; // rdi
  struct _TP_WAIT *ThreadpoolWait; // rax

  v2 = (struct _TP_WAIT **)(pv + 80);
  if ( a2 != *((HWND *)pv + 8) )
  {
    *((_QWORD *)pv + 8) = a2;
    wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
      (struct _TP_WAIT **)pv + 10,
      0LL);
  }
  if ( !WindowPropertyChangedListener::TrySubscribePropertiesChangedEvent((WindowPropertyChangedListener *)pv) )
    return 0;
  ThreadpoolWait = CreateThreadpoolWait(
                     (PTP_WAIT_CALLBACK)lambda_5685b7785c3a9eb18aecd9c477002c42_::_lambda_invoker_cdecl_,
                     pv,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
    v2,
    ThreadpoolWait);
  if ( !*v2 )
    return 0;
  SetThreadpoolWait(*v2, *((HANDLE *)pv + 9), 0LL);
  return 1;
}
