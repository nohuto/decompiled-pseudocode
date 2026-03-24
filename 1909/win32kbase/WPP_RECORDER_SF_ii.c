/*
 * XREFs of WPP_RECORDER_SF_ii @ 0x1C01495E0
 * Callers:
 *     RIMIDEGetTimeStampDelta @ 0x1C0147680 (RIMIDEGetTimeStampDelta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ii @ 0x1C01495E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01495E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01495E0: mov     r11, rsp
 * 00000001C01495E3: mov     [r11+8], rbx
 * 00000001C01495E7: mov     [r11+10h], rsi
 * 00000001C01495EB: push    rdi
 * 00000001C01495EC: sub     rsp, 50h
 * 00000001C01495F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01495F7: mov     esi, 39h ; '9'
 * 00000001C01495FC: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0149603: mov     eax, [rcx+2Ch]
 * 00000001C0149606: lea     edi, [rsi-31h]
 * 00000001C0149609: test    al, 1
 * 00000001C014960B: jz      short loc_1C014964F
 * 00000001C014960D: cmp     byte ptr [rcx+29h], 2
 * 00000001C0149611: jb      short loc_1C014964F
 * 00000001C0149613: and     qword ptr [r11-18h], 0
 * 00000001C0149618: lea     rdx, [r11+38h]
 * 00000001C014961C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0149623: lea     r8, WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids
 * 00000001C014962A: mov     rcx, [rcx+18h]
 * 00000001C014962E: mov     [r11-20h], rdi
 * 00000001C0149632: mov     [r11-28h], rdx
 * 00000001C0149636: lea     rdx, [r11+30h]
 * 00000001C014963A: mov     [r11-30h], rdi
 * 00000001C014963E: mov     [r11-38h], rdx
 * 00000001C0149642: lea     edx, [rsi-0Eh]
 * 00000001C0149645: movzx   r9d, si
 * 00000001C0149649: call    cs:__guard_dispatch_icall_fptr
 * 00000001C014964F: and     [rsp+58h+var_10], 0
 * 00000001C0149655: lea     rax, [rsp+58h+arg_30]
 * 00000001C014965D: mov     [rsp+58h+var_18], rdi
 * 00000001C0149662: lea     r9, WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids
 * 00000001C0149669: mov     [rsp+58h+var_20], rax
 * 00000001C014966E: mov     edx, 2
 * 00000001C0149673: lea     rax, [rsp+58h+arg_28]
 * 00000001C014967B: mov     [rsp+58h+var_28], rdi
 * 00000001C0149680: mov     [rsp+58h+var_30], rax
 * 00000001C0149685: mov     rcx, rbx
 * 00000001C0149688: mov     [rsp+58h+var_38], si
 * 00000001C014968D: lea     r8d, [rdx-1]
 * 00000001C0149691: call    cs:__imp_WppAutoLogTrace
 * 00000001C0149698: nop     dword ptr [rax+rax+00h]
 * 00000001C014969D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01496A2: mov     rsi, [rsp+58h+arg_8]
 * 00000001C01496A7: add     rsp, 50h
 * 00000001C01496AB: pop     rdi
 * 00000001C01496AC: retn
 */
