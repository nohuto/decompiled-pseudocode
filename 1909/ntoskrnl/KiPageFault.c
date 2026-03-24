/*
 * XREFs of KiPageFault @ 0x1401D2400
 * Callers:
 *     KiPageFaultShadow @ 0x140350800 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x1401D2400 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1401D64C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D6E80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D7300 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x1402A2DF0 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x140306D30 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x1401D2400
 * Reason: Hex-Rays returned no pseudocode for 0x1401D2400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D2400: push    rbp
 * 00000001401D2401: sub     rsp, 158h
 * 00000001401D2408: lea     rbp, [rsp+80h]
 * 00000001401D2410: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D2414: mov     [rbp+0D8h+var_128], rax
 * 00000001401D2418: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D241C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D2420: mov     [rbp+0D8h+var_110], r8
 * 00000001401D2424: mov     [rbp+0D8h+var_108], r9
 * 00000001401D2428: mov     [rbp+0D8h+var_100], r10
 * 00000001401D242C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D2430: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D2437: jnz     short loc_1401D2466
 * 00000001401D2439: lfence
 * 00000001401D243C: test    byte ptr gs:278h, 1
 * 00000001401D2445: jnz     short loc_1401D244F
 * 00000001401D2447: lfence
 * 00000001401D244A: jmp     loc_1401D26BB
 * 00000001401D244F: movzx   eax, byte ptr gs:27Ah
 * 00000001401D2458: mov     ecx, 48h ; 'H'
 * 00000001401D245D: xor     edx, edx
 * 00000001401D245F: wrmsr
 * 00000001401D2461: jmp     loc_1401D26BB
 * 00000001401D2466: test    cs:KiKvaShadow, 1
 * 00000001401D246D: jnz     short loc_1401D2472
 * 00000001401D246F: swapgs
 * 00000001401D2472: lfence
 * 00000001401D2475: mov     r10, gs:188h
 * 00000001401D247E: mov     rcx, gs:188h
 * 00000001401D2487: mov     rcx, [rcx+220h]
 * 00000001401D248E: mov     rcx, [rcx+860h]
 * 00000001401D2495: mov     gs:270h, rcx
 * 00000001401D249E: mov     cl, gs:850h
 * 00000001401D24A6: mov     gs:851h, cl
 * 00000001401D24AE: mov     cl, gs:278h
 * 00000001401D24B6: mov     gs:852h, cl
 * 00000001401D24BE: movzx   eax, byte ptr gs:27Bh
 * 00000001401D24C7: cmp     gs:27Ah, al
 * 00000001401D24CF: jz      short loc_1401D24E2
 * 00000001401D24D1: mov     gs:27Ah, al
 * 00000001401D24D9: mov     ecx, 48h ; 'H'
 * 00000001401D24DE: xor     edx, edx
 * 00000001401D24E0: wrmsr
 * 00000001401D24E2: movzx   edx, byte ptr gs:278h
 * 00000001401D24EB: test    edx, 8
 * 00000001401D24F1: jz      short loc_1401D2506
 * 00000001401D24F3: mov     eax, 1
 * 00000001401D24F8: xor     edx, edx
 * 00000001401D24FA: mov     ecx, 49h ; 'I'
 * 00000001401D24FF: wrmsr
 * 00000001401D2501: jmp     loc_1401D2644
 * 00000001401D2506: test    edx, 2
 * 00000001401D250C: jz      loc_1401D2641
 * 00000001401D2512: test    byte ptr gs:279h, 4
 * 00000001401D251B: jnz     loc_1401D2641
 * 00000001401D2521: call    loc_1401D2634
 * 00000001401D2526: add     rsp, 8
 * 00000001401D252A: call    loc_1401D263D
 * 00000001401D252F: add     rsp, 8
 * 00000001401D2533: call    loc_1401D2526
 * 00000001401D2538: add     rsp, 8
 * 00000001401D253C: call    loc_1401D252F
 * 00000001401D2541: add     rsp, 8
 * 00000001401D2545: call    loc_1401D2538
 * 00000001401D254A: add     rsp, 8
 * 00000001401D254E: call    loc_1401D2541
 * 00000001401D2553: add     rsp, 8
 * 00000001401D2557: call    loc_1401D254A
 * 00000001401D255C: add     rsp, 8
 * 00000001401D2560: call    loc_1401D2553
 * 00000001401D2565: add     rsp, 8
 * 00000001401D2569: call    loc_1401D255C
 * 00000001401D256E: add     rsp, 8
 * 00000001401D2572: call    loc_1401D2565
 * 00000001401D2577: add     rsp, 8
 * 00000001401D257B: call    loc_1401D256E
 * 00000001401D2580: add     rsp, 8
 * 00000001401D2584: call    loc_1401D2577
 * 00000001401D2589: add     rsp, 8
 * 00000001401D258D: call    loc_1401D2580
 * 00000001401D2592: add     rsp, 8
 * 00000001401D2596: call    loc_1401D2589
 * 00000001401D259B: add     rsp, 8
 * 00000001401D259F: call    loc_1401D2592
 * 00000001401D25A4: add     rsp, 8
 * 00000001401D25A8: call    loc_1401D259B
 * 00000001401D25AD: add     rsp, 8
 * 00000001401D25B1: call    loc_1401D25A4
 * 00000001401D25B6: add     rsp, 8
 * 00000001401D25BA: call    loc_1401D25AD
 * 00000001401D25BF: add     rsp, 8
 * 00000001401D25C3: call    loc_1401D25B6
 * 00000001401D25C8: add     rsp, 8
 * 00000001401D25CC: call    loc_1401D25BF
 * 00000001401D25D1: add     rsp, 8
 * 00000001401D25D5: call    loc_1401D25C8
 * 00000001401D25DA: add     rsp, 8
 * 00000001401D25DE: call    loc_1401D25D1
 * 00000001401D25E3: add     rsp, 8
 * 00000001401D25E7: call    loc_1401D25DA
 * 00000001401D25EC: add     rsp, 8
 * 00000001401D25F0: call    loc_1401D25E3
 * 00000001401D25F5: add     rsp, 8
 * 00000001401D25F9: call    loc_1401D25EC
 * 00000001401D25FE: add     rsp, 8
 * 00000001401D2602: call    loc_1401D25F5
 * 00000001401D2607: add     rsp, 8
 * 00000001401D260B: call    loc_1401D25FE
 * 00000001401D2610: add     rsp, 8
 * 00000001401D2614: call    loc_1401D2607
 * 00000001401D2619: add     rsp, 8
 * 00000001401D261D: call    loc_1401D2610
 * 00000001401D2622: add     rsp, 8
 * 00000001401D2626: call    loc_1401D2619
 * 00000001401D262B: add     rsp, 8
 * 00000001401D262F: call    loc_1401D2622
 * 00000001401D2634: add     rsp, 8
 * 00000001401D2638: call    loc_1401D262B
 * 00000001401D263D: add     rsp, 8
 * 00000001401D2641: lfence
 * 00000001401D2644: mov     byte ptr gs:853h, 0
 * 00000001401D264D: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401D2655: jnz     short loc_1401D26A6
 * 00000001401D2657: mov     ecx, 0C0000102h
 * 00000001401D265C: rdmsr
 * 00000001401D265E: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001401D2661: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001401D2664: test    byte ptr [r10+3], 80h
 * 00000001401D2669: jz      short loc_1401D26A6
 * 00000001401D266B: shl     rdx, 20h
 * 00000001401D266F: or      rax, rdx
 * 00000001401D2672: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D2679: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D2681: cmp     [r10+0F0h], rax
 * 00000001401D2688: jz      short loc_1401D26A6
 * 00000001401D268A: mov     rdx, [r10+1F0h]
 * 00000001401D2691: bts     dword ptr [r10+74h], 8
 * 00000001401D2697: dec     word ptr [r10+1E6h]
 * 00000001401D269F: mov     [rdx+80h], rax
 * 00000001401D26A6: test    byte ptr [r10+3], 3
 * 00000001401D26AB: mov     [rbp+0D8h+var_58], 0
 * 00000001401D26B4: jz      short loc_1401D26BB
 * 00000001401D26B6: call    KiSaveDebugRegisterState
 * 00000001401D26BB: cld
 * 00000001401D26BC: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D26C0: ldmxcsr dword ptr gs:180h
 * 00000001401D26C9: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D26CD: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D26D1: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D26D5: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D26D9: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D26DD: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D26E1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D26E8: jz      short loc_1401D26F6
 * 00000001401D26EA: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D26F1: jz      short loc_1401D26F6
 * 00000001401D26F3: stac
 * 00000001401D26F6: mov     eax, [rbp+0E0h]
 * 00000001401D26FC: mov     rcx, cr2
 * 00000001401D26FF: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D2709: jz      short loc_1401D270C
 * 00000001401D270B: sti
 * 00000001401D270C: mov     r9, gs:188h
 * 00000001401D2715: bt      dword ptr [r9+74h], 8
 * 00000001401D271B: jnb     short loc_1401D272B
 * 00000001401D271D: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D2724: jz      short loc_1401D272B
 * 00000001401D2726: call    KiUmsTrapEntry
 * 00000001401D272B: mov     [rbp+0D8h+var_88], rcx
 * 00000001401D272F: bt      [rbp+0D8h+arg_10], 9
 * 00000001401D2737: jnb     loc_1401D2869
 * 00000001401D273D: lea     r9, [rbp+0D8h+var_158]
 * 00000001401D2741: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 00000001401D2748: and     r8b, 1
 * 00000001401D274C: mov     rdx, rcx; BugCheckParameter1
 * 00000001401D274F: mov     ecx, eax; BugCheckParameter2
 * 00000001401D2751: shr     eax, 1
 * 00000001401D2753: and     eax, 9
 * 00000001401D2756: mov     [rbp+0D8h+var_12E], al
 * 00000001401D2759: call    MmAccessFault
 * 00000001401D275E: test    eax, eax
 * 00000001401D2760: jl      short loc_1401D2798
 * 00000001401D2762: cmp     cs:PsWatchEnabled, 0
 * 00000001401D2769: jz      short loc_1401D277D
 * 00000001401D276B: mov     r8, [rbp+0D8h+var_88]
 * 00000001401D276F: mov     rdx, [rbp+0D8h+arg_0]
 * 00000001401D2776: mov     ecx, eax
 * 00000001401D2778: call    PsWatchWorkingSet
 * 00000001401D277D: cmp     cs:KdpOweBreakpoint, 0
 * 00000001401D2784: jz      loc_1401D286F
 * 00000001401D278A: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401D278E: call    KdSetOwedBreakpoints
 * 00000001401D2793: jmp     loc_1401D286F
 * 00000001401D2798: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D279F: jz      short loc_1401D27F3
 * 00000001401D27A1: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401D27A9: jnz     short loc_1401D27E9
 * 00000001401D27AB: mov     r9, gs:188h
 * 00000001401D27B4: test    byte ptr [r9+3], 4
 * 00000001401D27B9: jz      short loc_1401D27C4
 * 00000001401D27BB: mov     r8, [r9+7B8h]
 * 00000001401D27C2: jmp     short loc_1401D27CD
 * 00000001401D27C4: mov     r8, gs:30h
 * 00000001401D27CD: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001401D27D1: jz      short loc_1401D27F3
 * 00000001401D27D3: mov     ecx, 0C0000102h
 * 00000001401D27D8: mov     eax, r8d
 * 00000001401D27DB: shr     r8, 20h
 * 00000001401D27DF: mov     edx, r8d
 * 00000001401D27E2: wrmsr
 * 00000001401D27E4: jmp     loc_1401D286F
 * 00000001401D27E9: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401D27ED: shr     rcx, 20h
 * 00000001401D27F1: jnz     short loc_1401D286F
 * 00000001401D27F3: mov     ecx, eax
 * 00000001401D27F5: mov     edx, 2
 * 00000001401D27FA: cmp     ecx, 0D0000006h
 * 00000001401D2800: jz      short loc_1401D2843
 * 00000001401D2802: cmp     ecx, 0C0000005h
 * 00000001401D2808: jz      short loc_1401D2829
 * 00000001401D280A: cmp     ecx, 80000001h
 * 00000001401D2810: jz      short loc_1401D282E
 * 00000001401D2812: cmp     ecx, 0C00000FDh
 * 00000001401D2818: jz      short loc_1401D282E
 * 00000001401D281A: mov     ecx, 0C0000006h
 * 00000001401D281F: mov     edx, 3
 * 00000001401D2824: mov     r11d, eax
 * 00000001401D2827: jmp     short loc_1401D282E
 * 00000001401D2829: mov     ecx, 10000004h
 * 00000001401D282E: mov     r10, [rbp+0D8h+var_88]
 * 00000001401D2832: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401D2837: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D283E: call    KiExceptionDispatch
 * 00000001401D2843: mov     rax, cr8
 * 00000001401D2847: mov     r10, [rbp+0D8h+arg_0]
 * 00000001401D284E: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401D2853: and     eax, 0FFh
 * 00000001401D2858: mov     r8, rax
 * 00000001401D285B: mov     rdx, [rbp+0D8h+var_88]
 * 00000001401D285F: mov     ecx, 0Ah
 * 00000001401D2864: call    KiBugCheckDispatch
 * 00000001401D2869: xor     eax, eax
 * 00000001401D286B: mov     al, 0FFh
 * 00000001401D286D: jmp     short loc_1401D2847
 * 00000001401D286F: mov     rax, cr8
 * 00000001401D2873: or      eax, eax
 * 00000001401D2875: mov     [rbp+0D8h+var_138], eax
 * 00000001401D2878: jnz     short loc_1401D2883
 * 00000001401D287A: mov     ecx, 1
 * 00000001401D287F: mov     cr8, rcx
 * 00000001401D2883: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401D2887: call    KiCheckForSListAddress
 * 00000001401D288C: mov     ecx, [rbp+0D8h+var_138]
 * 00000001401D288F: or      ecx, ecx
 * 00000001401D2891: jnz     short loc_1401D2897
 * 00000001401D2893: mov     cr8, rcx
 * 00000001401D2897: cli
 * 00000001401D2898: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D289F: jz      loc_1401D29EF
 * 00000001401D28A5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D28AC: jz      short loc_1401D28B1
 * 00000001401D28AE: stac
 * 00000001401D28B1: mov     rcx, gs:188h
 * 00000001401D28BA: test    byte ptr [rcx+0C2h], 3
 * 00000001401D28C1: jz      short loc_1401D28DE
 * 00000001401D28C3: mov     ecx, 1
 * 00000001401D28C8: mov     cr8, rcx
 * 00000001401D28CC: sti
 * 00000001401D28CD: call    KiInitiateUserApc
 * 00000001401D28D2: cli
 * 00000001401D28D3: mov     ecx, 0
 * 00000001401D28D8: mov     cr8, rcx
 * 00000001401D28DC: jmp     short loc_1401D28B1
 * 00000001401D28DE: test    byte ptr gs:27Eh, 2
 * 00000001401D28E7: jz      short loc_1401D28F0
 * 00000001401D28E9: xor     ecx, ecx
 * 00000001401D28EB: call    KiUpdateStibpPairing
 * 00000001401D28F0: mov     rcx, gs:188h
 * 00000001401D28F9: test    dword ptr [rcx], 8000000h
 * 00000001401D28FF: jz      short loc_1401D2906
 * 00000001401D2901: call    KiRestoreSetContextState
 * 00000001401D2906: mov     rcx, gs:188h
 * 00000001401D290F: test    dword ptr [rcx], 40010000h
 * 00000001401D2915: jz      short loc_1401D293C
 * 00000001401D2917: test    byte ptr [rcx+2], 1
 * 00000001401D291B: jz      short loc_1401D292B
 * 00000001401D291D: call    KiCopyCounters
 * 00000001401D2922: mov     rcx, gs:188h
 * 00000001401D292B: test    byte ptr [rcx+3], 40h
 * 00000001401D292F: jz      short loc_1401D293C
 * 00000001401D2931: lea     rsp, [rbp-80h]
 * 00000001401D2935: mov     cl, 1
 * 00000001401D2937: call    KiUmsExit
 * 00000001401D293C: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401D2940: cmp     [rbp+0D8h+var_58], 0
 * 00000001401D2948: jz      short loc_1401D294F
 * 00000001401D294A: call    KiRestoreDebugRegisterState
 * 00000001401D294F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401D2953: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401D2957: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401D295B: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401D295F: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401D2963: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401D2967: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401D296B: mov     r10, [rbp+0D8h+var_100]
 * 00000001401D296F: mov     r9, [rbp+0D8h+var_108]
 * 00000001401D2973: mov     r8, [rbp+0D8h+var_110]
 * 00000001401D2977: mov     byte ptr gs:853h, 0
 * 00000001401D2980: movzx   eax, byte ptr gs:27Dh
 * 00000001401D2989: cmp     gs:27Ah, al
 * 00000001401D2991: jz      short loc_1401D29A4
 * 00000001401D2993: mov     gs:27Ah, al
 * 00000001401D299B: mov     ecx, 48h ; 'H'
 * 00000001401D29A0: xor     edx, edx
 * 00000001401D29A2: wrmsr
 * 00000001401D29A4: btr     word ptr gs:278h, 2
 * 00000001401D29AF: jnb     short loc_1401D29BF
 * 00000001401D29B1: mov     eax, 1
 * 00000001401D29B6: xor     edx, edx
 * 00000001401D29B8: mov     ecx, 49h ; 'I'
 * 00000001401D29BD: wrmsr
 * 00000001401D29BF: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401D29C3: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401D29C7: mov     rax, [rbp+0D8h+var_128]
 * 00000001401D29CB: mov     rsp, rbp
 * 00000001401D29CE: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401D29D5: add     rsp, 0E8h
 * 00000001401D29DC: test    cs:KiKvaShadow, 1
 * 00000001401D29E3: jz      short loc_1401D29EA
 * 00000001401D29E5: jmp     KiKernelExit
 * 00000001401D29EA: swapgs
 * 00000001401D29ED: iretq
 * 00000001401D29EF: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401D29F3: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401D29F7: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401D29FB: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401D29FF: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401D2A03: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401D2A07: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401D2A0B: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401D2A0F: mov     r10, [rbp+0D8h+var_100]
 * 00000001401D2A13: mov     r9, [rbp+0D8h+var_108]
 * 00000001401D2A17: mov     r8, [rbp+0D8h+var_110]
 * 00000001401D2A1B: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401D2A1F: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401D2A23: mov     rax, [rbp+0D8h+var_128]
 * 00000001401D2A27: mov     rsp, rbp
 * 00000001401D2A2A: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401D2A31: add     rsp, 0E8h
 * 00000001401D2A38: iretq
 */
