/*
 * XREFs of WPP_RECORDER_SF_qqSd @ 0x1C01385B4
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqSd @ 0x1C01385B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01385B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01385B4: mov     rax, rsp
 * 00000001C01385B7: mov     [rax+8], rbx
 * 00000001C01385BB: mov     [rax+10h], rbp
 * 00000001C01385BF: mov     [rax+18h], rsi
 * 00000001C01385C3: mov     [rax+20h], rdi
 * 00000001C01385C7: push    r12
 * 00000001C01385C9: push    r13
 * 00000001C01385CB: push    r14
 * 00000001C01385CD: sub     rsp, 70h
 * 00000001C01385D1: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01385D8: lea     r13, Context
 * 00000001C01385DF: mov     rbp, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C01385E6: xor     r14d, r14d
 * 00000001C01385E9: mov     rbx, [rsp+88h+arg_38]
 * 00000001C01385F1: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C01385F5: mov     eax, [rcx+2Ch]
 * 00000001C01385F8: lea     r9d, [r14+38h]
 * 00000001C01385FC: lea     esi, [rdi+0Bh]
 * 00000001C01385FF: lea     r12d, [r14+8]
 * 00000001C0138603: test    al, 1
 * 00000001C0138605: jz      loc_1C01386B1
 * 00000001C013860B: cmp     byte ptr [rcx+29h], 4
 * 00000001C013860F: jb      loc_1C01386B1
 * 00000001C0138615: test    rbx, rbx
 * 00000001C0138618: jz      short loc_1C0138631
 * 00000001C013861A: mov     rax, rdi
 * 00000001C013861D: inc     rax
 * 00000001C0138620: cmp     [rbx+rax*2], r14w
 * 00000001C0138625: jnz     short loc_1C013861D
 * 00000001C0138627: lea     rdx, ds:2[rax*2]
 * 00000001C013862F: jmp     short loc_1C0138634
 * 00000001C0138631: mov     rdx, rsi
 * 00000001C0138634: mov     rax, cs:pfnWppTraceMessage
 * 00000001C013863B: lea     r8, [rsp+88h+arg_40]
 * 00000001C0138643: mov     [rsp+88h+var_28], r14
 * 00000001C0138648: test    rbx, rbx
 * 00000001C013864B: mov     [rsp+88h+var_30], 4
 * 00000001C0138654: mov     rcx, rbx
 * 00000001C0138657: mov     [rsp+88h+var_38], r8
 * 00000001C013865C: cmovz   rcx, r13
 * 00000001C0138660: mov     [rsp+88h+var_40], rdx
 * 00000001C0138665: lea     r8, WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids
 * 00000001C013866C: mov     [rsp+88h+var_48], rcx
 * 00000001C0138671: mov     edx, 2Bh ; '+'
 * 00000001C0138676: mov     [rsp+88h+var_50], r12
 * 00000001C013867B: lea     rcx, [rsp+88h+arg_30]
 * 00000001C0138683: mov     [rsp+88h+var_58], rcx
 * 00000001C0138688: lea     rcx, [rsp+88h+arg_28]
 * 00000001C0138690: mov     [rsp+88h+var_60], r12
 * 00000001C0138695: mov     [rsp+88h+var_68], rcx
 * 00000001C013869A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01386A1: mov     rcx, [rcx+18h]
 * 00000001C01386A5: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01386AB: mov     r9d, 38h ; '8'
 * 00000001C01386B1: test    rbx, rbx
 * 00000001C01386B4: jz      short loc_1C01386CB
 * 00000001C01386B6: inc     rdi
 * 00000001C01386B9: cmp     [rbx+rdi*2], r14w
 * 00000001C01386BE: jnz     short loc_1C01386B6
 * 00000001C01386C0: lea     rsi, ds:2[rdi*2]
 * 00000001C01386C8: test    rbx, rbx
 * 00000001C01386CB: mov     [rsp+88h+var_20], r14
 * 00000001C01386D0: lea     rax, [rsp+88h+arg_40]
 * 00000001C01386D8: mov     [rsp+88h+var_28], 4
 * 00000001C01386E1: cmovz   rbx, r13
 * 00000001C01386E5: mov     [rsp+88h+var_30], rax
 * 00000001C01386EA: mov     edx, 4
 * 00000001C01386EF: mov     [rsp+88h+var_38], rsi
 * 00000001C01386F4: lea     rax, [rsp+88h+arg_30]
 * 00000001C01386FC: mov     [rsp+88h+var_40], rbx
 * 00000001C0138701: mov     rcx, rbp
 * 00000001C0138704: mov     [rsp+88h+var_48], r12
 * 00000001C0138709: mov     [rsp+88h+var_50], rax
 * 00000001C013870E: lea     r8d, [rdx-3]
 * 00000001C0138712: lea     rax, [rsp+88h+arg_28]
 * 00000001C013871A: mov     [rsp+88h+var_58], r12
 * 00000001C013871F: mov     [rsp+88h+var_60], rax
 * 00000001C0138724: mov     word ptr [rsp+88h+var_68], r9w
 * 00000001C013872A: lea     r9, WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids
 * 00000001C0138731: call    cs:__imp_WppAutoLogTrace
 * 00000001C0138738: nop     dword ptr [rax+rax+00h]
 * 00000001C013873D: lea     r11, [rsp+88h+var_18]
 * 00000001C0138742: mov     rbx, [r11+20h]
 * 00000001C0138746: mov     rbp, [r11+28h]
 * 00000001C013874A: mov     rsi, [r11+30h]
 * 00000001C013874E: mov     rdi, [r11+38h]
 * 00000001C0138752: mov     rsp, r11
 * 00000001C0138755: pop     r14
 * 00000001C0138757: pop     r13
 * 00000001C0138759: pop     r12
 * 00000001C013875B: retn
 */
