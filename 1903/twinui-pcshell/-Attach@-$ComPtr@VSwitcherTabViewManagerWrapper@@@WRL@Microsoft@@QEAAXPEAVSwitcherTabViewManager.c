/*
 * XREFs of ?Attach@?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAAXPEAVSwitcherTabViewManagerWrapper@@@Z @ 0x1802C6AE4
 * Callers:
 *     ??$MakeOrThrow@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@$$QEAPEAUITabViewManager@@@Z @ 0x1802BFE68 (--$MakeOrThrow@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@wil@@YA-AV-$ComPtr@VSwitche.c)
 *     ??$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@AEBQEAUITabViewManager@@@Z @ 0x180348FF4 (--$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA-AV-$C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017FD20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImm_ea_18017FD20.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SwitcherTabViewManagerWrapper>::Attach(
        volatile signed __int64 **a1,
        volatile signed __int64 *a2)
{
  volatile signed __int64 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v4);
  *a1 = a2;
  return result;
}
