/*
 * XREFs of ??$MakeOrThrow@VSwitcherTabViewManagerWrapper@@PEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@$$QEAPEAUITabViewManager@@@Z @ 0x1802BFE68
 * Callers:
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802CA5A0 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x1802D9020 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z @ 0x1802C29B4 (--0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z.c)
 *     ?Attach@?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAAXPEAVSwitcherTabViewManagerWrapper@@@Z @ 0x1802C6AE4 (-Attach@-$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAAXPEAVSwitcherTabViewManager.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<SwitcherTabViewManagerWrapper,ITabViewManager *>(
        _QWORD *a1,
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
    Microsoft::WRL::ComPtr<SwitcherTabViewManagerWrapper>::Attach(a1, v6);
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
