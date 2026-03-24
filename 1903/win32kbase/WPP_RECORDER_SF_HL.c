/*
 * XREFs of WPP_RECORDER_SF_HL @ 0x1C0176D08
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C0168B3C (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0169144 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_HL @ 0x1C0176D08
 * Reason: Hex-Rays returned no pseudocode for 0x1C0176D08
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0176D08: mov     r11, rsp
 * 00000001C0176D0B: mov     [r11+8], rbx
 * 00000001C0176D0F: push    rdi
 * 00000001C0176D10: sub     rsp, 50h
 * 00000001C0176D14: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0176D1B: movzx   ebx, r9w
 * 00000001C0176D1F: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0176D26: mov     eax, [rcx+2Ch]
 * 00000001C0176D29: test    al, 40h
 * 00000001C0176D2B: jz      short loc_1C0176D79
 * 00000001C0176D2D: cmp     byte ptr [rcx+29h], 2
 * 00000001C0176D31: jb      short loc_1C0176D79
 * 00000001C0176D33: and     qword ptr [r11-18h], 0
 * 00000001C0176D38: lea     rdx, [r11+38h]
 * 00000001C0176D3C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0176D43: lea     r8, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C0176D4A: mov     rcx, [rcx+18h]
 * 00000001C0176D4E: mov     qword ptr [r11-20h], 4
 * 00000001C0176D56: mov     [r11-28h], rdx
 * 00000001C0176D5A: lea     rdx, [r11+30h]
 * 00000001C0176D5E: mov     qword ptr [r11-30h], 2
 * 00000001C0176D66: mov     [r11-38h], rdx
 * 00000001C0176D6A: mov     edx, 2Bh ; '+'
 * 00000001C0176D6F: movzx   r9d, bx
 * 00000001C0176D73: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0176D79: and     [rsp+58h+var_10], 0
 * 00000001C0176D7F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0176D87: mov     [rsp+58h+var_18], 4
 * 00000001C0176D90: lea     r9, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C0176D97: mov     [rsp+58h+var_20], rax
 * 00000001C0176D9C: mov     edx, 2
 * 00000001C0176DA1: lea     rax, [rsp+58h+arg_28]
 * 00000001C0176DA9: mov     [rsp+58h+var_28], 2
 * 00000001C0176DB2: mov     [rsp+58h+var_30], rax
 * 00000001C0176DB7: mov     rcx, rdi
 * 00000001C0176DBA: mov     [rsp+58h+var_38], bx
 * 00000001C0176DBF: lea     r8d, [rdx+5]
 * 00000001C0176DC3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0176DCA: nop     dword ptr [rax+rax+00h]
 * 00000001C0176DCF: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0176DD4: add     rsp, 50h
 * 00000001C0176DD8: pop     rdi
 * 00000001C0176DD9: retn
 */
