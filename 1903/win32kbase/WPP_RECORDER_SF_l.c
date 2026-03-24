/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C0176DE0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016C6C0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C016E844 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0171F2C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01727F4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0182D48 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C0176DE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0176DE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0176DE0: mov     [rsp+arg_0], rbx
 * 00000001C0176DE5: mov     [rsp+arg_8], rbp
 * 00000001C0176DEA: mov     [rsp+arg_10], rsi
 * 00000001C0176DEF: push    rdi
 * 00000001C0176DF0: sub     rsp, 40h
 * 00000001C0176DF4: mov     rbp, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0176DFB: movzx   edi, r9w
 * 00000001C0176DFF: mov     esi, r8d
 * 00000001C0176E02: mov     bl, dl
 * 00000001C0176E04: mov     r11d, r8d
 * 00000001C0176E07: shr     r11, 10h
 * 00000001C0176E0B: lea     r10d, [rsi-1]
 * 00000001C0176E0F: mov     ecx, r10d
 * 00000001C0176E12: and     r10d, 1Fh
 * 00000001C0176E16: shr     rcx, 5
 * 00000001C0176E1A: lea     rax, [r11+r11*4]
 * 00000001C0176E1E: and     ecx, 7FFh
 * 00000001C0176E24: lea     r9, [rcx+rax*4]
 * 00000001C0176E28: mov     ecx, r10d
 * 00000001C0176E2B: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0176E32: mov     eax, [r10+r9*4+2Ch]
 * 00000001C0176E37: bt      eax, ecx
 * 00000001C0176E3A: jnb     short loc_1C0176E83
 * 00000001C0176E3C: lea     rcx, [r11+r11*4]
 * 00000001C0176E40: add     rcx, rcx
 * 00000001C0176E43: cmp     [r10+rcx*8+29h], dl
 * 00000001C0176E48: jb      short loc_1C0176E83
 * 00000001C0176E4A: and     [rsp+48h+var_18], 0
 * 00000001C0176E50: lea     rdx, [rsp+48h+arg_28]
 * 00000001C0176E55: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0176E5C: mov     r8, [rsp+48h+arg_20]
 * 00000001C0176E61: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0176E66: mov     [rsp+48h+var_20], 4
 * 00000001C0176E6F: mov     [rsp+48h+var_28], rdx
 * 00000001C0176E74: mov     edx, 2Bh ; '+'
 * 00000001C0176E79: movzx   r9d, di
 * 00000001C0176E7D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0176E83: and     [rsp+48h+var_10], 0
 * 00000001C0176E89: lea     rax, [rsp+48h+arg_28]
 * 00000001C0176E8E: mov     r9, [rsp+48h+arg_20]
 * 00000001C0176E93: mov     r8d, esi
 * 00000001C0176E96: mov     [rsp+48h+var_18], 4
 * 00000001C0176E9F: mov     rcx, rbp
 * 00000001C0176EA2: mov     [rsp+48h+var_20], rax
 * 00000001C0176EA7: movzx   edx, bl
 * 00000001C0176EAA: mov     word ptr [rsp+48h+var_28], di
 * 00000001C0176EAF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0176EB6: nop     dword ptr [rax+rax+00h]
 * 00000001C0176EBB: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0176EC0: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0176EC5: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0176ECA: add     rsp, 40h
 * 00000001C0176ECE: pop     rdi
 * 00000001C0176ECF: retn
 */
