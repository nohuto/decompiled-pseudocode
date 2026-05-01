/*
 * XREFs of ??$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA?AV?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@AEAPEBGAEA_N@Z @ 0x1800AF278
 * Callers:
 *     ?ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N@Z @ 0x1800B32B0 (-ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0StateChangedEventArgsImpl@@QEAA@PEBG_N@Z @ 0x1800AFE20 (--0StateChangedEventArgsImpl@@QEAA@PEBG_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B2E40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013F548 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
StateChangedEventArgsImpl **__fastcall wil::MakeOrThrow<StateChangedEventArgsImpl,unsigned short const * &,bool &>(
        StateChangedEventArgsImpl **a1,
        const unsigned __int16 **a2,
        bool *a3)
{
  StateChangedEventArgsImpl *v6; // rax
  const char *v7; // r9
  StateChangedEventArgsImpl *v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v6 = (StateChangedEventArgsImpl *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = StateChangedEventArgsImpl::StateChangedEventArgsImpl(v6, *a2, *a3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v8;
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x2F,
      (unsigned int)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v7);
    __debugbreak();
  }
  return a1;
}
