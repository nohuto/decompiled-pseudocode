/*
 * XREFs of WPP_RECORDER_SF_dDD @ 0x1C013A26C
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013951C (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013983C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01479DC (RIMIDEInjectDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01540B8 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C0156A14 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDD @ 0x1C013A26C
 * Reason: Hex-Rays returned no pseudocode for 0x1C013A26C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C013A26C: mov     r11, rsp
 * 00000001C013A26F: mov     [r11+8], rbx
 * 00000001C013A273: mov     [r11+10h], rbp
 * 00000001C013A277: mov     [r11+18h], rsi
 * 00000001C013A27B: push    rdi
 * 00000001C013A27C: sub     rsp, 60h
 * 00000001C013A280: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C013A287: movzx   edi, r9w
 * 00000001C013A28B: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C013A292: mov     bl, dl
 * 00000001C013A294: mov     ebp, 4
 * 00000001C013A299: mov     eax, [rcx+2Ch]
 * 00000001C013A29C: test    al, 1
 * 00000001C013A29E: jz      short loc_1C013A2EE
 * 00000001C013A2A0: cmp     [rcx+29h], dl
 * 00000001C013A2A3: jb      short loc_1C013A2EE
 * 00000001C013A2A5: and     qword ptr [r11-18h], 0
 * 00000001C013A2AA: lea     rdx, [r11+40h]
 * 00000001C013A2AE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C013A2B5: mov     r8, [rsp+68h+arg_20]
 * 00000001C013A2BD: mov     rcx, [rcx+18h]
 * 00000001C013A2C1: mov     [r11-20h], rbp
 * 00000001C013A2C5: mov     [r11-28h], rdx
 * 00000001C013A2C9: lea     rdx, [r11+38h]
 * 00000001C013A2CD: mov     [r11-30h], rbp
 * 00000001C013A2D1: mov     [r11-38h], rdx
 * 00000001C013A2D5: lea     rdx, [r11+30h]
 * 00000001C013A2D9: mov     [r11-40h], rbp
 * 00000001C013A2DD: mov     [r11-48h], rdx
 * 00000001C013A2E1: lea     edx, [rbp+27h]
 * 00000001C013A2E4: movzx   r9d, r9w
 * 00000001C013A2E8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C013A2EE: and     [rsp+68h+var_10], 0
 * 00000001C013A2F4: lea     rax, [rsp+68h+arg_38]
 * 00000001C013A2FC: mov     r9, [rsp+68h+arg_20]
 * 00000001C013A304: mov     r8d, 1
 * 00000001C013A30A: mov     [rsp+68h+var_18], rbp
 * 00000001C013A30F: mov     rcx, rsi
 * 00000001C013A312: mov     [rsp+68h+var_20], rax
 * 00000001C013A317: lea     rax, [rsp+68h+arg_30]
 * 00000001C013A31F: mov     [rsp+68h+var_28], rbp
 * 00000001C013A324: mov     [rsp+68h+var_30], rax
 * 00000001C013A329: lea     rax, [rsp+68h+arg_28]
 * 00000001C013A331: mov     [rsp+68h+var_38], rbp
 * 00000001C013A336: mov     [rsp+68h+var_40], rax
 * 00000001C013A33B: movzx   edx, bl
 * 00000001C013A33E: mov     [rsp+68h+var_48], di
 * 00000001C013A343: call    cs:__imp_WppAutoLogTrace
 * 00000001C013A34A: nop     dword ptr [rax+rax+00h]
 * 00000001C013A34F: lea     r11, [rsp+68h+var_8]
 * 00000001C013A354: mov     rbx, [r11+10h]
 * 00000001C013A358: mov     rbp, [r11+18h]
 * 00000001C013A35C: mov     rsi, [r11+20h]
 * 00000001C013A360: mov     rsp, r11
 * 00000001C013A363: pop     rdi
 * 00000001C013A364: retn
 */
