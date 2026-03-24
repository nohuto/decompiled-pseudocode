/*
 * XREFs of WPP_RECORDER_SF_Lq @ 0x1C0174FB8
 * Callers:
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C016F5B8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0173520 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lq @ 0x1C0174FB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0174FB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0174FB8: mov     r11, rsp
 * 00000001C0174FBB: mov     [r11+8], rbx
 * 00000001C0174FBF: push    rdi
 * 00000001C0174FC0: sub     rsp, 50h
 * 00000001C0174FC4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0174FCB: movzx   ebx, r9w
 * 00000001C0174FCF: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0174FD6: mov     eax, [rcx+2Ch]
 * 00000001C0174FD9: test    al, 40h
 * 00000001C0174FDB: jz      short loc_1C0175029
 * 00000001C0174FDD: cmp     byte ptr [rcx+29h], 2
 * 00000001C0174FE1: jb      short loc_1C0175029
 * 00000001C0174FE3: and     qword ptr [r11-18h], 0
 * 00000001C0174FE8: lea     rdx, [r11+38h]
 * 00000001C0174FEC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174FF3: lea     r8, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174FFA: mov     rcx, [rcx+18h]
 * 00000001C0174FFE: mov     qword ptr [r11-20h], 8
 * 00000001C0175006: mov     [r11-28h], rdx
 * 00000001C017500A: lea     rdx, [r11+30h]
 * 00000001C017500E: mov     qword ptr [r11-30h], 4
 * 00000001C0175016: mov     [r11-38h], rdx
 * 00000001C017501A: mov     edx, 2Bh ; '+'
 * 00000001C017501F: movzx   r9d, bx
 * 00000001C0175023: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0175029: and     [rsp+58h+var_10], 0
 * 00000001C017502F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0175037: mov     [rsp+58h+var_18], 8
 * 00000001C0175040: lea     r9, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0175047: mov     [rsp+58h+var_20], rax
 * 00000001C017504C: mov     edx, 2
 * 00000001C0175051: lea     rax, [rsp+58h+arg_28]
 * 00000001C0175059: mov     [rsp+58h+var_28], 4
 * 00000001C0175062: mov     [rsp+58h+var_30], rax
 * 00000001C0175067: mov     rcx, rdi
 * 00000001C017506A: mov     [rsp+58h+var_38], bx
 * 00000001C017506F: lea     r8d, [rdx+5]
 * 00000001C0175073: call    cs:__imp_WppAutoLogTrace
 * 00000001C017507A: nop     dword ptr [rax+rax+00h]
 * 00000001C017507F: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0175084: add     rsp, 50h
 * 00000001C0175088: pop     rdi
 * 00000001C0175089: retn
 */
