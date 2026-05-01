/*
 * XREFs of ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18022396C
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18021E6E0 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180025C00 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180062390 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x180223344 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_HandleSwitchAsyncActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, struct IApplicationView **); // rbx
  int ApplicationViewUniqueId; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, struct IApplicationView **); // rbx
  __int64 v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-50h] BYREF
  struct IApplicationView *v19; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-34h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v25; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v23 = -2LL;
  v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v20, (__int64)v25, v4, &v21) < 0 )
    goto LABEL_9;
  v5 = v21;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 28);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  ApplicationViewUniqueId = v7(v6, v5, &v19);
  v9 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId >= 0 )
  {
    v18 = 0;
    ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v19, &v18);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1723LL;
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
      v10 = 1725LL;
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
      v14 = *((_QWORD *)this + 28);
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v14 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      ApplicationViewUniqueId = v15(v14, v13, &v19);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1734LL;
        goto LABEL_16;
      }
      v18 = 0;
      ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v19, &v18);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1737LL;
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
        v10 = 1739LL;
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    }
    v9 = 0;
    goto LABEL_19;
  }
  v10 = 1720LL;
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
