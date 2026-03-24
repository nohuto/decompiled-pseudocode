/*
 * XREFs of KiDpcInterrupt @ 0x1401C31C0
 * Callers:
 *     KiDpcInterruptShadow @ 0x14032EF00 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1401C31C0 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x1401C4050 (KiDispatchInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1401C31C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C31C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C31C0: sub     rsp, 8
 * 00000001401C31C4: push    rbp
 * 00000001401C31C5: push    rsi
 * 00000001401C31C6: sub     rsp, 150h
 * 00000001401C31CD: lea     rbp, [rsp+80h]
 * 00000001401C31D5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C31D9: mov     [rbp+0E8h+var_138], rax
 * 00000001401C31DD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C31E1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C31E5: mov     [rbp+0E8h+var_120], r8
 * 00000001401C31E9: mov     [rbp+0E8h+var_118], r9
 * 00000001401C31ED: mov     [rbp+0E8h+var_110], r10
 * 00000001401C31F1: mov     [rbp+0E8h+var_108], r11
 * 00000001401C31F5: test    [rbp+0E8h+arg_0], 1
 * 00000001401C31FC: jnz     short loc_1401C322D
 * 00000001401C31FE: lfence
 * 00000001401C3201: test    word ptr gs:860h, 1
 * 00000001401C320C: jnz     short loc_1401C3216
 * 00000001401C320E: lfence
 * 00000001401C3211: jmp     loc_1401C3436
 * 00000001401C3216: movzx   eax, word ptr gs:864h
 * 00000001401C321F: mov     ecx, 48h ; 'H'
 * 00000001401C3224: xor     edx, edx
 * 00000001401C3226: wrmsr
 * 00000001401C3228: jmp     loc_1401C3436
 * 00000001401C322D: test    cs:KiKvaShadow, 1
 * 00000001401C3234: jnz     short loc_1401C3239
 * 00000001401C3236: swapgs
 * 00000001401C3239: lfence
 * 00000001401C323C: mov     r10, gs:188h
 * 00000001401C3245: mov     rcx, gs:188h
 * 00000001401C324E: mov     rcx, [rcx+220h]
 * 00000001401C3255: mov     rcx, [rcx+830h]
 * 00000001401C325C: mov     gs:858h, rcx
 * 00000001401C3265: mov     cx, gs:850h
 * 00000001401C326E: mov     gs:852h, cx
 * 00000001401C3277: mov     cx, gs:860h
 * 00000001401C3280: mov     gs:854h, cx
 * 00000001401C3289: movzx   eax, word ptr gs:866h
 * 00000001401C3292: cmp     gs:864h, ax
 * 00000001401C329B: jz      short loc_1401C32AF
 * 00000001401C329D: mov     gs:864h, ax
 * 00000001401C32A6: mov     ecx, 48h ; 'H'
 * 00000001401C32AB: xor     edx, edx
 * 00000001401C32AD: wrmsr
 * 00000001401C32AF: movzx   edx, word ptr gs:860h
 * 00000001401C32B8: test    edx, 8
 * 00000001401C32BE: jz      short loc_1401C32D7
 * 00000001401C32C0: mov     eax, 1
 * 00000001401C32C5: xor     edx, edx
 * 00000001401C32C7: mov     ecx, 49h ; 'I'
 * 00000001401C32CC: wrmsr
 * 00000001401C32CE: movzx   edx, word ptr gs:860h
 * 00000001401C32D7: test    edx, 2
 * 00000001401C32DD: jz      loc_1401C3408
 * 00000001401C32E3: call    loc_1401C33F6
 * 00000001401C32E8: add     rsp, 8
 * 00000001401C32EC: call    loc_1401C33FF
 * 00000001401C32F1: add     rsp, 8
 * 00000001401C32F5: call    loc_1401C32E8
 * 00000001401C32FA: add     rsp, 8
 * 00000001401C32FE: call    loc_1401C32F1
 * 00000001401C3303: add     rsp, 8
 * 00000001401C3307: call    loc_1401C32FA
 * 00000001401C330C: add     rsp, 8
 * 00000001401C3310: call    loc_1401C3303
 * 00000001401C3315: add     rsp, 8
 * 00000001401C3319: call    loc_1401C330C
 * 00000001401C331E: add     rsp, 8
 * 00000001401C3322: call    loc_1401C3315
 * 00000001401C3327: add     rsp, 8
 * 00000001401C332B: call    loc_1401C331E
 * 00000001401C3330: add     rsp, 8
 * 00000001401C3334: call    loc_1401C3327
 * 00000001401C3339: add     rsp, 8
 * 00000001401C333D: call    loc_1401C3330
 * 00000001401C3342: add     rsp, 8
 * 00000001401C3346: call    loc_1401C3339
 * 00000001401C334B: add     rsp, 8
 * 00000001401C334F: call    loc_1401C3342
 * 00000001401C3354: add     rsp, 8
 * 00000001401C3358: call    loc_1401C334B
 * 00000001401C335D: add     rsp, 8
 * 00000001401C3361: call    loc_1401C3354
 * 00000001401C3366: add     rsp, 8
 * 00000001401C336A: call    loc_1401C335D
 * 00000001401C336F: add     rsp, 8
 * 00000001401C3373: call    loc_1401C3366
 * 00000001401C3378: add     rsp, 8
 * 00000001401C337C: call    loc_1401C336F
 * 00000001401C3381: add     rsp, 8
 * 00000001401C3385: call    loc_1401C3378
 * 00000001401C338A: add     rsp, 8
 * 00000001401C338E: call    loc_1401C3381
 * 00000001401C3393: add     rsp, 8
 * 00000001401C3397: call    loc_1401C338A
 * 00000001401C339C: add     rsp, 8
 * 00000001401C33A0: call    loc_1401C3393
 * 00000001401C33A5: add     rsp, 8
 * 00000001401C33A9: call    loc_1401C339C
 * 00000001401C33AE: add     rsp, 8
 * 00000001401C33B2: call    loc_1401C33A5
 * 00000001401C33B7: add     rsp, 8
 * 00000001401C33BB: call    loc_1401C33AE
 * 00000001401C33C0: add     rsp, 8
 * 00000001401C33C4: call    loc_1401C33B7
 * 00000001401C33C9: add     rsp, 8
 * 00000001401C33CD: call    loc_1401C33C0
 * 00000001401C33D2: add     rsp, 8
 * 00000001401C33D6: call    loc_1401C33C9
 * 00000001401C33DB: add     rsp, 8
 * 00000001401C33DF: call    loc_1401C33D2
 * 00000001401C33E4: add     rsp, 8
 * 00000001401C33E8: call    loc_1401C33DB
 * 00000001401C33ED: add     rsp, 8
 * 00000001401C33F1: call    loc_1401C33E4
 * 00000001401C33F6: add     rsp, 8
 * 00000001401C33FA: call    loc_1401C33ED
 * 00000001401C33FF: add     rsp, 8
 * 00000001401C3403: mov     eax, 0DADAh
 * 00000001401C3408: test    edx, 200h
 * 00000001401C340E: jz      short loc_1401C3415
 * 00000001401C3410: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C3415: lfence
 * 00000001401C3418: mov     byte ptr gs:856h, 0
 * 00000001401C3421: test    byte ptr [r10+3], 3
 * 00000001401C3426: mov     [rbp+0E8h+var_68], 0
 * 00000001401C342F: jz      short loc_1401C3436
 * 00000001401C3431: call    KiSaveDebugRegisterState
 * 00000001401C3436: cld
 * 00000001401C3437: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C343B: ldmxcsr dword ptr gs:180h
 * 00000001401C3444: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C3448: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C344C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C3450: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C3454: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C3458: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C345C: xor     esi, esi
 * 00000001401C345E: inc     dword ptr gs:5D00h
 * 00000001401C3466: mov     ecx, 2
 * 00000001401C346B: cmp     cs:KiIrqlFlags, 0
 * 00000001401C3472: jz      short loc_1401C347B
 * 00000001401C3474: call    KzSetIrqlUnsafe
 * 00000001401C3479: jmp     short loc_1401C3483
 * 00000001401C347B: mov     rax, cr8
 * 00000001401C347F: mov     cr8, rcx
 * 00000001401C3483: mov     [rbp+0E8h+var_13F], al
 * 00000001401C3486: mov     rcx, rsi
 * 00000001401C3489: call    HalPerformEndOfInterrupt_0
 * 00000001401C348E: sti
 * 00000001401C348F: cmp     byte ptr gs:187h, 0
 * 00000001401C3498: jnz     short loc_1401C34B1
 * 00000001401C349A: mov     al, [rbp+0E8h+var_13F]
 * 00000001401C349D: mov     rcx, gs:188h
 * 00000001401C34A6: mov     [rcx+186h], al
 * 00000001401C34AC: call    KiDispatchInterrupt
 * 00000001401C34B1: cli
 * 00000001401C34B2: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C34B6: cmp     cs:KiIrqlFlags, 0
 * 00000001401C34BD: jz      short loc_1401C34C6
 * 00000001401C34BF: call    KzSetIrqlUnsafe
 * 00000001401C34C4: jmp     short loc_1401C34CA
 * 00000001401C34C6: mov     cr8, rcx
 * 00000001401C34CA: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C34D1: cli
 * 00000001401C34D2: test    [rbp+0E8h+arg_0], 1
 * 00000001401C34D9: jz      loc_1401C376F
 * 00000001401C34DF: mov     rcx, gs:188h
 * 00000001401C34E8: test    byte ptr [rcx+0C2h], 3
 * 00000001401C34EF: jz      short loc_1401C350C
 * 00000001401C34F1: mov     ecx, 1
 * 00000001401C34F6: mov     cr8, rcx
 * 00000001401C34FA: sti
 * 00000001401C34FB: call    KiInitiateUserApc
 * 00000001401C3500: cli
 * 00000001401C3501: mov     ecx, 0
 * 00000001401C3506: mov     cr8, rcx
 * 00000001401C350A: jmp     short loc_1401C34DF
 * 00000001401C350C: test    byte ptr gs:86Ch, 2
 * 00000001401C3515: jz      short loc_1401C351E
 * 00000001401C3517: xor     ecx, ecx
 * 00000001401C3519: call    KiUpdateStibpPairing
 * 00000001401C351E: mov     rcx, gs:188h
 * 00000001401C3527: test    dword ptr [rcx], 8000000h
 * 00000001401C352D: jz      short loc_1401C3534
 * 00000001401C352F: call    KiRestoreSetContextState
 * 00000001401C3534: mov     rcx, gs:188h
 * 00000001401C353D: test    dword ptr [rcx], 40010000h
 * 00000001401C3543: jz      short loc_1401C3559
 * 00000001401C3545: test    byte ptr [rcx+2], 1
 * 00000001401C3549: jz      short loc_1401C3559
 * 00000001401C354B: call    KiCopyCounters
 * 00000001401C3550: mov     rcx, gs:188h
 * 00000001401C3559: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C355D: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C3565: jz      short loc_1401C356C
 * 00000001401C3567: call    KiRestoreDebugRegisterState
 * 00000001401C356C: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C3570: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C3574: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C3578: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C357C: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C3580: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C3584: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C3588: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C358C: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C3590: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C3594: mov     byte ptr gs:856h, 0
 * 00000001401C359D: movzx   eax, word ptr gs:86Ah
 * 00000001401C35A6: cmp     gs:864h, ax
 * 00000001401C35AF: jz      short loc_1401C35C3
 * 00000001401C35B1: mov     gs:864h, ax
 * 00000001401C35BA: mov     ecx, 48h ; 'H'
 * 00000001401C35BF: xor     edx, edx
 * 00000001401C35C1: wrmsr
 * 00000001401C35C3: btr     word ptr gs:860h, 2
 * 00000001401C35CE: jnb     short loc_1401C35DE
 * 00000001401C35D0: mov     eax, 1
 * 00000001401C35D5: xor     edx, edx
 * 00000001401C35D7: mov     ecx, 49h ; 'I'
 * 00000001401C35DC: wrmsr
 * 00000001401C35DE: btr     word ptr gs:860h, 5
 * 00000001401C35E9: jnb     loc_1401C3714
 * 00000001401C35EF: call    loc_1401C3702
 * 00000001401C35F4: add     rsp, 8
 * 00000001401C35F8: call    loc_1401C370B
 * 00000001401C35FD: add     rsp, 8
 * 00000001401C3601: call    loc_1401C35F4
 * 00000001401C3606: add     rsp, 8
 * 00000001401C360A: call    loc_1401C35FD
 * 00000001401C360F: add     rsp, 8
 * 00000001401C3613: call    loc_1401C3606
 * 00000001401C3618: add     rsp, 8
 * 00000001401C361C: call    loc_1401C360F
 * 00000001401C3621: add     rsp, 8
 * 00000001401C3625: call    loc_1401C3618
 * 00000001401C362A: add     rsp, 8
 * 00000001401C362E: call    loc_1401C3621
 * 00000001401C3633: add     rsp, 8
 * 00000001401C3637: call    loc_1401C362A
 * 00000001401C363C: add     rsp, 8
 * 00000001401C3640: call    loc_1401C3633
 * 00000001401C3645: add     rsp, 8
 * 00000001401C3649: call    loc_1401C363C
 * 00000001401C364E: add     rsp, 8
 * 00000001401C3652: call    loc_1401C3645
 * 00000001401C3657: add     rsp, 8
 * 00000001401C365B: call    loc_1401C364E
 * 00000001401C3660: add     rsp, 8
 * 00000001401C3664: call    loc_1401C3657
 * 00000001401C3669: add     rsp, 8
 * 00000001401C366D: call    loc_1401C3660
 * 00000001401C3672: add     rsp, 8
 * 00000001401C3676: call    loc_1401C3669
 * 00000001401C367B: add     rsp, 8
 * 00000001401C367F: call    loc_1401C3672
 * 00000001401C3684: add     rsp, 8
 * 00000001401C3688: call    loc_1401C367B
 * 00000001401C368D: add     rsp, 8
 * 00000001401C3691: call    loc_1401C3684
 * 00000001401C3696: add     rsp, 8
 * 00000001401C369A: call    loc_1401C368D
 * 00000001401C369F: add     rsp, 8
 * 00000001401C36A3: call    loc_1401C3696
 * 00000001401C36A8: add     rsp, 8
 * 00000001401C36AC: call    loc_1401C369F
 * 00000001401C36B1: add     rsp, 8
 * 00000001401C36B5: call    loc_1401C36A8
 * 00000001401C36BA: add     rsp, 8
 * 00000001401C36BE: call    loc_1401C36B1
 * 00000001401C36C3: add     rsp, 8
 * 00000001401C36C7: call    loc_1401C36BA
 * 00000001401C36CC: add     rsp, 8
 * 00000001401C36D0: call    loc_1401C36C3
 * 00000001401C36D5: add     rsp, 8
 * 00000001401C36D9: call    loc_1401C36CC
 * 00000001401C36DE: add     rsp, 8
 * 00000001401C36E2: call    loc_1401C36D5
 * 00000001401C36E7: add     rsp, 8
 * 00000001401C36EB: call    loc_1401C36DE
 * 00000001401C36F0: add     rsp, 8
 * 00000001401C36F4: call    loc_1401C36E7
 * 00000001401C36F9: add     rsp, 8
 * 00000001401C36FD: call    loc_1401C36F0
 * 00000001401C3702: add     rsp, 8
 * 00000001401C3706: call    loc_1401C36F9
 * 00000001401C370B: add     rsp, 8
 * 00000001401C370F: mov     eax, 0DADAh
 * 00000001401C3714: test    word ptr gs:860h, 80h
 * 00000001401C371F: jz      short loc_1401C372D
 * 00000001401C3721: xor     eax, eax
 * 00000001401C3723: xor     edx, edx
 * 00000001401C3725: mov     ecx, 1
 * 00000001401C372A: div     rcx
 * 00000001401C372D: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C3731: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3735: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3739: mov     rsp, rbp
 * 00000001401C373C: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C3743: add     rsp, 0E8h
 * 00000001401C374A: test    cs:KiKvaShadow, 1
 * 00000001401C3751: jz      short loc_1401C3758
 * 00000001401C3753: jmp     KiKernelExit
 * 00000001401C3758: test    word ptr gs:860h, 100h
 * 00000001401C3763: jz      short loc_1401C376A
 * 00000001401C3765: verw    [rsp+arg_18]
 * 00000001401C376A: swapgs
 * 00000001401C376D: iretq
 * 00000001401C376F: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C3773: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C3777: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C377B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C377F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C3783: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C3787: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C378B: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C378F: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C3793: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C3797: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C379B: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C379F: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C37A3: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C37A7: mov     rsp, rbp
 * 00000001401C37AA: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C37B1: add     rsp, 0E8h
 * 00000001401C37B8: iretq
 */
