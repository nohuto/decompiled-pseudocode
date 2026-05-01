/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$09@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801F6534
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$09@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@WRL@Microsoft@@WBI@EAAPEAXI@Z @ 0x1800D8C90 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$09@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x180126B98 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

char *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<10>,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  *((_DWORD *)a1 + 25) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 2);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x68);
  return a1;
}
