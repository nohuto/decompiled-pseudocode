/*
 * XREFs of KiSwInterrupt @ 0x1401CA2B0
 * Callers:
 *     KiSwInterruptShadow @ 0x140350C80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400427C0 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400E5080 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F2150 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     KiSwInterruptDispatch @ 0x1401AB5C0 (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401BA640 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C55E0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8B90 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1401CA2B0 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1401CAD20 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1402AA3D0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1401CA2B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CA2B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CA2B0: sub     rsp, 8
 * 00000001401CA2B4: push    rbp
 * 00000001401CA2B5: push    rsi
 * 00000001401CA2B6: sub     rsp, 150h
 * 00000001401CA2BD: lea     rbp, [rsp+80h]
 * 00000001401CA2C5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401CA2C9: mov     [rbp+0E8h+var_138], rax
 * 00000001401CA2CD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CA2D1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CA2D5: mov     [rbp+0E8h+var_120], r8
 * 00000001401CA2D9: mov     [rbp+0E8h+var_118], r9
 * 00000001401CA2DD: mov     [rbp+0E8h+var_110], r10
 * 00000001401CA2E1: mov     [rbp+0E8h+var_108], r11
 * 00000001401CA2E5: test    [rbp+0E8h+arg_0], 1
 * 00000001401CA2EC: jnz     short loc_1401CA31B
 * 00000001401CA2EE: lfence
 * 00000001401CA2F1: test    byte ptr gs:278h, 1
 * 00000001401CA2FA: jnz     short loc_1401CA304
 * 00000001401CA2FC: lfence
 * 00000001401CA2FF: jmp     loc_1401CA517
 * 00000001401CA304: movzx   eax, byte ptr gs:27Ah
 * 00000001401CA30D: mov     ecx, 48h ; 'H'
 * 00000001401CA312: xor     edx, edx
 * 00000001401CA314: wrmsr
 * 00000001401CA316: jmp     loc_1401CA517
 * 00000001401CA31B: test    cs:KiKvaShadow, 1
 * 00000001401CA322: jnz     short loc_1401CA327
 * 00000001401CA324: swapgs
 * 00000001401CA327: lfence
 * 00000001401CA32A: mov     r10, gs:188h
 * 00000001401CA333: mov     rcx, gs:188h
 * 00000001401CA33C: mov     rcx, [rcx+220h]
 * 00000001401CA343: mov     rcx, [rcx+860h]
 * 00000001401CA34A: mov     gs:270h, rcx
 * 00000001401CA353: mov     cl, gs:850h
 * 00000001401CA35B: mov     gs:851h, cl
 * 00000001401CA363: mov     cl, gs:278h
 * 00000001401CA36B: mov     gs:852h, cl
 * 00000001401CA373: movzx   eax, byte ptr gs:27Bh
 * 00000001401CA37C: cmp     gs:27Ah, al
 * 00000001401CA384: jz      short loc_1401CA397
 * 00000001401CA386: mov     gs:27Ah, al
 * 00000001401CA38E: mov     ecx, 48h ; 'H'
 * 00000001401CA393: xor     edx, edx
 * 00000001401CA395: wrmsr
 * 00000001401CA397: movzx   edx, byte ptr gs:278h
 * 00000001401CA3A0: test    edx, 8
 * 00000001401CA3A6: jz      short loc_1401CA3BB
 * 00000001401CA3A8: mov     eax, 1
 * 00000001401CA3AD: xor     edx, edx
 * 00000001401CA3AF: mov     ecx, 49h ; 'I'
 * 00000001401CA3B4: wrmsr
 * 00000001401CA3B6: jmp     loc_1401CA4F9
 * 00000001401CA3BB: test    edx, 2
 * 00000001401CA3C1: jz      loc_1401CA4F6
 * 00000001401CA3C7: test    byte ptr gs:279h, 4
 * 00000001401CA3D0: jnz     loc_1401CA4F6
 * 00000001401CA3D6: call    loc_1401CA4E9
 * 00000001401CA3DB: add     rsp, 8
 * 00000001401CA3DF: call    loc_1401CA4F2
 * 00000001401CA3E4: add     rsp, 8
 * 00000001401CA3E8: call    loc_1401CA3DB
 * 00000001401CA3ED: add     rsp, 8
 * 00000001401CA3F1: call    loc_1401CA3E4
 * 00000001401CA3F6: add     rsp, 8
 * 00000001401CA3FA: call    loc_1401CA3ED
 * 00000001401CA3FF: add     rsp, 8
 * 00000001401CA403: call    loc_1401CA3F6
 * 00000001401CA408: add     rsp, 8
 * 00000001401CA40C: call    loc_1401CA3FF
 * 00000001401CA411: add     rsp, 8
 * 00000001401CA415: call    loc_1401CA408
 * 00000001401CA41A: add     rsp, 8
 * 00000001401CA41E: call    loc_1401CA411
 * 00000001401CA423: add     rsp, 8
 * 00000001401CA427: call    loc_1401CA41A
 * 00000001401CA42C: add     rsp, 8
 * 00000001401CA430: call    loc_1401CA423
 * 00000001401CA435: add     rsp, 8
 * 00000001401CA439: call    loc_1401CA42C
 * 00000001401CA43E: add     rsp, 8
 * 00000001401CA442: call    loc_1401CA435
 * 00000001401CA447: add     rsp, 8
 * 00000001401CA44B: call    loc_1401CA43E
 * 00000001401CA450: add     rsp, 8
 * 00000001401CA454: call    loc_1401CA447
 * 00000001401CA459: add     rsp, 8
 * 00000001401CA45D: call    loc_1401CA450
 * 00000001401CA462: add     rsp, 8
 * 00000001401CA466: call    loc_1401CA459
 * 00000001401CA46B: add     rsp, 8
 * 00000001401CA46F: call    loc_1401CA462
 * 00000001401CA474: add     rsp, 8
 * 00000001401CA478: call    loc_1401CA46B
 * 00000001401CA47D: add     rsp, 8
 * 00000001401CA481: call    loc_1401CA474
 * 00000001401CA486: add     rsp, 8
 * 00000001401CA48A: call    loc_1401CA47D
 * 00000001401CA48F: add     rsp, 8
 * 00000001401CA493: call    loc_1401CA486
 * 00000001401CA498: add     rsp, 8
 * 00000001401CA49C: call    loc_1401CA48F
 * 00000001401CA4A1: add     rsp, 8
 * 00000001401CA4A5: call    loc_1401CA498
 * 00000001401CA4AA: add     rsp, 8
 * 00000001401CA4AE: call    loc_1401CA4A1
 * 00000001401CA4B3: add     rsp, 8
 * 00000001401CA4B7: call    loc_1401CA4AA
 * 00000001401CA4BC: add     rsp, 8
 * 00000001401CA4C0: call    loc_1401CA4B3
 * 00000001401CA4C5: add     rsp, 8
 * 00000001401CA4C9: call    loc_1401CA4BC
 * 00000001401CA4CE: add     rsp, 8
 * 00000001401CA4D2: call    loc_1401CA4C5
 * 00000001401CA4D7: add     rsp, 8
 * 00000001401CA4DB: call    loc_1401CA4CE
 * 00000001401CA4E0: add     rsp, 8
 * 00000001401CA4E4: call    loc_1401CA4D7
 * 00000001401CA4E9: add     rsp, 8
 * 00000001401CA4ED: call    loc_1401CA4E0
 * 00000001401CA4F2: add     rsp, 8
 * 00000001401CA4F6: lfence
 * 00000001401CA4F9: mov     byte ptr gs:853h, 0
 * 00000001401CA502: test    byte ptr [r10+3], 3
 * 00000001401CA507: mov     [rbp+0E8h+var_68], 0
 * 00000001401CA510: jz      short loc_1401CA517
 * 00000001401CA512: call    KiSaveDebugRegisterState
 * 00000001401CA517: cld
 * 00000001401CA518: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CA51C: ldmxcsr dword ptr gs:180h
 * 00000001401CA525: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CA529: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CA52D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CA531: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CA535: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CA539: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CA53D: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401CA546: jz      short loc_1401CA54D
 * 00000001401CA548: call    KeWakeProcessor
 * 00000001401CA54D: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401CA554: cmp     rax, [rbp+0E8h]
 * 00000001401CA55B: jnb     short loc_1401CA576
 * 00000001401CA55D: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401CA564: cmp     rax, [rbp+0E8h]
 * 00000001401CA56B: jb      short loc_1401CA576
 * 00000001401CA56D: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401CA571: call    KiCheckForSListAddress
 * 00000001401CA576: xor     esi, esi
 * 00000001401CA578: inc     dword ptr gs:5D00h
 * 00000001401CA580: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CA587: jz      short loc_1401CA58C
 * 00000001401CA589: clac
 * 00000001401CA58C: mov     ecx, 2
 * 00000001401CA591: cmp     cs:KiIrqlFlags, 0
 * 00000001401CA598: jz      short loc_1401CA5A1
 * 00000001401CA59A: call    KzSetIrqlUnsafe
 * 00000001401CA59F: jmp     short loc_1401CA5A9
 * 00000001401CA5A1: mov     rax, cr8
 * 00000001401CA5A5: mov     cr8, rcx
 * 00000001401CA5A9: mov     [rbp+0E8h+var_13F], al
 * 00000001401CA5AC: mov     rcx, gs:20h
 * 00000001401CA5B5: inc     byte ptr [rcx+20h]
 * 00000001401CA5B8: cmp     byte ptr [rcx+20h], 1
 * 00000001401CA5BC: jnz     short loc_1401CA60E
 * 00000001401CA5BE: rdtsc
 * 00000001401CA5C0: shl     rdx, 20h
 * 00000001401CA5C4: or      rax, rdx
 * 00000001401CA5C7: mov     r8, [rcx+8]
 * 00000001401CA5CB: sub     rax, [rcx+5BC0h]
 * 00000001401CA5D2: add     [r8+48h], rax
 * 00000001401CA5D6: mov     edx, [r8+50h]
 * 00000001401CA5DA: add     [rcx+5BC0h], rax
 * 00000001401CA5E1: add     rdx, rax
 * 00000001401CA5E4: mov     ecx, edx
 * 00000001401CA5E6: shr     rdx, 20h
 * 00000001401CA5EA: jz      short loc_1401CA5EF
 * 00000001401CA5EC: or      ecx, 0FFFFFFFFh
 * 00000001401CA5EF: mov     [r8+50h], ecx
 * 00000001401CA5F3: test    byte ptr [r8+2], 3Eh
 * 00000001401CA5F8: jz      short loc_1401CA60E
 * 00000001401CA5FA: mov     rdx, r8
 * 00000001401CA5FD: mov     r8, rax
 * 00000001401CA600: mov     rcx, gs:20h
 * 00000001401CA609: call    KiEndThreadAccountingPeriod
 * 00000001401CA60E: sti
 * 00000001401CA60F: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401CA613: call    KiSwInterruptDispatch
 * 00000001401CA618: cli
 * 00000001401CA619: mov     rcx, rsi
 * 00000001401CA61C: call    HalPerformEndOfInterrupt_0
 * 00000001401CA621: mov     rcx, gs:20h
 * 00000001401CA62A: cmp     byte ptr [rcx+20h], 1
 * 00000001401CA62E: ja      short loc_1401CA6AA
 * 00000001401CA630: rdtsc
 * 00000001401CA632: shl     rdx, 20h
 * 00000001401CA636: or      rax, rdx
 * 00000001401CA639: sub     rax, [rcx+5BC0h]
 * 00000001401CA640: add     [rcx+5C38h], rax
 * 00000001401CA647: add     [rcx+5BC0h], rax
 * 00000001401CA64E: mov     r8, rax
 * 00000001401CA651: mov     rax, [rcx+8]
 * 00000001401CA655: test    byte ptr [rax+2], 72h
 * 00000001401CA659: jz      short loc_1401CA66E
 * 00000001401CA65B: xor     edx, edx
 * 00000001401CA65D: call    KiBeginThreadAccountingPeriod
 * 00000001401CA662: mov     rcx, gs:20h
 * 00000001401CA66B: inc     byte ptr [rcx+20h]
 * 00000001401CA66E: mov     dl, [rcx+6]
 * 00000001401CA671: and     byte ptr [rcx+6], 0
 * 00000001401CA675: cmp     byte ptr [rcx+7], 0
 * 00000001401CA679: jnz     short loc_1401CA6AA
 * 00000001401CA67B: test    dl, dl
 * 00000001401CA67D: jz      short loc_1401CA6AA
 * 00000001401CA67F: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401CA683: jnb     short loc_1401CA690
 * 00000001401CA685: and     byte ptr [rcx+20h], 0
 * 00000001401CA689: call    KiDpcInterruptBypass
 * 00000001401CA68E: jmp     short loc_1401CA6AD
 * 00000001401CA690: mov     ecx, 2
 * 00000001401CA695: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401CA69C: nop     dword ptr [rax+rax+00h]
 * 00000001401CA6A1: mov     rcx, gs:20h
 * 00000001401CA6AA: dec     byte ptr [rcx+20h]
 * 00000001401CA6AD: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401CA6B1: cmp     cs:KiIrqlFlags, 0
 * 00000001401CA6B8: jz      short loc_1401CA6C1
 * 00000001401CA6BA: call    KzSetIrqlUnsafe
 * 00000001401CA6BF: jmp     short loc_1401CA6C5
 * 00000001401CA6C1: mov     cr8, rcx
 * 00000001401CA6C5: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401CA6CC: cli
 * 00000001401CA6CD: test    [rbp+0E8h+arg_0], 1
 * 00000001401CA6D4: jz      loc_1401CA813
 * 00000001401CA6DA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CA6E1: jz      short loc_1401CA6E6
 * 00000001401CA6E3: stac
 * 00000001401CA6E6: mov     rcx, gs:188h
 * 00000001401CA6EF: test    byte ptr [rcx+0C2h], 3
 * 00000001401CA6F6: jz      short loc_1401CA713
 * 00000001401CA6F8: mov     ecx, 1
 * 00000001401CA6FD: mov     cr8, rcx
 * 00000001401CA701: sti
 * 00000001401CA702: call    KiInitiateUserApc
 * 00000001401CA707: cli
 * 00000001401CA708: mov     ecx, 0
 * 00000001401CA70D: mov     cr8, rcx
 * 00000001401CA711: jmp     short loc_1401CA6E6
 * 00000001401CA713: test    byte ptr gs:27Eh, 2
 * 00000001401CA71C: jz      short loc_1401CA725
 * 00000001401CA71E: xor     ecx, ecx
 * 00000001401CA720: call    KiUpdateStibpPairing
 * 00000001401CA725: mov     rcx, gs:188h
 * 00000001401CA72E: test    dword ptr [rcx], 8000000h
 * 00000001401CA734: jz      short loc_1401CA73B
 * 00000001401CA736: call    KiRestoreSetContextState
 * 00000001401CA73B: mov     rcx, gs:188h
 * 00000001401CA744: test    dword ptr [rcx], 40010000h
 * 00000001401CA74A: jz      short loc_1401CA760
 * 00000001401CA74C: test    byte ptr [rcx+2], 1
 * 00000001401CA750: jz      short loc_1401CA760
 * 00000001401CA752: call    KiCopyCounters
 * 00000001401CA757: mov     rcx, gs:188h
 * 00000001401CA760: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CA764: cmp     [rbp+0E8h+var_68], 0
 * 00000001401CA76C: jz      short loc_1401CA773
 * 00000001401CA76E: call    KiRestoreDebugRegisterState
 * 00000001401CA773: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CA777: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CA77B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CA77F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CA783: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CA787: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CA78B: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CA78F: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CA793: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CA797: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CA79B: mov     byte ptr gs:853h, 0
 * 00000001401CA7A4: movzx   eax, byte ptr gs:27Dh
 * 00000001401CA7AD: cmp     gs:27Ah, al
 * 00000001401CA7B5: jz      short loc_1401CA7C8
 * 00000001401CA7B7: mov     gs:27Ah, al
 * 00000001401CA7BF: mov     ecx, 48h ; 'H'
 * 00000001401CA7C4: xor     edx, edx
 * 00000001401CA7C6: wrmsr
 * 00000001401CA7C8: btr     word ptr gs:278h, 2
 * 00000001401CA7D3: jnb     short loc_1401CA7E3
 * 00000001401CA7D5: mov     eax, 1
 * 00000001401CA7DA: xor     edx, edx
 * 00000001401CA7DC: mov     ecx, 49h ; 'I'
 * 00000001401CA7E1: wrmsr
 * 00000001401CA7E3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CA7E7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CA7EB: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CA7EF: mov     rsp, rbp
 * 00000001401CA7F2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CA7F9: add     rsp, 0E8h
 * 00000001401CA800: test    cs:KiKvaShadow, 1
 * 00000001401CA807: jz      short loc_1401CA80E
 * 00000001401CA809: jmp     KiKernelExit
 * 00000001401CA80E: swapgs
 * 00000001401CA811: iretq
 * 00000001401CA813: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CA817: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CA81B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CA81F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CA823: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CA827: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CA82B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CA82F: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CA833: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CA837: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CA83B: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CA83F: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CA843: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CA847: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CA84B: mov     rsp, rbp
 * 00000001401CA84E: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CA855: add     rsp, 0E8h
 * 00000001401CA85C: iretq
 */
