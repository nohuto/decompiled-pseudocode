/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1401C63D0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401C5EE0 (KiInterruptSubDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1401C63D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C63D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C63D0: mov     rdx, rsp
 * 00000001401C63D3: mov     rcx, gs:6458h
 * 00000001401C63DC: lea     rax, [rcx-6000h]
 * 00000001401C63E3: cmp     rax, rsp
 * 00000001401C63E6: ja      short loc_1401C63ED
 * 00000001401C63E8: cmp     rsp, rcx
 * 00000001401C63EB: jb      short loc_1401C63F9
 * 00000001401C63ED: cmp     cs:KiBugCheckActive, 0
 * 00000001401C63F4: jnz     short loc_1401C63F9
 * 00000001401C63F6: mov     rsp, rcx
 * 00000001401C63F9: sub     rsp, 20h
 * 00000001401C63FD: mov     [rsp+20h+var_10], rdx
 * 00000001401C6402: call    KiInterruptSubDispatchNoLock
 * 00000001401C6407: mov     rsp, [rsp+20h+var_10]
 * 00000001401C640C: mov     rcx, rsi
 * 00000001401C640F: call    HalPerformEndOfInterrupt_0
 * 00000001401C6414: mov     rcx, gs:20h
 * 00000001401C641D: cmp     byte ptr [rcx+20h], 1
 * 00000001401C6421: ja      short loc_1401C649D
 * 00000001401C6423: rdtsc
 * 00000001401C6425: shl     rdx, 20h
 * 00000001401C6429: or      rax, rdx
 * 00000001401C642C: sub     rax, [rcx+5BC0h]
 * 00000001401C6433: add     [rcx+5C38h], rax
 * 00000001401C643A: add     [rcx+5BC0h], rax
 * 00000001401C6441: mov     r8, rax
 * 00000001401C6444: mov     rax, [rcx+8]
 * 00000001401C6448: test    byte ptr [rax+2], 72h
 * 00000001401C644C: jz      short loc_1401C6461
 * 00000001401C644E: xor     edx, edx
 * 00000001401C6450: call    KiBeginThreadAccountingPeriod
 * 00000001401C6455: mov     rcx, gs:20h
 * 00000001401C645E: inc     byte ptr [rcx+20h]
 * 00000001401C6461: mov     dl, [rcx+6]
 * 00000001401C6464: and     byte ptr [rcx+6], 0
 * 00000001401C6468: cmp     byte ptr [rcx+7], 0
 * 00000001401C646C: jnz     short loc_1401C649D
 * 00000001401C646E: test    dl, dl
 * 00000001401C6470: jz      short loc_1401C649D
 * 00000001401C6472: cmp     byte ptr [rbp-57h], 2
 * 00000001401C6476: jnb     short loc_1401C6483
 * 00000001401C6478: and     byte ptr [rcx+20h], 0
 * 00000001401C647C: call    KiDpcInterruptBypass
 * 00000001401C6481: jmp     short loc_1401C64A0
 * 00000001401C6483: mov     ecx, 2
 * 00000001401C6488: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C648F: nop     dword ptr [rax+rax+00h]
 * 00000001401C6494: mov     rcx, gs:20h
 * 00000001401C649D: dec     byte ptr [rcx+20h]
 * 00000001401C64A0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401C64A4: cmp     cs:KiIrqlFlags, 0
 * 00000001401C64AB: jz      short loc_1401C64B4
 * 00000001401C64AD: call    KzSetIrqlUnsafe
 * 00000001401C64B2: jmp     short loc_1401C64B8
 * 00000001401C64B4: mov     cr8, rcx
 * 00000001401C64B8: mov     rsi, [rbp+0D0h]
 * 00000001401C64BF: test    byte ptr [rbp+0F0h], 1
 * 00000001401C64C6: jz      loc_1401C6605
 * 00000001401C64CC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C64D3: jz      short loc_1401C64D8
 * 00000001401C64D5: stac
 * 00000001401C64D8: mov     rcx, gs:188h
 * 00000001401C64E1: test    byte ptr [rcx+0C2h], 3
 * 00000001401C64E8: jz      short loc_1401C6505
 * 00000001401C64EA: mov     ecx, 1
 * 00000001401C64EF: mov     cr8, rcx
 * 00000001401C64F3: sti
 * 00000001401C64F4: call    KiInitiateUserApc
 * 00000001401C64F9: cli
 * 00000001401C64FA: mov     ecx, 0
 * 00000001401C64FF: mov     cr8, rcx
 * 00000001401C6503: jmp     short loc_1401C64D8
 * 00000001401C6505: test    byte ptr gs:27Eh, 2
 * 00000001401C650E: jz      short loc_1401C6517
 * 00000001401C6510: xor     ecx, ecx
 * 00000001401C6512: call    KiUpdateStibpPairing
 * 00000001401C6517: mov     rcx, gs:188h
 * 00000001401C6520: test    dword ptr [rcx], 8000000h
 * 00000001401C6526: jz      short loc_1401C652D
 * 00000001401C6528: call    KiRestoreSetContextState
 * 00000001401C652D: mov     rcx, gs:188h
 * 00000001401C6536: test    dword ptr [rcx], 40010000h
 * 00000001401C653C: jz      short loc_1401C6552
 * 00000001401C653E: test    byte ptr [rcx+2], 1
 * 00000001401C6542: jz      short loc_1401C6552
 * 00000001401C6544: call    KiCopyCounters
 * 00000001401C6549: mov     rcx, gs:188h
 * 00000001401C6552: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C6556: cmp     word ptr [rbp+80h], 0
 * 00000001401C655E: jz      short loc_1401C6565
 * 00000001401C6560: call    KiRestoreDebugRegisterState
 * 00000001401C6565: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C6569: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C656D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C6571: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C6575: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C6579: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C657D: mov     r11, [rbp-20h]
 * 00000001401C6581: mov     r10, [rbp-28h]
 * 00000001401C6585: mov     r9, [rbp-30h]
 * 00000001401C6589: mov     r8, [rbp-38h]
 * 00000001401C658D: mov     byte ptr gs:853h, 0
 * 00000001401C6596: movzx   eax, byte ptr gs:27Dh
 * 00000001401C659F: cmp     gs:27Ah, al
 * 00000001401C65A7: jz      short loc_1401C65BA
 * 00000001401C65A9: mov     gs:27Ah, al
 * 00000001401C65B1: mov     ecx, 48h ; 'H'
 * 00000001401C65B6: xor     edx, edx
 * 00000001401C65B8: wrmsr
 * 00000001401C65BA: btr     word ptr gs:278h, 2
 * 00000001401C65C5: jnb     short loc_1401C65D5
 * 00000001401C65C7: mov     eax, 1
 * 00000001401C65CC: xor     edx, edx
 * 00000001401C65CE: mov     ecx, 49h ; 'I'
 * 00000001401C65D3: wrmsr
 * 00000001401C65D5: mov     rdx, [rbp-40h]
 * 00000001401C65D9: mov     rcx, [rbp-48h]
 * 00000001401C65DD: mov     rax, [rbp-50h]
 * 00000001401C65E1: mov     rsp, rbp
 * 00000001401C65E4: mov     rbp, [rbp+0D8h]
 * 00000001401C65EB: add     rsp, 0E8h
 * 00000001401C65F2: test    cs:KiKvaShadow, 1
 * 00000001401C65F9: jz      short loc_1401C6600
 * 00000001401C65FB: jmp     KiKernelExit
 * 00000001401C6600: swapgs
 * 00000001401C6603: iretq
 * 00000001401C6605: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C6609: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C660D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C6611: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C6615: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C6619: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C661D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C6621: mov     r11, [rbp-20h]
 * 00000001401C6625: mov     r10, [rbp-28h]
 * 00000001401C6629: mov     r9, [rbp-30h]
 * 00000001401C662D: mov     r8, [rbp-38h]
 * 00000001401C6631: mov     rdx, [rbp-40h]
 * 00000001401C6635: mov     rcx, [rbp-48h]
 * 00000001401C6639: mov     rax, [rbp-50h]
 * 00000001401C663D: mov     rsp, rbp
 * 00000001401C6640: mov     rbp, [rbp+0D8h]
 * 00000001401C6647: add     rsp, 0E8h
 * 00000001401C664E: iretq
 */
