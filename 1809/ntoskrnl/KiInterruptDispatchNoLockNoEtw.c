/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1401BE330
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401BDA60 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE330 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1401BE330
 * Reason: Hex-Rays returned no pseudocode for 0x1401BE330
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BE330: mov     rdx, rsp
 * 00000001401BE333: mov     rcx, gs:6458h
 * 00000001401BE33C: lea     rax, [rcx-6000h]
 * 00000001401BE343: cmp     rax, rsp
 * 00000001401BE346: ja      short loc_1401BE34D
 * 00000001401BE348: cmp     rsp, rcx
 * 00000001401BE34B: jb      short loc_1401BE359
 * 00000001401BE34D: cmp     cs:KiBugCheckActive, 0
 * 00000001401BE354: jnz     short loc_1401BE359
 * 00000001401BE356: mov     rsp, rcx
 * 00000001401BE359: sub     rsp, 20h
 * 00000001401BE35D: mov     [rsp+20h+var_10], rdx
 * 00000001401BE362: call    KiInterruptSubDispatchNoLockNoEtw
 * 00000001401BE367: mov     rsp, [rsp+20h+var_10]
 * 00000001401BE36C: mov     rcx, rsi
 * 00000001401BE36F: call    HalPerformEndOfInterrupt_0
 * 00000001401BE374: mov     rcx, gs:20h
 * 00000001401BE37D: cmp     byte ptr [rcx+20h], 1
 * 00000001401BE381: ja      short loc_1401BE3FD
 * 00000001401BE383: rdtsc
 * 00000001401BE385: shl     rdx, 20h
 * 00000001401BE389: or      rax, rdx
 * 00000001401BE38C: sub     rax, [rcx+5BC0h]
 * 00000001401BE393: add     [rcx+5C38h], rax
 * 00000001401BE39A: add     [rcx+5BC0h], rax
 * 00000001401BE3A1: mov     r8, rax
 * 00000001401BE3A4: mov     rax, [rcx+8]
 * 00000001401BE3A8: test    byte ptr [rax+2], 72h
 * 00000001401BE3AC: jz      short loc_1401BE3C1
 * 00000001401BE3AE: xor     edx, edx
 * 00000001401BE3B0: call    KiBeginThreadAccountingPeriod
 * 00000001401BE3B5: mov     rcx, gs:20h
 * 00000001401BE3BE: inc     byte ptr [rcx+20h]
 * 00000001401BE3C1: mov     dl, [rcx+6]
 * 00000001401BE3C4: and     byte ptr [rcx+6], 0
 * 00000001401BE3C8: cmp     byte ptr [rcx+7], 0
 * 00000001401BE3CC: jnz     short loc_1401BE3FD
 * 00000001401BE3CE: test    dl, dl
 * 00000001401BE3D0: jz      short loc_1401BE3FD
 * 00000001401BE3D2: cmp     byte ptr [rbp-57h], 2
 * 00000001401BE3D6: jnb     short loc_1401BE3E3
 * 00000001401BE3D8: and     byte ptr [rcx+20h], 0
 * 00000001401BE3DC: call    KiDpcInterruptBypass
 * 00000001401BE3E1: jmp     short loc_1401BE400
 * 00000001401BE3E3: mov     ecx, 2
 * 00000001401BE3E8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BE3EF: nop     dword ptr [rax+rax+00h]
 * 00000001401BE3F4: mov     rcx, gs:20h
 * 00000001401BE3FD: dec     byte ptr [rcx+20h]
 * 00000001401BE400: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BE404: cmp     cs:KiIrqlFlags, 0
 * 00000001401BE40B: jz      short loc_1401BE414
 * 00000001401BE40D: call    KzSetIrqlUnsafe
 * 00000001401BE412: jmp     short loc_1401BE418
 * 00000001401BE414: mov     cr8, rcx
 * 00000001401BE418: mov     rsi, [rbp+0D0h]
 * 00000001401BE41F: test    byte ptr [rbp+0F0h], 1
 * 00000001401BE426: jz      loc_1401BE6BC
 * 00000001401BE42C: mov     rcx, gs:188h
 * 00000001401BE435: test    byte ptr [rcx+0C2h], 3
 * 00000001401BE43C: jz      short loc_1401BE459
 * 00000001401BE43E: mov     ecx, 1
 * 00000001401BE443: mov     cr8, rcx
 * 00000001401BE447: sti
 * 00000001401BE448: call    KiInitiateUserApc
 * 00000001401BE44D: cli
 * 00000001401BE44E: mov     ecx, 0
 * 00000001401BE453: mov     cr8, rcx
 * 00000001401BE457: jmp     short loc_1401BE42C
 * 00000001401BE459: test    byte ptr gs:86Ch, 2
 * 00000001401BE462: jz      short loc_1401BE46B
 * 00000001401BE464: xor     ecx, ecx
 * 00000001401BE466: call    KiUpdateStibpPairing
 * 00000001401BE46B: mov     rcx, gs:188h
 * 00000001401BE474: test    dword ptr [rcx], 8000000h
 * 00000001401BE47A: jz      short loc_1401BE481
 * 00000001401BE47C: call    KiRestoreSetContextState
 * 00000001401BE481: mov     rcx, gs:188h
 * 00000001401BE48A: test    dword ptr [rcx], 40010000h
 * 00000001401BE490: jz      short loc_1401BE4A6
 * 00000001401BE492: test    byte ptr [rcx+2], 1
 * 00000001401BE496: jz      short loc_1401BE4A6
 * 00000001401BE498: call    KiCopyCounters
 * 00000001401BE49D: mov     rcx, gs:188h
 * 00000001401BE4A6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE4AA: cmp     word ptr [rbp+80h], 0
 * 00000001401BE4B2: jz      short loc_1401BE4B9
 * 00000001401BE4B4: call    KiRestoreDebugRegisterState
 * 00000001401BE4B9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE4BD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE4C1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE4C5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE4C9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE4CD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE4D1: mov     r11, [rbp-20h]
 * 00000001401BE4D5: mov     r10, [rbp-28h]
 * 00000001401BE4D9: mov     r9, [rbp-30h]
 * 00000001401BE4DD: mov     r8, [rbp-38h]
 * 00000001401BE4E1: mov     byte ptr gs:856h, 0
 * 00000001401BE4EA: movzx   eax, word ptr gs:86Ah
 * 00000001401BE4F3: cmp     gs:864h, ax
 * 00000001401BE4FC: jz      short loc_1401BE510
 * 00000001401BE4FE: mov     gs:864h, ax
 * 00000001401BE507: mov     ecx, 48h ; 'H'
 * 00000001401BE50C: xor     edx, edx
 * 00000001401BE50E: wrmsr
 * 00000001401BE510: btr     word ptr gs:860h, 2
 * 00000001401BE51B: jnb     short loc_1401BE52B
 * 00000001401BE51D: mov     eax, 1
 * 00000001401BE522: xor     edx, edx
 * 00000001401BE524: mov     ecx, 49h ; 'I'
 * 00000001401BE529: wrmsr
 * 00000001401BE52B: btr     word ptr gs:860h, 5
 * 00000001401BE536: jnb     loc_1401BE661
 * 00000001401BE53C: call    loc_1401BE64F
 * 00000001401BE541: add     rsp, 8
 * 00000001401BE545: call    loc_1401BE658
 * 00000001401BE54A: add     rsp, 8
 * 00000001401BE54E: call    loc_1401BE541
 * 00000001401BE553: add     rsp, 8
 * 00000001401BE557: call    loc_1401BE54A
 * 00000001401BE55C: add     rsp, 8
 * 00000001401BE560: call    loc_1401BE553
 * 00000001401BE565: add     rsp, 8
 * 00000001401BE569: call    loc_1401BE55C
 * 00000001401BE56E: add     rsp, 8
 * 00000001401BE572: call    loc_1401BE565
 * 00000001401BE577: add     rsp, 8
 * 00000001401BE57B: call    loc_1401BE56E
 * 00000001401BE580: add     rsp, 8
 * 00000001401BE584: call    loc_1401BE577
 * 00000001401BE589: add     rsp, 8
 * 00000001401BE58D: call    loc_1401BE580
 * 00000001401BE592: add     rsp, 8
 * 00000001401BE596: call    loc_1401BE589
 * 00000001401BE59B: add     rsp, 8
 * 00000001401BE59F: call    loc_1401BE592
 * 00000001401BE5A4: add     rsp, 8
 * 00000001401BE5A8: call    loc_1401BE59B
 * 00000001401BE5AD: add     rsp, 8
 * 00000001401BE5B1: call    loc_1401BE5A4
 * 00000001401BE5B6: add     rsp, 8
 * 00000001401BE5BA: call    loc_1401BE5AD
 * 00000001401BE5BF: add     rsp, 8
 * 00000001401BE5C3: call    loc_1401BE5B6
 * 00000001401BE5C8: add     rsp, 8
 * 00000001401BE5CC: call    loc_1401BE5BF
 * 00000001401BE5D1: add     rsp, 8
 * 00000001401BE5D5: call    loc_1401BE5C8
 * 00000001401BE5DA: add     rsp, 8
 * 00000001401BE5DE: call    loc_1401BE5D1
 * 00000001401BE5E3: add     rsp, 8
 * 00000001401BE5E7: call    loc_1401BE5DA
 * 00000001401BE5EC: add     rsp, 8
 * 00000001401BE5F0: call    loc_1401BE5E3
 * 00000001401BE5F5: add     rsp, 8
 * 00000001401BE5F9: call    loc_1401BE5EC
 * 00000001401BE5FE: add     rsp, 8
 * 00000001401BE602: call    loc_1401BE5F5
 * 00000001401BE607: add     rsp, 8
 * 00000001401BE60B: call    loc_1401BE5FE
 * 00000001401BE610: add     rsp, 8
 * 00000001401BE614: call    loc_1401BE607
 * 00000001401BE619: add     rsp, 8
 * 00000001401BE61D: call    loc_1401BE610
 * 00000001401BE622: add     rsp, 8
 * 00000001401BE626: call    loc_1401BE619
 * 00000001401BE62B: add     rsp, 8
 * 00000001401BE62F: call    loc_1401BE622
 * 00000001401BE634: add     rsp, 8
 * 00000001401BE638: call    loc_1401BE62B
 * 00000001401BE63D: add     rsp, 8
 * 00000001401BE641: call    loc_1401BE634
 * 00000001401BE646: add     rsp, 8
 * 00000001401BE64A: call    loc_1401BE63D
 * 00000001401BE64F: add     rsp, 8
 * 00000001401BE653: call    loc_1401BE646
 * 00000001401BE658: add     rsp, 8
 * 00000001401BE65C: mov     eax, 0DADAh
 * 00000001401BE661: test    word ptr gs:860h, 80h
 * 00000001401BE66C: jz      short loc_1401BE67A
 * 00000001401BE66E: xor     eax, eax
 * 00000001401BE670: xor     edx, edx
 * 00000001401BE672: mov     ecx, 1
 * 00000001401BE677: div     rcx
 * 00000001401BE67A: mov     rdx, [rbp-40h]
 * 00000001401BE67E: mov     rcx, [rbp-48h]
 * 00000001401BE682: mov     rax, [rbp-50h]
 * 00000001401BE686: mov     rsp, rbp
 * 00000001401BE689: mov     rbp, [rbp+0D8h]
 * 00000001401BE690: add     rsp, 0E8h
 * 00000001401BE697: test    cs:KiKvaShadow, 1
 * 00000001401BE69E: jz      short loc_1401BE6A5
 * 00000001401BE6A0: jmp     KiKernelExit
 * 00000001401BE6A5: test    word ptr gs:860h, 100h
 * 00000001401BE6B0: jz      short loc_1401BE6B7
 * 00000001401BE6B2: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BE6B7: swapgs
 * 00000001401BE6BA: iretq
 * 00000001401BE6BC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE6C0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE6C4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE6C8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE6CC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE6D0: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE6D4: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE6D8: mov     r11, [rbp-20h]
 * 00000001401BE6DC: mov     r10, [rbp-28h]
 * 00000001401BE6E0: mov     r9, [rbp-30h]
 * 00000001401BE6E4: mov     r8, [rbp-38h]
 * 00000001401BE6E8: mov     rdx, [rbp-40h]
 * 00000001401BE6EC: mov     rcx, [rbp-48h]
 * 00000001401BE6F0: mov     rax, [rbp-50h]
 * 00000001401BE6F4: mov     rsp, rbp
 * 00000001401BE6F7: mov     rbp, [rbp+0D8h]
 * 00000001401BE6FE: add     rsp, 0E8h
 * 00000001401BE705: iretq
 */
