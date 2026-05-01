/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801D7AD4
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@WDA@EAAPEAXI@Z @ 0x1800B5F50 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180107B88 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x180107BEC (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[31] = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 12));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 2));
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x80);
  return a1;
}
