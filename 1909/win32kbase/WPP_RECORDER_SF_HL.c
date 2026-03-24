/*
 * XREFs of WPP_RECORDER_SF_HL @ 0x1C0174B18
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1C016693C (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1C0166F44 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016C9CC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_HL @ 0x1C0174B18
 * Reason: Hex-Rays returned no pseudocode for 0x1C0174B18
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0174B18: mov     r11, rsp
 * 00000001C0174B1B: mov     [r11+8], rbx
 * 00000001C0174B1F: push    rdi
 * 00000001C0174B20: sub     rsp, 50h
 * 00000001C0174B24: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0174B2B: movzx   ebx, r9w
 * 00000001C0174B2F: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0174B36: mov     eax, [rcx+2Ch]
 * 00000001C0174B39: test    al, 40h
 * 00000001C0174B3B: jz      short loc_1C0174B89
 * 00000001C0174B3D: cmp     byte ptr [rcx+29h], 2
 * 00000001C0174B41: jb      short loc_1C0174B89
 * 00000001C0174B43: and     qword ptr [r11-18h], 0
 * 00000001C0174B48: lea     rdx, [r11+38h]
 * 00000001C0174B4C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174B53: lea     r8, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174B5A: mov     rcx, [rcx+18h]
 * 00000001C0174B5E: mov     qword ptr [r11-20h], 4
 * 00000001C0174B66: mov     [r11-28h], rdx
 * 00000001C0174B6A: lea     rdx, [r11+30h]
 * 00000001C0174B6E: mov     qword ptr [r11-30h], 2
 * 00000001C0174B76: mov     [r11-38h], rdx
 * 00000001C0174B7A: mov     edx, 2Bh ; '+'
 * 00000001C0174B7F: movzx   r9d, bx
 * 00000001C0174B83: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0174B89: and     [rsp+58h+var_10], 0
 * 00000001C0174B8F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0174B97: mov     [rsp+58h+var_18], 4
 * 00000001C0174BA0: lea     r9, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174BA7: mov     [rsp+58h+var_20], rax
 * 00000001C0174BAC: mov     edx, 2
 * 00000001C0174BB1: lea     rax, [rsp+58h+arg_28]
 * 00000001C0174BB9: mov     [rsp+58h+var_28], 2
 * 00000001C0174BC2: mov     [rsp+58h+var_30], rax
 * 00000001C0174BC7: mov     rcx, rdi
 * 00000001C0174BCA: mov     [rsp+58h+var_38], bx
 * 00000001C0174BCF: lea     r8d, [rdx+5]
 * 00000001C0174BD3: call    cs:__imp_WppAutoLogTrace
 * 00000001C0174BDA: nop     dword ptr [rax+rax+00h]
 * 00000001C0174BDF: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0174BE4: add     rsp, 50h
 * 00000001C0174BE8: pop     rdi
 * 00000001C0174BE9: retn
 */
