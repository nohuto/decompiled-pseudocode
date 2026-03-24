/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C002D084
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C000839C (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     PostShellHookMessagesEx @ 0x1C0017B24 (PostShellHookMessagesEx.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     NtUserSendInput @ 0x1C001DD40 (NtUserSendInput.c)
 *     xxxInternalKeyEventDirect @ 0x1C001F0D0 (xxxInternalKeyEventDirect.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0020B80 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     CheckAllowForeground @ 0x1C0020E70 (CheckAllowForeground.c)
 *     CancelForegroundActivate @ 0x1C00292F4 (CancelForegroundActivate.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0029B90 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     NtUserProcessConnect @ 0x1C002C240 (NtUserProcessConnect.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C002C740 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     xxxDCompSpeedHitTest @ 0x1C002CCD4 (xxxDCompSpeedHitTest.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C0079CA8 (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C007A04C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxConnectService @ 0x1C007C344 (xxxConnectService.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     UserJobCallout @ 0x1C00EF070 (UserJobCallout.c)
 *     NtUserEnableIAMAccess @ 0x1C00EF580 (NtUserEnableIAMAccess.c)
 *     xxxFullScreenCleanup @ 0x1C00FE790 (xxxFullScreenCleanup.c)
 *     xxxRemoteDisconnect @ 0x1C010DF50 (xxxRemoteDisconnect.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C010E33C (xxxRemoteStopScreenUpdates.c)
 *     RemoteDisableScreen @ 0x1C010E540 (RemoteDisableScreen.c)
 *     EditionUnloadCursorsAndIcons @ 0x1C0112230 (EditionUnloadCursorsAndIcons.c)
 *     InitClipFormatExceptionList @ 0x1C01142A0 (InitClipFormatExceptionList.c)
 *     NtUserAcquireIAMKey @ 0x1C0119760 (NtUserAcquireIAMKey.c)
 *     InitClipboardILDef @ 0x1C0119A60 (InitClipboardILDef.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C01335E4 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C01338AC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C013438C (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0134BF0 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0135164 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 *     RemoteRedrawScreen @ 0x1C0160EE8 (RemoteRedrawScreen.c)
 *     EditionDeactivateMitInput @ 0x1C0161920 (EditionDeactivateMitInput.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D5FB0 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     _AllowForegroundActivation @ 0x1C01D6CF0 (_AllowForegroundActivation.c)
 *     zzzShowStartGlass @ 0x1C01D6F70 (zzzShowStartGlass.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F0404 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01F0FCC (_DelegateCapturePointers.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FE088 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C0209960 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C02099CC (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C0209A38 (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209BEC (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209CF0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E2C (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A0B0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A6C0 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A740 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A8F0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AB50 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020ACF0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B140 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B1F0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B2D0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C020B98C (xxxDDETrackPostHook.c)
 *     RemoteRedrawRectangle @ 0x1C020CEE8 (RemoteRedrawRectangle.c)
 *     xxxbFullscreenSwitch @ 0x1C020D218 (xxxbFullscreenSwitch.c)
 *     CtxDisplayIOCtl @ 0x1C0212580 (CtxDisplayIOCtl.c)
 *     RemoteLogoff @ 0x1C0212690 (RemoteLogoff.c)
 *     RemotePassthruDisable @ 0x1C0212710 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0212810 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02129E0 (RemoteShadowStart.c)
 *     RemoteThinwireStats @ 0x1C0212B90 (RemoteThinwireStats.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C0212D20 (xxxRemoteConsoleShadowStart.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0213230 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0213520 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0213690 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0213710 (xxxRemoteShadowStop.c)
 *     NtUserInjectTouchInput @ 0x1C0230380 (NtUserInjectTouchInput.c)
 *     InitMessageTables @ 0x1C037F1E0 (InitMessageTables.c)
 *     InitFunctionTables @ 0x1C037FBD0 (InitFunctionTables.c)
 *     InitOLEFormats @ 0x1C0380030 (InitOLEFormats.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C002D084
 * Reason: Hex-Rays returned no pseudocode for 0x1C002D084
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002D084: mov     [rsp+arg_0], rbx
 * 00000001C002D089: mov     [rsp+arg_8], rbp
 * 00000001C002D08E: mov     [rsp+arg_10], rsi
 * 00000001C002D093: push    rdi
 * 00000001C002D094: sub     rsp, 30h
 * 00000001C002D098: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C002D09F: movzx   edi, r9w
 * 00000001C002D0A3: mov     esi, r8d
 * 00000001C002D0A6: mov     bl, dl
 * 00000001C002D0A8: mov     r11d, r8d
 * 00000001C002D0AB: shr     r11, 10h
 * 00000001C002D0AF: lea     r10d, [rsi-1]
 * 00000001C002D0B3: mov     ecx, r10d
 * 00000001C002D0B6: and     r10d, 1Fh
 * 00000001C002D0BA: shr     rcx, 5
 * 00000001C002D0BE: lea     rax, [r11+r11*4]
 * 00000001C002D0C2: and     ecx, 7FFh
 * 00000001C002D0C8: lea     r9, [rcx+rax*4]
 * 00000001C002D0CC: mov     ecx, r10d
 * 00000001C002D0CF: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C002D0D6: mov     eax, [r10+r9*4+2Ch]
 * 00000001C002D0DB: bt      eax, ecx
 * 00000001C002D0DE: jb      loc_1C0177BFC
 * 00000001C002D0E4: and     [rsp+38h+var_10], 0
 * 00000001C002D0EA: mov     r8d, esi
 * 00000001C002D0ED: mov     r9, [rsp+38h+arg_20]
 * 00000001C002D0F2: mov     rcx, rbp
 * 00000001C002D0F5: movzx   edx, bl
 * 00000001C002D0F8: mov     word ptr [rsp+38h+var_18], di
 * 00000001C002D0FD: call    cs:__imp_WppAutoLogTrace
 * 00000001C002D104: nop     dword ptr [rax+rax+00h]
 * 00000001C002D109: mov     rbx, [rsp+38h+arg_0]
 * 00000001C002D10E: mov     rbp, [rsp+38h+arg_8]
 * 00000001C002D113: mov     rsi, [rsp+38h+arg_10]
 * 00000001C002D118: add     rsp, 30h
 * 00000001C002D11C: pop     rdi
 * 00000001C002D11D: retn
 * 00000001C0177BFC: lea     rcx, [r11+r11*4]
 * 00000001C0177C00: add     rcx, rcx
 * 00000001C0177C03: cmp     [r10+rcx*8+29h], bl
 * 00000001C0177C08: jb      loc_1C002D0E4
 * 00000001C0177C0E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0177C15: mov     edx, 2Bh ; '+'
 * 00000001C0177C1A: and     [rsp+38h+var_18], 0
 * 00000001C0177C20: mov     r8, [rsp+38h+arg_20]
 * 00000001C0177C25: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0177C2A: movzx   r9d, di
 * 00000001C0177C2E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0177C34: nop
 * 00000001C0177C35: jmp     loc_1C002D0E4
 */
