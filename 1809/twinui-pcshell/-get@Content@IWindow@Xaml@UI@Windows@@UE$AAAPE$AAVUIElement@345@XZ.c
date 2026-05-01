/*
 * XREFs of ?get@Content@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVUIElement@345@XZ @ 0x180262C48
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180260078 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_180260078.c)
 *     _lambda_0b0ea29adb38baec39914485464e8775_::operator() @ 0x18026B7E4 (_lambda_0b0ea29adb38baec39914485464e8775_--operator().c)
 *     _lambda_5e3471c756f87189046196c55c94088a_::operator() @ 0x18026B9F4 (_lambda_5e3471c756f87189046196c55c94088a_--operator().c)
 *     _lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_::operator() @ 0x18026BBE8 (_lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef_--operator().c)
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator() @ 0x18026BFE4 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--operator().c)
 *     ?Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x180271300 (-Initialize@XamlAllUpViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     _lambda_30f657ed8e28792729df8e2fc6b34518_::operator() @ 0x18027E79C (_lambda_30f657ed8e28792729df8e2fc6b34518_--operator().c)
 *     _lambda_a3ced70d1476e93ea420f346718bf2f6_::operator() @ 0x18027F080 (_lambda_a3ced70d1476e93ea420f346718bf2f6_--operator().c)
 *     _lambda_bb329e9869818a924204dbfd8ac58224_::operator() @ 0x18027F22C (_lambda_bb329e9869818a924204dbfd8ac58224_--operator().c)
 *     ?Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z @ 0x18027FA40 (-Initialize@XamlAltTabViewHost@@UEAAJPEAUXamlViewHostInitializeArgs@@@Z.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18028902C (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 *     _lambda_d1cd94c5db2d714c4aabf0680fb425d1_::operator() @ 0x18028E780 (_lambda_d1cd94c5db2d714c4aabf0680fb425d1_--operator().c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::UI::Xaml::IWindow::Content::get(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v4);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  v2 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
