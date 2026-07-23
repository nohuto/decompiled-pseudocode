/*
 * XREFs of KiSwInterrupt @ 0x1401C2C00
 * Callers:
 *     KiSwInterruptShadow @ 0x14032FC80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     KiSwInterruptDispatch @ 0x1401A0690 (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1401C2C00
 * Reason: Hex-Rays returned no pseudocode for 0x1401C2C00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C2C00: sub     rsp, 8
 * 00000001401C2C04: push    rbp
 * 00000001401C2C05: push    rsi
 * 00000001401C2C06: sub     rsp, 150h
 * 00000001401C2C0D: lea     rbp, [rsp+80h]
 * 00000001401C2C15: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C2C19: mov     [rbp+0E8h+var_138], rax
 * 00000001401C2C1D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C2C21: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C2C25: mov     [rbp+0E8h+var_120], r8
 * 00000001401C2C29: mov     [rbp+0E8h+var_118], r9
 * 00000001401C2C2D: mov     [rbp+0E8h+var_110], r10
 * 00000001401C2C31: mov     [rbp+0E8h+var_108], r11
 * 00000001401C2C35: test    [rbp+0E8h+arg_0], 1
 * 00000001401C2C3C: jnz     short loc_1401C2C6D
 * 00000001401C2C3E: lfence
 * 00000001401C2C41: test    word ptr gs:860h, 1
 * 00000001401C2C4C: jnz     short loc_1401C2C56
 * 00000001401C2C4E: lfence
 * 00000001401C2C51: jmp     loc_1401C2E76
 * 00000001401C2C56: movzx   eax, word ptr gs:864h
 * 00000001401C2C5F: mov     ecx, 48h ; 'H'
 * 00000001401C2C64: xor     edx, edx
 * 00000001401C2C66: wrmsr
 * 00000001401C2C68: jmp     loc_1401C2E76
 * 00000001401C2C6D: test    cs:KiKvaShadow, 1
 * 00000001401C2C74: jnz     short loc_1401C2C79
 * 00000001401C2C76: swapgs
 * 00000001401C2C79: lfence
 * 00000001401C2C7C: mov     r10, gs:188h
 * 00000001401C2C85: mov     rcx, gs:188h
 * 00000001401C2C8E: mov     rcx, [rcx+220h]
 * 00000001401C2C95: mov     rcx, [rcx+830h]
 * 00000001401C2C9C: mov     gs:858h, rcx
 * 00000001401C2CA5: mov     cx, gs:850h
 * 00000001401C2CAE: mov     gs:852h, cx
 * 00000001401C2CB7: mov     cx, gs:860h
 * 00000001401C2CC0: mov     gs:854h, cx
 * 00000001401C2CC9: movzx   eax, word ptr gs:866h
 * 00000001401C2CD2: cmp     gs:864h, ax
 * 00000001401C2CDB: jz      short loc_1401C2CEF
 * 00000001401C2CDD: mov     gs:864h, ax
 * 00000001401C2CE6: mov     ecx, 48h ; 'H'
 * 00000001401C2CEB: xor     edx, edx
 * 00000001401C2CED: wrmsr
 * 00000001401C2CEF: movzx   edx, word ptr gs:860h
 * 00000001401C2CF8: test    edx, 8
 * 00000001401C2CFE: jz      short loc_1401C2D17
 * 00000001401C2D00: mov     eax, 1
 * 00000001401C2D05: xor     edx, edx
 * 00000001401C2D07: mov     ecx, 49h ; 'I'
 * 00000001401C2D0C: wrmsr
 * 00000001401C2D0E: movzx   edx, word ptr gs:860h
 * 00000001401C2D17: test    edx, 2
 * 00000001401C2D1D: jz      loc_1401C2E48
 * 00000001401C2D23: call    loc_1401C2E36
 * 00000001401C2D28: add     rsp, 8
 * 00000001401C2D2C: call    loc_1401C2E3F
 * 00000001401C2D31: add     rsp, 8
 * 00000001401C2D35: call    loc_1401C2D28
 * 00000001401C2D3A: add     rsp, 8
 * 00000001401C2D3E: call    loc_1401C2D31
 * 00000001401C2D43: add     rsp, 8
 * 00000001401C2D47: call    loc_1401C2D3A
 * 00000001401C2D4C: add     rsp, 8
 * 00000001401C2D50: call    loc_1401C2D43
 * 00000001401C2D55: add     rsp, 8
 * 00000001401C2D59: call    loc_1401C2D4C
 * 00000001401C2D5E: add     rsp, 8
 * 00000001401C2D62: call    loc_1401C2D55
 * 00000001401C2D67: add     rsp, 8
 * 00000001401C2D6B: call    loc_1401C2D5E
 * 00000001401C2D70: add     rsp, 8
 * 00000001401C2D74: call    loc_1401C2D67
 * 00000001401C2D79: add     rsp, 8
 * 00000001401C2D7D: call    loc_1401C2D70
 * 00000001401C2D82: add     rsp, 8
 * 00000001401C2D86: call    loc_1401C2D79
 * 00000001401C2D8B: add     rsp, 8
 * 00000001401C2D8F: call    loc_1401C2D82
 * 00000001401C2D94: add     rsp, 8
 * 00000001401C2D98: call    loc_1401C2D8B
 * 00000001401C2D9D: add     rsp, 8
 * 00000001401C2DA1: call    loc_1401C2D94
 * 00000001401C2DA6: add     rsp, 8
 * 00000001401C2DAA: call    loc_1401C2D9D
 * 00000001401C2DAF: add     rsp, 8
 * 00000001401C2DB3: call    loc_1401C2DA6
 * 00000001401C2DB8: add     rsp, 8
 * 00000001401C2DBC: call    loc_1401C2DAF
 * 00000001401C2DC1: add     rsp, 8
 * 00000001401C2DC5: call    loc_1401C2DB8
 * 00000001401C2DCA: add     rsp, 8
 * 00000001401C2DCE: call    loc_1401C2DC1
 * 00000001401C2DD3: add     rsp, 8
 * 00000001401C2DD7: call    loc_1401C2DCA
 * 00000001401C2DDC: add     rsp, 8
 * 00000001401C2DE0: call    loc_1401C2DD3
 * 00000001401C2DE5: add     rsp, 8
 * 00000001401C2DE9: call    loc_1401C2DDC
 * 00000001401C2DEE: add     rsp, 8
 * 00000001401C2DF2: call    loc_1401C2DE5
 * 00000001401C2DF7: add     rsp, 8
 * 00000001401C2DFB: call    loc_1401C2DEE
 * 00000001401C2E00: add     rsp, 8
 * 00000001401C2E04: call    loc_1401C2DF7
 * 00000001401C2E09: add     rsp, 8
 * 00000001401C2E0D: call    loc_1401C2E00
 * 00000001401C2E12: add     rsp, 8
 * 00000001401C2E16: call    loc_1401C2E09
 * 00000001401C2E1B: add     rsp, 8
 * 00000001401C2E1F: call    loc_1401C2E12
 * 00000001401C2E24: add     rsp, 8
 * 00000001401C2E28: call    loc_1401C2E1B
 * 00000001401C2E2D: add     rsp, 8
 * 00000001401C2E31: call    loc_1401C2E24
 * 00000001401C2E36: add     rsp, 8
 * 00000001401C2E3A: call    loc_1401C2E2D
 * 00000001401C2E3F: add     rsp, 8
 * 00000001401C2E43: mov     eax, 0DADAh
 * 00000001401C2E48: test    edx, 200h
 * 00000001401C2E4E: jz      short loc_1401C2E55
 * 00000001401C2E50: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C2E55: lfence
 * 00000001401C2E58: mov     byte ptr gs:856h, 0
 * 00000001401C2E61: test    byte ptr [r10+3], 3
 * 00000001401C2E66: mov     [rbp+0E8h+var_68], 0
 * 00000001401C2E6F: jz      short loc_1401C2E76
 * 00000001401C2E71: call    KiSaveDebugRegisterState
 * 00000001401C2E76: cld
 * 00000001401C2E77: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C2E7B: ldmxcsr dword ptr gs:180h
 * 00000001401C2E84: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C2E88: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C2E8C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C2E90: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C2E94: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C2E98: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C2E9C: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C2EA5: jz      short loc_1401C2EAC
 * 00000001401C2EA7: call    KeWakeProcessor
 * 00000001401C2EAC: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C2EB3: cmp     rax, [rbp+0E8h]
 * 00000001401C2EBA: jnb     short loc_1401C2ED5
 * 00000001401C2EBC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C2EC3: cmp     rax, [rbp+0E8h]
 * 00000001401C2ECA: jb      short loc_1401C2ED5
 * 00000001401C2ECC: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401C2ED0: call    KiCheckForSListAddress
 * 00000001401C2ED5: xor     esi, esi
 * 00000001401C2ED7: inc     dword ptr gs:5D00h
 * 00000001401C2EDF: mov     ecx, 2
 * 00000001401C2EE4: cmp     cs:KiIrqlFlags, 0
 * 00000001401C2EEB: jz      short loc_1401C2EF4
 * 00000001401C2EED: call    KzSetIrqlUnsafe
 * 00000001401C2EF2: jmp     short loc_1401C2EFC
 * 00000001401C2EF4: mov     rax, cr8
 * 00000001401C2EF8: mov     cr8, rcx
 * 00000001401C2EFC: mov     [rbp+0E8h+var_13F], al
 * 00000001401C2EFF: mov     rcx, gs:20h
 * 00000001401C2F08: inc     byte ptr [rcx+20h]
 * 00000001401C2F0B: cmp     byte ptr [rcx+20h], 1
 * 00000001401C2F0F: jnz     short loc_1401C2F61
 * 00000001401C2F11: rdtsc
 * 00000001401C2F13: shl     rdx, 20h
 * 00000001401C2F17: or      rax, rdx
 * 00000001401C2F1A: mov     r8, [rcx+8]
 * 00000001401C2F1E: sub     rax, [rcx+5BC0h]
 * 00000001401C2F25: add     [r8+48h], rax
 * 00000001401C2F29: mov     edx, [r8+50h]
 * 00000001401C2F2D: add     [rcx+5BC0h], rax
 * 00000001401C2F34: add     rdx, rax
 * 00000001401C2F37: mov     ecx, edx
 * 00000001401C2F39: shr     rdx, 20h
 * 00000001401C2F3D: jz      short loc_1401C2F42
 * 00000001401C2F3F: or      ecx, 0FFFFFFFFh
 * 00000001401C2F42: mov     [r8+50h], ecx
 * 00000001401C2F46: test    byte ptr [r8+2], 3Eh
 * 00000001401C2F4B: jz      short loc_1401C2F61
 * 00000001401C2F4D: mov     rdx, r8
 * 00000001401C2F50: mov     r8, rax
 * 00000001401C2F53: mov     rcx, gs:20h
 * 00000001401C2F5C: call    KiEndThreadAccountingPeriod
 * 00000001401C2F61: sti
 * 00000001401C2F62: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401C2F66: call    KiSwInterruptDispatch
 * 00000001401C2F6B: cli
 * 00000001401C2F6C: mov     rcx, rsi
 * 00000001401C2F6F: call    HalPerformEndOfInterrupt_0
 * 00000001401C2F74: mov     rcx, gs:20h
 * 00000001401C2F7D: cmp     byte ptr [rcx+20h], 1
 * 00000001401C2F81: ja      short loc_1401C2FFD
 * 00000001401C2F83: rdtsc
 * 00000001401C2F85: shl     rdx, 20h
 * 00000001401C2F89: or      rax, rdx
 * 00000001401C2F8C: sub     rax, [rcx+5BC0h]
 * 00000001401C2F93: add     [rcx+5C38h], rax
 * 00000001401C2F9A: add     [rcx+5BC0h], rax
 * 00000001401C2FA1: mov     r8, rax
 * 00000001401C2FA4: mov     rax, [rcx+8]
 * 00000001401C2FA8: test    byte ptr [rax+2], 72h
 * 00000001401C2FAC: jz      short loc_1401C2FC1
 * 00000001401C2FAE: xor     edx, edx
 * 00000001401C2FB0: call    KiBeginThreadAccountingPeriod
 * 00000001401C2FB5: mov     rcx, gs:20h
 * 00000001401C2FBE: inc     byte ptr [rcx+20h]
 * 00000001401C2FC1: mov     dl, [rcx+6]
 * 00000001401C2FC4: and     byte ptr [rcx+6], 0
 * 00000001401C2FC8: cmp     byte ptr [rcx+7], 0
 * 00000001401C2FCC: jnz     short loc_1401C2FFD
 * 00000001401C2FCE: test    dl, dl
 * 00000001401C2FD0: jz      short loc_1401C2FFD
 * 00000001401C2FD2: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401C2FD6: jnb     short loc_1401C2FE3
 * 00000001401C2FD8: and     byte ptr [rcx+20h], 0
 * 00000001401C2FDC: call    KiDpcInterruptBypass
 * 00000001401C2FE1: jmp     short loc_1401C3000
 * 00000001401C2FE3: mov     ecx, 2
 * 00000001401C2FE8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C2FEF: nop     dword ptr [rax+rax+00h]
 * 00000001401C2FF4: mov     rcx, gs:20h
 * 00000001401C2FFD: dec     byte ptr [rcx+20h]
 * 00000001401C3000: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C3004: cmp     cs:KiIrqlFlags, 0
 * 00000001401C300B: jz      short loc_1401C3014
 * 00000001401C300D: call    KzSetIrqlUnsafe
 * 00000001401C3012: jmp     short loc_1401C3018
 * 00000001401C3014: mov     cr8, rcx
 * 00000001401C3018: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C301F: cli
 * 00000001401C3020: test    [rbp+0E8h+arg_0], 1
 * 00000001401C3027: jz      loc_1401C32BD
 * 00000001401C302D: mov     rcx, gs:188h
 * 00000001401C3036: test    byte ptr [rcx+0C2h], 3
 * 00000001401C303D: jz      short loc_1401C305A
 * 00000001401C303F: mov     ecx, 1
 * 00000001401C3044: mov     cr8, rcx
 * 00000001401C3048: sti
 * 00000001401C3049: call    KiInitiateUserApc
 * 00000001401C304E: cli
 * 00000001401C304F: mov     ecx, 0
 * 00000001401C3054: mov     cr8, rcx
 * 00000001401C3058: jmp     short loc_1401C302D
 * 00000001401C305A: test    byte ptr gs:86Ch, 2
 * 00000001401C3063: jz      short loc_1401C306C
 * 00000001401C3065: xor     ecx, ecx
 * 00000001401C3067: call    KiUpdateStibpPairing
 * 00000001401C306C: mov     rcx, gs:188h
 * 00000001401C3075: test    dword ptr [rcx], 8000000h
 * 00000001401C307B: jz      short loc_1401C3082
 * 00000001401C307D: call    KiRestoreSetContextState
 * 00000001401C3082: mov     rcx, gs:188h
 * 00000001401C308B: test    dword ptr [rcx], 40010000h
 * 00000001401C3091: jz      short loc_1401C30A7
 * 00000001401C3093: test    byte ptr [rcx+2], 1
 * 00000001401C3097: jz      short loc_1401C30A7
 * 00000001401C3099: call    KiCopyCounters
 * 00000001401C309E: mov     rcx, gs:188h
 * 00000001401C30A7: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C30AB: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C30B3: jz      short loc_1401C30BA
 * 00000001401C30B5: call    KiRestoreDebugRegisterState
 * 00000001401C30BA: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C30BE: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C30C2: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C30C6: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C30CA: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C30CE: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C30D2: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C30D6: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C30DA: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C30DE: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C30E2: mov     byte ptr gs:856h, 0
 * 00000001401C30EB: movzx   eax, word ptr gs:86Ah
 * 00000001401C30F4: cmp     gs:864h, ax
 * 00000001401C30FD: jz      short loc_1401C3111
 * 00000001401C30FF: mov     gs:864h, ax
 * 00000001401C3108: mov     ecx, 48h ; 'H'
 * 00000001401C310D: xor     edx, edx
 * 00000001401C310F: wrmsr
 * 00000001401C3111: btr     word ptr gs:860h, 2
 * 00000001401C311C: jnb     short loc_1401C312C
 * 00000001401C311E: mov     eax, 1
 * 00000001401C3123: xor     edx, edx
 * 00000001401C3125: mov     ecx, 49h ; 'I'
 * 00000001401C312A: wrmsr
 * 00000001401C312C: btr     word ptr gs:860h, 5
 * 00000001401C3137: jnb     loc_1401C3262
 * 00000001401C313D: call    loc_1401C3250
 * 00000001401C3142: add     rsp, 8
 * 00000001401C3146: call    loc_1401C3259
 * 00000001401C314B: add     rsp, 8
 * 00000001401C314F: call    loc_1401C3142
 * 00000001401C3154: add     rsp, 8
 * 00000001401C3158: call    loc_1401C314B
 * 00000001401C315D: add     rsp, 8
 * 00000001401C3161: call    loc_1401C3154
 * 00000001401C3166: add     rsp, 8
 * 00000001401C316A: call    loc_1401C315D
 * 00000001401C316F: add     rsp, 8
 * 00000001401C3173: call    loc_1401C3166
 * 00000001401C3178: add     rsp, 8
 * 00000001401C317C: call    loc_1401C316F
 * 00000001401C3181: add     rsp, 8
 * 00000001401C3185: call    loc_1401C3178
 * 00000001401C318A: add     rsp, 8
 * 00000001401C318E: call    loc_1401C3181
 * 00000001401C3193: add     rsp, 8
 * 00000001401C3197: call    loc_1401C318A
 * 00000001401C319C: add     rsp, 8
 * 00000001401C31A0: call    loc_1401C3193
 * 00000001401C31A5: add     rsp, 8
 * 00000001401C31A9: call    loc_1401C319C
 * 00000001401C31AE: add     rsp, 8
 * 00000001401C31B2: call    loc_1401C31A5
 * 00000001401C31B7: add     rsp, 8
 * 00000001401C31BB: call    loc_1401C31AE
 * 00000001401C31C0: add     rsp, 8
 * 00000001401C31C4: call    loc_1401C31B7
 * 00000001401C31C9: add     rsp, 8
 * 00000001401C31CD: call    loc_1401C31C0
 * 00000001401C31D2: add     rsp, 8
 * 00000001401C31D6: call    loc_1401C31C9
 * 00000001401C31DB: add     rsp, 8
 * 00000001401C31DF: call    loc_1401C31D2
 * 00000001401C31E4: add     rsp, 8
 * 00000001401C31E8: call    loc_1401C31DB
 * 00000001401C31ED: add     rsp, 8
 * 00000001401C31F1: call    loc_1401C31E4
 * 00000001401C31F6: add     rsp, 8
 * 00000001401C31FA: call    loc_1401C31ED
 * 00000001401C31FF: add     rsp, 8
 * 00000001401C3203: call    loc_1401C31F6
 * 00000001401C3208: add     rsp, 8
 * 00000001401C320C: call    loc_1401C31FF
 * 00000001401C3211: add     rsp, 8
 * 00000001401C3215: call    loc_1401C3208
 * 00000001401C321A: add     rsp, 8
 * 00000001401C321E: call    loc_1401C3211
 * 00000001401C3223: add     rsp, 8
 * 00000001401C3227: call    loc_1401C321A
 * 00000001401C322C: add     rsp, 8
 * 00000001401C3230: call    loc_1401C3223
 * 00000001401C3235: add     rsp, 8
 * 00000001401C3239: call    loc_1401C322C
 * 00000001401C323E: add     rsp, 8
 * 00000001401C3242: call    loc_1401C3235
 * 00000001401C3247: add     rsp, 8
 * 00000001401C324B: call    loc_1401C323E
 * 00000001401C3250: add     rsp, 8
 * 00000001401C3254: call    loc_1401C3247
 * 00000001401C3259: add     rsp, 8
 * 00000001401C325D: mov     eax, 0DADAh
 * 00000001401C3262: test    word ptr gs:860h, 80h
 * 00000001401C326D: jz      short loc_1401C327B
 * 00000001401C326F: xor     eax, eax
 * 00000001401C3271: xor     edx, edx
 * 00000001401C3273: mov     ecx, 1
 * 00000001401C3278: div     rcx
 * 00000001401C327B: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C327F: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C3283: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C3287: mov     rsp, rbp
 * 00000001401C328A: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C3291: add     rsp, 0E8h
 * 00000001401C3298: test    cs:KiKvaShadow, 1
 * 00000001401C329F: jz      short loc_1401C32A6
 * 00000001401C32A1: jmp     KiKernelExit
 * 00000001401C32A6: test    word ptr gs:860h, 100h
 * 00000001401C32B1: jz      short loc_1401C32B8
 * 00000001401C32B3: verw    [rsp+arg_18]
 * 00000001401C32B8: swapgs
 * 00000001401C32BB: iretq
 * 00000001401C32BD: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C32C1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C32C5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C32C9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C32CD: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C32D1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C32D5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C32D9: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C32DD: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C32E1: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C32E5: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C32E9: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C32ED: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C32F1: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C32F5: mov     rsp, rbp
 * 00000001401C32F8: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C32FF: add     rsp, 0E8h
 * 00000001401C3306: iretq
 */
