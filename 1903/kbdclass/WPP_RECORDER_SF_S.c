/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0002A00
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000DB20 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DFA0 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0002A00
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002A00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002A00: mov     [rsp+arg_0], rbx
 * 00000001C0002A05: mov     [rsp+arg_8], rbp
 * 00000001C0002A0A: mov     [rsp+arg_10], rsi
 * 00000001C0002A0F: mov     [rsp+arg_18], rdi
 * 00000001C0002A14: push    r12
 * 00000001C0002A16: push    r14
 * 00000001C0002A18: push    r15
 * 00000001C0002A1A: sub     rsp, 40h
 * 00000001C0002A1E: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C0002A25: lea     r12, aNull_0; "NULL"
 * 00000001C0002A2C: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0002A34: mov     rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0002A3B: movzx   r14d, r9w
 * 00000001C0002A3F: movzx   ebp, dl
 * 00000001C0002A42: mov     r15, rcx
 * 00000001C0002A45: mov     eax, [r8+2Ch]
 * 00000001C0002A49: lea     esi, [rbx+0Bh]
 * 00000001C0002A4C: test    al, 1
 * 00000001C0002A4E: jnz     loc_1C0003854
 * 00000001C0002A54: test    rdi, rdi
 * 00000001C0002A57: jz      short loc_1C0002ACC
 * 00000001C0002A59: nop     dword ptr [rax+00000000h]
 * 00000001C0002A60: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0002A66: lea     rbx, [rbx+1]
 * 00000001C0002A6A: jnz     short loc_1C0002A60
 * 00000001C0002A6C: lea     rsi, ds:2[rbx*2]
 * 00000001C0002A74: mov     [rsp+58h+var_20], 0
 * 00000001C0002A7D: lea     r9, WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids
 * 00000001C0002A84: mov     [rsp+58h+var_28], rsi
 * 00000001C0002A89: mov     r8d, 1
 * 00000001C0002A8F: mov     [rsp+58h+var_30], rdi
 * 00000001C0002A94: mov     rcx, r15
 * 00000001C0002A97: movzx   edx, bpl
 * 00000001C0002A9B: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C0002AA1: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002AA8: nop     dword ptr [rax+rax+00h]
 * 00000001C0002AAD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002AB2: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0002AB7: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0002ABC: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0002AC1: add     rsp, 40h
 * 00000001C0002AC5: pop     r15
 * 00000001C0002AC7: pop     r14
 * 00000001C0002AC9: pop     r12
 * 00000001C0002ACB: retn
 * 00000001C0002ACC: mov     rdi, r12
 * 00000001C0002ACF: jmp     short loc_1C0002A74
 * 00000001C0003854: cmp     [r8+29h], bpl
 * 00000001C0003858: jb      loc_1C0002A54
 * 00000001C000385E: test    rdi, rdi
 * 00000001C0003861: jz      short loc_1C000387C
 * 00000001C0003863: mov     rax, rbx
 * 00000001C0003866: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C000386C: lea     rax, [rax+1]
 * 00000001C0003870: jnz     short loc_1C0003866
 * 00000001C0003872: lea     rdx, ds:2[rax*2]
 * 00000001C000387A: jmp     short loc_1C000387F
 * 00000001C000387C: mov     rdx, rsi
 * 00000001C000387F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003886: lea     r8, WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids
 * 00000001C000388D: test    rdi, rdi
 * 00000001C0003890: mov     [rsp+58h+var_28], 0
 * 00000001C0003899: mov     [rsp+58h+var_30], rdx
 * 00000001C000389E: mov     rcx, rdi
 * 00000001C00038A1: cmovz   rcx, r12
 * 00000001C00038A5: movzx   r9d, r14w
 * 00000001C00038A9: mov     [rsp+58h+var_38], rcx
 * 00000001C00038AE: mov     edx, 2Bh ; '+'
 * 00000001C00038B3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00038BA: mov     rcx, [rcx+18h]
 * 00000001C00038BE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00038C4: nop
 * 00000001C00038C5: jmp     loc_1C0002A54
 */
