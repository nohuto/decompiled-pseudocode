/*
 * XREFs of KiVirtualizationException @ 0x1401CD400
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x14032EB00 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KzLowerIrql @ 0x1400BC630 (KzLowerIrql.c)
 *     KzRaiseIrql @ 0x1400BC810 (KzRaiseIrql.c)
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x1401CD400 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1401CFE00 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x14029BED0 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x1401CD400
 * Reason: Hex-Rays returned no pseudocode for 0x1401CD400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CD400: sub     rsp, 8
 * 00000001401CD404: push    rbp
 * 00000001401CD405: sub     rsp, 158h
 * 00000001401CD40C: lea     rbp, [rsp+80h]
 * 00000001401CD414: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CD418: mov     [rbp+0E8h+var_138], rax
 * 00000001401CD41C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CD420: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CD424: mov     [rbp+0E8h+var_120], r8
 * 00000001401CD428: mov     [rbp+0E8h+var_118], r9
 * 00000001401CD42C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CD430: mov     [rbp+0E8h+var_108], r11
 * 00000001401CD434: test    [rbp+0E8h+arg_0], 1
 * 00000001401CD43B: jnz     short loc_1401CD46C
 * 00000001401CD43D: lfence
 * 00000001401CD440: test    word ptr gs:860h, 1
 * 00000001401CD44B: jnz     short loc_1401CD455
 * 00000001401CD44D: lfence
 * 00000001401CD450: jmp     loc_1401CD675
 * 00000001401CD455: movzx   eax, word ptr gs:864h
 * 00000001401CD45E: mov     ecx, 48h ; 'H'
 * 00000001401CD463: xor     edx, edx
 * 00000001401CD465: wrmsr
 * 00000001401CD467: jmp     loc_1401CD675
 * 00000001401CD46C: test    cs:KiKvaShadow, 1
 * 00000001401CD473: jnz     short loc_1401CD478
 * 00000001401CD475: swapgs
 * 00000001401CD478: lfence
 * 00000001401CD47B: mov     r10, gs:188h
 * 00000001401CD484: mov     rcx, gs:188h
 * 00000001401CD48D: mov     rcx, [rcx+220h]
 * 00000001401CD494: mov     rcx, [rcx+830h]
 * 00000001401CD49B: mov     gs:858h, rcx
 * 00000001401CD4A4: mov     cx, gs:850h
 * 00000001401CD4AD: mov     gs:852h, cx
 * 00000001401CD4B6: mov     cx, gs:860h
 * 00000001401CD4BF: mov     gs:854h, cx
 * 00000001401CD4C8: movzx   eax, word ptr gs:866h
 * 00000001401CD4D1: cmp     gs:864h, ax
 * 00000001401CD4DA: jz      short loc_1401CD4EE
 * 00000001401CD4DC: mov     gs:864h, ax
 * 00000001401CD4E5: mov     ecx, 48h ; 'H'
 * 00000001401CD4EA: xor     edx, edx
 * 00000001401CD4EC: wrmsr
 * 00000001401CD4EE: movzx   edx, word ptr gs:860h
 * 00000001401CD4F7: test    edx, 8
 * 00000001401CD4FD: jz      short loc_1401CD516
 * 00000001401CD4FF: mov     eax, 1
 * 00000001401CD504: xor     edx, edx
 * 00000001401CD506: mov     ecx, 49h ; 'I'
 * 00000001401CD50B: wrmsr
 * 00000001401CD50D: movzx   edx, word ptr gs:860h
 * 00000001401CD516: test    edx, 2
 * 00000001401CD51C: jz      loc_1401CD647
 * 00000001401CD522: call    loc_1401CD635
 * 00000001401CD527: add     rsp, 8
 * 00000001401CD52B: call    loc_1401CD63E
 * 00000001401CD530: add     rsp, 8
 * 00000001401CD534: call    loc_1401CD527
 * 00000001401CD539: add     rsp, 8
 * 00000001401CD53D: call    loc_1401CD530
 * 00000001401CD542: add     rsp, 8
 * 00000001401CD546: call    loc_1401CD539
 * 00000001401CD54B: add     rsp, 8
 * 00000001401CD54F: call    loc_1401CD542
 * 00000001401CD554: add     rsp, 8
 * 00000001401CD558: call    loc_1401CD54B
 * 00000001401CD55D: add     rsp, 8
 * 00000001401CD561: call    loc_1401CD554
 * 00000001401CD566: add     rsp, 8
 * 00000001401CD56A: call    loc_1401CD55D
 * 00000001401CD56F: add     rsp, 8
 * 00000001401CD573: call    loc_1401CD566
 * 00000001401CD578: add     rsp, 8
 * 00000001401CD57C: call    loc_1401CD56F
 * 00000001401CD581: add     rsp, 8
 * 00000001401CD585: call    loc_1401CD578
 * 00000001401CD58A: add     rsp, 8
 * 00000001401CD58E: call    loc_1401CD581
 * 00000001401CD593: add     rsp, 8
 * 00000001401CD597: call    loc_1401CD58A
 * 00000001401CD59C: add     rsp, 8
 * 00000001401CD5A0: call    loc_1401CD593
 * 00000001401CD5A5: add     rsp, 8
 * 00000001401CD5A9: call    loc_1401CD59C
 * 00000001401CD5AE: add     rsp, 8
 * 00000001401CD5B2: call    loc_1401CD5A5
 * 00000001401CD5B7: add     rsp, 8
 * 00000001401CD5BB: call    loc_1401CD5AE
 * 00000001401CD5C0: add     rsp, 8
 * 00000001401CD5C4: call    loc_1401CD5B7
 * 00000001401CD5C9: add     rsp, 8
 * 00000001401CD5CD: call    loc_1401CD5C0
 * 00000001401CD5D2: add     rsp, 8
 * 00000001401CD5D6: call    loc_1401CD5C9
 * 00000001401CD5DB: add     rsp, 8
 * 00000001401CD5DF: call    loc_1401CD5D2
 * 00000001401CD5E4: add     rsp, 8
 * 00000001401CD5E8: call    loc_1401CD5DB
 * 00000001401CD5ED: add     rsp, 8
 * 00000001401CD5F1: call    loc_1401CD5E4
 * 00000001401CD5F6: add     rsp, 8
 * 00000001401CD5FA: call    loc_1401CD5ED
 * 00000001401CD5FF: add     rsp, 8
 * 00000001401CD603: call    loc_1401CD5F6
 * 00000001401CD608: add     rsp, 8
 * 00000001401CD60C: call    loc_1401CD5FF
 * 00000001401CD611: add     rsp, 8
 * 00000001401CD615: call    loc_1401CD608
 * 00000001401CD61A: add     rsp, 8
 * 00000001401CD61E: call    loc_1401CD611
 * 00000001401CD623: add     rsp, 8
 * 00000001401CD627: call    loc_1401CD61A
 * 00000001401CD62C: add     rsp, 8
 * 00000001401CD630: call    loc_1401CD623
 * 00000001401CD635: add     rsp, 8
 * 00000001401CD639: call    loc_1401CD62C
 * 00000001401CD63E: add     rsp, 8
 * 00000001401CD642: mov     eax, 0DADAh
 * 00000001401CD647: test    edx, 200h
 * 00000001401CD64D: jz      short loc_1401CD654
 * 00000001401CD64F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CD654: lfence
 * 00000001401CD657: mov     byte ptr gs:856h, 0
 * 00000001401CD660: test    byte ptr [r10+3], 3
 * 00000001401CD665: mov     [rbp+0E8h+var_68], 0
 * 00000001401CD66E: jz      short loc_1401CD675
 * 00000001401CD670: call    KiSaveDebugRegisterState
 * 00000001401CD675: cld
 * 00000001401CD676: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CD67A: ldmxcsr dword ptr gs:180h
 * 00000001401CD683: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CD687: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CD68B: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CD68F: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CD693: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CD697: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CD69B: mov     r9, gs:6208h
 * 00000001401CD6A4: test    r9, r9
 * 00000001401CD6A7: jz      loc_1401CD9FE
 * 00000001401CD6AD: cmp     dword ptr [r9+44h], 1
 * 00000001401CD6B2: jnz     loc_1401CD9FE
 * 00000001401CD6B8: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CD6C2: jz      loc_1401CD9FE
 * 00000001401CD6C8: mov     rax, cr8
 * 00000001401CD6CC: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 00000001401CD6CF: cmp     al, 2
 * 00000001401CD6D1: jge     loc_1401CD9FE
 * 00000001401CD6D7: mov     ecx, 2; NewIrql
 * 00000001401CD6DC: call    KzRaiseIrql
 * 00000001401CD6E1: sti
 * 00000001401CD6E2: mov     r9, gs:6208h
 * 00000001401CD6EB: mov     rcx, [r9+48h]
 * 00000001401CD6EF: mov     dword ptr [r9+44h], 0
 * 00000001401CD6F7: call    KiEpfHandleNotification
 * 00000001401CD6FC: cli
 * 00000001401CD6FD: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 00000001401CD700: call    KzLowerIrql
 * 00000001401CD705: test    [rbp+0E8h+arg_0], 1
 * 00000001401CD70C: jz      loc_1401CD9B3
 * 00000001401CD712: mov     rcx, gs:188h
 * 00000001401CD71B: test    byte ptr [rcx+0C2h], 3
 * 00000001401CD722: jz      short loc_1401CD73F
 * 00000001401CD724: mov     ecx, 1
 * 00000001401CD729: mov     cr8, rcx
 * 00000001401CD72D: sti
 * 00000001401CD72E: call    KiInitiateUserApc
 * 00000001401CD733: cli
 * 00000001401CD734: mov     ecx, 0
 * 00000001401CD739: mov     cr8, rcx
 * 00000001401CD73D: jmp     short loc_1401CD712
 * 00000001401CD73F: test    byte ptr gs:86Ch, 2
 * 00000001401CD748: jz      short loc_1401CD751
 * 00000001401CD74A: xor     ecx, ecx
 * 00000001401CD74C: call    KiUpdateStibpPairing
 * 00000001401CD751: mov     rcx, gs:188h
 * 00000001401CD75A: test    dword ptr [rcx], 8000000h
 * 00000001401CD760: jz      short loc_1401CD767
 * 00000001401CD762: call    KiRestoreSetContextState
 * 00000001401CD767: mov     rcx, gs:188h
 * 00000001401CD770: test    dword ptr [rcx], 40010000h
 * 00000001401CD776: jz      short loc_1401CD79D
 * 00000001401CD778: test    byte ptr [rcx+2], 1
 * 00000001401CD77C: jz      short loc_1401CD78C
 * 00000001401CD77E: call    KiCopyCounters
 * 00000001401CD783: mov     rcx, gs:188h
 * 00000001401CD78C: test    byte ptr [rcx+3], 40h
 * 00000001401CD790: jz      short loc_1401CD79D
 * 00000001401CD792: lea     rsp, [rbp-80h]
 * 00000001401CD796: mov     cl, 1
 * 00000001401CD798: call    KiUmsExit
 * 00000001401CD79D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CD7A1: cmp     [rbp+0E8h+var_68], 0
 * 00000001401CD7A9: jz      short loc_1401CD7B0
 * 00000001401CD7AB: call    KiRestoreDebugRegisterState
 * 00000001401CD7B0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CD7B4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CD7B8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CD7BC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CD7C0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CD7C4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CD7C8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CD7CC: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CD7D0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CD7D4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CD7D8: mov     byte ptr gs:856h, 0
 * 00000001401CD7E1: movzx   eax, word ptr gs:86Ah
 * 00000001401CD7EA: cmp     gs:864h, ax
 * 00000001401CD7F3: jz      short loc_1401CD807
 * 00000001401CD7F5: mov     gs:864h, ax
 * 00000001401CD7FE: mov     ecx, 48h ; 'H'
 * 00000001401CD803: xor     edx, edx
 * 00000001401CD805: wrmsr
 * 00000001401CD807: btr     word ptr gs:860h, 2
 * 00000001401CD812: jnb     short loc_1401CD822
 * 00000001401CD814: mov     eax, 1
 * 00000001401CD819: xor     edx, edx
 * 00000001401CD81B: mov     ecx, 49h ; 'I'
 * 00000001401CD820: wrmsr
 * 00000001401CD822: btr     word ptr gs:860h, 5
 * 00000001401CD82D: jnb     loc_1401CD958
 * 00000001401CD833: call    loc_1401CD946
 * 00000001401CD838: add     rsp, 8
 * 00000001401CD83C: call    loc_1401CD94F
 * 00000001401CD841: add     rsp, 8
 * 00000001401CD845: call    loc_1401CD838
 * 00000001401CD84A: add     rsp, 8
 * 00000001401CD84E: call    loc_1401CD841
 * 00000001401CD853: add     rsp, 8
 * 00000001401CD857: call    loc_1401CD84A
 * 00000001401CD85C: add     rsp, 8
 * 00000001401CD860: call    loc_1401CD853
 * 00000001401CD865: add     rsp, 8
 * 00000001401CD869: call    loc_1401CD85C
 * 00000001401CD86E: add     rsp, 8
 * 00000001401CD872: call    loc_1401CD865
 * 00000001401CD877: add     rsp, 8
 * 00000001401CD87B: call    loc_1401CD86E
 * 00000001401CD880: add     rsp, 8
 * 00000001401CD884: call    loc_1401CD877
 * 00000001401CD889: add     rsp, 8
 * 00000001401CD88D: call    loc_1401CD880
 * 00000001401CD892: add     rsp, 8
 * 00000001401CD896: call    loc_1401CD889
 * 00000001401CD89B: add     rsp, 8
 * 00000001401CD89F: call    loc_1401CD892
 * 00000001401CD8A4: add     rsp, 8
 * 00000001401CD8A8: call    loc_1401CD89B
 * 00000001401CD8AD: add     rsp, 8
 * 00000001401CD8B1: call    loc_1401CD8A4
 * 00000001401CD8B6: add     rsp, 8
 * 00000001401CD8BA: call    loc_1401CD8AD
 * 00000001401CD8BF: add     rsp, 8
 * 00000001401CD8C3: call    loc_1401CD8B6
 * 00000001401CD8C8: add     rsp, 8
 * 00000001401CD8CC: call    loc_1401CD8BF
 * 00000001401CD8D1: add     rsp, 8
 * 00000001401CD8D5: call    loc_1401CD8C8
 * 00000001401CD8DA: add     rsp, 8
 * 00000001401CD8DE: call    loc_1401CD8D1
 * 00000001401CD8E3: add     rsp, 8
 * 00000001401CD8E7: call    loc_1401CD8DA
 * 00000001401CD8EC: add     rsp, 8
 * 00000001401CD8F0: call    loc_1401CD8E3
 * 00000001401CD8F5: add     rsp, 8
 * 00000001401CD8F9: call    loc_1401CD8EC
 * 00000001401CD8FE: add     rsp, 8
 * 00000001401CD902: call    loc_1401CD8F5
 * 00000001401CD907: add     rsp, 8
 * 00000001401CD90B: call    loc_1401CD8FE
 * 00000001401CD910: add     rsp, 8
 * 00000001401CD914: call    loc_1401CD907
 * 00000001401CD919: add     rsp, 8
 * 00000001401CD91D: call    loc_1401CD910
 * 00000001401CD922: add     rsp, 8
 * 00000001401CD926: call    loc_1401CD919
 * 00000001401CD92B: add     rsp, 8
 * 00000001401CD92F: call    loc_1401CD922
 * 00000001401CD934: add     rsp, 8
 * 00000001401CD938: call    loc_1401CD92B
 * 00000001401CD93D: add     rsp, 8
 * 00000001401CD941: call    loc_1401CD934
 * 00000001401CD946: add     rsp, 8
 * 00000001401CD94A: call    loc_1401CD93D
 * 00000001401CD94F: add     rsp, 8
 * 00000001401CD953: mov     eax, 0DADAh
 * 00000001401CD958: test    word ptr gs:860h, 80h
 * 00000001401CD963: jz      short loc_1401CD971
 * 00000001401CD965: xor     eax, eax
 * 00000001401CD967: xor     edx, edx
 * 00000001401CD969: mov     ecx, 1
 * 00000001401CD96E: div     rcx
 * 00000001401CD971: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CD975: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CD979: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CD97D: mov     rsp, rbp
 * 00000001401CD980: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CD987: add     rsp, 0E8h
 * 00000001401CD98E: test    cs:KiKvaShadow, 1
 * 00000001401CD995: jz      short loc_1401CD99C
 * 00000001401CD997: jmp     KiKernelExit
 * 00000001401CD99C: test    word ptr gs:860h, 100h
 * 00000001401CD9A7: jz      short loc_1401CD9AE
 * 00000001401CD9A9: verw    [rsp+arg_18]
 * 00000001401CD9AE: swapgs
 * 00000001401CD9B1: iretq
 * 00000001401CD9B3: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CD9B7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CD9BB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CD9BF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CD9C3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CD9C7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CD9CB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CD9CF: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CD9D3: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CD9D7: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CD9DB: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CD9DF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CD9E3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CD9E7: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CD9EB: mov     rsp, rbp
 * 00000001401CD9EE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CD9F5: add     rsp, 0E8h
 * 00000001401CD9FC: iretq
 * 00000001401CD9FE: mov     r10, [rbp+0E8h]
 * 00000001401CDA05: mov     r9, gs:6208h
 * 00000001401CDA0E: movzx   r8, [rbp+0E8h+NewIrql]
 * 00000001401CDA13: mov     ecx, 7Fh
 * 00000001401CDA18: mov     edx, 20h ; ' '
 * 00000001401CDA1D: call    KiBugCheckDispatch
 */
