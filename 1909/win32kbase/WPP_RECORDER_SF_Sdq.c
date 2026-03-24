/*
 * XREFs of WPP_RECORDER_SF_Sdq @ 0x1C014F464
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Sdq @ 0x1C014F464
 * Reason: Hex-Rays returned no pseudocode for 0x1C014F464
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014F464: mov     [rsp+arg_0], rbx
 * 00000001C014F469: mov     [rsp+arg_8], rbp
 * 00000001C014F46E: mov     [rsp+arg_10], rsi
 * 00000001C014F473: push    rdi
 * 00000001C014F474: push    r14
 * 00000001C014F476: push    r15
 * 00000001C014F478: sub     rsp, 60h
 * 00000001C014F47C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014F483: lea     r8, Context
 * 00000001C014F48A: mov     r14, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C014F491: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C014F495: mov     rbx, [rsp+78h+arg_28]
 * 00000001C014F49D: xor     r15d, r15d
 * 00000001C014F4A0: movzx   ebp, r9w
 * 00000001C014F4A4: mov     eax, [rcx+2Ch]
 * 00000001C014F4A7: lea     esi, [rdi+0Bh]
 * 00000001C014F4AA: test    al, 1
 * 00000001C014F4AC: jz      loc_1C014F54F
 * 00000001C014F4B2: cmp     byte ptr [rcx+29h], 4
 * 00000001C014F4B6: jb      loc_1C014F54F
 * 00000001C014F4BC: test    rbx, rbx
 * 00000001C014F4BF: jz      short loc_1C014F4D8
 * 00000001C014F4C1: mov     rax, rdi
 * 00000001C014F4C4: inc     rax
 * 00000001C014F4C7: cmp     [rbx+rax*2], r15w
 * 00000001C014F4CC: jnz     short loc_1C014F4C4
 * 00000001C014F4CE: lea     rdx, ds:2[rax*2]
 * 00000001C014F4D6: jmp     short loc_1C014F4DB
 * 00000001C014F4D8: mov     rdx, rsi
 * 00000001C014F4DB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C014F4E2: test    rbx, rbx
 * 00000001C014F4E5: mov     [rsp+78h+var_28], r15
 * 00000001C014F4EA: mov     rcx, rbx
 * 00000001C014F4ED: cmovz   rcx, r8
 * 00000001C014F4F1: mov     [rsp+78h+var_30], 8
 * 00000001C014F4FA: lea     r8, [rsp+78h+arg_38]
 * 00000001C014F502: movzx   r9d, bp
 * 00000001C014F506: mov     [rsp+78h+var_38], r8
 * 00000001C014F50B: lea     r8, [rsp+78h+arg_30]
 * 00000001C014F513: mov     [rsp+78h+var_40], 4
 * 00000001C014F51C: mov     [rsp+78h+var_48], r8
 * 00000001C014F521: lea     r8, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C014F528: mov     [rsp+78h+var_50], rdx
 * 00000001C014F52D: mov     edx, 2Bh ; '+'
 * 00000001C014F532: mov     [rsp+78h+var_58], rcx
 * 00000001C014F537: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014F53E: mov     rcx, [rcx+18h]
 * 00000001C014F542: call    cs:__guard_dispatch_icall_fptr
 * 00000001C014F548: lea     r8, Context
 * 00000001C014F54F: test    rbx, rbx
 * 00000001C014F552: jz      short loc_1C014F569
 * 00000001C014F554: inc     rdi
 * 00000001C014F557: cmp     [rbx+rdi*2], r15w
 * 00000001C014F55C: jnz     short loc_1C014F554
 * 00000001C014F55E: lea     rsi, ds:2[rdi*2]
 * 00000001C014F566: test    rbx, rbx
 * 00000001C014F569: mov     [rsp+78h+var_20], r15
 * 00000001C014F56E: lea     rax, [rsp+78h+arg_38]
 * 00000001C014F576: mov     [rsp+78h+var_28], 8
 * 00000001C014F57F: lea     r9, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C014F586: mov     [rsp+78h+var_30], rax
 * 00000001C014F58B: cmovz   rbx, r8
 * 00000001C014F58F: mov     [rsp+78h+var_38], 4
 * 00000001C014F598: lea     rax, [rsp+78h+arg_30]
 * 00000001C014F5A0: mov     [rsp+78h+var_40], rax
 * 00000001C014F5A5: mov     edx, 4
 * 00000001C014F5AA: mov     [rsp+78h+var_48], rsi
 * 00000001C014F5AF: mov     rcx, r14
 * 00000001C014F5B2: mov     [rsp+78h+var_50], rbx
 * 00000001C014F5B7: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C014F5BC: lea     r8d, [rdx-3]
 * 00000001C014F5C0: call    cs:__imp_WppAutoLogTrace
 * 00000001C014F5C7: nop     dword ptr [rax+rax+00h]
 * 00000001C014F5CC: lea     r11, [rsp+78h+var_18]
 * 00000001C014F5D1: mov     rbx, [r11+20h]
 * 00000001C014F5D5: mov     rbp, [r11+28h]
 * 00000001C014F5D9: mov     rsi, [r11+30h]
 * 00000001C014F5DD: mov     rsp, r11
 * 00000001C014F5E0: pop     r15
 * 00000001C014F5E2: pop     r14
 * 00000001C014F5E4: pop     rdi
 * 00000001C014F5E5: retn
 */
