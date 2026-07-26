/*
 * XREFs of WPP_RECORDER_SF_ll @ 0x1C002A518
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C002A1E0 (NdisIfAddIfStackEntry.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C0066550 (NdisIfDeleteIfStackEntry.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ll @ 0x1C002A518
 * Reason: Hex-Rays returned no pseudocode for 0x1C002A518
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002A518: mov     [rsp+arg_0], rbx
 * 00000001C002A51D: mov     [rsp+arg_8], rsi
 * 00000001C002A522: push    rdi
 * 00000001C002A523: sub     rsp, 50h
 * 00000001C002A527: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C002A52E: movzx   ebx, r9w
 * 00000001C002A532: mov     rdi, rcx
 * 00000001C002A535: mov     esi, 4
 * 00000001C002A53A: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C002A541: jnz     loc_1C004DDC8
 * 00000001C002A547: and     [rsp+58h+var_10], 0
 * 00000001C002A54D: lea     rax, [rsp+58h+arg_30]
 * 00000001C002A555: mov     [rsp+58h+var_18], rsi
 * 00000001C002A55A: lea     r9, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids
 * 00000001C002A561: mov     [rsp+58h+var_20], rax
 * 00000001C002A566: mov     r8d, 16h
 * 00000001C002A56C: lea     rax, [rsp+58h+arg_28]
 * 00000001C002A574: mov     [rsp+58h+var_28], rsi
 * 00000001C002A579: mov     [rsp+58h+var_30], rax
 * 00000001C002A57E: mov     edx, esi
 * 00000001C002A580: mov     rcx, rdi
 * 00000001C002A583: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C002A588: call    cs:__imp_WppAutoLogTrace
 * 00000001C002A58F: nop     dword ptr [rax+rax+00h]
 * 00000001C002A594: mov     rbx, [rsp+58h+arg_0]
 * 00000001C002A599: mov     rsi, [rsp+58h+arg_8]
 * 00000001C002A59E: add     rsp, 50h
 * 00000001C002A5A2: pop     rdi
 * 00000001C002A5A3: retn
 * 00000001C004DDC8: cmp     [rdx+29h], sil
 * 00000001C004DDCC: jb      loc_1C002A547
 * 00000001C004DDD2: and     [rsp+58h+var_28], 0
 * 00000001C004DDD8: lea     rax, [rsp+58h+arg_30]
 * 00000001C004DDE0: mov     [rsp+58h+var_30], rsi
 * 00000001C004DDE5: lea     r8, [rsp+58h+arg_28]
 * 00000001C004DDED: mov     r9, rsi
 * 00000001C004DDF0: movzx   edx, bx; unsigned __int16
 * 00000001C004DDF3: lea     rcx, WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids; struct _GUID *
 * 00000001C004DDFA: mov     [rsp+58h+var_38], rax
 * 00000001C004DDFF: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C004DE04: nop
 * 00000001C004DE05: jmp     loc_1C002A547
 */
