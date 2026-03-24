/*
 * XREFs of WPP_RECORDER_SF_dDdd @ 0x1C013C9DC
 * Callers:
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C013B0D8 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDdd @ 0x1C013C9DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C013C9DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C013C9DC: mov     r11, rsp
 * 00000001C013C9DF: mov     [r11+8], rbx
 * 00000001C013C9E3: mov     [r11+10h], rsi
 * 00000001C013C9E7: push    rdi
 * 00000001C013C9E8: sub     rsp, 70h
 * 00000001C013C9EC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C013C9F3: mov     edi, 4
 * 00000001C013C9F8: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C013C9FF: mov     eax, [rcx+2Ch]
 * 00000001C013CA02: lea     esi, [rdi+8]
 * 00000001C013CA05: test    al, 1
 * 00000001C013CA07: jz      short loc_1C013CA63
 * 00000001C013CA09: cmp     [rcx+29h], dil
 * 00000001C013CA0D: jb      short loc_1C013CA63
 * 00000001C013CA0F: and     qword ptr [r11-18h], 0
 * 00000001C013CA14: lea     rdx, [r11+48h]
 * 00000001C013CA18: mov     rax, cs:pfnWppTraceMessage
 * 00000001C013CA1F: lea     r8, WPP_f6e7742174c03d6e55c103aec7673909_Traceguids
 * 00000001C013CA26: mov     rcx, [rcx+18h]
 * 00000001C013CA2A: mov     [r11-20h], rdi
 * 00000001C013CA2E: mov     [r11-28h], rdx
 * 00000001C013CA32: lea     rdx, [r11+40h]
 * 00000001C013CA36: mov     [r11-30h], rdi
 * 00000001C013CA3A: mov     [r11-38h], rdx
 * 00000001C013CA3E: lea     rdx, [r11+38h]
 * 00000001C013CA42: mov     [r11-40h], rdi
 * 00000001C013CA46: mov     [r11-48h], rdx
 * 00000001C013CA4A: lea     rdx, [r11+30h]
 * 00000001C013CA4E: mov     [r11-50h], rdi
 * 00000001C013CA52: mov     [r11-58h], rdx
 * 00000001C013CA56: lea     edx, [rdi+27h]
 * 00000001C013CA59: movzx   r9d, si
 * 00000001C013CA5D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C013CA63: and     [rsp+78h+var_10], 0
 * 00000001C013CA69: lea     rax, [rsp+78h+arg_40]
 * 00000001C013CA71: mov     [rsp+78h+var_18], rdi
 * 00000001C013CA76: lea     r9, WPP_f6e7742174c03d6e55c103aec7673909_Traceguids
 * 00000001C013CA7D: mov     [rsp+78h+var_20], rax
 * 00000001C013CA82: mov     r8d, 1
 * 00000001C013CA88: mov     [rsp+78h+var_28], rdi
 * 00000001C013CA8D: lea     rax, [rsp+78h+arg_38]
 * 00000001C013CA95: mov     [rsp+78h+var_30], rax
 * 00000001C013CA9A: mov     edx, edi
 * 00000001C013CA9C: mov     [rsp+78h+var_38], rdi
 * 00000001C013CAA1: lea     rax, [rsp+78h+arg_30]
 * 00000001C013CAA9: mov     [rsp+78h+var_40], rax
 * 00000001C013CAAE: mov     rcx, rbx
 * 00000001C013CAB1: lea     rax, [rsp+78h+arg_28]
 * 00000001C013CAB9: mov     [rsp+78h+var_48], rdi
 * 00000001C013CABE: mov     [rsp+78h+var_50], rax
 * 00000001C013CAC3: mov     [rsp+78h+var_58], si
 * 00000001C013CAC8: call    cs:__imp_WppAutoLogTrace
 * 00000001C013CACF: nop     dword ptr [rax+rax+00h]
 * 00000001C013CAD4: lea     r11, [rsp+78h+var_8]
 * 00000001C013CAD9: mov     rbx, [r11+10h]
 * 00000001C013CADD: mov     rsi, [r11+18h]
 * 00000001C013CAE1: mov     rsp, r11
 * 00000001C013CAE4: pop     rdi
 * 00000001C013CAE5: retn
 */
