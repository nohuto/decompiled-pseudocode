/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1401BE490
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401BDBC0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE490 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1401BE490
 * Reason: Hex-Rays returned no pseudocode for 0x1401BE490
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BE490: mov     rdx, rsp
 * 00000001401BE493: mov     rcx, gs:6458h
 * 00000001401BE49C: lea     rax, [rcx-6000h]
 * 00000001401BE4A3: cmp     rax, rsp
 * 00000001401BE4A6: ja      short loc_1401BE4AD
 * 00000001401BE4A8: cmp     rsp, rcx
 * 00000001401BE4AB: jb      short loc_1401BE4B9
 * 00000001401BE4AD: cmp     cs:KiBugCheckActive, 0
 * 00000001401BE4B4: jnz     short loc_1401BE4B9
 * 00000001401BE4B6: mov     rsp, rcx
 * 00000001401BE4B9: sub     rsp, 20h
 * 00000001401BE4BD: mov     [rsp+20h+var_10], rdx
 * 00000001401BE4C2: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001401BE4C7: mov     rsp, [rsp+20h+var_10]
 * 00000001401BE4CC: mov     rcx, rsi
 * 00000001401BE4CF: call    HalPerformEndOfInterrupt_0
 * 00000001401BE4D4: mov     rcx, gs:20h
 * 00000001401BE4DD: cmp     byte ptr [rcx+20h], 1
 * 00000001401BE4E1: ja      short loc_1401BE55D
 * 00000001401BE4E3: rdtsc
 * 00000001401BE4E5: shl     rdx, 20h
 * 00000001401BE4E9: or      rax, rdx
 * 00000001401BE4EC: sub     rax, [rcx+5BC0h]
 * 00000001401BE4F3: add     [rcx+5C38h], rax
 * 00000001401BE4FA: add     [rcx+5BC0h], rax
 * 00000001401BE501: mov     r8, rax
 * 00000001401BE504: mov     rax, [rcx+8]
 * 00000001401BE508: test    byte ptr [rax+2], 72h
 * 00000001401BE50C: jz      short loc_1401BE521
 * 00000001401BE50E: xor     edx, edx
 * 00000001401BE510: call    KiBeginThreadAccountingPeriod
 * 00000001401BE515: mov     rcx, gs:20h
 * 00000001401BE51E: inc     byte ptr [rcx+20h]
 * 00000001401BE521: mov     dl, [rcx+6]
 * 00000001401BE524: and     byte ptr [rcx+6], 0
 * 00000001401BE528: cmp     byte ptr [rcx+7], 0
 * 00000001401BE52C: jnz     short loc_1401BE55D
 * 00000001401BE52E: test    dl, dl
 * 00000001401BE530: jz      short loc_1401BE55D
 * 00000001401BE532: cmp     byte ptr [rbp-57h], 2
 * 00000001401BE536: jnb     short loc_1401BE543
 * 00000001401BE538: and     byte ptr [rcx+20h], 0
 * 00000001401BE53C: call    KiDpcInterruptBypass
 * 00000001401BE541: jmp     short loc_1401BE560
 * 00000001401BE543: mov     ecx, 2
 * 00000001401BE548: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BE54F: nop     dword ptr [rax+rax+00h]
 * 00000001401BE554: mov     rcx, gs:20h
 * 00000001401BE55D: dec     byte ptr [rcx+20h]
 * 00000001401BE560: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BE564: cmp     cs:KiIrqlFlags, 0
 * 00000001401BE56B: jz      short loc_1401BE574
 * 00000001401BE56D: call    KzSetIrqlUnsafe
 * 00000001401BE572: jmp     short loc_1401BE578
 * 00000001401BE574: mov     cr8, rcx
 * 00000001401BE578: mov     rsi, [rbp+0D0h]
 * 00000001401BE57F: test    byte ptr [rbp+0F0h], 1
 * 00000001401BE586: jz      loc_1401BE81C
 * 00000001401BE58C: mov     rcx, gs:188h
 * 00000001401BE595: test    byte ptr [rcx+0C2h], 3
 * 00000001401BE59C: jz      short loc_1401BE5B9
 * 00000001401BE59E: mov     ecx, 1
 * 00000001401BE5A3: mov     cr8, rcx
 * 00000001401BE5A7: sti
 * 00000001401BE5A8: call    KiInitiateUserApc
 * 00000001401BE5AD: cli
 * 00000001401BE5AE: mov     ecx, 0
 * 00000001401BE5B3: mov     cr8, rcx
 * 00000001401BE5B7: jmp     short loc_1401BE58C
 * 00000001401BE5B9: test    byte ptr gs:86Ch, 2
 * 00000001401BE5C2: jz      short loc_1401BE5CB
 * 00000001401BE5C4: xor     ecx, ecx
 * 00000001401BE5C6: call    KiUpdateStibpPairing
 * 00000001401BE5CB: mov     rcx, gs:188h
 * 00000001401BE5D4: test    dword ptr [rcx], 8000000h
 * 00000001401BE5DA: jz      short loc_1401BE5E1
 * 00000001401BE5DC: call    KiRestoreSetContextState
 * 00000001401BE5E1: mov     rcx, gs:188h
 * 00000001401BE5EA: test    dword ptr [rcx], 40010000h
 * 00000001401BE5F0: jz      short loc_1401BE606
 * 00000001401BE5F2: test    byte ptr [rcx+2], 1
 * 00000001401BE5F6: jz      short loc_1401BE606
 * 00000001401BE5F8: call    KiCopyCounters
 * 00000001401BE5FD: mov     rcx, gs:188h
 * 00000001401BE606: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE60A: cmp     word ptr [rbp+80h], 0
 * 00000001401BE612: jz      short loc_1401BE619
 * 00000001401BE614: call    KiRestoreDebugRegisterState
 * 00000001401BE619: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE61D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE621: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE625: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE629: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE62D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE631: mov     r11, [rbp-20h]
 * 00000001401BE635: mov     r10, [rbp-28h]
 * 00000001401BE639: mov     r9, [rbp-30h]
 * 00000001401BE63D: mov     r8, [rbp-38h]
 * 00000001401BE641: mov     byte ptr gs:856h, 0
 * 00000001401BE64A: movzx   eax, word ptr gs:86Ah
 * 00000001401BE653: cmp     gs:864h, ax
 * 00000001401BE65C: jz      short loc_1401BE670
 * 00000001401BE65E: mov     gs:864h, ax
 * 00000001401BE667: mov     ecx, 48h ; 'H'
 * 00000001401BE66C: xor     edx, edx
 * 00000001401BE66E: wrmsr
 * 00000001401BE670: btr     word ptr gs:860h, 2
 * 00000001401BE67B: jnb     short loc_1401BE68B
 * 00000001401BE67D: mov     eax, 1
 * 00000001401BE682: xor     edx, edx
 * 00000001401BE684: mov     ecx, 49h ; 'I'
 * 00000001401BE689: wrmsr
 * 00000001401BE68B: btr     word ptr gs:860h, 5
 * 00000001401BE696: jnb     loc_1401BE7C1
 * 00000001401BE69C: call    loc_1401BE7AF
 * 00000001401BE6A1: add     rsp, 8
 * 00000001401BE6A5: call    loc_1401BE7B8
 * 00000001401BE6AA: add     rsp, 8
 * 00000001401BE6AE: call    loc_1401BE6A1
 * 00000001401BE6B3: add     rsp, 8
 * 00000001401BE6B7: call    loc_1401BE6AA
 * 00000001401BE6BC: add     rsp, 8
 * 00000001401BE6C0: call    loc_1401BE6B3
 * 00000001401BE6C5: add     rsp, 8
 * 00000001401BE6C9: call    loc_1401BE6BC
 * 00000001401BE6CE: add     rsp, 8
 * 00000001401BE6D2: call    loc_1401BE6C5
 * 00000001401BE6D7: add     rsp, 8
 * 00000001401BE6DB: call    loc_1401BE6CE
 * 00000001401BE6E0: add     rsp, 8
 * 00000001401BE6E4: call    loc_1401BE6D7
 * 00000001401BE6E9: add     rsp, 8
 * 00000001401BE6ED: call    loc_1401BE6E0
 * 00000001401BE6F2: add     rsp, 8
 * 00000001401BE6F6: call    loc_1401BE6E9
 * 00000001401BE6FB: add     rsp, 8
 * 00000001401BE6FF: call    loc_1401BE6F2
 * 00000001401BE704: add     rsp, 8
 * 00000001401BE708: call    loc_1401BE6FB
 * 00000001401BE70D: add     rsp, 8
 * 00000001401BE711: call    loc_1401BE704
 * 00000001401BE716: add     rsp, 8
 * 00000001401BE71A: call    loc_1401BE70D
 * 00000001401BE71F: add     rsp, 8
 * 00000001401BE723: call    loc_1401BE716
 * 00000001401BE728: add     rsp, 8
 * 00000001401BE72C: call    loc_1401BE71F
 * 00000001401BE731: add     rsp, 8
 * 00000001401BE735: call    loc_1401BE728
 * 00000001401BE73A: add     rsp, 8
 * 00000001401BE73E: call    loc_1401BE731
 * 00000001401BE743: add     rsp, 8
 * 00000001401BE747: call    loc_1401BE73A
 * 00000001401BE74C: add     rsp, 8
 * 00000001401BE750: call    loc_1401BE743
 * 00000001401BE755: add     rsp, 8
 * 00000001401BE759: call    loc_1401BE74C
 * 00000001401BE75E: add     rsp, 8
 * 00000001401BE762: call    loc_1401BE755
 * 00000001401BE767: add     rsp, 8
 * 00000001401BE76B: call    loc_1401BE75E
 * 00000001401BE770: add     rsp, 8
 * 00000001401BE774: call    loc_1401BE767
 * 00000001401BE779: add     rsp, 8
 * 00000001401BE77D: call    loc_1401BE770
 * 00000001401BE782: add     rsp, 8
 * 00000001401BE786: call    loc_1401BE779
 * 00000001401BE78B: add     rsp, 8
 * 00000001401BE78F: call    loc_1401BE782
 * 00000001401BE794: add     rsp, 8
 * 00000001401BE798: call    loc_1401BE78B
 * 00000001401BE79D: add     rsp, 8
 * 00000001401BE7A1: call    loc_1401BE794
 * 00000001401BE7A6: add     rsp, 8
 * 00000001401BE7AA: call    loc_1401BE79D
 * 00000001401BE7AF: add     rsp, 8
 * 00000001401BE7B3: call    loc_1401BE7A6
 * 00000001401BE7B8: add     rsp, 8
 * 00000001401BE7BC: mov     eax, 0DADAh
 * 00000001401BE7C1: test    word ptr gs:860h, 80h
 * 00000001401BE7CC: jz      short loc_1401BE7DA
 * 00000001401BE7CE: xor     eax, eax
 * 00000001401BE7D0: xor     edx, edx
 * 00000001401BE7D2: mov     ecx, 1
 * 00000001401BE7D7: div     rcx
 * 00000001401BE7DA: mov     rdx, [rbp-40h]
 * 00000001401BE7DE: mov     rcx, [rbp-48h]
 * 00000001401BE7E2: mov     rax, [rbp-50h]
 * 00000001401BE7E6: mov     rsp, rbp
 * 00000001401BE7E9: mov     rbp, [rbp+0D8h]
 * 00000001401BE7F0: add     rsp, 0E8h
 * 00000001401BE7F7: test    cs:KiKvaShadow, 1
 * 00000001401BE7FE: jz      short loc_1401BE805
 * 00000001401BE800: jmp     KiKernelExit
 * 00000001401BE805: test    word ptr gs:860h, 100h
 * 00000001401BE810: jz      short loc_1401BE817
 * 00000001401BE812: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BE817: swapgs
 * 00000001401BE81A: iretq
 * 00000001401BE81C: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE820: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE824: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE828: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE82C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE830: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE834: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE838: mov     r11, [rbp-20h]
 * 00000001401BE83C: mov     r10, [rbp-28h]
 * 00000001401BE840: mov     r9, [rbp-30h]
 * 00000001401BE844: mov     r8, [rbp-38h]
 * 00000001401BE848: mov     rdx, [rbp-40h]
 * 00000001401BE84C: mov     rcx, [rbp-48h]
 * 00000001401BE850: mov     rax, [rbp-50h]
 * 00000001401BE854: mov     rsp, rbp
 * 00000001401BE857: mov     rbp, [rbp+0D8h]
 * 00000001401BE85E: add     rsp, 0E8h
 * 00000001401BE865: iretq
 */
