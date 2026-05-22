/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014C3C
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18000B840 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CC40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180014AF0 (std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DE_ea_180014AF0.c)
 *     std::_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_IDENTIFICATION_MESSAGE_const___::_Do_call @ 0x180014BC0 (std--_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_ea_180014BC0.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007BA88 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180092F18 (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1800BA870 (--0PerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BC9BC (-DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800BCA7C (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BCB40 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800BE634 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z @ 0x1800BE714 (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z.c)
 *     ?ReceiveKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BE7AC (-ReceiveKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800BE86C (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800BE930 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z @ 0x1800BE9F4 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z.c)
 *     ?UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z @ 0x1800BFFFC (-UpdateCursorOrientation@Cursor@InputTraceLogging@@SAX_KN@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800C7218 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z @ 0x1800CBF6C (-AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z.c)
 *     ?CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z @ 0x1800CC220 (-CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z @ 0x1800CDC7C (-SetCursorImage@Cursor@InputTraceLogging@@SAX_K_N@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800F950C (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorSt.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x1800FB140 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDeci.c)
 *     ?RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcessor@@_N33@Z @ 0x1800FB2BC (-RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcess.c)
 *     ?DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z @ 0x180107C98 (-DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z.c)
 *     ?UpdateClientOwner@Cursor@InputTraceLogging@@SAXUCursorId@@@Z @ 0x180144C5C (-UpdateClientOwner@Cursor@InputTraceLogging@@SAXUCursorId@@@Z.c)
 *     ?UpdateDpiScale@Cursor@InputTraceLogging@@SAX_KH@Z @ 0x180144D38 (-UpdateDpiScale@Cursor@InputTraceLogging@@SAX_KH@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18002801C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BFE8 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    v5 = qword_1801E14B0;
    qword_1801E14B0[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_1801E14C8 = (struct _TlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E14B0, qword_1801E14C8);
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, qword_1801E14B0);
  }
  return v5;
}
