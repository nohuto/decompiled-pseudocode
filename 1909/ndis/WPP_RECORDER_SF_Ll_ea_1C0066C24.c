/*
 * XREFs of WPP_RECORDER_SF_Ll @ 0x1C0066C24
 * Callers:
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00634A8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ll @ 0x1C0066C24
 * Reason: Hex-Rays returned no pseudocode for 0x1C0066C24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0066C24: mov     r11, rsp
 * 00000001C0066C27: mov     [r11+8], rbx
 * 00000001C0066C2B: mov     [r11+10h], rsi
 * 00000001C0066C2F: push    rdi
 * 00000001C0066C30: sub     rsp, 50h
 * 00000001C0066C34: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0066C3B: mov     rbx, rcx
 * 00000001C0066C3E: mov     edi, 4
 * 00000001C0066C43: mov     esi, 9Ah
 * 00000001C0066C48: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0066C4F: jz      short loc_1C0066C7E
 * 00000001C0066C51: cmp     [rdx+29h], dil
 * 00000001C0066C55: jb      short loc_1C0066C7E
 * 00000001C0066C57: and     qword ptr [r11-28h], 0
 * 00000001C0066C5C: lea     rax, [r11+38h]
 * 00000001C0066C60: mov     [r11-30h], rdi
 * 00000001C0066C64: lea     r8, [r11+30h]
 * 00000001C0066C68: mov     r9d, edi
 * 00000001C0066C6B: movzx   edx, si; unsigned __int16
 * 00000001C0066C6E: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C0066C75: mov     [r11-38h], rax
 * 00000001C0066C79: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0066C7E: and     [rsp+58h+var_10], 0
 * 00000001C0066C84: lea     rax, [rsp+58h+arg_30]
 * 00000001C0066C8C: mov     [rsp+58h+var_18], rdi
 * 00000001C0066C91: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0066C98: mov     [rsp+58h+var_20], rax
 * 00000001C0066C9D: mov     r8d, 16h
 * 00000001C0066CA3: lea     rax, [rsp+58h+arg_28]
 * 00000001C0066CAB: mov     [rsp+58h+var_28], rdi
 * 00000001C0066CB0: mov     [rsp+58h+var_30], rax
 * 00000001C0066CB5: mov     edx, edi
 * 00000001C0066CB7: mov     rcx, rbx
 * 00000001C0066CBA: mov     [rsp+58h+var_38], si
 * 00000001C0066CBF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0066CC6: nop     dword ptr [rax+rax+00h]
 * 00000001C0066CCB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0066CD0: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0066CD5: add     rsp, 50h
 * 00000001C0066CD9: pop     rdi
 * 00000001C0066CDA: retn
 */
