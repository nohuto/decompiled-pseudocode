/*
 * XREFs of WPP_RECORDER_SF_I @ 0x1C0039F2C
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BF0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0039D8C (-ndisIfUpdateInterfaceFromPersistentStore@@YAJAEBUNdisNetworkInterfacePersistedState@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_I @ 0x1C0039F2C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0039F2C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0039F2C: mov     [rsp+arg_0], rbx
 * 00000001C0039F31: push    rdi
 * 00000001C0039F32: sub     rsp, 40h
 * 00000001C0039F36: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0039F3D: movzx   ebx, r9w
 * 00000001C0039F41: mov     rdi, rcx
 * 00000001C0039F44: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0039F4B: jnz     loc_1C005BD6C
 * 00000001C0039F51: and     [rsp+48h+var_10], 0
 * 00000001C0039F57: lea     rax, [rsp+48h+arg_28]
 * 00000001C0039F5C: mov     edx, 4
 * 00000001C0039F61: mov     [rsp+48h+var_18], 8
 * 00000001C0039F6A: mov     [rsp+48h+var_20], rax
 * 00000001C0039F6F: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0039F76: mov     rcx, rdi
 * 00000001C0039F79: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0039F7E: lea     r8d, [rdx+12h]
 * 00000001C0039F82: call    cs:__imp_WppAutoLogTrace
 * 00000001C0039F89: nop     dword ptr [rax+rax+00h]
 * 00000001C0039F8E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0039F93: add     rsp, 40h
 * 00000001C0039F97: pop     rdi
 * 00000001C0039F98: retn
 * 00000001C005BD6C: cmp     byte ptr [rdx+29h], 4
 * 00000001C005BD70: jb      loc_1C0039F51
 * 00000001C005BD76: and     [rsp+48h+var_28], 0
 * 00000001C005BD7C: lea     r8, [rsp+48h+arg_28]
 * 00000001C005BD81: mov     r9d, 8
 * 00000001C005BD87: movzx   edx, bx; unsigned __int16
 * 00000001C005BD8A: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C005BD91: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C005BD96: nop
 * 00000001C005BD97: jmp     loc_1C0039F51
 */
