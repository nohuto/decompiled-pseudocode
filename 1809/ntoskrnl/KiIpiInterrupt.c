/*
 * XREFs of KiIpiInterrupt @ 0x1401C3960
 * Callers:
 *     KiIpiInterruptShadow @ 0x140330200 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401C4020 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1401C3960
 * Reason: Hex-Rays returned no pseudocode for 0x1401C3960
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C3960: sub     rsp, 8
 * 00000001401C3964: push    rbp
 * 00000001401C3965: push    rsi
 * 00000001401C3966: sub     rsp, 150h
 * 00000001401C396D: lea     rbp, [rsp+80h]
 * 00000001401C3975: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C3979: mov     [rbp+0E8h+var_138], rax
 * 00000001401C397D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C3981: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C3985: mov     [rbp+0E8h+var_120], r8
 * 00000001401C3989: mov     [rbp+0E8h+var_118], r9
 * 00000001401C398D: mov     [rbp+0E8h+var_110], r10
 * 00000001401C3991: mov     [rbp+0E8h+var_108], r11
 * 00000001401C3995: test    [rbp+0E8h+arg_0], 1
 * 00000001401C399C: jnz     short loc_1401C39CD
 * 00000001401C399E: lfence
 * 00000001401C39A1: test    word ptr gs:860h, 1
 * 00000001401C39AC: jnz     short loc_1401C39B6
 * 00000001401C39AE: lfence
 * 00000001401C39B1: jmp     loc_1401C3BD6
 * 00000001401C39B6: movzx   eax, word ptr gs:864h
 * 00000001401C39BF: mov     ecx, 48h ; 'H'
 * 00000001401C39C4: xor     edx, edx
 * 00000001401C39C6: wrmsr
 * 00000001401C39C8: jmp     loc_1401C3BD6
 * 00000001401C39CD: test    cs:KiKvaShadow, 1
 * 00000001401C39D4: jnz     short loc_1401C39D9
 * 00000001401C39D6: swapgs
 * 00000001401C39D9: lfence
 * 00000001401C39DC: mov     r10, gs:188h
 * 00000001401C39E5: mov     rcx, gs:188h
 * 00000001401C39EE: mov     rcx, [rcx+220h]
 * 00000001401C39F5: mov     rcx, [rcx+830h]
 * 00000001401C39FC: mov     gs:858h, rcx
 * 00000001401C3A05: mov     cx, gs:850h
 * 00000001401C3A0E: mov     gs:852h, cx
 * 00000001401C3A17: mov     cx, gs:860h
 * 00000001401C3A20: mov     gs:854h, cx
 * 00000001401C3A29: movzx   eax, word ptr gs:866h
 * 00000001401C3A32: cmp     gs:864h, ax
 * 00000001401C3A3B: jz      short loc_1401C3A4F
 * 00000001401C3A3D: mov     gs:864h, ax
 * 00000001401C3A46: mov     ecx, 48h ; 'H'
 * 00000001401C3A4B: xor     edx, edx
 * 00000001401C3A4D: wrmsr
 * 00000001401C3A4F: movzx   edx, word ptr gs:860h
 * 00000001401C3A58: test    edx, 8
 * 00000001401C3A5E: jz      short loc_1401C3A77
 * 00000001401C3A60: mov     eax, 1
 * 00000001401C3A65: xor     edx, edx
 * 00000001401C3A67: mov     ecx, 49h ; 'I'
 * 00000001401C3A6C: wrmsr
 * 00000001401C3A6E: movzx   edx, word ptr gs:860h
 * 00000001401C3A77: test    edx, 2
 * 00000001401C3A7D: jz      loc_1401C3BA8
 * 00000001401C3A83: call    loc_1401C3B96
 * 00000001401C3A88: add     rsp, 8
 * 00000001401C3A8C: call    loc_1401C3B9F
 * 00000001401C3A91: add     rsp, 8
 * 00000001401C3A95: call    loc_1401C3A88
 * 00000001401C3A9A: add     rsp, 8
 * 00000001401C3A9E: call    loc_1401C3A91
 * 00000001401C3AA3: add     rsp, 8
 * 00000001401C3AA7: call    loc_1401C3A9A
 * 00000001401C3AAC: add     rsp, 8
 * 00000001401C3AB0: call    loc_1401C3AA3
 * 00000001401C3AB5: add     rsp, 8
 * 00000001401C3AB9: call    loc_1401C3AAC
 * 00000001401C3ABE: add     rsp, 8
 * 00000001401C3AC2: call    loc_1401C3AB5
 * 00000001401C3AC7: add     rsp, 8
 * 00000001401C3ACB: call    loc_1401C3ABE
 * 00000001401C3AD0: add     rsp, 8
 * 00000001401C3AD4: call    loc_1401C3AC7
 * 00000001401C3AD9: add     rsp, 8
 * 00000001401C3ADD: call    loc_1401C3AD0
 * 00000001401C3AE2: add     rsp, 8
 * 00000001401C3AE6: call    loc_1401C3AD9
 * 00000001401C3AEB: add     rsp, 8
 * 00000001401C3AEF: call    loc_1401C3AE2
 * 00000001401C3AF4: add     rsp, 8
 * 00000001401C3AF8: call    loc_1401C3AEB
 * 00000001401C3AFD: add     rsp, 8
 * 00000001401C3B01: call    loc_1401C3AF4
 * 00000001401C3B06: add     rsp, 8
 * 00000001401C3B0A: call    loc_1401C3AFD
 * 00000001401C3B0F: add     rsp, 8
 * 00000001401C3B13: call    loc_1401C3B06
 * 00000001401C3B18: add     rsp, 8
 * 00000001401C3B1C: call    loc_1401C3B0F
 * 00000001401C3B21: add     rsp, 8
 * 00000001401C3B25: call    loc_1401C3B18
 * 00000001401C3B2A: add     rsp, 8
 * 00000001401C3B2E: call    loc_1401C3B21
 * 00000001401C3B33: add     rsp, 8
 * 00000001401C3B37: call    loc_1401C3B2A
 * 00000001401C3B3C: add     rsp, 8
 * 00000001401C3B40: call    loc_1401C3B33
 * 00000001401C3B45: add     rsp, 8
 * 00000001401C3B49: call    loc_1401C3B3C
 * 00000001401C3B4E: add     rsp, 8
 * 00000001401C3B52: call    loc_1401C3B45
 * 00000001401C3B57: add     rsp, 8
 * 00000001401C3B5B: call    loc_1401C3B4E
 * 00000001401C3B60: add     rsp, 8
 * 00000001401C3B64: call    loc_1401C3B57
 * 00000001401C3B69: add     rsp, 8
 * 00000001401C3B6D: call    loc_1401C3B60
 * 00000001401C3B72: add     rsp, 8
 * 00000001401C3B76: call    loc_1401C3B69
 * 00000001401C3B7B: add     rsp, 8
 * 00000001401C3B7F: call    loc_1401C3B72
 * 00000001401C3B84: add     rsp, 8
 * 00000001401C3B88: call    loc_1401C3B7B
 * 00000001401C3B8D: add     rsp, 8
 * 00000001401C3B91: call    loc_1401C3B84
 * 00000001401C3B96: add     rsp, 8
 * 00000001401C3B9A: call    loc_1401C3B8D
 * 00000001401C3B9F: add     rsp, 8
 * 00000001401C3BA3: mov     eax, 0DADAh
 * 00000001401C3BA8: test    edx, 200h
 * 00000001401C3BAE: jz      short loc_1401C3BB5
 * 00000001401C3BB0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C3BB5: lfence
 * 00000001401C3BB8: mov     byte ptr gs:856h, 0
 * 00000001401C3BC1: test    byte ptr [r10+3], 3
 * 00000001401C3BC6: mov     [rbp+0E8h+var_68], 0
 * 00000001401C3BCF: jz      short loc_1401C3BD6
 * 00000001401C3BD1: call    KiSaveDebugRegisterState
 * 00000001401C3BD6: cld
 * 00000001401C3BD7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C3BDB: ldmxcsr dword ptr gs:180h
 * 00000001401C3BE4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C3BE8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C3BEC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C3BF0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C3BF4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C3BF8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C3BFC: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C3C05: jz      short loc_1401C3C0C
 * 00000001401C3C07: call    KeWakeProcessor
 * 00000001401C3C0C: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C3C13: cmp     rax, [rbp+0E8h]
 * 00000001401C3C1A: jnb     short loc_1401C3C35
 * 00000001401C3C1C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C3C23: cmp     rax, [rbp+0E8h]
 * 00000001401C3C2A: jb      short loc_1401C3C35
 * 00000001401C3C2C: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401C3C30: call    KiCheckForSListAddress
 * 00000001401C3C35: xor     esi, esi
 * 00000001401C3C37: inc     dword ptr gs:5D00h
 * 00000001401C3C3F: mov     rdx, rsp
 * 00000001401C3C42: mov     rcx, gs:6458h
 * 00000001401C3C4B: lea     rax, [rcx-6000h]
 * 00000001401C3C52: cmp     rax, rsp
 * 00000001401C3C55: ja      short loc_1401C3C5C
 * 00000001401C3C57: cmp     rsp, rcx
 * 00000001401C3C5A: jb      short loc_1401C3C68
 * 00000001401C3C5C: cmp     cs:KiBugCheckActive, 0
 * 00000001401C3C63: jnz     short loc_1401C3C68
 * 00000001401C3C65: mov     rsp, rcx
 * 00000001401C3C68: sub     rsp, 20h
 * 00000001401C3C6C: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001401C3C71: call    KiIpiInterruptSubDispatch
 * 00000001401C3C76: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001401C3C7B: mov     rcx, rsi
 * 00000001401C3C7E: call    HalPerformEndOfInterrupt_0
 * 00000001401C3C83: mov     rcx, gs:20h
 * 00000001401C3C8C: cmp     byte ptr [rcx+20h], 1
 * 00000001401C3C90: ja      short loc_1401C3D0C
 * 00000001401C3C92: rdtsc
 * 00000001401C3C94: shl     rdx, 20h
 * 00000001401C3C98: or      rax, rdx
 * 00000001401C3C9B: sub     rax, [rcx+5BC0h]
 * 00000001401C3CA2: add     [rcx+5C38h], rax
 * 00000001401C3CA9: add     [rcx+5BC0h], rax
 * 00000001401C3CB0: mov     r8, rax
 * 00000001401C3CB3: mov     rax, [rcx+8]
 * 00000001401C3CB7: test    byte ptr [rax+2], 72h
 * 00000001401C3CBB: jz      short loc_1401C3CD0
 * 00000001401C3CBD: xor     edx, edx
 * 00000001401C3CBF: call    KiBeginThreadAccountingPeriod
 * 00000001401C3CC4: mov     rcx, gs:20h
 * 00000001401C3CCD: inc     byte ptr [rcx+20h]
 * 00000001401C3CD0: mov     dl, [rcx+6]
 * 00000001401C3CD3: and     byte ptr [rcx+6], 0
 * 00000001401C3CD7: cmp     byte ptr [rcx+7], 0
 * 00000001401C3CDB: jnz     short loc_1401C3D0C
 * 00000001401C3CDD: test    dl, dl
 * 00000001401C3CDF: jz      short loc_1401C3D0C
 * 00000001401C3CE1: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401C3CE5: jnb     short loc_1401C3CF2
 * 00000001401C3CE7: and     byte ptr [rcx+20h], 0
 * 00000001401C3CEB: call    KiDpcInterruptBypass
 * 00000001401C3CF0: jmp     short loc_1401C3D0F
 * 00000001401C3CF2: mov     ecx, 2
 * 00000001401C3CF7: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C3CFE: nop     dword ptr [rax+rax+00h]
 * 00000001401C3D03: mov     rcx, gs:20h
 * 00000001401C3D0C: dec     byte ptr [rcx+20h]
 * 00000001401C3D0F: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C3D13: cmp     cs:KiIrqlFlags, 0
 * 00000001401C3D1A: jz      short loc_1401C3D23
 * 00000001401C3D1C: call    KzSetIrqlUnsafe
 * 00000001401C3D21: jmp     short loc_1401C3D27
 * 00000001401C3D23: mov     cr8, rcx
 * 00000001401C3D27: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C3D2E: test    [rbp+0E8h+arg_0], 1
 * 00000001401C3D35: jz      loc_1401C3FCB
 * 00000001401C3D3B: mov     rcx, gs:188h
 * 00000001401C3D44: test    byte ptr [rcx+0C2h], 3
 * 00000001401C3D4B: jz      short loc_1401C3D68
 * 00000001401C3D4D: mov     ecx, 1
 * 00000001401C3D52: mov     cr8, rcx
 * 00000001401C3D56: sti
 * 00000001401C3D57: call    KiInitiateUserApc
 * 00000001401C3D5C: cli
 * 00000001401C3D5D: mov     ecx, 0
 * 00000001401C3D62: mov     cr8, rcx
 * 00000001401C3D66: jmp     short loc_1401C3D3B
 * 00000001401C3D68: test    byte ptr gs:86Ch, 2
 * 00000001401C3D71: jz      short loc_1401C3D7A
 * 00000001401C3D73: xor     ecx, ecx
 * 00000001401C3D75: call    KiUpdateStibpPairing
 * 00000001401C3D7A: mov     rcx, gs:188h
 * 00000001401C3D83: test    dword ptr [rcx], 8000000h
 * 00000001401C3D89: jz      short loc_1401C3D90
 * 00000001401C3D8B: call    KiRestoreSetContextState
 * 00000001401C3D90: mov     rcx, gs:188h
 * 00000001401C3D99: test    dword ptr [rcx], 40010000h
 * 00000001401C3D9F: jz      short loc_1401C3DB5
 * 00000001401C3DA1: test    byte ptr [rcx+2], 1
 * 00000001401C3DA5: jz      short loc_1401C3DB5
 * 00000001401C3DA7: call    KiCopyCounters
 * 00000001401C3DAC: mov     rcx, gs:188h
 * 00000001401C3DB5: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C3DB9: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C3DC1: jz      short loc_1401C3DC8
 * 00000001401C3DC3: call    KiRestoreDebugRegisterState
 * 00000001401C3DC8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C3DCC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C3DD0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C3DD4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C3DD8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C3DDC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C3DE0: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C3DE4: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C3DE8: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C3DEC: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C3DF0: mov     byte ptr gs:856h, 0
 * 00000001401C3DF9: movzx   eax, word ptr gs:86Ah
 * 00000001401C3E02: cmp     gs:864h, ax
 * 00000001401C3E0B: jz      short loc_1401C3E1F
 * 00000001401C3E0D: mov     gs:864h, ax
 * 00000001401C3E16: mov     ecx, 48h ; 'H'
 * 00000001401C3E1B: xor     edx, edx
 * 00000001401C3E1D: wrmsr
 * 00000001401C3E1F: btr     word ptr gs:860h, 2
 * 00000001401C3E2A: jnb     short loc_1401C3E3A
 * 00000001401C3E2C: mov     eax, 1
 * 00000001401C3E31: xor     edx, edx
 * 00000001401C3E33: mov     ecx, 49h ; 'I'
 * 00000001401C3E38: wrmsr
 * 00000001401C3E3A: btr     word ptr gs:860h, 5
 * 00000001401C3E45: jnb     loc_1401C3F70
 * 00000001401C3E4B: call    loc_1401C3F5E
 * 00000001401C3E50: add     rsp, 8
 * 00000001401C3E54: call    loc_1401C3F67
 * 00000001401C3E59: add     rsp, 8
 * 00000001401C3E5D: call    loc_1401C3E50
 * 00000001401C3E62: add     rsp, 8
 * 00000001401C3E66: call    loc_1401C3E59
 * 00000001401C3E6B: add     rsp, 8
 * 00000001401C3E6F: call    loc_1401C3E62
 * 00000001401C3E74: add     rsp, 8
 * 00000001401C3E78: call    loc_1401C3E6B
 * 00000001401C3E7D: add     rsp, 8
 * 00000001401C3E81: call    loc_1401C3E74
 * 00000001401C3E86: add     rsp, 8
 * 00000001401C3E8A: call    loc_1401C3E7D
 * 00000001401C3E8F: add     rsp, 8
 * 00000001401C3E93: call    loc_1401C3E86
 * 00000001401C3E98: add     rsp, 8
 * 00000001401C3E9C: call    loc_1401C3E8F
 * 00000001401C3EA1: add     rsp, 8
 * 00000001401C3EA5: call    loc_1401C3E98
 * 00000001401C3EAA: add     rsp, 8
 * 00000001401C3EAE: call    loc_1401C3EA1
 * 00000001401C3EB3: add     rsp, 8
 * 00000001401C3EB7: call    loc_1401C3EAA
 * 00000001401C3EBC: add     rsp, 8
 * 00000001401C3EC0: call    loc_1401C3EB3
 * 00000001401C3EC5: add     rsp, 8
 * 00000001401C3EC9: call    loc_1401C3EBC
 * 00000001401C3ECE: add     rsp, 8
 * 00000001401C3ED2: call    loc_1401C3EC5
 * 00000001401C3ED7: add     rsp, 8
 * 00000001401C3EDB: call    loc_1401C3ECE
 * 00000001401C3EE0: add     rsp, 8
 * 00000001401C3EE4: call    loc_1401C3ED7
 * 00000001401C3EE9: add     rsp, 8
 * 00000001401C3EED: call    loc_1401C3EE0
 * 00000001401C3EF2: add     rsp, 8
 * 00000001401C3EF6: call    loc_1401C3EE9
 * 00000001401C3EFB: add     rsp, 8
 * 00000001401C3EFF: call    loc_1401C3EF2
 * 00000001401C3F04: add     rsp, 8
 * 00000001401C3F08: call    loc_1401C3EFB
 * 00000001401C3F0D: add     rsp, 8
 * 00000001401C3F11: call    loc_1401C3F04
 * 00000001401C3F16: add     rsp, 8
 * 00000001401C3F1A: call    loc_1401C3F0D
 * 00000001401C3F1F: add     rsp, 8
 * 00000001401C3F23: call    loc_1401C3F16
 * 00000001401C3F28: add     rsp, 8
 * 00000001401C3F2C: call    loc_1401C3F1F
 * 00000001401C3F31: add     rsp, 8
 * 00000001401C3F35: call    loc_1401C3F28
 * 00000001401C3F3A: add     rsp, 8
 * 00000001401C3F3E: call    loc_1401C3F31
 * 00000001401C3F43: add     rsp, 8
 * 00000001401C3F47: call    loc_1401C3F3A
 * 00000001401C3F4C: add     rsp, 8
 * 00000001401C3F50: call    loc_1401C3F43
 * 00000001401C3F55: add     rsp, 8
 * 00000001401C3F59: call    loc_1401C3F4C
 * 00000001401C3F5E: add     rsp, 8
 * 00000001401C3F62: call    loc_1401C3F55
 * 00000001401C3F67: add     rsp, 8
 * 00000001401C3F6B: mov     eax, 0DADAh
 * 00000001401C3F70: test    word ptr gs:860h, 80h
 * 00000001401C3F7B: jz      short loc_1401C3F89
 * 00000001401C3F7D: xor     eax, eax
 * 00000001401C3F7F: xor     edx, edx
 * 00000001401C3F81: mov     ecx, 1
 * 00000001401C3F86: div     rcx
 * 00000001401C3F89: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C3F8D: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3F91: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3F95: mov     rsp, rbp
 * 00000001401C3F98: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C3F9F: add     rsp, 0E8h
 * 00000001401C3FA6: test    cs:KiKvaShadow, 1
 * 00000001401C3FAD: jz      short loc_1401C3FB4
 * 00000001401C3FAF: jmp     KiKernelExit
 * 00000001401C3FB4: test    word ptr gs:860h, 100h
 * 00000001401C3FBF: jz      short loc_1401C3FC6
 * 00000001401C3FC1: verw    [rsp+arg_18]
 * 00000001401C3FC6: swapgs
 * 00000001401C3FC9: iretq
 * 00000001401C3FCB: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C3FCF: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C3FD3: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C3FD7: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C3FDB: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C3FDF: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C3FE3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C3FE7: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C3FEB: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C3FEF: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C3FF3: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C3FF7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C3FFB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3FFF: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C4003: mov     rsp, rbp
 * 00000001401C4006: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C400D: add     rsp, 0E8h
 * 00000001401C4014: iretq
 */
