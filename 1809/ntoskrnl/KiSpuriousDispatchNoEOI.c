/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1401BEC50
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEC50 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1401BEC50
 * Reason: Hex-Rays returned no pseudocode for 0x1401BEC50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BEC50: mov     ecx, 0Fh
 * 00000001401BEC55: cmp     cs:KiIrqlFlags, 0
 * 00000001401BEC5C: jz      short loc_1401BEC65
 * 00000001401BEC5E: call    KzSetIrqlUnsafe
 * 00000001401BEC63: jmp     short loc_1401BEC6D
 * 00000001401BEC65: mov     rax, cr8
 * 00000001401BEC69: mov     cr8, rcx
 * 00000001401BEC6D: mov     [rbp-57h], al
 * 00000001401BEC70: mov     rcx, gs:20h
 * 00000001401BEC79: inc     byte ptr [rcx+20h]
 * 00000001401BEC7C: cmp     byte ptr [rcx+20h], 1
 * 00000001401BEC80: jnz     short loc_1401BECD2
 * 00000001401BEC82: rdtsc
 * 00000001401BEC84: shl     rdx, 20h
 * 00000001401BEC88: or      rax, rdx
 * 00000001401BEC8B: mov     r8, [rcx+8]
 * 00000001401BEC8F: sub     rax, [rcx+5BC0h]
 * 00000001401BEC96: add     [r8+48h], rax
 * 00000001401BEC9A: mov     edx, [r8+50h]
 * 00000001401BEC9E: add     [rcx+5BC0h], rax
 * 00000001401BECA5: add     rdx, rax
 * 00000001401BECA8: mov     ecx, edx
 * 00000001401BECAA: shr     rdx, 20h
 * 00000001401BECAE: jz      short loc_1401BECB3
 * 00000001401BECB0: or      ecx, 0FFFFFFFFh
 * 00000001401BECB3: mov     [r8+50h], ecx
 * 00000001401BECB7: test    byte ptr [r8+2], 3Eh
 * 00000001401BECBC: jz      short loc_1401BECD2
 * 00000001401BECBE: mov     rdx, r8
 * 00000001401BECC1: mov     r8, rax
 * 00000001401BECC4: mov     rcx, gs:20h
 * 00000001401BECCD: call    KiEndThreadAccountingPeriod
 * 00000001401BECD2: sti
 * 00000001401BECD3: inc     dword ptr [rsi+74h]
 * 00000001401BECD6: cli
 * 00000001401BECD7: mov     rcx, gs:20h
 * 00000001401BECE0: cmp     byte ptr [rcx+20h], 1
 * 00000001401BECE4: ja      short loc_1401BED60
 * 00000001401BECE6: rdtsc
 * 00000001401BECE8: shl     rdx, 20h
 * 00000001401BECEC: or      rax, rdx
 * 00000001401BECEF: sub     rax, [rcx+5BC0h]
 * 00000001401BECF6: add     [rcx+5C38h], rax
 * 00000001401BECFD: add     [rcx+5BC0h], rax
 * 00000001401BED04: mov     r8, rax
 * 00000001401BED07: mov     rax, [rcx+8]
 * 00000001401BED0B: test    byte ptr [rax+2], 72h
 * 00000001401BED0F: jz      short loc_1401BED24
 * 00000001401BED11: xor     edx, edx
 * 00000001401BED13: call    KiBeginThreadAccountingPeriod
 * 00000001401BED18: mov     rcx, gs:20h
 * 00000001401BED21: inc     byte ptr [rcx+20h]
 * 00000001401BED24: mov     dl, [rcx+6]
 * 00000001401BED27: and     byte ptr [rcx+6], 0
 * 00000001401BED2B: cmp     byte ptr [rcx+7], 0
 * 00000001401BED2F: jnz     short loc_1401BED60
 * 00000001401BED31: test    dl, dl
 * 00000001401BED33: jz      short loc_1401BED60
 * 00000001401BED35: cmp     byte ptr [rbp-57h], 2
 * 00000001401BED39: jnb     short loc_1401BED46
 * 00000001401BED3B: and     byte ptr [rcx+20h], 0
 * 00000001401BED3F: call    KiDpcInterruptBypass
 * 00000001401BED44: jmp     short loc_1401BED63
 * 00000001401BED46: mov     ecx, 2
 * 00000001401BED4B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BED52: nop     dword ptr [rax+rax+00h]
 * 00000001401BED57: mov     rcx, gs:20h
 * 00000001401BED60: dec     byte ptr [rcx+20h]
 * 00000001401BED63: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BED67: cmp     cs:KiIrqlFlags, 0
 * 00000001401BED6E: jz      short loc_1401BED77
 * 00000001401BED70: call    KzSetIrqlUnsafe
 * 00000001401BED75: jmp     short loc_1401BED7B
 * 00000001401BED77: mov     cr8, rcx
 * 00000001401BED7B: mov     rsi, [rbp+0D0h]
 * 00000001401BED82: cli
 * 00000001401BED83: test    byte ptr [rbp+0F0h], 1
 * 00000001401BED8A: jz      loc_1401BF020
 * 00000001401BED90: mov     rcx, gs:188h
 * 00000001401BED99: test    byte ptr [rcx+0C2h], 3
 * 00000001401BEDA0: jz      short loc_1401BEDBD
 * 00000001401BEDA2: mov     ecx, 1
 * 00000001401BEDA7: mov     cr8, rcx
 * 00000001401BEDAB: sti
 * 00000001401BEDAC: call    KiInitiateUserApc
 * 00000001401BEDB1: cli
 * 00000001401BEDB2: mov     ecx, 0
 * 00000001401BEDB7: mov     cr8, rcx
 * 00000001401BEDBB: jmp     short loc_1401BED90
 * 00000001401BEDBD: test    byte ptr gs:86Ch, 2
 * 00000001401BEDC6: jz      short loc_1401BEDCF
 * 00000001401BEDC8: xor     ecx, ecx
 * 00000001401BEDCA: call    KiUpdateStibpPairing
 * 00000001401BEDCF: mov     rcx, gs:188h
 * 00000001401BEDD8: test    dword ptr [rcx], 8000000h
 * 00000001401BEDDE: jz      short loc_1401BEDE5
 * 00000001401BEDE0: call    KiRestoreSetContextState
 * 00000001401BEDE5: mov     rcx, gs:188h
 * 00000001401BEDEE: test    dword ptr [rcx], 40010000h
 * 00000001401BEDF4: jz      short loc_1401BEE0A
 * 00000001401BEDF6: test    byte ptr [rcx+2], 1
 * 00000001401BEDFA: jz      short loc_1401BEE0A
 * 00000001401BEDFC: call    KiCopyCounters
 * 00000001401BEE01: mov     rcx, gs:188h
 * 00000001401BEE0A: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BEE0E: cmp     word ptr [rbp+80h], 0
 * 00000001401BEE16: jz      short loc_1401BEE1D
 * 00000001401BEE18: call    KiRestoreDebugRegisterState
 * 00000001401BEE1D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BEE21: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BEE25: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BEE29: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BEE2D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BEE31: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BEE35: mov     r11, [rbp-20h]
 * 00000001401BEE39: mov     r10, [rbp-28h]
 * 00000001401BEE3D: mov     r9, [rbp-30h]
 * 00000001401BEE41: mov     r8, [rbp-38h]
 * 00000001401BEE45: mov     byte ptr gs:856h, 0
 * 00000001401BEE4E: movzx   eax, word ptr gs:86Ah
 * 00000001401BEE57: cmp     gs:864h, ax
 * 00000001401BEE60: jz      short loc_1401BEE74
 * 00000001401BEE62: mov     gs:864h, ax
 * 00000001401BEE6B: mov     ecx, 48h ; 'H'
 * 00000001401BEE70: xor     edx, edx
 * 00000001401BEE72: wrmsr
 * 00000001401BEE74: btr     word ptr gs:860h, 2
 * 00000001401BEE7F: jnb     short loc_1401BEE8F
 * 00000001401BEE81: mov     eax, 1
 * 00000001401BEE86: xor     edx, edx
 * 00000001401BEE88: mov     ecx, 49h ; 'I'
 * 00000001401BEE8D: wrmsr
 * 00000001401BEE8F: btr     word ptr gs:860h, 5
 * 00000001401BEE9A: jnb     loc_1401BEFC5
 * 00000001401BEEA0: call    loc_1401BEFB3
 * 00000001401BEEA5: add     rsp, 8
 * 00000001401BEEA9: call    loc_1401BEFBC
 * 00000001401BEEAE: add     rsp, 8
 * 00000001401BEEB2: call    loc_1401BEEA5
 * 00000001401BEEB7: add     rsp, 8
 * 00000001401BEEBB: call    loc_1401BEEAE
 * 00000001401BEEC0: add     rsp, 8
 * 00000001401BEEC4: call    loc_1401BEEB7
 * 00000001401BEEC9: add     rsp, 8
 * 00000001401BEECD: call    loc_1401BEEC0
 * 00000001401BEED2: add     rsp, 8
 * 00000001401BEED6: call    loc_1401BEEC9
 * 00000001401BEEDB: add     rsp, 8
 * 00000001401BEEDF: call    loc_1401BEED2
 * 00000001401BEEE4: add     rsp, 8
 * 00000001401BEEE8: call    loc_1401BEEDB
 * 00000001401BEEED: add     rsp, 8
 * 00000001401BEEF1: call    loc_1401BEEE4
 * 00000001401BEEF6: add     rsp, 8
 * 00000001401BEEFA: call    loc_1401BEEED
 * 00000001401BEEFF: add     rsp, 8
 * 00000001401BEF03: call    loc_1401BEEF6
 * 00000001401BEF08: add     rsp, 8
 * 00000001401BEF0C: call    loc_1401BEEFF
 * 00000001401BEF11: add     rsp, 8
 * 00000001401BEF15: call    loc_1401BEF08
 * 00000001401BEF1A: add     rsp, 8
 * 00000001401BEF1E: call    loc_1401BEF11
 * 00000001401BEF23: add     rsp, 8
 * 00000001401BEF27: call    loc_1401BEF1A
 * 00000001401BEF2C: add     rsp, 8
 * 00000001401BEF30: call    loc_1401BEF23
 * 00000001401BEF35: add     rsp, 8
 * 00000001401BEF39: call    loc_1401BEF2C
 * 00000001401BEF3E: add     rsp, 8
 * 00000001401BEF42: call    loc_1401BEF35
 * 00000001401BEF47: add     rsp, 8
 * 00000001401BEF4B: call    loc_1401BEF3E
 * 00000001401BEF50: add     rsp, 8
 * 00000001401BEF54: call    loc_1401BEF47
 * 00000001401BEF59: add     rsp, 8
 * 00000001401BEF5D: call    loc_1401BEF50
 * 00000001401BEF62: add     rsp, 8
 * 00000001401BEF66: call    loc_1401BEF59
 * 00000001401BEF6B: add     rsp, 8
 * 00000001401BEF6F: call    loc_1401BEF62
 * 00000001401BEF74: add     rsp, 8
 * 00000001401BEF78: call    loc_1401BEF6B
 * 00000001401BEF7D: add     rsp, 8
 * 00000001401BEF81: call    loc_1401BEF74
 * 00000001401BEF86: add     rsp, 8
 * 00000001401BEF8A: call    loc_1401BEF7D
 * 00000001401BEF8F: add     rsp, 8
 * 00000001401BEF93: call    loc_1401BEF86
 * 00000001401BEF98: add     rsp, 8
 * 00000001401BEF9C: call    loc_1401BEF8F
 * 00000001401BEFA1: add     rsp, 8
 * 00000001401BEFA5: call    loc_1401BEF98
 * 00000001401BEFAA: add     rsp, 8
 * 00000001401BEFAE: call    loc_1401BEFA1
 * 00000001401BEFB3: add     rsp, 8
 * 00000001401BEFB7: call    loc_1401BEFAA
 * 00000001401BEFBC: add     rsp, 8
 * 00000001401BEFC0: mov     eax, 0DADAh
 * 00000001401BEFC5: test    word ptr gs:860h, 80h
 * 00000001401BEFD0: jz      short loc_1401BEFDE
 * 00000001401BEFD2: xor     eax, eax
 * 00000001401BEFD4: xor     edx, edx
 * 00000001401BEFD6: mov     ecx, 1
 * 00000001401BEFDB: div     rcx
 * 00000001401BEFDE: mov     rdx, [rbp-40h]
 * 00000001401BEFE2: mov     rcx, [rbp-48h]
 * 00000001401BEFE6: mov     rax, [rbp-50h]
 * 00000001401BEFEA: mov     rsp, rbp
 * 00000001401BEFED: mov     rbp, [rbp+0D8h]
 * 00000001401BEFF4: add     rsp, 0E8h
 * 00000001401BEFFB: test    cs:KiKvaShadow, 1
 * 00000001401BF002: jz      short loc_1401BF009
 * 00000001401BF004: jmp     KiKernelExit
 * 00000001401BF009: test    word ptr gs:860h, 100h
 * 00000001401BF014: jz      short loc_1401BF01B
 * 00000001401BF016: verw    [rsp-1E8h+arg_200]
 * 00000001401BF01B: swapgs
 * 00000001401BF01E: iretq
 * 00000001401BF020: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BF024: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BF028: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BF02C: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BF030: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BF034: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BF038: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BF03C: mov     r11, [rbp-20h]
 * 00000001401BF040: mov     r10, [rbp-28h]
 * 00000001401BF044: mov     r9, [rbp-30h]
 * 00000001401BF048: mov     r8, [rbp-38h]
 * 00000001401BF04C: mov     rdx, [rbp-40h]
 * 00000001401BF050: mov     rcx, [rbp-48h]
 * 00000001401BF054: mov     rax, [rbp-50h]
 * 00000001401BF058: mov     rsp, rbp
 * 00000001401BF05B: mov     rbp, [rbp+0D8h]
 * 00000001401BF062: add     rsp, 0E8h
 * 00000001401BF069: iretq
 */
