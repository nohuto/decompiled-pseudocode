/*
 * XREFs of WPP_RECORDER_SF_sL @ 0x1C0072A2C
 * Callers:
 *     ndisOidPMRemove @ 0x1C0022E6C (ndisOidPMRemove.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sL @ 0x1C0072A2C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0072A2C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0072A2C: mov     rax, rsp
 * 00000001C0072A2F: mov     [rax+8], rbx
 * 00000001C0072A33: mov     [rax+10h], rsi
 * 00000001C0072A37: mov     [rax+18h], rdi
 * 00000001C0072A3B: mov     [rax+20h], r12
 * 00000001C0072A3F: push    r13
 * 00000001C0072A41: sub     rsp, 50h
 * 00000001C0072A45: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0072A4C: lea     r12, aNull; "NULL"
 * 00000001C0072A53: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0072A5B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0072A5F: mov     rsi, rcx
 * 00000001C0072A62: test    dword ptr [rdx+2Ch], 2000h
 * 00000001C0072A69: lea     r13d, [rbx+4Ch]
 * 00000001C0072A6D: jz      short loc_1C0072AC8
 * 00000001C0072A6F: cmp     byte ptr [rdx+29h], 2
 * 00000001C0072A73: jb      short loc_1C0072AC8
 * 00000001C0072A75: test    rdi, rdi
 * 00000001C0072A78: jz      short loc_1C0072A8C
 * 00000001C0072A7A: mov     r9, rbx
 * 00000001C0072A7D: inc     r9
 * 00000001C0072A80: cmp     byte ptr [rdi+r9], 0
 * 00000001C0072A85: jnz     short loc_1C0072A7D
 * 00000001C0072A87: inc     r9
 * 00000001C0072A8A: jmp     short loc_1C0072A92
 * 00000001C0072A8C: mov     r9d, 5
 * 00000001C0072A92: test    rdi, rdi
 * 00000001C0072A95: movzx   edx, r13w; unsigned __int16
 * 00000001C0072A99: lea     rax, [rsp+58h+arg_30]
 * 00000001C0072AA1: mov     r8, rdi
 * 00000001C0072AA4: cmovz   r8, r12
 * 00000001C0072AA8: lea     rcx, WPP_091de2f669683db8988ab996bc16e527_Traceguids; struct _GUID *
 * 00000001C0072AAF: and     [rsp+58h+var_28], 0
 * 00000001C0072AB5: mov     [rsp+58h+var_30], 4
 * 00000001C0072ABE: mov     [rsp+58h+var_38], rax
 * 00000001C0072AC3: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0072AC8: test    rdi, rdi
 * 00000001C0072ACB: jz      short loc_1C0072ADB
 * 00000001C0072ACD: inc     rbx
 * 00000001C0072AD0: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0072AD4: jnz     short loc_1C0072ACD
 * 00000001C0072AD6: inc     rbx
 * 00000001C0072AD9: jmp     short loc_1C0072AE0
 * 00000001C0072ADB: mov     ebx, 5
 * 00000001C0072AE0: test    rdi, rdi
 * 00000001C0072AE3: lea     rax, [rsp+58h+arg_30]
 * 00000001C0072AEB: mov     edx, 2
 * 00000001C0072AF0: lea     r9, WPP_091de2f669683db8988ab996bc16e527_Traceguids
 * 00000001C0072AF7: cmovz   rdi, r12
 * 00000001C0072AFB: mov     rcx, rsi
 * 00000001C0072AFE: and     [rsp+58h+var_10], 0
 * 00000001C0072B04: mov     [rsp+58h+var_18], 4
 * 00000001C0072B0D: mov     [rsp+58h+var_20], rax
 * 00000001C0072B12: lea     r8d, [rdx+0Ch]
 * 00000001C0072B16: mov     [rsp+58h+var_28], rbx
 * 00000001C0072B1B: mov     [rsp+58h+var_30], rdi
 * 00000001C0072B20: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0072B26: call    cs:__imp_WppAutoLogTrace
 * 00000001C0072B2D: nop     dword ptr [rax+rax+00h]
 * 00000001C0072B32: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0072B37: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0072B3C: mov     rdi, [rsp+58h+arg_10]
 * 00000001C0072B41: mov     r12, [rsp+58h+arg_18]
 * 00000001C0072B46: add     rsp, 50h
 * 00000001C0072B4A: pop     r13
 * 00000001C0072B4C: retn
 */
