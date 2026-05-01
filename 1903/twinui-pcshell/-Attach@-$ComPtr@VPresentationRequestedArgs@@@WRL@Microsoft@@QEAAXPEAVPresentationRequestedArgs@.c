/*
 * XREFs of ?Attach@?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationRequestedArgs@@@Z @ 0x18010F98C
 * Callers:
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x18010BAE4 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@AEAI@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@AEAI@Z @ 0x18010BBA8 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewMa_ea_18010BBA8.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180096AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PresentationRequestedArgs>::Attach(
        volatile signed __int64 **a1,
        volatile signed __int64 *a2)
{
  volatile signed __int64 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v4);
  *a1 = a2;
  return result;
}
