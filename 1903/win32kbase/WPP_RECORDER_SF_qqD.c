/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C0067E40
 * Callers:
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C0069434 (rimOnPnpRemoveComplete.c)
 *     rimInputApc @ 0x1C006E9D0 (rimInputApc.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006F2B0 (RIMStartDeviceSpecificRead.c)
 *     rimFakePnpRemoveComplete @ 0x1C00A871C (rimFakePnpRemoveComplete.c)
 *     NtUserInjectDeviceInput @ 0x1C0119AF0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0119F50 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectPointerInput @ 0x1C011AF50 (NtUserInjectPointerInput.c)
 *     rimOnPnpQueryRemove @ 0x1C0152114 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C0152234 (rimOnPnpRemoveCancelled.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C015CE68 (RIMApplyPTPConfigRemedy.c)
 *     ?ivRegisterChildNotification@CBaseInput@@IEAAJK@Z @ 0x1C018ED4C (-ivRegisterChildNotification@CBaseInput@@IEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C0067E40
 * Reason: Hex-Rays returned no pseudocode for 0x1C0067E40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0067E40: mov     [rsp+arg_0], rbx
 * 00000001C0067E45: mov     [rsp+arg_8], rbp
 * 00000001C0067E4A: mov     [rsp+arg_10], rsi
 * 00000001C0067E4F: push    rdi
 * 00000001C0067E50: push    r14
 * 00000001C0067E52: push    r15
 * 00000001C0067E54: sub     rsp, 60h
 * 00000001C0067E58: mov     r14d, r8d
 * 00000001C0067E5B: mov     sil, dl
 * 00000001C0067E5E: mov     edi, r8d
 * 00000001C0067E61: movzx   ebp, r9w
 * 00000001C0067E65: shr     rdi, 10h
 * 00000001C0067E69: mov     r15, rcx
 * 00000001C0067E6C: lea     ebx, [r14-1]
 * 00000001C0067E70: mov     r10d, ebx
 * 00000001C0067E73: and     ebx, 1Fh
 * 00000001C0067E76: shr     r10, 5
 * 00000001C0067E7A: lea     rax, [rdi+rdi*4]
 * 00000001C0067E7E: and     r10d, 7FFh
 * 00000001C0067E85: mov     edx, ebx
 * 00000001C0067E87: mov     ebx, 8
 * 00000001C0067E8C: lea     r11, [r10+rax*4]
 * 00000001C0067E90: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0067E97: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0067E9C: bt      eax, edx
 * 00000001C0067E9F: jb      loc_1C00E9062
 * 00000001C0067EA5: and     [rsp+78h+var_20], 0
 * 00000001C0067EAB: lea     rax, [rsp+78h+arg_38]
 * 00000001C0067EB3: mov     r9, [rsp+78h+arg_20]
 * 00000001C0067EBB: mov     r8d, r14d
 * 00000001C0067EBE: mov     [rsp+78h+var_28], 4
 * 00000001C0067EC7: mov     rcx, r15
 * 00000001C0067ECA: mov     [rsp+78h+var_30], rax
 * 00000001C0067ECF: lea     rax, [rsp+78h+arg_30]
 * 00000001C0067ED7: mov     [rsp+78h+var_38], rbx
 * 00000001C0067EDC: mov     [rsp+78h+var_40], rax
 * 00000001C0067EE1: lea     rax, [rsp+78h+arg_28]
 * 00000001C0067EE9: mov     [rsp+78h+var_48], rbx
 * 00000001C0067EEE: mov     [rsp+78h+var_50], rax
 * 00000001C0067EF3: movzx   edx, sil
 * 00000001C0067EF7: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0067EFC: call    cs:__imp_WppAutoLogTrace
 * 00000001C0067F03: nop     dword ptr [rax+rax+00h]
 * 00000001C0067F08: lea     r11, [rsp+78h+var_18]
 * 00000001C0067F0D: mov     rbx, [r11+20h]
 * 00000001C0067F11: mov     rbp, [r11+28h]
 * 00000001C0067F15: mov     rsi, [r11+30h]
 * 00000001C0067F19: mov     rsp, r11
 * 00000001C0067F1C: pop     r15
 * 00000001C0067F1E: pop     r14
 * 00000001C0067F20: pop     rdi
 * 00000001C0067F21: retn
 * 00000001C00E9062: lea     rcx, [rdi+rdi*4]
 * 00000001C00E9066: add     rcx, rcx
 * 00000001C00E9069: cmp     [r10+rcx*8+29h], sil
 * 00000001C00E906E: jb      loc_1C0067EA5
 * 00000001C00E9074: and     [rsp+78h+var_28], 0
 * 00000001C00E907A: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00E9082: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00E9089: mov     r8, [rsp+78h+arg_20]
 * 00000001C00E9091: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00E9096: mov     [rsp+78h+var_30], 4
 * 00000001C00E909F: mov     [rsp+78h+var_38], rdx
 * 00000001C00E90A4: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00E90AC: mov     [rsp+78h+var_40], rbx
 * 00000001C00E90B1: mov     [rsp+78h+var_48], rdx
 * 00000001C00E90B6: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00E90BE: mov     [rsp+78h+var_50], rbx
 * 00000001C00E90C3: mov     [rsp+78h+var_58], rdx
 * 00000001C00E90C8: mov     edx, 2Bh ; '+'
 * 00000001C00E90CD: movzx   r9d, bp
 * 00000001C00E90D1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00E90D7: nop
 * 00000001C00E90D8: jmp     loc_1C0067EA5
 */
