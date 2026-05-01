/*
 * XREFs of ??1CGITRegistrationList@@QEAA@XZ @ 0x18014014C
 * Callers:
 *     ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x180144B10 (--_ECFullScreenManager@@UEAAPEAXI@Z.c)
 *     _ViewPresentationMediator::ViewPresentationMediator_::_1_::dtor$4 @ 0x180252B64 (_ViewPresentationMediator--ViewPresentationMediator_--_1_--dtor$4.c)
 *     ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x1802E3830 (--_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z.c)
 *     ??1ObservableObjectArray@@QEAA@XZ @ 0x1802F2100 (--1ObservableObjectArray@@QEAA@XZ.c)
 *     _CPerMonitorDesktopVisibilityService::CPerMonitorDesktopVisibilityService_::_1_::dtor$1 @ 0x18032E682 (_CPerMonitorDesktopVisibilityService--CPerMonitorDesktopVisibilityService_--_1_--dtor$1.c)
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x180342878 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CGITRegistrationList::~CGITRegistrationList(CGITRegistrationList *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

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
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
