/*
 * XREFs of ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180014604
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180012790 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180092938 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180092C00 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z @ 0x1800C50B4 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800C6C28 (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800C7138 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FE8F4 (-DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Window.c)
 *     ?DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEAA8 (-DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEC5C (-DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windo.c)
 *     ?DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEE10 (-DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@.c)
 *     ?StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z @ 0x1800FFC88 (-StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 */

char __fastcall InputETW::IsVerboseEnabled(ULONGLONG keyword)
{
  __int64 v2; // rax
  char v3; // r9
  const struct _TlgProvider_t *v4; // rcx
  BOOLEAN v6; // al

  v2 = wil::details::static_lazy<InputETW>::get(
         keyword,
         lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
  v3 = 0;
  v4 = *(const struct _TlgProvider_t **)(v2 + 8);
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = TlgKeywordOn(v4, keyword);
    if ( v6 != v3 )
      return 1;
  }
  return v3;
}
