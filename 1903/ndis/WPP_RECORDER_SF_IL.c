/*
 * XREFs of WPP_RECORDER_SF_IL @ 0x1C0039E6C
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BF0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0039D8C (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IL @ 0x1C0039E6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0039E6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0039E6C: mov     [rsp+arg_0], rbx
 * 00000001C0039E71: push    rdi
 * 00000001C0039E72: sub     rsp, 50h
 * 00000001C0039E76: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0039E7D: movzx   ebx, r9w
 * 00000001C0039E81: mov     rdi, rcx
 * 00000001C0039E84: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0039E8B: jnz     loc_1C005BD22
 * 00000001C0039E91: and     [rsp+58h+var_10], 0
 * 00000001C0039E97: lea     rax, [rsp+58h+arg_30]
 * 00000001C0039E9F: mov     [rsp+58h+var_18], 4
 * 00000001C0039EA8: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0039EAF: mov     [rsp+58h+var_20], rax
 * 00000001C0039EB4: mov     edx, 4
 * 00000001C0039EB9: lea     rax, [rsp+58h+arg_28]
 * 00000001C0039EC1: mov     [rsp+58h+var_28], 8
 * 00000001C0039ECA: mov     [rsp+58h+var_30], rax
 * 00000001C0039ECF: mov     rcx, rdi
 * 00000001C0039ED2: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C0039ED7: lea     r8d, [rdx+12h]
 * 00000001C0039EDB: call    cs:__imp_WppAutoLogTrace
 * 00000001C0039EE2: nop     dword ptr [rax+rax+00h]
 * 00000001C0039EE7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0039EEC: add     rsp, 50h
 * 00000001C0039EF0: pop     rdi
 * 00000001C0039EF1: retn
 * 00000001C005BD22: cmp     byte ptr [rdx+29h], 4
 * 00000001C005BD26: jb      loc_1C0039E91
 * 00000001C005BD2C: and     [rsp+58h+var_28], 0
 * 00000001C005BD32: lea     rax, [rsp+58h+arg_30]
 * 00000001C005BD3A: mov     [rsp+58h+var_30], 4
 * 00000001C005BD43: lea     r8, [rsp+58h+arg_28]
 * 00000001C005BD4B: mov     r9d, 8
 * 00000001C005BD51: movzx   edx, bx; unsigned __int16
 * 00000001C005BD54: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C005BD5B: mov     [rsp+58h+var_38], rax
 * 00000001C005BD60: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005BD65: nop
 * 00000001C005BD66: jmp     loc_1C0039E91
 */
