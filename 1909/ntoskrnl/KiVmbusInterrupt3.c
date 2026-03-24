/*
 * XREFs of KiVmbusInterrupt3 @ 0x1401C97F0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140351180 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1401C97F0 (KiVmbusInterrupt3.c)
 *     KeWakeProcessor @ 0x1402AA3D0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1401C97F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C97F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C97F0: push    4
 * 00000001401C97F2: push    rbp
 * 00000001401C97F3: push    rsi
 * 00000001401C97F4: sub     rsp, 150h
 * 00000001401C97FB: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C9803: mov     byte ptr [rbp-55h], 0
 * 00000001401C9807: mov     [rbp-50h], rax
 * 00000001401C980B: mov     [rbp-48h], rcx
 * 00000001401C980F: mov     [rbp-40h], rdx
 * 00000001401C9813: mov     [rbp-38h], r8
 * 00000001401C9817: mov     [rbp-30h], r9
 * 00000001401C981B: mov     [rbp-28h], r10
 * 00000001401C981F: mov     [rbp-20h], r11
 * 00000001401C9823: test    byte ptr [rbp+0F0h], 1
 * 00000001401C982A: jnz     short loc_1401C9859
 * 00000001401C982C: lfence
 * 00000001401C982F: test    byte ptr gs:278h, 1
 * 00000001401C9838: jnz     short loc_1401C9842
 * 00000001401C983A: lfence
 * 00000001401C983D: jmp     loc_1401C9A55
 * 00000001401C9842: movzx   eax, byte ptr gs:27Ah
 * 00000001401C984B: mov     ecx, 48h ; 'H'
 * 00000001401C9850: xor     edx, edx
 * 00000001401C9852: wrmsr
 * 00000001401C9854: jmp     loc_1401C9A55
 * 00000001401C9859: test    cs:KiKvaShadow, 1
 * 00000001401C9860: jnz     short loc_1401C9865
 * 00000001401C9862: swapgs
 * 00000001401C9865: lfence
 * 00000001401C9868: mov     r10, gs:188h
 * 00000001401C9871: mov     rcx, gs:188h
 * 00000001401C987A: mov     rcx, [rcx+220h]
 * 00000001401C9881: mov     rcx, [rcx+860h]
 * 00000001401C9888: mov     gs:270h, rcx
 * 00000001401C9891: mov     cl, gs:850h
 * 00000001401C9899: mov     gs:851h, cl
 * 00000001401C98A1: mov     cl, gs:278h
 * 00000001401C98A9: mov     gs:852h, cl
 * 00000001401C98B1: movzx   eax, byte ptr gs:27Bh
 * 00000001401C98BA: cmp     gs:27Ah, al
 * 00000001401C98C2: jz      short loc_1401C98D5
 * 00000001401C98C4: mov     gs:27Ah, al
 * 00000001401C98CC: mov     ecx, 48h ; 'H'
 * 00000001401C98D1: xor     edx, edx
 * 00000001401C98D3: wrmsr
 * 00000001401C98D5: movzx   edx, byte ptr gs:278h
 * 00000001401C98DE: test    edx, 8
 * 00000001401C98E4: jz      short loc_1401C98F9
 * 00000001401C98E6: mov     eax, 1
 * 00000001401C98EB: xor     edx, edx
 * 00000001401C98ED: mov     ecx, 49h ; 'I'
 * 00000001401C98F2: wrmsr
 * 00000001401C98F4: jmp     loc_1401C9A37
 * 00000001401C98F9: test    edx, 2
 * 00000001401C98FF: jz      loc_1401C9A34
 * 00000001401C9905: test    byte ptr gs:279h, 4
 * 00000001401C990E: jnz     loc_1401C9A34
 * 00000001401C9914: call    loc_1401C9A27
 * 00000001401C9919: add     rsp, 8
 * 00000001401C991D: call    loc_1401C9A30
 * 00000001401C9922: add     rsp, 8
 * 00000001401C9926: call    loc_1401C9919
 * 00000001401C992B: add     rsp, 8
 * 00000001401C992F: call    loc_1401C9922
 * 00000001401C9934: add     rsp, 8
 * 00000001401C9938: call    loc_1401C992B
 * 00000001401C993D: add     rsp, 8
 * 00000001401C9941: call    loc_1401C9934
 * 00000001401C9946: add     rsp, 8
 * 00000001401C994A: call    loc_1401C993D
 * 00000001401C994F: add     rsp, 8
 * 00000001401C9953: call    loc_1401C9946
 * 00000001401C9958: add     rsp, 8
 * 00000001401C995C: call    loc_1401C994F
 * 00000001401C9961: add     rsp, 8
 * 00000001401C9965: call    loc_1401C9958
 * 00000001401C996A: add     rsp, 8
 * 00000001401C996E: call    loc_1401C9961
 * 00000001401C9973: add     rsp, 8
 * 00000001401C9977: call    loc_1401C996A
 * 00000001401C997C: add     rsp, 8
 * 00000001401C9980: call    loc_1401C9973
 * 00000001401C9985: add     rsp, 8
 * 00000001401C9989: call    loc_1401C997C
 * 00000001401C998E: add     rsp, 8
 * 00000001401C9992: call    loc_1401C9985
 * 00000001401C9997: add     rsp, 8
 * 00000001401C999B: call    loc_1401C998E
 * 00000001401C99A0: add     rsp, 8
 * 00000001401C99A4: call    loc_1401C9997
 * 00000001401C99A9: add     rsp, 8
 * 00000001401C99AD: call    loc_1401C99A0
 * 00000001401C99B2: add     rsp, 8
 * 00000001401C99B6: call    loc_1401C99A9
 * 00000001401C99BB: add     rsp, 8
 * 00000001401C99BF: call    loc_1401C99B2
 * 00000001401C99C4: add     rsp, 8
 * 00000001401C99C8: call    loc_1401C99BB
 * 00000001401C99CD: add     rsp, 8
 * 00000001401C99D1: call    loc_1401C99C4
 * 00000001401C99D6: add     rsp, 8
 * 00000001401C99DA: call    loc_1401C99CD
 * 00000001401C99DF: add     rsp, 8
 * 00000001401C99E3: call    loc_1401C99D6
 * 00000001401C99E8: add     rsp, 8
 * 00000001401C99EC: call    loc_1401C99DF
 * 00000001401C99F1: add     rsp, 8
 * 00000001401C99F5: call    loc_1401C99E8
 * 00000001401C99FA: add     rsp, 8
 * 00000001401C99FE: call    loc_1401C99F1
 * 00000001401C9A03: add     rsp, 8
 * 00000001401C9A07: call    loc_1401C99FA
 * 00000001401C9A0C: add     rsp, 8
 * 00000001401C9A10: call    loc_1401C9A03
 * 00000001401C9A15: add     rsp, 8
 * 00000001401C9A19: call    loc_1401C9A0C
 * 00000001401C9A1E: add     rsp, 8
 * 00000001401C9A22: call    loc_1401C9A15
 * 00000001401C9A27: add     rsp, 8
 * 00000001401C9A2B: call    loc_1401C9A1E
 * 00000001401C9A30: add     rsp, 8
 * 00000001401C9A34: lfence
 * 00000001401C9A37: mov     byte ptr gs:853h, 0
 * 00000001401C9A40: test    byte ptr [r10+3], 3
 * 00000001401C9A45: mov     word ptr [rbp+80h], 0
 * 00000001401C9A4E: jz      short loc_1401C9A55
 * 00000001401C9A50: call    KiSaveDebugRegisterState
 * 00000001401C9A55: cld
 * 00000001401C9A56: stmxcsr dword ptr [rbp-54h]
 * 00000001401C9A5A: ldmxcsr dword ptr gs:180h
 * 00000001401C9A63: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C9A67: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C9A6B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C9A6F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C9A73: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C9A77: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C9A7B: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C9A84: jz      short loc_1401C9A8B
 * 00000001401C9A86: call    KeWakeProcessor
 * 00000001401C9A8B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C9A92: cmp     rax, [rbp+0E8h]
 * 00000001401C9A99: jnb     short loc_1401C9AB4
 * 00000001401C9A9B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C9AA2: cmp     rax, [rbp+0E8h]
 * 00000001401C9AA9: jb      short loc_1401C9AB4
 * 00000001401C9AAB: lea     rcx, [rbp-80h]
 * 00000001401C9AAF: call    KiCheckForSListAddress
 * 00000001401C9AB4: xor     esi, esi
 * 00000001401C9AB6: inc     dword ptr gs:5D00h
 * 00000001401C9ABE: jmp     KiVmbusInterruptDispatch
 */
