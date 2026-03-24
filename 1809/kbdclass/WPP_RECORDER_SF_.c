/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005B2C
 * Callers:
 *     KeyboardClassClose @ 0x1C0001010 (KeyboardClassClose.c)
 *     KeyboardClassCleanup @ 0x1C0001160 (KeyboardClassCleanup.c)
 *     KeyboardClassRead @ 0x1C0001410 (KeyboardClassRead.c)
 *     KeyboardClassCreate @ 0x1C0001CA0 (KeyboardClassCreate.c)
 *     KbdInitializeDataQueue @ 0x1C0002800 (KbdInitializeDataQueue.c)
 *     KeyboardClassFlush @ 0x1C0004A70 (KeyboardClassFlush.c)
 *     KeyboardClassServiceCallback @ 0x1C00050C0 (KeyboardClassServiceCallback.c)
 *     KeyboardClassDeviceControl @ 0x1C000C180 (KeyboardClassDeviceControl.c)
 *     KbdEnableDisablePort @ 0x1C000C400 (KbdEnableDisablePort.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C550 (KeyboardClassFindMorePorts.c)
 *     KbdDeterminePortsServiced @ 0x1C000CB20 (KbdDeterminePortsServiced.c)
 *     KbdSendConnectRequest @ 0x1C000CC50 (KbdSendConnectRequest.c)
 *     KbdCreateClassObject @ 0x1C000CD40 (KbdCreateClassObject.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002D00 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005B2C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005B2C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005B2C: mov     [rsp+arg_0], rbx
 * 00000001C0005B31: mov     [rsp+arg_8], rbp
 * 00000001C0005B36: mov     [rsp+arg_10], rsi
 * 00000001C0005B3B: push    rdi
 * 00000001C0005B3C: push    r14
 * 00000001C0005B3E: push    r15
 * 00000001C0005B40: sub     rsp, 30h
 * 00000001C0005B44: mov     r14d, r8d
 * 00000001C0005B47: movzx   ebp, r9w
 * 00000001C0005B4B: mov     edi, r8d
 * 00000001C0005B4E: mov     sil, dl
 * 00000001C0005B51: shr     rdi, 10h
 * 00000001C0005B55: mov     r15, rcx
 * 00000001C0005B58: lea     ebx, [r14-1]
 * 00000001C0005B5C: mov     r10d, ebx
 * 00000001C0005B5F: and     ebx, 1Fh
 * 00000001C0005B62: shr     r10, 5
 * 00000001C0005B66: lea     rax, [rdi+rdi*4]
 * 00000001C0005B6A: and     r10d, 7FFh
 * 00000001C0005B71: lea     r11, [r10+rax*4]
 * 00000001C0005B75: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005B7C: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0005B81: bt      eax, ebx
 * 00000001C0005B84: jnb     short loc_1C0005BBC
 * 00000001C0005B86: lea     rcx, [rdi+rdi*4]
 * 00000001C0005B8A: add     rcx, rcx
 * 00000001C0005B8D: cmp     [r10+rcx*8+29h], dl
 * 00000001C0005B92: jb      short loc_1C0005BBC
 * 00000001C0005B94: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0005B9B: lea     r8, WPP_1975c0ad83fe39ae2d5358536952ac4e_Traceguids
 * 00000001C0005BA2: and     [rsp+48h+var_28], 0
 * 00000001C0005BA8: mov     edx, 2Bh ; '+'
 * 00000001C0005BAD: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0005BB2: movzx   r9d, r9w
 * 00000001C0005BB6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005BBC: and     [rsp+48h+var_20], 0
 * 00000001C0005BC2: lea     r9, WPP_1975c0ad83fe39ae2d5358536952ac4e_Traceguids
 * 00000001C0005BC9: mov     r8d, r14d
 * 00000001C0005BCC: movzx   edx, sil
 * 00000001C0005BD0: mov     rcx, r15
 * 00000001C0005BD3: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0005BD8: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005BDF: nop     dword ptr [rax+rax+00h]
 * 00000001C0005BE4: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0005BE9: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0005BEE: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005BF3: add     rsp, 30h
 * 00000001C0005BF7: pop     r15
 * 00000001C0005BF9: pop     r14
 * 00000001C0005BFB: pop     rdi
 * 00000001C0005BFC: retn
 */
