/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005728
 * Callers:
 *     MouseClassCleanup @ 0x1C0001010 (MouseClassCleanup.c)
 *     MouseClassClose @ 0x1C0001180 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C00012F0 (MouseClassCreate.c)
 *     MouseClassRead @ 0x1C0001AD0 (MouseClassRead.c)
 *     MouInitializeDataQueue @ 0x1C0002440 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C0004500 (MouseClassFlush.c)
 *     MouseClassServiceCallback @ 0x1C0004BD0 (MouseClassServiceCallback.c)
 *     MouEnableDisablePort @ 0x1C000C050 (MouEnableDisablePort.c)
 *     MouseClassDeviceControl @ 0x1C000C210 (MouseClassDeviceControl.c)
 *     MouseClassFindMorePorts @ 0x1C000C420 (MouseClassFindMorePorts.c)
 *     MouDeterminePortsServiced @ 0x1C000C860 (MouDeterminePortsServiced.c)
 *     MouSendConnectRequest @ 0x1C000CAA0 (MouSendConnectRequest.c)
 *     MouCreateClassObject @ 0x1C000CBD0 (MouCreateClassObject.c)
 *     DriverEntry @ 0x1C000F470 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005728
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005728
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005728: mov     [rsp+arg_0], rbx
 * 00000001C000572D: mov     [rsp+arg_8], rbp
 * 00000001C0005732: mov     [rsp+arg_10], rsi
 * 00000001C0005737: push    rdi
 * 00000001C0005738: push    r14
 * 00000001C000573A: push    r15
 * 00000001C000573C: sub     rsp, 30h
 * 00000001C0005740: mov     r14d, r8d
 * 00000001C0005743: movzx   ebp, r9w
 * 00000001C0005747: mov     edi, r8d
 * 00000001C000574A: mov     sil, dl
 * 00000001C000574D: shr     rdi, 10h
 * 00000001C0005751: mov     r15, rcx
 * 00000001C0005754: lea     ebx, [r14-1]
 * 00000001C0005758: mov     r10d, ebx
 * 00000001C000575B: and     ebx, 1Fh
 * 00000001C000575E: shr     r10, 5
 * 00000001C0005762: lea     rax, [rdi+rdi*4]
 * 00000001C0005766: and     r10d, 7FFh
 * 00000001C000576D: lea     r11, [r10+rax*4]
 * 00000001C0005771: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005778: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000577D: bt      eax, ebx
 * 00000001C0005780: jnb     short loc_1C00057B8
 * 00000001C0005782: lea     rcx, [rdi+rdi*4]
 * 00000001C0005786: add     rcx, rcx
 * 00000001C0005789: cmp     [r10+rcx*8+29h], dl
 * 00000001C000578E: jb      short loc_1C00057B8
 * 00000001C0005790: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005797: lea     r8, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C000579E: and     [rsp+48h+var_28], 0
 * 00000001C00057A4: mov     edx, 2Bh ; '+'
 * 00000001C00057A9: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00057AE: movzx   r9d, r9w
 * 00000001C00057B2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00057B8: and     [rsp+48h+var_20], 0
 * 00000001C00057BE: lea     r9, WPP_bb210b90ceef30f6904a4167fd94cd78_Traceguids
 * 00000001C00057C5: mov     r8d, r14d
 * 00000001C00057C8: movzx   edx, sil
 * 00000001C00057CC: mov     rcx, r15
 * 00000001C00057CF: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00057D4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00057DB: nop     dword ptr [rax+rax+00h]
 * 00000001C00057E0: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00057E5: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00057EA: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00057EF: add     rsp, 30h
 * 00000001C00057F3: pop     r15
 * 00000001C00057F5: pop     r14
 * 00000001C00057F7: pop     rdi
 * 00000001C00057F8: retn
 */
