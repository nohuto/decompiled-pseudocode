/*
 * XREFs of WPP_RECORDER_SF__guid_L @ 0x1C0066DBC
 * Callers:
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C0113C64 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_L @ 0x1C0066DBC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0066DBC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0066DBC: mov     r11, rsp
 * 00000001C0066DBF: mov     [r11+8], rbx
 * 00000001C0066DC3: mov     [r11+10h], rbp
 * 00000001C0066DC7: mov     [r11+18h], rsi
 * 00000001C0066DCB: push    rdi
 * 00000001C0066DCC: sub     rsp, 50h
 * 00000001C0066DD0: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C0066DD7: movzx   edi, r9w
 * 00000001C0066DDB: mov     rsi, [rsp+58h+arg_28]
 * 00000001C0066DE3: mov     bl, dl
 * 00000001C0066DE5: mov     rbp, rcx
 * 00000001C0066DE8: test    dword ptr [r8+2Ch], 200000h
 * 00000001C0066DF0: jz      short loc_1C0066E25
 * 00000001C0066DF2: cmp     [r8+29h], dl
 * 00000001C0066DF6: jb      short loc_1C0066E25
 * 00000001C0066DF8: and     qword ptr [r11-28h], 0
 * 00000001C0066DFD: lea     rax, [r11+38h]
 * 00000001C0066E01: mov     qword ptr [r11-30h], 4
 * 00000001C0066E09: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C0066E10: mov     r9d, 10h
 * 00000001C0066E16: movzx   edx, di; unsigned __int16
 * 00000001C0066E19: mov     r8, rsi
 * 00000001C0066E1C: mov     [r11-38h], rax
 * 00000001C0066E20: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0066E25: and     [rsp+58h+var_10], 0
 * 00000001C0066E2B: lea     rax, [rsp+58h+arg_30]
 * 00000001C0066E33: mov     [rsp+58h+var_18], 4
 * 00000001C0066E3C: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0066E43: mov     [rsp+58h+var_20], rax
 * 00000001C0066E48: mov     r8d, 16h
 * 00000001C0066E4E: mov     [rsp+58h+var_28], 10h
 * 00000001C0066E57: mov     rcx, rbp
 * 00000001C0066E5A: mov     [rsp+58h+var_30], rsi
 * 00000001C0066E5F: movzx   edx, bl
 * 00000001C0066E62: mov     [rsp+58h+var_38], di
 * 00000001C0066E67: call    cs:__imp_WppAutoLogTrace
 * 00000001C0066E6E: nop     dword ptr [rax+rax+00h]
 * 00000001C0066E73: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0066E78: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0066E7D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0066E82: add     rsp, 50h
 * 00000001C0066E86: pop     rdi
 * 00000001C0066E87: retn
 */
