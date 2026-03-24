/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0133528
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B5084 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B50C8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C0140980 (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C014C2F8 (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C014C878 (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017BC68 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C0189F50 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018A590 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018ABF0 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018AFA0 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018B400 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0133528
 * Reason: Hex-Rays returned no pseudocode for 0x1C0133528
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0133528: mov     [rsp+arg_0], rbx
 * 00000001C013352D: mov     [rsp+arg_8], rbp
 * 00000001C0133532: mov     [rsp+arg_10], rsi
 * 00000001C0133537: push    rdi
 * 00000001C0133538: push    r14
 * 00000001C013353A: push    r15
 * 00000001C013353C: sub     rsp, 40h
 * 00000001C0133540: mov     rbx, [rsp+58h+arg_28]
 * 00000001C0133548: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C013354C: mov     r14d, r8d
 * 00000001C013354F: movzx   ebp, r9w
 * 00000001C0133553: mov     esi, r8d
 * 00000001C0133556: mov     r15, rcx
 * 00000001C0133559: shr     rsi, 10h
 * 00000001C013355D: lea     r8, stru_1C01E8A24
 * 00000001C0133564: lea     r11d, [r14-1]
 * 00000001C0133568: mov     edx, r11d
 * 00000001C013356B: and     r11d, 1Fh
 * 00000001C013356F: shr     rdx, 5
 * 00000001C0133573: lea     rax, [rsi+rsi*4]
 * 00000001C0133577: and     edx, 7FFh
 * 00000001C013357D: lea     r10, [rdx+rax*4]
 * 00000001C0133581: mov     edx, r11d
 * 00000001C0133584: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C013358B: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0133590: bt      eax, edx
 * 00000001C0133593: jnb     short loc_1C0133603
 * 00000001C0133595: lea     r10, [rsi+rsi*4]
 * 00000001C0133599: add     r10, r10
 * 00000001C013359C: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C01335A2: jb      short loc_1C0133603
 * 00000001C01335A4: test    rbx, rbx
 * 00000001C01335A7: jz      short loc_1C01335BA
 * 00000001C01335A9: mov     rdx, rdi
 * 00000001C01335AC: inc     rdx
 * 00000001C01335AF: cmp     byte ptr [rbx+rdx], 0
 * 00000001C01335B3: jnz     short loc_1C01335AC
 * 00000001C01335B5: inc     rdx
 * 00000001C01335B8: jmp     short loc_1C01335BF
 * 00000001C01335BA: mov     edx, 5
 * 00000001C01335BF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01335C6: test    rbx, rbx
 * 00000001C01335C9: mov     rcx, rbx
 * 00000001C01335CC: movzx   r9d, bp
 * 00000001C01335D0: cmovz   rcx, r8
 * 00000001C01335D4: and     [rsp+58h+var_28], 0
 * 00000001C01335DA: mov     r8, [rsp+58h+arg_20]
 * 00000001C01335E2: mov     [rsp+58h+var_30], rdx
 * 00000001C01335E7: mov     edx, 2Bh ; '+'
 * 00000001C01335EC: mov     [rsp+58h+var_38], rcx
 * 00000001C01335F1: mov     rcx, [r11+r10*8+18h]
 * 00000001C01335F6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01335FC: lea     r8, stru_1C01E8A24
 * 00000001C0133603: test    rbx, rbx
 * 00000001C0133606: jz      short loc_1C0133616
 * 00000001C0133608: inc     rdi
 * 00000001C013360B: cmp     byte ptr [rbx+rdi], 0
 * 00000001C013360F: jnz     short loc_1C0133608
 * 00000001C0133611: inc     rdi
 * 00000001C0133614: jmp     short loc_1C013361B
 * 00000001C0133616: mov     edi, 5
 * 00000001C013361B: mov     r9, [rsp+58h+arg_20]
 * 00000001C0133623: test    rbx, rbx
 * 00000001C0133626: mov     edx, 4
 * 00000001C013362B: mov     rcx, r15
 * 00000001C013362E: cmovz   rbx, r8
 * 00000001C0133632: and     [rsp+58h+var_20], 0
 * 00000001C0133638: mov     [rsp+58h+var_28], rdi
 * 00000001C013363D: mov     r8d, r14d
 * 00000001C0133640: mov     [rsp+58h+var_30], rbx
 * 00000001C0133645: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C013364A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0133651: nop     dword ptr [rax+rax+00h]
 * 00000001C0133656: mov     rbx, [rsp+58h+arg_0]
 * 00000001C013365B: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0133660: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0133665: add     rsp, 40h
 * 00000001C0133669: pop     r15
 * 00000001C013366B: pop     r14
 * 00000001C013366D: pop     rdi
 * 00000001C013366E: retn
 */
