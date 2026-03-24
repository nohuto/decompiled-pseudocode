/*
 * XREFs of KiControlProtectionFault @ 0x1401D4500
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140350B80 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x1401D4500 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1401D64C0 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x1401D6880 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x1401D7300 (KiUmsExit.c)
 *     KiProcessControlProtection @ 0x1402A4050 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x1401D4500
 * Reason: Hex-Rays returned no pseudocode for 0x1401D4500
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D4500: push    rbp
 * 00000001401D4501: sub     rsp, 158h
 * 00000001401D4508: lea     rbp, [rsp+80h]
 * 00000001401D4510: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D4514: mov     [rbp+0D8h+var_128], rax
 * 00000001401D4518: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D451C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D4520: mov     [rbp+0D8h+var_110], r8
 * 00000001401D4524: mov     [rbp+0D8h+var_108], r9
 * 00000001401D4528: mov     [rbp+0D8h+var_100], r10
 * 00000001401D452C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D4530: test    [rbp+0D8h+arg_8], 1
 * 00000001401D4537: jnz     short loc_1401D4566
 * 00000001401D4539: lfence
 * 00000001401D453C: test    byte ptr gs:278h, 1
 * 00000001401D4545: jnz     short loc_1401D454F
 * 00000001401D4547: lfence
 * 00000001401D454A: jmp     loc_1401D4762
 * 00000001401D454F: movzx   eax, byte ptr gs:27Ah
 * 00000001401D4558: mov     ecx, 48h ; 'H'
 * 00000001401D455D: xor     edx, edx
 * 00000001401D455F: wrmsr
 * 00000001401D4561: jmp     loc_1401D4762
 * 00000001401D4566: test    cs:KiKvaShadow, 1
 * 00000001401D456D: jnz     short loc_1401D4572
 * 00000001401D456F: swapgs
 * 00000001401D4572: lfence
 * 00000001401D4575: mov     r10, gs:188h
 * 00000001401D457E: mov     rcx, gs:188h
 * 00000001401D4587: mov     rcx, [rcx+220h]
 * 00000001401D458E: mov     rcx, [rcx+860h]
 * 00000001401D4595: mov     gs:270h, rcx
 * 00000001401D459E: mov     cl, gs:850h
 * 00000001401D45A6: mov     gs:851h, cl
 * 00000001401D45AE: mov     cl, gs:278h
 * 00000001401D45B6: mov     gs:852h, cl
 * 00000001401D45BE: movzx   eax, byte ptr gs:27Bh
 * 00000001401D45C7: cmp     gs:27Ah, al
 * 00000001401D45CF: jz      short loc_1401D45E2
 * 00000001401D45D1: mov     gs:27Ah, al
 * 00000001401D45D9: mov     ecx, 48h ; 'H'
 * 00000001401D45DE: xor     edx, edx
 * 00000001401D45E0: wrmsr
 * 00000001401D45E2: movzx   edx, byte ptr gs:278h
 * 00000001401D45EB: test    edx, 8
 * 00000001401D45F1: jz      short loc_1401D4606
 * 00000001401D45F3: mov     eax, 1
 * 00000001401D45F8: xor     edx, edx
 * 00000001401D45FA: mov     ecx, 49h ; 'I'
 * 00000001401D45FF: wrmsr
 * 00000001401D4601: jmp     loc_1401D4744
 * 00000001401D4606: test    edx, 2
 * 00000001401D460C: jz      loc_1401D4741
 * 00000001401D4612: test    byte ptr gs:279h, 4
 * 00000001401D461B: jnz     loc_1401D4741
 * 00000001401D4621: call    loc_1401D4734
 * 00000001401D4626: add     rsp, 8
 * 00000001401D462A: call    loc_1401D473D
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
 * 00000001401D4696: call    loc_1401D4689
 * 00000001401D469B: add     rsp, 8
 * 00000001401D469F: call    loc_1401D4692
 * 00000001401D46A4: add     rsp, 8
 * 00000001401D46A8: call    loc_1401D469B
 * 00000001401D46AD: add     rsp, 8
 * 00000001401D46B1: call    loc_1401D46A4
 * 00000001401D46B6: add     rsp, 8
 * 00000001401D46BA: call    loc_1401D46AD
 * 00000001401D46BF: add     rsp, 8
 * 00000001401D46C3: call    loc_1401D46B6
 * 00000001401D46C8: add     rsp, 8
 * 00000001401D46CC: call    loc_1401D46BF
 * 00000001401D46D1: add     rsp, 8
 * 00000001401D46D5: call    loc_1401D46C8
 * 00000001401D46DA: add     rsp, 8
 * 00000001401D46DE: call    loc_1401D46D1
 * 00000001401D46E3: add     rsp, 8
 * 00000001401D46E7: call    loc_1401D46DA
 * 00000001401D46EC: add     rsp, 8
 * 00000001401D46F0: call    loc_1401D46E3
 * 00000001401D46F5: add     rsp, 8
 * 00000001401D46F9: call    loc_1401D46EC
 * 00000001401D46FE: add     rsp, 8
 * 00000001401D4702: call    loc_1401D46F5
 * 00000001401D4707: add     rsp, 8
 * 00000001401D470B: call    loc_1401D46FE
 * 00000001401D4710: add     rsp, 8
 * 00000001401D4714: call    loc_1401D4707
 * 00000001401D4719: add     rsp, 8
 * 00000001401D471D: call    loc_1401D4710
 * 00000001401D4722: add     rsp, 8
 * 00000001401D4726: call    loc_1401D4719
 * 00000001401D472B: add     rsp, 8
 * 00000001401D472F: call    loc_1401D4722
 * 00000001401D4734: add     rsp, 8
 * 00000001401D4738: call    loc_1401D472B
 * 00000001401D473D: add     rsp, 8
 * 00000001401D4741: lfence
 * 00000001401D4744: mov     byte ptr gs:853h, 0
 * 00000001401D474D: test    byte ptr [r10+3], 3
 * 00000001401D4752: mov     [rbp+0D8h+var_58], 0
 * 00000001401D475B: jz      short loc_1401D4762
 * 00000001401D475D: call    KiSaveDebugRegisterState
 * 00000001401D4762: cld
 * 00000001401D4763: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D4767: ldmxcsr dword ptr gs:180h
 * 00000001401D4770: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D4774: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D4778: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D477C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D4780: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D4784: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D4788: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D478F: jz      short loc_1401D479D
 * 00000001401D4791: test    [rbp+0D8h+arg_8], 1
 * 00000001401D4798: jz      short loc_1401D479D
 * 00000001401D479A: stac
 * 00000001401D479D: mov     eax, [rbp+0E0h]
 * 00000001401D47A3: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D47AD: jz      short loc_1401D47B0
 * 00000001401D47AF: sti
 * 00000001401D47B0: test    byte ptr gs:6425h, 40h
 * 00000001401D47B9: jz      short loc_1401D47F6
 * 00000001401D47BB: mov     r9, gs:188h
 * 00000001401D47C4: test    byte ptr [r9+3], 80h
 * 00000001401D47C9: jnz     short loc_1401D47D8
 * 00000001401D47CB: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401D47CF: call    KiProcessControlProtection
 * 00000001401D47D4: test    al, al
 * 00000001401D47D6: jnz     short loc_1401D4805
 * 00000001401D47D8: mov     r9, 39h ; '9'
 * 00000001401D47DF: mov     ecx, 0C0000409h
 * 00000001401D47E4: mov     edx, 1
 * 00000001401D47E9: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D47F0: call    KiFastFailDispatch
 * 00000001401D47F5: nop
 * 00000001401D47F6: mov     edx, 15h
 * 00000001401D47FB: mov     ecx, 7Fh
 * 00000001401D4800: call    KiBugCheckDispatch
 * 00000001401D4805: cli
 * 00000001401D4806: test    [rbp+0D8h+arg_8], 1
 * 00000001401D480D: jz      loc_1401D495D
 * 00000001401D4813: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D481A: jz      short loc_1401D481F
 * 00000001401D481C: stac
 * 00000001401D481F: mov     rcx, gs:188h
 * 00000001401D4828: test    byte ptr [rcx+0C2h], 3
 * 00000001401D482F: jz      short loc_1401D484C
 * 00000001401D4831: mov     ecx, 1
 * 00000001401D4836: mov     cr8, rcx
 * 00000001401D483A: sti
 * 00000001401D483B: call    KiInitiateUserApc
 * 00000001401D4840: cli
 * 00000001401D4841: mov     ecx, 0
 * 00000001401D4846: mov     cr8, rcx
 * 00000001401D484A: jmp     short loc_1401D481F
 * 00000001401D484C: test    byte ptr gs:27Eh, 2
 * 00000001401D4855: jz      short loc_1401D485E
 * 00000001401D4857: xor     ecx, ecx
 * 00000001401D4859: call    KiUpdateStibpPairing
 * 00000001401D485E: mov     rcx, gs:188h
 * 00000001401D4867: test    dword ptr [rcx], 8000000h
 * 00000001401D486D: jz      short loc_1401D4874
 * 00000001401D486F: call    KiRestoreSetContextState
 * 00000001401D4874: mov     rcx, gs:188h
 * 00000001401D487D: test    dword ptr [rcx], 40010000h
 * 00000001401D4883: jz      short loc_1401D48AA
 * 00000001401D4885: test    byte ptr [rcx+2], 1
 * 00000001401D4889: jz      short loc_1401D4899
 * 00000001401D488B: call    KiCopyCounters
 * 00000001401D4890: mov     rcx, gs:188h
 * 00000001401D4899: test    byte ptr [rcx+3], 40h
 * 00000001401D489D: jz      short loc_1401D48AA
 * 00000001401D489F: lea     rsp, [rbp-80h]
 * 00000001401D48A3: mov     cl, 1
 * 00000001401D48A5: call    KiUmsExit
 * 00000001401D48AA: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401D48AE: cmp     [rbp+0D8h+var_58], 0
 * 00000001401D48B6: jz      short loc_1401D48BD
 * 00000001401D48B8: call    KiRestoreDebugRegisterState
 * 00000001401D48BD: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401D48C1: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401D48C5: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401D48C9: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401D48CD: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401D48D1: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401D48D5: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401D48D9: mov     r10, [rbp+0D8h+var_100]
 * 00000001401D48DD: mov     r9, [rbp+0D8h+var_108]
 * 00000001401D48E1: mov     r8, [rbp+0D8h+var_110]
 * 00000001401D48E5: mov     byte ptr gs:853h, 0
 * 00000001401D48EE: movzx   eax, byte ptr gs:27Dh
 * 00000001401D48F7: cmp     gs:27Ah, al
 * 00000001401D48FF: jz      short loc_1401D4912
 * 00000001401D4901: mov     gs:27Ah, al
 * 00000001401D4909: mov     ecx, 48h ; 'H'
 * 00000001401D490E: xor     edx, edx
 * 00000001401D4910: wrmsr
 * 00000001401D4912: btr     word ptr gs:278h, 2
 * 00000001401D491D: jnb     short loc_1401D492D
 * 00000001401D491F: mov     eax, 1
 * 00000001401D4924: xor     edx, edx
 * 00000001401D4926: mov     ecx, 49h ; 'I'
 * 00000001401D492B: wrmsr
 * 00000001401D492D: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401D4931: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401D4935: mov     rax, [rbp+0D8h+var_128]
 * 00000001401D4939: mov     rsp, rbp
 * 00000001401D493C: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401D4943: add     rsp, 0E8h
 * 00000001401D494A: test    cs:KiKvaShadow, 1
 * 00000001401D4951: jz      short loc_1401D4958
 * 00000001401D4953: jmp     KiKernelExit
 * 00000001401D4958: swapgs
 * 00000001401D495B: iretq
 * 00000001401D495D: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401D4961: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401D4965: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401D4969: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401D496D: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401D4971: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401D4975: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401D4979: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401D497D: mov     r10, [rbp+0D8h+var_100]
 * 00000001401D4981: mov     r9, [rbp+0D8h+var_108]
 * 00000001401D4985: mov     r8, [rbp+0D8h+var_110]
 * 00000001401D4989: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401D498D: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401D4991: mov     rax, [rbp+0D8h+var_128]
 * 00000001401D4995: mov     rsp, rbp
 * 00000001401D4998: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401D499F: add     rsp, 0E8h
 * 00000001401D49A6: iretq
 * 00000001401D49A8: retn
 */
