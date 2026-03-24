/*
 * XREFs of WPP_RECORDER_SF_qqqD @ 0x1C01331FC
 * Callers:
 *     RIMWatchDog @ 0x1C0037120 (RIMWatchDog.c)
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 *     rimStackAttachAndProcessInput @ 0x1C015233C (rimStackAttachAndProcessInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqD @ 0x1C01331FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C01331FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01331FC: mov     r11, rsp
 * 00000001C01331FF: mov     [r11+8], rbx
 * 00000001C0133203: mov     [r11+10h], rbp
 * 00000001C0133207: push    rdi
 * 00000001C0133208: sub     rsp, 70h
 * 00000001C013320C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0133213: movzx   ebx, r9w
 * 00000001C0133217: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C013321E: mov     ebp, 8
 * 00000001C0133223: mov     eax, [rcx+2Ch]
 * 00000001C0133226: test    al, 1
 * 00000001C0133228: jz      short loc_1C0133289
 * 00000001C013322A: cmp     byte ptr [rcx+29h], 4
 * 00000001C013322E: jb      short loc_1C0133289
 * 00000001C0133230: and     qword ptr [r11-18h], 0
 * 00000001C0133235: lea     rdx, [r11+48h]
 * 00000001C0133239: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0133240: mov     r8, [rsp+78h+arg_20]
 * 00000001C0133248: mov     rcx, [rcx+18h]
 * 00000001C013324C: mov     qword ptr [r11-20h], 4
 * 00000001C0133254: mov     [r11-28h], rdx
 * 00000001C0133258: lea     rdx, [r11+40h]
 * 00000001C013325C: mov     [r11-30h], rbp
 * 00000001C0133260: mov     [r11-38h], rdx
 * 00000001C0133264: lea     rdx, [r11+38h]
 * 00000001C0133268: mov     [r11-40h], rbp
 * 00000001C013326C: mov     [r11-48h], rdx
 * 00000001C0133270: lea     rdx, [r11+30h]
 * 00000001C0133274: mov     [r11-50h], rbp
 * 00000001C0133278: mov     [r11-58h], rdx
 * 00000001C013327C: lea     edx, [rbp+23h]
 * 00000001C013327F: movzx   r9d, bx
 * 00000001C0133283: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0133289: and     [rsp+78h+var_10], 0
 * 00000001C013328F: lea     rax, [rsp+78h+arg_40]
 * 00000001C0133297: mov     r9, [rsp+78h+arg_20]
 * 00000001C013329F: mov     edx, 4
 * 00000001C01332A4: mov     [rsp+78h+var_18], 4
 * 00000001C01332AD: mov     rcx, rdi
 * 00000001C01332B0: mov     [rsp+78h+var_20], rax
 * 00000001C01332B5: lea     rax, [rsp+78h+arg_38]
 * 00000001C01332BD: mov     [rsp+78h+var_28], rbp
 * 00000001C01332C2: mov     [rsp+78h+var_30], rax
 * 00000001C01332C7: lea     r8d, [rdx-3]
 * 00000001C01332CB: mov     [rsp+78h+var_38], rbp
 * 00000001C01332D0: lea     rax, [rsp+78h+arg_30]
 * 00000001C01332D8: mov     [rsp+78h+var_40], rax
 * 00000001C01332DD: lea     rax, [rsp+78h+arg_28]
 * 00000001C01332E5: mov     [rsp+78h+var_48], rbp
 * 00000001C01332EA: mov     [rsp+78h+var_50], rax
 * 00000001C01332EF: mov     [rsp+78h+var_58], bx
 * 00000001C01332F4: call    cs:__imp_WppAutoLogTrace
 * 00000001C01332FB: nop     dword ptr [rax+rax+00h]
 * 00000001C0133300: lea     r11, [rsp+78h+var_8]
 * 00000001C0133305: mov     rbx, [r11+10h]
 * 00000001C0133309: mov     rbp, [r11+18h]
 * 00000001C013330D: mov     rsp, r11
 * 00000001C0133310: pop     rdi
 * 00000001C0133311: retn
 */
