/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C011DBA4
 * Callers:
 *     UserFindBaseWindowHandleLocked @ 0x1C011DA80 (UserFindBaseWindowHandleLocked.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C011DBA4
 * Reason: Hex-Rays returned no pseudocode for 0x1C011DBA4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C011DBA4: mov     r11, rsp
 * 00000001C011DBA7: mov     [r11+8], rbx
 * 00000001C011DBAB: push    rbp
 * 00000001C011DBAC: sub     rsp, 50h
 * 00000001C011DBB0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C011DBB7: mov     ebp, 10h
 * 00000001C011DBBC: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C011DBC3: test    dword ptr [rcx+2Ch], 400h
 * 00000001C011DBCA: jz      short loc_1C011DC16
 * 00000001C011DBCC: cmp     byte ptr [rcx+29h], 5
 * 00000001C011DBD0: jb      short loc_1C011DC16
 * 00000001C011DBD2: and     qword ptr [r11-18h], 0
 * 00000001C011DBD7: lea     rdx, [r11+38h]
 * 00000001C011DBDB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C011DBE2: lea     r8, WPP_e1a61034c95d336a845754ebf9035259_Traceguids
 * 00000001C011DBE9: mov     rcx, [rcx+18h]
 * 00000001C011DBED: mov     qword ptr [r11-20h], 4
 * 00000001C011DBF5: mov     [r11-28h], rdx
 * 00000001C011DBF9: lea     rdx, [r11+30h]
 * 00000001C011DBFD: mov     qword ptr [r11-30h], 8
 * 00000001C011DC05: mov     [r11-38h], rdx
 * 00000001C011DC09: lea     edx, [rbp+1Bh]
 * 00000001C011DC0C: movzx   r9d, bp
 * 00000001C011DC10: call    cs:__guard_dispatch_icall_fptr
 * 00000001C011DC16: and     [rsp+58h+var_10], 0
 * 00000001C011DC1C: lea     rax, [rsp+58h+arg_30]
 * 00000001C011DC24: mov     [rsp+58h+var_18], 4
 * 00000001C011DC2D: lea     r9, WPP_e1a61034c95d336a845754ebf9035259_Traceguids
 * 00000001C011DC34: mov     [rsp+58h+var_20], rax
 * 00000001C011DC39: mov     edx, 5
 * 00000001C011DC3E: lea     rax, [rsp+58h+arg_28]
 * 00000001C011DC46: mov     [rsp+58h+var_28], 8
 * 00000001C011DC4F: mov     [rsp+58h+var_30], rax
 * 00000001C011DC54: mov     rcx, rbx
 * 00000001C011DC57: mov     [rsp+58h+var_38], bp
 * 00000001C011DC5C: lea     r8d, [rdx+6]
 * 00000001C011DC60: call    cs:__imp_WppAutoLogTrace
 * 00000001C011DC67: nop     dword ptr [rax+rax+00h]
 * 00000001C011DC6C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C011DC71: add     rsp, 50h
 * 00000001C011DC75: pop     rbp
 * 00000001C011DC76: retn
 */
