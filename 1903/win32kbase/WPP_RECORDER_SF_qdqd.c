/*
 * XREFs of WPP_RECORDER_SF_qdqd @ 0x1C0177790
 * Callers:
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016FF4C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdqd @ 0x1C0177790
 * Reason: Hex-Rays returned no pseudocode for 0x1C0177790
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0177790: mov     r11, rsp
 * 00000001C0177793: mov     [r11+8], rbx
 * 00000001C0177797: mov     [r11+10h], rbp
 * 00000001C017779B: mov     [r11+18h], rsi
 * 00000001C017779F: push    rdi
 * 00000001C01777A0: sub     rsp, 70h
 * 00000001C01777A4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01777AB: mov     esi, 4
 * 00000001C01777B0: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01777B7: movzx   ebx, r9w
 * 00000001C01777BB: mov     eax, [rcx+2Ch]
 * 00000001C01777BE: lea     ebp, [rsi+4]
 * 00000001C01777C1: test    al, 40h
 * 00000001C01777C3: jz      short loc_1C017781F
 * 00000001C01777C5: cmp     [rcx+29h], sil
 * 00000001C01777C9: jb      short loc_1C017781F
 * 00000001C01777CB: and     qword ptr [r11-18h], 0
 * 00000001C01777D0: lea     rdx, [r11+48h]
 * 00000001C01777D4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01777DB: lea     r8, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C01777E2: mov     rcx, [rcx+18h]
 * 00000001C01777E6: mov     [r11-20h], rsi
 * 00000001C01777EA: mov     [r11-28h], rdx
 * 00000001C01777EE: lea     rdx, [r11+40h]
 * 00000001C01777F2: mov     [r11-30h], rbp
 * 00000001C01777F6: mov     [r11-38h], rdx
 * 00000001C01777FA: lea     rdx, [r11+38h]
 * 00000001C01777FE: mov     [r11-40h], rsi
 * 00000001C0177802: mov     [r11-48h], rdx
 * 00000001C0177806: lea     rdx, [r11+30h]
 * 00000001C017780A: mov     [r11-50h], rbp
 * 00000001C017780E: mov     [r11-58h], rdx
 * 00000001C0177812: lea     edx, [rsi+27h]
 * 00000001C0177815: movzx   r9d, bx
 * 00000001C0177819: call    cs:__guard_dispatch_icall_fptr
 * 00000001C017781F: and     [rsp+78h+var_10], 0
 * 00000001C0177825: lea     rax, [rsp+78h+arg_40]
 * 00000001C017782D: mov     [rsp+78h+var_18], rsi
 * 00000001C0177832: lea     r9, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C0177839: mov     [rsp+78h+var_20], rax
 * 00000001C017783E: mov     r8d, 7
 * 00000001C0177844: mov     [rsp+78h+var_28], rbp
 * 00000001C0177849: lea     rax, [rsp+78h+arg_38]
 * 00000001C0177851: mov     [rsp+78h+var_30], rax
 * 00000001C0177856: mov     edx, esi
 * 00000001C0177858: mov     [rsp+78h+var_38], rsi
 * 00000001C017785D: lea     rax, [rsp+78h+arg_30]
 * 00000001C0177865: mov     [rsp+78h+var_40], rax
 * 00000001C017786A: mov     rcx, rdi
 * 00000001C017786D: lea     rax, [rsp+78h+arg_28]
 * 00000001C0177875: mov     [rsp+78h+var_48], rbp
 * 00000001C017787A: mov     [rsp+78h+var_50], rax
 * 00000001C017787F: mov     [rsp+78h+var_58], bx
 * 00000001C0177884: call    cs:__imp_WppAutoLogTrace
 * 00000001C017788B: nop     dword ptr [rax+rax+00h]
 * 00000001C0177890: lea     r11, [rsp+78h+var_8]
 * 00000001C0177895: mov     rbx, [r11+10h]
 * 00000001C0177899: mov     rbp, [r11+18h]
 * 00000001C017789D: mov     rsi, [r11+20h]
 * 00000001C01778A1: mov     rsp, r11
 * 00000001C01778A4: pop     rdi
 * 00000001C01778A5: retn
 */
