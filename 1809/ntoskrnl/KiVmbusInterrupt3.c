/*
 * XREFs of KiVmbusInterrupt3 @ 0x1401C1D20
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x14032F180 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1401C1D20 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293C90 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1401C1D20
 * Reason: Hex-Rays returned no pseudocode for 0x1401C1D20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C1D20: push    4
 * 00000001401C1D22: push    rbp
 * 00000001401C1D23: push    rsi
 * 00000001401C1D24: sub     rsp, 150h
 * 00000001401C1D2B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C1D33: mov     byte ptr [rbp-55h], 0
 * 00000001401C1D37: mov     [rbp-50h], rax
 * 00000001401C1D3B: mov     [rbp-48h], rcx
 * 00000001401C1D3F: mov     [rbp-40h], rdx
 * 00000001401C1D43: mov     [rbp-38h], r8
 * 00000001401C1D47: mov     [rbp-30h], r9
 * 00000001401C1D4B: mov     [rbp-28h], r10
 * 00000001401C1D4F: mov     [rbp-20h], r11
 * 00000001401C1D53: test    byte ptr [rbp+0F0h], 1
 * 00000001401C1D5A: jnz     short loc_1401C1D8B
 * 00000001401C1D5C: lfence
 * 00000001401C1D5F: test    word ptr gs:860h, 1
 * 00000001401C1D6A: jnz     short loc_1401C1D74
 * 00000001401C1D6C: lfence
 * 00000001401C1D6F: jmp     loc_1401C1F94
 * 00000001401C1D74: movzx   eax, word ptr gs:864h
 * 00000001401C1D7D: mov     ecx, 48h ; 'H'
 * 00000001401C1D82: xor     edx, edx
 * 00000001401C1D84: wrmsr
 * 00000001401C1D86: jmp     loc_1401C1F94
 * 00000001401C1D8B: test    cs:KiKvaShadow, 1
 * 00000001401C1D92: jnz     short loc_1401C1D97
 * 00000001401C1D94: swapgs
 * 00000001401C1D97: lfence
 * 00000001401C1D9A: mov     r10, gs:188h
 * 00000001401C1DA3: mov     rcx, gs:188h
 * 00000001401C1DAC: mov     rcx, [rcx+220h]
 * 00000001401C1DB3: mov     rcx, [rcx+830h]
 * 00000001401C1DBA: mov     gs:858h, rcx
 * 00000001401C1DC3: mov     cx, gs:850h
 * 00000001401C1DCC: mov     gs:852h, cx
 * 00000001401C1DD5: mov     cx, gs:860h
 * 00000001401C1DDE: mov     gs:854h, cx
 * 00000001401C1DE7: movzx   eax, word ptr gs:866h
 * 00000001401C1DF0: cmp     gs:864h, ax
 * 00000001401C1DF9: jz      short loc_1401C1E0D
 * 00000001401C1DFB: mov     gs:864h, ax
 * 00000001401C1E04: mov     ecx, 48h ; 'H'
 * 00000001401C1E09: xor     edx, edx
 * 00000001401C1E0B: wrmsr
 * 00000001401C1E0D: movzx   edx, word ptr gs:860h
 * 00000001401C1E16: test    edx, 8
 * 00000001401C1E1C: jz      short loc_1401C1E35
 * 00000001401C1E1E: mov     eax, 1
 * 00000001401C1E23: xor     edx, edx
 * 00000001401C1E25: mov     ecx, 49h ; 'I'
 * 00000001401C1E2A: wrmsr
 * 00000001401C1E2C: movzx   edx, word ptr gs:860h
 * 00000001401C1E35: test    edx, 2
 * 00000001401C1E3B: jz      loc_1401C1F66
 * 00000001401C1E41: call    loc_1401C1F54
 * 00000001401C1E46: add     rsp, 8
 * 00000001401C1E4A: call    loc_1401C1F5D
 * 00000001401C1E4F: add     rsp, 8
 * 00000001401C1E53: call    loc_1401C1E46
 * 00000001401C1E58: add     rsp, 8
 * 00000001401C1E5C: call    loc_1401C1E4F
 * 00000001401C1E61: add     rsp, 8
 * 00000001401C1E65: call    loc_1401C1E58
 * 00000001401C1E6A: add     rsp, 8
 * 00000001401C1E6E: call    loc_1401C1E61
 * 00000001401C1E73: add     rsp, 8
 * 00000001401C1E77: call    loc_1401C1E6A
 * 00000001401C1E7C: add     rsp, 8
 * 00000001401C1E80: call    loc_1401C1E73
 * 00000001401C1E85: add     rsp, 8
 * 00000001401C1E89: call    loc_1401C1E7C
 * 00000001401C1E8E: add     rsp, 8
 * 00000001401C1E92: call    loc_1401C1E85
 * 00000001401C1E97: add     rsp, 8
 * 00000001401C1E9B: call    loc_1401C1E8E
 * 00000001401C1EA0: add     rsp, 8
 * 00000001401C1EA4: call    loc_1401C1E97
 * 00000001401C1EA9: add     rsp, 8
 * 00000001401C1EAD: call    loc_1401C1EA0
 * 00000001401C1EB2: add     rsp, 8
 * 00000001401C1EB6: call    loc_1401C1EA9
 * 00000001401C1EBB: add     rsp, 8
 * 00000001401C1EBF: call    loc_1401C1EB2
 * 00000001401C1EC4: add     rsp, 8
 * 00000001401C1EC8: call    loc_1401C1EBB
 * 00000001401C1ECD: add     rsp, 8
 * 00000001401C1ED1: call    loc_1401C1EC4
 * 00000001401C1ED6: add     rsp, 8
 * 00000001401C1EDA: call    loc_1401C1ECD
 * 00000001401C1EDF: add     rsp, 8
 * 00000001401C1EE3: call    loc_1401C1ED6
 * 00000001401C1EE8: add     rsp, 8
 * 00000001401C1EEC: call    loc_1401C1EDF
 * 00000001401C1EF1: add     rsp, 8
 * 00000001401C1EF5: call    loc_1401C1EE8
 * 00000001401C1EFA: add     rsp, 8
 * 00000001401C1EFE: call    loc_1401C1EF1
 * 00000001401C1F03: add     rsp, 8
 * 00000001401C1F07: call    loc_1401C1EFA
 * 00000001401C1F0C: add     rsp, 8
 * 00000001401C1F10: call    loc_1401C1F03
 * 00000001401C1F15: add     rsp, 8
 * 00000001401C1F19: call    loc_1401C1F0C
 * 00000001401C1F1E: add     rsp, 8
 * 00000001401C1F22: call    loc_1401C1F15
 * 00000001401C1F27: add     rsp, 8
 * 00000001401C1F2B: call    loc_1401C1F1E
 * 00000001401C1F30: add     rsp, 8
 * 00000001401C1F34: call    loc_1401C1F27
 * 00000001401C1F39: add     rsp, 8
 * 00000001401C1F3D: call    loc_1401C1F30
 * 00000001401C1F42: add     rsp, 8
 * 00000001401C1F46: call    loc_1401C1F39
 * 00000001401C1F4B: add     rsp, 8
 * 00000001401C1F4F: call    loc_1401C1F42
 * 00000001401C1F54: add     rsp, 8
 * 00000001401C1F58: call    loc_1401C1F4B
 * 00000001401C1F5D: add     rsp, 8
 * 00000001401C1F61: mov     eax, 0DADAh
 * 00000001401C1F66: test    edx, 200h
 * 00000001401C1F6C: jz      short loc_1401C1F73
 * 00000001401C1F6E: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C1F73: lfence
 * 00000001401C1F76: mov     byte ptr gs:856h, 0
 * 00000001401C1F7F: test    byte ptr [r10+3], 3
 * 00000001401C1F84: mov     word ptr [rbp+80h], 0
 * 00000001401C1F8D: jz      short loc_1401C1F94
 * 00000001401C1F8F: call    KiSaveDebugRegisterState
 * 00000001401C1F94: cld
 * 00000001401C1F95: stmxcsr dword ptr [rbp-54h]
 * 00000001401C1F99: ldmxcsr dword ptr gs:180h
 * 00000001401C1FA2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C1FA6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C1FAA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C1FAE: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C1FB2: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C1FB6: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C1FBA: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C1FC3: jz      short loc_1401C1FCA
 * 00000001401C1FC5: call    KeWakeProcessor
 * 00000001401C1FCA: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C1FD1: cmp     rax, [rbp+0E8h]
 * 00000001401C1FD8: jnb     short loc_1401C1FF3
 * 00000001401C1FDA: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1FE1: cmp     rax, [rbp+0E8h]
 * 00000001401C1FE8: jb      short loc_1401C1FF3
 * 00000001401C1FEA: lea     rcx, [rbp-80h]
 * 00000001401C1FEE: call    KiCheckForSListAddress
 * 00000001401C1FF3: xor     esi, esi
 * 00000001401C1FF5: inc     dword ptr gs:5D00h
 * 00000001401C1FFD: jmp     KiVmbusInterruptDispatch
 */
