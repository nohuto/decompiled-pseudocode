/*
 * XREFs of KiHvInterruptDispatch @ 0x1401C2170
 * Callers:
 *     KiHvInterrupt @ 0x1401C12C0 (KiHvInterrupt.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x1401C2170 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1401C2940 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1401C2170
 * Reason: Hex-Rays returned no pseudocode for 0x1401C2170
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C2170: mov     rdx, rsp
 * 00000001401C2173: mov     rcx, gs:6458h
 * 00000001401C217C: lea     rax, [rcx-6000h]
 * 00000001401C2183: cmp     rax, rsp
 * 00000001401C2186: ja      short loc_1401C218D
 * 00000001401C2188: cmp     rsp, rcx
 * 00000001401C218B: jb      short loc_1401C2199
 * 00000001401C218D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C2194: jnz     short loc_1401C2199
 * 00000001401C2196: mov     rsp, rcx
 * 00000001401C2199: sub     rsp, 20h
 * 00000001401C219D: mov     [rsp+20h+var_10], rdx
 * 00000001401C21A2: call    KiHvInterruptSubDispatch
 * 00000001401C21A7: mov     rsp, [rsp+20h+var_10]
 * 00000001401C21AC: test    cs:HvlEnlightenments, 1000h
 * 00000001401C21B6: jz      short loc_1401C21C0
 * 00000001401C21B8: mov     rcx, rsi
 * 00000001401C21BB: call    HalPerformEndOfInterrupt_0
 * 00000001401C21C0: cli
 * 00000001401C21C1: mov     rcx, gs:20h
 * 00000001401C21CA: cmp     byte ptr [rcx+20h], 1
 * 00000001401C21CE: ja      short loc_1401C224A
 * 00000001401C21D0: rdtsc
 * 00000001401C21D2: shl     rdx, 20h
 * 00000001401C21D6: or      rax, rdx
 * 00000001401C21D9: sub     rax, [rcx+5BC0h]
 * 00000001401C21E0: add     [rcx+5C38h], rax
 * 00000001401C21E7: add     [rcx+5BC0h], rax
 * 00000001401C21EE: mov     r8, rax
 * 00000001401C21F1: mov     rax, [rcx+8]
 * 00000001401C21F5: test    byte ptr [rax+2], 72h
 * 00000001401C21F9: jz      short loc_1401C220E
 * 00000001401C21FB: xor     edx, edx
 * 00000001401C21FD: call    KiBeginThreadAccountingPeriod
 * 00000001401C2202: mov     rcx, gs:20h
 * 00000001401C220B: inc     byte ptr [rcx+20h]
 * 00000001401C220E: mov     dl, [rcx+6]
 * 00000001401C2211: and     byte ptr [rcx+6], 0
 * 00000001401C2215: cmp     byte ptr [rcx+7], 0
 * 00000001401C2219: jnz     short loc_1401C224A
 * 00000001401C221B: test    dl, dl
 * 00000001401C221D: jz      short loc_1401C224A
 * 00000001401C221F: cmp     byte ptr [rbp-57h], 2
 * 00000001401C2223: jnb     short loc_1401C2230
 * 00000001401C2225: and     byte ptr [rcx+20h], 0
 * 00000001401C2229: call    KiDpcInterruptBypass
 * 00000001401C222E: jmp     short loc_1401C224D
 * 00000001401C2230: mov     ecx, 2
 * 00000001401C2235: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C223C: nop     dword ptr [rax+rax+00h]
 * 00000001401C2241: mov     rcx, gs:20h
 * 00000001401C224A: dec     byte ptr [rcx+20h]
 * 00000001401C224D: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C2251: cmp     cs:KiIrqlFlags, 0
 * 00000001401C2258: jz      short loc_1401C2261
 * 00000001401C225A: call    KzSetIrqlUnsafe
 * 00000001401C225F: jmp     short loc_1401C2265
 * 00000001401C2261: mov     cr8, rcx
 * 00000001401C2265: mov     rsi, [rbp+0D0h]
 * 00000001401C226C: cli
 * 00000001401C226D: test    byte ptr [rbp+0F0h], 1
 * 00000001401C2274: jz      loc_1401C250A
 * 00000001401C227A: mov     rcx, gs:188h
 * 00000001401C2283: test    byte ptr [rcx+0C2h], 3
 * 00000001401C228A: jz      short loc_1401C22A7
 * 00000001401C228C: mov     ecx, 1
 * 00000001401C2291: mov     cr8, rcx
 * 00000001401C2295: sti
 * 00000001401C2296: call    KiInitiateUserApc
 * 00000001401C229B: cli
 * 00000001401C229C: mov     ecx, 0
 * 00000001401C22A1: mov     cr8, rcx
 * 00000001401C22A5: jmp     short loc_1401C227A
 * 00000001401C22A7: test    byte ptr gs:86Ch, 2
 * 00000001401C22B0: jz      short loc_1401C22B9
 * 00000001401C22B2: xor     ecx, ecx
 * 00000001401C22B4: call    KiUpdateStibpPairing
 * 00000001401C22B9: mov     rcx, gs:188h
 * 00000001401C22C2: test    dword ptr [rcx], 8000000h
 * 00000001401C22C8: jz      short loc_1401C22CF
 * 00000001401C22CA: call    KiRestoreSetContextState
 * 00000001401C22CF: mov     rcx, gs:188h
 * 00000001401C22D8: test    dword ptr [rcx], 40010000h
 * 00000001401C22DE: jz      short loc_1401C22F4
 * 00000001401C22E0: test    byte ptr [rcx+2], 1
 * 00000001401C22E4: jz      short loc_1401C22F4
 * 00000001401C22E6: call    KiCopyCounters
 * 00000001401C22EB: mov     rcx, gs:188h
 * 00000001401C22F4: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C22F8: cmp     word ptr [rbp+80h], 0
 * 00000001401C2300: jz      short loc_1401C2307
 * 00000001401C2302: call    KiRestoreDebugRegisterState
 * 00000001401C2307: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C230B: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C230F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C2313: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C2317: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C231B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C231F: mov     r11, [rbp-20h]
 * 00000001401C2323: mov     r10, [rbp-28h]
 * 00000001401C2327: mov     r9, [rbp-30h]
 * 00000001401C232B: mov     r8, [rbp-38h]
 * 00000001401C232F: mov     byte ptr gs:856h, 0
 * 00000001401C2338: movzx   eax, word ptr gs:86Ah
 * 00000001401C2341: cmp     gs:864h, ax
 * 00000001401C234A: jz      short loc_1401C235E
 * 00000001401C234C: mov     gs:864h, ax
 * 00000001401C2355: mov     ecx, 48h ; 'H'
 * 00000001401C235A: xor     edx, edx
 * 00000001401C235C: wrmsr
 * 00000001401C235E: btr     word ptr gs:860h, 2
 * 00000001401C2369: jnb     short loc_1401C2379
 * 00000001401C236B: mov     eax, 1
 * 00000001401C2370: xor     edx, edx
 * 00000001401C2372: mov     ecx, 49h ; 'I'
 * 00000001401C2377: wrmsr
 * 00000001401C2379: btr     word ptr gs:860h, 5
 * 00000001401C2384: jnb     loc_1401C24AF
 * 00000001401C238A: call    loc_1401C249D
 * 00000001401C238F: add     rsp, 8
 * 00000001401C2393: call    loc_1401C24A6
 * 00000001401C2398: add     rsp, 8
 * 00000001401C239C: call    loc_1401C238F
 * 00000001401C23A1: add     rsp, 8
 * 00000001401C23A5: call    loc_1401C2398
 * 00000001401C23AA: add     rsp, 8
 * 00000001401C23AE: call    loc_1401C23A1
 * 00000001401C23B3: add     rsp, 8
 * 00000001401C23B7: call    loc_1401C23AA
 * 00000001401C23BC: add     rsp, 8
 * 00000001401C23C0: call    loc_1401C23B3
 * 00000001401C23C5: add     rsp, 8
 * 00000001401C23C9: call    loc_1401C23BC
 * 00000001401C23CE: add     rsp, 8
 * 00000001401C23D2: call    loc_1401C23C5
 * 00000001401C23D7: add     rsp, 8
 * 00000001401C23DB: call    loc_1401C23CE
 * 00000001401C23E0: add     rsp, 8
 * 00000001401C23E4: call    loc_1401C23D7
 * 00000001401C23E9: add     rsp, 8
 * 00000001401C23ED: call    loc_1401C23E0
 * 00000001401C23F2: add     rsp, 8
 * 00000001401C23F6: call    loc_1401C23E9
 * 00000001401C23FB: add     rsp, 8
 * 00000001401C23FF: call    loc_1401C23F2
 * 00000001401C2404: add     rsp, 8
 * 00000001401C2408: call    loc_1401C23FB
 * 00000001401C240D: add     rsp, 8
 * 00000001401C2411: call    loc_1401C2404
 * 00000001401C2416: add     rsp, 8
 * 00000001401C241A: call    loc_1401C240D
 * 00000001401C241F: add     rsp, 8
 * 00000001401C2423: call    loc_1401C2416
 * 00000001401C2428: add     rsp, 8
 * 00000001401C242C: call    loc_1401C241F
 * 00000001401C2431: add     rsp, 8
 * 00000001401C2435: call    loc_1401C2428
 * 00000001401C243A: add     rsp, 8
 * 00000001401C243E: call    loc_1401C2431
 * 00000001401C2443: add     rsp, 8
 * 00000001401C2447: call    loc_1401C243A
 * 00000001401C244C: add     rsp, 8
 * 00000001401C2450: call    loc_1401C2443
 * 00000001401C2455: add     rsp, 8
 * 00000001401C2459: call    loc_1401C244C
 * 00000001401C245E: add     rsp, 8
 * 00000001401C2462: call    loc_1401C2455
 * 00000001401C2467: add     rsp, 8
 * 00000001401C246B: call    loc_1401C245E
 * 00000001401C2470: add     rsp, 8
 * 00000001401C2474: call    loc_1401C2467
 * 00000001401C2479: add     rsp, 8
 * 00000001401C247D: call    loc_1401C2470
 * 00000001401C2482: add     rsp, 8
 * 00000001401C2486: call    loc_1401C2479
 * 00000001401C248B: add     rsp, 8
 * 00000001401C248F: call    loc_1401C2482
 * 00000001401C2494: add     rsp, 8
 * 00000001401C2498: call    loc_1401C248B
 * 00000001401C249D: add     rsp, 8
 * 00000001401C24A1: call    loc_1401C2494
 * 00000001401C24A6: add     rsp, 8
 * 00000001401C24AA: mov     eax, 0DADAh
 * 00000001401C24AF: test    word ptr gs:860h, 80h
 * 00000001401C24BA: jz      short loc_1401C24C8
 * 00000001401C24BC: xor     eax, eax
 * 00000001401C24BE: xor     edx, edx
 * 00000001401C24C0: mov     ecx, 1
 * 00000001401C24C5: div     rcx
 * 00000001401C24C8: mov     rdx, [rbp-40h]
 * 00000001401C24CC: mov     rcx, [rbp-48h]
 * 00000001401C24D0: mov     rax, [rbp-50h]
 * 00000001401C24D4: mov     rsp, rbp
 * 00000001401C24D7: mov     rbp, [rbp+0D8h]
 * 00000001401C24DE: add     rsp, 0E8h
 * 00000001401C24E5: test    cs:KiKvaShadow, 1
 * 00000001401C24EC: jz      short loc_1401C24F3
 * 00000001401C24EE: jmp     KiKernelExit
 * 00000001401C24F3: test    word ptr gs:860h, 100h
 * 00000001401C24FE: jz      short loc_1401C2505
 * 00000001401C2500: verw    [rsp-1C8h+arg_1E0]
 * 00000001401C2505: swapgs
 * 00000001401C2508: iretq
 * 00000001401C250A: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C250E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C2512: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C2516: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C251A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C251E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C2522: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C2526: mov     r11, [rbp-20h]
 * 00000001401C252A: mov     r10, [rbp-28h]
 * 00000001401C252E: mov     r9, [rbp-30h]
 * 00000001401C2532: mov     r8, [rbp-38h]
 * 00000001401C2536: mov     rdx, [rbp-40h]
 * 00000001401C253A: mov     rcx, [rbp-48h]
 * 00000001401C253E: mov     rax, [rbp-50h]
 * 00000001401C2542: mov     rsp, rbp
 * 00000001401C2545: mov     rbp, [rbp+0D8h]
 * 00000001401C254C: add     rsp, 0E8h
 * 00000001401C2553: iretq
 */
