/*
 * XREFs of WPP_RECORDER_SF_sd @ 0x1C0183A98
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0182A30 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0186FE0 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sd @ 0x1C0183A98
 * Reason: Hex-Rays returned no pseudocode for 0x1C0183A98
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0183A98: mov     rax, rsp
 * 00000001C0183A9B: mov     [rax+8], rbx
 * 00000001C0183A9F: mov     [rax+10h], rbp
 * 00000001C0183AA3: mov     [rax+18h], rsi
 * 00000001C0183AA7: mov     [rax+20h], rdi
 * 00000001C0183AAB: push    r12
 * 00000001C0183AAD: push    r14
 * 00000001C0183AAF: push    r15
 * 00000001C0183AB1: sub     rsp, 50h
 * 00000001C0183AB5: mov     rsi, cs:WPP_GLOBAL_Control
 * 00000001C0183ABC: movzx   r14d, r9w
 * 00000001C0183AC0: mov     r12, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0183AC7: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0183ACB: mov     rbx, [rsp+68h+arg_28]
 * 00000001C0183AD3: mov     bpl, dl
 * 00000001C0183AD6: mov     r15d, r8d
 * 00000001C0183AD9: mov     r11d, r8d
 * 00000001C0183ADC: lea     r8, stru_1C01EAA14
 * 00000001C0183AE3: shr     r11, 10h
 * 00000001C0183AE7: lea     r10d, [r15-1]
 * 00000001C0183AEB: mov     ecx, r10d
 * 00000001C0183AEE: and     r10d, 1Fh
 * 00000001C0183AF2: shr     rcx, 5
 * 00000001C0183AF6: lea     rax, [r11+r11*4]
 * 00000001C0183AFA: and     ecx, 7FFh
 * 00000001C0183B00: lea     r9, [rcx+rax*4]
 * 00000001C0183B04: mov     eax, [rsi+r9*4+2Ch]
 * 00000001C0183B09: bt      eax, r10d
 * 00000001C0183B0D: jnb     loc_1C0183B96
 * 00000001C0183B13: lea     r10, [r11+r11*4]
 * 00000001C0183B17: add     r10, r10
 * 00000001C0183B1A: cmp     [rsi+r10*8+29h], dl
 * 00000001C0183B1F: jb      short loc_1C0183B96
 * 00000001C0183B21: test    rbx, rbx
 * 00000001C0183B24: jz      short loc_1C0183B37
 * 00000001C0183B26: mov     rdx, rdi
 * 00000001C0183B29: inc     rdx
 * 00000001C0183B2C: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0183B30: jnz     short loc_1C0183B29
 * 00000001C0183B32: inc     rdx
 * 00000001C0183B35: jmp     short loc_1C0183B3C
 * 00000001C0183B37: mov     edx, 5
 * 00000001C0183B3C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0183B43: test    rbx, rbx
 * 00000001C0183B46: mov     rcx, rbx
 * 00000001C0183B49: movzx   r9d, r14w
 * 00000001C0183B4D: cmovz   rcx, r8
 * 00000001C0183B51: and     [rsp+68h+var_28], 0
 * 00000001C0183B57: mov     [rsp+68h+var_30], 4
 * 00000001C0183B60: lea     r8, [rsp+68h+arg_30]
 * 00000001C0183B68: mov     [rsp+68h+var_38], r8
 * 00000001C0183B6D: mov     r8, [rsp+68h+arg_20]
 * 00000001C0183B75: mov     [rsp+68h+var_40], rdx
 * 00000001C0183B7A: mov     edx, 2Bh ; '+'
 * 00000001C0183B7F: mov     [rsp+68h+var_48], rcx
 * 00000001C0183B84: mov     rcx, [rsi+r10*8+18h]
 * 00000001C0183B89: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0183B8F: lea     r8, stru_1C01EAA14
 * 00000001C0183B96: test    rbx, rbx
 * 00000001C0183B99: jz      short loc_1C0183BA9
 * 00000001C0183B9B: inc     rdi
 * 00000001C0183B9E: cmp     byte ptr [rbx+rdi], 0
 * 00000001C0183BA2: jnz     short loc_1C0183B9B
 * 00000001C0183BA4: inc     rdi
 * 00000001C0183BA7: jmp     short loc_1C0183BAE
 * 00000001C0183BA9: mov     edi, 5
 * 00000001C0183BAE: mov     r9, [rsp+68h+arg_20]
 * 00000001C0183BB6: lea     rax, [rsp+68h+arg_30]
 * 00000001C0183BBE: test    rbx, rbx
 * 00000001C0183BC1: movzx   edx, bpl
 * 00000001C0183BC5: mov     rcx, r12
 * 00000001C0183BC8: cmovz   rbx, r8
 * 00000001C0183BCC: and     [rsp+68h+var_20], 0
 * 00000001C0183BD2: mov     [rsp+68h+var_28], 4
 * 00000001C0183BDB: mov     r8d, r15d
 * 00000001C0183BDE: mov     [rsp+68h+var_30], rax
 * 00000001C0183BE3: mov     [rsp+68h+var_38], rdi
 * 00000001C0183BE8: mov     [rsp+68h+var_40], rbx
 * 00000001C0183BED: mov     word ptr [rsp+68h+var_48], r14w
 * 00000001C0183BF3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0183BFA: nop     dword ptr [rax+rax+00h]
 * 00000001C0183BFF: lea     r11, [rsp+68h+var_18]
 * 00000001C0183C04: mov     rbx, [r11+20h]
 * 00000001C0183C08: mov     rbp, [r11+28h]
 * 00000001C0183C0C: mov     rsi, [r11+30h]
 * 00000001C0183C10: mov     rdi, [r11+38h]
 * 00000001C0183C14: mov     rsp, r11
 * 00000001C0183C17: pop     r15
 * 00000001C0183C19: pop     r14
 * 00000001C0183C1B: pop     r12
 * 00000001C0183C1D: retn
 */
