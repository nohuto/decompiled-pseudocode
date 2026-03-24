/*
 * XREFs of BuildHwndList @ 0x1C00CC820
 * Callers:
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0017DDC (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxShowOwnedWindows @ 0x1C0084C90 (xxxShowOwnedWindows.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008712C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C008F63C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxDWP_UpdateUIState @ 0x1C00915B4 (xxxDWP_UpdateUIState.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C00C7664 (BuildWindowListWithDpiBoundaryInfo.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00CCA68 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D94F8 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00ED36C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F8A94 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FDB68 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxDesktopRecalc @ 0x1C0115E7C (xxxDesktopRecalc.c)
 *     AssociateInputContextEx @ 0x1C011F7B0 (AssociateInputContextEx.c)
 *     xxxClientShutdown @ 0x1C0126ED4 (xxxClientShutdown.c)
 *     DestroyInputContext @ 0x1C015623C (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C0159B10 (xxxArrangeIconicWindows.c)
 *     xxxInternalEnumWindow @ 0x1C01D5FEC (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D9048 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01DA5B0 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01DA8E4 (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01E611C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E7E28 (xxxForceWindowToDpiForTest.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3D8C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02448F8 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D5ED8 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for BuildHwndList @ 0x1C00CC820
 * Reason: Hex-Rays returned no pseudocode for 0x1C00CC820
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00CC820: mov     [rsp+arg_8], rbx
 * 00000001C00CC825: mov     [rsp+arg_10], rsi
 * 00000001C00CC82A: mov     [rsp+arg_18], rdi
 * 00000001C00CC82F: push    r14
 * 00000001C00CC831: sub     rsp, 20h
 * 00000001C00CC835: mov     r14, cs:?pbwlCache@@3PEAUtagBWL@@EA; tagBWL * pbwlCache
 * 00000001C00CC83C: mov     rdi, r8
 * 00000001C00CC83F: mov     esi, edx
 * 00000001C00CC841: mov     rbx, rcx
 * 00000001C00CC844: test    r14, r14
 * 00000001C00CC847: jz      loc_1C00CC9A3
 * 00000001C00CC84D: mov     cs:?pbwlCache@@3PEAUtagBWL@@EA, 0; tagBWL * pbwlCache
 * 00000001C00CC858: mov     [r14+18h], rdi
 * 00000001C00CC85C: lea     rax, [r14+20h]
 * 00000001C00CC860: mov     [r14+8], rax
 * 00000001C00CC864: test    rbx, rbx
 * 00000001C00CC867: jz      short loc_1C00CC8B6
 * 00000001C00CC869: mov     [rsp+28h+arg_0], rbp
 * 00000001C00CC86E: mov     ebp, esi
 * 00000001C00CC870: and     ebp, 20h
 * 00000001C00CC873: mov     rdi, [r14+18h]
 * 00000001C00CC877: test    ebp, ebp
 * 00000001C00CC879: jnz     loc_1C01A16DC
 * 00000001C00CC87F: test    sil, 40h
 * 00000001C00CC883: jnz     loc_1C01A170F
 * 00000001C00CC889: test    rdi, rdi
 * 00000001C00CC88C: jz      loc_1C00CC913
 * 00000001C00CC892: cmp     rdi, [rbx+10h]
 * 00000001C00CC896: jz      short loc_1C00CC913
 * 00000001C00CC898: test    sil, 1
 * 00000001C00CC89C: jnz     loc_1C00CC972
 * 00000001C00CC8A2: test    sil, 2
 * 00000001C00CC8A6: jz      short loc_1C00CC8B1
 * 00000001C00CC8A8: mov     rbx, [rbx+58h]
 * 00000001C00CC8AC: test    rbx, rbx
 * 00000001C00CC8AF: jnz     short loc_1C00CC873
 * 00000001C00CC8B1: mov     rbp, [rsp+28h+arg_0]
 * 00000001C00CC8B6: mov     rax, [r14+8]
 * 00000001C00CC8BA: cmp     rax, [r14+10h]
 * 00000001C00CC8BE: jnb     loc_1C01A1745
 * 00000001C00CC8C4: mov     qword ptr [rax], 1
 * 00000001C00CC8CB: test    sil, 8
 * 00000001C00CC8CF: jnz     loc_1C01A175A
 * 00000001C00CC8D5: mov     rcx, cs:__imp_gptiCurrent
 * 00000001C00CC8DC: mov     rax, r14
 * 00000001C00CC8DF: mov     rdx, [rcx]
 * 00000001C00CC8E2: mov     [r14+18h], rdx
 * 00000001C00CC8E6: mov     rcx, cs:__imp_gpbwlList
 * 00000001C00CC8ED: mov     rdx, [rcx]
 * 00000001C00CC8F0: mov     [r14], rdx
 * 00000001C00CC8F3: mov     rcx, cs:__imp_gpbwlList
 * 00000001C00CC8FA: mov     [rcx], r14
 * 00000001C00CC8FD: mov     rbx, [rsp+28h+arg_8]
 * 00000001C00CC902: mov     rsi, [rsp+28h+arg_10]
 * 00000001C00CC907: mov     rdi, [rsp+28h+arg_18]
 * 00000001C00CC90C: add     rsp, 20h
 * 00000001C00CC910: pop     r14
 * 00000001C00CC912: retn
 * 00000001C00CC913: mov     rcx, [r14+8]
 * 00000001C00CC917: mov     rax, [rbx]
 * 00000001C00CC91A: mov     [rcx], rax
 * 00000001C00CC91D: add     qword ptr [r14+8], 8
 * 00000001C00CC922: mov     rdi, [r14+8]
 * 00000001C00CC926: cmp     rdi, [r14+10h]
 * 00000001C00CC92A: jnz     loc_1C00CC898
 * 00000001C00CC930: sub     rdi, r14
 * 00000001C00CC933: mov     r9d, 6C777355h
 * 00000001C00CC939: mov     edx, edi
 * 00000001C00CC93B: mov     rcx, r14
 * 00000001C00CC93E: lea     r8, [rdx+48h]
 * 00000001C00CC942: add     rdx, 8
 * 00000001C00CC946: call    cs:__imp_UserReAllocPool
 * 00000001C00CC94D: nop     dword ptr [rax+rax+00h]
 * 00000001C00CC952: test    rax, rax
 * 00000001C00CC955: jz      loc_1C00CC8B1
 * 00000001C00CC95B: add     rdi, rax
 * 00000001C00CC95E: mov     r14, rax
 * 00000001C00CC961: mov     [rax+8], rdi
 * 00000001C00CC965: lea     rcx, [rdi+40h]
 * 00000001C00CC969: mov     [rax+10h], rcx
 * 00000001C00CC96D: jmp     loc_1C00CC898
 * 00000001C00CC972: mov     rdx, [rbx+70h]; struct tagWND *
 * 00000001C00CC976: test    rdx, rdx
 * 00000001C00CC979: jz      loc_1C00CC8A2
 * 00000001C00CC97F: mov     r8d, 3; unsigned int
 * 00000001C00CC985: mov     rcx, r14; struct tagBWL *
 * 00000001C00CC988: call    ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z; InternalBuildHwndList(tagBWL *,tagWND *,uint)
 * 00000001C00CC98D: mov     r14, rax
 * 00000001C00CC990: mov     rax, [rax+10h]
 * 00000001C00CC994: cmp     [r14+8], rax
 * 00000001C00CC998: jb      loc_1C00CC8A2
 * 00000001C00CC99E: jmp     loc_1C00CC8B1
 * 00000001C00CC9A3: mov     edx, 6C777355h
 * 00000001C00CC9A8: mov     ecx, 128h
 * 00000001C00CC9AD: call    cs:__imp_Win32AllocPool
 * 00000001C00CC9B4: nop     dword ptr [rax+rax+00h]
 * 00000001C00CC9B9: mov     r14, rax
 * 00000001C00CC9BC: test    rax, rax
 * 00000001C00CC9BF: jz      short loc_1C00CC9D0
 * 00000001C00CC9C1: add     rax, 118h
 * 00000001C00CC9C7: mov     [r14+10h], rax
 * 00000001C00CC9CB: jmp     loc_1C00CC858
 * 00000001C00CC9D0: xor     eax, eax
 * 00000001C00CC9D2: jmp     loc_1C00CC8FD
 * 00000001C01A16DC: mov     rcx, rbx
 * 00000001C01A16DF: call    IsNonImmersiveBand
 * 00000001C01A16E4: test    eax, eax
 * 00000001C01A16E6: jnz     loc_1C00CC87F
 * 00000001C01A16EC: test    sil, 10h
 * 00000001C01A16F0: jz      loc_1C00CC898
 * 00000001C01A16F6: mov     rax, [rbx+28h]
 * 00000001C01A16FA: test    dword ptr [rax+0E8h], 1000000h
 * 00000001C01A1704: jz      loc_1C00CC898
 * 00000001C01A170A: jmp     loc_1C00CC87F
 * 00000001C01A170F: mov     rcx, [rbx+28h]
 * 00000001C01A1713: movzx   eax, byte ptr [rcx+1Fh]
 * 00000001C01A1717: and     al, 11h
 * 00000001C01A1719: cmp     al, 10h
 * 00000001C01A171B: jnz     loc_1C00CC889
 * 00000001C01A1721: test    byte ptr [rcx+14h], 40h
 * 00000001C01A1725: jnz     loc_1C00CC889
 * 00000001C01A172B: mov     edx, 0FFh; unsigned int
 * 00000001C01A1730: mov     rcx, rbx; struct tagWND *
 * 00000001C01A1733: call    ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z; IsWindowSubjectToShellWindowBehavior(tagWND *,ulong)
 * 00000001C01A1738: test    al, al
 * 00000001C01A173A: jnz     loc_1C00CC898
 * 00000001C01A1740: jmp     loc_1C00CC889
 * 00000001C01A1745: mov     rcx, r14
 * 00000001C01A1748: call    cs:__imp_Win32FreePool
 * 00000001C01A174F: nop     dword ptr [rax+rax+00h]
 * 00000001C01A1754: nop
 * 00000001C01A1755: jmp     loc_1C00CC9D0
 * 00000001C01A175A: mov     rcx, r14; struct tagBWL *
 * 00000001C01A175D: call    ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z; InternalRebuildHwndListForIMEClass(tagBWL *)
 * 00000001C01A1762: mov     r14, rax
 * 00000001C01A1765: jmp     loc_1C00CC8D5
 */
