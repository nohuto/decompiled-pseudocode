/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00061D0
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C00010D0 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0005AA0 (KeyboardClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00061D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00061D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00061D0: mov     r11, rsp
 * 00000001C00061D3: mov     [r11+8], rbx
 * 00000001C00061D7: push    rdi
 * 00000001C00061D8: sub     rsp, 40h
 * 00000001C00061DC: mov     rdi, rcx
 * 00000001C00061DF: movzx   ebx, r9w
 * 00000001C00061E3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00061EA: mov     eax, [rcx+2Ch]
 * 00000001C00061ED: test    al, 10h
 * 00000001C00061EF: jz      short loc_1C000622D
 * 00000001C00061F1: cmp     byte ptr [rcx+29h], 2
 * 00000001C00061F5: jb      short loc_1C000622D
 * 00000001C00061F7: and     qword ptr [r11-18h], 0
 * 00000001C00061FC: lea     rdx, [r11+30h]
 * 00000001C0006200: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0006207: lea     r8, WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids
 * 00000001C000620E: mov     rcx, [rcx+18h]
 * 00000001C0006212: mov     qword ptr [r11-20h], 8
 * 00000001C000621A: mov     [r11-28h], rdx
 * 00000001C000621E: mov     edx, 2Bh ; '+'
 * 00000001C0006223: movzx   r9d, bx
 * 00000001C0006227: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000622D: and     [rsp+48h+var_10], 0
 * 00000001C0006233: lea     rax, [rsp+48h+arg_28]
 * 00000001C0006238: mov     edx, 2
 * 00000001C000623D: mov     [rsp+48h+var_18], 8
 * 00000001C0006246: mov     [rsp+48h+var_20], rax
 * 00000001C000624B: lea     r9, WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids
 * 00000001C0006252: mov     rcx, rdi
 * 00000001C0006255: mov     [rsp+48h+var_28], bx
 * 00000001C000625A: lea     r8d, [rdx+3]
 * 00000001C000625E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0006265: nop     dword ptr [rax+rax+00h]
 * 00000001C000626A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000626F: add     rsp, 40h
 * 00000001C0006273: pop     rdi
 * 00000001C0006274: retn
 */
