/*
 * XREFs of WPP_RECORDER_SF_sd @ 0x1C01818A8
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0180840 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0184DF0 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sd @ 0x1C01818A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C01818A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01818A8: mov     rax, rsp
 * 00000001C01818AB: mov     [rax+8], rbx
 * 00000001C01818AF: mov     [rax+10h], rbp
 * 00000001C01818B3: mov     [rax+18h], rsi
 * 00000001C01818B7: mov     [rax+20h], rdi
 * 00000001C01818BB: push    r12
 * 00000001C01818BD: push    r14
 * 00000001C01818BF: push    r15
 * 00000001C01818C1: sub     rsp, 50h
 * 00000001C01818C5: mov     rsi, cs:WPP_GLOBAL_Control
 * 00000001C01818CC: movzx   r14d, r9w
 * 00000001C01818D0: mov     r12, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C01818D7: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C01818DB: mov     rbx, [rsp+68h+arg_28]
 * 00000001C01818E3: mov     bpl, dl
 * 00000001C01818E6: mov     r15d, r8d
 * 00000001C01818E9: mov     r11d, r8d
 * 00000001C01818EC: lea     r8, stru_1C01E8A24
 * 00000001C01818F3: shr     r11, 10h
 * 00000001C01818F7: lea     r10d, [r15-1]
 * 00000001C01818FB: mov     ecx, r10d
 * 00000001C01818FE: and     r10d, 1Fh
 * 00000001C0181902: shr     rcx, 5
 * 00000001C0181906: lea     rax, [r11+r11*4]
 * 00000001C018190A: and     ecx, 7FFh
 * 00000001C0181910: lea     r9, [rcx+rax*4]
 * 00000001C0181914: mov     eax, [rsi+r9*4+2Ch]
 * 00000001C0181919: bt      eax, r10d
 * 00000001C018191D: jnb     loc_1C01819A6
 * 00000001C0181923: lea     r10, [r11+r11*4]
 * 00000001C0181927: add     r10, r10
 * 00000001C018192A: cmp     [rsi+r10*8+29h], dl
 * 00000001C018192F: jb      short loc_1C01819A6
 * 00000001C0181931: test    rbx, rbx
 * 00000001C0181934: jz      short loc_1C0181947
 * 00000001C0181936: mov     rdx, rdi
 * 00000001C0181939: inc     rdx
 * 00000001C018193C: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0181940: jnz     short loc_1C0181939
 * 00000001C0181942: inc     rdx
 * 00000001C0181945: jmp     short loc_1C018194C
 * 00000001C0181947: mov     edx, 5
 * 00000001C018194C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0181953: test    rbx, rbx
 * 00000001C0181956: mov     rcx, rbx
 * 00000001C0181959: movzx   r9d, r14w
 * 00000001C018195D: cmovz   rcx, r8
 * 00000001C0181961: and     [rsp+68h+var_28], 0
 * 00000001C0181967: mov     [rsp+68h+var_30], 4
 * 00000001C0181970: lea     r8, [rsp+68h+arg_30]
 * 00000001C0181978: mov     [rsp+68h+var_38], r8
 * 00000001C018197D: mov     r8, [rsp+68h+arg_20]
 * 00000001C0181985: mov     [rsp+68h+var_40], rdx
 * 00000001C018198A: mov     edx, 2Bh ; '+'
 * 00000001C018198F: mov     [rsp+68h+var_48], rcx
 * 00000001C0181994: mov     rcx, [rsi+r10*8+18h]
 * 00000001C0181999: call    cs:__guard_dispatch_icall_fptr
 * 00000001C018199F: lea     r8, stru_1C01E8A24
 * 00000001C01819A6: test    rbx, rbx
 * 00000001C01819A9: jz      short loc_1C01819B9
 * 00000001C01819AB: inc     rdi
 * 00000001C01819AE: cmp     byte ptr [rbx+rdi], 0
 * 00000001C01819B2: jnz     short loc_1C01819AB
 * 00000001C01819B4: inc     rdi
 * 00000001C01819B7: jmp     short loc_1C01819BE
 * 00000001C01819B9: mov     edi, 5
 * 00000001C01819BE: mov     r9, [rsp+68h+arg_20]
 * 00000001C01819C6: lea     rax, [rsp+68h+arg_30]
 * 00000001C01819CE: test    rbx, rbx
 * 00000001C01819D1: movzx   edx, bpl
 * 00000001C01819D5: mov     rcx, r12
 * 00000001C01819D8: cmovz   rbx, r8
 * 00000001C01819DC: and     [rsp+68h+var_20], 0
 * 00000001C01819E2: mov     [rsp+68h+var_28], 4
 * 00000001C01819EB: mov     r8d, r15d
 * 00000001C01819EE: mov     [rsp+68h+var_30], rax
 * 00000001C01819F3: mov     [rsp+68h+var_38], rdi
 * 00000001C01819F8: mov     [rsp+68h+var_40], rbx
 * 00000001C01819FD: mov     word ptr [rsp+68h+var_48], r14w
 * 00000001C0181A03: call    cs:__imp_WppAutoLogTrace
 * 00000001C0181A0A: nop     dword ptr [rax+rax+00h]
 * 00000001C0181A0F: lea     r11, [rsp+68h+var_18]
 * 00000001C0181A14: mov     rbx, [r11+20h]
 * 00000001C0181A18: mov     rbp, [r11+28h]
 * 00000001C0181A1C: mov     rsi, [r11+30h]
 * 00000001C0181A20: mov     rdi, [r11+38h]
 * 00000001C0181A24: mov     rsp, r11
 * 00000001C0181A27: pop     r15
 * 00000001C0181A29: pop     r14
 * 00000001C0181A2B: pop     r12
 * 00000001C0181A2D: retn
 */
