/*
 * XREFs of WPP_RECORDER_SF_DDq @ 0x1C0144F88
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0144A3C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0148AD8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDq @ 0x1C0144F88
 * Reason: Hex-Rays returned no pseudocode for 0x1C0144F88
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0144F88: mov     r11, rsp
 * 00000001C0144F8B: mov     [r11+8], rbx
 * 00000001C0144F8F: mov     [r11+10h], rsi
 * 00000001C0144F93: push    rdi
 * 00000001C0144F94: sub     rsp, 60h
 * 00000001C0144F98: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0144F9F: movzx   ebx, r9w
 * 00000001C0144FA3: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0144FAA: mov     esi, 4
 * 00000001C0144FAF: mov     eax, [rcx+2Ch]
 * 00000001C0144FB2: test    al, 1
 * 00000001C0144FB4: jz      short loc_1C0145009
 * 00000001C0144FB6: cmp     [rcx+29h], sil
 * 00000001C0144FBA: jb      short loc_1C0145009
 * 00000001C0144FBC: and     qword ptr [r11-18h], 0
 * 00000001C0144FC1: lea     rdx, [r11+40h]
 * 00000001C0144FC5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0144FCC: mov     r8, [rsp+68h+arg_20]
 * 00000001C0144FD4: mov     rcx, [rcx+18h]
 * 00000001C0144FD8: mov     qword ptr [r11-20h], 8
 * 00000001C0144FE0: mov     [r11-28h], rdx
 * 00000001C0144FE4: lea     rdx, [r11+38h]
 * 00000001C0144FE8: mov     [r11-30h], rsi
 * 00000001C0144FEC: mov     [r11-38h], rdx
 * 00000001C0144FF0: lea     rdx, [r11+30h]
 * 00000001C0144FF4: mov     [r11-40h], rsi
 * 00000001C0144FF8: mov     [r11-48h], rdx
 * 00000001C0144FFC: lea     edx, [rsi+27h]
 * 00000001C0144FFF: movzx   r9d, bx
 * 00000001C0145003: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0145009: and     [rsp+68h+var_10], 0
 * 00000001C014500F: lea     rax, [rsp+68h+arg_38]
 * 00000001C0145017: mov     r9, [rsp+68h+arg_20]
 * 00000001C014501F: mov     r8d, 1
 * 00000001C0145025: mov     [rsp+68h+var_18], 8
 * 00000001C014502E: mov     edx, esi
 * 00000001C0145030: mov     [rsp+68h+var_20], rax
 * 00000001C0145035: mov     rcx, rdi
 * 00000001C0145038: mov     [rsp+68h+var_28], rsi
 * 00000001C014503D: lea     rax, [rsp+68h+arg_30]
 * 00000001C0145045: mov     [rsp+68h+var_30], rax
 * 00000001C014504A: lea     rax, [rsp+68h+arg_28]
 * 00000001C0145052: mov     [rsp+68h+var_38], rsi
 * 00000001C0145057: mov     [rsp+68h+var_40], rax
 * 00000001C014505C: mov     [rsp+68h+var_48], bx
 * 00000001C0145061: call    cs:__imp_WppAutoLogTrace
 * 00000001C0145068: nop     dword ptr [rax+rax+00h]
 * 00000001C014506D: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0145072: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0145077: add     rsp, 60h
 * 00000001C014507B: pop     rdi
 * 00000001C014507C: retn
 */
