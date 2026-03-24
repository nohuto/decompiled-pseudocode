/*
 * XREFs of KiGeneralProtectionFault @ 0x1401D20C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140350780 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1401D20C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1401D20C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401D20C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D20C0: push    rbp
 * 00000001401D20C1: sub     rsp, 158h
 * 00000001401D20C8: lea     rbp, [rsp+80h]
 * 00000001401D20D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D20D4: mov     [rbp+0D8h+var_128], rax
 * 00000001401D20D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D20DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D20E0: mov     [rbp+0D8h+var_110], r8
 * 00000001401D20E4: mov     [rbp+0D8h+var_108], r9
 * 00000001401D20E8: mov     [rbp+0D8h+var_100], r10
 * 00000001401D20EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D20F0: test    [rbp+0D8h+arg_8], 1
 * 00000001401D20F7: jnz     short loc_1401D2126
 * 00000001401D20F9: lfence
 * 00000001401D20FC: test    byte ptr gs:278h, 1
 * 00000001401D2105: jnz     short loc_1401D210F
 * 00000001401D2107: lfence
 * 00000001401D210A: jmp     loc_1401D236B
 * 00000001401D210F: movzx   eax, byte ptr gs:27Ah
 * 00000001401D2118: mov     ecx, 48h ; 'H'
 * 00000001401D211D: xor     edx, edx
 * 00000001401D211F: wrmsr
 * 00000001401D2121: jmp     loc_1401D236B
 * 00000001401D2126: test    cs:KiKvaShadow, 1
 * 00000001401D212D: jnz     short loc_1401D2132
 * 00000001401D212F: swapgs
 * 00000001401D2132: lfence
 * 00000001401D2135: mov     r10, gs:188h
 * 00000001401D213E: mov     rcx, gs:188h
 * 00000001401D2147: mov     rcx, [rcx+220h]
 * 00000001401D214E: mov     rcx, [rcx+860h]
 * 00000001401D2155: mov     gs:270h, rcx
 * 00000001401D215E: mov     cl, gs:850h
 * 00000001401D2166: mov     gs:851h, cl
 * 00000001401D216E: mov     cl, gs:278h
 * 00000001401D2176: mov     gs:852h, cl
 * 00000001401D217E: movzx   eax, byte ptr gs:27Bh
 * 00000001401D2187: cmp     gs:27Ah, al
 * 00000001401D218F: jz      short loc_1401D21A2
 * 00000001401D2191: mov     gs:27Ah, al
 * 00000001401D2199: mov     ecx, 48h ; 'H'
 * 00000001401D219E: xor     edx, edx
 * 00000001401D21A0: wrmsr
 * 00000001401D21A2: movzx   edx, byte ptr gs:278h
 * 00000001401D21AB: test    edx, 8
 * 00000001401D21B1: jz      short loc_1401D21C6
 * 00000001401D21B3: mov     eax, 1
 * 00000001401D21B8: xor     edx, edx
 * 00000001401D21BA: mov     ecx, 49h ; 'I'
 * 00000001401D21BF: wrmsr
 * 00000001401D21C1: jmp     loc_1401D2304
 * 00000001401D21C6: test    edx, 2
 * 00000001401D21CC: jz      loc_1401D2301
 * 00000001401D21D2: test    byte ptr gs:279h, 4
 * 00000001401D21DB: jnz     loc_1401D2301
 * 00000001401D21E1: call    loc_1401D22F4
 * 00000001401D21E6: add     rsp, 8
 * 00000001401D21EA: call    loc_1401D22FD
 * 00000001401D21EF: add     rsp, 8
 * 00000001401D21F3: call    loc_1401D21E6
 * 00000001401D21F8: add     rsp, 8
 * 00000001401D21FC: call    loc_1401D21EF
 * 00000001401D2201: add     rsp, 8
 * 00000001401D2205: call    loc_1401D21F8
 * 00000001401D220A: add     rsp, 8
 * 00000001401D220E: call    loc_1401D2201
 * 00000001401D2213: add     rsp, 8
 * 00000001401D2217: call    loc_1401D220A
 * 00000001401D221C: add     rsp, 8
 * 00000001401D2220: call    loc_1401D2213
 * 00000001401D2225: add     rsp, 8
 * 00000001401D2229: call    loc_1401D221C
 * 00000001401D222E: add     rsp, 8
 * 00000001401D2232: call    loc_1401D2225
 * 00000001401D2237: add     rsp, 8
 * 00000001401D223B: call    loc_1401D222E
 * 00000001401D2240: add     rsp, 8
 * 00000001401D2244: call    loc_1401D2237
 * 00000001401D2249: add     rsp, 8
 * 00000001401D224D: call    loc_1401D2240
 * 00000001401D2252: add     rsp, 8
 * 00000001401D2256: call    loc_1401D2249
 * 00000001401D225B: add     rsp, 8
 * 00000001401D225F: call    loc_1401D2252
 * 00000001401D2264: add     rsp, 8
 * 00000001401D2268: call    loc_1401D225B
 * 00000001401D226D: add     rsp, 8
 * 00000001401D2271: call    loc_1401D2264
 * 00000001401D2276: add     rsp, 8
 * 00000001401D227A: call    loc_1401D226D
 * 00000001401D227F: add     rsp, 8
 * 00000001401D2283: call    loc_1401D2276
 * 00000001401D2288: add     rsp, 8
 * 00000001401D228C: call    loc_1401D227F
 * 00000001401D2291: add     rsp, 8
 * 00000001401D2295: call    loc_1401D2288
 * 00000001401D229A: add     rsp, 8
 * 00000001401D229E: call    loc_1401D2291
 * 00000001401D22A3: add     rsp, 8
 * 00000001401D22A7: call    loc_1401D229A
 * 00000001401D22AC: add     rsp, 8
 * 00000001401D22B0: call    loc_1401D22A3
 * 00000001401D22B5: add     rsp, 8
 * 00000001401D22B9: call    loc_1401D22AC
 * 00000001401D22BE: add     rsp, 8
 * 00000001401D22C2: call    loc_1401D22B5
 * 00000001401D22C7: add     rsp, 8
 * 00000001401D22CB: call    loc_1401D22BE
 * 00000001401D22D0: add     rsp, 8
 * 00000001401D22D4: call    loc_1401D22C7
 * 00000001401D22D9: add     rsp, 8
 * 00000001401D22DD: call    loc_1401D22D0
 * 00000001401D22E2: add     rsp, 8
 * 00000001401D22E6: call    loc_1401D22D9
 * 00000001401D22EB: add     rsp, 8
 * 00000001401D22EF: call    loc_1401D22E2
 * 00000001401D22F4: add     rsp, 8
 * 00000001401D22F8: call    loc_1401D22EB
 * 00000001401D22FD: add     rsp, 8
 * 00000001401D2301: lfence
 * 00000001401D2304: mov     byte ptr gs:853h, 0
 * 00000001401D230D: test    byte ptr [r10+3], 80h
 * 00000001401D2312: jz      short loc_1401D2356
 * 00000001401D2314: mov     ecx, 0C0000102h
 * 00000001401D2319: rdmsr
 * 00000001401D231B: shl     rdx, 20h
 * 00000001401D231F: or      rax, rdx
 * 00000001401D2322: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D2329: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D2331: cmp     [r10+0F0h], rax
 * 00000001401D2338: jz      short loc_1401D2356
 * 00000001401D233A: mov     rdx, [r10+1F0h]
 * 00000001401D2341: bts     dword ptr [r10+74h], 8
 * 00000001401D2347: dec     word ptr [r10+1E6h]
 * 00000001401D234F: mov     [rdx+80h], rax
 * 00000001401D2356: test    byte ptr [r10+3], 3
 * 00000001401D235B: mov     [rbp+0D8h+var_58], 0
 * 00000001401D2364: jz      short loc_1401D236B
 * 00000001401D2366: call    KiSaveDebugRegisterState
 * 00000001401D236B: cld
 * 00000001401D236C: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D2370: ldmxcsr dword ptr gs:180h
 * 00000001401D2379: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D237D: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D2381: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D2385: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D2389: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D238D: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D2391: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D2398: jz      short loc_1401D23A6
 * 00000001401D239A: test    [rbp+0D8h+arg_8], 1
 * 00000001401D23A1: jz      short loc_1401D23A6
 * 00000001401D23A3: stac
 * 00000001401D23A6: mov     eax, [rbp+0E0h]
 * 00000001401D23AC: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D23B6: jz      short loc_1401D23B9
 * 00000001401D23B8: sti
 * 00000001401D23B9: mov     ecx, 10000001h
 * 00000001401D23BE: mov     edx, 2
 * 00000001401D23C3: mov     r9d, [rbp+0E0h]
 * 00000001401D23CA: and     r9d, 0FFFFh
 * 00000001401D23D1: xor     r10, r10
 * 00000001401D23D4: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D23DB: call    KiExceptionDispatch
 * 00000001401D23E0: nop
 * 00000001401D23E1: retn
 */
