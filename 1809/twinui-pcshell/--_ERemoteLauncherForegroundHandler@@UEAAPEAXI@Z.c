/*
 * XREFs of ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x18018D5F8
 * Callers:
 *     ??_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z @ 0x18009F710 (--_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180062770 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x1800E59AC (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 */

RemoteLauncherForegroundHandler *__fastcall RemoteLauncherForegroundHandler::`vector deleting destructor'(
        RemoteLauncherForegroundHandler *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((__int64)this + 120);
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
