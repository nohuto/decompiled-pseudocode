/*
 * XREFs of KiRaiseAssertion @ 0x1401CE380
 * Callers:
 *     KiRaiseAssertionShadow @ 0x14032ED80 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1401CE380 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1401CE380
 * Reason: Hex-Rays returned no pseudocode for 0x1401CE380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CE380: sub     qword ptr [rsp+0], 2
 * 00000001401CE385: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401CE38B: jnz     short loc_1401CE392
 * 00000001401CE38D: and     dword ptr [rsp+4], 0
 * 00000001401CE392: sub     rsp, 8
 * 00000001401CE396: push    rbp
 * 00000001401CE397: sub     rsp, 158h
 * 00000001401CE39E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401CE3A6: mov     byte ptr [rbp-55h], 1
 * 00000001401CE3AA: mov     [rbp-50h], rax
 * 00000001401CE3AE: mov     [rbp-48h], rcx
 * 00000001401CE3B2: mov     [rbp-40h], rdx
 * 00000001401CE3B6: mov     [rbp-38h], r8
 * 00000001401CE3BA: mov     [rbp-30h], r9
 * 00000001401CE3BE: mov     [rbp-28h], r10
 * 00000001401CE3C2: mov     [rbp-20h], r11
 * 00000001401CE3C6: test    byte ptr [rbp+0F0h], 1
 * 00000001401CE3CD: jnz     short loc_1401CE3FE
 * 00000001401CE3CF: lfence
 * 00000001401CE3D2: test    word ptr gs:860h, 1
 * 00000001401CE3DD: jnz     short loc_1401CE3E7
 * 00000001401CE3DF: lfence
 * 00000001401CE3E2: jmp     loc_1401CE650
 * 00000001401CE3E7: movzx   eax, word ptr gs:864h
 * 00000001401CE3F0: mov     ecx, 48h ; 'H'
 * 00000001401CE3F5: xor     edx, edx
 * 00000001401CE3F7: wrmsr
 * 00000001401CE3F9: jmp     loc_1401CE650
 * 00000001401CE3FE: test    cs:KiKvaShadow, 1
 * 00000001401CE405: jnz     short loc_1401CE40A
 * 00000001401CE407: swapgs
 * 00000001401CE40A: lfence
 * 00000001401CE40D: mov     r10, gs:188h
 * 00000001401CE416: mov     rcx, gs:188h
 * 00000001401CE41F: mov     rcx, [rcx+220h]
 * 00000001401CE426: mov     rcx, [rcx+830h]
 * 00000001401CE42D: mov     gs:858h, rcx
 * 00000001401CE436: mov     cx, gs:850h
 * 00000001401CE43F: mov     gs:852h, cx
 * 00000001401CE448: mov     cx, gs:860h
 * 00000001401CE451: mov     gs:854h, cx
 * 00000001401CE45A: movzx   eax, word ptr gs:866h
 * 00000001401CE463: cmp     gs:864h, ax
 * 00000001401CE46C: jz      short loc_1401CE480
 * 00000001401CE46E: mov     gs:864h, ax
 * 00000001401CE477: mov     ecx, 48h ; 'H'
 * 00000001401CE47C: xor     edx, edx
 * 00000001401CE47E: wrmsr
 * 00000001401CE480: movzx   edx, word ptr gs:860h
 * 00000001401CE489: test    edx, 8
 * 00000001401CE48F: jz      short loc_1401CE4A8
 * 00000001401CE491: mov     eax, 1
 * 00000001401CE496: xor     edx, edx
 * 00000001401CE498: mov     ecx, 49h ; 'I'
 * 00000001401CE49D: wrmsr
 * 00000001401CE49F: movzx   edx, word ptr gs:860h
 * 00000001401CE4A8: test    edx, 2
 * 00000001401CE4AE: jz      loc_1401CE5D9
 * 00000001401CE4B4: call    loc_1401CE5C7
 * 00000001401CE4B9: add     rsp, 8
 * 00000001401CE4BD: call    loc_1401CE5D0
 * 00000001401CE4C2: add     rsp, 8
 * 00000001401CE4C6: call    loc_1401CE4B9
 * 00000001401CE4CB: add     rsp, 8
 * 00000001401CE4CF: call    loc_1401CE4C2
 * 00000001401CE4D4: add     rsp, 8
 * 00000001401CE4D8: call    loc_1401CE4CB
 * 00000001401CE4DD: add     rsp, 8
 * 00000001401CE4E1: call    loc_1401CE4D4
 * 00000001401CE4E6: add     rsp, 8
 * 00000001401CE4EA: call    loc_1401CE4DD
 * 00000001401CE4EF: add     rsp, 8
 * 00000001401CE4F3: call    loc_1401CE4E6
 * 00000001401CE4F8: add     rsp, 8
 * 00000001401CE4FC: call    loc_1401CE4EF
 * 00000001401CE501: add     rsp, 8
 * 00000001401CE505: call    loc_1401CE4F8
 * 00000001401CE50A: add     rsp, 8
 * 00000001401CE50E: call    loc_1401CE501
 * 00000001401CE513: add     rsp, 8
 * 00000001401CE517: call    loc_1401CE50A
 * 00000001401CE51C: add     rsp, 8
 * 00000001401CE520: call    loc_1401CE513
 * 00000001401CE525: add     rsp, 8
 * 00000001401CE529: call    loc_1401CE51C
 * 00000001401CE52E: add     rsp, 8
 * 00000001401CE532: call    loc_1401CE525
 * 00000001401CE537: add     rsp, 8
 * 00000001401CE53B: call    loc_1401CE52E
 * 00000001401CE540: add     rsp, 8
 * 00000001401CE544: call    loc_1401CE537
 * 00000001401CE549: add     rsp, 8
 * 00000001401CE54D: call    loc_1401CE540
 * 00000001401CE552: add     rsp, 8
 * 00000001401CE556: call    loc_1401CE549
 * 00000001401CE55B: add     rsp, 8
 * 00000001401CE55F: call    loc_1401CE552
 * 00000001401CE564: add     rsp, 8
 * 00000001401CE568: call    loc_1401CE55B
 * 00000001401CE56D: add     rsp, 8
 * 00000001401CE571: call    loc_1401CE564
 * 00000001401CE576: add     rsp, 8
 * 00000001401CE57A: call    loc_1401CE56D
 * 00000001401CE57F: add     rsp, 8
 * 00000001401CE583: call    loc_1401CE576
 * 00000001401CE588: add     rsp, 8
 * 00000001401CE58C: call    loc_1401CE57F
 * 00000001401CE591: add     rsp, 8
 * 00000001401CE595: call    loc_1401CE588
 * 00000001401CE59A: add     rsp, 8
 * 00000001401CE59E: call    loc_1401CE591
 * 00000001401CE5A3: add     rsp, 8
 * 00000001401CE5A7: call    loc_1401CE59A
 * 00000001401CE5AC: add     rsp, 8
 * 00000001401CE5B0: call    loc_1401CE5A3
 * 00000001401CE5B5: add     rsp, 8
 * 00000001401CE5B9: call    loc_1401CE5AC
 * 00000001401CE5BE: add     rsp, 8
 * 00000001401CE5C2: call    loc_1401CE5B5
 * 00000001401CE5C7: add     rsp, 8
 * 00000001401CE5CB: call    loc_1401CE5BE
 * 00000001401CE5D0: add     rsp, 8
 * 00000001401CE5D4: mov     eax, 0DADAh
 * 00000001401CE5D9: test    edx, 200h
 * 00000001401CE5DF: jz      short loc_1401CE5E6
 * 00000001401CE5E1: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CE5E6: lfence
 * 00000001401CE5E9: mov     byte ptr gs:856h, 0
 * 00000001401CE5F2: test    byte ptr [r10+3], 80h
 * 00000001401CE5F7: jz      short loc_1401CE63B
 * 00000001401CE5F9: mov     ecx, 0C0000102h
 * 00000001401CE5FE: rdmsr
 * 00000001401CE600: shl     rdx, 20h
 * 00000001401CE604: or      rax, rdx
 * 00000001401CE607: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CE60E: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CE616: cmp     [r10+0F0h], rax
 * 00000001401CE61D: jz      short loc_1401CE63B
 * 00000001401CE61F: mov     rdx, [r10+1F0h]
 * 00000001401CE626: bts     dword ptr [r10+74h], 8
 * 00000001401CE62C: dec     word ptr [r10+1E6h]
 * 00000001401CE634: mov     [rdx+80h], rax
 * 00000001401CE63B: test    byte ptr [r10+3], 3
 * 00000001401CE640: mov     word ptr [rbp+80h], 0
 * 00000001401CE649: jz      short loc_1401CE650
 * 00000001401CE64B: call    KiSaveDebugRegisterState
 * 00000001401CE650: cld
 * 00000001401CE651: stmxcsr dword ptr [rbp-54h]
 * 00000001401CE655: ldmxcsr dword ptr gs:180h
 * 00000001401CE65E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CE662: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CE666: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CE66A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CE66E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CE672: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CE676: test    dword ptr [rbp+0F8h], 200h
 * 00000001401CE680: jz      short loc_1401CE683
 * 00000001401CE682: sti
 * 00000001401CE683: mov     ecx, 0C0000420h
 * 00000001401CE688: xor     edx, edx
 * 00000001401CE68A: mov     r8, [rbp+0E8h]
 * 00000001401CE691: call    KiExceptionDispatch
 * 00000001401CE696: nop
 * 00000001401CE697: retn
 */
