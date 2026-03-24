/*
 * XREFs of KiInterruptDispatch @ 0x1401C55C0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1401C5210 (KiInterruptSubDispatch.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1401C55C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C55C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C55C0: mov     rdx, rsp
 * 00000001401C55C3: mov     rcx, gs:6458h
 * 00000001401C55CC: lea     rax, [rcx-6000h]
 * 00000001401C55D3: cmp     rax, rsp
 * 00000001401C55D6: ja      short loc_1401C55DD
 * 00000001401C55D8: cmp     rsp, rcx
 * 00000001401C55DB: jb      short loc_1401C55E9
 * 00000001401C55DD: cmp     cs:KiBugCheckActive, 0
 * 00000001401C55E4: jnz     short loc_1401C55E9
 * 00000001401C55E6: mov     rsp, rcx
 * 00000001401C55E9: sub     rsp, 20h
 * 00000001401C55ED: mov     [rsp+20h+var_10], rdx
 * 00000001401C55F2: call    KiInterruptSubDispatch
 * 00000001401C55F7: mov     rsp, [rsp+20h+var_10]
 * 00000001401C55FC: mov     rcx, rsi
 * 00000001401C55FF: call    HalPerformEndOfInterrupt_0
 * 00000001401C5604: mov     rcx, gs:20h
 * 00000001401C560D: cmp     byte ptr [rcx+20h], 1
 * 00000001401C5611: ja      short loc_1401C568D
 * 00000001401C5613: rdtsc
 * 00000001401C5615: shl     rdx, 20h
 * 00000001401C5619: or      rax, rdx
 * 00000001401C561C: sub     rax, [rcx+5BC0h]
 * 00000001401C5623: add     [rcx+5C38h], rax
 * 00000001401C562A: add     [rcx+5BC0h], rax
 * 00000001401C5631: mov     r8, rax
 * 00000001401C5634: mov     rax, [rcx+8]
 * 00000001401C5638: test    byte ptr [rax+2], 72h
 * 00000001401C563C: jz      short loc_1401C5651
 * 00000001401C563E: xor     edx, edx
 * 00000001401C5640: call    KiBeginThreadAccountingPeriod
 * 00000001401C5645: mov     rcx, gs:20h
 * 00000001401C564E: inc     byte ptr [rcx+20h]
 * 00000001401C5651: mov     dl, [rcx+6]
 * 00000001401C5654: and     byte ptr [rcx+6], 0
 * 00000001401C5658: cmp     byte ptr [rcx+7], 0
 * 00000001401C565C: jnz     short loc_1401C568D
 * 00000001401C565E: test    dl, dl
 * 00000001401C5660: jz      short loc_1401C568D
 * 00000001401C5662: cmp     byte ptr [rbp-57h], 2
 * 00000001401C5666: jnb     short loc_1401C5673
 * 00000001401C5668: and     byte ptr [rcx+20h], 0
 * 00000001401C566C: call    KiDpcInterruptBypass
 * 00000001401C5671: jmp     short loc_1401C5690
 * 00000001401C5673: mov     ecx, 2
 * 00000001401C5678: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C567F: nop     dword ptr [rax+rax+00h]
 * 00000001401C5684: mov     rcx, gs:20h
 * 00000001401C568D: dec     byte ptr [rcx+20h]
 * 00000001401C5690: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C5694: cmp     cs:KiIrqlFlags, 0
 * 00000001401C569B: jz      short loc_1401C56A4
 * 00000001401C569D: call    KzSetIrqlUnsafe
 * 00000001401C56A2: jmp     short loc_1401C56A8
 * 00000001401C56A4: mov     cr8, rcx
 * 00000001401C56A8: mov     rsi, [rbp+0D0h]
 * 00000001401C56AF: test    byte ptr [rbp+0F0h], 1
 * 00000001401C56B6: jz      loc_1401C57F5
 * 00000001401C56BC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C56C3: jz      short loc_1401C56C8
 * 00000001401C56C5: stac
 * 00000001401C56C8: mov     rcx, gs:188h
 * 00000001401C56D1: test    byte ptr [rcx+0C2h], 3
 * 00000001401C56D8: jz      short loc_1401C56F5
 * 00000001401C56DA: mov     ecx, 1
 * 00000001401C56DF: mov     cr8, rcx
 * 00000001401C56E3: sti
 * 00000001401C56E4: call    KiInitiateUserApc
 * 00000001401C56E9: cli
 * 00000001401C56EA: mov     ecx, 0
 * 00000001401C56EF: mov     cr8, rcx
 * 00000001401C56F3: jmp     short loc_1401C56C8
 * 00000001401C56F5: test    byte ptr gs:27Eh, 2
 * 00000001401C56FE: jz      short loc_1401C5707
 * 00000001401C5700: xor     ecx, ecx
 * 00000001401C5702: call    KiUpdateStibpPairing
 * 00000001401C5707: mov     rcx, gs:188h
 * 00000001401C5710: test    dword ptr [rcx], 8000000h
 * 00000001401C5716: jz      short loc_1401C571D
 * 00000001401C5718: call    KiRestoreSetContextState
 * 00000001401C571D: mov     rcx, gs:188h
 * 00000001401C5726: test    dword ptr [rcx], 40010000h
 * 00000001401C572C: jz      short loc_1401C5742
 * 00000001401C572E: test    byte ptr [rcx+2], 1
 * 00000001401C5732: jz      short loc_1401C5742
 * 00000001401C5734: call    KiCopyCounters
 * 00000001401C5739: mov     rcx, gs:188h
 * 00000001401C5742: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C5746: cmp     word ptr [rbp+80h], 0
 * 00000001401C574E: jz      short loc_1401C5755
 * 00000001401C5750: call    KiRestoreDebugRegisterState
 * 00000001401C5755: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C5759: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C575D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5761: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5765: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C5769: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C576D: mov     r11, [rbp-20h]
 * 00000001401C5771: mov     r10, [rbp-28h]
 * 00000001401C5775: mov     r9, [rbp-30h]
 * 00000001401C5779: mov     r8, [rbp-38h]
 * 00000001401C577D: mov     byte ptr gs:853h, 0
 * 00000001401C5786: movzx   eax, byte ptr gs:27Dh
 * 00000001401C578F: cmp     gs:27Ah, al
 * 00000001401C5797: jz      short loc_1401C57AA
 * 00000001401C5799: mov     gs:27Ah, al
 * 00000001401C57A1: mov     ecx, 48h ; 'H'
 * 00000001401C57A6: xor     edx, edx
 * 00000001401C57A8: wrmsr
 * 00000001401C57AA: btr     word ptr gs:278h, 2
 * 00000001401C57B5: jnb     short loc_1401C57C5
 * 00000001401C57B7: mov     eax, 1
 * 00000001401C57BC: xor     edx, edx
 * 00000001401C57BE: mov     ecx, 49h ; 'I'
 * 00000001401C57C3: wrmsr
 * 00000001401C57C5: mov     rdx, [rbp-40h]
 * 00000001401C57C9: mov     rcx, [rbp-48h]
 * 00000001401C57CD: mov     rax, [rbp-50h]
 * 00000001401C57D1: mov     rsp, rbp
 * 00000001401C57D4: mov     rbp, [rbp+0D8h]
 * 00000001401C57DB: add     rsp, 0E8h
 * 00000001401C57E2: test    cs:KiKvaShadow, 1
 * 00000001401C57E9: jz      short loc_1401C57F0
 * 00000001401C57EB: jmp     KiKernelExit
 * 00000001401C57F0: swapgs
 * 00000001401C57F3: iretq
 * 00000001401C57F5: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C57F9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C57FD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C5801: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C5805: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C5809: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C580D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C5811: mov     r11, [rbp-20h]
 * 00000001401C5815: mov     r10, [rbp-28h]
 * 00000001401C5819: mov     r9, [rbp-30h]
 * 00000001401C581D: mov     r8, [rbp-38h]
 * 00000001401C5821: mov     rdx, [rbp-40h]
 * 00000001401C5825: mov     rcx, [rbp-48h]
 * 00000001401C5829: mov     rax, [rbp-50h]
 * 00000001401C582D: mov     rsp, rbp
 * 00000001401C5830: mov     rbp, [rbp+0D8h]
 * 00000001401C5837: add     rsp, 0E8h
 * 00000001401C583E: iretq
 */
