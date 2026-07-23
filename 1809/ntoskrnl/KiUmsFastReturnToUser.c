/*
 * XREFs of KiUmsFastReturnToUser @ 0x1401D0800
 * Callers:
 *     KiUmsTrapEntry @ 0x1401D0C80 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x1401D0E80 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x1401D1040 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0800 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x1401D0800
 * Reason: Hex-Rays returned no pseudocode for 0x1401D0800
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D0800: sub     rsp, 28h
 * 00000001401D0804: mov     rbx, gs:188h
 * 00000001401D080D: mov     rcx, [rbx+90h]
 * 00000001401D0814: lea     rbp, [rcx+80h]
 * 00000001401D081B: mov     rax, cr8
 * 00000001401D081F: or      al, [rbx+24Ah]
 * 00000001401D0825: or      eax, [rbx+1E4h]
 * 00000001401D082B: jz      short loc_1401D0861
 * 00000001401D082D: mov     ecx, 4Ah ; 'J'
 * 00000001401D0832: xor     r9d, r9d
 * 00000001401D0835: mov     r8, cr8
 * 00000001401D0839: or      r8d, r8d
 * 00000001401D083C: jnz     short loc_1401D0852
 * 00000001401D083E: mov     ecx, 1
 * 00000001401D0843: movzx   r8d, byte ptr [rbx+24Ah]
 * 00000001401D084B: mov     r9d, [rbx+1E4h]
 * 00000001401D0852: mov     rdx, [rbp+0E8h]
 * 00000001401D0859: mov     r10, rbp
 * 00000001401D085C: call    KiBugCheckDispatch
 * 00000001401D0861: cli
 * 00000001401D0862: mov     rcx, gs:188h
 * 00000001401D086B: test    byte ptr [rcx+0C2h], 3
 * 00000001401D0872: jz      short loc_1401D08CD
 * 00000001401D0874: mov     [rbp-50h], rax
 * 00000001401D0878: xor     eax, eax
 * 00000001401D087A: mov     [rbp-48h], rax
 * 00000001401D087E: mov     [rbp-40h], rax
 * 00000001401D0882: mov     [rbp-38h], rax
 * 00000001401D0886: mov     [rbp-30h], rax
 * 00000001401D088A: mov     [rbp-28h], rax
 * 00000001401D088E: mov     [rbp-20h], rax
 * 00000001401D0892: pxor    xmm0, xmm0
 * 00000001401D0896: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D089A: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401D089E: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401D08A2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401D08A6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401D08AA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401D08AE: mov     ecx, 1
 * 00000001401D08B3: mov     cr8, rcx
 * 00000001401D08B7: sti
 * 00000001401D08B8: call    KiInitiateUserApc
 * 00000001401D08BD: cli
 * 00000001401D08BE: mov     ecx, 0
 * 00000001401D08C3: mov     cr8, rcx
 * 00000001401D08C7: mov     rax, [rbp-50h]
 * 00000001401D08CB: jmp     short loc_1401D0862
 * 00000001401D08CD: test    byte ptr gs:86Ch, 2
 * 00000001401D08D6: jz      short loc_1401D08E7
 * 00000001401D08D8: mov     [rbp-50h], rax
 * 00000001401D08DC: xor     ecx, ecx
 * 00000001401D08DE: call    KiUpdateStibpPairing
 * 00000001401D08E3: mov     rax, [rbp-50h]
 * 00000001401D08E7: mov     rcx, gs:188h
 * 00000001401D08F0: test    dword ptr [rcx], 8000000h
 * 00000001401D08F6: jz      short loc_1401D0937
 * 00000001401D08F8: mov     [rbp-50h], rax
 * 00000001401D08FC: xor     eax, eax
 * 00000001401D08FE: mov     [rbp-48h], rax
 * 00000001401D0902: mov     [rbp-40h], rax
 * 00000001401D0906: mov     [rbp-38h], rax
 * 00000001401D090A: mov     [rbp-30h], rax
 * 00000001401D090E: mov     [rbp-28h], rax
 * 00000001401D0912: mov     [rbp-20h], rax
 * 00000001401D0916: pxor    xmm0, xmm0
 * 00000001401D091A: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D091E: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401D0922: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401D0926: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401D092A: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401D092E: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401D0932: call    KiRestoreSetContextState
 * 00000001401D0937: mov     rcx, gs:188h
 * 00000001401D0940: test    dword ptr [rcx], 40010000h
 * 00000001401D0946: jz      short loc_1401D0975
 * 00000001401D0948: mov     [rbp-50h], rax
 * 00000001401D094C: test    byte ptr [rcx+2], 1
 * 00000001401D0950: jz      short loc_1401D0960
 * 00000001401D0952: call    KiCopyCounters
 * 00000001401D0957: mov     rcx, gs:188h
 * 00000001401D0960: test    byte ptr [rcx+3], 40h
 * 00000001401D0964: jz      short loc_1401D0971
 * 00000001401D0966: lea     rsp, [rbp-80h]
 * 00000001401D096A: xor     ecx, ecx
 * 00000001401D096C: call    KiUmsExit
 * 00000001401D0971: mov     rax, [rbp-50h]
 * 00000001401D0975: ldmxcsr dword ptr [rbp-54h]
 * 00000001401D0979: xor     r10, r10
 * 00000001401D097C: cmp     word ptr [rbp+80h], 0
 * 00000001401D0984: jz      short loc_1401D09C7
 * 00000001401D0986: mov     [rbp-50h], rax
 * 00000001401D098A: call    KiRestoreDebugRegisterState
 * 00000001401D098F: mov     rax, gs:188h
 * 00000001401D0998: mov     rax, [rax+0B8h]
 * 00000001401D099F: mov     rax, [rax+2C8h]
 * 00000001401D09A6: or      rax, rax
 * 00000001401D09A9: jz      short loc_1401D09C3
 * 00000001401D09AB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001401D09B3: jnz     short loc_1401D09C3
 * 00000001401D09B5: mov     r10, [rbp+0E8h]
 * 00000001401D09BC: mov     [rbp+0E8h], rax
 * 00000001401D09C3: mov     rax, [rbp-50h]
 * 00000001401D09C7: mov     [rbp-50h], rax
 * 00000001401D09CB: mov     byte ptr gs:856h, 0
 * 00000001401D09D4: movzx   eax, word ptr gs:86Ah
 * 00000001401D09DD: cmp     gs:864h, ax
 * 00000001401D09E6: jz      short loc_1401D09FA
 * 00000001401D09E8: mov     gs:864h, ax
 * 00000001401D09F1: mov     ecx, 48h ; 'H'
 * 00000001401D09F6: xor     edx, edx
 * 00000001401D09F8: wrmsr
 * 00000001401D09FA: btr     word ptr gs:860h, 2
 * 00000001401D0A05: jnb     short loc_1401D0A15
 * 00000001401D0A07: mov     eax, 1
 * 00000001401D0A0C: xor     edx, edx
 * 00000001401D0A0E: mov     ecx, 49h ; 'I'
 * 00000001401D0A13: wrmsr
 * 00000001401D0A15: btr     word ptr gs:860h, 5
 * 00000001401D0A20: jnb     loc_1401D0B4B
 * 00000001401D0A26: call    loc_1401D0B39
 * 00000001401D0A2B: add     rsp, 8
 * 00000001401D0A2F: call    loc_1401D0B42
 * 00000001401D0A34: add     rsp, 8
 * 00000001401D0A38: call    loc_1401D0A2B
 * 00000001401D0A3D: add     rsp, 8
 * 00000001401D0A41: call    loc_1401D0A34
 * 00000001401D0A46: add     rsp, 8
 * 00000001401D0A4A: call    loc_1401D0A3D
 * 00000001401D0A4F: add     rsp, 8
 * 00000001401D0A53: call    loc_1401D0A46
 * 00000001401D0A58: add     rsp, 8
 * 00000001401D0A5C: call    loc_1401D0A4F
 * 00000001401D0A61: add     rsp, 8
 * 00000001401D0A65: call    loc_1401D0A58
 * 00000001401D0A6A: add     rsp, 8
 * 00000001401D0A6E: call    loc_1401D0A61
 * 00000001401D0A73: add     rsp, 8
 * 00000001401D0A77: call    loc_1401D0A6A
 * 00000001401D0A7C: add     rsp, 8
 * 00000001401D0A80: call    loc_1401D0A73
 * 00000001401D0A85: add     rsp, 8
 * 00000001401D0A89: call    loc_1401D0A7C
 * 00000001401D0A8E: add     rsp, 8
 * 00000001401D0A92: call    loc_1401D0A85
 * 00000001401D0A97: add     rsp, 8
 * 00000001401D0A9B: call    loc_1401D0A8E
 * 00000001401D0AA0: add     rsp, 8
 * 00000001401D0AA4: call    loc_1401D0A97
 * 00000001401D0AA9: add     rsp, 8
 * 00000001401D0AAD: call    loc_1401D0AA0
 * 00000001401D0AB2: add     rsp, 8
 * 00000001401D0AB6: call    loc_1401D0AA9
 * 00000001401D0ABB: add     rsp, 8
 * 00000001401D0ABF: call    loc_1401D0AB2
 * 00000001401D0AC4: add     rsp, 8
 * 00000001401D0AC8: call    loc_1401D0ABB
 * 00000001401D0ACD: add     rsp, 8
 * 00000001401D0AD1: call    loc_1401D0AC4
 * 00000001401D0AD6: add     rsp, 8
 * 00000001401D0ADA: call    loc_1401D0ACD
 * 00000001401D0ADF: add     rsp, 8
 * 00000001401D0AE3: call    loc_1401D0AD6
 * 00000001401D0AE8: add     rsp, 8
 * 00000001401D0AEC: call    loc_1401D0ADF
 * 00000001401D0AF1: add     rsp, 8
 * 00000001401D0AF5: call    loc_1401D0AE8
 * 00000001401D0AFA: add     rsp, 8
 * 00000001401D0AFE: call    loc_1401D0AF1
 * 00000001401D0B03: add     rsp, 8
 * 00000001401D0B07: call    loc_1401D0AFA
 * 00000001401D0B0C: add     rsp, 8
 * 00000001401D0B10: call    loc_1401D0B03
 * 00000001401D0B15: add     rsp, 8
 * 00000001401D0B19: call    loc_1401D0B0C
 * 00000001401D0B1E: add     rsp, 8
 * 00000001401D0B22: call    loc_1401D0B15
 * 00000001401D0B27: add     rsp, 8
 * 00000001401D0B2B: call    loc_1401D0B1E
 * 00000001401D0B30: add     rsp, 8
 * 00000001401D0B34: call    loc_1401D0B27
 * 00000001401D0B39: add     rsp, 8
 * 00000001401D0B3D: call    loc_1401D0B30
 * 00000001401D0B42: add     rsp, 8
 * 00000001401D0B46: mov     eax, 0DADAh
 * 00000001401D0B4B: test    word ptr gs:860h, 80h
 * 00000001401D0B56: jz      short loc_1401D0B64
 * 00000001401D0B58: xor     eax, eax
 * 00000001401D0B5A: xor     edx, edx
 * 00000001401D0B5C: mov     ecx, 1
 * 00000001401D0B61: div     rcx
 * 00000001401D0B64: mov     rax, [rbp-50h]
 * 00000001401D0B68: mov     r8, [rbp+100h]
 * 00000001401D0B6F: mov     r9, [rbp+0D8h]
 * 00000001401D0B76: xor     edx, edx
 * 00000001401D0B78: pxor    xmm0, xmm0
 * 00000001401D0B7C: pxor    xmm1, xmm1
 * 00000001401D0B80: pxor    xmm2, xmm2
 * 00000001401D0B84: pxor    xmm3, xmm3
 * 00000001401D0B88: pxor    xmm4, xmm4
 * 00000001401D0B8C: pxor    xmm5, xmm5
 * 00000001401D0B90: mov     rcx, [rbp+0E8h]
 * 00000001401D0B97: mov     r11, [rbp+0F8h]
 * 00000001401D0B9E: test    cs:KiKvaShadow, 1
 * 00000001401D0BA5: jnz     KiKernelSysretExit
 * 00000001401D0BAB: mov     rbp, r9
 * 00000001401D0BAE: mov     rsp, r8
 * 00000001401D0BB1: test    word ptr gs:860h, 100h
 * 00000001401D0BBC: jz      short loc_1401D0BC7
 * 00000001401D0BBE: verw    word ptr gs:701Ch
 * 00000001401D0BC7: swapgs
 * 00000001401D0BCA: sysret
 * 00000001401D0BCD: retn
 */
