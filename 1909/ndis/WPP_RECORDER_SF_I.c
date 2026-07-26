/*
 * XREFs of WPP_RECORDER_SF_I @ 0x1C0039F1C
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BE0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0039D7C (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_I @ 0x1C0039F1C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0039F1C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0039F1C: mov     [rsp+arg_0], rbx
 * 00000001C0039F21: push    rdi
 * 00000001C0039F22: sub     rsp, 40h
 * 00000001C0039F26: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0039F2D: movzx   ebx, r9w
 * 00000001C0039F31: mov     rdi, rcx
 * 00000001C0039F34: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0039F3B: jnz     loc_1C005BF44
 * 00000001C0039F41: and     [rsp+48h+var_10], 0
 * 00000001C0039F47: lea     rax, [rsp+48h+arg_28]
 * 00000001C0039F4C: mov     edx, 4
 * 00000001C0039F51: mov     [rsp+48h+var_18], 8
 * 00000001C0039F5A: mov     [rsp+48h+var_20], rax
 * 00000001C0039F5F: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0039F66: mov     rcx, rdi
 * 00000001C0039F69: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0039F6E: lea     r8d, [rdx+12h]
 * 00000001C0039F72: call    cs:__imp_WppAutoLogTrace
 * 00000001C0039F79: nop     dword ptr [rax+rax+00h]
 * 00000001C0039F7E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0039F83: add     rsp, 40h
 * 00000001C0039F87: pop     rdi
 * 00000001C0039F88: retn
 * 00000001C005BF44: cmp     byte ptr [rdx+29h], 4
 * 00000001C005BF48: jb      loc_1C0039F41
 * 00000001C005BF4E: and     [rsp+48h+var_28], 0
 * 00000001C005BF54: lea     r8, [rsp+48h+arg_28]
 * 00000001C005BF59: mov     r9d, 8
 * 00000001C005BF5F: movzx   edx, bx; unsigned __int16
 * 00000001C005BF62: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C005BF69: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005BF6E: nop
 * 00000001C005BF6F: jmp     loc_1C0039F41
 */
