/*
 * XREFs of WPP_RECORDER_SF_qqqD @ 0x1C013586C
 * Callers:
 *     RIMWatchDog @ 0x1C0038190 (RIMWatchDog.c)
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0150F54 (RIMVirtDeviceClassNotify.c)
 *     rimStackAttachAndProcessInput @ 0x1C0154534 (rimStackAttachAndProcessInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqD @ 0x1C013586C
 * Reason: Hex-Rays returned no pseudocode for 0x1C013586C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C013586C: mov     r11, rsp
 * 00000001C013586F: mov     [r11+8], rbx
 * 00000001C0135873: mov     [r11+10h], rbp
 * 00000001C0135877: push    rdi
 * 00000001C0135878: sub     rsp, 70h
 * 00000001C013587C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0135883: movzx   ebx, r9w
 * 00000001C0135887: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C013588E: mov     ebp, 8
 * 00000001C0135893: mov     eax, [rcx+2Ch]
 * 00000001C0135896: test    al, 1
 * 00000001C0135898: jz      short loc_1C01358F9
 * 00000001C013589A: cmp     byte ptr [rcx+29h], 4
 * 00000001C013589E: jb      short loc_1C01358F9
 * 00000001C01358A0: and     qword ptr [r11-18h], 0
 * 00000001C01358A5: lea     rdx, [r11+48h]
 * 00000001C01358A9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01358B0: mov     r8, [rsp+78h+arg_20]
 * 00000001C01358B8: mov     rcx, [rcx+18h]
 * 00000001C01358BC: mov     qword ptr [r11-20h], 4
 * 00000001C01358C4: mov     [r11-28h], rdx
 * 00000001C01358C8: lea     rdx, [r11+40h]
 * 00000001C01358CC: mov     [r11-30h], rbp
 * 00000001C01358D0: mov     [r11-38h], rdx
 * 00000001C01358D4: lea     rdx, [r11+38h]
 * 00000001C01358D8: mov     [r11-40h], rbp
 * 00000001C01358DC: mov     [r11-48h], rdx
 * 00000001C01358E0: lea     rdx, [r11+30h]
 * 00000001C01358E4: mov     [r11-50h], rbp
 * 00000001C01358E8: mov     [r11-58h], rdx
 * 00000001C01358EC: lea     edx, [rbp+23h]
 * 00000001C01358EF: movzx   r9d, bx
 * 00000001C01358F3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01358F9: and     [rsp+78h+var_10], 0
 * 00000001C01358FF: lea     rax, [rsp+78h+arg_40]
 * 00000001C0135907: mov     r9, [rsp+78h+arg_20]
 * 00000001C013590F: mov     edx, 4
 * 00000001C0135914: mov     [rsp+78h+var_18], 4
 * 00000001C013591D: mov     rcx, rdi
 * 00000001C0135920: mov     [rsp+78h+var_20], rax
 * 00000001C0135925: lea     rax, [rsp+78h+arg_38]
 * 00000001C013592D: mov     [rsp+78h+var_28], rbp
 * 00000001C0135932: mov     [rsp+78h+var_30], rax
 * 00000001C0135937: lea     r8d, [rdx-3]
 * 00000001C013593B: mov     [rsp+78h+var_38], rbp
 * 00000001C0135940: lea     rax, [rsp+78h+arg_30]
 * 00000001C0135948: mov     [rsp+78h+var_40], rax
 * 00000001C013594D: lea     rax, [rsp+78h+arg_28]
 * 00000001C0135955: mov     [rsp+78h+var_48], rbp
 * 00000001C013595A: mov     [rsp+78h+var_50], rax
 * 00000001C013595F: mov     [rsp+78h+var_58], bx
 * 00000001C0135964: call    cs:__imp_WppAutoLogTrace
 * 00000001C013596B: nop     dword ptr [rax+rax+00h]
 * 00000001C0135970: lea     r11, [rsp+78h+var_8]
 * 00000001C0135975: mov     rbx, [r11+10h]
 * 00000001C0135979: mov     rbp, [r11+18h]
 * 00000001C013597D: mov     rsp, r11
 * 00000001C0135980: pop     rdi
 * 00000001C0135981: retn
 */
