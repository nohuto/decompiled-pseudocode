/*
 * XREFs of ??$MakeOrThrow@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@$$QEAPEAUITabViewManager@@@Z @ 0x1802DF394
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802E9A80 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802F8510 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013F548 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Attach@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@Z @ 0x18019C9D0 (-Attach@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Micros.c)
 *     ??0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z @ 0x1802E1EE4 (--0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<SwitcherTabViewManagerWrapper,ITabViewManager *>(
        __int64 *a1,
        struct ITabViewManager **a2)
{
  SwitcherTabViewManagerWrapper *v4; // rax
  const char *v5; // r9
  SwitcherTabViewManagerWrapper *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (SwitcherTabViewManagerWrapper *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = SwitcherTabViewManagerWrapper::SwitcherTabViewManagerWrapper(v4, *a2);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::Attach(
      a1,
      (__int64)v6);
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      47LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  return a1;
}
