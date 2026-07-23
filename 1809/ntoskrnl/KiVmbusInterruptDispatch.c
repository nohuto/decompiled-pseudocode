/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1401C2560
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1401C15B0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C18A0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C1B90 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C1E80 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2560 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2AA0 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1401C2560
 * Reason: Hex-Rays returned no pseudocode for 0x1401C2560
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C2560: mov     rdx, rsp
 * 00000001401C2563: mov     rcx, gs:6458h
 * 00000001401C256C: lea     rax, [rcx-6000h]
 * 00000001401C2573: cmp     rax, rsp
 * 00000001401C2576: ja      short loc_1401C257D
 * 00000001401C2578: cmp     rsp, rcx
 * 00000001401C257B: jb      short loc_1401C2589
 * 00000001401C257D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C2584: jnz     short loc_1401C2589
 * 00000001401C2586: mov     rsp, rcx
 * 00000001401C2589: sub     rsp, 20h
 * 00000001401C258D: mov     [rsp+20h+var_10], rdx
 * 00000001401C2592: call    KiVmbusInterruptSubDispatch
 * 00000001401C2597: mov     rsp, [rsp+20h+var_10]
 * 00000001401C259C: cli
 * 00000001401C259D: mov     rcx, gs:20h
 * 00000001401C25A6: cmp     byte ptr [rcx+20h], 1
 * 00000001401C25AA: ja      short loc_1401C2626
 * 00000001401C25AC: rdtsc
 * 00000001401C25AE: shl     rdx, 20h
 * 00000001401C25B2: or      rax, rdx
 * 00000001401C25B5: sub     rax, [rcx+5BC0h]
 * 00000001401C25BC: add     [rcx+5C38h], rax
 * 00000001401C25C3: add     [rcx+5BC0h], rax
 * 00000001401C25CA: mov     r8, rax
 * 00000001401C25CD: mov     rax, [rcx+8]
 * 00000001401C25D1: test    byte ptr [rax+2], 72h
 * 00000001401C25D5: jz      short loc_1401C25EA
 * 00000001401C25D7: xor     edx, edx
 * 00000001401C25D9: call    KiBeginThreadAccountingPeriod
 * 00000001401C25DE: mov     rcx, gs:20h
 * 00000001401C25E7: inc     byte ptr [rcx+20h]
 * 00000001401C25EA: mov     dl, [rcx+6]
 * 00000001401C25ED: and     byte ptr [rcx+6], 0
 * 00000001401C25F1: cmp     byte ptr [rcx+7], 0
 * 00000001401C25F5: jnz     short loc_1401C2626
 * 00000001401C25F7: test    dl, dl
 * 00000001401C25F9: jz      short loc_1401C2626
 * 00000001401C25FB: cmp     byte ptr [rbp-57h], 2
 * 00000001401C25FF: jnb     short loc_1401C260C
 * 00000001401C2601: and     byte ptr [rcx+20h], 0
 * 00000001401C2605: call    KiDpcInterruptBypass
 * 00000001401C260A: jmp     short loc_1401C2629
 * 00000001401C260C: mov     ecx, 2
 * 00000001401C2611: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C2618: nop     dword ptr [rax+rax+00h]
 * 00000001401C261D: mov     rcx, gs:20h
 * 00000001401C2626: dec     byte ptr [rcx+20h]
 * 00000001401C2629: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C262D: cmp     cs:KiIrqlFlags, 0
 * 00000001401C2634: jz      short loc_1401C263D
 * 00000001401C2636: call    KzSetIrqlUnsafe
 * 00000001401C263B: jmp     short loc_1401C2641
 * 00000001401C263D: mov     cr8, rcx
 * 00000001401C2641: mov     rsi, [rbp+0D0h]
 * 00000001401C2648: cli
 * 00000001401C2649: test    byte ptr [rbp+0F0h], 1
 * 00000001401C2650: jz      loc_1401C28E6
 * 00000001401C2656: mov     rcx, gs:188h
 * 00000001401C265F: test    byte ptr [rcx+0C2h], 3
 * 00000001401C2666: jz      short loc_1401C2683
 * 00000001401C2668: mov     ecx, 1
 * 00000001401C266D: mov     cr8, rcx
 * 00000001401C2671: sti
 * 00000001401C2672: call    KiInitiateUserApc
 * 00000001401C2677: cli
 * 00000001401C2678: mov     ecx, 0
 * 00000001401C267D: mov     cr8, rcx
 * 00000001401C2681: jmp     short loc_1401C2656
 * 00000001401C2683: test    byte ptr gs:86Ch, 2
 * 00000001401C268C: jz      short loc_1401C2695
 * 00000001401C268E: xor     ecx, ecx
 * 00000001401C2690: call    KiUpdateStibpPairing
 * 00000001401C2695: mov     rcx, gs:188h
 * 00000001401C269E: test    dword ptr [rcx], 8000000h
 * 00000001401C26A4: jz      short loc_1401C26AB
 * 00000001401C26A6: call    KiRestoreSetContextState
 * 00000001401C26AB: mov     rcx, gs:188h
 * 00000001401C26B4: test    dword ptr [rcx], 40010000h
 * 00000001401C26BA: jz      short loc_1401C26D0
 * 00000001401C26BC: test    byte ptr [rcx+2], 1
 * 00000001401C26C0: jz      short loc_1401C26D0
 * 00000001401C26C2: call    KiCopyCounters
 * 00000001401C26C7: mov     rcx, gs:188h
 * 00000001401C26D0: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C26D4: cmp     word ptr [rbp+80h], 0
 * 00000001401C26DC: jz      short loc_1401C26E3
 * 00000001401C26DE: call    KiRestoreDebugRegisterState
 * 00000001401C26E3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C26E7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C26EB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C26EF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C26F3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C26F7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C26FB: mov     r11, [rbp-20h]
 * 00000001401C26FF: mov     r10, [rbp-28h]
 * 00000001401C2703: mov     r9, [rbp-30h]
 * 00000001401C2707: mov     r8, [rbp-38h]
 * 00000001401C270B: mov     byte ptr gs:856h, 0
 * 00000001401C2714: movzx   eax, word ptr gs:86Ah
 * 00000001401C271D: cmp     gs:864h, ax
 * 00000001401C2726: jz      short loc_1401C273A
 * 00000001401C2728: mov     gs:864h, ax
 * 00000001401C2731: mov     ecx, 48h ; 'H'
 * 00000001401C2736: xor     edx, edx
 * 00000001401C2738: wrmsr
 * 00000001401C273A: btr     word ptr gs:860h, 2
 * 00000001401C2745: jnb     short loc_1401C2755
 * 00000001401C2747: mov     eax, 1
 * 00000001401C274C: xor     edx, edx
 * 00000001401C274E: mov     ecx, 49h ; 'I'
 * 00000001401C2753: wrmsr
 * 00000001401C2755: btr     word ptr gs:860h, 5
 * 00000001401C2760: jnb     loc_1401C288B
 * 00000001401C2766: call    loc_1401C2879
 * 00000001401C276B: add     rsp, 8
 * 00000001401C276F: call    loc_1401C2882
 * 00000001401C2774: add     rsp, 8
 * 00000001401C2778: call    loc_1401C276B
 * 00000001401C277D: add     rsp, 8
 * 00000001401C2781: call    loc_1401C2774
 * 00000001401C2786: add     rsp, 8
 * 00000001401C278A: call    loc_1401C277D
 * 00000001401C278F: add     rsp, 8
 * 00000001401C2793: call    loc_1401C2786
 * 00000001401C2798: add     rsp, 8
 * 00000001401C279C: call    loc_1401C278F
 * 00000001401C27A1: add     rsp, 8
 * 00000001401C27A5: call    loc_1401C2798
 * 00000001401C27AA: add     rsp, 8
 * 00000001401C27AE: call    loc_1401C27A1
 * 00000001401C27B3: add     rsp, 8
 * 00000001401C27B7: call    loc_1401C27AA
 * 00000001401C27BC: add     rsp, 8
 * 00000001401C27C0: call    loc_1401C27B3
 * 00000001401C27C5: add     rsp, 8
 * 00000001401C27C9: call    loc_1401C27BC
 * 00000001401C27CE: add     rsp, 8
 * 00000001401C27D2: call    loc_1401C27C5
 * 00000001401C27D7: add     rsp, 8
 * 00000001401C27DB: call    loc_1401C27CE
 * 00000001401C27E0: add     rsp, 8
 * 00000001401C27E4: call    loc_1401C27D7
 * 00000001401C27E9: add     rsp, 8
 * 00000001401C27ED: call    loc_1401C27E0
 * 00000001401C27F2: add     rsp, 8
 * 00000001401C27F6: call    loc_1401C27E9
 * 00000001401C27FB: add     rsp, 8
 * 00000001401C27FF: call    loc_1401C27F2
 * 00000001401C2804: add     rsp, 8
 * 00000001401C2808: call    loc_1401C27FB
 * 00000001401C280D: add     rsp, 8
 * 00000001401C2811: call    loc_1401C2804
 * 00000001401C2816: add     rsp, 8
 * 00000001401C281A: call    loc_1401C280D
 * 00000001401C281F: add     rsp, 8
 * 00000001401C2823: call    loc_1401C2816
 * 00000001401C2828: add     rsp, 8
 * 00000001401C282C: call    loc_1401C281F
 * 00000001401C2831: add     rsp, 8
 * 00000001401C2835: call    loc_1401C2828
 * 00000001401C283A: add     rsp, 8
 * 00000001401C283E: call    loc_1401C2831
 * 00000001401C2843: add     rsp, 8
 * 00000001401C2847: call    loc_1401C283A
 * 00000001401C284C: add     rsp, 8
 * 00000001401C2850: call    loc_1401C2843
 * 00000001401C2855: add     rsp, 8
 * 00000001401C2859: call    loc_1401C284C
 * 00000001401C285E: add     rsp, 8
 * 00000001401C2862: call    loc_1401C2855
 * 00000001401C2867: add     rsp, 8
 * 00000001401C286B: call    loc_1401C285E
 * 00000001401C2870: add     rsp, 8
 * 00000001401C2874: call    loc_1401C2867
 * 00000001401C2879: add     rsp, 8
 * 00000001401C287D: call    loc_1401C2870
 * 00000001401C2882: add     rsp, 8
 * 00000001401C2886: mov     eax, 0DADAh
 * 00000001401C288B: test    word ptr gs:860h, 80h
 * 00000001401C2896: jz      short loc_1401C28A4
 * 00000001401C2898: xor     eax, eax
 * 00000001401C289A: xor     edx, edx
 * 00000001401C289C: mov     ecx, 1
 * 00000001401C28A1: div     rcx
 * 00000001401C28A4: mov     rdx, [rbp-40h]
 * 00000001401C28A8: mov     rcx, [rbp-48h]
 * 00000001401C28AC: mov     rax, [rbp-50h]
 * 00000001401C28B0: mov     rsp, rbp
 * 00000001401C28B3: mov     rbp, [rbp+0D8h]
 * 00000001401C28BA: add     rsp, 0E8h
 * 00000001401C28C1: test    cs:KiKvaShadow, 1
 * 00000001401C28C8: jz      short loc_1401C28CF
 * 00000001401C28CA: jmp     KiKernelExit
 * 00000001401C28CF: test    word ptr gs:860h, 100h
 * 00000001401C28DA: jz      short loc_1401C28E1
 * 00000001401C28DC: verw    [rsp-1C8h+arg_1E0]
 * 00000001401C28E1: swapgs
 * 00000001401C28E4: iretq
 * 00000001401C28E6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C28EA: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C28EE: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C28F2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C28F6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C28FA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C28FE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C2902: mov     r11, [rbp-20h]
 * 00000001401C2906: mov     r10, [rbp-28h]
 * 00000001401C290A: mov     r9, [rbp-30h]
 * 00000001401C290E: mov     r8, [rbp-38h]
 * 00000001401C2912: mov     rdx, [rbp-40h]
 * 00000001401C2916: mov     rcx, [rbp-48h]
 * 00000001401C291A: mov     rax, [rbp-50h]
 * 00000001401C291E: mov     rsp, rbp
 * 00000001401C2921: mov     rbp, [rbp+0D8h]
 * 00000001401C2928: add     rsp, 0E8h
 * 00000001401C292F: iretq
 */
