/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0004AA8
 * Callers:
 *     MouConfiguration @ 0x1C000FA00 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001760 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C0004AA8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004AA8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004AA8: mov     r11, rsp
 * 00000001C0004AAB: mov     [r11+8], rbx
 * 00000001C0004AAF: mov     [r11+10h], rsi
 * 00000001C0004AB3: push    rdi
 * 00000001C0004AB4: sub     rsp, 50h
 * 00000001C0004AB8: mov     rbx, rcx
 * 00000001C0004ABB: mov     edi, 4
 * 00000001C0004AC0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0004AC7: lea     esi, [rdi+3Dh]
 * 00000001C0004ACA: mov     eax, [rcx+2Ch]
 * 00000001C0004ACD: test    al, 1
 * 00000001C0004ACF: jz      short loc_1C0004B13
 * 00000001C0004AD1: cmp     [rcx+29h], dil
 * 00000001C0004AD5: jb      short loc_1C0004B13
 * 00000001C0004AD7: and     qword ptr [r11-18h], 0
 * 00000001C0004ADC: lea     rdx, [r11+38h]
 * 00000001C0004AE0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004AE7: lea     r8, WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids
 * 00000001C0004AEE: mov     rcx, [rcx+18h]
 * 00000001C0004AF2: mov     [r11-20h], rdi
 * 00000001C0004AF6: mov     [r11-28h], rdx
 * 00000001C0004AFA: lea     rdx, [r11+30h]
 * 00000001C0004AFE: mov     [r11-30h], rdi
 * 00000001C0004B02: mov     [r11-38h], rdx
 * 00000001C0004B06: lea     edx, [rdi+27h]
 * 00000001C0004B09: movzx   r9d, si
 * 00000001C0004B0D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0004B13: and     [rsp+58h+var_10], 0
 * 00000001C0004B19: lea     rax, [rsp+58h+arg_30]
 * 00000001C0004B21: mov     [rsp+58h+var_18], rdi
 * 00000001C0004B26: lea     r9, WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids
 * 00000001C0004B2D: mov     [rsp+58h+var_20], rax
 * 00000001C0004B32: mov     r8d, 1
 * 00000001C0004B38: lea     rax, [rsp+58h+arg_28]
 * 00000001C0004B40: mov     [rsp+58h+var_28], rdi
 * 00000001C0004B45: mov     [rsp+58h+var_30], rax
 * 00000001C0004B4A: mov     edx, edi
 * 00000001C0004B4C: mov     rcx, rbx
 * 00000001C0004B4F: mov     [rsp+58h+var_38], si
 * 00000001C0004B54: call    cs:__imp_WppAutoLogTrace
 * 00000001C0004B5B: nop     dword ptr [rax+rax+00h]
 * 00000001C0004B60: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0004B65: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0004B6A: add     rsp, 50h
 * 00000001C0004B6E: pop     rdi
 * 00000001C0004B6F: retn
 */
