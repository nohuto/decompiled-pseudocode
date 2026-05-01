/*
 * XREFs of ??$Make@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@$$QEAPEAUITabViewManager@@@Z @ 0x180266AEC
 * Callers:
 *     ??$MakeOrThrow@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@$$QEAPEAUITabViewManager@@@Z @ 0x180266E9C (--$MakeOrThrow@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@wil@@YA-AV-$ComPtr@VSwitche.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E9DCC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z @ 0x1802698CC (--0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<SwitcherTabViewManagerWrapper,ITabViewManager *>(
        __int64 *a1,
        struct ITabViewManager **a2)
{
  SwitcherTabViewManagerWrapper *v4; // rax
  SwitcherTabViewManagerWrapper *v5; // rdi

  *a1 = 0LL;
  v4 = (SwitcherTabViewManagerWrapper *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = SwitcherTabViewManagerWrapper::SwitcherTabViewManagerWrapper(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(*a1);
    *a1 = (__int64)v5;
  }
  return a1;
}
