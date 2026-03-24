/*
 * XREFs of KiIpiInterrupt @ 0x1401CA1E0
 * Callers:
 *     KiIpiInterruptShadow @ 0x140351200 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1401CA1E0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401CA740 (KiIpiInterruptSubDispatch.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1401CA1E0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CA1E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CA1E0: sub     rsp, 8
 * 00000001401CA1E4: push    rbp
 * 00000001401CA1E5: push    rsi
 * 00000001401CA1E6: sub     rsp, 150h
 * 00000001401CA1ED: lea     rbp, [rsp+80h]
 * 00000001401CA1F5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401CA1F9: mov     [rbp+0E8h+var_138], rax
 * 00000001401CA1FD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CA201: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CA205: mov     [rbp+0E8h+var_120], r8
 * 00000001401CA209: mov     [rbp+0E8h+var_118], r9
 * 00000001401CA20D: mov     [rbp+0E8h+var_110], r10
 * 00000001401CA211: mov     [rbp+0E8h+var_108], r11
 * 00000001401CA215: test    [rbp+0E8h+arg_0], 1
 * 00000001401CA21C: jnz     short loc_1401CA24B
 * 00000001401CA21E: lfence
 * 00000001401CA221: test    byte ptr gs:278h, 1
 * 00000001401CA22A: jnz     short loc_1401CA234
 * 00000001401CA22C: lfence
 * 00000001401CA22F: jmp     loc_1401CA447
 * 00000001401CA234: movzx   eax, byte ptr gs:27Ah
 * 00000001401CA23D: mov     ecx, 48h ; 'H'
 * 00000001401CA242: xor     edx, edx
 * 00000001401CA244: wrmsr
 * 00000001401CA246: jmp     loc_1401CA447
 * 00000001401CA24B: test    cs:KiKvaShadow, 1
 * 00000001401CA252: jnz     short loc_1401CA257
 * 00000001401CA254: swapgs
 * 00000001401CA257: lfence
 * 00000001401CA25A: mov     r10, gs:188h
 * 00000001401CA263: mov     rcx, gs:188h
 * 00000001401CA26C: mov     rcx, [rcx+220h]
 * 00000001401CA273: mov     rcx, [rcx+860h]
 * 00000001401CA27A: mov     gs:270h, rcx
 * 00000001401CA283: mov     cl, gs:850h
 * 00000001401CA28B: mov     gs:851h, cl
 * 00000001401CA293: mov     cl, gs:278h
 * 00000001401CA29B: mov     gs:852h, cl
 * 00000001401CA2A3: movzx   eax, byte ptr gs:27Bh
 * 00000001401CA2AC: cmp     gs:27Ah, al
 * 00000001401CA2B4: jz      short loc_1401CA2C7
 * 00000001401CA2B6: mov     gs:27Ah, al
 * 00000001401CA2BE: mov     ecx, 48h ; 'H'
 * 00000001401CA2C3: xor     edx, edx
 * 00000001401CA2C5: wrmsr
 * 00000001401CA2C7: movzx   edx, byte ptr gs:278h
 * 00000001401CA2D0: test    edx, 8
 * 00000001401CA2D6: jz      short loc_1401CA2EB
 * 00000001401CA2D8: mov     eax, 1
 * 00000001401CA2DD: xor     edx, edx
 * 00000001401CA2DF: mov     ecx, 49h ; 'I'
 * 00000001401CA2E4: wrmsr
 * 00000001401CA2E6: jmp     loc_1401CA429
 * 00000001401CA2EB: test    edx, 2
 * 00000001401CA2F1: jz      loc_1401CA426
 * 00000001401CA2F7: test    byte ptr gs:279h, 4
 * 00000001401CA300: jnz     loc_1401CA426
 * 00000001401CA306: call    loc_1401CA419
 * 00000001401CA30B: add     rsp, 8
 * 00000001401CA30F: call    loc_1401CA422
 * 00000001401CA314: add     rsp, 8
 * 00000001401CA318: call    loc_1401CA30B
 * 00000001401CA31D: add     rsp, 8
 * 00000001401CA321: call    loc_1401CA314
 * 00000001401CA326: add     rsp, 8
 * 00000001401CA32A: call    loc_1401CA31D
 * 00000001401CA32F: add     rsp, 8
 * 00000001401CA333: call    loc_1401CA326
 * 00000001401CA338: add     rsp, 8
 * 00000001401CA33C: call    loc_1401CA32F
 * 00000001401CA341: add     rsp, 8
 * 00000001401CA345: call    loc_1401CA338
 * 00000001401CA34A: add     rsp, 8
 * 00000001401CA34E: call    loc_1401CA341
 * 00000001401CA353: add     rsp, 8
 * 00000001401CA357: call    loc_1401CA34A
 * 00000001401CA35C: add     rsp, 8
 * 00000001401CA360: call    loc_1401CA353
 * 00000001401CA365: add     rsp, 8
 * 00000001401CA369: call    loc_1401CA35C
 * 00000001401CA36E: add     rsp, 8
 * 00000001401CA372: call    loc_1401CA365
 * 00000001401CA377: add     rsp, 8
 * 00000001401CA37B: call    loc_1401CA36E
 * 00000001401CA380: add     rsp, 8
 * 00000001401CA384: call    loc_1401CA377
 * 00000001401CA389: add     rsp, 8
 * 00000001401CA38D: call    loc_1401CA380
 * 00000001401CA392: add     rsp, 8
 * 00000001401CA396: call    loc_1401CA389
 * 00000001401CA39B: add     rsp, 8
 * 00000001401CA39F: call    loc_1401CA392
 * 00000001401CA3A4: add     rsp, 8
 * 00000001401CA3A8: call    loc_1401CA39B
 * 00000001401CA3AD: add     rsp, 8
 * 00000001401CA3B1: call    loc_1401CA3A4
 * 00000001401CA3B6: add     rsp, 8
 * 00000001401CA3BA: call    loc_1401CA3AD
 * 00000001401CA3BF: add     rsp, 8
 * 00000001401CA3C3: call    loc_1401CA3B6
 * 00000001401CA3C8: add     rsp, 8
 * 00000001401CA3CC: call    loc_1401CA3BF
 * 00000001401CA3D1: add     rsp, 8
 * 00000001401CA3D5: call    loc_1401CA3C8
 * 00000001401CA3DA: add     rsp, 8
 * 00000001401CA3DE: call    loc_1401CA3D1
 * 00000001401CA3E3: add     rsp, 8
 * 00000001401CA3E7: call    loc_1401CA3DA
 * 00000001401CA3EC: add     rsp, 8
 * 00000001401CA3F0: call    loc_1401CA3E3
 * 00000001401CA3F5: add     rsp, 8
 * 00000001401CA3F9: call    loc_1401CA3EC
 * 00000001401CA3FE: add     rsp, 8
 * 00000001401CA402: call    loc_1401CA3F5
 * 00000001401CA407: add     rsp, 8
 * 00000001401CA40B: call    loc_1401CA3FE
 * 00000001401CA410: add     rsp, 8
 * 00000001401CA414: call    loc_1401CA407
 * 00000001401CA419: add     rsp, 8
 * 00000001401CA41D: call    loc_1401CA410
 * 00000001401CA422: add     rsp, 8
 * 00000001401CA426: lfence
 * 00000001401CA429: mov     byte ptr gs:853h, 0
 * 00000001401CA432: test    byte ptr [r10+3], 3
 * 00000001401CA437: mov     [rbp+0E8h+var_68], 0
 * 00000001401CA440: jz      short loc_1401CA447
 * 00000001401CA442: call    KiSaveDebugRegisterState
 * 00000001401CA447: cld
 * 00000001401CA448: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CA44C: ldmxcsr dword ptr gs:180h
 * 00000001401CA455: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CA459: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CA45D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CA461: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CA465: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CA469: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CA46D: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401CA476: jz      short loc_1401CA47D
 * 00000001401CA478: call    KeWakeProcessor
 * 00000001401CA47D: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401CA484: cmp     rax, [rbp+0E8h]
 * 00000001401CA48B: jnb     short loc_1401CA4A6
 * 00000001401CA48D: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401CA494: cmp     rax, [rbp+0E8h]
 * 00000001401CA49B: jb      short loc_1401CA4A6
 * 00000001401CA49D: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401CA4A1: call    KiCheckForSListAddress
 * 00000001401CA4A6: xor     esi, esi
 * 00000001401CA4A8: inc     dword ptr gs:5D00h
 * 00000001401CA4B0: mov     rdx, rsp
 * 00000001401CA4B3: mov     rcx, gs:6458h
 * 00000001401CA4BC: lea     rax, [rcx-6000h]
 * 00000001401CA4C3: cmp     rax, rsp
 * 00000001401CA4C6: ja      short loc_1401CA4CD
 * 00000001401CA4C8: cmp     rsp, rcx
 * 00000001401CA4CB: jb      short loc_1401CA4D9
 * 00000001401CA4CD: cmp     cs:KiBugCheckActive, 0
 * 00000001401CA4D4: jnz     short loc_1401CA4D9
 * 00000001401CA4D6: mov     rsp, rcx
 * 00000001401CA4D9: sub     rsp, 20h
 * 00000001401CA4DD: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001401CA4E2: call    KiIpiInterruptSubDispatch
 * 00000001401CA4E7: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001401CA4EC: mov     rcx, rsi
 * 00000001401CA4EF: call    HalPerformEndOfInterrupt_0
 * 00000001401CA4F4: mov     rcx, gs:20h
 * 00000001401CA4FD: cmp     byte ptr [rcx+20h], 1
 * 00000001401CA501: ja      short loc_1401CA57D
 * 00000001401CA503: rdtsc
 * 00000001401CA505: shl     rdx, 20h
 * 00000001401CA509: or      rax, rdx
 * 00000001401CA50C: sub     rax, [rcx+5BC0h]
 * 00000001401CA513: add     [rcx+5C38h], rax
 * 00000001401CA51A: add     [rcx+5BC0h], rax
 * 00000001401CA521: mov     r8, rax
 * 00000001401CA524: mov     rax, [rcx+8]
 * 00000001401CA528: test    byte ptr [rax+2], 72h
 * 00000001401CA52C: jz      short loc_1401CA541
 * 00000001401CA52E: xor     edx, edx
 * 00000001401CA530: call    KiBeginThreadAccountingPeriod
 * 00000001401CA535: mov     rcx, gs:20h
 * 00000001401CA53E: inc     byte ptr [rcx+20h]
 * 00000001401CA541: mov     dl, [rcx+6]
 * 00000001401CA544: and     byte ptr [rcx+6], 0
 * 00000001401CA548: cmp     byte ptr [rcx+7], 0
 * 00000001401CA54C: jnz     short loc_1401CA57D
 * 00000001401CA54E: test    dl, dl
 * 00000001401CA550: jz      short loc_1401CA57D
 * 00000001401CA552: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401CA556: jnb     short loc_1401CA563
 * 00000001401CA558: and     byte ptr [rcx+20h], 0
 * 00000001401CA55C: call    KiDpcInterruptBypass
 * 00000001401CA561: jmp     short loc_1401CA580
 * 00000001401CA563: mov     ecx, 2
 * 00000001401CA568: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401CA56F: nop     dword ptr [rax+rax+00h]
 * 00000001401CA574: mov     rcx, gs:20h
 * 00000001401CA57D: dec     byte ptr [rcx+20h]
 * 00000001401CA580: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401CA584: cmp     cs:KiIrqlFlags, 0
 * 00000001401CA58B: jz      short loc_1401CA594
 * 00000001401CA58D: call    KzSetIrqlUnsafe
 * 00000001401CA592: jmp     short loc_1401CA598
 * 00000001401CA594: mov     cr8, rcx
 * 00000001401CA598: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401CA59F: test    [rbp+0E8h+arg_0], 1
 * 00000001401CA5A6: jz      loc_1401CA6E5
 * 00000001401CA5AC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CA5B3: jz      short loc_1401CA5B8
 * 00000001401CA5B5: stac
 * 00000001401CA5B8: mov     rcx, gs:188h
 * 00000001401CA5C1: test    byte ptr [rcx+0C2h], 3
 * 00000001401CA5C8: jz      short loc_1401CA5E5
 * 00000001401CA5CA: mov     ecx, 1
 * 00000001401CA5CF: mov     cr8, rcx
 * 00000001401CA5D3: sti
 * 00000001401CA5D4: call    KiInitiateUserApc
 * 00000001401CA5D9: cli
 * 00000001401CA5DA: mov     ecx, 0
 * 00000001401CA5DF: mov     cr8, rcx
 * 00000001401CA5E3: jmp     short loc_1401CA5B8
 * 00000001401CA5E5: test    byte ptr gs:27Eh, 2
 * 00000001401CA5EE: jz      short loc_1401CA5F7
 * 00000001401CA5F0: xor     ecx, ecx
 * 00000001401CA5F2: call    KiUpdateStibpPairing
 * 00000001401CA5F7: mov     rcx, gs:188h
 * 00000001401CA600: test    dword ptr [rcx], 8000000h
 * 00000001401CA606: jz      short loc_1401CA60D
 * 00000001401CA608: call    KiRestoreSetContextState
 * 00000001401CA60D: mov     rcx, gs:188h
 * 00000001401CA616: test    dword ptr [rcx], 40010000h
 * 00000001401CA61C: jz      short loc_1401CA632
 * 00000001401CA61E: test    byte ptr [rcx+2], 1
 * 00000001401CA622: jz      short loc_1401CA632
 * 00000001401CA624: call    KiCopyCounters
 * 00000001401CA629: mov     rcx, gs:188h
 * 00000001401CA632: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CA636: cmp     [rbp+0E8h+var_68], 0
 * 00000001401CA63E: jz      short loc_1401CA645
 * 00000001401CA640: call    KiRestoreDebugRegisterState
 * 00000001401CA645: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CA649: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CA64D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CA651: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CA655: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CA659: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CA65D: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CA661: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CA665: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CA669: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CA66D: mov     byte ptr gs:853h, 0
 * 00000001401CA676: movzx   eax, byte ptr gs:27Dh
 * 00000001401CA67F: cmp     gs:27Ah, al
 * 00000001401CA687: jz      short loc_1401CA69A
 * 00000001401CA689: mov     gs:27Ah, al
 * 00000001401CA691: mov     ecx, 48h ; 'H'
 * 00000001401CA696: xor     edx, edx
 * 00000001401CA698: wrmsr
 * 00000001401CA69A: btr     word ptr gs:278h, 2
 * 00000001401CA6A5: jnb     short loc_1401CA6B5
 * 00000001401CA6A7: mov     eax, 1
 * 00000001401CA6AC: xor     edx, edx
 * 00000001401CA6AE: mov     ecx, 49h ; 'I'
 * 00000001401CA6B3: wrmsr
 * 00000001401CA6B5: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CA6B9: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CA6BD: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CA6C1: mov     rsp, rbp
 * 00000001401CA6C4: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CA6CB: add     rsp, 0E8h
 * 00000001401CA6D2: test    cs:KiKvaShadow, 1
 * 00000001401CA6D9: jz      short loc_1401CA6E0
 * 00000001401CA6DB: jmp     KiKernelExit
 * 00000001401CA6E0: swapgs
 * 00000001401CA6E3: iretq
 * 00000001401CA6E5: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CA6E9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CA6ED: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CA6F1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CA6F5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CA6F9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CA6FD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CA701: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CA705: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CA709: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CA70D: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CA711: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CA715: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CA719: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CA71D: mov     rsp, rbp
 * 00000001401CA720: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CA727: add     rsp, 0E8h
 * 00000001401CA72E: iretq
 */
