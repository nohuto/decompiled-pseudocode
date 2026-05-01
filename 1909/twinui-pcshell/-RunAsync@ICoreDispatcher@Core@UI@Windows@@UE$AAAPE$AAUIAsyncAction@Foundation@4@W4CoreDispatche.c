/*
 * XREFs of ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802DB2F8
 * Callers:
 *     ??1XamlExplorerHostWindow@@UEAA@XZ @ 0x1802DB9E4 (--1XamlExplorerHostWindow@@UEAA@XZ.c)
 *     ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x1802DBE40 (-AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ.c)
 *     ?ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x1802DBF80 (-ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 *     ?RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z @ 0x1802DC2C0 (-RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z.c)
 *     ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x1802E604C (-BeginInvokeAnimation@MonitorFrame@@QEAAXXZ.c)
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x1802E7B44 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1802E7CF0 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x1802F8D30 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x1802F8F70 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802FAE20 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x180308A38 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::UI::Core::ICoreDispatcher::RunAsync(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, a2, a3, &v6);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v4;
}
