/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00058AC
 * Callers:
 *     MouseClassPoRequestComplete @ 0x1C0001910 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C00050D0 (MouseClassWWPowerUpComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00058AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00058AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00058AC: mov     r11, rsp
 * 00000001C00058AF: mov     [r11+8], rbx
 * 00000001C00058B3: push    rdi
 * 00000001C00058B4: sub     rsp, 40h
 * 00000001C00058B8: mov     rdi, rcx
 * 00000001C00058BB: movzx   ebx, r9w
 * 00000001C00058BF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00058C6: mov     eax, [rcx+2Ch]
 * 00000001C00058C9: test    al, 10h
 * 00000001C00058CB: jz      short loc_1C0005909
 * 00000001C00058CD: cmp     byte ptr [rcx+29h], 2
 * 00000001C00058D1: jb      short loc_1C0005909
 * 00000001C00058D3: and     qword ptr [r11-18h], 0
 * 00000001C00058D8: lea     rdx, [r11+30h]
 * 00000001C00058DC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00058E3: lea     r8, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C00058EA: mov     rcx, [rcx+18h]
 * 00000001C00058EE: mov     qword ptr [r11-20h], 8
 * 00000001C00058F6: mov     [r11-28h], rdx
 * 00000001C00058FA: mov     edx, 2Bh ; '+'
 * 00000001C00058FF: movzx   r9d, bx
 * 00000001C0005903: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005909: and     [rsp+48h+var_10], 0
 * 00000001C000590F: lea     rax, [rsp+48h+arg_28]
 * 00000001C0005914: mov     edx, 2
 * 00000001C0005919: mov     [rsp+48h+var_18], 8
 * 00000001C0005922: mov     [rsp+48h+var_20], rax
 * 00000001C0005927: lea     r9, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C000592E: mov     rcx, rdi
 * 00000001C0005931: mov     [rsp+48h+var_28], bx
 * 00000001C0005936: lea     r8d, [rdx+3]
 * 00000001C000593A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005941: nop     dword ptr [rax+rax+00h]
 * 00000001C0005946: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000594B: add     rsp, 40h
 * 00000001C000594F: pop     rdi
 * 00000001C0005950: retn
 */
