/*
 * XREFs of WPP_RECORDER_SF_qHL @ 0x1C017549C
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C016C130 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qHL @ 0x1C017549C
 * Reason: Hex-Rays returned no pseudocode for 0x1C017549C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C017549C: mov     r11, rsp
 * 00000001C017549F: mov     [r11+8], rbx
 * 00000001C01754A3: push    r14
 * 00000001C01754A5: sub     rsp, 60h
 * 00000001C01754A9: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01754B0: mov     r14d, 130h
 * 00000001C01754B6: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01754BD: mov     eax, [rcx+2Ch]
 * 00000001C01754C0: test    al, 40h
 * 00000001C01754C2: jz      short loc_1C0175520
 * 00000001C01754C4: cmp     byte ptr [rcx+29h], 4
 * 00000001C01754C8: jb      short loc_1C0175520
 * 00000001C01754CA: and     qword ptr [r11-18h], 0
 * 00000001C01754CF: lea     rdx, [r11+40h]
 * 00000001C01754D3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01754DA: lea     r8, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C01754E1: mov     rcx, [rcx+18h]
 * 00000001C01754E5: mov     qword ptr [r11-20h], 4
 * 00000001C01754ED: mov     [r11-28h], rdx
 * 00000001C01754F1: lea     rdx, [r11+38h]
 * 00000001C01754F5: mov     qword ptr [r11-30h], 2
 * 00000001C01754FD: mov     [r11-38h], rdx
 * 00000001C0175501: lea     rdx, [r11+30h]
 * 00000001C0175505: mov     qword ptr [r11-40h], 8
 * 00000001C017550D: mov     [r11-48h], rdx
 * 00000001C0175511: mov     edx, 2Bh ; '+'
 * 00000001C0175516: movzx   r9d, r14w
 * 00000001C017551A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0175520: and     [rsp+68h+var_10], 0
 * 00000001C0175526: lea     rax, [rsp+68h+arg_38]
 * 00000001C017552E: mov     [rsp+68h+var_18], 4
 * 00000001C0175537: lea     r9, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C017553E: mov     [rsp+68h+var_20], rax
 * 00000001C0175543: mov     edx, 4
 * 00000001C0175548: mov     [rsp+68h+var_28], 2
 * 00000001C0175551: lea     rax, [rsp+68h+arg_30]
 * 00000001C0175559: mov     [rsp+68h+var_30], rax
 * 00000001C017555E: mov     rcx, rbx
 * 00000001C0175561: lea     rax, [rsp+68h+arg_28]
 * 00000001C0175569: mov     [rsp+68h+var_38], 8
 * 00000001C0175572: mov     [rsp+68h+var_40], rax
 * 00000001C0175577: lea     r8d, [rdx+3]
 * 00000001C017557B: mov     [rsp+68h+var_48], r14w
 * 00000001C0175581: call    cs:__imp_WppAutoLogTrace
 * 00000001C0175588: nop     dword ptr [rax+rax+00h]
 * 00000001C017558D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0175592: add     rsp, 60h
 * 00000001C0175596: pop     r14
 * 00000001C0175598: retn
 */
