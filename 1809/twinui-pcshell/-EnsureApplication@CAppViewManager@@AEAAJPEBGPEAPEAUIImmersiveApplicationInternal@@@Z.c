/*
 * XREFs of ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18010A120
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x180109CD0 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022984 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18004806C (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x18004E74C (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$?0$0BJ@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BJ@$$CBG@Z @ 0x180106A9C (--$-0$0BJ@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BJ@$$CBG@Z.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x180109160 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18010BBD4 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x18010BDCC (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180110B00 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 */

__int64 __fastcall CAppViewManager::EnsureApplication(
        CAppViewManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplicationInternal **a3)
{
  int ViewForSwitchInternal; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  RTL_SRWLOCK *v11; // rbx
  int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  HSTRING_HEADER *v20; // rax
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-31h] BYREF
  struct IIAMServiceProvider *v24; // [rsp+48h] [rbp-29h] BYREF
  int v25[2]; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v26[8]; // [rsp+58h] [rbp-19h] BYREF
  char *v27; // [rsp+60h] [rbp-11h]
  _QWORD v28[2]; // [rsp+68h] [rbp-9h] BYREF
  HSTRING_HEADER v29; // [rsp+78h] [rbp+7h] BYREF
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
      (void *)0x3C5,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForSwitchInternal);
    goto LABEL_30;
  }
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v8 = *(_QWORD *)v25;
  v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v25)(
         *(_QWORD *)v25,
         &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1,
         &v22);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C7,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_5:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v22);
    goto LABEL_30;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))this + 15))(
          *((_QWORD *)this + 15),
          &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
          &v24);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D0,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    goto LABEL_5;
  }
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v26,
    v24);
  if ( (int)v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      978LL,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v27);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 24LL))(v22, v28);
  v11 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, struct IImmersiveApplicationInternal **, int *))(**((_QWORD **)this + 15) + 168LL))(
          *((_QWORD *)this + 15),
          a2,
          v28[0],
          a3,
          v25);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 384LL))(v8);
    if ( v15 )
    {
      LOBYTE(v14) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 552LL))(*a3, v14);
      if ( v11 )
        ReleaseSRWLockExclusive(v11);
      CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      v23 = 0LL;
      v16 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v23);
      v7 = v16;
      if ( v16 >= 0 )
      {
        v16 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v23, v15, 0LL);
        v7 = v16;
        if ( v16 >= 0 )
        {
          wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v18, 3u, v19);
          v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, L"InitialPositionIsForDrag");
          v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v23,
                  (HSTRING)v20[1].Reserved.Reserved1,
                  1u);
          v7 = v16;
          if ( v16 >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 15) + 152LL))(
                    *((_QWORD *)this + 15),
                    *a3,
                    v23);
            v7 = v16;
            if ( v16 >= 0 )
            {
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v23);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v22);
              v7 = 0;
              goto LABEL_30;
            }
            v17 = 1015LL;
          }
          else
          {
            v17 = 1011LL;
          }
        }
        else
        {
          v17 = 1001LL;
        }
      }
      else
      {
        v17 = 999LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v23);
      goto LABEL_5;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DC,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8000FFFFLL);
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v22);
    v7 = -2147418113;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D7,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12);
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee((CAutoApplicationCreationResourceGuarantee *)v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v22);
    v7 = v13;
  }
LABEL_30:
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)v25);
  return v7;
}
