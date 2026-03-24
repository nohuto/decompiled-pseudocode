/*
 * XREFs of KxIsrLinkage @ 0x1401C6AD0
 * Callers:
 *     KxIsrLinkageShadow @ 0x140351AC0 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140042A80 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x140169FF0 (PerfInfoLogUnexpectedInterrupt.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1401C6AD0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1401D58C0 (KiBugCheckDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1401C6AD0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C6AD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C6AD0: push    rbp
 * 00000001401C6AD1: push    rsi
 * 00000001401C6AD2: sub     rsp, 150h
 * 00000001401C6AD9: lea     rbp, [rsp+80h]
 * 00000001401C6AE1: mov     [rbp+0D8h+var_12D], 0
 * 00000001401C6AE5: mov     [rbp+0D8h+var_128], rax
 * 00000001401C6AE9: mov     [rbp+0D8h+var_120], rcx
 * 00000001401C6AED: mov     [rbp+0D8h+var_118], rdx
 * 00000001401C6AF1: mov     [rbp+0D8h+var_110], r8
 * 00000001401C6AF5: mov     [rbp+0D8h+var_108], r9
 * 00000001401C6AF9: mov     [rbp+0D8h+var_100], r10
 * 00000001401C6AFD: mov     [rbp+0D8h+var_F8], r11
 * 00000001401C6B01: test    [rbp+0D8h+arg_8], 1
 * 00000001401C6B08: jnz     short loc_1401C6B37
 * 00000001401C6B0A: lfence
 * 00000001401C6B0D: test    byte ptr gs:278h, 1
 * 00000001401C6B16: jnz     short loc_1401C6B20
 * 00000001401C6B18: lfence
 * 00000001401C6B1B: jmp     loc_1401C6D33
 * 00000001401C6B20: movzx   eax, byte ptr gs:27Ah
 * 00000001401C6B29: mov     ecx, 48h ; 'H'
 * 00000001401C6B2E: xor     edx, edx
 * 00000001401C6B30: wrmsr
 * 00000001401C6B32: jmp     loc_1401C6D33
 * 00000001401C6B37: test    cs:KiKvaShadow, 1
 * 00000001401C6B3E: jnz     short loc_1401C6B43
 * 00000001401C6B40: swapgs
 * 00000001401C6B43: lfence
 * 00000001401C6B46: mov     r10, gs:188h
 * 00000001401C6B4F: mov     rcx, gs:188h
 * 00000001401C6B58: mov     rcx, [rcx+220h]
 * 00000001401C6B5F: mov     rcx, [rcx+860h]
 * 00000001401C6B66: mov     gs:270h, rcx
 * 00000001401C6B6F: mov     cl, gs:850h
 * 00000001401C6B77: mov     gs:851h, cl
 * 00000001401C6B7F: mov     cl, gs:278h
 * 00000001401C6B87: mov     gs:852h, cl
 * 00000001401C6B8F: movzx   eax, byte ptr gs:27Bh
 * 00000001401C6B98: cmp     gs:27Ah, al
 * 00000001401C6BA0: jz      short loc_1401C6BB3
 * 00000001401C6BA2: mov     gs:27Ah, al
 * 00000001401C6BAA: mov     ecx, 48h ; 'H'
 * 00000001401C6BAF: xor     edx, edx
 * 00000001401C6BB1: wrmsr
 * 00000001401C6BB3: movzx   edx, byte ptr gs:278h
 * 00000001401C6BBC: test    edx, 8
 * 00000001401C6BC2: jz      short loc_1401C6BD7
 * 00000001401C6BC4: mov     eax, 1
 * 00000001401C6BC9: xor     edx, edx
 * 00000001401C6BCB: mov     ecx, 49h ; 'I'
 * 00000001401C6BD0: wrmsr
 * 00000001401C6BD2: jmp     loc_1401C6D15
 * 00000001401C6BD7: test    edx, 2
 * 00000001401C6BDD: jz      loc_1401C6D12
 * 00000001401C6BE3: test    byte ptr gs:279h, 4
 * 00000001401C6BEC: jnz     loc_1401C6D12
 * 00000001401C6BF2: call    loc_1401C6D05
 * 00000001401C6BF7: add     rsp, 8
 * 00000001401C6BFB: call    loc_1401C6D0E
 * 00000001401C6C00: add     rsp, 8
 * 00000001401C6C04: call    loc_1401C6BF7
 * 00000001401C6C09: add     rsp, 8
 * 00000001401C6C0D: call    loc_1401C6C00
 * 00000001401C6C12: add     rsp, 8
 * 00000001401C6C16: call    loc_1401C6C09
 * 00000001401C6C1B: add     rsp, 8
 * 00000001401C6C1F: call    loc_1401C6C12
 * 00000001401C6C24: add     rsp, 8
 * 00000001401C6C28: call    loc_1401C6C1B
 * 00000001401C6C2D: add     rsp, 8
 * 00000001401C6C31: call    loc_1401C6C24
 * 00000001401C6C36: add     rsp, 8
 * 00000001401C6C3A: call    loc_1401C6C2D
 * 00000001401C6C3F: add     rsp, 8
 * 00000001401C6C43: call    loc_1401C6C36
 * 00000001401C6C48: add     rsp, 8
 * 00000001401C6C4C: call    loc_1401C6C3F
 * 00000001401C6C51: add     rsp, 8
 * 00000001401C6C55: call    loc_1401C6C48
 * 00000001401C6C5A: add     rsp, 8
 * 00000001401C6C5E: call    loc_1401C6C51
 * 00000001401C6C63: add     rsp, 8
 * 00000001401C6C67: call    loc_1401C6C5A
 * 00000001401C6C6C: add     rsp, 8
 * 00000001401C6C70: call    loc_1401C6C63
 * 00000001401C6C75: add     rsp, 8
 * 00000001401C6C79: call    loc_1401C6C6C
 * 00000001401C6C7E: add     rsp, 8
 * 00000001401C6C82: call    loc_1401C6C75
 * 00000001401C6C87: add     rsp, 8
 * 00000001401C6C8B: call    loc_1401C6C7E
 * 00000001401C6C90: add     rsp, 8
 * 00000001401C6C94: call    loc_1401C6C87
 * 00000001401C6C99: add     rsp, 8
 * 00000001401C6C9D: call    loc_1401C6C90
 * 00000001401C6CA2: add     rsp, 8
 * 00000001401C6CA6: call    loc_1401C6C99
 * 00000001401C6CAB: add     rsp, 8
 * 00000001401C6CAF: call    loc_1401C6CA2
 * 00000001401C6CB4: add     rsp, 8
 * 00000001401C6CB8: call    loc_1401C6CAB
 * 00000001401C6CBD: add     rsp, 8
 * 00000001401C6CC1: call    loc_1401C6CB4
 * 00000001401C6CC6: add     rsp, 8
 * 00000001401C6CCA: call    loc_1401C6CBD
 * 00000001401C6CCF: add     rsp, 8
 * 00000001401C6CD3: call    loc_1401C6CC6
 * 00000001401C6CD8: add     rsp, 8
 * 00000001401C6CDC: call    loc_1401C6CCF
 * 00000001401C6CE1: add     rsp, 8
 * 00000001401C6CE5: call    loc_1401C6CD8
 * 00000001401C6CEA: add     rsp, 8
 * 00000001401C6CEE: call    loc_1401C6CE1
 * 00000001401C6CF3: add     rsp, 8
 * 00000001401C6CF7: call    loc_1401C6CEA
 * 00000001401C6CFC: add     rsp, 8
 * 00000001401C6D00: call    loc_1401C6CF3
 * 00000001401C6D05: add     rsp, 8
 * 00000001401C6D09: call    loc_1401C6CFC
 * 00000001401C6D0E: add     rsp, 8
 * 00000001401C6D12: lfence
 * 00000001401C6D15: mov     byte ptr gs:853h, 0
 * 00000001401C6D1E: test    byte ptr [r10+3], 3
 * 00000001401C6D23: mov     [rbp+0D8h+var_58], 0
 * 00000001401C6D2C: jz      short loc_1401C6D33
 * 00000001401C6D2E: call    KiSaveDebugRegisterState
 * 00000001401C6D33: cld
 * 00000001401C6D34: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401C6D38: ldmxcsr dword ptr gs:180h
 * 00000001401C6D41: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401C6D45: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401C6D49: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401C6D4D: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401C6D51: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401C6D55: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401C6D59: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C6D62: jz      short loc_1401C6D69
 * 00000001401C6D64: call    KeWakeProcessor
 * 00000001401C6D69: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C6D70: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401C6D77: jnb     short loc_1401C6D92
 * 00000001401C6D79: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C6D80: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401C6D87: jb      short loc_1401C6D92
 * 00000001401C6D89: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401C6D8D: call    KiCheckForSListAddress
 * 00000001401C6D92: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001401C6D99: mov     rsi, gs:20h
 * 00000001401C6DA2: mov     rsi, [rsi+rax*8+2E80h]
 * 00000001401C6DAA: inc     dword ptr gs:5D00h
 * 00000001401C6DB2: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C6DB9: jz      short loc_1401C6DBE
 * 00000001401C6DBB: clac
 * 00000001401C6DBE: test    rsi, rsi
 * 00000001401C6DC1: jz      short loc_1401C6DCC
 * 00000001401C6DC3: mov     rax, [rsi+50h]
 * 00000001401C6DC7: jmp     _guard_dispatch_icall
 * 00000001401C6DCC: mov     ecx, eax
 * 00000001401C6DCE: shr     ecx, 4
 * 00000001401C6DD1: cmp     cs:KiIrqlFlags, 0
 * 00000001401C6DD8: jz      short loc_1401C6DE1
 * 00000001401C6DDA: call    KzSetIrqlUnsafe
 * 00000001401C6DDF: jmp     short loc_1401C6DE9
 * 00000001401C6DE1: mov     rax, cr8
 * 00000001401C6DE5: mov     cr8, rcx
 * 00000001401C6DE9: mov     [rbp+0D8h+var_12F], al
 * 00000001401C6DEC: mov     rcx, gs:20h
 * 00000001401C6DF5: inc     byte ptr [rcx+20h]
 * 00000001401C6DF8: cmp     byte ptr [rcx+20h], 1
 * 00000001401C6DFC: jnz     short loc_1401C6E4E
 * 00000001401C6DFE: rdtsc
 * 00000001401C6E00: shl     rdx, 20h
 * 00000001401C6E04: or      rax, rdx
 * 00000001401C6E07: mov     r8, [rcx+8]
 * 00000001401C6E0B: sub     rax, [rcx+5BC0h]
 * 00000001401C6E12: add     [r8+48h], rax
 * 00000001401C6E16: mov     edx, [r8+50h]
 * 00000001401C6E1A: add     [rcx+5BC0h], rax
 * 00000001401C6E21: add     rdx, rax
 * 00000001401C6E24: mov     ecx, edx
 * 00000001401C6E26: shr     rdx, 20h
 * 00000001401C6E2A: jz      short loc_1401C6E2F
 * 00000001401C6E2C: or      ecx, 0FFFFFFFFh
 * 00000001401C6E2F: mov     [r8+50h], ecx
 * 00000001401C6E33: test    byte ptr [r8+2], 3Eh
 * 00000001401C6E38: jz      short loc_1401C6E4E
 * 00000001401C6E3A: mov     rdx, r8
 * 00000001401C6E3D: mov     r8, rax
 * 00000001401C6E40: mov     rcx, gs:20h
 * 00000001401C6E49: call    KiEndThreadAccountingPeriod
 * 00000001401C6E4E: sti
 * 00000001401C6E4F: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001401C6E59: jz      short loc_1401C6E67
 * 00000001401C6E5B: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001401C6E62: call    PerfInfoLogUnexpectedInterrupt
 * 00000001401C6E67: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001401C6E6E: jz      short loc_1401C6E8F
 * 00000001401C6E70: and     [rbp+0D8h+var_138], 0
 * 00000001401C6E75: xor     r9, r9
 * 00000001401C6E78: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001401C6E80: mov     edx, 1
 * 00000001401C6E85: mov     ecx, 12h
 * 00000001401C6E8A: call    KiBugCheckDispatch
 * 00000001401C6E8F: cli
 * 00000001401C6E90: mov     rcx, rsi
 * 00000001401C6E93: call    HalPerformEndOfInterrupt_0
 * 00000001401C6E98: mov     rcx, gs:20h
 * 00000001401C6EA1: cmp     byte ptr [rcx+20h], 1
 * 00000001401C6EA5: ja      short loc_1401C6F21
 * 00000001401C6EA7: rdtsc
 * 00000001401C6EA9: shl     rdx, 20h
 * 00000001401C6EAD: or      rax, rdx
 * 00000001401C6EB0: sub     rax, [rcx+5BC0h]
 * 00000001401C6EB7: add     [rcx+5C38h], rax
 * 00000001401C6EBE: add     [rcx+5BC0h], rax
 * 00000001401C6EC5: mov     r8, rax
 * 00000001401C6EC8: mov     rax, [rcx+8]
 * 00000001401C6ECC: test    byte ptr [rax+2], 72h
 * 00000001401C6ED0: jz      short loc_1401C6EE5
 * 00000001401C6ED2: xor     edx, edx
 * 00000001401C6ED4: call    KiBeginThreadAccountingPeriod
 * 00000001401C6ED9: mov     rcx, gs:20h
 * 00000001401C6EE2: inc     byte ptr [rcx+20h]
 * 00000001401C6EE5: mov     dl, [rcx+6]
 * 00000001401C6EE8: and     byte ptr [rcx+6], 0
 * 00000001401C6EEC: cmp     byte ptr [rcx+7], 0
 * 00000001401C6EF0: jnz     short loc_1401C6F21
 * 00000001401C6EF2: test    dl, dl
 * 00000001401C6EF4: jz      short loc_1401C6F21
 * 00000001401C6EF6: cmp     [rbp+0D8h+var_12F], 2
 * 00000001401C6EFA: jnb     short loc_1401C6F07
 * 00000001401C6EFC: and     byte ptr [rcx+20h], 0
 * 00000001401C6F00: call    KiDpcInterruptBypass
 * 00000001401C6F05: jmp     short loc_1401C6F24
 * 00000001401C6F07: mov     ecx, 2
 * 00000001401C6F0C: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C6F13: nop     dword ptr [rax+rax+00h]
 * 00000001401C6F18: mov     rcx, gs:20h
 * 00000001401C6F21: dec     byte ptr [rcx+20h]
 * 00000001401C6F24: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001401C6F28: cmp     cs:KiIrqlFlags, 0
 * 00000001401C6F2F: jz      short loc_1401C6F38
 * 00000001401C6F31: call    KzSetIrqlUnsafe
 * 00000001401C6F36: jmp     short loc_1401C6F3C
 * 00000001401C6F38: mov     cr8, rcx
 * 00000001401C6F3C: mov     rsi, [rbp+0D8h+var_8]
 * 00000001401C6F43: cli
 * 00000001401C6F44: test    [rbp+0D8h+arg_8], 1
 * 00000001401C6F4B: jz      loc_1401C708A
 * 00000001401C6F51: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C6F58: jz      short loc_1401C6F5D
 * 00000001401C6F5A: stac
 * 00000001401C6F5D: mov     rcx, gs:188h
 * 00000001401C6F66: test    byte ptr [rcx+0C2h], 3
 * 00000001401C6F6D: jz      short loc_1401C6F8A
 * 00000001401C6F6F: mov     ecx, 1
 * 00000001401C6F74: mov     cr8, rcx
 * 00000001401C6F78: sti
 * 00000001401C6F79: call    KiInitiateUserApc
 * 00000001401C6F7E: cli
 * 00000001401C6F7F: mov     ecx, 0
 * 00000001401C6F84: mov     cr8, rcx
 * 00000001401C6F88: jmp     short loc_1401C6F5D
 * 00000001401C6F8A: test    byte ptr gs:27Eh, 2
 * 00000001401C6F93: jz      short loc_1401C6F9C
 * 00000001401C6F95: xor     ecx, ecx
 * 00000001401C6F97: call    KiUpdateStibpPairing
 * 00000001401C6F9C: mov     rcx, gs:188h
 * 00000001401C6FA5: test    dword ptr [rcx], 8000000h
 * 00000001401C6FAB: jz      short loc_1401C6FB2
 * 00000001401C6FAD: call    KiRestoreSetContextState
 * 00000001401C6FB2: mov     rcx, gs:188h
 * 00000001401C6FBB: test    dword ptr [rcx], 40010000h
 * 00000001401C6FC1: jz      short loc_1401C6FD7
 * 00000001401C6FC3: test    byte ptr [rcx+2], 1
 * 00000001401C6FC7: jz      short loc_1401C6FD7
 * 00000001401C6FC9: call    KiCopyCounters
 * 00000001401C6FCE: mov     rcx, gs:188h
 * 00000001401C6FD7: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401C6FDB: cmp     [rbp+0D8h+var_58], 0
 * 00000001401C6FE3: jz      short loc_1401C6FEA
 * 00000001401C6FE5: call    KiRestoreDebugRegisterState
 * 00000001401C6FEA: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401C6FEE: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401C6FF2: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401C6FF6: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401C6FFA: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401C6FFE: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401C7002: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401C7006: mov     r10, [rbp+0D8h+var_100]
 * 00000001401C700A: mov     r9, [rbp+0D8h+var_108]
 * 00000001401C700E: mov     r8, [rbp+0D8h+var_110]
 * 00000001401C7012: mov     byte ptr gs:853h, 0
 * 00000001401C701B: movzx   eax, byte ptr gs:27Dh
 * 00000001401C7024: cmp     gs:27Ah, al
 * 00000001401C702C: jz      short loc_1401C703F
 * 00000001401C702E: mov     gs:27Ah, al
 * 00000001401C7036: mov     ecx, 48h ; 'H'
 * 00000001401C703B: xor     edx, edx
 * 00000001401C703D: wrmsr
 * 00000001401C703F: btr     word ptr gs:278h, 2
 * 00000001401C704A: jnb     short loc_1401C705A
 * 00000001401C704C: mov     eax, 1
 * 00000001401C7051: xor     edx, edx
 * 00000001401C7053: mov     ecx, 49h ; 'I'
 * 00000001401C7058: wrmsr
 * 00000001401C705A: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401C705E: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401C7062: mov     rax, [rbp+0D8h+var_128]
 * 00000001401C7066: mov     rsp, rbp
 * 00000001401C7069: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401C7070: add     rsp, 0E8h
 * 00000001401C7077: test    cs:KiKvaShadow, 1
 * 00000001401C707E: jz      short loc_1401C7085
 * 00000001401C7080: jmp     KiKernelExit
 * 00000001401C7085: swapgs
 * 00000001401C7088: iretq
 * 00000001401C708A: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401C708E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401C7092: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401C7096: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401C709A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401C709E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401C70A2: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401C70A6: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401C70AA: mov     r10, [rbp+0D8h+var_100]
 * 00000001401C70AE: mov     r9, [rbp+0D8h+var_108]
 * 00000001401C70B2: mov     r8, [rbp+0D8h+var_110]
 * 00000001401C70B6: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401C70BA: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401C70BE: mov     rax, [rbp+0D8h+var_128]
 * 00000001401C70C2: mov     rsp, rbp
 * 00000001401C70C5: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401C70CC: add     rsp, 0E8h
 * 00000001401C70D3: iretq
 */
