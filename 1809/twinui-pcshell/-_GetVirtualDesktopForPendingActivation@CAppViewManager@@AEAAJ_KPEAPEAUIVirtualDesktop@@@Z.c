/*
 * XREFs of ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x180110D18
 * Callers:
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18010AF00 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAU_GUID@@@Z @ 0x18010A5E4 (-GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_GetVirtualDesktopForPendingActivation(
        IUnknown **this,
        __int64 a2,
        struct IVirtualDesktop **a3)
{
  HRESULT ActivationVirtualDesktopId; // ebx
  void *v7; // rbx
  struct _GUID *v8; // r8
  void *v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-18h] BYREF

  v13[1] = -2LL;
  *a3 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  ActivationVirtualDesktopId = IUnknown_QueryService(
                                 this[15],
                                 &SID_ViewEventDispatcher,
                                 &GUID_22347704_c4ce_4e82_afeb_c6a00e06cc3a,
                                 &ppvOut);
  if ( ActivationVirtualDesktopId >= 0 )
  {
    v11 = 0LL;
    v7 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    ActivationVirtualDesktopId = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v7 + 64LL))(
                                   v7,
                                   a2,
                                   &v11);
    if ( ActivationVirtualDesktopId >= 0 )
    {
      v13[0] = v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
      ActivationVirtualDesktopId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationVirtualDesktopId(
                                     (Windows::Internal::Shell::Desktop::ViewManagerInterop *)v13,
                                     (struct Windows::Internal::ShellHelpers::PropertySetHelper *)v14,
                                     v8);
      if ( ActivationVirtualDesktopId >= 0 )
      {
        v10 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
        ActivationVirtualDesktopId = IUnknown_QueryService(
                                       this[15],
                                       (const GUID *const)&SID_VirtualDesktopManager,
                                       &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                                       &v10);
        if ( ActivationVirtualDesktopId >= 0 )
          ActivationVirtualDesktopId = (*(__int64 (__fastcall **)(void *, _BYTE *, struct IVirtualDesktop **))(*(_QWORD *)v10 + 96LL))(
                                         v10,
                                         v14,
                                         a3);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)ActivationVirtualDesktopId;
}
