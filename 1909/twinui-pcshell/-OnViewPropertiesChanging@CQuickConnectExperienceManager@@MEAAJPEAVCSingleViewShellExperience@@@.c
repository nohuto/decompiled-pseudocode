/*
 * XREFs of ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C1B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x1800229E4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800364A8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006DCF0 (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x18006DD30 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017B870 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x1801B1A50 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801BF1D0 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801BF1D0.c)
 *     ??1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ @ 0x1801BF64C (--1ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801BFBCC (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1801C0790 (-ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady@ExperienceManager_OnV.c)
 *     ?ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1801C0814 (-ExperienceManager_OnViewPropertiesChanging_WindowResize@ExperienceManager_OnViewPropertiesChang.c)
 *     ?StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1801C2E90 (-StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801C3270 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C4C74 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CQuickConnectExperienceManager::OnViewPropertiesChanging(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64, struct IInspectable **); // rdi
  int Boolean; // eax
  __int64 v9; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, __int64, struct IInspectable **); // rdi
  int v14; // eax
  __int64 v15; // rbx
  void (__fastcall *v16)(__int64, __int64, struct IInspectable **); // rdi
  int updated; // eax
  __int64 v18; // rdx
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v20; // rax
  const WCHAR *v21; // rax
  unsigned __int8 v23[8]; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  struct IInspectable *v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  void *v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h]
  HSTRING v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h]
  HSTRING v31; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+80h] [rbp-88h]
  __int64 v33; // [rsp+88h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-60h]
  _QWORD v36[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v33 = -2LL;
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v36,
    (__int64)"ExperienceManager_OnViewPropertiesChanging");
  v36[0] = &QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v36);
  v26 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v26);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v31 = 0LL;
    v32 = 0;
    v6 = v26;
    v7 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v26 + 48LL);
    string = (HSTRING)&v31;
    v25 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"IsQuickConnectViewServiceReady",
      0x1Fu,
      0x1Eu);
    v7(v6, v35, &v25);
    v35 = 0LL;
    RoVariant::Attach((RoVariant *)&v31, v25);
    if ( v31 )
    {
      v23[0] = 0;
      string = v31;
      LODWORD(v25) = v32;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&string, v23);
      v5 = Boolean;
      if ( Boolean < 0 )
      {
        v9 = 692LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)Boolean);
LABEL_30:
        RoVariant::~RoVariant((RoVariant *)&v31);
        goto LABEL_31;
      }
      if ( v23[0] )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_IsQuickConnectViewServiceReady((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v36);
        v11 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 32);
        Boolean = CoreQueryWindowService(
                    v11,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    &GUID_4aaaff25_9e49_4ab5_b2af_c798c01c536c,
                    (char *)this + 256);
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v9 = 705LL;
          goto LABEL_11;
        }
        Boolean = CQuickConnectExperienceManager::CheckAndPopulateContact((CQuickConnectExperienceManager *)((char *)this - 48));
        v5 = Boolean;
        if ( Boolean < 0 )
        {
          v9 = 708LL;
          goto LABEL_11;
        }
      }
    }
    v29 = 0LL;
    LODWORD(v30) = 0;
    v12 = v26;
    v13 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v26 + 48LL);
    string = (HSTRING)&v29;
    v25 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Title", 6u, 5u);
    v13(v12, v35, &v25);
    v35 = 0LL;
    RoVariant::Attach((RoVariant *)string, v25);
    if ( v29 )
    {
      string = v29;
      LODWORD(v25) = v30;
      WindowsDeleteString(*((HSTRING *)this + 39));
      *((_QWORD *)this + 39) = 0LL;
      v14 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&string, (HSTRING *)this + 39);
      v5 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2CD,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v14);
LABEL_29:
        RoVariant::~RoVariant((RoVariant *)&v29);
        goto LABEL_30;
      }
    }
    v27 = 0LL;
    LODWORD(v28) = 0;
    v15 = v26;
    v16 = *(void (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v26 + 48LL);
    string = (HSTRING)&v27;
    v25 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"EventType", 0xAu, 9u);
    v16(v15, v35, &v25);
    v35 = 0LL;
    RoVariant::Attach((RoVariant *)string, v25);
    if ( v27 )
    {
      string = 0LL;
      hstringHeader.Reserved.Reserved1 = v27;
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v28;
      WindowsDeleteString(0LL);
      string = 0LL;
      updated = RoVariant::Accessor::GetString((RoVariant::Accessor *)&hstringHeader, &string);
      v5 = updated;
      if ( updated < 0 )
      {
        v18 = 728LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
        WindowsDeleteString(string);
LABEL_28:
        RoVariant::~RoVariant((RoVariant *)&v27);
        goto LABEL_29;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"WindowResize", -1, 0) == 2 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::ExperienceManager_OnViewPropertiesChanging_WindowResize((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v36);
        updated = CQuickConnectExperienceManager::UpdateWindowPosition(
                    (CQuickConnectExperienceManager *)((char *)this - 48),
                    a2);
        v5 = updated;
        if ( updated < 0 )
        {
          v18 = 733LL;
          goto LABEL_21;
        }
      }
      else
      {
        v20 = WindowsGetStringRawBuffer(string, 0LL);
        if ( CompareStringOrdinal(v20, -1, L"DisableReturnFocus", -1, 0) == 2 )
        {
          *((_BYTE *)this + 352) = 1;
        }
        else
        {
          v21 = WindowsGetStringRawBuffer(string, 0LL);
          if ( CompareStringOrdinal(v21, -1, L"EnableReturnFocus", -1, 0) == 2 )
            *((_BYTE *)this + 352) = 0;
        }
      }
      WindowsDeleteString(string);
    }
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v36);
    v5 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AA,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging::~ExperienceManager_OnViewPropertiesChanging((QuickConnectTelemetry::ExperienceManager_OnViewPropertiesChanging *)v36);
  return v5;
}
