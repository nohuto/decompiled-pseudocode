/*
 * XREFs of WPP_RECORDER_SF_dD @ 0x1C007E09C
 * Callers:
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C007CABC (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dD @ 0x1C007E09C
 * Reason: Hex-Rays returned no pseudocode for 0x1C007E09C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C007E09C: mov     r11, rsp
 * 00000001C007E09F: mov     [r11+8], rbx
 * 00000001C007E0A3: mov     [r11+10h], rsi
 * 00000001C007E0A7: push    rdi
 * 00000001C007E0A8: sub     rsp, 50h
 * 00000001C007E0AC: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C007E0B3: mov     esi, 4Bh ; 'K'
 * 00000001C007E0B8: mov     rbx, rcx
 * 00000001C007E0BB: test    dword ptr [rdx+2Ch], 800h
 * 00000001C007E0C2: lea     edi, [rsi-47h]
 * 00000001C007E0C5: jz      short loc_1C007E0F4
 * 00000001C007E0C7: cmp     byte ptr [rdx+29h], 2
 * 00000001C007E0CB: jb      short loc_1C007E0F4
 * 00000001C007E0CD: and     qword ptr [r11-28h], 0
 * 00000001C007E0D2: lea     rax, [r11+38h]
 * 00000001C007E0D6: mov     [r11-30h], rdi
 * 00000001C007E0DA: lea     r8, [r11+30h]
 * 00000001C007E0DE: mov     r9d, edi
 * 00000001C007E0E1: movzx   edx, si; unsigned __int16
 * 00000001C007E0E4: lea     rcx, WPP_34b7afbc912539598d6d69098c3d2070_Traceguids; struct _GUID *
 * 00000001C007E0EB: mov     [r11-38h], rax
 * 00000001C007E0EF: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C007E0F4: and     [rsp+58h+var_10], 0
 * 00000001C007E0FA: lea     rax, [rsp+58h+arg_30]
 * 00000001C007E102: mov     [rsp+58h+var_18], rdi
 * 00000001C007E107: lea     r9, WPP_34b7afbc912539598d6d69098c3d2070_Traceguids
 * 00000001C007E10E: mov     [rsp+58h+var_20], rax
 * 00000001C007E113: mov     edx, 2
 * 00000001C007E118: lea     rax, [rsp+58h+arg_28]
 * 00000001C007E120: mov     [rsp+58h+var_28], rdi
 * 00000001C007E125: mov     [rsp+58h+var_30], rax
 * 00000001C007E12A: mov     rcx, rbx
 * 00000001C007E12D: mov     [rsp+58h+var_38], si
 * 00000001C007E132: lea     r8d, [rdx+0Ah]
 * 00000001C007E136: call    cs:__imp_WppAutoLogTrace
 * 00000001C007E13D: nop     dword ptr [rax+rax+00h]
 * 00000001C007E142: mov     rbx, [rsp+58h+arg_0]
 * 00000001C007E147: mov     rsi, [rsp+58h+arg_8]
 * 00000001C007E14C: add     rsp, 50h
 * 00000001C007E150: pop     rdi
 * 00000001C007E151: retn
 */
