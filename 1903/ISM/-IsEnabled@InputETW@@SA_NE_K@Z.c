/*
 * XREFs of ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006C218
 * Callers:
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x18002FC0C (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x180035F14 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006AF34 (-DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006B0CC (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006B264 (-DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@.c)
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006B3FC (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?DropTargetChanged@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006B594 (-DropTargetChanged@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Window.c)
 *     ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x18006B928 (-FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x18006CE64 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18007274C (-ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x1800728B8 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180072C14 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180072D50 (-NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180073138 (-PauseNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x1800731FC (-PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x1800732EC (-PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18007374C (-RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BD328 (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BEB30 (-ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BEBCC (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BEC68 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BED04 (-ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180124B24 (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800147C8 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 */

char __fastcall InputETW::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<InputETW>::get(
                                      a1,
                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 1u);
}
