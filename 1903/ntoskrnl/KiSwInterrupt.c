/*
 * XREFs of KiSwInterrupt @ 0x1401C9730
 * Callers:
 *     KiSwInterruptShadow @ 0x140350C80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140042A80 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400AEB30 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     KiSwInterruptDispatch @ 0x1401AAEA0 (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x1401C9730 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1401CA1A0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1402AA670 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x1401C9730
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9730
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9730: sub     rsp, 8
 * 00000001401C9734: push    rbp
 * 00000001401C9735: push    rsi
 * 00000001401C9736: sub     rsp, 150h
 * 00000001401C973D: lea     rbp, [rsp+80h]
 * 00000001401C9745: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C9749: mov     [rbp+0E8h+var_138], rax
 * 00000001401C974D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C9751: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C9755: mov     [rbp+0E8h+var_120], r8
 * 00000001401C9759: mov     [rbp+0E8h+var_118], r9
 * 00000001401C975D: mov     [rbp+0E8h+var_110], r10
 * 00000001401C9761: mov     [rbp+0E8h+var_108], r11
 * 00000001401C9765: test    [rbp+0E8h+arg_0], 1
 * 00000001401C976C: jnz     short loc_1401C979B
 * 00000001401C976E: lfence
 * 00000001401C9771: test    byte ptr gs:278h, 1
 * 00000001401C977A: jnz     short loc_1401C9784
 * 00000001401C977C: lfence
 * 00000001401C977F: jmp     loc_1401C9997
 * 00000001401C9784: movzx   eax, byte ptr gs:27Ah
 * 00000001401C978D: mov     ecx, 48h ; 'H'
 * 00000001401C9792: xor     edx, edx
 * 00000001401C9794: wrmsr
 * 00000001401C9796: jmp     loc_1401C9997
 * 00000001401C979B: test    cs:KiKvaShadow, 1
 * 00000001401C97A2: jnz     short loc_1401C97A7
 * 00000001401C97A4: swapgs
 * 00000001401C97A7: lfence
 * 00000001401C97AA: mov     r10, gs:188h
 * 00000001401C97B3: mov     rcx, gs:188h
 * 00000001401C97BC: mov     rcx, [rcx+220h]
 * 00000001401C97C3: mov     rcx, [rcx+860h]
 * 00000001401C97CA: mov     gs:270h, rcx
 * 00000001401C97D3: mov     cl, gs:850h
 * 00000001401C97DB: mov     gs:851h, cl
 * 00000001401C97E3: mov     cl, gs:278h
 * 00000001401C97EB: mov     gs:852h, cl
 * 00000001401C97F3: movzx   eax, byte ptr gs:27Bh
 * 00000001401C97FC: cmp     gs:27Ah, al
 * 00000001401C9804: jz      short loc_1401C9817
 * 00000001401C9806: mov     gs:27Ah, al
 * 00000001401C980E: mov     ecx, 48h ; 'H'
 * 00000001401C9813: xor     edx, edx
 * 00000001401C9815: wrmsr
 * 00000001401C9817: movzx   edx, byte ptr gs:278h
 * 00000001401C9820: test    edx, 8
 * 00000001401C9826: jz      short loc_1401C983B
 * 00000001401C9828: mov     eax, 1
 * 00000001401C982D: xor     edx, edx
 * 00000001401C982F: mov     ecx, 49h ; 'I'
 * 00000001401C9834: wrmsr
 * 00000001401C9836: jmp     loc_1401C9979
 * 00000001401C983B: test    edx, 2
 * 00000001401C9841: jz      loc_1401C9976
 * 00000001401C9847: test    byte ptr gs:279h, 4
 * 00000001401C9850: jnz     loc_1401C9976
 * 00000001401C9856: call    loc_1401C9969
 * 00000001401C985B: add     rsp, 8
 * 00000001401C985F: call    loc_1401C9972
 * 00000001401C9864: add     rsp, 8
 * 00000001401C9868: call    loc_1401C985B
 * 00000001401C986D: add     rsp, 8
 * 00000001401C9871: call    loc_1401C9864
 * 00000001401C9876: add     rsp, 8
 * 00000001401C987A: call    loc_1401C986D
 * 00000001401C987F: add     rsp, 8
 * 00000001401C9883: call    loc_1401C9876
 * 00000001401C9888: add     rsp, 8
 * 00000001401C988C: call    loc_1401C987F
 * 00000001401C9891: add     rsp, 8
 * 00000001401C9895: call    loc_1401C9888
 * 00000001401C989A: add     rsp, 8
 * 00000001401C989E: call    loc_1401C9891
 * 00000001401C98A3: add     rsp, 8
 * 00000001401C98A7: call    loc_1401C989A
 * 00000001401C98AC: add     rsp, 8
 * 00000001401C98B0: call    loc_1401C98A3
 * 00000001401C98B5: add     rsp, 8
 * 00000001401C98B9: call    loc_1401C98AC
 * 00000001401C98BE: add     rsp, 8
 * 00000001401C98C2: call    loc_1401C98B5
 * 00000001401C98C7: add     rsp, 8
 * 00000001401C98CB: call    loc_1401C98BE
 * 00000001401C98D0: add     rsp, 8
 * 00000001401C98D4: call    loc_1401C98C7
 * 00000001401C98D9: add     rsp, 8
 * 00000001401C98DD: call    loc_1401C98D0
 * 00000001401C98E2: add     rsp, 8
 * 00000001401C98E6: call    loc_1401C98D9
 * 00000001401C98EB: add     rsp, 8
 * 00000001401C98EF: call    loc_1401C98E2
 * 00000001401C98F4: add     rsp, 8
 * 00000001401C98F8: call    loc_1401C98EB
 * 00000001401C98FD: add     rsp, 8
 * 00000001401C9901: call    loc_1401C98F4
 * 00000001401C9906: add     rsp, 8
 * 00000001401C990A: call    loc_1401C98FD
 * 00000001401C990F: add     rsp, 8
 * 00000001401C9913: call    loc_1401C9906
 * 00000001401C9918: add     rsp, 8
 * 00000001401C991C: call    loc_1401C990F
 * 00000001401C9921: add     rsp, 8
 * 00000001401C9925: call    loc_1401C9918
 * 00000001401C992A: add     rsp, 8
 * 00000001401C992E: call    loc_1401C9921
 * 00000001401C9933: add     rsp, 8
 * 00000001401C9937: call    loc_1401C992A
 * 00000001401C993C: add     rsp, 8
 * 00000001401C9940: call    loc_1401C9933
 * 00000001401C9945: add     rsp, 8
 * 00000001401C9949: call    loc_1401C993C
 * 00000001401C994E: add     rsp, 8
 * 00000001401C9952: call    loc_1401C9945
 * 00000001401C9957: add     rsp, 8
 * 00000001401C995B: call    loc_1401C994E
 * 00000001401C9960: add     rsp, 8
 * 00000001401C9964: call    loc_1401C9957
 * 00000001401C9969: add     rsp, 8
 * 00000001401C996D: call    loc_1401C9960
 * 00000001401C9972: add     rsp, 8
 * 00000001401C9976: lfence
 * 00000001401C9979: mov     byte ptr gs:853h, 0
 * 00000001401C9982: test    byte ptr [r10+3], 3
 * 00000001401C9987: mov     [rbp+0E8h+var_68], 0
 * 00000001401C9990: jz      short loc_1401C9997
 * 00000001401C9992: call    KiSaveDebugRegisterState
 * 00000001401C9997: cld
 * 00000001401C9998: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C999C: ldmxcsr dword ptr gs:180h
 * 00000001401C99A5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C99A9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C99AD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C99B1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C99B5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C99B9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C99BD: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C99C6: jz      short loc_1401C99CD
 * 00000001401C99C8: call    KeWakeProcessor
 * 00000001401C99CD: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C99D4: cmp     rax, [rbp+0E8h]
 * 00000001401C99DB: jnb     short loc_1401C99F6
 * 00000001401C99DD: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C99E4: cmp     rax, [rbp+0E8h]
 * 00000001401C99EB: jb      short loc_1401C99F6
 * 00000001401C99ED: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401C99F1: call    KiCheckForSListAddress
 * 00000001401C99F6: xor     esi, esi
 * 00000001401C99F8: inc     dword ptr gs:5D00h
 * 00000001401C9A00: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C9A07: jz      short loc_1401C9A0C
 * 00000001401C9A09: clac
 * 00000001401C9A0C: mov     ecx, 2
 * 00000001401C9A11: cmp     cs:KiIrqlFlags, 0
 * 00000001401C9A18: jz      short loc_1401C9A21
 * 00000001401C9A1A: call    KzSetIrqlUnsafe
 * 00000001401C9A1F: jmp     short loc_1401C9A29
 * 00000001401C9A21: mov     rax, cr8
 * 00000001401C9A25: mov     cr8, rcx
 * 00000001401C9A29: mov     [rbp+0E8h+var_13F], al
 * 00000001401C9A2C: mov     rcx, gs:20h
 * 00000001401C9A35: inc     byte ptr [rcx+20h]
 * 00000001401C9A38: cmp     byte ptr [rcx+20h], 1
 * 00000001401C9A3C: jnz     short loc_1401C9A8E
 * 00000001401C9A3E: rdtsc
 * 00000001401C9A40: shl     rdx, 20h
 * 00000001401C9A44: or      rax, rdx
 * 00000001401C9A47: mov     r8, [rcx+8]
 * 00000001401C9A4B: sub     rax, [rcx+5BC0h]
 * 00000001401C9A52: add     [r8+48h], rax
 * 00000001401C9A56: mov     edx, [r8+50h]
 * 00000001401C9A5A: add     [rcx+5BC0h], rax
 * 00000001401C9A61: add     rdx, rax
 * 00000001401C9A64: mov     ecx, edx
 * 00000001401C9A66: shr     rdx, 20h
 * 00000001401C9A6A: jz      short loc_1401C9A6F
 * 00000001401C9A6C: or      ecx, 0FFFFFFFFh
 * 00000001401C9A6F: mov     [r8+50h], ecx
 * 00000001401C9A73: test    byte ptr [r8+2], 3Eh
 * 00000001401C9A78: jz      short loc_1401C9A8E
 * 00000001401C9A7A: mov     rdx, r8
 * 00000001401C9A7D: mov     r8, rax
 * 00000001401C9A80: mov     rcx, gs:20h
 * 00000001401C9A89: call    KiEndThreadAccountingPeriod
 * 00000001401C9A8E: sti
 * 00000001401C9A8F: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401C9A93: call    KiSwInterruptDispatch
 * 00000001401C9A98: cli
 * 00000001401C9A99: mov     rcx, rsi
 * 00000001401C9A9C: call    HalPerformEndOfInterrupt_0
 * 00000001401C9AA1: mov     rcx, gs:20h
 * 00000001401C9AAA: cmp     byte ptr [rcx+20h], 1
 * 00000001401C9AAE: ja      short loc_1401C9B2A
 * 00000001401C9AB0: rdtsc
 * 00000001401C9AB2: shl     rdx, 20h
 * 00000001401C9AB6: or      rax, rdx
 * 00000001401C9AB9: sub     rax, [rcx+5BC0h]
 * 00000001401C9AC0: add     [rcx+5C38h], rax
 * 00000001401C9AC7: add     [rcx+5BC0h], rax
 * 00000001401C9ACE: mov     r8, rax
 * 00000001401C9AD1: mov     rax, [rcx+8]
 * 00000001401C9AD5: test    byte ptr [rax+2], 72h
 * 00000001401C9AD9: jz      short loc_1401C9AEE
 * 00000001401C9ADB: xor     edx, edx
 * 00000001401C9ADD: call    KiBeginThreadAccountingPeriod
 * 00000001401C9AE2: mov     rcx, gs:20h
 * 00000001401C9AEB: inc     byte ptr [rcx+20h]
 * 00000001401C9AEE: mov     dl, [rcx+6]
 * 00000001401C9AF1: and     byte ptr [rcx+6], 0
 * 00000001401C9AF5: cmp     byte ptr [rcx+7], 0
 * 00000001401C9AF9: jnz     short loc_1401C9B2A
 * 00000001401C9AFB: test    dl, dl
 * 00000001401C9AFD: jz      short loc_1401C9B2A
 * 00000001401C9AFF: cmp     [rbp+0E8h+var_13F], 2
 * 00000001401C9B03: jnb     short loc_1401C9B10
 * 00000001401C9B05: and     byte ptr [rcx+20h], 0
 * 00000001401C9B09: call    KiDpcInterruptBypass
 * 00000001401C9B0E: jmp     short loc_1401C9B2D
 * 00000001401C9B10: mov     ecx, 2
 * 00000001401C9B15: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401C9B1C: nop     dword ptr [rax+rax+00h]
 * 00000001401C9B21: mov     rcx, gs:20h
 * 00000001401C9B2A: dec     byte ptr [rcx+20h]
 * 00000001401C9B2D: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C9B31: cmp     cs:KiIrqlFlags, 0
 * 00000001401C9B38: jz      short loc_1401C9B41
 * 00000001401C9B3A: call    KzSetIrqlUnsafe
 * 00000001401C9B3F: jmp     short loc_1401C9B45
 * 00000001401C9B41: mov     cr8, rcx
 * 00000001401C9B45: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C9B4C: cli
 * 00000001401C9B4D: test    [rbp+0E8h+arg_0], 1
 * 00000001401C9B54: jz      loc_1401C9C93
 * 00000001401C9B5A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C9B61: jz      short loc_1401C9B66
 * 00000001401C9B63: stac
 * 00000001401C9B66: mov     rcx, gs:188h
 * 00000001401C9B6F: test    byte ptr [rcx+0C2h], 3
 * 00000001401C9B76: jz      short loc_1401C9B93
 * 00000001401C9B78: mov     ecx, 1
 * 00000001401C9B7D: mov     cr8, rcx
 * 00000001401C9B81: sti
 * 00000001401C9B82: call    KiInitiateUserApc
 * 00000001401C9B87: cli
 * 00000001401C9B88: mov     ecx, 0
 * 00000001401C9B8D: mov     cr8, rcx
 * 00000001401C9B91: jmp     short loc_1401C9B66
 * 00000001401C9B93: test    byte ptr gs:27Eh, 2
 * 00000001401C9B9C: jz      short loc_1401C9BA5
 * 00000001401C9B9E: xor     ecx, ecx
 * 00000001401C9BA0: call    KiUpdateStibpPairing
 * 00000001401C9BA5: mov     rcx, gs:188h
 * 00000001401C9BAE: test    dword ptr [rcx], 8000000h
 * 00000001401C9BB4: jz      short loc_1401C9BBB
 * 00000001401C9BB6: call    KiRestoreSetContextState
 * 00000001401C9BBB: mov     rcx, gs:188h
 * 00000001401C9BC4: test    dword ptr [rcx], 40010000h
 * 00000001401C9BCA: jz      short loc_1401C9BE0
 * 00000001401C9BCC: test    byte ptr [rcx+2], 1
 * 00000001401C9BD0: jz      short loc_1401C9BE0
 * 00000001401C9BD2: call    KiCopyCounters
 * 00000001401C9BD7: mov     rcx, gs:188h
 * 00000001401C9BE0: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9BE4: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C9BEC: jz      short loc_1401C9BF3
 * 00000001401C9BEE: call    KiRestoreDebugRegisterState
 * 00000001401C9BF3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C9BF7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9BFB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C9BFF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9C03: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C9C07: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9C0B: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C9C0F: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9C13: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C9C17: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9C1B: mov     byte ptr gs:853h, 0
 * 00000001401C9C24: movzx   eax, byte ptr gs:27Dh
 * 00000001401C9C2D: cmp     gs:27Ah, al
 * 00000001401C9C35: jz      short loc_1401C9C48
 * 00000001401C9C37: mov     gs:27Ah, al
 * 00000001401C9C3F: mov     ecx, 48h ; 'H'
 * 00000001401C9C44: xor     edx, edx
 * 00000001401C9C46: wrmsr
 * 00000001401C9C48: btr     word ptr gs:278h, 2
 * 00000001401C9C53: jnb     short loc_1401C9C63
 * 00000001401C9C55: mov     eax, 1
 * 00000001401C9C5A: xor     edx, edx
 * 00000001401C9C5C: mov     ecx, 49h ; 'I'
 * 00000001401C9C61: wrmsr
 * 00000001401C9C63: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9C67: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C9C6B: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C9C6F: mov     rsp, rbp
 * 00000001401C9C72: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9C79: add     rsp, 0E8h
 * 00000001401C9C80: test    cs:KiKvaShadow, 1
 * 00000001401C9C87: jz      short loc_1401C9C8E
 * 00000001401C9C89: jmp     KiKernelExit
 * 00000001401C9C8E: swapgs
 * 00000001401C9C91: iretq
 * 00000001401C9C93: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9C97: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C9C9B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9C9F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C9CA3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9CA7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C9CAB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9CAF: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C9CB3: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9CB7: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C9CBB: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9CBF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9CC3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C9CC7: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C9CCB: mov     rsp, rbp
 * 00000001401C9CCE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9CD5: add     rsp, 0E8h
 * 00000001401C9CDC: iretq
 */
