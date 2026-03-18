/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88
 * Callers:
 *     HandleInputDestDestruction @ 0x1C0030B70 (HandleInputDestDestruction.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0030EB0 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0030F60 (GenerateMouseMove.c)
 *     ProcessMouseEvent @ 0x1C0034960 (ProcessMouseEvent.c)
 *     PostPendingMouseMove @ 0x1C00425B0 (PostPendingMouseMove.c)
 *     DCompHitTest @ 0x1C0083B70 (DCompHitTest.c)
 *     SynthesizeMouseInput @ 0x1C0096180 (SynthesizeMouseInput.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C00968A0 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x1C009BCC0 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C00A4CC0 (ForceResetMouseButtonsDownState.c)
 *     ClearLogicalCursorPos @ 0x1C00A9AF0 (ClearLogicalCursorPos.c)
 *     IsCapturedBySystem @ 0x1C00B37A0 (IsCapturedBySystem.c)
 *     ForceCapture @ 0x1C00BA760 (ForceCapture.c)
 *     NtMITDisableMouseIntercept @ 0x1C0113DA0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0114200 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0115890 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0118360 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C0183EA0 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C0183ED0 (CheckIntegrityAccessToCapture.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C018404C (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01840E0 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C0184400 (HasCapture.c)
 *     IsCapturedByThread @ 0x1C0184460 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01844A0 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01844D0 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C0184550 (MouseButtonAction.c)
 *     MouseMove @ 0x1C0184590 (MouseMove.c)
 *     ReleaseMouseButton @ 0x1C01845D0 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C0184764 (SetContentOrientation.c)
 *     SetUMInputSuppressionState @ 0x1C01848F4 (SetUMInputSuppressionState.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01849C0 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C0184AE0 (SynthesizeMouseInputWithNextPreview.c)
 *     UpdateGlobalCursorOwner @ 0x1C0184CA0 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetMouseProcessor()
{
  if ( qword_1C020B018 )
    return (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C020B018 + 8LL))(qword_1C020B018);
  else
    return 0LL;
}
