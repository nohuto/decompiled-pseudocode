/*
 * XREFs of WPP_RECORDER_SF_qDDdd @ 0x1C014519C
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C014312C (RIMDeliverConfigRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDDdd @ 0x1C014519C
 * Reason: Hex-Rays returned no pseudocode for 0x1C014519C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014519C: mov     r11, rsp
 * 00000001C014519F: mov     [r11+8], rbx
 * 00000001C01451A3: mov     [r11+10h], rbp
 * 00000001C01451A7: push    rdi
 * 00000001C01451A8: sub     rsp, 80h
 * 00000001C01451AF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01451B6: mov     edi, 4
 * 00000001C01451BB: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C01451C2: mov     eax, [rcx+2Ch]
 * 00000001C01451C5: lea     ebp, [rdi+34h]
 * 00000001C01451C8: test    al, 1
 * 00000001C01451CA: jz      short loc_1C0145236
 * 00000001C01451CC: cmp     [rcx+29h], dil
 * 00000001C01451D0: jb      short loc_1C0145236
 * 00000001C01451D2: and     qword ptr [r11-18h], 0
 * 00000001C01451D7: lea     rdx, [r11+50h]
 * 00000001C01451DB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01451E2: lea     r8, WPP_9fa14f927df6353817215e33bf2b608e_Traceguids
 * 00000001C01451E9: mov     rcx, [rcx+18h]
 * 00000001C01451ED: mov     [r11-20h], rdi
 * 00000001C01451F1: mov     [r11-28h], rdx
 * 00000001C01451F5: lea     rdx, [r11+48h]
 * 00000001C01451F9: mov     [r11-30h], rdi
 * 00000001C01451FD: mov     [r11-38h], rdx
 * 00000001C0145201: lea     rdx, [r11+40h]
 * 00000001C0145205: mov     [r11-40h], rdi
 * 00000001C0145209: mov     [r11-48h], rdx
 * 00000001C014520D: lea     rdx, [r11+38h]
 * 00000001C0145211: mov     [r11-50h], rdi
 * 00000001C0145215: mov     [r11-58h], rdx
 * 00000001C0145219: lea     rdx, [r11+30h]
 * 00000001C014521D: mov     qword ptr [r11-60h], 8
 * 00000001C0145225: mov     [r11-68h], rdx
 * 00000001C0145229: lea     edx, [rdi+27h]
 * 00000001C014522C: movzx   r9d, bp
 * 00000001C0145230: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0145236: and     [rsp+88h+var_10], 0
 * 00000001C014523C: lea     rax, [rsp+88h+arg_48]
 * 00000001C0145244: mov     [rsp+88h+var_18], rdi
 * 00000001C0145249: lea     r9, WPP_9fa14f927df6353817215e33bf2b608e_Traceguids
 * 00000001C0145250: mov     [rsp+88h+var_20], rax
 * 00000001C0145255: mov     r8d, 1
 * 00000001C014525B: mov     [rsp+88h+var_28], rdi
 * 00000001C0145260: lea     rax, [rsp+88h+arg_40]
 * 00000001C0145268: mov     [rsp+88h+var_30], rax
 * 00000001C014526D: mov     edx, edi
 * 00000001C014526F: mov     [rsp+88h+var_38], rdi
 * 00000001C0145274: lea     rax, [rsp+88h+arg_38]
 * 00000001C014527C: mov     [rsp+88h+var_40], rax
 * 00000001C0145281: mov     rcx, rbx
 * 00000001C0145284: mov     [rsp+88h+var_48], rdi
 * 00000001C0145289: lea     rax, [rsp+88h+arg_30]
 * 00000001C0145291: mov     [rsp+88h+var_50], rax
 * 00000001C0145296: lea     rax, [rsp+88h+arg_28]
 * 00000001C014529E: mov     [rsp+88h+var_58], 8
 * 00000001C01452A7: mov     [rsp+88h+var_60], rax
 * 00000001C01452AC: mov     [rsp+88h+var_68], bp
 * 00000001C01452B1: call    cs:__imp_WppAutoLogTrace
 * 00000001C01452B8: nop     dword ptr [rax+rax+00h]
 * 00000001C01452BD: lea     r11, [rsp+88h+var_8]
 * 00000001C01452C5: mov     rbx, [r11+10h]
 * 00000001C01452C9: mov     rbp, [r11+18h]
 * 00000001C01452CD: mov     rsp, r11
 * 00000001C01452D0: pop     rdi
 * 00000001C01452D1: retn
 */
