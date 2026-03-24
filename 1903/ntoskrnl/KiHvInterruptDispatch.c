/*
 * XREFs of KiHvInterruptDispatch @ 0x1401C8F50
 * Callers:
 *     KiHvInterrupt @ 0x1401C80F0 (KiHvInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiHvInterruptSubDispatch @ 0x1401C9470 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1401C8F50
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8F50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8F50: mov     rdx, rsp
 * 00000001401C8F53: mov     rcx, gs:6458h
 * 00000001401C8F5C: lea     rax, [rcx-6000h]
 * 00000001401C8F63: cmp     rax, rsp
 * 00000001401C8F66: ja      short loc_1401C8F6D
 * 00000001401C8F68: cmp     rsp, rcx
 * 00000001401C8F6B: jb      short loc_1401C8F79
 * 00000001401C8F6D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C8F74: jnz     short loc_1401C8F79
 * 00000001401C8F76: mov     rsp, rcx
 * 00000001401C8F79: sub     rsp, 20h
 * 00000001401C8F7D: mov     [rsp+20h+var_10], rdx
 * 00000001401C8F82: call    KiHvInterruptSubDispatch
 * 00000001401C8F87: mov     rsp, [rsp+20h+var_10]
 * 00000001401C8F8C: test    cs:HvlEnlightenments, 1000h
 * 00000001401C8F96: jz      short loc_1401C8FA0
 * 00000001401C8F98: mov     rcx, rsi
 * 00000001401C8F9B: call    HalPerformEndOfInterrupt_0
 * 00000001401C8FA0: cli
 * 00000001401C8FA1: mov     rcx, gs:20h
 * 00000001401C8FAA: cmp     byte ptr [rcx+20h], 1
 * 00000001401C8FAE: ja      short loc_1401C902A
 * 00000001401C8FB0: rdtsc
 * 00000001401C8FB2: shl     rdx, 20h
 * 00000001401C8FB6: or      rax, rdx
 * 00000001401C8FB9: sub     rax, [rcx+5BC0h]
 * 00000001401C8FC0: add     [rcx+5C38h], rax
 * 00000001401C8FC7: add     [rcx+5BC0h], rax
 * 00000001401C8FCE: mov     r8, rax
 * 00000001401C8FD1: mov     rax, [rcx+8]
 * 00000001401C8FD5: test    byte ptr [rax+2], 72h
 * 00000001401C8FD9: jz      short loc_1401C8FEE
 * 00000001401C8FDB: xor     edx, edx
 * 00000001401C8FDD: call    KiBeginThreadAccountingPeriod
 * 00000001401C8FE2: mov     rcx, gs:20h
 * 00000001401C8FEB: inc     byte ptr [rcx+20h]
 * 00000001401C8FEE: mov     dl, [rcx+6]
 * 00000001401C8FF1: and     byte ptr [rcx+6], 0
 * 00000001401C8FF5: cmp     byte ptr [rcx+7], 0
 * 00000001401C8FF9: jnz     short loc_1401C902A
 * 00000001401C8FFB: test    dl, dl
 * 00000001401C8FFD: jz      short loc_1401C902A
 * 00000001401C8FFF: cmp     byte ptr [rbp-57h], 2
 * 00000001401C9003: jnb     short loc_1401C9010
 * 00000001401C9005: and     byte ptr [rcx+20h], 0
 * 00000001401C9009: call    KiDpcInterruptBypass
 * 00000001401C900E: jmp     short loc_1401C902D
 * 00000001401C9010: mov     ecx, 2
 * 00000001401C9015: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C901C: nop     dword ptr [rax+rax+00h]
 * 00000001401C9021: mov     rcx, gs:20h
 * 00000001401C902A: dec     byte ptr [rcx+20h]
 * 00000001401C902D: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C9031: cmp     cs:KiIrqlFlags, 0
 * 00000001401C9038: jz      short loc_1401C9041
 * 00000001401C903A: call    KzSetIrqlUnsafe
 * 00000001401C903F: jmp     short loc_1401C9045
 * 00000001401C9041: mov     cr8, rcx
 * 00000001401C9045: mov     rsi, [rbp+0D0h]
 * 00000001401C904C: cli
 * 00000001401C904D: test    byte ptr [rbp+0F0h], 1
 * 00000001401C9054: jz      loc_1401C9193
 * 00000001401C905A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C9061: jz      short loc_1401C9066
 * 00000001401C9063: stac
 * 00000001401C9066: mov     rcx, gs:188h
 * 00000001401C906F: test    byte ptr [rcx+0C2h], 3
 * 00000001401C9076: jz      short loc_1401C9093
 * 00000001401C9078: mov     ecx, 1
 * 00000001401C907D: mov     cr8, rcx
 * 00000001401C9081: sti
 * 00000001401C9082: call    KiInitiateUserApc
 * 00000001401C9087: cli
 * 00000001401C9088: mov     ecx, 0
 * 00000001401C908D: mov     cr8, rcx
 * 00000001401C9091: jmp     short loc_1401C9066
 * 00000001401C9093: test    byte ptr gs:27Eh, 2
 * 00000001401C909C: jz      short loc_1401C90A5
 * 00000001401C909E: xor     ecx, ecx
 * 00000001401C90A0: call    KiUpdateStibpPairing
 * 00000001401C90A5: mov     rcx, gs:188h
 * 00000001401C90AE: test    dword ptr [rcx], 8000000h
 * 00000001401C90B4: jz      short loc_1401C90BB
 * 00000001401C90B6: call    KiRestoreSetContextState
 * 00000001401C90BB: mov     rcx, gs:188h
 * 00000001401C90C4: test    dword ptr [rcx], 40010000h
 * 00000001401C90CA: jz      short loc_1401C90E0
 * 00000001401C90CC: test    byte ptr [rcx+2], 1
 * 00000001401C90D0: jz      short loc_1401C90E0
 * 00000001401C90D2: call    KiCopyCounters
 * 00000001401C90D7: mov     rcx, gs:188h
 * 00000001401C90E0: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C90E4: cmp     word ptr [rbp+80h], 0
 * 00000001401C90EC: jz      short loc_1401C90F3
 * 00000001401C90EE: call    KiRestoreDebugRegisterState
 * 00000001401C90F3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C90F7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C90FB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C90FF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C9103: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C9107: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C910B: mov     r11, [rbp-20h]
 * 00000001401C910F: mov     r10, [rbp-28h]
 * 00000001401C9113: mov     r9, [rbp-30h]
 * 00000001401C9117: mov     r8, [rbp-38h]
 * 00000001401C911B: mov     byte ptr gs:853h, 0
 * 00000001401C9124: movzx   eax, byte ptr gs:27Dh
 * 00000001401C912D: cmp     gs:27Ah, al
 * 00000001401C9135: jz      short loc_1401C9148
 * 00000001401C9137: mov     gs:27Ah, al
 * 00000001401C913F: mov     ecx, 48h ; 'H'
 * 00000001401C9144: xor     edx, edx
 * 00000001401C9146: wrmsr
 * 00000001401C9148: btr     word ptr gs:278h, 2
 * 00000001401C9153: jnb     short loc_1401C9163
 * 00000001401C9155: mov     eax, 1
 * 00000001401C915A: xor     edx, edx
 * 00000001401C915C: mov     ecx, 49h ; 'I'
 * 00000001401C9161: wrmsr
 * 00000001401C9163: mov     rdx, [rbp-40h]
 * 00000001401C9167: mov     rcx, [rbp-48h]
 * 00000001401C916B: mov     rax, [rbp-50h]
 * 00000001401C916F: mov     rsp, rbp
 * 00000001401C9172: mov     rbp, [rbp+0D8h]
 * 00000001401C9179: add     rsp, 0E8h
 * 00000001401C9180: test    cs:KiKvaShadow, 1
 * 00000001401C9187: jz      short loc_1401C918E
 * 00000001401C9189: jmp     KiKernelExit
 * 00000001401C918E: swapgs
 * 00000001401C9191: iretq
 * 00000001401C9193: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C9197: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C919B: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C919F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C91A3: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C91A7: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C91AB: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C91AF: mov     r11, [rbp-20h]
 * 00000001401C91B3: mov     r10, [rbp-28h]
 * 00000001401C91B7: mov     r9, [rbp-30h]
 * 00000001401C91BB: mov     r8, [rbp-38h]
 * 00000001401C91BF: mov     rdx, [rbp-40h]
 * 00000001401C91C3: mov     rcx, [rbp-48h]
 * 00000001401C91C7: mov     rax, [rbp-50h]
 * 00000001401C91CB: mov     rsp, rbp
 * 00000001401C91CE: mov     rbp, [rbp+0D8h]
 * 00000001401C91D5: add     rsp, 0E8h
 * 00000001401C91DC: iretq
 */
