/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C002C058
 * Callers:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C002C058
 * Reason: Hex-Rays returned no pseudocode for 0x1C002C058
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002C058: mov     [rsp+arg_0], rbx
 * 00000001C002C05D: mov     [rsp+arg_8], rbp
 * 00000001C002C062: mov     [rsp+arg_10], rsi
 * 00000001C002C067: push    rdi
 * 00000001C002C068: sub     rsp, 50h
 * 00000001C002C06C: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C002C073: movzx   edi, r9w
 * 00000001C002C077: mov     bl, dl
 * 00000001C002C079: mov     rsi, rcx
 * 00000001C002C07C: mov     ebp, 4
 * 00000001C002C081: test    dword ptr [r8+2Ch], 200000h
 * 00000001C002C089: jnz     loc_1C004E6CA
 * 00000001C002C08F: and     [rsp+58h+var_10], 0
 * 00000001C002C095: lea     rax, [rsp+58h+arg_30]
 * 00000001C002C09D: mov     [rsp+58h+var_18], rbp
 * 00000001C002C0A2: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C002C0A9: mov     [rsp+58h+var_20], rax
 * 00000001C002C0AE: mov     r8d, 16h
 * 00000001C002C0B4: lea     rax, [rsp+58h+arg_28]
 * 00000001C002C0BC: mov     [rsp+58h+var_28], rbp
 * 00000001C002C0C1: mov     [rsp+58h+var_30], rax
 * 00000001C002C0C6: mov     rcx, rsi
 * 00000001C002C0C9: movzx   edx, bl
 * 00000001C002C0CC: mov     word ptr [rsp+58h+var_38], di
 * 00000001C002C0D1: call    cs:__imp_WppAutoLogTrace
 * 00000001C002C0D8: nop     dword ptr [rax+rax+00h]
 * 00000001C002C0DD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C002C0E2: mov     rbp, [rsp+58h+arg_8]
 * 00000001C002C0E7: mov     rsi, [rsp+58h+arg_10]
 * 00000001C002C0EC: add     rsp, 50h
 * 00000001C002C0F0: pop     rdi
 * 00000001C002C0F1: retn
 * 00000001C004E6CA: cmp     [r8+29h], bl
 * 00000001C004E6CE: jb      loc_1C002C08F
 * 00000001C004E6D4: and     [rsp+58h+var_28], 0
 * 00000001C004E6DA: lea     rax, [rsp+58h+arg_30]
 * 00000001C004E6E2: mov     [rsp+58h+var_30], rbp
 * 00000001C004E6E7: lea     r8, [rsp+58h+arg_28]
 * 00000001C004E6EF: mov     r9, rbp
 * 00000001C004E6F2: movzx   edx, di; unsigned __int16
 * 00000001C004E6F5: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C004E6FC: mov     [rsp+58h+var_38], rax
 * 00000001C004E701: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C004E706: nop
 * 00000001C004E707: jmp     loc_1C002C08F
 */
