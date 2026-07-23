/*
 * XREFs of KiDebugServiceTrap @ 0x1401CE7C0
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x14032FE00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1401CE7C0 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1401CE7C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CE7C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CE7C0: inc     qword ptr [rsp+0]
 * 00000001401CE7C4: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401CE7CA: jnz     short loc_1401CE7D1
 * 00000001401CE7CC: and     dword ptr [rsp+4], 0
 * 00000001401CE7D1: sub     rsp, 8
 * 00000001401CE7D5: push    rbp
 * 00000001401CE7D6: sub     rsp, 158h
 * 00000001401CE7DD: lea     rbp, [rsp+168h+var_E8]
 * 00000001401CE7E5: mov     byte ptr [rbp-55h], 1
 * 00000001401CE7E9: mov     [rbp-50h], rax
 * 00000001401CE7ED: mov     [rbp-48h], rcx
 * 00000001401CE7F1: mov     [rbp-40h], rdx
 * 00000001401CE7F5: mov     [rbp-38h], r8
 * 00000001401CE7F9: mov     [rbp-30h], r9
 * 00000001401CE7FD: mov     [rbp-28h], r10
 * 00000001401CE801: mov     [rbp-20h], r11
 * 00000001401CE805: test    byte ptr [rbp+0F0h], 1
 * 00000001401CE80C: jnz     short loc_1401CE83D
 * 00000001401CE80E: lfence
 * 00000001401CE811: test    word ptr gs:860h, 1
 * 00000001401CE81C: jnz     short loc_1401CE826
 * 00000001401CE81E: lfence
 * 00000001401CE821: jmp     loc_1401CEA8F
 * 00000001401CE826: movzx   eax, word ptr gs:864h
 * 00000001401CE82F: mov     ecx, 48h ; 'H'
 * 00000001401CE834: xor     edx, edx
 * 00000001401CE836: wrmsr
 * 00000001401CE838: jmp     loc_1401CEA8F
 * 00000001401CE83D: test    cs:KiKvaShadow, 1
 * 00000001401CE844: jnz     short loc_1401CE849
 * 00000001401CE846: swapgs
 * 00000001401CE849: lfence
 * 00000001401CE84C: mov     r10, gs:188h
 * 00000001401CE855: mov     rcx, gs:188h
 * 00000001401CE85E: mov     rcx, [rcx+220h]
 * 00000001401CE865: mov     rcx, [rcx+830h]
 * 00000001401CE86C: mov     gs:858h, rcx
 * 00000001401CE875: mov     cx, gs:850h
 * 00000001401CE87E: mov     gs:852h, cx
 * 00000001401CE887: mov     cx, gs:860h
 * 00000001401CE890: mov     gs:854h, cx
 * 00000001401CE899: movzx   eax, word ptr gs:866h
 * 00000001401CE8A2: cmp     gs:864h, ax
 * 00000001401CE8AB: jz      short loc_1401CE8BF
 * 00000001401CE8AD: mov     gs:864h, ax
 * 00000001401CE8B6: mov     ecx, 48h ; 'H'
 * 00000001401CE8BB: xor     edx, edx
 * 00000001401CE8BD: wrmsr
 * 00000001401CE8BF: movzx   edx, word ptr gs:860h
 * 00000001401CE8C8: test    edx, 8
 * 00000001401CE8CE: jz      short loc_1401CE8E7
 * 00000001401CE8D0: mov     eax, 1
 * 00000001401CE8D5: xor     edx, edx
 * 00000001401CE8D7: mov     ecx, 49h ; 'I'
 * 00000001401CE8DC: wrmsr
 * 00000001401CE8DE: movzx   edx, word ptr gs:860h
 * 00000001401CE8E7: test    edx, 2
 * 00000001401CE8ED: jz      loc_1401CEA18
 * 00000001401CE8F3: call    loc_1401CEA06
 * 00000001401CE8F8: add     rsp, 8
 * 00000001401CE8FC: call    loc_1401CEA0F
 * 00000001401CE901: add     rsp, 8
 * 00000001401CE905: call    loc_1401CE8F8
 * 00000001401CE90A: add     rsp, 8
 * 00000001401CE90E: call    loc_1401CE901
 * 00000001401CE913: add     rsp, 8
 * 00000001401CE917: call    loc_1401CE90A
 * 00000001401CE91C: add     rsp, 8
 * 00000001401CE920: call    loc_1401CE913
 * 00000001401CE925: add     rsp, 8
 * 00000001401CE929: call    loc_1401CE91C
 * 00000001401CE92E: add     rsp, 8
 * 00000001401CE932: call    loc_1401CE925
 * 00000001401CE937: add     rsp, 8
 * 00000001401CE93B: call    loc_1401CE92E
 * 00000001401CE940: add     rsp, 8
 * 00000001401CE944: call    loc_1401CE937
 * 00000001401CE949: add     rsp, 8
 * 00000001401CE94D: call    loc_1401CE940
 * 00000001401CE952: add     rsp, 8
 * 00000001401CE956: call    loc_1401CE949
 * 00000001401CE95B: add     rsp, 8
 * 00000001401CE95F: call    loc_1401CE952
 * 00000001401CE964: add     rsp, 8
 * 00000001401CE968: call    loc_1401CE95B
 * 00000001401CE96D: add     rsp, 8
 * 00000001401CE971: call    loc_1401CE964
 * 00000001401CE976: add     rsp, 8
 * 00000001401CE97A: call    loc_1401CE96D
 * 00000001401CE97F: add     rsp, 8
 * 00000001401CE983: call    loc_1401CE976
 * 00000001401CE988: add     rsp, 8
 * 00000001401CE98C: call    loc_1401CE97F
 * 00000001401CE991: add     rsp, 8
 * 00000001401CE995: call    loc_1401CE988
 * 00000001401CE99A: add     rsp, 8
 * 00000001401CE99E: call    loc_1401CE991
 * 00000001401CE9A3: add     rsp, 8
 * 00000001401CE9A7: call    loc_1401CE99A
 * 00000001401CE9AC: add     rsp, 8
 * 00000001401CE9B0: call    loc_1401CE9A3
 * 00000001401CE9B5: add     rsp, 8
 * 00000001401CE9B9: call    loc_1401CE9AC
 * 00000001401CE9BE: add     rsp, 8
 * 00000001401CE9C2: call    loc_1401CE9B5
 * 00000001401CE9C7: add     rsp, 8
 * 00000001401CE9CB: call    loc_1401CE9BE
 * 00000001401CE9D0: add     rsp, 8
 * 00000001401CE9D4: call    loc_1401CE9C7
 * 00000001401CE9D9: add     rsp, 8
 * 00000001401CE9DD: call    loc_1401CE9D0
 * 00000001401CE9E2: add     rsp, 8
 * 00000001401CE9E6: call    loc_1401CE9D9
 * 00000001401CE9EB: add     rsp, 8
 * 00000001401CE9EF: call    loc_1401CE9E2
 * 00000001401CE9F4: add     rsp, 8
 * 00000001401CE9F8: call    loc_1401CE9EB
 * 00000001401CE9FD: add     rsp, 8
 * 00000001401CEA01: call    loc_1401CE9F4
 * 00000001401CEA06: add     rsp, 8
 * 00000001401CEA0A: call    loc_1401CE9FD
 * 00000001401CEA0F: add     rsp, 8
 * 00000001401CEA13: mov     eax, 0DADAh
 * 00000001401CEA18: test    edx, 200h
 * 00000001401CEA1E: jz      short loc_1401CEA25
 * 00000001401CEA20: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CEA25: lfence
 * 00000001401CEA28: mov     byte ptr gs:856h, 0
 * 00000001401CEA31: test    byte ptr [r10+3], 80h
 * 00000001401CEA36: jz      short loc_1401CEA7A
 * 00000001401CEA38: mov     ecx, 0C0000102h
 * 00000001401CEA3D: rdmsr
 * 00000001401CEA3F: shl     rdx, 20h
 * 00000001401CEA43: or      rax, rdx
 * 00000001401CEA46: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CEA4D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CEA55: cmp     [r10+0F0h], rax
 * 00000001401CEA5C: jz      short loc_1401CEA7A
 * 00000001401CEA5E: mov     rdx, [r10+1F0h]
 * 00000001401CEA65: bts     dword ptr [r10+74h], 8
 * 00000001401CEA6B: dec     word ptr [r10+1E6h]
 * 00000001401CEA73: mov     [rdx+80h], rax
 * 00000001401CEA7A: test    byte ptr [r10+3], 3
 * 00000001401CEA7F: mov     word ptr [rbp+80h], 0
 * 00000001401CEA88: jz      short loc_1401CEA8F
 * 00000001401CEA8A: call    KiSaveDebugRegisterState
 * 00000001401CEA8F: cld
 * 00000001401CEA90: stmxcsr dword ptr [rbp-54h]
 * 00000001401CEA94: ldmxcsr dword ptr gs:180h
 * 00000001401CEA9D: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CEAA1: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CEAA5: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CEAA9: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CEAAD: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CEAB1: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CEAB5: test    dword ptr [rbp+0F8h], 200h
 * 00000001401CEABF: jz      short loc_1401CEAC2
 * 00000001401CEAC1: sti
 * 00000001401CEAC2: mov     ecx, 80000003h
 * 00000001401CEAC7: mov     edx, 1
 * 00000001401CEACC: mov     r9, [rbp-50h]
 * 00000001401CEAD0: mov     r8, [rbp+0E8h]
 * 00000001401CEAD7: call    KiExceptionDispatch
 * 00000001401CEADC: nop
 * 00000001401CEADD: retn
 */
