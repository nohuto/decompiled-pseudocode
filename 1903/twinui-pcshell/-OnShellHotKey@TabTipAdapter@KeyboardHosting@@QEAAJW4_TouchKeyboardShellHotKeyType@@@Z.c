/*
 * XREFs of ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180322D74
 * Callers:
 *     ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1803122F0 (-OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803144F0 (-ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F654 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$ShellHotKeyRequestReceived@IPEAGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEAGAEA_N0@Z @ 0x18009E624 (--$ShellHotKeyRequestReceived@IPEAGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18030FA24 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@QEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18030FD9C (-GetInputAppState@TouchKeyboardExperienceManager@@QEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z @ 0x180314498 (-ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18032349C (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180324F2C (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey(__int64 a1, int a2)
{
  TouchKeyboardExperienceManager *v4; // rcx
  unsigned int v5; // esi
  int ShouldShowEmojiTipsOnHotKey; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  char v12; // [rsp+20h] [rbp-88h] BYREF
  bool v13; // [rsp+21h] [rbp-87h] BYREF
  int v14; // [rsp+28h] [rbp-80h] BYREF
  int InputAppState; // [rsp+30h] [rbp-78h] BYREF
  const WCHAR *v16; // [rsp+38h] [rbp-70h] BYREF
  const WCHAR *v17[2]; // [rsp+40h] [rbp-68h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-58h] BYREF
  HSTRING v19; // [rsp+68h] [rbp-40h]
  HSTRING_HEADER v20; // [rsp+70h] [rbp-38h] BYREF
  HSTRING v21; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v17[1] = (const WCHAR *)-2LL;
  v17[0] = (const WCHAR *)a1;
  v14 = a2;
  TouchKeyboardExperienceManager::GetForegroundAppId(a1, (void **)&v16);
  v12 = 0;
  v12 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 488LL);
  InputAppState = TouchKeyboardExperienceManager::GetInputAppState(*(_QWORD *)(a1 + 56));
  v17[0] = v16;
  v14 = a2;
  TouchKeyboardExperienceTelemetryLogger::ShellHotKeyRequestReceived<unsigned int,unsigned short *,bool &,unsigned int>(
    (__int64)&v14,
    v17,
    (__int64)&v12,
    (__int64)&InputAppState);
  v5 = 2;
  if ( a2 == 1 )
  {
    v13 = 0;
    ShouldShowEmojiTipsOnHotKey = TouchKeyboardExperienceManager::ShouldShowEmojiTipsOnHotKey(v4, &v13);
    if ( ShouldShowEmojiTipsOnHotKey < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5A6,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)ShouldShowEmojiTipsOnHotKey);
    if ( v13 )
    {
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"ShowEmojiPanelTips", 0x13u, 0x12u);
      v7 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v21, v19);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5A9,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v7);
    }
    else
    {
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"0", 2u, 1u);
      v19 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShowEmojiPanelTips", 0x13u, 0x12u);
      v8 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v19, v21);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5AD,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  else if ( a2 == 2 )
  {
    v5 = 4;
  }
  else
  {
    v5 = 3;
    if ( a2 != 3 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BA,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x80070057LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v16);
      return 2147942487LL;
    }
  }
  v9 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v5, 4LL, 1LL);
  v10 = v9;
  if ( v9 >= 0 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5BE,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v16);
    return v10;
  }
}
