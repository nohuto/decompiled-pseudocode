/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0026C14
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C000839C (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00117A8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C0017788 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0017840 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     PostShellHookMessagesEx @ 0x1C0017CD4 (PostShellHookMessagesEx.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0018040 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     UserJobCallout @ 0x1C0018720 (UserJobCallout.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0018B84 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C001A620 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     CheckAllowForeground @ 0x1C001A910 (CheckAllowForeground.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     xxxInternalKeyEventDirect @ 0x1C001D6E4 (xxxInternalKeyEventDirect.c)
 *     NtUserSendInput @ 0x1C001DEB0 (NtUserSendInput.c)
 *     CancelForegroundActivate @ 0x1C0022E84 (CancelForegroundActivate.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0023720 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     NtUserProcessConnect @ 0x1C0025DD0 (NtUserProcessConnect.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00262D0 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     xxxDCompSpeedHitTest @ 0x1C0026864 (xxxDCompSpeedHitTest.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     NtUserEnableIAMAccess @ 0x1C0089690 (NtUserEnableIAMAccess.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00D9FB8 (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00DA35C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxConnectService @ 0x1C00DC654 (xxxConnectService.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C011C2DC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxFullScreenCleanup @ 0x1C0123E60 (xxxFullScreenCleanup.c)
 *     xxxRemoteDisconnect @ 0x1C0133450 (xxxRemoteDisconnect.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C013383C (xxxRemoteStopScreenUpdates.c)
 *     RemoteDisableScreen @ 0x1C0133A40 (RemoteDisableScreen.c)
 *     EditionUnloadCursorsAndIcons @ 0x1C0138230 (EditionUnloadCursorsAndIcons.c)
 *     InitClipFormatExceptionList @ 0x1C013A2A0 (InitClipFormatExceptionList.c)
 *     NtUserAcquireIAMKey @ 0x1C013F280 (NtUserAcquireIAMKey.c)
 *     InitClipboardILDef @ 0x1C013F580 (InitClipboardILDef.c)
 *     xxxRemoteReconnect @ 0x1C015EF70 (xxxRemoteReconnect.c)
 *     RemoteRedrawScreen @ 0x1C015FF28 (RemoteRedrawScreen.c)
 *     EditionDeactivateMitInput @ 0x1C0160960 (EditionDeactivateMitInput.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D6140 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     _AllowForegroundActivation @ 0x1C01D6E70 (_AllowForegroundActivation.c)
 *     zzzShowStartGlass @ 0x1C01D70F0 (zzzShowStartGlass.c)
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F0584 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     _DelegateCapturePointers @ 0x1C01F114C (_DelegateCapturePointers.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FE338 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C0209C10 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C0209C7C (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C0209CE8 (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E9C (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209FA0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A0DC (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A360 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A970 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A9F0 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020ABA0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE00 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AFA0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B100 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B3F0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B4A0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B580 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B8A0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C020BC3C (xxxDDETrackPostHook.c)
 *     RemoteRedrawRectangle @ 0x1C020D198 (RemoteRedrawRectangle.c)
 *     xxxbFullscreenSwitch @ 0x1C020D4C8 (xxxbFullscreenSwitch.c)
 *     CtxDisplayIOCtl @ 0x1C0212AC0 (CtxDisplayIOCtl.c)
 *     RemoteLogoff @ 0x1C0212BD0 (RemoteLogoff.c)
 *     RemotePassthruDisable @ 0x1C0212C50 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0212D50 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0212F20 (RemoteShadowStart.c)
 *     RemoteThinwireStats @ 0x1C02130D0 (RemoteThinwireStats.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C0213260 (xxxRemoteConsoleShadowStart.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C0213770 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C0213A60 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1C0213BD0 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1C0213C50 (xxxRemoteShadowStop.c)
 *     NtUserInjectTouchInput @ 0x1C02309A0 (NtUserInjectTouchInput.c)
 *     InitMessageTables @ 0x1C0382D50 (InitMessageTables.c)
 *     InitFunctionTables @ 0x1C0383740 (InitFunctionTables.c)
 *     InitOLEFormats @ 0x1C0383BA0 (InitOLEFormats.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0026C14
 * Reason: Hex-Rays returned no pseudocode for 0x1C0026C14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0026C14: mov     [rsp+arg_0], rbx
 * 00000001C0026C19: mov     [rsp+arg_8], rbp
 * 00000001C0026C1E: mov     [rsp+arg_10], rsi
 * 00000001C0026C23: push    rdi
 * 00000001C0026C24: sub     rsp, 30h
 * 00000001C0026C28: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C0026C2F: movzx   edi, r9w
 * 00000001C0026C33: mov     esi, r8d
 * 00000001C0026C36: mov     bl, dl
 * 00000001C0026C38: mov     r11d, r8d
 * 00000001C0026C3B: shr     r11, 10h
 * 00000001C0026C3F: lea     r10d, [rsi-1]
 * 00000001C0026C43: mov     ecx, r10d
 * 00000001C0026C46: and     r10d, 1Fh
 * 00000001C0026C4A: shr     rcx, 5
 * 00000001C0026C4E: lea     rax, [r11+r11*4]
 * 00000001C0026C52: and     ecx, 7FFh
 * 00000001C0026C58: lea     r9, [rcx+rax*4]
 * 00000001C0026C5C: mov     ecx, r10d
 * 00000001C0026C5F: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0026C66: mov     eax, [r10+r9*4+2Ch]
 * 00000001C0026C6B: bt      eax, ecx
 * 00000001C0026C6E: jb      loc_1C0174BCC
 * 00000001C0026C74: and     [rsp+38h+var_10], 0
 * 00000001C0026C7A: mov     r8d, esi
 * 00000001C0026C7D: mov     r9, [rsp+38h+arg_20]
 * 00000001C0026C82: mov     rcx, rbp
 * 00000001C0026C85: movzx   edx, bl
 * 00000001C0026C88: mov     word ptr [rsp+38h+var_18], di
 * 00000001C0026C8D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0026C94: nop     dword ptr [rax+rax+00h]
 * 00000001C0026C99: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0026C9E: mov     rbp, [rsp+38h+arg_8]
 * 00000001C0026CA3: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0026CA8: add     rsp, 30h
 * 00000001C0026CAC: pop     rdi
 * 00000001C0026CAD: retn
 * 00000001C0174BCC: lea     rcx, [r11+r11*4]
 * 00000001C0174BD0: add     rcx, rcx
 * 00000001C0174BD3: cmp     [r10+rcx*8+29h], bl
 * 00000001C0174BD8: jb      loc_1C0026C74
 * 00000001C0174BDE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174BE5: mov     edx, 2Bh ; '+'
 * 00000001C0174BEA: and     [rsp+38h+var_18], 0
 * 00000001C0174BF0: mov     r8, [rsp+38h+arg_20]
 * 00000001C0174BF5: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0174BFA: movzx   r9d, di
 * 00000001C0174BFE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0174C04: nop
 * 00000001C0174C05: jmp     loc_1C0026C74
 */
