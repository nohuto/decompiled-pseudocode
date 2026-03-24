/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0002B70
 * Callers:
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0002B70
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002B70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002B70: mov     [rsp+arg_0], rbx
 * 00000001C0002B75: push    rdi
 * 00000001C0002B76: sub     rsp, 40h
 * 00000001C0002B7A: mov     rdi, rcx
 * 00000001C0002B7D: movzx   ebx, r9w
 * 00000001C0002B81: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002B88: mov     eax, [rcx+2Ch]
 * 00000001C0002B8B: test    al, 1
 * 00000001C0002B8D: jnz     loc_1C00048CC
 * 00000001C0002B93: mov     [rsp+48h+var_10], 0
 * 00000001C0002B9C: lea     rax, [rsp+48h+arg_28]
 * 00000001C0002BA1: mov     edx, 4
 * 00000001C0002BA6: mov     [rsp+48h+var_18], 4
 * 00000001C0002BAF: mov     [rsp+48h+var_20], rax
 * 00000001C0002BB4: lea     r9, WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids
 * 00000001C0002BBB: mov     rcx, rdi
 * 00000001C0002BBE: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C0002BC3: lea     r8d, [rdx-3]
 * 00000001C0002BC7: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002BCE: nop     dword ptr [rax+rax+00h]
 * 00000001C0002BD3: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0002BD8: add     rsp, 40h
 * 00000001C0002BDC: pop     rdi
 * 00000001C0002BDD: retn
 * 00000001C00048CC: cmp     byte ptr [rcx+29h], 4
 * 00000001C00048D0: jb      loc_1C0002B93
 * 00000001C00048D6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00048DD: lea     rdx, [rsp+48h+arg_28]
 * 00000001C00048E2: mov     rcx, [rcx+18h]
 * 00000001C00048E6: lea     r8, WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids
 * 00000001C00048ED: mov     [rsp+48h+var_18], 0
 * 00000001C00048F6: mov     [rsp+48h+var_20], 4
 * 00000001C00048FF: mov     [rsp+48h+var_28], rdx
 * 00000001C0004904: mov     edx, 2Bh ; '+'
 * 00000001C0004909: movzx   r9d, bx
 * 00000001C000490D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0004913: nop
 * 00000001C0004914: jmp     loc_1C0002B93
 */
