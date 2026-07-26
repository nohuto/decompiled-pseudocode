/*
 * XREFs of WPP_RECORDER_SF_sL @ 0x1C007285C
 * Callers:
 *     ndisOidPMRemove @ 0x1C0022E6C (ndisOidPMRemove.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sL @ 0x1C007285C
 * Reason: Hex-Rays returned no pseudocode for 0x1C007285C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C007285C: mov     rax, rsp
 * 00000001C007285F: mov     [rax+8], rbx
 * 00000001C0072863: mov     [rax+10h], rsi
 * 00000001C0072867: mov     [rax+18h], rdi
 * 00000001C007286B: mov     [rax+20h], r12
 * 00000001C007286F: push    r13
 * 00000001C0072871: sub     rsp, 50h
 * 00000001C0072875: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C007287C: lea     r12, aNull; "NULL"
 * 00000001C0072883: mov     rdi, [rsp+58h+arg_28]
 * 00000001C007288B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C007288F: mov     rsi, rcx
 * 00000001C0072892: test    dword ptr [rdx+2Ch], 2000h
 * 00000001C0072899: lea     r13d, [rbx+4Ch]
 * 00000001C007289D: jz      short loc_1C00728F8
 * 00000001C007289F: cmp     byte ptr [rdx+29h], 2
 * 00000001C00728A3: jb      short loc_1C00728F8
 * 00000001C00728A5: test    rdi, rdi
 * 00000001C00728A8: jz      short loc_1C00728BC
 * 00000001C00728AA: mov     r9, rbx
 * 00000001C00728AD: inc     r9
 * 00000001C00728B0: cmp     byte ptr [rdi+r9], 0
 * 00000001C00728B5: jnz     short loc_1C00728AD
 * 00000001C00728B7: inc     r9
 * 00000001C00728BA: jmp     short loc_1C00728C2
 * 00000001C00728BC: mov     r9d, 5
 * 00000001C00728C2: test    rdi, rdi
 * 00000001C00728C5: movzx   edx, r13w; unsigned __int16
 * 00000001C00728C9: lea     rax, [rsp+58h+arg_30]
 * 00000001C00728D1: mov     r8, rdi
 * 00000001C00728D4: cmovz   r8, r12
 * 00000001C00728D8: lea     rcx, WPP_091de2f669683db8988ab996bc16e527_Traceguids; struct _GUID *
 * 00000001C00728DF: and     [rsp+58h+var_28], 0
 * 00000001C00728E5: mov     [rsp+58h+var_30], 4
 * 00000001C00728EE: mov     [rsp+58h+var_38], rax
 * 00000001C00728F3: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001C00728F8: test    rdi, rdi
 * 00000001C00728FB: jz      short loc_1C007290B
 * 00000001C00728FD: inc     rbx
 * 00000001C0072900: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0072904: jnz     short loc_1C00728FD
 * 00000001C0072906: inc     rbx
 * 00000001C0072909: jmp     short loc_1C0072910
 * 00000001C007290B: mov     ebx, 5
 * 00000001C0072910: test    rdi, rdi
 * 00000001C0072913: lea     rax, [rsp+58h+arg_30]
 * 00000001C007291B: mov     edx, 2
 * 00000001C0072920: lea     r9, WPP_091de2f669683db8988ab996bc16e527_Traceguids
 * 00000001C0072927: cmovz   rdi, r12
 * 00000001C007292B: mov     rcx, rsi
 * 00000001C007292E: and     [rsp+58h+var_10], 0
 * 00000001C0072934: mov     [rsp+58h+var_18], 4
 * 00000001C007293D: mov     [rsp+58h+var_20], rax
 * 00000001C0072942: lea     r8d, [rdx+0Ch]
 * 00000001C0072946: mov     [rsp+58h+var_28], rbx
 * 00000001C007294B: mov     [rsp+58h+var_30], rdi
 * 00000001C0072950: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0072956: call    cs:__imp_WppAutoLogTrace
 * 00000001C007295D: nop     dword ptr [rax+rax+00h]
 * 00000001C0072962: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0072967: mov     rsi, [rsp+58h+arg_8]
 * 00000001C007296C: mov     rdi, [rsp+58h+arg_10]
 * 00000001C0072971: mov     r12, [rsp+58h+arg_18]
 * 00000001C0072976: add     rsp, 50h
 * 00000001C007297A: pop     r13
 * 00000001C007297C: retn
 */
