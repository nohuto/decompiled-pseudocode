/*
 * XREFs of KiChainedDispatch @ 0x1401C5920
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiScanInterruptObjectList @ 0x1401C5BB0 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1401C5920
 * Reason: Hex-Rays returned no pseudocode for 0x1401C5920
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C5920: mov     rdx, rsp
 * 00000001401C5923: mov     rcx, gs:6458h
 * 00000001401C592C: lea     rax, [rcx-6000h]
 * 00000001401C5933: cmp     rax, rsp
 * 00000001401C5936: ja      short loc_1401C593D
 * 00000001401C5938: cmp     rsp, rcx
 * 00000001401C593B: jb      short loc_1401C5949
 * 00000001401C593D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C5944: jnz     short loc_1401C5949
 * 00000001401C5946: mov     rsp, rcx
 * 00000001401C5949: sub     rsp, 20h
 * 00000001401C594D: mov     [rsp+20h+var_10], rdx
 * 00000001401C5952: call    KiScanInterruptObjectList
 * 00000001401C5957: mov     rsp, [rsp+20h+var_10]
 * 00000001401C595C: mov     rcx, rsi
 * 00000001401C595F: call    HalPerformEndOfInterrupt_0
 * 00000001401C5964: mov     rcx, gs:20h
 * 00000001401C596D: cmp     byte ptr [rcx+20h], 1
 * 00000001401C5971: ja      short loc_1401C59ED
 * 00000001401C5973: rdtsc
 * 00000001401C5975: shl     rdx, 20h
 * 00000001401C5979: or      rax, rdx
 * 00000001401C597C: sub     rax, [rcx+5BC0h]
 * 00000001401C5983: add     [rcx+5C38h], rax
 * 00000001401C598A: add     [rcx+5BC0h], rax
 * 00000001401C5991: mov     r8, rax
 * 00000001401C5994: mov     rax, [rcx+8]
 * 00000001401C5998: test    byte ptr [rax+2], 72h
 * 00000001401C599C: jz      short loc_1401C59B1
 * 00000001401C599E: xor     edx, edx
 * 00000001401C59A0: call    KiBeginThreadAccountingPeriod
 * 00000001401C59A5: mov     rcx, gs:20h
 * 00000001401C59AE: inc     byte ptr [rcx+20h]
 * 00000001401C59B1: mov     dl, [rcx+6]
 * 00000001401C59B4: and     byte ptr [rcx+6], 0
 * 00000001401C59B8: cmp     byte ptr [rcx+7], 0
 * 00000001401C59BC: jnz     short loc_1401C59ED
 * 00000001401C59BE: test    dl, dl
 * 00000001401C59C0: jz      short loc_1401C59ED
 * 00000001401C59C2: cmp     byte ptr [rbp-57h], 2
 * 00000001401C59C6: jnb     short loc_1401C59D3
 * 00000001401C59C8: and     byte ptr [rcx+20h], 0
 * 00000001401C59CC: call    KiDpcInterruptBypass
 * 00000001401C59D1: jmp     short loc_1401C59F0
 * 00000001401C59D3: mov     ecx, 2
 * 00000001401C59D8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C59DF: nop     dword ptr [rax+rax+00h]
 * 00000001401C59E4: mov     rcx, gs:20h
 * 00000001401C59ED: dec     byte ptr [rcx+20h]
 * 00000001401C59F0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C59F4: cmp     cs:KiIrqlFlags, 0
 * 00000001401C59FB: jz      short loc_1401C5A04
 * 00000001401C59FD: call    KzSetIrqlUnsafe
 * 00000001401C5A02: jmp     short loc_1401C5A08
 * 00000001401C5A04: mov     cr8, rcx
 * 00000001401C5A08: mov     rsi, [rbp+0D0h]
 * 00000001401C5A0F: test    byte ptr [rbp+0F0h], 1
 * 00000001401C5A16: jz      loc_1401C5B55
 * 00000001401C5A1C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C5A23: jz      short loc_1401C5A28
 * 00000001401C5A25: stac
 * 00000001401C5A28: mov     rcx, gs:188h
 * 00000001401C5A31: test    byte ptr [rcx+0C2h], 3
 * 00000001401C5A38: jz      short loc_1401C5A55
 * 00000001401C5A3A: mov     ecx, 1
 * 00000001401C5A3F: mov     cr8, rcx
 * 00000001401C5A43: sti
 * 00000001401C5A44: call    KiInitiateUserApc
 * 00000001401C5A49: cli
 * 00000001401C5A4A: mov     ecx, 0
 * 00000001401C5A4F: mov     cr8, rcx
 * 00000001401C5A53: jmp     short loc_1401C5A28
 * 00000001401C5A55: test    byte ptr gs:27Eh, 2
 * 00000001401C5A5E: jz      short loc_1401C5A67
 * 00000001401C5A60: xor     ecx, ecx
 * 00000001401C5A62: call    KiUpdateStibpPairing
 * 00000001401C5A67: mov     rcx, gs:188h
 * 00000001401C5A70: test    dword ptr [rcx], 8000000h
 * 00000001401C5A76: jz      short loc_1401C5A7D
 * 00000001401C5A78: call    KiRestoreSetContextState
 * 00000001401C5A7D: mov     rcx, gs:188h
 * 00000001401C5A86: test    dword ptr [rcx], 40010000h
 * 00000001401C5A8C: jz      short loc_1401C5AA2
 * 00000001401C5A8E: test    byte ptr [rcx+2], 1
 * 00000001401C5A92: jz      short loc_1401C5AA2
 * 00000001401C5A94: call    KiCopyCounters
 * 00000001401C5A99: mov     rcx, gs:188h
 * 00000001401C5AA2: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C5AA6: cmp     word ptr [rbp+80h], 0
 * 00000001401C5AAE: jz      short loc_1401C5AB5
 * 00000001401C5AB0: call    KiRestoreDebugRegisterState
 * 00000001401C5AB5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C5AB9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C5ABD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5AC1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5AC5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C5AC9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C5ACD: mov     r11, [rbp-20h]
 * 00000001401C5AD1: mov     r10, [rbp-28h]
 * 00000001401C5AD5: mov     r9, [rbp-30h]
 * 00000001401C5AD9: mov     r8, [rbp-38h]
 * 00000001401C5ADD: mov     byte ptr gs:853h, 0
 * 00000001401C5AE6: movzx   eax, byte ptr gs:27Dh
 * 00000001401C5AEF: cmp     gs:27Ah, al
 * 00000001401C5AF7: jz      short loc_1401C5B0A
 * 00000001401C5AF9: mov     gs:27Ah, al
 * 00000001401C5B01: mov     ecx, 48h ; 'H'
 * 00000001401C5B06: xor     edx, edx
 * 00000001401C5B08: wrmsr
 * 00000001401C5B0A: btr     word ptr gs:278h, 2
 * 00000001401C5B15: jnb     short loc_1401C5B25
 * 00000001401C5B17: mov     eax, 1
 * 00000001401C5B1C: xor     edx, edx
 * 00000001401C5B1E: mov     ecx, 49h ; 'I'
 * 00000001401C5B23: wrmsr
 * 00000001401C5B25: mov     rdx, [rbp-40h]
 * 00000001401C5B29: mov     rcx, [rbp-48h]
 * 00000001401C5B2D: mov     rax, [rbp-50h]
 * 00000001401C5B31: mov     rsp, rbp
 * 00000001401C5B34: mov     rbp, [rbp+0D8h]
 * 00000001401C5B3B: add     rsp, 0E8h
 * 00000001401C5B42: test    cs:KiKvaShadow, 1
 * 00000001401C5B49: jz      short loc_1401C5B50
 * 00000001401C5B4B: jmp     KiKernelExit
 * 00000001401C5B50: swapgs
 * 00000001401C5B53: iretq
 * 00000001401C5B55: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C5B59: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C5B5D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C5B61: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5B65: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5B69: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C5B6D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C5B71: mov     r11, [rbp-20h]
 * 00000001401C5B75: mov     r10, [rbp-28h]
 * 00000001401C5B79: mov     r9, [rbp-30h]
 * 00000001401C5B7D: mov     r8, [rbp-38h]
 * 00000001401C5B81: mov     rdx, [rbp-40h]
 * 00000001401C5B85: mov     rcx, [rbp-48h]
 * 00000001401C5B89: mov     rax, [rbp-50h]
 * 00000001401C5B8D: mov     rsp, rbp
 * 00000001401C5B90: mov     rbp, [rbp+0D8h]
 * 00000001401C5B97: add     rsp, 0E8h
 * 00000001401C5B9E: iretq
 */
