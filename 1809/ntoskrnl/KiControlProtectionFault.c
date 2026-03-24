/*
 * XREFs of KiControlProtectionFault @ 0x1401CDA40
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x14032EB80 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x1401CDA40 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1401CFE00 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x1401D02C0 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiProcessControlProtection @ 0x14028D7C0 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x1401CDA40
 * Reason: Hex-Rays returned no pseudocode for 0x1401CDA40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CDA40: push    rbp
 * 00000001401CDA41: sub     rsp, 158h
 * 00000001401CDA48: lea     rbp, [rsp+80h]
 * 00000001401CDA50: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CDA54: mov     [rbp+0D8h+var_128], rax
 * 00000001401CDA58: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CDA5C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CDA60: mov     [rbp+0D8h+var_110], r8
 * 00000001401CDA64: mov     [rbp+0D8h+var_108], r9
 * 00000001401CDA68: mov     [rbp+0D8h+var_100], r10
 * 00000001401CDA6C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CDA70: test    [rbp+0D8h+arg_8], 1
 * 00000001401CDA77: jnz     short loc_1401CDAA8
 * 00000001401CDA79: lfence
 * 00000001401CDA7C: test    word ptr gs:860h, 1
 * 00000001401CDA87: jnz     short loc_1401CDA91
 * 00000001401CDA89: lfence
 * 00000001401CDA8C: jmp     loc_1401CDCB1
 * 00000001401CDA91: movzx   eax, word ptr gs:864h
 * 00000001401CDA9A: mov     ecx, 48h ; 'H'
 * 00000001401CDA9F: xor     edx, edx
 * 00000001401CDAA1: wrmsr
 * 00000001401CDAA3: jmp     loc_1401CDCB1
 * 00000001401CDAA8: test    cs:KiKvaShadow, 1
 * 00000001401CDAAF: jnz     short loc_1401CDAB4
 * 00000001401CDAB1: swapgs
 * 00000001401CDAB4: lfence
 * 00000001401CDAB7: mov     r10, gs:188h
 * 00000001401CDAC0: mov     rcx, gs:188h
 * 00000001401CDAC9: mov     rcx, [rcx+220h]
 * 00000001401CDAD0: mov     rcx, [rcx+830h]
 * 00000001401CDAD7: mov     gs:858h, rcx
 * 00000001401CDAE0: mov     cx, gs:850h
 * 00000001401CDAE9: mov     gs:852h, cx
 * 00000001401CDAF2: mov     cx, gs:860h
 * 00000001401CDAFB: mov     gs:854h, cx
 * 00000001401CDB04: movzx   eax, word ptr gs:866h
 * 00000001401CDB0D: cmp     gs:864h, ax
 * 00000001401CDB16: jz      short loc_1401CDB2A
 * 00000001401CDB18: mov     gs:864h, ax
 * 00000001401CDB21: mov     ecx, 48h ; 'H'
 * 00000001401CDB26: xor     edx, edx
 * 00000001401CDB28: wrmsr
 * 00000001401CDB2A: movzx   edx, word ptr gs:860h
 * 00000001401CDB33: test    edx, 8
 * 00000001401CDB39: jz      short loc_1401CDB52
 * 00000001401CDB3B: mov     eax, 1
 * 00000001401CDB40: xor     edx, edx
 * 00000001401CDB42: mov     ecx, 49h ; 'I'
 * 00000001401CDB47: wrmsr
 * 00000001401CDB49: movzx   edx, word ptr gs:860h
 * 00000001401CDB52: test    edx, 2
 * 00000001401CDB58: jz      loc_1401CDC83
 * 00000001401CDB5E: call    loc_1401CDC71
 * 00000001401CDB63: add     rsp, 8
 * 00000001401CDB67: call    loc_1401CDC7A
 * 00000001401CDB6C: add     rsp, 8
 * 00000001401CDB70: call    loc_1401CDB63
 * 00000001401CDB75: add     rsp, 8
 * 00000001401CDB79: call    loc_1401CDB6C
 * 00000001401CDB7E: add     rsp, 8
 * 00000001401CDB82: call    loc_1401CDB75
 * 00000001401CDB87: add     rsp, 8
 * 00000001401CDB8B: call    loc_1401CDB7E
 * 00000001401CDB90: add     rsp, 8
 * 00000001401CDB94: call    loc_1401CDB87
 * 00000001401CDB99: add     rsp, 8
 * 00000001401CDB9D: call    loc_1401CDB90
 * 00000001401CDBA2: add     rsp, 8
 * 00000001401CDBA6: call    loc_1401CDB99
 * 00000001401CDBAB: add     rsp, 8
 * 00000001401CDBAF: call    loc_1401CDBA2
 * 00000001401CDBB4: add     rsp, 8
 * 00000001401CDBB8: call    loc_1401CDBAB
 * 00000001401CDBBD: add     rsp, 8
 * 00000001401CDBC1: call    loc_1401CDBB4
 * 00000001401CDBC6: add     rsp, 8
 * 00000001401CDBCA: call    loc_1401CDBBD
 * 00000001401CDBCF: add     rsp, 8
 * 00000001401CDBD3: call    loc_1401CDBC6
 * 00000001401CDBD8: add     rsp, 8
 * 00000001401CDBDC: call    loc_1401CDBCF
 * 00000001401CDBE1: add     rsp, 8
 * 00000001401CDBE5: call    loc_1401CDBD8
 * 00000001401CDBEA: add     rsp, 8
 * 00000001401CDBEE: call    loc_1401CDBE1
 * 00000001401CDBF3: add     rsp, 8
 * 00000001401CDBF7: call    loc_1401CDBEA
 * 00000001401CDBFC: add     rsp, 8
 * 00000001401CDC00: call    loc_1401CDBF3
 * 00000001401CDC05: add     rsp, 8
 * 00000001401CDC09: call    loc_1401CDBFC
 * 00000001401CDC0E: add     rsp, 8
 * 00000001401CDC12: call    loc_1401CDC05
 * 00000001401CDC17: add     rsp, 8
 * 00000001401CDC1B: call    loc_1401CDC0E
 * 00000001401CDC20: add     rsp, 8
 * 00000001401CDC24: call    loc_1401CDC17
 * 00000001401CDC29: add     rsp, 8
 * 00000001401CDC2D: call    loc_1401CDC20
 * 00000001401CDC32: add     rsp, 8
 * 00000001401CDC36: call    loc_1401CDC29
 * 00000001401CDC3B: add     rsp, 8
 * 00000001401CDC3F: call    loc_1401CDC32
 * 00000001401CDC44: add     rsp, 8
 * 00000001401CDC48: call    loc_1401CDC3B
 * 00000001401CDC4D: add     rsp, 8
 * 00000001401CDC51: call    loc_1401CDC44
 * 00000001401CDC56: add     rsp, 8
 * 00000001401CDC5A: call    loc_1401CDC4D
 * 00000001401CDC5F: add     rsp, 8
 * 00000001401CDC63: call    loc_1401CDC56
 * 00000001401CDC68: add     rsp, 8
 * 00000001401CDC6C: call    loc_1401CDC5F
 * 00000001401CDC71: add     rsp, 8
 * 00000001401CDC75: call    loc_1401CDC68
 * 00000001401CDC7A: add     rsp, 8
 * 00000001401CDC7E: mov     eax, 0DADAh
 * 00000001401CDC83: test    edx, 200h
 * 00000001401CDC89: jz      short loc_1401CDC90
 * 00000001401CDC8B: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CDC90: lfence
 * 00000001401CDC93: mov     byte ptr gs:856h, 0
 * 00000001401CDC9C: test    byte ptr [r10+3], 3
 * 00000001401CDCA1: mov     [rbp+0D8h+var_58], 0
 * 00000001401CDCAA: jz      short loc_1401CDCB1
 * 00000001401CDCAC: call    KiSaveDebugRegisterState
 * 00000001401CDCB1: cld
 * 00000001401CDCB2: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CDCB6: ldmxcsr dword ptr gs:180h
 * 00000001401CDCBF: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CDCC3: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CDCC7: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CDCCB: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CDCCF: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CDCD3: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CDCD7: mov     eax, [rbp+0E0h]
 * 00000001401CDCDD: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CDCE7: jz      short loc_1401CDCEA
 * 00000001401CDCE9: sti
 * 00000001401CDCEA: test    byte ptr gs:6425h, 40h
 * 00000001401CDCF3: jz      short loc_1401CDD30
 * 00000001401CDCF5: mov     r9, gs:188h
 * 00000001401CDCFE: test    byte ptr [r9+3], 80h
 * 00000001401CDD03: jnz     short loc_1401CDD12
 * 00000001401CDD05: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401CDD09: call    KiProcessControlProtection
 * 00000001401CDD0E: test    al, al
 * 00000001401CDD10: jnz     short loc_1401CDD3F
 * 00000001401CDD12: mov     r9, 39h ; '9'
 * 00000001401CDD19: mov     ecx, 0C0000409h
 * 00000001401CDD1E: mov     edx, 1
 * 00000001401CDD23: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CDD2A: call    KiFastFailDispatch
 * 00000001401CDD2F: nop
 * 00000001401CDD30: mov     edx, 15h
 * 00000001401CDD35: mov     ecx, 7Fh
 * 00000001401CDD3A: call    KiBugCheckDispatch
 * 00000001401CDD3F: cli
 * 00000001401CDD40: test    [rbp+0D8h+arg_8], 1
 * 00000001401CDD47: jz      loc_1401CDFEE
 * 00000001401CDD4D: mov     rcx, gs:188h
 * 00000001401CDD56: test    byte ptr [rcx+0C2h], 3
 * 00000001401CDD5D: jz      short loc_1401CDD7A
 * 00000001401CDD5F: mov     ecx, 1
 * 00000001401CDD64: mov     cr8, rcx
 * 00000001401CDD68: sti
 * 00000001401CDD69: call    KiInitiateUserApc
 * 00000001401CDD6E: cli
 * 00000001401CDD6F: mov     ecx, 0
 * 00000001401CDD74: mov     cr8, rcx
 * 00000001401CDD78: jmp     short loc_1401CDD4D
 * 00000001401CDD7A: test    byte ptr gs:86Ch, 2
 * 00000001401CDD83: jz      short loc_1401CDD8C
 * 00000001401CDD85: xor     ecx, ecx
 * 00000001401CDD87: call    KiUpdateStibpPairing
 * 00000001401CDD8C: mov     rcx, gs:188h
 * 00000001401CDD95: test    dword ptr [rcx], 8000000h
 * 00000001401CDD9B: jz      short loc_1401CDDA2
 * 00000001401CDD9D: call    KiRestoreSetContextState
 * 00000001401CDDA2: mov     rcx, gs:188h
 * 00000001401CDDAB: test    dword ptr [rcx], 40010000h
 * 00000001401CDDB1: jz      short loc_1401CDDD8
 * 00000001401CDDB3: test    byte ptr [rcx+2], 1
 * 00000001401CDDB7: jz      short loc_1401CDDC7
 * 00000001401CDDB9: call    KiCopyCounters
 * 00000001401CDDBE: mov     rcx, gs:188h
 * 00000001401CDDC7: test    byte ptr [rcx+3], 40h
 * 00000001401CDDCB: jz      short loc_1401CDDD8
 * 00000001401CDDCD: lea     rsp, [rbp-80h]
 * 00000001401CDDD1: mov     cl, 1
 * 00000001401CDDD3: call    KiUmsExit
 * 00000001401CDDD8: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401CDDDC: cmp     [rbp+0D8h+var_58], 0
 * 00000001401CDDE4: jz      short loc_1401CDDEB
 * 00000001401CDDE6: call    KiRestoreDebugRegisterState
 * 00000001401CDDEB: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401CDDEF: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401CDDF3: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401CDDF7: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401CDDFB: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401CDDFF: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401CDE03: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401CDE07: mov     r10, [rbp+0D8h+var_100]
 * 00000001401CDE0B: mov     r9, [rbp+0D8h+var_108]
 * 00000001401CDE0F: mov     r8, [rbp+0D8h+var_110]
 * 00000001401CDE13: mov     byte ptr gs:856h, 0
 * 00000001401CDE1C: movzx   eax, word ptr gs:86Ah
 * 00000001401CDE25: cmp     gs:864h, ax
 * 00000001401CDE2E: jz      short loc_1401CDE42
 * 00000001401CDE30: mov     gs:864h, ax
 * 00000001401CDE39: mov     ecx, 48h ; 'H'
 * 00000001401CDE3E: xor     edx, edx
 * 00000001401CDE40: wrmsr
 * 00000001401CDE42: btr     word ptr gs:860h, 2
 * 00000001401CDE4D: jnb     short loc_1401CDE5D
 * 00000001401CDE4F: mov     eax, 1
 * 00000001401CDE54: xor     edx, edx
 * 00000001401CDE56: mov     ecx, 49h ; 'I'
 * 00000001401CDE5B: wrmsr
 * 00000001401CDE5D: btr     word ptr gs:860h, 5
 * 00000001401CDE68: jnb     loc_1401CDF93
 * 00000001401CDE6E: call    loc_1401CDF81
 * 00000001401CDE73: add     rsp, 8
 * 00000001401CDE77: call    loc_1401CDF8A
 * 00000001401CDE7C: add     rsp, 8
 * 00000001401CDE80: call    loc_1401CDE73
 * 00000001401CDE85: add     rsp, 8
 * 00000001401CDE89: call    loc_1401CDE7C
 * 00000001401CDE8E: add     rsp, 8
 * 00000001401CDE92: call    loc_1401CDE85
 * 00000001401CDE97: add     rsp, 8
 * 00000001401CDE9B: call    loc_1401CDE8E
 * 00000001401CDEA0: add     rsp, 8
 * 00000001401CDEA4: call    loc_1401CDE97
 * 00000001401CDEA9: add     rsp, 8
 * 00000001401CDEAD: call    loc_1401CDEA0
 * 00000001401CDEB2: add     rsp, 8
 * 00000001401CDEB6: call    loc_1401CDEA9
 * 00000001401CDEBB: add     rsp, 8
 * 00000001401CDEBF: call    loc_1401CDEB2
 * 00000001401CDEC4: add     rsp, 8
 * 00000001401CDEC8: call    loc_1401CDEBB
 * 00000001401CDECD: add     rsp, 8
 * 00000001401CDED1: call    loc_1401CDEC4
 * 00000001401CDED6: add     rsp, 8
 * 00000001401CDEDA: call    loc_1401CDECD
 * 00000001401CDEDF: add     rsp, 8
 * 00000001401CDEE3: call    loc_1401CDED6
 * 00000001401CDEE8: add     rsp, 8
 * 00000001401CDEEC: call    loc_1401CDEDF
 * 00000001401CDEF1: add     rsp, 8
 * 00000001401CDEF5: call    loc_1401CDEE8
 * 00000001401CDEFA: add     rsp, 8
 * 00000001401CDEFE: call    loc_1401CDEF1
 * 00000001401CDF03: add     rsp, 8
 * 00000001401CDF07: call    loc_1401CDEFA
 * 00000001401CDF0C: add     rsp, 8
 * 00000001401CDF10: call    loc_1401CDF03
 * 00000001401CDF15: add     rsp, 8
 * 00000001401CDF19: call    loc_1401CDF0C
 * 00000001401CDF1E: add     rsp, 8
 * 00000001401CDF22: call    loc_1401CDF15
 * 00000001401CDF27: add     rsp, 8
 * 00000001401CDF2B: call    loc_1401CDF1E
 * 00000001401CDF30: add     rsp, 8
 * 00000001401CDF34: call    loc_1401CDF27
 * 00000001401CDF39: add     rsp, 8
 * 00000001401CDF3D: call    loc_1401CDF30
 * 00000001401CDF42: add     rsp, 8
 * 00000001401CDF46: call    loc_1401CDF39
 * 00000001401CDF4B: add     rsp, 8
 * 00000001401CDF4F: call    loc_1401CDF42
 * 00000001401CDF54: add     rsp, 8
 * 00000001401CDF58: call    loc_1401CDF4B
 * 00000001401CDF5D: add     rsp, 8
 * 00000001401CDF61: call    loc_1401CDF54
 * 00000001401CDF66: add     rsp, 8
 * 00000001401CDF6A: call    loc_1401CDF5D
 * 00000001401CDF6F: add     rsp, 8
 * 00000001401CDF73: call    loc_1401CDF66
 * 00000001401CDF78: add     rsp, 8
 * 00000001401CDF7C: call    loc_1401CDF6F
 * 00000001401CDF81: add     rsp, 8
 * 00000001401CDF85: call    loc_1401CDF78
 * 00000001401CDF8A: add     rsp, 8
 * 00000001401CDF8E: mov     eax, 0DADAh
 * 00000001401CDF93: test    word ptr gs:860h, 80h
 * 00000001401CDF9E: jz      short loc_1401CDFAC
 * 00000001401CDFA0: xor     eax, eax
 * 00000001401CDFA2: xor     edx, edx
 * 00000001401CDFA4: mov     ecx, 1
 * 00000001401CDFA9: div     rcx
 * 00000001401CDFAC: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401CDFB0: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401CDFB4: mov     rax, [rbp+0D8h+var_128]
 * 00000001401CDFB8: mov     rsp, rbp
 * 00000001401CDFBB: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401CDFC2: add     rsp, 0E8h
 * 00000001401CDFC9: test    cs:KiKvaShadow, 1
 * 00000001401CDFD0: jz      short loc_1401CDFD7
 * 00000001401CDFD2: jmp     KiKernelExit
 * 00000001401CDFD7: test    word ptr gs:860h, 100h
 * 00000001401CDFE2: jz      short loc_1401CDFE9
 * 00000001401CDFE4: verw    [rsp-10h+arg_20]
 * 00000001401CDFE9: swapgs
 * 00000001401CDFEC: iretq
 * 00000001401CDFEE: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401CDFF2: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401CDFF6: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401CDFFA: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401CDFFE: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401CE002: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401CE006: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401CE00A: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401CE00E: mov     r10, [rbp+0D8h+var_100]
 * 00000001401CE012: mov     r9, [rbp+0D8h+var_108]
 * 00000001401CE016: mov     r8, [rbp+0D8h+var_110]
 * 00000001401CE01A: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401CE01E: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401CE022: mov     rax, [rbp+0D8h+var_128]
 * 00000001401CE026: mov     rsp, rbp
 * 00000001401CE029: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401CE030: add     rsp, 0E8h
 * 00000001401CE037: iretq
 */
