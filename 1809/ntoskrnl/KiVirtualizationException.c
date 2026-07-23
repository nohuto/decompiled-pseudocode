/*
 * XREFs of KiVirtualizationException @ 0x1401CD500
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x14032FB00 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KzLowerIrql @ 0x1400BC570 (KzLowerIrql.c)
 *     KzRaiseIrql @ 0x1400BC750 (KzRaiseIrql.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x14029C0C0 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x1401CD500
 * Reason: Hex-Rays returned no pseudocode for 0x1401CD500
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CD500: sub     rsp, 8
 * 00000001401CD504: push    rbp
 * 00000001401CD505: sub     rsp, 158h
 * 00000001401CD50C: lea     rbp, [rsp+80h]
 * 00000001401CD514: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CD518: mov     [rbp+0E8h+var_138], rax
 * 00000001401CD51C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CD520: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CD524: mov     [rbp+0E8h+var_120], r8
 * 00000001401CD528: mov     [rbp+0E8h+var_118], r9
 * 00000001401CD52C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CD530: mov     [rbp+0E8h+var_108], r11
 * 00000001401CD534: test    [rbp+0E8h+arg_0], 1
 * 00000001401CD53B: jnz     short loc_1401CD56C
 * 00000001401CD53D: lfence
 * 00000001401CD540: test    word ptr gs:860h, 1
 * 00000001401CD54B: jnz     short loc_1401CD555
 * 00000001401CD54D: lfence
 * 00000001401CD550: jmp     loc_1401CD775
 * 00000001401CD555: movzx   eax, word ptr gs:864h
 * 00000001401CD55E: mov     ecx, 48h ; 'H'
 * 00000001401CD563: xor     edx, edx
 * 00000001401CD565: wrmsr
 * 00000001401CD567: jmp     loc_1401CD775
 * 00000001401CD56C: test    cs:KiKvaShadow, 1
 * 00000001401CD573: jnz     short loc_1401CD578
 * 00000001401CD575: swapgs
 * 00000001401CD578: lfence
 * 00000001401CD57B: mov     r10, gs:188h
 * 00000001401CD584: mov     rcx, gs:188h
 * 00000001401CD58D: mov     rcx, [rcx+220h]
 * 00000001401CD594: mov     rcx, [rcx+830h]
 * 00000001401CD59B: mov     gs:858h, rcx
 * 00000001401CD5A4: mov     cx, gs:850h
 * 00000001401CD5AD: mov     gs:852h, cx
 * 00000001401CD5B6: mov     cx, gs:860h
 * 00000001401CD5BF: mov     gs:854h, cx
 * 00000001401CD5C8: movzx   eax, word ptr gs:866h
 * 00000001401CD5D1: cmp     gs:864h, ax
 * 00000001401CD5DA: jz      short loc_1401CD5EE
 * 00000001401CD5DC: mov     gs:864h, ax
 * 00000001401CD5E5: mov     ecx, 48h ; 'H'
 * 00000001401CD5EA: xor     edx, edx
 * 00000001401CD5EC: wrmsr
 * 00000001401CD5EE: movzx   edx, word ptr gs:860h
 * 00000001401CD5F7: test    edx, 8
 * 00000001401CD5FD: jz      short loc_1401CD616
 * 00000001401CD5FF: mov     eax, 1
 * 00000001401CD604: xor     edx, edx
 * 00000001401CD606: mov     ecx, 49h ; 'I'
 * 00000001401CD60B: wrmsr
 * 00000001401CD60D: movzx   edx, word ptr gs:860h
 * 00000001401CD616: test    edx, 2
 * 00000001401CD61C: jz      loc_1401CD747
 * 00000001401CD622: call    loc_1401CD735
 * 00000001401CD627: add     rsp, 8
 * 00000001401CD62B: call    loc_1401CD73E
 * 00000001401CD630: add     rsp, 8
 * 00000001401CD634: call    loc_1401CD627
 * 00000001401CD639: add     rsp, 8
 * 00000001401CD63D: call    loc_1401CD630
 * 00000001401CD642: add     rsp, 8
 * 00000001401CD646: call    loc_1401CD639
 * 00000001401CD64B: add     rsp, 8
 * 00000001401CD64F: call    loc_1401CD642
 * 00000001401CD654: add     rsp, 8
 * 00000001401CD658: call    loc_1401CD64B
 * 00000001401CD65D: add     rsp, 8
 * 00000001401CD661: call    loc_1401CD654
 * 00000001401CD666: add     rsp, 8
 * 00000001401CD66A: call    loc_1401CD65D
 * 00000001401CD66F: add     rsp, 8
 * 00000001401CD673: call    loc_1401CD666
 * 00000001401CD678: add     rsp, 8
 * 00000001401CD67C: call    loc_1401CD66F
 * 00000001401CD681: add     rsp, 8
 * 00000001401CD685: call    loc_1401CD678
 * 00000001401CD68A: add     rsp, 8
 * 00000001401CD68E: call    loc_1401CD681
 * 00000001401CD693: add     rsp, 8
 * 00000001401CD697: call    loc_1401CD68A
 * 00000001401CD69C: add     rsp, 8
 * 00000001401CD6A0: call    loc_1401CD693
 * 00000001401CD6A5: add     rsp, 8
 * 00000001401CD6A9: call    loc_1401CD69C
 * 00000001401CD6AE: add     rsp, 8
 * 00000001401CD6B2: call    loc_1401CD6A5
 * 00000001401CD6B7: add     rsp, 8
 * 00000001401CD6BB: call    loc_1401CD6AE
 * 00000001401CD6C0: add     rsp, 8
 * 00000001401CD6C4: call    loc_1401CD6B7
 * 00000001401CD6C9: add     rsp, 8
 * 00000001401CD6CD: call    loc_1401CD6C0
 * 00000001401CD6D2: add     rsp, 8
 * 00000001401CD6D6: call    loc_1401CD6C9
 * 00000001401CD6DB: add     rsp, 8
 * 00000001401CD6DF: call    loc_1401CD6D2
 * 00000001401CD6E4: add     rsp, 8
 * 00000001401CD6E8: call    loc_1401CD6DB
 * 00000001401CD6ED: add     rsp, 8
 * 00000001401CD6F1: call    loc_1401CD6E4
 * 00000001401CD6F6: add     rsp, 8
 * 00000001401CD6FA: call    loc_1401CD6ED
 * 00000001401CD6FF: add     rsp, 8
 * 00000001401CD703: call    loc_1401CD6F6
 * 00000001401CD708: add     rsp, 8
 * 00000001401CD70C: call    loc_1401CD6FF
 * 00000001401CD711: add     rsp, 8
 * 00000001401CD715: call    loc_1401CD708
 * 00000001401CD71A: add     rsp, 8
 * 00000001401CD71E: call    loc_1401CD711
 * 00000001401CD723: add     rsp, 8
 * 00000001401CD727: call    loc_1401CD71A
 * 00000001401CD72C: add     rsp, 8
 * 00000001401CD730: call    loc_1401CD723
 * 00000001401CD735: add     rsp, 8
 * 00000001401CD739: call    loc_1401CD72C
 * 00000001401CD73E: add     rsp, 8
 * 00000001401CD742: mov     eax, 0DADAh
 * 00000001401CD747: test    edx, 200h
 * 00000001401CD74D: jz      short loc_1401CD754
 * 00000001401CD74F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CD754: lfence
 * 00000001401CD757: mov     byte ptr gs:856h, 0
 * 00000001401CD760: test    byte ptr [r10+3], 3
 * 00000001401CD765: mov     [rbp+0E8h+var_68], 0
 * 00000001401CD76E: jz      short loc_1401CD775
 * 00000001401CD770: call    KiSaveDebugRegisterState
 * 00000001401CD775: cld
 * 00000001401CD776: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CD77A: ldmxcsr dword ptr gs:180h
 * 00000001401CD783: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CD787: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CD78B: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CD78F: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CD793: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CD797: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CD79B: mov     r9, gs:6208h
 * 00000001401CD7A4: test    r9, r9
 * 00000001401CD7A7: jz      loc_1401CDAFE
 * 00000001401CD7AD: cmp     dword ptr [r9+44h], 1
 * 00000001401CD7B2: jnz     loc_1401CDAFE
 * 00000001401CD7B8: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CD7C2: jz      loc_1401CDAFE
 * 00000001401CD7C8: mov     rax, cr8
 * 00000001401CD7CC: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 00000001401CD7CF: cmp     al, 2
 * 00000001401CD7D1: jge     loc_1401CDAFE
 * 00000001401CD7D7: mov     ecx, 2; NewIrql
 * 00000001401CD7DC: call    KzRaiseIrql
 * 00000001401CD7E1: sti
 * 00000001401CD7E2: mov     r9, gs:6208h
 * 00000001401CD7EB: mov     rcx, [r9+48h]
 * 00000001401CD7EF: mov     dword ptr [r9+44h], 0
 * 00000001401CD7F7: call    KiEpfHandleNotification
 * 00000001401CD7FC: cli
 * 00000001401CD7FD: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 00000001401CD800: call    KzLowerIrql
 * 00000001401CD805: test    [rbp+0E8h+arg_0], 1
 * 00000001401CD80C: jz      loc_1401CDAB3
 * 00000001401CD812: mov     rcx, gs:188h
 * 00000001401CD81B: test    byte ptr [rcx+0C2h], 3
 * 00000001401CD822: jz      short loc_1401CD83F
 * 00000001401CD824: mov     ecx, 1
 * 00000001401CD829: mov     cr8, rcx
 * 00000001401CD82D: sti
 * 00000001401CD82E: call    KiInitiateUserApc
 * 00000001401CD833: cli
 * 00000001401CD834: mov     ecx, 0
 * 00000001401CD839: mov     cr8, rcx
 * 00000001401CD83D: jmp     short loc_1401CD812
 * 00000001401CD83F: test    byte ptr gs:86Ch, 2
 * 00000001401CD848: jz      short loc_1401CD851
 * 00000001401CD84A: xor     ecx, ecx
 * 00000001401CD84C: call    KiUpdateStibpPairing
 * 00000001401CD851: mov     rcx, gs:188h
 * 00000001401CD85A: test    dword ptr [rcx], 8000000h
 * 00000001401CD860: jz      short loc_1401CD867
 * 00000001401CD862: call    KiRestoreSetContextState
 * 00000001401CD867: mov     rcx, gs:188h
 * 00000001401CD870: test    dword ptr [rcx], 40010000h
 * 00000001401CD876: jz      short loc_1401CD89D
 * 00000001401CD878: test    byte ptr [rcx+2], 1
 * 00000001401CD87C: jz      short loc_1401CD88C
 * 00000001401CD87E: call    KiCopyCounters
 * 00000001401CD883: mov     rcx, gs:188h
 * 00000001401CD88C: test    byte ptr [rcx+3], 40h
 * 00000001401CD890: jz      short loc_1401CD89D
 * 00000001401CD892: lea     rsp, [rbp-80h]
 * 00000001401CD896: mov     cl, 1
 * 00000001401CD898: call    KiUmsExit
 * 00000001401CD89D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CD8A1: cmp     [rbp+0E8h+var_68], 0
 * 00000001401CD8A9: jz      short loc_1401CD8B0
 * 00000001401CD8AB: call    KiRestoreDebugRegisterState
 * 00000001401CD8B0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CD8B4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CD8B8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CD8BC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CD8C0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CD8C4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CD8C8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CD8CC: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CD8D0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CD8D4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CD8D8: mov     byte ptr gs:856h, 0
 * 00000001401CD8E1: movzx   eax, word ptr gs:86Ah
 * 00000001401CD8EA: cmp     gs:864h, ax
 * 00000001401CD8F3: jz      short loc_1401CD907
 * 00000001401CD8F5: mov     gs:864h, ax
 * 00000001401CD8FE: mov     ecx, 48h ; 'H'
 * 00000001401CD903: xor     edx, edx
 * 00000001401CD905: wrmsr
 * 00000001401CD907: btr     word ptr gs:860h, 2
 * 00000001401CD912: jnb     short loc_1401CD922
 * 00000001401CD914: mov     eax, 1
 * 00000001401CD919: xor     edx, edx
 * 00000001401CD91B: mov     ecx, 49h ; 'I'
 * 00000001401CD920: wrmsr
 * 00000001401CD922: btr     word ptr gs:860h, 5
 * 00000001401CD92D: jnb     loc_1401CDA58
 * 00000001401CD933: call    loc_1401CDA46
 * 00000001401CD938: add     rsp, 8
 * 00000001401CD93C: call    loc_1401CDA4F
 * 00000001401CD941: add     rsp, 8
 * 00000001401CD945: call    loc_1401CD938
 * 00000001401CD94A: add     rsp, 8
 * 00000001401CD94E: call    loc_1401CD941
 * 00000001401CD953: add     rsp, 8
 * 00000001401CD957: call    loc_1401CD94A
 * 00000001401CD95C: add     rsp, 8
 * 00000001401CD960: call    loc_1401CD953
 * 00000001401CD965: add     rsp, 8
 * 00000001401CD969: call    loc_1401CD95C
 * 00000001401CD96E: add     rsp, 8
 * 00000001401CD972: call    loc_1401CD965
 * 00000001401CD977: add     rsp, 8
 * 00000001401CD97B: call    loc_1401CD96E
 * 00000001401CD980: add     rsp, 8
 * 00000001401CD984: call    loc_1401CD977
 * 00000001401CD989: add     rsp, 8
 * 00000001401CD98D: call    loc_1401CD980
 * 00000001401CD992: add     rsp, 8
 * 00000001401CD996: call    loc_1401CD989
 * 00000001401CD99B: add     rsp, 8
 * 00000001401CD99F: call    loc_1401CD992
 * 00000001401CD9A4: add     rsp, 8
 * 00000001401CD9A8: call    loc_1401CD99B
 * 00000001401CD9AD: add     rsp, 8
 * 00000001401CD9B1: call    loc_1401CD9A4
 * 00000001401CD9B6: add     rsp, 8
 * 00000001401CD9BA: call    loc_1401CD9AD
 * 00000001401CD9BF: add     rsp, 8
 * 00000001401CD9C3: call    loc_1401CD9B6
 * 00000001401CD9C8: add     rsp, 8
 * 00000001401CD9CC: call    loc_1401CD9BF
 * 00000001401CD9D1: add     rsp, 8
 * 00000001401CD9D5: call    loc_1401CD9C8
 * 00000001401CD9DA: add     rsp, 8
 * 00000001401CD9DE: call    loc_1401CD9D1
 * 00000001401CD9E3: add     rsp, 8
 * 00000001401CD9E7: call    loc_1401CD9DA
 * 00000001401CD9EC: add     rsp, 8
 * 00000001401CD9F0: call    loc_1401CD9E3
 * 00000001401CD9F5: add     rsp, 8
 * 00000001401CD9F9: call    loc_1401CD9EC
 * 00000001401CD9FE: add     rsp, 8
 * 00000001401CDA02: call    loc_1401CD9F5
 * 00000001401CDA07: add     rsp, 8
 * 00000001401CDA0B: call    loc_1401CD9FE
 * 00000001401CDA10: add     rsp, 8
 * 00000001401CDA14: call    loc_1401CDA07
 * 00000001401CDA19: add     rsp, 8
 * 00000001401CDA1D: call    loc_1401CDA10
 * 00000001401CDA22: add     rsp, 8
 * 00000001401CDA26: call    loc_1401CDA19
 * 00000001401CDA2B: add     rsp, 8
 * 00000001401CDA2F: call    loc_1401CDA22
 * 00000001401CDA34: add     rsp, 8
 * 00000001401CDA38: call    loc_1401CDA2B
 * 00000001401CDA3D: add     rsp, 8
 * 00000001401CDA41: call    loc_1401CDA34
 * 00000001401CDA46: add     rsp, 8
 * 00000001401CDA4A: call    loc_1401CDA3D
 * 00000001401CDA4F: add     rsp, 8
 * 00000001401CDA53: mov     eax, 0DADAh
 * 00000001401CDA58: test    word ptr gs:860h, 80h
 * 00000001401CDA63: jz      short loc_1401CDA71
 * 00000001401CDA65: xor     eax, eax
 * 00000001401CDA67: xor     edx, edx
 * 00000001401CDA69: mov     ecx, 1
 * 00000001401CDA6E: div     rcx
 * 00000001401CDA71: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CDA75: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CDA79: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CDA7D: mov     rsp, rbp
 * 00000001401CDA80: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CDA87: add     rsp, 0E8h
 * 00000001401CDA8E: test    cs:KiKvaShadow, 1
 * 00000001401CDA95: jz      short loc_1401CDA9C
 * 00000001401CDA97: jmp     KiKernelExit
 * 00000001401CDA9C: test    word ptr gs:860h, 100h
 * 00000001401CDAA7: jz      short loc_1401CDAAE
 * 00000001401CDAA9: verw    [rsp+arg_18]
 * 00000001401CDAAE: swapgs
 * 00000001401CDAB1: iretq
 * 00000001401CDAB3: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CDAB7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CDABB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CDABF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CDAC3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CDAC7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CDACB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CDACF: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CDAD3: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CDAD7: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CDADB: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CDADF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CDAE3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CDAE7: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CDAEB: mov     rsp, rbp
 * 00000001401CDAEE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CDAF5: add     rsp, 0E8h
 * 00000001401CDAFC: iretq
 * 00000001401CDAFE: mov     r10, [rbp+0E8h]
 * 00000001401CDB05: mov     r9, gs:6208h
 * 00000001401CDB0E: movzx   r8, [rbp+0E8h+NewIrql]
 * 00000001401CDB13: mov     ecx, 7Fh
 * 00000001401CDB18: mov     edx, 20h ; ' '
 * 00000001401CDB1D: call    KiBugCheckDispatch
 */
