/*
 * XREFs of KiVmbusInterrupt3 @ 0x1401C1E80
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140330180 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1401C1E80 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1401C1E80
 * Reason: Hex-Rays returned no pseudocode for 0x1401C1E80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C1E80: push    4
 * 00000001401C1E82: push    rbp
 * 00000001401C1E83: push    rsi
 * 00000001401C1E84: sub     rsp, 150h
 * 00000001401C1E8B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C1E93: mov     byte ptr [rbp-55h], 0
 * 00000001401C1E97: mov     [rbp-50h], rax
 * 00000001401C1E9B: mov     [rbp-48h], rcx
 * 00000001401C1E9F: mov     [rbp-40h], rdx
 * 00000001401C1EA3: mov     [rbp-38h], r8
 * 00000001401C1EA7: mov     [rbp-30h], r9
 * 00000001401C1EAB: mov     [rbp-28h], r10
 * 00000001401C1EAF: mov     [rbp-20h], r11
 * 00000001401C1EB3: test    byte ptr [rbp+0F0h], 1
 * 00000001401C1EBA: jnz     short loc_1401C1EEB
 * 00000001401C1EBC: lfence
 * 00000001401C1EBF: test    word ptr gs:860h, 1
 * 00000001401C1ECA: jnz     short loc_1401C1ED4
 * 00000001401C1ECC: lfence
 * 00000001401C1ECF: jmp     loc_1401C20F4
 * 00000001401C1ED4: movzx   eax, word ptr gs:864h
 * 00000001401C1EDD: mov     ecx, 48h ; 'H'
 * 00000001401C1EE2: xor     edx, edx
 * 00000001401C1EE4: wrmsr
 * 00000001401C1EE6: jmp     loc_1401C20F4
 * 00000001401C1EEB: test    cs:KiKvaShadow, 1
 * 00000001401C1EF2: jnz     short loc_1401C1EF7
 * 00000001401C1EF4: swapgs
 * 00000001401C1EF7: lfence
 * 00000001401C1EFA: mov     r10, gs:188h
 * 00000001401C1F03: mov     rcx, gs:188h
 * 00000001401C1F0C: mov     rcx, [rcx+220h]
 * 00000001401C1F13: mov     rcx, [rcx+830h]
 * 00000001401C1F1A: mov     gs:858h, rcx
 * 00000001401C1F23: mov     cx, gs:850h
 * 00000001401C1F2C: mov     gs:852h, cx
 * 00000001401C1F35: mov     cx, gs:860h
 * 00000001401C1F3E: mov     gs:854h, cx
 * 00000001401C1F47: movzx   eax, word ptr gs:866h
 * 00000001401C1F50: cmp     gs:864h, ax
 * 00000001401C1F59: jz      short loc_1401C1F6D
 * 00000001401C1F5B: mov     gs:864h, ax
 * 00000001401C1F64: mov     ecx, 48h ; 'H'
 * 00000001401C1F69: xor     edx, edx
 * 00000001401C1F6B: wrmsr
 * 00000001401C1F6D: movzx   edx, word ptr gs:860h
 * 00000001401C1F76: test    edx, 8
 * 00000001401C1F7C: jz      short loc_1401C1F95
 * 00000001401C1F7E: mov     eax, 1
 * 00000001401C1F83: xor     edx, edx
 * 00000001401C1F85: mov     ecx, 49h ; 'I'
 * 00000001401C1F8A: wrmsr
 * 00000001401C1F8C: movzx   edx, word ptr gs:860h
 * 00000001401C1F95: test    edx, 2
 * 00000001401C1F9B: jz      loc_1401C20C6
 * 00000001401C1FA1: call    loc_1401C20B4
 * 00000001401C1FA6: add     rsp, 8
 * 00000001401C1FAA: call    loc_1401C20BD
 * 00000001401C1FAF: add     rsp, 8
 * 00000001401C1FB3: call    loc_1401C1FA6
 * 00000001401C1FB8: add     rsp, 8
 * 00000001401C1FBC: call    loc_1401C1FAF
 * 00000001401C1FC1: add     rsp, 8
 * 00000001401C1FC5: call    loc_1401C1FB8
 * 00000001401C1FCA: add     rsp, 8
 * 00000001401C1FCE: call    loc_1401C1FC1
 * 00000001401C1FD3: add     rsp, 8
 * 00000001401C1FD7: call    loc_1401C1FCA
 * 00000001401C1FDC: add     rsp, 8
 * 00000001401C1FE0: call    loc_1401C1FD3
 * 00000001401C1FE5: add     rsp, 8
 * 00000001401C1FE9: call    loc_1401C1FDC
 * 00000001401C1FEE: add     rsp, 8
 * 00000001401C1FF2: call    loc_1401C1FE5
 * 00000001401C1FF7: add     rsp, 8
 * 00000001401C1FFB: call    loc_1401C1FEE
 * 00000001401C2000: add     rsp, 8
 * 00000001401C2004: call    loc_1401C1FF7
 * 00000001401C2009: add     rsp, 8
 * 00000001401C200D: call    loc_1401C2000
 * 00000001401C2012: add     rsp, 8
 * 00000001401C2016: call    loc_1401C2009
 * 00000001401C201B: add     rsp, 8
 * 00000001401C201F: call    loc_1401C2012
 * 00000001401C2024: add     rsp, 8
 * 00000001401C2028: call    loc_1401C201B
 * 00000001401C202D: add     rsp, 8
 * 00000001401C2031: call    loc_1401C2024
 * 00000001401C2036: add     rsp, 8
 * 00000001401C203A: call    loc_1401C202D
 * 00000001401C203F: add     rsp, 8
 * 00000001401C2043: call    loc_1401C2036
 * 00000001401C2048: add     rsp, 8
 * 00000001401C204C: call    loc_1401C203F
 * 00000001401C2051: add     rsp, 8
 * 00000001401C2055: call    loc_1401C2048
 * 00000001401C205A: add     rsp, 8
 * 00000001401C205E: call    loc_1401C2051
 * 00000001401C2063: add     rsp, 8
 * 00000001401C2067: call    loc_1401C205A
 * 00000001401C206C: add     rsp, 8
 * 00000001401C2070: call    loc_1401C2063
 * 00000001401C2075: add     rsp, 8
 * 00000001401C2079: call    loc_1401C206C
 * 00000001401C207E: add     rsp, 8
 * 00000001401C2082: call    loc_1401C2075
 * 00000001401C2087: add     rsp, 8
 * 00000001401C208B: call    loc_1401C207E
 * 00000001401C2090: add     rsp, 8
 * 00000001401C2094: call    loc_1401C2087
 * 00000001401C2099: add     rsp, 8
 * 00000001401C209D: call    loc_1401C2090
 * 00000001401C20A2: add     rsp, 8
 * 00000001401C20A6: call    loc_1401C2099
 * 00000001401C20AB: add     rsp, 8
 * 00000001401C20AF: call    loc_1401C20A2
 * 00000001401C20B4: add     rsp, 8
 * 00000001401C20B8: call    loc_1401C20AB
 * 00000001401C20BD: add     rsp, 8
 * 00000001401C20C1: mov     eax, 0DADAh
 * 00000001401C20C6: test    edx, 200h
 * 00000001401C20CC: jz      short loc_1401C20D3
 * 00000001401C20CE: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C20D3: lfence
 * 00000001401C20D6: mov     byte ptr gs:856h, 0
 * 00000001401C20DF: test    byte ptr [r10+3], 3
 * 00000001401C20E4: mov     word ptr [rbp+80h], 0
 * 00000001401C20ED: jz      short loc_1401C20F4
 * 00000001401C20EF: call    KiSaveDebugRegisterState
 * 00000001401C20F4: cld
 * 00000001401C20F5: stmxcsr dword ptr [rbp-54h]
 * 00000001401C20F9: ldmxcsr dword ptr gs:180h
 * 00000001401C2102: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C2106: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C210A: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C210E: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C2112: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C2116: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C211A: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C2123: jz      short loc_1401C212A
 * 00000001401C2125: call    KeWakeProcessor
 * 00000001401C212A: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C2131: cmp     rax, [rbp+0E8h]
 * 00000001401C2138: jnb     short loc_1401C2153
 * 00000001401C213A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C2141: cmp     rax, [rbp+0E8h]
 * 00000001401C2148: jb      short loc_1401C2153
 * 00000001401C214A: lea     rcx, [rbp-80h]
 * 00000001401C214E: call    KiCheckForSListAddress
 * 00000001401C2153: xor     esi, esi
 * 00000001401C2155: inc     dword ptr gs:5D00h
 * 00000001401C215D: jmp     KiVmbusInterruptDispatch
 */
