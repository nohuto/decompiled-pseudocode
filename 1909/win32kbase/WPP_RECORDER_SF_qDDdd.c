/*
 * XREFs of WPP_RECORDER_SF_qDDdd @ 0x1C0142B2C
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0140ABC (RIMDeliverConfigRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDDdd @ 0x1C0142B2C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0142B2C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0142B2C: mov     r11, rsp
 * 00000001C0142B2F: mov     [r11+8], rbx
 * 00000001C0142B33: mov     [r11+10h], rbp
 * 00000001C0142B37: push    rdi
 * 00000001C0142B38: sub     rsp, 80h
 * 00000001C0142B3F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0142B46: mov     edi, 4
 * 00000001C0142B4B: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0142B52: mov     eax, [rcx+2Ch]
 * 00000001C0142B55: lea     ebp, [rdi+34h]
 * 00000001C0142B58: test    al, 1
 * 00000001C0142B5A: jz      short loc_1C0142BC6
 * 00000001C0142B5C: cmp     [rcx+29h], dil
 * 00000001C0142B60: jb      short loc_1C0142BC6
 * 00000001C0142B62: and     qword ptr [r11-18h], 0
 * 00000001C0142B67: lea     rdx, [r11+50h]
 * 00000001C0142B6B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0142B72: lea     r8, WPP_9fa14f927df6353817215e33bf2b608e_Traceguids
 * 00000001C0142B79: mov     rcx, [rcx+18h]
 * 00000001C0142B7D: mov     [r11-20h], rdi
 * 00000001C0142B81: mov     [r11-28h], rdx
 * 00000001C0142B85: lea     rdx, [r11+48h]
 * 00000001C0142B89: mov     [r11-30h], rdi
 * 00000001C0142B8D: mov     [r11-38h], rdx
 * 00000001C0142B91: lea     rdx, [r11+40h]
 * 00000001C0142B95: mov     [r11-40h], rdi
 * 00000001C0142B99: mov     [r11-48h], rdx
 * 00000001C0142B9D: lea     rdx, [r11+38h]
 * 00000001C0142BA1: mov     [r11-50h], rdi
 * 00000001C0142BA5: mov     [r11-58h], rdx
 * 00000001C0142BA9: lea     rdx, [r11+30h]
 * 00000001C0142BAD: mov     qword ptr [r11-60h], 8
 * 00000001C0142BB5: mov     [r11-68h], rdx
 * 00000001C0142BB9: lea     edx, [rdi+27h]
 * 00000001C0142BBC: movzx   r9d, bp
 * 00000001C0142BC0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0142BC6: and     [rsp+88h+var_10], 0
 * 00000001C0142BCC: lea     rax, [rsp+88h+arg_48]
 * 00000001C0142BD4: mov     [rsp+88h+var_18], rdi
 * 00000001C0142BD9: lea     r9, WPP_9fa14f927df6353817215e33bf2b608e_Traceguids
 * 00000001C0142BE0: mov     [rsp+88h+var_20], rax
 * 00000001C0142BE5: mov     r8d, 1
 * 00000001C0142BEB: mov     [rsp+88h+var_28], rdi
 * 00000001C0142BF0: lea     rax, [rsp+88h+arg_40]
 * 00000001C0142BF8: mov     [rsp+88h+var_30], rax
 * 00000001C0142BFD: mov     edx, edi
 * 00000001C0142BFF: mov     [rsp+88h+var_38], rdi
 * 00000001C0142C04: lea     rax, [rsp+88h+arg_38]
 * 00000001C0142C0C: mov     [rsp+88h+var_40], rax
 * 00000001C0142C11: mov     rcx, rbx
 * 00000001C0142C14: mov     [rsp+88h+var_48], rdi
 * 00000001C0142C19: lea     rax, [rsp+88h+arg_30]
 * 00000001C0142C21: mov     [rsp+88h+var_50], rax
 * 00000001C0142C26: lea     rax, [rsp+88h+arg_28]
 * 00000001C0142C2E: mov     [rsp+88h+var_58], 8
 * 00000001C0142C37: mov     [rsp+88h+var_60], rax
 * 00000001C0142C3C: mov     [rsp+88h+var_68], bp
 * 00000001C0142C41: call    cs:__imp_WppAutoLogTrace
 * 00000001C0142C48: nop     dword ptr [rax+rax+00h]
 * 00000001C0142C4D: lea     r11, [rsp+88h+var_8]
 * 00000001C0142C55: mov     rbx, [r11+10h]
 * 00000001C0142C59: mov     rbp, [r11+18h]
 * 00000001C0142C5D: mov     rsp, r11
 * 00000001C0142C60: pop     rdi
 * 00000001C0142C61: retn
 */
