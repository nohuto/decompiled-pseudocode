/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1401C5850
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5360 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1401C5850
 * Reason: Hex-Rays returned no pseudocode for 0x1401C5850
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C5850: mov     rdx, rsp
 * 00000001401C5853: mov     rcx, gs:6458h
 * 00000001401C585C: lea     rax, [rcx-6000h]
 * 00000001401C5863: cmp     rax, rsp
 * 00000001401C5866: ja      short loc_1401C586D
 * 00000001401C5868: cmp     rsp, rcx
 * 00000001401C586B: jb      short loc_1401C5879
 * 00000001401C586D: cmp     cs:KiBugCheckActive, 0
 * 00000001401C5874: jnz     short loc_1401C5879
 * 00000001401C5876: mov     rsp, rcx
 * 00000001401C5879: sub     rsp, 20h
 * 00000001401C587D: mov     [rsp+20h+var_10], rdx
 * 00000001401C5882: call    KiInterruptSubDispatchNoLock
 * 00000001401C5887: mov     rsp, [rsp+20h+var_10]
 * 00000001401C588C: mov     rcx, rsi
 * 00000001401C588F: call    HalPerformEndOfInterrupt_0
 * 00000001401C5894: mov     rcx, gs:20h
 * 00000001401C589D: cmp     byte ptr [rcx+20h], 1
 * 00000001401C58A1: ja      short loc_1401C591D
 * 00000001401C58A3: rdtsc
 * 00000001401C58A5: shl     rdx, 20h
 * 00000001401C58A9: or      rax, rdx
 * 00000001401C58AC: sub     rax, [rcx+5BC0h]
 * 00000001401C58B3: add     [rcx+5C38h], rax
 * 00000001401C58BA: add     [rcx+5BC0h], rax
 * 00000001401C58C1: mov     r8, rax
 * 00000001401C58C4: mov     rax, [rcx+8]
 * 00000001401C58C8: test    byte ptr [rax+2], 72h
 * 00000001401C58CC: jz      short loc_1401C58E1
 * 00000001401C58CE: xor     edx, edx
 * 00000001401C58D0: call    KiBeginThreadAccountingPeriod
 * 00000001401C58D5: mov     rcx, gs:20h
 * 00000001401C58DE: inc     byte ptr [rcx+20h]
 * 00000001401C58E1: mov     dl, [rcx+6]
 * 00000001401C58E4: and     byte ptr [rcx+6], 0
 * 00000001401C58E8: cmp     byte ptr [rcx+7], 0
 * 00000001401C58EC: jnz     short loc_1401C591D
 * 00000001401C58EE: test    dl, dl
 * 00000001401C58F0: jz      short loc_1401C591D
 * 00000001401C58F2: cmp     byte ptr [rbp-57h], 2
 * 00000001401C58F6: jnb     short loc_1401C5903
 * 00000001401C58F8: and     byte ptr [rcx+20h], 0
 * 00000001401C58FC: call    KiDpcInterruptBypass
 * 00000001401C5901: jmp     short loc_1401C5920
 * 00000001401C5903: mov     ecx, 2
 * 00000001401C5908: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C590F: nop     dword ptr [rax+rax+00h]
 * 00000001401C5914: mov     rcx, gs:20h
 * 00000001401C591D: dec     byte ptr [rcx+20h]
 * 00000001401C5920: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C5924: cmp     cs:KiIrqlFlags, 0
 * 00000001401C592B: jz      short loc_1401C5934
 * 00000001401C592D: call    KzSetIrqlUnsafe
 * 00000001401C5932: jmp     short loc_1401C5938
 * 00000001401C5934: mov     cr8, rcx
 * 00000001401C5938: mov     rsi, [rbp+0D0h]
 * 00000001401C593F: test    byte ptr [rbp+0F0h], 1
 * 00000001401C5946: jz      loc_1401C5A85
 * 00000001401C594C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C5953: jz      short loc_1401C5958
 * 00000001401C5955: stac
 * 00000001401C5958: mov     rcx, gs:188h
 * 00000001401C5961: test    byte ptr [rcx+0C2h], 3
 * 00000001401C5968: jz      short loc_1401C5985
 * 00000001401C596A: mov     ecx, 1
 * 00000001401C596F: mov     cr8, rcx
 * 00000001401C5973: sti
 * 00000001401C5974: call    KiInitiateUserApc
 * 00000001401C5979: cli
 * 00000001401C597A: mov     ecx, 0
 * 00000001401C597F: mov     cr8, rcx
 * 00000001401C5983: jmp     short loc_1401C5958
 * 00000001401C5985: test    byte ptr gs:27Eh, 2
 * 00000001401C598E: jz      short loc_1401C5997
 * 00000001401C5990: xor     ecx, ecx
 * 00000001401C5992: call    KiUpdateStibpPairing
 * 00000001401C5997: mov     rcx, gs:188h
 * 00000001401C59A0: test    dword ptr [rcx], 8000000h
 * 00000001401C59A6: jz      short loc_1401C59AD
 * 00000001401C59A8: call    KiRestoreSetContextState
 * 00000001401C59AD: mov     rcx, gs:188h
 * 00000001401C59B6: test    dword ptr [rcx], 40010000h
 * 00000001401C59BC: jz      short loc_1401C59D2
 * 00000001401C59BE: test    byte ptr [rcx+2], 1
 * 00000001401C59C2: jz      short loc_1401C59D2
 * 00000001401C59C4: call    KiCopyCounters
 * 00000001401C59C9: mov     rcx, gs:188h
 * 00000001401C59D2: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C59D6: cmp     word ptr [rbp+80h], 0
 * 00000001401C59DE: jz      short loc_1401C59E5
 * 00000001401C59E0: call    KiRestoreDebugRegisterState
 * 00000001401C59E5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C59E9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C59ED: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C59F1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C59F5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C59F9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C59FD: mov     r11, [rbp-20h]
 * 00000001401C5A01: mov     r10, [rbp-28h]
 * 00000001401C5A05: mov     r9, [rbp-30h]
 * 00000001401C5A09: mov     r8, [rbp-38h]
 * 00000001401C5A0D: mov     byte ptr gs:853h, 0
 * 00000001401C5A16: movzx   eax, byte ptr gs:27Dh
 * 00000001401C5A1F: cmp     gs:27Ah, al
 * 00000001401C5A27: jz      short loc_1401C5A3A
 * 00000001401C5A29: mov     gs:27Ah, al
 * 00000001401C5A31: mov     ecx, 48h ; 'H'
 * 00000001401C5A36: xor     edx, edx
 * 00000001401C5A38: wrmsr
 * 00000001401C5A3A: btr     word ptr gs:278h, 2
 * 00000001401C5A45: jnb     short loc_1401C5A55
 * 00000001401C5A47: mov     eax, 1
 * 00000001401C5A4C: xor     edx, edx
 * 00000001401C5A4E: mov     ecx, 49h ; 'I'
 * 00000001401C5A53: wrmsr
 * 00000001401C5A55: mov     rdx, [rbp-40h]
 * 00000001401C5A59: mov     rcx, [rbp-48h]
 * 00000001401C5A5D: mov     rax, [rbp-50h]
 * 00000001401C5A61: mov     rsp, rbp
 * 00000001401C5A64: mov     rbp, [rbp+0D8h]
 * 00000001401C5A6B: add     rsp, 0E8h
 * 00000001401C5A72: test    cs:KiKvaShadow, 1
 * 00000001401C5A79: jz      short loc_1401C5A80
 * 00000001401C5A7B: jmp     KiKernelExit
 * 00000001401C5A80: swapgs
 * 00000001401C5A83: iretq
 * 00000001401C5A85: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C5A89: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C5A8D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C5A91: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5A95: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5A99: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C5A9D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C5AA1: mov     r11, [rbp-20h]
 * 00000001401C5AA5: mov     r10, [rbp-28h]
 * 00000001401C5AA9: mov     r9, [rbp-30h]
 * 00000001401C5AAD: mov     r8, [rbp-38h]
 * 00000001401C5AB1: mov     rdx, [rbp-40h]
 * 00000001401C5AB5: mov     rcx, [rbp-48h]
 * 00000001401C5AB9: mov     rax, [rbp-50h]
 * 00000001401C5ABD: mov     rsp, rbp
 * 00000001401C5AC0: mov     rbp, [rbp+0D8h]
 * 00000001401C5AC7: add     rsp, 0E8h
 * 00000001401C5ACE: iretq
 */
