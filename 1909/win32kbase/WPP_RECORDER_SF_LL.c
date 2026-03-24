/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C0174DE4
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0165480 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0165654 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01666FC (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0166C08 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0166D8C (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0169C40 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0170604 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C017386C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C0174DE4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0174DE4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0174DE4: mov     r11, rsp
 * 00000001C0174DE7: mov     [r11+8], rbx
 * 00000001C0174DEB: mov     [r11+10h], rbp
 * 00000001C0174DEF: mov     [r11+18h], rsi
 * 00000001C0174DF3: push    rdi
 * 00000001C0174DF4: sub     rsp, 50h
 * 00000001C0174DF8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0174DFF: movzx   edi, r9w
 * 00000001C0174E03: mov     rsi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0174E0A: mov     bl, dl
 * 00000001C0174E0C: mov     ebp, 4
 * 00000001C0174E11: mov     eax, [rcx+2Ch]
 * 00000001C0174E14: test    al, 40h
 * 00000001C0174E16: jz      short loc_1C0174E59
 * 00000001C0174E18: cmp     [rcx+29h], dl
 * 00000001C0174E1B: jb      short loc_1C0174E59
 * 00000001C0174E1D: and     qword ptr [r11-18h], 0
 * 00000001C0174E22: lea     rdx, [r11+38h]
 * 00000001C0174E26: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174E2D: lea     r8, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174E34: mov     rcx, [rcx+18h]
 * 00000001C0174E38: mov     [r11-20h], rbp
 * 00000001C0174E3C: mov     [r11-28h], rdx
 * 00000001C0174E40: lea     rdx, [r11+30h]
 * 00000001C0174E44: mov     [r11-30h], rbp
 * 00000001C0174E48: mov     [r11-38h], rdx
 * 00000001C0174E4C: lea     edx, [rbp+27h]
 * 00000001C0174E4F: movzx   r9d, r9w
 * 00000001C0174E53: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0174E59: and     [rsp+58h+var_10], 0
 * 00000001C0174E5F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0174E67: mov     [rsp+58h+var_18], rbp
 * 00000001C0174E6C: lea     r9, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174E73: mov     [rsp+58h+var_20], rax
 * 00000001C0174E78: mov     r8d, 7
 * 00000001C0174E7E: lea     rax, [rsp+58h+arg_28]
 * 00000001C0174E86: mov     [rsp+58h+var_28], rbp
 * 00000001C0174E8B: mov     [rsp+58h+var_30], rax
 * 00000001C0174E90: mov     rcx, rsi
 * 00000001C0174E93: movzx   edx, bl
 * 00000001C0174E96: mov     [rsp+58h+var_38], di
 * 00000001C0174E9B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0174EA2: nop     dword ptr [rax+rax+00h]
 * 00000001C0174EA7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0174EAC: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0174EB1: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0174EB6: add     rsp, 50h
 * 00000001C0174EBA: pop     rdi
 * 00000001C0174EBB: retn
 */
