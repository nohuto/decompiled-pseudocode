/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C00025B0
 * Callers:
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C00025B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00025B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00025B0: mov     [rsp+arg_0], rbx
 * 00000001C00025B5: push    rsi
 * 00000001C00025B6: sub     rsp, 50h
 * 00000001C00025BA: mov     rbx, rcx
 * 00000001C00025BD: mov     esi, 43h ; 'C'
 * 00000001C00025C2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00025C9: mov     eax, [rcx+2Ch]
 * 00000001C00025CC: test    al, 1
 * 00000001C00025CE: jnz     loc_1C000405A
 * 00000001C00025D4: mov     [rsp+58h+var_10], 0
 * 00000001C00025DD: lea     rax, [rsp+58h+arg_30]
 * 00000001C00025E5: mov     [rsp+58h+var_18], 4
 * 00000001C00025EE: lea     r9, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C00025F5: mov     [rsp+58h+var_20], rax
 * 00000001C00025FA: mov     edx, 4
 * 00000001C00025FF: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002607: mov     [rsp+58h+var_28], 4
 * 00000001C0002610: mov     [rsp+58h+var_30], rax
 * 00000001C0002615: mov     rcx, rbx
 * 00000001C0002618: mov     word ptr [rsp+58h+var_38], si
 * 00000001C000261D: lea     r8d, [rdx-3]
 * 00000001C0002621: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002628: nop     dword ptr [rax+rax+00h]
 * 00000001C000262D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002632: add     rsp, 50h
 * 00000001C0002636: pop     rsi
 * 00000001C0002637: retn
 * 00000001C000405A: cmp     byte ptr [rcx+29h], 4
 * 00000001C000405E: jb      loc_1C00025D4
 * 00000001C0004064: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000406B: lea     rdx, [rsp+58h+arg_30]
 * 00000001C0004073: mov     rcx, [rcx+18h]
 * 00000001C0004077: lea     r8, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C000407E: mov     [rsp+58h+var_18], 0
 * 00000001C0004087: mov     [rsp+58h+var_20], 4
 * 00000001C0004090: mov     [rsp+58h+var_28], rdx
 * 00000001C0004095: lea     rdx, [rsp+58h+arg_28]
 * 00000001C000409D: mov     [rsp+58h+var_30], 4
 * 00000001C00040A6: mov     [rsp+58h+var_38], rdx
 * 00000001C00040AB: mov     edx, 2Bh ; '+'
 * 00000001C00040B0: movzx   r9d, si
 * 00000001C00040B4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00040BA: nop
 * 00000001C00040BB: jmp     loc_1C00025D4
 */
