/*
 * XREFs of KiVmbusInterrupt2 @ 0x1401C8990
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140351100 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x1401C8990 (KiVmbusInterrupt2.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1401C8990
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8990
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8990: push    3
 * 00000001401C8992: push    rbp
 * 00000001401C8993: push    rsi
 * 00000001401C8994: sub     rsp, 150h
 * 00000001401C899B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C89A3: mov     byte ptr [rbp-55h], 0
 * 00000001401C89A7: mov     [rbp-50h], rax
 * 00000001401C89AB: mov     [rbp-48h], rcx
 * 00000001401C89AF: mov     [rbp-40h], rdx
 * 00000001401C89B3: mov     [rbp-38h], r8
 * 00000001401C89B7: mov     [rbp-30h], r9
 * 00000001401C89BB: mov     [rbp-28h], r10
 * 00000001401C89BF: mov     [rbp-20h], r11
 * 00000001401C89C3: test    byte ptr [rbp+0F0h], 1
 * 00000001401C89CA: jnz     short loc_1401C89F9
 * 00000001401C89CC: lfence
 * 00000001401C89CF: test    byte ptr gs:278h, 1
 * 00000001401C89D8: jnz     short loc_1401C89E2
 * 00000001401C89DA: lfence
 * 00000001401C89DD: jmp     loc_1401C8BF5
 * 00000001401C89E2: movzx   eax, byte ptr gs:27Ah
 * 00000001401C89EB: mov     ecx, 48h ; 'H'
 * 00000001401C89F0: xor     edx, edx
 * 00000001401C89F2: wrmsr
 * 00000001401C89F4: jmp     loc_1401C8BF5
 * 00000001401C89F9: test    cs:KiKvaShadow, 1
 * 00000001401C8A00: jnz     short loc_1401C8A05
 * 00000001401C8A02: swapgs
 * 00000001401C8A05: lfence
 * 00000001401C8A08: mov     r10, gs:188h
 * 00000001401C8A11: mov     rcx, gs:188h
 * 00000001401C8A1A: mov     rcx, [rcx+220h]
 * 00000001401C8A21: mov     rcx, [rcx+860h]
 * 00000001401C8A28: mov     gs:270h, rcx
 * 00000001401C8A31: mov     cl, gs:850h
 * 00000001401C8A39: mov     gs:851h, cl
 * 00000001401C8A41: mov     cl, gs:278h
 * 00000001401C8A49: mov     gs:852h, cl
 * 00000001401C8A51: movzx   eax, byte ptr gs:27Bh
 * 00000001401C8A5A: cmp     gs:27Ah, al
 * 00000001401C8A62: jz      short loc_1401C8A75
 * 00000001401C8A64: mov     gs:27Ah, al
 * 00000001401C8A6C: mov     ecx, 48h ; 'H'
 * 00000001401C8A71: xor     edx, edx
 * 00000001401C8A73: wrmsr
 * 00000001401C8A75: movzx   edx, byte ptr gs:278h
 * 00000001401C8A7E: test    edx, 8
 * 00000001401C8A84: jz      short loc_1401C8A99
 * 00000001401C8A86: mov     eax, 1
 * 00000001401C8A8B: xor     edx, edx
 * 00000001401C8A8D: mov     ecx, 49h ; 'I'
 * 00000001401C8A92: wrmsr
 * 00000001401C8A94: jmp     loc_1401C8BD7
 * 00000001401C8A99: test    edx, 2
 * 00000001401C8A9F: jz      loc_1401C8BD4
 * 00000001401C8AA5: test    byte ptr gs:279h, 4
 * 00000001401C8AAE: jnz     loc_1401C8BD4
 * 00000001401C8AB4: call    loc_1401C8BC7
 * 00000001401C8AB9: add     rsp, 8
 * 00000001401C8ABD: call    loc_1401C8BD0
 * 00000001401C8AC2: add     rsp, 8
 * 00000001401C8AC6: call    loc_1401C8AB9
 * 00000001401C8ACB: add     rsp, 8
 * 00000001401C8ACF: call    loc_1401C8AC2
 * 00000001401C8AD4: add     rsp, 8
 * 00000001401C8AD8: call    loc_1401C8ACB
 * 00000001401C8ADD: add     rsp, 8
 * 00000001401C8AE1: call    loc_1401C8AD4
 * 00000001401C8AE6: add     rsp, 8
 * 00000001401C8AEA: call    loc_1401C8ADD
 * 00000001401C8AEF: add     rsp, 8
 * 00000001401C8AF3: call    loc_1401C8AE6
 * 00000001401C8AF8: add     rsp, 8
 * 00000001401C8AFC: call    loc_1401C8AEF
 * 00000001401C8B01: add     rsp, 8
 * 00000001401C8B05: call    loc_1401C8AF8
 * 00000001401C8B0A: add     rsp, 8
 * 00000001401C8B0E: call    loc_1401C8B01
 * 00000001401C8B13: add     rsp, 8
 * 00000001401C8B17: call    loc_1401C8B0A
 * 00000001401C8B1C: add     rsp, 8
 * 00000001401C8B20: call    loc_1401C8B13
 * 00000001401C8B25: add     rsp, 8
 * 00000001401C8B29: call    loc_1401C8B1C
 * 00000001401C8B2E: add     rsp, 8
 * 00000001401C8B32: call    loc_1401C8B25
 * 00000001401C8B37: add     rsp, 8
 * 00000001401C8B3B: call    loc_1401C8B2E
 * 00000001401C8B40: add     rsp, 8
 * 00000001401C8B44: call    loc_1401C8B37
 * 00000001401C8B49: add     rsp, 8
 * 00000001401C8B4D: call    loc_1401C8B40
 * 00000001401C8B52: add     rsp, 8
 * 00000001401C8B56: call    loc_1401C8B49
 * 00000001401C8B5B: add     rsp, 8
 * 00000001401C8B5F: call    loc_1401C8B52
 * 00000001401C8B64: add     rsp, 8
 * 00000001401C8B68: call    loc_1401C8B5B
 * 00000001401C8B6D: add     rsp, 8
 * 00000001401C8B71: call    loc_1401C8B64
 * 00000001401C8B76: add     rsp, 8
 * 00000001401C8B7A: call    loc_1401C8B6D
 * 00000001401C8B7F: add     rsp, 8
 * 00000001401C8B83: call    loc_1401C8B76
 * 00000001401C8B88: add     rsp, 8
 * 00000001401C8B8C: call    loc_1401C8B7F
 * 00000001401C8B91: add     rsp, 8
 * 00000001401C8B95: call    loc_1401C8B88
 * 00000001401C8B9A: add     rsp, 8
 * 00000001401C8B9E: call    loc_1401C8B91
 * 00000001401C8BA3: add     rsp, 8
 * 00000001401C8BA7: call    loc_1401C8B9A
 * 00000001401C8BAC: add     rsp, 8
 * 00000001401C8BB0: call    loc_1401C8BA3
 * 00000001401C8BB5: add     rsp, 8
 * 00000001401C8BB9: call    loc_1401C8BAC
 * 00000001401C8BBE: add     rsp, 8
 * 00000001401C8BC2: call    loc_1401C8BB5
 * 00000001401C8BC7: add     rsp, 8
 * 00000001401C8BCB: call    loc_1401C8BBE
 * 00000001401C8BD0: add     rsp, 8
 * 00000001401C8BD4: lfence
 * 00000001401C8BD7: mov     byte ptr gs:853h, 0
 * 00000001401C8BE0: test    byte ptr [r10+3], 3
 * 00000001401C8BE5: mov     word ptr [rbp+80h], 0
 * 00000001401C8BEE: jz      short loc_1401C8BF5
 * 00000001401C8BF0: call    KiSaveDebugRegisterState
 * 00000001401C8BF5: cld
 * 00000001401C8BF6: stmxcsr dword ptr [rbp-54h]
 * 00000001401C8BFA: ldmxcsr dword ptr gs:180h
 * 00000001401C8C03: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C8C07: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C8C0B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C8C0F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C8C13: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C8C17: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C8C1B: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C8C24: jz      short loc_1401C8C2B
 * 00000001401C8C26: call    KeWakeProcessor
 * 00000001401C8C2B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C8C32: cmp     rax, [rbp+0E8h]
 * 00000001401C8C39: jnb     short loc_1401C8C54
 * 00000001401C8C3B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C8C42: cmp     rax, [rbp+0E8h]
 * 00000001401C8C49: jb      short loc_1401C8C54
 * 00000001401C8C4B: lea     rcx, [rbp-80h]
 * 00000001401C8C4F: call    KiCheckForSListAddress
 * 00000001401C8C54: xor     esi, esi
 * 00000001401C8C56: inc     dword ptr gs:5D00h
 * 00000001401C8C5E: jmp     KiVmbusInterruptDispatch
 */
