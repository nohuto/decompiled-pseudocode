/*
 * XREFs of KiVmbusInterrupt1 @ 0x1401C86B0
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140351080 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x1401C86B0 (KiVmbusInterrupt1.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1401C86B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C86B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C86B0: push    2
 * 00000001401C86B2: push    rbp
 * 00000001401C86B3: push    rsi
 * 00000001401C86B4: sub     rsp, 150h
 * 00000001401C86BB: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C86C3: mov     byte ptr [rbp-55h], 0
 * 00000001401C86C7: mov     [rbp-50h], rax
 * 00000001401C86CB: mov     [rbp-48h], rcx
 * 00000001401C86CF: mov     [rbp-40h], rdx
 * 00000001401C86D3: mov     [rbp-38h], r8
 * 00000001401C86D7: mov     [rbp-30h], r9
 * 00000001401C86DB: mov     [rbp-28h], r10
 * 00000001401C86DF: mov     [rbp-20h], r11
 * 00000001401C86E3: test    byte ptr [rbp+0F0h], 1
 * 00000001401C86EA: jnz     short loc_1401C8719
 * 00000001401C86EC: lfence
 * 00000001401C86EF: test    byte ptr gs:278h, 1
 * 00000001401C86F8: jnz     short loc_1401C8702
 * 00000001401C86FA: lfence
 * 00000001401C86FD: jmp     loc_1401C8915
 * 00000001401C8702: movzx   eax, byte ptr gs:27Ah
 * 00000001401C870B: mov     ecx, 48h ; 'H'
 * 00000001401C8710: xor     edx, edx
 * 00000001401C8712: wrmsr
 * 00000001401C8714: jmp     loc_1401C8915
 * 00000001401C8719: test    cs:KiKvaShadow, 1
 * 00000001401C8720: jnz     short loc_1401C8725
 * 00000001401C8722: swapgs
 * 00000001401C8725: lfence
 * 00000001401C8728: mov     r10, gs:188h
 * 00000001401C8731: mov     rcx, gs:188h
 * 00000001401C873A: mov     rcx, [rcx+220h]
 * 00000001401C8741: mov     rcx, [rcx+860h]
 * 00000001401C8748: mov     gs:270h, rcx
 * 00000001401C8751: mov     cl, gs:850h
 * 00000001401C8759: mov     gs:851h, cl
 * 00000001401C8761: mov     cl, gs:278h
 * 00000001401C8769: mov     gs:852h, cl
 * 00000001401C8771: movzx   eax, byte ptr gs:27Bh
 * 00000001401C877A: cmp     gs:27Ah, al
 * 00000001401C8782: jz      short loc_1401C8795
 * 00000001401C8784: mov     gs:27Ah, al
 * 00000001401C878C: mov     ecx, 48h ; 'H'
 * 00000001401C8791: xor     edx, edx
 * 00000001401C8793: wrmsr
 * 00000001401C8795: movzx   edx, byte ptr gs:278h
 * 00000001401C879E: test    edx, 8
 * 00000001401C87A4: jz      short loc_1401C87B9
 * 00000001401C87A6: mov     eax, 1
 * 00000001401C87AB: xor     edx, edx
 * 00000001401C87AD: mov     ecx, 49h ; 'I'
 * 00000001401C87B2: wrmsr
 * 00000001401C87B4: jmp     loc_1401C88F7
 * 00000001401C87B9: test    edx, 2
 * 00000001401C87BF: jz      loc_1401C88F4
 * 00000001401C87C5: test    byte ptr gs:279h, 4
 * 00000001401C87CE: jnz     loc_1401C88F4
 * 00000001401C87D4: call    loc_1401C88E7
 * 00000001401C87D9: add     rsp, 8
 * 00000001401C87DD: call    loc_1401C88F0
 * 00000001401C87E2: add     rsp, 8
 * 00000001401C87E6: call    loc_1401C87D9
 * 00000001401C87EB: add     rsp, 8
 * 00000001401C87EF: call    loc_1401C87E2
 * 00000001401C87F4: add     rsp, 8
 * 00000001401C87F8: call    loc_1401C87EB
 * 00000001401C87FD: add     rsp, 8
 * 00000001401C8801: call    loc_1401C87F4
 * 00000001401C8806: add     rsp, 8
 * 00000001401C880A: call    loc_1401C87FD
 * 00000001401C880F: add     rsp, 8
 * 00000001401C8813: call    loc_1401C8806
 * 00000001401C8818: add     rsp, 8
 * 00000001401C881C: call    loc_1401C880F
 * 00000001401C8821: add     rsp, 8
 * 00000001401C8825: call    loc_1401C8818
 * 00000001401C882A: add     rsp, 8
 * 00000001401C882E: call    loc_1401C8821
 * 00000001401C8833: add     rsp, 8
 * 00000001401C8837: call    loc_1401C882A
 * 00000001401C883C: add     rsp, 8
 * 00000001401C8840: call    loc_1401C8833
 * 00000001401C8845: add     rsp, 8
 * 00000001401C8849: call    loc_1401C883C
 * 00000001401C884E: add     rsp, 8
 * 00000001401C8852: call    loc_1401C8845
 * 00000001401C8857: add     rsp, 8
 * 00000001401C885B: call    loc_1401C884E
 * 00000001401C8860: add     rsp, 8
 * 00000001401C8864: call    loc_1401C8857
 * 00000001401C8869: add     rsp, 8
 * 00000001401C886D: call    loc_1401C8860
 * 00000001401C8872: add     rsp, 8
 * 00000001401C8876: call    loc_1401C8869
 * 00000001401C887B: add     rsp, 8
 * 00000001401C887F: call    loc_1401C8872
 * 00000001401C8884: add     rsp, 8
 * 00000001401C8888: call    loc_1401C887B
 * 00000001401C888D: add     rsp, 8
 * 00000001401C8891: call    loc_1401C8884
 * 00000001401C8896: add     rsp, 8
 * 00000001401C889A: call    loc_1401C888D
 * 00000001401C889F: add     rsp, 8
 * 00000001401C88A3: call    loc_1401C8896
 * 00000001401C88A8: add     rsp, 8
 * 00000001401C88AC: call    loc_1401C889F
 * 00000001401C88B1: add     rsp, 8
 * 00000001401C88B5: call    loc_1401C88A8
 * 00000001401C88BA: add     rsp, 8
 * 00000001401C88BE: call    loc_1401C88B1
 * 00000001401C88C3: add     rsp, 8
 * 00000001401C88C7: call    loc_1401C88BA
 * 00000001401C88CC: add     rsp, 8
 * 00000001401C88D0: call    loc_1401C88C3
 * 00000001401C88D5: add     rsp, 8
 * 00000001401C88D9: call    loc_1401C88CC
 * 00000001401C88DE: add     rsp, 8
 * 00000001401C88E2: call    loc_1401C88D5
 * 00000001401C88E7: add     rsp, 8
 * 00000001401C88EB: call    loc_1401C88DE
 * 00000001401C88F0: add     rsp, 8
 * 00000001401C88F4: lfence
 * 00000001401C88F7: mov     byte ptr gs:853h, 0
 * 00000001401C8900: test    byte ptr [r10+3], 3
 * 00000001401C8905: mov     word ptr [rbp+80h], 0
 * 00000001401C890E: jz      short loc_1401C8915
 * 00000001401C8910: call    KiSaveDebugRegisterState
 * 00000001401C8915: cld
 * 00000001401C8916: stmxcsr dword ptr [rbp-54h]
 * 00000001401C891A: ldmxcsr dword ptr gs:180h
 * 00000001401C8923: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C8927: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C892B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C892F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C8933: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C8937: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C893B: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C8944: jz      short loc_1401C894B
 * 00000001401C8946: call    KeWakeProcessor
 * 00000001401C894B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C8952: cmp     rax, [rbp+0E8h]
 * 00000001401C8959: jnb     short loc_1401C8974
 * 00000001401C895B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C8962: cmp     rax, [rbp+0E8h]
 * 00000001401C8969: jb      short loc_1401C8974
 * 00000001401C896B: lea     rcx, [rbp-80h]
 * 00000001401C896F: call    KiCheckForSListAddress
 * 00000001401C8974: xor     esi, esi
 * 00000001401C8976: inc     dword ptr gs:5D00h
 * 00000001401C897E: jmp     KiVmbusInterruptDispatch
 */
