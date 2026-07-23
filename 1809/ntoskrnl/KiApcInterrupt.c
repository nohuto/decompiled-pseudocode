/*
 * XREFs of KiApcInterrupt @ 0x1401C0BD0
 * Callers:
 *     KiApcInterruptShadow @ 0x14032FC00 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1401C0BD0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x1401C0BD0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C0BD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C0BD0: sub     rsp, 8
 * 00000001401C0BD4: push    rbp
 * 00000001401C0BD5: push    rsi
 * 00000001401C0BD6: sub     rsp, 150h
 * 00000001401C0BDD: lea     rbp, [rsp+80h]
 * 00000001401C0BE5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C0BE9: mov     [rbp+0E8h+var_138], rax
 * 00000001401C0BED: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C0BF1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C0BF5: mov     [rbp+0E8h+var_120], r8
 * 00000001401C0BF9: mov     [rbp+0E8h+var_118], r9
 * 00000001401C0BFD: mov     [rbp+0E8h+var_110], r10
 * 00000001401C0C01: mov     [rbp+0E8h+var_108], r11
 * 00000001401C0C05: test    [rbp+0E8h+arg_0], 1
 * 00000001401C0C0C: jnz     short loc_1401C0C3D
 * 00000001401C0C0E: lfence
 * 00000001401C0C11: test    word ptr gs:860h, 1
 * 00000001401C0C1C: jnz     short loc_1401C0C26
 * 00000001401C0C1E: lfence
 * 00000001401C0C21: jmp     loc_1401C0E46
 * 00000001401C0C26: movzx   eax, word ptr gs:864h
 * 00000001401C0C2F: mov     ecx, 48h ; 'H'
 * 00000001401C0C34: xor     edx, edx
 * 00000001401C0C36: wrmsr
 * 00000001401C0C38: jmp     loc_1401C0E46
 * 00000001401C0C3D: test    cs:KiKvaShadow, 1
 * 00000001401C0C44: jnz     short loc_1401C0C49
 * 00000001401C0C46: swapgs
 * 00000001401C0C49: lfence
 * 00000001401C0C4C: mov     r10, gs:188h
 * 00000001401C0C55: mov     rcx, gs:188h
 * 00000001401C0C5E: mov     rcx, [rcx+220h]
 * 00000001401C0C65: mov     rcx, [rcx+830h]
 * 00000001401C0C6C: mov     gs:858h, rcx
 * 00000001401C0C75: mov     cx, gs:850h
 * 00000001401C0C7E: mov     gs:852h, cx
 * 00000001401C0C87: mov     cx, gs:860h
 * 00000001401C0C90: mov     gs:854h, cx
 * 00000001401C0C99: movzx   eax, word ptr gs:866h
 * 00000001401C0CA2: cmp     gs:864h, ax
 * 00000001401C0CAB: jz      short loc_1401C0CBF
 * 00000001401C0CAD: mov     gs:864h, ax
 * 00000001401C0CB6: mov     ecx, 48h ; 'H'
 * 00000001401C0CBB: xor     edx, edx
 * 00000001401C0CBD: wrmsr
 * 00000001401C0CBF: movzx   edx, word ptr gs:860h
 * 00000001401C0CC8: test    edx, 8
 * 00000001401C0CCE: jz      short loc_1401C0CE7
 * 00000001401C0CD0: mov     eax, 1
 * 00000001401C0CD5: xor     edx, edx
 * 00000001401C0CD7: mov     ecx, 49h ; 'I'
 * 00000001401C0CDC: wrmsr
 * 00000001401C0CDE: movzx   edx, word ptr gs:860h
 * 00000001401C0CE7: test    edx, 2
 * 00000001401C0CED: jz      loc_1401C0E18
 * 00000001401C0CF3: call    loc_1401C0E06
 * 00000001401C0CF8: add     rsp, 8
 * 00000001401C0CFC: call    loc_1401C0E0F
 * 00000001401C0D01: add     rsp, 8
 * 00000001401C0D05: call    loc_1401C0CF8
 * 00000001401C0D0A: add     rsp, 8
 * 00000001401C0D0E: call    loc_1401C0D01
 * 00000001401C0D13: add     rsp, 8
 * 00000001401C0D17: call    loc_1401C0D0A
 * 00000001401C0D1C: add     rsp, 8
 * 00000001401C0D20: call    loc_1401C0D13
 * 00000001401C0D25: add     rsp, 8
 * 00000001401C0D29: call    loc_1401C0D1C
 * 00000001401C0D2E: add     rsp, 8
 * 00000001401C0D32: call    loc_1401C0D25
 * 00000001401C0D37: add     rsp, 8
 * 00000001401C0D3B: call    loc_1401C0D2E
 * 00000001401C0D40: add     rsp, 8
 * 00000001401C0D44: call    loc_1401C0D37
 * 00000001401C0D49: add     rsp, 8
 * 00000001401C0D4D: call    loc_1401C0D40
 * 00000001401C0D52: add     rsp, 8
 * 00000001401C0D56: call    loc_1401C0D49
 * 00000001401C0D5B: add     rsp, 8
 * 00000001401C0D5F: call    loc_1401C0D52
 * 00000001401C0D64: add     rsp, 8
 * 00000001401C0D68: call    loc_1401C0D5B
 * 00000001401C0D6D: add     rsp, 8
 * 00000001401C0D71: call    loc_1401C0D64
 * 00000001401C0D76: add     rsp, 8
 * 00000001401C0D7A: call    loc_1401C0D6D
 * 00000001401C0D7F: add     rsp, 8
 * 00000001401C0D83: call    loc_1401C0D76
 * 00000001401C0D88: add     rsp, 8
 * 00000001401C0D8C: call    loc_1401C0D7F
 * 00000001401C0D91: add     rsp, 8
 * 00000001401C0D95: call    loc_1401C0D88
 * 00000001401C0D9A: add     rsp, 8
 * 00000001401C0D9E: call    loc_1401C0D91
 * 00000001401C0DA3: add     rsp, 8
 * 00000001401C0DA7: call    loc_1401C0D9A
 * 00000001401C0DAC: add     rsp, 8
 * 00000001401C0DB0: call    loc_1401C0DA3
 * 00000001401C0DB5: add     rsp, 8
 * 00000001401C0DB9: call    loc_1401C0DAC
 * 00000001401C0DBE: add     rsp, 8
 * 00000001401C0DC2: call    loc_1401C0DB5
 * 00000001401C0DC7: add     rsp, 8
 * 00000001401C0DCB: call    loc_1401C0DBE
 * 00000001401C0DD0: add     rsp, 8
 * 00000001401C0DD4: call    loc_1401C0DC7
 * 00000001401C0DD9: add     rsp, 8
 * 00000001401C0DDD: call    loc_1401C0DD0
 * 00000001401C0DE2: add     rsp, 8
 * 00000001401C0DE6: call    loc_1401C0DD9
 * 00000001401C0DEB: add     rsp, 8
 * 00000001401C0DEF: call    loc_1401C0DE2
 * 00000001401C0DF4: add     rsp, 8
 * 00000001401C0DF8: call    loc_1401C0DEB
 * 00000001401C0DFD: add     rsp, 8
 * 00000001401C0E01: call    loc_1401C0DF4
 * 00000001401C0E06: add     rsp, 8
 * 00000001401C0E0A: call    loc_1401C0DFD
 * 00000001401C0E0F: add     rsp, 8
 * 00000001401C0E13: mov     eax, 0DADAh
 * 00000001401C0E18: test    edx, 200h
 * 00000001401C0E1E: jz      short loc_1401C0E25
 * 00000001401C0E20: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C0E25: lfence
 * 00000001401C0E28: mov     byte ptr gs:856h, 0
 * 00000001401C0E31: test    byte ptr [r10+3], 3
 * 00000001401C0E36: mov     [rbp+0E8h+var_68], 0
 * 00000001401C0E3F: jz      short loc_1401C0E46
 * 00000001401C0E41: call    KiSaveDebugRegisterState
 * 00000001401C0E46: cld
 * 00000001401C0E47: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C0E4B: ldmxcsr dword ptr gs:180h
 * 00000001401C0E54: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C0E58: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C0E5C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C0E60: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C0E64: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C0E68: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C0E6C: xor     esi, esi
 * 00000001401C0E6E: inc     dword ptr gs:5D00h
 * 00000001401C0E76: mov     ecx, 1
 * 00000001401C0E7B: cmp     cs:KiIrqlFlags, 0
 * 00000001401C0E82: jz      short loc_1401C0E8B
 * 00000001401C0E84: call    KzSetIrqlUnsafe
 * 00000001401C0E89: jmp     short loc_1401C0E93
 * 00000001401C0E8B: mov     rax, cr8
 * 00000001401C0E8F: mov     cr8, rcx
 * 00000001401C0E93: mov     [rbp+0E8h+var_13F], al
 * 00000001401C0E96: mov     rcx, rsi
 * 00000001401C0E99: call    HalPerformEndOfInterrupt_0
 * 00000001401C0E9E: sti
 * 00000001401C0E9F: cmp     byte ptr gs:187h, 0
 * 00000001401C0EA8: jnz     short loc_1401C0EBA
 * 00000001401C0EAA: mov     ecx, 0
 * 00000001401C0EAF: xor     edx, edx
 * 00000001401C0EB1: lea     r8, [rbp+0E8h+var_168]
 * 00000001401C0EB5: call    KiDeliverApc
 * 00000001401C0EBA: cli
 * 00000001401C0EBB: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C0EBF: cmp     cs:KiIrqlFlags, 0
 * 00000001401C0EC6: jz      short loc_1401C0ECF
 * 00000001401C0EC8: call    KzSetIrqlUnsafe
 * 00000001401C0ECD: jmp     short loc_1401C0ED3
 * 00000001401C0ECF: mov     cr8, rcx
 * 00000001401C0ED3: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C0EDA: cli
 * 00000001401C0EDB: test    [rbp+0E8h+arg_0], 1
 * 00000001401C0EE2: jz      loc_1401C1189
 * 00000001401C0EE8: mov     rcx, gs:188h
 * 00000001401C0EF1: test    byte ptr [rcx+0C2h], 3
 * 00000001401C0EF8: jz      short loc_1401C0F15
 * 00000001401C0EFA: mov     ecx, 1
 * 00000001401C0EFF: mov     cr8, rcx
 * 00000001401C0F03: sti
 * 00000001401C0F04: call    KiInitiateUserApc
 * 00000001401C0F09: cli
 * 00000001401C0F0A: mov     ecx, 0
 * 00000001401C0F0F: mov     cr8, rcx
 * 00000001401C0F13: jmp     short loc_1401C0EE8
 * 00000001401C0F15: test    byte ptr gs:86Ch, 2
 * 00000001401C0F1E: jz      short loc_1401C0F27
 * 00000001401C0F20: xor     ecx, ecx
 * 00000001401C0F22: call    KiUpdateStibpPairing
 * 00000001401C0F27: mov     rcx, gs:188h
 * 00000001401C0F30: test    dword ptr [rcx], 8000000h
 * 00000001401C0F36: jz      short loc_1401C0F3D
 * 00000001401C0F38: call    KiRestoreSetContextState
 * 00000001401C0F3D: mov     rcx, gs:188h
 * 00000001401C0F46: test    dword ptr [rcx], 40010000h
 * 00000001401C0F4C: jz      short loc_1401C0F73
 * 00000001401C0F4E: test    byte ptr [rcx+2], 1
 * 00000001401C0F52: jz      short loc_1401C0F62
 * 00000001401C0F54: call    KiCopyCounters
 * 00000001401C0F59: mov     rcx, gs:188h
 * 00000001401C0F62: test    byte ptr [rcx+3], 40h
 * 00000001401C0F66: jz      short loc_1401C0F73
 * 00000001401C0F68: lea     rsp, [rbp-80h]
 * 00000001401C0F6C: mov     cl, 1
 * 00000001401C0F6E: call    KiUmsExit
 * 00000001401C0F73: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C0F77: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C0F7F: jz      short loc_1401C0F86
 * 00000001401C0F81: call    KiRestoreDebugRegisterState
 * 00000001401C0F86: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C0F8A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C0F8E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C0F92: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C0F96: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C0F9A: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C0F9E: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C0FA2: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C0FA6: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C0FAA: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C0FAE: mov     byte ptr gs:856h, 0
 * 00000001401C0FB7: movzx   eax, word ptr gs:86Ah
 * 00000001401C0FC0: cmp     gs:864h, ax
 * 00000001401C0FC9: jz      short loc_1401C0FDD
 * 00000001401C0FCB: mov     gs:864h, ax
 * 00000001401C0FD4: mov     ecx, 48h ; 'H'
 * 00000001401C0FD9: xor     edx, edx
 * 00000001401C0FDB: wrmsr
 * 00000001401C0FDD: btr     word ptr gs:860h, 2
 * 00000001401C0FE8: jnb     short loc_1401C0FF8
 * 00000001401C0FEA: mov     eax, 1
 * 00000001401C0FEF: xor     edx, edx
 * 00000001401C0FF1: mov     ecx, 49h ; 'I'
 * 00000001401C0FF6: wrmsr
 * 00000001401C0FF8: btr     word ptr gs:860h, 5
 * 00000001401C1003: jnb     loc_1401C112E
 * 00000001401C1009: call    loc_1401C111C
 * 00000001401C100E: add     rsp, 8
 * 00000001401C1012: call    loc_1401C1125
 * 00000001401C1017: add     rsp, 8
 * 00000001401C101B: call    loc_1401C100E
 * 00000001401C1020: add     rsp, 8
 * 00000001401C1024: call    loc_1401C1017
 * 00000001401C1029: add     rsp, 8
 * 00000001401C102D: call    loc_1401C1020
 * 00000001401C1032: add     rsp, 8
 * 00000001401C1036: call    loc_1401C1029
 * 00000001401C103B: add     rsp, 8
 * 00000001401C103F: call    loc_1401C1032
 * 00000001401C1044: add     rsp, 8
 * 00000001401C1048: call    loc_1401C103B
 * 00000001401C104D: add     rsp, 8
 * 00000001401C1051: call    loc_1401C1044
 * 00000001401C1056: add     rsp, 8
 * 00000001401C105A: call    loc_1401C104D
 * 00000001401C105F: add     rsp, 8
 * 00000001401C1063: call    loc_1401C1056
 * 00000001401C1068: add     rsp, 8
 * 00000001401C106C: call    loc_1401C105F
 * 00000001401C1071: add     rsp, 8
 * 00000001401C1075: call    loc_1401C1068
 * 00000001401C107A: add     rsp, 8
 * 00000001401C107E: call    loc_1401C1071
 * 00000001401C1083: add     rsp, 8
 * 00000001401C1087: call    loc_1401C107A
 * 00000001401C108C: add     rsp, 8
 * 00000001401C1090: call    loc_1401C1083
 * 00000001401C1095: add     rsp, 8
 * 00000001401C1099: call    loc_1401C108C
 * 00000001401C109E: add     rsp, 8
 * 00000001401C10A2: call    loc_1401C1095
 * 00000001401C10A7: add     rsp, 8
 * 00000001401C10AB: call    loc_1401C109E
 * 00000001401C10B0: add     rsp, 8
 * 00000001401C10B4: call    loc_1401C10A7
 * 00000001401C10B9: add     rsp, 8
 * 00000001401C10BD: call    loc_1401C10B0
 * 00000001401C10C2: add     rsp, 8
 * 00000001401C10C6: call    loc_1401C10B9
 * 00000001401C10CB: add     rsp, 8
 * 00000001401C10CF: call    loc_1401C10C2
 * 00000001401C10D4: add     rsp, 8
 * 00000001401C10D8: call    loc_1401C10CB
 * 00000001401C10DD: add     rsp, 8
 * 00000001401C10E1: call    loc_1401C10D4
 * 00000001401C10E6: add     rsp, 8
 * 00000001401C10EA: call    loc_1401C10DD
 * 00000001401C10EF: add     rsp, 8
 * 00000001401C10F3: call    loc_1401C10E6
 * 00000001401C10F8: add     rsp, 8
 * 00000001401C10FC: call    loc_1401C10EF
 * 00000001401C1101: add     rsp, 8
 * 00000001401C1105: call    loc_1401C10F8
 * 00000001401C110A: add     rsp, 8
 * 00000001401C110E: call    loc_1401C1101
 * 00000001401C1113: add     rsp, 8
 * 00000001401C1117: call    loc_1401C110A
 * 00000001401C111C: add     rsp, 8
 * 00000001401C1120: call    loc_1401C1113
 * 00000001401C1125: add     rsp, 8
 * 00000001401C1129: mov     eax, 0DADAh
 * 00000001401C112E: test    word ptr gs:860h, 80h
 * 00000001401C1139: jz      short loc_1401C1147
 * 00000001401C113B: xor     eax, eax
 * 00000001401C113D: xor     edx, edx
 * 00000001401C113F: mov     ecx, 1
 * 00000001401C1144: div     rcx
 * 00000001401C1147: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C114B: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C114F: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C1153: mov     rsp, rbp
 * 00000001401C1156: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C115D: add     rsp, 0E8h
 * 00000001401C1164: test    cs:KiKvaShadow, 1
 * 00000001401C116B: jz      short loc_1401C1172
 * 00000001401C116D: jmp     KiKernelExit
 * 00000001401C1172: test    word ptr gs:860h, 100h
 * 00000001401C117D: jz      short loc_1401C1184
 * 00000001401C117F: verw    [rsp+arg_18]
 * 00000001401C1184: swapgs
 * 00000001401C1187: iretq
 * 00000001401C1189: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C118D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C1191: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C1195: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C1199: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C119D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C11A1: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C11A5: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C11A9: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C11AD: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C11B1: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C11B5: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C11B9: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C11BD: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C11C1: mov     rsp, rbp
 * 00000001401C11C4: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C11CB: add     rsp, 0E8h
 * 00000001401C11D2: iretq
 */
