/*
 * XREFs of KiVmbusInterrupt2 @ 0x1401C1B90
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140330100 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x1401C1B90 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1401C1B90
 * Reason: Hex-Rays returned no pseudocode for 0x1401C1B90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C1B90: push    3
 * 00000001401C1B92: push    rbp
 * 00000001401C1B93: push    rsi
 * 00000001401C1B94: sub     rsp, 150h
 * 00000001401C1B9B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C1BA3: mov     byte ptr [rbp-55h], 0
 * 00000001401C1BA7: mov     [rbp-50h], rax
 * 00000001401C1BAB: mov     [rbp-48h], rcx
 * 00000001401C1BAF: mov     [rbp-40h], rdx
 * 00000001401C1BB3: mov     [rbp-38h], r8
 * 00000001401C1BB7: mov     [rbp-30h], r9
 * 00000001401C1BBB: mov     [rbp-28h], r10
 * 00000001401C1BBF: mov     [rbp-20h], r11
 * 00000001401C1BC3: test    byte ptr [rbp+0F0h], 1
 * 00000001401C1BCA: jnz     short loc_1401C1BFB
 * 00000001401C1BCC: lfence
 * 00000001401C1BCF: test    word ptr gs:860h, 1
 * 00000001401C1BDA: jnz     short loc_1401C1BE4
 * 00000001401C1BDC: lfence
 * 00000001401C1BDF: jmp     loc_1401C1E04
 * 00000001401C1BE4: movzx   eax, word ptr gs:864h
 * 00000001401C1BED: mov     ecx, 48h ; 'H'
 * 00000001401C1BF2: xor     edx, edx
 * 00000001401C1BF4: wrmsr
 * 00000001401C1BF6: jmp     loc_1401C1E04
 * 00000001401C1BFB: test    cs:KiKvaShadow, 1
 * 00000001401C1C02: jnz     short loc_1401C1C07
 * 00000001401C1C04: swapgs
 * 00000001401C1C07: lfence
 * 00000001401C1C0A: mov     r10, gs:188h
 * 00000001401C1C13: mov     rcx, gs:188h
 * 00000001401C1C1C: mov     rcx, [rcx+220h]
 * 00000001401C1C23: mov     rcx, [rcx+830h]
 * 00000001401C1C2A: mov     gs:858h, rcx
 * 00000001401C1C33: mov     cx, gs:850h
 * 00000001401C1C3C: mov     gs:852h, cx
 * 00000001401C1C45: mov     cx, gs:860h
 * 00000001401C1C4E: mov     gs:854h, cx
 * 00000001401C1C57: movzx   eax, word ptr gs:866h
 * 00000001401C1C60: cmp     gs:864h, ax
 * 00000001401C1C69: jz      short loc_1401C1C7D
 * 00000001401C1C6B: mov     gs:864h, ax
 * 00000001401C1C74: mov     ecx, 48h ; 'H'
 * 00000001401C1C79: xor     edx, edx
 * 00000001401C1C7B: wrmsr
 * 00000001401C1C7D: movzx   edx, word ptr gs:860h
 * 00000001401C1C86: test    edx, 8
 * 00000001401C1C8C: jz      short loc_1401C1CA5
 * 00000001401C1C8E: mov     eax, 1
 * 00000001401C1C93: xor     edx, edx
 * 00000001401C1C95: mov     ecx, 49h ; 'I'
 * 00000001401C1C9A: wrmsr
 * 00000001401C1C9C: movzx   edx, word ptr gs:860h
 * 00000001401C1CA5: test    edx, 2
 * 00000001401C1CAB: jz      loc_1401C1DD6
 * 00000001401C1CB1: call    loc_1401C1DC4
 * 00000001401C1CB6: add     rsp, 8
 * 00000001401C1CBA: call    loc_1401C1DCD
 * 00000001401C1CBF: add     rsp, 8
 * 00000001401C1CC3: call    loc_1401C1CB6
 * 00000001401C1CC8: add     rsp, 8
 * 00000001401C1CCC: call    loc_1401C1CBF
 * 00000001401C1CD1: add     rsp, 8
 * 00000001401C1CD5: call    loc_1401C1CC8
 * 00000001401C1CDA: add     rsp, 8
 * 00000001401C1CDE: call    loc_1401C1CD1
 * 00000001401C1CE3: add     rsp, 8
 * 00000001401C1CE7: call    loc_1401C1CDA
 * 00000001401C1CEC: add     rsp, 8
 * 00000001401C1CF0: call    loc_1401C1CE3
 * 00000001401C1CF5: add     rsp, 8
 * 00000001401C1CF9: call    loc_1401C1CEC
 * 00000001401C1CFE: add     rsp, 8
 * 00000001401C1D02: call    loc_1401C1CF5
 * 00000001401C1D07: add     rsp, 8
 * 00000001401C1D0B: call    loc_1401C1CFE
 * 00000001401C1D10: add     rsp, 8
 * 00000001401C1D14: call    loc_1401C1D07
 * 00000001401C1D19: add     rsp, 8
 * 00000001401C1D1D: call    loc_1401C1D10
 * 00000001401C1D22: add     rsp, 8
 * 00000001401C1D26: call    loc_1401C1D19
 * 00000001401C1D2B: add     rsp, 8
 * 00000001401C1D2F: call    loc_1401C1D22
 * 00000001401C1D34: add     rsp, 8
 * 00000001401C1D38: call    loc_1401C1D2B
 * 00000001401C1D3D: add     rsp, 8
 * 00000001401C1D41: call    loc_1401C1D34
 * 00000001401C1D46: add     rsp, 8
 * 00000001401C1D4A: call    loc_1401C1D3D
 * 00000001401C1D4F: add     rsp, 8
 * 00000001401C1D53: call    loc_1401C1D46
 * 00000001401C1D58: add     rsp, 8
 * 00000001401C1D5C: call    loc_1401C1D4F
 * 00000001401C1D61: add     rsp, 8
 * 00000001401C1D65: call    loc_1401C1D58
 * 00000001401C1D6A: add     rsp, 8
 * 00000001401C1D6E: call    loc_1401C1D61
 * 00000001401C1D73: add     rsp, 8
 * 00000001401C1D77: call    loc_1401C1D6A
 * 00000001401C1D7C: add     rsp, 8
 * 00000001401C1D80: call    loc_1401C1D73
 * 00000001401C1D85: add     rsp, 8
 * 00000001401C1D89: call    loc_1401C1D7C
 * 00000001401C1D8E: add     rsp, 8
 * 00000001401C1D92: call    loc_1401C1D85
 * 00000001401C1D97: add     rsp, 8
 * 00000001401C1D9B: call    loc_1401C1D8E
 * 00000001401C1DA0: add     rsp, 8
 * 00000001401C1DA4: call    loc_1401C1D97
 * 00000001401C1DA9: add     rsp, 8
 * 00000001401C1DAD: call    loc_1401C1DA0
 * 00000001401C1DB2: add     rsp, 8
 * 00000001401C1DB6: call    loc_1401C1DA9
 * 00000001401C1DBB: add     rsp, 8
 * 00000001401C1DBF: call    loc_1401C1DB2
 * 00000001401C1DC4: add     rsp, 8
 * 00000001401C1DC8: call    loc_1401C1DBB
 * 00000001401C1DCD: add     rsp, 8
 * 00000001401C1DD1: mov     eax, 0DADAh
 * 00000001401C1DD6: test    edx, 200h
 * 00000001401C1DDC: jz      short loc_1401C1DE3
 * 00000001401C1DDE: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C1DE3: lfence
 * 00000001401C1DE6: mov     byte ptr gs:856h, 0
 * 00000001401C1DEF: test    byte ptr [r10+3], 3
 * 00000001401C1DF4: mov     word ptr [rbp+80h], 0
 * 00000001401C1DFD: jz      short loc_1401C1E04
 * 00000001401C1DFF: call    KiSaveDebugRegisterState
 * 00000001401C1E04: cld
 * 00000001401C1E05: stmxcsr dword ptr [rbp-54h]
 * 00000001401C1E09: ldmxcsr dword ptr gs:180h
 * 00000001401C1E12: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C1E16: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C1E1A: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C1E1E: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C1E22: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C1E26: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C1E2A: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C1E33: jz      short loc_1401C1E3A
 * 00000001401C1E35: call    KeWakeProcessor
 * 00000001401C1E3A: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C1E41: cmp     rax, [rbp+0E8h]
 * 00000001401C1E48: jnb     short loc_1401C1E63
 * 00000001401C1E4A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1E51: cmp     rax, [rbp+0E8h]
 * 00000001401C1E58: jb      short loc_1401C1E63
 * 00000001401C1E5A: lea     rcx, [rbp-80h]
 * 00000001401C1E5E: call    KiCheckForSListAddress
 * 00000001401C1E63: xor     esi, esi
 * 00000001401C1E65: inc     dword ptr gs:5D00h
 * 00000001401C1E6D: jmp     KiVmbusInterruptDispatch
 */
