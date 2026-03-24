/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C0054498
 * Callers:
 *     UsbhExceptionTrace @ 0x1C0053C20 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C0054498
 * Reason: Hex-Rays returned no pseudocode for 0x1C0054498
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0054498: mov     rax, rsp
 * 00000001C005449B: mov     [rax+8], rbx
 * 00000001C005449F: mov     [rax+10h], rsi
 * 00000001C00544A3: mov     [rax+18h], rdi
 * 00000001C00544A7: mov     [rax+20h], r12
 * 00000001C00544AB: push    r13
 * 00000001C00544AD: sub     rsp, 50h
 * 00000001C00544B1: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C00544B8: lea     r12, aNull_0; "NULL"
 * 00000001C00544BF: mov     rdi, [rsp+58h+arg_30]
 * 00000001C00544C7: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00544CB: mov     rsi, rcx
 * 00000001C00544CE: mov     edx, [rax+2Ch]
 * 00000001C00544D1: lea     r13d, [rbx+0Dh]
 * 00000001C00544D5: test    dl, 1
 * 00000001C00544D8: jz      short loc_1C005454D
 * 00000001C00544DA: test    rdi, rdi
 * 00000001C00544DD: jz      short loc_1C00544F0
 * 00000001C00544DF: mov     rdx, rbx
 * 00000001C00544E2: inc     rdx
 * 00000001C00544E5: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00544E9: jnz     short loc_1C00544E2
 * 00000001C00544EB: inc     rdx
 * 00000001C00544EE: jmp     short loc_1C00544F5
 * 00000001C00544F0: mov     edx, 5
 * 00000001C00544F5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00544FC: lea     r8, WPP_bef5af58ea873151941a7328979aa9a8_Traceguids
 * 00000001C0054503: test    rdi, rdi
 * 00000001C0054506: movzx   r9d, r13w
 * 00000001C005450A: mov     rcx, rdi
 * 00000001C005450D: cmovz   rcx, r12
 * 00000001C0054511: and     [rsp+58h+var_18], 0
 * 00000001C0054517: mov     [rsp+58h+var_20], rdx
 * 00000001C005451C: mov     edx, 2Bh ; '+'
 * 00000001C0054521: mov     [rsp+58h+var_28], rcx
 * 00000001C0054526: lea     rcx, [rsp+58h+arg_28]
 * 00000001C005452E: mov     [rsp+58h+var_30], 4
 * 00000001C0054537: mov     [rsp+58h+var_38], rcx
 * 00000001C005453C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0054543: mov     rcx, [rcx+18h]
 * 00000001C0054547: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005454D: test    rdi, rdi
 * 00000001C0054550: jz      short loc_1C0054560
 * 00000001C0054552: inc     rbx
 * 00000001C0054555: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0054559: jnz     short loc_1C0054552
 * 00000001C005455B: inc     rbx
 * 00000001C005455E: jmp     short loc_1C0054565
 * 00000001C0054560: mov     ebx, 5
 * 00000001C0054565: test    rdi, rdi
 * 00000001C0054568: lea     rax, [rsp+58h+arg_28]
 * 00000001C0054570: lea     r9, WPP_bef5af58ea873151941a7328979aa9a8_Traceguids
 * 00000001C0054577: mov     rcx, rsi
 * 00000001C005457A: cmovz   rdi, r12
 * 00000001C005457E: and     [rsp+58h+var_10], 0
 * 00000001C0054584: mov     [rsp+58h+var_18], rbx
 * 00000001C0054589: xor     edx, edx
 * 00000001C005458B: mov     [rsp+58h+var_20], rdi
 * 00000001C0054590: mov     [rsp+58h+var_28], 4
 * 00000001C0054599: mov     [rsp+58h+var_30], rax
 * 00000001C005459E: lea     r8d, [rdx+1]
 * 00000001C00545A2: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C00545A8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00545AF: nop     dword ptr [rax+rax+00h]
 * 00000001C00545B4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00545B9: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00545BE: mov     rdi, [rsp+58h+arg_10]
 * 00000001C00545C3: mov     r12, [rsp+58h+arg_18]
 * 00000001C00545C8: add     rsp, 50h
 * 00000001C00545CC: pop     r13
 * 00000001C00545CE: retn
 */
