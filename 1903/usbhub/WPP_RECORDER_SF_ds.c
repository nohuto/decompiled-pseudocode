/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C0056688
 * Callers:
 *     UsbhExceptionTrace @ 0x1C0055D60 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C0056688
 * Reason: Hex-Rays returned no pseudocode for 0x1C0056688
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0056688: mov     rax, rsp
 * 00000001C005668B: mov     [rax+8], rbx
 * 00000001C005668F: mov     [rax+10h], rsi
 * 00000001C0056693: mov     [rax+18h], rdi
 * 00000001C0056697: mov     [rax+20h], r12
 * 00000001C005669B: push    r13
 * 00000001C005669D: sub     rsp, 50h
 * 00000001C00566A1: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C00566A8: lea     r12, aNull; "NULL"
 * 00000001C00566AF: mov     rdi, [rsp+58h+arg_30]
 * 00000001C00566B7: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00566BB: mov     rsi, rcx
 * 00000001C00566BE: mov     edx, [rax+2Ch]
 * 00000001C00566C1: lea     r13d, [rbx+0Dh]
 * 00000001C00566C5: test    dl, 1
 * 00000001C00566C8: jz      short loc_1C005673D
 * 00000001C00566CA: test    rdi, rdi
 * 00000001C00566CD: jz      short loc_1C00566E0
 * 00000001C00566CF: mov     rdx, rbx
 * 00000001C00566D2: inc     rdx
 * 00000001C00566D5: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00566D9: jnz     short loc_1C00566D2
 * 00000001C00566DB: inc     rdx
 * 00000001C00566DE: jmp     short loc_1C00566E5
 * 00000001C00566E0: mov     edx, 5
 * 00000001C00566E5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00566EC: lea     r8, WPP_bef5af58ea873151941a7328979aa9a8_Traceguids
 * 00000001C00566F3: test    rdi, rdi
 * 00000001C00566F6: movzx   r9d, r13w
 * 00000001C00566FA: mov     rcx, rdi
 * 00000001C00566FD: cmovz   rcx, r12
 * 00000001C0056701: and     [rsp+58h+var_18], 0
 * 00000001C0056707: mov     [rsp+58h+var_20], rdx
 * 00000001C005670C: mov     edx, 2Bh ; '+'
 * 00000001C0056711: mov     [rsp+58h+var_28], rcx
 * 00000001C0056716: lea     rcx, [rsp+58h+arg_28]
 * 00000001C005671E: mov     [rsp+58h+var_30], 4
 * 00000001C0056727: mov     [rsp+58h+var_38], rcx
 * 00000001C005672C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0056733: mov     rcx, [rcx+18h]
 * 00000001C0056737: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005673D: test    rdi, rdi
 * 00000001C0056740: jz      short loc_1C0056750
 * 00000001C0056742: inc     rbx
 * 00000001C0056745: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0056749: jnz     short loc_1C0056742
 * 00000001C005674B: inc     rbx
 * 00000001C005674E: jmp     short loc_1C0056755
 * 00000001C0056750: mov     ebx, 5
 * 00000001C0056755: test    rdi, rdi
 * 00000001C0056758: lea     rax, [rsp+58h+arg_28]
 * 00000001C0056760: lea     r9, WPP_bef5af58ea873151941a7328979aa9a8_Traceguids
 * 00000001C0056767: mov     rcx, rsi
 * 00000001C005676A: cmovz   rdi, r12
 * 00000001C005676E: and     [rsp+58h+var_10], 0
 * 00000001C0056774: mov     [rsp+58h+var_18], rbx
 * 00000001C0056779: xor     edx, edx
 * 00000001C005677B: mov     [rsp+58h+var_20], rdi
 * 00000001C0056780: mov     [rsp+58h+var_28], 4
 * 00000001C0056789: mov     [rsp+58h+var_30], rax
 * 00000001C005678E: lea     r8d, [rdx+1]
 * 00000001C0056792: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0056798: call    cs:__imp_WppAutoLogTrace
 * 00000001C005679F: nop     dword ptr [rax+rax+00h]
 * 00000001C00567A4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00567A9: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00567AE: mov     rdi, [rsp+58h+arg_10]
 * 00000001C00567B3: mov     r12, [rsp+58h+arg_18]
 * 00000001C00567B8: add     rsp, 50h
 * 00000001C00567BC: pop     r13
 * 00000001C00567BE: retn
 */
