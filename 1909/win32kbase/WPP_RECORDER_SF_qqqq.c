/*
 * XREFs of WPP_RECORDER_SF_qqqq @ 0x1C0058CCC
 * Callers:
 *     RIMReadInput @ 0x1C0057060 (RIMReadInput.c)
 *     rimSignalReadComplete @ 0x1C01520B4 (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqq @ 0x1C0058CCC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0058CCC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0058CCC: mov     [rsp+arg_0], rbx
 * 00000001C0058CD1: mov     [rsp+arg_8], rbp
 * 00000001C0058CD6: mov     [rsp+arg_10], rsi
 * 00000001C0058CDB: push    rdi
 * 00000001C0058CDC: sub     rsp, 70h
 * 00000001C0058CE0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0058CE7: movzx   edi, r9w
 * 00000001C0058CEB: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0058CF2: mov     bl, dl
 * 00000001C0058CF4: mov     ebp, 8
 * 00000001C0058CF9: mov     eax, [rcx+2Ch]
 * 00000001C0058CFC: test    al, 1
 * 00000001C0058CFE: jnz     loc_1C00DDF5E
 * 00000001C0058D04: and     [rsp+78h+var_10], 0
 * 00000001C0058D0A: lea     rax, [rsp+78h+arg_40]
 * 00000001C0058D12: mov     r9, [rsp+78h+arg_20]
 * 00000001C0058D1A: mov     r8d, 1
 * 00000001C0058D20: mov     [rsp+78h+var_18], rbp
 * 00000001C0058D25: mov     rcx, rsi
 * 00000001C0058D28: mov     [rsp+78h+var_20], rax
 * 00000001C0058D2D: lea     rax, [rsp+78h+arg_38]
 * 00000001C0058D35: mov     [rsp+78h+var_28], rbp
 * 00000001C0058D3A: mov     [rsp+78h+var_30], rax
 * 00000001C0058D3F: lea     rax, [rsp+78h+arg_30]
 * 00000001C0058D47: mov     [rsp+78h+var_38], rbp
 * 00000001C0058D4C: mov     [rsp+78h+var_40], rax
 * 00000001C0058D51: lea     rax, [rsp+78h+arg_28]
 * 00000001C0058D59: mov     [rsp+78h+var_48], rbp
 * 00000001C0058D5E: mov     [rsp+78h+var_50], rax
 * 00000001C0058D63: movzx   edx, bl
 * 00000001C0058D66: mov     word ptr [rsp+78h+var_58], di
 * 00000001C0058D6B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0058D72: nop     dword ptr [rax+rax+00h]
 * 00000001C0058D77: lea     r11, [rsp+78h+var_8]
 * 00000001C0058D7C: mov     rbx, [r11+10h]
 * 00000001C0058D80: mov     rbp, [r11+18h]
 * 00000001C0058D84: mov     rsi, [r11+20h]
 * 00000001C0058D88: mov     rsp, r11
 * 00000001C0058D8B: pop     rdi
 * 00000001C0058D8C: retn
 * 00000001C00DDF5E: cmp     [rcx+29h], bl
 * 00000001C00DDF61: jb      loc_1C0058D04
 * 00000001C00DDF67: and     [rsp+78h+var_18], 0
 * 00000001C00DDF6D: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00DDF75: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00DDF7C: mov     r8, [rsp+78h+arg_20]
 * 00000001C00DDF84: mov     rcx, [rcx+18h]
 * 00000001C00DDF88: mov     [rsp+78h+var_20], rbp
 * 00000001C00DDF8D: mov     [rsp+78h+var_28], rdx
 * 00000001C00DDF92: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00DDF9A: mov     [rsp+78h+var_30], rbp
 * 00000001C00DDF9F: mov     [rsp+78h+var_38], rdx
 * 00000001C00DDFA4: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00DDFAC: mov     [rsp+78h+var_40], rbp
 * 00000001C00DDFB1: mov     [rsp+78h+var_48], rdx
 * 00000001C00DDFB6: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00DDFBE: mov     [rsp+78h+var_50], rbp
 * 00000001C00DDFC3: mov     [rsp+78h+var_58], rdx
 * 00000001C00DDFC8: mov     edx, 2Bh ; '+'
 * 00000001C00DDFCD: movzx   r9d, di
 * 00000001C00DDFD1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00DDFD7: nop
 * 00000001C00DDFD8: jmp     loc_1C0058D04
 */
