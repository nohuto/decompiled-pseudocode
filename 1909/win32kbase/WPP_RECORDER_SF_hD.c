/*
 * XREFs of WPP_RECORDER_SF_hD @ 0x1C0074FAC
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0074B60 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0184AB0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hD @ 0x1C0074FAC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0074FAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0074FAC: mov     [rsp+arg_0], rbx
 * 00000001C0074FB1: push    rdi
 * 00000001C0074FB2: sub     rsp, 50h
 * 00000001C0074FB6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0074FBD: movzx   ebx, r9w
 * 00000001C0074FC1: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0074FC8: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C0074FCF: jnz     loc_1C00EE564
 * 00000001C0074FD5: and     [rsp+58h+var_10], 0
 * 00000001C0074FDB: lea     rax, [rsp+58h+arg_30]
 * 00000001C0074FE3: mov     [rsp+58h+var_18], 4
 * 00000001C0074FEC: lea     r9, WPP_1521667368713990dadd5db48e8e739e_Traceguids
 * 00000001C0074FF3: mov     [rsp+58h+var_20], rax
 * 00000001C0074FF8: mov     edx, 4
 * 00000001C0074FFD: lea     rax, [rsp+58h+arg_28]
 * 00000001C0075005: mov     [rsp+58h+var_28], 2
 * 00000001C007500E: mov     [rsp+58h+var_30], rax
 * 00000001C0075013: mov     rcx, rdi
 * 00000001C0075016: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C007501B: lea     r8d, [rdx+0Ch]
 * 00000001C007501F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0075026: nop     dword ptr [rax+rax+00h]
 * 00000001C007502B: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0075030: add     rsp, 50h
 * 00000001C0075034: pop     rdi
 * 00000001C0075035: retn
 * 00000001C00EE564: cmp     byte ptr [rcx+29h], 4
 * 00000001C00EE568: jb      loc_1C0074FD5
 * 00000001C00EE56E: and     [rsp+58h+var_18], 0
 * 00000001C00EE574: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00EE57C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EE583: lea     r8, WPP_1521667368713990dadd5db48e8e739e_Traceguids
 * 00000001C00EE58A: mov     rcx, [rcx+18h]
 * 00000001C00EE58E: mov     [rsp+58h+var_20], 4
 * 00000001C00EE597: mov     [rsp+58h+var_28], rdx
 * 00000001C00EE59C: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00EE5A4: mov     [rsp+58h+var_30], 2
 * 00000001C00EE5AD: mov     [rsp+58h+var_38], rdx
 * 00000001C00EE5B2: mov     edx, 2Bh ; '+'
 * 00000001C00EE5B7: movzx   r9d, bx
 * 00000001C00EE5BB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EE5C1: nop
 * 00000001C00EE5C2: jmp     loc_1C0074FD5
 */
