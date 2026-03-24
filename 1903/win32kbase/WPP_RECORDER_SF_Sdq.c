/*
 * XREFs of WPP_RECORDER_SF_Sdq @ 0x1C0151AD4
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0150F54 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Sdq @ 0x1C0151AD4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0151AD4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0151AD4: mov     [rsp+arg_0], rbx
 * 00000001C0151AD9: mov     [rsp+arg_8], rbp
 * 00000001C0151ADE: mov     [rsp+arg_10], rsi
 * 00000001C0151AE3: push    rdi
 * 00000001C0151AE4: push    r14
 * 00000001C0151AE6: push    r15
 * 00000001C0151AE8: sub     rsp, 60h
 * 00000001C0151AEC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0151AF3: lea     r8, Context
 * 00000001C0151AFA: mov     r14, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0151B01: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0151B05: mov     rbx, [rsp+78h+arg_28]
 * 00000001C0151B0D: xor     r15d, r15d
 * 00000001C0151B10: movzx   ebp, r9w
 * 00000001C0151B14: mov     eax, [rcx+2Ch]
 * 00000001C0151B17: lea     esi, [rdi+0Bh]
 * 00000001C0151B1A: test    al, 1
 * 00000001C0151B1C: jz      loc_1C0151BBF
 * 00000001C0151B22: cmp     byte ptr [rcx+29h], 4
 * 00000001C0151B26: jb      loc_1C0151BBF
 * 00000001C0151B2C: test    rbx, rbx
 * 00000001C0151B2F: jz      short loc_1C0151B48
 * 00000001C0151B31: mov     rax, rdi
 * 00000001C0151B34: inc     rax
 * 00000001C0151B37: cmp     [rbx+rax*2], r15w
 * 00000001C0151B3C: jnz     short loc_1C0151B34
 * 00000001C0151B3E: lea     rdx, ds:2[rax*2]
 * 00000001C0151B46: jmp     short loc_1C0151B4B
 * 00000001C0151B48: mov     rdx, rsi
 * 00000001C0151B4B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0151B52: test    rbx, rbx
 * 00000001C0151B55: mov     [rsp+78h+var_28], r15
 * 00000001C0151B5A: mov     rcx, rbx
 * 00000001C0151B5D: cmovz   rcx, r8
 * 00000001C0151B61: mov     [rsp+78h+var_30], 8
 * 00000001C0151B6A: lea     r8, [rsp+78h+arg_38]
 * 00000001C0151B72: movzx   r9d, bp
 * 00000001C0151B76: mov     [rsp+78h+var_38], r8
 * 00000001C0151B7B: lea     r8, [rsp+78h+arg_30]
 * 00000001C0151B83: mov     [rsp+78h+var_40], 4
 * 00000001C0151B8C: mov     [rsp+78h+var_48], r8
 * 00000001C0151B91: lea     r8, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C0151B98: mov     [rsp+78h+var_50], rdx
 * 00000001C0151B9D: mov     edx, 2Bh ; '+'
 * 00000001C0151BA2: mov     [rsp+78h+var_58], rcx
 * 00000001C0151BA7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0151BAE: mov     rcx, [rcx+18h]
 * 00000001C0151BB2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0151BB8: lea     r8, Context
 * 00000001C0151BBF: test    rbx, rbx
 * 00000001C0151BC2: jz      short loc_1C0151BD9
 * 00000001C0151BC4: inc     rdi
 * 00000001C0151BC7: cmp     [rbx+rdi*2], r15w
 * 00000001C0151BCC: jnz     short loc_1C0151BC4
 * 00000001C0151BCE: lea     rsi, ds:2[rdi*2]
 * 00000001C0151BD6: test    rbx, rbx
 * 00000001C0151BD9: mov     [rsp+78h+var_20], r15
 * 00000001C0151BDE: lea     rax, [rsp+78h+arg_38]
 * 00000001C0151BE6: mov     [rsp+78h+var_28], 8
 * 00000001C0151BEF: lea     r9, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C0151BF6: mov     [rsp+78h+var_30], rax
 * 00000001C0151BFB: cmovz   rbx, r8
 * 00000001C0151BFF: mov     [rsp+78h+var_38], 4
 * 00000001C0151C08: lea     rax, [rsp+78h+arg_30]
 * 00000001C0151C10: mov     [rsp+78h+var_40], rax
 * 00000001C0151C15: mov     edx, 4
 * 00000001C0151C1A: mov     [rsp+78h+var_48], rsi
 * 00000001C0151C1F: mov     rcx, r14
 * 00000001C0151C22: mov     [rsp+78h+var_50], rbx
 * 00000001C0151C27: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0151C2C: lea     r8d, [rdx-3]
 * 00000001C0151C30: call    cs:__imp_WppAutoLogTrace
 * 00000001C0151C37: nop     dword ptr [rax+rax+00h]
 * 00000001C0151C3C: lea     r11, [rsp+78h+var_18]
 * 00000001C0151C41: mov     rbx, [r11+20h]
 * 00000001C0151C45: mov     rbp, [r11+28h]
 * 00000001C0151C49: mov     rsi, [r11+30h]
 * 00000001C0151C4D: mov     rsp, r11
 * 00000001C0151C50: pop     r15
 * 00000001C0151C52: pop     r14
 * 00000001C0151C54: pop     rdi
 * 00000001C0151C55: retn
 */
