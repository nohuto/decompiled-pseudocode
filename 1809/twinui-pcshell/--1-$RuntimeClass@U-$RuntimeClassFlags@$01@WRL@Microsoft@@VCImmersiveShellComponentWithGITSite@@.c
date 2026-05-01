/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UICustomShellManager@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18008C3AC
 * Callers:
 *     _CustomShellManager::CustomShellManager_::_1_::dtor$0 @ 0x18008C35D (_CustomShellManager--CustomShellManager_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>(
        CImmersiveShellComponentWithGITSite *this)
{
  *((_DWORD *)this + 37) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(this);
}
