/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C0120514
 * Callers:
 *     UserFindBaseWindowHandleLocked @ 0x1C01203F0 (UserFindBaseWindowHandleLocked.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C0120514
 * Reason: Hex-Rays returned no pseudocode for 0x1C0120514
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0120514: mov     r11, rsp
 * 00000001C0120517: mov     [r11+8], rbx
 * 00000001C012051B: push    rbp
 * 00000001C012051C: sub     rsp, 50h
 * 00000001C0120520: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0120527: mov     ebp, 10h
 * 00000001C012052C: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0120533: test    dword ptr [rcx+2Ch], 400h
 * 00000001C012053A: jz      short loc_1C0120586
 * 00000001C012053C: cmp     byte ptr [rcx+29h], 5
 * 00000001C0120540: jb      short loc_1C0120586
 * 00000001C0120542: and     qword ptr [r11-18h], 0
 * 00000001C0120547: lea     rdx, [r11+38h]
 * 00000001C012054B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0120552: lea     r8, WPP_e1a61034c95d336a845754ebf9035259_Traceguids
 * 00000001C0120559: mov     rcx, [rcx+18h]
 * 00000001C012055D: mov     qword ptr [r11-20h], 4
 * 00000001C0120565: mov     [r11-28h], rdx
 * 00000001C0120569: lea     rdx, [r11+30h]
 * 00000001C012056D: mov     qword ptr [r11-30h], 8
 * 00000001C0120575: mov     [r11-38h], rdx
 * 00000001C0120579: lea     edx, [rbp+1Bh]
 * 00000001C012057C: movzx   r9d, bp
 * 00000001C0120580: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0120586: and     [rsp+58h+var_10], 0
 * 00000001C012058C: lea     rax, [rsp+58h+arg_30]
 * 00000001C0120594: mov     [rsp+58h+var_18], 4
 * 00000001C012059D: lea     r9, WPP_e1a61034c95d336a845754ebf9035259_Traceguids
 * 00000001C01205A4: mov     [rsp+58h+var_20], rax
 * 00000001C01205A9: mov     edx, 5
 * 00000001C01205AE: lea     rax, [rsp+58h+arg_28]
 * 00000001C01205B6: mov     [rsp+58h+var_28], 8
 * 00000001C01205BF: mov     [rsp+58h+var_30], rax
 * 00000001C01205C4: mov     rcx, rbx
 * 00000001C01205C7: mov     [rsp+58h+var_38], bp
 * 00000001C01205CC: lea     r8d, [rdx+6]
 * 00000001C01205D0: call    cs:__imp_WppAutoLogTrace
 * 00000001C01205D7: nop     dword ptr [rax+rax+00h]
 * 00000001C01205DC: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01205E1: add     rsp, 50h
 * 00000001C01205E5: pop     rbp
 * 00000001C01205E6: retn
 */
