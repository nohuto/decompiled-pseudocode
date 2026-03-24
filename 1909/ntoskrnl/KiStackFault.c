/*
 * XREFs of KiStackFault @ 0x1401D1D80
 * Callers:
 *     KiStackFaultShadow @ 0x140350700 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1401D1D80 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1401D1D80
 * Reason: Hex-Rays returned no pseudocode for 0x1401D1D80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D1D80: push    rbp
 * 00000001401D1D81: sub     rsp, 158h
 * 00000001401D1D88: lea     rbp, [rsp+80h]
 * 00000001401D1D90: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D1D94: mov     [rbp+0D8h+var_128], rax
 * 00000001401D1D98: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D1D9C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D1DA0: mov     [rbp+0D8h+var_110], r8
 * 00000001401D1DA4: mov     [rbp+0D8h+var_108], r9
 * 00000001401D1DA8: mov     [rbp+0D8h+var_100], r10
 * 00000001401D1DAC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D1DB0: test    [rbp+0D8h+arg_8], 1
 * 00000001401D1DB7: jnz     short loc_1401D1DE6
 * 00000001401D1DB9: lfence
 * 00000001401D1DBC: test    byte ptr gs:278h, 1
 * 00000001401D1DC5: jnz     short loc_1401D1DCF
 * 00000001401D1DC7: lfence
 * 00000001401D1DCA: jmp     loc_1401D202B
 * 00000001401D1DCF: movzx   eax, byte ptr gs:27Ah
 * 00000001401D1DD8: mov     ecx, 48h ; 'H'
 * 00000001401D1DDD: xor     edx, edx
 * 00000001401D1DDF: wrmsr
 * 00000001401D1DE1: jmp     loc_1401D202B
 * 00000001401D1DE6: test    cs:KiKvaShadow, 1
 * 00000001401D1DED: jnz     short loc_1401D1DF2
 * 00000001401D1DEF: swapgs
 * 00000001401D1DF2: lfence
 * 00000001401D1DF5: mov     r10, gs:188h
 * 00000001401D1DFE: mov     rcx, gs:188h
 * 00000001401D1E07: mov     rcx, [rcx+220h]
 * 00000001401D1E0E: mov     rcx, [rcx+860h]
 * 00000001401D1E15: mov     gs:270h, rcx
 * 00000001401D1E1E: mov     cl, gs:850h
 * 00000001401D1E26: mov     gs:851h, cl
 * 00000001401D1E2E: mov     cl, gs:278h
 * 00000001401D1E36: mov     gs:852h, cl
 * 00000001401D1E3E: movzx   eax, byte ptr gs:27Bh
 * 00000001401D1E47: cmp     gs:27Ah, al
 * 00000001401D1E4F: jz      short loc_1401D1E62
 * 00000001401D1E51: mov     gs:27Ah, al
 * 00000001401D1E59: mov     ecx, 48h ; 'H'
 * 00000001401D1E5E: xor     edx, edx
 * 00000001401D1E60: wrmsr
 * 00000001401D1E62: movzx   edx, byte ptr gs:278h
 * 00000001401D1E6B: test    edx, 8
 * 00000001401D1E71: jz      short loc_1401D1E86
 * 00000001401D1E73: mov     eax, 1
 * 00000001401D1E78: xor     edx, edx
 * 00000001401D1E7A: mov     ecx, 49h ; 'I'
 * 00000001401D1E7F: wrmsr
 * 00000001401D1E81: jmp     loc_1401D1FC4
 * 00000001401D1E86: test    edx, 2
 * 00000001401D1E8C: jz      loc_1401D1FC1
 * 00000001401D1E92: test    byte ptr gs:279h, 4
 * 00000001401D1E9B: jnz     loc_1401D1FC1
 * 00000001401D1EA1: call    loc_1401D1FB4
 * 00000001401D1EA6: add     rsp, 8
 * 00000001401D1EAA: call    loc_1401D1FBD
 * 00000001401D1EAF: add     rsp, 8
 * 00000001401D1EB3: call    loc_1401D1EA6
 * 00000001401D1EB8: add     rsp, 8
 * 00000001401D1EBC: call    loc_1401D1EAF
 * 00000001401D1EC1: add     rsp, 8
 * 00000001401D1EC5: call    loc_1401D1EB8
 * 00000001401D1ECA: add     rsp, 8
 * 00000001401D1ECE: call    loc_1401D1EC1
 * 00000001401D1ED3: add     rsp, 8
 * 00000001401D1ED7: call    loc_1401D1ECA
 * 00000001401D1EDC: add     rsp, 8
 * 00000001401D1EE0: call    loc_1401D1ED3
 * 00000001401D1EE5: add     rsp, 8
 * 00000001401D1EE9: call    loc_1401D1EDC
 * 00000001401D1EEE: add     rsp, 8
 * 00000001401D1EF2: call    loc_1401D1EE5
 * 00000001401D1EF7: add     rsp, 8
 * 00000001401D1EFB: call    loc_1401D1EEE
 * 00000001401D1F00: add     rsp, 8
 * 00000001401D1F04: call    loc_1401D1EF7
 * 00000001401D1F09: add     rsp, 8
 * 00000001401D1F0D: call    loc_1401D1F00
 * 00000001401D1F12: add     rsp, 8
 * 00000001401D1F16: call    loc_1401D1F09
 * 00000001401D1F1B: add     rsp, 8
 * 00000001401D1F1F: call    loc_1401D1F12
 * 00000001401D1F24: add     rsp, 8
 * 00000001401D1F28: call    loc_1401D1F1B
 * 00000001401D1F2D: add     rsp, 8
 * 00000001401D1F31: call    loc_1401D1F24
 * 00000001401D1F36: add     rsp, 8
 * 00000001401D1F3A: call    loc_1401D1F2D
 * 00000001401D1F3F: add     rsp, 8
 * 00000001401D1F43: call    loc_1401D1F36
 * 00000001401D1F48: add     rsp, 8
 * 00000001401D1F4C: call    loc_1401D1F3F
 * 00000001401D1F51: add     rsp, 8
 * 00000001401D1F55: call    loc_1401D1F48
 * 00000001401D1F5A: add     rsp, 8
 * 00000001401D1F5E: call    loc_1401D1F51
 * 00000001401D1F63: add     rsp, 8
 * 00000001401D1F67: call    loc_1401D1F5A
 * 00000001401D1F6C: add     rsp, 8
 * 00000001401D1F70: call    loc_1401D1F63
 * 00000001401D1F75: add     rsp, 8
 * 00000001401D1F79: call    loc_1401D1F6C
 * 00000001401D1F7E: add     rsp, 8
 * 00000001401D1F82: call    loc_1401D1F75
 * 00000001401D1F87: add     rsp, 8
 * 00000001401D1F8B: call    loc_1401D1F7E
 * 00000001401D1F90: add     rsp, 8
 * 00000001401D1F94: call    loc_1401D1F87
 * 00000001401D1F99: add     rsp, 8
 * 00000001401D1F9D: call    loc_1401D1F90
 * 00000001401D1FA2: add     rsp, 8
 * 00000001401D1FA6: call    loc_1401D1F99
 * 00000001401D1FAB: add     rsp, 8
 * 00000001401D1FAF: call    loc_1401D1FA2
 * 00000001401D1FB4: add     rsp, 8
 * 00000001401D1FB8: call    loc_1401D1FAB
 * 00000001401D1FBD: add     rsp, 8
 * 00000001401D1FC1: lfence
 * 00000001401D1FC4: mov     byte ptr gs:853h, 0
 * 00000001401D1FCD: test    byte ptr [r10+3], 80h
 * 00000001401D1FD2: jz      short loc_1401D2016
 * 00000001401D1FD4: mov     ecx, 0C0000102h
 * 00000001401D1FD9: rdmsr
 * 00000001401D1FDB: shl     rdx, 20h
 * 00000001401D1FDF: or      rax, rdx
 * 00000001401D1FE2: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D1FE9: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D1FF1: cmp     [r10+0F0h], rax
 * 00000001401D1FF8: jz      short loc_1401D2016
 * 00000001401D1FFA: mov     rdx, [r10+1F0h]
 * 00000001401D2001: bts     dword ptr [r10+74h], 8
 * 00000001401D2007: dec     word ptr [r10+1E6h]
 * 00000001401D200F: mov     [rdx+80h], rax
 * 00000001401D2016: test    byte ptr [r10+3], 3
 * 00000001401D201B: mov     [rbp+0D8h+var_58], 0
 * 00000001401D2024: jz      short loc_1401D202B
 * 00000001401D2026: call    KiSaveDebugRegisterState
 * 00000001401D202B: cld
 * 00000001401D202C: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D2030: ldmxcsr dword ptr gs:180h
 * 00000001401D2039: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D203D: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D2041: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D2045: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D2049: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D204D: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D2051: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D2058: jz      short loc_1401D2066
 * 00000001401D205A: test    [rbp+0D8h+arg_8], 1
 * 00000001401D2061: jz      short loc_1401D2066
 * 00000001401D2063: stac
 * 00000001401D2066: mov     eax, [rbp+0E0h]
 * 00000001401D206C: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D2076: jz      short loc_1401D2079
 * 00000001401D2078: sti
 * 00000001401D2079: mov     ecx, 0C0000005h
 * 00000001401D207E: mov     edx, 2
 * 00000001401D2083: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D208A: mov     r9d, [rbp+0E0h]
 * 00000001401D2091: or      r9d, 3
 * 00000001401D2095: and     r9d, 0FFFFh
 * 00000001401D209C: test    [rbp+0D8h+arg_8], 1
 * 00000001401D20A3: jnz     short loc_1401D20A9
 * 00000001401D20A5: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001401D20A9: xor     r10, r10
 * 00000001401D20AC: call    KiExceptionDispatch
 * 00000001401D20B1: nop
 * 00000001401D20B2: retn
 */
