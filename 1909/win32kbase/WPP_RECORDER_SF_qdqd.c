/*
 * XREFs of WPP_RECORDER_SF_qdqd @ 0x1C01755A0
 * Callers:
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016DD5C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdqd @ 0x1C01755A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01755A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01755A0: mov     r11, rsp
 * 00000001C01755A3: mov     [r11+8], rbx
 * 00000001C01755A7: mov     [r11+10h], rbp
 * 00000001C01755AB: mov     [r11+18h], rsi
 * 00000001C01755AF: push    rdi
 * 00000001C01755B0: sub     rsp, 70h
 * 00000001C01755B4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01755BB: mov     esi, 4
 * 00000001C01755C0: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01755C7: movzx   ebx, r9w
 * 00000001C01755CB: mov     eax, [rcx+2Ch]
 * 00000001C01755CE: lea     ebp, [rsi+4]
 * 00000001C01755D1: test    al, 40h
 * 00000001C01755D3: jz      short loc_1C017562F
 * 00000001C01755D5: cmp     [rcx+29h], sil
 * 00000001C01755D9: jb      short loc_1C017562F
 * 00000001C01755DB: and     qword ptr [r11-18h], 0
 * 00000001C01755E0: lea     rdx, [r11+48h]
 * 00000001C01755E4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01755EB: lea     r8, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C01755F2: mov     rcx, [rcx+18h]
 * 00000001C01755F6: mov     [r11-20h], rsi
 * 00000001C01755FA: mov     [r11-28h], rdx
 * 00000001C01755FE: lea     rdx, [r11+40h]
 * 00000001C0175602: mov     [r11-30h], rbp
 * 00000001C0175606: mov     [r11-38h], rdx
 * 00000001C017560A: lea     rdx, [r11+38h]
 * 00000001C017560E: mov     [r11-40h], rsi
 * 00000001C0175612: mov     [r11-48h], rdx
 * 00000001C0175616: lea     rdx, [r11+30h]
 * 00000001C017561A: mov     [r11-50h], rbp
 * 00000001C017561E: mov     [r11-58h], rdx
 * 00000001C0175622: lea     edx, [rsi+27h]
 * 00000001C0175625: movzx   r9d, bx
 * 00000001C0175629: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017562F: and     [rsp+78h+var_10], 0
 * 00000001C0175635: lea     rax, [rsp+78h+arg_40]
 * 00000001C017563D: mov     [rsp+78h+var_18], rsi
 * 00000001C0175642: lea     r9, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0175649: mov     [rsp+78h+var_20], rax
 * 00000001C017564E: mov     r8d, 7
 * 00000001C0175654: mov     [rsp+78h+var_28], rbp
 * 00000001C0175659: lea     rax, [rsp+78h+arg_38]
 * 00000001C0175661: mov     [rsp+78h+var_30], rax
 * 00000001C0175666: mov     edx, esi
 * 00000001C0175668: mov     [rsp+78h+var_38], rsi
 * 00000001C017566D: lea     rax, [rsp+78h+arg_30]
 * 00000001C0175675: mov     [rsp+78h+var_40], rax
 * 00000001C017567A: mov     rcx, rdi
 * 00000001C017567D: lea     rax, [rsp+78h+arg_28]
 * 00000001C0175685: mov     [rsp+78h+var_48], rbp
 * 00000001C017568A: mov     [rsp+78h+var_50], rax
 * 00000001C017568F: mov     [rsp+78h+var_58], bx
 * 00000001C0175694: call    cs:__imp_WppAutoLogTrace
 * 00000001C017569B: nop     dword ptr [rax+rax+00h]
 * 00000001C01756A0: lea     r11, [rsp+78h+var_8]
 * 00000001C01756A5: mov     rbx, [r11+10h]
 * 00000001C01756A9: mov     rbp, [r11+18h]
 * 00000001C01756AD: mov     rsi, [r11+20h]
 * 00000001C01756B1: mov     rsp, r11
 * 00000001C01756B4: pop     rdi
 * 00000001C01756B5: retn
 */
