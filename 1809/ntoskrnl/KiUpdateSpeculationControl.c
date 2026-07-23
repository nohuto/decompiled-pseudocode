/*
 * XREFs of KiUpdateSpeculationControl @ 0x1400F83B0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14018EF30 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x1401C4420 (SwapContext.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiIsBranchConfusionMitigationEnabled @ 0x1401B45D4 (KiIsBranchConfusionMitigationEnabled.c)
 *     KiIsSrsoMitigationEnabled @ 0x1401B481C (KiIsSrsoMitigationEnabled.c)
 *     KiFlushCurrentRsb @ 0x1401D1480 (KiFlushCurrentRsb.c)
 *     KiSynchronizeStibpPairing @ 0x140295984 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x140295B70 (KiUpdateSpecCtrlEnhancedIBRS.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x1400F83B0
 * Reason: Hex-Rays returned no pseudocode for 0x1400F83B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400F83B0: push    rbx
 * 00000001400F83B2: push    r13
 * 00000001400F83B4: sub     rsp, 88h
 * 00000001400F83BB: movups  xmm0, cs:KiSpeculationFeatures
 * 00000001400F83C2: mov     rax, 1000000000h
 * 00000001400F83CC: mov     rbx, gs:20h
 * 00000001400F83D5: movsd   xmm1, cs:qword_140542338
 * 00000001400F83DD: mov     r13, rcx
 * 00000001400F83E0: movups  [rsp+98h+var_50], xmm0
 * 00000001400F83E5: movsd   [rsp+98h+var_40], xmm1
 * 00000001400F83EB: test    qword ptr [rsp+98h+var_50], rax
 * 00000001400F83F0: jz      loc_1400F8C55
 * 00000001400F83F6: mov     [rsp+98h+var_20], rdi
 * 00000001400F83FB: cli
 * 00000001400F83FC: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8403: mov     ecx, 0FFEFh
 * 00000001400F8408: and     ax, cx
 * 00000001400F840B: mov     edx, 100h
 * 00000001400F8410: mov     ecx, 0FFBFh
 * 00000001400F8415: and     ax, cx
 * 00000001400F8418: mov     ecx, 0FFFDh
 * 00000001400F841D: and     ax, cx
 * 00000001400F8420: mov     ecx, 0FFFBh
 * 00000001400F8425: and     ax, cx
 * 00000001400F8428: mov     ecx, 0FFF7h
 * 00000001400F842D: and     ax, cx
 * 00000001400F8430: mov     ecx, 0FDFFh
 * 00000001400F8435: and     ax, cx
 * 00000001400F8438: mov     ecx, 0FFDFh
 * 00000001400F843D: and     ax, cx
 * 00000001400F8440: mov     rcx, 8000000000000h
 * 00000001400F844A: mov     [rbx+6E0h], ax
 * 00000001400F8451: mov     eax, [r13+6CCh]
 * 00000001400F8458: mov     rdi, [r13+830h]
 * 00000001400F845F: and     eax, 400000h
 * 00000001400F8464: mov     [rsp+98h+arg_18], eax
 * 00000001400F846B: mov     eax, 1
 * 00000001400F8470: cmovz   rdi, rax
 * 00000001400F8474: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F847B: mov     [rsp+98h+var_58], rdi
 * 00000001400F8480: test    rcx, rax
 * 00000001400F8483: jz      short loc_1400F84A5
 * 00000001400F8485: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F848C: test    rdi, rdi
 * 00000001400F848F: jnz     short loc_1400F849B
 * 00000001400F8491: mov     ecx, 0FEFFh
 * 00000001400F8496: and     ax, cx
 * 00000001400F8499: jmp     short loc_1400F849E
 * 00000001400F849B: or      ax, dx
 * 00000001400F849E: mov     [rbx+6E0h], ax
 * 00000001400F84A5: test    byte ptr [rsp+98h+var_50], 1
 * 00000001400F84AA: jz      short loc_1400F84C8
 * 00000001400F84AC: mov     rdx, r13
 * 00000001400F84AF: mov     rcx, rbx
 * 00000001400F84B2: call    KiUpdateSpecCtrlEnhancedIBRS
 * 00000001400F84B7: sti
 * 00000001400F84B8: mov     rdi, [rsp+98h+var_20]
 * 00000001400F84BD: add     rsp, 88h
 * 00000001400F84C4: pop     r13
 * 00000001400F84C6: pop     rbx
 * 00000001400F84C7: retn
 * 00000001400F84C8: movzx   r9d, word ptr [rbx+6E4h]
 * 00000001400F84D0: mov     rax, 20000000000h
 * 00000001400F84DA: mov     [rsp+98h+arg_0], rbp
 * 00000001400F84E2: mov     [rsp+98h+var_18], rsi
 * 00000001400F84EA: mov     [rsp+98h+var_28], r12
 * 00000001400F84EF: mov     r12, qword ptr [rsp+98h+var_50]
 * 00000001400F84F4: mov     [rsp+98h+var_30], r14
 * 00000001400F84F9: mov     r14, r12
 * 00000001400F84FC: mov     [rsp+98h+var_38], r15
 * 00000001400F8501: mov     [rsp+98h+arg_8], 0
 * 00000001400F8509: mov     [rsp+98h+arg_10], 0
 * 00000001400F8511: and     r14, rax
 * 00000001400F8514: jz      short loc_1400F8548
 * 00000001400F8516: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001400F851D: test    al, 2
 * 00000001400F851F: jnz     short loc_1400F8548
 * 00000001400F8521: test    al, 1
 * 00000001400F8523: jz      short loc_1400F8548
 * 00000001400F8525: movzx   eax, byte ptr [rbx+6D4h]
 * 00000001400F852C: movzx   r9d, word ptr [rbx+6D2h]
 * 00000001400F8534: shr     al, 4
 * 00000001400F8537: and     al, 1
 * 00000001400F8539: mov     [rsp+98h+arg_10], 1
 * 00000001400F8541: mov     [rsp+98h+arg_8], al
 * 00000001400F8548: mov     rcx, 4000000000h
 * 00000001400F8552: xor     eax, eax
 * 00000001400F8554: test    rcx, r12
 * 00000001400F8557: jz      short loc_1400F856C
 * 00000001400F8559: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 00000001400F8560: jnz     short loc_1400F856C
 * 00000001400F8562: or      r9w, 4
 * 00000001400F8567: mov     eax, 4
 * 00000001400F856C: mov     [rbx+6E6h], ax
 * 00000001400F8573: mov     rsi, rbx
 * 00000001400F8576: mov     [rbx+6EAh], ax
 * 00000001400F857D: mov     r15, rbx
 * 00000001400F8580: mov     [rbx+6D0h], ax
 * 00000001400F8587: mov     rbp, rbx
 * 00000001400F858A: mov     rax, r12
 * 00000001400F858D: mov     ecx, 80h
 * 00000001400F8592: and     eax, 2000h
 * 00000001400F8597: mov     [rsp+98h+var_60], rax
 * 00000001400F859C: jz      short loc_1400F85AC
 * 00000001400F859E: or      [rbx+6E6h], cx
 * 00000001400F85A5: or      [rbx+6D0h], cx
 * 00000001400F85AC: mov     rax, 80000000000h
 * 00000001400F85B6: mov     rdx, r12
 * 00000001400F85B9: and     rdx, rax
 * 00000001400F85BC: mov     [rsp+98h+var_70], rdx
 * 00000001400F85C1: jz      short loc_1400F85D3
 * 00000001400F85C3: or      word ptr [rsi+6E6h], 2
 * 00000001400F85CB: or      word ptr [rbp+6D0h], 2
 * 00000001400F85D3: mov     rax, 40000000000000h
 * 00000001400F85DD: mov     ecx, 400h
 * 00000001400F85E2: and     r12, rax
 * 00000001400F85E5: jz      short loc_1400F85F5
 * 00000001400F85E7: or      [rsi+6E6h], cx
 * 00000001400F85EE: or      [rbp+6D0h], cx
 * 00000001400F85F5: mov     eax, [r13+6CCh]
 * 00000001400F85FC: mov     r10, qword ptr [rsp+98h+var_50]
 * 00000001400F8601: mov     rcx, [rbx+6D8h]
 * 00000001400F8608: mov     r11, r10
 * 00000001400F860B: shr     eax, 17h
 * 00000001400F860E: movzx   r8d, r10b
 * 00000001400F8612: and     eax, 1
 * 00000001400F8615: mov     [rsp+98h+var_68], rcx
 * 00000001400F861A: mov     [rsp+98h+var_78], eax
 * 00000001400F861E: mov     rax, 2000000000h
 * 00000001400F8628: and     r11, rax
 * 00000001400F862B: jnz     loc_1400F88B2
 * 00000001400F8631: test    rdi, rdi
 * 00000001400F8634: jnz     loc_1400F875B
 * 00000001400F863A: test    r10b, 2
 * 00000001400F863E: jz      short loc_1400F865F
 * 00000001400F8640: test    r10b, 40h
 * 00000001400F8644: jz      loc_1400F8733
 * 00000001400F864A: or      word ptr [rbp+6D0h], 2
 * 00000001400F8652: test    r14, r14
 * 00000001400F8655: jnz     short loc_1400F865F
 * 00000001400F8657: or      word ptr [rsi+6E6h], 2
 * 00000001400F865F: mov     eax, 0FFFBh
 * 00000001400F8664: and     [rbx+6D2h], ax
 * 00000001400F866B: movzx   eax, r8b
 * 00000001400F866F: and     al, 42h
 * 00000001400F8671: cmp     al, 42h ; 'B'
 * 00000001400F8673: jnz     short loc_1400F86B0
 * 00000001400F8675: mov     rax, 100000000h
 * 00000001400F867F: test    rax, r10
 * 00000001400F8682: jnz     short loc_1400F8691
 * 00000001400F8684: test    dword ptr [r13+820h], 40000000h
 * 00000001400F868F: jz      short loc_1400F86B0
 * 00000001400F8691: or      word ptr [r15+6EAh], 2
 * 00000001400F869A: test    r14, r14
 * 00000001400F869D: jz      short loc_1400F86B0
 * 00000001400F869F: cmp     r13, cs:PsInitialSystemProcess
 * 00000001400F86A6: jz      short loc_1400F86B0
 * 00000001400F86A8: or      word ptr [rsi+6E6h], 2
 * 00000001400F86B0: test    rdx, rdx
 * 00000001400F86B3: jz      short loc_1400F86BE
 * 00000001400F86B5: or      word ptr [r15+6EAh], 2
 * 00000001400F86BE: mov     rax, 8000000000h
 * 00000001400F86C8: test    rax, r10
 * 00000001400F86CB: jz      short loc_1400F86E3
 * 00000001400F86CD: mov     eax, [r13+824h]
 * 00000001400F86D4: bt      eax, 0Dh
 * 00000001400F86D8: jnb     short loc_1400F86E3
 * 00000001400F86DA: or      word ptr [r15+6EAh], 4
 * 00000001400F86E3: mov     r10d, 400h
 * 00000001400F86E9: test    r12, r12
 * 00000001400F86EC: jz      short loc_1400F86F6
 * 00000001400F86EE: or      [r15+6EAh], r10w
 * 00000001400F86F6: test    rcx, rcx
 * 00000001400F86F9: jz      loc_1400F8980
 * 00000001400F86FF: cmp     rcx, rdi
 * 00000001400F8702: jz      loc_1400F8980
 * 00000001400F8708: cmp     rcx, [r13+838h]
 * 00000001400F870F: jz      loc_1400F8980
 * 00000001400F8715: test    r9b, 1
 * 00000001400F8719: jz      loc_1400F8942
 * 00000001400F871F: test    r8b, 2
 * 00000001400F8723: jnz     loc_1400F88F0
 * 00000001400F8729: and     r9w, 4
 * 00000001400F872E: jmp     loc_1400F8916
 * 00000001400F8733: test    r8b, 10h
 * 00000001400F8737: jz      loc_1400F865F
 * 00000001400F873D: or      word ptr [rbp+6D0h], 1
 * 00000001400F8745: test    r14, r14
 * 00000001400F8748: jnz     loc_1400F865F
 * 00000001400F874E: or      word ptr [rsi+6E6h], 1
 * 00000001400F8756: jmp     loc_1400F865F
 * 00000001400F875B: lea     rcx, [rsp+98h+var_50]
 * 00000001400F8760: call    KiIsBranchConfusionMitigationEnabled
 * 00000001400F8765: test    eax, eax
 * 00000001400F8767: jnz     loc_1400F8832
 * 00000001400F876D: lea     rcx, [rsp+98h+var_50]
 * 00000001400F8772: call    KiIsSrsoMitigationEnabled
 * 00000001400F8777: test    eax, eax
 * 00000001400F8779: jnz     loc_1400F8832
 * 00000001400F877F: test    r8b, 10h
 * 00000001400F8783: jz      short loc_1400F87B1
 * 00000001400F8785: or      word ptr [rbp+6D0h], 1
 * 00000001400F878D: test    r14, r14
 * 00000001400F8790: jnz     short loc_1400F879A
 * 00000001400F8792: or      word ptr [rsi+6E6h], 1
 * 00000001400F879A: test    r8b, 20h
 * 00000001400F879E: jnz     loc_1400F8893
 * 00000001400F87A4: or      word ptr [rbx+6E0h], 2
 * 00000001400F87AC: jmp     loc_1400F8893
 * 00000001400F87B1: movzx   eax, r8b
 * 00000001400F87B5: and     al, 42h
 * 00000001400F87B7: cmp     al, 42h ; 'B'
 * 00000001400F87B9: jnz     short loc_1400F87D0
 * 00000001400F87BB: or      word ptr [rbp+6D0h], 2
 * 00000001400F87C3: test    r14, r14
 * 00000001400F87C6: jnz     short loc_1400F87D0
 * 00000001400F87C8: or      word ptr [rsi+6E6h], 2
 * 00000001400F87D0: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F87D7: test    r14, r14
 * 00000001400F87DA: jz      short loc_1400F8814
 * 00000001400F87DC: or      ax, 10h
 * 00000001400F87E0: mov     [rbx+6E0h], ax
 * 00000001400F87E7: test    r8b, 20h
 * 00000001400F87EB: jnz     short loc_1400F87FD
 * 00000001400F87ED: or      ax, 2
 * 00000001400F87F1: mov     [rbx+6E0h], ax
 * 00000001400F87F8: jmp     loc_1400F8893
 * 00000001400F87FD: test    r8b, 8
 * 00000001400F8801: jnz     loc_1400F8893
 * 00000001400F8807: or      ax, 40h
 * 00000001400F880B: mov     [rbx+6E0h], ax
 * 00000001400F8812: jmp     short loc_1400F8893
 * 00000001400F8814: or      ax, 8
 * 00000001400F8818: mov     [rbx+6E0h], ax
 * 00000001400F881F: test    r8b, 8
 * 00000001400F8823: jnz     short loc_1400F8893
 * 00000001400F8825: or      ax, 2
 * 00000001400F8829: mov     [rbx+6E0h], ax
 * 00000001400F8830: jmp     short loc_1400F8893
 * 00000001400F8832: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8839: or      ax, 8
 * 00000001400F883D: mov     [rbx+6E0h], ax
 * 00000001400F8844: test    r8b, 8
 * 00000001400F8848: jnz     short loc_1400F8855
 * 00000001400F884A: or      ax, 2
 * 00000001400F884E: mov     [rbx+6E0h], ax
 * 00000001400F8855: test    r8b, 2
 * 00000001400F8859: jz      short loc_1400F8893
 * 00000001400F885B: test    r8b, 40h
 * 00000001400F885F: jz      short loc_1400F8878
 * 00000001400F8861: or      word ptr [rbp+6D0h], 2
 * 00000001400F8869: test    r14, r14
 * 00000001400F886C: jnz     short loc_1400F8893
 * 00000001400F886E: or      word ptr [rsi+6E6h], 2
 * 00000001400F8876: jmp     short loc_1400F8893
 * 00000001400F8878: test    r8b, 10h
 * 00000001400F887C: jz      short loc_1400F8893
 * 00000001400F887E: or      word ptr [rbp+6D0h], 1
 * 00000001400F8886: test    r14, r14
 * 00000001400F8889: jnz     short loc_1400F8893
 * 00000001400F888B: or      word ptr [rsi+6E6h], 1
 * 00000001400F8893: test    byte ptr [rbx+6E2h], 30h
 * 00000001400F889A: mov     rcx, [rsp+98h+var_68]
 * 00000001400F889F: mov     rdx, [rsp+98h+var_70]
 * 00000001400F88A4: jz      short loc_1400F88B2
 * 00000001400F88A6: mov     eax, 200h
 * 00000001400F88AB: or      [rbx+6E0h], ax
 * 00000001400F88B2: test    rdi, rdi
 * 00000001400F88B5: jz      loc_1400F865F
 * 00000001400F88BB: mov     rax, 8000000000h
 * 00000001400F88C5: test    rax, r10
 * 00000001400F88C8: jz      loc_1400F865F
 * 00000001400F88CE: or      word ptr [rbp+6D0h], 4
 * 00000001400F88D6: or      word ptr [rbx+6D2h], 4
 * 00000001400F88DE: or      word ptr [rsi+6E6h], 4
 * 00000001400F88E6: or      r9w, 4
 * 00000001400F88EB: jmp     loc_1400F866B
 * 00000001400F88F0: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F88F7: test    al, 4
 * 00000001400F88F9: jnz     short loc_1400F8910
 * 00000001400F88FB: test    r14, r14
 * 00000001400F88FE: jz      short loc_1400F892A
 * 00000001400F8900: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001400F8907: test    al, 1
 * 00000001400F8909: jnz     short loc_1400F892A
 * 00000001400F890B: and     r9w, 4
 * 00000001400F8910: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 00000001400F8916: test    r9b, 1
 * 00000001400F891A: jnz     short loc_1400F895D
 * 00000001400F891C: mov     al, 1
 * 00000001400F891E: movzx   ecx, al
 * 00000001400F8921: mov     [rsp+98h+arg_10], al
 * 00000001400F8928: jmp     short loc_1400F8988
 * 00000001400F892A: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 00000001400F8930: test    r8b, 40h
 * 00000001400F8934: jz      short loc_1400F8916
 * 00000001400F8936: and     r9w, 4
 * 00000001400F893B: or      r9w, 2
 * 00000001400F8940: jmp     short loc_1400F8916
 * 00000001400F8942: test    r11, r11
 * 00000001400F8945: jnz     short loc_1400F895D
 * 00000001400F8947: test    r8b, 10h
 * 00000001400F894B: jnz     short loc_1400F895D
 * 00000001400F894D: test    r14, r14
 * 00000001400F8950: jz      short loc_1400F8980
 * 00000001400F8952: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001400F8959: test    al, 2
 * 00000001400F895B: jnz     short loc_1400F8980
 * 00000001400F895D: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8964: or      ax, 4
 * 00000001400F8968: mov     [rbx+6E0h], ax
 * 00000001400F896F: test    r8b, 8
 * 00000001400F8973: jnz     short loc_1400F8980
 * 00000001400F8975: or      ax, 20h
 * 00000001400F8979: mov     [rbx+6E0h], ax
 * 00000001400F8980: movzx   eax, [rsp+98h+arg_8]
 * 00000001400F8988: mov     edx, 80h
 * 00000001400F898D: movzx   ecx, r9w
 * 00000001400F8991: or      cx, dx
 * 00000001400F8994: cmp     [rsp+98h+var_60], 0
 * 00000001400F899A: cmovz   cx, r9w
 * 00000001400F899F: movzx   edx, cx
 * 00000001400F89A2: or      dx, 2
 * 00000001400F89A6: cmp     [rsp+98h+var_70], 0
 * 00000001400F89AC: cmovz   dx, cx
 * 00000001400F89B0: movzx   edi, dx
 * 00000001400F89B3: or      di, r10w
 * 00000001400F89B7: test    r12, r12
 * 00000001400F89BA: cmovz   di, dx
 * 00000001400F89BE: test    al, al
 * 00000001400F89C0: jz      short loc_1400F8A17
 * 00000001400F89C2: mov     eax, 1
 * 00000001400F89C7: xor     edx, edx
 * 00000001400F89C9: mov     ecx, 49h ; 'I'
 * 00000001400F89CE: wrmsr
 * 00000001400F89D0: test    r8b, 8
 * 00000001400F89D4: jnz     short loc_1400F89DB
 * 00000001400F89D6: call    KiFlushCurrentRsb
 * 00000001400F89DB: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F89E2: mov     ecx, 0FFFBh
 * 00000001400F89E7: and     ax, cx
 * 00000001400F89EA: mov     qword ptr [rbx+6D8h], 0
 * 00000001400F89F5: mov     ecx, 0FFDFh
 * 00000001400F89FA: mov     [rbx+6D2h], di
 * 00000001400F8A01: and     ax, cx
 * 00000001400F8A04: mov     [rbx+6E0h], ax
 * 00000001400F8A0B: mov     eax, 0FFAFh
 * 00000001400F8A10: and     [rbx+6D4h], ax
 * 00000001400F8A17: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8A1E: movzx   edx, di
 * 00000001400F8A21: test    al, 4
 * 00000001400F8A23: jz      loc_1400F8BE8
 * 00000001400F8A29: mov     rdx, [rsp+98h+var_58]
 * 00000001400F8A2E: mov     r12d, 2
 * 00000001400F8A34: mov     rax, [rbx+2DB0h]
 * 00000001400F8A3B: cmp     [rsp+98h+var_68], rdx
 * 00000001400F8A40: jz      short loc_1400F8A4D
 * 00000001400F8A42: lock or [rbx+6ECh], r12w
 * 00000001400F8A4B: jmp     short loc_1400F8A97
 * 00000001400F8A4D: movzx   eax, word ptr [rax+6ECh]
 * 00000001400F8A54: movzx   ecx, word ptr [r15+6EAh]
 * 00000001400F8A5C: test    al, 1
 * 00000001400F8A5E: jnz     short loc_1400F8A7B
 * 00000001400F8A60: or      cx, r12w
 * 00000001400F8A64: mov     [r15+6EAh], cx
 * 00000001400F8A6C: test    r14, r14
 * 00000001400F8A6F: jz      short loc_1400F8A97
 * 00000001400F8A71: or      [rsi+6E6h], r12w
 * 00000001400F8A79: jmp     short loc_1400F8A97
 * 00000001400F8A7B: mov     eax, 0FFFDh
 * 00000001400F8A80: and     cx, ax
 * 00000001400F8A83: mov     [r15+6EAh], cx
 * 00000001400F8A8B: test    r14, r14
 * 00000001400F8A8E: jz      short loc_1400F8A97
 * 00000001400F8A90: and     [rsi+6E6h], ax
 * 00000001400F8A97: test    rdx, rdx
 * 00000001400F8A9A: jnz     loc_1400F8B22
 * 00000001400F8AA0: mov     rcx, r13
 * 00000001400F8AA3: call    KiUpdateStibpPairing
 * 00000001400F8AA8: movzx   ecx, word ptr [rbx+6D2h]
 * 00000001400F8AAF: mov     r9d, eax
 * 00000001400F8AB2: movzx   r8d, word ptr [rbp+6D0h]
 * 00000001400F8ABA: mov     eax, 0FFFCh
 * 00000001400F8ABF: and     cx, ax
 * 00000001400F8AC2: and     r8w, 3
 * 00000001400F8AC7: or      cx, r8w
 * 00000001400F8ACB: movzx   edx, di
 * 00000001400F8ACE: and     dx, ax
 * 00000001400F8AD1: mov     [rbx+6D2h], cx
 * 00000001400F8AD8: test    r14, r14
 * 00000001400F8ADB: jz      short loc_1400F8AEE
 * 00000001400F8ADD: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001400F8AE4: test    al, 1
 * 00000001400F8AE6: jz      short loc_1400F8AEE
 * 00000001400F8AE8: neg     r8w
 * 00000001400F8AEC: jmp     short loc_1400F8AF9
 * 00000001400F8AEE: movzx   eax, byte ptr [rsi+6E6h]
 * 00000001400F8AF5: and     al, 3
 * 00000001400F8AF7: neg     al
 * 00000001400F8AF9: sbb     ax, ax
 * 00000001400F8AFC: mov     r8b, 1
 * 00000001400F8AFF: and     ax, r12w
 * 00000001400F8B03: or      dx, ax
 * 00000001400F8B06: cmp     [rsp+98h+arg_18], 0
 * 00000001400F8B0E: jnz     loc_1400F8BF4
 * 00000001400F8B14: lock or [rbx+6ECh], r12w
 * 00000001400F8B1D: jmp     loc_1400F8BF4
 * 00000001400F8B22: cmp     [rsp+98h+var_78], 0
 * 00000001400F8B27: movzx   edx, di
 * 00000001400F8B2A: jz      loc_1400F8BE8
 * 00000001400F8B30: prefetchw byte ptr [rbx+6ECh]
 * 00000001400F8B37: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8B3E: mov     edx, 100h
 * 00000001400F8B43: nop     dword ptr [rax+00h]
 * 00000001400F8B47: nop     word ptr [rax+rax+00000000h]
 * 00000001400F8B50: movzx   ecx, ax
 * 00000001400F8B53: or      cx, dx
 * 00000001400F8B56: lock cmpxchg [rbx+6ECh], cx
 * 00000001400F8B5F: jnz     short loc_1400F8B50
 * 00000001400F8B61: movzx   ecx, ax
 * 00000001400F8B64: mov     rdx, 20000000000h
 * 00000001400F8B6E: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8B75: and     ecx, 1
 * 00000001400F8B78: test    rdx, rax
 * 00000001400F8B7B: jz      short loc_1400F8BB7
 * 00000001400F8B7D: movzx   eax, word ptr [rbp+6D0h]
 * 00000001400F8B84: test    al, 3
 * 00000001400F8B86: jnz     short loc_1400F8B93
 * 00000001400F8B88: or      ax, r12w
 * 00000001400F8B8C: mov     [rbp+6D0h], ax
 * 00000001400F8B93: movzx   eax, word ptr [rbx+6D2h]
 * 00000001400F8B9A: test    al, 3
 * 00000001400F8B9C: jnz     short loc_1400F8BA9
 * 00000001400F8B9E: or      ax, r12w
 * 00000001400F8BA2: mov     [rbx+6D2h], ax
 * 00000001400F8BA9: test    byte ptr [rbx+6D6h], 1
 * 00000001400F8BB0: movzx   edx, di
 * 00000001400F8BB3: jz      short loc_1400F8BDA
 * 00000001400F8BB5: jmp     short loc_1400F8BCD
 * 00000001400F8BB7: movzx   eax, word ptr [rsi+6E6h]
 * 00000001400F8BBE: test    al, 3
 * 00000001400F8BC0: jnz     short loc_1400F8BCD
 * 00000001400F8BC2: or      ax, r12w
 * 00000001400F8BC6: mov     [rsi+6E6h], ax
 * 00000001400F8BCD: movzx   edx, di
 * 00000001400F8BD0: test    dil, 3
 * 00000001400F8BD4: jnz     short loc_1400F8BDA
 * 00000001400F8BD6: or      dx, r12w
 * 00000001400F8BDA: lock or [rbx+6ECh], r12w
 * 00000001400F8BE3: mov     r9d, ecx
 * 00000001400F8BE6: jmp     short loc_1400F8BEB
 * 00000001400F8BE8: xor     r9d, r9d
 * 00000001400F8BEB: movzx   r8d, [rsp+98h+arg_10]
 * 00000001400F8BF4: mov     r15, [rsp+98h+var_38]
 * 00000001400F8BF9: mov     r14, [rsp+98h+var_30]
 * 00000001400F8BFE: mov     r12, [rsp+98h+var_28]
 * 00000001400F8C03: mov     rsi, [rsp+98h+var_18]
 * 00000001400F8C0B: mov     rbp, [rsp+98h+arg_0]
 * 00000001400F8C13: cmp     dx, [rbx+6E4h]
 * 00000001400F8C1A: jz      short loc_1400F8C33
 * 00000001400F8C1C: mov     [rbx+6E4h], dx
 * 00000001400F8C23: mov     ecx, 48h ; 'H'
 * 00000001400F8C28: movzx   edx, dx
 * 00000001400F8C2B: mov     eax, edx
 * 00000001400F8C2D: shr     rdx, 20h
 * 00000001400F8C31: wrmsr
 * 00000001400F8C33: test    r8b, r8b
 * 00000001400F8C36: jz      short loc_1400F8C3F
 * 00000001400F8C38: or      byte ptr [rbx+6D6h], 2
 * 00000001400F8C3F: lfence
 * 00000001400F8C42: sti
 * 00000001400F8C43: test    r9d, r9d
 * 00000001400F8C46: jz      short loc_1400F8C50
 * 00000001400F8C48: mov     rcx, rbx
 * 00000001400F8C4B: call    KiSynchronizeStibpPairing
 * 00000001400F8C50: mov     rdi, [rsp+98h+var_20]
 * 00000001400F8C55: add     rsp, 88h
 * 00000001400F8C5C: pop     r13
 * 00000001400F8C5E: pop     rbx
 * 00000001400F8C5F: retn
 */
