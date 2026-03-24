/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0004924
 * Callers:
 *     MouseClassCreate @ 0x1C0001010 (MouseClassCreate.c)
 *     MouseClassClose @ 0x1C00013B0 (MouseClassClose.c)
 *     MouseClassCleanup @ 0x1C0001500 (MouseClassCleanup.c)
 *     MouInitializeDataQueue @ 0x1C0002550 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C00028D0 (MouseClassFlush.c)
 *     MouseClassRead @ 0x1C0003590 (MouseClassRead.c)
 *     MouseClassServiceCallback @ 0x1C0003AA0 (MouseClassServiceCallback.c)
 *     MouEnableDisablePort @ 0x1C000C010 (MouEnableDisablePort.c)
 *     MouCreateClassObject @ 0x1C000C410 (MouCreateClassObject.c)
 *     MouDeterminePortsServiced @ 0x1C000C940 (MouDeterminePortsServiced.c)
 *     MouSendConnectRequest @ 0x1C000CA84 (MouSendConnectRequest.c)
 *     MouseClassDeviceControl @ 0x1C000D0B0 (MouseClassDeviceControl.c)
 *     MouseClassFindMorePorts @ 0x1C000D530 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001760 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0004924
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004924
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004924: mov     [rsp+arg_0], rbx
 * 00000001C0004929: mov     [rsp+arg_8], rbp
 * 00000001C000492E: mov     [rsp+arg_10], rsi
 * 00000001C0004933: push    rdi
 * 00000001C0004934: push    r14
 * 00000001C0004936: push    r15
 * 00000001C0004938: sub     rsp, 30h
 * 00000001C000493C: mov     r14d, r8d
 * 00000001C000493F: movzx   ebp, r9w
 * 00000001C0004943: mov     edi, r8d
 * 00000001C0004946: mov     sil, dl
 * 00000001C0004949: shr     rdi, 10h
 * 00000001C000494D: mov     r15, rcx
 * 00000001C0004950: lea     ebx, [r14-1]
 * 00000001C0004954: mov     r10d, ebx
 * 00000001C0004957: and     ebx, 1Fh
 * 00000001C000495A: shr     r10, 5
 * 00000001C000495E: lea     rax, [rdi+rdi*4]
 * 00000001C0004962: and     r10d, 7FFh
 * 00000001C0004969: lea     r11, [r10+rax*4]
 * 00000001C000496D: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0004974: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0004979: bt      eax, ebx
 * 00000001C000497C: jnb     short loc_1C00049B4
 * 00000001C000497E: lea     rcx, [rdi+rdi*4]
 * 00000001C0004982: add     rcx, rcx
 * 00000001C0004985: cmp     [r10+rcx*8+29h], dl
 * 00000001C000498A: jb      short loc_1C00049B4
 * 00000001C000498C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004993: lea     r8, WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids
 * 00000001C000499A: and     [rsp+48h+var_28], 0
 * 00000001C00049A0: mov     edx, 2Bh ; '+'
 * 00000001C00049A5: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00049AA: movzx   r9d, r9w
 * 00000001C00049AE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00049B4: and     [rsp+48h+var_20], 0
 * 00000001C00049BA: lea     r9, WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids
 * 00000001C00049C1: mov     r8d, r14d
 * 00000001C00049C4: movzx   edx, sil
 * 00000001C00049C8: mov     rcx, r15
 * 00000001C00049CB: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00049D0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00049D7: nop     dword ptr [rax+rax+00h]
 * 00000001C00049DC: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00049E1: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00049E6: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00049EB: add     rsp, 30h
 * 00000001C00049EF: pop     r15
 * 00000001C00049F1: pop     r14
 * 00000001C00049F3: pop     rdi
 * 00000001C00049F4: retn
 */
