/*
 * XREFs of WPP_RECORDER_SF_LHH @ 0x1C0174CE8
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C015FE64 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LHH @ 0x1C0174CE8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0174CE8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0174CE8: mov     r11, rsp
 * 00000001C0174CEB: mov     [r11+8], rbx
 * 00000001C0174CEF: mov     [r11+10h], rbp
 * 00000001C0174CF3: push    rdi
 * 00000001C0174CF4: sub     rsp, 60h
 * 00000001C0174CF8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0174CFF: mov     edi, 2
 * 00000001C0174D04: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0174D0B: mov     ebp, 14Ah
 * 00000001C0174D10: mov     eax, [rcx+2Ch]
 * 00000001C0174D13: test    al, 40h
 * 00000001C0174D15: jz      short loc_1C0174D69
 * 00000001C0174D17: cmp     [rcx+29h], dil
 * 00000001C0174D1B: jb      short loc_1C0174D69
 * 00000001C0174D1D: and     qword ptr [r11-18h], 0
 * 00000001C0174D22: lea     rdx, [r11+40h]
 * 00000001C0174D26: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174D2D: lea     r8, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174D34: mov     rcx, [rcx+18h]
 * 00000001C0174D38: mov     [r11-20h], rdi
 * 00000001C0174D3C: mov     [r11-28h], rdx
 * 00000001C0174D40: lea     rdx, [r11+38h]
 * 00000001C0174D44: mov     [r11-30h], rdi
 * 00000001C0174D48: mov     [r11-38h], rdx
 * 00000001C0174D4C: lea     rdx, [r11+30h]
 * 00000001C0174D50: mov     qword ptr [r11-40h], 4
 * 00000001C0174D58: mov     [r11-48h], rdx
 * 00000001C0174D5C: lea     edx, [rdi+29h]
 * 00000001C0174D5F: movzx   r9d, bp
 * 00000001C0174D63: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0174D69: and     [rsp+68h+var_10], 0
 * 00000001C0174D6F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0174D77: mov     [rsp+68h+var_18], rdi
 * 00000001C0174D7C: lea     r9, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174D83: mov     [rsp+68h+var_20], rax
 * 00000001C0174D88: mov     r8d, 7
 * 00000001C0174D8E: mov     [rsp+68h+var_28], rdi
 * 00000001C0174D93: lea     rax, [rsp+68h+arg_30]
 * 00000001C0174D9B: mov     [rsp+68h+var_30], rax
 * 00000001C0174DA0: mov     edx, edi
 * 00000001C0174DA2: lea     rax, [rsp+68h+arg_28]
 * 00000001C0174DAA: mov     [rsp+68h+var_38], 4
 * 00000001C0174DB3: mov     [rsp+68h+var_40], rax
 * 00000001C0174DB8: mov     rcx, rbx
 * 00000001C0174DBB: mov     [rsp+68h+var_48], bp
 * 00000001C0174DC0: call    cs:__imp_WppAutoLogTrace
 * 00000001C0174DC7: nop     dword ptr [rax+rax+00h]
 * 00000001C0174DCC: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0174DD1: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0174DD6: add     rsp, 60h
 * 00000001C0174DDA: pop     rdi
 * 00000001C0174DDB: retn
 */
