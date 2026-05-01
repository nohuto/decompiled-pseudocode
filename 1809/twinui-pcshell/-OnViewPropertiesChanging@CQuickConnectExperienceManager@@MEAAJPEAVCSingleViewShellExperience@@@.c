/*
 * XREFs of ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180173A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18002688C (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800648B8 (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800648F8 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180132BB0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x180165F60 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180171160 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_180171160.c)
 *     ??1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ @ 0x1801715DC (--1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180171B5C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x180172720 (-ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnV.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1801727A4 (-ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChang.c)
 *     ?StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x180174D0C (-StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017505C (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801766EC (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CQuickConnectExperienceManager::OnViewPropertiesChanging(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int Boolean; // eax
  __int64 v8; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int updated; // eax
  __int64 v15; // rdx
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v17; // rax
  const WCHAR *v18; // rax
  unsigned __int8 v20[8]; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  struct IInspectable *v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  void *v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h]
  HSTRING v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h]
  HSTRING v28; // [rsp+78h] [rbp-90h] BYREF
  int v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+88h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h]
  _QWORD v33[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v30 = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"ExperienceManager_OnViewPropertiesChanging");
  v33[0] = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v33);
  v23 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v28 = 0LL;
    v29 = 0;
    v6 = v23;
    string = (HSTRING)&v28;
    v22 = 0LL;
    v32 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsQuickConnectViewServiceReady",
      0x1Fu,
      0x1Eu);
    (*(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v6 + 48LL))(v6, v32, &v22);
    v32 = 0LL;
    RoVariant::Attach((RoVariant *)&v28, v22);
    if ( v28 )
    {
      v20[0] = 0;
      string = v28;
      LODWORD(v22) = v29;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&string, v20);
      v5 = Boolean;
      if ( Boolean < 0 )
      {
        v8 = 692LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Boolean);
LABEL_30:
        RoVariant::~RoVariant((RoVariant *)&v28);
        goto LABEL_31;
      }
      if ( v20[0] )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v33);
        v10 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v9);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 32);
        Boolean = CoreQueryWindowService(
                    v10,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    (char *)this + 256);
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v8 = 705LL;
          goto LABEL_11;
        }
        Boolean = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 48));
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v8 = 708LL;
          goto LABEL_11;
        }
      }
    }
    v26 = 0LL;
    LODWORD(v27) = 0;
    v11 = v23;
    string = (HSTRING)&v26;
    v22 = 0LL;
    v32 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Title", 6u, 5u);
    (*(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v11 + 48LL))(v11, v32, &v22);
    v32 = 0LL;
    RoVariant::Attach((RoVariant *)string, v22);
    if ( v26 )
    {
      WindowsDeleteString(*((HSTRING *)this + 39));
      *((_QWORD *)this + 39) = 0LL;
      string = v26;
      LODWORD(v22) = v27;
      v12 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&string, (HSTRING *)this + 39);
      v5 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CD,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_29:
        RoVariant::~RoVariant((RoVariant *)&v26);
        goto LABEL_30;
      }
    }
    v24 = 0LL;
    LODWORD(v25) = 0;
    v13 = v23;
    string = (HSTRING)&v24;
    v22 = 0LL;
    v32 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"EventType", 0xAu, 9u);
    (*(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v13 + 48LL))(v13, v32, &v22);
    v32 = 0LL;
    RoVariant::Attach((RoVariant *)string, v22);
    if ( v24 )
    {
      string = 0LL;
      WindowsDeleteString(0LL);
      string = 0LL;
      hstringHeader.Reserved.Reserved1 = v24;
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v25;
      updated = RoVariant::Accessor::GetString((RoVariant::Accessor *)&hstringHeader, &string);
      v5 = updated;
      if ( updated < 0 )
      {
        v15 = 728LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
        WindowsDeleteString(string);
LABEL_28:
        RoVariant::~RoVariant((RoVariant *)&v24);
        goto LABEL_29;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"WindowResize", -1, 0) == 2 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_WindowResize((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v33);
        updated = CQuickConnectExperienceManager::UpdateWindowPosition(
                    (CQuickConnectExperienceManager *)((char *)this - 48),
                    a2);
        v5 = updated;
        if ( updated < 0 )
        {
          v15 = 733LL;
          goto LABEL_21;
        }
      }
      else
      {
        v17 = WindowsGetStringRawBuffer(string, 0LL);
        if ( CompareStringOrdinal(v17, -1, L"DisableReturnFocus", -1, 0) == 2 )
        {
          *((_BYTE *)this + 352) = 1;
        }
        else
        {
          v18 = WindowsGetStringRawBuffer(string, 0LL);
          if ( CompareStringOrdinal(v18, -1, L"EnableReturnFocus", -1, 0) == 2 )
            *((_BYTE *)this + 352) = 0;
        }
      }
      WindowsDeleteString(string);
    }
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v33);
    v5 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AA,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::~ExperienceManager_OnViewPropertiesChanging((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v33);
  return v5;
}
