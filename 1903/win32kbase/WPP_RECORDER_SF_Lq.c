/*
 * XREFs of WPP_RECORDER_SF_Lq @ 0x1C01771A8
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01717A8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0175710 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lq @ 0x1C01771A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C01771A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01771A8: mov     r11, rsp
 * 00000001C01771AB: mov     [r11+8], rbx
 * 00000001C01771AF: push    rdi
 * 00000001C01771B0: sub     rsp, 50h
 * 00000001C01771B4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01771BB: movzx   ebx, r9w
 * 00000001C01771BF: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01771C6: mov     eax, [rcx+2Ch]
 * 00000001C01771C9: test    al, 40h
 * 00000001C01771CB: jz      short loc_1C0177219
 * 00000001C01771CD: cmp     byte ptr [rcx+29h], 2
 * 00000001C01771D1: jb      short loc_1C0177219
 * 00000001C01771D3: and     qword ptr [r11-18h], 0
 * 00000001C01771D8: lea     rdx, [r11+38h]
 * 00000001C01771DC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01771E3: lea     r8, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C01771EA: mov     rcx, [rcx+18h]
 * 00000001C01771EE: mov     qword ptr [r11-20h], 8
 * 00000001C01771F6: mov     [r11-28h], rdx
 * 00000001C01771FA: lea     rdx, [r11+30h]
 * 00000001C01771FE: mov     qword ptr [r11-30h], 4
 * 00000001C0177206: mov     [r11-38h], rdx
 * 00000001C017720A: mov     edx, 2Bh ; '+'
 * 00000001C017720F: movzx   r9d, bx
 * 00000001C0177213: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0177219: and     [rsp+58h+var_10], 0
 * 00000001C017721F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0177227: mov     [rsp+58h+var_18], 8
 * 00000001C0177230: lea     r9, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C0177237: mov     [rsp+58h+var_20], rax
 * 00000001C017723C: mov     edx, 2
 * 00000001C0177241: lea     rax, [rsp+58h+arg_28]
 * 00000001C0177249: mov     [rsp+58h+var_28], 4
 * 00000001C0177252: mov     [rsp+58h+var_30], rax
 * 00000001C0177257: mov     rcx, rdi
 * 00000001C017725A: mov     [rsp+58h+var_38], bx
 * 00000001C017725F: lea     r8d, [rdx+5]
 * 00000001C0177263: call    cs:__imp_WppAutoLogTrace
 * 00000001C017726A: nop     dword ptr [rax+rax+00h]
 * 00000001C017726F: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0177274: add     rsp, 50h
 * 00000001C0177278: pop     rdi
 * 00000001C0177279: retn
 */
