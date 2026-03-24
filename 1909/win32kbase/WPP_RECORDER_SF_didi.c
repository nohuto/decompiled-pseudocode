/*
 * XREFs of WPP_RECORDER_SF_didi @ 0x1C01494C4
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1C0147680 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_didi @ 0x1C01494C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01494C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01494C4: mov     r11, rsp
 * 00000001C01494C7: mov     [r11+8], rbx
 * 00000001C01494CB: mov     [r11+10h], rbp
 * 00000001C01494CF: mov     [r11+18h], rsi
 * 00000001C01494D3: push    rdi
 * 00000001C01494D4: sub     rsp, 70h
 * 00000001C01494D8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01494DF: mov     ebp, 37h ; '7'
 * 00000001C01494E4: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C01494EB: mov     eax, [rcx+2Ch]
 * 00000001C01494EE: lea     edi, [rbp-2Fh]
 * 00000001C01494F1: lea     esi, [rbp-33h]
 * 00000001C01494F4: test    al, 1
 * 00000001C01494F6: jz      short loc_1C0149552
 * 00000001C01494F8: cmp     byte ptr [rcx+29h], 2
 * 00000001C01494FC: jb      short loc_1C0149552
 * 00000001C01494FE: and     qword ptr [r11-18h], 0
 * 00000001C0149503: lea     rdx, [r11+48h]
 * 00000001C0149507: mov     rax, cs:pfnWppTraceMessage
 * 00000001C014950E: lea     r8, WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids
 * 00000001C0149515: mov     rcx, [rcx+18h]
 * 00000001C0149519: mov     [r11-20h], rdi
 * 00000001C014951D: mov     [r11-28h], rdx
 * 00000001C0149521: lea     rdx, [r11+40h]
 * 00000001C0149525: mov     [r11-30h], rsi
 * 00000001C0149529: mov     [r11-38h], rdx
 * 00000001C014952D: lea     rdx, [r11+38h]
 * 00000001C0149531: mov     [r11-40h], rdi
 * 00000001C0149535: mov     [r11-48h], rdx
 * 00000001C0149539: lea     rdx, [r11+30h]
 * 00000001C014953D: mov     [r11-50h], rsi
 * 00000001C0149541: mov     [r11-58h], rdx
 * 00000001C0149545: lea     edx, [rbp-0Ch]
 * 00000001C0149548: movzx   r9d, bp
 * 00000001C014954C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0149552: and     [rsp+78h+var_10], 0
 * 00000001C0149558: lea     rax, [rsp+78h+arg_40]
 * 00000001C0149560: mov     [rsp+78h+var_18], rdi
 * 00000001C0149565: lea     r9, WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids
 * 00000001C014956C: mov     [rsp+78h+var_20], rax
 * 00000001C0149571: mov     edx, 2
 * 00000001C0149576: mov     [rsp+78h+var_28], rsi
 * 00000001C014957B: lea     rax, [rsp+78h+arg_38]
 * 00000001C0149583: mov     [rsp+78h+var_30], rax
 * 00000001C0149588: mov     rcx, rbx
 * 00000001C014958B: mov     [rsp+78h+var_38], rdi
 * 00000001C0149590: lea     rax, [rsp+78h+arg_30]
 * 00000001C0149598: mov     [rsp+78h+var_40], rax
 * 00000001C014959D: lea     r8d, [rdx-1]
 * 00000001C01495A1: lea     rax, [rsp+78h+arg_28]
 * 00000001C01495A9: mov     [rsp+78h+var_48], rsi
 * 00000001C01495AE: mov     [rsp+78h+var_50], rax
 * 00000001C01495B3: mov     [rsp+78h+var_58], bp
 * 00000001C01495B8: call    cs:__imp_WppAutoLogTrace
 * 00000001C01495BF: nop     dword ptr [rax+rax+00h]
 * 00000001C01495C4: lea     r11, [rsp+78h+var_8]
 * 00000001C01495C9: mov     rbx, [r11+10h]
 * 00000001C01495CD: mov     rbp, [r11+18h]
 * 00000001C01495D1: mov     rsi, [r11+20h]
 * 00000001C01495D5: mov     rsp, r11
 * 00000001C01495D8: pop     rdi
 * 00000001C01495D9: retn
 */
