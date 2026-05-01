/*
 * XREFs of ??_GCImmersiveShellComponentWithGITSite@@UEAAPEAXI@Z @ 0x1800E5E8C
 * Callers:
 *     ??_ECImmersiveShellComponentWithGITSite@@WCI@EAAPEAXI@Z @ 0x18009B380 (--_ECImmersiveShellComponentWithGITSite@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800E5970 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800E59D4 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

CImmersiveShellComponentWithGITSite *__fastcall CImmersiveShellComponentWithGITSite::`scalar deleting destructor'(
        CImmersiveShellComponentWithGITSite *this,
        char a2)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithGITSite *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
