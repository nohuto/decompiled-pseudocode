/*
 * XREFs of KiAlignmentFault @ 0x1401CC080
 * Callers:
 *     KiAlignmentFaultShadow @ 0x14032E900 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1401CC080 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1401CC080
 * Reason: Hex-Rays returned no pseudocode for 0x1401CC080
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CC080: push    rbp
 * 00000001401CC081: sub     rsp, 158h
 * 00000001401CC088: lea     rbp, [rsp+80h]
 * 00000001401CC090: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CC094: mov     [rbp+0D8h+var_128], rax
 * 00000001401CC098: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CC09C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CC0A0: mov     [rbp+0D8h+var_110], r8
 * 00000001401CC0A4: mov     [rbp+0D8h+var_108], r9
 * 00000001401CC0A8: mov     [rbp+0D8h+var_100], r10
 * 00000001401CC0AC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CC0B0: test    [rbp+0D8h+arg_8], 1
 * 00000001401CC0B7: jnz     short loc_1401CC0E8
 * 00000001401CC0B9: lfence
 * 00000001401CC0BC: test    word ptr gs:860h, 1
 * 00000001401CC0C7: jnz     short loc_1401CC0D1
 * 00000001401CC0C9: lfence
 * 00000001401CC0CC: jmp     loc_1401CC33A
 * 00000001401CC0D1: movzx   eax, word ptr gs:864h
 * 00000001401CC0DA: mov     ecx, 48h ; 'H'
 * 00000001401CC0DF: xor     edx, edx
 * 00000001401CC0E1: wrmsr
 * 00000001401CC0E3: jmp     loc_1401CC33A
 * 00000001401CC0E8: test    cs:KiKvaShadow, 1
 * 00000001401CC0EF: jnz     short loc_1401CC0F4
 * 00000001401CC0F1: swapgs
 * 00000001401CC0F4: lfence
 * 00000001401CC0F7: mov     r10, gs:188h
 * 00000001401CC100: mov     rcx, gs:188h
 * 00000001401CC109: mov     rcx, [rcx+220h]
 * 00000001401CC110: mov     rcx, [rcx+830h]
 * 00000001401CC117: mov     gs:858h, rcx
 * 00000001401CC120: mov     cx, gs:850h
 * 00000001401CC129: mov     gs:852h, cx
 * 00000001401CC132: mov     cx, gs:860h
 * 00000001401CC13B: mov     gs:854h, cx
 * 00000001401CC144: movzx   eax, word ptr gs:866h
 * 00000001401CC14D: cmp     gs:864h, ax
 * 00000001401CC156: jz      short loc_1401CC16A
 * 00000001401CC158: mov     gs:864h, ax
 * 00000001401CC161: mov     ecx, 48h ; 'H'
 * 00000001401CC166: xor     edx, edx
 * 00000001401CC168: wrmsr
 * 00000001401CC16A: movzx   edx, word ptr gs:860h
 * 00000001401CC173: test    edx, 8
 * 00000001401CC179: jz      short loc_1401CC192
 * 00000001401CC17B: mov     eax, 1
 * 00000001401CC180: xor     edx, edx
 * 00000001401CC182: mov     ecx, 49h ; 'I'
 * 00000001401CC187: wrmsr
 * 00000001401CC189: movzx   edx, word ptr gs:860h
 * 00000001401CC192: test    edx, 2
 * 00000001401CC198: jz      loc_1401CC2C3
 * 00000001401CC19E: call    loc_1401CC2B1
 * 00000001401CC1A3: add     rsp, 8
 * 00000001401CC1A7: call    loc_1401CC2BA
 * 00000001401CC1AC: add     rsp, 8
 * 00000001401CC1B0: call    loc_1401CC1A3
 * 00000001401CC1B5: add     rsp, 8
 * 00000001401CC1B9: call    loc_1401CC1AC
 * 00000001401CC1BE: add     rsp, 8
 * 00000001401CC1C2: call    loc_1401CC1B5
 * 00000001401CC1C7: add     rsp, 8
 * 00000001401CC1CB: call    loc_1401CC1BE
 * 00000001401CC1D0: add     rsp, 8
 * 00000001401CC1D4: call    loc_1401CC1C7
 * 00000001401CC1D9: add     rsp, 8
 * 00000001401CC1DD: call    loc_1401CC1D0
 * 00000001401CC1E2: add     rsp, 8
 * 00000001401CC1E6: call    loc_1401CC1D9
 * 00000001401CC1EB: add     rsp, 8
 * 00000001401CC1EF: call    loc_1401CC1E2
 * 00000001401CC1F4: add     rsp, 8
 * 00000001401CC1F8: call    loc_1401CC1EB
 * 00000001401CC1FD: add     rsp, 8
 * 00000001401CC201: call    loc_1401CC1F4
 * 00000001401CC206: add     rsp, 8
 * 00000001401CC20A: call    loc_1401CC1FD
 * 00000001401CC20F: add     rsp, 8
 * 00000001401CC213: call    loc_1401CC206
 * 00000001401CC218: add     rsp, 8
 * 00000001401CC21C: call    loc_1401CC20F
 * 00000001401CC221: add     rsp, 8
 * 00000001401CC225: call    loc_1401CC218
 * 00000001401CC22A: add     rsp, 8
 * 00000001401CC22E: call    loc_1401CC221
 * 00000001401CC233: add     rsp, 8
 * 00000001401CC237: call    loc_1401CC22A
 * 00000001401CC23C: add     rsp, 8
 * 00000001401CC240: call    loc_1401CC233
 * 00000001401CC245: add     rsp, 8
 * 00000001401CC249: call    loc_1401CC23C
 * 00000001401CC24E: add     rsp, 8
 * 00000001401CC252: call    loc_1401CC245
 * 00000001401CC257: add     rsp, 8
 * 00000001401CC25B: call    loc_1401CC24E
 * 00000001401CC260: add     rsp, 8
 * 00000001401CC264: call    loc_1401CC257
 * 00000001401CC269: add     rsp, 8
 * 00000001401CC26D: call    loc_1401CC260
 * 00000001401CC272: add     rsp, 8
 * 00000001401CC276: call    loc_1401CC269
 * 00000001401CC27B: add     rsp, 8
 * 00000001401CC27F: call    loc_1401CC272
 * 00000001401CC284: add     rsp, 8
 * 00000001401CC288: call    loc_1401CC27B
 * 00000001401CC28D: add     rsp, 8
 * 00000001401CC291: call    loc_1401CC284
 * 00000001401CC296: add     rsp, 8
 * 00000001401CC29A: call    loc_1401CC28D
 * 00000001401CC29F: add     rsp, 8
 * 00000001401CC2A3: call    loc_1401CC296
 * 00000001401CC2A8: add     rsp, 8
 * 00000001401CC2AC: call    loc_1401CC29F
 * 00000001401CC2B1: add     rsp, 8
 * 00000001401CC2B5: call    loc_1401CC2A8
 * 00000001401CC2BA: add     rsp, 8
 * 00000001401CC2BE: mov     eax, 0DADAh
 * 00000001401CC2C3: test    edx, 200h
 * 00000001401CC2C9: jz      short loc_1401CC2D0
 * 00000001401CC2CB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CC2D0: lfence
 * 00000001401CC2D3: mov     byte ptr gs:856h, 0
 * 00000001401CC2DC: test    byte ptr [r10+3], 80h
 * 00000001401CC2E1: jz      short loc_1401CC325
 * 00000001401CC2E3: mov     ecx, 0C0000102h
 * 00000001401CC2E8: rdmsr
 * 00000001401CC2EA: shl     rdx, 20h
 * 00000001401CC2EE: or      rax, rdx
 * 00000001401CC2F1: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CC2F8: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CC300: cmp     [r10+0F0h], rax
 * 00000001401CC307: jz      short loc_1401CC325
 * 00000001401CC309: mov     rdx, [r10+1F0h]
 * 00000001401CC310: bts     dword ptr [r10+74h], 8
 * 00000001401CC316: dec     word ptr [r10+1E6h]
 * 00000001401CC31E: mov     [rdx+80h], rax
 * 00000001401CC325: test    byte ptr [r10+3], 3
 * 00000001401CC32A: mov     [rbp+0D8h+var_58], 0
 * 00000001401CC333: jz      short loc_1401CC33A
 * 00000001401CC335: call    KiSaveDebugRegisterState
 * 00000001401CC33A: cld
 * 00000001401CC33B: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CC33F: ldmxcsr dword ptr gs:180h
 * 00000001401CC348: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CC34C: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CC350: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CC354: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CC358: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CC35C: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CC360: mov     eax, [rbp+0E0h]
 * 00000001401CC366: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CC370: jz      short loc_1401CC373
 * 00000001401CC372: sti
 * 00000001401CC373: mov     ecx, 80000002h
 * 00000001401CC378: xor     edx, edx
 * 00000001401CC37A: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CC381: call    KiExceptionDispatch
 * 00000001401CC386: nop
 * 00000001401CC387: retn
 */
