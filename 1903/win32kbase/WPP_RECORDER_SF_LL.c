/*
 * XREFs of WPP_RECORDER_SF_LL @ 0x1C0176FD4
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167680 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0167854 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x1C01688FC (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1C0168E08 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C0168F8C (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C016BE40 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01727F4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0175A5C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LL @ 0x1C0176FD4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0176FD4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0176FD4: mov     r11, rsp
 * 00000001C0176FD7: mov     [r11+8], rbx
 * 00000001C0176FDB: mov     [r11+10h], rbp
 * 00000001C0176FDF: mov     [r11+18h], rsi
 * 00000001C0176FE3: push    rdi
 * 00000001C0176FE4: sub     rsp, 50h
 * 00000001C0176FE8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0176FEF: movzx   edi, r9w
 * 00000001C0176FF3: mov     rsi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0176FFA: mov     bl, dl
 * 00000001C0176FFC: mov     ebp, 4
 * 00000001C0177001: mov     eax, [rcx+2Ch]
 * 00000001C0177004: test    al, 40h
 * 00000001C0177006: jz      short loc_1C0177049
 * 00000001C0177008: cmp     [rcx+29h], dl
 * 00000001C017700B: jb      short loc_1C0177049
 * 00000001C017700D: and     qword ptr [r11-18h], 0
 * 00000001C0177012: lea     rdx, [r11+38h]
 * 00000001C0177016: mov     rax, cs:pfnWppTraceMessage
 * 00000001C017701D: lea     r8, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C0177024: mov     rcx, [rcx+18h]
 * 00000001C0177028: mov     [r11-20h], rbp
 * 00000001C017702C: mov     [r11-28h], rdx
 * 00000001C0177030: lea     rdx, [r11+30h]
 * 00000001C0177034: mov     [r11-30h], rbp
 * 00000001C0177038: mov     [r11-38h], rdx
 * 00000001C017703C: lea     edx, [rbp+27h]
 * 00000001C017703F: movzx   r9d, r9w
 * 00000001C0177043: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0177049: and     [rsp+58h+var_10], 0
 * 00000001C017704F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0177057: mov     [rsp+58h+var_18], rbp
 * 00000001C017705C: lea     r9, WPP_06d7dff703a03015e007562f188a8383_Traceguids
 * 00000001C0177063: mov     [rsp+58h+var_20], rax
 * 00000001C0177068: mov     r8d, 7
 * 00000001C017706E: lea     rax, [rsp+58h+arg_28]
 * 00000001C0177076: mov     [rsp+58h+var_28], rbp
 * 00000001C017707B: mov     [rsp+58h+var_30], rax
 * 00000001C0177080: mov     rcx, rsi
 * 00000001C0177083: movzx   edx, bl
 * 00000001C0177086: mov     [rsp+58h+var_38], di
 * 00000001C017708B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0177092: nop     dword ptr [rax+rax+00h]
 * 00000001C0177097: mov     rbx, [rsp+58h+arg_0]
 * 00000001C017709C: mov     rbp, [rsp+58h+arg_8]
 * 00000001C01770A1: mov     rsi, [rsp+58h+arg_10]
 * 00000001C01770A6: add     rsp, 50h
 * 00000001C01770AA: pop     rdi
 * 00000001C01770AB: retn
 */
