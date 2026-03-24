/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1401BE710
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BD910 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE710 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1401BE710
 * Reason: Hex-Rays returned no pseudocode for 0x1401BE710
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BE710: mov     rdx, rsp
 * 00000001401BE713: mov     rcx, gs:6458h
 * 00000001401BE71C: lea     rax, [rcx-6000h]
 * 00000001401BE723: cmp     rax, rsp
 * 00000001401BE726: ja      short loc_1401BE72D
 * 00000001401BE728: cmp     rsp, rcx
 * 00000001401BE72B: jb      short loc_1401BE739
 * 00000001401BE72D: cmp     cs:KiBugCheckActive, 0
 * 00000001401BE734: jnz     short loc_1401BE739
 * 00000001401BE736: mov     rsp, rcx
 * 00000001401BE739: sub     rsp, 20h
 * 00000001401BE73D: mov     [rsp+20h+var_10], rdx
 * 00000001401BE742: call    KiInterruptSubDispatchNoLock
 * 00000001401BE747: mov     rsp, [rsp+20h+var_10]
 * 00000001401BE74C: mov     rcx, gs:20h
 * 00000001401BE755: cmp     byte ptr [rcx+20h], 1
 * 00000001401BE759: ja      short loc_1401BE7D5
 * 00000001401BE75B: rdtsc
 * 00000001401BE75D: shl     rdx, 20h
 * 00000001401BE761: or      rax, rdx
 * 00000001401BE764: sub     rax, [rcx+5BC0h]
 * 00000001401BE76B: add     [rcx+5C38h], rax
 * 00000001401BE772: add     [rcx+5BC0h], rax
 * 00000001401BE779: mov     r8, rax
 * 00000001401BE77C: mov     rax, [rcx+8]
 * 00000001401BE780: test    byte ptr [rax+2], 72h
 * 00000001401BE784: jz      short loc_1401BE799
 * 00000001401BE786: xor     edx, edx
 * 00000001401BE788: call    KiBeginThreadAccountingPeriod
 * 00000001401BE78D: mov     rcx, gs:20h
 * 00000001401BE796: inc     byte ptr [rcx+20h]
 * 00000001401BE799: mov     dl, [rcx+6]
 * 00000001401BE79C: and     byte ptr [rcx+6], 0
 * 00000001401BE7A0: cmp     byte ptr [rcx+7], 0
 * 00000001401BE7A4: jnz     short loc_1401BE7D5
 * 00000001401BE7A6: test    dl, dl
 * 00000001401BE7A8: jz      short loc_1401BE7D5
 * 00000001401BE7AA: cmp     byte ptr [rbp-57h], 2
 * 00000001401BE7AE: jnb     short loc_1401BE7BB
 * 00000001401BE7B0: and     byte ptr [rcx+20h], 0
 * 00000001401BE7B4: call    KiDpcInterruptBypass
 * 00000001401BE7B9: jmp     short loc_1401BE7D8
 * 00000001401BE7BB: mov     ecx, 2
 * 00000001401BE7C0: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BE7C7: nop     dword ptr [rax+rax+00h]
 * 00000001401BE7CC: mov     rcx, gs:20h
 * 00000001401BE7D5: dec     byte ptr [rcx+20h]
 * 00000001401BE7D8: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BE7DC: cmp     cs:KiIrqlFlags, 0
 * 00000001401BE7E3: jz      short loc_1401BE7EC
 * 00000001401BE7E5: call    KzSetIrqlUnsafe
 * 00000001401BE7EA: jmp     short loc_1401BE7F0
 * 00000001401BE7EC: mov     cr8, rcx
 * 00000001401BE7F0: mov     rsi, [rbp+0D0h]
 * 00000001401BE7F7: test    byte ptr [rbp+0F0h], 1
 * 00000001401BE7FE: jz      loc_1401BEA94
 * 00000001401BE804: mov     rcx, gs:188h
 * 00000001401BE80D: test    byte ptr [rcx+0C2h], 3
 * 00000001401BE814: jz      short loc_1401BE831
 * 00000001401BE816: mov     ecx, 1
 * 00000001401BE81B: mov     cr8, rcx
 * 00000001401BE81F: sti
 * 00000001401BE820: call    KiInitiateUserApc
 * 00000001401BE825: cli
 * 00000001401BE826: mov     ecx, 0
 * 00000001401BE82B: mov     cr8, rcx
 * 00000001401BE82F: jmp     short loc_1401BE804
 * 00000001401BE831: test    byte ptr gs:86Ch, 2
 * 00000001401BE83A: jz      short loc_1401BE843
 * 00000001401BE83C: xor     ecx, ecx
 * 00000001401BE83E: call    KiUpdateStibpPairing
 * 00000001401BE843: mov     rcx, gs:188h
 * 00000001401BE84C: test    dword ptr [rcx], 8000000h
 * 00000001401BE852: jz      short loc_1401BE859
 * 00000001401BE854: call    KiRestoreSetContextState
 * 00000001401BE859: mov     rcx, gs:188h
 * 00000001401BE862: test    dword ptr [rcx], 40010000h
 * 00000001401BE868: jz      short loc_1401BE87E
 * 00000001401BE86A: test    byte ptr [rcx+2], 1
 * 00000001401BE86E: jz      short loc_1401BE87E
 * 00000001401BE870: call    KiCopyCounters
 * 00000001401BE875: mov     rcx, gs:188h
 * 00000001401BE87E: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE882: cmp     word ptr [rbp+80h], 0
 * 00000001401BE88A: jz      short loc_1401BE891
 * 00000001401BE88C: call    KiRestoreDebugRegisterState
 * 00000001401BE891: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE895: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE899: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE89D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE8A1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE8A5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE8A9: mov     r11, [rbp-20h]
 * 00000001401BE8AD: mov     r10, [rbp-28h]
 * 00000001401BE8B1: mov     r9, [rbp-30h]
 * 00000001401BE8B5: mov     r8, [rbp-38h]
 * 00000001401BE8B9: mov     byte ptr gs:856h, 0
 * 00000001401BE8C2: movzx   eax, word ptr gs:86Ah
 * 00000001401BE8CB: cmp     gs:864h, ax
 * 00000001401BE8D4: jz      short loc_1401BE8E8
 * 00000001401BE8D6: mov     gs:864h, ax
 * 00000001401BE8DF: mov     ecx, 48h ; 'H'
 * 00000001401BE8E4: xor     edx, edx
 * 00000001401BE8E6: wrmsr
 * 00000001401BE8E8: btr     word ptr gs:860h, 2
 * 00000001401BE8F3: jnb     short loc_1401BE903
 * 00000001401BE8F5: mov     eax, 1
 * 00000001401BE8FA: xor     edx, edx
 * 00000001401BE8FC: mov     ecx, 49h ; 'I'
 * 00000001401BE901: wrmsr
 * 00000001401BE903: btr     word ptr gs:860h, 5
 * 00000001401BE90E: jnb     loc_1401BEA39
 * 00000001401BE914: call    loc_1401BEA27
 * 00000001401BE919: add     rsp, 8
 * 00000001401BE91D: call    loc_1401BEA30
 * 00000001401BE922: add     rsp, 8
 * 00000001401BE926: call    loc_1401BE919
 * 00000001401BE92B: add     rsp, 8
 * 00000001401BE92F: call    loc_1401BE922
 * 00000001401BE934: add     rsp, 8
 * 00000001401BE938: call    loc_1401BE92B
 * 00000001401BE93D: add     rsp, 8
 * 00000001401BE941: call    loc_1401BE934
 * 00000001401BE946: add     rsp, 8
 * 00000001401BE94A: call    loc_1401BE93D
 * 00000001401BE94F: add     rsp, 8
 * 00000001401BE953: call    loc_1401BE946
 * 00000001401BE958: add     rsp, 8
 * 00000001401BE95C: call    loc_1401BE94F
 * 00000001401BE961: add     rsp, 8
 * 00000001401BE965: call    loc_1401BE958
 * 00000001401BE96A: add     rsp, 8
 * 00000001401BE96E: call    loc_1401BE961
 * 00000001401BE973: add     rsp, 8
 * 00000001401BE977: call    loc_1401BE96A
 * 00000001401BE97C: add     rsp, 8
 * 00000001401BE980: call    loc_1401BE973
 * 00000001401BE985: add     rsp, 8
 * 00000001401BE989: call    loc_1401BE97C
 * 00000001401BE98E: add     rsp, 8
 * 00000001401BE992: call    loc_1401BE985
 * 00000001401BE997: add     rsp, 8
 * 00000001401BE99B: call    loc_1401BE98E
 * 00000001401BE9A0: add     rsp, 8
 * 00000001401BE9A4: call    loc_1401BE997
 * 00000001401BE9A9: add     rsp, 8
 * 00000001401BE9AD: call    loc_1401BE9A0
 * 00000001401BE9B2: add     rsp, 8
 * 00000001401BE9B6: call    loc_1401BE9A9
 * 00000001401BE9BB: add     rsp, 8
 * 00000001401BE9BF: call    loc_1401BE9B2
 * 00000001401BE9C4: add     rsp, 8
 * 00000001401BE9C8: call    loc_1401BE9BB
 * 00000001401BE9CD: add     rsp, 8
 * 00000001401BE9D1: call    loc_1401BE9C4
 * 00000001401BE9D6: add     rsp, 8
 * 00000001401BE9DA: call    loc_1401BE9CD
 * 00000001401BE9DF: add     rsp, 8
 * 00000001401BE9E3: call    loc_1401BE9D6
 * 00000001401BE9E8: add     rsp, 8
 * 00000001401BE9EC: call    loc_1401BE9DF
 * 00000001401BE9F1: add     rsp, 8
 * 00000001401BE9F5: call    loc_1401BE9E8
 * 00000001401BE9FA: add     rsp, 8
 * 00000001401BE9FE: call    loc_1401BE9F1
 * 00000001401BEA03: add     rsp, 8
 * 00000001401BEA07: call    loc_1401BE9FA
 * 00000001401BEA0C: add     rsp, 8
 * 00000001401BEA10: call    loc_1401BEA03
 * 00000001401BEA15: add     rsp, 8
 * 00000001401BEA19: call    loc_1401BEA0C
 * 00000001401BEA1E: add     rsp, 8
 * 00000001401BEA22: call    loc_1401BEA15
 * 00000001401BEA27: add     rsp, 8
 * 00000001401BEA2B: call    loc_1401BEA1E
 * 00000001401BEA30: add     rsp, 8
 * 00000001401BEA34: mov     eax, 0DADAh
 * 00000001401BEA39: test    word ptr gs:860h, 80h
 * 00000001401BEA44: jz      short loc_1401BEA52
 * 00000001401BEA46: xor     eax, eax
 * 00000001401BEA48: xor     edx, edx
 * 00000001401BEA4A: mov     ecx, 1
 * 00000001401BEA4F: div     rcx
 * 00000001401BEA52: mov     rdx, [rbp-40h]
 * 00000001401BEA56: mov     rcx, [rbp-48h]
 * 00000001401BEA5A: mov     rax, [rbp-50h]
 * 00000001401BEA5E: mov     rsp, rbp
 * 00000001401BEA61: mov     rbp, [rbp+0D8h]
 * 00000001401BEA68: add     rsp, 0E8h
 * 00000001401BEA6F: test    cs:KiKvaShadow, 1
 * 00000001401BEA76: jz      short loc_1401BEA7D
 * 00000001401BEA78: jmp     KiKernelExit
 * 00000001401BEA7D: test    word ptr gs:860h, 100h
 * 00000001401BEA88: jz      short loc_1401BEA8F
 * 00000001401BEA8A: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BEA8F: swapgs
 * 00000001401BEA92: iretq
 * 00000001401BEA94: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BEA98: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BEA9C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BEAA0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BEAA4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BEAA8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BEAAC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BEAB0: mov     r11, [rbp-20h]
 * 00000001401BEAB4: mov     r10, [rbp-28h]
 * 00000001401BEAB8: mov     r9, [rbp-30h]
 * 00000001401BEABC: mov     r8, [rbp-38h]
 * 00000001401BEAC0: mov     rdx, [rbp-40h]
 * 00000001401BEAC4: mov     rcx, [rbp-48h]
 * 00000001401BEAC8: mov     rax, [rbp-50h]
 * 00000001401BEACC: mov     rsp, rbp
 * 00000001401BEACF: mov     rbp, [rbp+0D8h]
 * 00000001401BEAD6: add     rsp, 0E8h
 * 00000001401BEADD: iretq
 */
