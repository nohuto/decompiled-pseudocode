/*
 * XREFs of KiUmsFastReturnToUser @ 0x1401D0700
 * Callers:
 *     KiUmsTrapEntry @ 0x1401D0B80 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x1401D0D80 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x1401D0F40 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x1401CFE00 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0700 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x1401D0700
 * Reason: Hex-Rays returned no pseudocode for 0x1401D0700
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D0700: sub     rsp, 28h
 * 00000001401D0704: mov     rbx, gs:188h
 * 00000001401D070D: mov     rcx, [rbx+90h]
 * 00000001401D0714: lea     rbp, [rcx+80h]
 * 00000001401D071B: mov     rax, cr8
 * 00000001401D071F: or      al, [rbx+24Ah]
 * 00000001401D0725: or      eax, [rbx+1E4h]
 * 00000001401D072B: jz      short loc_1401D0761
 * 00000001401D072D: mov     ecx, 4Ah ; 'J'
 * 00000001401D0732: xor     r9d, r9d
 * 00000001401D0735: mov     r8, cr8
 * 00000001401D0739: or      r8d, r8d
 * 00000001401D073C: jnz     short loc_1401D0752
 * 00000001401D073E: mov     ecx, 1
 * 00000001401D0743: movzx   r8d, byte ptr [rbx+24Ah]
 * 00000001401D074B: mov     r9d, [rbx+1E4h]
 * 00000001401D0752: mov     rdx, [rbp+0E8h]
 * 00000001401D0759: mov     r10, rbp
 * 00000001401D075C: call    KiBugCheckDispatch
 * 00000001401D0761: cli
 * 00000001401D0762: mov     rcx, gs:188h
 * 00000001401D076B: test    byte ptr [rcx+0C2h], 3
 * 00000001401D0772: jz      short loc_1401D07CD
 * 00000001401D0774: mov     [rbp-50h], rax
 * 00000001401D0778: xor     eax, eax
 * 00000001401D077A: mov     [rbp-48h], rax
 * 00000001401D077E: mov     [rbp-40h], rax
 * 00000001401D0782: mov     [rbp-38h], rax
 * 00000001401D0786: mov     [rbp-30h], rax
 * 00000001401D078A: mov     [rbp-28h], rax
 * 00000001401D078E: mov     [rbp-20h], rax
 * 00000001401D0792: pxor    xmm0, xmm0
 * 00000001401D0796: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D079A: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401D079E: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401D07A2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401D07A6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401D07AA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401D07AE: mov     ecx, 1
 * 00000001401D07B3: mov     cr8, rcx
 * 00000001401D07B7: sti
 * 00000001401D07B8: call    KiInitiateUserApc
 * 00000001401D07BD: cli
 * 00000001401D07BE: mov     ecx, 0
 * 00000001401D07C3: mov     cr8, rcx
 * 00000001401D07C7: mov     rax, [rbp-50h]
 * 00000001401D07CB: jmp     short loc_1401D0762
 * 00000001401D07CD: test    byte ptr gs:86Ch, 2
 * 00000001401D07D6: jz      short loc_1401D07E7
 * 00000001401D07D8: mov     [rbp-50h], rax
 * 00000001401D07DC: xor     ecx, ecx
 * 00000001401D07DE: call    KiUpdateStibpPairing
 * 00000001401D07E3: mov     rax, [rbp-50h]
 * 00000001401D07E7: mov     rcx, gs:188h
 * 00000001401D07F0: test    dword ptr [rcx], 8000000h
 * 00000001401D07F6: jz      short loc_1401D0837
 * 00000001401D07F8: mov     [rbp-50h], rax
 * 00000001401D07FC: xor     eax, eax
 * 00000001401D07FE: mov     [rbp-48h], rax
 * 00000001401D0802: mov     [rbp-40h], rax
 * 00000001401D0806: mov     [rbp-38h], rax
 * 00000001401D080A: mov     [rbp-30h], rax
 * 00000001401D080E: mov     [rbp-28h], rax
 * 00000001401D0812: mov     [rbp-20h], rax
 * 00000001401D0816: pxor    xmm0, xmm0
 * 00000001401D081A: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D081E: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401D0822: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401D0826: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401D082A: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401D082E: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401D0832: call    KiRestoreSetContextState
 * 00000001401D0837: mov     rcx, gs:188h
 * 00000001401D0840: test    dword ptr [rcx], 40010000h
 * 00000001401D0846: jz      short loc_1401D0875
 * 00000001401D0848: mov     [rbp-50h], rax
 * 00000001401D084C: test    byte ptr [rcx+2], 1
 * 00000001401D0850: jz      short loc_1401D0860
 * 00000001401D0852: call    KiCopyCounters
 * 00000001401D0857: mov     rcx, gs:188h
 * 00000001401D0860: test    byte ptr [rcx+3], 40h
 * 00000001401D0864: jz      short loc_1401D0871
 * 00000001401D0866: lea     rsp, [rbp-80h]
 * 00000001401D086A: xor     ecx, ecx
 * 00000001401D086C: call    KiUmsExit
 * 00000001401D0871: mov     rax, [rbp-50h]
 * 00000001401D0875: ldmxcsr dword ptr [rbp-54h]
 * 00000001401D0879: xor     r10, r10
 * 00000001401D087C: cmp     word ptr [rbp+80h], 0
 * 00000001401D0884: jz      short loc_1401D08C7
 * 00000001401D0886: mov     [rbp-50h], rax
 * 00000001401D088A: call    KiRestoreDebugRegisterState
 * 00000001401D088F: mov     rax, gs:188h
 * 00000001401D0898: mov     rax, [rax+0B8h]
 * 00000001401D089F: mov     rax, [rax+2C8h]
 * 00000001401D08A6: or      rax, rax
 * 00000001401D08A9: jz      short loc_1401D08C3
 * 00000001401D08AB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001401D08B3: jnz     short loc_1401D08C3
 * 00000001401D08B5: mov     r10, [rbp+0E8h]
 * 00000001401D08BC: mov     [rbp+0E8h], rax
 * 00000001401D08C3: mov     rax, [rbp-50h]
 * 00000001401D08C7: mov     [rbp-50h], rax
 * 00000001401D08CB: mov     byte ptr gs:856h, 0
 * 00000001401D08D4: movzx   eax, word ptr gs:86Ah
 * 00000001401D08DD: cmp     gs:864h, ax
 * 00000001401D08E6: jz      short loc_1401D08FA
 * 00000001401D08E8: mov     gs:864h, ax
 * 00000001401D08F1: mov     ecx, 48h ; 'H'
 * 00000001401D08F6: xor     edx, edx
 * 00000001401D08F8: wrmsr
 * 00000001401D08FA: btr     word ptr gs:860h, 2
 * 00000001401D0905: jnb     short loc_1401D0915
 * 00000001401D0907: mov     eax, 1
 * 00000001401D090C: xor     edx, edx
 * 00000001401D090E: mov     ecx, 49h ; 'I'
 * 00000001401D0913: wrmsr
 * 00000001401D0915: btr     word ptr gs:860h, 5
 * 00000001401D0920: jnb     loc_1401D0A4B
 * 00000001401D0926: call    loc_1401D0A39
 * 00000001401D092B: add     rsp, 8
 * 00000001401D092F: call    loc_1401D0A42
 * 00000001401D0934: add     rsp, 8
 * 00000001401D0938: call    loc_1401D092B
 * 00000001401D093D: add     rsp, 8
 * 00000001401D0941: call    loc_1401D0934
 * 00000001401D0946: add     rsp, 8
 * 00000001401D094A: call    loc_1401D093D
 * 00000001401D094F: add     rsp, 8
 * 00000001401D0953: call    loc_1401D0946
 * 00000001401D0958: add     rsp, 8
 * 00000001401D095C: call    loc_1401D094F
 * 00000001401D0961: add     rsp, 8
 * 00000001401D0965: call    loc_1401D0958
 * 00000001401D096A: add     rsp, 8
 * 00000001401D096E: call    loc_1401D0961
 * 00000001401D0973: add     rsp, 8
 * 00000001401D0977: call    loc_1401D096A
 * 00000001401D097C: add     rsp, 8
 * 00000001401D0980: call    loc_1401D0973
 * 00000001401D0985: add     rsp, 8
 * 00000001401D0989: call    loc_1401D097C
 * 00000001401D098E: add     rsp, 8
 * 00000001401D0992: call    loc_1401D0985
 * 00000001401D0997: add     rsp, 8
 * 00000001401D099B: call    loc_1401D098E
 * 00000001401D09A0: add     rsp, 8
 * 00000001401D09A4: call    loc_1401D0997
 * 00000001401D09A9: add     rsp, 8
 * 00000001401D09AD: call    loc_1401D09A0
 * 00000001401D09B2: add     rsp, 8
 * 00000001401D09B6: call    loc_1401D09A9
 * 00000001401D09BB: add     rsp, 8
 * 00000001401D09BF: call    loc_1401D09B2
 * 00000001401D09C4: add     rsp, 8
 * 00000001401D09C8: call    loc_1401D09BB
 * 00000001401D09CD: add     rsp, 8
 * 00000001401D09D1: call    loc_1401D09C4
 * 00000001401D09D6: add     rsp, 8
 * 00000001401D09DA: call    loc_1401D09CD
 * 00000001401D09DF: add     rsp, 8
 * 00000001401D09E3: call    loc_1401D09D6
 * 00000001401D09E8: add     rsp, 8
 * 00000001401D09EC: call    loc_1401D09DF
 * 00000001401D09F1: add     rsp, 8
 * 00000001401D09F5: call    loc_1401D09E8
 * 00000001401D09FA: add     rsp, 8
 * 00000001401D09FE: call    loc_1401D09F1
 * 00000001401D0A03: add     rsp, 8
 * 00000001401D0A07: call    loc_1401D09FA
 * 00000001401D0A0C: add     rsp, 8
 * 00000001401D0A10: call    loc_1401D0A03
 * 00000001401D0A15: add     rsp, 8
 * 00000001401D0A19: call    loc_1401D0A0C
 * 00000001401D0A1E: add     rsp, 8
 * 00000001401D0A22: call    loc_1401D0A15
 * 00000001401D0A27: add     rsp, 8
 * 00000001401D0A2B: call    loc_1401D0A1E
 * 00000001401D0A30: add     rsp, 8
 * 00000001401D0A34: call    loc_1401D0A27
 * 00000001401D0A39: add     rsp, 8
 * 00000001401D0A3D: call    loc_1401D0A30
 * 00000001401D0A42: add     rsp, 8
 * 00000001401D0A46: mov     eax, 0DADAh
 * 00000001401D0A4B: test    word ptr gs:860h, 80h
 * 00000001401D0A56: jz      short loc_1401D0A64
 * 00000001401D0A58: xor     eax, eax
 * 00000001401D0A5A: xor     edx, edx
 * 00000001401D0A5C: mov     ecx, 1
 * 00000001401D0A61: div     rcx
 * 00000001401D0A64: mov     rax, [rbp-50h]
 * 00000001401D0A68: mov     r8, [rbp+100h]
 * 00000001401D0A6F: mov     r9, [rbp+0D8h]
 * 00000001401D0A76: xor     edx, edx
 * 00000001401D0A78: pxor    xmm0, xmm0
 * 00000001401D0A7C: pxor    xmm1, xmm1
 * 00000001401D0A80: pxor    xmm2, xmm2
 * 00000001401D0A84: pxor    xmm3, xmm3
 * 00000001401D0A88: pxor    xmm4, xmm4
 * 00000001401D0A8C: pxor    xmm5, xmm5
 * 00000001401D0A90: mov     rcx, [rbp+0E8h]
 * 00000001401D0A97: mov     r11, [rbp+0F8h]
 * 00000001401D0A9E: test    cs:KiKvaShadow, 1
 * 00000001401D0AA5: jnz     KiKernelSysretExit
 * 00000001401D0AAB: mov     rbp, r9
 * 00000001401D0AAE: mov     rsp, r8
 * 00000001401D0AB1: test    word ptr gs:860h, 100h
 * 00000001401D0ABC: jz      short loc_1401D0AC7
 * 00000001401D0ABE: verw    word ptr gs:701Ch
 * 00000001401D0AC7: swapgs
 * 00000001401D0ACA: sysret
 * 00000001401D0ACD: retn
 */
