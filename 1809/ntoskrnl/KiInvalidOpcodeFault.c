/*
 * XREFs of KiInvalidOpcodeFault @ 0x1401C99C0
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x14032F400 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x1401C99C0 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D0C80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x1401C99C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C99C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C99C0: sub     rsp, 8
 * 00000001401C99C4: push    rbp
 * 00000001401C99C5: sub     rsp, 158h
 * 00000001401C99CC: lea     rbp, [rsp+80h]
 * 00000001401C99D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C99D8: mov     [rbp+0E8h+var_138], rax
 * 00000001401C99DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C99E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C99E4: mov     [rbp+0E8h+var_120], r8
 * 00000001401C99E8: mov     [rbp+0E8h+var_118], r9
 * 00000001401C99EC: mov     [rbp+0E8h+var_110], r10
 * 00000001401C99F0: mov     [rbp+0E8h+var_108], r11
 * 00000001401C99F4: test    [rbp+0E8h+arg_0], 1
 * 00000001401C99FB: jnz     short loc_1401C9A2C
 * 00000001401C99FD: lfence
 * 00000001401C9A00: test    word ptr gs:860h, 1
 * 00000001401C9A0B: jnz     short loc_1401C9A15
 * 00000001401C9A0D: lfence
 * 00000001401C9A10: jmp     loc_1401C9C7E
 * 00000001401C9A15: movzx   eax, word ptr gs:864h
 * 00000001401C9A1E: mov     ecx, 48h ; 'H'
 * 00000001401C9A23: xor     edx, edx
 * 00000001401C9A25: wrmsr
 * 00000001401C9A27: jmp     loc_1401C9C7E
 * 00000001401C9A2C: test    cs:KiKvaShadow, 1
 * 00000001401C9A33: jnz     short loc_1401C9A38
 * 00000001401C9A35: swapgs
 * 00000001401C9A38: lfence
 * 00000001401C9A3B: mov     r10, gs:188h
 * 00000001401C9A44: mov     rcx, gs:188h
 * 00000001401C9A4D: mov     rcx, [rcx+220h]
 * 00000001401C9A54: mov     rcx, [rcx+830h]
 * 00000001401C9A5B: mov     gs:858h, rcx
 * 00000001401C9A64: mov     cx, gs:850h
 * 00000001401C9A6D: mov     gs:852h, cx
 * 00000001401C9A76: mov     cx, gs:860h
 * 00000001401C9A7F: mov     gs:854h, cx
 * 00000001401C9A88: movzx   eax, word ptr gs:866h
 * 00000001401C9A91: cmp     gs:864h, ax
 * 00000001401C9A9A: jz      short loc_1401C9AAE
 * 00000001401C9A9C: mov     gs:864h, ax
 * 00000001401C9AA5: mov     ecx, 48h ; 'H'
 * 00000001401C9AAA: xor     edx, edx
 * 00000001401C9AAC: wrmsr
 * 00000001401C9AAE: movzx   edx, word ptr gs:860h
 * 00000001401C9AB7: test    edx, 8
 * 00000001401C9ABD: jz      short loc_1401C9AD6
 * 00000001401C9ABF: mov     eax, 1
 * 00000001401C9AC4: xor     edx, edx
 * 00000001401C9AC6: mov     ecx, 49h ; 'I'
 * 00000001401C9ACB: wrmsr
 * 00000001401C9ACD: movzx   edx, word ptr gs:860h
 * 00000001401C9AD6: test    edx, 2
 * 00000001401C9ADC: jz      loc_1401C9C07
 * 00000001401C9AE2: call    loc_1401C9BF5
 * 00000001401C9AE7: add     rsp, 8
 * 00000001401C9AEB: call    loc_1401C9BFE
 * 00000001401C9AF0: add     rsp, 8
 * 00000001401C9AF4: call    loc_1401C9AE7
 * 00000001401C9AF9: add     rsp, 8
 * 00000001401C9AFD: call    loc_1401C9AF0
 * 00000001401C9B02: add     rsp, 8
 * 00000001401C9B06: call    loc_1401C9AF9
 * 00000001401C9B0B: add     rsp, 8
 * 00000001401C9B0F: call    loc_1401C9B02
 * 00000001401C9B14: add     rsp, 8
 * 00000001401C9B18: call    loc_1401C9B0B
 * 00000001401C9B1D: add     rsp, 8
 * 00000001401C9B21: call    loc_1401C9B14
 * 00000001401C9B26: add     rsp, 8
 * 00000001401C9B2A: call    loc_1401C9B1D
 * 00000001401C9B2F: add     rsp, 8
 * 00000001401C9B33: call    loc_1401C9B26
 * 00000001401C9B38: add     rsp, 8
 * 00000001401C9B3C: call    loc_1401C9B2F
 * 00000001401C9B41: add     rsp, 8
 * 00000001401C9B45: call    loc_1401C9B38
 * 00000001401C9B4A: add     rsp, 8
 * 00000001401C9B4E: call    loc_1401C9B41
 * 00000001401C9B53: add     rsp, 8
 * 00000001401C9B57: call    loc_1401C9B4A
 * 00000001401C9B5C: add     rsp, 8
 * 00000001401C9B60: call    loc_1401C9B53
 * 00000001401C9B65: add     rsp, 8
 * 00000001401C9B69: call    loc_1401C9B5C
 * 00000001401C9B6E: add     rsp, 8
 * 00000001401C9B72: call    loc_1401C9B65
 * 00000001401C9B77: add     rsp, 8
 * 00000001401C9B7B: call    loc_1401C9B6E
 * 00000001401C9B80: add     rsp, 8
 * 00000001401C9B84: call    loc_1401C9B77
 * 00000001401C9B89: add     rsp, 8
 * 00000001401C9B8D: call    loc_1401C9B80
 * 00000001401C9B92: add     rsp, 8
 * 00000001401C9B96: call    loc_1401C9B89
 * 00000001401C9B9B: add     rsp, 8
 * 00000001401C9B9F: call    loc_1401C9B92
 * 00000001401C9BA4: add     rsp, 8
 * 00000001401C9BA8: call    loc_1401C9B9B
 * 00000001401C9BAD: add     rsp, 8
 * 00000001401C9BB1: call    loc_1401C9BA4
 * 00000001401C9BB6: add     rsp, 8
 * 00000001401C9BBA: call    loc_1401C9BAD
 * 00000001401C9BBF: add     rsp, 8
 * 00000001401C9BC3: call    loc_1401C9BB6
 * 00000001401C9BC8: add     rsp, 8
 * 00000001401C9BCC: call    loc_1401C9BBF
 * 00000001401C9BD1: add     rsp, 8
 * 00000001401C9BD5: call    loc_1401C9BC8
 * 00000001401C9BDA: add     rsp, 8
 * 00000001401C9BDE: call    loc_1401C9BD1
 * 00000001401C9BE3: add     rsp, 8
 * 00000001401C9BE7: call    loc_1401C9BDA
 * 00000001401C9BEC: add     rsp, 8
 * 00000001401C9BF0: call    loc_1401C9BE3
 * 00000001401C9BF5: add     rsp, 8
 * 00000001401C9BF9: call    loc_1401C9BEC
 * 00000001401C9BFE: add     rsp, 8
 * 00000001401C9C02: mov     eax, 0DADAh
 * 00000001401C9C07: test    edx, 200h
 * 00000001401C9C0D: jz      short loc_1401C9C14
 * 00000001401C9C0F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C9C14: lfence
 * 00000001401C9C17: mov     byte ptr gs:856h, 0
 * 00000001401C9C20: test    byte ptr [r10+3], 80h
 * 00000001401C9C25: jz      short loc_1401C9C69
 * 00000001401C9C27: mov     ecx, 0C0000102h
 * 00000001401C9C2C: rdmsr
 * 00000001401C9C2E: shl     rdx, 20h
 * 00000001401C9C32: or      rax, rdx
 * 00000001401C9C35: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C9C3C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C9C44: cmp     [r10+0F0h], rax
 * 00000001401C9C4B: jz      short loc_1401C9C69
 * 00000001401C9C4D: mov     rdx, [r10+1F0h]
 * 00000001401C9C54: bts     dword ptr [r10+74h], 8
 * 00000001401C9C5A: dec     word ptr [r10+1E6h]
 * 00000001401C9C62: mov     [rdx+80h], rax
 * 00000001401C9C69: test    byte ptr [r10+3], 3
 * 00000001401C9C6E: mov     [rbp+0E8h+var_68], 0
 * 00000001401C9C77: jz      short loc_1401C9C7E
 * 00000001401C9C79: call    KiSaveDebugRegisterState
 * 00000001401C9C7E: cld
 * 00000001401C9C7F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9C83: ldmxcsr dword ptr gs:180h
 * 00000001401C9C8C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C9C90: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C9C94: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C9C98: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C9C9C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C9CA0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C9CA4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C9CAE: jz      short loc_1401C9CB1
 * 00000001401C9CB0: sti
 * 00000001401C9CB1: mov     r9, gs:188h
 * 00000001401C9CBA: bt      dword ptr [r9+74h], 8
 * 00000001401C9CC0: jnb     short loc_1401C9CD0
 * 00000001401C9CC2: test    [rbp+0E8h+arg_0], 1
 * 00000001401C9CC9: jz      short loc_1401C9CD0
 * 00000001401C9CCB: call    KiUmsTrapEntry
 * 00000001401C9CD0: mov     ecx, 10000002h
 * 00000001401C9CD5: xor     edx, edx
 * 00000001401C9CD7: mov     r8, [rbp+0E8h]
 * 00000001401C9CDE: call    KiExceptionDispatch
 * 00000001401C9CE3: nop
 * 00000001401C9CE4: cli
 * 00000001401C9CE5: test    [rbp+0E8h+arg_0], 1
 * 00000001401C9CEC: jz      loc_1401C9F93
 * 00000001401C9CF2: mov     rcx, gs:188h
 * 00000001401C9CFB: test    byte ptr [rcx+0C2h], 3
 * 00000001401C9D02: jz      short loc_1401C9D1F
 * 00000001401C9D04: mov     ecx, 1
 * 00000001401C9D09: mov     cr8, rcx
 * 00000001401C9D0D: sti
 * 00000001401C9D0E: call    KiInitiateUserApc
 * 00000001401C9D13: cli
 * 00000001401C9D14: mov     ecx, 0
 * 00000001401C9D19: mov     cr8, rcx
 * 00000001401C9D1D: jmp     short loc_1401C9CF2
 * 00000001401C9D1F: test    byte ptr gs:86Ch, 2
 * 00000001401C9D28: jz      short loc_1401C9D31
 * 00000001401C9D2A: xor     ecx, ecx
 * 00000001401C9D2C: call    KiUpdateStibpPairing
 * 00000001401C9D31: mov     rcx, gs:188h
 * 00000001401C9D3A: test    dword ptr [rcx], 8000000h
 * 00000001401C9D40: jz      short loc_1401C9D47
 * 00000001401C9D42: call    KiRestoreSetContextState
 * 00000001401C9D47: mov     rcx, gs:188h
 * 00000001401C9D50: test    dword ptr [rcx], 40010000h
 * 00000001401C9D56: jz      short loc_1401C9D7D
 * 00000001401C9D58: test    byte ptr [rcx+2], 1
 * 00000001401C9D5C: jz      short loc_1401C9D6C
 * 00000001401C9D5E: call    KiCopyCounters
 * 00000001401C9D63: mov     rcx, gs:188h
 * 00000001401C9D6C: test    byte ptr [rcx+3], 40h
 * 00000001401C9D70: jz      short loc_1401C9D7D
 * 00000001401C9D72: lea     rsp, [rbp-80h]
 * 00000001401C9D76: mov     cl, 1
 * 00000001401C9D78: call    KiUmsExit
 * 00000001401C9D7D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9D81: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C9D89: jz      short loc_1401C9D90
 * 00000001401C9D8B: call    KiRestoreDebugRegisterState
 * 00000001401C9D90: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C9D94: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9D98: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C9D9C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9DA0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C9DA4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9DA8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C9DAC: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9DB0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C9DB4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9DB8: mov     byte ptr gs:856h, 0
 * 00000001401C9DC1: movzx   eax, word ptr gs:86Ah
 * 00000001401C9DCA: cmp     gs:864h, ax
 * 00000001401C9DD3: jz      short loc_1401C9DE7
 * 00000001401C9DD5: mov     gs:864h, ax
 * 00000001401C9DDE: mov     ecx, 48h ; 'H'
 * 00000001401C9DE3: xor     edx, edx
 * 00000001401C9DE5: wrmsr
 * 00000001401C9DE7: btr     word ptr gs:860h, 2
 * 00000001401C9DF2: jnb     short loc_1401C9E02
 * 00000001401C9DF4: mov     eax, 1
 * 00000001401C9DF9: xor     edx, edx
 * 00000001401C9DFB: mov     ecx, 49h ; 'I'
 * 00000001401C9E00: wrmsr
 * 00000001401C9E02: btr     word ptr gs:860h, 5
 * 00000001401C9E0D: jnb     loc_1401C9F38
 * 00000001401C9E13: call    loc_1401C9F26
 * 00000001401C9E18: add     rsp, 8
 * 00000001401C9E1C: call    loc_1401C9F2F
 * 00000001401C9E21: add     rsp, 8
 * 00000001401C9E25: call    loc_1401C9E18
 * 00000001401C9E2A: add     rsp, 8
 * 00000001401C9E2E: call    loc_1401C9E21
 * 00000001401C9E33: add     rsp, 8
 * 00000001401C9E37: call    loc_1401C9E2A
 * 00000001401C9E3C: add     rsp, 8
 * 00000001401C9E40: call    loc_1401C9E33
 * 00000001401C9E45: add     rsp, 8
 * 00000001401C9E49: call    loc_1401C9E3C
 * 00000001401C9E4E: add     rsp, 8
 * 00000001401C9E52: call    loc_1401C9E45
 * 00000001401C9E57: add     rsp, 8
 * 00000001401C9E5B: call    loc_1401C9E4E
 * 00000001401C9E60: add     rsp, 8
 * 00000001401C9E64: call    loc_1401C9E57
 * 00000001401C9E69: add     rsp, 8
 * 00000001401C9E6D: call    loc_1401C9E60
 * 00000001401C9E72: add     rsp, 8
 * 00000001401C9E76: call    loc_1401C9E69
 * 00000001401C9E7B: add     rsp, 8
 * 00000001401C9E7F: call    loc_1401C9E72
 * 00000001401C9E84: add     rsp, 8
 * 00000001401C9E88: call    loc_1401C9E7B
 * 00000001401C9E8D: add     rsp, 8
 * 00000001401C9E91: call    loc_1401C9E84
 * 00000001401C9E96: add     rsp, 8
 * 00000001401C9E9A: call    loc_1401C9E8D
 * 00000001401C9E9F: add     rsp, 8
 * 00000001401C9EA3: call    loc_1401C9E96
 * 00000001401C9EA8: add     rsp, 8
 * 00000001401C9EAC: call    loc_1401C9E9F
 * 00000001401C9EB1: add     rsp, 8
 * 00000001401C9EB5: call    loc_1401C9EA8
 * 00000001401C9EBA: add     rsp, 8
 * 00000001401C9EBE: call    loc_1401C9EB1
 * 00000001401C9EC3: add     rsp, 8
 * 00000001401C9EC7: call    loc_1401C9EBA
 * 00000001401C9ECC: add     rsp, 8
 * 00000001401C9ED0: call    loc_1401C9EC3
 * 00000001401C9ED5: add     rsp, 8
 * 00000001401C9ED9: call    loc_1401C9ECC
 * 00000001401C9EDE: add     rsp, 8
 * 00000001401C9EE2: call    loc_1401C9ED5
 * 00000001401C9EE7: add     rsp, 8
 * 00000001401C9EEB: call    loc_1401C9EDE
 * 00000001401C9EF0: add     rsp, 8
 * 00000001401C9EF4: call    loc_1401C9EE7
 * 00000001401C9EF9: add     rsp, 8
 * 00000001401C9EFD: call    loc_1401C9EF0
 * 00000001401C9F02: add     rsp, 8
 * 00000001401C9F06: call    loc_1401C9EF9
 * 00000001401C9F0B: add     rsp, 8
 * 00000001401C9F0F: call    loc_1401C9F02
 * 00000001401C9F14: add     rsp, 8
 * 00000001401C9F18: call    loc_1401C9F0B
 * 00000001401C9F1D: add     rsp, 8
 * 00000001401C9F21: call    loc_1401C9F14
 * 00000001401C9F26: add     rsp, 8
 * 00000001401C9F2A: call    loc_1401C9F1D
 * 00000001401C9F2F: add     rsp, 8
 * 00000001401C9F33: mov     eax, 0DADAh
 * 00000001401C9F38: test    word ptr gs:860h, 80h
 * 00000001401C9F43: jz      short loc_1401C9F51
 * 00000001401C9F45: xor     eax, eax
 * 00000001401C9F47: xor     edx, edx
 * 00000001401C9F49: mov     ecx, 1
 * 00000001401C9F4E: div     rcx
 * 00000001401C9F51: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9F55: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C9F59: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C9F5D: mov     rsp, rbp
 * 00000001401C9F60: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9F67: add     rsp, 0E8h
 * 00000001401C9F6E: test    cs:KiKvaShadow, 1
 * 00000001401C9F75: jz      short loc_1401C9F7C
 * 00000001401C9F77: jmp     KiKernelExit
 * 00000001401C9F7C: test    word ptr gs:860h, 100h
 * 00000001401C9F87: jz      short loc_1401C9F8E
 * 00000001401C9F89: verw    [rsp+arg_18]
 * 00000001401C9F8E: swapgs
 * 00000001401C9F91: iretq
 * 00000001401C9F93: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9F97: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C9F9B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9F9F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C9FA3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9FA7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C9FAB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9FAF: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C9FB3: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9FB7: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C9FBB: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9FBF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9FC3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C9FC7: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C9FCB: mov     rsp, rbp
 * 00000001401C9FCE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9FD5: add     rsp, 0E8h
 * 00000001401C9FDC: iretq
 */
