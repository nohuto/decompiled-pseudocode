/*
 * XREFs of KiVmbusInterrupt1 @ 0x1401C9230
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140351080 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x1401C9230 (KiVmbusInterrupt1.c)
 *     KeWakeProcessor @ 0x1402AA3D0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1401C9230
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9230
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9230: push    2
 * 00000001401C9232: push    rbp
 * 00000001401C9233: push    rsi
 * 00000001401C9234: sub     rsp, 150h
 * 00000001401C923B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C9243: mov     byte ptr [rbp-55h], 0
 * 00000001401C9247: mov     [rbp-50h], rax
 * 00000001401C924B: mov     [rbp-48h], rcx
 * 00000001401C924F: mov     [rbp-40h], rdx
 * 00000001401C9253: mov     [rbp-38h], r8
 * 00000001401C9257: mov     [rbp-30h], r9
 * 00000001401C925B: mov     [rbp-28h], r10
 * 00000001401C925F: mov     [rbp-20h], r11
 * 00000001401C9263: test    byte ptr [rbp+0F0h], 1
 * 00000001401C926A: jnz     short loc_1401C9299
 * 00000001401C926C: lfence
 * 00000001401C926F: test    byte ptr gs:278h, 1
 * 00000001401C9278: jnz     short loc_1401C9282
 * 00000001401C927A: lfence
 * 00000001401C927D: jmp     loc_1401C9495
 * 00000001401C9282: movzx   eax, byte ptr gs:27Ah
 * 00000001401C928B: mov     ecx, 48h ; 'H'
 * 00000001401C9290: xor     edx, edx
 * 00000001401C9292: wrmsr
 * 00000001401C9294: jmp     loc_1401C9495
 * 00000001401C9299: test    cs:KiKvaShadow, 1
 * 00000001401C92A0: jnz     short loc_1401C92A5
 * 00000001401C92A2: swapgs
 * 00000001401C92A5: lfence
 * 00000001401C92A8: mov     r10, gs:188h
 * 00000001401C92B1: mov     rcx, gs:188h
 * 00000001401C92BA: mov     rcx, [rcx+220h]
 * 00000001401C92C1: mov     rcx, [rcx+860h]
 * 00000001401C92C8: mov     gs:270h, rcx
 * 00000001401C92D1: mov     cl, gs:850h
 * 00000001401C92D9: mov     gs:851h, cl
 * 00000001401C92E1: mov     cl, gs:278h
 * 00000001401C92E9: mov     gs:852h, cl
 * 00000001401C92F1: movzx   eax, byte ptr gs:27Bh
 * 00000001401C92FA: cmp     gs:27Ah, al
 * 00000001401C9302: jz      short loc_1401C9315
 * 00000001401C9304: mov     gs:27Ah, al
 * 00000001401C930C: mov     ecx, 48h ; 'H'
 * 00000001401C9311: xor     edx, edx
 * 00000001401C9313: wrmsr
 * 00000001401C9315: movzx   edx, byte ptr gs:278h
 * 00000001401C931E: test    edx, 8
 * 00000001401C9324: jz      short loc_1401C9339
 * 00000001401C9326: mov     eax, 1
 * 00000001401C932B: xor     edx, edx
 * 00000001401C932D: mov     ecx, 49h ; 'I'
 * 00000001401C9332: wrmsr
 * 00000001401C9334: jmp     loc_1401C9477
 * 00000001401C9339: test    edx, 2
 * 00000001401C933F: jz      loc_1401C9474
 * 00000001401C9345: test    byte ptr gs:279h, 4
 * 00000001401C934E: jnz     loc_1401C9474
 * 00000001401C9354: call    loc_1401C9467
 * 00000001401C9359: add     rsp, 8
 * 00000001401C935D: call    loc_1401C9470
 * 00000001401C9362: add     rsp, 8
 * 00000001401C9366: call    loc_1401C9359
 * 00000001401C936B: add     rsp, 8
 * 00000001401C936F: call    loc_1401C9362
 * 00000001401C9374: add     rsp, 8
 * 00000001401C9378: call    loc_1401C936B
 * 00000001401C937D: add     rsp, 8
 * 00000001401C9381: call    loc_1401C9374
 * 00000001401C9386: add     rsp, 8
 * 00000001401C938A: call    loc_1401C937D
 * 00000001401C938F: add     rsp, 8
 * 00000001401C9393: call    loc_1401C9386
 * 00000001401C9398: add     rsp, 8
 * 00000001401C939C: call    loc_1401C938F
 * 00000001401C93A1: add     rsp, 8
 * 00000001401C93A5: call    loc_1401C9398
 * 00000001401C93AA: add     rsp, 8
 * 00000001401C93AE: call    loc_1401C93A1
 * 00000001401C93B3: add     rsp, 8
 * 00000001401C93B7: call    loc_1401C93AA
 * 00000001401C93BC: add     rsp, 8
 * 00000001401C93C0: call    loc_1401C93B3
 * 00000001401C93C5: add     rsp, 8
 * 00000001401C93C9: call    loc_1401C93BC
 * 00000001401C93CE: add     rsp, 8
 * 00000001401C93D2: call    loc_1401C93C5
 * 00000001401C93D7: add     rsp, 8
 * 00000001401C93DB: call    loc_1401C93CE
 * 00000001401C93E0: add     rsp, 8
 * 00000001401C93E4: call    loc_1401C93D7
 * 00000001401C93E9: add     rsp, 8
 * 00000001401C93ED: call    loc_1401C93E0
 * 00000001401C93F2: add     rsp, 8
 * 00000001401C93F6: call    loc_1401C93E9
 * 00000001401C93FB: add     rsp, 8
 * 00000001401C93FF: call    loc_1401C93F2
 * 00000001401C9404: add     rsp, 8
 * 00000001401C9408: call    loc_1401C93FB
 * 00000001401C940D: add     rsp, 8
 * 00000001401C9411: call    loc_1401C9404
 * 00000001401C9416: add     rsp, 8
 * 00000001401C941A: call    loc_1401C940D
 * 00000001401C941F: add     rsp, 8
 * 00000001401C9423: call    loc_1401C9416
 * 00000001401C9428: add     rsp, 8
 * 00000001401C942C: call    loc_1401C941F
 * 00000001401C9431: add     rsp, 8
 * 00000001401C9435: call    loc_1401C9428
 * 00000001401C943A: add     rsp, 8
 * 00000001401C943E: call    loc_1401C9431
 * 00000001401C9443: add     rsp, 8
 * 00000001401C9447: call    loc_1401C943A
 * 00000001401C944C: add     rsp, 8
 * 00000001401C9450: call    loc_1401C9443
 * 00000001401C9455: add     rsp, 8
 * 00000001401C9459: call    loc_1401C944C
 * 00000001401C945E: add     rsp, 8
 * 00000001401C9462: call    loc_1401C9455
 * 00000001401C9467: add     rsp, 8
 * 00000001401C946B: call    loc_1401C945E
 * 00000001401C9470: add     rsp, 8
 * 00000001401C9474: lfence
 * 00000001401C9477: mov     byte ptr gs:853h, 0
 * 00000001401C9480: test    byte ptr [r10+3], 3
 * 00000001401C9485: mov     word ptr [rbp+80h], 0
 * 00000001401C948E: jz      short loc_1401C9495
 * 00000001401C9490: call    KiSaveDebugRegisterState
 * 00000001401C9495: cld
 * 00000001401C9496: stmxcsr dword ptr [rbp-54h]
 * 00000001401C949A: ldmxcsr dword ptr gs:180h
 * 00000001401C94A3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C94A7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C94AB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C94AF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C94B3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C94B7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C94BB: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C94C4: jz      short loc_1401C94CB
 * 00000001401C94C6: call    KeWakeProcessor
 * 00000001401C94CB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C94D2: cmp     rax, [rbp+0E8h]
 * 00000001401C94D9: jnb     short loc_1401C94F4
 * 00000001401C94DB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C94E2: cmp     rax, [rbp+0E8h]
 * 00000001401C94E9: jb      short loc_1401C94F4
 * 00000001401C94EB: lea     rcx, [rbp-80h]
 * 00000001401C94EF: call    KiCheckForSListAddress
 * 00000001401C94F4: xor     esi, esi
 * 00000001401C94F6: inc     dword ptr gs:5D00h
 * 00000001401C94FE: jmp     KiVmbusInterruptDispatch
 */
