/*
 * XREFs of WPP_RECORDER_SF_qqDqq @ 0x1C0112120
 * Callers:
 *     EtwTraceUIPIEventHookError @ 0x1C010EE00 (EtwTraceUIPIEventHookError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqDqq @ 0x1C0112120
 * Reason: Hex-Rays returned no pseudocode for 0x1C0112120
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0112120: mov     r11, rsp
 * 00000001C0112123: mov     [r11+8], rbx
 * 00000001C0112127: mov     [r11+10h], rbp
 * 00000001C011212B: push    rdi
 * 00000001C011212C: sub     rsp, 80h
 * 00000001C0112133: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C011213A: mov     ebp, 0Ch
 * 00000001C011213F: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0112146: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C011214D: lea     edi, [rbp-4]
 * 00000001C0112150: jz      short loc_1C01121BC
 * 00000001C0112152: cmp     byte ptr [rcx+29h], 4
 * 00000001C0112156: jb      short loc_1C01121BC
 * 00000001C0112158: and     qword ptr [r11-18h], 0
 * 00000001C011215D: lea     rdx, [r11+50h]
 * 00000001C0112161: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0112168: lea     r8, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C011216F: mov     rcx, [rcx+18h]
 * 00000001C0112173: mov     [r11-20h], rdi
 * 00000001C0112177: mov     [r11-28h], rdx
 * 00000001C011217B: lea     rdx, [r11+48h]
 * 00000001C011217F: mov     [r11-30h], rdi
 * 00000001C0112183: mov     [r11-38h], rdx
 * 00000001C0112187: lea     rdx, [r11+40h]
 * 00000001C011218B: mov     qword ptr [r11-40h], 4
 * 00000001C0112193: mov     [r11-48h], rdx
 * 00000001C0112197: lea     rdx, [r11+38h]
 * 00000001C011219B: mov     [r11-50h], rdi
 * 00000001C011219F: mov     [r11-58h], rdx
 * 00000001C01121A3: lea     rdx, [r11+30h]
 * 00000001C01121A7: mov     [r11-60h], rdi
 * 00000001C01121AB: mov     [r11-68h], rdx
 * 00000001C01121AF: lea     edx, [rbp+1Fh]
 * 00000001C01121B2: movzx   r9d, bp
 * 00000001C01121B6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01121BC: and     [rsp+88h+var_10], 0
 * 00000001C01121C2: lea     rax, [rsp+88h+arg_48]
 * 00000001C01121CA: mov     [rsp+88h+var_18], rdi
 * 00000001C01121CF: lea     r9, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C01121D6: mov     [rsp+88h+var_20], rax
 * 00000001C01121DB: mov     edx, 4
 * 00000001C01121E0: mov     [rsp+88h+var_28], rdi
 * 00000001C01121E5: lea     rax, [rsp+88h+arg_40]
 * 00000001C01121ED: mov     [rsp+88h+var_30], rax
 * 00000001C01121F2: mov     rcx, rbx
 * 00000001C01121F5: mov     [rsp+88h+var_38], 4
 * 00000001C01121FE: lea     rax, [rsp+88h+arg_38]
 * 00000001C0112206: mov     [rsp+88h+var_40], rax
 * 00000001C011220B: lea     r8d, [rdx+0Eh]
 * 00000001C011220F: mov     [rsp+88h+var_48], rdi
 * 00000001C0112214: lea     rax, [rsp+88h+arg_30]
 * 00000001C011221C: mov     [rsp+88h+var_50], rax
 * 00000001C0112221: lea     rax, [rsp+88h+arg_28]
 * 00000001C0112229: mov     [rsp+88h+var_58], rdi
 * 00000001C011222E: mov     [rsp+88h+var_60], rax
 * 00000001C0112233: mov     [rsp+88h+var_68], bp
 * 00000001C0112238: call    cs:__imp_WppAutoLogTrace
 * 00000001C011223F: nop     dword ptr [rax+rax+00h]
 * 00000001C0112244: lea     r11, [rsp+88h+var_8]
 * 00000001C011224C: mov     rbx, [r11+10h]
 * 00000001C0112250: mov     rbp, [r11+18h]
 * 00000001C0112254: mov     rsp, r11
 * 00000001C0112257: pop     rdi
 * 00000001C0112258: retn
 */
