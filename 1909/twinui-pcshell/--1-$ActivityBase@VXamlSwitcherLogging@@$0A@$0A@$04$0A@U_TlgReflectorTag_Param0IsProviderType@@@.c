/*
 * XREFs of ??1?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802CFC20
 * Callers:
 *     ??1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802CFD8C (--1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802D3A00 (--1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802DB9B8 (--1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator() @ 0x1802DBB84 (_lambda_64960682c46b5a18a905cfbd0aa4a0cd_--operator().c)
 *     ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802E396C (--1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802F6F20 (--1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802F6F4C (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802F6FA4 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemDataView@Multitasking@5Internal@Windows@@@Z @ 0x1802F7D2C (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1803071CC (--1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x180307F2C (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802CFC5C (--1-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802D26D4 (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
