/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C001BBC0
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DB5C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     NtUserSendInput @ 0x1C001DD40 (NtUserSendInput.c)
 *     xxxSendInput @ 0x1C001E64C (xxxSendInput.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0029B90 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010E800 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DE5DC (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DE898 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E2C (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     NtUserInjectTouchInput @ 0x1C0230380 (NtUserInjectTouchInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C001BBC0
 * Reason: Hex-Rays returned no pseudocode for 0x1C001BBC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001BBC0: mov     [rsp+arg_0], rbx
 * 00000001C001BBC5: mov     [rsp+arg_8], rbp
 * 00000001C001BBCA: mov     [rsp+arg_10], rsi
 * 00000001C001BBCF: push    rdi
 * 00000001C001BBD0: sub     rsp, 40h
 * 00000001C001BBD4: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C001BBDB: movzx   edi, r9w
 * 00000001C001BBDF: mov     esi, r8d
 * 00000001C001BBE2: mov     bl, dl
 * 00000001C001BBE4: mov     r11d, r8d
 * 00000001C001BBE7: shr     r11, 10h
 * 00000001C001BBEB: lea     r10d, [rsi-1]
 * 00000001C001BBEF: mov     ecx, r10d
 * 00000001C001BBF2: and     r10d, 1Fh
 * 00000001C001BBF6: shr     rcx, 5
 * 00000001C001BBFA: lea     rax, [r11+r11*4]
 * 00000001C001BBFE: and     ecx, 7FFh
 * 00000001C001BC04: lea     r9, [rcx+rax*4]
 * 00000001C001BC08: mov     ecx, r10d
 * 00000001C001BC0B: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001BC12: mov     eax, [r10+r9*4+2Ch]
 * 00000001C001BC17: bt      eax, ecx
 * 00000001C001BC1A: jb      loc_1C0173D44
 * 00000001C001BC20: and     [rsp+48h+var_10], 0
 * 00000001C001BC26: lea     rax, [rsp+48h+arg_28]
 * 00000001C001BC2B: mov     r9, [rsp+48h+arg_20]
 * 00000001C001BC30: mov     r8d, esi
 * 00000001C001BC33: mov     [rsp+48h+var_18], 4
 * 00000001C001BC3C: mov     rcx, rbp
 * 00000001C001BC3F: mov     [rsp+48h+var_20], rax
 * 00000001C001BC44: movzx   edx, bl
 * 00000001C001BC47: mov     word ptr [rsp+48h+var_28], di
 * 00000001C001BC4C: call    cs:__imp_WppAutoLogTrace
 * 00000001C001BC53: nop     dword ptr [rax+rax+00h]
 * 00000001C001BC58: mov     rbx, [rsp+48h+arg_0]
 * 00000001C001BC5D: mov     rbp, [rsp+48h+arg_8]
 * 00000001C001BC62: mov     rsi, [rsp+48h+arg_10]
 * 00000001C001BC67: add     rsp, 40h
 * 00000001C001BC6B: pop     rdi
 * 00000001C001BC6C: retn
 * 00000001C0173D44: lea     rcx, [r11+r11*4]
 * 00000001C0173D48: add     rcx, rcx
 * 00000001C0173D4B: cmp     [r10+rcx*8+29h], bl
 * 00000001C0173D50: jb      loc_1C001BC20
 * 00000001C0173D56: and     [rsp+48h+var_18], 0
 * 00000001C0173D5C: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0173D61: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0173D68: mov     r8, [rsp+48h+arg_20]
 * 00000001C0173D6D: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0173D72: mov     [rsp+48h+var_20], 4
 * 00000001C0173D7B: mov     [rsp+48h+var_28], rdx
 * 00000001C0173D80: mov     edx, 2Bh ; '+'
 * 00000001C0173D85: movzx   r9d, di
 * 00000001C0173D89: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0173D8F: nop
 * 00000001C0173D90: jmp     loc_1C001BC20
 */
