/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1401C5D70
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5360 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1401C5D70
 * Reason: Hex-Rays returned no pseudocode for 0x1401C5D70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C5D70: mov     rdx, rsp
 * 00000001401C5D73: mov     rcx, gs:6458h
 * 00000001401C5D7C: lea     rax, [rcx-6000h]
 * 00000001401C5D83: cmp     rax, rsp
 * 00000001401C5D86: ja      short loc_1401C5D8D
 * 00000001401C5D88: cmp     rsp, rcx
 * 00000001401C5D8B: jb      short loc_1401C5D99
 * 00000001401C5D8D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C5D94: jnz     short loc_1401C5D99
 * 00000001401C5D96: mov     rsp, rcx
 * 00000001401C5D99: sub     rsp, 20h
 * 00000001401C5D9D: mov     [rsp+20h+var_10], rdx
 * 00000001401C5DA2: call    KiInterruptSubDispatchNoLock
 * 00000001401C5DA7: mov     rsp, [rsp+20h+var_10]
 * 00000001401C5DAC: mov     rcx, gs:20h
 * 00000001401C5DB5: cmp     byte ptr [rcx+20h], 1
 * 00000001401C5DB9: ja      short loc_1401C5E35
 * 00000001401C5DBB: rdtsc
 * 00000001401C5DBD: shl     rdx, 20h
 * 00000001401C5DC1: or      rax, rdx
 * 00000001401C5DC4: sub     rax, [rcx+5BC0h]
 * 00000001401C5DCB: add     [rcx+5C38h], rax
 * 00000001401C5DD2: add     [rcx+5BC0h], rax
 * 00000001401C5DD9: mov     r8, rax
 * 00000001401C5DDC: mov     rax, [rcx+8]
 * 00000001401C5DE0: test    byte ptr [rax+2], 72h
 * 00000001401C5DE4: jz      short loc_1401C5DF9
 * 00000001401C5DE6: xor     edx, edx
 * 00000001401C5DE8: call    KiBeginThreadAccountingPeriod
 * 00000001401C5DED: mov     rcx, gs:20h
 * 00000001401C5DF6: inc     byte ptr [rcx+20h]
 * 00000001401C5DF9: mov     dl, [rcx+6]
 * 00000001401C5DFC: and     byte ptr [rcx+6], 0
 * 00000001401C5E00: cmp     byte ptr [rcx+7], 0
 * 00000001401C5E04: jnz     short loc_1401C5E35
 * 00000001401C5E06: test    dl, dl
 * 00000001401C5E08: jz      short loc_1401C5E35
 * 00000001401C5E0A: cmp     byte ptr [rbp-57h], 2
 * 00000001401C5E0E: jnb     short loc_1401C5E1B
 * 00000001401C5E10: and     byte ptr [rcx+20h], 0
 * 00000001401C5E14: call    KiDpcInterruptBypass
 * 00000001401C5E19: jmp     short loc_1401C5E38
 * 00000001401C5E1B: mov     ecx, 2
 * 00000001401C5E20: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C5E27: nop     dword ptr [rax+rax+00h]
 * 00000001401C5E2C: mov     rcx, gs:20h
 * 00000001401C5E35: dec     byte ptr [rcx+20h]
 * 00000001401C5E38: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C5E3C: cmp     cs:KiIrqlFlags, 0
 * 00000001401C5E43: jz      short loc_1401C5E4C
 * 00000001401C5E45: call    KzSetIrqlUnsafe
 * 00000001401C5E4A: jmp     short loc_1401C5E50
 * 00000001401C5E4C: mov     cr8, rcx
 * 00000001401C5E50: mov     rsi, [rbp+0D0h]
 * 00000001401C5E57: test    byte ptr [rbp+0F0h], 1
 * 00000001401C5E5E: jz      loc_1401C5F9D
 * 00000001401C5E64: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C5E6B: jz      short loc_1401C5E70
 * 00000001401C5E6D: stac
 * 00000001401C5E70: mov     rcx, gs:188h
 * 00000001401C5E79: test    byte ptr [rcx+0C2h], 3
 * 00000001401C5E80: jz      short loc_1401C5E9D
 * 00000001401C5E82: mov     ecx, 1
 * 00000001401C5E87: mov     cr8, rcx
 * 00000001401C5E8B: sti
 * 00000001401C5E8C: call    KiInitiateUserApc
 * 00000001401C5E91: cli
 * 00000001401C5E92: mov     ecx, 0
 * 00000001401C5E97: mov     cr8, rcx
 * 00000001401C5E9B: jmp     short loc_1401C5E70
 * 00000001401C5E9D: test    byte ptr gs:27Eh, 2
 * 00000001401C5EA6: jz      short loc_1401C5EAF
 * 00000001401C5EA8: xor     ecx, ecx
 * 00000001401C5EAA: call    KiUpdateStibpPairing
 * 00000001401C5EAF: mov     rcx, gs:188h
 * 00000001401C5EB8: test    dword ptr [rcx], 8000000h
 * 00000001401C5EBE: jz      short loc_1401C5EC5
 * 00000001401C5EC0: call    KiRestoreSetContextState
 * 00000001401C5EC5: mov     rcx, gs:188h
 * 00000001401C5ECE: test    dword ptr [rcx], 40010000h
 * 00000001401C5ED4: jz      short loc_1401C5EEA
 * 00000001401C5ED6: test    byte ptr [rcx+2], 1
 * 00000001401C5EDA: jz      short loc_1401C5EEA
 * 00000001401C5EDC: call    KiCopyCounters
 * 00000001401C5EE1: mov     rcx, gs:188h
 * 00000001401C5EEA: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C5EEE: cmp     word ptr [rbp+80h], 0
 * 00000001401C5EF6: jz      short loc_1401C5EFD
 * 00000001401C5EF8: call    KiRestoreDebugRegisterState
 * 00000001401C5EFD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C5F01: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C5F05: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5F09: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5F0D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C5F11: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C5F15: mov     r11, [rbp-20h]
 * 00000001401C5F19: mov     r10, [rbp-28h]
 * 00000001401C5F1D: mov     r9, [rbp-30h]
 * 00000001401C5F21: mov     r8, [rbp-38h]
 * 00000001401C5F25: mov     byte ptr gs:853h, 0
 * 00000001401C5F2E: movzx   eax, byte ptr gs:27Dh
 * 00000001401C5F37: cmp     gs:27Ah, al
 * 00000001401C5F3F: jz      short loc_1401C5F52
 * 00000001401C5F41: mov     gs:27Ah, al
 * 00000001401C5F49: mov     ecx, 48h ; 'H'
 * 00000001401C5F4E: xor     edx, edx
 * 00000001401C5F50: wrmsr
 * 00000001401C5F52: btr     word ptr gs:278h, 2
 * 00000001401C5F5D: jnb     short loc_1401C5F6D
 * 00000001401C5F5F: mov     eax, 1
 * 00000001401C5F64: xor     edx, edx
 * 00000001401C5F66: mov     ecx, 49h ; 'I'
 * 00000001401C5F6B: wrmsr
 * 00000001401C5F6D: mov     rdx, [rbp-40h]
 * 00000001401C5F71: mov     rcx, [rbp-48h]
 * 00000001401C5F75: mov     rax, [rbp-50h]
 * 00000001401C5F79: mov     rsp, rbp
 * 00000001401C5F7C: mov     rbp, [rbp+0D8h]
 * 00000001401C5F83: add     rsp, 0E8h
 * 00000001401C5F8A: test    cs:KiKvaShadow, 1
 * 00000001401C5F91: jz      short loc_1401C5F98
 * 00000001401C5F93: jmp     KiKernelExit
 * 00000001401C5F98: swapgs
 * 00000001401C5F9B: iretq
 * 00000001401C5F9D: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C5FA1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C5FA5: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C5FA9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5FAD: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5FB1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C5FB5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C5FB9: mov     r11, [rbp-20h]
 * 00000001401C5FBD: mov     r10, [rbp-28h]
 * 00000001401C5FC1: mov     r9, [rbp-30h]
 * 00000001401C5FC5: mov     r8, [rbp-38h]
 * 00000001401C5FC9: mov     rdx, [rbp-40h]
 * 00000001401C5FCD: mov     rcx, [rbp-48h]
 * 00000001401C5FD1: mov     rax, [rbp-50h]
 * 00000001401C5FD5: mov     rsp, rbp
 * 00000001401C5FD8: mov     rbp, [rbp+0D8h]
 * 00000001401C5FDF: add     rsp, 0E8h
 * 00000001401C5FE6: iretq
 */
