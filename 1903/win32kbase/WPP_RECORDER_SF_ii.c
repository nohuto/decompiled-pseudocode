/*
 * XREFs of WPP_RECORDER_SF_ii @ 0x1C014BC50
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1C0149CF0 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ii @ 0x1C014BC50
 * Reason: Hex-Rays returned no pseudocode for 0x1C014BC50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014BC50: mov     r11, rsp
 * 00000001C014BC53: mov     [r11+8], rbx
 * 00000001C014BC57: mov     [r11+10h], rsi
 * 00000001C014BC5B: push    rdi
 * 00000001C014BC5C: sub     rsp, 50h
 * 00000001C014BC60: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014BC67: mov     esi, 39h ; '9'
 * 00000001C014BC6C: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C014BC73: mov     eax, [rcx+2Ch]
 * 00000001C014BC76: lea     edi, [rsi-31h]
 * 00000001C014BC79: test    al, 1
 * 00000001C014BC7B: jz      short loc_1C014BCBF
 * 00000001C014BC7D: cmp     byte ptr [rcx+29h], 2
 * 00000001C014BC81: jb      short loc_1C014BCBF
 * 00000001C014BC83: and     qword ptr [r11-18h], 0
 * 00000001C014BC88: lea     rdx, [r11+38h]
 * 00000001C014BC8C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C014BC93: lea     r8, WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids
 * 00000001C014BC9A: mov     rcx, [rcx+18h]
 * 00000001C014BC9E: mov     [r11-20h], rdi
 * 00000001C014BCA2: mov     [r11-28h], rdx
 * 00000001C014BCA6: lea     rdx, [r11+30h]
 * 00000001C014BCAA: mov     [r11-30h], rdi
 * 00000001C014BCAE: mov     [r11-38h], rdx
 * 00000001C014BCB2: lea     edx, [rsi-0Eh]
 * 00000001C014BCB5: movzx   r9d, si
 * 00000001C014BCB9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C014BCBF: and     [rsp+58h+var_10], 0
 * 00000001C014BCC5: lea     rax, [rsp+58h+arg_30]
 * 00000001C014BCCD: mov     [rsp+58h+var_18], rdi
 * 00000001C014BCD2: lea     r9, WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids
 * 00000001C014BCD9: mov     [rsp+58h+var_20], rax
 * 00000001C014BCDE: mov     edx, 2
 * 00000001C014BCE3: lea     rax, [rsp+58h+arg_28]
 * 00000001C014BCEB: mov     [rsp+58h+var_28], rdi
 * 00000001C014BCF0: mov     [rsp+58h+var_30], rax
 * 00000001C014BCF5: mov     rcx, rbx
 * 00000001C014BCF8: mov     [rsp+58h+var_38], si
 * 00000001C014BCFD: lea     r8d, [rdx-1]
 * 00000001C014BD01: call    cs:__imp_WppAutoLogTrace
 * 00000001C014BD08: nop     dword ptr [rax+rax+00h]
 * 00000001C014BD0D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C014BD12: mov     rsi, [rsp+58h+arg_8]
 * 00000001C014BD17: add     rsp, 50h
 * 00000001C014BD1B: pop     rdi
 * 00000001C014BD1C: retn
 */
