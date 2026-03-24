/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1401C9D70
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1401C8F50 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401C9230 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401C9510 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401C97F0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401CA150 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1401C9D70
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9D70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9D70: mov     rdx, rsp
 * 00000001401C9D73: mov     rcx, gs:6458h
 * 00000001401C9D7C: lea     rax, [rcx-6000h]
 * 00000001401C9D83: cmp     rax, rsp
 * 00000001401C9D86: ja      short loc_1401C9D8D
 * 00000001401C9D88: cmp     rsp, rcx
 * 00000001401C9D8B: jb      short loc_1401C9D99
 * 00000001401C9D8D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C9D94: jnz     short loc_1401C9D99
 * 00000001401C9D96: mov     rsp, rcx
 * 00000001401C9D99: sub     rsp, 20h
 * 00000001401C9D9D: mov     [rsp+20h+var_10], rdx
 * 00000001401C9DA2: call    KiVmbusInterruptSubDispatch
 * 00000001401C9DA7: mov     rsp, [rsp+20h+var_10]
 * 00000001401C9DAC: cli
 * 00000001401C9DAD: mov     rcx, gs:20h
 * 00000001401C9DB6: cmp     byte ptr [rcx+20h], 1
 * 00000001401C9DBA: ja      short loc_1401C9E36
 * 00000001401C9DBC: rdtsc
 * 00000001401C9DBE: shl     rdx, 20h
 * 00000001401C9DC2: or      rax, rdx
 * 00000001401C9DC5: sub     rax, [rcx+5BC0h]
 * 00000001401C9DCC: add     [rcx+5C38h], rax
 * 00000001401C9DD3: add     [rcx+5BC0h], rax
 * 00000001401C9DDA: mov     r8, rax
 * 00000001401C9DDD: mov     rax, [rcx+8]
 * 00000001401C9DE1: test    byte ptr [rax+2], 72h
 * 00000001401C9DE5: jz      short loc_1401C9DFA
 * 00000001401C9DE7: xor     edx, edx
 * 00000001401C9DE9: call    KiBeginThreadAccountingPeriod
 * 00000001401C9DEE: mov     rcx, gs:20h
 * 00000001401C9DF7: inc     byte ptr [rcx+20h]
 * 00000001401C9DFA: mov     dl, [rcx+6]
 * 00000001401C9DFD: and     byte ptr [rcx+6], 0
 * 00000001401C9E01: cmp     byte ptr [rcx+7], 0
 * 00000001401C9E05: jnz     short loc_1401C9E36
 * 00000001401C9E07: test    dl, dl
 * 00000001401C9E09: jz      short loc_1401C9E36
 * 00000001401C9E0B: cmp     byte ptr [rbp-57h], 2
 * 00000001401C9E0F: jnb     short loc_1401C9E1C
 * 00000001401C9E11: and     byte ptr [rcx+20h], 0
 * 00000001401C9E15: call    KiDpcInterruptBypass
 * 00000001401C9E1A: jmp     short loc_1401C9E39
 * 00000001401C9E1C: mov     ecx, 2
 * 00000001401C9E21: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C9E28: nop     dword ptr [rax+rax+00h]
 * 00000001401C9E2D: mov     rcx, gs:20h
 * 00000001401C9E36: dec     byte ptr [rcx+20h]
 * 00000001401C9E39: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C9E3D: cmp     cs:KiIrqlFlags, 0
 * 00000001401C9E44: jz      short loc_1401C9E4D
 * 00000001401C9E46: call    KzSetIrqlUnsafe
 * 00000001401C9E4B: jmp     short loc_1401C9E51
 * 00000001401C9E4D: mov     cr8, rcx
 * 00000001401C9E51: mov     rsi, [rbp+0D0h]
 * 00000001401C9E58: cli
 * 00000001401C9E59: test    byte ptr [rbp+0F0h], 1
 * 00000001401C9E60: jz      loc_1401C9F9F
 * 00000001401C9E66: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C9E6D: jz      short loc_1401C9E72
 * 00000001401C9E6F: stac
 * 00000001401C9E72: mov     rcx, gs:188h
 * 00000001401C9E7B: test    byte ptr [rcx+0C2h], 3
 * 00000001401C9E82: jz      short loc_1401C9E9F
 * 00000001401C9E84: mov     ecx, 1
 * 00000001401C9E89: mov     cr8, rcx
 * 00000001401C9E8D: sti
 * 00000001401C9E8E: call    KiInitiateUserApc
 * 00000001401C9E93: cli
 * 00000001401C9E94: mov     ecx, 0
 * 00000001401C9E99: mov     cr8, rcx
 * 00000001401C9E9D: jmp     short loc_1401C9E72
 * 00000001401C9E9F: test    byte ptr gs:27Eh, 2
 * 00000001401C9EA8: jz      short loc_1401C9EB1
 * 00000001401C9EAA: xor     ecx, ecx
 * 00000001401C9EAC: call    KiUpdateStibpPairing
 * 00000001401C9EB1: mov     rcx, gs:188h
 * 00000001401C9EBA: test    dword ptr [rcx], 8000000h
 * 00000001401C9EC0: jz      short loc_1401C9EC7
 * 00000001401C9EC2: call    KiRestoreSetContextState
 * 00000001401C9EC7: mov     rcx, gs:188h
 * 00000001401C9ED0: test    dword ptr [rcx], 40010000h
 * 00000001401C9ED6: jz      short loc_1401C9EEC
 * 00000001401C9ED8: test    byte ptr [rcx+2], 1
 * 00000001401C9EDC: jz      short loc_1401C9EEC
 * 00000001401C9EDE: call    KiCopyCounters
 * 00000001401C9EE3: mov     rcx, gs:188h
 * 00000001401C9EEC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C9EF0: cmp     word ptr [rbp+80h], 0
 * 00000001401C9EF8: jz      short loc_1401C9EFF
 * 00000001401C9EFA: call    KiRestoreDebugRegisterState
 * 00000001401C9EFF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C9F03: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C9F07: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C9F0B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C9F0F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C9F13: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C9F17: mov     r11, [rbp-20h]
 * 00000001401C9F1B: mov     r10, [rbp-28h]
 * 00000001401C9F1F: mov     r9, [rbp-30h]
 * 00000001401C9F23: mov     r8, [rbp-38h]
 * 00000001401C9F27: mov     byte ptr gs:853h, 0
 * 00000001401C9F30: movzx   eax, byte ptr gs:27Dh
 * 00000001401C9F39: cmp     gs:27Ah, al
 * 00000001401C9F41: jz      short loc_1401C9F54
 * 00000001401C9F43: mov     gs:27Ah, al
 * 00000001401C9F4B: mov     ecx, 48h ; 'H'
 * 00000001401C9F50: xor     edx, edx
 * 00000001401C9F52: wrmsr
 * 00000001401C9F54: btr     word ptr gs:278h, 2
 * 00000001401C9F5F: jnb     short loc_1401C9F6F
 * 00000001401C9F61: mov     eax, 1
 * 00000001401C9F66: xor     edx, edx
 * 00000001401C9F68: mov     ecx, 49h ; 'I'
 * 00000001401C9F6D: wrmsr
 * 00000001401C9F6F: mov     rdx, [rbp-40h]
 * 00000001401C9F73: mov     rcx, [rbp-48h]
 * 00000001401C9F77: mov     rax, [rbp-50h]
 * 00000001401C9F7B: mov     rsp, rbp
 * 00000001401C9F7E: mov     rbp, [rbp+0D8h]
 * 00000001401C9F85: add     rsp, 0E8h
 * 00000001401C9F8C: test    cs:KiKvaShadow, 1
 * 00000001401C9F93: jz      short loc_1401C9F9A
 * 00000001401C9F95: jmp     KiKernelExit
 * 00000001401C9F9A: swapgs
 * 00000001401C9F9D: iretq
 * 00000001401C9F9F: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C9FA3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C9FA7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C9FAB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C9FAF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C9FB3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C9FB7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C9FBB: mov     r11, [rbp-20h]
 * 00000001401C9FBF: mov     r10, [rbp-28h]
 * 00000001401C9FC3: mov     r9, [rbp-30h]
 * 00000001401C9FC7: mov     r8, [rbp-38h]
 * 00000001401C9FCB: mov     rdx, [rbp-40h]
 * 00000001401C9FCF: mov     rcx, [rbp-48h]
 * 00000001401C9FD3: mov     rax, [rbp-50h]
 * 00000001401C9FD7: mov     rsp, rbp
 * 00000001401C9FDA: mov     rbp, [rbp+0D8h]
 * 00000001401C9FE1: add     rsp, 0E8h
 * 00000001401C9FE8: iretq
 */
