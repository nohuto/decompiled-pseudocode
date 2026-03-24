/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1401C6660
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401C6030 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1401C6660
 * Reason: Hex-Rays returned no pseudocode for 0x1401C6660
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C6660: mov     rdx, rsp
 * 00000001401C6663: mov     rcx, gs:6458h
 * 00000001401C666C: lea     rax, [rcx-6000h]
 * 00000001401C6673: cmp     rax, rsp
 * 00000001401C6676: ja      short loc_1401C667D
 * 00000001401C6678: cmp     rsp, rcx
 * 00000001401C667B: jb      short loc_1401C6689
 * 00000001401C667D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C6684: jnz     short loc_1401C6689
 * 00000001401C6686: mov     rsp, rcx
 * 00000001401C6689: sub     rsp, 20h
 * 00000001401C668D: mov     [rsp+20h+var_10], rdx
 * 00000001401C6692: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001401C6697: mov     rsp, [rsp+20h+var_10]
 * 00000001401C669C: mov     rcx, rsi
 * 00000001401C669F: call    HalPerformEndOfInterrupt_0
 * 00000001401C66A4: mov     rcx, gs:20h
 * 00000001401C66AD: cmp     byte ptr [rcx+20h], 1
 * 00000001401C66B1: ja      short loc_1401C672D
 * 00000001401C66B3: rdtsc
 * 00000001401C66B5: shl     rdx, 20h
 * 00000001401C66B9: or      rax, rdx
 * 00000001401C66BC: sub     rax, [rcx+5BC0h]
 * 00000001401C66C3: add     [rcx+5C38h], rax
 * 00000001401C66CA: add     [rcx+5BC0h], rax
 * 00000001401C66D1: mov     r8, rax
 * 00000001401C66D4: mov     rax, [rcx+8]
 * 00000001401C66D8: test    byte ptr [rax+2], 72h
 * 00000001401C66DC: jz      short loc_1401C66F1
 * 00000001401C66DE: xor     edx, edx
 * 00000001401C66E0: call    KiBeginThreadAccountingPeriod
 * 00000001401C66E5: mov     rcx, gs:20h
 * 00000001401C66EE: inc     byte ptr [rcx+20h]
 * 00000001401C66F1: mov     dl, [rcx+6]
 * 00000001401C66F4: and     byte ptr [rcx+6], 0
 * 00000001401C66F8: cmp     byte ptr [rcx+7], 0
 * 00000001401C66FC: jnz     short loc_1401C672D
 * 00000001401C66FE: test    dl, dl
 * 00000001401C6700: jz      short loc_1401C672D
 * 00000001401C6702: cmp     byte ptr [rbp-57h], 2
 * 00000001401C6706: jnb     short loc_1401C6713
 * 00000001401C6708: and     byte ptr [rcx+20h], 0
 * 00000001401C670C: call    KiDpcInterruptBypass
 * 00000001401C6711: jmp     short loc_1401C6730
 * 00000001401C6713: mov     ecx, 2
 * 00000001401C6718: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C671F: nop     dword ptr [rax+rax+00h]
 * 00000001401C6724: mov     rcx, gs:20h
 * 00000001401C672D: dec     byte ptr [rcx+20h]
 * 00000001401C6730: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C6734: cmp     cs:KiIrqlFlags, 0
 * 00000001401C673B: jz      short loc_1401C6744
 * 00000001401C673D: call    KzSetIrqlUnsafe
 * 00000001401C6742: jmp     short loc_1401C6748
 * 00000001401C6744: mov     cr8, rcx
 * 00000001401C6748: mov     rsi, [rbp+0D0h]
 * 00000001401C674F: test    byte ptr [rbp+0F0h], 1
 * 00000001401C6756: jz      loc_1401C6895
 * 00000001401C675C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C6763: jz      short loc_1401C6768
 * 00000001401C6765: stac
 * 00000001401C6768: mov     rcx, gs:188h
 * 00000001401C6771: test    byte ptr [rcx+0C2h], 3
 * 00000001401C6778: jz      short loc_1401C6795
 * 00000001401C677A: mov     ecx, 1
 * 00000001401C677F: mov     cr8, rcx
 * 00000001401C6783: sti
 * 00000001401C6784: call    KiInitiateUserApc
 * 00000001401C6789: cli
 * 00000001401C678A: mov     ecx, 0
 * 00000001401C678F: mov     cr8, rcx
 * 00000001401C6793: jmp     short loc_1401C6768
 * 00000001401C6795: test    byte ptr gs:27Eh, 2
 * 00000001401C679E: jz      short loc_1401C67A7
 * 00000001401C67A0: xor     ecx, ecx
 * 00000001401C67A2: call    KiUpdateStibpPairing
 * 00000001401C67A7: mov     rcx, gs:188h
 * 00000001401C67B0: test    dword ptr [rcx], 8000000h
 * 00000001401C67B6: jz      short loc_1401C67BD
 * 00000001401C67B8: call    KiRestoreSetContextState
 * 00000001401C67BD: mov     rcx, gs:188h
 * 00000001401C67C6: test    dword ptr [rcx], 40010000h
 * 00000001401C67CC: jz      short loc_1401C67E2
 * 00000001401C67CE: test    byte ptr [rcx+2], 1
 * 00000001401C67D2: jz      short loc_1401C67E2
 * 00000001401C67D4: call    KiCopyCounters
 * 00000001401C67D9: mov     rcx, gs:188h
 * 00000001401C67E2: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C67E6: cmp     word ptr [rbp+80h], 0
 * 00000001401C67EE: jz      short loc_1401C67F5
 * 00000001401C67F0: call    KiRestoreDebugRegisterState
 * 00000001401C67F5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C67F9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C67FD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C6801: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C6805: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C6809: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C680D: mov     r11, [rbp-20h]
 * 00000001401C6811: mov     r10, [rbp-28h]
 * 00000001401C6815: mov     r9, [rbp-30h]
 * 00000001401C6819: mov     r8, [rbp-38h]
 * 00000001401C681D: mov     byte ptr gs:853h, 0
 * 00000001401C6826: movzx   eax, byte ptr gs:27Dh
 * 00000001401C682F: cmp     gs:27Ah, al
 * 00000001401C6837: jz      short loc_1401C684A
 * 00000001401C6839: mov     gs:27Ah, al
 * 00000001401C6841: mov     ecx, 48h ; 'H'
 * 00000001401C6846: xor     edx, edx
 * 00000001401C6848: wrmsr
 * 00000001401C684A: btr     word ptr gs:278h, 2
 * 00000001401C6855: jnb     short loc_1401C6865
 * 00000001401C6857: mov     eax, 1
 * 00000001401C685C: xor     edx, edx
 * 00000001401C685E: mov     ecx, 49h ; 'I'
 * 00000001401C6863: wrmsr
 * 00000001401C6865: mov     rdx, [rbp-40h]
 * 00000001401C6869: mov     rcx, [rbp-48h]
 * 00000001401C686D: mov     rax, [rbp-50h]
 * 00000001401C6871: mov     rsp, rbp
 * 00000001401C6874: mov     rbp, [rbp+0D8h]
 * 00000001401C687B: add     rsp, 0E8h
 * 00000001401C6882: test    cs:KiKvaShadow, 1
 * 00000001401C6889: jz      short loc_1401C6890
 * 00000001401C688B: jmp     KiKernelExit
 * 00000001401C6890: swapgs
 * 00000001401C6893: iretq
 * 00000001401C6895: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C6899: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C689D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C68A1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C68A5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C68A9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C68AD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C68B1: mov     r11, [rbp-20h]
 * 00000001401C68B5: mov     r10, [rbp-28h]
 * 00000001401C68B9: mov     r9, [rbp-30h]
 * 00000001401C68BD: mov     r8, [rbp-38h]
 * 00000001401C68C1: mov     rdx, [rbp-40h]
 * 00000001401C68C5: mov     rcx, [rbp-48h]
 * 00000001401C68C9: mov     rax, [rbp-50h]
 * 00000001401C68CD: mov     rsp, rbp
 * 00000001401C68D0: mov     rbp, [rbp+0D8h]
 * 00000001401C68D7: add     rsp, 0E8h
 * 00000001401C68DE: iretq
 */
