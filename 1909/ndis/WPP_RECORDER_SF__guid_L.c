/*
 * XREFs of WPP_RECORDER_SF__guid_L @ 0x1C0066F8C
 * Callers:
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C0113C64 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_L @ 0x1C0066F8C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0066F8C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0066F8C: mov     r11, rsp
 * 00000001C0066F8F: mov     [r11+8], rbx
 * 00000001C0066F93: mov     [r11+10h], rbp
 * 00000001C0066F97: mov     [r11+18h], rsi
 * 00000001C0066F9B: push    rdi
 * 00000001C0066F9C: sub     rsp, 50h
 * 00000001C0066FA0: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C0066FA7: movzx   edi, r9w
 * 00000001C0066FAB: mov     rsi, [rsp+58h+arg_28]
 * 00000001C0066FB3: mov     bl, dl
 * 00000001C0066FB5: mov     rbp, rcx
 * 00000001C0066FB8: test    dword ptr [r8+2Ch], 200000h
 * 00000001C0066FC0: jz      short loc_1C0066FF5
 * 00000001C0066FC2: cmp     [r8+29h], dl
 * 00000001C0066FC6: jb      short loc_1C0066FF5
 * 00000001C0066FC8: and     qword ptr [r11-28h], 0
 * 00000001C0066FCD: lea     rax, [r11+38h]
 * 00000001C0066FD1: mov     qword ptr [r11-30h], 4
 * 00000001C0066FD9: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C0066FE0: mov     r9d, 10h
 * 00000001C0066FE6: movzx   edx, di; unsigned __int16
 * 00000001C0066FE9: mov     r8, rsi
 * 00000001C0066FEC: mov     [r11-38h], rax
 * 00000001C0066FF0: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C0066FF5: and     [rsp+58h+var_10], 0
 * 00000001C0066FFB: lea     rax, [rsp+58h+arg_30]
 * 00000001C0067003: mov     [rsp+58h+var_18], 4
 * 00000001C006700C: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C0067013: mov     [rsp+58h+var_20], rax
 * 00000001C0067018: mov     r8d, 16h
 * 00000001C006701E: mov     [rsp+58h+var_28], 10h
 * 00000001C0067027: mov     rcx, rbp
 * 00000001C006702A: mov     [rsp+58h+var_30], rsi
 * 00000001C006702F: movzx   edx, bl
 * 00000001C0067032: mov     [rsp+58h+var_38], di
 * 00000001C0067037: call    cs:__imp_WppAutoLogTrace
 * 00000001C006703E: nop     dword ptr [rax+rax+00h]
 * 00000001C0067043: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0067048: mov     rbp, [rsp+58h+arg_8]
 * 00000001C006704D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0067052: add     rsp, 50h
 * 00000001C0067056: pop     rdi
 * 00000001C0067057: retn
 */
