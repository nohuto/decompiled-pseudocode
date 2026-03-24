/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1401C91F0
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1401C83D0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C86B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C8990 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C8C70 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C95D0 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1401C91F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C91F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C91F0: mov     rdx, rsp
 * 00000001401C91F3: mov     rcx, gs:6458h
 * 00000001401C91FC: lea     rax, [rcx-6000h]
 * 00000001401C9203: cmp     rax, rsp
 * 00000001401C9206: ja      short loc_1401C920D
 * 00000001401C9208: cmp     rsp, rcx
 * 00000001401C920B: jb      short loc_1401C9219
 * 00000001401C920D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C9214: jnz     short loc_1401C9219
 * 00000001401C9216: mov     rsp, rcx
 * 00000001401C9219: sub     rsp, 20h
 * 00000001401C921D: mov     [rsp+20h+var_10], rdx
 * 00000001401C9222: call    KiVmbusInterruptSubDispatch
 * 00000001401C9227: mov     rsp, [rsp+20h+var_10]
 * 00000001401C922C: cli
 * 00000001401C922D: mov     rcx, gs:20h
 * 00000001401C9236: cmp     byte ptr [rcx+20h], 1
 * 00000001401C923A: ja      short loc_1401C92B6
 * 00000001401C923C: rdtsc
 * 00000001401C923E: shl     rdx, 20h
 * 00000001401C9242: or      rax, rdx
 * 00000001401C9245: sub     rax, [rcx+5BC0h]
 * 00000001401C924C: add     [rcx+5C38h], rax
 * 00000001401C9253: add     [rcx+5BC0h], rax
 * 00000001401C925A: mov     r8, rax
 * 00000001401C925D: mov     rax, [rcx+8]
 * 00000001401C9261: test    byte ptr [rax+2], 72h
 * 00000001401C9265: jz      short loc_1401C927A
 * 00000001401C9267: xor     edx, edx
 * 00000001401C9269: call    KiBeginThreadAccountingPeriod
 * 00000001401C926E: mov     rcx, gs:20h
 * 00000001401C9277: inc     byte ptr [rcx+20h]
 * 00000001401C927A: mov     dl, [rcx+6]
 * 00000001401C927D: and     byte ptr [rcx+6], 0
 * 00000001401C9281: cmp     byte ptr [rcx+7], 0
 * 00000001401C9285: jnz     short loc_1401C92B6
 * 00000001401C9287: test    dl, dl
 * 00000001401C9289: jz      short loc_1401C92B6
 * 00000001401C928B: cmp     byte ptr [rbp-57h], 2
 * 00000001401C928F: jnb     short loc_1401C929C
 * 00000001401C9291: and     byte ptr [rcx+20h], 0
 * 00000001401C9295: call    KiDpcInterruptBypass
 * 00000001401C929A: jmp     short loc_1401C92B9
 * 00000001401C929C: mov     ecx, 2
 * 00000001401C92A1: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C92A8: nop     dword ptr [rax+rax+00h]
 * 00000001401C92AD: mov     rcx, gs:20h
 * 00000001401C92B6: dec     byte ptr [rcx+20h]
 * 00000001401C92B9: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C92BD: cmp     cs:KiIrqlFlags, 0
 * 00000001401C92C4: jz      short loc_1401C92CD
 * 00000001401C92C6: call    KzSetIrqlUnsafe
 * 00000001401C92CB: jmp     short loc_1401C92D1
 * 00000001401C92CD: mov     cr8, rcx
 * 00000001401C92D1: mov     rsi, [rbp+0D0h]
 * 00000001401C92D8: cli
 * 00000001401C92D9: test    byte ptr [rbp+0F0h], 1
 * 00000001401C92E0: jz      loc_1401C941F
 * 00000001401C92E6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C92ED: jz      short loc_1401C92F2
 * 00000001401C92EF: stac
 * 00000001401C92F2: mov     rcx, gs:188h
 * 00000001401C92FB: test    byte ptr [rcx+0C2h], 3
 * 00000001401C9302: jz      short loc_1401C931F
 * 00000001401C9304: mov     ecx, 1
 * 00000001401C9309: mov     cr8, rcx
 * 00000001401C930D: sti
 * 00000001401C930E: call    KiInitiateUserApc
 * 00000001401C9313: cli
 * 00000001401C9314: mov     ecx, 0
 * 00000001401C9319: mov     cr8, rcx
 * 00000001401C931D: jmp     short loc_1401C92F2
 * 00000001401C931F: test    byte ptr gs:27Eh, 2
 * 00000001401C9328: jz      short loc_1401C9331
 * 00000001401C932A: xor     ecx, ecx
 * 00000001401C932C: call    KiUpdateStibpPairing
 * 00000001401C9331: mov     rcx, gs:188h
 * 00000001401C933A: test    dword ptr [rcx], 8000000h
 * 00000001401C9340: jz      short loc_1401C9347
 * 00000001401C9342: call    KiRestoreSetContextState
 * 00000001401C9347: mov     rcx, gs:188h
 * 00000001401C9350: test    dword ptr [rcx], 40010000h
 * 00000001401C9356: jz      short loc_1401C936C
 * 00000001401C9358: test    byte ptr [rcx+2], 1
 * 00000001401C935C: jz      short loc_1401C936C
 * 00000001401C935E: call    KiCopyCounters
 * 00000001401C9363: mov     rcx, gs:188h
 * 00000001401C936C: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C9370: cmp     word ptr [rbp+80h], 0
 * 00000001401C9378: jz      short loc_1401C937F
 * 00000001401C937A: call    KiRestoreDebugRegisterState
 * 00000001401C937F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C9383: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C9387: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C938B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C938F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C9393: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C9397: mov     r11, [rbp-20h]
 * 00000001401C939B: mov     r10, [rbp-28h]
 * 00000001401C939F: mov     r9, [rbp-30h]
 * 00000001401C93A3: mov     r8, [rbp-38h]
 * 00000001401C93A7: mov     byte ptr gs:853h, 0
 * 00000001401C93B0: movzx   eax, byte ptr gs:27Dh
 * 00000001401C93B9: cmp     gs:27Ah, al
 * 00000001401C93C1: jz      short loc_1401C93D4
 * 00000001401C93C3: mov     gs:27Ah, al
 * 00000001401C93CB: mov     ecx, 48h ; 'H'
 * 00000001401C93D0: xor     edx, edx
 * 00000001401C93D2: wrmsr
 * 00000001401C93D4: btr     word ptr gs:278h, 2
 * 00000001401C93DF: jnb     short loc_1401C93EF
 * 00000001401C93E1: mov     eax, 1
 * 00000001401C93E6: xor     edx, edx
 * 00000001401C93E8: mov     ecx, 49h ; 'I'
 * 00000001401C93ED: wrmsr
 * 00000001401C93EF: mov     rdx, [rbp-40h]
 * 00000001401C93F3: mov     rcx, [rbp-48h]
 * 00000001401C93F7: mov     rax, [rbp-50h]
 * 00000001401C93FB: mov     rsp, rbp
 * 00000001401C93FE: mov     rbp, [rbp+0D8h]
 * 00000001401C9405: add     rsp, 0E8h
 * 00000001401C940C: test    cs:KiKvaShadow, 1
 * 00000001401C9413: jz      short loc_1401C941A
 * 00000001401C9415: jmp     KiKernelExit
 * 00000001401C941A: swapgs
 * 00000001401C941D: iretq
 * 00000001401C941F: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C9423: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C9427: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C942B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C942F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C9433: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C9437: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C943B: mov     r11, [rbp-20h]
 * 00000001401C943F: mov     r10, [rbp-28h]
 * 00000001401C9443: mov     r9, [rbp-30h]
 * 00000001401C9447: mov     r8, [rbp-38h]
 * 00000001401C944B: mov     rdx, [rbp-40h]
 * 00000001401C944F: mov     rcx, [rbp-48h]
 * 00000001401C9453: mov     rax, [rbp-50h]
 * 00000001401C9457: mov     rsp, rbp
 * 00000001401C945A: mov     rbp, [rbp+0D8h]
 * 00000001401C9461: add     rsp, 0E8h
 * 00000001401C9468: iretq
 */
