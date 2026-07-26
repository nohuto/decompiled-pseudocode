/*
 * XREFs of WPP_RECORDER_SF_Ll @ 0x1C0066A54
 * Callers:
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00632D8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ll @ 0x1C0066A54
 * Reason: Hex-Rays returned no pseudocode for 0x1C0066A54
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0066A54: mov     r11, rsp
 * 00000001C0066A57: mov     [r11+8], rbx
 * 00000001C0066A5B: mov     [r11+10h], rsi
 * 00000001C0066A5F: push    rdi
 * 00000001C0066A60: sub     rsp, 50h
 * 00000001C0066A64: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0066A6B: mov     rbx, rcx
 * 00000001C0066A6E: mov     edi, 4
 * 00000001C0066A73: mov     esi, 9Ah
 * 00000001C0066A78: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0066A7F: jz      short loc_1C0066AAE
 * 00000001C0066A81: cmp     [rdx+29h], dil
 * 00000001C0066A85: jb      short loc_1C0066AAE
 * 00000001C0066A87: and     qword ptr [r11-28h], 0
 * 00000001C0066A8C: lea     rax, [r11+38h]
 * 00000001C0066A90: mov     [r11-30h], rdi
 * 00000001C0066A94: lea     r8, [r11+30h]
 * 00000001C0066A98: mov     r9d, edi
 * 00000001C0066A9B: movzx   edx, si; unsigned __int16
 * 00000001C0066A9E: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C0066AA5: mov     [r11-38h], rax
 * 00000001C0066AA9: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0066AAE: and     [rsp+58h+var_10], 0
 * 00000001C0066AB4: lea     rax, [rsp+58h+arg_30]
 * 00000001C0066ABC: mov     [rsp+58h+var_18], rdi
 * 00000001C0066AC1: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0066AC8: mov     [rsp+58h+var_20], rax
 * 00000001C0066ACD: mov     r8d, 16h
 * 00000001C0066AD3: lea     rax, [rsp+58h+arg_28]
 * 00000001C0066ADB: mov     [rsp+58h+var_28], rdi
 * 00000001C0066AE0: mov     [rsp+58h+var_30], rax
 * 00000001C0066AE5: mov     edx, edi
 * 00000001C0066AE7: mov     rcx, rbx
 * 00000001C0066AEA: mov     [rsp+58h+var_38], si
 * 00000001C0066AEF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0066AF6: nop     dword ptr [rax+rax+00h]
 * 00000001C0066AFB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0066B00: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0066B05: add     rsp, 50h
 * 00000001C0066B09: pop     rdi
 * 00000001C0066B0A: retn
 */
