/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1401BEAF0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D2030 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEAF0 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1401BEAF0
 * Reason: Hex-Rays returned no pseudocode for 0x1401BEAF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BEAF0: mov     ecx, 0Fh
 * 00000001401BEAF5: cmp     cs:KiIrqlFlags, 0
 * 00000001401BEAFC: jz      short loc_1401BEB05
 * 00000001401BEAFE: call    KzSetIrqlUnsafe
 * 00000001401BEB03: jmp     short loc_1401BEB0D
 * 00000001401BEB05: mov     rax, cr8
 * 00000001401BEB09: mov     cr8, rcx
 * 00000001401BEB0D: mov     [rbp-57h], al
 * 00000001401BEB10: mov     rcx, gs:20h
 * 00000001401BEB19: inc     byte ptr [rcx+20h]
 * 00000001401BEB1C: cmp     byte ptr [rcx+20h], 1
 * 00000001401BEB20: jnz     short loc_1401BEB72
 * 00000001401BEB22: rdtsc
 * 00000001401BEB24: shl     rdx, 20h
 * 00000001401BEB28: or      rax, rdx
 * 00000001401BEB2B: mov     r8, [rcx+8]
 * 00000001401BEB2F: sub     rax, [rcx+5BC0h]
 * 00000001401BEB36: add     [r8+48h], rax
 * 00000001401BEB3A: mov     edx, [r8+50h]
 * 00000001401BEB3E: add     [rcx+5BC0h], rax
 * 00000001401BEB45: add     rdx, rax
 * 00000001401BEB48: mov     ecx, edx
 * 00000001401BEB4A: shr     rdx, 20h
 * 00000001401BEB4E: jz      short loc_1401BEB53
 * 00000001401BEB50: or      ecx, 0FFFFFFFFh
 * 00000001401BEB53: mov     [r8+50h], ecx
 * 00000001401BEB57: test    byte ptr [r8+2], 3Eh
 * 00000001401BEB5C: jz      short loc_1401BEB72
 * 00000001401BEB5E: mov     rdx, r8
 * 00000001401BEB61: mov     r8, rax
 * 00000001401BEB64: mov     rcx, gs:20h
 * 00000001401BEB6D: call    KiEndThreadAccountingPeriod
 * 00000001401BEB72: sti
 * 00000001401BEB73: inc     dword ptr [rsi+74h]
 * 00000001401BEB76: cli
 * 00000001401BEB77: mov     rcx, gs:20h
 * 00000001401BEB80: cmp     byte ptr [rcx+20h], 1
 * 00000001401BEB84: ja      short loc_1401BEC00
 * 00000001401BEB86: rdtsc
 * 00000001401BEB88: shl     rdx, 20h
 * 00000001401BEB8C: or      rax, rdx
 * 00000001401BEB8F: sub     rax, [rcx+5BC0h]
 * 00000001401BEB96: add     [rcx+5C38h], rax
 * 00000001401BEB9D: add     [rcx+5BC0h], rax
 * 00000001401BEBA4: mov     r8, rax
 * 00000001401BEBA7: mov     rax, [rcx+8]
 * 00000001401BEBAB: test    byte ptr [rax+2], 72h
 * 00000001401BEBAF: jz      short loc_1401BEBC4
 * 00000001401BEBB1: xor     edx, edx
 * 00000001401BEBB3: call    KiBeginThreadAccountingPeriod
 * 00000001401BEBB8: mov     rcx, gs:20h
 * 00000001401BEBC1: inc     byte ptr [rcx+20h]
 * 00000001401BEBC4: mov     dl, [rcx+6]
 * 00000001401BEBC7: and     byte ptr [rcx+6], 0
 * 00000001401BEBCB: cmp     byte ptr [rcx+7], 0
 * 00000001401BEBCF: jnz     short loc_1401BEC00
 * 00000001401BEBD1: test    dl, dl
 * 00000001401BEBD3: jz      short loc_1401BEC00
 * 00000001401BEBD5: cmp     byte ptr [rbp-57h], 2
 * 00000001401BEBD9: jnb     short loc_1401BEBE6
 * 00000001401BEBDB: and     byte ptr [rcx+20h], 0
 * 00000001401BEBDF: call    KiDpcInterruptBypass
 * 00000001401BEBE4: jmp     short loc_1401BEC03
 * 00000001401BEBE6: mov     ecx, 2
 * 00000001401BEBEB: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BEBF2: nop     dword ptr [rax+rax+00h]
 * 00000001401BEBF7: mov     rcx, gs:20h
 * 00000001401BEC00: dec     byte ptr [rcx+20h]
 * 00000001401BEC03: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BEC07: cmp     cs:KiIrqlFlags, 0
 * 00000001401BEC0E: jz      short loc_1401BEC17
 * 00000001401BEC10: call    KzSetIrqlUnsafe
 * 00000001401BEC15: jmp     short loc_1401BEC1B
 * 00000001401BEC17: mov     cr8, rcx
 * 00000001401BEC1B: mov     rsi, [rbp+0D0h]
 * 00000001401BEC22: cli
 * 00000001401BEC23: test    byte ptr [rbp+0F0h], 1
 * 00000001401BEC2A: jz      loc_1401BEEC0
 * 00000001401BEC30: mov     rcx, gs:188h
 * 00000001401BEC39: test    byte ptr [rcx+0C2h], 3
 * 00000001401BEC40: jz      short loc_1401BEC5D
 * 00000001401BEC42: mov     ecx, 1
 * 00000001401BEC47: mov     cr8, rcx
 * 00000001401BEC4B: sti
 * 00000001401BEC4C: call    KiInitiateUserApc
 * 00000001401BEC51: cli
 * 00000001401BEC52: mov     ecx, 0
 * 00000001401BEC57: mov     cr8, rcx
 * 00000001401BEC5B: jmp     short loc_1401BEC30
 * 00000001401BEC5D: test    byte ptr gs:86Ch, 2
 * 00000001401BEC66: jz      short loc_1401BEC6F
 * 00000001401BEC68: xor     ecx, ecx
 * 00000001401BEC6A: call    KiUpdateStibpPairing
 * 00000001401BEC6F: mov     rcx, gs:188h
 * 00000001401BEC78: test    dword ptr [rcx], 8000000h
 * 00000001401BEC7E: jz      short loc_1401BEC85
 * 00000001401BEC80: call    KiRestoreSetContextState
 * 00000001401BEC85: mov     rcx, gs:188h
 * 00000001401BEC8E: test    dword ptr [rcx], 40010000h
 * 00000001401BEC94: jz      short loc_1401BECAA
 * 00000001401BEC96: test    byte ptr [rcx+2], 1
 * 00000001401BEC9A: jz      short loc_1401BECAA
 * 00000001401BEC9C: call    KiCopyCounters
 * 00000001401BECA1: mov     rcx, gs:188h
 * 00000001401BECAA: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BECAE: cmp     word ptr [rbp+80h], 0
 * 00000001401BECB6: jz      short loc_1401BECBD
 * 00000001401BECB8: call    KiRestoreDebugRegisterState
 * 00000001401BECBD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BECC1: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BECC5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BECC9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BECCD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BECD1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BECD5: mov     r11, [rbp-20h]
 * 00000001401BECD9: mov     r10, [rbp-28h]
 * 00000001401BECDD: mov     r9, [rbp-30h]
 * 00000001401BECE1: mov     r8, [rbp-38h]
 * 00000001401BECE5: mov     byte ptr gs:856h, 0
 * 00000001401BECEE: movzx   eax, word ptr gs:86Ah
 * 00000001401BECF7: cmp     gs:864h, ax
 * 00000001401BED00: jz      short loc_1401BED14
 * 00000001401BED02: mov     gs:864h, ax
 * 00000001401BED0B: mov     ecx, 48h ; 'H'
 * 00000001401BED10: xor     edx, edx
 * 00000001401BED12: wrmsr
 * 00000001401BED14: btr     word ptr gs:860h, 2
 * 00000001401BED1F: jnb     short loc_1401BED2F
 * 00000001401BED21: mov     eax, 1
 * 00000001401BED26: xor     edx, edx
 * 00000001401BED28: mov     ecx, 49h ; 'I'
 * 00000001401BED2D: wrmsr
 * 00000001401BED2F: btr     word ptr gs:860h, 5
 * 00000001401BED3A: jnb     loc_1401BEE65
 * 00000001401BED40: call    loc_1401BEE53
 * 00000001401BED45: add     rsp, 8
 * 00000001401BED49: call    loc_1401BEE5C
 * 00000001401BED4E: add     rsp, 8
 * 00000001401BED52: call    loc_1401BED45
 * 00000001401BED57: add     rsp, 8
 * 00000001401BED5B: call    loc_1401BED4E
 * 00000001401BED60: add     rsp, 8
 * 00000001401BED64: call    loc_1401BED57
 * 00000001401BED69: add     rsp, 8
 * 00000001401BED6D: call    loc_1401BED60
 * 00000001401BED72: add     rsp, 8
 * 00000001401BED76: call    loc_1401BED69
 * 00000001401BED7B: add     rsp, 8
 * 00000001401BED7F: call    loc_1401BED72
 * 00000001401BED84: add     rsp, 8
 * 00000001401BED88: call    loc_1401BED7B
 * 00000001401BED8D: add     rsp, 8
 * 00000001401BED91: call    loc_1401BED84
 * 00000001401BED96: add     rsp, 8
 * 00000001401BED9A: call    loc_1401BED8D
 * 00000001401BED9F: add     rsp, 8
 * 00000001401BEDA3: call    loc_1401BED96
 * 00000001401BEDA8: add     rsp, 8
 * 00000001401BEDAC: call    loc_1401BED9F
 * 00000001401BEDB1: add     rsp, 8
 * 00000001401BEDB5: call    loc_1401BEDA8
 * 00000001401BEDBA: add     rsp, 8
 * 00000001401BEDBE: call    loc_1401BEDB1
 * 00000001401BEDC3: add     rsp, 8
 * 00000001401BEDC7: call    loc_1401BEDBA
 * 00000001401BEDCC: add     rsp, 8
 * 00000001401BEDD0: call    loc_1401BEDC3
 * 00000001401BEDD5: add     rsp, 8
 * 00000001401BEDD9: call    loc_1401BEDCC
 * 00000001401BEDDE: add     rsp, 8
 * 00000001401BEDE2: call    loc_1401BEDD5
 * 00000001401BEDE7: add     rsp, 8
 * 00000001401BEDEB: call    loc_1401BEDDE
 * 00000001401BEDF0: add     rsp, 8
 * 00000001401BEDF4: call    loc_1401BEDE7
 * 00000001401BEDF9: add     rsp, 8
 * 00000001401BEDFD: call    loc_1401BEDF0
 * 00000001401BEE02: add     rsp, 8
 * 00000001401BEE06: call    loc_1401BEDF9
 * 00000001401BEE0B: add     rsp, 8
 * 00000001401BEE0F: call    loc_1401BEE02
 * 00000001401BEE14: add     rsp, 8
 * 00000001401BEE18: call    loc_1401BEE0B
 * 00000001401BEE1D: add     rsp, 8
 * 00000001401BEE21: call    loc_1401BEE14
 * 00000001401BEE26: add     rsp, 8
 * 00000001401BEE2A: call    loc_1401BEE1D
 * 00000001401BEE2F: add     rsp, 8
 * 00000001401BEE33: call    loc_1401BEE26
 * 00000001401BEE38: add     rsp, 8
 * 00000001401BEE3C: call    loc_1401BEE2F
 * 00000001401BEE41: add     rsp, 8
 * 00000001401BEE45: call    loc_1401BEE38
 * 00000001401BEE4A: add     rsp, 8
 * 00000001401BEE4E: call    loc_1401BEE41
 * 00000001401BEE53: add     rsp, 8
 * 00000001401BEE57: call    loc_1401BEE4A
 * 00000001401BEE5C: add     rsp, 8
 * 00000001401BEE60: mov     eax, 0DADAh
 * 00000001401BEE65: test    word ptr gs:860h, 80h
 * 00000001401BEE70: jz      short loc_1401BEE7E
 * 00000001401BEE72: xor     eax, eax
 * 00000001401BEE74: xor     edx, edx
 * 00000001401BEE76: mov     ecx, 1
 * 00000001401BEE7B: div     rcx
 * 00000001401BEE7E: mov     rdx, [rbp-40h]
 * 00000001401BEE82: mov     rcx, [rbp-48h]
 * 00000001401BEE86: mov     rax, [rbp-50h]
 * 00000001401BEE8A: mov     rsp, rbp
 * 00000001401BEE8D: mov     rbp, [rbp+0D8h]
 * 00000001401BEE94: add     rsp, 0E8h
 * 00000001401BEE9B: test    cs:KiKvaShadow, 1
 * 00000001401BEEA2: jz      short loc_1401BEEA9
 * 00000001401BEEA4: jmp     KiKernelExit
 * 00000001401BEEA9: test    word ptr gs:860h, 100h
 * 00000001401BEEB4: jz      short loc_1401BEEBB
 * 00000001401BEEB6: verw    [rsp-1E8h+arg_200]
 * 00000001401BEEBB: swapgs
 * 00000001401BEEBE: iretq
 * 00000001401BEEC0: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BEEC4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BEEC8: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BEECC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BEED0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BEED4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BEED8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BEEDC: mov     r11, [rbp-20h]
 * 00000001401BEEE0: mov     r10, [rbp-28h]
 * 00000001401BEEE4: mov     r9, [rbp-30h]
 * 00000001401BEEE8: mov     r8, [rbp-38h]
 * 00000001401BEEEC: mov     rdx, [rbp-40h]
 * 00000001401BEEF0: mov     rcx, [rbp-48h]
 * 00000001401BEEF4: mov     rax, [rbp-50h]
 * 00000001401BEEF8: mov     rsp, rbp
 * 00000001401BEEFB: mov     rbp, [rbp+0D8h]
 * 00000001401BEF02: add     rsp, 0E8h
 * 00000001401BEF09: iretq
 */
