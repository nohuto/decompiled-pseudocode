/*
 * XREFs of WPP_RECORDER_SF_qDDd @ 0x1C0142A14
 * Callers:
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0141A94 (RIMSendLatencyMgtDeviceRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDDd @ 0x1C0142A14
 * Reason: Hex-Rays returned no pseudocode for 0x1C0142A14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0142A14: mov     r11, rsp
 * 00000001C0142A17: mov     [r11+8], rbx
 * 00000001C0142A1B: mov     [r11+10h], rbp
 * 00000001C0142A1F: push    rdi
 * 00000001C0142A20: sub     rsp, 70h
 * 00000001C0142A24: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0142A2B: mov     edi, 4
 * 00000001C0142A30: mov     rbx, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C0142A37: mov     eax, [rcx+2Ch]
 * 00000001C0142A3A: lea     ebp, [rdi+38h]
 * 00000001C0142A3D: test    al, 1
 * 00000001C0142A3F: jz      short loc_1C0142A9F
 * 00000001C0142A41: cmp     [rcx+29h], dil
 * 00000001C0142A45: jb      short loc_1C0142A9F
 * 00000001C0142A47: and     qword ptr [r11-18h], 0
 * 00000001C0142A4C: lea     rdx, [r11+48h]
 * 00000001C0142A50: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0142A57: lea     r8, WPP_9fa14f927df6353817215e33bf2b608e_Traceguids
 * 00000001C0142A5E: mov     rcx, [rcx+18h]
 * 00000001C0142A62: mov     [r11-20h], rdi
 * 00000001C0142A66: mov     [r11-28h], rdx
 * 00000001C0142A6A: lea     rdx, [r11+40h]
 * 00000001C0142A6E: mov     [r11-30h], rdi
 * 00000001C0142A72: mov     [r11-38h], rdx
 * 00000001C0142A76: lea     rdx, [r11+38h]
 * 00000001C0142A7A: mov     [r11-40h], rdi
 * 00000001C0142A7E: mov     [r11-48h], rdx
 * 00000001C0142A82: lea     rdx, [r11+30h]
 * 00000001C0142A86: mov     qword ptr [r11-50h], 8
 * 00000001C0142A8E: mov     [r11-58h], rdx
 * 00000001C0142A92: lea     edx, [rdi+27h]
 * 00000001C0142A95: movzx   r9d, bp
 * 00000001C0142A99: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0142A9F: and     [rsp+78h+var_10], 0
 * 00000001C0142AA5: lea     rax, [rsp+78h+arg_40]
 * 00000001C0142AAD: mov     [rsp+78h+var_18], rdi
 * 00000001C0142AB2: lea     r9, WPP_9fa14f927df6353817215e33bf2b608e_Traceguids
 * 00000001C0142AB9: mov     [rsp+78h+var_20], rax
 * 00000001C0142ABE: mov     r8d, 1
 * 00000001C0142AC4: mov     [rsp+78h+var_28], rdi
 * 00000001C0142AC9: lea     rax, [rsp+78h+arg_38]
 * 00000001C0142AD1: mov     [rsp+78h+var_30], rax
 * 00000001C0142AD6: mov     edx, edi
 * 00000001C0142AD8: mov     [rsp+78h+var_38], rdi
 * 00000001C0142ADD: lea     rax, [rsp+78h+arg_30]
 * 00000001C0142AE5: mov     [rsp+78h+var_40], rax
 * 00000001C0142AEA: mov     rcx, rbx
 * 00000001C0142AED: lea     rax, [rsp+78h+arg_28]
 * 00000001C0142AF5: mov     [rsp+78h+var_48], 8
 * 00000001C0142AFE: mov     [rsp+78h+var_50], rax
 * 00000001C0142B03: mov     [rsp+78h+var_58], bp
 * 00000001C0142B08: call    cs:__imp_WppAutoLogTrace
 * 00000001C0142B0F: nop     dword ptr [rax+rax+00h]
 * 00000001C0142B14: lea     r11, [rsp+78h+var_8]
 * 00000001C0142B19: mov     rbx, [r11+10h]
 * 00000001C0142B1D: mov     rbp, [r11+18h]
 * 00000001C0142B21: mov     rsp, r11
 * 00000001C0142B24: pop     rdi
 * 00000001C0142B25: retn
 */
