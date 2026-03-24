/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C0005958
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0004BD0 (MouseClassServiceCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qL @ 0x1C0005958
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005958
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005958: mov     r11, rsp
 * 00000001C000595B: mov     [r11+8], rbx
 * 00000001C000595F: push    rbp
 * 00000001C0005960: sub     rsp, 50h
 * 00000001C0005964: mov     rbx, rcx
 * 00000001C0005967: mov     ebp, 35h ; '5'
 * 00000001C000596C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0005973: mov     eax, [rcx+2Ch]
 * 00000001C0005976: test    al, 4
 * 00000001C0005978: jz      short loc_1C00059C4
 * 00000001C000597A: cmp     byte ptr [rcx+29h], 5
 * 00000001C000597E: jb      short loc_1C00059C4
 * 00000001C0005980: and     qword ptr [r11-18h], 0
 * 00000001C0005985: lea     rdx, [r11+38h]
 * 00000001C0005989: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005990: lea     r8, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C0005997: mov     rcx, [rcx+18h]
 * 00000001C000599B: mov     qword ptr [r11-20h], 4
 * 00000001C00059A3: mov     [r11-28h], rdx
 * 00000001C00059A7: lea     rdx, [r11+30h]
 * 00000001C00059AB: mov     qword ptr [r11-30h], 8
 * 00000001C00059B3: mov     [r11-38h], rdx
 * 00000001C00059B7: lea     edx, [rbp-0Ah]
 * 00000001C00059BA: movzx   r9d, bp
 * 00000001C00059BE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00059C4: and     [rsp+58h+var_10], 0
 * 00000001C00059CA: lea     rax, [rsp+58h+arg_30]
 * 00000001C00059D2: mov     [rsp+58h+var_18], 4
 * 00000001C00059DB: lea     r9, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C00059E2: mov     [rsp+58h+var_20], rax
 * 00000001C00059E7: mov     edx, 5
 * 00000001C00059EC: lea     rax, [rsp+58h+arg_28]
 * 00000001C00059F4: mov     [rsp+58h+var_28], 8
 * 00000001C00059FD: mov     [rsp+58h+var_30], rax
 * 00000001C0005A02: mov     rcx, rbx
 * 00000001C0005A05: mov     [rsp+58h+var_38], bp
 * 00000001C0005A0A: lea     r8d, [rdx-2]
 * 00000001C0005A0E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005A15: nop     dword ptr [rax+rax+00h]
 * 00000001C0005A1A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005A1F: add     rsp, 50h
 * 00000001C0005A23: pop     rbp
 * 00000001C0005A24: retn
 */
