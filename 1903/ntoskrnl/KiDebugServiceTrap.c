/*
 * XREFs of KiDebugServiceTrap @ 0x1401D4440
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140350E00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1401D4440 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1401D4440
 * Reason: Hex-Rays returned no pseudocode for 0x1401D4440
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D4440: inc     qword ptr [rsp+0]
 * 00000001401D4444: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401D444A: jnz     short loc_1401D4451
 * 00000001401D444C: and     dword ptr [rsp+4], 0
 * 00000001401D4451: sub     rsp, 8
 * 00000001401D4455: push    rbp
 * 00000001401D4456: sub     rsp, 158h
 * 00000001401D445D: lea     rbp, [rsp+168h+var_E8]
 * 00000001401D4465: mov     byte ptr [rbp-55h], 1
 * 00000001401D4469: mov     [rbp-50h], rax
 * 00000001401D446D: mov     [rbp-48h], rcx
 * 00000001401D4471: mov     [rbp-40h], rdx
 * 00000001401D4475: mov     [rbp-38h], r8
 * 00000001401D4479: mov     [rbp-30h], r9
 * 00000001401D447D: mov     [rbp-28h], r10
 * 00000001401D4481: mov     [rbp-20h], r11
 * 00000001401D4485: test    byte ptr [rbp+0F0h], 1
 * 00000001401D448C: jnz     short loc_1401D44BB
 * 00000001401D448E: lfence
 * 00000001401D4491: test    byte ptr gs:278h, 1
 * 00000001401D449A: jnz     short loc_1401D44A4
 * 00000001401D449C: lfence
 * 00000001401D449F: jmp     loc_1401D4700
 * 00000001401D44A4: movzx   eax, byte ptr gs:27Ah
 * 00000001401D44AD: mov     ecx, 48h ; 'H'
 * 00000001401D44B2: xor     edx, edx
 * 00000001401D44B4: wrmsr
 * 00000001401D44B6: jmp     loc_1401D4700
 * 00000001401D44BB: test    cs:KiKvaShadow, 1
 * 00000001401D44C2: jnz     short loc_1401D44C7
 * 00000001401D44C4: swapgs
 * 00000001401D44C7: lfence
 * 00000001401D44CA: mov     r10, gs:188h
 * 00000001401D44D3: mov     rcx, gs:188h
 * 00000001401D44DC: mov     rcx, [rcx+220h]
 * 00000001401D44E3: mov     rcx, [rcx+860h]
 * 00000001401D44EA: mov     gs:270h, rcx
 * 00000001401D44F3: mov     cl, gs:850h
 * 00000001401D44FB: mov     gs:851h, cl
 * 00000001401D4503: mov     cl, gs:278h
 * 00000001401D450B: mov     gs:852h, cl
 * 00000001401D4513: movzx   eax, byte ptr gs:27Bh
 * 00000001401D451C: cmp     gs:27Ah, al
 * 00000001401D4524: jz      short loc_1401D4537
 * 00000001401D4526: mov     gs:27Ah, al
 * 00000001401D452E: mov     ecx, 48h ; 'H'
 * 00000001401D4533: xor     edx, edx
 * 00000001401D4535: wrmsr
 * 00000001401D4537: movzx   edx, byte ptr gs:278h
 * 00000001401D4540: test    edx, 8
 * 00000001401D4546: jz      short loc_1401D455B
 * 00000001401D4548: mov     eax, 1
 * 00000001401D454D: xor     edx, edx
 * 00000001401D454F: mov     ecx, 49h ; 'I'
 * 00000001401D4554: wrmsr
 * 00000001401D4556: jmp     loc_1401D4699
 * 00000001401D455B: test    edx, 2
 * 00000001401D4561: jz      loc_1401D4696
 * 00000001401D4567: test    byte ptr gs:279h, 4
 * 00000001401D4570: jnz     loc_1401D4696
 * 00000001401D4576: call    loc_1401D4689
 * 00000001401D457B: add     rsp, 8
 * 00000001401D457F: call    loc_1401D4692
 * 00000001401D4584: add     rsp, 8
 * 00000001401D4588: call    loc_1401D457B
 * 00000001401D458D: add     rsp, 8
 * 00000001401D4591: call    loc_1401D4584
 * 00000001401D4596: add     rsp, 8
 * 00000001401D459A: call    loc_1401D458D
 * 00000001401D459F: add     rsp, 8
 * 00000001401D45A3: call    loc_1401D4596
 * 00000001401D45A8: add     rsp, 8
 * 00000001401D45AC: call    loc_1401D459F
 * 00000001401D45B1: add     rsp, 8
 * 00000001401D45B5: call    loc_1401D45A8
 * 00000001401D45BA: add     rsp, 8
 * 00000001401D45BE: call    loc_1401D45B1
 * 00000001401D45C3: add     rsp, 8
 * 00000001401D45C7: call    loc_1401D45BA
 * 00000001401D45CC: add     rsp, 8
 * 00000001401D45D0: call    loc_1401D45C3
 * 00000001401D45D5: add     rsp, 8
 * 00000001401D45D9: call    loc_1401D45CC
 * 00000001401D45DE: add     rsp, 8
 * 00000001401D45E2: call    loc_1401D45D5
 * 00000001401D45E7: add     rsp, 8
 * 00000001401D45EB: call    loc_1401D45DE
 * 00000001401D45F0: add     rsp, 8
 * 00000001401D45F4: call    loc_1401D45E7
 * 00000001401D45F9: add     rsp, 8
 * 00000001401D45FD: call    loc_1401D45F0
 * 00000001401D4602: add     rsp, 8
 * 00000001401D4606: call    loc_1401D45F9
 * 00000001401D460B: add     rsp, 8
 * 00000001401D460F: call    loc_1401D4602
 * 00000001401D4614: add     rsp, 8
 * 00000001401D4618: call    loc_1401D460B
 * 00000001401D461D: add     rsp, 8
 * 00000001401D4621: call    loc_1401D4614
 * 00000001401D4626: add     rsp, 8
 * 00000001401D462A: call    loc_1401D461D
 * 00000001401D462F: add     rsp, 8
 * 00000001401D4633: call    loc_1401D4626
 * 00000001401D4638: add     rsp, 8
 * 00000001401D463C: call    loc_1401D462F
 * 00000001401D4641: add     rsp, 8
 * 00000001401D4645: call    loc_1401D4638
 * 00000001401D464A: add     rsp, 8
 * 00000001401D464E: call    loc_1401D4641
 * 00000001401D4653: add     rsp, 8
 * 00000001401D4657: call    loc_1401D464A
 * 00000001401D465C: add     rsp, 8
 * 00000001401D4660: call    loc_1401D4653
 * 00000001401D4665: add     rsp, 8
 * 00000001401D4669: call    loc_1401D465C
 * 00000001401D466E: add     rsp, 8
 * 00000001401D4672: call    loc_1401D4665
 * 00000001401D4677: add     rsp, 8
 * 00000001401D467B: call    loc_1401D466E
 * 00000001401D4680: add     rsp, 8
 * 00000001401D4684: call    loc_1401D4677
 * 00000001401D4689: add     rsp, 8
 * 00000001401D468D: call    loc_1401D4680
 * 00000001401D4692: add     rsp, 8
 * 00000001401D4696: lfence
 * 00000001401D4699: mov     byte ptr gs:853h, 0
 * 00000001401D46A2: test    byte ptr [r10+3], 80h
 * 00000001401D46A7: jz      short loc_1401D46EB
 * 00000001401D46A9: mov     ecx, 0C0000102h
 * 00000001401D46AE: rdmsr
 * 00000001401D46B0: shl     rdx, 20h
 * 00000001401D46B4: or      rax, rdx
 * 00000001401D46B7: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D46BE: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D46C6: cmp     [r10+0F0h], rax
 * 00000001401D46CD: jz      short loc_1401D46EB
 * 00000001401D46CF: mov     rdx, [r10+1F0h]
 * 00000001401D46D6: bts     dword ptr [r10+74h], 8
 * 00000001401D46DC: dec     word ptr [r10+1E6h]
 * 00000001401D46E4: mov     [rdx+80h], rax
 * 00000001401D46EB: test    byte ptr [r10+3], 3
 * 00000001401D46F0: mov     word ptr [rbp+80h], 0
 * 00000001401D46F9: jz      short loc_1401D4700
 * 00000001401D46FB: call    KiSaveDebugRegisterState
 * 00000001401D4700: cld
 * 00000001401D4701: stmxcsr dword ptr [rbp-54h]
 * 00000001401D4705: ldmxcsr dword ptr gs:180h
 * 00000001401D470E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D4712: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401D4716: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401D471A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401D471E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401D4722: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401D4726: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D472D: jz      short loc_1401D473B
 * 00000001401D472F: test    byte ptr [rbp+0F0h], 1
 * 00000001401D4736: jz      short loc_1401D473B
 * 00000001401D4738: stac
 * 00000001401D473B: test    dword ptr [rbp+0F8h], 200h
 * 00000001401D4745: jz      short loc_1401D4748
 * 00000001401D4747: sti
 * 00000001401D4748: mov     ecx, 80000003h
 * 00000001401D474D: mov     edx, 1
 * 00000001401D4752: mov     r9, [rbp-50h]
 * 00000001401D4756: mov     r8, [rbp+0E8h]
 * 00000001401D475D: call    KiExceptionDispatch
 * 00000001401D4762: nop
 * 00000001401D4763: retn
 */
