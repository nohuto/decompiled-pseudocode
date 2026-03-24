/*
 * XREFs of KiDpcInterrupt @ 0x1401CA870
 * Callers:
 *     KiDpcInterruptShadow @ 0x140350F00 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1401CA870 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x1401CB450 (KiDispatchInterrupt.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1401CA870
 * Reason: Hex-Rays returned no pseudocode for 0x1401CA870
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CA870: sub     rsp, 8
 * 00000001401CA874: push    rbp
 * 00000001401CA875: push    rsi
 * 00000001401CA876: sub     rsp, 150h
 * 00000001401CA87D: lea     rbp, [rsp+80h]
 * 00000001401CA885: mov     [rbp+0E8h+var_13D], 0
 * 00000001401CA889: mov     [rbp+0E8h+var_138], rax
 * 00000001401CA88D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CA891: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CA895: mov     [rbp+0E8h+var_120], r8
 * 00000001401CA899: mov     [rbp+0E8h+var_118], r9
 * 00000001401CA89D: mov     [rbp+0E8h+var_110], r10
 * 00000001401CA8A1: mov     [rbp+0E8h+var_108], r11
 * 00000001401CA8A5: test    [rbp+0E8h+arg_0], 1
 * 00000001401CA8AC: jnz     short loc_1401CA8DB
 * 00000001401CA8AE: lfence
 * 00000001401CA8B1: test    byte ptr gs:278h, 1
 * 00000001401CA8BA: jnz     short loc_1401CA8C4
 * 00000001401CA8BC: lfence
 * 00000001401CA8BF: jmp     loc_1401CAAD7
 * 00000001401CA8C4: movzx   eax, byte ptr gs:27Ah
 * 00000001401CA8CD: mov     ecx, 48h ; 'H'
 * 00000001401CA8D2: xor     edx, edx
 * 00000001401CA8D4: wrmsr
 * 00000001401CA8D6: jmp     loc_1401CAAD7
 * 00000001401CA8DB: test    cs:KiKvaShadow, 1
 * 00000001401CA8E2: jnz     short loc_1401CA8E7
 * 00000001401CA8E4: swapgs
 * 00000001401CA8E7: lfence
 * 00000001401CA8EA: mov     r10, gs:188h
 * 00000001401CA8F3: mov     rcx, gs:188h
 * 00000001401CA8FC: mov     rcx, [rcx+220h]
 * 00000001401CA903: mov     rcx, [rcx+860h]
 * 00000001401CA90A: mov     gs:270h, rcx
 * 00000001401CA913: mov     cl, gs:850h
 * 00000001401CA91B: mov     gs:851h, cl
 * 00000001401CA923: mov     cl, gs:278h
 * 00000001401CA92B: mov     gs:852h, cl
 * 00000001401CA933: movzx   eax, byte ptr gs:27Bh
 * 00000001401CA93C: cmp     gs:27Ah, al
 * 00000001401CA944: jz      short loc_1401CA957
 * 00000001401CA946: mov     gs:27Ah, al
 * 00000001401CA94E: mov     ecx, 48h ; 'H'
 * 00000001401CA953: xor     edx, edx
 * 00000001401CA955: wrmsr
 * 00000001401CA957: movzx   edx, byte ptr gs:278h
 * 00000001401CA960: test    edx, 8
 * 00000001401CA966: jz      short loc_1401CA97B
 * 00000001401CA968: mov     eax, 1
 * 00000001401CA96D: xor     edx, edx
 * 00000001401CA96F: mov     ecx, 49h ; 'I'
 * 00000001401CA974: wrmsr
 * 00000001401CA976: jmp     loc_1401CAAB9
 * 00000001401CA97B: test    edx, 2
 * 00000001401CA981: jz      loc_1401CAAB6
 * 00000001401CA987: test    byte ptr gs:279h, 4
 * 00000001401CA990: jnz     loc_1401CAAB6
 * 00000001401CA996: call    loc_1401CAAA9
 * 00000001401CA99B: add     rsp, 8
 * 00000001401CA99F: call    loc_1401CAAB2
 * 00000001401CA9A4: add     rsp, 8
 * 00000001401CA9A8: call    loc_1401CA99B
 * 00000001401CA9AD: add     rsp, 8
 * 00000001401CA9B1: call    loc_1401CA9A4
 * 00000001401CA9B6: add     rsp, 8
 * 00000001401CA9BA: call    loc_1401CA9AD
 * 00000001401CA9BF: add     rsp, 8
 * 00000001401CA9C3: call    loc_1401CA9B6
 * 00000001401CA9C8: add     rsp, 8
 * 00000001401CA9CC: call    loc_1401CA9BF
 * 00000001401CA9D1: add     rsp, 8
 * 00000001401CA9D5: call    loc_1401CA9C8
 * 00000001401CA9DA: add     rsp, 8
 * 00000001401CA9DE: call    loc_1401CA9D1
 * 00000001401CA9E3: add     rsp, 8
 * 00000001401CA9E7: call    loc_1401CA9DA
 * 00000001401CA9EC: add     rsp, 8
 * 00000001401CA9F0: call    loc_1401CA9E3
 * 00000001401CA9F5: add     rsp, 8
 * 00000001401CA9F9: call    loc_1401CA9EC
 * 00000001401CA9FE: add     rsp, 8
 * 00000001401CAA02: call    loc_1401CA9F5
 * 00000001401CAA07: add     rsp, 8
 * 00000001401CAA0B: call    loc_1401CA9FE
 * 00000001401CAA10: add     rsp, 8
 * 00000001401CAA14: call    loc_1401CAA07
 * 00000001401CAA19: add     rsp, 8
 * 00000001401CAA1D: call    loc_1401CAA10
 * 00000001401CAA22: add     rsp, 8
 * 00000001401CAA26: call    loc_1401CAA19
 * 00000001401CAA2B: add     rsp, 8
 * 00000001401CAA2F: call    loc_1401CAA22
 * 00000001401CAA34: add     rsp, 8
 * 00000001401CAA38: call    loc_1401CAA2B
 * 00000001401CAA3D: add     rsp, 8
 * 00000001401CAA41: call    loc_1401CAA34
 * 00000001401CAA46: add     rsp, 8
 * 00000001401CAA4A: call    loc_1401CAA3D
 * 00000001401CAA4F: add     rsp, 8
 * 00000001401CAA53: call    loc_1401CAA46
 * 00000001401CAA58: add     rsp, 8
 * 00000001401CAA5C: call    loc_1401CAA4F
 * 00000001401CAA61: add     rsp, 8
 * 00000001401CAA65: call    loc_1401CAA58
 * 00000001401CAA6A: add     rsp, 8
 * 00000001401CAA6E: call    loc_1401CAA61
 * 00000001401CAA73: add     rsp, 8
 * 00000001401CAA77: call    loc_1401CAA6A
 * 00000001401CAA7C: add     rsp, 8
 * 00000001401CAA80: call    loc_1401CAA73
 * 00000001401CAA85: add     rsp, 8
 * 00000001401CAA89: call    loc_1401CAA7C
 * 00000001401CAA8E: add     rsp, 8
 * 00000001401CAA92: call    loc_1401CAA85
 * 00000001401CAA97: add     rsp, 8
 * 00000001401CAA9B: call    loc_1401CAA8E
 * 00000001401CAAA0: add     rsp, 8
 * 00000001401CAAA4: call    loc_1401CAA97
 * 00000001401CAAA9: add     rsp, 8
 * 00000001401CAAAD: call    loc_1401CAAA0
 * 00000001401CAAB2: add     rsp, 8
 * 00000001401CAAB6: lfence
 * 00000001401CAAB9: mov     byte ptr gs:853h, 0
 * 00000001401CAAC2: test    byte ptr [r10+3], 3
 * 00000001401CAAC7: mov     [rbp+0E8h+var_68], 0
 * 00000001401CAAD0: jz      short loc_1401CAAD7
 * 00000001401CAAD2: call    KiSaveDebugRegisterState
 * 00000001401CAAD7: cld
 * 00000001401CAAD8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CAADC: ldmxcsr dword ptr gs:180h
 * 00000001401CAAE5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CAAE9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CAAED: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CAAF1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CAAF5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CAAF9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CAAFD: xor     esi, esi
 * 00000001401CAAFF: inc     dword ptr gs:5D00h
 * 00000001401CAB07: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CAB0E: jz      short loc_1401CAB13
 * 00000001401CAB10: clac
 * 00000001401CAB13: mov     ecx, 2
 * 00000001401CAB18: cmp     cs:KiIrqlFlags, 0
 * 00000001401CAB1F: jz      short loc_1401CAB28
 * 00000001401CAB21: call    KzSetIrqlUnsafe
 * 00000001401CAB26: jmp     short loc_1401CAB30
 * 00000001401CAB28: mov     rax, cr8
 * 00000001401CAB2C: mov     cr8, rcx
 * 00000001401CAB30: mov     [rbp+0E8h+var_13F], al
 * 00000001401CAB33: mov     rcx, rsi
 * 00000001401CAB36: call    HalPerformEndOfInterrupt_0
 * 00000001401CAB3B: sti
 * 00000001401CAB3C: cmp     byte ptr gs:187h, 0
 * 00000001401CAB45: jnz     short loc_1401CAB5E
 * 00000001401CAB47: mov     al, [rbp+0E8h+var_13F]
 * 00000001401CAB4A: mov     rcx, gs:188h
 * 00000001401CAB53: mov     [rcx+186h], al
 * 00000001401CAB59: call    KiDispatchInterrupt
 * 00000001401CAB5E: cli
 * 00000001401CAB5F: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401CAB63: cmp     cs:KiIrqlFlags, 0
 * 00000001401CAB6A: jz      short loc_1401CAB73
 * 00000001401CAB6C: call    KzSetIrqlUnsafe
 * 00000001401CAB71: jmp     short loc_1401CAB77
 * 00000001401CAB73: mov     cr8, rcx
 * 00000001401CAB77: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401CAB7E: cli
 * 00000001401CAB7F: test    [rbp+0E8h+arg_0], 1
 * 00000001401CAB86: jz      loc_1401CACC5
 * 00000001401CAB8C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CAB93: jz      short loc_1401CAB98
 * 00000001401CAB95: stac
 * 00000001401CAB98: mov     rcx, gs:188h
 * 00000001401CABA1: test    byte ptr [rcx+0C2h], 3
 * 00000001401CABA8: jz      short loc_1401CABC5
 * 00000001401CABAA: mov     ecx, 1
 * 00000001401CABAF: mov     cr8, rcx
 * 00000001401CABB3: sti
 * 00000001401CABB4: call    KiInitiateUserApc
 * 00000001401CABB9: cli
 * 00000001401CABBA: mov     ecx, 0
 * 00000001401CABBF: mov     cr8, rcx
 * 00000001401CABC3: jmp     short loc_1401CAB98
 * 00000001401CABC5: test    byte ptr gs:27Eh, 2
 * 00000001401CABCE: jz      short loc_1401CABD7
 * 00000001401CABD0: xor     ecx, ecx
 * 00000001401CABD2: call    KiUpdateStibpPairing
 * 00000001401CABD7: mov     rcx, gs:188h
 * 00000001401CABE0: test    dword ptr [rcx], 8000000h
 * 00000001401CABE6: jz      short loc_1401CABED
 * 00000001401CABE8: call    KiRestoreSetContextState
 * 00000001401CABED: mov     rcx, gs:188h
 * 00000001401CABF6: test    dword ptr [rcx], 40010000h
 * 00000001401CABFC: jz      short loc_1401CAC12
 * 00000001401CABFE: test    byte ptr [rcx+2], 1
 * 00000001401CAC02: jz      short loc_1401CAC12
 * 00000001401CAC04: call    KiCopyCounters
 * 00000001401CAC09: mov     rcx, gs:188h
 * 00000001401CAC12: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CAC16: cmp     [rbp+0E8h+var_68], 0
 * 00000001401CAC1E: jz      short loc_1401CAC25
 * 00000001401CAC20: call    KiRestoreDebugRegisterState
 * 00000001401CAC25: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CAC29: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CAC2D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CAC31: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CAC35: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CAC39: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CAC3D: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CAC41: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CAC45: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CAC49: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CAC4D: mov     byte ptr gs:853h, 0
 * 00000001401CAC56: movzx   eax, byte ptr gs:27Dh
 * 00000001401CAC5F: cmp     gs:27Ah, al
 * 00000001401CAC67: jz      short loc_1401CAC7A
 * 00000001401CAC69: mov     gs:27Ah, al
 * 00000001401CAC71: mov     ecx, 48h ; 'H'
 * 00000001401CAC76: xor     edx, edx
 * 00000001401CAC78: wrmsr
 * 00000001401CAC7A: btr     word ptr gs:278h, 2
 * 00000001401CAC85: jnb     short loc_1401CAC95
 * 00000001401CAC87: mov     eax, 1
 * 00000001401CAC8C: xor     edx, edx
 * 00000001401CAC8E: mov     ecx, 49h ; 'I'
 * 00000001401CAC93: wrmsr
 * 00000001401CAC95: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CAC99: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CAC9D: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CACA1: mov     rsp, rbp
 * 00000001401CACA4: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CACAB: add     rsp, 0E8h
 * 00000001401CACB2: test    cs:KiKvaShadow, 1
 * 00000001401CACB9: jz      short loc_1401CACC0
 * 00000001401CACBB: jmp     KiKernelExit
 * 00000001401CACC0: swapgs
 * 00000001401CACC3: iretq
 * 00000001401CACC5: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CACC9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CACCD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CACD1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CACD5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CACD9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CACDD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CACE1: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CACE5: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CACE9: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CACED: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CACF1: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CACF5: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CACF9: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CACFD: mov     rsp, rbp
 * 00000001401CAD00: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CAD07: add     rsp, 0E8h
 * 00000001401CAD0E: iretq
 */
