/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0007DDC
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000856C (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0007DDC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007DDC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007DDC: mov     rax, rsp
 * 00000001C0007DDF: mov     [rax+8], rbx
 * 00000001C0007DE3: mov     [rax+10h], rbp
 * 00000001C0007DE7: mov     [rax+18h], rsi
 * 00000001C0007DEB: mov     [rax+20h], rdi
 * 00000001C0007DEF: push    r12
 * 00000001C0007DF1: sub     rsp, 40h
 * 00000001C0007DF5: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0007DFC: lea     rsi, aNull_0; "NULL"
 * 00000001C0007E03: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0007E08: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0007E0C: mov     rbp, rcx
 * 00000001C0007E0F: test    dword ptr [rax+2Ch], 100h
 * 00000001C0007E16: lea     r12d, [rbx+21h]
 * 00000001C0007E1A: jz      short loc_1C0007E79
 * 00000001C0007E1C: test    rdi, rdi
 * 00000001C0007E1F: jz      short loc_1C0007E32
 * 00000001C0007E21: mov     rdx, rbx
 * 00000001C0007E24: inc     rdx
 * 00000001C0007E27: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0007E2B: jnz     short loc_1C0007E24
 * 00000001C0007E2D: inc     rdx
 * 00000001C0007E30: jmp     short loc_1C0007E37
 * 00000001C0007E32: mov     edx, 5
 * 00000001C0007E37: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0007E3E: lea     r8, WPP_9cb122de025331014e173ee6737c9890_Traceguids
 * 00000001C0007E45: test    rdi, rdi
 * 00000001C0007E48: movzx   r9d, r12w
 * 00000001C0007E4C: mov     rcx, rsi
 * 00000001C0007E4F: cmovnz  rcx, rdi
 * 00000001C0007E53: and     [rsp+48h+var_18], 0
 * 00000001C0007E59: mov     [rsp+48h+var_20], rdx
 * 00000001C0007E5E: mov     edx, 2Bh ; '+'
 * 00000001C0007E63: mov     [rsp+48h+var_28], rcx
 * 00000001C0007E68: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0007E6F: mov     rcx, [rcx+18h]
 * 00000001C0007E73: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0007E79: test    rdi, rdi
 * 00000001C0007E7C: jz      short loc_1C0007E8C
 * 00000001C0007E7E: inc     rbx
 * 00000001C0007E81: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0007E85: jnz     short loc_1C0007E7E
 * 00000001C0007E87: inc     rbx
 * 00000001C0007E8A: jmp     short loc_1C0007E91
 * 00000001C0007E8C: mov     ebx, 5
 * 00000001C0007E91: test    rdi, rdi
 * 00000001C0007E94: lea     r9, WPP_9cb122de025331014e173ee6737c9890_Traceguids
 * 00000001C0007E9B: mov     rcx, rbp
 * 00000001C0007E9E: cmovnz  rsi, rdi
 * 00000001C0007EA2: and     [rsp+48h+var_10], 0
 * 00000001C0007EA8: xor     edx, edx
 * 00000001C0007EAA: mov     [rsp+48h+var_18], rbx
 * 00000001C0007EAF: mov     [rsp+48h+var_20], rsi
 * 00000001C0007EB4: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C0007EBA: lea     r8d, [rdx+9]
 * 00000001C0007EBE: call    cs:__imp_WppAutoLogTrace
 * 00000001C0007EC5: nop     dword ptr [rax+rax+00h]
 * 00000001C0007ECA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0007ECF: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0007ED4: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0007ED9: mov     rdi, [rsp+48h+arg_18]
 * 00000001C0007EDE: add     rsp, 40h
 * 00000001C0007EE2: pop     r12
 * 00000001C0007EE4: retn
 */
