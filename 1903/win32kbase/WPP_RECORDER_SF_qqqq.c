/*
 * XREFs of WPP_RECORDER_SF_qqqq @ 0x1C006CC2C
 * Callers:
 *     RIMReadInput @ 0x1C006AFC0 (RIMReadInput.c)
 *     rimSignalReadComplete @ 0x1C01542AC (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqq @ 0x1C006CC2C
 * Reason: Hex-Rays returned no pseudocode for 0x1C006CC2C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006CC2C: mov     [rsp+arg_0], rbx
 * 00000001C006CC31: mov     [rsp+arg_8], rbp
 * 00000001C006CC36: mov     [rsp+arg_10], rsi
 * 00000001C006CC3B: push    rdi
 * 00000001C006CC3C: sub     rsp, 70h
 * 00000001C006CC40: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C006CC47: movzx   edi, r9w
 * 00000001C006CC4B: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C006CC52: mov     bl, dl
 * 00000001C006CC54: mov     ebp, 8
 * 00000001C006CC59: mov     eax, [rcx+2Ch]
 * 00000001C006CC5C: test    al, 1
 * 00000001C006CC5E: jnz     loc_1C00EBCDC
 * 00000001C006CC64: and     [rsp+78h+var_10], 0
 * 00000001C006CC6A: lea     rax, [rsp+78h+arg_40]
 * 00000001C006CC72: mov     r9, [rsp+78h+arg_20]
 * 00000001C006CC7A: mov     r8d, 1
 * 00000001C006CC80: mov     [rsp+78h+var_18], rbp
 * 00000001C006CC85: mov     rcx, rsi
 * 00000001C006CC88: mov     [rsp+78h+var_20], rax
 * 00000001C006CC8D: lea     rax, [rsp+78h+arg_38]
 * 00000001C006CC95: mov     [rsp+78h+var_28], rbp
 * 00000001C006CC9A: mov     [rsp+78h+var_30], rax
 * 00000001C006CC9F: lea     rax, [rsp+78h+arg_30]
 * 00000001C006CCA7: mov     [rsp+78h+var_38], rbp
 * 00000001C006CCAC: mov     [rsp+78h+var_40], rax
 * 00000001C006CCB1: lea     rax, [rsp+78h+arg_28]
 * 00000001C006CCB9: mov     [rsp+78h+var_48], rbp
 * 00000001C006CCBE: mov     [rsp+78h+var_50], rax
 * 00000001C006CCC3: movzx   edx, bl
 * 00000001C006CCC6: mov     word ptr [rsp+78h+var_58], di
 * 00000001C006CCCB: call    cs:__imp_WppAutoLogTrace
 * 00000001C006CCD2: nop     dword ptr [rax+rax+00h]
 * 00000001C006CCD7: lea     r11, [rsp+78h+var_8]
 * 00000001C006CCDC: mov     rbx, [r11+10h]
 * 00000001C006CCE0: mov     rbp, [r11+18h]
 * 00000001C006CCE4: mov     rsi, [r11+20h]
 * 00000001C006CCE8: mov     rsp, r11
 * 00000001C006CCEB: pop     rdi
 * 00000001C006CCEC: retn
 * 00000001C00EBCDC: cmp     [rcx+29h], bl
 * 00000001C00EBCDF: jb      loc_1C006CC64
 * 00000001C00EBCE5: and     [rsp+78h+var_18], 0
 * 00000001C00EBCEB: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00EBCF3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EBCFA: mov     r8, [rsp+78h+arg_20]
 * 00000001C00EBD02: mov     rcx, [rcx+18h]
 * 00000001C00EBD06: mov     [rsp+78h+var_20], rbp
 * 00000001C00EBD0B: mov     [rsp+78h+var_28], rdx
 * 00000001C00EBD10: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00EBD18: mov     [rsp+78h+var_30], rbp
 * 00000001C00EBD1D: mov     [rsp+78h+var_38], rdx
 * 00000001C00EBD22: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00EBD2A: mov     [rsp+78h+var_40], rbp
 * 00000001C00EBD2F: mov     [rsp+78h+var_48], rdx
 * 00000001C00EBD34: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00EBD3C: mov     [rsp+78h+var_50], rbp
 * 00000001C00EBD41: mov     [rsp+78h+var_58], rdx
 * 00000001C00EBD46: mov     edx, 2Bh ; '+'
 * 00000001C00EBD4B: movzx   r9d, di
 * 00000001C00EBD4F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EBD55: nop
 * 00000001C00EBD56: jmp     loc_1C006CC64
 */
