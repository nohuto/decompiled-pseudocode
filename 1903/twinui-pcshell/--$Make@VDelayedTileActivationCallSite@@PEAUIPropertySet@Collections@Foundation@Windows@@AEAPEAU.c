/*
 * XREFs of ??$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDelayedTileActivationCallSite@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@@Z @ 0x18009EB8C
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18038FAB0 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0DelayedTileActivationCallSite@@QEAA@PEAUIUnknown@@PEAUHWND__@@W4IAM_DESKTOP_SWITCH_OPTION@@V?$optional@_N@std@@@Z @ 0x18009ECE8 (--0DelayedTileActivationCallSite@@QEAA@PEAUIUnknown@@PEAUHWND__@@W4IAM_DESKTOP_SWITCH_OPTION@@V-.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009F0C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueS.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<DelayedTileActivationCallSite,Windows::Foundation::Collections::IPropertySet *,HWND__ * &,enum IAM_DESKTOP_SWITCH_OPTION &,std::optional<bool> &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        __int16 *a5)
{
  void *v9; // rax
  __int64 v10; // rdi

  *a1 = 0LL;
  v9 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = DelayedTileActivationCallSite::DelayedTileActivationCallSite((_DWORD)v9, *a2, *a3, *a4, *a5);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop>::Release();
    *a1 = v10;
  }
  return a1;
}
