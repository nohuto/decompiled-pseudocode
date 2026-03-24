/*
 * XREFs of WPP_RECORDER_SF_qi @ 0x1C0150744
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0151038 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C015201C (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qi @ 0x1C0150744
 * Reason: Hex-Rays returned no pseudocode for 0x1C0150744
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0150744: mov     r11, rsp
 * 00000001C0150747: mov     [r11+8], rbx
 * 00000001C015074B: mov     [r11+10h], rsi
 * 00000001C015074F: push    rdi
 * 00000001C0150750: sub     rsp, 50h
 * 00000001C0150754: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C015075B: movzx   ebx, r9w
 * 00000001C015075F: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0150766: mov     esi, 8
 * 00000001C015076B: mov     eax, [rcx+2Ch]
 * 00000001C015076E: test    al, 1
 * 00000001C0150770: jz      short loc_1C01507B4
 * 00000001C0150772: cmp     byte ptr [rcx+29h], 4
 * 00000001C0150776: jb      short loc_1C01507B4
 * 00000001C0150778: and     qword ptr [r11-18h], 0
 * 00000001C015077D: lea     rdx, [r11+38h]
 * 00000001C0150781: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0150788: lea     r8, WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids
 * 00000001C015078F: mov     rcx, [rcx+18h]
 * 00000001C0150793: mov     [r11-20h], rsi
 * 00000001C0150797: mov     [r11-28h], rdx
 * 00000001C015079B: lea     rdx, [r11+30h]
 * 00000001C015079F: mov     [r11-30h], rsi
 * 00000001C01507A3: mov     [r11-38h], rdx
 * 00000001C01507A7: lea     edx, [rsi+23h]
 * 00000001C01507AA: movzx   r9d, bx
 * 00000001C01507AE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01507B4: and     [rsp+58h+var_10], 0
 * 00000001C01507BA: lea     rax, [rsp+58h+arg_30]
 * 00000001C01507C2: mov     [rsp+58h+var_18], rsi
 * 00000001C01507C7: lea     r9, WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids
 * 00000001C01507CE: mov     [rsp+58h+var_20], rax
 * 00000001C01507D3: mov     edx, 4
 * 00000001C01507D8: lea     rax, [rsp+58h+arg_28]
 * 00000001C01507E0: mov     [rsp+58h+var_28], rsi
 * 00000001C01507E5: mov     [rsp+58h+var_30], rax
 * 00000001C01507EA: mov     rcx, rdi
 * 00000001C01507ED: mov     [rsp+58h+var_38], bx
 * 00000001C01507F2: lea     r8d, [rdx-3]
 * 00000001C01507F6: call    cs:__imp_WppAutoLogTrace
 * 00000001C01507FD: nop     dword ptr [rax+rax+00h]
 * 00000001C0150802: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0150807: mov     rsi, [rsp+58h+arg_8]
 * 00000001C015080C: add     rsp, 50h
 * 00000001C0150810: pop     rdi
 * 00000001C0150811: retn
 */
