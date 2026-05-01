/*
 * XREFs of ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B6F1C
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801B2230 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180027C80 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180071724 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z @ 0x1801B6A24 (-_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_HandleSwitchAsyncActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v5; // edi
  __int64 v6; // rbx
  int ApplicationViewUniqueId; // eax
  HolographicPositioner *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v13; // edi
  __int64 v14; // rbx
  HolographicPositioner *v15; // rcx
  __int64 v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-50h] BYREF
  struct IApplicationView *v19; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-34h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v25; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v23 = -2LL;
  v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v20, (__int64)v25, v4, &v21) < 0 )
    goto LABEL_9;
  v5 = v21;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  ApplicationViewUniqueId = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v6 + 48LL))(
                              v6,
                              v5,
                              &v19);
  v9 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId >= 0 )
  {
    v18 = 0;
    ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v8, v19, &v18);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1561LL;
      goto LABEL_16;
    }
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
                                v25,
                                v11,
                                v18);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1563LL;
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
LABEL_9:
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v20, (__int64)v25, v12, &v22) >= 0 )
    {
      v13 = v22;
      v19 = 0LL;
      v14 = *((_QWORD *)this + 27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      ApplicationViewUniqueId = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v14 + 48LL))(
                                  v14,
                                  v13,
                                  &v19);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1572LL;
        goto LABEL_16;
      }
      v18 = 0;
      ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v15, v19, &v18);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1575LL;
        goto LABEL_16;
      }
      v25 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
      ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
                                  v25,
                                  v16,
                                  v18);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1577LL;
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    }
    v9 = 0;
    goto LABEL_19;
  }
  v10 = 1558LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)ApplicationViewUniqueId);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  return v9;
}
