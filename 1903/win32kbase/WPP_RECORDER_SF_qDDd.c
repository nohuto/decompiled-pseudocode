/*
 * XREFs of WPP_RECORDER_SF_qDDd @ 0x1C0145084
 * Callers:
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0144104 (RIMSendLatencyMgtDeviceRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDDd @ 0x1C0145084
 * Reason: Hex-Rays returned no pseudocode for 0x1C0145084
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0145084: mov     r11, rsp
 * 00000001C0145087: mov     [r11+8], rbx
 * 00000001C014508B: mov     [r11+10h], rbp
 * 00000001C014508F: push    rdi
 * 00000001C0145090: sub     rsp, 70h
 * 00000001C0145094: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014509B: mov     edi, 4
 * 00000001C01450A0: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C01450A7: mov     eax, [rcx+2Ch]
 * 00000001C01450AA: lea     ebp, [rdi+38h]
 * 00000001C01450AD: test    al, 1
 * 00000001C01450AF: jz      short loc_1C014510F
 * 00000001C01450B1: cmp     [rcx+29h], dil
 * 00000001C01450B5: jb      short loc_1C014510F
 * 00000001C01450B7: and     qword ptr [r11-18h], 0
 * 00000001C01450BC: lea     rdx, [r11+48h]
 * 00000001C01450C0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01450C7: lea     r8, WPP_9fa14f927df6353817215e33bf2b608e_Traceguids
 * 00000001C01450CE: mov     rcx, [rcx+18h]
 * 00000001C01450D2: mov     [r11-20h], rdi
 * 00000001C01450D6: mov     [r11-28h], rdx
 * 00000001C01450DA: lea     rdx, [r11+40h]
 * 00000001C01450DE: mov     [r11-30h], rdi
 * 00000001C01450E2: mov     [r11-38h], rdx
 * 00000001C01450E6: lea     rdx, [r11+38h]
 * 00000001C01450EA: mov     [r11-40h], rdi
 * 00000001C01450EE: mov     [r11-48h], rdx
 * 00000001C01450F2: lea     rdx, [r11+30h]
 * 00000001C01450F6: mov     qword ptr [r11-50h], 8
 * 00000001C01450FE: mov     [r11-58h], rdx
 * 00000001C0145102: lea     edx, [rdi+27h]
 * 00000001C0145105: movzx   r9d, bp
 * 00000001C0145109: call    cs:__guard_dispatch_icall_fptr
 * 00000001C014510F: and     [rsp+78h+var_10], 0
 * 00000001C0145115: lea     rax, [rsp+78h+arg_40]
 * 00000001C014511D: mov     [rsp+78h+var_18], rdi
 * 00000001C0145122: lea     r9, WPP_9fa14f927df6353817215e33bf2b608e_Traceguids
 * 00000001C0145129: mov     [rsp+78h+var_20], rax
 * 00000001C014512E: mov     r8d, 1
 * 00000001C0145134: mov     [rsp+78h+var_28], rdi
 * 00000001C0145139: lea     rax, [rsp+78h+arg_38]
 * 00000001C0145141: mov     [rsp+78h+var_30], rax
 * 00000001C0145146: mov     edx, edi
 * 00000001C0145148: mov     [rsp+78h+var_38], rdi
 * 00000001C014514D: lea     rax, [rsp+78h+arg_30]
 * 00000001C0145155: mov     [rsp+78h+var_40], rax
 * 00000001C014515A: mov     rcx, rbx
 * 00000001C014515D: lea     rax, [rsp+78h+arg_28]
 * 00000001C0145165: mov     [rsp+78h+var_48], 8
 * 00000001C014516E: mov     [rsp+78h+var_50], rax
 * 00000001C0145173: mov     [rsp+78h+var_58], bp
 * 00000001C0145178: call    cs:__imp_WppAutoLogTrace
 * 00000001C014517F: nop     dword ptr [rax+rax+00h]
 * 00000001C0145184: lea     r11, [rsp+78h+var_8]
 * 00000001C0145189: mov     rbx, [r11+10h]
 * 00000001C014518D: mov     rbp, [r11+18h]
 * 00000001C0145191: mov     rsp, r11
 * 00000001C0145194: pop     rdi
 * 00000001C0145195: retn
 */
