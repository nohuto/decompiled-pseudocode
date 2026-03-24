/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C009F070
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00243F0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C0054408 (rimHandlePnpWaitersOnOwnedDevices.c)
 *     UserDeleteBaseWindowHandle @ 0x1C011D2F0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqq @ 0x1C009F070
 * Reason: Hex-Rays returned no pseudocode for 0x1C009F070
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C009F070: mov     [rsp+arg_0], rbx
 * 00000001C009F075: mov     [rsp+arg_8], rbp
 * 00000001C009F07A: mov     [rsp+arg_10], rsi
 * 00000001C009F07F: push    rdi
 * 00000001C009F080: push    r14
 * 00000001C009F082: push    r15
 * 00000001C009F084: sub     rsp, 60h
 * 00000001C009F088: mov     r14d, r8d
 * 00000001C009F08B: mov     sil, dl
 * 00000001C009F08E: mov     edi, r8d
 * 00000001C009F091: movzx   ebp, r9w
 * 00000001C009F095: shr     rdi, 10h
 * 00000001C009F099: mov     r15, rcx
 * 00000001C009F09C: lea     ebx, [r14-1]
 * 00000001C009F0A0: mov     r10d, ebx
 * 00000001C009F0A3: and     ebx, 1Fh
 * 00000001C009F0A6: shr     r10, 5
 * 00000001C009F0AA: lea     rax, [rdi+rdi*4]
 * 00000001C009F0AE: and     r10d, 7FFh
 * 00000001C009F0B5: mov     edx, ebx
 * 00000001C009F0B7: mov     ebx, 8
 * 00000001C009F0BC: lea     r11, [r10+rax*4]
 * 00000001C009F0C0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C009F0C7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C009F0CC: bt      eax, edx
 * 00000001C009F0CF: jb      loc_1C00FAC96
 * 00000001C009F0D5: and     [rsp+78h+var_20], 0
 * 00000001C009F0DB: lea     rax, [rsp+78h+arg_38]
 * 00000001C009F0E3: mov     r9, [rsp+78h+arg_20]
 * 00000001C009F0EB: mov     r8d, r14d
 * 00000001C009F0EE: mov     [rsp+78h+var_28], rbx
 * 00000001C009F0F3: mov     rcx, r15
 * 00000001C009F0F6: mov     [rsp+78h+var_30], rax
 * 00000001C009F0FB: lea     rax, [rsp+78h+arg_30]
 * 00000001C009F103: mov     [rsp+78h+var_38], rbx
 * 00000001C009F108: mov     [rsp+78h+var_40], rax
 * 00000001C009F10D: lea     rax, [rsp+78h+arg_28]
 * 00000001C009F115: mov     [rsp+78h+var_48], rbx
 * 00000001C009F11A: mov     [rsp+78h+var_50], rax
 * 00000001C009F11F: movzx   edx, sil
 * 00000001C009F123: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C009F128: call    cs:__imp_WppAutoLogTrace
 * 00000001C009F12F: nop     dword ptr [rax+rax+00h]
 * 00000001C009F134: lea     r11, [rsp+78h+var_18]
 * 00000001C009F139: mov     rbx, [r11+20h]
 * 00000001C009F13D: mov     rbp, [r11+28h]
 * 00000001C009F141: mov     rsi, [r11+30h]
 * 00000001C009F145: mov     rsp, r11
 * 00000001C009F148: pop     r15
 * 00000001C009F14A: pop     r14
 * 00000001C009F14C: pop     rdi
 * 00000001C009F14D: retn
 * 00000001C00FAC96: lea     rcx, [rdi+rdi*4]
 * 00000001C00FAC9A: add     rcx, rcx
 * 00000001C00FAC9D: cmp     [r10+rcx*8+29h], sil
 * 00000001C00FACA2: jb      loc_1C009F0D5
 * 00000001C00FACA8: and     [rsp+78h+var_28], 0
 * 00000001C00FACAE: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00FACB6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00FACBD: mov     r8, [rsp+78h+arg_20]
 * 00000001C00FACC5: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00FACCA: mov     [rsp+78h+var_30], rbx
 * 00000001C00FACCF: mov     [rsp+78h+var_38], rdx
 * 00000001C00FACD4: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00FACDC: mov     [rsp+78h+var_40], rbx
 * 00000001C00FACE1: mov     [rsp+78h+var_48], rdx
 * 00000001C00FACE6: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00FACEE: mov     [rsp+78h+var_50], rbx
 * 00000001C00FACF3: mov     [rsp+78h+var_58], rdx
 * 00000001C00FACF8: mov     edx, 2Bh ; '+'
 * 00000001C00FACFD: movzx   r9d, bp
 * 00000001C00FAD01: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00FAD07: nop
 * 00000001C00FAD08: jmp     loc_1C009F0D5
 */
