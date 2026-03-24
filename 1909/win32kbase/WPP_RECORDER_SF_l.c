/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C0174BF0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016A4C0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C016C654 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016C9CC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C016FD3C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0170604 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0180B58 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C0174BF0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0174BF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0174BF0: mov     [rsp+arg_0], rbx
 * 00000001C0174BF5: mov     [rsp+arg_8], rbp
 * 00000001C0174BFA: mov     [rsp+arg_10], rsi
 * 00000001C0174BFF: push    rdi
 * 00000001C0174C00: sub     rsp, 40h
 * 00000001C0174C04: mov     rbp, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0174C0B: movzx   edi, r9w
 * 00000001C0174C0F: mov     esi, r8d
 * 00000001C0174C12: mov     bl, dl
 * 00000001C0174C14: mov     r11d, r8d
 * 00000001C0174C17: shr     r11, 10h
 * 00000001C0174C1B: lea     r10d, [rsi-1]
 * 00000001C0174C1F: mov     ecx, r10d
 * 00000001C0174C22: and     r10d, 1Fh
 * 00000001C0174C26: shr     rcx, 5
 * 00000001C0174C2A: lea     rax, [r11+r11*4]
 * 00000001C0174C2E: and     ecx, 7FFh
 * 00000001C0174C34: lea     r9, [rcx+rax*4]
 * 00000001C0174C38: mov     ecx, r10d
 * 00000001C0174C3B: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0174C42: mov     eax, [r10+r9*4+2Ch]
 * 00000001C0174C47: bt      eax, ecx
 * 00000001C0174C4A: jnb     short loc_1C0174C93
 * 00000001C0174C4C: lea     rcx, [r11+r11*4]
 * 00000001C0174C50: add     rcx, rcx
 * 00000001C0174C53: cmp     [r10+rcx*8+29h], dl
 * 00000001C0174C58: jb      short loc_1C0174C93
 * 00000001C0174C5A: and     [rsp+48h+var_18], 0
 * 00000001C0174C60: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0174C65: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174C6C: mov     r8, [rsp+48h+arg_20]
 * 00000001C0174C71: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0174C76: mov     [rsp+48h+var_20], 4
 * 00000001C0174C7F: mov     [rsp+48h+var_28], rdx
 * 00000001C0174C84: mov     edx, 2Bh ; '+'
 * 00000001C0174C89: movzx   r9d, di
 * 00000001C0174C8D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0174C93: and     [rsp+48h+var_10], 0
 * 00000001C0174C99: lea     rax, [rsp+48h+arg_28]
 * 00000001C0174C9E: mov     r9, [rsp+48h+arg_20]
 * 00000001C0174CA3: mov     r8d, esi
 * 00000001C0174CA6: mov     [rsp+48h+var_18], 4
 * 00000001C0174CAF: mov     rcx, rbp
 * 00000001C0174CB2: mov     [rsp+48h+var_20], rax
 * 00000001C0174CB7: movzx   edx, bl
 * 00000001C0174CBA: mov     word ptr [rsp+48h+var_28], di
 * 00000001C0174CBF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0174CC6: nop     dword ptr [rax+rax+00h]
 * 00000001C0174CCB: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0174CD0: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0174CD5: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0174CDA: add     rsp, 40h
 * 00000001C0174CDE: pop     rdi
 * 00000001C0174CDF: retn
 */
