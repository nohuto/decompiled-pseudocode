/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1401C5AE0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401C54B0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1401C5AE0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C5AE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C5AE0: mov     rdx, rsp
 * 00000001401C5AE3: mov     rcx, gs:6458h
 * 00000001401C5AEC: lea     rax, [rcx-6000h]
 * 00000001401C5AF3: cmp     rax, rsp
 * 00000001401C5AF6: ja      short loc_1401C5AFD
 * 00000001401C5AF8: cmp     rsp, rcx
 * 00000001401C5AFB: jb      short loc_1401C5B09
 * 00000001401C5AFD: cmp     cs:KiBugCheckActive, 0
 * 00000001401C5B04: jnz     short loc_1401C5B09
 * 00000001401C5B06: mov     rsp, rcx
 * 00000001401C5B09: sub     rsp, 20h
 * 00000001401C5B0D: mov     [rsp+20h+var_10], rdx
 * 00000001401C5B12: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001401C5B17: mov     rsp, [rsp+20h+var_10]
 * 00000001401C5B1C: mov     rcx, rsi
 * 00000001401C5B1F: call    HalPerformEndOfInterrupt_0
 * 00000001401C5B24: mov     rcx, gs:20h
 * 00000001401C5B2D: cmp     byte ptr [rcx+20h], 1
 * 00000001401C5B31: ja      short loc_1401C5BAD
 * 00000001401C5B33: rdtsc
 * 00000001401C5B35: shl     rdx, 20h
 * 00000001401C5B39: or      rax, rdx
 * 00000001401C5B3C: sub     rax, [rcx+5BC0h]
 * 00000001401C5B43: add     [rcx+5C38h], rax
 * 00000001401C5B4A: add     [rcx+5BC0h], rax
 * 00000001401C5B51: mov     r8, rax
 * 00000001401C5B54: mov     rax, [rcx+8]
 * 00000001401C5B58: test    byte ptr [rax+2], 72h
 * 00000001401C5B5C: jz      short loc_1401C5B71
 * 00000001401C5B5E: xor     edx, edx
 * 00000001401C5B60: call    KiBeginThreadAccountingPeriod
 * 00000001401C5B65: mov     rcx, gs:20h
 * 00000001401C5B6E: inc     byte ptr [rcx+20h]
 * 00000001401C5B71: mov     dl, [rcx+6]
 * 00000001401C5B74: and     byte ptr [rcx+6], 0
 * 00000001401C5B78: cmp     byte ptr [rcx+7], 0
 * 00000001401C5B7C: jnz     short loc_1401C5BAD
 * 00000001401C5B7E: test    dl, dl
 * 00000001401C5B80: jz      short loc_1401C5BAD
 * 00000001401C5B82: cmp     byte ptr [rbp-57h], 2
 * 00000001401C5B86: jnb     short loc_1401C5B93
 * 00000001401C5B88: and     byte ptr [rcx+20h], 0
 * 00000001401C5B8C: call    KiDpcInterruptBypass
 * 00000001401C5B91: jmp     short loc_1401C5BB0
 * 00000001401C5B93: mov     ecx, 2
 * 00000001401C5B98: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C5B9F: nop     dword ptr [rax+rax+00h]
 * 00000001401C5BA4: mov     rcx, gs:20h
 * 00000001401C5BAD: dec     byte ptr [rcx+20h]
 * 00000001401C5BB0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C5BB4: cmp     cs:KiIrqlFlags, 0
 * 00000001401C5BBB: jz      short loc_1401C5BC4
 * 00000001401C5BBD: call    KzSetIrqlUnsafe
 * 00000001401C5BC2: jmp     short loc_1401C5BC8
 * 00000001401C5BC4: mov     cr8, rcx
 * 00000001401C5BC8: mov     rsi, [rbp+0D0h]
 * 00000001401C5BCF: test    byte ptr [rbp+0F0h], 1
 * 00000001401C5BD6: jz      loc_1401C5D15
 * 00000001401C5BDC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C5BE3: jz      short loc_1401C5BE8
 * 00000001401C5BE5: stac
 * 00000001401C5BE8: mov     rcx, gs:188h
 * 00000001401C5BF1: test    byte ptr [rcx+0C2h], 3
 * 00000001401C5BF8: jz      short loc_1401C5C15
 * 00000001401C5BFA: mov     ecx, 1
 * 00000001401C5BFF: mov     cr8, rcx
 * 00000001401C5C03: sti
 * 00000001401C5C04: call    KiInitiateUserApc
 * 00000001401C5C09: cli
 * 00000001401C5C0A: mov     ecx, 0
 * 00000001401C5C0F: mov     cr8, rcx
 * 00000001401C5C13: jmp     short loc_1401C5BE8
 * 00000001401C5C15: test    byte ptr gs:27Eh, 2
 * 00000001401C5C1E: jz      short loc_1401C5C27
 * 00000001401C5C20: xor     ecx, ecx
 * 00000001401C5C22: call    KiUpdateStibpPairing
 * 00000001401C5C27: mov     rcx, gs:188h
 * 00000001401C5C30: test    dword ptr [rcx], 8000000h
 * 00000001401C5C36: jz      short loc_1401C5C3D
 * 00000001401C5C38: call    KiRestoreSetContextState
 * 00000001401C5C3D: mov     rcx, gs:188h
 * 00000001401C5C46: test    dword ptr [rcx], 40010000h
 * 00000001401C5C4C: jz      short loc_1401C5C62
 * 00000001401C5C4E: test    byte ptr [rcx+2], 1
 * 00000001401C5C52: jz      short loc_1401C5C62
 * 00000001401C5C54: call    KiCopyCounters
 * 00000001401C5C59: mov     rcx, gs:188h
 * 00000001401C5C62: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C5C66: cmp     word ptr [rbp+80h], 0
 * 00000001401C5C6E: jz      short loc_1401C5C75
 * 00000001401C5C70: call    KiRestoreDebugRegisterState
 * 00000001401C5C75: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C5C79: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C5C7D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5C81: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5C85: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C5C89: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C5C8D: mov     r11, [rbp-20h]
 * 00000001401C5C91: mov     r10, [rbp-28h]
 * 00000001401C5C95: mov     r9, [rbp-30h]
 * 00000001401C5C99: mov     r8, [rbp-38h]
 * 00000001401C5C9D: mov     byte ptr gs:853h, 0
 * 00000001401C5CA6: movzx   eax, byte ptr gs:27Dh
 * 00000001401C5CAF: cmp     gs:27Ah, al
 * 00000001401C5CB7: jz      short loc_1401C5CCA
 * 00000001401C5CB9: mov     gs:27Ah, al
 * 00000001401C5CC1: mov     ecx, 48h ; 'H'
 * 00000001401C5CC6: xor     edx, edx
 * 00000001401C5CC8: wrmsr
 * 00000001401C5CCA: btr     word ptr gs:278h, 2
 * 00000001401C5CD5: jnb     short loc_1401C5CE5
 * 00000001401C5CD7: mov     eax, 1
 * 00000001401C5CDC: xor     edx, edx
 * 00000001401C5CDE: mov     ecx, 49h ; 'I'
 * 00000001401C5CE3: wrmsr
 * 00000001401C5CE5: mov     rdx, [rbp-40h]
 * 00000001401C5CE9: mov     rcx, [rbp-48h]
 * 00000001401C5CED: mov     rax, [rbp-50h]
 * 00000001401C5CF1: mov     rsp, rbp
 * 00000001401C5CF4: mov     rbp, [rbp+0D8h]
 * 00000001401C5CFB: add     rsp, 0E8h
 * 00000001401C5D02: test    cs:KiKvaShadow, 1
 * 00000001401C5D09: jz      short loc_1401C5D10
 * 00000001401C5D0B: jmp     KiKernelExit
 * 00000001401C5D10: swapgs
 * 00000001401C5D13: iretq
 * 00000001401C5D15: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C5D19: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C5D1D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C5D21: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5D25: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5D29: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C5D2D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C5D31: mov     r11, [rbp-20h]
 * 00000001401C5D35: mov     r10, [rbp-28h]
 * 00000001401C5D39: mov     r9, [rbp-30h]
 * 00000001401C5D3D: mov     r8, [rbp-38h]
 * 00000001401C5D41: mov     rdx, [rbp-40h]
 * 00000001401C5D45: mov     rcx, [rbp-48h]
 * 00000001401C5D49: mov     rax, [rbp-50h]
 * 00000001401C5D4D: mov     rsp, rbp
 * 00000001401C5D50: mov     rbp, [rbp+0D8h]
 * 00000001401C5D57: add     rsp, 0E8h
 * 00000001401C5D5E: iretq
 */
