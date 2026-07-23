/*
 * XREFs of KiPageFault @ 0x1401CB600
 * Callers:
 *     KiPageFaultShadow @ 0x14032F800 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D0C80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KdSetOwedBreakpoints @ 0x14028D1E0 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x1402E9EB0 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x1401CB600
 * Reason: Hex-Rays returned no pseudocode for 0x1401CB600
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CB600: push    rbp
 * 00000001401CB601: sub     rsp, 158h
 * 00000001401CB608: lea     rbp, [rsp+80h]
 * 00000001401CB610: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CB614: mov     [rbp+0D8h+var_128], rax
 * 00000001401CB618: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CB61C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CB620: mov     [rbp+0D8h+var_110], r8
 * 00000001401CB624: mov     [rbp+0D8h+var_108], r9
 * 00000001401CB628: mov     [rbp+0D8h+var_100], r10
 * 00000001401CB62C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CB630: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401CB637: jnz     short loc_1401CB668
 * 00000001401CB639: lfence
 * 00000001401CB63C: test    word ptr gs:860h, 1
 * 00000001401CB647: jnz     short loc_1401CB651
 * 00000001401CB649: lfence
 * 00000001401CB64C: jmp     loc_1401CB8CA
 * 00000001401CB651: movzx   eax, word ptr gs:864h
 * 00000001401CB65A: mov     ecx, 48h ; 'H'
 * 00000001401CB65F: xor     edx, edx
 * 00000001401CB661: wrmsr
 * 00000001401CB663: jmp     loc_1401CB8CA
 * 00000001401CB668: test    cs:KiKvaShadow, 1
 * 00000001401CB66F: jnz     short loc_1401CB674
 * 00000001401CB671: swapgs
 * 00000001401CB674: lfence
 * 00000001401CB677: mov     r10, gs:188h
 * 00000001401CB680: mov     rcx, gs:188h
 * 00000001401CB689: mov     rcx, [rcx+220h]
 * 00000001401CB690: mov     rcx, [rcx+830h]
 * 00000001401CB697: mov     gs:858h, rcx
 * 00000001401CB6A0: mov     cx, gs:850h
 * 00000001401CB6A9: mov     gs:852h, cx
 * 00000001401CB6B2: mov     cx, gs:860h
 * 00000001401CB6BB: mov     gs:854h, cx
 * 00000001401CB6C4: movzx   eax, word ptr gs:866h
 * 00000001401CB6CD: cmp     gs:864h, ax
 * 00000001401CB6D6: jz      short loc_1401CB6EA
 * 00000001401CB6D8: mov     gs:864h, ax
 * 00000001401CB6E1: mov     ecx, 48h ; 'H'
 * 00000001401CB6E6: xor     edx, edx
 * 00000001401CB6E8: wrmsr
 * 00000001401CB6EA: movzx   edx, word ptr gs:860h
 * 00000001401CB6F3: test    edx, 8
 * 00000001401CB6F9: jz      short loc_1401CB712
 * 00000001401CB6FB: mov     eax, 1
 * 00000001401CB700: xor     edx, edx
 * 00000001401CB702: mov     ecx, 49h ; 'I'
 * 00000001401CB707: wrmsr
 * 00000001401CB709: movzx   edx, word ptr gs:860h
 * 00000001401CB712: test    edx, 2
 * 00000001401CB718: jz      loc_1401CB843
 * 00000001401CB71E: call    loc_1401CB831
 * 00000001401CB723: add     rsp, 8
 * 00000001401CB727: call    loc_1401CB83A
 * 00000001401CB72C: add     rsp, 8
 * 00000001401CB730: call    loc_1401CB723
 * 00000001401CB735: add     rsp, 8
 * 00000001401CB739: call    loc_1401CB72C
 * 00000001401CB73E: add     rsp, 8
 * 00000001401CB742: call    loc_1401CB735
 * 00000001401CB747: add     rsp, 8
 * 00000001401CB74B: call    loc_1401CB73E
 * 00000001401CB750: add     rsp, 8
 * 00000001401CB754: call    loc_1401CB747
 * 00000001401CB759: add     rsp, 8
 * 00000001401CB75D: call    loc_1401CB750
 * 00000001401CB762: add     rsp, 8
 * 00000001401CB766: call    loc_1401CB759
 * 00000001401CB76B: add     rsp, 8
 * 00000001401CB76F: call    loc_1401CB762
 * 00000001401CB774: add     rsp, 8
 * 00000001401CB778: call    loc_1401CB76B
 * 00000001401CB77D: add     rsp, 8
 * 00000001401CB781: call    loc_1401CB774
 * 00000001401CB786: add     rsp, 8
 * 00000001401CB78A: call    loc_1401CB77D
 * 00000001401CB78F: add     rsp, 8
 * 00000001401CB793: call    loc_1401CB786
 * 00000001401CB798: add     rsp, 8
 * 00000001401CB79C: call    loc_1401CB78F
 * 00000001401CB7A1: add     rsp, 8
 * 00000001401CB7A5: call    loc_1401CB798
 * 00000001401CB7AA: add     rsp, 8
 * 00000001401CB7AE: call    loc_1401CB7A1
 * 00000001401CB7B3: add     rsp, 8
 * 00000001401CB7B7: call    loc_1401CB7AA
 * 00000001401CB7BC: add     rsp, 8
 * 00000001401CB7C0: call    loc_1401CB7B3
 * 00000001401CB7C5: add     rsp, 8
 * 00000001401CB7C9: call    loc_1401CB7BC
 * 00000001401CB7CE: add     rsp, 8
 * 00000001401CB7D2: call    loc_1401CB7C5
 * 00000001401CB7D7: add     rsp, 8
 * 00000001401CB7DB: call    loc_1401CB7CE
 * 00000001401CB7E0: add     rsp, 8
 * 00000001401CB7E4: call    loc_1401CB7D7
 * 00000001401CB7E9: add     rsp, 8
 * 00000001401CB7ED: call    loc_1401CB7E0
 * 00000001401CB7F2: add     rsp, 8
 * 00000001401CB7F6: call    loc_1401CB7E9
 * 00000001401CB7FB: add     rsp, 8
 * 00000001401CB7FF: call    loc_1401CB7F2
 * 00000001401CB804: add     rsp, 8
 * 00000001401CB808: call    loc_1401CB7FB
 * 00000001401CB80D: add     rsp, 8
 * 00000001401CB811: call    loc_1401CB804
 * 00000001401CB816: add     rsp, 8
 * 00000001401CB81A: call    loc_1401CB80D
 * 00000001401CB81F: add     rsp, 8
 * 00000001401CB823: call    loc_1401CB816
 * 00000001401CB828: add     rsp, 8
 * 00000001401CB82C: call    loc_1401CB81F
 * 00000001401CB831: add     rsp, 8
 * 00000001401CB835: call    loc_1401CB828
 * 00000001401CB83A: add     rsp, 8
 * 00000001401CB83E: mov     eax, 0DADAh
 * 00000001401CB843: test    edx, 200h
 * 00000001401CB849: jz      short loc_1401CB850
 * 00000001401CB84B: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CB850: lfence
 * 00000001401CB853: mov     byte ptr gs:856h, 0
 * 00000001401CB85C: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401CB864: jnz     short loc_1401CB8B5
 * 00000001401CB866: mov     ecx, 0C0000102h
 * 00000001401CB86B: rdmsr
 * 00000001401CB86D: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001401CB870: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001401CB873: test    byte ptr [r10+3], 80h
 * 00000001401CB878: jz      short loc_1401CB8B5
 * 00000001401CB87A: shl     rdx, 20h
 * 00000001401CB87E: or      rax, rdx
 * 00000001401CB881: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CB888: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CB890: cmp     [r10+0F0h], rax
 * 00000001401CB897: jz      short loc_1401CB8B5
 * 00000001401CB899: mov     rdx, [r10+1F0h]
 * 00000001401CB8A0: bts     dword ptr [r10+74h], 8
 * 00000001401CB8A6: dec     word ptr [r10+1E6h]
 * 00000001401CB8AE: mov     [rdx+80h], rax
 * 00000001401CB8B5: test    byte ptr [r10+3], 3
 * 00000001401CB8BA: mov     [rbp+0D8h+var_58], 0
 * 00000001401CB8C3: jz      short loc_1401CB8CA
 * 00000001401CB8C5: call    KiSaveDebugRegisterState
 * 00000001401CB8CA: cld
 * 00000001401CB8CB: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CB8CF: ldmxcsr dword ptr gs:180h
 * 00000001401CB8D8: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CB8DC: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CB8E0: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CB8E4: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CB8E8: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CB8EC: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CB8F0: mov     eax, [rbp+0E0h]
 * 00000001401CB8F6: mov     rcx, cr2
 * 00000001401CB8F9: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CB903: jz      short loc_1401CB906
 * 00000001401CB905: sti
 * 00000001401CB906: mov     r9, gs:188h
 * 00000001401CB90F: bt      dword ptr [r9+74h], 8
 * 00000001401CB915: jnb     short loc_1401CB925
 * 00000001401CB917: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401CB91E: jz      short loc_1401CB925
 * 00000001401CB920: call    KiUmsTrapEntry
 * 00000001401CB925: mov     [rbp+0D8h+var_88], rcx
 * 00000001401CB929: bt      [rbp+0D8h+arg_10], 9
 * 00000001401CB931: jnb     loc_1401CBA63
 * 00000001401CB937: lea     r9, [rbp+0D8h+var_158]
 * 00000001401CB93B: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 00000001401CB942: and     r8b, 1
 * 00000001401CB946: mov     rdx, rcx; ULONG_PTR
 * 00000001401CB949: mov     ecx, eax; BugCheckParameter2
 * 00000001401CB94B: shr     eax, 1
 * 00000001401CB94D: and     eax, 9
 * 00000001401CB950: mov     [rbp+0D8h+var_12E], al
 * 00000001401CB953: call    MmAccessFault
 * 00000001401CB958: test    eax, eax
 * 00000001401CB95A: jl      short loc_1401CB992
 * 00000001401CB95C: cmp     cs:PsWatchEnabled, 0
 * 00000001401CB963: jz      short loc_1401CB977
 * 00000001401CB965: mov     r8, [rbp+0D8h+var_88]
 * 00000001401CB969: mov     rdx, [rbp+0D8h+arg_0]
 * 00000001401CB970: mov     ecx, eax
 * 00000001401CB972: call    PsWatchWorkingSet
 * 00000001401CB977: cmp     cs:KdpOweBreakpoint, 0
 * 00000001401CB97E: jz      loc_1401CBA69
 * 00000001401CB984: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401CB988: call    KdSetOwedBreakpoints
 * 00000001401CB98D: jmp     loc_1401CBA69
 * 00000001401CB992: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401CB999: jz      short loc_1401CB9ED
 * 00000001401CB99B: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401CB9A3: jnz     short loc_1401CB9E3
 * 00000001401CB9A5: mov     r9, gs:188h
 * 00000001401CB9AE: test    byte ptr [r9+3], 4
 * 00000001401CB9B3: jz      short loc_1401CB9BE
 * 00000001401CB9B5: mov     r8, [r9+7A8h]
 * 00000001401CB9BC: jmp     short loc_1401CB9C7
 * 00000001401CB9BE: mov     r8, gs:30h
 * 00000001401CB9C7: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001401CB9CB: jz      short loc_1401CB9ED
 * 00000001401CB9CD: mov     ecx, 0C0000102h
 * 00000001401CB9D2: mov     eax, r8d
 * 00000001401CB9D5: shr     r8, 20h
 * 00000001401CB9D9: mov     edx, r8d
 * 00000001401CB9DC: wrmsr
 * 00000001401CB9DE: jmp     loc_1401CBA69
 * 00000001401CB9E3: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401CB9E7: shr     rcx, 20h
 * 00000001401CB9EB: jnz     short loc_1401CBA69
 * 00000001401CB9ED: mov     ecx, eax
 * 00000001401CB9EF: mov     edx, 2
 * 00000001401CB9F4: cmp     ecx, 0D0000006h
 * 00000001401CB9FA: jz      short loc_1401CBA3D
 * 00000001401CB9FC: cmp     ecx, 0C0000005h
 * 00000001401CBA02: jz      short loc_1401CBA23
 * 00000001401CBA04: cmp     ecx, 80000001h
 * 00000001401CBA0A: jz      short loc_1401CBA28
 * 00000001401CBA0C: cmp     ecx, 0C00000FDh
 * 00000001401CBA12: jz      short loc_1401CBA28
 * 00000001401CBA14: mov     ecx, 0C0000006h
 * 00000001401CBA19: mov     edx, 3
 * 00000001401CBA1E: mov     r11d, eax
 * 00000001401CBA21: jmp     short loc_1401CBA28
 * 00000001401CBA23: mov     ecx, 10000004h
 * 00000001401CBA28: mov     r10, [rbp+0D8h+var_88]
 * 00000001401CBA2C: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401CBA31: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CBA38: call    KiExceptionDispatch
 * 00000001401CBA3D: mov     rax, cr8
 * 00000001401CBA41: mov     r10, [rbp+0D8h+arg_0]
 * 00000001401CBA48: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401CBA4D: and     eax, 0FFh
 * 00000001401CBA52: mov     r8, rax
 * 00000001401CBA55: mov     rdx, [rbp+0D8h+var_88]
 * 00000001401CBA59: mov     ecx, 0Ah
 * 00000001401CBA5E: call    KiBugCheckDispatch
 * 00000001401CBA63: xor     eax, eax
 * 00000001401CBA65: mov     al, 0FFh
 * 00000001401CBA67: jmp     short loc_1401CBA41
 * 00000001401CBA69: mov     rax, cr8
 * 00000001401CBA6D: or      eax, eax
 * 00000001401CBA6F: mov     [rbp+0D8h+var_138], eax
 * 00000001401CBA72: jnz     short loc_1401CBA7D
 * 00000001401CBA74: mov     ecx, 1
 * 00000001401CBA79: mov     cr8, rcx
 * 00000001401CBA7D: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401CBA81: call    KiCheckForSListAddress
 * 00000001401CBA86: mov     ecx, [rbp+0D8h+var_138]
 * 00000001401CBA89: or      ecx, ecx
 * 00000001401CBA8B: jnz     short loc_1401CBA91
 * 00000001401CBA8D: mov     cr8, rcx
 * 00000001401CBA91: cli
 * 00000001401CBA92: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401CBA99: jz      loc_1401CBD40
 * 00000001401CBA9F: mov     rcx, gs:188h
 * 00000001401CBAA8: test    byte ptr [rcx+0C2h], 3
 * 00000001401CBAAF: jz      short loc_1401CBACC
 * 00000001401CBAB1: mov     ecx, 1
 * 00000001401CBAB6: mov     cr8, rcx
 * 00000001401CBABA: sti
 * 00000001401CBABB: call    KiInitiateUserApc
 * 00000001401CBAC0: cli
 * 00000001401CBAC1: mov     ecx, 0
 * 00000001401CBAC6: mov     cr8, rcx
 * 00000001401CBACA: jmp     short loc_1401CBA9F
 * 00000001401CBACC: test    byte ptr gs:86Ch, 2
 * 00000001401CBAD5: jz      short loc_1401CBADE
 * 00000001401CBAD7: xor     ecx, ecx
 * 00000001401CBAD9: call    KiUpdateStibpPairing
 * 00000001401CBADE: mov     rcx, gs:188h
 * 00000001401CBAE7: test    dword ptr [rcx], 8000000h
 * 00000001401CBAED: jz      short loc_1401CBAF4
 * 00000001401CBAEF: call    KiRestoreSetContextState
 * 00000001401CBAF4: mov     rcx, gs:188h
 * 00000001401CBAFD: test    dword ptr [rcx], 40010000h
 * 00000001401CBB03: jz      short loc_1401CBB2A
 * 00000001401CBB05: test    byte ptr [rcx+2], 1
 * 00000001401CBB09: jz      short loc_1401CBB19
 * 00000001401CBB0B: call    KiCopyCounters
 * 00000001401CBB10: mov     rcx, gs:188h
 * 00000001401CBB19: test    byte ptr [rcx+3], 40h
 * 00000001401CBB1D: jz      short loc_1401CBB2A
 * 00000001401CBB1F: lea     rsp, [rbp-80h]
 * 00000001401CBB23: mov     cl, 1
 * 00000001401CBB25: call    KiUmsExit
 * 00000001401CBB2A: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401CBB2E: cmp     [rbp+0D8h+var_58], 0
 * 00000001401CBB36: jz      short loc_1401CBB3D
 * 00000001401CBB38: call    KiRestoreDebugRegisterState
 * 00000001401CBB3D: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401CBB41: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401CBB45: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401CBB49: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401CBB4D: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401CBB51: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401CBB55: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401CBB59: mov     r10, [rbp+0D8h+var_100]
 * 00000001401CBB5D: mov     r9, [rbp+0D8h+var_108]
 * 00000001401CBB61: mov     r8, [rbp+0D8h+var_110]
 * 00000001401CBB65: mov     byte ptr gs:856h, 0
 * 00000001401CBB6E: movzx   eax, word ptr gs:86Ah
 * 00000001401CBB77: cmp     gs:864h, ax
 * 00000001401CBB80: jz      short loc_1401CBB94
 * 00000001401CBB82: mov     gs:864h, ax
 * 00000001401CBB8B: mov     ecx, 48h ; 'H'
 * 00000001401CBB90: xor     edx, edx
 * 00000001401CBB92: wrmsr
 * 00000001401CBB94: btr     word ptr gs:860h, 2
 * 00000001401CBB9F: jnb     short loc_1401CBBAF
 * 00000001401CBBA1: mov     eax, 1
 * 00000001401CBBA6: xor     edx, edx
 * 00000001401CBBA8: mov     ecx, 49h ; 'I'
 * 00000001401CBBAD: wrmsr
 * 00000001401CBBAF: btr     word ptr gs:860h, 5
 * 00000001401CBBBA: jnb     loc_1401CBCE5
 * 00000001401CBBC0: call    loc_1401CBCD3
 * 00000001401CBBC5: add     rsp, 8
 * 00000001401CBBC9: call    loc_1401CBCDC
 * 00000001401CBBCE: add     rsp, 8
 * 00000001401CBBD2: call    loc_1401CBBC5
 * 00000001401CBBD7: add     rsp, 8
 * 00000001401CBBDB: call    loc_1401CBBCE
 * 00000001401CBBE0: add     rsp, 8
 * 00000001401CBBE4: call    loc_1401CBBD7
 * 00000001401CBBE9: add     rsp, 8
 * 00000001401CBBED: call    loc_1401CBBE0
 * 00000001401CBBF2: add     rsp, 8
 * 00000001401CBBF6: call    loc_1401CBBE9
 * 00000001401CBBFB: add     rsp, 8
 * 00000001401CBBFF: call    loc_1401CBBF2
 * 00000001401CBC04: add     rsp, 8
 * 00000001401CBC08: call    loc_1401CBBFB
 * 00000001401CBC0D: add     rsp, 8
 * 00000001401CBC11: call    loc_1401CBC04
 * 00000001401CBC16: add     rsp, 8
 * 00000001401CBC1A: call    loc_1401CBC0D
 * 00000001401CBC1F: add     rsp, 8
 * 00000001401CBC23: call    loc_1401CBC16
 * 00000001401CBC28: add     rsp, 8
 * 00000001401CBC2C: call    loc_1401CBC1F
 * 00000001401CBC31: add     rsp, 8
 * 00000001401CBC35: call    loc_1401CBC28
 * 00000001401CBC3A: add     rsp, 8
 * 00000001401CBC3E: call    loc_1401CBC31
 * 00000001401CBC43: add     rsp, 8
 * 00000001401CBC47: call    loc_1401CBC3A
 * 00000001401CBC4C: add     rsp, 8
 * 00000001401CBC50: call    loc_1401CBC43
 * 00000001401CBC55: add     rsp, 8
 * 00000001401CBC59: call    loc_1401CBC4C
 * 00000001401CBC5E: add     rsp, 8
 * 00000001401CBC62: call    loc_1401CBC55
 * 00000001401CBC67: add     rsp, 8
 * 00000001401CBC6B: call    loc_1401CBC5E
 * 00000001401CBC70: add     rsp, 8
 * 00000001401CBC74: call    loc_1401CBC67
 * 00000001401CBC79: add     rsp, 8
 * 00000001401CBC7D: call    loc_1401CBC70
 * 00000001401CBC82: add     rsp, 8
 * 00000001401CBC86: call    loc_1401CBC79
 * 00000001401CBC8B: add     rsp, 8
 * 00000001401CBC8F: call    loc_1401CBC82
 * 00000001401CBC94: add     rsp, 8
 * 00000001401CBC98: call    loc_1401CBC8B
 * 00000001401CBC9D: add     rsp, 8
 * 00000001401CBCA1: call    loc_1401CBC94
 * 00000001401CBCA6: add     rsp, 8
 * 00000001401CBCAA: call    loc_1401CBC9D
 * 00000001401CBCAF: add     rsp, 8
 * 00000001401CBCB3: call    loc_1401CBCA6
 * 00000001401CBCB8: add     rsp, 8
 * 00000001401CBCBC: call    loc_1401CBCAF
 * 00000001401CBCC1: add     rsp, 8
 * 00000001401CBCC5: call    loc_1401CBCB8
 * 00000001401CBCCA: add     rsp, 8
 * 00000001401CBCCE: call    loc_1401CBCC1
 * 00000001401CBCD3: add     rsp, 8
 * 00000001401CBCD7: call    loc_1401CBCCA
 * 00000001401CBCDC: add     rsp, 8
 * 00000001401CBCE0: mov     eax, 0DADAh
 * 00000001401CBCE5: test    word ptr gs:860h, 80h
 * 00000001401CBCF0: jz      short loc_1401CBCFE
 * 00000001401CBCF2: xor     eax, eax
 * 00000001401CBCF4: xor     edx, edx
 * 00000001401CBCF6: mov     ecx, 1
 * 00000001401CBCFB: div     rcx
 * 00000001401CBCFE: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401CBD02: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401CBD06: mov     rax, [rbp+0D8h+var_128]
 * 00000001401CBD0A: mov     rsp, rbp
 * 00000001401CBD0D: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401CBD14: add     rsp, 0E8h
 * 00000001401CBD1B: test    cs:KiKvaShadow, 1
 * 00000001401CBD22: jz      short loc_1401CBD29
 * 00000001401CBD24: jmp     KiKernelExit
 * 00000001401CBD29: test    word ptr gs:860h, 100h
 * 00000001401CBD34: jz      short loc_1401CBD3B
 * 00000001401CBD36: verw    [rsp-10h+arg_20]
 * 00000001401CBD3B: swapgs
 * 00000001401CBD3E: iretq
 * 00000001401CBD40: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401CBD44: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401CBD48: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401CBD4C: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401CBD50: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401CBD54: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401CBD58: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401CBD5C: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401CBD60: mov     r10, [rbp+0D8h+var_100]
 * 00000001401CBD64: mov     r9, [rbp+0D8h+var_108]
 * 00000001401CBD68: mov     r8, [rbp+0D8h+var_110]
 * 00000001401CBD6C: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401CBD70: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401CBD74: mov     rax, [rbp+0D8h+var_128]
 * 00000001401CBD78: mov     rsp, rbp
 * 00000001401CBD7B: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401CBD82: add     rsp, 0E8h
 * 00000001401CBD89: iretq
 */
