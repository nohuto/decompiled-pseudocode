/*
 * XREFs of WPP_RECORDER_SF_LLLD @ 0x1C014F1F8
 * Callers:
 *     RIMGetPnpActionBitsFromGuid @ 0x1C014E470 (RIMGetPnpActionBitsFromGuid.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LLLD @ 0x1C014F1F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C014F1F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014F1F8: mov     r11, rsp
 * 00000001C014F1FB: mov     [r11+8], rbx
 * 00000001C014F1FF: mov     [r11+10h], rsi
 * 00000001C014F203: push    rdi
 * 00000001C014F204: sub     rsp, 70h
 * 00000001C014F208: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014F20F: mov     esi, 0Dh
 * 00000001C014F214: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C014F21B: mov     eax, [rcx+2Ch]
 * 00000001C014F21E: lea     edi, [rsi-9]
 * 00000001C014F221: test    al, 1
 * 00000001C014F223: jz      short loc_1C014F27F
 * 00000001C014F225: cmp     byte ptr [rcx+29h], 3
 * 00000001C014F229: jb      short loc_1C014F27F
 * 00000001C014F22B: and     qword ptr [r11-18h], 0
 * 00000001C014F230: lea     rdx, [r11+48h]
 * 00000001C014F234: mov     rax, cs:pfnWppTraceMessage
 * 00000001C014F23B: lea     r8, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C014F242: mov     rcx, [rcx+18h]
 * 00000001C014F246: mov     [r11-20h], rdi
 * 00000001C014F24A: mov     [r11-28h], rdx
 * 00000001C014F24E: lea     rdx, [r11+40h]
 * 00000001C014F252: mov     [r11-30h], rdi
 * 00000001C014F256: mov     [r11-38h], rdx
 * 00000001C014F25A: lea     rdx, [r11+38h]
 * 00000001C014F25E: mov     [r11-40h], rdi
 * 00000001C014F262: mov     [r11-48h], rdx
 * 00000001C014F266: lea     rdx, [r11+30h]
 * 00000001C014F26A: mov     [r11-50h], rdi
 * 00000001C014F26E: mov     [r11-58h], rdx
 * 00000001C014F272: lea     edx, [rsi+1Eh]
 * 00000001C014F275: movzx   r9d, si
 * 00000001C014F279: call    cs:__guard_dispatch_icall_fptr
 * 00000001C014F27F: and     [rsp+78h+var_10], 0
 * 00000001C014F285: lea     rax, [rsp+78h+arg_40]
 * 00000001C014F28D: mov     [rsp+78h+var_18], rdi
 * 00000001C014F292: lea     r9, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C014F299: mov     [rsp+78h+var_20], rax
 * 00000001C014F29E: mov     edx, 3
 * 00000001C014F2A3: mov     [rsp+78h+var_28], rdi
 * 00000001C014F2A8: lea     rax, [rsp+78h+arg_38]
 * 00000001C014F2B0: mov     [rsp+78h+var_30], rax
 * 00000001C014F2B5: mov     rcx, rbx
 * 00000001C014F2B8: mov     [rsp+78h+var_38], rdi
 * 00000001C014F2BD: lea     rax, [rsp+78h+arg_30]
 * 00000001C014F2C5: mov     [rsp+78h+var_40], rax
 * 00000001C014F2CA: lea     r8d, [rdx-2]
 * 00000001C014F2CE: lea     rax, [rsp+78h+arg_28]
 * 00000001C014F2D6: mov     [rsp+78h+var_48], rdi
 * 00000001C014F2DB: mov     [rsp+78h+var_50], rax
 * 00000001C014F2E0: mov     [rsp+78h+var_58], si
 * 00000001C014F2E5: call    cs:__imp_WppAutoLogTrace
 * 00000001C014F2EC: nop     dword ptr [rax+rax+00h]
 * 00000001C014F2F1: lea     r11, [rsp+78h+var_8]
 * 00000001C014F2F6: mov     rbx, [r11+10h]
 * 00000001C014F2FA: mov     rsi, [r11+18h]
 * 00000001C014F2FE: mov     rsp, r11
 * 00000001C014F301: pop     rdi
 * 00000001C014F302: retn
 */
