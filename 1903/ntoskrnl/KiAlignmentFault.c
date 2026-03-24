/*
 * XREFs of KiAlignmentFault @ 0x1401D2200
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140350900 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1401D2200 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1401D2200
 * Reason: Hex-Rays returned no pseudocode for 0x1401D2200
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D2200: push    rbp
 * 00000001401D2201: sub     rsp, 158h
 * 00000001401D2208: lea     rbp, [rsp+80h]
 * 00000001401D2210: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D2214: mov     [rbp+0D8h+var_128], rax
 * 00000001401D2218: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D221C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D2220: mov     [rbp+0D8h+var_110], r8
 * 00000001401D2224: mov     [rbp+0D8h+var_108], r9
 * 00000001401D2228: mov     [rbp+0D8h+var_100], r10
 * 00000001401D222C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D2230: test    [rbp+0D8h+arg_8], 1
 * 00000001401D2237: jnz     short loc_1401D2266
 * 00000001401D2239: lfence
 * 00000001401D223C: test    byte ptr gs:278h, 1
 * 00000001401D2245: jnz     short loc_1401D224F
 * 00000001401D2247: lfence
 * 00000001401D224A: jmp     loc_1401D24AB
 * 00000001401D224F: movzx   eax, byte ptr gs:27Ah
 * 00000001401D2258: mov     ecx, 48h ; 'H'
 * 00000001401D225D: xor     edx, edx
 * 00000001401D225F: wrmsr
 * 00000001401D2261: jmp     loc_1401D24AB
 * 00000001401D2266: test    cs:KiKvaShadow, 1
 * 00000001401D226D: jnz     short loc_1401D2272
 * 00000001401D226F: swapgs
 * 00000001401D2272: lfence
 * 00000001401D2275: mov     r10, gs:188h
 * 00000001401D227E: mov     rcx, gs:188h
 * 00000001401D2287: mov     rcx, [rcx+220h]
 * 00000001401D228E: mov     rcx, [rcx+860h]
 * 00000001401D2295: mov     gs:270h, rcx
 * 00000001401D229E: mov     cl, gs:850h
 * 00000001401D22A6: mov     gs:851h, cl
 * 00000001401D22AE: mov     cl, gs:278h
 * 00000001401D22B6: mov     gs:852h, cl
 * 00000001401D22BE: movzx   eax, byte ptr gs:27Bh
 * 00000001401D22C7: cmp     gs:27Ah, al
 * 00000001401D22CF: jz      short loc_1401D22E2
 * 00000001401D22D1: mov     gs:27Ah, al
 * 00000001401D22D9: mov     ecx, 48h ; 'H'
 * 00000001401D22DE: xor     edx, edx
 * 00000001401D22E0: wrmsr
 * 00000001401D22E2: movzx   edx, byte ptr gs:278h
 * 00000001401D22EB: test    edx, 8
 * 00000001401D22F1: jz      short loc_1401D2306
 * 00000001401D22F3: mov     eax, 1
 * 00000001401D22F8: xor     edx, edx
 * 00000001401D22FA: mov     ecx, 49h ; 'I'
 * 00000001401D22FF: wrmsr
 * 00000001401D2301: jmp     loc_1401D2444
 * 00000001401D2306: test    edx, 2
 * 00000001401D230C: jz      loc_1401D2441
 * 00000001401D2312: test    byte ptr gs:279h, 4
 * 00000001401D231B: jnz     loc_1401D2441
 * 00000001401D2321: call    loc_1401D2434
 * 00000001401D2326: add     rsp, 8
 * 00000001401D232A: call    loc_1401D243D
 * 00000001401D232F: add     rsp, 8
 * 00000001401D2333: call    loc_1401D2326
 * 00000001401D2338: add     rsp, 8
 * 00000001401D233C: call    loc_1401D232F
 * 00000001401D2341: add     rsp, 8
 * 00000001401D2345: call    loc_1401D2338
 * 00000001401D234A: add     rsp, 8
 * 00000001401D234E: call    loc_1401D2341
 * 00000001401D2353: add     rsp, 8
 * 00000001401D2357: call    loc_1401D234A
 * 00000001401D235C: add     rsp, 8
 * 00000001401D2360: call    loc_1401D2353
 * 00000001401D2365: add     rsp, 8
 * 00000001401D2369: call    loc_1401D235C
 * 00000001401D236E: add     rsp, 8
 * 00000001401D2372: call    loc_1401D2365
 * 00000001401D2377: add     rsp, 8
 * 00000001401D237B: call    loc_1401D236E
 * 00000001401D2380: add     rsp, 8
 * 00000001401D2384: call    loc_1401D2377
 * 00000001401D2389: add     rsp, 8
 * 00000001401D238D: call    loc_1401D2380
 * 00000001401D2392: add     rsp, 8
 * 00000001401D2396: call    loc_1401D2389
 * 00000001401D239B: add     rsp, 8
 * 00000001401D239F: call    loc_1401D2392
 * 00000001401D23A4: add     rsp, 8
 * 00000001401D23A8: call    loc_1401D239B
 * 00000001401D23AD: add     rsp, 8
 * 00000001401D23B1: call    loc_1401D23A4
 * 00000001401D23B6: add     rsp, 8
 * 00000001401D23BA: call    loc_1401D23AD
 * 00000001401D23BF: add     rsp, 8
 * 00000001401D23C3: call    loc_1401D23B6
 * 00000001401D23C8: add     rsp, 8
 * 00000001401D23CC: call    loc_1401D23BF
 * 00000001401D23D1: add     rsp, 8
 * 00000001401D23D5: call    loc_1401D23C8
 * 00000001401D23DA: add     rsp, 8
 * 00000001401D23DE: call    loc_1401D23D1
 * 00000001401D23E3: add     rsp, 8
 * 00000001401D23E7: call    loc_1401D23DA
 * 00000001401D23EC: add     rsp, 8
 * 00000001401D23F0: call    loc_1401D23E3
 * 00000001401D23F5: add     rsp, 8
 * 00000001401D23F9: call    loc_1401D23EC
 * 00000001401D23FE: add     rsp, 8
 * 00000001401D2402: call    loc_1401D23F5
 * 00000001401D2407: add     rsp, 8
 * 00000001401D240B: call    loc_1401D23FE
 * 00000001401D2410: add     rsp, 8
 * 00000001401D2414: call    loc_1401D2407
 * 00000001401D2419: add     rsp, 8
 * 00000001401D241D: call    loc_1401D2410
 * 00000001401D2422: add     rsp, 8
 * 00000001401D2426: call    loc_1401D2419
 * 00000001401D242B: add     rsp, 8
 * 00000001401D242F: call    loc_1401D2422
 * 00000001401D2434: add     rsp, 8
 * 00000001401D2438: call    loc_1401D242B
 * 00000001401D243D: add     rsp, 8
 * 00000001401D2441: lfence
 * 00000001401D2444: mov     byte ptr gs:853h, 0
 * 00000001401D244D: test    byte ptr [r10+3], 80h
 * 00000001401D2452: jz      short loc_1401D2496
 * 00000001401D2454: mov     ecx, 0C0000102h
 * 00000001401D2459: rdmsr
 * 00000001401D245B: shl     rdx, 20h
 * 00000001401D245F: or      rax, rdx
 * 00000001401D2462: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D2469: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D2471: cmp     [r10+0F0h], rax
 * 00000001401D2478: jz      short loc_1401D2496
 * 00000001401D247A: mov     rdx, [r10+1F0h]
 * 00000001401D2481: bts     dword ptr [r10+74h], 8
 * 00000001401D2487: dec     word ptr [r10+1E6h]
 * 00000001401D248F: mov     [rdx+80h], rax
 * 00000001401D2496: test    byte ptr [r10+3], 3
 * 00000001401D249B: mov     [rbp+0D8h+var_58], 0
 * 00000001401D24A4: jz      short loc_1401D24AB
 * 00000001401D24A6: call    KiSaveDebugRegisterState
 * 00000001401D24AB: cld
 * 00000001401D24AC: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D24B0: ldmxcsr dword ptr gs:180h
 * 00000001401D24B9: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D24BD: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D24C1: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D24C5: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D24C9: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D24CD: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D24D1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D24D8: jz      short loc_1401D24E6
 * 00000001401D24DA: test    [rbp+0D8h+arg_8], 1
 * 00000001401D24E1: jz      short loc_1401D24E6
 * 00000001401D24E3: stac
 * 00000001401D24E6: mov     eax, [rbp+0E0h]
 * 00000001401D24EC: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D24F6: jz      short loc_1401D24F9
 * 00000001401D24F8: sti
 * 00000001401D24F9: mov     ecx, 80000002h
 * 00000001401D24FE: xor     edx, edx
 * 00000001401D2500: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D2507: call    KiExceptionDispatch
 * 00000001401D250C: nop
 * 00000001401D250D: retn
 */
