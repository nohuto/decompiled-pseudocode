/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00060F8
 * Callers:
 *     KeyboardClassCleanup @ 0x1C0001180 (KeyboardClassCleanup.c)
 *     KeyboardClassRead @ 0x1C00012F0 (KeyboardClassRead.c)
 *     KeyboardClassClose @ 0x1C0001BD0 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C0001D40 (KeyboardClassCreate.c)
 *     KbdInitializeDataQueue @ 0x1C0002BF0 (KbdInitializeDataQueue.c)
 *     KeyboardClassFlush @ 0x1C0004EE0 (KeyboardClassFlush.c)
 *     KeyboardClassServiceCallback @ 0x1C00055A0 (KeyboardClassServiceCallback.c)
 *     KeyboardClassDeviceControl @ 0x1C000D180 (KeyboardClassDeviceControl.c)
 *     KbdEnableDisablePort @ 0x1C000D490 (KbdEnableDisablePort.c)
 *     KeyboardClassFindMorePorts @ 0x1C000D610 (KeyboardClassFindMorePorts.c)
 *     KbdDeterminePortsServiced @ 0x1C000DC30 (KbdDeterminePortsServiced.c)
 *     KbdSendConnectRequest @ 0x1C000DD80 (KbdSendConnectRequest.c)
 *     KbdCreateClassObject @ 0x1C000DFA0 (KbdCreateClassObject.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C00060F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00060F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00060F8: mov     [rsp+arg_0], rbx
 * 00000001C00060FD: mov     [rsp+arg_8], rbp
 * 00000001C0006102: mov     [rsp+arg_10], rsi
 * 00000001C0006107: push    rdi
 * 00000001C0006108: push    r14
 * 00000001C000610A: push    r15
 * 00000001C000610C: sub     rsp, 30h
 * 00000001C0006110: mov     r14d, r8d
 * 00000001C0006113: movzx   ebp, r9w
 * 00000001C0006117: mov     edi, r8d
 * 00000001C000611A: mov     sil, dl
 * 00000001C000611D: shr     rdi, 10h
 * 00000001C0006121: mov     r15, rcx
 * 00000001C0006124: lea     ebx, [r14-1]
 * 00000001C0006128: mov     r10d, ebx
 * 00000001C000612B: and     ebx, 1Fh
 * 00000001C000612E: shr     r10, 5
 * 00000001C0006132: lea     rax, [rdi+rdi*4]
 * 00000001C0006136: and     r10d, 7FFh
 * 00000001C000613D: lea     r11, [r10+rax*4]
 * 00000001C0006141: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0006148: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000614D: bt      eax, ebx
 * 00000001C0006150: jnb     short loc_1C0006188
 * 00000001C0006152: lea     rcx, [rdi+rdi*4]
 * 00000001C0006156: add     rcx, rcx
 * 00000001C0006159: cmp     [r10+rcx*8+29h], dl
 * 00000001C000615E: jb      short loc_1C0006188
 * 00000001C0006160: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0006167: lea     r8, WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids
 * 00000001C000616E: and     [rsp+48h+var_28], 0
 * 00000001C0006174: mov     edx, 2Bh ; '+'
 * 00000001C0006179: mov     rcx, [r10+rcx*8+18h]
 * 00000001C000617E: movzx   r9d, r9w
 * 00000001C0006182: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0006188: and     [rsp+48h+var_20], 0
 * 00000001C000618E: lea     r9, WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids
 * 00000001C0006195: mov     r8d, r14d
 * 00000001C0006198: movzx   edx, sil
 * 00000001C000619C: mov     rcx, r15
 * 00000001C000619F: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00061A4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00061AB: nop     dword ptr [rax+rax+00h]
 * 00000001C00061B0: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00061B5: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00061BA: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00061BF: add     rsp, 30h
 * 00000001C00061C3: pop     r15
 * 00000001C00061C5: pop     r14
 * 00000001C00061C7: pop     rdi
 * 00000001C00061C8: retn
 */
