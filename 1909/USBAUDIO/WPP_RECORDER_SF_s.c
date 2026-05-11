/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0007F9C
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C00087E0 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0007F9C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0007F9C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0007F9C: mov     rax, rsp
 * 00000001C0007F9F: mov     [rax+8], rbx
 * 00000001C0007FA3: mov     [rax+10h], rbp
 * 00000001C0007FA7: mov     [rax+18h], rsi
 * 00000001C0007FAB: mov     [rax+20h], rdi
 * 00000001C0007FAF: push    r12
 * 00000001C0007FB1: sub     rsp, 40h
 * 00000001C0007FB5: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C0007FBC: lea     rsi, aNull; "NULL"
 * 00000001C0007FC3: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0007FC8: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0007FCC: mov     rbp, rcx
 * 00000001C0007FCF: test    dword ptr [rax+2Ch], 100h
 * 00000001C0007FD6: lea     r12d, [rbx+21h]
 * 00000001C0007FDA: jz      short loc_1C0008039
 * 00000001C0007FDC: test    rdi, rdi
 * 00000001C0007FDF: jz      short loc_1C0007FF2
 * 00000001C0007FE1: mov     rdx, rbx
 * 00000001C0007FE4: inc     rdx
 * 00000001C0007FE7: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0007FEB: jnz     short loc_1C0007FE4
 * 00000001C0007FED: inc     rdx
 * 00000001C0007FF0: jmp     short loc_1C0007FF7
 * 00000001C0007FF2: mov     edx, 5
 * 00000001C0007FF7: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0007FFE: lea     r8, WPP_d153e64821bc3364f2117226f130d99d_Traceguids
 * 00000001C0008005: test    rdi, rdi
 * 00000001C0008008: movzx   r9d, r12w
 * 00000001C000800C: mov     rcx, rsi
 * 00000001C000800F: cmovnz  rcx, rdi
 * 00000001C0008013: and     [rsp+48h+var_18], 0
 * 00000001C0008019: mov     [rsp+48h+var_20], rdx
 * 00000001C000801E: mov     edx, 2Bh ; '+'
 * 00000001C0008023: mov     [rsp+48h+var_28], rcx
 * 00000001C0008028: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000802F: mov     rcx, [rcx+18h]
 * 00000001C0008033: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0008039: test    rdi, rdi
 * 00000001C000803C: jz      short loc_1C000804C
 * 00000001C000803E: inc     rbx
 * 00000001C0008041: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0008045: jnz     short loc_1C000803E
 * 00000001C0008047: inc     rbx
 * 00000001C000804A: jmp     short loc_1C0008051
 * 00000001C000804C: mov     ebx, 5
 * 00000001C0008051: test    rdi, rdi
 * 00000001C0008054: lea     r9, WPP_d153e64821bc3364f2117226f130d99d_Traceguids
 * 00000001C000805B: mov     rcx, rbp
 * 00000001C000805E: cmovnz  rsi, rdi
 * 00000001C0008062: and     [rsp+48h+var_10], 0
 * 00000001C0008068: xor     edx, edx
 * 00000001C000806A: mov     [rsp+48h+var_18], rbx
 * 00000001C000806F: mov     [rsp+48h+var_20], rsi
 * 00000001C0008074: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C000807A: lea     r8d, [rdx+9]
 * 00000001C000807E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0008085: nop     dword ptr [rax+rax+00h]
 * 00000001C000808A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000808F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0008094: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0008099: mov     rdi, [rsp+48h+arg_18]
 * 00000001C000809E: add     rsp, 40h
 * 00000001C00080A2: pop     r12
 * 00000001C00080A4: retn
 */
