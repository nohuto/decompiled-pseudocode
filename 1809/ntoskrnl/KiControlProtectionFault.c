/*
 * XREFs of KiControlProtectionFault @ 0x1401CDB40
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x14032FB80 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x1401CDB40 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiProcessControlProtection @ 0x14028D9B0 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x1401CDB40
 * Reason: Hex-Rays returned no pseudocode for 0x1401CDB40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CDB40: push    rbp
 * 00000001401CDB41: sub     rsp, 158h
 * 00000001401CDB48: lea     rbp, [rsp+80h]
 * 00000001401CDB50: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CDB54: mov     [rbp+0D8h+var_128], rax
 * 00000001401CDB58: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CDB5C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CDB60: mov     [rbp+0D8h+var_110], r8
 * 00000001401CDB64: mov     [rbp+0D8h+var_108], r9
 * 00000001401CDB68: mov     [rbp+0D8h+var_100], r10
 * 00000001401CDB6C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CDB70: test    [rbp+0D8h+arg_8], 1
 * 00000001401CDB77: jnz     short loc_1401CDBA8
 * 00000001401CDB79: lfence
 * 00000001401CDB7C: test    word ptr gs:860h, 1
 * 00000001401CDB87: jnz     short loc_1401CDB91
 * 00000001401CDB89: lfence
 * 00000001401CDB8C: jmp     loc_1401CDDB1
 * 00000001401CDB91: movzx   eax, word ptr gs:864h
 * 00000001401CDB9A: mov     ecx, 48h ; 'H'
 * 00000001401CDB9F: xor     edx, edx
 * 00000001401CDBA1: wrmsr
 * 00000001401CDBA3: jmp     loc_1401CDDB1
 * 00000001401CDBA8: test    cs:KiKvaShadow, 1
 * 00000001401CDBAF: jnz     short loc_1401CDBB4
 * 00000001401CDBB1: swapgs
 * 00000001401CDBB4: lfence
 * 00000001401CDBB7: mov     r10, gs:188h
 * 00000001401CDBC0: mov     rcx, gs:188h
 * 00000001401CDBC9: mov     rcx, [rcx+220h]
 * 00000001401CDBD0: mov     rcx, [rcx+830h]
 * 00000001401CDBD7: mov     gs:858h, rcx
 * 00000001401CDBE0: mov     cx, gs:850h
 * 00000001401CDBE9: mov     gs:852h, cx
 * 00000001401CDBF2: mov     cx, gs:860h
 * 00000001401CDBFB: mov     gs:854h, cx
 * 00000001401CDC04: movzx   eax, word ptr gs:866h
 * 00000001401CDC0D: cmp     gs:864h, ax
 * 00000001401CDC16: jz      short loc_1401CDC2A
 * 00000001401CDC18: mov     gs:864h, ax
 * 00000001401CDC21: mov     ecx, 48h ; 'H'
 * 00000001401CDC26: xor     edx, edx
 * 00000001401CDC28: wrmsr
 * 00000001401CDC2A: movzx   edx, word ptr gs:860h
 * 00000001401CDC33: test    edx, 8
 * 00000001401CDC39: jz      short loc_1401CDC52
 * 00000001401CDC3B: mov     eax, 1
 * 00000001401CDC40: xor     edx, edx
 * 00000001401CDC42: mov     ecx, 49h ; 'I'
 * 00000001401CDC47: wrmsr
 * 00000001401CDC49: movzx   edx, word ptr gs:860h
 * 00000001401CDC52: test    edx, 2
 * 00000001401CDC58: jz      loc_1401CDD83
 * 00000001401CDC5E: call    loc_1401CDD71
 * 00000001401CDC63: add     rsp, 8
 * 00000001401CDC67: call    loc_1401CDD7A
 * 00000001401CDC6C: add     rsp, 8
 * 00000001401CDC70: call    loc_1401CDC63
 * 00000001401CDC75: add     rsp, 8
 * 00000001401CDC79: call    loc_1401CDC6C
 * 00000001401CDC7E: add     rsp, 8
 * 00000001401CDC82: call    loc_1401CDC75
 * 00000001401CDC87: add     rsp, 8
 * 00000001401CDC8B: call    loc_1401CDC7E
 * 00000001401CDC90: add     rsp, 8
 * 00000001401CDC94: call    loc_1401CDC87
 * 00000001401CDC99: add     rsp, 8
 * 00000001401CDC9D: call    loc_1401CDC90
 * 00000001401CDCA2: add     rsp, 8
 * 00000001401CDCA6: call    loc_1401CDC99
 * 00000001401CDCAB: add     rsp, 8
 * 00000001401CDCAF: call    loc_1401CDCA2
 * 00000001401CDCB4: add     rsp, 8
 * 00000001401CDCB8: call    loc_1401CDCAB
 * 00000001401CDCBD: add     rsp, 8
 * 00000001401CDCC1: call    loc_1401CDCB4
 * 00000001401CDCC6: add     rsp, 8
 * 00000001401CDCCA: call    loc_1401CDCBD
 * 00000001401CDCCF: add     rsp, 8
 * 00000001401CDCD3: call    loc_1401CDCC6
 * 00000001401CDCD8: add     rsp, 8
 * 00000001401CDCDC: call    loc_1401CDCCF
 * 00000001401CDCE1: add     rsp, 8
 * 00000001401CDCE5: call    loc_1401CDCD8
 * 00000001401CDCEA: add     rsp, 8
 * 00000001401CDCEE: call    loc_1401CDCE1
 * 00000001401CDCF3: add     rsp, 8
 * 00000001401CDCF7: call    loc_1401CDCEA
 * 00000001401CDCFC: add     rsp, 8
 * 00000001401CDD00: call    loc_1401CDCF3
 * 00000001401CDD05: add     rsp, 8
 * 00000001401CDD09: call    loc_1401CDCFC
 * 00000001401CDD0E: add     rsp, 8
 * 00000001401CDD12: call    loc_1401CDD05
 * 00000001401CDD17: add     rsp, 8
 * 00000001401CDD1B: call    loc_1401CDD0E
 * 00000001401CDD20: add     rsp, 8
 * 00000001401CDD24: call    loc_1401CDD17
 * 00000001401CDD29: add     rsp, 8
 * 00000001401CDD2D: call    loc_1401CDD20
 * 00000001401CDD32: add     rsp, 8
 * 00000001401CDD36: call    loc_1401CDD29
 * 00000001401CDD3B: add     rsp, 8
 * 00000001401CDD3F: call    loc_1401CDD32
 * 00000001401CDD44: add     rsp, 8
 * 00000001401CDD48: call    loc_1401CDD3B
 * 00000001401CDD4D: add     rsp, 8
 * 00000001401CDD51: call    loc_1401CDD44
 * 00000001401CDD56: add     rsp, 8
 * 00000001401CDD5A: call    loc_1401CDD4D
 * 00000001401CDD5F: add     rsp, 8
 * 00000001401CDD63: call    loc_1401CDD56
 * 00000001401CDD68: add     rsp, 8
 * 00000001401CDD6C: call    loc_1401CDD5F
 * 00000001401CDD71: add     rsp, 8
 * 00000001401CDD75: call    loc_1401CDD68
 * 00000001401CDD7A: add     rsp, 8
 * 00000001401CDD7E: mov     eax, 0DADAh
 * 00000001401CDD83: test    edx, 200h
 * 00000001401CDD89: jz      short loc_1401CDD90
 * 00000001401CDD8B: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CDD90: lfence
 * 00000001401CDD93: mov     byte ptr gs:856h, 0
 * 00000001401CDD9C: test    byte ptr [r10+3], 3
 * 00000001401CDDA1: mov     [rbp+0D8h+var_58], 0
 * 00000001401CDDAA: jz      short loc_1401CDDB1
 * 00000001401CDDAC: call    KiSaveDebugRegisterState
 * 00000001401CDDB1: cld
 * 00000001401CDDB2: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CDDB6: ldmxcsr dword ptr gs:180h
 * 00000001401CDDBF: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CDDC3: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CDDC7: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CDDCB: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CDDCF: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CDDD3: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CDDD7: mov     eax, [rbp+0E0h]
 * 00000001401CDDDD: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CDDE7: jz      short loc_1401CDDEA
 * 00000001401CDDE9: sti
 * 00000001401CDDEA: test    byte ptr gs:6425h, 40h
 * 00000001401CDDF3: jz      short loc_1401CDE30
 * 00000001401CDDF5: mov     r9, gs:188h
 * 00000001401CDDFE: test    byte ptr [r9+3], 80h
 * 00000001401CDE03: jnz     short loc_1401CDE12
 * 00000001401CDE05: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401CDE09: call    KiProcessControlProtection
 * 00000001401CDE0E: test    al, al
 * 00000001401CDE10: jnz     short loc_1401CDE3F
 * 00000001401CDE12: mov     r9, 39h ; '9'
 * 00000001401CDE19: mov     ecx, 0C0000409h
 * 00000001401CDE1E: mov     edx, 1
 * 00000001401CDE23: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CDE2A: call    KiFastFailDispatch
 * 00000001401CDE2F: nop
 * 00000001401CDE30: mov     edx, 15h
 * 00000001401CDE35: mov     ecx, 7Fh
 * 00000001401CDE3A: call    KiBugCheckDispatch
 * 00000001401CDE3F: cli
 * 00000001401CDE40: test    [rbp+0D8h+arg_8], 1
 * 00000001401CDE47: jz      loc_1401CE0EE
 * 00000001401CDE4D: mov     rcx, gs:188h
 * 00000001401CDE56: test    byte ptr [rcx+0C2h], 3
 * 00000001401CDE5D: jz      short loc_1401CDE7A
 * 00000001401CDE5F: mov     ecx, 1
 * 00000001401CDE64: mov     cr8, rcx
 * 00000001401CDE68: sti
 * 00000001401CDE69: call    KiInitiateUserApc
 * 00000001401CDE6E: cli
 * 00000001401CDE6F: mov     ecx, 0
 * 00000001401CDE74: mov     cr8, rcx
 * 00000001401CDE78: jmp     short loc_1401CDE4D
 * 00000001401CDE7A: test    byte ptr gs:86Ch, 2
 * 00000001401CDE83: jz      short loc_1401CDE8C
 * 00000001401CDE85: xor     ecx, ecx
 * 00000001401CDE87: call    KiUpdateStibpPairing
 * 00000001401CDE8C: mov     rcx, gs:188h
 * 00000001401CDE95: test    dword ptr [rcx], 8000000h
 * 00000001401CDE9B: jz      short loc_1401CDEA2
 * 00000001401CDE9D: call    KiRestoreSetContextState
 * 00000001401CDEA2: mov     rcx, gs:188h
 * 00000001401CDEAB: test    dword ptr [rcx], 40010000h
 * 00000001401CDEB1: jz      short loc_1401CDED8
 * 00000001401CDEB3: test    byte ptr [rcx+2], 1
 * 00000001401CDEB7: jz      short loc_1401CDEC7
 * 00000001401CDEB9: call    KiCopyCounters
 * 00000001401CDEBE: mov     rcx, gs:188h
 * 00000001401CDEC7: test    byte ptr [rcx+3], 40h
 * 00000001401CDECB: jz      short loc_1401CDED8
 * 00000001401CDECD: lea     rsp, [rbp-80h]
 * 00000001401CDED1: mov     cl, 1
 * 00000001401CDED3: call    KiUmsExit
 * 00000001401CDED8: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401CDEDC: cmp     [rbp+0D8h+var_58], 0
 * 00000001401CDEE4: jz      short loc_1401CDEEB
 * 00000001401CDEE6: call    KiRestoreDebugRegisterState
 * 00000001401CDEEB: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401CDEEF: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401CDEF3: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401CDEF7: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401CDEFB: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401CDEFF: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401CDF03: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401CDF07: mov     r10, [rbp+0D8h+var_100]
 * 00000001401CDF0B: mov     r9, [rbp+0D8h+var_108]
 * 00000001401CDF0F: mov     r8, [rbp+0D8h+var_110]
 * 00000001401CDF13: mov     byte ptr gs:856h, 0
 * 00000001401CDF1C: movzx   eax, word ptr gs:86Ah
 * 00000001401CDF25: cmp     gs:864h, ax
 * 00000001401CDF2E: jz      short loc_1401CDF42
 * 00000001401CDF30: mov     gs:864h, ax
 * 00000001401CDF39: mov     ecx, 48h ; 'H'
 * 00000001401CDF3E: xor     edx, edx
 * 00000001401CDF40: wrmsr
 * 00000001401CDF42: btr     word ptr gs:860h, 2
 * 00000001401CDF4D: jnb     short loc_1401CDF5D
 * 00000001401CDF4F: mov     eax, 1
 * 00000001401CDF54: xor     edx, edx
 * 00000001401CDF56: mov     ecx, 49h ; 'I'
 * 00000001401CDF5B: wrmsr
 * 00000001401CDF5D: btr     word ptr gs:860h, 5
 * 00000001401CDF68: jnb     loc_1401CE093
 * 00000001401CDF6E: call    loc_1401CE081
 * 00000001401CDF73: add     rsp, 8
 * 00000001401CDF77: call    loc_1401CE08A
 * 00000001401CDF7C: add     rsp, 8
 * 00000001401CDF80: call    loc_1401CDF73
 * 00000001401CDF85: add     rsp, 8
 * 00000001401CDF89: call    loc_1401CDF7C
 * 00000001401CDF8E: add     rsp, 8
 * 00000001401CDF92: call    loc_1401CDF85
 * 00000001401CDF97: add     rsp, 8
 * 00000001401CDF9B: call    loc_1401CDF8E
 * 00000001401CDFA0: add     rsp, 8
 * 00000001401CDFA4: call    loc_1401CDF97
 * 00000001401CDFA9: add     rsp, 8
 * 00000001401CDFAD: call    loc_1401CDFA0
 * 00000001401CDFB2: add     rsp, 8
 * 00000001401CDFB6: call    loc_1401CDFA9
 * 00000001401CDFBB: add     rsp, 8
 * 00000001401CDFBF: call    loc_1401CDFB2
 * 00000001401CDFC4: add     rsp, 8
 * 00000001401CDFC8: call    loc_1401CDFBB
 * 00000001401CDFCD: add     rsp, 8
 * 00000001401CDFD1: call    loc_1401CDFC4
 * 00000001401CDFD6: add     rsp, 8
 * 00000001401CDFDA: call    loc_1401CDFCD
 * 00000001401CDFDF: add     rsp, 8
 * 00000001401CDFE3: call    loc_1401CDFD6
 * 00000001401CDFE8: add     rsp, 8
 * 00000001401CDFEC: call    loc_1401CDFDF
 * 00000001401CDFF1: add     rsp, 8
 * 00000001401CDFF5: call    loc_1401CDFE8
 * 00000001401CDFFA: add     rsp, 8
 * 00000001401CDFFE: call    loc_1401CDFF1
 * 00000001401CE003: add     rsp, 8
 * 00000001401CE007: call    loc_1401CDFFA
 * 00000001401CE00C: add     rsp, 8
 * 00000001401CE010: call    loc_1401CE003
 * 00000001401CE015: add     rsp, 8
 * 00000001401CE019: call    loc_1401CE00C
 * 00000001401CE01E: add     rsp, 8
 * 00000001401CE022: call    loc_1401CE015
 * 00000001401CE027: add     rsp, 8
 * 00000001401CE02B: call    loc_1401CE01E
 * 00000001401CE030: add     rsp, 8
 * 00000001401CE034: call    loc_1401CE027
 * 00000001401CE039: add     rsp, 8
 * 00000001401CE03D: call    loc_1401CE030
 * 00000001401CE042: add     rsp, 8
 * 00000001401CE046: call    loc_1401CE039
 * 00000001401CE04B: add     rsp, 8
 * 00000001401CE04F: call    loc_1401CE042
 * 00000001401CE054: add     rsp, 8
 * 00000001401CE058: call    loc_1401CE04B
 * 00000001401CE05D: add     rsp, 8
 * 00000001401CE061: call    loc_1401CE054
 * 00000001401CE066: add     rsp, 8
 * 00000001401CE06A: call    loc_1401CE05D
 * 00000001401CE06F: add     rsp, 8
 * 00000001401CE073: call    loc_1401CE066
 * 00000001401CE078: add     rsp, 8
 * 00000001401CE07C: call    loc_1401CE06F
 * 00000001401CE081: add     rsp, 8
 * 00000001401CE085: call    loc_1401CE078
 * 00000001401CE08A: add     rsp, 8
 * 00000001401CE08E: mov     eax, 0DADAh
 * 00000001401CE093: test    word ptr gs:860h, 80h
 * 00000001401CE09E: jz      short loc_1401CE0AC
 * 00000001401CE0A0: xor     eax, eax
 * 00000001401CE0A2: xor     edx, edx
 * 00000001401CE0A4: mov     ecx, 1
 * 00000001401CE0A9: div     rcx
 * 00000001401CE0AC: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401CE0B0: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401CE0B4: mov     rax, [rbp+0D8h+var_128]
 * 00000001401CE0B8: mov     rsp, rbp
 * 00000001401CE0BB: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401CE0C2: add     rsp, 0E8h
 * 00000001401CE0C9: test    cs:KiKvaShadow, 1
 * 00000001401CE0D0: jz      short loc_1401CE0D7
 * 00000001401CE0D2: jmp     KiKernelExit
 * 00000001401CE0D7: test    word ptr gs:860h, 100h
 * 00000001401CE0E2: jz      short loc_1401CE0E9
 * 00000001401CE0E4: verw    [rsp-10h+arg_20]
 * 00000001401CE0E9: swapgs
 * 00000001401CE0EC: iretq
 * 00000001401CE0EE: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401CE0F2: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401CE0F6: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401CE0FA: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401CE0FE: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401CE102: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401CE106: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401CE10A: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401CE10E: mov     r10, [rbp+0D8h+var_100]
 * 00000001401CE112: mov     r9, [rbp+0D8h+var_108]
 * 00000001401CE116: mov     r8, [rbp+0D8h+var_110]
 * 00000001401CE11A: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401CE11E: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401CE122: mov     rax, [rbp+0D8h+var_128]
 * 00000001401CE126: mov     rsp, rbp
 * 00000001401CE129: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401CE130: add     rsp, 0E8h
 * 00000001401CE137: iretq
 */
