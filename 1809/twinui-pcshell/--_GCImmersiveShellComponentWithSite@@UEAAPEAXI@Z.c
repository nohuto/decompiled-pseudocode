/*
 * XREFs of ??_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z @ 0x180140644
 * Callers:
 *     ??_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z @ 0x18009D9F0 (--_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800E5970 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

CImmersiveShellComponentWithSite *__fastcall CImmersiveShellComponentWithSite::`scalar deleting destructor'(
        CImmersiveShellComponentWithSite *this,
        char a2)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithSite *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
