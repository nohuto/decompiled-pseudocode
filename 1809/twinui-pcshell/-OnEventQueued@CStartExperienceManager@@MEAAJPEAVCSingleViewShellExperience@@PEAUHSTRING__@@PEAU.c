/*
 * XREFs of ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000C540
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x18000ECB8 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x180021DE8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180025DAC (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002785C (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006EDDC (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x18007FFC8 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA @ 0x18009DF9C (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BJI@AA.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___ @ 0x18014FEBC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18014FEBC.c)
 *     ??$GetValue@_J@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEA_J@Z1@Z @ 0x180169180 (--$GetValue@_J@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x18016AF50 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 *     ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x18016B2D8 (-UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CStartExperienceManager::OnEventQueued(
        HSTRING *this,
        ExperienceManagerUtils **a2,
        struct Windows::Foundation::IPropertyValue *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int PropVal; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  int v17; // edi
  __int64 v18; // rdx
  CStartExperienceManager *v19; // rcx
  HANDLE v20; // rbx
  unsigned __int64 v21; // rax
  void *v22; // rcx
  __int64 v23; // rbx
  HSTRING v24; // rdx
  int v25; // eax
  HSTRING v26; // r8
  struct Windows::Foundation::IPropertyValue *v27; // rcx
  __int64 v28; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v29; // rdx
  HWND v30; // rbx
  const WCHAR *v31; // rax
  const char *v32; // r9
  __int64 v33; // rdx
  const struct _TlgProvider_t *v34; // rdi
  const WCHAR *StringRawBuffer; // rax
  int v36; // eax
  UINT32 cData; // [rsp+20h] [rbp-59h]
  struct Windows::Foundation::IPropertyValue *v38; // [rsp+30h] [rbp-49h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-41h] BYREF
  HSTRING_HEADER string; // [rsp+50h] [rbp-29h] BYREF
  __int64 v41; // [rsp+68h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  hObject[1] = (HANDLE)-2LL;
  v38 = a3;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, &off_1803C1058);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(&v38, v7) )
  {
    PropVal = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
                this + 13,
                this - 11);
    if ( PropVal >= 0 )
      return 0LL;
    v14 = 449LL;
    goto LABEL_11;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, off_1803C1050);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(&v38, v8) )
  {
    v38 = 0LL;
    hObject[0] = 0LL;
    string.Reserved.Reserved1 = hObject;
    *(_QWORD *)&string.Reserved.Reserved2[8] = &v38;
    PropVal = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___(
                this + 10,
                &string);
    if ( PropVal >= 0 )
      return 0LL;
    v14 = 453LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)PropVal,
      cData);
    return (unsigned int)PropVal;
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, off_1803C1048);
  if ( !(unsigned __int8)Microsoft::WRL::Wrappers::operator==(&v38, v9) )
  {
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, off_1803C1040);
    if ( !(unsigned __int8)Microsoft::WRL::Wrappers::operator==(&v38, v10) )
    {
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, off_1803C1038);
      if ( !(unsigned __int8)Microsoft::WRL::Wrappers::operator==(&v38, v11) )
      {
        v41 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&string, L"InitializationComplete", 0x17u, 0x16u);
        if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(&v38, &string) )
        {
          CSingleViewShellExperience::LaunchCompleted((CSingleViewShellExperience *)(this + 27));
          SetExistingEvent(L"ShellStartReadyEvent");
          hObject[0] = 0LL;
          if ( InitOnceBeginInitialize(
                 &`SingleViewExperienceLogging::Instance'::`2'::wrapper,
                 0,
                 (PBOOL)&string,
                 hObject)
            && LODWORD(string.Reserved.Reserved1) )
          {
            hObject[0] = qword_18050F938;
            qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
            qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
            InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
          }
          v34 = (const struct _TlgProvider_t *)*((_QWORD *)hObject[0] + 1);
          if ( *(_DWORD *)v34 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)hObject[0] + 1), 0x200000000000uLL) )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(this[29], 0LL);
            TlgCreateWsz(&pDesc, StringRawBuffer);
            TlgWrite(v34, &unk_18044DABA, 0LL, 0LL, 3u, &pData);
          }
          if ( *((_BYTE *)this + 546) )
          {
            *((_BYTE *)this + 546) = 0;
            LOBYTE(v33) = 1;
            v36 = (*(__int64 (__fastcall **)(HSTRING, __int64))(*(_QWORD *)this[25] + 48LL))(this[25], v33);
            if ( v36 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1F8,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
                (const char *)(unsigned int)v36,
                cData);
          }
        }
        return 0LL;
      }
      PropVal = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
                  this + 16,
                  this - 11);
      if ( PropVal >= 0 )
        return 0LL;
      v14 = 491LL;
      goto LABEL_11;
    }
    hObject[0] = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(hObject);
    string.Reserved.Reserved1 = 0LL;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&pData, &off_180400128);
    WindowsDeleteString((HSTRING)string.Reserved.Reserved1);
    string.Reserved.Reserved1 = 0LL;
    v24 = *(HSTRING *)(v23 + 24);
    string.Reserved.Reserved1 = 0LL;
    v38 = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)hObject,
                v24,
                &v38);
    if ( PropVal >= 0 )
    {
      v25 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{152,{flat}}(v38, &string);
      PropVal = v25;
      if ( v25 >= 0 )
      {
        v27 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v27 + 16LL))(v27);
        }
        PropVal = 0;
        goto LABEL_37;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v25,
        cData);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
LABEL_37:
    if ( PropVal < 0 )
    {
      v28 = 481LL;
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)PropVal,
        cData);
      goto LABEL_13;
    }
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         (Microsoft::WRL::Wrappers::Details *)string.Reserved.Reserved1,
                         0LL,
                         v26) )
    {
      v30 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v29);
      if ( !v30 )
      {
        PropVal = -2147023728;
        v28 = 485LL;
        goto LABEL_42;
      }
      v31 = WindowsGetStringRawBuffer((HSTRING)string.Reserved.Reserved1, 0LL);
      if ( !SetWindowTextW(v30, v31) )
      {
        PropVal = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1E6,
                    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
                    v32);
LABEL_13:
        WindowsDeleteString((HSTRING)string.Reserved.Reserved1);
        string.Reserved.Reserved1 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(hObject);
        return (unsigned int)PropVal;
      }
    }
    WindowsDeleteString((HSTRING)string.Reserved.Reserved1);
    string.Reserved.Reserved1 = 0LL;
    v22 = hObject;
LABEL_45:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
    return 0LL;
  }
  v38 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v38);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&string, &off_180400120);
  v16 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<__int64>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v38,
          *(HSTRING *)(v15 + 24));
  v17 = v16;
  if ( v16 >= 0 )
  {
    v19 = (CStartExperienceManager *)(this - 11);
    v20 = hObject[0];
    if ( hObject[0] )
    {
      string.Reserved.Reserved1 = hObject[0];
      v17 = CStartExperienceManager::SetBackgroundImage(v19, hObject[0]);
      v21 = (unsigned __int64)v20 - 1;
      if ( v17 < 0 )
      {
        if ( v21 <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v20);
        goto LABEL_29;
      }
      if ( v21 <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v20);
    }
    else
    {
      v16 = CStartExperienceManager::UnsetBackgroundImage(v19);
      v17 = v16;
      if ( v16 < 0 )
      {
        v18 = 474LL;
        goto LABEL_28;
      }
    }
    v22 = &v38;
    goto LABEL_45;
  }
  v18 = 462LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v16,
    cData);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
  return (unsigned int)v17;
}
