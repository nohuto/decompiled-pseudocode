/*
 * XREFs of ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18030FA24
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x18005AAA0 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z @ 0x180314498 (-ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180320B54 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180322D74 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18000F66C (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180087CC6 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B0F57 (memcpy_0.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180406D20 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180407FA4 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void **__fastcall TouchKeyboardExperienceManager::GetForegroundAppId(__int64 a1, void **a2)
{
  void **v2; // rdi
  __int64 v3; // rcx
  const WCHAR *v4; // rax
  size_t v5; // rsi
  size_t v6; // r14
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  HWND ForegroundWindow; // rax
  const char *v12; // r9
  CallerIdentity *v13; // rsi
  char *v14; // rbx
  unsigned __int16 **v15; // r8
  unsigned __int16 **v16; // r8
  WCHAR *v17; // rcx
  char *FileNameW; // rax
  void *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 dwProcessId; // [rsp+70h] [rbp+8h] BYREF
  void **v23; // [rsp+78h] [rbp+10h]
  LPCWSTR pszPath; // [rsp+80h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+20h] BYREF

  v23 = a2;
  dwProcessId = a1;
  v2 = a2;
  v3 = 0x7FFFFFFFLL;
  v4 = &String2;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  v5 = 2 * (v4 - &String2);
  v6 = v5 + 2;
  v7 = (char *)CoTaskMemAlloc(v5 + 2);
  v8 = v7;
  if ( v7 )
  {
    if ( v5 )
    {
      if ( v6 < v5 )
      {
        memset_0(v7, 0, v6);
        *(_DWORD *)_o__errno(v10, v9) = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v7, &String2, v5);
      }
    }
    *(_WORD *)&v8[v5] = 0;
  }
  *v2 = v8;
  ForegroundWindow = GetForegroundWindow();
  try
  {
    v13 = (CallerIdentity *)ForegroundWindow;
    if ( !ForegroundWindow )
      return v2;
    LODWORD(dwProcessId) = 0;
    GetWindowThreadProcessId(ForegroundWindow, (LPDWORD)&dwProcessId);
    v14 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
    pv = v14;
    if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_25;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v2,
      0LL);
    if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(v13, (HWND)v2, v15) >= 0 )
      goto LABEL_25;
    pszPath = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&pszPath,
      0LL);
    if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v14, &pszPath, v16) >= 0 )
    {
      v17 = (WCHAR *)pszPath;
      if ( !pszPath )
        goto LABEL_23;
      FileNameW = (char *)PathFindFileNameW(pszPath);
      if ( FileNameW )
      {
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &pv,
          FileNameW,
          0xFFFFFFFFFFFFFFFFuLL,
          v12);
        if ( v2 == &pv )
        {
          v19 = pv;
        }
        else
        {
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            v2,
            pv);
          v19 = 0LL;
        }
        if ( v19 )
          CoTaskMemFree(v19);
      }
    }
    v17 = (WCHAR *)pszPath;
LABEL_23:
    if ( v17 )
      CoTaskMemFree(v17);
LABEL_25:
    if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v14);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB23,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v12);
    return v23;
  }
  return v2;
}
