/*
 * XREFs of KiVmbusInterrupt0 @ 0x1401C83D0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140351000 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x1401C83D0 (KiVmbusInterrupt0.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1401C83D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C83D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C83D0: push    1
 * 00000001401C83D2: push    rbp
 * 00000001401C83D3: push    rsi
 * 00000001401C83D4: sub     rsp, 150h
 * 00000001401C83DB: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C83E3: mov     byte ptr [rbp-55h], 0
 * 00000001401C83E7: mov     [rbp-50h], rax
 * 00000001401C83EB: mov     [rbp-48h], rcx
 * 00000001401C83EF: mov     [rbp-40h], rdx
 * 00000001401C83F3: mov     [rbp-38h], r8
 * 00000001401C83F7: mov     [rbp-30h], r9
 * 00000001401C83FB: mov     [rbp-28h], r10
 * 00000001401C83FF: mov     [rbp-20h], r11
 * 00000001401C8403: test    byte ptr [rbp+0F0h], 1
 * 00000001401C840A: jnz     short loc_1401C8439
 * 00000001401C840C: lfence
 * 00000001401C840F: test    byte ptr gs:278h, 1
 * 00000001401C8418: jnz     short loc_1401C8422
 * 00000001401C841A: lfence
 * 00000001401C841D: jmp     loc_1401C8635
 * 00000001401C8422: movzx   eax, byte ptr gs:27Ah
 * 00000001401C842B: mov     ecx, 48h ; 'H'
 * 00000001401C8430: xor     edx, edx
 * 00000001401C8432: wrmsr
 * 00000001401C8434: jmp     loc_1401C8635
 * 00000001401C8439: test    cs:KiKvaShadow, 1
 * 00000001401C8440: jnz     short loc_1401C8445
 * 00000001401C8442: swapgs
 * 00000001401C8445: lfence
 * 00000001401C8448: mov     r10, gs:188h
 * 00000001401C8451: mov     rcx, gs:188h
 * 00000001401C845A: mov     rcx, [rcx+220h]
 * 00000001401C8461: mov     rcx, [rcx+860h]
 * 00000001401C8468: mov     gs:270h, rcx
 * 00000001401C8471: mov     cl, gs:850h
 * 00000001401C8479: mov     gs:851h, cl
 * 00000001401C8481: mov     cl, gs:278h
 * 00000001401C8489: mov     gs:852h, cl
 * 00000001401C8491: movzx   eax, byte ptr gs:27Bh
 * 00000001401C849A: cmp     gs:27Ah, al
 * 00000001401C84A2: jz      short loc_1401C84B5
 * 00000001401C84A4: mov     gs:27Ah, al
 * 00000001401C84AC: mov     ecx, 48h ; 'H'
 * 00000001401C84B1: xor     edx, edx
 * 00000001401C84B3: wrmsr
 * 00000001401C84B5: movzx   edx, byte ptr gs:278h
 * 00000001401C84BE: test    edx, 8
 * 00000001401C84C4: jz      short loc_1401C84D9
 * 00000001401C84C6: mov     eax, 1
 * 00000001401C84CB: xor     edx, edx
 * 00000001401C84CD: mov     ecx, 49h ; 'I'
 * 00000001401C84D2: wrmsr
 * 00000001401C84D4: jmp     loc_1401C8617
 * 00000001401C84D9: test    edx, 2
 * 00000001401C84DF: jz      loc_1401C8614
 * 00000001401C84E5: test    byte ptr gs:279h, 4
 * 00000001401C84EE: jnz     loc_1401C8614
 * 00000001401C84F4: call    loc_1401C8607
 * 00000001401C84F9: add     rsp, 8
 * 00000001401C84FD: call    loc_1401C8610
 * 00000001401C8502: add     rsp, 8
 * 00000001401C8506: call    loc_1401C84F9
 * 00000001401C850B: add     rsp, 8
 * 00000001401C850F: call    loc_1401C8502
 * 00000001401C8514: add     rsp, 8
 * 00000001401C8518: call    loc_1401C850B
 * 00000001401C851D: add     rsp, 8
 * 00000001401C8521: call    loc_1401C8514
 * 00000001401C8526: add     rsp, 8
 * 00000001401C852A: call    loc_1401C851D
 * 00000001401C852F: add     rsp, 8
 * 00000001401C8533: call    loc_1401C8526
 * 00000001401C8538: add     rsp, 8
 * 00000001401C853C: call    loc_1401C852F
 * 00000001401C8541: add     rsp, 8
 * 00000001401C8545: call    loc_1401C8538
 * 00000001401C854A: add     rsp, 8
 * 00000001401C854E: call    loc_1401C8541
 * 00000001401C8553: add     rsp, 8
 * 00000001401C8557: call    loc_1401C854A
 * 00000001401C855C: add     rsp, 8
 * 00000001401C8560: call    loc_1401C8553
 * 00000001401C8565: add     rsp, 8
 * 00000001401C8569: call    loc_1401C855C
 * 00000001401C856E: add     rsp, 8
 * 00000001401C8572: call    loc_1401C8565
 * 00000001401C8577: add     rsp, 8
 * 00000001401C857B: call    loc_1401C856E
 * 00000001401C8580: add     rsp, 8
 * 00000001401C8584: call    loc_1401C8577
 * 00000001401C8589: add     rsp, 8
 * 00000001401C858D: call    loc_1401C8580
 * 00000001401C8592: add     rsp, 8
 * 00000001401C8596: call    loc_1401C8589
 * 00000001401C859B: add     rsp, 8
 * 00000001401C859F: call    loc_1401C8592
 * 00000001401C85A4: add     rsp, 8
 * 00000001401C85A8: call    loc_1401C859B
 * 00000001401C85AD: add     rsp, 8
 * 00000001401C85B1: call    loc_1401C85A4
 * 00000001401C85B6: add     rsp, 8
 * 00000001401C85BA: call    loc_1401C85AD
 * 00000001401C85BF: add     rsp, 8
 * 00000001401C85C3: call    loc_1401C85B6
 * 00000001401C85C8: add     rsp, 8
 * 00000001401C85CC: call    loc_1401C85BF
 * 00000001401C85D1: add     rsp, 8
 * 00000001401C85D5: call    loc_1401C85C8
 * 00000001401C85DA: add     rsp, 8
 * 00000001401C85DE: call    loc_1401C85D1
 * 00000001401C85E3: add     rsp, 8
 * 00000001401C85E7: call    loc_1401C85DA
 * 00000001401C85EC: add     rsp, 8
 * 00000001401C85F0: call    loc_1401C85E3
 * 00000001401C85F5: add     rsp, 8
 * 00000001401C85F9: call    loc_1401C85EC
 * 00000001401C85FE: add     rsp, 8
 * 00000001401C8602: call    loc_1401C85F5
 * 00000001401C8607: add     rsp, 8
 * 00000001401C860B: call    loc_1401C85FE
 * 00000001401C8610: add     rsp, 8
 * 00000001401C8614: lfence
 * 00000001401C8617: mov     byte ptr gs:853h, 0
 * 00000001401C8620: test    byte ptr [r10+3], 3
 * 00000001401C8625: mov     word ptr [rbp+80h], 0
 * 00000001401C862E: jz      short loc_1401C8635
 * 00000001401C8630: call    KiSaveDebugRegisterState
 * 00000001401C8635: cld
 * 00000001401C8636: stmxcsr dword ptr [rbp-54h]
 * 00000001401C863A: ldmxcsr dword ptr gs:180h
 * 00000001401C8643: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C8647: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C864B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C864F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C8653: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C8657: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C865B: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C8664: jz      short loc_1401C866B
 * 00000001401C8666: call    KeWakeProcessor
 * 00000001401C866B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C8672: cmp     rax, [rbp+0E8h]
 * 00000001401C8679: jnb     short loc_1401C8694
 * 00000001401C867B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C8682: cmp     rax, [rbp+0E8h]
 * 00000001401C8689: jb      short loc_1401C8694
 * 00000001401C868B: lea     rcx, [rbp-80h]
 * 00000001401C868F: call    KiCheckForSListAddress
 * 00000001401C8694: xor     esi, esi
 * 00000001401C8696: inc     dword ptr gs:5D00h
 * 00000001401C869E: jmp     KiVmbusInterruptDispatch
 */
