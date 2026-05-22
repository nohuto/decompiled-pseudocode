/*
 * XREFs of ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180014694
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180012820 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180092B58 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180092E20 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z @ 0x1800C52A4 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800C6E18 (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800C7328 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEB24 (-DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Window.c)
 *     ?DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FECD8 (-DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEE8C (-DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windo.c)
 *     ?DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FF040 (-DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@.c)
 *     ?StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z @ 0x1800FFEB8 (-StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800147C8 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
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
