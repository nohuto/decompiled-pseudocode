/*
 * XREFs of KiApcInterrupt @ 0x1401C0A70
 * Callers:
 *     KiApcInterruptShadow @ 0x14032EC00 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1401C0A70 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x1401C0A70
 * Reason: Hex-Rays returned no pseudocode for 0x1401C0A70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C0A70: sub     rsp, 8
 * 00000001401C0A74: push    rbp
 * 00000001401C0A75: push    rsi
 * 00000001401C0A76: sub     rsp, 150h
 * 00000001401C0A7D: lea     rbp, [rsp+80h]
 * 00000001401C0A85: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C0A89: mov     [rbp+0E8h+var_138], rax
 * 00000001401C0A8D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C0A91: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C0A95: mov     [rbp+0E8h+var_120], r8
 * 00000001401C0A99: mov     [rbp+0E8h+var_118], r9
 * 00000001401C0A9D: mov     [rbp+0E8h+var_110], r10
 * 00000001401C0AA1: mov     [rbp+0E8h+var_108], r11
 * 00000001401C0AA5: test    [rbp+0E8h+arg_0], 1
 * 00000001401C0AAC: jnz     short loc_1401C0ADD
 * 00000001401C0AAE: lfence
 * 00000001401C0AB1: test    word ptr gs:860h, 1
 * 00000001401C0ABC: jnz     short loc_1401C0AC6
 * 00000001401C0ABE: lfence
 * 00000001401C0AC1: jmp     loc_1401C0CE6
 * 00000001401C0AC6: movzx   eax, word ptr gs:864h
 * 00000001401C0ACF: mov     ecx, 48h ; 'H'
 * 00000001401C0AD4: xor     edx, edx
 * 00000001401C0AD6: wrmsr
 * 00000001401C0AD8: jmp     loc_1401C0CE6
 * 00000001401C0ADD: test    cs:KiKvaShadow, 1
 * 00000001401C0AE4: jnz     short loc_1401C0AE9
 * 00000001401C0AE6: swapgs
 * 00000001401C0AE9: lfence
 * 00000001401C0AEC: mov     r10, gs:188h
 * 00000001401C0AF5: mov     rcx, gs:188h
 * 00000001401C0AFE: mov     rcx, [rcx+220h]
 * 00000001401C0B05: mov     rcx, [rcx+830h]
 * 00000001401C0B0C: mov     gs:858h, rcx
 * 00000001401C0B15: mov     cx, gs:850h
 * 00000001401C0B1E: mov     gs:852h, cx
 * 00000001401C0B27: mov     cx, gs:860h
 * 00000001401C0B30: mov     gs:854h, cx
 * 00000001401C0B39: movzx   eax, word ptr gs:866h
 * 00000001401C0B42: cmp     gs:864h, ax
 * 00000001401C0B4B: jz      short loc_1401C0B5F
 * 00000001401C0B4D: mov     gs:864h, ax
 * 00000001401C0B56: mov     ecx, 48h ; 'H'
 * 00000001401C0B5B: xor     edx, edx
 * 00000001401C0B5D: wrmsr
 * 00000001401C0B5F: movzx   edx, word ptr gs:860h
 * 00000001401C0B68: test    edx, 8
 * 00000001401C0B6E: jz      short loc_1401C0B87
 * 00000001401C0B70: mov     eax, 1
 * 00000001401C0B75: xor     edx, edx
 * 00000001401C0B77: mov     ecx, 49h ; 'I'
 * 00000001401C0B7C: wrmsr
 * 00000001401C0B7E: movzx   edx, word ptr gs:860h
 * 00000001401C0B87: test    edx, 2
 * 00000001401C0B8D: jz      loc_1401C0CB8
 * 00000001401C0B93: call    loc_1401C0CA6
 * 00000001401C0B98: add     rsp, 8
 * 00000001401C0B9C: call    loc_1401C0CAF
 * 00000001401C0BA1: add     rsp, 8
 * 00000001401C0BA5: call    loc_1401C0B98
 * 00000001401C0BAA: add     rsp, 8
 * 00000001401C0BAE: call    loc_1401C0BA1
 * 00000001401C0BB3: add     rsp, 8
 * 00000001401C0BB7: call    loc_1401C0BAA
 * 00000001401C0BBC: add     rsp, 8
 * 00000001401C0BC0: call    loc_1401C0BB3
 * 00000001401C0BC5: add     rsp, 8
 * 00000001401C0BC9: call    loc_1401C0BBC
 * 00000001401C0BCE: add     rsp, 8
 * 00000001401C0BD2: call    loc_1401C0BC5
 * 00000001401C0BD7: add     rsp, 8
 * 00000001401C0BDB: call    loc_1401C0BCE
 * 00000001401C0BE0: add     rsp, 8
 * 00000001401C0BE4: call    loc_1401C0BD7
 * 00000001401C0BE9: add     rsp, 8
 * 00000001401C0BED: call    loc_1401C0BE0
 * 00000001401C0BF2: add     rsp, 8
 * 00000001401C0BF6: call    loc_1401C0BE9
 * 00000001401C0BFB: add     rsp, 8
 * 00000001401C0BFF: call    loc_1401C0BF2
 * 00000001401C0C04: add     rsp, 8
 * 00000001401C0C08: call    loc_1401C0BFB
 * 00000001401C0C0D: add     rsp, 8
 * 00000001401C0C11: call    loc_1401C0C04
 * 00000001401C0C16: add     rsp, 8
 * 00000001401C0C1A: call    loc_1401C0C0D
 * 00000001401C0C1F: add     rsp, 8
 * 00000001401C0C23: call    loc_1401C0C16
 * 00000001401C0C28: add     rsp, 8
 * 00000001401C0C2C: call    loc_1401C0C1F
 * 00000001401C0C31: add     rsp, 8
 * 00000001401C0C35: call    loc_1401C0C28
 * 00000001401C0C3A: add     rsp, 8
 * 00000001401C0C3E: call    loc_1401C0C31
 * 00000001401C0C43: add     rsp, 8
 * 00000001401C0C47: call    loc_1401C0C3A
 * 00000001401C0C4C: add     rsp, 8
 * 00000001401C0C50: call    loc_1401C0C43
 * 00000001401C0C55: add     rsp, 8
 * 00000001401C0C59: call    loc_1401C0C4C
 * 00000001401C0C5E: add     rsp, 8
 * 00000001401C0C62: call    loc_1401C0C55
 * 00000001401C0C67: add     rsp, 8
 * 00000001401C0C6B: call    loc_1401C0C5E
 * 00000001401C0C70: add     rsp, 8
 * 00000001401C0C74: call    loc_1401C0C67
 * 00000001401C0C79: add     rsp, 8
 * 00000001401C0C7D: call    loc_1401C0C70
 * 00000001401C0C82: add     rsp, 8
 * 00000001401C0C86: call    loc_1401C0C79
 * 00000001401C0C8B: add     rsp, 8
 * 00000001401C0C8F: call    loc_1401C0C82
 * 00000001401C0C94: add     rsp, 8
 * 00000001401C0C98: call    loc_1401C0C8B
 * 00000001401C0C9D: add     rsp, 8
 * 00000001401C0CA1: call    loc_1401C0C94
 * 00000001401C0CA6: add     rsp, 8
 * 00000001401C0CAA: call    loc_1401C0C9D
 * 00000001401C0CAF: add     rsp, 8
 * 00000001401C0CB3: mov     eax, 0DADAh
 * 00000001401C0CB8: test    edx, 200h
 * 00000001401C0CBE: jz      short loc_1401C0CC5
 * 00000001401C0CC0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C0CC5: lfence
 * 00000001401C0CC8: mov     byte ptr gs:856h, 0
 * 00000001401C0CD1: test    byte ptr [r10+3], 3
 * 00000001401C0CD6: mov     [rbp+0E8h+var_68], 0
 * 00000001401C0CDF: jz      short loc_1401C0CE6
 * 00000001401C0CE1: call    KiSaveDebugRegisterState
 * 00000001401C0CE6: cld
 * 00000001401C0CE7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C0CEB: ldmxcsr dword ptr gs:180h
 * 00000001401C0CF4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C0CF8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C0CFC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C0D00: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C0D04: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C0D08: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C0D0C: xor     esi, esi
 * 00000001401C0D0E: inc     dword ptr gs:5D00h
 * 00000001401C0D16: mov     ecx, 1
 * 00000001401C0D1B: cmp     cs:KiIrqlFlags, 0
 * 00000001401C0D22: jz      short loc_1401C0D2B
 * 00000001401C0D24: call    KzSetIrqlUnsafe
 * 00000001401C0D29: jmp     short loc_1401C0D33
 * 00000001401C0D2B: mov     rax, cr8
 * 00000001401C0D2F: mov     cr8, rcx
 * 00000001401C0D33: mov     [rbp+0E8h+var_13F], al
 * 00000001401C0D36: mov     rcx, rsi
 * 00000001401C0D39: call    HalPerformEndOfInterrupt_0
 * 00000001401C0D3E: sti
 * 00000001401C0D3F: cmp     byte ptr gs:187h, 0
 * 00000001401C0D48: jnz     short loc_1401C0D5A
 * 00000001401C0D4A: mov     ecx, 0
 * 00000001401C0D4F: xor     edx, edx
 * 00000001401C0D51: lea     r8, [rbp+0E8h+var_168]
 * 00000001401C0D55: call    KiDeliverApc
 * 00000001401C0D5A: cli
 * 00000001401C0D5B: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C0D5F: cmp     cs:KiIrqlFlags, 0
 * 00000001401C0D66: jz      short loc_1401C0D6F
 * 00000001401C0D68: call    KzSetIrqlUnsafe
 * 00000001401C0D6D: jmp     short loc_1401C0D73
 * 00000001401C0D6F: mov     cr8, rcx
 * 00000001401C0D73: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C0D7A: cli
 * 00000001401C0D7B: test    [rbp+0E8h+arg_0], 1
 * 00000001401C0D82: jz      loc_1401C1029
 * 00000001401C0D88: mov     rcx, gs:188h
 * 00000001401C0D91: test    byte ptr [rcx+0C2h], 3
 * 00000001401C0D98: jz      short loc_1401C0DB5
 * 00000001401C0D9A: mov     ecx, 1
 * 00000001401C0D9F: mov     cr8, rcx
 * 00000001401C0DA3: sti
 * 00000001401C0DA4: call    KiInitiateUserApc
 * 00000001401C0DA9: cli
 * 00000001401C0DAA: mov     ecx, 0
 * 00000001401C0DAF: mov     cr8, rcx
 * 00000001401C0DB3: jmp     short loc_1401C0D88
 * 00000001401C0DB5: test    byte ptr gs:86Ch, 2
 * 00000001401C0DBE: jz      short loc_1401C0DC7
 * 00000001401C0DC0: xor     ecx, ecx
 * 00000001401C0DC2: call    KiUpdateStibpPairing
 * 00000001401C0DC7: mov     rcx, gs:188h
 * 00000001401C0DD0: test    dword ptr [rcx], 8000000h
 * 00000001401C0DD6: jz      short loc_1401C0DDD
 * 00000001401C0DD8: call    KiRestoreSetContextState
 * 00000001401C0DDD: mov     rcx, gs:188h
 * 00000001401C0DE6: test    dword ptr [rcx], 40010000h
 * 00000001401C0DEC: jz      short loc_1401C0E13
 * 00000001401C0DEE: test    byte ptr [rcx+2], 1
 * 00000001401C0DF2: jz      short loc_1401C0E02
 * 00000001401C0DF4: call    KiCopyCounters
 * 00000001401C0DF9: mov     rcx, gs:188h
 * 00000001401C0E02: test    byte ptr [rcx+3], 40h
 * 00000001401C0E06: jz      short loc_1401C0E13
 * 00000001401C0E08: lea     rsp, [rbp-80h]
 * 00000001401C0E0C: mov     cl, 1
 * 00000001401C0E0E: call    KiUmsExit
 * 00000001401C0E13: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C0E17: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C0E1F: jz      short loc_1401C0E26
 * 00000001401C0E21: call    KiRestoreDebugRegisterState
 * 00000001401C0E26: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C0E2A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C0E2E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C0E32: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C0E36: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C0E3A: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C0E3E: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C0E42: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C0E46: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C0E4A: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C0E4E: mov     byte ptr gs:856h, 0
 * 00000001401C0E57: movzx   eax, word ptr gs:86Ah
 * 00000001401C0E60: cmp     gs:864h, ax
 * 00000001401C0E69: jz      short loc_1401C0E7D
 * 00000001401C0E6B: mov     gs:864h, ax
 * 00000001401C0E74: mov     ecx, 48h ; 'H'
 * 00000001401C0E79: xor     edx, edx
 * 00000001401C0E7B: wrmsr
 * 00000001401C0E7D: btr     word ptr gs:860h, 2
 * 00000001401C0E88: jnb     short loc_1401C0E98
 * 00000001401C0E8A: mov     eax, 1
 * 00000001401C0E8F: xor     edx, edx
 * 00000001401C0E91: mov     ecx, 49h ; 'I'
 * 00000001401C0E96: wrmsr
 * 00000001401C0E98: btr     word ptr gs:860h, 5
 * 00000001401C0EA3: jnb     loc_1401C0FCE
 * 00000001401C0EA9: call    loc_1401C0FBC
 * 00000001401C0EAE: add     rsp, 8
 * 00000001401C0EB2: call    loc_1401C0FC5
 * 00000001401C0EB7: add     rsp, 8
 * 00000001401C0EBB: call    loc_1401C0EAE
 * 00000001401C0EC0: add     rsp, 8
 * 00000001401C0EC4: call    loc_1401C0EB7
 * 00000001401C0EC9: add     rsp, 8
 * 00000001401C0ECD: call    loc_1401C0EC0
 * 00000001401C0ED2: add     rsp, 8
 * 00000001401C0ED6: call    loc_1401C0EC9
 * 00000001401C0EDB: add     rsp, 8
 * 00000001401C0EDF: call    loc_1401C0ED2
 * 00000001401C0EE4: add     rsp, 8
 * 00000001401C0EE8: call    loc_1401C0EDB
 * 00000001401C0EED: add     rsp, 8
 * 00000001401C0EF1: call    loc_1401C0EE4
 * 00000001401C0EF6: add     rsp, 8
 * 00000001401C0EFA: call    loc_1401C0EED
 * 00000001401C0EFF: add     rsp, 8
 * 00000001401C0F03: call    loc_1401C0EF6
 * 00000001401C0F08: add     rsp, 8
 * 00000001401C0F0C: call    loc_1401C0EFF
 * 00000001401C0F11: add     rsp, 8
 * 00000001401C0F15: call    loc_1401C0F08
 * 00000001401C0F1A: add     rsp, 8
 * 00000001401C0F1E: call    loc_1401C0F11
 * 00000001401C0F23: add     rsp, 8
 * 00000001401C0F27: call    loc_1401C0F1A
 * 00000001401C0F2C: add     rsp, 8
 * 00000001401C0F30: call    loc_1401C0F23
 * 00000001401C0F35: add     rsp, 8
 * 00000001401C0F39: call    loc_1401C0F2C
 * 00000001401C0F3E: add     rsp, 8
 * 00000001401C0F42: call    loc_1401C0F35
 * 00000001401C0F47: add     rsp, 8
 * 00000001401C0F4B: call    loc_1401C0F3E
 * 00000001401C0F50: add     rsp, 8
 * 00000001401C0F54: call    loc_1401C0F47
 * 00000001401C0F59: add     rsp, 8
 * 00000001401C0F5D: call    loc_1401C0F50
 * 00000001401C0F62: add     rsp, 8
 * 00000001401C0F66: call    loc_1401C0F59
 * 00000001401C0F6B: add     rsp, 8
 * 00000001401C0F6F: call    loc_1401C0F62
 * 00000001401C0F74: add     rsp, 8
 * 00000001401C0F78: call    loc_1401C0F6B
 * 00000001401C0F7D: add     rsp, 8
 * 00000001401C0F81: call    loc_1401C0F74
 * 00000001401C0F86: add     rsp, 8
 * 00000001401C0F8A: call    loc_1401C0F7D
 * 00000001401C0F8F: add     rsp, 8
 * 00000001401C0F93: call    loc_1401C0F86
 * 00000001401C0F98: add     rsp, 8
 * 00000001401C0F9C: call    loc_1401C0F8F
 * 00000001401C0FA1: add     rsp, 8
 * 00000001401C0FA5: call    loc_1401C0F98
 * 00000001401C0FAA: add     rsp, 8
 * 00000001401C0FAE: call    loc_1401C0FA1
 * 00000001401C0FB3: add     rsp, 8
 * 00000001401C0FB7: call    loc_1401C0FAA
 * 00000001401C0FBC: add     rsp, 8
 * 00000001401C0FC0: call    loc_1401C0FB3
 * 00000001401C0FC5: add     rsp, 8
 * 00000001401C0FC9: mov     eax, 0DADAh
 * 00000001401C0FCE: test    word ptr gs:860h, 80h
 * 00000001401C0FD9: jz      short loc_1401C0FE7
 * 00000001401C0FDB: xor     eax, eax
 * 00000001401C0FDD: xor     edx, edx
 * 00000001401C0FDF: mov     ecx, 1
 * 00000001401C0FE4: div     rcx
 * 00000001401C0FE7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C0FEB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C0FEF: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C0FF3: mov     rsp, rbp
 * 00000001401C0FF6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C0FFD: add     rsp, 0E8h
 * 00000001401C1004: test    cs:KiKvaShadow, 1
 * 00000001401C100B: jz      short loc_1401C1012
 * 00000001401C100D: jmp     KiKernelExit
 * 00000001401C1012: test    word ptr gs:860h, 100h
 * 00000001401C101D: jz      short loc_1401C1024
 * 00000001401C101F: verw    [rsp+arg_18]
 * 00000001401C1024: swapgs
 * 00000001401C1027: iretq
 * 00000001401C1029: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C102D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C1031: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C1035: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C1039: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C103D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C1041: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C1045: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C1049: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C104D: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C1051: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C1055: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C1059: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C105D: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C1061: mov     rsp, rbp
 * 00000001401C1064: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C106B: add     rsp, 0E8h
 * 00000001401C1072: iretq
 */
