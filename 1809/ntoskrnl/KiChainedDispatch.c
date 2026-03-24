/*
 * XREFs of KiChainedDispatch @ 0x1401BD200
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401BD200 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1401BD5E0 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1401BD200
 * Reason: Hex-Rays returned no pseudocode for 0x1401BD200
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BD200: mov     rdx, rsp
 * 00000001401BD203: mov     rcx, gs:6458h
 * 00000001401BD20C: lea     rax, [rcx-6000h]
 * 00000001401BD213: cmp     rax, rsp
 * 00000001401BD216: ja      short loc_1401BD21D
 * 00000001401BD218: cmp     rsp, rcx
 * 00000001401BD21B: jb      short loc_1401BD229
 * 00000001401BD21D: cmp     cs:KiBugCheckActive, 0
 * 00000001401BD224: jnz     short loc_1401BD229
 * 00000001401BD226: mov     rsp, rcx
 * 00000001401BD229: sub     rsp, 20h
 * 00000001401BD22D: mov     [rsp+20h+var_10], rdx
 * 00000001401BD232: call    KiScanInterruptObjectList
 * 00000001401BD237: mov     rsp, [rsp+20h+var_10]
 * 00000001401BD23C: mov     rcx, rsi
 * 00000001401BD23F: call    HalPerformEndOfInterrupt_0
 * 00000001401BD244: mov     rcx, gs:20h
 * 00000001401BD24D: cmp     byte ptr [rcx+20h], 1
 * 00000001401BD251: ja      short loc_1401BD2CD
 * 00000001401BD253: rdtsc
 * 00000001401BD255: shl     rdx, 20h
 * 00000001401BD259: or      rax, rdx
 * 00000001401BD25C: sub     rax, [rcx+5BC0h]
 * 00000001401BD263: add     [rcx+5C38h], rax
 * 00000001401BD26A: add     [rcx+5BC0h], rax
 * 00000001401BD271: mov     r8, rax
 * 00000001401BD274: mov     rax, [rcx+8]
 * 00000001401BD278: test    byte ptr [rax+2], 72h
 * 00000001401BD27C: jz      short loc_1401BD291
 * 00000001401BD27E: xor     edx, edx
 * 00000001401BD280: call    KiBeginThreadAccountingPeriod
 * 00000001401BD285: mov     rcx, gs:20h
 * 00000001401BD28E: inc     byte ptr [rcx+20h]
 * 00000001401BD291: mov     dl, [rcx+6]
 * 00000001401BD294: and     byte ptr [rcx+6], 0
 * 00000001401BD298: cmp     byte ptr [rcx+7], 0
 * 00000001401BD29C: jnz     short loc_1401BD2CD
 * 00000001401BD29E: test    dl, dl
 * 00000001401BD2A0: jz      short loc_1401BD2CD
 * 00000001401BD2A2: cmp     byte ptr [rbp-57h], 2
 * 00000001401BD2A6: jnb     short loc_1401BD2B3
 * 00000001401BD2A8: and     byte ptr [rcx+20h], 0
 * 00000001401BD2AC: call    KiDpcInterruptBypass
 * 00000001401BD2B1: jmp     short loc_1401BD2D0
 * 00000001401BD2B3: mov     ecx, 2
 * 00000001401BD2B8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BD2BF: nop     dword ptr [rax+rax+00h]
 * 00000001401BD2C4: mov     rcx, gs:20h
 * 00000001401BD2CD: dec     byte ptr [rcx+20h]
 * 00000001401BD2D0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BD2D4: cmp     cs:KiIrqlFlags, 0
 * 00000001401BD2DB: jz      short loc_1401BD2E4
 * 00000001401BD2DD: call    KzSetIrqlUnsafe
 * 00000001401BD2E2: jmp     short loc_1401BD2E8
 * 00000001401BD2E4: mov     cr8, rcx
 * 00000001401BD2E8: mov     rsi, [rbp+0D0h]
 * 00000001401BD2EF: test    byte ptr [rbp+0F0h], 1
 * 00000001401BD2F6: jz      loc_1401BD58C
 * 00000001401BD2FC: mov     rcx, gs:188h
 * 00000001401BD305: test    byte ptr [rcx+0C2h], 3
 * 00000001401BD30C: jz      short loc_1401BD329
 * 00000001401BD30E: mov     ecx, 1
 * 00000001401BD313: mov     cr8, rcx
 * 00000001401BD317: sti
 * 00000001401BD318: call    KiInitiateUserApc
 * 00000001401BD31D: cli
 * 00000001401BD31E: mov     ecx, 0
 * 00000001401BD323: mov     cr8, rcx
 * 00000001401BD327: jmp     short loc_1401BD2FC
 * 00000001401BD329: test    byte ptr gs:86Ch, 2
 * 00000001401BD332: jz      short loc_1401BD33B
 * 00000001401BD334: xor     ecx, ecx
 * 00000001401BD336: call    KiUpdateStibpPairing
 * 00000001401BD33B: mov     rcx, gs:188h
 * 00000001401BD344: test    dword ptr [rcx], 8000000h
 * 00000001401BD34A: jz      short loc_1401BD351
 * 00000001401BD34C: call    KiRestoreSetContextState
 * 00000001401BD351: mov     rcx, gs:188h
 * 00000001401BD35A: test    dword ptr [rcx], 40010000h
 * 00000001401BD360: jz      short loc_1401BD376
 * 00000001401BD362: test    byte ptr [rcx+2], 1
 * 00000001401BD366: jz      short loc_1401BD376
 * 00000001401BD368: call    KiCopyCounters
 * 00000001401BD36D: mov     rcx, gs:188h
 * 00000001401BD376: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BD37A: cmp     word ptr [rbp+80h], 0
 * 00000001401BD382: jz      short loc_1401BD389
 * 00000001401BD384: call    KiRestoreDebugRegisterState
 * 00000001401BD389: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BD38D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BD391: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BD395: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BD399: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BD39D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BD3A1: mov     r11, [rbp-20h]
 * 00000001401BD3A5: mov     r10, [rbp-28h]
 * 00000001401BD3A9: mov     r9, [rbp-30h]
 * 00000001401BD3AD: mov     r8, [rbp-38h]
 * 00000001401BD3B1: mov     byte ptr gs:856h, 0
 * 00000001401BD3BA: movzx   eax, word ptr gs:86Ah
 * 00000001401BD3C3: cmp     gs:864h, ax
 * 00000001401BD3CC: jz      short loc_1401BD3E0
 * 00000001401BD3CE: mov     gs:864h, ax
 * 00000001401BD3D7: mov     ecx, 48h ; 'H'
 * 00000001401BD3DC: xor     edx, edx
 * 00000001401BD3DE: wrmsr
 * 00000001401BD3E0: btr     word ptr gs:860h, 2
 * 00000001401BD3EB: jnb     short loc_1401BD3FB
 * 00000001401BD3ED: mov     eax, 1
 * 00000001401BD3F2: xor     edx, edx
 * 00000001401BD3F4: mov     ecx, 49h ; 'I'
 * 00000001401BD3F9: wrmsr
 * 00000001401BD3FB: btr     word ptr gs:860h, 5
 * 00000001401BD406: jnb     loc_1401BD531
 * 00000001401BD40C: call    loc_1401BD51F
 * 00000001401BD411: add     rsp, 8
 * 00000001401BD415: call    loc_1401BD528
 * 00000001401BD41A: add     rsp, 8
 * 00000001401BD41E: call    loc_1401BD411
 * 00000001401BD423: add     rsp, 8
 * 00000001401BD427: call    loc_1401BD41A
 * 00000001401BD42C: add     rsp, 8
 * 00000001401BD430: call    loc_1401BD423
 * 00000001401BD435: add     rsp, 8
 * 00000001401BD439: call    loc_1401BD42C
 * 00000001401BD43E: add     rsp, 8
 * 00000001401BD442: call    loc_1401BD435
 * 00000001401BD447: add     rsp, 8
 * 00000001401BD44B: call    loc_1401BD43E
 * 00000001401BD450: add     rsp, 8
 * 00000001401BD454: call    loc_1401BD447
 * 00000001401BD459: add     rsp, 8
 * 00000001401BD45D: call    loc_1401BD450
 * 00000001401BD462: add     rsp, 8
 * 00000001401BD466: call    loc_1401BD459
 * 00000001401BD46B: add     rsp, 8
 * 00000001401BD46F: call    loc_1401BD462
 * 00000001401BD474: add     rsp, 8
 * 00000001401BD478: call    loc_1401BD46B
 * 00000001401BD47D: add     rsp, 8
 * 00000001401BD481: call    loc_1401BD474
 * 00000001401BD486: add     rsp, 8
 * 00000001401BD48A: call    loc_1401BD47D
 * 00000001401BD48F: add     rsp, 8
 * 00000001401BD493: call    loc_1401BD486
 * 00000001401BD498: add     rsp, 8
 * 00000001401BD49C: call    loc_1401BD48F
 * 00000001401BD4A1: add     rsp, 8
 * 00000001401BD4A5: call    loc_1401BD498
 * 00000001401BD4AA: add     rsp, 8
 * 00000001401BD4AE: call    loc_1401BD4A1
 * 00000001401BD4B3: add     rsp, 8
 * 00000001401BD4B7: call    loc_1401BD4AA
 * 00000001401BD4BC: add     rsp, 8
 * 00000001401BD4C0: call    loc_1401BD4B3
 * 00000001401BD4C5: add     rsp, 8
 * 00000001401BD4C9: call    loc_1401BD4BC
 * 00000001401BD4CE: add     rsp, 8
 * 00000001401BD4D2: call    loc_1401BD4C5
 * 00000001401BD4D7: add     rsp, 8
 * 00000001401BD4DB: call    loc_1401BD4CE
 * 00000001401BD4E0: add     rsp, 8
 * 00000001401BD4E4: call    loc_1401BD4D7
 * 00000001401BD4E9: add     rsp, 8
 * 00000001401BD4ED: call    loc_1401BD4E0
 * 00000001401BD4F2: add     rsp, 8
 * 00000001401BD4F6: call    loc_1401BD4E9
 * 00000001401BD4FB: add     rsp, 8
 * 00000001401BD4FF: call    loc_1401BD4F2
 * 00000001401BD504: add     rsp, 8
 * 00000001401BD508: call    loc_1401BD4FB
 * 00000001401BD50D: add     rsp, 8
 * 00000001401BD511: call    loc_1401BD504
 * 00000001401BD516: add     rsp, 8
 * 00000001401BD51A: call    loc_1401BD50D
 * 00000001401BD51F: add     rsp, 8
 * 00000001401BD523: call    loc_1401BD516
 * 00000001401BD528: add     rsp, 8
 * 00000001401BD52C: mov     eax, 0DADAh
 * 00000001401BD531: test    word ptr gs:860h, 80h
 * 00000001401BD53C: jz      short loc_1401BD54A
 * 00000001401BD53E: xor     eax, eax
 * 00000001401BD540: xor     edx, edx
 * 00000001401BD542: mov     ecx, 1
 * 00000001401BD547: div     rcx
 * 00000001401BD54A: mov     rdx, [rbp-40h]
 * 00000001401BD54E: mov     rcx, [rbp-48h]
 * 00000001401BD552: mov     rax, [rbp-50h]
 * 00000001401BD556: mov     rsp, rbp
 * 00000001401BD559: mov     rbp, [rbp+0D8h]
 * 00000001401BD560: add     rsp, 0E8h
 * 00000001401BD567: test    cs:KiKvaShadow, 1
 * 00000001401BD56E: jz      short loc_1401BD575
 * 00000001401BD570: jmp     KiKernelExit
 * 00000001401BD575: test    word ptr gs:860h, 100h
 * 00000001401BD580: jz      short loc_1401BD587
 * 00000001401BD582: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BD587: swapgs
 * 00000001401BD58A: iretq
 * 00000001401BD58C: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BD590: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BD594: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BD598: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BD59C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BD5A0: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BD5A4: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BD5A8: mov     r11, [rbp-20h]
 * 00000001401BD5AC: mov     r10, [rbp-28h]
 * 00000001401BD5B0: mov     r9, [rbp-30h]
 * 00000001401BD5B4: mov     r8, [rbp-38h]
 * 00000001401BD5B8: mov     rdx, [rbp-40h]
 * 00000001401BD5BC: mov     rcx, [rbp-48h]
 * 00000001401BD5C0: mov     rax, [rbp-50h]
 * 00000001401BD5C4: mov     rsp, rbp
 * 00000001401BD5C7: mov     rbp, [rbp+0D8h]
 * 00000001401BD5CE: add     rsp, 0E8h
 * 00000001401BD5D5: iretq
 */
