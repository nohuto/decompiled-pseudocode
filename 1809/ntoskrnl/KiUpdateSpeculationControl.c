/*
 * XREFs of KiUpdateSpeculationControl @ 0x1400F8330
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EDF0 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x1401C42C0 (SwapContext.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiIsBranchConfusionMitigationEnabled @ 0x1401B4494 (KiIsBranchConfusionMitigationEnabled.c)
 *     KiIsSrsoMitigationEnabled @ 0x1401B46DC (KiIsSrsoMitigationEnabled.c)
 *     KiFlushCurrentRsb @ 0x1401D1380 (KiFlushCurrentRsb.c)
 *     KiSynchronizeStibpPairing @ 0x140295794 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x140295980 (KiUpdateSpecCtrlEnhancedIBRS.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x1400F8330
 * Reason: Hex-Rays returned no pseudocode for 0x1400F8330
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400F8330: push    rbx
 * 00000001400F8332: push    r13
 * 00000001400F8334: sub     rsp, 88h
 * 00000001400F833B: movups  xmm0, cs:KiSpeculationFeatures
 * 00000001400F8342: mov     rax, 1000000000h
 * 00000001400F834C: mov     rbx, gs:20h
 * 00000001400F8355: movsd   xmm1, cs:qword_140541338
 * 00000001400F835D: mov     r13, rcx
 * 00000001400F8360: movups  [rsp+98h+var_50], xmm0
 * 00000001400F8365: movsd   [rsp+98h+var_40], xmm1
 * 00000001400F836B: test    qword ptr [rsp+98h+var_50], rax
 * 00000001400F8370: jz      loc_1400F8BD5
 * 00000001400F8376: mov     [rsp+98h+var_20], rdi
 * 00000001400F837B: cli
 * 00000001400F837C: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8383: mov     ecx, 0FFEFh
 * 00000001400F8388: and     ax, cx
 * 00000001400F838B: mov     edx, 100h
 * 00000001400F8390: mov     ecx, 0FFBFh
 * 00000001400F8395: and     ax, cx
 * 00000001400F8398: mov     ecx, 0FFFDh
 * 00000001400F839D: and     ax, cx
 * 00000001400F83A0: mov     ecx, 0FFFBh
 * 00000001400F83A5: and     ax, cx
 * 00000001400F83A8: mov     ecx, 0FFF7h
 * 00000001400F83AD: and     ax, cx
 * 00000001400F83B0: mov     ecx, 0FDFFh
 * 00000001400F83B5: and     ax, cx
 * 00000001400F83B8: mov     ecx, 0FFDFh
 * 00000001400F83BD: and     ax, cx
 * 00000001400F83C0: mov     rcx, 8000000000000h
 * 00000001400F83CA: mov     [rbx+6E0h], ax
 * 00000001400F83D1: mov     eax, [r13+6CCh]
 * 00000001400F83D8: mov     rdi, [r13+830h]
 * 00000001400F83DF: and     eax, 400000h
 * 00000001400F83E4: mov     [rsp+98h+arg_18], eax
 * 00000001400F83EB: mov     eax, 1
 * 00000001400F83F0: cmovz   rdi, rax
 * 00000001400F83F4: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F83FB: mov     [rsp+98h+var_58], rdi
 * 00000001400F8400: test    rcx, rax
 * 00000001400F8403: jz      short loc_1400F8425
 * 00000001400F8405: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F840C: test    rdi, rdi
 * 00000001400F840F: jnz     short loc_1400F841B
 * 00000001400F8411: mov     ecx, 0FEFFh
 * 00000001400F8416: and     ax, cx
 * 00000001400F8419: jmp     short loc_1400F841E
 * 00000001400F841B: or      ax, dx
 * 00000001400F841E: mov     [rbx+6E0h], ax
 * 00000001400F8425: test    byte ptr [rsp+98h+var_50], 1
 * 00000001400F842A: jz      short loc_1400F8448
 * 00000001400F842C: mov     rdx, r13
 * 00000001400F842F: mov     rcx, rbx
 * 00000001400F8432: call    KiUpdateSpecCtrlEnhancedIBRS
 * 00000001400F8437: sti
 * 00000001400F8438: mov     rdi, [rsp+98h+var_20]
 * 00000001400F843D: add     rsp, 88h
 * 00000001400F8444: pop     r13
 * 00000001400F8446: pop     rbx
 * 00000001400F8447: retn
 * 00000001400F8448: movzx   r9d, word ptr [rbx+6E4h]
 * 00000001400F8450: mov     rax, 20000000000h
 * 00000001400F845A: mov     [rsp+98h+arg_0], rbp
 * 00000001400F8462: mov     [rsp+98h+var_18], rsi
 * 00000001400F846A: mov     [rsp+98h+var_28], r12
 * 00000001400F846F: mov     r12, qword ptr [rsp+98h+var_50]
 * 00000001400F8474: mov     [rsp+98h+var_30], r14
 * 00000001400F8479: mov     r14, r12
 * 00000001400F847C: mov     [rsp+98h+var_38], r15
 * 00000001400F8481: mov     [rsp+98h+arg_8], 0
 * 00000001400F8489: mov     [rsp+98h+arg_10], 0
 * 00000001400F8491: and     r14, rax
 * 00000001400F8494: jz      short loc_1400F84C8
 * 00000001400F8496: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001400F849D: test    al, 2
 * 00000001400F849F: jnz     short loc_1400F84C8
 * 00000001400F84A1: test    al, 1
 * 00000001400F84A3: jz      short loc_1400F84C8
 * 00000001400F84A5: movzx   eax, byte ptr [rbx+6D4h]
 * 00000001400F84AC: movzx   r9d, word ptr [rbx+6D2h]
 * 00000001400F84B4: shr     al, 4
 * 00000001400F84B7: and     al, 1
 * 00000001400F84B9: mov     [rsp+98h+arg_10], 1
 * 00000001400F84C1: mov     [rsp+98h+arg_8], al
 * 00000001400F84C8: mov     rcx, 4000000000h
 * 00000001400F84D2: xor     eax, eax
 * 00000001400F84D4: test    rcx, r12
 * 00000001400F84D7: jz      short loc_1400F84EC
 * 00000001400F84D9: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 00000001400F84E0: jnz     short loc_1400F84EC
 * 00000001400F84E2: or      r9w, 4
 * 00000001400F84E7: mov     eax, 4
 * 00000001400F84EC: mov     [rbx+6E6h], ax
 * 00000001400F84F3: mov     rsi, rbx
 * 00000001400F84F6: mov     [rbx+6EAh], ax
 * 00000001400F84FD: mov     r15, rbx
 * 00000001400F8500: mov     [rbx+6D0h], ax
 * 00000001400F8507: mov     rbp, rbx
 * 00000001400F850A: mov     rax, r12
 * 00000001400F850D: mov     ecx, 80h
 * 00000001400F8512: and     eax, 2000h
 * 00000001400F8517: mov     [rsp+98h+var_60], rax
 * 00000001400F851C: jz      short loc_1400F852C
 * 00000001400F851E: or      [rbx+6E6h], cx
 * 00000001400F8525: or      [rbx+6D0h], cx
 * 00000001400F852C: mov     rax, 80000000000h
 * 00000001400F8536: mov     rdx, r12
 * 00000001400F8539: and     rdx, rax
 * 00000001400F853C: mov     [rsp+98h+var_70], rdx
 * 00000001400F8541: jz      short loc_1400F8553
 * 00000001400F8543: or      word ptr [rsi+6E6h], 2
 * 00000001400F854B: or      word ptr [rbp+6D0h], 2
 * 00000001400F8553: mov     rax, 40000000000000h
 * 00000001400F855D: mov     ecx, 400h
 * 00000001400F8562: and     r12, rax
 * 00000001400F8565: jz      short loc_1400F8575
 * 00000001400F8567: or      [rsi+6E6h], cx
 * 00000001400F856E: or      [rbp+6D0h], cx
 * 00000001400F8575: mov     eax, [r13+6CCh]
 * 00000001400F857C: mov     r10, qword ptr [rsp+98h+var_50]
 * 00000001400F8581: mov     rcx, [rbx+6D8h]
 * 00000001400F8588: mov     r11, r10
 * 00000001400F858B: shr     eax, 17h
 * 00000001400F858E: movzx   r8d, r10b
 * 00000001400F8592: and     eax, 1
 * 00000001400F8595: mov     [rsp+98h+var_68], rcx
 * 00000001400F859A: mov     [rsp+98h+var_78], eax
 * 00000001400F859E: mov     rax, 2000000000h
 * 00000001400F85A8: and     r11, rax
 * 00000001400F85AB: jnz     loc_1400F8832
 * 00000001400F85B1: test    rdi, rdi
 * 00000001400F85B4: jnz     loc_1400F86DB
 * 00000001400F85BA: test    r10b, 2
 * 00000001400F85BE: jz      short loc_1400F85DF
 * 00000001400F85C0: test    r10b, 40h
 * 00000001400F85C4: jz      loc_1400F86B3
 * 00000001400F85CA: or      word ptr [rbp+6D0h], 2
 * 00000001400F85D2: test    r14, r14
 * 00000001400F85D5: jnz     short loc_1400F85DF
 * 00000001400F85D7: or      word ptr [rsi+6E6h], 2
 * 00000001400F85DF: mov     eax, 0FFFBh
 * 00000001400F85E4: and     [rbx+6D2h], ax
 * 00000001400F85EB: movzx   eax, r8b
 * 00000001400F85EF: and     al, 42h
 * 00000001400F85F1: cmp     al, 42h ; 'B'
 * 00000001400F85F3: jnz     short loc_1400F8630
 * 00000001400F85F5: mov     rax, 100000000h
 * 00000001400F85FF: test    rax, r10
 * 00000001400F8602: jnz     short loc_1400F8611
 * 00000001400F8604: test    dword ptr [r13+820h], 40000000h
 * 00000001400F860F: jz      short loc_1400F8630
 * 00000001400F8611: or      word ptr [r15+6EAh], 2
 * 00000001400F861A: test    r14, r14
 * 00000001400F861D: jz      short loc_1400F8630
 * 00000001400F861F: cmp     r13, cs:PsInitialSystemProcess
 * 00000001400F8626: jz      short loc_1400F8630
 * 00000001400F8628: or      word ptr [rsi+6E6h], 2
 * 00000001400F8630: test    rdx, rdx
 * 00000001400F8633: jz      short loc_1400F863E
 * 00000001400F8635: or      word ptr [r15+6EAh], 2
 * 00000001400F863E: mov     rax, 8000000000h
 * 00000001400F8648: test    rax, r10
 * 00000001400F864B: jz      short loc_1400F8663
 * 00000001400F864D: mov     eax, [r13+824h]
 * 00000001400F8654: bt      eax, 0Dh
 * 00000001400F8658: jnb     short loc_1400F8663
 * 00000001400F865A: or      word ptr [r15+6EAh], 4
 * 00000001400F8663: mov     r10d, 400h
 * 00000001400F8669: test    r12, r12
 * 00000001400F866C: jz      short loc_1400F8676
 * 00000001400F866E: or      [r15+6EAh], r10w
 * 00000001400F8676: test    rcx, rcx
 * 00000001400F8679: jz      loc_1400F8900
 * 00000001400F867F: cmp     rcx, rdi
 * 00000001400F8682: jz      loc_1400F8900
 * 00000001400F8688: cmp     rcx, [r13+838h]
 * 00000001400F868F: jz      loc_1400F8900
 * 00000001400F8695: test    r9b, 1
 * 00000001400F8699: jz      loc_1400F88C2
 * 00000001400F869F: test    r8b, 2
 * 00000001400F86A3: jnz     loc_1400F8870
 * 00000001400F86A9: and     r9w, 4
 * 00000001400F86AE: jmp     loc_1400F8896
 * 00000001400F86B3: test    r8b, 10h
 * 00000001400F86B7: jz      loc_1400F85DF
 * 00000001400F86BD: or      word ptr [rbp+6D0h], 1
 * 00000001400F86C5: test    r14, r14
 * 00000001400F86C8: jnz     loc_1400F85DF
 * 00000001400F86CE: or      word ptr [rsi+6E6h], 1
 * 00000001400F86D6: jmp     loc_1400F85DF
 * 00000001400F86DB: lea     rcx, [rsp+98h+var_50]
 * 00000001400F86E0: call    KiIsBranchConfusionMitigationEnabled
 * 00000001400F86E5: test    eax, eax
 * 00000001400F86E7: jnz     loc_1400F87B2
 * 00000001400F86ED: lea     rcx, [rsp+98h+var_50]
 * 00000001400F86F2: call    KiIsSrsoMitigationEnabled
 * 00000001400F86F7: test    eax, eax
 * 00000001400F86F9: jnz     loc_1400F87B2
 * 00000001400F86FF: test    r8b, 10h
 * 00000001400F8703: jz      short loc_1400F8731
 * 00000001400F8705: or      word ptr [rbp+6D0h], 1
 * 00000001400F870D: test    r14, r14
 * 00000001400F8710: jnz     short loc_1400F871A
 * 00000001400F8712: or      word ptr [rsi+6E6h], 1
 * 00000001400F871A: test    r8b, 20h
 * 00000001400F871E: jnz     loc_1400F8813
 * 00000001400F8724: or      word ptr [rbx+6E0h], 2
 * 00000001400F872C: jmp     loc_1400F8813
 * 00000001400F8731: movzx   eax, r8b
 * 00000001400F8735: and     al, 42h
 * 00000001400F8737: cmp     al, 42h ; 'B'
 * 00000001400F8739: jnz     short loc_1400F8750
 * 00000001400F873B: or      word ptr [rbp+6D0h], 2
 * 00000001400F8743: test    r14, r14
 * 00000001400F8746: jnz     short loc_1400F8750
 * 00000001400F8748: or      word ptr [rsi+6E6h], 2
 * 00000001400F8750: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8757: test    r14, r14
 * 00000001400F875A: jz      short loc_1400F8794
 * 00000001400F875C: or      ax, 10h
 * 00000001400F8760: mov     [rbx+6E0h], ax
 * 00000001400F8767: test    r8b, 20h
 * 00000001400F876B: jnz     short loc_1400F877D
 * 00000001400F876D: or      ax, 2
 * 00000001400F8771: mov     [rbx+6E0h], ax
 * 00000001400F8778: jmp     loc_1400F8813
 * 00000001400F877D: test    r8b, 8
 * 00000001400F8781: jnz     loc_1400F8813
 * 00000001400F8787: or      ax, 40h
 * 00000001400F878B: mov     [rbx+6E0h], ax
 * 00000001400F8792: jmp     short loc_1400F8813
 * 00000001400F8794: or      ax, 8
 * 00000001400F8798: mov     [rbx+6E0h], ax
 * 00000001400F879F: test    r8b, 8
 * 00000001400F87A3: jnz     short loc_1400F8813
 * 00000001400F87A5: or      ax, 2
 * 00000001400F87A9: mov     [rbx+6E0h], ax
 * 00000001400F87B0: jmp     short loc_1400F8813
 * 00000001400F87B2: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F87B9: or      ax, 8
 * 00000001400F87BD: mov     [rbx+6E0h], ax
 * 00000001400F87C4: test    r8b, 8
 * 00000001400F87C8: jnz     short loc_1400F87D5
 * 00000001400F87CA: or      ax, 2
 * 00000001400F87CE: mov     [rbx+6E0h], ax
 * 00000001400F87D5: test    r8b, 2
 * 00000001400F87D9: jz      short loc_1400F8813
 * 00000001400F87DB: test    r8b, 40h
 * 00000001400F87DF: jz      short loc_1400F87F8
 * 00000001400F87E1: or      word ptr [rbp+6D0h], 2
 * 00000001400F87E9: test    r14, r14
 * 00000001400F87EC: jnz     short loc_1400F8813
 * 00000001400F87EE: or      word ptr [rsi+6E6h], 2
 * 00000001400F87F6: jmp     short loc_1400F8813
 * 00000001400F87F8: test    r8b, 10h
 * 00000001400F87FC: jz      short loc_1400F8813
 * 00000001400F87FE: or      word ptr [rbp+6D0h], 1
 * 00000001400F8806: test    r14, r14
 * 00000001400F8809: jnz     short loc_1400F8813
 * 00000001400F880B: or      word ptr [rsi+6E6h], 1
 * 00000001400F8813: test    byte ptr [rbx+6E2h], 30h
 * 00000001400F881A: mov     rcx, [rsp+98h+var_68]
 * 00000001400F881F: mov     rdx, [rsp+98h+var_70]
 * 00000001400F8824: jz      short loc_1400F8832
 * 00000001400F8826: mov     eax, 200h
 * 00000001400F882B: or      [rbx+6E0h], ax
 * 00000001400F8832: test    rdi, rdi
 * 00000001400F8835: jz      loc_1400F85DF
 * 00000001400F883B: mov     rax, 8000000000h
 * 00000001400F8845: test    rax, r10
 * 00000001400F8848: jz      loc_1400F85DF
 * 00000001400F884E: or      word ptr [rbp+6D0h], 4
 * 00000001400F8856: or      word ptr [rbx+6D2h], 4
 * 00000001400F885E: or      word ptr [rsi+6E6h], 4
 * 00000001400F8866: or      r9w, 4
 * 00000001400F886B: jmp     loc_1400F85EB
 * 00000001400F8870: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8877: test    al, 4
 * 00000001400F8879: jnz     short loc_1400F8890
 * 00000001400F887B: test    r14, r14
 * 00000001400F887E: jz      short loc_1400F88AA
 * 00000001400F8880: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001400F8887: test    al, 1
 * 00000001400F8889: jnz     short loc_1400F88AA
 * 00000001400F888B: and     r9w, 4
 * 00000001400F8890: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 00000001400F8896: test    r9b, 1
 * 00000001400F889A: jnz     short loc_1400F88DD
 * 00000001400F889C: mov     al, 1
 * 00000001400F889E: movzx   ecx, al
 * 00000001400F88A1: mov     [rsp+98h+arg_10], al
 * 00000001400F88A8: jmp     short loc_1400F8908
 * 00000001400F88AA: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 00000001400F88B0: test    r8b, 40h
 * 00000001400F88B4: jz      short loc_1400F8896
 * 00000001400F88B6: and     r9w, 4
 * 00000001400F88BB: or      r9w, 2
 * 00000001400F88C0: jmp     short loc_1400F8896
 * 00000001400F88C2: test    r11, r11
 * 00000001400F88C5: jnz     short loc_1400F88DD
 * 00000001400F88C7: test    r8b, 10h
 * 00000001400F88CB: jnz     short loc_1400F88DD
 * 00000001400F88CD: test    r14, r14
 * 00000001400F88D0: jz      short loc_1400F8900
 * 00000001400F88D2: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001400F88D9: test    al, 2
 * 00000001400F88DB: jnz     short loc_1400F8900
 * 00000001400F88DD: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F88E4: or      ax, 4
 * 00000001400F88E8: mov     [rbx+6E0h], ax
 * 00000001400F88EF: test    r8b, 8
 * 00000001400F88F3: jnz     short loc_1400F8900
 * 00000001400F88F5: or      ax, 20h
 * 00000001400F88F9: mov     [rbx+6E0h], ax
 * 00000001400F8900: movzx   eax, [rsp+98h+arg_8]
 * 00000001400F8908: mov     edx, 80h
 * 00000001400F890D: movzx   ecx, r9w
 * 00000001400F8911: or      cx, dx
 * 00000001400F8914: cmp     [rsp+98h+var_60], 0
 * 00000001400F891A: cmovz   cx, r9w
 * 00000001400F891F: movzx   edx, cx
 * 00000001400F8922: or      dx, 2
 * 00000001400F8926: cmp     [rsp+98h+var_70], 0
 * 00000001400F892C: cmovz   dx, cx
 * 00000001400F8930: movzx   edi, dx
 * 00000001400F8933: or      di, r10w
 * 00000001400F8937: test    r12, r12
 * 00000001400F893A: cmovz   di, dx
 * 00000001400F893E: test    al, al
 * 00000001400F8940: jz      short loc_1400F8997
 * 00000001400F8942: mov     eax, 1
 * 00000001400F8947: xor     edx, edx
 * 00000001400F8949: mov     ecx, 49h ; 'I'
 * 00000001400F894E: wrmsr
 * 00000001400F8950: test    r8b, 8
 * 00000001400F8954: jnz     short loc_1400F895B
 * 00000001400F8956: call    KiFlushCurrentRsb
 * 00000001400F895B: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8962: mov     ecx, 0FFFBh
 * 00000001400F8967: and     ax, cx
 * 00000001400F896A: mov     qword ptr [rbx+6D8h], 0
 * 00000001400F8975: mov     ecx, 0FFDFh
 * 00000001400F897A: mov     [rbx+6D2h], di
 * 00000001400F8981: and     ax, cx
 * 00000001400F8984: mov     [rbx+6E0h], ax
 * 00000001400F898B: mov     eax, 0FFAFh
 * 00000001400F8990: and     [rbx+6D4h], ax
 * 00000001400F8997: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F899E: movzx   edx, di
 * 00000001400F89A1: test    al, 4
 * 00000001400F89A3: jz      loc_1400F8B68
 * 00000001400F89A9: mov     rdx, [rsp+98h+var_58]
 * 00000001400F89AE: mov     r12d, 2
 * 00000001400F89B4: mov     rax, [rbx+2DB0h]
 * 00000001400F89BB: cmp     [rsp+98h+var_68], rdx
 * 00000001400F89C0: jz      short loc_1400F89CD
 * 00000001400F89C2: lock or [rbx+6ECh], r12w
 * 00000001400F89CB: jmp     short loc_1400F8A17
 * 00000001400F89CD: movzx   eax, word ptr [rax+6ECh]
 * 00000001400F89D4: movzx   ecx, word ptr [r15+6EAh]
 * 00000001400F89DC: test    al, 1
 * 00000001400F89DE: jnz     short loc_1400F89FB
 * 00000001400F89E0: or      cx, r12w
 * 00000001400F89E4: mov     [r15+6EAh], cx
 * 00000001400F89EC: test    r14, r14
 * 00000001400F89EF: jz      short loc_1400F8A17
 * 00000001400F89F1: or      [rsi+6E6h], r12w
 * 00000001400F89F9: jmp     short loc_1400F8A17
 * 00000001400F89FB: mov     eax, 0FFFDh
 * 00000001400F8A00: and     cx, ax
 * 00000001400F8A03: mov     [r15+6EAh], cx
 * 00000001400F8A0B: test    r14, r14
 * 00000001400F8A0E: jz      short loc_1400F8A17
 * 00000001400F8A10: and     [rsi+6E6h], ax
 * 00000001400F8A17: test    rdx, rdx
 * 00000001400F8A1A: jnz     loc_1400F8AA2
 * 00000001400F8A20: mov     rcx, r13
 * 00000001400F8A23: call    KiUpdateStibpPairing
 * 00000001400F8A28: movzx   ecx, word ptr [rbx+6D2h]
 * 00000001400F8A2F: mov     r9d, eax
 * 00000001400F8A32: movzx   r8d, word ptr [rbp+6D0h]
 * 00000001400F8A3A: mov     eax, 0FFFCh
 * 00000001400F8A3F: and     cx, ax
 * 00000001400F8A42: and     r8w, 3
 * 00000001400F8A47: or      cx, r8w
 * 00000001400F8A4B: movzx   edx, di
 * 00000001400F8A4E: and     dx, ax
 * 00000001400F8A51: mov     [rbx+6D2h], cx
 * 00000001400F8A58: test    r14, r14
 * 00000001400F8A5B: jz      short loc_1400F8A6E
 * 00000001400F8A5D: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001400F8A64: test    al, 1
 * 00000001400F8A66: jz      short loc_1400F8A6E
 * 00000001400F8A68: neg     r8w
 * 00000001400F8A6C: jmp     short loc_1400F8A79
 * 00000001400F8A6E: movzx   eax, byte ptr [rsi+6E6h]
 * 00000001400F8A75: and     al, 3
 * 00000001400F8A77: neg     al
 * 00000001400F8A79: sbb     ax, ax
 * 00000001400F8A7C: mov     r8b, 1
 * 00000001400F8A7F: and     ax, r12w
 * 00000001400F8A83: or      dx, ax
 * 00000001400F8A86: cmp     [rsp+98h+arg_18], 0
 * 00000001400F8A8E: jnz     loc_1400F8B74
 * 00000001400F8A94: lock or [rbx+6ECh], r12w
 * 00000001400F8A9D: jmp     loc_1400F8B74
 * 00000001400F8AA2: cmp     [rsp+98h+var_78], 0
 * 00000001400F8AA7: movzx   edx, di
 * 00000001400F8AAA: jz      loc_1400F8B68
 * 00000001400F8AB0: prefetchw byte ptr [rbx+6ECh]
 * 00000001400F8AB7: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8ABE: mov     edx, 100h
 * 00000001400F8AC3: nop     dword ptr [rax+00h]
 * 00000001400F8AC7: nop     word ptr [rax+rax+00000000h]
 * 00000001400F8AD0: movzx   ecx, ax
 * 00000001400F8AD3: or      cx, dx
 * 00000001400F8AD6: lock cmpxchg [rbx+6ECh], cx
 * 00000001400F8ADF: jnz     short loc_1400F8AD0
 * 00000001400F8AE1: movzx   ecx, ax
 * 00000001400F8AE4: mov     rdx, 20000000000h
 * 00000001400F8AEE: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8AF5: and     ecx, 1
 * 00000001400F8AF8: test    rdx, rax
 * 00000001400F8AFB: jz      short loc_1400F8B37
 * 00000001400F8AFD: movzx   eax, word ptr [rbp+6D0h]
 * 00000001400F8B04: test    al, 3
 * 00000001400F8B06: jnz     short loc_1400F8B13
 * 00000001400F8B08: or      ax, r12w
 * 00000001400F8B0C: mov     [rbp+6D0h], ax
 * 00000001400F8B13: movzx   eax, word ptr [rbx+6D2h]
 * 00000001400F8B1A: test    al, 3
 * 00000001400F8B1C: jnz     short loc_1400F8B29
 * 00000001400F8B1E: or      ax, r12w
 * 00000001400F8B22: mov     [rbx+6D2h], ax
 * 00000001400F8B29: test    byte ptr [rbx+6D6h], 1
 * 00000001400F8B30: movzx   edx, di
 * 00000001400F8B33: jz      short loc_1400F8B5A
 * 00000001400F8B35: jmp     short loc_1400F8B4D
 * 00000001400F8B37: movzx   eax, word ptr [rsi+6E6h]
 * 00000001400F8B3E: test    al, 3
 * 00000001400F8B40: jnz     short loc_1400F8B4D
 * 00000001400F8B42: or      ax, r12w
 * 00000001400F8B46: mov     [rsi+6E6h], ax
 * 00000001400F8B4D: movzx   edx, di
 * 00000001400F8B50: test    dil, 3
 * 00000001400F8B54: jnz     short loc_1400F8B5A
 * 00000001400F8B56: or      dx, r12w
 * 00000001400F8B5A: lock or [rbx+6ECh], r12w
 * 00000001400F8B63: mov     r9d, ecx
 * 00000001400F8B66: jmp     short loc_1400F8B6B
 * 00000001400F8B68: xor     r9d, r9d
 * 00000001400F8B6B: movzx   r8d, [rsp+98h+arg_10]
 * 00000001400F8B74: mov     r15, [rsp+98h+var_38]
 * 00000001400F8B79: mov     r14, [rsp+98h+var_30]
 * 00000001400F8B7E: mov     r12, [rsp+98h+var_28]
 * 00000001400F8B83: mov     rsi, [rsp+98h+var_18]
 * 00000001400F8B8B: mov     rbp, [rsp+98h+arg_0]
 * 00000001400F8B93: cmp     dx, [rbx+6E4h]
 * 00000001400F8B9A: jz      short loc_1400F8BB3
 * 00000001400F8B9C: mov     [rbx+6E4h], dx
 * 00000001400F8BA3: mov     ecx, 48h ; 'H'
 * 00000001400F8BA8: movzx   edx, dx
 * 00000001400F8BAB: mov     eax, edx
 * 00000001400F8BAD: shr     rdx, 20h
 * 00000001400F8BB1: wrmsr
 * 00000001400F8BB3: test    r8b, r8b
 * 00000001400F8BB6: jz      short loc_1400F8BBF
 * 00000001400F8BB8: or      byte ptr [rbx+6D6h], 2
 * 00000001400F8BBF: lfence
 * 00000001400F8BC2: sti
 * 00000001400F8BC3: test    r9d, r9d
 * 00000001400F8BC6: jz      short loc_1400F8BD0
 * 00000001400F8BC8: mov     rcx, rbx
 * 00000001400F8BCB: call    KiSynchronizeStibpPairing
 * 00000001400F8BD0: mov     rdi, [rsp+98h+var_20]
 * 00000001400F8BD5: add     rsp, 88h
 * 00000001400F8BDC: pop     r13
 * 00000001400F8BDE: pop     rbx
 * 00000001400F8BDF: retn
 */
