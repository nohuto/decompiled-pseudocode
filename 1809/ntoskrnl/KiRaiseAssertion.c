/*
 * XREFs of KiRaiseAssertion @ 0x1401CE480
 * Callers:
 *     KiRaiseAssertionShadow @ 0x14032FD80 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1401CE480 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1401CE480
 * Reason: Hex-Rays returned no pseudocode for 0x1401CE480
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CE480: sub     qword ptr [rsp+0], 2
 * 00000001401CE485: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401CE48B: jnz     short loc_1401CE492
 * 00000001401CE48D: and     dword ptr [rsp+4], 0
 * 00000001401CE492: sub     rsp, 8
 * 00000001401CE496: push    rbp
 * 00000001401CE497: sub     rsp, 158h
 * 00000001401CE49E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401CE4A6: mov     byte ptr [rbp-55h], 1
 * 00000001401CE4AA: mov     [rbp-50h], rax
 * 00000001401CE4AE: mov     [rbp-48h], rcx
 * 00000001401CE4B2: mov     [rbp-40h], rdx
 * 00000001401CE4B6: mov     [rbp-38h], r8
 * 00000001401CE4BA: mov     [rbp-30h], r9
 * 00000001401CE4BE: mov     [rbp-28h], r10
 * 00000001401CE4C2: mov     [rbp-20h], r11
 * 00000001401CE4C6: test    byte ptr [rbp+0F0h], 1
 * 00000001401CE4CD: jnz     short loc_1401CE4FE
 * 00000001401CE4CF: lfence
 * 00000001401CE4D2: test    word ptr gs:860h, 1
 * 00000001401CE4DD: jnz     short loc_1401CE4E7
 * 00000001401CE4DF: lfence
 * 00000001401CE4E2: jmp     loc_1401CE750
 * 00000001401CE4E7: movzx   eax, word ptr gs:864h
 * 00000001401CE4F0: mov     ecx, 48h ; 'H'
 * 00000001401CE4F5: xor     edx, edx
 * 00000001401CE4F7: wrmsr
 * 00000001401CE4F9: jmp     loc_1401CE750
 * 00000001401CE4FE: test    cs:KiKvaShadow, 1
 * 00000001401CE505: jnz     short loc_1401CE50A
 * 00000001401CE507: swapgs
 * 00000001401CE50A: lfence
 * 00000001401CE50D: mov     r10, gs:188h
 * 00000001401CE516: mov     rcx, gs:188h
 * 00000001401CE51F: mov     rcx, [rcx+220h]
 * 00000001401CE526: mov     rcx, [rcx+830h]
 * 00000001401CE52D: mov     gs:858h, rcx
 * 00000001401CE536: mov     cx, gs:850h
 * 00000001401CE53F: mov     gs:852h, cx
 * 00000001401CE548: mov     cx, gs:860h
 * 00000001401CE551: mov     gs:854h, cx
 * 00000001401CE55A: movzx   eax, word ptr gs:866h
 * 00000001401CE563: cmp     gs:864h, ax
 * 00000001401CE56C: jz      short loc_1401CE580
 * 00000001401CE56E: mov     gs:864h, ax
 * 00000001401CE577: mov     ecx, 48h ; 'H'
 * 00000001401CE57C: xor     edx, edx
 * 00000001401CE57E: wrmsr
 * 00000001401CE580: movzx   edx, word ptr gs:860h
 * 00000001401CE589: test    edx, 8
 * 00000001401CE58F: jz      short loc_1401CE5A8
 * 00000001401CE591: mov     eax, 1
 * 00000001401CE596: xor     edx, edx
 * 00000001401CE598: mov     ecx, 49h ; 'I'
 * 00000001401CE59D: wrmsr
 * 00000001401CE59F: movzx   edx, word ptr gs:860h
 * 00000001401CE5A8: test    edx, 2
 * 00000001401CE5AE: jz      loc_1401CE6D9
 * 00000001401CE5B4: call    loc_1401CE6C7
 * 00000001401CE5B9: add     rsp, 8
 * 00000001401CE5BD: call    loc_1401CE6D0
 * 00000001401CE5C2: add     rsp, 8
 * 00000001401CE5C6: call    loc_1401CE5B9
 * 00000001401CE5CB: add     rsp, 8
 * 00000001401CE5CF: call    loc_1401CE5C2
 * 00000001401CE5D4: add     rsp, 8
 * 00000001401CE5D8: call    loc_1401CE5CB
 * 00000001401CE5DD: add     rsp, 8
 * 00000001401CE5E1: call    loc_1401CE5D4
 * 00000001401CE5E6: add     rsp, 8
 * 00000001401CE5EA: call    loc_1401CE5DD
 * 00000001401CE5EF: add     rsp, 8
 * 00000001401CE5F3: call    loc_1401CE5E6
 * 00000001401CE5F8: add     rsp, 8
 * 00000001401CE5FC: call    loc_1401CE5EF
 * 00000001401CE601: add     rsp, 8
 * 00000001401CE605: call    loc_1401CE5F8
 * 00000001401CE60A: add     rsp, 8
 * 00000001401CE60E: call    loc_1401CE601
 * 00000001401CE613: add     rsp, 8
 * 00000001401CE617: call    loc_1401CE60A
 * 00000001401CE61C: add     rsp, 8
 * 00000001401CE620: call    loc_1401CE613
 * 00000001401CE625: add     rsp, 8
 * 00000001401CE629: call    loc_1401CE61C
 * 00000001401CE62E: add     rsp, 8
 * 00000001401CE632: call    loc_1401CE625
 * 00000001401CE637: add     rsp, 8
 * 00000001401CE63B: call    loc_1401CE62E
 * 00000001401CE640: add     rsp, 8
 * 00000001401CE644: call    loc_1401CE637
 * 00000001401CE649: add     rsp, 8
 * 00000001401CE64D: call    loc_1401CE640
 * 00000001401CE652: add     rsp, 8
 * 00000001401CE656: call    loc_1401CE649
 * 00000001401CE65B: add     rsp, 8
 * 00000001401CE65F: call    loc_1401CE652
 * 00000001401CE664: add     rsp, 8
 * 00000001401CE668: call    loc_1401CE65B
 * 00000001401CE66D: add     rsp, 8
 * 00000001401CE671: call    loc_1401CE664
 * 00000001401CE676: add     rsp, 8
 * 00000001401CE67A: call    loc_1401CE66D
 * 00000001401CE67F: add     rsp, 8
 * 00000001401CE683: call    loc_1401CE676
 * 00000001401CE688: add     rsp, 8
 * 00000001401CE68C: call    loc_1401CE67F
 * 00000001401CE691: add     rsp, 8
 * 00000001401CE695: call    loc_1401CE688
 * 00000001401CE69A: add     rsp, 8
 * 00000001401CE69E: call    loc_1401CE691
 * 00000001401CE6A3: add     rsp, 8
 * 00000001401CE6A7: call    loc_1401CE69A
 * 00000001401CE6AC: add     rsp, 8
 * 00000001401CE6B0: call    loc_1401CE6A3
 * 00000001401CE6B5: add     rsp, 8
 * 00000001401CE6B9: call    loc_1401CE6AC
 * 00000001401CE6BE: add     rsp, 8
 * 00000001401CE6C2: call    loc_1401CE6B5
 * 00000001401CE6C7: add     rsp, 8
 * 00000001401CE6CB: call    loc_1401CE6BE
 * 00000001401CE6D0: add     rsp, 8
 * 00000001401CE6D4: mov     eax, 0DADAh
 * 00000001401CE6D9: test    edx, 200h
 * 00000001401CE6DF: jz      short loc_1401CE6E6
 * 00000001401CE6E1: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CE6E6: lfence
 * 00000001401CE6E9: mov     byte ptr gs:856h, 0
 * 00000001401CE6F2: test    byte ptr [r10+3], 80h
 * 00000001401CE6F7: jz      short loc_1401CE73B
 * 00000001401CE6F9: mov     ecx, 0C0000102h
 * 00000001401CE6FE: rdmsr
 * 00000001401CE700: shl     rdx, 20h
 * 00000001401CE704: or      rax, rdx
 * 00000001401CE707: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CE70E: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CE716: cmp     [r10+0F0h], rax
 * 00000001401CE71D: jz      short loc_1401CE73B
 * 00000001401CE71F: mov     rdx, [r10+1F0h]
 * 00000001401CE726: bts     dword ptr [r10+74h], 8
 * 00000001401CE72C: dec     word ptr [r10+1E6h]
 * 00000001401CE734: mov     [rdx+80h], rax
 * 00000001401CE73B: test    byte ptr [r10+3], 3
 * 00000001401CE740: mov     word ptr [rbp+80h], 0
 * 00000001401CE749: jz      short loc_1401CE750
 * 00000001401CE74B: call    KiSaveDebugRegisterState
 * 00000001401CE750: cld
 * 00000001401CE751: stmxcsr dword ptr [rbp-54h]
 * 00000001401CE755: ldmxcsr dword ptr gs:180h
 * 00000001401CE75E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CE762: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CE766: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CE76A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CE76E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CE772: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CE776: test    dword ptr [rbp+0F8h], 200h
 * 00000001401CE780: jz      short loc_1401CE783
 * 00000001401CE782: sti
 * 00000001401CE783: mov     ecx, 0C0000420h
 * 00000001401CE788: xor     edx, edx
 * 00000001401CE78A: mov     r8, [rbp+0E8h]
 * 00000001401CE791: call    KiExceptionDispatch
 * 00000001401CE796: nop
 * 00000001401CE797: retn
 */
