/*
 * XREFs of KiPageFault @ 0x1401D1800
 * Callers:
 *     KiPageFaultShadow @ 0x140350800 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x1401D1800 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x1401D58C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D6280 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D6700 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x1402A3090 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x140307280 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x1401D1800
 * Reason: Hex-Rays returned no pseudocode for 0x1401D1800
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D1800: push    rbp
 * 00000001401D1801: sub     rsp, 158h
 * 00000001401D1808: lea     rbp, [rsp+80h]
 * 00000001401D1810: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D1814: mov     [rbp+0D8h+var_128], rax
 * 00000001401D1818: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D181C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D1820: mov     [rbp+0D8h+var_110], r8
 * 00000001401D1824: mov     [rbp+0D8h+var_108], r9
 * 00000001401D1828: mov     [rbp+0D8h+var_100], r10
 * 00000001401D182C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D1830: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D1837: jnz     short loc_1401D1866
 * 00000001401D1839: lfence
 * 00000001401D183C: test    byte ptr gs:278h, 1
 * 00000001401D1845: jnz     short loc_1401D184F
 * 00000001401D1847: lfence
 * 00000001401D184A: jmp     loc_1401D1ABB
 * 00000001401D184F: movzx   eax, byte ptr gs:27Ah
 * 00000001401D1858: mov     ecx, 48h ; 'H'
 * 00000001401D185D: xor     edx, edx
 * 00000001401D185F: wrmsr
 * 00000001401D1861: jmp     loc_1401D1ABB
 * 00000001401D1866: test    cs:KiKvaShadow, 1
 * 00000001401D186D: jnz     short loc_1401D1872
 * 00000001401D186F: swapgs
 * 00000001401D1872: lfence
 * 00000001401D1875: mov     r10, gs:188h
 * 00000001401D187E: mov     rcx, gs:188h
 * 00000001401D1887: mov     rcx, [rcx+220h]
 * 00000001401D188E: mov     rcx, [rcx+860h]
 * 00000001401D1895: mov     gs:270h, rcx
 * 00000001401D189E: mov     cl, gs:850h
 * 00000001401D18A6: mov     gs:851h, cl
 * 00000001401D18AE: mov     cl, gs:278h
 * 00000001401D18B6: mov     gs:852h, cl
 * 00000001401D18BE: movzx   eax, byte ptr gs:27Bh
 * 00000001401D18C7: cmp     gs:27Ah, al
 * 00000001401D18CF: jz      short loc_1401D18E2
 * 00000001401D18D1: mov     gs:27Ah, al
 * 00000001401D18D9: mov     ecx, 48h ; 'H'
 * 00000001401D18DE: xor     edx, edx
 * 00000001401D18E0: wrmsr
 * 00000001401D18E2: movzx   edx, byte ptr gs:278h
 * 00000001401D18EB: test    edx, 8
 * 00000001401D18F1: jz      short loc_1401D1906
 * 00000001401D18F3: mov     eax, 1
 * 00000001401D18F8: xor     edx, edx
 * 00000001401D18FA: mov     ecx, 49h ; 'I'
 * 00000001401D18FF: wrmsr
 * 00000001401D1901: jmp     loc_1401D1A44
 * 00000001401D1906: test    edx, 2
 * 00000001401D190C: jz      loc_1401D1A41
 * 00000001401D1912: test    byte ptr gs:279h, 4
 * 00000001401D191B: jnz     loc_1401D1A41
 * 00000001401D1921: call    loc_1401D1A34
 * 00000001401D1926: add     rsp, 8
 * 00000001401D192A: call    loc_1401D1A3D
 * 00000001401D192F: add     rsp, 8
 * 00000001401D1933: call    loc_1401D1926
 * 00000001401D1938: add     rsp, 8
 * 00000001401D193C: call    loc_1401D192F
 * 00000001401D1941: add     rsp, 8
 * 00000001401D1945: call    loc_1401D1938
 * 00000001401D194A: add     rsp, 8
 * 00000001401D194E: call    loc_1401D1941
 * 00000001401D1953: add     rsp, 8
 * 00000001401D1957: call    loc_1401D194A
 * 00000001401D195C: add     rsp, 8
 * 00000001401D1960: call    loc_1401D1953
 * 00000001401D1965: add     rsp, 8
 * 00000001401D1969: call    loc_1401D195C
 * 00000001401D196E: add     rsp, 8
 * 00000001401D1972: call    loc_1401D1965
 * 00000001401D1977: add     rsp, 8
 * 00000001401D197B: call    loc_1401D196E
 * 00000001401D1980: add     rsp, 8
 * 00000001401D1984: call    loc_1401D1977
 * 00000001401D1989: add     rsp, 8
 * 00000001401D198D: call    loc_1401D1980
 * 00000001401D1992: add     rsp, 8
 * 00000001401D1996: call    loc_1401D1989
 * 00000001401D199B: add     rsp, 8
 * 00000001401D199F: call    loc_1401D1992
 * 00000001401D19A4: add     rsp, 8
 * 00000001401D19A8: call    loc_1401D199B
 * 00000001401D19AD: add     rsp, 8
 * 00000001401D19B1: call    loc_1401D19A4
 * 00000001401D19B6: add     rsp, 8
 * 00000001401D19BA: call    loc_1401D19AD
 * 00000001401D19BF: add     rsp, 8
 * 00000001401D19C3: call    loc_1401D19B6
 * 00000001401D19C8: add     rsp, 8
 * 00000001401D19CC: call    loc_1401D19BF
 * 00000001401D19D1: add     rsp, 8
 * 00000001401D19D5: call    loc_1401D19C8
 * 00000001401D19DA: add     rsp, 8
 * 00000001401D19DE: call    loc_1401D19D1
 * 00000001401D19E3: add     rsp, 8
 * 00000001401D19E7: call    loc_1401D19DA
 * 00000001401D19EC: add     rsp, 8
 * 00000001401D19F0: call    loc_1401D19E3
 * 00000001401D19F5: add     rsp, 8
 * 00000001401D19F9: call    loc_1401D19EC
 * 00000001401D19FE: add     rsp, 8
 * 00000001401D1A02: call    loc_1401D19F5
 * 00000001401D1A07: add     rsp, 8
 * 00000001401D1A0B: call    loc_1401D19FE
 * 00000001401D1A10: add     rsp, 8
 * 00000001401D1A14: call    loc_1401D1A07
 * 00000001401D1A19: add     rsp, 8
 * 00000001401D1A1D: call    loc_1401D1A10
 * 00000001401D1A22: add     rsp, 8
 * 00000001401D1A26: call    loc_1401D1A19
 * 00000001401D1A2B: add     rsp, 8
 * 00000001401D1A2F: call    loc_1401D1A22
 * 00000001401D1A34: add     rsp, 8
 * 00000001401D1A38: call    loc_1401D1A2B
 * 00000001401D1A3D: add     rsp, 8
 * 00000001401D1A41: lfence
 * 00000001401D1A44: mov     byte ptr gs:853h, 0
 * 00000001401D1A4D: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401D1A55: jnz     short loc_1401D1AA6
 * 00000001401D1A57: mov     ecx, 0C0000102h
 * 00000001401D1A5C: rdmsr
 * 00000001401D1A5E: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001401D1A61: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001401D1A64: test    byte ptr [r10+3], 80h
 * 00000001401D1A69: jz      short loc_1401D1AA6
 * 00000001401D1A6B: shl     rdx, 20h
 * 00000001401D1A6F: or      rax, rdx
 * 00000001401D1A72: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D1A79: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D1A81: cmp     [r10+0F0h], rax
 * 00000001401D1A88: jz      short loc_1401D1AA6
 * 00000001401D1A8A: mov     rdx, [r10+1F0h]
 * 00000001401D1A91: bts     dword ptr [r10+74h], 8
 * 00000001401D1A97: dec     word ptr [r10+1E6h]
 * 00000001401D1A9F: mov     [rdx+80h], rax
 * 00000001401D1AA6: test    byte ptr [r10+3], 3
 * 00000001401D1AAB: mov     [rbp+0D8h+var_58], 0
 * 00000001401D1AB4: jz      short loc_1401D1ABB
 * 00000001401D1AB6: call    KiSaveDebugRegisterState
 * 00000001401D1ABB: cld
 * 00000001401D1ABC: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D1AC0: ldmxcsr dword ptr gs:180h
 * 00000001401D1AC9: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D1ACD: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D1AD1: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D1AD5: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D1AD9: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D1ADD: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D1AE1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D1AE8: jz      short loc_1401D1AF6
 * 00000001401D1AEA: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D1AF1: jz      short loc_1401D1AF6
 * 00000001401D1AF3: stac
 * 00000001401D1AF6: mov     eax, [rbp+0E0h]
 * 00000001401D1AFC: mov     rcx, cr2
 * 00000001401D1AFF: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D1B09: jz      short loc_1401D1B0C
 * 00000001401D1B0B: sti
 * 00000001401D1B0C: mov     r9, gs:188h
 * 00000001401D1B15: bt      dword ptr [r9+74h], 8
 * 00000001401D1B1B: jnb     short loc_1401D1B2B
 * 00000001401D1B1D: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D1B24: jz      short loc_1401D1B2B
 * 00000001401D1B26: call    KiUmsTrapEntry
 * 00000001401D1B2B: mov     [rbp+0D8h+var_88], rcx
 * 00000001401D1B2F: bt      [rbp+0D8h+arg_10], 9
 * 00000001401D1B37: jnb     loc_1401D1C69
 * 00000001401D1B3D: lea     r9, [rbp+0D8h+var_158]
 * 00000001401D1B41: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 00000001401D1B48: and     r8b, 1
 * 00000001401D1B4C: mov     rdx, rcx; BugCheckParameter1
 * 00000001401D1B4F: mov     ecx, eax; BugCheckParameter2
 * 00000001401D1B51: shr     eax, 1
 * 00000001401D1B53: and     eax, 9
 * 00000001401D1B56: mov     [rbp+0D8h+var_12E], al
 * 00000001401D1B59: call    MmAccessFault
 * 00000001401D1B5E: test    eax, eax
 * 00000001401D1B60: jl      short loc_1401D1B98
 * 00000001401D1B62: cmp     cs:PsWatchEnabled, 0
 * 00000001401D1B69: jz      short loc_1401D1B7D
 * 00000001401D1B6B: mov     r8, [rbp+0D8h+var_88]
 * 00000001401D1B6F: mov     rdx, [rbp+0D8h+arg_0]
 * 00000001401D1B76: mov     ecx, eax
 * 00000001401D1B78: call    PsWatchWorkingSet
 * 00000001401D1B7D: cmp     cs:KdpOweBreakpoint, 0
 * 00000001401D1B84: jz      loc_1401D1C6F
 * 00000001401D1B8A: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401D1B8E: call    KdSetOwedBreakpoints
 * 00000001401D1B93: jmp     loc_1401D1C6F
 * 00000001401D1B98: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D1B9F: jz      short loc_1401D1BF3
 * 00000001401D1BA1: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001401D1BA9: jnz     short loc_1401D1BE9
 * 00000001401D1BAB: mov     r9, gs:188h
 * 00000001401D1BB4: test    byte ptr [r9+3], 4
 * 00000001401D1BB9: jz      short loc_1401D1BC4
 * 00000001401D1BBB: mov     r8, [r9+7B8h]
 * 00000001401D1BC2: jmp     short loc_1401D1BCD
 * 00000001401D1BC4: mov     r8, gs:30h
 * 00000001401D1BCD: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001401D1BD1: jz      short loc_1401D1BF3
 * 00000001401D1BD3: mov     ecx, 0C0000102h
 * 00000001401D1BD8: mov     eax, r8d
 * 00000001401D1BDB: shr     r8, 20h
 * 00000001401D1BDF: mov     edx, r8d
 * 00000001401D1BE2: wrmsr
 * 00000001401D1BE4: jmp     loc_1401D1C6F
 * 00000001401D1BE9: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401D1BED: shr     rcx, 20h
 * 00000001401D1BF1: jnz     short loc_1401D1C6F
 * 00000001401D1BF3: mov     ecx, eax
 * 00000001401D1BF5: mov     edx, 2
 * 00000001401D1BFA: cmp     ecx, 0D0000006h
 * 00000001401D1C00: jz      short loc_1401D1C43
 * 00000001401D1C02: cmp     ecx, 0C0000005h
 * 00000001401D1C08: jz      short loc_1401D1C29
 * 00000001401D1C0A: cmp     ecx, 80000001h
 * 00000001401D1C10: jz      short loc_1401D1C2E
 * 00000001401D1C12: cmp     ecx, 0C00000FDh
 * 00000001401D1C18: jz      short loc_1401D1C2E
 * 00000001401D1C1A: mov     ecx, 0C0000006h
 * 00000001401D1C1F: mov     edx, 3
 * 00000001401D1C24: mov     r11d, eax
 * 00000001401D1C27: jmp     short loc_1401D1C2E
 * 00000001401D1C29: mov     ecx, 10000004h
 * 00000001401D1C2E: mov     r10, [rbp+0D8h+var_88]
 * 00000001401D1C32: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401D1C37: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D1C3E: call    KiExceptionDispatch
 * 00000001401D1C43: mov     rax, cr8
 * 00000001401D1C47: mov     r10, [rbp+0D8h+arg_0]
 * 00000001401D1C4E: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001401D1C53: and     eax, 0FFh
 * 00000001401D1C58: mov     r8, rax
 * 00000001401D1C5B: mov     rdx, [rbp+0D8h+var_88]
 * 00000001401D1C5F: mov     ecx, 0Ah
 * 00000001401D1C64: call    KiBugCheckDispatch
 * 00000001401D1C69: xor     eax, eax
 * 00000001401D1C6B: mov     al, 0FFh
 * 00000001401D1C6D: jmp     short loc_1401D1C47
 * 00000001401D1C6F: mov     rax, cr8
 * 00000001401D1C73: or      eax, eax
 * 00000001401D1C75: mov     [rbp+0D8h+var_138], eax
 * 00000001401D1C78: jnz     short loc_1401D1C83
 * 00000001401D1C7A: mov     ecx, 1
 * 00000001401D1C7F: mov     cr8, rcx
 * 00000001401D1C83: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401D1C87: call    KiCheckForSListAddress
 * 00000001401D1C8C: mov     ecx, [rbp+0D8h+var_138]
 * 00000001401D1C8F: or      ecx, ecx
 * 00000001401D1C91: jnz     short loc_1401D1C97
 * 00000001401D1C93: mov     cr8, rcx
 * 00000001401D1C97: cli
 * 00000001401D1C98: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401D1C9F: jz      loc_1401D1DEF
 * 00000001401D1CA5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D1CAC: jz      short loc_1401D1CB1
 * 00000001401D1CAE: stac
 * 00000001401D1CB1: mov     rcx, gs:188h
 * 00000001401D1CBA: test    byte ptr [rcx+0C2h], 3
 * 00000001401D1CC1: jz      short loc_1401D1CDE
 * 00000001401D1CC3: mov     ecx, 1
 * 00000001401D1CC8: mov     cr8, rcx
 * 00000001401D1CCC: sti
 * 00000001401D1CCD: call    KiInitiateUserApc
 * 00000001401D1CD2: cli
 * 00000001401D1CD3: mov     ecx, 0
 * 00000001401D1CD8: mov     cr8, rcx
 * 00000001401D1CDC: jmp     short loc_1401D1CB1
 * 00000001401D1CDE: test    byte ptr gs:27Eh, 2
 * 00000001401D1CE7: jz      short loc_1401D1CF0
 * 00000001401D1CE9: xor     ecx, ecx
 * 00000001401D1CEB: call    KiUpdateStibpPairing
 * 00000001401D1CF0: mov     rcx, gs:188h
 * 00000001401D1CF9: test    dword ptr [rcx], 8000000h
 * 00000001401D1CFF: jz      short loc_1401D1D06
 * 00000001401D1D01: call    KiRestoreSetContextState
 * 00000001401D1D06: mov     rcx, gs:188h
 * 00000001401D1D0F: test    dword ptr [rcx], 40010000h
 * 00000001401D1D15: jz      short loc_1401D1D3C
 * 00000001401D1D17: test    byte ptr [rcx+2], 1
 * 00000001401D1D1B: jz      short loc_1401D1D2B
 * 00000001401D1D1D: call    KiCopyCounters
 * 00000001401D1D22: mov     rcx, gs:188h
 * 00000001401D1D2B: test    byte ptr [rcx+3], 40h
 * 00000001401D1D2F: jz      short loc_1401D1D3C
 * 00000001401D1D31: lea     rsp, [rbp-80h]
 * 00000001401D1D35: mov     cl, 1
 * 00000001401D1D37: call    KiUmsExit
 * 00000001401D1D3C: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401D1D40: cmp     [rbp+0D8h+var_58], 0
 * 00000001401D1D48: jz      short loc_1401D1D4F
 * 00000001401D1D4A: call    KiRestoreDebugRegisterState
 * 00000001401D1D4F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401D1D53: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401D1D57: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401D1D5B: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401D1D5F: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401D1D63: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401D1D67: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401D1D6B: mov     r10, [rbp+0D8h+var_100]
 * 00000001401D1D6F: mov     r9, [rbp+0D8h+var_108]
 * 00000001401D1D73: mov     r8, [rbp+0D8h+var_110]
 * 00000001401D1D77: mov     byte ptr gs:853h, 0
 * 00000001401D1D80: movzx   eax, byte ptr gs:27Dh
 * 00000001401D1D89: cmp     gs:27Ah, al
 * 00000001401D1D91: jz      short loc_1401D1DA4
 * 00000001401D1D93: mov     gs:27Ah, al
 * 00000001401D1D9B: mov     ecx, 48h ; 'H'
 * 00000001401D1DA0: xor     edx, edx
 * 00000001401D1DA2: wrmsr
 * 00000001401D1DA4: btr     word ptr gs:278h, 2
 * 00000001401D1DAF: jnb     short loc_1401D1DBF
 * 00000001401D1DB1: mov     eax, 1
 * 00000001401D1DB6: xor     edx, edx
 * 00000001401D1DB8: mov     ecx, 49h ; 'I'
 * 00000001401D1DBD: wrmsr
 * 00000001401D1DBF: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401D1DC3: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401D1DC7: mov     rax, [rbp+0D8h+var_128]
 * 00000001401D1DCB: mov     rsp, rbp
 * 00000001401D1DCE: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401D1DD5: add     rsp, 0E8h
 * 00000001401D1DDC: test    cs:KiKvaShadow, 1
 * 00000001401D1DE3: jz      short loc_1401D1DEA
 * 00000001401D1DE5: jmp     KiKernelExit
 * 00000001401D1DEA: swapgs
 * 00000001401D1DED: iretq
 * 00000001401D1DEF: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401D1DF3: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401D1DF7: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401D1DFB: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401D1DFF: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401D1E03: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401D1E07: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401D1E0B: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401D1E0F: mov     r10, [rbp+0D8h+var_100]
 * 00000001401D1E13: mov     r9, [rbp+0D8h+var_108]
 * 00000001401D1E17: mov     r8, [rbp+0D8h+var_110]
 * 00000001401D1E1B: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401D1E1F: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401D1E23: mov     rax, [rbp+0D8h+var_128]
 * 00000001401D1E27: mov     rsp, rbp
 * 00000001401D1E2A: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401D1E31: add     rsp, 0E8h
 * 00000001401D1E38: iretq
 */
