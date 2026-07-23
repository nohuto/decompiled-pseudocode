/*
 * XREFs of KiVmbusInterrupt1 @ 0x1401C18A0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140330080 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x1401C18A0 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1401C18A0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C18A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C18A0: push    2
 * 00000001401C18A2: push    rbp
 * 00000001401C18A3: push    rsi
 * 00000001401C18A4: sub     rsp, 150h
 * 00000001401C18AB: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C18B3: mov     byte ptr [rbp-55h], 0
 * 00000001401C18B7: mov     [rbp-50h], rax
 * 00000001401C18BB: mov     [rbp-48h], rcx
 * 00000001401C18BF: mov     [rbp-40h], rdx
 * 00000001401C18C3: mov     [rbp-38h], r8
 * 00000001401C18C7: mov     [rbp-30h], r9
 * 00000001401C18CB: mov     [rbp-28h], r10
 * 00000001401C18CF: mov     [rbp-20h], r11
 * 00000001401C18D3: test    byte ptr [rbp+0F0h], 1
 * 00000001401C18DA: jnz     short loc_1401C190B
 * 00000001401C18DC: lfence
 * 00000001401C18DF: test    word ptr gs:860h, 1
 * 00000001401C18EA: jnz     short loc_1401C18F4
 * 00000001401C18EC: lfence
 * 00000001401C18EF: jmp     loc_1401C1B14
 * 00000001401C18F4: movzx   eax, word ptr gs:864h
 * 00000001401C18FD: mov     ecx, 48h ; 'H'
 * 00000001401C1902: xor     edx, edx
 * 00000001401C1904: wrmsr
 * 00000001401C1906: jmp     loc_1401C1B14
 * 00000001401C190B: test    cs:KiKvaShadow, 1
 * 00000001401C1912: jnz     short loc_1401C1917
 * 00000001401C1914: swapgs
 * 00000001401C1917: lfence
 * 00000001401C191A: mov     r10, gs:188h
 * 00000001401C1923: mov     rcx, gs:188h
 * 00000001401C192C: mov     rcx, [rcx+220h]
 * 00000001401C1933: mov     rcx, [rcx+830h]
 * 00000001401C193A: mov     gs:858h, rcx
 * 00000001401C1943: mov     cx, gs:850h
 * 00000001401C194C: mov     gs:852h, cx
 * 00000001401C1955: mov     cx, gs:860h
 * 00000001401C195E: mov     gs:854h, cx
 * 00000001401C1967: movzx   eax, word ptr gs:866h
 * 00000001401C1970: cmp     gs:864h, ax
 * 00000001401C1979: jz      short loc_1401C198D
 * 00000001401C197B: mov     gs:864h, ax
 * 00000001401C1984: mov     ecx, 48h ; 'H'
 * 00000001401C1989: xor     edx, edx
 * 00000001401C198B: wrmsr
 * 00000001401C198D: movzx   edx, word ptr gs:860h
 * 00000001401C1996: test    edx, 8
 * 00000001401C199C: jz      short loc_1401C19B5
 * 00000001401C199E: mov     eax, 1
 * 00000001401C19A3: xor     edx, edx
 * 00000001401C19A5: mov     ecx, 49h ; 'I'
 * 00000001401C19AA: wrmsr
 * 00000001401C19AC: movzx   edx, word ptr gs:860h
 * 00000001401C19B5: test    edx, 2
 * 00000001401C19BB: jz      loc_1401C1AE6
 * 00000001401C19C1: call    loc_1401C1AD4
 * 00000001401C19C6: add     rsp, 8
 * 00000001401C19CA: call    loc_1401C1ADD
 * 00000001401C19CF: add     rsp, 8
 * 00000001401C19D3: call    loc_1401C19C6
 * 00000001401C19D8: add     rsp, 8
 * 00000001401C19DC: call    loc_1401C19CF
 * 00000001401C19E1: add     rsp, 8
 * 00000001401C19E5: call    loc_1401C19D8
 * 00000001401C19EA: add     rsp, 8
 * 00000001401C19EE: call    loc_1401C19E1
 * 00000001401C19F3: add     rsp, 8
 * 00000001401C19F7: call    loc_1401C19EA
 * 00000001401C19FC: add     rsp, 8
 * 00000001401C1A00: call    loc_1401C19F3
 * 00000001401C1A05: add     rsp, 8
 * 00000001401C1A09: call    loc_1401C19FC
 * 00000001401C1A0E: add     rsp, 8
 * 00000001401C1A12: call    loc_1401C1A05
 * 00000001401C1A17: add     rsp, 8
 * 00000001401C1A1B: call    loc_1401C1A0E
 * 00000001401C1A20: add     rsp, 8
 * 00000001401C1A24: call    loc_1401C1A17
 * 00000001401C1A29: add     rsp, 8
 * 00000001401C1A2D: call    loc_1401C1A20
 * 00000001401C1A32: add     rsp, 8
 * 00000001401C1A36: call    loc_1401C1A29
 * 00000001401C1A3B: add     rsp, 8
 * 00000001401C1A3F: call    loc_1401C1A32
 * 00000001401C1A44: add     rsp, 8
 * 00000001401C1A48: call    loc_1401C1A3B
 * 00000001401C1A4D: add     rsp, 8
 * 00000001401C1A51: call    loc_1401C1A44
 * 00000001401C1A56: add     rsp, 8
 * 00000001401C1A5A: call    loc_1401C1A4D
 * 00000001401C1A5F: add     rsp, 8
 * 00000001401C1A63: call    loc_1401C1A56
 * 00000001401C1A68: add     rsp, 8
 * 00000001401C1A6C: call    loc_1401C1A5F
 * 00000001401C1A71: add     rsp, 8
 * 00000001401C1A75: call    loc_1401C1A68
 * 00000001401C1A7A: add     rsp, 8
 * 00000001401C1A7E: call    loc_1401C1A71
 * 00000001401C1A83: add     rsp, 8
 * 00000001401C1A87: call    loc_1401C1A7A
 * 00000001401C1A8C: add     rsp, 8
 * 00000001401C1A90: call    loc_1401C1A83
 * 00000001401C1A95: add     rsp, 8
 * 00000001401C1A99: call    loc_1401C1A8C
 * 00000001401C1A9E: add     rsp, 8
 * 00000001401C1AA2: call    loc_1401C1A95
 * 00000001401C1AA7: add     rsp, 8
 * 00000001401C1AAB: call    loc_1401C1A9E
 * 00000001401C1AB0: add     rsp, 8
 * 00000001401C1AB4: call    loc_1401C1AA7
 * 00000001401C1AB9: add     rsp, 8
 * 00000001401C1ABD: call    loc_1401C1AB0
 * 00000001401C1AC2: add     rsp, 8
 * 00000001401C1AC6: call    loc_1401C1AB9
 * 00000001401C1ACB: add     rsp, 8
 * 00000001401C1ACF: call    loc_1401C1AC2
 * 00000001401C1AD4: add     rsp, 8
 * 00000001401C1AD8: call    loc_1401C1ACB
 * 00000001401C1ADD: add     rsp, 8
 * 00000001401C1AE1: mov     eax, 0DADAh
 * 00000001401C1AE6: test    edx, 200h
 * 00000001401C1AEC: jz      short loc_1401C1AF3
 * 00000001401C1AEE: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C1AF3: lfence
 * 00000001401C1AF6: mov     byte ptr gs:856h, 0
 * 00000001401C1AFF: test    byte ptr [r10+3], 3
 * 00000001401C1B04: mov     word ptr [rbp+80h], 0
 * 00000001401C1B0D: jz      short loc_1401C1B14
 * 00000001401C1B0F: call    KiSaveDebugRegisterState
 * 00000001401C1B14: cld
 * 00000001401C1B15: stmxcsr dword ptr [rbp-54h]
 * 00000001401C1B19: ldmxcsr dword ptr gs:180h
 * 00000001401C1B22: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C1B26: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C1B2A: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C1B2E: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C1B32: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C1B36: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C1B3A: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C1B43: jz      short loc_1401C1B4A
 * 00000001401C1B45: call    KeWakeProcessor
 * 00000001401C1B4A: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C1B51: cmp     rax, [rbp+0E8h]
 * 00000001401C1B58: jnb     short loc_1401C1B73
 * 00000001401C1B5A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1B61: cmp     rax, [rbp+0E8h]
 * 00000001401C1B68: jb      short loc_1401C1B73
 * 00000001401C1B6A: lea     rcx, [rbp-80h]
 * 00000001401C1B6E: call    KiCheckForSListAddress
 * 00000001401C1B73: xor     esi, esi
 * 00000001401C1B75: inc     dword ptr gs:5D00h
 * 00000001401C1B7D: jmp     KiVmbusInterruptDispatch
 */
