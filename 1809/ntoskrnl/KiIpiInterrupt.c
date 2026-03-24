/*
 * XREFs of KiIpiInterrupt @ 0x1401C3800
 * Callers:
 *     KiIpiInterruptShadow @ 0x14032F200 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1401C3800 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401C3EC0 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140293C90 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1401C3800
 * Reason: Hex-Rays returned no pseudocode for 0x1401C3800
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C3800: sub     rsp, 8
 * 00000001401C3804: push    rbp
 * 00000001401C3805: push    rsi
 * 00000001401C3806: sub     rsp, 150h
 * 00000001401C380D: lea     rbp, [rsp+80h]
 * 00000001401C3815: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C3819: mov     [rbp+0E8h+var_138], rax
 * 00000001401C381D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C3821: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C3825: mov     [rbp+0E8h+var_120], r8
 * 00000001401C3829: mov     [rbp+0E8h+var_118], r9
 * 00000001401C382D: mov     [rbp+0E8h+var_110], r10
 * 00000001401C3831: mov     [rbp+0E8h+var_108], r11
 * 00000001401C3835: test    [rbp+0E8h+arg_0], 1
 * 00000001401C383C: jnz     short loc_1401C386D
 * 00000001401C383E: lfence
 * 00000001401C3841: test    word ptr gs:860h, 1
 * 00000001401C384C: jnz     short loc_1401C3856
 * 00000001401C384E: lfence
 * 00000001401C3851: jmp     loc_1401C3A76
 * 00000001401C3856: movzx   eax, word ptr gs:864h
 * 00000001401C385F: mov     ecx, 48h ; 'H'
 * 00000001401C3864: xor     edx, edx
 * 00000001401C3866: wrmsr
 * 00000001401C3868: jmp     loc_1401C3A76
 * 00000001401C386D: test    cs:KiKvaShadow, 1
 * 00000001401C3874: jnz     short loc_1401C3879
 * 00000001401C3876: swapgs
 * 00000001401C3879: lfence
 * 00000001401C387C: mov     r10, gs:188h
 * 00000001401C3885: mov     rcx, gs:188h
 * 00000001401C388E: mov     rcx, [rcx+220h]
 * 00000001401C3895: mov     rcx, [rcx+830h]
 * 00000001401C389C: mov     gs:858h, rcx
 * 00000001401C38A5: mov     cx, gs:850h
 * 00000001401C38AE: mov     gs:852h, cx
 * 00000001401C38B7: mov     cx, gs:860h
 * 00000001401C38C0: mov     gs:854h, cx
 * 00000001401C38C9: movzx   eax, word ptr gs:866h
 * 00000001401C38D2: cmp     gs:864h, ax
 * 00000001401C38DB: jz      short loc_1401C38EF
 * 00000001401C38DD: mov     gs:864h, ax
 * 00000001401C38E6: mov     ecx, 48h ; 'H'
 * 00000001401C38EB: xor     edx, edx
 * 00000001401C38ED: wrmsr
 * 00000001401C38EF: movzx   edx, word ptr gs:860h
 * 00000001401C38F8: test    edx, 8
 * 00000001401C38FE: jz      short loc_1401C3917
 * 00000001401C3900: mov     eax, 1
 * 00000001401C3905: xor     edx, edx
 * 00000001401C3907: mov     ecx, 49h ; 'I'
 * 00000001401C390C: wrmsr
 * 00000001401C390E: movzx   edx, word ptr gs:860h
 * 00000001401C3917: test    edx, 2
 * 00000001401C391D: jz      loc_1401C3A48
 * 00000001401C3923: call    loc_1401C3A36
 * 00000001401C3928: add     rsp, 8
 * 00000001401C392C: call    loc_1401C3A3F
 * 00000001401C3931: add     rsp, 8
 * 00000001401C3935: call    loc_1401C3928
 * 00000001401C393A: add     rsp, 8
 * 00000001401C393E: call    loc_1401C3931
 * 00000001401C3943: add     rsp, 8
 * 00000001401C3947: call    loc_1401C393A
 * 00000001401C394C: add     rsp, 8
 * 00000001401C3950: call    loc_1401C3943
 * 00000001401C3955: add     rsp, 8
 * 00000001401C3959: call    loc_1401C394C
 * 00000001401C395E: add     rsp, 8
 * 00000001401C3962: call    loc_1401C3955
 * 00000001401C3967: add     rsp, 8
 * 00000001401C396B: call    loc_1401C395E
 * 00000001401C3970: add     rsp, 8
 * 00000001401C3974: call    loc_1401C3967
 * 00000001401C3979: add     rsp, 8
 * 00000001401C397D: call    loc_1401C3970
 * 00000001401C3982: add     rsp, 8
 * 00000001401C3986: call    loc_1401C3979
 * 00000001401C398B: add     rsp, 8
 * 00000001401C398F: call    loc_1401C3982
 * 00000001401C3994: add     rsp, 8
 * 00000001401C3998: call    loc_1401C398B
 * 00000001401C399D: add     rsp, 8
 * 00000001401C39A1: call    loc_1401C3994
 * 00000001401C39A6: add     rsp, 8
 * 00000001401C39AA: call    loc_1401C399D
 * 00000001401C39AF: add     rsp, 8
 * 00000001401C39B3: call    loc_1401C39A6
 * 00000001401C39B8: add     rsp, 8
 * 00000001401C39BC: call    loc_1401C39AF
 * 00000001401C39C1: add     rsp, 8
 * 00000001401C39C5: call    loc_1401C39B8
 * 00000001401C39CA: add     rsp, 8
 * 00000001401C39CE: call    loc_1401C39C1
 * 00000001401C39D3: add     rsp, 8
 * 00000001401C39D7: call    loc_1401C39CA
 * 00000001401C39DC: add     rsp, 8
 * 00000001401C39E0: call    loc_1401C39D3
 * 00000001401C39E5: add     rsp, 8
 * 00000001401C39E9: call    loc_1401C39DC
 * 00000001401C39EE: add     rsp, 8
 * 00000001401C39F2: call    loc_1401C39E5
 * 00000001401C39F7: add     rsp, 8
 * 00000001401C39FB: call    loc_1401C39EE
 * 00000001401C3A00: add     rsp, 8
 * 00000001401C3A04: call    loc_1401C39F7
 * 00000001401C3A09: add     rsp, 8
 * 00000001401C3A0D: call    loc_1401C3A00
 * 00000001401C3A12: add     rsp, 8
 * 00000001401C3A16: call    loc_1401C3A09
 * 00000001401C3A1B: add     rsp, 8
 * 00000001401C3A1F: call    loc_1401C3A12
 * 00000001401C3A24: add     rsp, 8
 * 00000001401C3A28: call    loc_1401C3A1B
 * 00000001401C3A2D: add     rsp, 8
 * 00000001401C3A31: call    loc_1401C3A24
 * 00000001401C3A36: add     rsp, 8
 * 00000001401C3A3A: call    loc_1401C3A2D
 * 00000001401C3A3F: add     rsp, 8
 * 00000001401C3A43: mov     eax, 0DADAh
 * 00000001401C3A48: test    edx, 200h
 * 00000001401C3A4E: jz      short loc_1401C3A55
 * 00000001401C3A50: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C3A55: lfence
 * 00000001401C3A58: mov     byte ptr gs:856h, 0
 * 00000001401C3A61: test    byte ptr [r10+3], 3
 * 00000001401C3A66: mov     [rbp+0E8h+var_68], 0
 * 00000001401C3A6F: jz      short loc_1401C3A76
 * 00000001401C3A71: call    KiSaveDebugRegisterState
 * 00000001401C3A76: cld
 * 00000001401C3A77: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C3A7B: ldmxcsr dword ptr gs:180h
 * 00000001401C3A84: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C3A88: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C3A8C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C3A90: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C3A94: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C3A98: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C3A9C: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C3AA5: jz      short loc_1401C3AAC
 * 00000001401C3AA7: call    KeWakeProcessor
 * 00000001401C3AAC: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C3AB3: cmp     rax, [rbp+0E8h]
 * 00000001401C3ABA: jnb     short loc_1401C3AD5
 * 00000001401C3ABC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C3AC3: cmp     rax, [rbp+0E8h]
 * 00000001401C3ACA: jb      short loc_1401C3AD5
 * 00000001401C3ACC: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401C3AD0: call    KiCheckForSListAddress
 * 00000001401C3AD5: xor     esi, esi
 * 00000001401C3AD7: inc     dword ptr gs:5D00h
 * 00000001401C3ADF: mov     rdx, rsp
 * 00000001401C3AE2: mov     rcx, gs:6458h
 * 00000001401C3AEB: lea     rax, [rcx-6000h]
 * 00000001401C3AF2: cmp     rax, rsp
 * 00000001401C3AF5: ja      short loc_1401C3AFC
 * 00000001401C3AF7: cmp     rsp, rcx
 * 00000001401C3AFA: jb      short loc_1401C3B08
 * 00000001401C3AFC: cmp     cs:KiBugCheckActive, 0
 * 00000001401C3B03: jnz     short loc_1401C3B08
 * 00000001401C3B05: mov     rsp, rcx
 * 00000001401C3B08: sub     rsp, 20h
 * 00000001401C3B0C: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001401C3B11: call    KiIpiInterruptSubDispatch
 * 00000001401C3B16: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001401C3B1B: mov     rcx, rsi
 * 00000001401C3B1E: call    HalPerformEndOfInterrupt_0
 * 00000001401C3B23: mov     rcx, gs:20h
 * 00000001401C3B2C: cmp     byte ptr [rcx+20h], 1
 * 00000001401C3B30: ja      short loc_1401C3BAC
 * 00000001401C3B32: rdtsc
 * 00000001401C3B34: shl     rdx, 20h
 * 00000001401C3B38: or      rax, rdx
 * 00000001401C3B3B: sub     rax, [rcx+5BC0h]
 * 00000001401C3B42: add     [rcx+5C38h], rax
 * 00000001401C3B49: add     [rcx+5BC0h], rax
 * 00000001401C3B50: mov     r8, rax
 * 00000001401C3B53: mov     rax, [rcx+8]
 * 00000001401C3B57: test    byte ptr [rax+2], 72h
 * 00000001401C3B5B: jz      short loc_1401C3B70
 * 00000001401C3B5D: xor     edx, edx
 * 00000001401C3B5F: call    KiBeginThreadAccountingPeriod
 * 00000001401C3B64: mov     rcx, gs:20h
 * 00000001401C3B6D: inc     byte ptr [rcx+20h]
 * 00000001401C3B70: mov     dl, [rcx+6]
 * 00000001401C3B73: and     byte ptr [rcx+6], 0
 * 00000001401C3B77: cmp     byte ptr [rcx+7], 0
 * 00000001401C3B7B: jnz     short loc_1401C3BAC
 * 00000001401C3B7D: test    dl, dl
 * 00000001401C3B7F: jz      short loc_1401C3BAC
 * 00000001401C3B81: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401C3B85: jnb     short loc_1401C3B92
 * 00000001401C3B87: and     byte ptr [rcx+20h], 0
 * 00000001401C3B8B: call    KiDpcInterruptBypass
 * 00000001401C3B90: jmp     short loc_1401C3BAF
 * 00000001401C3B92: mov     ecx, 2
 * 00000001401C3B97: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C3B9E: nop     dword ptr [rax+rax+00h]
 * 00000001401C3BA3: mov     rcx, gs:20h
 * 00000001401C3BAC: dec     byte ptr [rcx+20h]
 * 00000001401C3BAF: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C3BB3: cmp     cs:KiIrqlFlags, 0
 * 00000001401C3BBA: jz      short loc_1401C3BC3
 * 00000001401C3BBC: call    KzSetIrqlUnsafe
 * 00000001401C3BC1: jmp     short loc_1401C3BC7
 * 00000001401C3BC3: mov     cr8, rcx
 * 00000001401C3BC7: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C3BCE: test    [rbp+0E8h+arg_0], 1
 * 00000001401C3BD5: jz      loc_1401C3E6B
 * 00000001401C3BDB: mov     rcx, gs:188h
 * 00000001401C3BE4: test    byte ptr [rcx+0C2h], 3
 * 00000001401C3BEB: jz      short loc_1401C3C08
 * 00000001401C3BED: mov     ecx, 1
 * 00000001401C3BF2: mov     cr8, rcx
 * 00000001401C3BF6: sti
 * 00000001401C3BF7: call    KiInitiateUserApc
 * 00000001401C3BFC: cli
 * 00000001401C3BFD: mov     ecx, 0
 * 00000001401C3C02: mov     cr8, rcx
 * 00000001401C3C06: jmp     short loc_1401C3BDB
 * 00000001401C3C08: test    byte ptr gs:86Ch, 2
 * 00000001401C3C11: jz      short loc_1401C3C1A
 * 00000001401C3C13: xor     ecx, ecx
 * 00000001401C3C15: call    KiUpdateStibpPairing
 * 00000001401C3C1A: mov     rcx, gs:188h
 * 00000001401C3C23: test    dword ptr [rcx], 8000000h
 * 00000001401C3C29: jz      short loc_1401C3C30
 * 00000001401C3C2B: call    KiRestoreSetContextState
 * 00000001401C3C30: mov     rcx, gs:188h
 * 00000001401C3C39: test    dword ptr [rcx], 40010000h
 * 00000001401C3C3F: jz      short loc_1401C3C55
 * 00000001401C3C41: test    byte ptr [rcx+2], 1
 * 00000001401C3C45: jz      short loc_1401C3C55
 * 00000001401C3C47: call    KiCopyCounters
 * 00000001401C3C4C: mov     rcx, gs:188h
 * 00000001401C3C55: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C3C59: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C3C61: jz      short loc_1401C3C68
 * 00000001401C3C63: call    KiRestoreDebugRegisterState
 * 00000001401C3C68: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C3C6C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C3C70: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C3C74: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C3C78: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C3C7C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C3C80: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C3C84: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C3C88: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C3C8C: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C3C90: mov     byte ptr gs:856h, 0
 * 00000001401C3C99: movzx   eax, word ptr gs:86Ah
 * 00000001401C3CA2: cmp     gs:864h, ax
 * 00000001401C3CAB: jz      short loc_1401C3CBF
 * 00000001401C3CAD: mov     gs:864h, ax
 * 00000001401C3CB6: mov     ecx, 48h ; 'H'
 * 00000001401C3CBB: xor     edx, edx
 * 00000001401C3CBD: wrmsr
 * 00000001401C3CBF: btr     word ptr gs:860h, 2
 * 00000001401C3CCA: jnb     short loc_1401C3CDA
 * 00000001401C3CCC: mov     eax, 1
 * 00000001401C3CD1: xor     edx, edx
 * 00000001401C3CD3: mov     ecx, 49h ; 'I'
 * 00000001401C3CD8: wrmsr
 * 00000001401C3CDA: btr     word ptr gs:860h, 5
 * 00000001401C3CE5: jnb     loc_1401C3E10
 * 00000001401C3CEB: call    loc_1401C3DFE
 * 00000001401C3CF0: add     rsp, 8
 * 00000001401C3CF4: call    loc_1401C3E07
 * 00000001401C3CF9: add     rsp, 8
 * 00000001401C3CFD: call    loc_1401C3CF0
 * 00000001401C3D02: add     rsp, 8
 * 00000001401C3D06: call    loc_1401C3CF9
 * 00000001401C3D0B: add     rsp, 8
 * 00000001401C3D0F: call    loc_1401C3D02
 * 00000001401C3D14: add     rsp, 8
 * 00000001401C3D18: call    loc_1401C3D0B
 * 00000001401C3D1D: add     rsp, 8
 * 00000001401C3D21: call    loc_1401C3D14
 * 00000001401C3D26: add     rsp, 8
 * 00000001401C3D2A: call    loc_1401C3D1D
 * 00000001401C3D2F: add     rsp, 8
 * 00000001401C3D33: call    loc_1401C3D26
 * 00000001401C3D38: add     rsp, 8
 * 00000001401C3D3C: call    loc_1401C3D2F
 * 00000001401C3D41: add     rsp, 8
 * 00000001401C3D45: call    loc_1401C3D38
 * 00000001401C3D4A: add     rsp, 8
 * 00000001401C3D4E: call    loc_1401C3D41
 * 00000001401C3D53: add     rsp, 8
 * 00000001401C3D57: call    loc_1401C3D4A
 * 00000001401C3D5C: add     rsp, 8
 * 00000001401C3D60: call    loc_1401C3D53
 * 00000001401C3D65: add     rsp, 8
 * 00000001401C3D69: call    loc_1401C3D5C
 * 00000001401C3D6E: add     rsp, 8
 * 00000001401C3D72: call    loc_1401C3D65
 * 00000001401C3D77: add     rsp, 8
 * 00000001401C3D7B: call    loc_1401C3D6E
 * 00000001401C3D80: add     rsp, 8
 * 00000001401C3D84: call    loc_1401C3D77
 * 00000001401C3D89: add     rsp, 8
 * 00000001401C3D8D: call    loc_1401C3D80
 * 00000001401C3D92: add     rsp, 8
 * 00000001401C3D96: call    loc_1401C3D89
 * 00000001401C3D9B: add     rsp, 8
 * 00000001401C3D9F: call    loc_1401C3D92
 * 00000001401C3DA4: add     rsp, 8
 * 00000001401C3DA8: call    loc_1401C3D9B
 * 00000001401C3DAD: add     rsp, 8
 * 00000001401C3DB1: call    loc_1401C3DA4
 * 00000001401C3DB6: add     rsp, 8
 * 00000001401C3DBA: call    loc_1401C3DAD
 * 00000001401C3DBF: add     rsp, 8
 * 00000001401C3DC3: call    loc_1401C3DB6
 * 00000001401C3DC8: add     rsp, 8
 * 00000001401C3DCC: call    loc_1401C3DBF
 * 00000001401C3DD1: add     rsp, 8
 * 00000001401C3DD5: call    loc_1401C3DC8
 * 00000001401C3DDA: add     rsp, 8
 * 00000001401C3DDE: call    loc_1401C3DD1
 * 00000001401C3DE3: add     rsp, 8
 * 00000001401C3DE7: call    loc_1401C3DDA
 * 00000001401C3DEC: add     rsp, 8
 * 00000001401C3DF0: call    loc_1401C3DE3
 * 00000001401C3DF5: add     rsp, 8
 * 00000001401C3DF9: call    loc_1401C3DEC
 * 00000001401C3DFE: add     rsp, 8
 * 00000001401C3E02: call    loc_1401C3DF5
 * 00000001401C3E07: add     rsp, 8
 * 00000001401C3E0B: mov     eax, 0DADAh
 * 00000001401C3E10: test    word ptr gs:860h, 80h
 * 00000001401C3E1B: jz      short loc_1401C3E29
 * 00000001401C3E1D: xor     eax, eax
 * 00000001401C3E1F: xor     edx, edx
 * 00000001401C3E21: mov     ecx, 1
 * 00000001401C3E26: div     rcx
 * 00000001401C3E29: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C3E2D: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3E31: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3E35: mov     rsp, rbp
 * 00000001401C3E38: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C3E3F: add     rsp, 0E8h
 * 00000001401C3E46: test    cs:KiKvaShadow, 1
 * 00000001401C3E4D: jz      short loc_1401C3E54
 * 00000001401C3E4F: jmp     KiKernelExit
 * 00000001401C3E54: test    word ptr gs:860h, 100h
 * 00000001401C3E5F: jz      short loc_1401C3E66
 * 00000001401C3E61: verw    [rsp+arg_18]
 * 00000001401C3E66: swapgs
 * 00000001401C3E69: iretq
 * 00000001401C3E6B: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C3E6F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C3E73: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C3E77: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C3E7B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C3E7F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C3E83: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C3E87: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C3E8B: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C3E8F: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C3E93: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C3E97: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C3E9B: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3E9F: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3EA3: mov     rsp, rbp
 * 00000001401C3EA6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C3EAD: add     rsp, 0E8h
 * 00000001401C3EB4: iretq
 */
