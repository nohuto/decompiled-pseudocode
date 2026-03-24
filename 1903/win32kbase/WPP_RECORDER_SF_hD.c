/*
 * XREFs of WPP_RECORDER_SF_hD @ 0x1C007151C
 * Callers:
 *     xxxInternalToUnicode @ 0x1C00710D0 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0186CA0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hD @ 0x1C007151C
 * Reason: Hex-Rays returned no pseudocode for 0x1C007151C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C007151C: mov     [rsp+arg_0], rbx
 * 00000001C0071521: push    rdi
 * 00000001C0071522: sub     rsp, 50h
 * 00000001C0071526: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C007152D: movzx   ebx, r9w
 * 00000001C0071531: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0071538: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C007153F: jnz     loc_1C00EE680
 * 00000001C0071545: and     [rsp+58h+var_10], 0
 * 00000001C007154B: lea     rax, [rsp+58h+arg_30]
 * 00000001C0071553: mov     [rsp+58h+var_18], 4
 * 00000001C007155C: lea     r9, WPP_1521667368713990dadd5db48e8e739e_Traceguids
 * 00000001C0071563: mov     [rsp+58h+var_20], rax
 * 00000001C0071568: mov     edx, 4
 * 00000001C007156D: lea     rax, [rsp+58h+arg_28]
 * 00000001C0071575: mov     [rsp+58h+var_28], 2
 * 00000001C007157E: mov     [rsp+58h+var_30], rax
 * 00000001C0071583: mov     rcx, rdi
 * 00000001C0071586: mov     word ptr [rsp+58h+var_38], bx
 * 00000001C007158B: lea     r8d, [rdx+0Ch]
 * 00000001C007158F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0071596: nop     dword ptr [rax+rax+00h]
 * 00000001C007159B: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00715A0: add     rsp, 50h
 * 00000001C00715A4: pop     rdi
 * 00000001C00715A5: retn
 * 00000001C00EE680: cmp     byte ptr [rcx+29h], 4
 * 00000001C00EE684: jb      loc_1C0071545
 * 00000001C00EE68A: and     [rsp+58h+var_18], 0
 * 00000001C00EE690: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00EE698: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EE69F: lea     r8, WPP_1521667368713990dadd5db48e8e739e_Traceguids
 * 00000001C00EE6A6: mov     rcx, [rcx+18h]
 * 00000001C00EE6AA: mov     [rsp+58h+var_20], 4
 * 00000001C00EE6B3: mov     [rsp+58h+var_28], rdx
 * 00000001C00EE6B8: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00EE6C0: mov     [rsp+58h+var_30], 2
 * 00000001C00EE6C9: mov     [rsp+58h+var_38], rdx
 * 00000001C00EE6CE: mov     edx, 2Bh ; '+'
 * 00000001C00EE6D3: movzx   r9d, bx
 * 00000001C00EE6D7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EE6DD: nop
 * 00000001C00EE6DE: jmp     loc_1C0071545
 */
