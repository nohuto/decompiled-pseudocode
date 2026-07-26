/*
 * XREFs of WPP_RECORDER_SF_ll @ 0x1C002A528
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C002A1F0 (NdisIfAddIfStackEntry.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0066380 (NdisIfDeleteIfStackEntry.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ll @ 0x1C002A528
 * Reason: Hex-Rays returned no pseudocode for 0x1C002A528
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002A528: mov     [rsp+arg_0], rbx
 * 00000001C002A52D: mov     [rsp+arg_8], rsi
 * 00000001C002A532: push    rdi
 * 00000001C002A533: sub     rsp, 50h
 * 00000001C002A537: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C002A53E: movzx   ebx, r9w
 * 00000001C002A542: mov     rdi, rcx
 * 00000001C002A545: mov     esi, 4
 * 00000001C002A54A: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C002A551: jnz     loc_1C004DBF0
 * 00000001C002A557: and     [rsp+58h+var_10], 0
 * 00000001C002A55D: lea     rax, [rsp+58h+arg_30]
 * 00000001C002A565: mov     [rsp+58h+var_18], rsi
 * 00000001C002A56A: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C002A571: mov     [rsp+58h+var_20], rax
 * 00000001C002A576: mov     r8d, 16h
 * 00000001C002A57C: lea     rax, [rsp+58h+arg_28]
 * 00000001C002A584: mov     [rsp+58h+var_28], rsi
 * 00000001C002A589: mov     [rsp+58h+var_30], rax
 * 00000001C002A58E: mov     edx, esi
 * 00000001C002A590: mov     rcx, rdi
 * 00000001C002A593: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C002A598: call    cs:__imp_WppAutoLogTrace
 * 00000001C002A59F: nop     dword ptr [rax+rax+00h]
 * 00000001C002A5A4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C002A5A9: mov     rsi, [rsp+58h+arg_8]
 * 00000001C002A5AE: add     rsp, 50h
 * 00000001C002A5B2: pop     rdi
 * 00000001C002A5B3: retn
 * 00000001C004DBF0: cmp     [rdx+29h], sil
 * 00000001C004DBF4: jb      loc_1C002A557
 * 00000001C004DBFA: and     [rsp+58h+var_28], 0
 * 00000001C004DC00: lea     rax, [rsp+58h+arg_30]
 * 00000001C004DC08: mov     [rsp+58h+var_30], rsi
 * 00000001C004DC0D: lea     r8, [rsp+58h+arg_28]
 * 00000001C004DC15: mov     r9, rsi
 * 00000001C004DC18: movzx   edx, bx; unsigned __int16
 * 00000001C004DC1B: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C004DC22: mov     [rsp+58h+var_38], rax
 * 00000001C004DC27: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C004DC2C: nop
 * 00000001C004DC2D: jmp     loc_1C002A557
 */
