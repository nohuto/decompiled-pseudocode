/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1401C2400
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1401C1450 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C1740 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C1A30 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C1D20 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2400 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2940 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1401C2400
 * Reason: Hex-Rays returned no pseudocode for 0x1401C2400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C2400: mov     rdx, rsp
 * 00000001401C2403: mov     rcx, gs:6458h
 * 00000001401C240C: lea     rax, [rcx-6000h]
 * 00000001401C2413: cmp     rax, rsp
 * 00000001401C2416: ja      short loc_1401C241D
 * 00000001401C2418: cmp     rsp, rcx
 * 00000001401C241B: jb      short loc_1401C2429
 * 00000001401C241D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C2424: jnz     short loc_1401C2429
 * 00000001401C2426: mov     rsp, rcx
 * 00000001401C2429: sub     rsp, 20h
 * 00000001401C242D: mov     [rsp+20h+var_10], rdx
 * 00000001401C2432: call    KiVmbusInterruptSubDispatch
 * 00000001401C2437: mov     rsp, [rsp+20h+var_10]
 * 00000001401C243C: cli
 * 00000001401C243D: mov     rcx, gs:20h
 * 00000001401C2446: cmp     byte ptr [rcx+20h], 1
 * 00000001401C244A: ja      short loc_1401C24C6
 * 00000001401C244C: rdtsc
 * 00000001401C244E: shl     rdx, 20h
 * 00000001401C2452: or      rax, rdx
 * 00000001401C2455: sub     rax, [rcx+5BC0h]
 * 00000001401C245C: add     [rcx+5C38h], rax
 * 00000001401C2463: add     [rcx+5BC0h], rax
 * 00000001401C246A: mov     r8, rax
 * 00000001401C246D: mov     rax, [rcx+8]
 * 00000001401C2471: test    byte ptr [rax+2], 72h
 * 00000001401C2475: jz      short loc_1401C248A
 * 00000001401C2477: xor     edx, edx
 * 00000001401C2479: call    KiBeginThreadAccountingPeriod
 * 00000001401C247E: mov     rcx, gs:20h
 * 00000001401C2487: inc     byte ptr [rcx+20h]
 * 00000001401C248A: mov     dl, [rcx+6]
 * 00000001401C248D: and     byte ptr [rcx+6], 0
 * 00000001401C2491: cmp     byte ptr [rcx+7], 0
 * 00000001401C2495: jnz     short loc_1401C24C6
 * 00000001401C2497: test    dl, dl
 * 00000001401C2499: jz      short loc_1401C24C6
 * 00000001401C249B: cmp     byte ptr [rbp-57h], 2
 * 00000001401C249F: jnb     short loc_1401C24AC
 * 00000001401C24A1: and     byte ptr [rcx+20h], 0
 * 00000001401C24A5: call    KiDpcInterruptBypass
 * 00000001401C24AA: jmp     short loc_1401C24C9
 * 00000001401C24AC: mov     ecx, 2
 * 00000001401C24B1: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C24B8: nop     dword ptr [rax+rax+00h]
 * 00000001401C24BD: mov     rcx, gs:20h
 * 00000001401C24C6: dec     byte ptr [rcx+20h]
 * 00000001401C24C9: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C24CD: cmp     cs:KiIrqlFlags, 0
 * 00000001401C24D4: jz      short loc_1401C24DD
 * 00000001401C24D6: call    KzSetIrqlUnsafe
 * 00000001401C24DB: jmp     short loc_1401C24E1
 * 00000001401C24DD: mov     cr8, rcx
 * 00000001401C24E1: mov     rsi, [rbp+0D0h]
 * 00000001401C24E8: cli
 * 00000001401C24E9: test    byte ptr [rbp+0F0h], 1
 * 00000001401C24F0: jz      loc_1401C2786
 * 00000001401C24F6: mov     rcx, gs:188h
 * 00000001401C24FF: test    byte ptr [rcx+0C2h], 3
 * 00000001401C2506: jz      short loc_1401C2523
 * 00000001401C2508: mov     ecx, 1
 * 00000001401C250D: mov     cr8, rcx
 * 00000001401C2511: sti
 * 00000001401C2512: call    KiInitiateUserApc
 * 00000001401C2517: cli
 * 00000001401C2518: mov     ecx, 0
 * 00000001401C251D: mov     cr8, rcx
 * 00000001401C2521: jmp     short loc_1401C24F6
 * 00000001401C2523: test    byte ptr gs:86Ch, 2
 * 00000001401C252C: jz      short loc_1401C2535
 * 00000001401C252E: xor     ecx, ecx
 * 00000001401C2530: call    KiUpdateStibpPairing
 * 00000001401C2535: mov     rcx, gs:188h
 * 00000001401C253E: test    dword ptr [rcx], 8000000h
 * 00000001401C2544: jz      short loc_1401C254B
 * 00000001401C2546: call    KiRestoreSetContextState
 * 00000001401C254B: mov     rcx, gs:188h
 * 00000001401C2554: test    dword ptr [rcx], 40010000h
 * 00000001401C255A: jz      short loc_1401C2570
 * 00000001401C255C: test    byte ptr [rcx+2], 1
 * 00000001401C2560: jz      short loc_1401C2570
 * 00000001401C2562: call    KiCopyCounters
 * 00000001401C2567: mov     rcx, gs:188h
 * 00000001401C2570: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C2574: cmp     word ptr [rbp+80h], 0
 * 00000001401C257C: jz      short loc_1401C2583
 * 00000001401C257E: call    KiRestoreDebugRegisterState
 * 00000001401C2583: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C2587: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C258B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C258F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C2593: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C2597: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C259B: mov     r11, [rbp-20h]
 * 00000001401C259F: mov     r10, [rbp-28h]
 * 00000001401C25A3: mov     r9, [rbp-30h]
 * 00000001401C25A7: mov     r8, [rbp-38h]
 * 00000001401C25AB: mov     byte ptr gs:856h, 0
 * 00000001401C25B4: movzx   eax, word ptr gs:86Ah
 * 00000001401C25BD: cmp     gs:864h, ax
 * 00000001401C25C6: jz      short loc_1401C25DA
 * 00000001401C25C8: mov     gs:864h, ax
 * 00000001401C25D1: mov     ecx, 48h ; 'H'
 * 00000001401C25D6: xor     edx, edx
 * 00000001401C25D8: wrmsr
 * 00000001401C25DA: btr     word ptr gs:860h, 2
 * 00000001401C25E5: jnb     short loc_1401C25F5
 * 00000001401C25E7: mov     eax, 1
 * 00000001401C25EC: xor     edx, edx
 * 00000001401C25EE: mov     ecx, 49h ; 'I'
 * 00000001401C25F3: wrmsr
 * 00000001401C25F5: btr     word ptr gs:860h, 5
 * 00000001401C2600: jnb     loc_1401C272B
 * 00000001401C2606: call    loc_1401C2719
 * 00000001401C260B: add     rsp, 8
 * 00000001401C260F: call    loc_1401C2722
 * 00000001401C2614: add     rsp, 8
 * 00000001401C2618: call    loc_1401C260B
 * 00000001401C261D: add     rsp, 8
 * 00000001401C2621: call    loc_1401C2614
 * 00000001401C2626: add     rsp, 8
 * 00000001401C262A: call    loc_1401C261D
 * 00000001401C262F: add     rsp, 8
 * 00000001401C2633: call    loc_1401C2626
 * 00000001401C2638: add     rsp, 8
 * 00000001401C263C: call    loc_1401C262F
 * 00000001401C2641: add     rsp, 8
 * 00000001401C2645: call    loc_1401C2638
 * 00000001401C264A: add     rsp, 8
 * 00000001401C264E: call    loc_1401C2641
 * 00000001401C2653: add     rsp, 8
 * 00000001401C2657: call    loc_1401C264A
 * 00000001401C265C: add     rsp, 8
 * 00000001401C2660: call    loc_1401C2653
 * 00000001401C2665: add     rsp, 8
 * 00000001401C2669: call    loc_1401C265C
 * 00000001401C266E: add     rsp, 8
 * 00000001401C2672: call    loc_1401C2665
 * 00000001401C2677: add     rsp, 8
 * 00000001401C267B: call    loc_1401C266E
 * 00000001401C2680: add     rsp, 8
 * 00000001401C2684: call    loc_1401C2677
 * 00000001401C2689: add     rsp, 8
 * 00000001401C268D: call    loc_1401C2680
 * 00000001401C2692: add     rsp, 8
 * 00000001401C2696: call    loc_1401C2689
 * 00000001401C269B: add     rsp, 8
 * 00000001401C269F: call    loc_1401C2692
 * 00000001401C26A4: add     rsp, 8
 * 00000001401C26A8: call    loc_1401C269B
 * 00000001401C26AD: add     rsp, 8
 * 00000001401C26B1: call    loc_1401C26A4
 * 00000001401C26B6: add     rsp, 8
 * 00000001401C26BA: call    loc_1401C26AD
 * 00000001401C26BF: add     rsp, 8
 * 00000001401C26C3: call    loc_1401C26B6
 * 00000001401C26C8: add     rsp, 8
 * 00000001401C26CC: call    loc_1401C26BF
 * 00000001401C26D1: add     rsp, 8
 * 00000001401C26D5: call    loc_1401C26C8
 * 00000001401C26DA: add     rsp, 8
 * 00000001401C26DE: call    loc_1401C26D1
 * 00000001401C26E3: add     rsp, 8
 * 00000001401C26E7: call    loc_1401C26DA
 * 00000001401C26EC: add     rsp, 8
 * 00000001401C26F0: call    loc_1401C26E3
 * 00000001401C26F5: add     rsp, 8
 * 00000001401C26F9: call    loc_1401C26EC
 * 00000001401C26FE: add     rsp, 8
 * 00000001401C2702: call    loc_1401C26F5
 * 00000001401C2707: add     rsp, 8
 * 00000001401C270B: call    loc_1401C26FE
 * 00000001401C2710: add     rsp, 8
 * 00000001401C2714: call    loc_1401C2707
 * 00000001401C2719: add     rsp, 8
 * 00000001401C271D: call    loc_1401C2710
 * 00000001401C2722: add     rsp, 8
 * 00000001401C2726: mov     eax, 0DADAh
 * 00000001401C272B: test    word ptr gs:860h, 80h
 * 00000001401C2736: jz      short loc_1401C2744
 * 00000001401C2738: xor     eax, eax
 * 00000001401C273A: xor     edx, edx
 * 00000001401C273C: mov     ecx, 1
 * 00000001401C2741: div     rcx
 * 00000001401C2744: mov     rdx, [rbp-40h]
 * 00000001401C2748: mov     rcx, [rbp-48h]
 * 00000001401C274C: mov     rax, [rbp-50h]
 * 00000001401C2750: mov     rsp, rbp
 * 00000001401C2753: mov     rbp, [rbp+0D8h]
 * 00000001401C275A: add     rsp, 0E8h
 * 00000001401C2761: test    cs:KiKvaShadow, 1
 * 00000001401C2768: jz      short loc_1401C276F
 * 00000001401C276A: jmp     KiKernelExit
 * 00000001401C276F: test    word ptr gs:860h, 100h
 * 00000001401C277A: jz      short loc_1401C2781
 * 00000001401C277C: verw    [rsp-1C8h+arg_1E0]
 * 00000001401C2781: swapgs
 * 00000001401C2784: iretq
 * 00000001401C2786: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C278A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C278E: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C2792: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C2796: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C279A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C279E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C27A2: mov     r11, [rbp-20h]
 * 00000001401C27A6: mov     r10, [rbp-28h]
 * 00000001401C27AA: mov     r9, [rbp-30h]
 * 00000001401C27AE: mov     r8, [rbp-38h]
 * 00000001401C27B2: mov     rdx, [rbp-40h]
 * 00000001401C27B6: mov     rcx, [rbp-48h]
 * 00000001401C27BA: mov     rax, [rbp-50h]
 * 00000001401C27BE: mov     rsp, rbp
 * 00000001401C27C1: mov     rbp, [rbp+0D8h]
 * 00000001401C27C8: add     rsp, 0E8h
 * 00000001401C27CF: iretq
 */
