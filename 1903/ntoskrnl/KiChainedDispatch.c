/*
 * XREFs of KiChainedDispatch @ 0x1401C4DA0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiScanInterruptObjectList @ 0x1401C5030 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1401C4DA0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C4DA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C4DA0: mov     rdx, rsp
 * 00000001401C4DA3: mov     rcx, gs:6458h
 * 00000001401C4DAC: lea     rax, [rcx-6000h]
 * 00000001401C4DB3: cmp     rax, rsp
 * 00000001401C4DB6: ja      short loc_1401C4DBD
 * 00000001401C4DB8: cmp     rsp, rcx
 * 00000001401C4DBB: jb      short loc_1401C4DC9
 * 00000001401C4DBD: cmp     cs:KiBugCheckActive, 0
 * 00000001401C4DC4: jnz     short loc_1401C4DC9
 * 00000001401C4DC6: mov     rsp, rcx
 * 00000001401C4DC9: sub     rsp, 20h
 * 00000001401C4DCD: mov     [rsp+20h+var_10], rdx
 * 00000001401C4DD2: call    KiScanInterruptObjectList
 * 00000001401C4DD7: mov     rsp, [rsp+20h+var_10]
 * 00000001401C4DDC: mov     rcx, rsi
 * 00000001401C4DDF: call    HalPerformEndOfInterrupt_0
 * 00000001401C4DE4: mov     rcx, gs:20h
 * 00000001401C4DED: cmp     byte ptr [rcx+20h], 1
 * 00000001401C4DF1: ja      short loc_1401C4E6D
 * 00000001401C4DF3: rdtsc
 * 00000001401C4DF5: shl     rdx, 20h
 * 00000001401C4DF9: or      rax, rdx
 * 00000001401C4DFC: sub     rax, [rcx+5BC0h]
 * 00000001401C4E03: add     [rcx+5C38h], rax
 * 00000001401C4E0A: add     [rcx+5BC0h], rax
 * 00000001401C4E11: mov     r8, rax
 * 00000001401C4E14: mov     rax, [rcx+8]
 * 00000001401C4E18: test    byte ptr [rax+2], 72h
 * 00000001401C4E1C: jz      short loc_1401C4E31
 * 00000001401C4E1E: xor     edx, edx
 * 00000001401C4E20: call    KiBeginThreadAccountingPeriod
 * 00000001401C4E25: mov     rcx, gs:20h
 * 00000001401C4E2E: inc     byte ptr [rcx+20h]
 * 00000001401C4E31: mov     dl, [rcx+6]
 * 00000001401C4E34: and     byte ptr [rcx+6], 0
 * 00000001401C4E38: cmp     byte ptr [rcx+7], 0
 * 00000001401C4E3C: jnz     short loc_1401C4E6D
 * 00000001401C4E3E: test    dl, dl
 * 00000001401C4E40: jz      short loc_1401C4E6D
 * 00000001401C4E42: cmp     byte ptr [rbp-57h], 2
 * 00000001401C4E46: jnb     short loc_1401C4E53
 * 00000001401C4E48: and     byte ptr [rcx+20h], 0
 * 00000001401C4E4C: call    KiDpcInterruptBypass
 * 00000001401C4E51: jmp     short loc_1401C4E70
 * 00000001401C4E53: mov     ecx, 2
 * 00000001401C4E58: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C4E5F: nop     dword ptr [rax+rax+00h]
 * 00000001401C4E64: mov     rcx, gs:20h
 * 00000001401C4E6D: dec     byte ptr [rcx+20h]
 * 00000001401C4E70: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C4E74: cmp     cs:KiIrqlFlags, 0
 * 00000001401C4E7B: jz      short loc_1401C4E84
 * 00000001401C4E7D: call    KzSetIrqlUnsafe
 * 00000001401C4E82: jmp     short loc_1401C4E88
 * 00000001401C4E84: mov     cr8, rcx
 * 00000001401C4E88: mov     rsi, [rbp+0D0h]
 * 00000001401C4E8F: test    byte ptr [rbp+0F0h], 1
 * 00000001401C4E96: jz      loc_1401C4FD5
 * 00000001401C4E9C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C4EA3: jz      short loc_1401C4EA8
 * 00000001401C4EA5: stac
 * 00000001401C4EA8: mov     rcx, gs:188h
 * 00000001401C4EB1: test    byte ptr [rcx+0C2h], 3
 * 00000001401C4EB8: jz      short loc_1401C4ED5
 * 00000001401C4EBA: mov     ecx, 1
 * 00000001401C4EBF: mov     cr8, rcx
 * 00000001401C4EC3: sti
 * 00000001401C4EC4: call    KiInitiateUserApc
 * 00000001401C4EC9: cli
 * 00000001401C4ECA: mov     ecx, 0
 * 00000001401C4ECF: mov     cr8, rcx
 * 00000001401C4ED3: jmp     short loc_1401C4EA8
 * 00000001401C4ED5: test    byte ptr gs:27Eh, 2
 * 00000001401C4EDE: jz      short loc_1401C4EE7
 * 00000001401C4EE0: xor     ecx, ecx
 * 00000001401C4EE2: call    KiUpdateStibpPairing
 * 00000001401C4EE7: mov     rcx, gs:188h
 * 00000001401C4EF0: test    dword ptr [rcx], 8000000h
 * 00000001401C4EF6: jz      short loc_1401C4EFD
 * 00000001401C4EF8: call    KiRestoreSetContextState
 * 00000001401C4EFD: mov     rcx, gs:188h
 * 00000001401C4F06: test    dword ptr [rcx], 40010000h
 * 00000001401C4F0C: jz      short loc_1401C4F22
 * 00000001401C4F0E: test    byte ptr [rcx+2], 1
 * 00000001401C4F12: jz      short loc_1401C4F22
 * 00000001401C4F14: call    KiCopyCounters
 * 00000001401C4F19: mov     rcx, gs:188h
 * 00000001401C4F22: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C4F26: cmp     word ptr [rbp+80h], 0
 * 00000001401C4F2E: jz      short loc_1401C4F35
 * 00000001401C4F30: call    KiRestoreDebugRegisterState
 * 00000001401C4F35: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C4F39: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C4F3D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C4F41: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C4F45: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C4F49: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C4F4D: mov     r11, [rbp-20h]
 * 00000001401C4F51: mov     r10, [rbp-28h]
 * 00000001401C4F55: mov     r9, [rbp-30h]
 * 00000001401C4F59: mov     r8, [rbp-38h]
 * 00000001401C4F5D: mov     byte ptr gs:853h, 0
 * 00000001401C4F66: movzx   eax, byte ptr gs:27Dh
 * 00000001401C4F6F: cmp     gs:27Ah, al
 * 00000001401C4F77: jz      short loc_1401C4F8A
 * 00000001401C4F79: mov     gs:27Ah, al
 * 00000001401C4F81: mov     ecx, 48h ; 'H'
 * 00000001401C4F86: xor     edx, edx
 * 00000001401C4F88: wrmsr
 * 00000001401C4F8A: btr     word ptr gs:278h, 2
 * 00000001401C4F95: jnb     short loc_1401C4FA5
 * 00000001401C4F97: mov     eax, 1
 * 00000001401C4F9C: xor     edx, edx
 * 00000001401C4F9E: mov     ecx, 49h ; 'I'
 * 00000001401C4FA3: wrmsr
 * 00000001401C4FA5: mov     rdx, [rbp-40h]
 * 00000001401C4FA9: mov     rcx, [rbp-48h]
 * 00000001401C4FAD: mov     rax, [rbp-50h]
 * 00000001401C4FB1: mov     rsp, rbp
 * 00000001401C4FB4: mov     rbp, [rbp+0D8h]
 * 00000001401C4FBB: add     rsp, 0E8h
 * 00000001401C4FC2: test    cs:KiKvaShadow, 1
 * 00000001401C4FC9: jz      short loc_1401C4FD0
 * 00000001401C4FCB: jmp     KiKernelExit
 * 00000001401C4FD0: swapgs
 * 00000001401C4FD3: iretq
 * 00000001401C4FD5: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C4FD9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C4FDD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C4FE1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C4FE5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C4FE9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C4FED: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C4FF1: mov     r11, [rbp-20h]
 * 00000001401C4FF5: mov     r10, [rbp-28h]
 * 00000001401C4FF9: mov     r9, [rbp-30h]
 * 00000001401C4FFD: mov     r8, [rbp-38h]
 * 00000001401C5001: mov     rdx, [rbp-40h]
 * 00000001401C5005: mov     rcx, [rbp-48h]
 * 00000001401C5009: mov     rax, [rbp-50h]
 * 00000001401C500D: mov     rsp, rbp
 * 00000001401C5010: mov     rbp, [rbp+0D8h]
 * 00000001401C5017: add     rsp, 0E8h
 * 00000001401C501E: iretq
 */
