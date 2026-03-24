/*
 * XREFs of KiVmbusInterrupt3 @ 0x1401C8C70
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140351180 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1401C8C70 (KiVmbusInterrupt3.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1401C8C70
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8C70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8C70: push    4
 * 00000001401C8C72: push    rbp
 * 00000001401C8C73: push    rsi
 * 00000001401C8C74: sub     rsp, 150h
 * 00000001401C8C7B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C8C83: mov     byte ptr [rbp-55h], 0
 * 00000001401C8C87: mov     [rbp-50h], rax
 * 00000001401C8C8B: mov     [rbp-48h], rcx
 * 00000001401C8C8F: mov     [rbp-40h], rdx
 * 00000001401C8C93: mov     [rbp-38h], r8
 * 00000001401C8C97: mov     [rbp-30h], r9
 * 00000001401C8C9B: mov     [rbp-28h], r10
 * 00000001401C8C9F: mov     [rbp-20h], r11
 * 00000001401C8CA3: test    byte ptr [rbp+0F0h], 1
 * 00000001401C8CAA: jnz     short loc_1401C8CD9
 * 00000001401C8CAC: lfence
 * 00000001401C8CAF: test    byte ptr gs:278h, 1
 * 00000001401C8CB8: jnz     short loc_1401C8CC2
 * 00000001401C8CBA: lfence
 * 00000001401C8CBD: jmp     loc_1401C8ED5
 * 00000001401C8CC2: movzx   eax, byte ptr gs:27Ah
 * 00000001401C8CCB: mov     ecx, 48h ; 'H'
 * 00000001401C8CD0: xor     edx, edx
 * 00000001401C8CD2: wrmsr
 * 00000001401C8CD4: jmp     loc_1401C8ED5
 * 00000001401C8CD9: test    cs:KiKvaShadow, 1
 * 00000001401C8CE0: jnz     short loc_1401C8CE5
 * 00000001401C8CE2: swapgs
 * 00000001401C8CE5: lfence
 * 00000001401C8CE8: mov     r10, gs:188h
 * 00000001401C8CF1: mov     rcx, gs:188h
 * 00000001401C8CFA: mov     rcx, [rcx+220h]
 * 00000001401C8D01: mov     rcx, [rcx+860h]
 * 00000001401C8D08: mov     gs:270h, rcx
 * 00000001401C8D11: mov     cl, gs:850h
 * 00000001401C8D19: mov     gs:851h, cl
 * 00000001401C8D21: mov     cl, gs:278h
 * 00000001401C8D29: mov     gs:852h, cl
 * 00000001401C8D31: movzx   eax, byte ptr gs:27Bh
 * 00000001401C8D3A: cmp     gs:27Ah, al
 * 00000001401C8D42: jz      short loc_1401C8D55
 * 00000001401C8D44: mov     gs:27Ah, al
 * 00000001401C8D4C: mov     ecx, 48h ; 'H'
 * 00000001401C8D51: xor     edx, edx
 * 00000001401C8D53: wrmsr
 * 00000001401C8D55: movzx   edx, byte ptr gs:278h
 * 00000001401C8D5E: test    edx, 8
 * 00000001401C8D64: jz      short loc_1401C8D79
 * 00000001401C8D66: mov     eax, 1
 * 00000001401C8D6B: xor     edx, edx
 * 00000001401C8D6D: mov     ecx, 49h ; 'I'
 * 00000001401C8D72: wrmsr
 * 00000001401C8D74: jmp     loc_1401C8EB7
 * 00000001401C8D79: test    edx, 2
 * 00000001401C8D7F: jz      loc_1401C8EB4
 * 00000001401C8D85: test    byte ptr gs:279h, 4
 * 00000001401C8D8E: jnz     loc_1401C8EB4
 * 00000001401C8D94: call    loc_1401C8EA7
 * 00000001401C8D99: add     rsp, 8
 * 00000001401C8D9D: call    loc_1401C8EB0
 * 00000001401C8DA2: add     rsp, 8
 * 00000001401C8DA6: call    loc_1401C8D99
 * 00000001401C8DAB: add     rsp, 8
 * 00000001401C8DAF: call    loc_1401C8DA2
 * 00000001401C8DB4: add     rsp, 8
 * 00000001401C8DB8: call    loc_1401C8DAB
 * 00000001401C8DBD: add     rsp, 8
 * 00000001401C8DC1: call    loc_1401C8DB4
 * 00000001401C8DC6: add     rsp, 8
 * 00000001401C8DCA: call    loc_1401C8DBD
 * 00000001401C8DCF: add     rsp, 8
 * 00000001401C8DD3: call    loc_1401C8DC6
 * 00000001401C8DD8: add     rsp, 8
 * 00000001401C8DDC: call    loc_1401C8DCF
 * 00000001401C8DE1: add     rsp, 8
 * 00000001401C8DE5: call    loc_1401C8DD8
 * 00000001401C8DEA: add     rsp, 8
 * 00000001401C8DEE: call    loc_1401C8DE1
 * 00000001401C8DF3: add     rsp, 8
 * 00000001401C8DF7: call    loc_1401C8DEA
 * 00000001401C8DFC: add     rsp, 8
 * 00000001401C8E00: call    loc_1401C8DF3
 * 00000001401C8E05: add     rsp, 8
 * 00000001401C8E09: call    loc_1401C8DFC
 * 00000001401C8E0E: add     rsp, 8
 * 00000001401C8E12: call    loc_1401C8E05
 * 00000001401C8E17: add     rsp, 8
 * 00000001401C8E1B: call    loc_1401C8E0E
 * 00000001401C8E20: add     rsp, 8
 * 00000001401C8E24: call    loc_1401C8E17
 * 00000001401C8E29: add     rsp, 8
 * 00000001401C8E2D: call    loc_1401C8E20
 * 00000001401C8E32: add     rsp, 8
 * 00000001401C8E36: call    loc_1401C8E29
 * 00000001401C8E3B: add     rsp, 8
 * 00000001401C8E3F: call    loc_1401C8E32
 * 00000001401C8E44: add     rsp, 8
 * 00000001401C8E48: call    loc_1401C8E3B
 * 00000001401C8E4D: add     rsp, 8
 * 00000001401C8E51: call    loc_1401C8E44
 * 00000001401C8E56: add     rsp, 8
 * 00000001401C8E5A: call    loc_1401C8E4D
 * 00000001401C8E5F: add     rsp, 8
 * 00000001401C8E63: call    loc_1401C8E56
 * 00000001401C8E68: add     rsp, 8
 * 00000001401C8E6C: call    loc_1401C8E5F
 * 00000001401C8E71: add     rsp, 8
 * 00000001401C8E75: call    loc_1401C8E68
 * 00000001401C8E7A: add     rsp, 8
 * 00000001401C8E7E: call    loc_1401C8E71
 * 00000001401C8E83: add     rsp, 8
 * 00000001401C8E87: call    loc_1401C8E7A
 * 00000001401C8E8C: add     rsp, 8
 * 00000001401C8E90: call    loc_1401C8E83
 * 00000001401C8E95: add     rsp, 8
 * 00000001401C8E99: call    loc_1401C8E8C
 * 00000001401C8E9E: add     rsp, 8
 * 00000001401C8EA2: call    loc_1401C8E95
 * 00000001401C8EA7: add     rsp, 8
 * 00000001401C8EAB: call    loc_1401C8E9E
 * 00000001401C8EB0: add     rsp, 8
 * 00000001401C8EB4: lfence
 * 00000001401C8EB7: mov     byte ptr gs:853h, 0
 * 00000001401C8EC0: test    byte ptr [r10+3], 3
 * 00000001401C8EC5: mov     word ptr [rbp+80h], 0
 * 00000001401C8ECE: jz      short loc_1401C8ED5
 * 00000001401C8ED0: call    KiSaveDebugRegisterState
 * 00000001401C8ED5: cld
 * 00000001401C8ED6: stmxcsr dword ptr [rbp-54h]
 * 00000001401C8EDA: ldmxcsr dword ptr gs:180h
 * 00000001401C8EE3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C8EE7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C8EEB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C8EEF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C8EF3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C8EF7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C8EFB: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C8F04: jz      short loc_1401C8F0B
 * 00000001401C8F06: call    KeWakeProcessor
 * 00000001401C8F0B: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C8F12: cmp     rax, [rbp+0E8h]
 * 00000001401C8F19: jnb     short loc_1401C8F34
 * 00000001401C8F1B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C8F22: cmp     rax, [rbp+0E8h]
 * 00000001401C8F29: jb      short loc_1401C8F34
 * 00000001401C8F2B: lea     rcx, [rbp-80h]
 * 00000001401C8F2F: call    KiCheckForSListAddress
 * 00000001401C8F34: xor     esi, esi
 * 00000001401C8F36: inc     dword ptr gs:5D00h
 * 00000001401C8F3E: jmp     KiVmbusInterruptDispatch
 */
