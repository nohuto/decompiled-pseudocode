/*
 * XREFs of KiHvInterruptDispatch @ 0x1401C9AD0
 * Callers:
 *     KiHvInterrupt @ 0x1401C8C70 (KiHvInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiHvInterruptSubDispatch @ 0x1401C9FF0 (KiHvInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterruptDispatch @ 0x1401C9AD0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9AD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9AD0: mov     rdx, rsp
 * 00000001401C9AD3: mov     rcx, gs:6458h
 * 00000001401C9ADC: lea     rax, [rcx-6000h]
 * 00000001401C9AE3: cmp     rax, rsp
 * 00000001401C9AE6: ja      short loc_1401C9AED
 * 00000001401C9AE8: cmp     rsp, rcx
 * 00000001401C9AEB: jb      short loc_1401C9AF9
 * 00000001401C9AED: cmp     cs:KiBugCheckActive, 0
 * 00000001401C9AF4: jnz     short loc_1401C9AF9
 * 00000001401C9AF6: mov     rsp, rcx
 * 00000001401C9AF9: sub     rsp, 20h
 * 00000001401C9AFD: mov     [rsp+20h+var_10], rdx
 * 00000001401C9B02: call    KiHvInterruptSubDispatch
 * 00000001401C9B07: mov     rsp, [rsp+20h+var_10]
 * 00000001401C9B0C: test    cs:HvlEnlightenments, 1000h
 * 00000001401C9B16: jz      short loc_1401C9B20
 * 00000001401C9B18: mov     rcx, rsi
 * 00000001401C9B1B: call    HalPerformEndOfInterrupt_0
 * 00000001401C9B20: cli
 * 00000001401C9B21: mov     rcx, gs:20h
 * 00000001401C9B2A: cmp     byte ptr [rcx+20h], 1
 * 00000001401C9B2E: ja      short loc_1401C9BAA
 * 00000001401C9B30: rdtsc
 * 00000001401C9B32: shl     rdx, 20h
 * 00000001401C9B36: or      rax, rdx
 * 00000001401C9B39: sub     rax, [rcx+5BC0h]
 * 00000001401C9B40: add     [rcx+5C38h], rax
 * 00000001401C9B47: add     [rcx+5BC0h], rax
 * 00000001401C9B4E: mov     r8, rax
 * 00000001401C9B51: mov     rax, [rcx+8]
 * 00000001401C9B55: test    byte ptr [rax+2], 72h
 * 00000001401C9B59: jz      short loc_1401C9B6E
 * 00000001401C9B5B: xor     edx, edx
 * 00000001401C9B5D: call    KiBeginThreadAccountingPeriod
 * 00000001401C9B62: mov     rcx, gs:20h
 * 00000001401C9B6B: inc     byte ptr [rcx+20h]
 * 00000001401C9B6E: mov     dl, [rcx+6]
 * 00000001401C9B71: and     byte ptr [rcx+6], 0
 * 00000001401C9B75: cmp     byte ptr [rcx+7], 0
 * 00000001401C9B79: jnz     short loc_1401C9BAA
 * 00000001401C9B7B: test    dl, dl
 * 00000001401C9B7D: jz      short loc_1401C9BAA
 * 00000001401C9B7F: cmp     byte ptr [rbp-57h], 2
 * 00000001401C9B83: jnb     short loc_1401C9B90
 * 00000001401C9B85: and     byte ptr [rcx+20h], 0
 * 00000001401C9B89: call    KiDpcInterruptBypass
 * 00000001401C9B8E: jmp     short loc_1401C9BAD
 * 00000001401C9B90: mov     ecx, 2
 * 00000001401C9B95: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C9B9C: nop     dword ptr [rax+rax+00h]
 * 00000001401C9BA1: mov     rcx, gs:20h
 * 00000001401C9BAA: dec     byte ptr [rcx+20h]
 * 00000001401C9BAD: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C9BB1: cmp     cs:KiIrqlFlags, 0
 * 00000001401C9BB8: jz      short loc_1401C9BC1
 * 00000001401C9BBA: call    KzSetIrqlUnsafe
 * 00000001401C9BBF: jmp     short loc_1401C9BC5
 * 00000001401C9BC1: mov     cr8, rcx
 * 00000001401C9BC5: mov     rsi, [rbp+0D0h]
 * 00000001401C9BCC: cli
 * 00000001401C9BCD: test    byte ptr [rbp+0F0h], 1
 * 00000001401C9BD4: jz      loc_1401C9D13
 * 00000001401C9BDA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C9BE1: jz      short loc_1401C9BE6
 * 00000001401C9BE3: stac
 * 00000001401C9BE6: mov     rcx, gs:188h
 * 00000001401C9BEF: test    byte ptr [rcx+0C2h], 3
 * 00000001401C9BF6: jz      short loc_1401C9C13
 * 00000001401C9BF8: mov     ecx, 1
 * 00000001401C9BFD: mov     cr8, rcx
 * 00000001401C9C01: sti
 * 00000001401C9C02: call    KiInitiateUserApc
 * 00000001401C9C07: cli
 * 00000001401C9C08: mov     ecx, 0
 * 00000001401C9C0D: mov     cr8, rcx
 * 00000001401C9C11: jmp     short loc_1401C9BE6
 * 00000001401C9C13: test    byte ptr gs:27Eh, 2
 * 00000001401C9C1C: jz      short loc_1401C9C25
 * 00000001401C9C1E: xor     ecx, ecx
 * 00000001401C9C20: call    KiUpdateStibpPairing
 * 00000001401C9C25: mov     rcx, gs:188h
 * 00000001401C9C2E: test    dword ptr [rcx], 8000000h
 * 00000001401C9C34: jz      short loc_1401C9C3B
 * 00000001401C9C36: call    KiRestoreSetContextState
 * 00000001401C9C3B: mov     rcx, gs:188h
 * 00000001401C9C44: test    dword ptr [rcx], 40010000h
 * 00000001401C9C4A: jz      short loc_1401C9C60
 * 00000001401C9C4C: test    byte ptr [rcx+2], 1
 * 00000001401C9C50: jz      short loc_1401C9C60
 * 00000001401C9C52: call    KiCopyCounters
 * 00000001401C9C57: mov     rcx, gs:188h
 * 00000001401C9C60: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C9C64: cmp     word ptr [rbp+80h], 0
 * 00000001401C9C6C: jz      short loc_1401C9C73
 * 00000001401C9C6E: call    KiRestoreDebugRegisterState
 * 00000001401C9C73: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C9C77: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C9C7B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C9C7F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C9C83: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C9C87: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C9C8B: mov     r11, [rbp-20h]
 * 00000001401C9C8F: mov     r10, [rbp-28h]
 * 00000001401C9C93: mov     r9, [rbp-30h]
 * 00000001401C9C97: mov     r8, [rbp-38h]
 * 00000001401C9C9B: mov     byte ptr gs:853h, 0
 * 00000001401C9CA4: movzx   eax, byte ptr gs:27Dh
 * 00000001401C9CAD: cmp     gs:27Ah, al
 * 00000001401C9CB5: jz      short loc_1401C9CC8
 * 00000001401C9CB7: mov     gs:27Ah, al
 * 00000001401C9CBF: mov     ecx, 48h ; 'H'
 * 00000001401C9CC4: xor     edx, edx
 * 00000001401C9CC6: wrmsr
 * 00000001401C9CC8: btr     word ptr gs:278h, 2
 * 00000001401C9CD3: jnb     short loc_1401C9CE3
 * 00000001401C9CD5: mov     eax, 1
 * 00000001401C9CDA: xor     edx, edx
 * 00000001401C9CDC: mov     ecx, 49h ; 'I'
 * 00000001401C9CE1: wrmsr
 * 00000001401C9CE3: mov     rdx, [rbp-40h]
 * 00000001401C9CE7: mov     rcx, [rbp-48h]
 * 00000001401C9CEB: mov     rax, [rbp-50h]
 * 00000001401C9CEF: mov     rsp, rbp
 * 00000001401C9CF2: mov     rbp, [rbp+0D8h]
 * 00000001401C9CF9: add     rsp, 0E8h
 * 00000001401C9D00: test    cs:KiKvaShadow, 1
 * 00000001401C9D07: jz      short loc_1401C9D0E
 * 00000001401C9D09: jmp     KiKernelExit
 * 00000001401C9D0E: swapgs
 * 00000001401C9D11: iretq
 * 00000001401C9D13: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C9D17: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C9D1B: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C9D1F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C9D23: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C9D27: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C9D2B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C9D2F: mov     r11, [rbp-20h]
 * 00000001401C9D33: mov     r10, [rbp-28h]
 * 00000001401C9D37: mov     r9, [rbp-30h]
 * 00000001401C9D3B: mov     r8, [rbp-38h]
 * 00000001401C9D3F: mov     rdx, [rbp-40h]
 * 00000001401C9D43: mov     rcx, [rbp-48h]
 * 00000001401C9D47: mov     rax, [rbp-50h]
 * 00000001401C9D4B: mov     rsp, rbp
 * 00000001401C9D4E: mov     rbp, [rbp+0D8h]
 * 00000001401C9D55: add     rsp, 0E8h
 * 00000001401C9D5C: iretq
 */
