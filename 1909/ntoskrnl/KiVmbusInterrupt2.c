/*
 * XREFs of KiVmbusInterrupt2 @ 0x1401C9510
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140351100 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x1401C9510 (KiVmbusInterrupt2.c)
 *     KeWakeProcessor @ 0x1402AA3D0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x1401C9510
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9510
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9510: push    3
 * 00000001401C9512: push    rbp
 * 00000001401C9513: push    rsi
 * 00000001401C9514: sub     rsp, 150h
 * 00000001401C951B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C9523: mov     byte ptr [rbp-55h], 0
 * 00000001401C9527: mov     [rbp-50h], rax
 * 00000001401C952B: mov     [rbp-48h], rcx
 * 00000001401C952F: mov     [rbp-40h], rdx
 * 00000001401C9533: mov     [rbp-38h], r8
 * 00000001401C9537: mov     [rbp-30h], r9
 * 00000001401C953B: mov     [rbp-28h], r10
 * 00000001401C953F: mov     [rbp-20h], r11
 * 00000001401C9543: test    byte ptr [rbp+0F0h], 1
 * 00000001401C954A: jnz     short loc_1401C9579
 * 00000001401C954C: lfence
 * 00000001401C954F: test    byte ptr gs:278h, 1
 * 00000001401C9558: jnz     short loc_1401C9562
 * 00000001401C955A: lfence
 * 00000001401C955D: jmp     loc_1401C9775
 * 00000001401C9562: movzx   eax, byte ptr gs:27Ah
 * 00000001401C956B: mov     ecx, 48h ; 'H'
 * 00000001401C9570: xor     edx, edx
 * 00000001401C9572: wrmsr
 * 00000001401C9574: jmp     loc_1401C9775
 * 00000001401C9579: test    cs:KiKvaShadow, 1
 * 00000001401C9580: jnz     short loc_1401C9585
 * 00000001401C9582: swapgs
 * 00000001401C9585: lfence
 * 00000001401C9588: mov     r10, gs:188h
 * 00000001401C9591: mov     rcx, gs:188h
 * 00000001401C959A: mov     rcx, [rcx+220h]
 * 00000001401C95A1: mov     rcx, [rcx+860h]
 * 00000001401C95A8: mov     gs:270h, rcx
 * 00000001401C95B1: mov     cl, gs:850h
 * 00000001401C95B9: mov     gs:851h, cl
 * 00000001401C95C1: mov     cl, gs:278h
 * 00000001401C95C9: mov     gs:852h, cl
 * 00000001401C95D1: movzx   eax, byte ptr gs:27Bh
 * 00000001401C95DA: cmp     gs:27Ah, al
 * 00000001401C95E2: jz      short loc_1401C95F5
 * 00000001401C95E4: mov     gs:27Ah, al
 * 00000001401C95EC: mov     ecx, 48h ; 'H'
 * 00000001401C95F1: xor     edx, edx
 * 00000001401C95F3: wrmsr
 * 00000001401C95F5: movzx   edx, byte ptr gs:278h
 * 00000001401C95FE: test    edx, 8
 * 00000001401C9604: jz      short loc_1401C9619
 * 00000001401C9606: mov     eax, 1
 * 00000001401C960B: xor     edx, edx
 * 00000001401C960D: mov     ecx, 49h ; 'I'
 * 00000001401C9612: wrmsr
 * 00000001401C9614: jmp     loc_1401C9757
 * 00000001401C9619: test    edx, 2
 * 00000001401C961F: jz      loc_1401C9754
 * 00000001401C9625: test    byte ptr gs:279h, 4
 * 00000001401C962E: jnz     loc_1401C9754
 * 00000001401C9634: call    loc_1401C9747
 * 00000001401C9639: add     rsp, 8
 * 00000001401C963D: call    loc_1401C9750
 * 00000001401C9642: add     rsp, 8
 * 00000001401C9646: call    loc_1401C9639
 * 00000001401C964B: add     rsp, 8
 * 00000001401C964F: call    loc_1401C9642
 * 00000001401C9654: add     rsp, 8
 * 00000001401C9658: call    loc_1401C964B
 * 00000001401C965D: add     rsp, 8
 * 00000001401C9661: call    loc_1401C9654
 * 00000001401C9666: add     rsp, 8
 * 00000001401C966A: call    loc_1401C965D
 * 00000001401C966F: add     rsp, 8
 * 00000001401C9673: call    loc_1401C9666
 * 00000001401C9678: add     rsp, 8
 * 00000001401C967C: call    loc_1401C966F
 * 00000001401C9681: add     rsp, 8
 * 00000001401C9685: call    loc_1401C9678
 * 00000001401C968A: add     rsp, 8
 * 00000001401C968E: call    loc_1401C9681
 * 00000001401C9693: add     rsp, 8
 * 00000001401C9697: call    loc_1401C968A
 * 00000001401C969C: add     rsp, 8
 * 00000001401C96A0: call    loc_1401C9693
 * 00000001401C96A5: add     rsp, 8
 * 00000001401C96A9: call    loc_1401C969C
 * 00000001401C96AE: add     rsp, 8
 * 00000001401C96B2: call    loc_1401C96A5
 * 00000001401C96B7: add     rsp, 8
 * 00000001401C96BB: call    loc_1401C96AE
 * 00000001401C96C0: add     rsp, 8
 * 00000001401C96C4: call    loc_1401C96B7
 * 00000001401C96C9: add     rsp, 8
 * 00000001401C96CD: call    loc_1401C96C0
 * 00000001401C96D2: add     rsp, 8
 * 00000001401C96D6: call    loc_1401C96C9
 * 00000001401C96DB: add     rsp, 8
 * 00000001401C96DF: call    loc_1401C96D2
 * 00000001401C96E4: add     rsp, 8
 * 00000001401C96E8: call    loc_1401C96DB
 * 00000001401C96ED: add     rsp, 8
 * 00000001401C96F1: call    loc_1401C96E4
 * 00000001401C96F6: add     rsp, 8
 * 00000001401C96FA: call    loc_1401C96ED
 * 00000001401C96FF: add     rsp, 8
 * 00000001401C9703: call    loc_1401C96F6
 * 00000001401C9708: add     rsp, 8
 * 00000001401C970C: call    loc_1401C96FF
 * 00000001401C9711: add     rsp, 8
 * 00000001401C9715: call    loc_1401C9708
 * 00000001401C971A: add     rsp, 8
 * 00000001401C971E: call    loc_1401C9711
 * 00000001401C9723: add     rsp, 8
 * 00000001401C9727: call    loc_1401C971A
 * 00000001401C972C: add     rsp, 8
 * 00000001401C9730: call    loc_1401C9723
 * 00000001401C9735: add     rsp, 8
 * 00000001401C9739: call    loc_1401C972C
 * 00000001401C973E: add     rsp, 8
 * 00000001401C9742: call    loc_1401C9735
 * 00000001401C9747: add     rsp, 8
 * 00000001401C974B: call    loc_1401C973E
 * 00000001401C9750: add     rsp, 8
 * 00000001401C9754: lfence
 * 00000001401C9757: mov     byte ptr gs:853h, 0
 * 00000001401C9760: test    byte ptr [r10+3], 3
 * 00000001401C9765: mov     word ptr [rbp+80h], 0
 * 00000001401C976E: jz      short loc_1401C9775
 * 00000001401C9770: call    KiSaveDebugRegisterState
 * 00000001401C9775: cld
 * 00000001401C9776: stmxcsr dword ptr [rbp-54h]
 * 00000001401C977A: ldmxcsr dword ptr gs:180h
 * 00000001401C9783: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C9787: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C978B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C978F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C9793: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C9797: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C979B: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C97A4: jz      short loc_1401C97AB
 * 00000001401C97A6: call    KeWakeProcessor
 * 00000001401C97AB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C97B2: cmp     rax, [rbp+0E8h]
 * 00000001401C97B9: jnb     short loc_1401C97D4
 * 00000001401C97BB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C97C2: cmp     rax, [rbp+0E8h]
 * 00000001401C97C9: jb      short loc_1401C97D4
 * 00000001401C97CB: lea     rcx, [rbp-80h]
 * 00000001401C97CF: call    KiCheckForSListAddress
 * 00000001401C97D4: xor     esi, esi
 * 00000001401C97D6: inc     dword ptr gs:5D00h
 * 00000001401C97DE: jmp     KiVmbusInterruptDispatch
 */
