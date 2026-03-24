/*
 * XREFs of WPP_RECORDER_SF_qqSd @ 0x1C013AC24
 * Callers:
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqSd @ 0x1C013AC24
 * Reason: Hex-Rays returned no pseudocode for 0x1C013AC24
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C013AC24: mov     rax, rsp
 * 00000001C013AC27: mov     [rax+8], rbx
 * 00000001C013AC2B: mov     [rax+10h], rbp
 * 00000001C013AC2F: mov     [rax+18h], rsi
 * 00000001C013AC33: mov     [rax+20h], rdi
 * 00000001C013AC37: push    r12
 * 00000001C013AC39: push    r13
 * 00000001C013AC3B: push    r14
 * 00000001C013AC3D: sub     rsp, 70h
 * 00000001C013AC41: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C013AC48: lea     r13, Context
 * 00000001C013AC4F: mov     rbp, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C013AC56: xor     r14d, r14d
 * 00000001C013AC59: mov     rbx, [rsp+88h+arg_38]
 * 00000001C013AC61: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C013AC65: mov     eax, [rcx+2Ch]
 * 00000001C013AC68: lea     r9d, [r14+38h]
 * 00000001C013AC6C: lea     esi, [rdi+0Bh]
 * 00000001C013AC6F: lea     r12d, [r14+8]
 * 00000001C013AC73: test    al, 1
 * 00000001C013AC75: jz      loc_1C013AD21
 * 00000001C013AC7B: cmp     byte ptr [rcx+29h], 4
 * 00000001C013AC7F: jb      loc_1C013AD21
 * 00000001C013AC85: test    rbx, rbx
 * 00000001C013AC88: jz      short loc_1C013ACA1
 * 00000001C013AC8A: mov     rax, rdi
 * 00000001C013AC8D: inc     rax
 * 00000001C013AC90: cmp     [rbx+rax*2], r14w
 * 00000001C013AC95: jnz     short loc_1C013AC8D
 * 00000001C013AC97: lea     rdx, ds:2[rax*2]
 * 00000001C013AC9F: jmp     short loc_1C013ACA4
 * 00000001C013ACA1: mov     rdx, rsi
 * 00000001C013ACA4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C013ACAB: lea     r8, [rsp+88h+arg_40]
 * 00000001C013ACB3: mov     [rsp+88h+var_28], r14
 * 00000001C013ACB8: test    rbx, rbx
 * 00000001C013ACBB: mov     [rsp+88h+var_30], 4
 * 00000001C013ACC4: mov     rcx, rbx
 * 00000001C013ACC7: mov     [rsp+88h+var_38], r8
 * 00000001C013ACCC: cmovz   rcx, r13
 * 00000001C013ACD0: mov     [rsp+88h+var_40], rdx
 * 00000001C013ACD5: lea     r8, WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids
 * 00000001C013ACDC: mov     [rsp+88h+var_48], rcx
 * 00000001C013ACE1: mov     edx, 2Bh ; '+'
 * 00000001C013ACE6: mov     [rsp+88h+var_50], r12
 * 00000001C013ACEB: lea     rcx, [rsp+88h+arg_30]
 * 00000001C013ACF3: mov     [rsp+88h+var_58], rcx
 * 00000001C013ACF8: lea     rcx, [rsp+88h+arg_28]
 * 00000001C013AD00: mov     [rsp+88h+var_60], r12
 * 00000001C013AD05: mov     [rsp+88h+var_68], rcx
 * 00000001C013AD0A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C013AD11: mov     rcx, [rcx+18h]
 * 00000001C013AD15: call    cs:__guard_dispatch_icall_fptr
 * 00000001C013AD1B: mov     r9d, 38h ; '8'
 * 00000001C013AD21: test    rbx, rbx
 * 00000001C013AD24: jz      short loc_1C013AD3B
 * 00000001C013AD26: inc     rdi
 * 00000001C013AD29: cmp     [rbx+rdi*2], r14w
 * 00000001C013AD2E: jnz     short loc_1C013AD26
 * 00000001C013AD30: lea     rsi, ds:2[rdi*2]
 * 00000001C013AD38: test    rbx, rbx
 * 00000001C013AD3B: mov     [rsp+88h+var_20], r14
 * 00000001C013AD40: lea     rax, [rsp+88h+arg_40]
 * 00000001C013AD48: mov     [rsp+88h+var_28], 4
 * 00000001C013AD51: cmovz   rbx, r13
 * 00000001C013AD55: mov     [rsp+88h+var_30], rax
 * 00000001C013AD5A: mov     edx, 4
 * 00000001C013AD5F: mov     [rsp+88h+var_38], rsi
 * 00000001C013AD64: lea     rax, [rsp+88h+arg_30]
 * 00000001C013AD6C: mov     [rsp+88h+var_40], rbx
 * 00000001C013AD71: mov     rcx, rbp
 * 00000001C013AD74: mov     [rsp+88h+var_48], r12
 * 00000001C013AD79: mov     [rsp+88h+var_50], rax
 * 00000001C013AD7E: lea     r8d, [rdx-3]
 * 00000001C013AD82: lea     rax, [rsp+88h+arg_28]
 * 00000001C013AD8A: mov     [rsp+88h+var_58], r12
 * 00000001C013AD8F: mov     [rsp+88h+var_60], rax
 * 00000001C013AD94: mov     word ptr [rsp+88h+var_68], r9w
 * 00000001C013AD9A: lea     r9, WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids
 * 00000001C013ADA1: call    cs:__imp_WppAutoLogTrace
 * 00000001C013ADA8: nop     dword ptr [rax+rax+00h]
 * 00000001C013ADAD: lea     r11, [rsp+88h+var_18]
 * 00000001C013ADB2: mov     rbx, [r11+20h]
 * 00000001C013ADB6: mov     rbp, [r11+28h]
 * 00000001C013ADBA: mov     rsi, [r11+30h]
 * 00000001C013ADBE: mov     rdi, [r11+38h]
 * 00000001C013ADC2: mov     rsp, r11
 * 00000001C013ADC5: pop     r14
 * 00000001C013ADC7: pop     r13
 * 00000001C013ADC9: pop     r12
 * 00000001C013ADCB: retn
 */
