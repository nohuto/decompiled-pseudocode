/*
 * XREFs of KiAlignmentFault @ 0x1401CC180
 * Callers:
 *     KiAlignmentFaultShadow @ 0x14032F900 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1401CC180 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1401CC180
 * Reason: Hex-Rays returned no pseudocode for 0x1401CC180
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CC180: push    rbp
 * 00000001401CC181: sub     rsp, 158h
 * 00000001401CC188: lea     rbp, [rsp+80h]
 * 00000001401CC190: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CC194: mov     [rbp+0D8h+var_128], rax
 * 00000001401CC198: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CC19C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CC1A0: mov     [rbp+0D8h+var_110], r8
 * 00000001401CC1A4: mov     [rbp+0D8h+var_108], r9
 * 00000001401CC1A8: mov     [rbp+0D8h+var_100], r10
 * 00000001401CC1AC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CC1B0: test    [rbp+0D8h+arg_8], 1
 * 00000001401CC1B7: jnz     short loc_1401CC1E8
 * 00000001401CC1B9: lfence
 * 00000001401CC1BC: test    word ptr gs:860h, 1
 * 00000001401CC1C7: jnz     short loc_1401CC1D1
 * 00000001401CC1C9: lfence
 * 00000001401CC1CC: jmp     loc_1401CC43A
 * 00000001401CC1D1: movzx   eax, word ptr gs:864h
 * 00000001401CC1DA: mov     ecx, 48h ; 'H'
 * 00000001401CC1DF: xor     edx, edx
 * 00000001401CC1E1: wrmsr
 * 00000001401CC1E3: jmp     loc_1401CC43A
 * 00000001401CC1E8: test    cs:KiKvaShadow, 1
 * 00000001401CC1EF: jnz     short loc_1401CC1F4
 * 00000001401CC1F1: swapgs
 * 00000001401CC1F4: lfence
 * 00000001401CC1F7: mov     r10, gs:188h
 * 00000001401CC200: mov     rcx, gs:188h
 * 00000001401CC209: mov     rcx, [rcx+220h]
 * 00000001401CC210: mov     rcx, [rcx+830h]
 * 00000001401CC217: mov     gs:858h, rcx
 * 00000001401CC220: mov     cx, gs:850h
 * 00000001401CC229: mov     gs:852h, cx
 * 00000001401CC232: mov     cx, gs:860h
 * 00000001401CC23B: mov     gs:854h, cx
 * 00000001401CC244: movzx   eax, word ptr gs:866h
 * 00000001401CC24D: cmp     gs:864h, ax
 * 00000001401CC256: jz      short loc_1401CC26A
 * 00000001401CC258: mov     gs:864h, ax
 * 00000001401CC261: mov     ecx, 48h ; 'H'
 * 00000001401CC266: xor     edx, edx
 * 00000001401CC268: wrmsr
 * 00000001401CC26A: movzx   edx, word ptr gs:860h
 * 00000001401CC273: test    edx, 8
 * 00000001401CC279: jz      short loc_1401CC292
 * 00000001401CC27B: mov     eax, 1
 * 00000001401CC280: xor     edx, edx
 * 00000001401CC282: mov     ecx, 49h ; 'I'
 * 00000001401CC287: wrmsr
 * 00000001401CC289: movzx   edx, word ptr gs:860h
 * 00000001401CC292: test    edx, 2
 * 00000001401CC298: jz      loc_1401CC3C3
 * 00000001401CC29E: call    loc_1401CC3B1
 * 00000001401CC2A3: add     rsp, 8
 * 00000001401CC2A7: call    loc_1401CC3BA
 * 00000001401CC2AC: add     rsp, 8
 * 00000001401CC2B0: call    loc_1401CC2A3
 * 00000001401CC2B5: add     rsp, 8
 * 00000001401CC2B9: call    loc_1401CC2AC
 * 00000001401CC2BE: add     rsp, 8
 * 00000001401CC2C2: call    loc_1401CC2B5
 * 00000001401CC2C7: add     rsp, 8
 * 00000001401CC2CB: call    loc_1401CC2BE
 * 00000001401CC2D0: add     rsp, 8
 * 00000001401CC2D4: call    loc_1401CC2C7
 * 00000001401CC2D9: add     rsp, 8
 * 00000001401CC2DD: call    loc_1401CC2D0
 * 00000001401CC2E2: add     rsp, 8
 * 00000001401CC2E6: call    loc_1401CC2D9
 * 00000001401CC2EB: add     rsp, 8
 * 00000001401CC2EF: call    loc_1401CC2E2
 * 00000001401CC2F4: add     rsp, 8
 * 00000001401CC2F8: call    loc_1401CC2EB
 * 00000001401CC2FD: add     rsp, 8
 * 00000001401CC301: call    loc_1401CC2F4
 * 00000001401CC306: add     rsp, 8
 * 00000001401CC30A: call    loc_1401CC2FD
 * 00000001401CC30F: add     rsp, 8
 * 00000001401CC313: call    loc_1401CC306
 * 00000001401CC318: add     rsp, 8
 * 00000001401CC31C: call    loc_1401CC30F
 * 00000001401CC321: add     rsp, 8
 * 00000001401CC325: call    loc_1401CC318
 * 00000001401CC32A: add     rsp, 8
 * 00000001401CC32E: call    loc_1401CC321
 * 00000001401CC333: add     rsp, 8
 * 00000001401CC337: call    loc_1401CC32A
 * 00000001401CC33C: add     rsp, 8
 * 00000001401CC340: call    loc_1401CC333
 * 00000001401CC345: add     rsp, 8
 * 00000001401CC349: call    loc_1401CC33C
 * 00000001401CC34E: add     rsp, 8
 * 00000001401CC352: call    loc_1401CC345
 * 00000001401CC357: add     rsp, 8
 * 00000001401CC35B: call    loc_1401CC34E
 * 00000001401CC360: add     rsp, 8
 * 00000001401CC364: call    loc_1401CC357
 * 00000001401CC369: add     rsp, 8
 * 00000001401CC36D: call    loc_1401CC360
 * 00000001401CC372: add     rsp, 8
 * 00000001401CC376: call    loc_1401CC369
 * 00000001401CC37B: add     rsp, 8
 * 00000001401CC37F: call    loc_1401CC372
 * 00000001401CC384: add     rsp, 8
 * 00000001401CC388: call    loc_1401CC37B
 * 00000001401CC38D: add     rsp, 8
 * 00000001401CC391: call    loc_1401CC384
 * 00000001401CC396: add     rsp, 8
 * 00000001401CC39A: call    loc_1401CC38D
 * 00000001401CC39F: add     rsp, 8
 * 00000001401CC3A3: call    loc_1401CC396
 * 00000001401CC3A8: add     rsp, 8
 * 00000001401CC3AC: call    loc_1401CC39F
 * 00000001401CC3B1: add     rsp, 8
 * 00000001401CC3B5: call    loc_1401CC3A8
 * 00000001401CC3BA: add     rsp, 8
 * 00000001401CC3BE: mov     eax, 0DADAh
 * 00000001401CC3C3: test    edx, 200h
 * 00000001401CC3C9: jz      short loc_1401CC3D0
 * 00000001401CC3CB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CC3D0: lfence
 * 00000001401CC3D3: mov     byte ptr gs:856h, 0
 * 00000001401CC3DC: test    byte ptr [r10+3], 80h
 * 00000001401CC3E1: jz      short loc_1401CC425
 * 00000001401CC3E3: mov     ecx, 0C0000102h
 * 00000001401CC3E8: rdmsr
 * 00000001401CC3EA: shl     rdx, 20h
 * 00000001401CC3EE: or      rax, rdx
 * 00000001401CC3F1: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CC3F8: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CC400: cmp     [r10+0F0h], rax
 * 00000001401CC407: jz      short loc_1401CC425
 * 00000001401CC409: mov     rdx, [r10+1F0h]
 * 00000001401CC410: bts     dword ptr [r10+74h], 8
 * 00000001401CC416: dec     word ptr [r10+1E6h]
 * 00000001401CC41E: mov     [rdx+80h], rax
 * 00000001401CC425: test    byte ptr [r10+3], 3
 * 00000001401CC42A: mov     [rbp+0D8h+var_58], 0
 * 00000001401CC433: jz      short loc_1401CC43A
 * 00000001401CC435: call    KiSaveDebugRegisterState
 * 00000001401CC43A: cld
 * 00000001401CC43B: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CC43F: ldmxcsr dword ptr gs:180h
 * 00000001401CC448: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CC44C: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CC450: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CC454: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CC458: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CC45C: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CC460: mov     eax, [rbp+0E0h]
 * 00000001401CC466: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CC470: jz      short loc_1401CC473
 * 00000001401CC472: sti
 * 00000001401CC473: mov     ecx, 80000002h
 * 00000001401CC478: xor     edx, edx
 * 00000001401CC47A: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CC481: call    KiExceptionDispatch
 * 00000001401CC486: nop
 * 00000001401CC487: retn
 */
