/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238
 * Callers:
 *     HandleInputDestDestruction @ 0x1C002FD60 (HandleInputDestDestruction.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0030160 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0030210 (GenerateMouseMove.c)
 *     ProcessMouseEvent @ 0x1C0033C10 (ProcessMouseEvent.c)
 *     PostPendingMouseMove @ 0x1C004DEF0 (PostPendingMouseMove.c)
 *     DCompHitTest @ 0x1C007FD40 (DCompHitTest.c)
 *     SynthesizeMouseInput @ 0x1C00949B0 (SynthesizeMouseInput.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C00950D0 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x1C009A840 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C00A3BB0 (ForceResetMouseButtonsDownState.c)
 *     ClearLogicalCursorPos @ 0x1C00A8BE0 (ClearLogicalCursorPos.c)
 *     IsCapturedBySystem @ 0x1C00B0740 (IsCapturedBySystem.c)
 *     ForceCapture @ 0x1C00B76A0 (ForceCapture.c)
 *     NtMITDisableMouseIntercept @ 0x1C0111430 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0111890 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0112F20 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C01159F0 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C0181CB0 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C0181CE0 (CheckIntegrityAccessToCapture.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C0181E5C (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C0181EF0 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C0182210 (HasCapture.c)
 *     IsCapturedByThread @ 0x1C0182270 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01822B0 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01822E0 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C0182360 (MouseButtonAction.c)
 *     MouseMove @ 0x1C01823A0 (MouseMove.c)
 *     ReleaseMouseButton @ 0x1C01823E0 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C0182574 (SetContentOrientation.c)
 *     SetUMInputSuppressionState @ 0x1C0182704 (SetUMInputSuppressionState.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01827D0 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01828F0 (SynthesizeMouseInputWithNextPreview.c)
 *     UpdateGlobalCursorOwner @ 0x1C0182AB0 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetMouseProcessor()
{
  if ( qword_1C0208018 )
    return (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0208018 + 8LL))(qword_1C0208018);
  else
    return 0LL;
}
