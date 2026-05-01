/*
 * XREFs of ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180198420
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18003C2A8 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180049AA8 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x18004D998 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180082A08 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x1800B3F20 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9d75cb42004a5c80c8af25a46cf0553c___ @ 0x18017C0A4 (Microsoft--WRL--EventSource_Windows--Foundation--IEventHandler_IInspectable____Microsoft--WRL--I.c)
 *     ??$GetValue@_J@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEA_J@Z1@Z @ 0x180195D04 (--$GetValue@_J@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180199938 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 *     ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x180199CC8 (-UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CStartExperienceManager::OnEventQueued(
        HSTRING *this,
        ExperienceManagerUtils **a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v8; // rax
  HSTRING v9; // r8
  int PropVal; // ebx
  __int64 v11; // rdx
  HSTRING_HEADER *v13; // rax
  HSTRING v14; // r8
  HSTRING_HEADER *v15; // rax
  HSTRING v16; // r8
  HSTRING_HEADER *v17; // rax
  __int64 v18; // r8
  int v19; // eax
  int v20; // esi
  __int64 v21; // rdx
  HANDLE v22; // rbx
  unsigned __int64 v23; // rax
  __int64 *v24; // rcx
  HSTRING_HEADER *v25; // rax
  HSTRING v26; // r8
  HSTRING_HEADER *v27; // rbx
  HSTRING Reserved1; // rdx
  HSTRING v29; // r8
  int v30; // eax
  struct Windows::Foundation::IPropertyValue *v31; // rcx
  __int64 v32; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v33; // rdx
  HWND v34; // rbx
  const WCHAR *v35; // rax
  const char *v36; // r9
  HSTRING_HEADER *v37; // rax
  HSTRING v38; // r8
  HSTRING v39; // r8
  __int64 v40; // rdx
  const struct _TlgProvider_t *v41; // rbx
  const WCHAR *StringRawBuffer; // rax
  int v43; // eax
  struct Windows::Foundation::IPropertyValue *v44; // [rsp+38h] [rbp-49h] BYREF
  HANDLE hObject[3]; // [rsp+40h] [rbp-41h] BYREF
  HSTRING_HEADER string; // [rsp+58h] [rbp-29h] BYREF
  HSTRING v47; // [rsp+70h] [rbp-11h]
  HSTRING_HEADER pData; // [rsp+78h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  hObject[1] = (HANDLE)-2LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, (const WCHAR **)off_180467970);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, (HSTRING)v8[1].Reserved.Reserved1, v9) )
  {
    PropVal = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
                (__int64)(this + 13),
                (__int64)(this - 11));
    if ( PropVal < 0 )
    {
      v11 = 506LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)PropVal);
      return (unsigned int)PropVal;
    }
    return 0LL;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, (const WCHAR **)off_180467958);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a3,
                        (HSTRING)v13[1].Reserved.Reserved1,
                        v14) )
  {
    v44 = 0LL;
    hObject[0] = 0LL;
    string.Reserved.Reserved1 = hObject;
    *(_QWORD *)&string.Reserved.Reserved2[8] = &v44;
    PropVal = Microsoft::WRL::EventSource_Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_9d75cb42004a5c80c8af25a46cf0553c___(
                (__int64)(this + 10),
                (__int128 *)&string);
    if ( PropVal < 0 )
    {
      v11 = 510LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, (const WCHAR **)off_180467960);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                        a3,
                        (HSTRING)v15[1].Reserved.Reserved1,
                        v16) )
  {
    v44 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v44);
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, (const WCHAR **)off_180467938);
    v19 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<__int64>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v44,
            (HSTRING)v17[1].Reserved.Reserved1,
            v18,
            hObject);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = 519LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
      return (unsigned int)v20;
    }
    v22 = hObject[0];
    if ( hObject[0] )
    {
      string.Reserved.Reserved1 = hObject[0];
      v20 = CStartExperienceManager::SetBackgroundImage((CStartExperienceManager *)(this - 11), hObject[0]);
      v23 = (unsigned __int64)v22 - 1;
      if ( v20 < 0 )
      {
        if ( v23 <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v22);
        goto LABEL_22;
      }
      if ( v23 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v22);
    }
    else
    {
      v19 = CStartExperienceManager::UnsetBackgroundImage((CStartExperienceManager *)(this - 11));
      v20 = v19;
      if ( v19 < 0 )
      {
        v21 = 531LL;
        goto LABEL_21;
      }
    }
    v24 = (__int64 *)&v44;
    goto LABEL_41;
  }
  v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, (const WCHAR **)off_180467978);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       a3,
                       (HSTRING)v25[1].Reserved.Reserved1,
                       v26) )
  {
    v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_180467940);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a3,
                         (HSTRING)v37[1].Reserved.Reserved1,
                         v38) )
    {
      v47 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&string, L"InitializationComplete", 0x17u, 0x16u);
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, v47, v39) )
      {
        CSingleViewShellExperience::LaunchCompleted(this + 28);
        SetExistingEvent(L"ShellStartReadyEvent");
        hObject[0] = 0LL;
        if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&string, hObject)
          && LODWORD(string.Reserved.Reserved1) )
        {
          hObject[0] = qword_180599CD0;
          qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
          qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
          InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
        }
        v41 = (const struct _TlgProvider_t *)*((_QWORD *)hObject[0] + 1);
        if ( *(_DWORD *)v41 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)hObject[0] + 1), 0x200000000000uLL) )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(this[30], 0LL);
          TlgCreateWsz(&pDesc, StringRawBuffer);
          TlgWrite(v41, &unk_1804BDD81, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
        }
        if ( *((_BYTE *)this + 554) )
        {
          *((_BYTE *)this + 554) = 0;
          LOBYTE(v40) = 1;
          v43 = (*(__int64 (__fastcall **)(HSTRING, __int64))(*(_QWORD *)this[25] + 48LL))(this[25], v40);
          if ( v43 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x231,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
              (const char *)(unsigned int)v43);
        }
      }
    }
    else
    {
      PropVal = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
                  (__int64)(this + 16),
                  (__int64)(this - 11));
      if ( PropVal < 0 )
      {
        v11 = 548LL;
        goto LABEL_4;
      }
    }
    return 0LL;
  }
  hObject[0] = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)hObject);
  string.Reserved.Reserved1 = 0LL;
  v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, (const WCHAR **)off_180467980);
  WindowsDeleteString((HSTRING)string.Reserved.Reserved1);
  string.Reserved.Reserved1 = 0LL;
  Reserved1 = (HSTRING)v27[1].Reserved.Reserved1;
  string.Reserved.Reserved1 = 0LL;
  v44 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)hObject,
              Reserved1,
              &v44);
  if ( PropVal < 0 )
    goto LABEL_25;
  v30 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}((__int64)v44);
  PropVal = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v30);
LABEL_25:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
    goto LABEL_31;
  }
  v31 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  PropVal = 0;
LABEL_31:
  if ( PropVal < 0 )
  {
    v32 = 538LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)PropVal);
LABEL_39:
    WindowsDeleteString((HSTRING)string.Reserved.Reserved1);
    string.Reserved.Reserved1 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)hObject);
    return (unsigned int)PropVal;
  }
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       (Microsoft::WRL::Wrappers::Details *)string.Reserved.Reserved1,
                       0LL,
                       v29) )
  {
    v34 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v33);
    if ( !v34 )
    {
      PropVal = -2147023728;
      v32 = 542LL;
      goto LABEL_36;
    }
    v35 = WindowsGetStringRawBuffer((HSTRING)string.Reserved.Reserved1, 0LL);
    if ( !SetWindowTextW(v34, v35) )
    {
      PropVal = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x21F,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
                  v36);
      goto LABEL_39;
    }
  }
  WindowsDeleteString((HSTRING)string.Reserved.Reserved1);
  string.Reserved.Reserved1 = 0LL;
  v24 = (__int64 *)hObject;
LABEL_41:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
  return 0LL;
}
