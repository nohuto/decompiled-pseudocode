/*
 * XREFs of KiChainedDispatch @ 0x1401BD360
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401BD360 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1401BD740 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1401BD360
 * Reason: Hex-Rays returned no pseudocode for 0x1401BD360
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BD360: mov     rdx, rsp
 * 00000001401BD363: mov     rcx, gs:6458h
 * 00000001401BD36C: lea     rax, [rcx-6000h]
 * 00000001401BD373: cmp     rax, rsp
 * 00000001401BD376: ja      short loc_1401BD37D
 * 00000001401BD378: cmp     rsp, rcx
 * 00000001401BD37B: jb      short loc_1401BD389
 * 00000001401BD37D: cmp     cs:KiBugCheckActive, 0
 * 00000001401BD384: jnz     short loc_1401BD389
 * 00000001401BD386: mov     rsp, rcx
 * 00000001401BD389: sub     rsp, 20h
 * 00000001401BD38D: mov     [rsp+20h+var_10], rdx
 * 00000001401BD392: call    KiScanInterruptObjectList
 * 00000001401BD397: mov     rsp, [rsp+20h+var_10]
 * 00000001401BD39C: mov     rcx, rsi
 * 00000001401BD39F: call    HalPerformEndOfInterrupt_0
 * 00000001401BD3A4: mov     rcx, gs:20h
 * 00000001401BD3AD: cmp     byte ptr [rcx+20h], 1
 * 00000001401BD3B1: ja      short loc_1401BD42D
 * 00000001401BD3B3: rdtsc
 * 00000001401BD3B5: shl     rdx, 20h
 * 00000001401BD3B9: or      rax, rdx
 * 00000001401BD3BC: sub     rax, [rcx+5BC0h]
 * 00000001401BD3C3: add     [rcx+5C38h], rax
 * 00000001401BD3CA: add     [rcx+5BC0h], rax
 * 00000001401BD3D1: mov     r8, rax
 * 00000001401BD3D4: mov     rax, [rcx+8]
 * 00000001401BD3D8: test    byte ptr [rax+2], 72h
 * 00000001401BD3DC: jz      short loc_1401BD3F1
 * 00000001401BD3DE: xor     edx, edx
 * 00000001401BD3E0: call    KiBeginThreadAccountingPeriod
 * 00000001401BD3E5: mov     rcx, gs:20h
 * 00000001401BD3EE: inc     byte ptr [rcx+20h]
 * 00000001401BD3F1: mov     dl, [rcx+6]
 * 00000001401BD3F4: and     byte ptr [rcx+6], 0
 * 00000001401BD3F8: cmp     byte ptr [rcx+7], 0
 * 00000001401BD3FC: jnz     short loc_1401BD42D
 * 00000001401BD3FE: test    dl, dl
 * 00000001401BD400: jz      short loc_1401BD42D
 * 00000001401BD402: cmp     byte ptr [rbp-57h], 2
 * 00000001401BD406: jnb     short loc_1401BD413
 * 00000001401BD408: and     byte ptr [rcx+20h], 0
 * 00000001401BD40C: call    KiDpcInterruptBypass
 * 00000001401BD411: jmp     short loc_1401BD430
 * 00000001401BD413: mov     ecx, 2
 * 00000001401BD418: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BD41F: nop     dword ptr [rax+rax+00h]
 * 00000001401BD424: mov     rcx, gs:20h
 * 00000001401BD42D: dec     byte ptr [rcx+20h]
 * 00000001401BD430: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BD434: cmp     cs:KiIrqlFlags, 0
 * 00000001401BD43B: jz      short loc_1401BD444
 * 00000001401BD43D: call    KzSetIrqlUnsafe
 * 00000001401BD442: jmp     short loc_1401BD448
 * 00000001401BD444: mov     cr8, rcx
 * 00000001401BD448: mov     rsi, [rbp+0D0h]
 * 00000001401BD44F: test    byte ptr [rbp+0F0h], 1
 * 00000001401BD456: jz      loc_1401BD6EC
 * 00000001401BD45C: mov     rcx, gs:188h
 * 00000001401BD465: test    byte ptr [rcx+0C2h], 3
 * 00000001401BD46C: jz      short loc_1401BD489
 * 00000001401BD46E: mov     ecx, 1
 * 00000001401BD473: mov     cr8, rcx
 * 00000001401BD477: sti
 * 00000001401BD478: call    KiInitiateUserApc
 * 00000001401BD47D: cli
 * 00000001401BD47E: mov     ecx, 0
 * 00000001401BD483: mov     cr8, rcx
 * 00000001401BD487: jmp     short loc_1401BD45C
 * 00000001401BD489: test    byte ptr gs:86Ch, 2
 * 00000001401BD492: jz      short loc_1401BD49B
 * 00000001401BD494: xor     ecx, ecx
 * 00000001401BD496: call    KiUpdateStibpPairing
 * 00000001401BD49B: mov     rcx, gs:188h
 * 00000001401BD4A4: test    dword ptr [rcx], 8000000h
 * 00000001401BD4AA: jz      short loc_1401BD4B1
 * 00000001401BD4AC: call    KiRestoreSetContextState
 * 00000001401BD4B1: mov     rcx, gs:188h
 * 00000001401BD4BA: test    dword ptr [rcx], 40010000h
 * 00000001401BD4C0: jz      short loc_1401BD4D6
 * 00000001401BD4C2: test    byte ptr [rcx+2], 1
 * 00000001401BD4C6: jz      short loc_1401BD4D6
 * 00000001401BD4C8: call    KiCopyCounters
 * 00000001401BD4CD: mov     rcx, gs:188h
 * 00000001401BD4D6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BD4DA: cmp     word ptr [rbp+80h], 0
 * 00000001401BD4E2: jz      short loc_1401BD4E9
 * 00000001401BD4E4: call    KiRestoreDebugRegisterState
 * 00000001401BD4E9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BD4ED: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BD4F1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BD4F5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BD4F9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BD4FD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BD501: mov     r11, [rbp-20h]
 * 00000001401BD505: mov     r10, [rbp-28h]
 * 00000001401BD509: mov     r9, [rbp-30h]
 * 00000001401BD50D: mov     r8, [rbp-38h]
 * 00000001401BD511: mov     byte ptr gs:856h, 0
 * 00000001401BD51A: movzx   eax, word ptr gs:86Ah
 * 00000001401BD523: cmp     gs:864h, ax
 * 00000001401BD52C: jz      short loc_1401BD540
 * 00000001401BD52E: mov     gs:864h, ax
 * 00000001401BD537: mov     ecx, 48h ; 'H'
 * 00000001401BD53C: xor     edx, edx
 * 00000001401BD53E: wrmsr
 * 00000001401BD540: btr     word ptr gs:860h, 2
 * 00000001401BD54B: jnb     short loc_1401BD55B
 * 00000001401BD54D: mov     eax, 1
 * 00000001401BD552: xor     edx, edx
 * 00000001401BD554: mov     ecx, 49h ; 'I'
 * 00000001401BD559: wrmsr
 * 00000001401BD55B: btr     word ptr gs:860h, 5
 * 00000001401BD566: jnb     loc_1401BD691
 * 00000001401BD56C: call    loc_1401BD67F
 * 00000001401BD571: add     rsp, 8
 * 00000001401BD575: call    loc_1401BD688
 * 00000001401BD57A: add     rsp, 8
 * 00000001401BD57E: call    loc_1401BD571
 * 00000001401BD583: add     rsp, 8
 * 00000001401BD587: call    loc_1401BD57A
 * 00000001401BD58C: add     rsp, 8
 * 00000001401BD590: call    loc_1401BD583
 * 00000001401BD595: add     rsp, 8
 * 00000001401BD599: call    loc_1401BD58C
 * 00000001401BD59E: add     rsp, 8
 * 00000001401BD5A2: call    loc_1401BD595
 * 00000001401BD5A7: add     rsp, 8
 * 00000001401BD5AB: call    loc_1401BD59E
 * 00000001401BD5B0: add     rsp, 8
 * 00000001401BD5B4: call    loc_1401BD5A7
 * 00000001401BD5B9: add     rsp, 8
 * 00000001401BD5BD: call    loc_1401BD5B0
 * 00000001401BD5C2: add     rsp, 8
 * 00000001401BD5C6: call    loc_1401BD5B9
 * 00000001401BD5CB: add     rsp, 8
 * 00000001401BD5CF: call    loc_1401BD5C2
 * 00000001401BD5D4: add     rsp, 8
 * 00000001401BD5D8: call    loc_1401BD5CB
 * 00000001401BD5DD: add     rsp, 8
 * 00000001401BD5E1: call    loc_1401BD5D4
 * 00000001401BD5E6: add     rsp, 8
 * 00000001401BD5EA: call    loc_1401BD5DD
 * 00000001401BD5EF: add     rsp, 8
 * 00000001401BD5F3: call    loc_1401BD5E6
 * 00000001401BD5F8: add     rsp, 8
 * 00000001401BD5FC: call    loc_1401BD5EF
 * 00000001401BD601: add     rsp, 8
 * 00000001401BD605: call    loc_1401BD5F8
 * 00000001401BD60A: add     rsp, 8
 * 00000001401BD60E: call    loc_1401BD601
 * 00000001401BD613: add     rsp, 8
 * 00000001401BD617: call    loc_1401BD60A
 * 00000001401BD61C: add     rsp, 8
 * 00000001401BD620: call    loc_1401BD613
 * 00000001401BD625: add     rsp, 8
 * 00000001401BD629: call    loc_1401BD61C
 * 00000001401BD62E: add     rsp, 8
 * 00000001401BD632: call    loc_1401BD625
 * 00000001401BD637: add     rsp, 8
 * 00000001401BD63B: call    loc_1401BD62E
 * 00000001401BD640: add     rsp, 8
 * 00000001401BD644: call    loc_1401BD637
 * 00000001401BD649: add     rsp, 8
 * 00000001401BD64D: call    loc_1401BD640
 * 00000001401BD652: add     rsp, 8
 * 00000001401BD656: call    loc_1401BD649
 * 00000001401BD65B: add     rsp, 8
 * 00000001401BD65F: call    loc_1401BD652
 * 00000001401BD664: add     rsp, 8
 * 00000001401BD668: call    loc_1401BD65B
 * 00000001401BD66D: add     rsp, 8
 * 00000001401BD671: call    loc_1401BD664
 * 00000001401BD676: add     rsp, 8
 * 00000001401BD67A: call    loc_1401BD66D
 * 00000001401BD67F: add     rsp, 8
 * 00000001401BD683: call    loc_1401BD676
 * 00000001401BD688: add     rsp, 8
 * 00000001401BD68C: mov     eax, 0DADAh
 * 00000001401BD691: test    word ptr gs:860h, 80h
 * 00000001401BD69C: jz      short loc_1401BD6AA
 * 00000001401BD69E: xor     eax, eax
 * 00000001401BD6A0: xor     edx, edx
 * 00000001401BD6A2: mov     ecx, 1
 * 00000001401BD6A7: div     rcx
 * 00000001401BD6AA: mov     rdx, [rbp-40h]
 * 00000001401BD6AE: mov     rcx, [rbp-48h]
 * 00000001401BD6B2: mov     rax, [rbp-50h]
 * 00000001401BD6B6: mov     rsp, rbp
 * 00000001401BD6B9: mov     rbp, [rbp+0D8h]
 * 00000001401BD6C0: add     rsp, 0E8h
 * 00000001401BD6C7: test    cs:KiKvaShadow, 1
 * 00000001401BD6CE: jz      short loc_1401BD6D5
 * 00000001401BD6D0: jmp     KiKernelExit
 * 00000001401BD6D5: test    word ptr gs:860h, 100h
 * 00000001401BD6E0: jz      short loc_1401BD6E7
 * 00000001401BD6E2: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BD6E7: swapgs
 * 00000001401BD6EA: iretq
 * 00000001401BD6EC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BD6F0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BD6F4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BD6F8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BD6FC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BD700: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BD704: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BD708: mov     r11, [rbp-20h]
 * 00000001401BD70C: mov     r10, [rbp-28h]
 * 00000001401BD710: mov     r9, [rbp-30h]
 * 00000001401BD714: mov     r8, [rbp-38h]
 * 00000001401BD718: mov     rdx, [rbp-40h]
 * 00000001401BD71C: mov     rcx, [rbp-48h]
 * 00000001401BD720: mov     rax, [rbp-50h]
 * 00000001401BD724: mov     rsp, rbp
 * 00000001401BD727: mov     rbp, [rbp+0D8h]
 * 00000001401BD72E: add     rsp, 0E8h
 * 00000001401BD735: iretq
 */
