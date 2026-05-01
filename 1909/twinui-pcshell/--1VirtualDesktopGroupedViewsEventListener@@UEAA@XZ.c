/*
 * XREFs of ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x18041C848
 * Callers:
 *     ??_EVirtualDesktopGroupedViewsEventListener@@UEAAPEAXI@Z @ 0x18041CAC0 (--_EVirtualDesktopGroupedViewsEventListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$unique_winrt_event_token@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x18041D8A8 (-reset@-$unique_winrt_event_token@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windo.c)
 *     ?revoke@?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18041D948 (-revoke@-$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winr.c)
 */

void __fastcall VirtualDesktopGroupedViewsEventListener::~VirtualDesktopGroupedViewsEventListener(
        VirtualDesktopGroupedViewsEventListener *this)
{
  __int64 *v2; // rcx
  volatile int *v3; // rdx

  v2 = (__int64 *)((char *)this + 160);
  if ( *v2 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 19) )
    winrt::com_ptr<IInspectable>::unconditional_release_ref((__int64 *)this + 19);
  winrt::event_revoker<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::revoke((char *)this + 128);
  if ( *((_QWORD *)this + 16) )
    winrt::com_ptr<IInspectable>::unconditional_release_ref((__int64 *)this + 16);
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter>::reset((char *)this + 104);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v3);
}
