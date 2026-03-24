/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0005C3C
 * Callers:
 *     MouseClassWaitWakeComplete @ 0x1C0005230 (MouseClassWaitWakeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C0005C3C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005C3C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005C3C: mov     r11, rsp
 * 00000001C0005C3F: mov     [r11+8], rbx
 * 00000001C0005C43: push    rbp
 * 00000001C0005C44: sub     rsp, 50h
 * 00000001C0005C48: mov     rbx, rcx
 * 00000001C0005C4B: mov     ebp, 5Ah ; 'Z'
 * 00000001C0005C50: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005C57: mov     eax, [rcx+2Ch]
 * 00000001C0005C5A: test    al, 10h
 * 00000001C0005C5C: jz      short loc_1C0005CA8
 * 00000001C0005C5E: cmp     byte ptr [rcx+29h], 2
 * 00000001C0005C62: jb      short loc_1C0005CA8
 * 00000001C0005C64: and     qword ptr [r11-18h], 0
 * 00000001C0005C69: lea     rdx, [r11+38h]
 * 00000001C0005C6D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005C74: lea     r8, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C0005C7B: mov     rcx, [rcx+18h]
 * 00000001C0005C7F: mov     qword ptr [r11-20h], 4
 * 00000001C0005C87: mov     [r11-28h], rdx
 * 00000001C0005C8B: lea     rdx, [r11+30h]
 * 00000001C0005C8F: mov     qword ptr [r11-30h], 8
 * 00000001C0005C97: mov     [r11-38h], rdx
 * 00000001C0005C9B: lea     edx, [rbp-2Fh]
 * 00000001C0005C9E: movzx   r9d, bp
 * 00000001C0005CA2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005CA8: and     [rsp+58h+var_10], 0
 * 00000001C0005CAE: lea     rax, [rsp+58h+arg_30]
 * 00000001C0005CB6: mov     [rsp+58h+var_18], 4
 * 00000001C0005CBF: lea     r9, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C0005CC6: mov     [rsp+58h+var_20], rax
 * 00000001C0005CCB: mov     edx, 2
 * 00000001C0005CD0: lea     rax, [rsp+58h+arg_28]
 * 00000001C0005CD8: mov     [rsp+58h+var_28], 8
 * 00000001C0005CE1: mov     [rsp+58h+var_30], rax
 * 00000001C0005CE6: mov     rcx, rbx
 * 00000001C0005CE9: mov     [rsp+58h+var_38], bp
 * 00000001C0005CEE: lea     r8d, [rdx+3]
 * 00000001C0005CF2: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005CF9: nop     dword ptr [rax+rax+00h]
 * 00000001C0005CFE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005D03: add     rsp, 50h
 * 00000001C0005D07: pop     rbp
 * 00000001C0005D08: retn
 */
