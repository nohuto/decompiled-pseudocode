/*
 * XREFs of ?_OnViewEvent@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800959D0
 * Callers:
 *     ?_OnViewEventHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180095C00 (-_OnViewEventHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@S.c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180025D60 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180042D24 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$ShellFeedsExperienceManagerImpl_OnViewEvent@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z @ 0x180092238 (--$ShellFeedsExperienceManagerImpl_OnViewEvent@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$ShellFeedsExperienceManagerImpl_OnViewEvent_SuspensionAllowedByApp@AEA_N@ShellFeedsTelemetry@@SAXAEA_N@Z @ 0x1800922EC (--$ShellFeedsExperienceManagerImpl_OnViewEvent_SuspensionAllowedByApp@AEA_N@ShellFeedsTelemetry@.c)
 *     ?ShellFeedsExperienceManagerImpl_SuspensionDisabled@ShellFeedsTelemetry@@SAXXZ @ 0x180094AC0 (-ShellFeedsExperienceManagerImpl_SuspensionDisabled@ShellFeedsTelemetry@@SAXXZ.c)
 *     ?_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180094BE0 (-_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x180095180 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x180095F98 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 *     ?_StartDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800961A8 (-_StartDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@PEBG@Z @ 0x18019D3E0 (-GetStringWithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA-AVHString@Wrappers@W.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnViewEvent(
        ShellFeedsExperienceManagerImpl *this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HSTRING_HEADER *v6; // rax
  HSTRING v7; // r8
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  int v10; // edi
  bool *v12; // rdi
  __int64 v13; // rcx
  HSTRING_HEADER *v14; // rax
  HSTRING v15; // r8
  HSTRING_HEADER *v16; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-48h] BYREF
  HSTRING string[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  string[1] = (HSTRING)-2LL;
  string[0] = (HSTRING)WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_OnViewEvent<unsigned short const *>((LPCWSTR *)string);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)off_1804514B0);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, (HSTRING)v6[1].Reserved.Reserved1, v7) )
  {
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)off_1804514B8);
    if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          a2,
                          (HSTRING)v14[1].Reserved.Reserved1,
                          v15) )
    {
      v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)off_180451490);
      Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault(
        &v18,
        string,
        v16[1].Reserved.Reserved1,
        0LL);
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      ShellFeedsExperienceManagerImpl::_Show(this, string[0], 0LL);
      WindowsDeleteString(string[0]);
    }
  }
  else
  {
    v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)off_180451488);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
            &v18,
            (__int64)v8[1].Reserved.Reserved1,
            v9,
            v17);
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    v12 = (bool *)this + 156;
    if ( *((_BYTE *)this + 156) != (v17[0] != 0) )
    {
      *v12 = v17[0] != 0;
      ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_OnViewEvent_SuspensionAllowedByApp<bool &>((__int64)this + 156);
      if ( *v12 )
      {
        if ( !ShellFeedsExperienceManagerImpl::_IsViewVisible(this) )
          ShellFeedsExperienceManagerImpl::_StartDeferredSuspensionTimer(this);
      }
      else
      {
        ShellFeedsExperienceManagerImpl::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)this);
        if ( !ShellFeedsExperienceManagerImpl::_IsViewVisible(this) )
        {
          ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SuspensionDisabled(v13);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 88LL))(*((_QWORD *)this + 12));
        }
      }
    }
  }
  return 0LL;
}
