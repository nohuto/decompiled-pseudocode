/*
 * XREFs of KiSwInterrupt @ 0x1401C2AA0
 * Callers:
 *     KiSwInterruptShadow @ 0x14032EC80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D2030 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     KiSwInterruptDispatch @ 0x1401A0550 (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1401C2AA0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140293C90 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1401C2AA0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C2AA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C2AA0: sub     rsp, 8
 * 00000001401C2AA4: push    rbp
 * 00000001401C2AA5: push    rsi
 * 00000001401C2AA6: sub     rsp, 150h
 * 00000001401C2AAD: lea     rbp, [rsp+80h]
 * 00000001401C2AB5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C2AB9: mov     [rbp+0E8h+var_138], rax
 * 00000001401C2ABD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C2AC1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C2AC5: mov     [rbp+0E8h+var_120], r8
 * 00000001401C2AC9: mov     [rbp+0E8h+var_118], r9
 * 00000001401C2ACD: mov     [rbp+0E8h+var_110], r10
 * 00000001401C2AD1: mov     [rbp+0E8h+var_108], r11
 * 00000001401C2AD5: test    [rbp+0E8h+arg_0], 1
 * 00000001401C2ADC: jnz     short loc_1401C2B0D
 * 00000001401C2ADE: lfence
 * 00000001401C2AE1: test    word ptr gs:860h, 1
 * 00000001401C2AEC: jnz     short loc_1401C2AF6
 * 00000001401C2AEE: lfence
 * 00000001401C2AF1: jmp     loc_1401C2D16
 * 00000001401C2AF6: movzx   eax, word ptr gs:864h
 * 00000001401C2AFF: mov     ecx, 48h ; 'H'
 * 00000001401C2B04: xor     edx, edx
 * 00000001401C2B06: wrmsr
 * 00000001401C2B08: jmp     loc_1401C2D16
 * 00000001401C2B0D: test    cs:KiKvaShadow, 1
 * 00000001401C2B14: jnz     short loc_1401C2B19
 * 00000001401C2B16: swapgs
 * 00000001401C2B19: lfence
 * 00000001401C2B1C: mov     r10, gs:188h
 * 00000001401C2B25: mov     rcx, gs:188h
 * 00000001401C2B2E: mov     rcx, [rcx+220h]
 * 00000001401C2B35: mov     rcx, [rcx+830h]
 * 00000001401C2B3C: mov     gs:858h, rcx
 * 00000001401C2B45: mov     cx, gs:850h
 * 00000001401C2B4E: mov     gs:852h, cx
 * 00000001401C2B57: mov     cx, gs:860h
 * 00000001401C2B60: mov     gs:854h, cx
 * 00000001401C2B69: movzx   eax, word ptr gs:866h
 * 00000001401C2B72: cmp     gs:864h, ax
 * 00000001401C2B7B: jz      short loc_1401C2B8F
 * 00000001401C2B7D: mov     gs:864h, ax
 * 00000001401C2B86: mov     ecx, 48h ; 'H'
 * 00000001401C2B8B: xor     edx, edx
 * 00000001401C2B8D: wrmsr
 * 00000001401C2B8F: movzx   edx, word ptr gs:860h
 * 00000001401C2B98: test    edx, 8
 * 00000001401C2B9E: jz      short loc_1401C2BB7
 * 00000001401C2BA0: mov     eax, 1
 * 00000001401C2BA5: xor     edx, edx
 * 00000001401C2BA7: mov     ecx, 49h ; 'I'
 * 00000001401C2BAC: wrmsr
 * 00000001401C2BAE: movzx   edx, word ptr gs:860h
 * 00000001401C2BB7: test    edx, 2
 * 00000001401C2BBD: jz      loc_1401C2CE8
 * 00000001401C2BC3: call    loc_1401C2CD6
 * 00000001401C2BC8: add     rsp, 8
 * 00000001401C2BCC: call    loc_1401C2CDF
 * 00000001401C2BD1: add     rsp, 8
 * 00000001401C2BD5: call    loc_1401C2BC8
 * 00000001401C2BDA: add     rsp, 8
 * 00000001401C2BDE: call    loc_1401C2BD1
 * 00000001401C2BE3: add     rsp, 8
 * 00000001401C2BE7: call    loc_1401C2BDA
 * 00000001401C2BEC: add     rsp, 8
 * 00000001401C2BF0: call    loc_1401C2BE3
 * 00000001401C2BF5: add     rsp, 8
 * 00000001401C2BF9: call    loc_1401C2BEC
 * 00000001401C2BFE: add     rsp, 8
 * 00000001401C2C02: call    loc_1401C2BF5
 * 00000001401C2C07: add     rsp, 8
 * 00000001401C2C0B: call    loc_1401C2BFE
 * 00000001401C2C10: add     rsp, 8
 * 00000001401C2C14: call    loc_1401C2C07
 * 00000001401C2C19: add     rsp, 8
 * 00000001401C2C1D: call    loc_1401C2C10
 * 00000001401C2C22: add     rsp, 8
 * 00000001401C2C26: call    loc_1401C2C19
 * 00000001401C2C2B: add     rsp, 8
 * 00000001401C2C2F: call    loc_1401C2C22
 * 00000001401C2C34: add     rsp, 8
 * 00000001401C2C38: call    loc_1401C2C2B
 * 00000001401C2C3D: add     rsp, 8
 * 00000001401C2C41: call    loc_1401C2C34
 * 00000001401C2C46: add     rsp, 8
 * 00000001401C2C4A: call    loc_1401C2C3D
 * 00000001401C2C4F: add     rsp, 8
 * 00000001401C2C53: call    loc_1401C2C46
 * 00000001401C2C58: add     rsp, 8
 * 00000001401C2C5C: call    loc_1401C2C4F
 * 00000001401C2C61: add     rsp, 8
 * 00000001401C2C65: call    loc_1401C2C58
 * 00000001401C2C6A: add     rsp, 8
 * 00000001401C2C6E: call    loc_1401C2C61
 * 00000001401C2C73: add     rsp, 8
 * 00000001401C2C77: call    loc_1401C2C6A
 * 00000001401C2C7C: add     rsp, 8
 * 00000001401C2C80: call    loc_1401C2C73
 * 00000001401C2C85: add     rsp, 8
 * 00000001401C2C89: call    loc_1401C2C7C
 * 00000001401C2C8E: add     rsp, 8
 * 00000001401C2C92: call    loc_1401C2C85
 * 00000001401C2C97: add     rsp, 8
 * 00000001401C2C9B: call    loc_1401C2C8E
 * 00000001401C2CA0: add     rsp, 8
 * 00000001401C2CA4: call    loc_1401C2C97
 * 00000001401C2CA9: add     rsp, 8
 * 00000001401C2CAD: call    loc_1401C2CA0
 * 00000001401C2CB2: add     rsp, 8
 * 00000001401C2CB6: call    loc_1401C2CA9
 * 00000001401C2CBB: add     rsp, 8
 * 00000001401C2CBF: call    loc_1401C2CB2
 * 00000001401C2CC4: add     rsp, 8
 * 00000001401C2CC8: call    loc_1401C2CBB
 * 00000001401C2CCD: add     rsp, 8
 * 00000001401C2CD1: call    loc_1401C2CC4
 * 00000001401C2CD6: add     rsp, 8
 * 00000001401C2CDA: call    loc_1401C2CCD
 * 00000001401C2CDF: add     rsp, 8
 * 00000001401C2CE3: mov     eax, 0DADAh
 * 00000001401C2CE8: test    edx, 200h
 * 00000001401C2CEE: jz      short loc_1401C2CF5
 * 00000001401C2CF0: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C2CF5: lfence
 * 00000001401C2CF8: mov     byte ptr gs:856h, 0
 * 00000001401C2D01: test    byte ptr [r10+3], 3
 * 00000001401C2D06: mov     [rbp+0E8h+var_68], 0
 * 00000001401C2D0F: jz      short loc_1401C2D16
 * 00000001401C2D11: call    KiSaveDebugRegisterState
 * 00000001401C2D16: cld
 * 00000001401C2D17: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C2D1B: ldmxcsr dword ptr gs:180h
 * 00000001401C2D24: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C2D28: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C2D2C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C2D30: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C2D34: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C2D38: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C2D3C: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C2D45: jz      short loc_1401C2D4C
 * 00000001401C2D47: call    KeWakeProcessor
 * 00000001401C2D4C: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C2D53: cmp     rax, [rbp+0E8h]
 * 00000001401C2D5A: jnb     short loc_1401C2D75
 * 00000001401C2D5C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C2D63: cmp     rax, [rbp+0E8h]
 * 00000001401C2D6A: jb      short loc_1401C2D75
 * 00000001401C2D6C: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401C2D70: call    KiCheckForSListAddress
 * 00000001401C2D75: xor     esi, esi
 * 00000001401C2D77: inc     dword ptr gs:5D00h
 * 00000001401C2D7F: mov     ecx, 2
 * 00000001401C2D84: cmp     cs:KiIrqlFlags, 0
 * 00000001401C2D8B: jz      short loc_1401C2D94
 * 00000001401C2D8D: call    KzSetIrqlUnsafe
 * 00000001401C2D92: jmp     short loc_1401C2D9C
 * 00000001401C2D94: mov     rax, cr8
 * 00000001401C2D98: mov     cr8, rcx
 * 00000001401C2D9C: mov     [rbp+0E8h+var_13F], al
 * 00000001401C2D9F: mov     rcx, gs:20h
 * 00000001401C2DA8: inc     byte ptr [rcx+20h]
 * 00000001401C2DAB: cmp     byte ptr [rcx+20h], 1
 * 00000001401C2DAF: jnz     short loc_1401C2E01
 * 00000001401C2DB1: rdtsc
 * 00000001401C2DB3: shl     rdx, 20h
 * 00000001401C2DB7: or      rax, rdx
 * 00000001401C2DBA: mov     r8, [rcx+8]
 * 00000001401C2DBE: sub     rax, [rcx+5BC0h]
 * 00000001401C2DC5: add     [r8+48h], rax
 * 00000001401C2DC9: mov     edx, [r8+50h]
 * 00000001401C2DCD: add     [rcx+5BC0h], rax
 * 00000001401C2DD4: add     rdx, rax
 * 00000001401C2DD7: mov     ecx, edx
 * 00000001401C2DD9: shr     rdx, 20h
 * 00000001401C2DDD: jz      short loc_1401C2DE2
 * 00000001401C2DDF: or      ecx, 0FFFFFFFFh
 * 00000001401C2DE2: mov     [r8+50h], ecx
 * 00000001401C2DE6: test    byte ptr [r8+2], 3Eh
 * 00000001401C2DEB: jz      short loc_1401C2E01
 * 00000001401C2DED: mov     rdx, r8
 * 00000001401C2DF0: mov     r8, rax
 * 00000001401C2DF3: mov     rcx, gs:20h
 * 00000001401C2DFC: call    KiEndThreadAccountingPeriod
 * 00000001401C2E01: sti
 * 00000001401C2E02: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401C2E06: call    KiSwInterruptDispatch
 * 00000001401C2E0B: cli
 * 00000001401C2E0C: mov     rcx, rsi
 * 00000001401C2E0F: call    HalPerformEndOfInterrupt_0
 * 00000001401C2E14: mov     rcx, gs:20h
 * 00000001401C2E1D: cmp     byte ptr [rcx+20h], 1
 * 00000001401C2E21: ja      short loc_1401C2E9D
 * 00000001401C2E23: rdtsc
 * 00000001401C2E25: shl     rdx, 20h
 * 00000001401C2E29: or      rax, rdx
 * 00000001401C2E2C: sub     rax, [rcx+5BC0h]
 * 00000001401C2E33: add     [rcx+5C38h], rax
 * 00000001401C2E3A: add     [rcx+5BC0h], rax
 * 00000001401C2E41: mov     r8, rax
 * 00000001401C2E44: mov     rax, [rcx+8]
 * 00000001401C2E48: test    byte ptr [rax+2], 72h
 * 00000001401C2E4C: jz      short loc_1401C2E61
 * 00000001401C2E4E: xor     edx, edx
 * 00000001401C2E50: call    KiBeginThreadAccountingPeriod
 * 00000001401C2E55: mov     rcx, gs:20h
 * 00000001401C2E5E: inc     byte ptr [rcx+20h]
 * 00000001401C2E61: mov     dl, [rcx+6]
 * 00000001401C2E64: and     byte ptr [rcx+6], 0
 * 00000001401C2E68: cmp     byte ptr [rcx+7], 0
 * 00000001401C2E6C: jnz     short loc_1401C2E9D
 * 00000001401C2E6E: test    dl, dl
 * 00000001401C2E70: jz      short loc_1401C2E9D
 * 00000001401C2E72: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401C2E76: jnb     short loc_1401C2E83
 * 00000001401C2E78: and     byte ptr [rcx+20h], 0
 * 00000001401C2E7C: call    KiDpcInterruptBypass
 * 00000001401C2E81: jmp     short loc_1401C2EA0
 * 00000001401C2E83: mov     ecx, 2
 * 00000001401C2E88: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C2E8F: nop     dword ptr [rax+rax+00h]
 * 00000001401C2E94: mov     rcx, gs:20h
 * 00000001401C2E9D: dec     byte ptr [rcx+20h]
 * 00000001401C2EA0: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C2EA4: cmp     cs:KiIrqlFlags, 0
 * 00000001401C2EAB: jz      short loc_1401C2EB4
 * 00000001401C2EAD: call    KzSetIrqlUnsafe
 * 00000001401C2EB2: jmp     short loc_1401C2EB8
 * 00000001401C2EB4: mov     cr8, rcx
 * 00000001401C2EB8: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C2EBF: cli
 * 00000001401C2EC0: test    [rbp+0E8h+arg_0], 1
 * 00000001401C2EC7: jz      loc_1401C315D
 * 00000001401C2ECD: mov     rcx, gs:188h
 * 00000001401C2ED6: test    byte ptr [rcx+0C2h], 3
 * 00000001401C2EDD: jz      short loc_1401C2EFA
 * 00000001401C2EDF: mov     ecx, 1
 * 00000001401C2EE4: mov     cr8, rcx
 * 00000001401C2EE8: sti
 * 00000001401C2EE9: call    KiInitiateUserApc
 * 00000001401C2EEE: cli
 * 00000001401C2EEF: mov     ecx, 0
 * 00000001401C2EF4: mov     cr8, rcx
 * 00000001401C2EF8: jmp     short loc_1401C2ECD
 * 00000001401C2EFA: test    byte ptr gs:86Ch, 2
 * 00000001401C2F03: jz      short loc_1401C2F0C
 * 00000001401C2F05: xor     ecx, ecx
 * 00000001401C2F07: call    KiUpdateStibpPairing
 * 00000001401C2F0C: mov     rcx, gs:188h
 * 00000001401C2F15: test    dword ptr [rcx], 8000000h
 * 00000001401C2F1B: jz      short loc_1401C2F22
 * 00000001401C2F1D: call    KiRestoreSetContextState
 * 00000001401C2F22: mov     rcx, gs:188h
 * 00000001401C2F2B: test    dword ptr [rcx], 40010000h
 * 00000001401C2F31: jz      short loc_1401C2F47
 * 00000001401C2F33: test    byte ptr [rcx+2], 1
 * 00000001401C2F37: jz      short loc_1401C2F47
 * 00000001401C2F39: call    KiCopyCounters
 * 00000001401C2F3E: mov     rcx, gs:188h
 * 00000001401C2F47: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C2F4B: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C2F53: jz      short loc_1401C2F5A
 * 00000001401C2F55: call    KiRestoreDebugRegisterState
 * 00000001401C2F5A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C2F5E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C2F62: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C2F66: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C2F6A: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C2F6E: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C2F72: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C2F76: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C2F7A: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C2F7E: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C2F82: mov     byte ptr gs:856h, 0
 * 00000001401C2F8B: movzx   eax, word ptr gs:86Ah
 * 00000001401C2F94: cmp     gs:864h, ax
 * 00000001401C2F9D: jz      short loc_1401C2FB1
 * 00000001401C2F9F: mov     gs:864h, ax
 * 00000001401C2FA8: mov     ecx, 48h ; 'H'
 * 00000001401C2FAD: xor     edx, edx
 * 00000001401C2FAF: wrmsr
 * 00000001401C2FB1: btr     word ptr gs:860h, 2
 * 00000001401C2FBC: jnb     short loc_1401C2FCC
 * 00000001401C2FBE: mov     eax, 1
 * 00000001401C2FC3: xor     edx, edx
 * 00000001401C2FC5: mov     ecx, 49h ; 'I'
 * 00000001401C2FCA: wrmsr
 * 00000001401C2FCC: btr     word ptr gs:860h, 5
 * 00000001401C2FD7: jnb     loc_1401C3102
 * 00000001401C2FDD: call    loc_1401C30F0
 * 00000001401C2FE2: add     rsp, 8
 * 00000001401C2FE6: call    loc_1401C30F9
 * 00000001401C2FEB: add     rsp, 8
 * 00000001401C2FEF: call    loc_1401C2FE2
 * 00000001401C2FF4: add     rsp, 8
 * 00000001401C2FF8: call    loc_1401C2FEB
 * 00000001401C2FFD: add     rsp, 8
 * 00000001401C3001: call    loc_1401C2FF4
 * 00000001401C3006: add     rsp, 8
 * 00000001401C300A: call    loc_1401C2FFD
 * 00000001401C300F: add     rsp, 8
 * 00000001401C3013: call    loc_1401C3006
 * 00000001401C3018: add     rsp, 8
 * 00000001401C301C: call    loc_1401C300F
 * 00000001401C3021: add     rsp, 8
 * 00000001401C3025: call    loc_1401C3018
 * 00000001401C302A: add     rsp, 8
 * 00000001401C302E: call    loc_1401C3021
 * 00000001401C3033: add     rsp, 8
 * 00000001401C3037: call    loc_1401C302A
 * 00000001401C303C: add     rsp, 8
 * 00000001401C3040: call    loc_1401C3033
 * 00000001401C3045: add     rsp, 8
 * 00000001401C3049: call    loc_1401C303C
 * 00000001401C304E: add     rsp, 8
 * 00000001401C3052: call    loc_1401C3045
 * 00000001401C3057: add     rsp, 8
 * 00000001401C305B: call    loc_1401C304E
 * 00000001401C3060: add     rsp, 8
 * 00000001401C3064: call    loc_1401C3057
 * 00000001401C3069: add     rsp, 8
 * 00000001401C306D: call    loc_1401C3060
 * 00000001401C3072: add     rsp, 8
 * 00000001401C3076: call    loc_1401C3069
 * 00000001401C307B: add     rsp, 8
 * 00000001401C307F: call    loc_1401C3072
 * 00000001401C3084: add     rsp, 8
 * 00000001401C3088: call    loc_1401C307B
 * 00000001401C308D: add     rsp, 8
 * 00000001401C3091: call    loc_1401C3084
 * 00000001401C3096: add     rsp, 8
 * 00000001401C309A: call    loc_1401C308D
 * 00000001401C309F: add     rsp, 8
 * 00000001401C30A3: call    loc_1401C3096
 * 00000001401C30A8: add     rsp, 8
 * 00000001401C30AC: call    loc_1401C309F
 * 00000001401C30B1: add     rsp, 8
 * 00000001401C30B5: call    loc_1401C30A8
 * 00000001401C30BA: add     rsp, 8
 * 00000001401C30BE: call    loc_1401C30B1
 * 00000001401C30C3: add     rsp, 8
 * 00000001401C30C7: call    loc_1401C30BA
 * 00000001401C30CC: add     rsp, 8
 * 00000001401C30D0: call    loc_1401C30C3
 * 00000001401C30D5: add     rsp, 8
 * 00000001401C30D9: call    loc_1401C30CC
 * 00000001401C30DE: add     rsp, 8
 * 00000001401C30E2: call    loc_1401C30D5
 * 00000001401C30E7: add     rsp, 8
 * 00000001401C30EB: call    loc_1401C30DE
 * 00000001401C30F0: add     rsp, 8
 * 00000001401C30F4: call    loc_1401C30E7
 * 00000001401C30F9: add     rsp, 8
 * 00000001401C30FD: mov     eax, 0DADAh
 * 00000001401C3102: test    word ptr gs:860h, 80h
 * 00000001401C310D: jz      short loc_1401C311B
 * 00000001401C310F: xor     eax, eax
 * 00000001401C3111: xor     edx, edx
 * 00000001401C3113: mov     ecx, 1
 * 00000001401C3118: div     rcx
 * 00000001401C311B: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C311F: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3123: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3127: mov     rsp, rbp
 * 00000001401C312A: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C3131: add     rsp, 0E8h
 * 00000001401C3138: test    cs:KiKvaShadow, 1
 * 00000001401C313F: jz      short loc_1401C3146
 * 00000001401C3141: jmp     KiKernelExit
 * 00000001401C3146: test    word ptr gs:860h, 100h
 * 00000001401C3151: jz      short loc_1401C3158
 * 00000001401C3153: verw    [rsp+arg_18]
 * 00000001401C3158: swapgs
 * 00000001401C315B: iretq
 * 00000001401C315D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C3161: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C3165: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C3169: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C316D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C3171: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C3175: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C3179: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C317D: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C3181: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C3185: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C3189: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C318D: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3191: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3195: mov     rsp, rbp
 * 00000001401C3198: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C319F: add     rsp, 0E8h
 * 00000001401C31A6: iretq
 */
