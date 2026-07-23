/*
 * XREFs of KxDebugTrapOrFault @ 0x1401C8400
 * Callers:
 *     KiDebugTrapOrFault @ 0x1401C8340 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1401C8400 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1401C8400
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8400: sub     rsp, 8
 * 00000001401C8404: push    rbp
 * 00000001401C8405: sub     rsp, 158h
 * 00000001401C840C: lea     rbp, [rsp+80h]
 * 00000001401C8414: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C8418: mov     [rbp+0E8h+var_138], rax
 * 00000001401C841C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C8420: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C8424: mov     [rbp+0E8h+var_120], r8
 * 00000001401C8428: mov     [rbp+0E8h+var_118], r9
 * 00000001401C842C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C8430: mov     [rbp+0E8h+var_108], r11
 * 00000001401C8434: test    [rbp+0E8h+arg_0], 1
 * 00000001401C843B: jnz     short loc_1401C846C
 * 00000001401C843D: lfence
 * 00000001401C8440: test    word ptr gs:860h, 1
 * 00000001401C844B: jnz     short loc_1401C8455
 * 00000001401C844D: lfence
 * 00000001401C8450: jmp     loc_1401C86BE
 * 00000001401C8455: movzx   eax, word ptr gs:864h
 * 00000001401C845E: mov     ecx, 48h ; 'H'
 * 00000001401C8463: xor     edx, edx
 * 00000001401C8465: wrmsr
 * 00000001401C8467: jmp     loc_1401C86BE
 * 00000001401C846C: test    cs:KiKvaShadow, 1
 * 00000001401C8473: jnz     short loc_1401C8478
 * 00000001401C8475: swapgs
 * 00000001401C8478: lfence
 * 00000001401C847B: mov     r10, gs:188h
 * 00000001401C8484: mov     rcx, gs:188h
 * 00000001401C848D: mov     rcx, [rcx+220h]
 * 00000001401C8494: mov     rcx, [rcx+830h]
 * 00000001401C849B: mov     gs:858h, rcx
 * 00000001401C84A4: mov     cx, gs:850h
 * 00000001401C84AD: mov     gs:852h, cx
 * 00000001401C84B6: mov     cx, gs:860h
 * 00000001401C84BF: mov     gs:854h, cx
 * 00000001401C84C8: movzx   eax, word ptr gs:866h
 * 00000001401C84D1: cmp     gs:864h, ax
 * 00000001401C84DA: jz      short loc_1401C84EE
 * 00000001401C84DC: mov     gs:864h, ax
 * 00000001401C84E5: mov     ecx, 48h ; 'H'
 * 00000001401C84EA: xor     edx, edx
 * 00000001401C84EC: wrmsr
 * 00000001401C84EE: movzx   edx, word ptr gs:860h
 * 00000001401C84F7: test    edx, 8
 * 00000001401C84FD: jz      short loc_1401C8516
 * 00000001401C84FF: mov     eax, 1
 * 00000001401C8504: xor     edx, edx
 * 00000001401C8506: mov     ecx, 49h ; 'I'
 * 00000001401C850B: wrmsr
 * 00000001401C850D: movzx   edx, word ptr gs:860h
 * 00000001401C8516: test    edx, 2
 * 00000001401C851C: jz      loc_1401C8647
 * 00000001401C8522: call    loc_1401C8635
 * 00000001401C8527: add     rsp, 8
 * 00000001401C852B: call    loc_1401C863E
 * 00000001401C8530: add     rsp, 8
 * 00000001401C8534: call    loc_1401C8527
 * 00000001401C8539: add     rsp, 8
 * 00000001401C853D: call    loc_1401C8530
 * 00000001401C8542: add     rsp, 8
 * 00000001401C8546: call    loc_1401C8539
 * 00000001401C854B: add     rsp, 8
 * 00000001401C854F: call    loc_1401C8542
 * 00000001401C8554: add     rsp, 8
 * 00000001401C8558: call    loc_1401C854B
 * 00000001401C855D: add     rsp, 8
 * 00000001401C8561: call    loc_1401C8554
 * 00000001401C8566: add     rsp, 8
 * 00000001401C856A: call    loc_1401C855D
 * 00000001401C856F: add     rsp, 8
 * 00000001401C8573: call    loc_1401C8566
 * 00000001401C8578: add     rsp, 8
 * 00000001401C857C: call    loc_1401C856F
 * 00000001401C8581: add     rsp, 8
 * 00000001401C8585: call    loc_1401C8578
 * 00000001401C858A: add     rsp, 8
 * 00000001401C858E: call    loc_1401C8581
 * 00000001401C8593: add     rsp, 8
 * 00000001401C8597: call    loc_1401C858A
 * 00000001401C859C: add     rsp, 8
 * 00000001401C85A0: call    loc_1401C8593
 * 00000001401C85A5: add     rsp, 8
 * 00000001401C85A9: call    loc_1401C859C
 * 00000001401C85AE: add     rsp, 8
 * 00000001401C85B2: call    loc_1401C85A5
 * 00000001401C85B7: add     rsp, 8
 * 00000001401C85BB: call    loc_1401C85AE
 * 00000001401C85C0: add     rsp, 8
 * 00000001401C85C4: call    loc_1401C85B7
 * 00000001401C85C9: add     rsp, 8
 * 00000001401C85CD: call    loc_1401C85C0
 * 00000001401C85D2: add     rsp, 8
 * 00000001401C85D6: call    loc_1401C85C9
 * 00000001401C85DB: add     rsp, 8
 * 00000001401C85DF: call    loc_1401C85D2
 * 00000001401C85E4: add     rsp, 8
 * 00000001401C85E8: call    loc_1401C85DB
 * 00000001401C85ED: add     rsp, 8
 * 00000001401C85F1: call    loc_1401C85E4
 * 00000001401C85F6: add     rsp, 8
 * 00000001401C85FA: call    loc_1401C85ED
 * 00000001401C85FF: add     rsp, 8
 * 00000001401C8603: call    loc_1401C85F6
 * 00000001401C8608: add     rsp, 8
 * 00000001401C860C: call    loc_1401C85FF
 * 00000001401C8611: add     rsp, 8
 * 00000001401C8615: call    loc_1401C8608
 * 00000001401C861A: add     rsp, 8
 * 00000001401C861E: call    loc_1401C8611
 * 00000001401C8623: add     rsp, 8
 * 00000001401C8627: call    loc_1401C861A
 * 00000001401C862C: add     rsp, 8
 * 00000001401C8630: call    loc_1401C8623
 * 00000001401C8635: add     rsp, 8
 * 00000001401C8639: call    loc_1401C862C
 * 00000001401C863E: add     rsp, 8
 * 00000001401C8642: mov     eax, 0DADAh
 * 00000001401C8647: test    edx, 200h
 * 00000001401C864D: jz      short loc_1401C8654
 * 00000001401C864F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C8654: lfence
 * 00000001401C8657: mov     byte ptr gs:856h, 0
 * 00000001401C8660: test    byte ptr [r10+3], 80h
 * 00000001401C8665: jz      short loc_1401C86A9
 * 00000001401C8667: mov     ecx, 0C0000102h
 * 00000001401C866C: rdmsr
 * 00000001401C866E: shl     rdx, 20h
 * 00000001401C8672: or      rax, rdx
 * 00000001401C8675: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C867C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C8684: cmp     [r10+0F0h], rax
 * 00000001401C868B: jz      short loc_1401C86A9
 * 00000001401C868D: mov     rdx, [r10+1F0h]
 * 00000001401C8694: bts     dword ptr [r10+74h], 8
 * 00000001401C869A: dec     word ptr [r10+1E6h]
 * 00000001401C86A2: mov     [rdx+80h], rax
 * 00000001401C86A9: test    byte ptr [r10+3], 3
 * 00000001401C86AE: mov     [rbp+0E8h+var_68], 0
 * 00000001401C86B7: jz      short loc_1401C86BE
 * 00000001401C86B9: call    KiSaveDebugRegisterState
 * 00000001401C86BE: cld
 * 00000001401C86BF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C86C3: ldmxcsr dword ptr gs:180h
 * 00000001401C86CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C86D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C86D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C86D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C86DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C86E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C86E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C86EE: jz      short loc_1401C86F1
 * 00000001401C86F0: sti
 * 00000001401C86F1: test    cs:KiCpuTracingFlags, 2
 * 00000001401C86FB: jz      short loc_1401C8710
 * 00000001401C86FD: mov     ecx, 1D9h
 * 00000001401C8702: rdmsr
 * 00000001401C8704: or      eax, 1
 * 00000001401C8707: wrmsr
 * 00000001401C8709: xor     edx, edx
 * 00000001401C870B: jmp     loc_1401C87DF
 * 00000001401C8710: xor     edx, edx
 * 00000001401C8712: test    [rbp+0E8h+arg_8], 100h
 * 00000001401C871C: jz      loc_1401C87DF
 * 00000001401C8722: test    byte ptr gs:6422h, 2
 * 00000001401C872B: jz      loc_1401C87DF
 * 00000001401C8731: test    [rbp+0E8h+arg_0], 1
 * 00000001401C8738: jnz     short loc_1401C8791
 * 00000001401C873A: mov     rax, dr7
 * 00000001401C873D: test    ax, 200h
 * 00000001401C8741: jz      loc_1401C87DF
 * 00000001401C8747: test    ax, 100h
 * 00000001401C874B: jz      loc_1401C87DF
 * 00000001401C8751: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001401C8758: or      r8d, r8d
 * 00000001401C875B: jz      short loc_1401C8765
 * 00000001401C875D: mov     ecx, r8d
 * 00000001401C8760: rdmsr
 * 00000001401C8762: mov     r8d, eax
 * 00000001401C8765: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001401C876B: add     ecx, r8d
 * 00000001401C876E: rdmsr
 * 00000001401C8770: mov     r9d, eax
 * 00000001401C8773: shl     rdx, 20h
 * 00000001401C8777: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001401C877D: or      r9, rdx
 * 00000001401C8780: add     ecx, r8d
 * 00000001401C8783: rdmsr
 * 00000001401C8785: mov     r10d, eax
 * 00000001401C8788: shl     rdx, 20h
 * 00000001401C878C: or      r10, rdx
 * 00000001401C878F: jmp     short loc_1401C87DA
 * 00000001401C8791: test    [rbp+0E8h+var_68], 200h
 * 00000001401C879A: jz      short loc_1401C87DF
 * 00000001401C879C: test    [rbp+0E8h+var_68], 100h
 * 00000001401C87A5: jz      short loc_1401C87DF
 * 00000001401C87A7: and     [rbp+0E8h+var_40], 0
 * 00000001401C87AF: and     [rbp+0E8h+var_48], 0
 * 00000001401C87B7: mov     rcx, cs:MmUserProbeAddress
 * 00000001401C87BE: mov     r9, [rbp+0E8h+var_50]
 * 00000001401C87C5: cmp     r9, rcx
 * 00000001401C87C8: cmovnb  r9, rcx
 * 00000001401C87CC: mov     r10, [rbp+0E8h+var_58]
 * 00000001401C87D3: cmp     r10, rcx
 * 00000001401C87D6: cmovnb  r10, rcx
 * 00000001401C87DA: mov     edx, 2
 * 00000001401C87DF: mov     ecx, 80000004h
 * 00000001401C87E4: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001401C87EE: mov     r8, [rbp+0E8h]
 * 00000001401C87F5: call    KiExceptionDispatch
 * 00000001401C87FA: nop
 * 00000001401C87FB: retn
 */
