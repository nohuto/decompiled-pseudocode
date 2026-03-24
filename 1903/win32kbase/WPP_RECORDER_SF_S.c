/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0135B98
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B7B64 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B7BA8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C0142FF0 (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C014E968 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C014EEE8 (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017DE58 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C140 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C780 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018CDE0 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018D190 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018D5F0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0135B98
 * Reason: Hex-Rays returned no pseudocode for 0x1C0135B98
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0135B98: mov     [rsp+arg_0], rbx
 * 00000001C0135B9D: mov     [rsp+arg_8], rbp
 * 00000001C0135BA2: mov     [rsp+arg_10], rsi
 * 00000001C0135BA7: push    rdi
 * 00000001C0135BA8: push    r14
 * 00000001C0135BAA: push    r15
 * 00000001C0135BAC: sub     rsp, 40h
 * 00000001C0135BB0: mov     rbx, [rsp+58h+arg_28]
 * 00000001C0135BB8: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0135BBC: mov     r14d, r8d
 * 00000001C0135BBF: movzx   ebp, r9w
 * 00000001C0135BC3: mov     esi, r8d
 * 00000001C0135BC6: mov     r15, rcx
 * 00000001C0135BC9: shr     rsi, 10h
 * 00000001C0135BCD: lea     r8, stru_1C01EAA14
 * 00000001C0135BD4: lea     r11d, [r14-1]
 * 00000001C0135BD8: mov     edx, r11d
 * 00000001C0135BDB: and     r11d, 1Fh
 * 00000001C0135BDF: shr     rdx, 5
 * 00000001C0135BE3: lea     rax, [rsi+rsi*4]
 * 00000001C0135BE7: and     edx, 7FFh
 * 00000001C0135BED: lea     r10, [rdx+rax*4]
 * 00000001C0135BF1: mov     edx, r11d
 * 00000001C0135BF4: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0135BFB: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0135C00: bt      eax, edx
 * 00000001C0135C03: jnb     short loc_1C0135C73
 * 00000001C0135C05: lea     r10, [rsi+rsi*4]
 * 00000001C0135C09: add     r10, r10
 * 00000001C0135C0C: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C0135C12: jb      short loc_1C0135C73
 * 00000001C0135C14: test    rbx, rbx
 * 00000001C0135C17: jz      short loc_1C0135C2A
 * 00000001C0135C19: mov     rdx, rdi
 * 00000001C0135C1C: inc     rdx
 * 00000001C0135C1F: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0135C23: jnz     short loc_1C0135C1C
 * 00000001C0135C25: inc     rdx
 * 00000001C0135C28: jmp     short loc_1C0135C2F
 * 00000001C0135C2A: mov     edx, 5
 * 00000001C0135C2F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0135C36: test    rbx, rbx
 * 00000001C0135C39: mov     rcx, rbx
 * 00000001C0135C3C: movzx   r9d, bp
 * 00000001C0135C40: cmovz   rcx, r8
 * 00000001C0135C44: and     [rsp+58h+var_28], 0
 * 00000001C0135C4A: mov     r8, [rsp+58h+arg_20]
 * 00000001C0135C52: mov     [rsp+58h+var_30], rdx
 * 00000001C0135C57: mov     edx, 2Bh ; '+'
 * 00000001C0135C5C: mov     [rsp+58h+var_38], rcx
 * 00000001C0135C61: mov     rcx, [r11+r10*8+18h]
 * 00000001C0135C66: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0135C6C: lea     r8, stru_1C01EAA14
 * 00000001C0135C73: test    rbx, rbx
 * 00000001C0135C76: jz      short loc_1C0135C86
 * 00000001C0135C78: inc     rdi
 * 00000001C0135C7B: cmp     byte ptr [rbx+rdi], 0
 * 00000001C0135C7F: jnz     short loc_1C0135C78
 * 00000001C0135C81: inc     rdi
 * 00000001C0135C84: jmp     short loc_1C0135C8B
 * 00000001C0135C86: mov     edi, 5
 * 00000001C0135C8B: mov     r9, [rsp+58h+arg_20]
 * 00000001C0135C93: test    rbx, rbx
 * 00000001C0135C96: mov     edx, 4
 * 00000001C0135C9B: mov     rcx, r15
 * 00000001C0135C9E: cmovz   rbx, r8
 * 00000001C0135CA2: and     [rsp+58h+var_20], 0
 * 00000001C0135CA8: mov     [rsp+58h+var_28], rdi
 * 00000001C0135CAD: mov     r8d, r14d
 * 00000001C0135CB0: mov     [rsp+58h+var_30], rbx
 * 00000001C0135CB5: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0135CBA: call    cs:__imp_WppAutoLogTrace
 * 00000001C0135CC1: nop     dword ptr [rax+rax+00h]
 * 00000001C0135CC6: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0135CCB: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0135CD0: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0135CD5: add     rsp, 40h
 * 00000001C0135CD9: pop     r15
 * 00000001C0135CDB: pop     r14
 * 00000001C0135CDD: pop     rdi
 * 00000001C0135CDE: retn
 */
