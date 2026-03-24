/*
 * XREFs of WPP_RECORDER_SF_dDdd @ 0x1C013A36C
 * Callers:
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0138A68 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDdd @ 0x1C013A36C
 * Reason: Hex-Rays returned no pseudocode for 0x1C013A36C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C013A36C: mov     r11, rsp
 * 00000001C013A36F: mov     [r11+8], rbx
 * 00000001C013A373: mov     [r11+10h], rsi
 * 00000001C013A377: push    rdi
 * 00000001C013A378: sub     rsp, 70h
 * 00000001C013A37C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C013A383: mov     edi, 4
 * 00000001C013A388: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C013A38F: mov     eax, [rcx+2Ch]
 * 00000001C013A392: lea     esi, [rdi+8]
 * 00000001C013A395: test    al, 1
 * 00000001C013A397: jz      short loc_1C013A3F3
 * 00000001C013A399: cmp     [rcx+29h], dil
 * 00000001C013A39D: jb      short loc_1C013A3F3
 * 00000001C013A39F: and     qword ptr [r11-18h], 0
 * 00000001C013A3A4: lea     rdx, [r11+48h]
 * 00000001C013A3A8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C013A3AF: lea     r8, WPP_f6e7742174c03d6e55c103aec7673909_Traceguids
 * 00000001C013A3B6: mov     rcx, [rcx+18h]
 * 00000001C013A3BA: mov     [r11-20h], rdi
 * 00000001C013A3BE: mov     [r11-28h], rdx
 * 00000001C013A3C2: lea     rdx, [r11+40h]
 * 00000001C013A3C6: mov     [r11-30h], rdi
 * 00000001C013A3CA: mov     [r11-38h], rdx
 * 00000001C013A3CE: lea     rdx, [r11+38h]
 * 00000001C013A3D2: mov     [r11-40h], rdi
 * 00000001C013A3D6: mov     [r11-48h], rdx
 * 00000001C013A3DA: lea     rdx, [r11+30h]
 * 00000001C013A3DE: mov     [r11-50h], rdi
 * 00000001C013A3E2: mov     [r11-58h], rdx
 * 00000001C013A3E6: lea     edx, [rdi+27h]
 * 00000001C013A3E9: movzx   r9d, si
 * 00000001C013A3ED: call    cs:__guard_dispatch_icall_fptr
 * 00000001C013A3F3: and     [rsp+78h+var_10], 0
 * 00000001C013A3F9: lea     rax, [rsp+78h+arg_40]
 * 00000001C013A401: mov     [rsp+78h+var_18], rdi
 * 00000001C013A406: lea     r9, WPP_f6e7742174c03d6e55c103aec7673909_Traceguids
 * 00000001C013A40D: mov     [rsp+78h+var_20], rax
 * 00000001C013A412: mov     r8d, 1
 * 00000001C013A418: mov     [rsp+78h+var_28], rdi
 * 00000001C013A41D: lea     rax, [rsp+78h+arg_38]
 * 00000001C013A425: mov     [rsp+78h+var_30], rax
 * 00000001C013A42A: mov     edx, edi
 * 00000001C013A42C: mov     [rsp+78h+var_38], rdi
 * 00000001C013A431: lea     rax, [rsp+78h+arg_30]
 * 00000001C013A439: mov     [rsp+78h+var_40], rax
 * 00000001C013A43E: mov     rcx, rbx
 * 00000001C013A441: lea     rax, [rsp+78h+arg_28]
 * 00000001C013A449: mov     [rsp+78h+var_48], rdi
 * 00000001C013A44E: mov     [rsp+78h+var_50], rax
 * 00000001C013A453: mov     [rsp+78h+var_58], si
 * 00000001C013A458: call    cs:__imp_WppAutoLogTrace
 * 00000001C013A45F: nop     dword ptr [rax+rax+00h]
 * 00000001C013A464: lea     r11, [rsp+78h+var_8]
 * 00000001C013A469: mov     rbx, [r11+10h]
 * 00000001C013A46D: mov     rsi, [r11+18h]
 * 00000001C013A471: mov     rsp, r11
 * 00000001C013A474: pop     rdi
 * 00000001C013A475: retn
 */
