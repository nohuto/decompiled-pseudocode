/*
 * XREFs of WPP_RECORDER_SF_dd @ 0x1C001D754
 * Callers:
 *     ndisCreateFilterDriverRegistry @ 0x1C00382B0 (ndisCreateFilterDriverRegistry.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00634A8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C008F898 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetFilterDefaultParameter @ 0x1C009099C (ndisSetFilterDefaultParameter.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00FF7E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dd @ 0x1C001D754
 * Reason: Hex-Rays returned no pseudocode for 0x1C001D754
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001D754: mov     rax, rsp
 * 00000001C001D757: mov     [rax+8], rbx
 * 00000001C001D75B: mov     [rax+10h], rbp
 * 00000001C001D75F: mov     [rax+18h], rsi
 * 00000001C001D763: mov     [rax+20h], rdi
 * 00000001C001D767: push    r14
 * 00000001C001D769: sub     rsp, 50h
 * 00000001C001D76D: mov     esi, r8d
 * 00000001C001D770: mov     rbp, rcx
 * 00000001C001D773: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001D77A: movzx   edi, r9w
 * 00000001C001D77E: mov     ebx, r8d
 * 00000001C001D781: mov     r14d, 4
 * 00000001C001D787: shr     rbx, 10h
 * 00000001C001D78B: lea     r11d, [rsi-1]
 * 00000001C001D78F: mov     edx, r11d
 * 00000001C001D792: and     r11d, 1Fh
 * 00000001C001D796: shr     rdx, 5
 * 00000001C001D79A: and     edx, 7FFh
 * 00000001C001D7A0: lea     rax, [rbx+rbx*4]
 * 00000001C001D7A4: lea     r10, [rdx+rax*4]
 * 00000001C001D7A8: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C001D7AD: bt      eax, r11d
 * 00000001C001D7B1: jb      loc_1C005A1E4
 * 00000001C001D7B7: and     [rsp+58h+var_10], 0
 * 00000001C001D7BD: lea     rax, [rsp+58h+arg_30]
 * 00000001C001D7C5: mov     r9, [rsp+58h+arg_20]
 * 00000001C001D7CD: mov     r8d, esi
 * 00000001C001D7D0: mov     [rsp+58h+var_18], r14
 * 00000001C001D7D5: mov     edx, r14d
 * 00000001C001D7D8: mov     [rsp+58h+var_20], rax
 * 00000001C001D7DD: mov     rcx, rbp
 * 00000001C001D7E0: lea     rax, [rsp+58h+arg_28]
 * 00000001C001D7E8: mov     [rsp+58h+var_28], r14
 * 00000001C001D7ED: mov     [rsp+58h+var_30], rax
 * 00000001C001D7F2: mov     word ptr [rsp+58h+var_38], di
 * 00000001C001D7F7: call    cs:__imp_WppAutoLogTrace
 * 00000001C001D7FE: nop     dword ptr [rax+rax+00h]
 * 00000001C001D803: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001D808: mov     rbp, [rsp+58h+arg_8]
 * 00000001C001D80D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C001D812: mov     rdi, [rsp+58h+arg_18]
 * 00000001C001D817: add     rsp, 50h
 * 00000001C001D81B: pop     r14
 * 00000001C001D81D: retn
 * 00000001C005A1E4: lea     rax, [rbx+rbx*4]
 * 00000001C005A1E8: add     rax, rax
 * 00000001C005A1EB: cmp     [rcx+rax*8+29h], r14b
 * 00000001C005A1F0: jb      loc_1C001D7B7
 * 00000001C005A1F6: and     [rsp+58h+var_28], 0
 * 00000001C005A1FC: lea     rax, [rsp+58h+arg_30]
 * 00000001C005A204: mov     rcx, [rsp+58h+arg_20]; struct _GUID *
 * 00000001C005A20C: lea     r8, [rsp+58h+arg_28]
 * 00000001C005A214: mov     [rsp+58h+var_30], r14
 * 00000001C005A219: mov     r9, r14
 * 00000001C005A21C: movzx   edx, di; unsigned __int16
 * 00000001C005A21F: mov     [rsp+58h+var_38], rax
 * 00000001C005A224: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005A229: nop
 * 00000001C005A22A: jmp     loc_1C001D7B7
 */
