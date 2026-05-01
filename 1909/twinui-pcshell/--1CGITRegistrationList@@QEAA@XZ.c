/*
 * XREFs of ??1CGITRegistrationList@@QEAA@XZ @ 0x18018AC3C
 * Callers:
 *     ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x18018F978 (--_ECFullScreenManager@@UEAAPEAXI@Z.c)
 *     _ViewPresentationMediator::ViewPresentationMediator_::_1_::dtor$4 @ 0x1802C8F61 (_ViewPresentationMediator--ViewPresentationMediator_--_1_--dtor$4.c)
 *     ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x180363960 (--_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z.c)
 *     ??1ObservableObjectArray@@QEAA@XZ @ 0x180372430 (--1ObservableObjectArray@@QEAA@XZ.c)
 *     _CPerMonitorDesktopVisibilityService::CPerMonitorDesktopVisibilityService_::_1_::dtor$1 @ 0x1803AE35A (_CPerMonitorDesktopVisibilityService--CPerMonitorDesktopVisibilityService_--_1_--dtor$1.c)
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1803C7904 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGITRegistrationList::~CGITRegistrationList(CGITRegistrationList *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 3) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 3) );
      v2 = (void *)*((_QWORD *)this + 2);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
