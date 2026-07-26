/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C007DECC
 * Callers:
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C007C8EC (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dD @ 0x1C007DECC
 * Reason: Hex-Rays returned no pseudocode for 0x1C007DECC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C007DECC: mov     r11, rsp
 * 00000001C007DECF: mov     [r11+8], rbx
 * 00000001C007DED3: mov     [r11+10h], rsi
 * 00000001C007DED7: push    rdi
 * 00000001C007DED8: sub     rsp, 50h
 * 00000001C007DEDC: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C007DEE3: mov     esi, 4Bh ; 'K'
 * 00000001C007DEE8: mov     rbx, rcx
 * 00000001C007DEEB: test    dword ptr [rdx+2Ch], 800h
 * 00000001C007DEF2: lea     edi, [rsi-47h]
 * 00000001C007DEF5: jz      short loc_1C007DF24
 * 00000001C007DEF7: cmp     byte ptr [rdx+29h], 2
 * 00000001C007DEFB: jb      short loc_1C007DF24
 * 00000001C007DEFD: and     qword ptr [r11-28h], 0
 * 00000001C007DF02: lea     rax, [r11+38h]
 * 00000001C007DF06: mov     [r11-30h], rdi
 * 00000001C007DF0A: lea     r8, [r11+30h]
 * 00000001C007DF0E: mov     r9d, edi
 * 00000001C007DF11: movzx   edx, si; unsigned __int16
 * 00000001C007DF14: lea     rcx, WPP_34b7afbc912539598d6d69098c3d2070_Traceguids; struct _GUID *
 * 00000001C007DF1B: mov     [r11-38h], rax
 * 00000001C007DF1F: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C007DF24: and     [rsp+58h+var_10], 0
 * 00000001C007DF2A: lea     rax, [rsp+58h+arg_30]
 * 00000001C007DF32: mov     [rsp+58h+var_18], rdi
 * 00000001C007DF37: lea     r9, WPP_34b7afbc912539598d6d69098c3d2070_Traceguids
 * 00000001C007DF3E: mov     [rsp+58h+var_20], rax
 * 00000001C007DF43: mov     edx, 2
 * 00000001C007DF48: lea     rax, [rsp+58h+arg_28]
 * 00000001C007DF50: mov     [rsp+58h+var_28], rdi
 * 00000001C007DF55: mov     [rsp+58h+var_30], rax
 * 00000001C007DF5A: mov     rcx, rbx
 * 00000001C007DF5D: mov     [rsp+58h+var_38], si
 * 00000001C007DF62: lea     r8d, [rdx+0Ah]
 * 00000001C007DF66: call    cs:__imp_WppAutoLogTrace
 * 00000001C007DF6D: nop     dword ptr [rax+rax+00h]
 * 00000001C007DF72: mov     rbx, [rsp+58h+arg_0]
 * 00000001C007DF77: mov     rsi, [rsp+58h+arg_8]
 * 00000001C007DF7C: add     rsp, 50h
 * 00000001C007DF80: pop     rdi
 * 00000001C007DF81: retn
 */
