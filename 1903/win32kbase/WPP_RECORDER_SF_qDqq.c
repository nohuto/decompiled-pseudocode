/*
 * XREFs of WPP_RECORDER_SF_qDqq @ 0x1C0112004
 * Callers:
 *     EtwTraceUIPIHookError @ 0x1C010EF00 (EtwTraceUIPIHookError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDqq @ 0x1C0112004
 * Reason: Hex-Rays returned no pseudocode for 0x1C0112004
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0112004: mov     r11, rsp
 * 00000001C0112007: mov     [r11+8], rbx
 * 00000001C011200B: mov     [r11+10h], rbp
 * 00000001C011200F: push    rsi
 * 00000001C0112010: sub     rsp, 70h
 * 00000001C0112014: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C011201B: mov     ebp, 0Bh
 * 00000001C0112020: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0112027: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C011202E: lea     esi, [rbp-3]
 * 00000001C0112031: jz      short loc_1C0112091
 * 00000001C0112033: cmp     byte ptr [rcx+29h], 4
 * 00000001C0112037: jb      short loc_1C0112091
 * 00000001C0112039: and     qword ptr [r11-18h], 0
 * 00000001C011203E: lea     rdx, [r11+48h]
 * 00000001C0112042: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0112049: lea     r8, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C0112050: mov     rcx, [rcx+18h]
 * 00000001C0112054: mov     [r11-20h], rsi
 * 00000001C0112058: mov     [r11-28h], rdx
 * 00000001C011205C: lea     rdx, [r11+40h]
 * 00000001C0112060: mov     [r11-30h], rsi
 * 00000001C0112064: mov     [r11-38h], rdx
 * 00000001C0112068: lea     rdx, [r11+38h]
 * 00000001C011206C: mov     qword ptr [r11-40h], 4
 * 00000001C0112074: mov     [r11-48h], rdx
 * 00000001C0112078: lea     rdx, [r11+30h]
 * 00000001C011207C: mov     [r11-50h], rsi
 * 00000001C0112080: mov     [r11-58h], rdx
 * 00000001C0112084: lea     edx, [rbp+20h]
 * 00000001C0112087: movzx   r9d, bp
 * 00000001C011208B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0112091: and     [rsp+78h+var_10], 0
 * 00000001C0112097: lea     rax, [rsp+78h+arg_40]
 * 00000001C011209F: mov     [rsp+78h+var_18], rsi
 * 00000001C01120A4: lea     r9, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C01120AB: mov     [rsp+78h+var_20], rax
 * 00000001C01120B0: mov     edx, 4
 * 00000001C01120B5: mov     [rsp+78h+var_28], rsi
 * 00000001C01120BA: lea     rax, [rsp+78h+arg_38]
 * 00000001C01120C2: mov     [rsp+78h+var_30], rax
 * 00000001C01120C7: mov     rcx, rbx
 * 00000001C01120CA: mov     [rsp+78h+var_38], 4
 * 00000001C01120D3: lea     rax, [rsp+78h+arg_30]
 * 00000001C01120DB: mov     [rsp+78h+var_40], rax
 * 00000001C01120E0: lea     r8d, [rdx+0Eh]
 * 00000001C01120E4: lea     rax, [rsp+78h+arg_28]
 * 00000001C01120EC: mov     [rsp+78h+var_48], rsi
 * 00000001C01120F1: mov     [rsp+78h+var_50], rax
 * 00000001C01120F6: mov     [rsp+78h+var_58], bp
 * 00000001C01120FB: call    cs:__imp_WppAutoLogTrace
 * 00000001C0112102: nop     dword ptr [rax+rax+00h]
 * 00000001C0112107: lea     r11, [rsp+78h+var_8]
 * 00000001C011210C: mov     rbx, [r11+10h]
 * 00000001C0112110: mov     rbp, [r11+18h]
 * 00000001C0112114: mov     rsp, r11
 * 00000001C0112117: pop     rsi
 * 00000001C0112118: retn
 */
