/*
 * XREFs of ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18014F970
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18014F520 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18000DB2C (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800247D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x180055EEC (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18014E9F0 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180151AC4 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180156E60 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 */

__int64 __fastcall CAppViewManager::EnsureApplication(
        CAppViewManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplicationInternal **a3)
{
  int ViewForSwitchInternal; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  RTL_SRWLOCK *v12; // rbx
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h] BYREF
  struct IIAMServiceProvider *v24; // [rsp+48h] [rbp-29h] BYREF
  int v25[2]; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-19h] BYREF
  char *v27; // [rsp+60h] [rbp-11h]
  _QWORD v28[2]; // [rsp+68h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+7h] BYREF
  HSTRING v30; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v28[1] = -2LL;
  *a3 = 0LL;
  *(_QWORD *)v25 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v25);
  ViewForSwitchInternal = CAppViewManager::_GetViewForSwitchInternal(this, 0LL, a2);
  v7 = ViewForSwitchInternal;
  if ( ViewForSwitchInternal < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CD,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForSwitchInternal);
    goto LABEL_29;
  }
  v22 = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v25;
  v9 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v25;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v10 = v9(v8, &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1, &v22);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CF,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_5:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    goto LABEL_29;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))this + 15))(
          *((_QWORD *)this + 15),
          &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
          &v24);
  v7 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D8,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    goto LABEL_5;
  }
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v26,
    v24);
  if ( (int)v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3DA,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v27);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 24LL))(v22, v28);
  v12 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, struct IImmersiveApplicationInternal **, int *))(**((_QWORD **)this + 15) + 168LL))(
          *((_QWORD *)this + 15),
          a2,
          v28[0],
          a3,
          v25);
  if ( v13 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 384LL))(*(_QWORD *)v25);
    if ( v16 )
    {
      LOBYTE(v15) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 552LL))(*a3, v15);
      if ( v12 )
        ReleaseSRWLockExclusive(v12);
      CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      v23 = 0LL;
      v17 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v23);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v17 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v23, v16, 0LL);
        v7 = v17;
        if ( v17 >= 0 )
        {
          wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v19, 3u);
          v30 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"InitialPositionIsForDrag",
            0x19u,
            0x18u);
          v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v23,
                  v30,
                  v20,
                  1);
          v7 = v17;
          if ( v17 >= 0 )
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 15) + 152LL))(
                    *((_QWORD *)this + 15),
                    *a3,
                    v23,
                    0LL,
                    0LL);
            v7 = v17;
            if ( v17 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
              v7 = 0;
              goto LABEL_29;
            }
            v18 = 1023LL;
          }
          else
          {
            v18 = 1019LL;
          }
        }
        else
        {
          v18 = 1009LL;
        }
      }
      else
      {
        v18 = 1007LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_5;
    }
    v13 = -2147418113;
    v14 = 996LL;
  }
  else
  {
    v14 = 991LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v13);
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v7 = v13;
LABEL_29:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v25);
  return v7;
}
