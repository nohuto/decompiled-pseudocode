/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C002C068
 * Callers:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C002C068
 * Reason: Hex-Rays returned no pseudocode for 0x1C002C068
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002C068: mov     [rsp+arg_0], rbx
 * 00000001C002C06D: mov     [rsp+arg_8], rbp
 * 00000001C002C072: mov     [rsp+arg_10], rsi
 * 00000001C002C077: push    rdi
 * 00000001C002C078: sub     rsp, 50h
 * 00000001C002C07C: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C002C083: movzx   edi, r9w
 * 00000001C002C087: mov     bl, dl
 * 00000001C002C089: mov     rsi, rcx
 * 00000001C002C08C: mov     ebp, 4
 * 00000001C002C091: test    dword ptr [r8+2Ch], 200000h
 * 00000001C002C099: jnz     loc_1C004E4F2
 * 00000001C002C09F: and     [rsp+58h+var_10], 0
 * 00000001C002C0A5: lea     rax, [rsp+58h+arg_30]
 * 00000001C002C0AD: mov     [rsp+58h+var_18], rbp
 * 00000001C002C0B2: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C002C0B9: mov     [rsp+58h+var_20], rax
 * 00000001C002C0BE: mov     r8d, 16h
 * 00000001C002C0C4: lea     rax, [rsp+58h+arg_28]
 * 00000001C002C0CC: mov     [rsp+58h+var_28], rbp
 * 00000001C002C0D1: mov     [rsp+58h+var_30], rax
 * 00000001C002C0D6: mov     rcx, rsi
 * 00000001C002C0D9: movzx   edx, bl
 * 00000001C002C0DC: mov     word ptr [rsp+58h+var_38], di
 * 00000001C002C0E1: call    cs:__imp_WppAutoLogTrace
 * 00000001C002C0E8: nop     dword ptr [rax+rax+00h]
 * 00000001C002C0ED: mov     rbx, [rsp+58h+arg_0]
 * 00000001C002C0F2: mov     rbp, [rsp+58h+arg_8]
 * 00000001C002C0F7: mov     rsi, [rsp+58h+arg_10]
 * 00000001C002C0FC: add     rsp, 50h
 * 00000001C002C100: pop     rdi
 * 00000001C002C101: retn
 * 00000001C004E4F2: cmp     [r8+29h], bl
 * 00000001C004E4F6: jb      loc_1C002C09F
 * 00000001C004E4FC: and     [rsp+58h+var_28], 0
 * 00000001C004E502: lea     rax, [rsp+58h+arg_30]
 * 00000001C004E50A: mov     [rsp+58h+var_30], rbp
 * 00000001C004E50F: lea     r8, [rsp+58h+arg_28]
 * 00000001C004E517: mov     r9, rbp
 * 00000001C004E51A: movzx   edx, di; unsigned __int16
 * 00000001C004E51D: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C004E524: mov     [rsp+58h+var_38], rax
 * 00000001C004E529: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C004E52E: nop
 * 00000001C004E52F: jmp     loc_1C002C09F
 */
