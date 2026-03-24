/*
 * XREFs of KiInvalidOpcodeFault @ 0x1401C98C0
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x14032E400 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x1401C98C0 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D0B80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x1401C98C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C98C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C98C0: sub     rsp, 8
 * 00000001401C98C4: push    rbp
 * 00000001401C98C5: sub     rsp, 158h
 * 00000001401C98CC: lea     rbp, [rsp+80h]
 * 00000001401C98D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C98D8: mov     [rbp+0E8h+var_138], rax
 * 00000001401C98DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C98E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C98E4: mov     [rbp+0E8h+var_120], r8
 * 00000001401C98E8: mov     [rbp+0E8h+var_118], r9
 * 00000001401C98EC: mov     [rbp+0E8h+var_110], r10
 * 00000001401C98F0: mov     [rbp+0E8h+var_108], r11
 * 00000001401C98F4: test    [rbp+0E8h+arg_0], 1
 * 00000001401C98FB: jnz     short loc_1401C992C
 * 00000001401C98FD: lfence
 * 00000001401C9900: test    word ptr gs:860h, 1
 * 00000001401C990B: jnz     short loc_1401C9915
 * 00000001401C990D: lfence
 * 00000001401C9910: jmp     loc_1401C9B7E
 * 00000001401C9915: movzx   eax, word ptr gs:864h
 * 00000001401C991E: mov     ecx, 48h ; 'H'
 * 00000001401C9923: xor     edx, edx
 * 00000001401C9925: wrmsr
 * 00000001401C9927: jmp     loc_1401C9B7E
 * 00000001401C992C: test    cs:KiKvaShadow, 1
 * 00000001401C9933: jnz     short loc_1401C9938
 * 00000001401C9935: swapgs
 * 00000001401C9938: lfence
 * 00000001401C993B: mov     r10, gs:188h
 * 00000001401C9944: mov     rcx, gs:188h
 * 00000001401C994D: mov     rcx, [rcx+220h]
 * 00000001401C9954: mov     rcx, [rcx+830h]
 * 00000001401C995B: mov     gs:858h, rcx
 * 00000001401C9964: mov     cx, gs:850h
 * 00000001401C996D: mov     gs:852h, cx
 * 00000001401C9976: mov     cx, gs:860h
 * 00000001401C997F: mov     gs:854h, cx
 * 00000001401C9988: movzx   eax, word ptr gs:866h
 * 00000001401C9991: cmp     gs:864h, ax
 * 00000001401C999A: jz      short loc_1401C99AE
 * 00000001401C999C: mov     gs:864h, ax
 * 00000001401C99A5: mov     ecx, 48h ; 'H'
 * 00000001401C99AA: xor     edx, edx
 * 00000001401C99AC: wrmsr
 * 00000001401C99AE: movzx   edx, word ptr gs:860h
 * 00000001401C99B7: test    edx, 8
 * 00000001401C99BD: jz      short loc_1401C99D6
 * 00000001401C99BF: mov     eax, 1
 * 00000001401C99C4: xor     edx, edx
 * 00000001401C99C6: mov     ecx, 49h ; 'I'
 * 00000001401C99CB: wrmsr
 * 00000001401C99CD: movzx   edx, word ptr gs:860h
 * 00000001401C99D6: test    edx, 2
 * 00000001401C99DC: jz      loc_1401C9B07
 * 00000001401C99E2: call    loc_1401C9AF5
 * 00000001401C99E7: add     rsp, 8
 * 00000001401C99EB: call    loc_1401C9AFE
 * 00000001401C99F0: add     rsp, 8
 * 00000001401C99F4: call    loc_1401C99E7
 * 00000001401C99F9: add     rsp, 8
 * 00000001401C99FD: call    loc_1401C99F0
 * 00000001401C9A02: add     rsp, 8
 * 00000001401C9A06: call    loc_1401C99F9
 * 00000001401C9A0B: add     rsp, 8
 * 00000001401C9A0F: call    loc_1401C9A02
 * 00000001401C9A14: add     rsp, 8
 * 00000001401C9A18: call    loc_1401C9A0B
 * 00000001401C9A1D: add     rsp, 8
 * 00000001401C9A21: call    loc_1401C9A14
 * 00000001401C9A26: add     rsp, 8
 * 00000001401C9A2A: call    loc_1401C9A1D
 * 00000001401C9A2F: add     rsp, 8
 * 00000001401C9A33: call    loc_1401C9A26
 * 00000001401C9A38: add     rsp, 8
 * 00000001401C9A3C: call    loc_1401C9A2F
 * 00000001401C9A41: add     rsp, 8
 * 00000001401C9A45: call    loc_1401C9A38
 * 00000001401C9A4A: add     rsp, 8
 * 00000001401C9A4E: call    loc_1401C9A41
 * 00000001401C9A53: add     rsp, 8
 * 00000001401C9A57: call    loc_1401C9A4A
 * 00000001401C9A5C: add     rsp, 8
 * 00000001401C9A60: call    loc_1401C9A53
 * 00000001401C9A65: add     rsp, 8
 * 00000001401C9A69: call    loc_1401C9A5C
 * 00000001401C9A6E: add     rsp, 8
 * 00000001401C9A72: call    loc_1401C9A65
 * 00000001401C9A77: add     rsp, 8
 * 00000001401C9A7B: call    loc_1401C9A6E
 * 00000001401C9A80: add     rsp, 8
 * 00000001401C9A84: call    loc_1401C9A77
 * 00000001401C9A89: add     rsp, 8
 * 00000001401C9A8D: call    loc_1401C9A80
 * 00000001401C9A92: add     rsp, 8
 * 00000001401C9A96: call    loc_1401C9A89
 * 00000001401C9A9B: add     rsp, 8
 * 00000001401C9A9F: call    loc_1401C9A92
 * 00000001401C9AA4: add     rsp, 8
 * 00000001401C9AA8: call    loc_1401C9A9B
 * 00000001401C9AAD: add     rsp, 8
 * 00000001401C9AB1: call    loc_1401C9AA4
 * 00000001401C9AB6: add     rsp, 8
 * 00000001401C9ABA: call    loc_1401C9AAD
 * 00000001401C9ABF: add     rsp, 8
 * 00000001401C9AC3: call    loc_1401C9AB6
 * 00000001401C9AC8: add     rsp, 8
 * 00000001401C9ACC: call    loc_1401C9ABF
 * 00000001401C9AD1: add     rsp, 8
 * 00000001401C9AD5: call    loc_1401C9AC8
 * 00000001401C9ADA: add     rsp, 8
 * 00000001401C9ADE: call    loc_1401C9AD1
 * 00000001401C9AE3: add     rsp, 8
 * 00000001401C9AE7: call    loc_1401C9ADA
 * 00000001401C9AEC: add     rsp, 8
 * 00000001401C9AF0: call    loc_1401C9AE3
 * 00000001401C9AF5: add     rsp, 8
 * 00000001401C9AF9: call    loc_1401C9AEC
 * 00000001401C9AFE: add     rsp, 8
 * 00000001401C9B02: mov     eax, 0DADAh
 * 00000001401C9B07: test    edx, 200h
 * 00000001401C9B0D: jz      short loc_1401C9B14
 * 00000001401C9B0F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C9B14: lfence
 * 00000001401C9B17: mov     byte ptr gs:856h, 0
 * 00000001401C9B20: test    byte ptr [r10+3], 80h
 * 00000001401C9B25: jz      short loc_1401C9B69
 * 00000001401C9B27: mov     ecx, 0C0000102h
 * 00000001401C9B2C: rdmsr
 * 00000001401C9B2E: shl     rdx, 20h
 * 00000001401C9B32: or      rax, rdx
 * 00000001401C9B35: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C9B3C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C9B44: cmp     [r10+0F0h], rax
 * 00000001401C9B4B: jz      short loc_1401C9B69
 * 00000001401C9B4D: mov     rdx, [r10+1F0h]
 * 00000001401C9B54: bts     dword ptr [r10+74h], 8
 * 00000001401C9B5A: dec     word ptr [r10+1E6h]
 * 00000001401C9B62: mov     [rdx+80h], rax
 * 00000001401C9B69: test    byte ptr [r10+3], 3
 * 00000001401C9B6E: mov     [rbp+0E8h+var_68], 0
 * 00000001401C9B77: jz      short loc_1401C9B7E
 * 00000001401C9B79: call    KiSaveDebugRegisterState
 * 00000001401C9B7E: cld
 * 00000001401C9B7F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9B83: ldmxcsr dword ptr gs:180h
 * 00000001401C9B8C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C9B90: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C9B94: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C9B98: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C9B9C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C9BA0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C9BA4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C9BAE: jz      short loc_1401C9BB1
 * 00000001401C9BB0: sti
 * 00000001401C9BB1: mov     r9, gs:188h
 * 00000001401C9BBA: bt      dword ptr [r9+74h], 8
 * 00000001401C9BC0: jnb     short loc_1401C9BD0
 * 00000001401C9BC2: test    [rbp+0E8h+arg_0], 1
 * 00000001401C9BC9: jz      short loc_1401C9BD0
 * 00000001401C9BCB: call    KiUmsTrapEntry
 * 00000001401C9BD0: mov     ecx, 10000002h
 * 00000001401C9BD5: xor     edx, edx
 * 00000001401C9BD7: mov     r8, [rbp+0E8h]
 * 00000001401C9BDE: call    KiExceptionDispatch
 * 00000001401C9BE3: nop
 * 00000001401C9BE4: cli
 * 00000001401C9BE5: test    [rbp+0E8h+arg_0], 1
 * 00000001401C9BEC: jz      loc_1401C9E93
 * 00000001401C9BF2: mov     rcx, gs:188h
 * 00000001401C9BFB: test    byte ptr [rcx+0C2h], 3
 * 00000001401C9C02: jz      short loc_1401C9C1F
 * 00000001401C9C04: mov     ecx, 1
 * 00000001401C9C09: mov     cr8, rcx
 * 00000001401C9C0D: sti
 * 00000001401C9C0E: call    KiInitiateUserApc
 * 00000001401C9C13: cli
 * 00000001401C9C14: mov     ecx, 0
 * 00000001401C9C19: mov     cr8, rcx
 * 00000001401C9C1D: jmp     short loc_1401C9BF2
 * 00000001401C9C1F: test    byte ptr gs:86Ch, 2
 * 00000001401C9C28: jz      short loc_1401C9C31
 * 00000001401C9C2A: xor     ecx, ecx
 * 00000001401C9C2C: call    KiUpdateStibpPairing
 * 00000001401C9C31: mov     rcx, gs:188h
 * 00000001401C9C3A: test    dword ptr [rcx], 8000000h
 * 00000001401C9C40: jz      short loc_1401C9C47
 * 00000001401C9C42: call    KiRestoreSetContextState
 * 00000001401C9C47: mov     rcx, gs:188h
 * 00000001401C9C50: test    dword ptr [rcx], 40010000h
 * 00000001401C9C56: jz      short loc_1401C9C7D
 * 00000001401C9C58: test    byte ptr [rcx+2], 1
 * 00000001401C9C5C: jz      short loc_1401C9C6C
 * 00000001401C9C5E: call    KiCopyCounters
 * 00000001401C9C63: mov     rcx, gs:188h
 * 00000001401C9C6C: test    byte ptr [rcx+3], 40h
 * 00000001401C9C70: jz      short loc_1401C9C7D
 * 00000001401C9C72: lea     rsp, [rbp-80h]
 * 00000001401C9C76: mov     cl, 1
 * 00000001401C9C78: call    KiUmsExit
 * 00000001401C9C7D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9C81: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C9C89: jz      short loc_1401C9C90
 * 00000001401C9C8B: call    KiRestoreDebugRegisterState
 * 00000001401C9C90: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C9C94: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9C98: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C9C9C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9CA0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C9CA4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9CA8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C9CAC: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9CB0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C9CB4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9CB8: mov     byte ptr gs:856h, 0
 * 00000001401C9CC1: movzx   eax, word ptr gs:86Ah
 * 00000001401C9CCA: cmp     gs:864h, ax
 * 00000001401C9CD3: jz      short loc_1401C9CE7
 * 00000001401C9CD5: mov     gs:864h, ax
 * 00000001401C9CDE: mov     ecx, 48h ; 'H'
 * 00000001401C9CE3: xor     edx, edx
 * 00000001401C9CE5: wrmsr
 * 00000001401C9CE7: btr     word ptr gs:860h, 2
 * 00000001401C9CF2: jnb     short loc_1401C9D02
 * 00000001401C9CF4: mov     eax, 1
 * 00000001401C9CF9: xor     edx, edx
 * 00000001401C9CFB: mov     ecx, 49h ; 'I'
 * 00000001401C9D00: wrmsr
 * 00000001401C9D02: btr     word ptr gs:860h, 5
 * 00000001401C9D0D: jnb     loc_1401C9E38
 * 00000001401C9D13: call    loc_1401C9E26
 * 00000001401C9D18: add     rsp, 8
 * 00000001401C9D1C: call    loc_1401C9E2F
 * 00000001401C9D21: add     rsp, 8
 * 00000001401C9D25: call    loc_1401C9D18
 * 00000001401C9D2A: add     rsp, 8
 * 00000001401C9D2E: call    loc_1401C9D21
 * 00000001401C9D33: add     rsp, 8
 * 00000001401C9D37: call    loc_1401C9D2A
 * 00000001401C9D3C: add     rsp, 8
 * 00000001401C9D40: call    loc_1401C9D33
 * 00000001401C9D45: add     rsp, 8
 * 00000001401C9D49: call    loc_1401C9D3C
 * 00000001401C9D4E: add     rsp, 8
 * 00000001401C9D52: call    loc_1401C9D45
 * 00000001401C9D57: add     rsp, 8
 * 00000001401C9D5B: call    loc_1401C9D4E
 * 00000001401C9D60: add     rsp, 8
 * 00000001401C9D64: call    loc_1401C9D57
 * 00000001401C9D69: add     rsp, 8
 * 00000001401C9D6D: call    loc_1401C9D60
 * 00000001401C9D72: add     rsp, 8
 * 00000001401C9D76: call    loc_1401C9D69
 * 00000001401C9D7B: add     rsp, 8
 * 00000001401C9D7F: call    loc_1401C9D72
 * 00000001401C9D84: add     rsp, 8
 * 00000001401C9D88: call    loc_1401C9D7B
 * 00000001401C9D8D: add     rsp, 8
 * 00000001401C9D91: call    loc_1401C9D84
 * 00000001401C9D96: add     rsp, 8
 * 00000001401C9D9A: call    loc_1401C9D8D
 * 00000001401C9D9F: add     rsp, 8
 * 00000001401C9DA3: call    loc_1401C9D96
 * 00000001401C9DA8: add     rsp, 8
 * 00000001401C9DAC: call    loc_1401C9D9F
 * 00000001401C9DB1: add     rsp, 8
 * 00000001401C9DB5: call    loc_1401C9DA8
 * 00000001401C9DBA: add     rsp, 8
 * 00000001401C9DBE: call    loc_1401C9DB1
 * 00000001401C9DC3: add     rsp, 8
 * 00000001401C9DC7: call    loc_1401C9DBA
 * 00000001401C9DCC: add     rsp, 8
 * 00000001401C9DD0: call    loc_1401C9DC3
 * 00000001401C9DD5: add     rsp, 8
 * 00000001401C9DD9: call    loc_1401C9DCC
 * 00000001401C9DDE: add     rsp, 8
 * 00000001401C9DE2: call    loc_1401C9DD5
 * 00000001401C9DE7: add     rsp, 8
 * 00000001401C9DEB: call    loc_1401C9DDE
 * 00000001401C9DF0: add     rsp, 8
 * 00000001401C9DF4: call    loc_1401C9DE7
 * 00000001401C9DF9: add     rsp, 8
 * 00000001401C9DFD: call    loc_1401C9DF0
 * 00000001401C9E02: add     rsp, 8
 * 00000001401C9E06: call    loc_1401C9DF9
 * 00000001401C9E0B: add     rsp, 8
 * 00000001401C9E0F: call    loc_1401C9E02
 * 00000001401C9E14: add     rsp, 8
 * 00000001401C9E18: call    loc_1401C9E0B
 * 00000001401C9E1D: add     rsp, 8
 * 00000001401C9E21: call    loc_1401C9E14
 * 00000001401C9E26: add     rsp, 8
 * 00000001401C9E2A: call    loc_1401C9E1D
 * 00000001401C9E2F: add     rsp, 8
 * 00000001401C9E33: mov     eax, 0DADAh
 * 00000001401C9E38: test    word ptr gs:860h, 80h
 * 00000001401C9E43: jz      short loc_1401C9E51
 * 00000001401C9E45: xor     eax, eax
 * 00000001401C9E47: xor     edx, edx
 * 00000001401C9E49: mov     ecx, 1
 * 00000001401C9E4E: div     rcx
 * 00000001401C9E51: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9E55: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C9E59: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C9E5D: mov     rsp, rbp
 * 00000001401C9E60: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9E67: add     rsp, 0E8h
 * 00000001401C9E6E: test    cs:KiKvaShadow, 1
 * 00000001401C9E75: jz      short loc_1401C9E7C
 * 00000001401C9E77: jmp     KiKernelExit
 * 00000001401C9E7C: test    word ptr gs:860h, 100h
 * 00000001401C9E87: jz      short loc_1401C9E8E
 * 00000001401C9E89: verw    [rsp+arg_18]
 * 00000001401C9E8E: swapgs
 * 00000001401C9E91: iretq
 * 00000001401C9E93: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9E97: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C9E9B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9E9F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C9EA3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9EA7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C9EAB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9EAF: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C9EB3: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9EB7: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C9EBB: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9EBF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9EC3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C9EC7: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C9ECB: mov     rsp, rbp
 * 00000001401C9ECE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9ED5: add     rsp, 0E8h
 * 00000001401C9EDC: iretq
 */
