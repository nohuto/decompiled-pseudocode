/*
 * XREFs of KiDpcInterrupt @ 0x1401C3320
 * Callers:
 *     KiDpcInterruptShadow @ 0x14032FF00 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1401C3320 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x1401C41B0 (KiDispatchInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1401C3320
 * Reason: Hex-Rays returned no pseudocode for 0x1401C3320
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C3320: sub     rsp, 8
 * 00000001401C3324: push    rbp
 * 00000001401C3325: push    rsi
 * 00000001401C3326: sub     rsp, 150h
 * 00000001401C332D: lea     rbp, [rsp+80h]
 * 00000001401C3335: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C3339: mov     [rbp+0E8h+var_138], rax
 * 00000001401C333D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C3341: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C3345: mov     [rbp+0E8h+var_120], r8
 * 00000001401C3349: mov     [rbp+0E8h+var_118], r9
 * 00000001401C334D: mov     [rbp+0E8h+var_110], r10
 * 00000001401C3351: mov     [rbp+0E8h+var_108], r11
 * 00000001401C3355: test    [rbp+0E8h+arg_0], 1
 * 00000001401C335C: jnz     short loc_1401C338D
 * 00000001401C335E: lfence
 * 00000001401C3361: test    word ptr gs:860h, 1
 * 00000001401C336C: jnz     short loc_1401C3376
 * 00000001401C336E: lfence
 * 00000001401C3371: jmp     loc_1401C3596
 * 00000001401C3376: movzx   eax, word ptr gs:864h
 * 00000001401C337F: mov     ecx, 48h ; 'H'
 * 00000001401C3384: xor     edx, edx
 * 00000001401C3386: wrmsr
 * 00000001401C3388: jmp     loc_1401C3596
 * 00000001401C338D: test    cs:KiKvaShadow, 1
 * 00000001401C3394: jnz     short loc_1401C3399
 * 00000001401C3396: swapgs
 * 00000001401C3399: lfence
 * 00000001401C339C: mov     r10, gs:188h
 * 00000001401C33A5: mov     rcx, gs:188h
 * 00000001401C33AE: mov     rcx, [rcx+220h]
 * 00000001401C33B5: mov     rcx, [rcx+830h]
 * 00000001401C33BC: mov     gs:858h, rcx
 * 00000001401C33C5: mov     cx, gs:850h
 * 00000001401C33CE: mov     gs:852h, cx
 * 00000001401C33D7: mov     cx, gs:860h
 * 00000001401C33E0: mov     gs:854h, cx
 * 00000001401C33E9: movzx   eax, word ptr gs:866h
 * 00000001401C33F2: cmp     gs:864h, ax
 * 00000001401C33FB: jz      short loc_1401C340F
 * 00000001401C33FD: mov     gs:864h, ax
 * 00000001401C3406: mov     ecx, 48h ; 'H'
 * 00000001401C340B: xor     edx, edx
 * 00000001401C340D: wrmsr
 * 00000001401C340F: movzx   edx, word ptr gs:860h
 * 00000001401C3418: test    edx, 8
 * 00000001401C341E: jz      short loc_1401C3437
 * 00000001401C3420: mov     eax, 1
 * 00000001401C3425: xor     edx, edx
 * 00000001401C3427: mov     ecx, 49h ; 'I'
 * 00000001401C342C: wrmsr
 * 00000001401C342E: movzx   edx, word ptr gs:860h
 * 00000001401C3437: test    edx, 2
 * 00000001401C343D: jz      loc_1401C3568
 * 00000001401C3443: call    loc_1401C3556
 * 00000001401C3448: add     rsp, 8
 * 00000001401C344C: call    loc_1401C355F
 * 00000001401C3451: add     rsp, 8
 * 00000001401C3455: call    loc_1401C3448
 * 00000001401C345A: add     rsp, 8
 * 00000001401C345E: call    loc_1401C3451
 * 00000001401C3463: add     rsp, 8
 * 00000001401C3467: call    loc_1401C345A
 * 00000001401C346C: add     rsp, 8
 * 00000001401C3470: call    loc_1401C3463
 * 00000001401C3475: add     rsp, 8
 * 00000001401C3479: call    loc_1401C346C
 * 00000001401C347E: add     rsp, 8
 * 00000001401C3482: call    loc_1401C3475
 * 00000001401C3487: add     rsp, 8
 * 00000001401C348B: call    loc_1401C347E
 * 00000001401C3490: add     rsp, 8
 * 00000001401C3494: call    loc_1401C3487
 * 00000001401C3499: add     rsp, 8
 * 00000001401C349D: call    loc_1401C3490
 * 00000001401C34A2: add     rsp, 8
 * 00000001401C34A6: call    loc_1401C3499
 * 00000001401C34AB: add     rsp, 8
 * 00000001401C34AF: call    loc_1401C34A2
 * 00000001401C34B4: add     rsp, 8
 * 00000001401C34B8: call    loc_1401C34AB
 * 00000001401C34BD: add     rsp, 8
 * 00000001401C34C1: call    loc_1401C34B4
 * 00000001401C34C6: add     rsp, 8
 * 00000001401C34CA: call    loc_1401C34BD
 * 00000001401C34CF: add     rsp, 8
 * 00000001401C34D3: call    loc_1401C34C6
 * 00000001401C34D8: add     rsp, 8
 * 00000001401C34DC: call    loc_1401C34CF
 * 00000001401C34E1: add     rsp, 8
 * 00000001401C34E5: call    loc_1401C34D8
 * 00000001401C34EA: add     rsp, 8
 * 00000001401C34EE: call    loc_1401C34E1
 * 00000001401C34F3: add     rsp, 8
 * 00000001401C34F7: call    loc_1401C34EA
 * 00000001401C34FC: add     rsp, 8
 * 00000001401C3500: call    loc_1401C34F3
 * 00000001401C3505: add     rsp, 8
 * 00000001401C3509: call    loc_1401C34FC
 * 00000001401C350E: add     rsp, 8
 * 00000001401C3512: call    loc_1401C3505
 * 00000001401C3517: add     rsp, 8
 * 00000001401C351B: call    loc_1401C350E
 * 00000001401C3520: add     rsp, 8
 * 00000001401C3524: call    loc_1401C3517
 * 00000001401C3529: add     rsp, 8
 * 00000001401C352D: call    loc_1401C3520
 * 00000001401C3532: add     rsp, 8
 * 00000001401C3536: call    loc_1401C3529
 * 00000001401C353B: add     rsp, 8
 * 00000001401C353F: call    loc_1401C3532
 * 00000001401C3544: add     rsp, 8
 * 00000001401C3548: call    loc_1401C353B
 * 00000001401C354D: add     rsp, 8
 * 00000001401C3551: call    loc_1401C3544
 * 00000001401C3556: add     rsp, 8
 * 00000001401C355A: call    loc_1401C354D
 * 00000001401C355F: add     rsp, 8
 * 00000001401C3563: mov     eax, 0DADAh
 * 00000001401C3568: test    edx, 200h
 * 00000001401C356E: jz      short loc_1401C3575
 * 00000001401C3570: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C3575: lfence
 * 00000001401C3578: mov     byte ptr gs:856h, 0
 * 00000001401C3581: test    byte ptr [r10+3], 3
 * 00000001401C3586: mov     [rbp+0E8h+var_68], 0
 * 00000001401C358F: jz      short loc_1401C3596
 * 00000001401C3591: call    KiSaveDebugRegisterState
 * 00000001401C3596: cld
 * 00000001401C3597: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C359B: ldmxcsr dword ptr gs:180h
 * 00000001401C35A4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C35A8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C35AC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C35B0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C35B4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C35B8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C35BC: xor     esi, esi
 * 00000001401C35BE: inc     dword ptr gs:5D00h
 * 00000001401C35C6: mov     ecx, 2
 * 00000001401C35CB: cmp     cs:KiIrqlFlags, 0
 * 00000001401C35D2: jz      short loc_1401C35DB
 * 00000001401C35D4: call    KzSetIrqlUnsafe
 * 00000001401C35D9: jmp     short loc_1401C35E3
 * 00000001401C35DB: mov     rax, cr8
 * 00000001401C35DF: mov     cr8, rcx
 * 00000001401C35E3: mov     [rbp+0E8h+var_13F], al
 * 00000001401C35E6: mov     rcx, rsi
 * 00000001401C35E9: call    HalPerformEndOfInterrupt_0
 * 00000001401C35EE: sti
 * 00000001401C35EF: cmp     byte ptr gs:187h, 0
 * 00000001401C35F8: jnz     short loc_1401C3611
 * 00000001401C35FA: mov     al, [rbp+0E8h+var_13F]
 * 00000001401C35FD: mov     rcx, gs:188h
 * 00000001401C3606: mov     [rcx+186h], al
 * 00000001401C360C: call    KiDispatchInterrupt
 * 00000001401C3611: cli
 * 00000001401C3612: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C3616: cmp     cs:KiIrqlFlags, 0
 * 00000001401C361D: jz      short loc_1401C3626
 * 00000001401C361F: call    KzSetIrqlUnsafe
 * 00000001401C3624: jmp     short loc_1401C362A
 * 00000001401C3626: mov     cr8, rcx
 * 00000001401C362A: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C3631: cli
 * 00000001401C3632: test    [rbp+0E8h+arg_0], 1
 * 00000001401C3639: jz      loc_1401C38CF
 * 00000001401C363F: mov     rcx, gs:188h
 * 00000001401C3648: test    byte ptr [rcx+0C2h], 3
 * 00000001401C364F: jz      short loc_1401C366C
 * 00000001401C3651: mov     ecx, 1
 * 00000001401C3656: mov     cr8, rcx
 * 00000001401C365A: sti
 * 00000001401C365B: call    KiInitiateUserApc
 * 00000001401C3660: cli
 * 00000001401C3661: mov     ecx, 0
 * 00000001401C3666: mov     cr8, rcx
 * 00000001401C366A: jmp     short loc_1401C363F
 * 00000001401C366C: test    byte ptr gs:86Ch, 2
 * 00000001401C3675: jz      short loc_1401C367E
 * 00000001401C3677: xor     ecx, ecx
 * 00000001401C3679: call    KiUpdateStibpPairing
 * 00000001401C367E: mov     rcx, gs:188h
 * 00000001401C3687: test    dword ptr [rcx], 8000000h
 * 00000001401C368D: jz      short loc_1401C3694
 * 00000001401C368F: call    KiRestoreSetContextState
 * 00000001401C3694: mov     rcx, gs:188h
 * 00000001401C369D: test    dword ptr [rcx], 40010000h
 * 00000001401C36A3: jz      short loc_1401C36B9
 * 00000001401C36A5: test    byte ptr [rcx+2], 1
 * 00000001401C36A9: jz      short loc_1401C36B9
 * 00000001401C36AB: call    KiCopyCounters
 * 00000001401C36B0: mov     rcx, gs:188h
 * 00000001401C36B9: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C36BD: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C36C5: jz      short loc_1401C36CC
 * 00000001401C36C7: call    KiRestoreDebugRegisterState
 * 00000001401C36CC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C36D0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C36D4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C36D8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C36DC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C36E0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C36E4: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C36E8: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C36EC: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C36F0: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C36F4: mov     byte ptr gs:856h, 0
 * 00000001401C36FD: movzx   eax, word ptr gs:86Ah
 * 00000001401C3706: cmp     gs:864h, ax
 * 00000001401C370F: jz      short loc_1401C3723
 * 00000001401C3711: mov     gs:864h, ax
 * 00000001401C371A: mov     ecx, 48h ; 'H'
 * 00000001401C371F: xor     edx, edx
 * 00000001401C3721: wrmsr
 * 00000001401C3723: btr     word ptr gs:860h, 2
 * 00000001401C372E: jnb     short loc_1401C373E
 * 00000001401C3730: mov     eax, 1
 * 00000001401C3735: xor     edx, edx
 * 00000001401C3737: mov     ecx, 49h ; 'I'
 * 00000001401C373C: wrmsr
 * 00000001401C373E: btr     word ptr gs:860h, 5
 * 00000001401C3749: jnb     loc_1401C3874
 * 00000001401C374F: call    loc_1401C3862
 * 00000001401C3754: add     rsp, 8
 * 00000001401C3758: call    loc_1401C386B
 * 00000001401C375D: add     rsp, 8
 * 00000001401C3761: call    loc_1401C3754
 * 00000001401C3766: add     rsp, 8
 * 00000001401C376A: call    loc_1401C375D
 * 00000001401C376F: add     rsp, 8
 * 00000001401C3773: call    loc_1401C3766
 * 00000001401C3778: add     rsp, 8
 * 00000001401C377C: call    loc_1401C376F
 * 00000001401C3781: add     rsp, 8
 * 00000001401C3785: call    loc_1401C3778
 * 00000001401C378A: add     rsp, 8
 * 00000001401C378E: call    loc_1401C3781
 * 00000001401C3793: add     rsp, 8
 * 00000001401C3797: call    loc_1401C378A
 * 00000001401C379C: add     rsp, 8
 * 00000001401C37A0: call    loc_1401C3793
 * 00000001401C37A5: add     rsp, 8
 * 00000001401C37A9: call    loc_1401C379C
 * 00000001401C37AE: add     rsp, 8
 * 00000001401C37B2: call    loc_1401C37A5
 * 00000001401C37B7: add     rsp, 8
 * 00000001401C37BB: call    loc_1401C37AE
 * 00000001401C37C0: add     rsp, 8
 * 00000001401C37C4: call    loc_1401C37B7
 * 00000001401C37C9: add     rsp, 8
 * 00000001401C37CD: call    loc_1401C37C0
 * 00000001401C37D2: add     rsp, 8
 * 00000001401C37D6: call    loc_1401C37C9
 * 00000001401C37DB: add     rsp, 8
 * 00000001401C37DF: call    loc_1401C37D2
 * 00000001401C37E4: add     rsp, 8
 * 00000001401C37E8: call    loc_1401C37DB
 * 00000001401C37ED: add     rsp, 8
 * 00000001401C37F1: call    loc_1401C37E4
 * 00000001401C37F6: add     rsp, 8
 * 00000001401C37FA: call    loc_1401C37ED
 * 00000001401C37FF: add     rsp, 8
 * 00000001401C3803: call    loc_1401C37F6
 * 00000001401C3808: add     rsp, 8
 * 00000001401C380C: call    loc_1401C37FF
 * 00000001401C3811: add     rsp, 8
 * 00000001401C3815: call    loc_1401C3808
 * 00000001401C381A: add     rsp, 8
 * 00000001401C381E: call    loc_1401C3811
 * 00000001401C3823: add     rsp, 8
 * 00000001401C3827: call    loc_1401C381A
 * 00000001401C382C: add     rsp, 8
 * 00000001401C3830: call    loc_1401C3823
 * 00000001401C3835: add     rsp, 8
 * 00000001401C3839: call    loc_1401C382C
 * 00000001401C383E: add     rsp, 8
 * 00000001401C3842: call    loc_1401C3835
 * 00000001401C3847: add     rsp, 8
 * 00000001401C384B: call    loc_1401C383E
 * 00000001401C3850: add     rsp, 8
 * 00000001401C3854: call    loc_1401C3847
 * 00000001401C3859: add     rsp, 8
 * 00000001401C385D: call    loc_1401C3850
 * 00000001401C3862: add     rsp, 8
 * 00000001401C3866: call    loc_1401C3859
 * 00000001401C386B: add     rsp, 8
 * 00000001401C386F: mov     eax, 0DADAh
 * 00000001401C3874: test    word ptr gs:860h, 80h
 * 00000001401C387F: jz      short loc_1401C388D
 * 00000001401C3881: xor     eax, eax
 * 00000001401C3883: xor     edx, edx
 * 00000001401C3885: mov     ecx, 1
 * 00000001401C388A: div     rcx
 * 00000001401C388D: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C3891: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3895: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3899: mov     rsp, rbp
 * 00000001401C389C: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C38A3: add     rsp, 0E8h
 * 00000001401C38AA: test    cs:KiKvaShadow, 1
 * 00000001401C38B1: jz      short loc_1401C38B8
 * 00000001401C38B3: jmp     KiKernelExit
 * 00000001401C38B8: test    word ptr gs:860h, 100h
 * 00000001401C38C3: jz      short loc_1401C38CA
 * 00000001401C38C5: verw    [rsp+arg_18]
 * 00000001401C38CA: swapgs
 * 00000001401C38CD: iretq
 * 00000001401C38CF: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C38D3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C38D7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C38DB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C38DF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C38E3: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C38E7: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C38EB: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C38EF: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C38F3: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C38F7: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C38FB: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C38FF: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3903: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3907: mov     rsp, rbp
 * 00000001401C390A: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C3911: add     rsp, 0E8h
 * 00000001401C3918: iretq
 */
