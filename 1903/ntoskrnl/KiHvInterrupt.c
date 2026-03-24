/*
 * XREFs of KiHvInterrupt @ 0x1401C80F0
 * Callers:
 *     KiHvInterruptShadow @ 0x140350F80 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x1401C80F0 (KiHvInterrupt.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1401C80F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C80F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C80F0: push    0
 * 00000001401C80F2: push    rbp
 * 00000001401C80F3: push    rsi
 * 00000001401C80F4: sub     rsp, 150h
 * 00000001401C80FB: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C8103: mov     byte ptr [rbp-55h], 0
 * 00000001401C8107: mov     [rbp-50h], rax
 * 00000001401C810B: mov     [rbp-48h], rcx
 * 00000001401C810F: mov     [rbp-40h], rdx
 * 00000001401C8113: mov     [rbp-38h], r8
 * 00000001401C8117: mov     [rbp-30h], r9
 * 00000001401C811B: mov     [rbp-28h], r10
 * 00000001401C811F: mov     [rbp-20h], r11
 * 00000001401C8123: test    byte ptr [rbp+0F0h], 1
 * 00000001401C812A: jnz     short loc_1401C8159
 * 00000001401C812C: lfence
 * 00000001401C812F: test    byte ptr gs:278h, 1
 * 00000001401C8138: jnz     short loc_1401C8142
 * 00000001401C813A: lfence
 * 00000001401C813D: jmp     loc_1401C8355
 * 00000001401C8142: movzx   eax, byte ptr gs:27Ah
 * 00000001401C814B: mov     ecx, 48h ; 'H'
 * 00000001401C8150: xor     edx, edx
 * 00000001401C8152: wrmsr
 * 00000001401C8154: jmp     loc_1401C8355
 * 00000001401C8159: test    cs:KiKvaShadow, 1
 * 00000001401C8160: jnz     short loc_1401C8165
 * 00000001401C8162: swapgs
 * 00000001401C8165: lfence
 * 00000001401C8168: mov     r10, gs:188h
 * 00000001401C8171: mov     rcx, gs:188h
 * 00000001401C817A: mov     rcx, [rcx+220h]
 * 00000001401C8181: mov     rcx, [rcx+860h]
 * 00000001401C8188: mov     gs:270h, rcx
 * 00000001401C8191: mov     cl, gs:850h
 * 00000001401C8199: mov     gs:851h, cl
 * 00000001401C81A1: mov     cl, gs:278h
 * 00000001401C81A9: mov     gs:852h, cl
 * 00000001401C81B1: movzx   eax, byte ptr gs:27Bh
 * 00000001401C81BA: cmp     gs:27Ah, al
 * 00000001401C81C2: jz      short loc_1401C81D5
 * 00000001401C81C4: mov     gs:27Ah, al
 * 00000001401C81CC: mov     ecx, 48h ; 'H'
 * 00000001401C81D1: xor     edx, edx
 * 00000001401C81D3: wrmsr
 * 00000001401C81D5: movzx   edx, byte ptr gs:278h
 * 00000001401C81DE: test    edx, 8
 * 00000001401C81E4: jz      short loc_1401C81F9
 * 00000001401C81E6: mov     eax, 1
 * 00000001401C81EB: xor     edx, edx
 * 00000001401C81ED: mov     ecx, 49h ; 'I'
 * 00000001401C81F2: wrmsr
 * 00000001401C81F4: jmp     loc_1401C8337
 * 00000001401C81F9: test    edx, 2
 * 00000001401C81FF: jz      loc_1401C8334
 * 00000001401C8205: test    byte ptr gs:279h, 4
 * 00000001401C820E: jnz     loc_1401C8334
 * 00000001401C8214: call    loc_1401C8327
 * 00000001401C8219: add     rsp, 8
 * 00000001401C821D: call    loc_1401C8330
 * 00000001401C8222: add     rsp, 8
 * 00000001401C8226: call    loc_1401C8219
 * 00000001401C822B: add     rsp, 8
 * 00000001401C822F: call    loc_1401C8222
 * 00000001401C8234: add     rsp, 8
 * 00000001401C8238: call    loc_1401C822B
 * 00000001401C823D: add     rsp, 8
 * 00000001401C8241: call    loc_1401C8234
 * 00000001401C8246: add     rsp, 8
 * 00000001401C824A: call    loc_1401C823D
 * 00000001401C824F: add     rsp, 8
 * 00000001401C8253: call    loc_1401C8246
 * 00000001401C8258: add     rsp, 8
 * 00000001401C825C: call    loc_1401C824F
 * 00000001401C8261: add     rsp, 8
 * 00000001401C8265: call    loc_1401C8258
 * 00000001401C826A: add     rsp, 8
 * 00000001401C826E: call    loc_1401C8261
 * 00000001401C8273: add     rsp, 8
 * 00000001401C8277: call    loc_1401C826A
 * 00000001401C827C: add     rsp, 8
 * 00000001401C8280: call    loc_1401C8273
 * 00000001401C8285: add     rsp, 8
 * 00000001401C8289: call    loc_1401C827C
 * 00000001401C828E: add     rsp, 8
 * 00000001401C8292: call    loc_1401C8285
 * 00000001401C8297: add     rsp, 8
 * 00000001401C829B: call    loc_1401C828E
 * 00000001401C82A0: add     rsp, 8
 * 00000001401C82A4: call    loc_1401C8297
 * 00000001401C82A9: add     rsp, 8
 * 00000001401C82AD: call    loc_1401C82A0
 * 00000001401C82B2: add     rsp, 8
 * 00000001401C82B6: call    loc_1401C82A9
 * 00000001401C82BB: add     rsp, 8
 * 00000001401C82BF: call    loc_1401C82B2
 * 00000001401C82C4: add     rsp, 8
 * 00000001401C82C8: call    loc_1401C82BB
 * 00000001401C82CD: add     rsp, 8
 * 00000001401C82D1: call    loc_1401C82C4
 * 00000001401C82D6: add     rsp, 8
 * 00000001401C82DA: call    loc_1401C82CD
 * 00000001401C82DF: add     rsp, 8
 * 00000001401C82E3: call    loc_1401C82D6
 * 00000001401C82E8: add     rsp, 8
 * 00000001401C82EC: call    loc_1401C82DF
 * 00000001401C82F1: add     rsp, 8
 * 00000001401C82F5: call    loc_1401C82E8
 * 00000001401C82FA: add     rsp, 8
 * 00000001401C82FE: call    loc_1401C82F1
 * 00000001401C8303: add     rsp, 8
 * 00000001401C8307: call    loc_1401C82FA
 * 00000001401C830C: add     rsp, 8
 * 00000001401C8310: call    loc_1401C8303
 * 00000001401C8315: add     rsp, 8
 * 00000001401C8319: call    loc_1401C830C
 * 00000001401C831E: add     rsp, 8
 * 00000001401C8322: call    loc_1401C8315
 * 00000001401C8327: add     rsp, 8
 * 00000001401C832B: call    loc_1401C831E
 * 00000001401C8330: add     rsp, 8
 * 00000001401C8334: lfence
 * 00000001401C8337: mov     byte ptr gs:853h, 0
 * 00000001401C8340: test    byte ptr [r10+3], 3
 * 00000001401C8345: mov     word ptr [rbp+80h], 0
 * 00000001401C834E: jz      short loc_1401C8355
 * 00000001401C8350: call    KiSaveDebugRegisterState
 * 00000001401C8355: cld
 * 00000001401C8356: stmxcsr dword ptr [rbp-54h]
 * 00000001401C835A: ldmxcsr dword ptr gs:180h
 * 00000001401C8363: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C8367: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C836B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C836F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C8373: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C8377: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C837B: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C8384: jz      short loc_1401C838B
 * 00000001401C8386: call    KeWakeProcessor
 * 00000001401C838B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C8392: cmp     rax, [rbp+0E8h]
 * 00000001401C8399: jnb     short loc_1401C83B4
 * 00000001401C839B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C83A2: cmp     rax, [rbp+0E8h]
 * 00000001401C83A9: jb      short loc_1401C83B4
 * 00000001401C83AB: lea     rcx, [rbp-80h]
 * 00000001401C83AF: call    KiCheckForSListAddress
 * 00000001401C83B4: xor     esi, esi
 * 00000001401C83B6: inc     dword ptr gs:5D00h
 * 00000001401C83BE: jmp     KiHvInterruptDispatch
 */
