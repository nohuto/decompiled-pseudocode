/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C009F820
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0023ED0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C0068AA8 (rimHandlePnpWaitersOnOwnedDevices.c)
 *     UserDeleteBaseWindowHandle @ 0x1C011FC60 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C009F820
 * Reason: Hex-Rays returned no pseudocode for 0x1C009F820
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C009F820: mov     [rsp+arg_0], rbx
 * 00000001C009F825: mov     [rsp+arg_8], rbp
 * 00000001C009F82A: mov     [rsp+arg_10], rsi
 * 00000001C009F82F: push    rdi
 * 00000001C009F830: push    r14
 * 00000001C009F832: push    r15
 * 00000001C009F834: sub     rsp, 60h
 * 00000001C009F838: mov     r14d, r8d
 * 00000001C009F83B: mov     sil, dl
 * 00000001C009F83E: mov     edi, r8d
 * 00000001C009F841: movzx   ebp, r9w
 * 00000001C009F845: shr     rdi, 10h
 * 00000001C009F849: mov     r15, rcx
 * 00000001C009F84C: lea     ebx, [r14-1]
 * 00000001C009F850: mov     r10d, ebx
 * 00000001C009F853: and     ebx, 1Fh
 * 00000001C009F856: shr     r10, 5
 * 00000001C009F85A: lea     rax, [rdi+rdi*4]
 * 00000001C009F85E: and     r10d, 7FFh
 * 00000001C009F865: mov     edx, ebx
 * 00000001C009F867: mov     ebx, 8
 * 00000001C009F86C: lea     r11, [r10+rax*4]
 * 00000001C009F870: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C009F877: mov     eax, [r10+r11*4+2Ch]
 * 00000001C009F87C: bt      eax, edx
 * 00000001C009F87F: jb      loc_1C00FBD2E
 * 00000001C009F885: and     [rsp+78h+var_20], 0
 * 00000001C009F88B: lea     rax, [rsp+78h+arg_38]
 * 00000001C009F893: mov     r9, [rsp+78h+arg_20]
 * 00000001C009F89B: mov     r8d, r14d
 * 00000001C009F89E: mov     [rsp+78h+var_28], rbx
 * 00000001C009F8A3: mov     rcx, r15
 * 00000001C009F8A6: mov     [rsp+78h+var_30], rax
 * 00000001C009F8AB: lea     rax, [rsp+78h+arg_30]
 * 00000001C009F8B3: mov     [rsp+78h+var_38], rbx
 * 00000001C009F8B8: mov     [rsp+78h+var_40], rax
 * 00000001C009F8BD: lea     rax, [rsp+78h+arg_28]
 * 00000001C009F8C5: mov     [rsp+78h+var_48], rbx
 * 00000001C009F8CA: mov     [rsp+78h+var_50], rax
 * 00000001C009F8CF: movzx   edx, sil
 * 00000001C009F8D3: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C009F8D8: call    cs:__imp_WppAutoLogTrace
 * 00000001C009F8DF: nop     dword ptr [rax+rax+00h]
 * 00000001C009F8E4: lea     r11, [rsp+78h+var_18]
 * 00000001C009F8E9: mov     rbx, [r11+20h]
 * 00000001C009F8ED: mov     rbp, [r11+28h]
 * 00000001C009F8F1: mov     rsi, [r11+30h]
 * 00000001C009F8F5: mov     rsp, r11
 * 00000001C009F8F8: pop     r15
 * 00000001C009F8FA: pop     r14
 * 00000001C009F8FC: pop     rdi
 * 00000001C009F8FD: retn
 * 00000001C00FBD2E: lea     rcx, [rdi+rdi*4]
 * 00000001C00FBD32: add     rcx, rcx
 * 00000001C00FBD35: cmp     [r10+rcx*8+29h], sil
 * 00000001C00FBD3A: jb      loc_1C009F885
 * 00000001C00FBD40: and     [rsp+78h+var_28], 0
 * 00000001C00FBD46: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00FBD4E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00FBD55: mov     r8, [rsp+78h+arg_20]
 * 00000001C00FBD5D: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00FBD62: mov     [rsp+78h+var_30], rbx
 * 00000001C00FBD67: mov     [rsp+78h+var_38], rdx
 * 00000001C00FBD6C: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00FBD74: mov     [rsp+78h+var_40], rbx
 * 00000001C00FBD79: mov     [rsp+78h+var_48], rdx
 * 00000001C00FBD7E: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00FBD86: mov     [rsp+78h+var_50], rbx
 * 00000001C00FBD8B: mov     [rsp+78h+var_58], rdx
 * 00000001C00FBD90: mov     edx, 2Bh ; '+'
 * 00000001C00FBD95: movzx   r9d, bp
 * 00000001C00FBD99: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00FBD9F: nop
 * 00000001C00FBDA0: jmp     loc_1C009F885
 */
