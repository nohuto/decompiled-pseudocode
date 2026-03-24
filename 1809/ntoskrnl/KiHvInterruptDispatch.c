/*
 * XREFs of KiHvInterruptDispatch @ 0x1401C2010
 * Callers:
 *     KiHvInterrupt @ 0x1401C1160 (KiHvInterrupt.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiHvInterruptDispatch @ 0x1401C2010 (KiHvInterruptDispatch.c)
 *     KiHvInterruptSubDispatch @ 0x1401C27E0 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1401C2010
 * Reason: Hex-Rays returned no pseudocode for 0x1401C2010
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C2010: mov     rdx, rsp
 * 00000001401C2013: mov     rcx, gs:6458h
 * 00000001401C201C: lea     rax, [rcx-6000h]
 * 00000001401C2023: cmp     rax, rsp
 * 00000001401C2026: ja      short loc_1401C202D
 * 00000001401C2028: cmp     rsp, rcx
 * 00000001401C202B: jb      short loc_1401C2039
 * 00000001401C202D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C2034: jnz     short loc_1401C2039
 * 00000001401C2036: mov     rsp, rcx
 * 00000001401C2039: sub     rsp, 20h
 * 00000001401C203D: mov     [rsp+20h+var_10], rdx
 * 00000001401C2042: call    KiHvInterruptSubDispatch
 * 00000001401C2047: mov     rsp, [rsp+20h+var_10]
 * 00000001401C204C: test    cs:HvlEnlightenments, 1000h
 * 00000001401C2056: jz      short loc_1401C2060
 * 00000001401C2058: mov     rcx, rsi
 * 00000001401C205B: call    HalPerformEndOfInterrupt_0
 * 00000001401C2060: cli
 * 00000001401C2061: mov     rcx, gs:20h
 * 00000001401C206A: cmp     byte ptr [rcx+20h], 1
 * 00000001401C206E: ja      short loc_1401C20EA
 * 00000001401C2070: rdtsc
 * 00000001401C2072: shl     rdx, 20h
 * 00000001401C2076: or      rax, rdx
 * 00000001401C2079: sub     rax, [rcx+5BC0h]
 * 00000001401C2080: add     [rcx+5C38h], rax
 * 00000001401C2087: add     [rcx+5BC0h], rax
 * 00000001401C208E: mov     r8, rax
 * 00000001401C2091: mov     rax, [rcx+8]
 * 00000001401C2095: test    byte ptr [rax+2], 72h
 * 00000001401C2099: jz      short loc_1401C20AE
 * 00000001401C209B: xor     edx, edx
 * 00000001401C209D: call    KiBeginThreadAccountingPeriod
 * 00000001401C20A2: mov     rcx, gs:20h
 * 00000001401C20AB: inc     byte ptr [rcx+20h]
 * 00000001401C20AE: mov     dl, [rcx+6]
 * 00000001401C20B1: and     byte ptr [rcx+6], 0
 * 00000001401C20B5: cmp     byte ptr [rcx+7], 0
 * 00000001401C20B9: jnz     short loc_1401C20EA
 * 00000001401C20BB: test    dl, dl
 * 00000001401C20BD: jz      short loc_1401C20EA
 * 00000001401C20BF: cmp     byte ptr [rbp-57h], 2
 * 00000001401C20C3: jnb     short loc_1401C20D0
 * 00000001401C20C5: and     byte ptr [rcx+20h], 0
 * 00000001401C20C9: call    KiDpcInterruptBypass
 * 00000001401C20CE: jmp     short loc_1401C20ED
 * 00000001401C20D0: mov     ecx, 2
 * 00000001401C20D5: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C20DC: nop     dword ptr [rax+rax+00h]
 * 00000001401C20E1: mov     rcx, gs:20h
 * 00000001401C20EA: dec     byte ptr [rcx+20h]
 * 00000001401C20ED: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C20F1: cmp     cs:KiIrqlFlags, 0
 * 00000001401C20F8: jz      short loc_1401C2101
 * 00000001401C20FA: call    KzSetIrqlUnsafe
 * 00000001401C20FF: jmp     short loc_1401C2105
 * 00000001401C2101: mov     cr8, rcx
 * 00000001401C2105: mov     rsi, [rbp+0D0h]
 * 00000001401C210C: cli
 * 00000001401C210D: test    byte ptr [rbp+0F0h], 1
 * 00000001401C2114: jz      loc_1401C23AA
 * 00000001401C211A: mov     rcx, gs:188h
 * 00000001401C2123: test    byte ptr [rcx+0C2h], 3
 * 00000001401C212A: jz      short loc_1401C2147
 * 00000001401C212C: mov     ecx, 1
 * 00000001401C2131: mov     cr8, rcx
 * 00000001401C2135: sti
 * 00000001401C2136: call    KiInitiateUserApc
 * 00000001401C213B: cli
 * 00000001401C213C: mov     ecx, 0
 * 00000001401C2141: mov     cr8, rcx
 * 00000001401C2145: jmp     short loc_1401C211A
 * 00000001401C2147: test    byte ptr gs:86Ch, 2
 * 00000001401C2150: jz      short loc_1401C2159
 * 00000001401C2152: xor     ecx, ecx
 * 00000001401C2154: call    KiUpdateStibpPairing
 * 00000001401C2159: mov     rcx, gs:188h
 * 00000001401C2162: test    dword ptr [rcx], 8000000h
 * 00000001401C2168: jz      short loc_1401C216F
 * 00000001401C216A: call    KiRestoreSetContextState
 * 00000001401C216F: mov     rcx, gs:188h
 * 00000001401C2178: test    dword ptr [rcx], 40010000h
 * 00000001401C217E: jz      short loc_1401C2194
 * 00000001401C2180: test    byte ptr [rcx+2], 1
 * 00000001401C2184: jz      short loc_1401C2194
 * 00000001401C2186: call    KiCopyCounters
 * 00000001401C218B: mov     rcx, gs:188h
 * 00000001401C2194: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C2198: cmp     word ptr [rbp+80h], 0
 * 00000001401C21A0: jz      short loc_1401C21A7
 * 00000001401C21A2: call    KiRestoreDebugRegisterState
 * 00000001401C21A7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C21AB: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C21AF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C21B3: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C21B7: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C21BB: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C21BF: mov     r11, [rbp-20h]
 * 00000001401C21C3: mov     r10, [rbp-28h]
 * 00000001401C21C7: mov     r9, [rbp-30h]
 * 00000001401C21CB: mov     r8, [rbp-38h]
 * 00000001401C21CF: mov     byte ptr gs:856h, 0
 * 00000001401C21D8: movzx   eax, word ptr gs:86Ah
 * 00000001401C21E1: cmp     gs:864h, ax
 * 00000001401C21EA: jz      short loc_1401C21FE
 * 00000001401C21EC: mov     gs:864h, ax
 * 00000001401C21F5: mov     ecx, 48h ; 'H'
 * 00000001401C21FA: xor     edx, edx
 * 00000001401C21FC: wrmsr
 * 00000001401C21FE: btr     word ptr gs:860h, 2
 * 00000001401C2209: jnb     short loc_1401C2219
 * 00000001401C220B: mov     eax, 1
 * 00000001401C2210: xor     edx, edx
 * 00000001401C2212: mov     ecx, 49h ; 'I'
 * 00000001401C2217: wrmsr
 * 00000001401C2219: btr     word ptr gs:860h, 5
 * 00000001401C2224: jnb     loc_1401C234F
 * 00000001401C222A: call    loc_1401C233D
 * 00000001401C222F: add     rsp, 8
 * 00000001401C2233: call    loc_1401C2346
 * 00000001401C2238: add     rsp, 8
 * 00000001401C223C: call    loc_1401C222F
 * 00000001401C2241: add     rsp, 8
 * 00000001401C2245: call    loc_1401C2238
 * 00000001401C224A: add     rsp, 8
 * 00000001401C224E: call    loc_1401C2241
 * 00000001401C2253: add     rsp, 8
 * 00000001401C2257: call    loc_1401C224A
 * 00000001401C225C: add     rsp, 8
 * 00000001401C2260: call    loc_1401C2253
 * 00000001401C2265: add     rsp, 8
 * 00000001401C2269: call    loc_1401C225C
 * 00000001401C226E: add     rsp, 8
 * 00000001401C2272: call    loc_1401C2265
 * 00000001401C2277: add     rsp, 8
 * 00000001401C227B: call    loc_1401C226E
 * 00000001401C2280: add     rsp, 8
 * 00000001401C2284: call    loc_1401C2277
 * 00000001401C2289: add     rsp, 8
 * 00000001401C228D: call    loc_1401C2280
 * 00000001401C2292: add     rsp, 8
 * 00000001401C2296: call    loc_1401C2289
 * 00000001401C229B: add     rsp, 8
 * 00000001401C229F: call    loc_1401C2292
 * 00000001401C22A4: add     rsp, 8
 * 00000001401C22A8: call    loc_1401C229B
 * 00000001401C22AD: add     rsp, 8
 * 00000001401C22B1: call    loc_1401C22A4
 * 00000001401C22B6: add     rsp, 8
 * 00000001401C22BA: call    loc_1401C22AD
 * 00000001401C22BF: add     rsp, 8
 * 00000001401C22C3: call    loc_1401C22B6
 * 00000001401C22C8: add     rsp, 8
 * 00000001401C22CC: call    loc_1401C22BF
 * 00000001401C22D1: add     rsp, 8
 * 00000001401C22D5: call    loc_1401C22C8
 * 00000001401C22DA: add     rsp, 8
 * 00000001401C22DE: call    loc_1401C22D1
 * 00000001401C22E3: add     rsp, 8
 * 00000001401C22E7: call    loc_1401C22DA
 * 00000001401C22EC: add     rsp, 8
 * 00000001401C22F0: call    loc_1401C22E3
 * 00000001401C22F5: add     rsp, 8
 * 00000001401C22F9: call    loc_1401C22EC
 * 00000001401C22FE: add     rsp, 8
 * 00000001401C2302: call    loc_1401C22F5
 * 00000001401C2307: add     rsp, 8
 * 00000001401C230B: call    loc_1401C22FE
 * 00000001401C2310: add     rsp, 8
 * 00000001401C2314: call    loc_1401C2307
 * 00000001401C2319: add     rsp, 8
 * 00000001401C231D: call    loc_1401C2310
 * 00000001401C2322: add     rsp, 8
 * 00000001401C2326: call    loc_1401C2319
 * 00000001401C232B: add     rsp, 8
 * 00000001401C232F: call    loc_1401C2322
 * 00000001401C2334: add     rsp, 8
 * 00000001401C2338: call    loc_1401C232B
 * 00000001401C233D: add     rsp, 8
 * 00000001401C2341: call    loc_1401C2334
 * 00000001401C2346: add     rsp, 8
 * 00000001401C234A: mov     eax, 0DADAh
 * 00000001401C234F: test    word ptr gs:860h, 80h
 * 00000001401C235A: jz      short loc_1401C2368
 * 00000001401C235C: xor     eax, eax
 * 00000001401C235E: xor     edx, edx
 * 00000001401C2360: mov     ecx, 1
 * 00000001401C2365: div     rcx
 * 00000001401C2368: mov     rdx, [rbp-40h]
 * 00000001401C236C: mov     rcx, [rbp-48h]
 * 00000001401C2370: mov     rax, [rbp-50h]
 * 00000001401C2374: mov     rsp, rbp
 * 00000001401C2377: mov     rbp, [rbp+0D8h]
 * 00000001401C237E: add     rsp, 0E8h
 * 00000001401C2385: test    cs:KiKvaShadow, 1
 * 00000001401C238C: jz      short loc_1401C2393
 * 00000001401C238E: jmp     KiKernelExit
 * 00000001401C2393: test    word ptr gs:860h, 100h
 * 00000001401C239E: jz      short loc_1401C23A5
 * 00000001401C23A0: verw    [rsp-1C8h+arg_1E0]
 * 00000001401C23A5: swapgs
 * 00000001401C23A8: iretq
 * 00000001401C23AA: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C23AE: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C23B2: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C23B6: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C23BA: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C23BE: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C23C2: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C23C6: mov     r11, [rbp-20h]
 * 00000001401C23CA: mov     r10, [rbp-28h]
 * 00000001401C23CE: mov     r9, [rbp-30h]
 * 00000001401C23D2: mov     r8, [rbp-38h]
 * 00000001401C23D6: mov     rdx, [rbp-40h]
 * 00000001401C23DA: mov     rcx, [rbp-48h]
 * 00000001401C23DE: mov     rax, [rbp-50h]
 * 00000001401C23E2: mov     rsp, rbp
 * 00000001401C23E5: mov     rbp, [rbp+0D8h]
 * 00000001401C23EC: add     rsp, 0E8h
 * 00000001401C23F3: iretq
 */
