/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x1C0142918
 * Callers:
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01423CC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0146468 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDq @ 0x1C0142918
 * Reason: Hex-Rays returned no pseudocode for 0x1C0142918
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0142918: mov     r11, rsp
 * 00000001C014291B: mov     [r11+8], rbx
 * 00000001C014291F: mov     [r11+10h], rsi
 * 00000001C0142923: push    rdi
 * 00000001C0142924: sub     rsp, 60h
 * 00000001C0142928: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014292F: movzx   ebx, r9w
 * 00000001C0142933: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C014293A: mov     esi, 4
 * 00000001C014293F: mov     eax, [rcx+2Ch]
 * 00000001C0142942: test    al, 1
 * 00000001C0142944: jz      short loc_1C0142999
 * 00000001C0142946: cmp     [rcx+29h], sil
 * 00000001C014294A: jb      short loc_1C0142999
 * 00000001C014294C: and     qword ptr [r11-18h], 0
 * 00000001C0142951: lea     rdx, [r11+40h]
 * 00000001C0142955: mov     rax, cs:pfnWppTraceMessage
 * 00000001C014295C: mov     r8, [rsp+68h+arg_20]
 * 00000001C0142964: mov     rcx, [rcx+18h]
 * 00000001C0142968: mov     qword ptr [r11-20h], 8
 * 00000001C0142970: mov     [r11-28h], rdx
 * 00000001C0142974: lea     rdx, [r11+38h]
 * 00000001C0142978: mov     [r11-30h], rsi
 * 00000001C014297C: mov     [r11-38h], rdx
 * 00000001C0142980: lea     rdx, [r11+30h]
 * 00000001C0142984: mov     [r11-40h], rsi
 * 00000001C0142988: mov     [r11-48h], rdx
 * 00000001C014298C: lea     edx, [rsi+27h]
 * 00000001C014298F: movzx   r9d, bx
 * 00000001C0142993: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0142999: and     [rsp+68h+var_10], 0
 * 00000001C014299F: lea     rax, [rsp+68h+arg_38]
 * 00000001C01429A7: mov     r9, [rsp+68h+arg_20]
 * 00000001C01429AF: mov     r8d, 1
 * 00000001C01429B5: mov     [rsp+68h+var_18], 8
 * 00000001C01429BE: mov     edx, esi
 * 00000001C01429C0: mov     [rsp+68h+var_20], rax
 * 00000001C01429C5: mov     rcx, rdi
 * 00000001C01429C8: mov     [rsp+68h+var_28], rsi
 * 00000001C01429CD: lea     rax, [rsp+68h+arg_30]
 * 00000001C01429D5: mov     [rsp+68h+var_30], rax
 * 00000001C01429DA: lea     rax, [rsp+68h+arg_28]
 * 00000001C01429E2: mov     [rsp+68h+var_38], rsi
 * 00000001C01429E7: mov     [rsp+68h+var_40], rax
 * 00000001C01429EC: mov     [rsp+68h+var_48], bx
 * 00000001C01429F1: call    cs:__imp_WppAutoLogTrace
 * 00000001C01429F8: nop     dword ptr [rax+rax+00h]
 * 00000001C01429FD: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0142A02: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0142A07: add     rsp, 60h
 * 00000001C0142A0B: pop     rdi
 * 00000001C0142A0C: retn
 */
