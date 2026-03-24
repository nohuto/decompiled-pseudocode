/*
 * XREFs of KiBoundFault @ 0x1401C9240
 * Callers:
 *     KiBoundFaultShadow @ 0x14032E380 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1401C9240 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1401CFE00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D02C0 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D0B80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiHandleBound @ 0x14028F420 (KiHandleBound.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x1401C9240
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9240
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9240: sub     rsp, 8
 * 00000001401C9244: push    rbp
 * 00000001401C9245: sub     rsp, 158h
 * 00000001401C924C: lea     rbp, [rsp+80h]
 * 00000001401C9254: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C9258: mov     [rbp+0E8h+var_138], rax
 * 00000001401C925C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C9260: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C9264: mov     [rbp+0E8h+var_120], r8
 * 00000001401C9268: mov     [rbp+0E8h+var_118], r9
 * 00000001401C926C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C9270: mov     [rbp+0E8h+var_108], r11
 * 00000001401C9274: test    [rbp+0E8h+arg_0], 1
 * 00000001401C927B: jnz     short loc_1401C92AC
 * 00000001401C927D: lfence
 * 00000001401C9280: test    word ptr gs:860h, 1
 * 00000001401C928B: jnz     short loc_1401C9295
 * 00000001401C928D: lfence
 * 00000001401C9290: jmp     loc_1401C94FE
 * 00000001401C9295: movzx   eax, word ptr gs:864h
 * 00000001401C929E: mov     ecx, 48h ; 'H'
 * 00000001401C92A3: xor     edx, edx
 * 00000001401C92A5: wrmsr
 * 00000001401C92A7: jmp     loc_1401C94FE
 * 00000001401C92AC: test    cs:KiKvaShadow, 1
 * 00000001401C92B3: jnz     short loc_1401C92B8
 * 00000001401C92B5: swapgs
 * 00000001401C92B8: lfence
 * 00000001401C92BB: mov     r10, gs:188h
 * 00000001401C92C4: mov     rcx, gs:188h
 * 00000001401C92CD: mov     rcx, [rcx+220h]
 * 00000001401C92D4: mov     rcx, [rcx+830h]
 * 00000001401C92DB: mov     gs:858h, rcx
 * 00000001401C92E4: mov     cx, gs:850h
 * 00000001401C92ED: mov     gs:852h, cx
 * 00000001401C92F6: mov     cx, gs:860h
 * 00000001401C92FF: mov     gs:854h, cx
 * 00000001401C9308: movzx   eax, word ptr gs:866h
 * 00000001401C9311: cmp     gs:864h, ax
 * 00000001401C931A: jz      short loc_1401C932E
 * 00000001401C931C: mov     gs:864h, ax
 * 00000001401C9325: mov     ecx, 48h ; 'H'
 * 00000001401C932A: xor     edx, edx
 * 00000001401C932C: wrmsr
 * 00000001401C932E: movzx   edx, word ptr gs:860h
 * 00000001401C9337: test    edx, 8
 * 00000001401C933D: jz      short loc_1401C9356
 * 00000001401C933F: mov     eax, 1
 * 00000001401C9344: xor     edx, edx
 * 00000001401C9346: mov     ecx, 49h ; 'I'
 * 00000001401C934B: wrmsr
 * 00000001401C934D: movzx   edx, word ptr gs:860h
 * 00000001401C9356: test    edx, 2
 * 00000001401C935C: jz      loc_1401C9487
 * 00000001401C9362: call    loc_1401C9475
 * 00000001401C9367: add     rsp, 8
 * 00000001401C936B: call    loc_1401C947E
 * 00000001401C9370: add     rsp, 8
 * 00000001401C9374: call    loc_1401C9367
 * 00000001401C9379: add     rsp, 8
 * 00000001401C937D: call    loc_1401C9370
 * 00000001401C9382: add     rsp, 8
 * 00000001401C9386: call    loc_1401C9379
 * 00000001401C938B: add     rsp, 8
 * 00000001401C938F: call    loc_1401C9382
 * 00000001401C9394: add     rsp, 8
 * 00000001401C9398: call    loc_1401C938B
 * 00000001401C939D: add     rsp, 8
 * 00000001401C93A1: call    loc_1401C9394
 * 00000001401C93A6: add     rsp, 8
 * 00000001401C93AA: call    loc_1401C939D
 * 00000001401C93AF: add     rsp, 8
 * 00000001401C93B3: call    loc_1401C93A6
 * 00000001401C93B8: add     rsp, 8
 * 00000001401C93BC: call    loc_1401C93AF
 * 00000001401C93C1: add     rsp, 8
 * 00000001401C93C5: call    loc_1401C93B8
 * 00000001401C93CA: add     rsp, 8
 * 00000001401C93CE: call    loc_1401C93C1
 * 00000001401C93D3: add     rsp, 8
 * 00000001401C93D7: call    loc_1401C93CA
 * 00000001401C93DC: add     rsp, 8
 * 00000001401C93E0: call    loc_1401C93D3
 * 00000001401C93E5: add     rsp, 8
 * 00000001401C93E9: call    loc_1401C93DC
 * 00000001401C93EE: add     rsp, 8
 * 00000001401C93F2: call    loc_1401C93E5
 * 00000001401C93F7: add     rsp, 8
 * 00000001401C93FB: call    loc_1401C93EE
 * 00000001401C9400: add     rsp, 8
 * 00000001401C9404: call    loc_1401C93F7
 * 00000001401C9409: add     rsp, 8
 * 00000001401C940D: call    loc_1401C9400
 * 00000001401C9412: add     rsp, 8
 * 00000001401C9416: call    loc_1401C9409
 * 00000001401C941B: add     rsp, 8
 * 00000001401C941F: call    loc_1401C9412
 * 00000001401C9424: add     rsp, 8
 * 00000001401C9428: call    loc_1401C941B
 * 00000001401C942D: add     rsp, 8
 * 00000001401C9431: call    loc_1401C9424
 * 00000001401C9436: add     rsp, 8
 * 00000001401C943A: call    loc_1401C942D
 * 00000001401C943F: add     rsp, 8
 * 00000001401C9443: call    loc_1401C9436
 * 00000001401C9448: add     rsp, 8
 * 00000001401C944C: call    loc_1401C943F
 * 00000001401C9451: add     rsp, 8
 * 00000001401C9455: call    loc_1401C9448
 * 00000001401C945A: add     rsp, 8
 * 00000001401C945E: call    loc_1401C9451
 * 00000001401C9463: add     rsp, 8
 * 00000001401C9467: call    loc_1401C945A
 * 00000001401C946C: add     rsp, 8
 * 00000001401C9470: call    loc_1401C9463
 * 00000001401C9475: add     rsp, 8
 * 00000001401C9479: call    loc_1401C946C
 * 00000001401C947E: add     rsp, 8
 * 00000001401C9482: mov     eax, 0DADAh
 * 00000001401C9487: test    edx, 200h
 * 00000001401C948D: jz      short loc_1401C9494
 * 00000001401C948F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C9494: lfence
 * 00000001401C9497: mov     byte ptr gs:856h, 0
 * 00000001401C94A0: test    byte ptr [r10+3], 80h
 * 00000001401C94A5: jz      short loc_1401C94E9
 * 00000001401C94A7: mov     ecx, 0C0000102h
 * 00000001401C94AC: rdmsr
 * 00000001401C94AE: shl     rdx, 20h
 * 00000001401C94B2: or      rax, rdx
 * 00000001401C94B5: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C94BC: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C94C4: cmp     [r10+0F0h], rax
 * 00000001401C94CB: jz      short loc_1401C94E9
 * 00000001401C94CD: mov     rdx, [r10+1F0h]
 * 00000001401C94D4: bts     dword ptr [r10+74h], 8
 * 00000001401C94DA: dec     word ptr [r10+1E6h]
 * 00000001401C94E2: mov     [rdx+80h], rax
 * 00000001401C94E9: test    byte ptr [r10+3], 3
 * 00000001401C94EE: mov     [rbp+0E8h+var_68], 0
 * 00000001401C94F7: jz      short loc_1401C94FE
 * 00000001401C94F9: call    KiSaveDebugRegisterState
 * 00000001401C94FE: cld
 * 00000001401C94FF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9503: ldmxcsr dword ptr gs:180h
 * 00000001401C950C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C9510: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C9514: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C9518: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C951C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C9520: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C9524: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C952E: jz      short loc_1401C9531
 * 00000001401C9530: sti
 * 00000001401C9531: test    [rbp+0E8h+arg_0], 1
 * 00000001401C9538: jz      short loc_1401C9591
 * 00000001401C953A: mov     r9, gs:188h
 * 00000001401C9543: bt      dword ptr [r9+74h], 8
 * 00000001401C9549: jnb     short loc_1401C9550
 * 00000001401C954B: call    KiUmsTrapEntry
 * 00000001401C9550: call    KiHandleBound
 * 00000001401C9555: cmp     eax, 0
 * 00000001401C9558: jz      short loc_1401C9591
 * 00000001401C955A: cmp     eax, 1
 * 00000001401C955D: jz      short loc_1401C95A5
 * 00000001401C955F: cmp     eax, 2
 * 00000001401C9562: jz      short loc_1401C9573
 * 00000001401C9564: mov     edx, 5
 * 00000001401C9569: mov     ecx, 7Fh
 * 00000001401C956E: call    KiBugCheckDispatch
 * 00000001401C9573: mov     r9, 1Ch
 * 00000001401C957A: mov     ecx, 0C0000409h
 * 00000001401C957F: mov     edx, 1
 * 00000001401C9584: mov     r8, [rbp+0E8h]
 * 00000001401C958B: call    KiFastFailDispatch
 * 00000001401C9590: nop
 * 00000001401C9591: mov     ecx, 0C000008Ch
 * 00000001401C9596: xor     edx, edx
 * 00000001401C9598: mov     r8, [rbp+0E8h]
 * 00000001401C959F: call    KiExceptionDispatch
 * 00000001401C95A4: nop
 * 00000001401C95A5: cli
 * 00000001401C95A6: test    [rbp+0E8h+arg_0], 1
 * 00000001401C95AD: jz      loc_1401C9854
 * 00000001401C95B3: mov     rcx, gs:188h
 * 00000001401C95BC: test    byte ptr [rcx+0C2h], 3
 * 00000001401C95C3: jz      short loc_1401C95E0
 * 00000001401C95C5: mov     ecx, 1
 * 00000001401C95CA: mov     cr8, rcx
 * 00000001401C95CE: sti
 * 00000001401C95CF: call    KiInitiateUserApc
 * 00000001401C95D4: cli
 * 00000001401C95D5: mov     ecx, 0
 * 00000001401C95DA: mov     cr8, rcx
 * 00000001401C95DE: jmp     short loc_1401C95B3
 * 00000001401C95E0: test    byte ptr gs:86Ch, 2
 * 00000001401C95E9: jz      short loc_1401C95F2
 * 00000001401C95EB: xor     ecx, ecx
 * 00000001401C95ED: call    KiUpdateStibpPairing
 * 00000001401C95F2: mov     rcx, gs:188h
 * 00000001401C95FB: test    dword ptr [rcx], 8000000h
 * 00000001401C9601: jz      short loc_1401C9608
 * 00000001401C9603: call    KiRestoreSetContextState
 * 00000001401C9608: mov     rcx, gs:188h
 * 00000001401C9611: test    dword ptr [rcx], 40010000h
 * 00000001401C9617: jz      short loc_1401C963E
 * 00000001401C9619: test    byte ptr [rcx+2], 1
 * 00000001401C961D: jz      short loc_1401C962D
 * 00000001401C961F: call    KiCopyCounters
 * 00000001401C9624: mov     rcx, gs:188h
 * 00000001401C962D: test    byte ptr [rcx+3], 40h
 * 00000001401C9631: jz      short loc_1401C963E
 * 00000001401C9633: lea     rsp, [rbp-80h]
 * 00000001401C9637: mov     cl, 1
 * 00000001401C9639: call    KiUmsExit
 * 00000001401C963E: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9642: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C964A: jz      short loc_1401C9651
 * 00000001401C964C: call    KiRestoreDebugRegisterState
 * 00000001401C9651: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C9655: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9659: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C965D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9661: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C9665: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9669: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C966D: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9671: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C9675: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9679: mov     byte ptr gs:856h, 0
 * 00000001401C9682: movzx   eax, word ptr gs:86Ah
 * 00000001401C968B: cmp     gs:864h, ax
 * 00000001401C9694: jz      short loc_1401C96A8
 * 00000001401C9696: mov     gs:864h, ax
 * 00000001401C969F: mov     ecx, 48h ; 'H'
 * 00000001401C96A4: xor     edx, edx
 * 00000001401C96A6: wrmsr
 * 00000001401C96A8: btr     word ptr gs:860h, 2
 * 00000001401C96B3: jnb     short loc_1401C96C3
 * 00000001401C96B5: mov     eax, 1
 * 00000001401C96BA: xor     edx, edx
 * 00000001401C96BC: mov     ecx, 49h ; 'I'
 * 00000001401C96C1: wrmsr
 * 00000001401C96C3: btr     word ptr gs:860h, 5
 * 00000001401C96CE: jnb     loc_1401C97F9
 * 00000001401C96D4: call    loc_1401C97E7
 * 00000001401C96D9: add     rsp, 8
 * 00000001401C96DD: call    loc_1401C97F0
 * 00000001401C96E2: add     rsp, 8
 * 00000001401C96E6: call    loc_1401C96D9
 * 00000001401C96EB: add     rsp, 8
 * 00000001401C96EF: call    loc_1401C96E2
 * 00000001401C96F4: add     rsp, 8
 * 00000001401C96F8: call    loc_1401C96EB
 * 00000001401C96FD: add     rsp, 8
 * 00000001401C9701: call    loc_1401C96F4
 * 00000001401C9706: add     rsp, 8
 * 00000001401C970A: call    loc_1401C96FD
 * 00000001401C970F: add     rsp, 8
 * 00000001401C9713: call    loc_1401C9706
 * 00000001401C9718: add     rsp, 8
 * 00000001401C971C: call    loc_1401C970F
 * 00000001401C9721: add     rsp, 8
 * 00000001401C9725: call    loc_1401C9718
 * 00000001401C972A: add     rsp, 8
 * 00000001401C972E: call    loc_1401C9721
 * 00000001401C9733: add     rsp, 8
 * 00000001401C9737: call    loc_1401C972A
 * 00000001401C973C: add     rsp, 8
 * 00000001401C9740: call    loc_1401C9733
 * 00000001401C9745: add     rsp, 8
 * 00000001401C9749: call    loc_1401C973C
 * 00000001401C974E: add     rsp, 8
 * 00000001401C9752: call    loc_1401C9745
 * 00000001401C9757: add     rsp, 8
 * 00000001401C975B: call    loc_1401C974E
 * 00000001401C9760: add     rsp, 8
 * 00000001401C9764: call    loc_1401C9757
 * 00000001401C9769: add     rsp, 8
 * 00000001401C976D: call    loc_1401C9760
 * 00000001401C9772: add     rsp, 8
 * 00000001401C9776: call    loc_1401C9769
 * 00000001401C977B: add     rsp, 8
 * 00000001401C977F: call    loc_1401C9772
 * 00000001401C9784: add     rsp, 8
 * 00000001401C9788: call    loc_1401C977B
 * 00000001401C978D: add     rsp, 8
 * 00000001401C9791: call    loc_1401C9784
 * 00000001401C9796: add     rsp, 8
 * 00000001401C979A: call    loc_1401C978D
 * 00000001401C979F: add     rsp, 8
 * 00000001401C97A3: call    loc_1401C9796
 * 00000001401C97A8: add     rsp, 8
 * 00000001401C97AC: call    loc_1401C979F
 * 00000001401C97B1: add     rsp, 8
 * 00000001401C97B5: call    loc_1401C97A8
 * 00000001401C97BA: add     rsp, 8
 * 00000001401C97BE: call    loc_1401C97B1
 * 00000001401C97C3: add     rsp, 8
 * 00000001401C97C7: call    loc_1401C97BA
 * 00000001401C97CC: add     rsp, 8
 * 00000001401C97D0: call    loc_1401C97C3
 * 00000001401C97D5: add     rsp, 8
 * 00000001401C97D9: call    loc_1401C97CC
 * 00000001401C97DE: add     rsp, 8
 * 00000001401C97E2: call    loc_1401C97D5
 * 00000001401C97E7: add     rsp, 8
 * 00000001401C97EB: call    loc_1401C97DE
 * 00000001401C97F0: add     rsp, 8
 * 00000001401C97F4: mov     eax, 0DADAh
 * 00000001401C97F9: test    word ptr gs:860h, 80h
 * 00000001401C9804: jz      short loc_1401C9812
 * 00000001401C9806: xor     eax, eax
 * 00000001401C9808: xor     edx, edx
 * 00000001401C980A: mov     ecx, 1
 * 00000001401C980F: div     rcx
 * 00000001401C9812: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9816: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C981A: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C981E: mov     rsp, rbp
 * 00000001401C9821: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9828: add     rsp, 0E8h
 * 00000001401C982F: test    cs:KiKvaShadow, 1
 * 00000001401C9836: jz      short loc_1401C983D
 * 00000001401C9838: jmp     KiKernelExit
 * 00000001401C983D: test    word ptr gs:860h, 100h
 * 00000001401C9848: jz      short loc_1401C984F
 * 00000001401C984A: verw    [rsp+arg_18]
 * 00000001401C984F: swapgs
 * 00000001401C9852: iretq
 * 00000001401C9854: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9858: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C985C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9860: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C9864: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9868: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C986C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9870: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C9874: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9878: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C987C: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9880: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9884: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C9888: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C988C: mov     rsp, rbp
 * 00000001401C988F: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9896: add     rsp, 0E8h
 * 00000001401C989D: iretq
 */
