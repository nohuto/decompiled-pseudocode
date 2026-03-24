/*
 * XREFs of BuildHwndList @ 0x1C006DEF0
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C000FCB8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxDesktopRecalc @ 0x1C0010B68 (xxxDesktopRecalc.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0011AAC (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxShowOwnedWindows @ 0x1C0014CEC (xxxShowOwnedWindows.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018C6C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0068D34 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006E138 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00CBF4C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00D98A8 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00EFC34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     AssociateInputContextEx @ 0x1C00FA3E0 (AssociateInputContextEx.c)
 *     xxxClientShutdown @ 0x1C01026EC (xxxClientShutdown.c)
 *     xxxDWP_UpdateUIState @ 0x1C012C39C (xxxDWP_UpdateUIState.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C01357E0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     DestroyInputContext @ 0x1C0156FFC (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C015AAC0 (xxxArrangeIconicWindows.c)
 *     xxxInternalEnumWindow @ 0x1C01D5E5C (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D8EC8 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01DA430 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01DA764 (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E5F9C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7AC0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E7CA8 (xxxForceWindowToDpiForTest.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02441B8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D5D48 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for BuildHwndList @ 0x1C006DEF0
 * Reason: Hex-Rays returned no pseudocode for 0x1C006DEF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006DEF0: mov     [rsp+arg_8], rbx
 * 00000001C006DEF5: mov     [rsp+arg_10], rsi
 * 00000001C006DEFA: mov     [rsp+arg_18], rdi
 * 00000001C006DEFF: push    r14
 * 00000001C006DF01: sub     rsp, 20h
 * 00000001C006DF05: mov     r14, cs:?pbwlCache@@3PEAUtagBWL@@EA; tagBWL * pbwlCache
 * 00000001C006DF0C: mov     rdi, r8
 * 00000001C006DF0F: mov     esi, edx
 * 00000001C006DF11: mov     rbx, rcx
 * 00000001C006DF14: test    r14, r14
 * 00000001C006DF17: jz      loc_1C006E073
 * 00000001C006DF1D: mov     cs:?pbwlCache@@3PEAUtagBWL@@EA, 0; tagBWL * pbwlCache
 * 00000001C006DF28: mov     [r14+18h], rdi
 * 00000001C006DF2C: lea     rax, [r14+20h]
 * 00000001C006DF30: mov     [r14+8], rax
 * 00000001C006DF34: test    rbx, rbx
 * 00000001C006DF37: jz      short loc_1C006DF86
 * 00000001C006DF39: mov     [rsp+28h+arg_0], rbp
 * 00000001C006DF3E: mov     ebp, esi
 * 00000001C006DF40: and     ebp, 20h
 * 00000001C006DF43: mov     rdi, [r14+18h]
 * 00000001C006DF47: test    ebp, ebp
 * 00000001C006DF49: jnz     loc_1C01801F0
 * 00000001C006DF4F: test    sil, 40h
 * 00000001C006DF53: jnz     loc_1C0180223
 * 00000001C006DF59: test    rdi, rdi
 * 00000001C006DF5C: jz      loc_1C006DFE3
 * 00000001C006DF62: cmp     rdi, [rbx+10h]
 * 00000001C006DF66: jz      short loc_1C006DFE3
 * 00000001C006DF68: test    sil, 1
 * 00000001C006DF6C: jnz     loc_1C006E042
 * 00000001C006DF72: test    sil, 2
 * 00000001C006DF76: jz      short loc_1C006DF81
 * 00000001C006DF78: mov     rbx, [rbx+58h]
 * 00000001C006DF7C: test    rbx, rbx
 * 00000001C006DF7F: jnz     short loc_1C006DF43
 * 00000001C006DF81: mov     rbp, [rsp+28h+arg_0]
 * 00000001C006DF86: mov     rax, [r14+8]
 * 00000001C006DF8A: cmp     rax, [r14+10h]
 * 00000001C006DF8E: jnb     loc_1C0180259
 * 00000001C006DF94: mov     qword ptr [rax], 1
 * 00000001C006DF9B: test    sil, 8
 * 00000001C006DF9F: jnz     loc_1C018026E
 * 00000001C006DFA5: mov     rcx, cs:__imp_gptiCurrent
 * 00000001C006DFAC: mov     rax, r14
 * 00000001C006DFAF: mov     rdx, [rcx]
 * 00000001C006DFB2: mov     [r14+18h], rdx
 * 00000001C006DFB6: mov     rcx, cs:__imp_gpbwlList
 * 00000001C006DFBD: mov     rdx, [rcx]
 * 00000001C006DFC0: mov     [r14], rdx
 * 00000001C006DFC3: mov     rcx, cs:__imp_gpbwlList
 * 00000001C006DFCA: mov     [rcx], r14
 * 00000001C006DFCD: mov     rbx, [rsp+28h+arg_8]
 * 00000001C006DFD2: mov     rsi, [rsp+28h+arg_10]
 * 00000001C006DFD7: mov     rdi, [rsp+28h+arg_18]
 * 00000001C006DFDC: add     rsp, 20h
 * 00000001C006DFE0: pop     r14
 * 00000001C006DFE2: retn
 * 00000001C006DFE3: mov     rcx, [r14+8]
 * 00000001C006DFE7: mov     rax, [rbx]
 * 00000001C006DFEA: mov     [rcx], rax
 * 00000001C006DFED: add     qword ptr [r14+8], 8
 * 00000001C006DFF2: mov     rdi, [r14+8]
 * 00000001C006DFF6: cmp     rdi, [r14+10h]
 * 00000001C006DFFA: jnz     loc_1C006DF68
 * 00000001C006E000: sub     rdi, r14
 * 00000001C006E003: mov     r9d, 6C777355h
 * 00000001C006E009: mov     edx, edi
 * 00000001C006E00B: mov     rcx, r14
 * 00000001C006E00E: lea     r8, [rdx+48h]
 * 00000001C006E012: add     rdx, 8
 * 00000001C006E016: call    cs:__imp_UserReAllocPool
 * 00000001C006E01D: nop     dword ptr [rax+rax+00h]
 * 00000001C006E022: test    rax, rax
 * 00000001C006E025: jz      loc_1C006DF81
 * 00000001C006E02B: add     rdi, rax
 * 00000001C006E02E: mov     r14, rax
 * 00000001C006E031: mov     [rax+8], rdi
 * 00000001C006E035: lea     rcx, [rdi+40h]
 * 00000001C006E039: mov     [rax+10h], rcx
 * 00000001C006E03D: jmp     loc_1C006DF68
 * 00000001C006E042: mov     rdx, [rbx+70h]; struct tagWND *
 * 00000001C006E046: test    rdx, rdx
 * 00000001C006E049: jz      loc_1C006DF72
 * 00000001C006E04F: mov     r8d, 3; unsigned int
 * 00000001C006E055: mov     rcx, r14; struct tagBWL *
 * 00000001C006E058: call    ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z; InternalBuildHwndList(tagBWL *,tagWND *,uint)
 * 00000001C006E05D: mov     r14, rax
 * 00000001C006E060: mov     rax, [rax+10h]
 * 00000001C006E064: cmp     [r14+8], rax
 * 00000001C006E068: jb      loc_1C006DF72
 * 00000001C006E06E: jmp     loc_1C006DF81
 * 00000001C006E073: mov     edx, 6C777355h
 * 00000001C006E078: mov     ecx, 128h
 * 00000001C006E07D: call    cs:__imp_Win32AllocPool
 * 00000001C006E084: nop     dword ptr [rax+rax+00h]
 * 00000001C006E089: mov     r14, rax
 * 00000001C006E08C: test    rax, rax
 * 00000001C006E08F: jz      short loc_1C006E0A0
 * 00000001C006E091: add     rax, 118h
 * 00000001C006E097: mov     [r14+10h], rax
 * 00000001C006E09B: jmp     loc_1C006DF28
 * 00000001C006E0A0: xor     eax, eax
 * 00000001C006E0A2: jmp     loc_1C006DFCD
 * 00000001C01801F0: mov     rcx, rbx
 * 00000001C01801F3: call    IsNonImmersiveBand
 * 00000001C01801F8: test    eax, eax
 * 00000001C01801FA: jnz     loc_1C006DF4F
 * 00000001C0180200: test    sil, 10h
 * 00000001C0180204: jz      loc_1C006DF68
 * 00000001C018020A: mov     rax, [rbx+28h]
 * 00000001C018020E: test    dword ptr [rax+0E8h], 1000000h
 * 00000001C0180218: jz      loc_1C006DF68
 * 00000001C018021E: jmp     loc_1C006DF4F
 * 00000001C0180223: mov     rcx, [rbx+28h]
 * 00000001C0180227: movzx   eax, byte ptr [rcx+1Fh]
 * 00000001C018022B: and     al, 11h
 * 00000001C018022D: cmp     al, 10h
 * 00000001C018022F: jnz     loc_1C006DF59
 * 00000001C0180235: test    byte ptr [rcx+14h], 40h
 * 00000001C0180239: jnz     loc_1C006DF59
 * 00000001C018023F: mov     edx, 0FFh; unsigned int
 * 00000001C0180244: mov     rcx, rbx; struct tagWND *
 * 00000001C0180247: call    ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z; IsWindowSubjectToShellWindowBehavior(tagWND *,ulong)
 * 00000001C018024C: test    al, al
 * 00000001C018024E: jnz     loc_1C006DF68
 * 00000001C0180254: jmp     loc_1C006DF59
 * 00000001C0180259: mov     rcx, r14
 * 00000001C018025C: call    cs:__imp_Win32FreePool
 * 00000001C0180263: nop     dword ptr [rax+rax+00h]
 * 00000001C0180268: nop
 * 00000001C0180269: jmp     loc_1C006E0A0
 * 00000001C018026E: mov     rcx, r14; struct tagBWL *
 * 00000001C0180271: call    ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z; InternalRebuildHwndListForIMEClass(tagBWL *)
 * 00000001C0180276: mov     r14, rax
 * 00000001C0180279: jmp     loc_1C006DFA5
 */
