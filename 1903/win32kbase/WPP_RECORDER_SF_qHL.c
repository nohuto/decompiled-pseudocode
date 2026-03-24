/*
 * XREFs of WPP_RECORDER_SF_qHL @ 0x1C017768C
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C016E320 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qHL @ 0x1C017768C
 * Reason: Hex-Rays returned no pseudocode for 0x1C017768C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C017768C: mov     r11, rsp
 * 00000001C017768F: mov     [r11+8], rbx
 * 00000001C0177693: push    r14
 * 00000001C0177695: sub     rsp, 60h
 * 00000001C0177699: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01776A0: mov     r14d, 130h
 * 00000001C01776A6: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01776AD: mov     eax, [rcx+2Ch]
 * 00000001C01776B0: test    al, 40h
 * 00000001C01776B2: jz      short loc_1C0177710
 * 00000001C01776B4: cmp     byte ptr [rcx+29h], 4
 * 00000001C01776B8: jb      short loc_1C0177710
 * 00000001C01776BA: and     qword ptr [r11-18h], 0
 * 00000001C01776BF: lea     rdx, [r11+40h]
 * 00000001C01776C3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01776CA: lea     r8, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C01776D1: mov     rcx, [rcx+18h]
 * 00000001C01776D5: mov     qword ptr [r11-20h], 4
 * 00000001C01776DD: mov     [r11-28h], rdx
 * 00000001C01776E1: lea     rdx, [r11+38h]
 * 00000001C01776E5: mov     qword ptr [r11-30h], 2
 * 00000001C01776ED: mov     [r11-38h], rdx
 * 00000001C01776F1: lea     rdx, [r11+30h]
 * 00000001C01776F5: mov     qword ptr [r11-40h], 8
 * 00000001C01776FD: mov     [r11-48h], rdx
 * 00000001C0177701: mov     edx, 2Bh ; '+'
 * 00000001C0177706: movzx   r9d, r14w
 * 00000001C017770A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0177710: and     [rsp+68h+var_10], 0
 * 00000001C0177716: lea     rax, [rsp+68h+arg_38]
 * 00000001C017771E: mov     [rsp+68h+var_18], 4
 * 00000001C0177727: lea     r9, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C017772E: mov     [rsp+68h+var_20], rax
 * 00000001C0177733: mov     edx, 4
 * 00000001C0177738: mov     [rsp+68h+var_28], 2
 * 00000001C0177741: lea     rax, [rsp+68h+arg_30]
 * 00000001C0177749: mov     [rsp+68h+var_30], rax
 * 00000001C017774E: mov     rcx, rbx
 * 00000001C0177751: lea     rax, [rsp+68h+arg_28]
 * 00000001C0177759: mov     [rsp+68h+var_38], 8
 * 00000001C0177762: mov     [rsp+68h+var_40], rax
 * 00000001C0177767: lea     r8d, [rdx+3]
 * 00000001C017776B: mov     [rsp+68h+var_48], r14w
 * 00000001C0177771: call    cs:__imp_WppAutoLogTrace
 * 00000001C0177778: nop     dword ptr [rax+rax+00h]
 * 00000001C017777D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0177782: add     rsp, 60h
 * 00000001C0177786: pop     r14
 * 00000001C0177788: retn
 */
