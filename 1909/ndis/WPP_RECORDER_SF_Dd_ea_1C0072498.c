/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0072498
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C0072498
 * Reason: Hex-Rays returned no pseudocode for 0x1C0072498
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0072498: mov     r11, rsp
 * 00000001C007249B: mov     [r11+8], rbx
 * 00000001C007249F: mov     [r11+10h], rsi
 * 00000001C00724A3: push    rdi
 * 00000001C00724A4: sub     rsp, 50h
 * 00000001C00724A8: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00724AF: mov     esi, 3Fh ; '?'
 * 00000001C00724B4: mov     rbx, rcx
 * 00000001C00724B7: test    dword ptr [rdx+2Ch], 2000h
 * 00000001C00724BE: lea     edi, [rsi-3Bh]
 * 00000001C00724C1: jz      short loc_1C00724F0
 * 00000001C00724C3: cmp     byte ptr [rdx+29h], 2
 * 00000001C00724C7: jb      short loc_1C00724F0
 * 00000001C00724C9: and     qword ptr [r11-28h], 0
 * 00000001C00724CE: lea     rax, [r11+38h]
 * 00000001C00724D2: mov     [r11-30h], rdi
 * 00000001C00724D6: lea     r8, [r11+30h]
 * 00000001C00724DA: mov     r9d, edi
 * 00000001C00724DD: movzx   edx, si; unsigned __int16
 * 00000001C00724E0: lea     rcx, WPP_091de2f669683db8988ab996bc16e527_Traceguids; struct _GUID *
 * 00000001C00724E7: mov     [r11-38h], rax
 * 00000001C00724EB: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00724F0: and     [rsp+58h+var_10], 0
 * 00000001C00724F6: lea     rax, [rsp+58h+arg_30]
 * 00000001C00724FE: mov     [rsp+58h+var_18], rdi
 * 00000001C0072503: lea     r9, WPP_091de2f669683db8988ab996bc16e527_Traceguids
 * 00000001C007250A: mov     [rsp+58h+var_20], rax
 * 00000001C007250F: mov     edx, 2
 * 00000001C0072514: lea     rax, [rsp+58h+arg_28]
 * 00000001C007251C: mov     [rsp+58h+var_28], rdi
 * 00000001C0072521: mov     [rsp+58h+var_30], rax
 * 00000001C0072526: mov     rcx, rbx
 * 00000001C0072529: mov     [rsp+58h+var_38], si
 * 00000001C007252E: lea     r8d, [rdx+0Ch]
 * 00000001C0072532: call    cs:__imp_WppAutoLogTrace
 * 00000001C0072539: nop     dword ptr [rax+rax+00h]
 * 00000001C007253E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0072543: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0072548: add     rsp, 50h
 * 00000001C007254C: pop     rdi
 * 00000001C007254D: retn
 */
