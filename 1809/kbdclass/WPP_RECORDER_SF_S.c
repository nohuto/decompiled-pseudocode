/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0002610
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000CA20 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000CD40 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C000F530 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002D00 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0002610
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002610
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002610: mov     [rsp+arg_0], rbx
 * 00000001C0002615: mov     [rsp+arg_8], rbp
 * 00000001C000261A: mov     [rsp+arg_10], rsi
 * 00000001C000261F: mov     [rsp+arg_18], rdi
 * 00000001C0002624: push    r12
 * 00000001C0002626: push    r14
 * 00000001C0002628: push    r15
 * 00000001C000262A: sub     rsp, 40h
 * 00000001C000262E: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C0002635: lea     r12, aNull; "NULL"
 * 00000001C000263C: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0002644: mov     rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C000264B: movzx   r14d, r9w
 * 00000001C000264F: movzx   ebp, dl
 * 00000001C0002652: mov     r15, rcx
 * 00000001C0002655: mov     eax, [r8+2Ch]
 * 00000001C0002659: lea     esi, [rbx+0Bh]
 * 00000001C000265C: test    al, 1
 * 00000001C000265E: jnz     loc_1C000384E
 * 00000001C0002664: test    rdi, rdi
 * 00000001C0002667: jz      short loc_1C00026DC
 * 00000001C0002669: nop     dword ptr [rax+00000000h]
 * 00000001C0002670: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0002676: lea     rbx, [rbx+1]
 * 00000001C000267A: jnz     short loc_1C0002670
 * 00000001C000267C: lea     rsi, ds:2[rbx*2]
 * 00000001C0002684: mov     [rsp+58h+var_20], 0
 * 00000001C000268D: lea     r9, WPP_1975c0ad83fe39ae2d5358536952ac4e_Traceguids
 * 00000001C0002694: mov     [rsp+58h+var_28], rsi
 * 00000001C0002699: mov     r8d, 1
 * 00000001C000269F: mov     [rsp+58h+var_30], rdi
 * 00000001C00026A4: mov     rcx, r15
 * 00000001C00026A7: movzx   edx, bpl
 * 00000001C00026AB: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C00026B1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00026B8: nop     dword ptr [rax+rax+00h]
 * 00000001C00026BD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00026C2: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00026C7: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00026CC: mov     rdi, [rsp+58h+arg_18]
 * 00000001C00026D1: add     rsp, 40h
 * 00000001C00026D5: pop     r15
 * 00000001C00026D7: pop     r14
 * 00000001C00026D9: pop     r12
 * 00000001C00026DB: retn
 * 00000001C00026DC: mov     rdi, r12
 * 00000001C00026DF: jmp     short loc_1C0002684
 * 00000001C000384E: cmp     [r8+29h], bpl
 * 00000001C0003852: jb      loc_1C0002664
 * 00000001C0003858: test    rdi, rdi
 * 00000001C000385B: jz      short loc_1C0003876
 * 00000001C000385D: mov     rax, rbx
 * 00000001C0003860: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C0003866: lea     rax, [rax+1]
 * 00000001C000386A: jnz     short loc_1C0003860
 * 00000001C000386C: lea     rdx, ds:2[rax*2]
 * 00000001C0003874: jmp     short loc_1C0003879
 * 00000001C0003876: mov     rdx, rsi
 * 00000001C0003879: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0003880: lea     r8, WPP_1975c0ad83fe39ae2d5358536952ac4e_Traceguids
 * 00000001C0003887: test    rdi, rdi
 * 00000001C000388A: mov     [rsp+58h+var_28], 0
 * 00000001C0003893: mov     [rsp+58h+var_30], rdx
 * 00000001C0003898: mov     rcx, rdi
 * 00000001C000389B: cmovz   rcx, r12
 * 00000001C000389F: movzx   r9d, r14w
 * 00000001C00038A3: mov     [rsp+58h+var_38], rcx
 * 00000001C00038A8: mov     edx, 2Bh ; '+'
 * 00000001C00038AD: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00038B4: mov     rcx, [rcx+18h]
 * 00000001C00038B8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00038BE: nop
 * 00000001C00038BF: jmp     loc_1C0002664
 */
