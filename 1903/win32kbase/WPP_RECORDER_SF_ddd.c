/*
 * XREFs of WPP_RECORDER_SF_dDD @ 0x1C013C8DC
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C013B7D4 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013BB8C (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C013BEAC (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMIDEInjectDeviceInput @ 0x1C014A04C (RIMIDEInjectDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01562B0 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessPointerDeviceContact @ 0x1C0158C0C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDD @ 0x1C013C8DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C013C8DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C013C8DC: mov     r11, rsp
 * 00000001C013C8DF: mov     [r11+8], rbx
 * 00000001C013C8E3: mov     [r11+10h], rbp
 * 00000001C013C8E7: mov     [r11+18h], rsi
 * 00000001C013C8EB: push    rdi
 * 00000001C013C8EC: sub     rsp, 60h
 * 00000001C013C8F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C013C8F7: movzx   edi, r9w
 * 00000001C013C8FB: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C013C902: mov     bl, dl
 * 00000001C013C904: mov     ebp, 4
 * 00000001C013C909: mov     eax, [rcx+2Ch]
 * 00000001C013C90C: test    al, 1
 * 00000001C013C90E: jz      short loc_1C013C95E
 * 00000001C013C910: cmp     [rcx+29h], dl
 * 00000001C013C913: jb      short loc_1C013C95E
 * 00000001C013C915: and     qword ptr [r11-18h], 0
 * 00000001C013C91A: lea     rdx, [r11+40h]
 * 00000001C013C91E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C013C925: mov     r8, [rsp+68h+arg_20]
 * 00000001C013C92D: mov     rcx, [rcx+18h]
 * 00000001C013C931: mov     [r11-20h], rbp
 * 00000001C013C935: mov     [r11-28h], rdx
 * 00000001C013C939: lea     rdx, [r11+38h]
 * 00000001C013C93D: mov     [r11-30h], rbp
 * 00000001C013C941: mov     [r11-38h], rdx
 * 00000001C013C945: lea     rdx, [r11+30h]
 * 00000001C013C949: mov     [r11-40h], rbp
 * 00000001C013C94D: mov     [r11-48h], rdx
 * 00000001C013C951: lea     edx, [rbp+27h]
 * 00000001C013C954: movzx   r9d, r9w
 * 00000001C013C958: call    cs:__guard_dispatch_icall_fptr
 * 00000001C013C95E: and     [rsp+68h+var_10], 0
 * 00000001C013C964: lea     rax, [rsp+68h+arg_38]
 * 00000001C013C96C: mov     r9, [rsp+68h+arg_20]
 * 00000001C013C974: mov     r8d, 1
 * 00000001C013C97A: mov     [rsp+68h+var_18], rbp
 * 00000001C013C97F: mov     rcx, rsi
 * 00000001C013C982: mov     [rsp+68h+var_20], rax
 * 00000001C013C987: lea     rax, [rsp+68h+arg_30]
 * 00000001C013C98F: mov     [rsp+68h+var_28], rbp
 * 00000001C013C994: mov     [rsp+68h+var_30], rax
 * 00000001C013C999: lea     rax, [rsp+68h+arg_28]
 * 00000001C013C9A1: mov     [rsp+68h+var_38], rbp
 * 00000001C013C9A6: mov     [rsp+68h+var_40], rax
 * 00000001C013C9AB: movzx   edx, bl
 * 00000001C013C9AE: mov     [rsp+68h+var_48], di
 * 00000001C013C9B3: call    cs:__imp_WppAutoLogTrace
 * 00000001C013C9BA: nop     dword ptr [rax+rax+00h]
 * 00000001C013C9BF: lea     r11, [rsp+68h+var_8]
 * 00000001C013C9C4: mov     rbx, [r11+10h]
 * 00000001C013C9C8: mov     rbp, [r11+18h]
 * 00000001C013C9CC: mov     rsi, [r11+20h]
 * 00000001C013C9D0: mov     rsp, r11
 * 00000001C013C9D3: pop     rdi
 * 00000001C013C9D4: retn
 */
