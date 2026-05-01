/*
 * XREFs of ?OnMessage@TabShellHotKeyHandler@@UEAAJI_K_J@Z @ 0x18027A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18003B698 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802618E8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ??$?4V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@1@$0A@@?$tuple@AEAV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@QEAAAEAV01@$$QEAU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@1@@Z @ 0x180279BD0 (--$-4V-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@w.c)
 *     ??$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@AEAU_GUID@@@TabViewManagerMeasures@@SAX$$QEAI$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@AEAU_GUID@@@Z @ 0x180279C48 (--$HotKeyHandlerMessageReceived@IPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUI.c)
 *     ?OnCloseActiveTab@TabShellHotKeyHandler@@AEAAJXZ @ 0x18027A470 (-OnCloseActiveTab@TabShellHotKeyHandler@@AEAAJXZ.c)
 *     ?OnDuplicateFocusedTab@TabShellHotKeyHandler@@AEAAJXZ @ 0x18027A580 (-OnDuplicateFocusedTab@TabShellHotKeyHandler@@AEAAJXZ.c)
 *     ?OnSelectRelativeTab@TabShellHotKeyHandler@@AEAAJW4RelativeTabPosition@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027AA78 (-OnSelectRelativeTab@TabShellHotKeyHandler@@AEAAJW4RelativeTabPosition@Tabs@ComposableShell@Inte.c)
 *     ?OnSelectTabByIndex@TabShellHotKeyHandler@@AEAAJI@Z @ 0x18027ABEC (-OnSelectTabByIndex@TabShellHotKeyHandler@@AEAAJI@Z.c)
 *     ?OnToggleTabbedBandFocus@TabShellHotKeyHandler@@AEAAJXZ @ 0x18027AD60 (-OnToggleTabbedBandFocus@TabShellHotKeyHandler@@AEAAJXZ.c)
 *     ?OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z @ 0x18027ADB4 (-OnTryCreateNewTab@TabShellHotKeyHandler@@AEAAJU_GUID@@@Z.c)
 *     ?TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA?AU?$pair@V?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@XZ @ 0x18027B3B4 (-TryGetGroupAndTabInFocus@TabShellHotKeyHandler@@AEAA-AU-$pair@V-$com_ptr_t@UIShellTabGroup@Tabs.c)
 */

__int64 __fastcall TabShellHotKeyHandler::OnMessage(TabShellHotKeyHandler *this, __int64 a2, int a3)
{
  TabShellHotKeyHandler *v5; // rbx
  __int64 *GroupAndTabInFocus; // rax
  int active; // eax
  __int64 v8; // rdx
  int v10; // [rsp+28h] [rbp-69h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v11; // [rsp+30h] [rbp-61h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-59h] BYREF
  struct _GUID v13; // [rsp+48h] [rbp-49h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v14; // [rsp+58h] [rbp-39h] BYREF
  __int64 v15[3]; // [rsp+60h] [rbp-31h] BYREF
  LPVOID v16[4]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v17[24]; // [rsp+98h] [rbp+7h] BYREF
  int v18; // [rsp+B0h] [rbp+1Fh]
  GUID pguid; // [rsp+C8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v15[1] = -2LL;
  TabViewManagerTraceLogging::WatchCurrentThread((wil::ActivityThreadWatcher *)v16, "TabShellHotKeyHandler_OnMessage");
  v12[0] = 0LL;
  v11 = 0LL;
  v5 = (TabShellHotKeyHandler *)((char *)this - 8);
  GroupAndTabInFocus = (__int64 *)TabShellHotKeyHandler::TryGetGroupAndTabInFocus(v5);
  *(_QWORD *)&v13.Data1 = v12;
  *(_QWORD *)v13.Data4 = &v11;
  std::tuple<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy> &,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> &>::operator=<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabGroup,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>,0>(
    (__int64 **)&v13,
    GroupAndTabInFocus);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v15);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v14);
  CoCreateGuid(&pguid);
  switch ( a3 )
  {
    case 'U':
      *(_QWORD *)&v13.Data1 = v12[0];
      v14 = v11;
      v10 = 85;
      TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
        (unsigned int *)&v10,
        &v14,
        (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)&v13,
        &pguid);
      active = TabShellHotKeyHandler::OnSelectRelativeTab(v5, 1LL);
      if ( active >= 0 )
        goto LABEL_27;
      v8 = 104LL;
      goto LABEL_26;
    case 'V':
      *(_QWORD *)&v13.Data1 = v12[0];
      v14 = v11;
      v10 = 86;
      TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
        (unsigned int *)&v10,
        &v14,
        (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)&v13,
        &pguid);
      active = TabShellHotKeyHandler::OnSelectRelativeTab(v5, 2LL);
      if ( active >= 0 )
        goto LABEL_27;
      v8 = 108LL;
      goto LABEL_26;
    case 'W':
      *(_QWORD *)&v13.Data1 = v12[0];
      v14 = v11;
      v10 = 87;
      TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
        (unsigned int *)&v10,
        &v14,
        (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)&v13,
        &pguid);
      v13 = pguid;
      active = TabShellHotKeyHandler::OnTryCreateNewTab(v5, &v13);
      if ( active >= 0 )
        goto LABEL_27;
      v8 = 112LL;
      goto LABEL_26;
    case 'X':
      *(_QWORD *)&v13.Data1 = v12[0];
      v14 = v11;
      v10 = 88;
      TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
        (unsigned int *)&v10,
        &v14,
        (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)&v13,
        &pguid);
      active = TabShellHotKeyHandler::OnCloseActiveTab(v5);
      if ( active >= 0 )
        goto LABEL_27;
      v8 = 116LL;
      goto LABEL_26;
  }
  if ( a3 <= 88 )
    goto LABEL_27;
  if ( a3 <= 96 )
  {
    *(_QWORD *)&v13.Data1 = v12[0];
    v14 = v11;
    v10 = a3;
    TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
      (unsigned int *)&v10,
      &v14,
      (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)&v13,
      &pguid);
    active = TabShellHotKeyHandler::OnSelectTabByIndex(v5, a3 - 89);
    if ( active >= 0 )
      goto LABEL_27;
    v8 = 129LL;
    goto LABEL_26;
  }
  switch ( a3 )
  {
    case 'a':
      *(_QWORD *)&v13.Data1 = v12[0];
      v14 = v11;
      v10 = 97;
      TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
        (unsigned int *)&v10,
        &v14,
        (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)&v13,
        &pguid);
      active = TabShellHotKeyHandler::OnSelectRelativeTab(v5, 4LL);
      if ( active >= 0 )
        break;
      v8 = 134LL;
      goto LABEL_26;
    case 'd':
      *(_QWORD *)&v13.Data1 = v12[0];
      v14 = v11;
      v10 = 100;
      TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
        (unsigned int *)&v10,
        &v14,
        (struct Windows::Internal::ComposableShell::Tabs::IShellTab **)&v13,
        &pguid);
      active = TabShellHotKeyHandler::OnToggleTabbedBandFocus(v5);
      if ( active >= 0 )
        break;
      v8 = 138LL;
      goto LABEL_26;
    case 'g':
      v14 = (struct Windows::Internal::ComposableShell::Tabs::IShellTab *)v12[0];
      *(_QWORD *)&v13.Data1 = v11;
      v10 = 103;
      TabViewManagerMeasures::HotKeyHandlerMessageReceived<unsigned int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *,_GUID &>(
        (unsigned int *)&v10,
        (struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **)&v13,
        &v14,
        &pguid);
      active = TabShellHotKeyHandler::OnDuplicateFocusedTab(v5);
      if ( active < 0 )
      {
        v8 = 142LL;
LABEL_26:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
          (const char *)(unsigned int)active);
      }
      break;
  }
LABEL_27:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12);
  if ( v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v17);
  wil::details::StoredCallContextInfo::~StoredCallContextInfo(v16);
  return 0LL;
}
