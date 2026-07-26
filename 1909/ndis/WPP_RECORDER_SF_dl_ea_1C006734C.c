/*
 * XREFs of WPP_RECORDER_SF_dl @ 0x1C006734C
 * Callers:
 *     NdisIfFreeNetLuidIndex @ 0x1C0114960 (NdisIfFreeNetLuidIndex.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dl @ 0x1C006734C
 * Reason: Hex-Rays returned no pseudocode for 0x1C006734C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006734C: mov     r11, rsp
 * 00000001C006734F: mov     [r11+8], rbx
 * 00000001C0067353: mov     [r11+10h], rsi
 * 00000001C0067357: push    rdi
 * 00000001C0067358: sub     rsp, 50h
 * 00000001C006735C: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0067363: mov     edi, 4
 * 00000001C0067368: mov     rbx, rcx
 * 00000001C006736B: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C0067372: lea     esi, [rdi+1Ch]
 * 00000001C0067375: jz      short loc_1C00673A4
 * 00000001C0067377: cmp     [rdx+29h], dil
 * 00000001C006737B: jb      short loc_1C00673A4
 * 00000001C006737D: and     qword ptr [r11-28h], 0
 * 00000001C0067382: lea     rax, [r11+38h]
 * 00000001C0067386: mov     [r11-30h], rdi
 * 00000001C006738A: lea     r8, [r11+30h]
 * 00000001C006738E: mov     r9d, edi
 * 00000001C0067391: movzx   edx, si; unsigned __int16
 * 00000001C0067394: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C006739B: mov     [r11-38h], rax
 * 00000001C006739F: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00673A4: and     [rsp+58h+var_10], 0
 * 00000001C00673AA: lea     rax, [rsp+58h+arg_30]
 * 00000001C00673B2: mov     [rsp+58h+var_18], rdi
 * 00000001C00673B7: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C00673BE: mov     [rsp+58h+var_20], rax
 * 00000001C00673C3: mov     r8d, 16h
 * 00000001C00673C9: lea     rax, [rsp+58h+arg_28]
 * 00000001C00673D1: mov     [rsp+58h+var_28], rdi
 * 00000001C00673D6: mov     [rsp+58h+var_30], rax
 * 00000001C00673DB: mov     edx, edi
 * 00000001C00673DD: mov     rcx, rbx
 * 00000001C00673E0: mov     [rsp+58h+var_38], si
 * 00000001C00673E5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00673EC: nop     dword ptr [rax+rax+00h]
 * 00000001C00673F1: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00673F6: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00673FB: add     rsp, 50h
 * 00000001C00673FF: pop     rdi
 * 00000001C0067400: retn
 */
