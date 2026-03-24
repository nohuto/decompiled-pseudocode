/*
 * XREFs of WPP_RECORDER_SF_didi @ 0x1C014BB34
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1C0149CF0 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_didi @ 0x1C014BB34
 * Reason: Hex-Rays returned no pseudocode for 0x1C014BB34
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014BB34: mov     r11, rsp
 * 00000001C014BB37: mov     [r11+8], rbx
 * 00000001C014BB3B: mov     [r11+10h], rbp
 * 00000001C014BB3F: mov     [r11+18h], rsi
 * 00000001C014BB43: push    rdi
 * 00000001C014BB44: sub     rsp, 70h
 * 00000001C014BB48: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014BB4F: mov     ebp, 37h ; '7'
 * 00000001C014BB54: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C014BB5B: mov     eax, [rcx+2Ch]
 * 00000001C014BB5E: lea     edi, [rbp-2Fh]
 * 00000001C014BB61: lea     esi, [rbp-33h]
 * 00000001C014BB64: test    al, 1
 * 00000001C014BB66: jz      short loc_1C014BBC2
 * 00000001C014BB68: cmp     byte ptr [rcx+29h], 2
 * 00000001C014BB6C: jb      short loc_1C014BBC2
 * 00000001C014BB6E: and     qword ptr [r11-18h], 0
 * 00000001C014BB73: lea     rdx, [r11+48h]
 * 00000001C014BB77: mov     rax, cs:pfnWppTraceMessage
 * 00000001C014BB7E: lea     r8, WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids
 * 00000001C014BB85: mov     rcx, [rcx+18h]
 * 00000001C014BB89: mov     [r11-20h], rdi
 * 00000001C014BB8D: mov     [r11-28h], rdx
 * 00000001C014BB91: lea     rdx, [r11+40h]
 * 00000001C014BB95: mov     [r11-30h], rsi
 * 00000001C014BB99: mov     [r11-38h], rdx
 * 00000001C014BB9D: lea     rdx, [r11+38h]
 * 00000001C014BBA1: mov     [r11-40h], rdi
 * 00000001C014BBA5: mov     [r11-48h], rdx
 * 00000001C014BBA9: lea     rdx, [r11+30h]
 * 00000001C014BBAD: mov     [r11-50h], rsi
 * 00000001C014BBB1: mov     [r11-58h], rdx
 * 00000001C014BBB5: lea     edx, [rbp-0Ch]
 * 00000001C014BBB8: movzx   r9d, bp
 * 00000001C014BBBC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C014BBC2: and     [rsp+78h+var_10], 0
 * 00000001C014BBC8: lea     rax, [rsp+78h+arg_40]
 * 00000001C014BBD0: mov     [rsp+78h+var_18], rdi
 * 00000001C014BBD5: lea     r9, WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids
 * 00000001C014BBDC: mov     [rsp+78h+var_20], rax
 * 00000001C014BBE1: mov     edx, 2
 * 00000001C014BBE6: mov     [rsp+78h+var_28], rsi
 * 00000001C014BBEB: lea     rax, [rsp+78h+arg_38]
 * 00000001C014BBF3: mov     [rsp+78h+var_30], rax
 * 00000001C014BBF8: mov     rcx, rbx
 * 00000001C014BBFB: mov     [rsp+78h+var_38], rdi
 * 00000001C014BC00: lea     rax, [rsp+78h+arg_30]
 * 00000001C014BC08: mov     [rsp+78h+var_40], rax
 * 00000001C014BC0D: lea     r8d, [rdx-1]
 * 00000001C014BC11: lea     rax, [rsp+78h+arg_28]
 * 00000001C014BC19: mov     [rsp+78h+var_48], rsi
 * 00000001C014BC1E: mov     [rsp+78h+var_50], rax
 * 00000001C014BC23: mov     [rsp+78h+var_58], bp
 * 00000001C014BC28: call    cs:__imp_WppAutoLogTrace
 * 00000001C014BC2F: nop     dword ptr [rax+rax+00h]
 * 00000001C014BC34: lea     r11, [rsp+78h+var_8]
 * 00000001C014BC39: mov     rbx, [r11+10h]
 * 00000001C014BC3D: mov     rbp, [r11+18h]
 * 00000001C014BC41: mov     rsi, [r11+20h]
 * 00000001C014BC45: mov     rsp, r11
 * 00000001C014BC48: pop     rdi
 * 00000001C014BC49: retn
 */
