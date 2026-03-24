/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C002BE9C
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     CancelForegroundActivate @ 0x1C00292F4 (CancelForegroundActivate.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0029B90 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C002C740 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C0071140 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00EEC10 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C00EEEE0 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C00EEF80 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     UserJobCallout @ 0x1C00EF070 (UserJobCallout.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C010831C (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C01338AC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0135164 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0137440 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0139FEC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D5FB0 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     zzzShowStartGlass @ 0x1C01D6F70 (zzzShowStartGlass.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEC9C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C0209AA4 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A0B0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C020A4C4 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A740 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C020AA20 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AA7C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxCleanupAndFreeDdeConv @ 0x1C020B590 (xxxCleanupAndFreeDdeConv.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 *     xxxFreeDdeConv @ 0x1C020C054 (xxxFreeDdeConv.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023A164 (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023A204 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023A25C (_anonymous_namespace_--WindowSizingUpdate.c)
 *     xxxHardErrorControl @ 0x1C023EA4C (xxxHardErrorControl.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C002BE9C
 * Reason: Hex-Rays returned no pseudocode for 0x1C002BE9C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002BE9C: mov     [rsp+arg_0], rbx
 * 00000001C002BEA1: mov     [rsp+arg_8], rsi
 * 00000001C002BEA6: push    rdi
 * 00000001C002BEA7: sub     rsp, 40h
 * 00000001C002BEAB: mov     rsi, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C002BEB2: movzx   ebx, r9w
 * 00000001C002BEB6: mov     edi, r8d
 * 00000001C002BEB9: mov     r11d, r8d
 * 00000001C002BEBC: shr     r11, 10h
 * 00000001C002BEC0: lea     r10d, [rdi-1]
 * 00000001C002BEC4: mov     ecx, r10d
 * 00000001C002BEC7: and     r10d, 1Fh
 * 00000001C002BECB: shr     rcx, 5
 * 00000001C002BECF: lea     rax, [r11+r11*4]
 * 00000001C002BED3: and     ecx, 7FFh
 * 00000001C002BED9: lea     rdx, [rcx+rax*4]
 * 00000001C002BEDD: mov     ecx, r10d
 * 00000001C002BEE0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C002BEE7: mov     eax, [r10+rdx*4+2Ch]
 * 00000001C002BEEC: bt      eax, ecx
 * 00000001C002BEEF: jb      loc_1C01777D8
 * 00000001C002BEF5: and     [rsp+48h+var_10], 0
 * 00000001C002BEFB: lea     rax, [rsp+48h+arg_28]
 * 00000001C002BF00: mov     r9, [rsp+48h+arg_20]
 * 00000001C002BF05: mov     r8d, edi
 * 00000001C002BF08: mov     [rsp+48h+var_18], 8
 * 00000001C002BF11: mov     edx, 4
 * 00000001C002BF16: mov     [rsp+48h+var_20], rax
 * 00000001C002BF1B: mov     rcx, rsi
 * 00000001C002BF1E: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C002BF23: call    cs:__imp_WppAutoLogTrace
 * 00000001C002BF2A: nop     dword ptr [rax+rax+00h]
 * 00000001C002BF2F: mov     rbx, [rsp+48h+arg_0]
 * 00000001C002BF34: mov     rsi, [rsp+48h+arg_8]
 * 00000001C002BF39: add     rsp, 40h
 * 00000001C002BF3D: pop     rdi
 * 00000001C002BF3E: retn
 * 00000001C01777D8: lea     rcx, [r11+r11*4]
 * 00000001C01777DC: add     rcx, rcx
 * 00000001C01777DF: cmp     byte ptr [r10+rcx*8+29h], 4
 * 00000001C01777E5: jb      loc_1C002BEF5
 * 00000001C01777EB: and     [rsp+48h+var_18], 0
 * 00000001C01777F1: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01777F6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01777FD: mov     r8, [rsp+48h+arg_20]
 * 00000001C0177802: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0177807: mov     [rsp+48h+var_20], 8
 * 00000001C0177810: mov     [rsp+48h+var_28], rdx
 * 00000001C0177815: mov     edx, 2Bh ; '+'
 * 00000001C017781A: movzx   r9d, bx
 * 00000001C017781E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0177824: nop
 * 00000001C0177825: jmp     loc_1C002BEF5
 */
