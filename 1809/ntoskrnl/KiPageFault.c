/*
 * XREFs of KiPageFault @ 0x1401CB500
 * Callers:
 *     KiPageFaultShadow @ 0x14032E800 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x1401CB500 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1401CFE00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D0B80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KdSetOwedBreakpoints @ 0x14028CFF0 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x1402E9CC0 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x1401CB500
 * Reason: Hex-Rays returned no pseudocode for 0x1401CB500
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CB500: push    rbp
 * 00000001401CB501: sub     rsp, 158h
 * 00000001401CB508: lea     rbp, [rsp+80h]
 * 00000001401CB510: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CB514: mov     [rbp+0D8h+var_128], rax
 * 00000001401CB518: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CB51C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CB520: mov     [rbp+0D8h+var_110], r8
 * 00000001401CB524: mov     [rbp+0D8h+var_108], r9
 * 00000001401CB528: mov     [rbp+0D8h+var_100], r10
 * 00000001401CB52C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CB530: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401CB537: jnz     short loc_1401CB568
 * 00000001401CB539: lfence
 * 00000001401CB53C: test    word ptr gs:860h, 1
 * 00000001401CB547: jnz     short loc_1401CB551
 * 00000001401CB549: lfence
 * 00000001401CB54C: jmp     loc_1401CB7CA
 * 00000001401CB551: movzx   eax, word ptr gs:864h
 * 00000001401CB55A: mov     ecx, 48h ; 'H'
 * 00000001401CB55F: xor     edx, edx
 * 00000001401CB561: wrmsr
 * 00000001401CB563: jmp     loc_1401CB7CA
 * 00000001401CB568: test    cs:KiKvaShadow, 1
 * 00000001401CB56F: jnz     short loc_1401CB574
 * 00000001401CB571: swapgs
 * 00000001401CB574: lfence
 * 00000001401CB577: mov     r10, gs:188h
 * 00000001401CB580: mov     rcx, gs:188h
 * 00000001401CB589: mov     rcx, [rcx+220h]
 * 00000001401CB590: mov     rcx, [rcx+830h]
 * 00000001401CB597: mov     gs:858h, rcx
 * 00000001401CB5A0: mov     cx, gs:850h
 * 00000001401CB5A9: mov     gs:852h, cx
 * 00000001401CB5B2: mov     cx, gs:860h
 * 00000001401CB5BB: mov     gs:854h, cx
 * 00000001401CB5C4: movzx   eax, word ptr gs:866h
 * 00000001401CB5CD: cmp     gs:864h, ax
 * 00000001401CB5D6: jz      short loc_1401CB5EA
 * 00000001401CB5D8: mov     gs:864h, ax
 * 00000001401CB5E1: mov     ecx, 48h ; 'H'
 * 00000001401CB5E6: xor     edx, edx
 * 00000001401CB5E8: wrmsr
 * 00000001401CB5EA: movzx   edx, word ptr gs:860h
 * 00000001401CB5F3: test    edx, 8
 * 00000001401CB5F9: jz      short loc_1401CB612
 * 00000001401CB5FB: mov     eax, 1
 * 00000001401CB600: xor     edx, edx
 * 00000001401CB602: mov     ecx, 49h ; 'I'
 * 00000001401CB607: wrmsr
 * 00000001401CB609: movzx   edx, word ptr gs:860h
 * 00000001401CB612: test    edx, 2
 * 00000001401CB618: jz      loc_1401CB743
 * 00000001401CB61E: call    loc_1401CB731
 * 00000001401CB623: add     rsp, 8
 * 00000001401CB627: call    loc_1401CB73A
 * 00000001401CB62C: add     rsp, 8
 * 00000001401CB630: call    loc_1401CB623
 * 00000001401CB635: add     rsp, 8
 * 00000001401CB639: call    loc_1401CB62C
 * 00000001401CB63E: add     rsp, 8
 * 00000001401CB642: call    loc_1401CB635
 * 00000001401CB647: add     rsp, 8
 * 00000001401CB64B: call    loc_1401CB63E
 * 00000001401CB650: add     rsp, 8
 * 00000001401CB654: call    loc_1401CB647
 * 00000001401CB659: add     rsp, 8
 * 00000001401CB65D: call    loc_1401CB650
 * 00000001401CB662: add     rsp, 8
 * 00000001401CB666: call    loc_1401CB659
 * 00000001401CB66B: add     rsp, 8
 * 00000001401CB66F: call    loc_1401CB662
 * 00000001401CB674: add     rsp, 8
 * 00000001401CB678: call    loc_1401CB66B
 * 00000001401CB67D: add     rsp, 8
 * 00000001401CB681: call    loc_1401CB674
 * 00000001401CB686: add     rsp, 8
 * 00000001401CB68A: call    loc_1401CB67D
 * 00000001401CB68F: add     rsp, 8
 * 00000001401CB693: call    loc_1401CB686
 * 00000001401CB698: add     rsp, 8
 * 00000001401CB69C: call    loc_1401CB68F
 * 00000001401CB6A1: add     rsp, 8
 * 00000001401CB6A5: call    loc_1401CB698
 * 00000001401CB6AA: add     rsp, 8
 * 00000001401CB6AE: call    loc_1401CB6A1
 * 00000001401CB6B3: add     rsp, 8
 * 00000001401CB6B7: call    loc_1401CB6AA
 * 00000001401CB6BC: add     rsp, 8
 * 00000001401CB6C0: call    loc_1401CB6B3
 * 00000001401CB6C5: add     rsp, 8
 * 00000001401CB6C9: call    loc_1401CB6BC
 * 00000001401CB6CE: add     rsp, 8
 * 00000001401CB6D2: call    loc_1401CB6C5
 * 00000001401CB6D7: add     rsp, 8
 * 00000001401CB6DB: call    loc_1401CB6CE
 * 00000001401CB6E0: add     rsp, 8
 * 00000001401CB6E4: call    loc_1401CB6D7
 * 00000001401CB6E9: add     rsp, 8
 * 00000001401CB6ED: call    loc_1401CB6E0
 * 00000001401CB6F2: add     rsp, 8
 * 00000001401CB6F6: call    loc_1401CB6E9
 * 00000001401CB6FB: add     rsp, 8
 * 00000001401CB6FF: call    loc_1401CB6F2
 * 00000001401CB704: add     rsp, 8
 * 00000001401CB708: call    loc_1401CB6FB
 * 00000001401CB70D: add     rsp, 8
 * 00000001401CB711: call    loc_1401CB704
 * 00000001401CB716: add     rsp, 8
 * 00000001401CB71A: call    loc_1401CB70D
 * 00000001401CB71F: add     rsp, 8
 * 00000001401CB723: call    loc_1401CB716
 * 00000001401CB728: add     rsp, 8
 * 00000001401CB72C: call    loc_1401CB71F
 * 00000001401CB731: add     rsp, 8
 * 00000001401CB735: call    loc_1401CB728
 * 00000001401CB73A: add     rsp, 8
 * 00000001401CB73E: mov     eax, 0DADAh
 * 00000001401CB743: test    edx, 200h
 * 00000001401CB749: jz      short loc_1401CB750
 * 00000001401CB74B: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CB750: lfence
 * 00000001401CB753: mov     byte ptr gs:856h, 0
 * 00000001401CB75C: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401CB764: jnz     short loc_1401CB7B5
 * 00000001401CB766: mov     ecx, 0C0000102h
 * 00000001401CB76B: rdmsr
 * 00000001401CB76D: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001401CB770: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001401CB773: test    byte ptr [r10+3], 80h
 * 00000001401CB778: jz      short loc_1401CB7B5
 * 00000001401CB77A: shl     rdx, 20h
 * 00000001401CB77E: or      rax, rdx
 * 00000001401CB781: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CB788: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CB790: cmp     [r10+0F0h], rax
 * 00000001401CB797: jz      short loc_1401CB7B5
 * 00000001401CB799: mov     rdx, [r10+1F0h]
 * 00000001401CB7A0: bts     dword ptr [r10+74h], 8
 * 00000001401CB7A6: dec     word ptr [r10+1E6h]
 * 00000001401CB7AE: mov     [rdx+80h], rax
 * 00000001401CB7B5: test    byte ptr [r10+3], 3
 * 00000001401CB7BA: mov     [rbp+0D8h+var_58], 0
 * 00000001401CB7C3: jz      short loc_1401CB7CA
 * 00000001401CB7C5: call    KiSaveDebugRegisterState
 * 00000001401CB7CA: cld
 * 00000001401CB7CB: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CB7CF: ldmxcsr dword ptr gs:180h
 * 00000001401CB7D8: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CB7DC: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CB7E0: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CB7E4: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CB7E8: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CB7EC: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CB7F0: mov     eax, [rbp+0E0h]
 * 00000001401CB7F6: mov     rcx, cr2
 * 00000001401CB7F9: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CB803: jz      short loc_1401CB806
 * 00000001401CB805: sti
 * 00000001401CB806: mov     r9, gs:188h
 * 00000001401CB80F: bt      dword ptr [r9+74h], 8
 * 00000001401CB815: jnb     short loc_1401CB825
 * 00000001401CB817: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401CB81E: jz      short loc_1401CB825
 * 00000001401CB820: call    KiUmsTrapEntry
 * 00000001401CB825: mov     [rbp+0D8h+var_88], rcx
 * 00000001401CB829: bt      [rbp+0D8h+arg_10], 9
 * 00000001401CB831: jnb     loc_1401CB963
 * 00000001401CB837: lea     r9, [rbp+0D8h+var_158]
 * 00000001401CB83B: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 00000001401CB842: and     r8b, 1
 * 00000001401CB846: mov     rdx, rcx; ULONG_PTR
 * 00000001401CB849: mov     ecx, eax; BugCheckParameter2
 * 00000001401CB84B: shr     eax, 1
 * 00000001401CB84D: and     eax, 9
 * 00000001401CB850: mov     [rbp+0D8h+var_12E], al
 * 00000001401CB853: call    MmAccessFault
 * 00000001401CB858: test    eax, eax
 * 00000001401CB85A: jl      short loc_1401CB892
 * 00000001401CB85C: cmp     cs:PsWatchEnabled, 0
 * 00000001401CB863: jz      short loc_1401CB877
 * 00000001401CB865: mov     r8, [rbp+0D8h+var_88]
 * 00000001401CB869: mov     rdx, [rbp+0D8h+arg_0]
 * 00000001401CB870: mov     ecx, eax
 * 00000001401CB872: call    PsWatchWorkingSet
 * 00000001401CB877: cmp     cs:KdpOweBreakpoint, 0
 * 00000001401CB87E: jz      loc_1401CB969
 * 00000001401CB884: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401CB888: call    KdSetOwedBreakpoints
 * 00000001401CB88D: jmp     loc_1401CB969
 * 00000001401CB892: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401CB899: jz      short loc_1401CB8ED
 * 00000001401CB89B: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401CB8A3: jnz     short loc_1401CB8E3
 * 00000001401CB8A5: mov     r9, gs:188h
 * 00000001401CB8AE: test    byte ptr [r9+3], 4
 * 00000001401CB8B3: jz      short loc_1401CB8BE
 * 00000001401CB8B5: mov     r8, [r9+7A8h]
 * 00000001401CB8BC: jmp     short loc_1401CB8C7
 * 00000001401CB8BE: mov     r8, gs:30h
 * 00000001401CB8C7: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001401CB8CB: jz      short loc_1401CB8ED
 * 00000001401CB8CD: mov     ecx, 0C0000102h
 * 00000001401CB8D2: mov     eax, r8d
 * 00000001401CB8D5: shr     r8, 20h
 * 00000001401CB8D9: mov     edx, r8d
 * 00000001401CB8DC: wrmsr
 * 00000001401CB8DE: jmp     loc_1401CB969
 * 00000001401CB8E3: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401CB8E7: shr     rcx, 20h
 * 00000001401CB8EB: jnz     short loc_1401CB969
 * 00000001401CB8ED: mov     ecx, eax
 * 00000001401CB8EF: mov     edx, 2
 * 00000001401CB8F4: cmp     ecx, 0D0000006h
 * 00000001401CB8FA: jz      short loc_1401CB93D
 * 00000001401CB8FC: cmp     ecx, 0C0000005h
 * 00000001401CB902: jz      short loc_1401CB923
 * 00000001401CB904: cmp     ecx, 80000001h
 * 00000001401CB90A: jz      short loc_1401CB928
 * 00000001401CB90C: cmp     ecx, 0C00000FDh
 * 00000001401CB912: jz      short loc_1401CB928
 * 00000001401CB914: mov     ecx, 0C0000006h
 * 00000001401CB919: mov     edx, 3
 * 00000001401CB91E: mov     r11d, eax
 * 00000001401CB921: jmp     short loc_1401CB928
 * 00000001401CB923: mov     ecx, 10000004h
 * 00000001401CB928: mov     r10, [rbp+0D8h+var_88]
 * 00000001401CB92C: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401CB931: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CB938: call    KiExceptionDispatch
 * 00000001401CB93D: mov     rax, cr8
 * 00000001401CB941: mov     r10, [rbp+0D8h+arg_0]
 * 00000001401CB948: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401CB94D: and     eax, 0FFh
 * 00000001401CB952: mov     r8, rax
 * 00000001401CB955: mov     rdx, [rbp+0D8h+var_88]
 * 00000001401CB959: mov     ecx, 0Ah
 * 00000001401CB95E: call    KiBugCheckDispatch
 * 00000001401CB963: xor     eax, eax
 * 00000001401CB965: mov     al, 0FFh
 * 00000001401CB967: jmp     short loc_1401CB941
 * 00000001401CB969: mov     rax, cr8
 * 00000001401CB96D: or      eax, eax
 * 00000001401CB96F: mov     [rbp+0D8h+var_138], eax
 * 00000001401CB972: jnz     short loc_1401CB97D
 * 00000001401CB974: mov     ecx, 1
 * 00000001401CB979: mov     cr8, rcx
 * 00000001401CB97D: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401CB981: call    KiCheckForSListAddress
 * 00000001401CB986: mov     ecx, [rbp+0D8h+var_138]
 * 00000001401CB989: or      ecx, ecx
 * 00000001401CB98B: jnz     short loc_1401CB991
 * 00000001401CB98D: mov     cr8, rcx
 * 00000001401CB991: cli
 * 00000001401CB992: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401CB999: jz      loc_1401CBC40
 * 00000001401CB99F: mov     rcx, gs:188h
 * 00000001401CB9A8: test    byte ptr [rcx+0C2h], 3
 * 00000001401CB9AF: jz      short loc_1401CB9CC
 * 00000001401CB9B1: mov     ecx, 1
 * 00000001401CB9B6: mov     cr8, rcx
 * 00000001401CB9BA: sti
 * 00000001401CB9BB: call    KiInitiateUserApc
 * 00000001401CB9C0: cli
 * 00000001401CB9C1: mov     ecx, 0
 * 00000001401CB9C6: mov     cr8, rcx
 * 00000001401CB9CA: jmp     short loc_1401CB99F
 * 00000001401CB9CC: test    byte ptr gs:86Ch, 2
 * 00000001401CB9D5: jz      short loc_1401CB9DE
 * 00000001401CB9D7: xor     ecx, ecx
 * 00000001401CB9D9: call    KiUpdateStibpPairing
 * 00000001401CB9DE: mov     rcx, gs:188h
 * 00000001401CB9E7: test    dword ptr [rcx], 8000000h
 * 00000001401CB9ED: jz      short loc_1401CB9F4
 * 00000001401CB9EF: call    KiRestoreSetContextState
 * 00000001401CB9F4: mov     rcx, gs:188h
 * 00000001401CB9FD: test    dword ptr [rcx], 40010000h
 * 00000001401CBA03: jz      short loc_1401CBA2A
 * 00000001401CBA05: test    byte ptr [rcx+2], 1
 * 00000001401CBA09: jz      short loc_1401CBA19
 * 00000001401CBA0B: call    KiCopyCounters
 * 00000001401CBA10: mov     rcx, gs:188h
 * 00000001401CBA19: test    byte ptr [rcx+3], 40h
 * 00000001401CBA1D: jz      short loc_1401CBA2A
 * 00000001401CBA1F: lea     rsp, [rbp-80h]
 * 00000001401CBA23: mov     cl, 1
 * 00000001401CBA25: call    KiUmsExit
 * 00000001401CBA2A: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401CBA2E: cmp     [rbp+0D8h+var_58], 0
 * 00000001401CBA36: jz      short loc_1401CBA3D
 * 00000001401CBA38: call    KiRestoreDebugRegisterState
 * 00000001401CBA3D: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401CBA41: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401CBA45: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401CBA49: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401CBA4D: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401CBA51: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401CBA55: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401CBA59: mov     r10, [rbp+0D8h+var_100]
 * 00000001401CBA5D: mov     r9, [rbp+0D8h+var_108]
 * 00000001401CBA61: mov     r8, [rbp+0D8h+var_110]
 * 00000001401CBA65: mov     byte ptr gs:856h, 0
 * 00000001401CBA6E: movzx   eax, word ptr gs:86Ah
 * 00000001401CBA77: cmp     gs:864h, ax
 * 00000001401CBA80: jz      short loc_1401CBA94
 * 00000001401CBA82: mov     gs:864h, ax
 * 00000001401CBA8B: mov     ecx, 48h ; 'H'
 * 00000001401CBA90: xor     edx, edx
 * 00000001401CBA92: wrmsr
 * 00000001401CBA94: btr     word ptr gs:860h, 2
 * 00000001401CBA9F: jnb     short loc_1401CBAAF
 * 00000001401CBAA1: mov     eax, 1
 * 00000001401CBAA6: xor     edx, edx
 * 00000001401CBAA8: mov     ecx, 49h ; 'I'
 * 00000001401CBAAD: wrmsr
 * 00000001401CBAAF: btr     word ptr gs:860h, 5
 * 00000001401CBABA: jnb     loc_1401CBBE5
 * 00000001401CBAC0: call    loc_1401CBBD3
 * 00000001401CBAC5: add     rsp, 8
 * 00000001401CBAC9: call    loc_1401CBBDC
 * 00000001401CBACE: add     rsp, 8
 * 00000001401CBAD2: call    loc_1401CBAC5
 * 00000001401CBAD7: add     rsp, 8
 * 00000001401CBADB: call    loc_1401CBACE
 * 00000001401CBAE0: add     rsp, 8
 * 00000001401CBAE4: call    loc_1401CBAD7
 * 00000001401CBAE9: add     rsp, 8
 * 00000001401CBAED: call    loc_1401CBAE0
 * 00000001401CBAF2: add     rsp, 8
 * 00000001401CBAF6: call    loc_1401CBAE9
 * 00000001401CBAFB: add     rsp, 8
 * 00000001401CBAFF: call    loc_1401CBAF2
 * 00000001401CBB04: add     rsp, 8
 * 00000001401CBB08: call    loc_1401CBAFB
 * 00000001401CBB0D: add     rsp, 8
 * 00000001401CBB11: call    loc_1401CBB04
 * 00000001401CBB16: add     rsp, 8
 * 00000001401CBB1A: call    loc_1401CBB0D
 * 00000001401CBB1F: add     rsp, 8
 * 00000001401CBB23: call    loc_1401CBB16
 * 00000001401CBB28: add     rsp, 8
 * 00000001401CBB2C: call    loc_1401CBB1F
 * 00000001401CBB31: add     rsp, 8
 * 00000001401CBB35: call    loc_1401CBB28
 * 00000001401CBB3A: add     rsp, 8
 * 00000001401CBB3E: call    loc_1401CBB31
 * 00000001401CBB43: add     rsp, 8
 * 00000001401CBB47: call    loc_1401CBB3A
 * 00000001401CBB4C: add     rsp, 8
 * 00000001401CBB50: call    loc_1401CBB43
 * 00000001401CBB55: add     rsp, 8
 * 00000001401CBB59: call    loc_1401CBB4C
 * 00000001401CBB5E: add     rsp, 8
 * 00000001401CBB62: call    loc_1401CBB55
 * 00000001401CBB67: add     rsp, 8
 * 00000001401CBB6B: call    loc_1401CBB5E
 * 00000001401CBB70: add     rsp, 8
 * 00000001401CBB74: call    loc_1401CBB67
 * 00000001401CBB79: add     rsp, 8
 * 00000001401CBB7D: call    loc_1401CBB70
 * 00000001401CBB82: add     rsp, 8
 * 00000001401CBB86: call    loc_1401CBB79
 * 00000001401CBB8B: add     rsp, 8
 * 00000001401CBB8F: call    loc_1401CBB82
 * 00000001401CBB94: add     rsp, 8
 * 00000001401CBB98: call    loc_1401CBB8B
 * 00000001401CBB9D: add     rsp, 8
 * 00000001401CBBA1: call    loc_1401CBB94
 * 00000001401CBBA6: add     rsp, 8
 * 00000001401CBBAA: call    loc_1401CBB9D
 * 00000001401CBBAF: add     rsp, 8
 * 00000001401CBBB3: call    loc_1401CBBA6
 * 00000001401CBBB8: add     rsp, 8
 * 00000001401CBBBC: call    loc_1401CBBAF
 * 00000001401CBBC1: add     rsp, 8
 * 00000001401CBBC5: call    loc_1401CBBB8
 * 00000001401CBBCA: add     rsp, 8
 * 00000001401CBBCE: call    loc_1401CBBC1
 * 00000001401CBBD3: add     rsp, 8
 * 00000001401CBBD7: call    loc_1401CBBCA
 * 00000001401CBBDC: add     rsp, 8
 * 00000001401CBBE0: mov     eax, 0DADAh
 * 00000001401CBBE5: test    word ptr gs:860h, 80h
 * 00000001401CBBF0: jz      short loc_1401CBBFE
 * 00000001401CBBF2: xor     eax, eax
 * 00000001401CBBF4: xor     edx, edx
 * 00000001401CBBF6: mov     ecx, 1
 * 00000001401CBBFB: div     rcx
 * 00000001401CBBFE: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401CBC02: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401CBC06: mov     rax, [rbp+0D8h+var_128]
 * 00000001401CBC0A: mov     rsp, rbp
 * 00000001401CBC0D: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401CBC14: add     rsp, 0E8h
 * 00000001401CBC1B: test    cs:KiKvaShadow, 1
 * 00000001401CBC22: jz      short loc_1401CBC29
 * 00000001401CBC24: jmp     KiKernelExit
 * 00000001401CBC29: test    word ptr gs:860h, 100h
 * 00000001401CBC34: jz      short loc_1401CBC3B
 * 00000001401CBC36: verw    [rsp-10h+arg_20]
 * 00000001401CBC3B: swapgs
 * 00000001401CBC3E: iretq
 * 00000001401CBC40: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401CBC44: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401CBC48: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401CBC4C: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401CBC50: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401CBC54: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401CBC58: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401CBC5C: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401CBC60: mov     r10, [rbp+0D8h+var_100]
 * 00000001401CBC64: mov     r9, [rbp+0D8h+var_108]
 * 00000001401CBC68: mov     r8, [rbp+0D8h+var_110]
 * 00000001401CBC6C: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401CBC70: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401CBC74: mov     rax, [rbp+0D8h+var_128]
 * 00000001401CBC78: mov     rsp, rbp
 * 00000001401CBC7B: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401CBC82: add     rsp, 0E8h
 * 00000001401CBC89: iretq
 */
