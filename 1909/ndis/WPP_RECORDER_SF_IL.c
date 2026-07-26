/*
 * XREFs of WPP_RECORDER_SF_IL @ 0x1C0039E5C
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BE0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0039D7C (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IL @ 0x1C0039E5C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0039E5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0039E5C: mov     [rsp+arg_0], rbx
 * 00000001C0039E61: push    rdi
 * 00000001C0039E62: sub     rsp, 50h
 * 00000001C0039E66: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0039E6D: movzx   ebx, r9w
 * 00000001C0039E71: mov     rdi, rcx
 * 00000001C0039E74: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0039E7B: jnz     loc_1C005BEFA
 * 00000001C0039E81: and     [rsp+58h+var_10], 0
 * 00000001C0039E87: lea     rax, [rsp+58h+arg_30]
 * 00000001C0039E8F: mov     [rsp+58h+var_18], 4
 * 00000001C0039E98: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0039E9F: mov     [rsp+58h+var_20], rax
 * 00000001C0039EA4: mov     edx, 4
 * 00000001C0039EA9: lea     rax, [rsp+58h+arg_28]
 * 00000001C0039EB1: mov     [rsp+58h+var_28], 8
 * 00000001C0039EBA: mov     [rsp+58h+var_30], rax
 * 00000001C0039EBF: mov     rcx, rdi
 * 00000001C0039EC2: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C0039EC7: lea     r8d, [rdx+12h]
 * 00000001C0039ECB: call    cs:__imp_WppAutoLogTrace
 * 00000001C0039ED2: nop     dword ptr [rax+rax+00h]
 * 00000001C0039ED7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0039EDC: add     rsp, 50h
 * 00000001C0039EE0: pop     rdi
 * 00000001C0039EE1: retn
 * 00000001C005BEFA: cmp     byte ptr [rdx+29h], 4
 * 00000001C005BEFE: jb      loc_1C0039E81
 * 00000001C005BF04: and     [rsp+58h+var_28], 0
 * 00000001C005BF0A: lea     rax, [rsp+58h+arg_30]
 * 00000001C005BF12: mov     [rsp+58h+var_30], 4
 * 00000001C005BF1B: lea     r8, [rsp+58h+arg_28]
 * 00000001C005BF23: mov     r9d, 8
 * 00000001C005BF29: movzx   edx, bx; unsigned __int16
 * 00000001C005BF2C: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C005BF33: mov     [rsp+58h+var_38], rax
 * 00000001C005BF38: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005BF3D: nop
 * 00000001C005BF3E: jmp     loc_1C0039E81
 */
