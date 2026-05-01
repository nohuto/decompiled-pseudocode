/*
 * XREFs of ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x180170598
 * Callers:
 *     ??_ECFullScreenManager@@WBI@EAAPEAXI@Z @ 0x1800B3D80 (--_ECFullScreenManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18016B89C (--1CGITRegistrationList@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18016B920 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 */

CFullScreenManager *__fastcall CFullScreenManager::`vector deleting destructor'(CFullScreenManager *this, char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  CGITRegistrationList::~CGITRegistrationList((CFullScreenManager *)((char *)this + 144));
  *((_DWORD *)this + 35) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
