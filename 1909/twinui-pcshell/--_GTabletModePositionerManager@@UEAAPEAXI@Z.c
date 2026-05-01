/*
 * XREFs of ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1803C7904
 * Callers:
 *     ??_ETabletModePositionerManager@@WBI@EAAPEAXI@Z @ 0x1800E2FE0 (--_ETabletModePositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x180126C40 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18018AC3C (--1CGITRegistrationList@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18018ACC0 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 */

TabletModePositionerManager *__fastcall TabletModePositionerManager::`scalar deleting destructor'(
        TabletModePositionerManager *this,
        char a2)
{
  SmartCookie::~SmartCookie((TabletModePositionerManager *)((char *)this + 176));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
  CGITRegistrationList::~CGITRegistrationList((TabletModePositionerManager *)((char *)this + 112));
  *((_DWORD *)this + 27) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
