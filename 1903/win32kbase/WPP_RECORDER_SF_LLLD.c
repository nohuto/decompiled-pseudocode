/*
 * XREFs of WPP_RECORDER_SF_LLLD @ 0x1C0151868
 * Callers:
 *     RIMGetPnpActionBitsFromGuid @ 0x1C0150AE0 (RIMGetPnpActionBitsFromGuid.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LLLD @ 0x1C0151868
 * Reason: Hex-Rays returned no pseudocode for 0x1C0151868
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0151868: mov     r11, rsp
 * 00000001C015186B: mov     [r11+8], rbx
 * 00000001C015186F: mov     [r11+10h], rsi
 * 00000001C0151873: push    rdi
 * 00000001C0151874: sub     rsp, 70h
 * 00000001C0151878: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C015187F: mov     esi, 0Dh
 * 00000001C0151884: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C015188B: mov     eax, [rcx+2Ch]
 * 00000001C015188E: lea     edi, [rsi-9]
 * 00000001C0151891: test    al, 1
 * 00000001C0151893: jz      short loc_1C01518EF
 * 00000001C0151895: cmp     byte ptr [rcx+29h], 3
 * 00000001C0151899: jb      short loc_1C01518EF
 * 00000001C015189B: and     qword ptr [r11-18h], 0
 * 00000001C01518A0: lea     rdx, [r11+48h]
 * 00000001C01518A4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01518AB: lea     r8, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C01518B2: mov     rcx, [rcx+18h]
 * 00000001C01518B6: mov     [r11-20h], rdi
 * 00000001C01518BA: mov     [r11-28h], rdx
 * 00000001C01518BE: lea     rdx, [r11+40h]
 * 00000001C01518C2: mov     [r11-30h], rdi
 * 00000001C01518C6: mov     [r11-38h], rdx
 * 00000001C01518CA: lea     rdx, [r11+38h]
 * 00000001C01518CE: mov     [r11-40h], rdi
 * 00000001C01518D2: mov     [r11-48h], rdx
 * 00000001C01518D6: lea     rdx, [r11+30h]
 * 00000001C01518DA: mov     [r11-50h], rdi
 * 00000001C01518DE: mov     [r11-58h], rdx
 * 00000001C01518E2: lea     edx, [rsi+1Eh]
 * 00000001C01518E5: movzx   r9d, si
 * 00000001C01518E9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01518EF: and     [rsp+78h+var_10], 0
 * 00000001C01518F5: lea     rax, [rsp+78h+arg_40]
 * 00000001C01518FD: mov     [rsp+78h+var_18], rdi
 * 00000001C0151902: lea     r9, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C0151909: mov     [rsp+78h+var_20], rax
 * 00000001C015190E: mov     edx, 3
 * 00000001C0151913: mov     [rsp+78h+var_28], rdi
 * 00000001C0151918: lea     rax, [rsp+78h+arg_38]
 * 00000001C0151920: mov     [rsp+78h+var_30], rax
 * 00000001C0151925: mov     rcx, rbx
 * 00000001C0151928: mov     [rsp+78h+var_38], rdi
 * 00000001C015192D: lea     rax, [rsp+78h+arg_30]
 * 00000001C0151935: mov     [rsp+78h+var_40], rax
 * 00000001C015193A: lea     r8d, [rdx-2]
 * 00000001C015193E: lea     rax, [rsp+78h+arg_28]
 * 00000001C0151946: mov     [rsp+78h+var_48], rdi
 * 00000001C015194B: mov     [rsp+78h+var_50], rax
 * 00000001C0151950: mov     [rsp+78h+var_58], si
 * 00000001C0151955: call    cs:__imp_WppAutoLogTrace
 * 00000001C015195C: nop     dword ptr [rax+rax+00h]
 * 00000001C0151961: lea     r11, [rsp+78h+var_8]
 * 00000001C0151966: mov     rbx, [r11+10h]
 * 00000001C015196A: mov     rsi, [r11+18h]
 * 00000001C015196E: mov     rsp, r11
 * 00000001C0151971: pop     rdi
 * 00000001C0151972: retn
 */
