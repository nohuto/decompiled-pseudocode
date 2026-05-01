/*
 * XREFs of ??1?$ComPtr@VDelayedTileActivationCallSite@@@WRL@Microsoft@@QEAA@XZ @ 0x18009EDE4
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18038FAB0 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009F0C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueS.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DelayedTileActivationCallSite>::~ComPtr<DelayedTileActivationCallSite>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop>::Release(result);
  }
  return result;
}
