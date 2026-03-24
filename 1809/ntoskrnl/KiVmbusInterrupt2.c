/*
 * XREFs of KiVmbusInterrupt2 @ 0x1401C1A30
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x14032F100 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x1401C1A30 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293C90 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1401C1A30
 * Reason: Hex-Rays returned no pseudocode for 0x1401C1A30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C1A30: push    3
 * 00000001401C1A32: push    rbp
 * 00000001401C1A33: push    rsi
 * 00000001401C1A34: sub     rsp, 150h
 * 00000001401C1A3B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C1A43: mov     byte ptr [rbp-55h], 0
 * 00000001401C1A47: mov     [rbp-50h], rax
 * 00000001401C1A4B: mov     [rbp-48h], rcx
 * 00000001401C1A4F: mov     [rbp-40h], rdx
 * 00000001401C1A53: mov     [rbp-38h], r8
 * 00000001401C1A57: mov     [rbp-30h], r9
 * 00000001401C1A5B: mov     [rbp-28h], r10
 * 00000001401C1A5F: mov     [rbp-20h], r11
 * 00000001401C1A63: test    byte ptr [rbp+0F0h], 1
 * 00000001401C1A6A: jnz     short loc_1401C1A9B
 * 00000001401C1A6C: lfence
 * 00000001401C1A6F: test    word ptr gs:860h, 1
 * 00000001401C1A7A: jnz     short loc_1401C1A84
 * 00000001401C1A7C: lfence
 * 00000001401C1A7F: jmp     loc_1401C1CA4
 * 00000001401C1A84: movzx   eax, word ptr gs:864h
 * 00000001401C1A8D: mov     ecx, 48h ; 'H'
 * 00000001401C1A92: xor     edx, edx
 * 00000001401C1A94: wrmsr
 * 00000001401C1A96: jmp     loc_1401C1CA4
 * 00000001401C1A9B: test    cs:KiKvaShadow, 1
 * 00000001401C1AA2: jnz     short loc_1401C1AA7
 * 00000001401C1AA4: swapgs
 * 00000001401C1AA7: lfence
 * 00000001401C1AAA: mov     r10, gs:188h
 * 00000001401C1AB3: mov     rcx, gs:188h
 * 00000001401C1ABC: mov     rcx, [rcx+220h]
 * 00000001401C1AC3: mov     rcx, [rcx+830h]
 * 00000001401C1ACA: mov     gs:858h, rcx
 * 00000001401C1AD3: mov     cx, gs:850h
 * 00000001401C1ADC: mov     gs:852h, cx
 * 00000001401C1AE5: mov     cx, gs:860h
 * 00000001401C1AEE: mov     gs:854h, cx
 * 00000001401C1AF7: movzx   eax, word ptr gs:866h
 * 00000001401C1B00: cmp     gs:864h, ax
 * 00000001401C1B09: jz      short loc_1401C1B1D
 * 00000001401C1B0B: mov     gs:864h, ax
 * 00000001401C1B14: mov     ecx, 48h ; 'H'
 * 00000001401C1B19: xor     edx, edx
 * 00000001401C1B1B: wrmsr
 * 00000001401C1B1D: movzx   edx, word ptr gs:860h
 * 00000001401C1B26: test    edx, 8
 * 00000001401C1B2C: jz      short loc_1401C1B45
 * 00000001401C1B2E: mov     eax, 1
 * 00000001401C1B33: xor     edx, edx
 * 00000001401C1B35: mov     ecx, 49h ; 'I'
 * 00000001401C1B3A: wrmsr
 * 00000001401C1B3C: movzx   edx, word ptr gs:860h
 * 00000001401C1B45: test    edx, 2
 * 00000001401C1B4B: jz      loc_1401C1C76
 * 00000001401C1B51: call    loc_1401C1C64
 * 00000001401C1B56: add     rsp, 8
 * 00000001401C1B5A: call    loc_1401C1C6D
 * 00000001401C1B5F: add     rsp, 8
 * 00000001401C1B63: call    loc_1401C1B56
 * 00000001401C1B68: add     rsp, 8
 * 00000001401C1B6C: call    loc_1401C1B5F
 * 00000001401C1B71: add     rsp, 8
 * 00000001401C1B75: call    loc_1401C1B68
 * 00000001401C1B7A: add     rsp, 8
 * 00000001401C1B7E: call    loc_1401C1B71
 * 00000001401C1B83: add     rsp, 8
 * 00000001401C1B87: call    loc_1401C1B7A
 * 00000001401C1B8C: add     rsp, 8
 * 00000001401C1B90: call    loc_1401C1B83
 * 00000001401C1B95: add     rsp, 8
 * 00000001401C1B99: call    loc_1401C1B8C
 * 00000001401C1B9E: add     rsp, 8
 * 00000001401C1BA2: call    loc_1401C1B95
 * 00000001401C1BA7: add     rsp, 8
 * 00000001401C1BAB: call    loc_1401C1B9E
 * 00000001401C1BB0: add     rsp, 8
 * 00000001401C1BB4: call    loc_1401C1BA7
 * 00000001401C1BB9: add     rsp, 8
 * 00000001401C1BBD: call    loc_1401C1BB0
 * 00000001401C1BC2: add     rsp, 8
 * 00000001401C1BC6: call    loc_1401C1BB9
 * 00000001401C1BCB: add     rsp, 8
 * 00000001401C1BCF: call    loc_1401C1BC2
 * 00000001401C1BD4: add     rsp, 8
 * 00000001401C1BD8: call    loc_1401C1BCB
 * 00000001401C1BDD: add     rsp, 8
 * 00000001401C1BE1: call    loc_1401C1BD4
 * 00000001401C1BE6: add     rsp, 8
 * 00000001401C1BEA: call    loc_1401C1BDD
 * 00000001401C1BEF: add     rsp, 8
 * 00000001401C1BF3: call    loc_1401C1BE6
 * 00000001401C1BF8: add     rsp, 8
 * 00000001401C1BFC: call    loc_1401C1BEF
 * 00000001401C1C01: add     rsp, 8
 * 00000001401C1C05: call    loc_1401C1BF8
 * 00000001401C1C0A: add     rsp, 8
 * 00000001401C1C0E: call    loc_1401C1C01
 * 00000001401C1C13: add     rsp, 8
 * 00000001401C1C17: call    loc_1401C1C0A
 * 00000001401C1C1C: add     rsp, 8
 * 00000001401C1C20: call    loc_1401C1C13
 * 00000001401C1C25: add     rsp, 8
 * 00000001401C1C29: call    loc_1401C1C1C
 * 00000001401C1C2E: add     rsp, 8
 * 00000001401C1C32: call    loc_1401C1C25
 * 00000001401C1C37: add     rsp, 8
 * 00000001401C1C3B: call    loc_1401C1C2E
 * 00000001401C1C40: add     rsp, 8
 * 00000001401C1C44: call    loc_1401C1C37
 * 00000001401C1C49: add     rsp, 8
 * 00000001401C1C4D: call    loc_1401C1C40
 * 00000001401C1C52: add     rsp, 8
 * 00000001401C1C56: call    loc_1401C1C49
 * 00000001401C1C5B: add     rsp, 8
 * 00000001401C1C5F: call    loc_1401C1C52
 * 00000001401C1C64: add     rsp, 8
 * 00000001401C1C68: call    loc_1401C1C5B
 * 00000001401C1C6D: add     rsp, 8
 * 00000001401C1C71: mov     eax, 0DADAh
 * 00000001401C1C76: test    edx, 200h
 * 00000001401C1C7C: jz      short loc_1401C1C83
 * 00000001401C1C7E: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C1C83: lfence
 * 00000001401C1C86: mov     byte ptr gs:856h, 0
 * 00000001401C1C8F: test    byte ptr [r10+3], 3
 * 00000001401C1C94: mov     word ptr [rbp+80h], 0
 * 00000001401C1C9D: jz      short loc_1401C1CA4
 * 00000001401C1C9F: call    KiSaveDebugRegisterState
 * 00000001401C1CA4: cld
 * 00000001401C1CA5: stmxcsr dword ptr [rbp-54h]
 * 00000001401C1CA9: ldmxcsr dword ptr gs:180h
 * 00000001401C1CB2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C1CB6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C1CBA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C1CBE: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C1CC2: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C1CC6: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C1CCA: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C1CD3: jz      short loc_1401C1CDA
 * 00000001401C1CD5: call    KeWakeProcessor
 * 00000001401C1CDA: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C1CE1: cmp     rax, [rbp+0E8h]
 * 00000001401C1CE8: jnb     short loc_1401C1D03
 * 00000001401C1CEA: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1CF1: cmp     rax, [rbp+0E8h]
 * 00000001401C1CF8: jb      short loc_1401C1D03
 * 00000001401C1CFA: lea     rcx, [rbp-80h]
 * 00000001401C1CFE: call    KiCheckForSListAddress
 * 00000001401C1D03: xor     esi, esi
 * 00000001401C1D05: inc     dword ptr gs:5D00h
 * 00000001401C1D0D: jmp     KiVmbusInterruptDispatch
 */
