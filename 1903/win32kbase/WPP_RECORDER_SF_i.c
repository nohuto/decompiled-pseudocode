/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C013AA70
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C0139240 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C014B51C (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C014B768 (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0155DF4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C013AA70
 * Reason: Hex-Rays returned no pseudocode for 0x1C013AA70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C013AA70: mov     r11, rsp
 * 00000001C013AA73: mov     [r11+8], rbx
 * 00000001C013AA77: mov     [r11+10h], rsi
 * 00000001C013AA7B: push    rdi
 * 00000001C013AA7C: sub     rsp, 40h
 * 00000001C013AA80: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C013AA87: movzx   edi, r9w
 * 00000001C013AA8B: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C013AA92: mov     bl, dl
 * 00000001C013AA94: mov     eax, [rcx+2Ch]
 * 00000001C013AA97: test    al, 1
 * 00000001C013AA99: jz      short loc_1C013AAD4
 * 00000001C013AA9B: cmp     [rcx+29h], dl
 * 00000001C013AA9E: jb      short loc_1C013AAD4
 * 00000001C013AAA0: and     qword ptr [r11-18h], 0
 * 00000001C013AAA5: lea     rdx, [r11+30h]
 * 00000001C013AAA9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C013AAB0: mov     r8, [rsp+48h+arg_20]
 * 00000001C013AAB5: mov     rcx, [rcx+18h]
 * 00000001C013AAB9: mov     qword ptr [r11-20h], 8
 * 00000001C013AAC1: mov     [r11-28h], rdx
 * 00000001C013AAC5: mov     edx, 2Bh ; '+'
 * 00000001C013AACA: movzx   r9d, r9w
 * 00000001C013AACE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C013AAD4: and     [rsp+48h+var_10], 0
 * 00000001C013AADA: lea     rax, [rsp+48h+arg_28]
 * 00000001C013AADF: mov     r9, [rsp+48h+arg_20]
 * 00000001C013AAE4: mov     r8d, 1
 * 00000001C013AAEA: mov     [rsp+48h+var_18], 8
 * 00000001C013AAF3: mov     rcx, rsi
 * 00000001C013AAF6: mov     [rsp+48h+var_20], rax
 * 00000001C013AAFB: movzx   edx, bl
 * 00000001C013AAFE: mov     [rsp+48h+var_28], di
 * 00000001C013AB03: call    cs:__imp_WppAutoLogTrace
 * 00000001C013AB0A: nop     dword ptr [rax+rax+00h]
 * 00000001C013AB0F: mov     rbx, [rsp+48h+arg_0]
 * 00000001C013AB14: mov     rsi, [rsp+48h+arg_8]
 * 00000001C013AB19: add     rsp, 40h
 * 00000001C013AB1D: pop     rdi
 * 00000001C013AB1E: retn
 */
