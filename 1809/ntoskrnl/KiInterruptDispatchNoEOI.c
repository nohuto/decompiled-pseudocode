/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1401BE870
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BDA70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE870 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1401BE870
 * Reason: Hex-Rays returned no pseudocode for 0x1401BE870
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BE870: mov     rdx, rsp
 * 00000001401BE873: mov     rcx, gs:6458h
 * 00000001401BE87C: lea     rax, [rcx-6000h]
 * 00000001401BE883: cmp     rax, rsp
 * 00000001401BE886: ja      short loc_1401BE88D
 * 00000001401BE888: cmp     rsp, rcx
 * 00000001401BE88B: jb      short loc_1401BE899
 * 00000001401BE88D: cmp     cs:KiBugCheckActive, 0
 * 00000001401BE894: jnz     short loc_1401BE899
 * 00000001401BE896: mov     rsp, rcx
 * 00000001401BE899: sub     rsp, 20h
 * 00000001401BE89D: mov     [rsp+20h+var_10], rdx
 * 00000001401BE8A2: call    KiInterruptSubDispatchNoLock
 * 00000001401BE8A7: mov     rsp, [rsp+20h+var_10]
 * 00000001401BE8AC: mov     rcx, gs:20h
 * 00000001401BE8B5: cmp     byte ptr [rcx+20h], 1
 * 00000001401BE8B9: ja      short loc_1401BE935
 * 00000001401BE8BB: rdtsc
 * 00000001401BE8BD: shl     rdx, 20h
 * 00000001401BE8C1: or      rax, rdx
 * 00000001401BE8C4: sub     rax, [rcx+5BC0h]
 * 00000001401BE8CB: add     [rcx+5C38h], rax
 * 00000001401BE8D2: add     [rcx+5BC0h], rax
 * 00000001401BE8D9: mov     r8, rax
 * 00000001401BE8DC: mov     rax, [rcx+8]
 * 00000001401BE8E0: test    byte ptr [rax+2], 72h
 * 00000001401BE8E4: jz      short loc_1401BE8F9
 * 00000001401BE8E6: xor     edx, edx
 * 00000001401BE8E8: call    KiBeginThreadAccountingPeriod
 * 00000001401BE8ED: mov     rcx, gs:20h
 * 00000001401BE8F6: inc     byte ptr [rcx+20h]
 * 00000001401BE8F9: mov     dl, [rcx+6]
 * 00000001401BE8FC: and     byte ptr [rcx+6], 0
 * 00000001401BE900: cmp     byte ptr [rcx+7], 0
 * 00000001401BE904: jnz     short loc_1401BE935
 * 00000001401BE906: test    dl, dl
 * 00000001401BE908: jz      short loc_1401BE935
 * 00000001401BE90A: cmp     byte ptr [rbp-57h], 2
 * 00000001401BE90E: jnb     short loc_1401BE91B
 * 00000001401BE910: and     byte ptr [rcx+20h], 0
 * 00000001401BE914: call    KiDpcInterruptBypass
 * 00000001401BE919: jmp     short loc_1401BE938
 * 00000001401BE91B: mov     ecx, 2
 * 00000001401BE920: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BE927: nop     dword ptr [rax+rax+00h]
 * 00000001401BE92C: mov     rcx, gs:20h
 * 00000001401BE935: dec     byte ptr [rcx+20h]
 * 00000001401BE938: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BE93C: cmp     cs:KiIrqlFlags, 0
 * 00000001401BE943: jz      short loc_1401BE94C
 * 00000001401BE945: call    KzSetIrqlUnsafe
 * 00000001401BE94A: jmp     short loc_1401BE950
 * 00000001401BE94C: mov     cr8, rcx
 * 00000001401BE950: mov     rsi, [rbp+0D0h]
 * 00000001401BE957: test    byte ptr [rbp+0F0h], 1
 * 00000001401BE95E: jz      loc_1401BEBF4
 * 00000001401BE964: mov     rcx, gs:188h
 * 00000001401BE96D: test    byte ptr [rcx+0C2h], 3
 * 00000001401BE974: jz      short loc_1401BE991
 * 00000001401BE976: mov     ecx, 1
 * 00000001401BE97B: mov     cr8, rcx
 * 00000001401BE97F: sti
 * 00000001401BE980: call    KiInitiateUserApc
 * 00000001401BE985: cli
 * 00000001401BE986: mov     ecx, 0
 * 00000001401BE98B: mov     cr8, rcx
 * 00000001401BE98F: jmp     short loc_1401BE964
 * 00000001401BE991: test    byte ptr gs:86Ch, 2
 * 00000001401BE99A: jz      short loc_1401BE9A3
 * 00000001401BE99C: xor     ecx, ecx
 * 00000001401BE99E: call    KiUpdateStibpPairing
 * 00000001401BE9A3: mov     rcx, gs:188h
 * 00000001401BE9AC: test    dword ptr [rcx], 8000000h
 * 00000001401BE9B2: jz      short loc_1401BE9B9
 * 00000001401BE9B4: call    KiRestoreSetContextState
 * 00000001401BE9B9: mov     rcx, gs:188h
 * 00000001401BE9C2: test    dword ptr [rcx], 40010000h
 * 00000001401BE9C8: jz      short loc_1401BE9DE
 * 00000001401BE9CA: test    byte ptr [rcx+2], 1
 * 00000001401BE9CE: jz      short loc_1401BE9DE
 * 00000001401BE9D0: call    KiCopyCounters
 * 00000001401BE9D5: mov     rcx, gs:188h
 * 00000001401BE9DE: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE9E2: cmp     word ptr [rbp+80h], 0
 * 00000001401BE9EA: jz      short loc_1401BE9F1
 * 00000001401BE9EC: call    KiRestoreDebugRegisterState
 * 00000001401BE9F1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE9F5: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE9F9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE9FD: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BEA01: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BEA05: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BEA09: mov     r11, [rbp-20h]
 * 00000001401BEA0D: mov     r10, [rbp-28h]
 * 00000001401BEA11: mov     r9, [rbp-30h]
 * 00000001401BEA15: mov     r8, [rbp-38h]
 * 00000001401BEA19: mov     byte ptr gs:856h, 0
 * 00000001401BEA22: movzx   eax, word ptr gs:86Ah
 * 00000001401BEA2B: cmp     gs:864h, ax
 * 00000001401BEA34: jz      short loc_1401BEA48
 * 00000001401BEA36: mov     gs:864h, ax
 * 00000001401BEA3F: mov     ecx, 48h ; 'H'
 * 00000001401BEA44: xor     edx, edx
 * 00000001401BEA46: wrmsr
 * 00000001401BEA48: btr     word ptr gs:860h, 2
 * 00000001401BEA53: jnb     short loc_1401BEA63
 * 00000001401BEA55: mov     eax, 1
 * 00000001401BEA5A: xor     edx, edx
 * 00000001401BEA5C: mov     ecx, 49h ; 'I'
 * 00000001401BEA61: wrmsr
 * 00000001401BEA63: btr     word ptr gs:860h, 5
 * 00000001401BEA6E: jnb     loc_1401BEB99
 * 00000001401BEA74: call    loc_1401BEB87
 * 00000001401BEA79: add     rsp, 8
 * 00000001401BEA7D: call    loc_1401BEB90
 * 00000001401BEA82: add     rsp, 8
 * 00000001401BEA86: call    loc_1401BEA79
 * 00000001401BEA8B: add     rsp, 8
 * 00000001401BEA8F: call    loc_1401BEA82
 * 00000001401BEA94: add     rsp, 8
 * 00000001401BEA98: call    loc_1401BEA8B
 * 00000001401BEA9D: add     rsp, 8
 * 00000001401BEAA1: call    loc_1401BEA94
 * 00000001401BEAA6: add     rsp, 8
 * 00000001401BEAAA: call    loc_1401BEA9D
 * 00000001401BEAAF: add     rsp, 8
 * 00000001401BEAB3: call    loc_1401BEAA6
 * 00000001401BEAB8: add     rsp, 8
 * 00000001401BEABC: call    loc_1401BEAAF
 * 00000001401BEAC1: add     rsp, 8
 * 00000001401BEAC5: call    loc_1401BEAB8
 * 00000001401BEACA: add     rsp, 8
 * 00000001401BEACE: call    loc_1401BEAC1
 * 00000001401BEAD3: add     rsp, 8
 * 00000001401BEAD7: call    loc_1401BEACA
 * 00000001401BEADC: add     rsp, 8
 * 00000001401BEAE0: call    loc_1401BEAD3
 * 00000001401BEAE5: add     rsp, 8
 * 00000001401BEAE9: call    loc_1401BEADC
 * 00000001401BEAEE: add     rsp, 8
 * 00000001401BEAF2: call    loc_1401BEAE5
 * 00000001401BEAF7: add     rsp, 8
 * 00000001401BEAFB: call    loc_1401BEAEE
 * 00000001401BEB00: add     rsp, 8
 * 00000001401BEB04: call    loc_1401BEAF7
 * 00000001401BEB09: add     rsp, 8
 * 00000001401BEB0D: call    loc_1401BEB00
 * 00000001401BEB12: add     rsp, 8
 * 00000001401BEB16: call    loc_1401BEB09
 * 00000001401BEB1B: add     rsp, 8
 * 00000001401BEB1F: call    loc_1401BEB12
 * 00000001401BEB24: add     rsp, 8
 * 00000001401BEB28: call    loc_1401BEB1B
 * 00000001401BEB2D: add     rsp, 8
 * 00000001401BEB31: call    loc_1401BEB24
 * 00000001401BEB36: add     rsp, 8
 * 00000001401BEB3A: call    loc_1401BEB2D
 * 00000001401BEB3F: add     rsp, 8
 * 00000001401BEB43: call    loc_1401BEB36
 * 00000001401BEB48: add     rsp, 8
 * 00000001401BEB4C: call    loc_1401BEB3F
 * 00000001401BEB51: add     rsp, 8
 * 00000001401BEB55: call    loc_1401BEB48
 * 00000001401BEB5A: add     rsp, 8
 * 00000001401BEB5E: call    loc_1401BEB51
 * 00000001401BEB63: add     rsp, 8
 * 00000001401BEB67: call    loc_1401BEB5A
 * 00000001401BEB6C: add     rsp, 8
 * 00000001401BEB70: call    loc_1401BEB63
 * 00000001401BEB75: add     rsp, 8
 * 00000001401BEB79: call    loc_1401BEB6C
 * 00000001401BEB7E: add     rsp, 8
 * 00000001401BEB82: call    loc_1401BEB75
 * 00000001401BEB87: add     rsp, 8
 * 00000001401BEB8B: call    loc_1401BEB7E
 * 00000001401BEB90: add     rsp, 8
 * 00000001401BEB94: mov     eax, 0DADAh
 * 00000001401BEB99: test    word ptr gs:860h, 80h
 * 00000001401BEBA4: jz      short loc_1401BEBB2
 * 00000001401BEBA6: xor     eax, eax
 * 00000001401BEBA8: xor     edx, edx
 * 00000001401BEBAA: mov     ecx, 1
 * 00000001401BEBAF: div     rcx
 * 00000001401BEBB2: mov     rdx, [rbp-40h]
 * 00000001401BEBB6: mov     rcx, [rbp-48h]
 * 00000001401BEBBA: mov     rax, [rbp-50h]
 * 00000001401BEBBE: mov     rsp, rbp
 * 00000001401BEBC1: mov     rbp, [rbp+0D8h]
 * 00000001401BEBC8: add     rsp, 0E8h
 * 00000001401BEBCF: test    cs:KiKvaShadow, 1
 * 00000001401BEBD6: jz      short loc_1401BEBDD
 * 00000001401BEBD8: jmp     KiKernelExit
 * 00000001401BEBDD: test    word ptr gs:860h, 100h
 * 00000001401BEBE8: jz      short loc_1401BEBEF
 * 00000001401BEBEA: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BEBEF: swapgs
 * 00000001401BEBF2: iretq
 * 00000001401BEBF4: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BEBF8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BEBFC: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BEC00: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BEC04: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BEC08: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BEC0C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BEC10: mov     r11, [rbp-20h]
 * 00000001401BEC14: mov     r10, [rbp-28h]
 * 00000001401BEC18: mov     r9, [rbp-30h]
 * 00000001401BEC1C: mov     r8, [rbp-38h]
 * 00000001401BEC20: mov     rdx, [rbp-40h]
 * 00000001401BEC24: mov     rcx, [rbp-48h]
 * 00000001401BEC28: mov     rax, [rbp-50h]
 * 00000001401BEC2C: mov     rsp, rbp
 * 00000001401BEC2F: mov     rbp, [rbp+0D8h]
 * 00000001401BEC36: add     rsp, 0E8h
 * 00000001401BEC3D: iretq
 */
