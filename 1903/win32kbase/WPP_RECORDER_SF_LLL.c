/*
 * XREFs of WPP_RECORDER_SF_LLL @ 0x1C01770B4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LLL @ 0x1C01770B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01770B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01770B4: mov     r11, rsp
 * 00000001C01770B7: mov     [r11+8], rbx
 * 00000001C01770BB: mov     [r11+10h], rsi
 * 00000001C01770BF: push    rdi
 * 00000001C01770C0: sub     rsp, 60h
 * 00000001C01770C4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01770CB: movzx   ebx, r9w
 * 00000001C01770CF: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01770D6: mov     esi, 4
 * 00000001C01770DB: mov     eax, [rcx+2Ch]
 * 00000001C01770DE: test    al, 40h
 * 00000001C01770E0: jz      short loc_1C0177130
 * 00000001C01770E2: cmp     byte ptr [rcx+29h], 5
 * 00000001C01770E6: jb      short loc_1C0177130
 * 00000001C01770E8: and     qword ptr [r11-18h], 0
 * 00000001C01770ED: lea     rdx, [r11+40h]
 * 00000001C01770F1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01770F8: lea     r8, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C01770FF: mov     rcx, [rcx+18h]
 * 00000001C0177103: mov     [r11-20h], rsi
 * 00000001C0177107: mov     [r11-28h], rdx
 * 00000001C017710B: lea     rdx, [r11+38h]
 * 00000001C017710F: mov     [r11-30h], rsi
 * 00000001C0177113: mov     [r11-38h], rdx
 * 00000001C0177117: lea     rdx, [r11+30h]
 * 00000001C017711B: mov     [r11-40h], rsi
 * 00000001C017711F: mov     [r11-48h], rdx
 * 00000001C0177123: lea     edx, [rsi+27h]
 * 00000001C0177126: movzx   r9d, bx
 * 00000001C017712A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0177130: and     [rsp+68h+var_10], 0
 * 00000001C0177136: lea     rax, [rsp+68h+arg_38]
 * 00000001C017713E: mov     [rsp+68h+var_18], rsi
 * 00000001C0177143: lea     r9, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C017714A: mov     [rsp+68h+var_20], rax
 * 00000001C017714F: mov     edx, 5
 * 00000001C0177154: mov     [rsp+68h+var_28], rsi
 * 00000001C0177159: lea     rax, [rsp+68h+arg_30]
 * 00000001C0177161: mov     [rsp+68h+var_30], rax
 * 00000001C0177166: mov     rcx, rdi
 * 00000001C0177169: lea     rax, [rsp+68h+arg_28]
 * 00000001C0177171: mov     [rsp+68h+var_38], rsi
 * 00000001C0177176: mov     [rsp+68h+var_40], rax
 * 00000001C017717B: lea     r8d, [rdx+2]
 * 00000001C017717F: mov     [rsp+68h+var_48], bx
 * 00000001C0177184: call    cs:__imp_WppAutoLogTrace
 * 00000001C017718B: nop     dword ptr [rax+rax+00h]
 * 00000001C0177190: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0177195: mov     rsi, [rsp+68h+arg_8]
 * 00000001C017719A: add     rsp, 60h
 * 00000001C017719E: pop     rdi
 * 00000001C017719F: retn
 */
