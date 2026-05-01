/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180305638
 * Callers:
 *     ??$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x180300CE8 (--$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIco.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x180301100 (--$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationVie.c)
 *     ??1?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180302548 (--1-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x180303E30 (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017FCB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEve.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::Release(v1);
  }
  return result;
}
