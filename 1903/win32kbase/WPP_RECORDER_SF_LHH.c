/*
 * XREFs of WPP_RECORDER_SF_LHH @ 0x1C0176ED8
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0162064 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LHH @ 0x1C0176ED8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0176ED8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0176ED8: mov     r11, rsp
 * 00000001C0176EDB: mov     [r11+8], rbx
 * 00000001C0176EDF: mov     [r11+10h], rbp
 * 00000001C0176EE3: push    rdi
 * 00000001C0176EE4: sub     rsp, 60h
 * 00000001C0176EE8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0176EEF: mov     edi, 2
 * 00000001C0176EF4: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0176EFB: mov     ebp, 14Ah
 * 00000001C0176F00: mov     eax, [rcx+2Ch]
 * 00000001C0176F03: test    al, 40h
 * 00000001C0176F05: jz      short loc_1C0176F59
 * 00000001C0176F07: cmp     [rcx+29h], dil
 * 00000001C0176F0B: jb      short loc_1C0176F59
 * 00000001C0176F0D: and     qword ptr [r11-18h], 0
 * 00000001C0176F12: lea     rdx, [r11+40h]
 * 00000001C0176F16: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0176F1D: lea     r8, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C0176F24: mov     rcx, [rcx+18h]
 * 00000001C0176F28: mov     [r11-20h], rdi
 * 00000001C0176F2C: mov     [r11-28h], rdx
 * 00000001C0176F30: lea     rdx, [r11+38h]
 * 00000001C0176F34: mov     [r11-30h], rdi
 * 00000001C0176F38: mov     [r11-38h], rdx
 * 00000001C0176F3C: lea     rdx, [r11+30h]
 * 00000001C0176F40: mov     qword ptr [r11-40h], 4
 * 00000001C0176F48: mov     [r11-48h], rdx
 * 00000001C0176F4C: lea     edx, [rdi+29h]
 * 00000001C0176F4F: movzx   r9d, bp
 * 00000001C0176F53: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0176F59: and     [rsp+68h+var_10], 0
 * 00000001C0176F5F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0176F67: mov     [rsp+68h+var_18], rdi
 * 00000001C0176F6C: lea     r9, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C0176F73: mov     [rsp+68h+var_20], rax
 * 00000001C0176F78: mov     r8d, 7
 * 00000001C0176F7E: mov     [rsp+68h+var_28], rdi
 * 00000001C0176F83: lea     rax, [rsp+68h+arg_30]
 * 00000001C0176F8B: mov     [rsp+68h+var_30], rax
 * 00000001C0176F90: mov     edx, edi
 * 00000001C0176F92: lea     rax, [rsp+68h+arg_28]
 * 00000001C0176F9A: mov     [rsp+68h+var_38], 4
 * 00000001C0176FA3: mov     [rsp+68h+var_40], rax
 * 00000001C0176FA8: mov     rcx, rbx
 * 00000001C0176FAB: mov     [rsp+68h+var_48], bp
 * 00000001C0176FB0: call    cs:__imp_WppAutoLogTrace
 * 00000001C0176FB7: nop     dword ptr [rax+rax+00h]
 * 00000001C0176FBC: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0176FC1: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0176FC6: add     rsp, 60h
 * 00000001C0176FCA: pop     rdi
 * 00000001C0176FCB: retn
 */
