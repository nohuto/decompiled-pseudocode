/*
 * XREFs of WPP_RECORDER_SF_qi @ 0x1C0152DB4
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0153230 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C0154214 (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qi @ 0x1C0152DB4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0152DB4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0152DB4: mov     r11, rsp
 * 00000001C0152DB7: mov     [r11+8], rbx
 * 00000001C0152DBB: mov     [r11+10h], rsi
 * 00000001C0152DBF: push    rdi
 * 00000001C0152DC0: sub     rsp, 50h
 * 00000001C0152DC4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0152DCB: movzx   ebx, r9w
 * 00000001C0152DCF: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0152DD6: mov     esi, 8
 * 00000001C0152DDB: mov     eax, [rcx+2Ch]
 * 00000001C0152DDE: test    al, 1
 * 00000001C0152DE0: jz      short loc_1C0152E24
 * 00000001C0152DE2: cmp     byte ptr [rcx+29h], 4
 * 00000001C0152DE6: jb      short loc_1C0152E24
 * 00000001C0152DE8: and     qword ptr [r11-18h], 0
 * 00000001C0152DED: lea     rdx, [r11+38h]
 * 00000001C0152DF1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0152DF8: lea     r8, WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids
 * 00000001C0152DFF: mov     rcx, [rcx+18h]
 * 00000001C0152E03: mov     [r11-20h], rsi
 * 00000001C0152E07: mov     [r11-28h], rdx
 * 00000001C0152E0B: lea     rdx, [r11+30h]
 * 00000001C0152E0F: mov     [r11-30h], rsi
 * 00000001C0152E13: mov     [r11-38h], rdx
 * 00000001C0152E17: lea     edx, [rsi+23h]
 * 00000001C0152E1A: movzx   r9d, bx
 * 00000001C0152E1E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0152E24: and     [rsp+58h+var_10], 0
 * 00000001C0152E2A: lea     rax, [rsp+58h+arg_30]
 * 00000001C0152E32: mov     [rsp+58h+var_18], rsi
 * 00000001C0152E37: lea     r9, WPP_f878f2d0d5943248bffe4693ab33b491_Traceguids
 * 00000001C0152E3E: mov     [rsp+58h+var_20], rax
 * 00000001C0152E43: mov     edx, 4
 * 00000001C0152E48: lea     rax, [rsp+58h+arg_28]
 * 00000001C0152E50: mov     [rsp+58h+var_28], rsi
 * 00000001C0152E55: mov     [rsp+58h+var_30], rax
 * 00000001C0152E5A: mov     rcx, rdi
 * 00000001C0152E5D: mov     [rsp+58h+var_38], bx
 * 00000001C0152E62: lea     r8d, [rdx-3]
 * 00000001C0152E66: call    cs:__imp_WppAutoLogTrace
 * 00000001C0152E6D: nop     dword ptr [rax+rax+00h]
 * 00000001C0152E72: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0152E77: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0152E7C: add     rsp, 50h
 * 00000001C0152E80: pop     rdi
 * 00000001C0152E81: retn
 */
