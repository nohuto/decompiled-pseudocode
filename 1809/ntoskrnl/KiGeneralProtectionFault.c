/*
 * XREFs of KiGeneralProtectionFault @ 0x1401CB2C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x14032F780 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1401CB2C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1401CB2C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CB2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CB2C0: push    rbp
 * 00000001401CB2C1: sub     rsp, 158h
 * 00000001401CB2C8: lea     rbp, [rsp+80h]
 * 00000001401CB2D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CB2D4: mov     [rbp+0D8h+var_128], rax
 * 00000001401CB2D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CB2DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CB2E0: mov     [rbp+0D8h+var_110], r8
 * 00000001401CB2E4: mov     [rbp+0D8h+var_108], r9
 * 00000001401CB2E8: mov     [rbp+0D8h+var_100], r10
 * 00000001401CB2EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CB2F0: test    [rbp+0D8h+arg_8], 1
 * 00000001401CB2F7: jnz     short loc_1401CB328
 * 00000001401CB2F9: lfence
 * 00000001401CB2FC: test    word ptr gs:860h, 1
 * 00000001401CB307: jnz     short loc_1401CB311
 * 00000001401CB309: lfence
 * 00000001401CB30C: jmp     loc_1401CB57A
 * 00000001401CB311: movzx   eax, word ptr gs:864h
 * 00000001401CB31A: mov     ecx, 48h ; 'H'
 * 00000001401CB31F: xor     edx, edx
 * 00000001401CB321: wrmsr
 * 00000001401CB323: jmp     loc_1401CB57A
 * 00000001401CB328: test    cs:KiKvaShadow, 1
 * 00000001401CB32F: jnz     short loc_1401CB334
 * 00000001401CB331: swapgs
 * 00000001401CB334: lfence
 * 00000001401CB337: mov     r10, gs:188h
 * 00000001401CB340: mov     rcx, gs:188h
 * 00000001401CB349: mov     rcx, [rcx+220h]
 * 00000001401CB350: mov     rcx, [rcx+830h]
 * 00000001401CB357: mov     gs:858h, rcx
 * 00000001401CB360: mov     cx, gs:850h
 * 00000001401CB369: mov     gs:852h, cx
 * 00000001401CB372: mov     cx, gs:860h
 * 00000001401CB37B: mov     gs:854h, cx
 * 00000001401CB384: movzx   eax, word ptr gs:866h
 * 00000001401CB38D: cmp     gs:864h, ax
 * 00000001401CB396: jz      short loc_1401CB3AA
 * 00000001401CB398: mov     gs:864h, ax
 * 00000001401CB3A1: mov     ecx, 48h ; 'H'
 * 00000001401CB3A6: xor     edx, edx
 * 00000001401CB3A8: wrmsr
 * 00000001401CB3AA: movzx   edx, word ptr gs:860h
 * 00000001401CB3B3: test    edx, 8
 * 00000001401CB3B9: jz      short loc_1401CB3D2
 * 00000001401CB3BB: mov     eax, 1
 * 00000001401CB3C0: xor     edx, edx
 * 00000001401CB3C2: mov     ecx, 49h ; 'I'
 * 00000001401CB3C7: wrmsr
 * 00000001401CB3C9: movzx   edx, word ptr gs:860h
 * 00000001401CB3D2: test    edx, 2
 * 00000001401CB3D8: jz      loc_1401CB503
 * 00000001401CB3DE: call    loc_1401CB4F1
 * 00000001401CB3E3: add     rsp, 8
 * 00000001401CB3E7: call    loc_1401CB4FA
 * 00000001401CB3EC: add     rsp, 8
 * 00000001401CB3F0: call    loc_1401CB3E3
 * 00000001401CB3F5: add     rsp, 8
 * 00000001401CB3F9: call    loc_1401CB3EC
 * 00000001401CB3FE: add     rsp, 8
 * 00000001401CB402: call    loc_1401CB3F5
 * 00000001401CB407: add     rsp, 8
 * 00000001401CB40B: call    loc_1401CB3FE
 * 00000001401CB410: add     rsp, 8
 * 00000001401CB414: call    loc_1401CB407
 * 00000001401CB419: add     rsp, 8
 * 00000001401CB41D: call    loc_1401CB410
 * 00000001401CB422: add     rsp, 8
 * 00000001401CB426: call    loc_1401CB419
 * 00000001401CB42B: add     rsp, 8
 * 00000001401CB42F: call    loc_1401CB422
 * 00000001401CB434: add     rsp, 8
 * 00000001401CB438: call    loc_1401CB42B
 * 00000001401CB43D: add     rsp, 8
 * 00000001401CB441: call    loc_1401CB434
 * 00000001401CB446: add     rsp, 8
 * 00000001401CB44A: call    loc_1401CB43D
 * 00000001401CB44F: add     rsp, 8
 * 00000001401CB453: call    loc_1401CB446
 * 00000001401CB458: add     rsp, 8
 * 00000001401CB45C: call    loc_1401CB44F
 * 00000001401CB461: add     rsp, 8
 * 00000001401CB465: call    loc_1401CB458
 * 00000001401CB46A: add     rsp, 8
 * 00000001401CB46E: call    loc_1401CB461
 * 00000001401CB473: add     rsp, 8
 * 00000001401CB477: call    loc_1401CB46A
 * 00000001401CB47C: add     rsp, 8
 * 00000001401CB480: call    loc_1401CB473
 * 00000001401CB485: add     rsp, 8
 * 00000001401CB489: call    loc_1401CB47C
 * 00000001401CB48E: add     rsp, 8
 * 00000001401CB492: call    loc_1401CB485
 * 00000001401CB497: add     rsp, 8
 * 00000001401CB49B: call    loc_1401CB48E
 * 00000001401CB4A0: add     rsp, 8
 * 00000001401CB4A4: call    loc_1401CB497
 * 00000001401CB4A9: add     rsp, 8
 * 00000001401CB4AD: call    loc_1401CB4A0
 * 00000001401CB4B2: add     rsp, 8
 * 00000001401CB4B6: call    loc_1401CB4A9
 * 00000001401CB4BB: add     rsp, 8
 * 00000001401CB4BF: call    loc_1401CB4B2
 * 00000001401CB4C4: add     rsp, 8
 * 00000001401CB4C8: call    loc_1401CB4BB
 * 00000001401CB4CD: add     rsp, 8
 * 00000001401CB4D1: call    loc_1401CB4C4
 * 00000001401CB4D6: add     rsp, 8
 * 00000001401CB4DA: call    loc_1401CB4CD
 * 00000001401CB4DF: add     rsp, 8
 * 00000001401CB4E3: call    loc_1401CB4D6
 * 00000001401CB4E8: add     rsp, 8
 * 00000001401CB4EC: call    loc_1401CB4DF
 * 00000001401CB4F1: add     rsp, 8
 * 00000001401CB4F5: call    loc_1401CB4E8
 * 00000001401CB4FA: add     rsp, 8
 * 00000001401CB4FE: mov     eax, 0DADAh
 * 00000001401CB503: test    edx, 200h
 * 00000001401CB509: jz      short loc_1401CB510
 * 00000001401CB50B: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CB510: lfence
 * 00000001401CB513: mov     byte ptr gs:856h, 0
 * 00000001401CB51C: test    byte ptr [r10+3], 80h
 * 00000001401CB521: jz      short loc_1401CB565
 * 00000001401CB523: mov     ecx, 0C0000102h
 * 00000001401CB528: rdmsr
 * 00000001401CB52A: shl     rdx, 20h
 * 00000001401CB52E: or      rax, rdx
 * 00000001401CB531: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CB538: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CB540: cmp     [r10+0F0h], rax
 * 00000001401CB547: jz      short loc_1401CB565
 * 00000001401CB549: mov     rdx, [r10+1F0h]
 * 00000001401CB550: bts     dword ptr [r10+74h], 8
 * 00000001401CB556: dec     word ptr [r10+1E6h]
 * 00000001401CB55E: mov     [rdx+80h], rax
 * 00000001401CB565: test    byte ptr [r10+3], 3
 * 00000001401CB56A: mov     [rbp+0D8h+var_58], 0
 * 00000001401CB573: jz      short loc_1401CB57A
 * 00000001401CB575: call    KiSaveDebugRegisterState
 * 00000001401CB57A: cld
 * 00000001401CB57B: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CB57F: ldmxcsr dword ptr gs:180h
 * 00000001401CB588: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CB58C: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CB590: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CB594: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CB598: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CB59C: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CB5A0: mov     eax, [rbp+0E0h]
 * 00000001401CB5A6: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CB5B0: jz      short loc_1401CB5B3
 * 00000001401CB5B2: sti
 * 00000001401CB5B3: mov     ecx, 10000001h
 * 00000001401CB5B8: mov     edx, 2
 * 00000001401CB5BD: mov     r9d, [rbp+0E0h]
 * 00000001401CB5C4: and     r9d, 0FFFFh
 * 00000001401CB5CB: xor     r10, r10
 * 00000001401CB5CE: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CB5D5: call    KiExceptionDispatch
 * 00000001401CB5DA: nop
 * 00000001401CB5DB: retn
 */
