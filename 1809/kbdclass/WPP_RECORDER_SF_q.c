/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0005C04
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C0001330 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0005520 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002D00 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0005C04
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005C04
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005C04: mov     r11, rsp
 * 00000001C0005C07: mov     [r11+8], rbx
 * 00000001C0005C0B: push    rdi
 * 00000001C0005C0C: sub     rsp, 40h
 * 00000001C0005C10: mov     rdi, rcx
 * 00000001C0005C13: movzx   ebx, r9w
 * 00000001C0005C17: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005C1E: mov     eax, [rcx+2Ch]
 * 00000001C0005C21: test    al, 10h
 * 00000001C0005C23: jz      short loc_1C0005C61
 * 00000001C0005C25: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005C29: jb      short loc_1C0005C61
 * 00000001C0005C2B: and     qword ptr [r11-18h], 0
 * 00000001C0005C30: lea     rdx, [r11+30h]
 * 00000001C0005C34: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005C3B: lea     r8, WPP_1975c0ad83fe39ae2d5358536952ac4e_Traceguids
 * 00000001C0005C42: mov     rcx, [rcx+18h]
 * 00000001C0005C46: mov     qword ptr [r11-20h], 8
 * 00000001C0005C4E: mov     [r11-28h], rdx
 * 00000001C0005C52: mov     edx, 2Bh ; '+'
 * 00000001C0005C57: movzx   r9d, bx
 * 00000001C0005C5B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005C61: and     [rsp+48h+var_10], 0
 * 00000001C0005C67: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005C6C: mov     edx, 2
 * 00000001C0005C71: mov     [rsp+48h+var_18], 8
 * 00000001C0005C7A: mov     [rsp+48h+var_20], rax
 * 00000001C0005C7F: lea     r9, WPP_1975c0ad83fe39ae2d5358536952ac4e_Traceguids
 * 00000001C0005C86: mov     rcx, rdi
 * 00000001C0005C89: mov     [rsp+48h+var_28], bx
 * 00000001C0005C8E: lea     r8d, [rdx+3]
 * 00000001C0005C92: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005C99: nop     dword ptr [rax+rax+00h]
 * 00000001C0005C9E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005CA3: add     rsp, 40h
 * 00000001C0005CA7: pop     rdi
 * 00000001C0005CA8: retn
 */
