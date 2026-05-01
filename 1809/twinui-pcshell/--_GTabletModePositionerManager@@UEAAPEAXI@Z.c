/*
 * XREFs of ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x180342878
 * Callers:
 *     ??_ETabletModePositionerManager@@WBI@EAAPEAXI@Z @ 0x1800A99A0 (--_ETabletModePositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800E5A18 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18014014C (--1CGITRegistrationList@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x1801401B4 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
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
