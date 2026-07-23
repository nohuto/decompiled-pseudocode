/*
 * XREFs of KiBoundFault @ 0x1401C9340
 * Callers:
 *     KiBoundFaultShadow @ 0x14032F380 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1401C9340 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x1401D0C80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiHandleBound @ 0x14028F610 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x1401C9340
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9340: sub     rsp, 8
 * 00000001401C9344: push    rbp
 * 00000001401C9345: sub     rsp, 158h
 * 00000001401C934C: lea     rbp, [rsp+80h]
 * 00000001401C9354: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C9358: mov     [rbp+0E8h+var_138], rax
 * 00000001401C935C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C9360: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C9364: mov     [rbp+0E8h+var_120], r8
 * 00000001401C9368: mov     [rbp+0E8h+var_118], r9
 * 00000001401C936C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C9370: mov     [rbp+0E8h+var_108], r11
 * 00000001401C9374: test    [rbp+0E8h+arg_0], 1
 * 00000001401C937B: jnz     short loc_1401C93AC
 * 00000001401C937D: lfence
 * 00000001401C9380: test    word ptr gs:860h, 1
 * 00000001401C938B: jnz     short loc_1401C9395
 * 00000001401C938D: lfence
 * 00000001401C9390: jmp     loc_1401C95FE
 * 00000001401C9395: movzx   eax, word ptr gs:864h
 * 00000001401C939E: mov     ecx, 48h ; 'H'
 * 00000001401C93A3: xor     edx, edx
 * 00000001401C93A5: wrmsr
 * 00000001401C93A7: jmp     loc_1401C95FE
 * 00000001401C93AC: test    cs:KiKvaShadow, 1
 * 00000001401C93B3: jnz     short loc_1401C93B8
 * 00000001401C93B5: swapgs
 * 00000001401C93B8: lfence
 * 00000001401C93BB: mov     r10, gs:188h
 * 00000001401C93C4: mov     rcx, gs:188h
 * 00000001401C93CD: mov     rcx, [rcx+220h]
 * 00000001401C93D4: mov     rcx, [rcx+830h]
 * 00000001401C93DB: mov     gs:858h, rcx
 * 00000001401C93E4: mov     cx, gs:850h
 * 00000001401C93ED: mov     gs:852h, cx
 * 00000001401C93F6: mov     cx, gs:860h
 * 00000001401C93FF: mov     gs:854h, cx
 * 00000001401C9408: movzx   eax, word ptr gs:866h
 * 00000001401C9411: cmp     gs:864h, ax
 * 00000001401C941A: jz      short loc_1401C942E
 * 00000001401C941C: mov     gs:864h, ax
 * 00000001401C9425: mov     ecx, 48h ; 'H'
 * 00000001401C942A: xor     edx, edx
 * 00000001401C942C: wrmsr
 * 00000001401C942E: movzx   edx, word ptr gs:860h
 * 00000001401C9437: test    edx, 8
 * 00000001401C943D: jz      short loc_1401C9456
 * 00000001401C943F: mov     eax, 1
 * 00000001401C9444: xor     edx, edx
 * 00000001401C9446: mov     ecx, 49h ; 'I'
 * 00000001401C944B: wrmsr
 * 00000001401C944D: movzx   edx, word ptr gs:860h
 * 00000001401C9456: test    edx, 2
 * 00000001401C945C: jz      loc_1401C9587
 * 00000001401C9462: call    loc_1401C9575
 * 00000001401C9467: add     rsp, 8
 * 00000001401C946B: call    loc_1401C957E
 * 00000001401C9470: add     rsp, 8
 * 00000001401C9474: call    loc_1401C9467
 * 00000001401C9479: add     rsp, 8
 * 00000001401C947D: call    loc_1401C9470
 * 00000001401C9482: add     rsp, 8
 * 00000001401C9486: call    loc_1401C9479
 * 00000001401C948B: add     rsp, 8
 * 00000001401C948F: call    loc_1401C9482
 * 00000001401C9494: add     rsp, 8
 * 00000001401C9498: call    loc_1401C948B
 * 00000001401C949D: add     rsp, 8
 * 00000001401C94A1: call    loc_1401C9494
 * 00000001401C94A6: add     rsp, 8
 * 00000001401C94AA: call    loc_1401C949D
 * 00000001401C94AF: add     rsp, 8
 * 00000001401C94B3: call    loc_1401C94A6
 * 00000001401C94B8: add     rsp, 8
 * 00000001401C94BC: call    loc_1401C94AF
 * 00000001401C94C1: add     rsp, 8
 * 00000001401C94C5: call    loc_1401C94B8
 * 00000001401C94CA: add     rsp, 8
 * 00000001401C94CE: call    loc_1401C94C1
 * 00000001401C94D3: add     rsp, 8
 * 00000001401C94D7: call    loc_1401C94CA
 * 00000001401C94DC: add     rsp, 8
 * 00000001401C94E0: call    loc_1401C94D3
 * 00000001401C94E5: add     rsp, 8
 * 00000001401C94E9: call    loc_1401C94DC
 * 00000001401C94EE: add     rsp, 8
 * 00000001401C94F2: call    loc_1401C94E5
 * 00000001401C94F7: add     rsp, 8
 * 00000001401C94FB: call    loc_1401C94EE
 * 00000001401C9500: add     rsp, 8
 * 00000001401C9504: call    loc_1401C94F7
 * 00000001401C9509: add     rsp, 8
 * 00000001401C950D: call    loc_1401C9500
 * 00000001401C9512: add     rsp, 8
 * 00000001401C9516: call    loc_1401C9509
 * 00000001401C951B: add     rsp, 8
 * 00000001401C951F: call    loc_1401C9512
 * 00000001401C9524: add     rsp, 8
 * 00000001401C9528: call    loc_1401C951B
 * 00000001401C952D: add     rsp, 8
 * 00000001401C9531: call    loc_1401C9524
 * 00000001401C9536: add     rsp, 8
 * 00000001401C953A: call    loc_1401C952D
 * 00000001401C953F: add     rsp, 8
 * 00000001401C9543: call    loc_1401C9536
 * 00000001401C9548: add     rsp, 8
 * 00000001401C954C: call    loc_1401C953F
 * 00000001401C9551: add     rsp, 8
 * 00000001401C9555: call    loc_1401C9548
 * 00000001401C955A: add     rsp, 8
 * 00000001401C955E: call    loc_1401C9551
 * 00000001401C9563: add     rsp, 8
 * 00000001401C9567: call    loc_1401C955A
 * 00000001401C956C: add     rsp, 8
 * 00000001401C9570: call    loc_1401C9563
 * 00000001401C9575: add     rsp, 8
 * 00000001401C9579: call    loc_1401C956C
 * 00000001401C957E: add     rsp, 8
 * 00000001401C9582: mov     eax, 0DADAh
 * 00000001401C9587: test    edx, 200h
 * 00000001401C958D: jz      short loc_1401C9594
 * 00000001401C958F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C9594: lfence
 * 00000001401C9597: mov     byte ptr gs:856h, 0
 * 00000001401C95A0: test    byte ptr [r10+3], 80h
 * 00000001401C95A5: jz      short loc_1401C95E9
 * 00000001401C95A7: mov     ecx, 0C0000102h
 * 00000001401C95AC: rdmsr
 * 00000001401C95AE: shl     rdx, 20h
 * 00000001401C95B2: or      rax, rdx
 * 00000001401C95B5: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C95BC: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C95C4: cmp     [r10+0F0h], rax
 * 00000001401C95CB: jz      short loc_1401C95E9
 * 00000001401C95CD: mov     rdx, [r10+1F0h]
 * 00000001401C95D4: bts     dword ptr [r10+74h], 8
 * 00000001401C95DA: dec     word ptr [r10+1E6h]
 * 00000001401C95E2: mov     [rdx+80h], rax
 * 00000001401C95E9: test    byte ptr [r10+3], 3
 * 00000001401C95EE: mov     [rbp+0E8h+var_68], 0
 * 00000001401C95F7: jz      short loc_1401C95FE
 * 00000001401C95F9: call    KiSaveDebugRegisterState
 * 00000001401C95FE: cld
 * 00000001401C95FF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9603: ldmxcsr dword ptr gs:180h
 * 00000001401C960C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C9610: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C9614: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C9618: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C961C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C9620: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C9624: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C962E: jz      short loc_1401C9631
 * 00000001401C9630: sti
 * 00000001401C9631: test    [rbp+0E8h+arg_0], 1
 * 00000001401C9638: jz      short loc_1401C9691
 * 00000001401C963A: mov     r9, gs:188h
 * 00000001401C9643: bt      dword ptr [r9+74h], 8
 * 00000001401C9649: jnb     short loc_1401C9650
 * 00000001401C964B: call    KiUmsTrapEntry
 * 00000001401C9650: call    KiHandleBound
 * 00000001401C9655: cmp     eax, 0
 * 00000001401C9658: jz      short loc_1401C9691
 * 00000001401C965A: cmp     eax, 1
 * 00000001401C965D: jz      short loc_1401C96A5
 * 00000001401C965F: cmp     eax, 2
 * 00000001401C9662: jz      short loc_1401C9673
 * 00000001401C9664: mov     edx, 5
 * 00000001401C9669: mov     ecx, 7Fh
 * 00000001401C966E: call    KiBugCheckDispatch
 * 00000001401C9673: mov     r9, 1Ch
 * 00000001401C967A: mov     ecx, 0C0000409h
 * 00000001401C967F: mov     edx, 1
 * 00000001401C9684: mov     r8, [rbp+0E8h]
 * 00000001401C968B: call    KiFastFailDispatch
 * 00000001401C9690: nop
 * 00000001401C9691: mov     ecx, 0C000008Ch
 * 00000001401C9696: xor     edx, edx
 * 00000001401C9698: mov     r8, [rbp+0E8h]
 * 00000001401C969F: call    KiExceptionDispatch
 * 00000001401C96A4: nop
 * 00000001401C96A5: cli
 * 00000001401C96A6: test    [rbp+0E8h+arg_0], 1
 * 00000001401C96AD: jz      loc_1401C9954
 * 00000001401C96B3: mov     rcx, gs:188h
 * 00000001401C96BC: test    byte ptr [rcx+0C2h], 3
 * 00000001401C96C3: jz      short loc_1401C96E0
 * 00000001401C96C5: mov     ecx, 1
 * 00000001401C96CA: mov     cr8, rcx
 * 00000001401C96CE: sti
 * 00000001401C96CF: call    KiInitiateUserApc
 * 00000001401C96D4: cli
 * 00000001401C96D5: mov     ecx, 0
 * 00000001401C96DA: mov     cr8, rcx
 * 00000001401C96DE: jmp     short loc_1401C96B3
 * 00000001401C96E0: test    byte ptr gs:86Ch, 2
 * 00000001401C96E9: jz      short loc_1401C96F2
 * 00000001401C96EB: xor     ecx, ecx
 * 00000001401C96ED: call    KiUpdateStibpPairing
 * 00000001401C96F2: mov     rcx, gs:188h
 * 00000001401C96FB: test    dword ptr [rcx], 8000000h
 * 00000001401C9701: jz      short loc_1401C9708
 * 00000001401C9703: call    KiRestoreSetContextState
 * 00000001401C9708: mov     rcx, gs:188h
 * 00000001401C9711: test    dword ptr [rcx], 40010000h
 * 00000001401C9717: jz      short loc_1401C973E
 * 00000001401C9719: test    byte ptr [rcx+2], 1
 * 00000001401C971D: jz      short loc_1401C972D
 * 00000001401C971F: call    KiCopyCounters
 * 00000001401C9724: mov     rcx, gs:188h
 * 00000001401C972D: test    byte ptr [rcx+3], 40h
 * 00000001401C9731: jz      short loc_1401C973E
 * 00000001401C9733: lea     rsp, [rbp-80h]
 * 00000001401C9737: mov     cl, 1
 * 00000001401C9739: call    KiUmsExit
 * 00000001401C973E: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9742: cmp     [rbp+0E8h+var_68], 0
 * 00000001401C974A: jz      short loc_1401C9751
 * 00000001401C974C: call    KiRestoreDebugRegisterState
 * 00000001401C9751: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C9755: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9759: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C975D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9761: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C9765: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9769: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C976D: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9771: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C9775: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9779: mov     byte ptr gs:856h, 0
 * 00000001401C9782: movzx   eax, word ptr gs:86Ah
 * 00000001401C978B: cmp     gs:864h, ax
 * 00000001401C9794: jz      short loc_1401C97A8
 * 00000001401C9796: mov     gs:864h, ax
 * 00000001401C979F: mov     ecx, 48h ; 'H'
 * 00000001401C97A4: xor     edx, edx
 * 00000001401C97A6: wrmsr
 * 00000001401C97A8: btr     word ptr gs:860h, 2
 * 00000001401C97B3: jnb     short loc_1401C97C3
 * 00000001401C97B5: mov     eax, 1
 * 00000001401C97BA: xor     edx, edx
 * 00000001401C97BC: mov     ecx, 49h ; 'I'
 * 00000001401C97C1: wrmsr
 * 00000001401C97C3: btr     word ptr gs:860h, 5
 * 00000001401C97CE: jnb     loc_1401C98F9
 * 00000001401C97D4: call    loc_1401C98E7
 * 00000001401C97D9: add     rsp, 8
 * 00000001401C97DD: call    loc_1401C98F0
 * 00000001401C97E2: add     rsp, 8
 * 00000001401C97E6: call    loc_1401C97D9
 * 00000001401C97EB: add     rsp, 8
 * 00000001401C97EF: call    loc_1401C97E2
 * 00000001401C97F4: add     rsp, 8
 * 00000001401C97F8: call    loc_1401C97EB
 * 00000001401C97FD: add     rsp, 8
 * 00000001401C9801: call    loc_1401C97F4
 * 00000001401C9806: add     rsp, 8
 * 00000001401C980A: call    loc_1401C97FD
 * 00000001401C980F: add     rsp, 8
 * 00000001401C9813: call    loc_1401C9806
 * 00000001401C9818: add     rsp, 8
 * 00000001401C981C: call    loc_1401C980F
 * 00000001401C9821: add     rsp, 8
 * 00000001401C9825: call    loc_1401C9818
 * 00000001401C982A: add     rsp, 8
 * 00000001401C982E: call    loc_1401C9821
 * 00000001401C9833: add     rsp, 8
 * 00000001401C9837: call    loc_1401C982A
 * 00000001401C983C: add     rsp, 8
 * 00000001401C9840: call    loc_1401C9833
 * 00000001401C9845: add     rsp, 8
 * 00000001401C9849: call    loc_1401C983C
 * 00000001401C984E: add     rsp, 8
 * 00000001401C9852: call    loc_1401C9845
 * 00000001401C9857: add     rsp, 8
 * 00000001401C985B: call    loc_1401C984E
 * 00000001401C9860: add     rsp, 8
 * 00000001401C9864: call    loc_1401C9857
 * 00000001401C9869: add     rsp, 8
 * 00000001401C986D: call    loc_1401C9860
 * 00000001401C9872: add     rsp, 8
 * 00000001401C9876: call    loc_1401C9869
 * 00000001401C987B: add     rsp, 8
 * 00000001401C987F: call    loc_1401C9872
 * 00000001401C9884: add     rsp, 8
 * 00000001401C9888: call    loc_1401C987B
 * 00000001401C988D: add     rsp, 8
 * 00000001401C9891: call    loc_1401C9884
 * 00000001401C9896: add     rsp, 8
 * 00000001401C989A: call    loc_1401C988D
 * 00000001401C989F: add     rsp, 8
 * 00000001401C98A3: call    loc_1401C9896
 * 00000001401C98A8: add     rsp, 8
 * 00000001401C98AC: call    loc_1401C989F
 * 00000001401C98B1: add     rsp, 8
 * 00000001401C98B5: call    loc_1401C98A8
 * 00000001401C98BA: add     rsp, 8
 * 00000001401C98BE: call    loc_1401C98B1
 * 00000001401C98C3: add     rsp, 8
 * 00000001401C98C7: call    loc_1401C98BA
 * 00000001401C98CC: add     rsp, 8
 * 00000001401C98D0: call    loc_1401C98C3
 * 00000001401C98D5: add     rsp, 8
 * 00000001401C98D9: call    loc_1401C98CC
 * 00000001401C98DE: add     rsp, 8
 * 00000001401C98E2: call    loc_1401C98D5
 * 00000001401C98E7: add     rsp, 8
 * 00000001401C98EB: call    loc_1401C98DE
 * 00000001401C98F0: add     rsp, 8
 * 00000001401C98F4: mov     eax, 0DADAh
 * 00000001401C98F9: test    word ptr gs:860h, 80h
 * 00000001401C9904: jz      short loc_1401C9912
 * 00000001401C9906: xor     eax, eax
 * 00000001401C9908: xor     edx, edx
 * 00000001401C990A: mov     ecx, 1
 * 00000001401C990F: div     rcx
 * 00000001401C9912: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9916: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C991A: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C991E: mov     rsp, rbp
 * 00000001401C9921: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9928: add     rsp, 0E8h
 * 00000001401C992F: test    cs:KiKvaShadow, 1
 * 00000001401C9936: jz      short loc_1401C993D
 * 00000001401C9938: jmp     KiKernelExit
 * 00000001401C993D: test    word ptr gs:860h, 100h
 * 00000001401C9948: jz      short loc_1401C994F
 * 00000001401C994A: verw    [rsp+arg_18]
 * 00000001401C994F: swapgs
 * 00000001401C9952: iretq
 * 00000001401C9954: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9958: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401C995C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401C9960: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401C9964: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401C9968: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401C996C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401C9970: mov     r11, [rbp+0E8h+var_108]
 * 00000001401C9974: mov     r10, [rbp+0E8h+var_110]
 * 00000001401C9978: mov     r9, [rbp+0E8h+var_118]
 * 00000001401C997C: mov     r8, [rbp+0E8h+var_120]
 * 00000001401C9980: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401C9984: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401C9988: mov     rax, [rbp+0E8h+var_138]
 * 00000001401C998C: mov     rsp, rbp
 * 00000001401C998F: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401C9996: add     rsp, 0E8h
 * 00000001401C999D: iretq
 */
