/*
 * XREFs of KiSystemService @ 0x1401CEA00
 * Callers:
 *     KiSystemServiceShadow @ 0x14032EE80 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x1401CEA00 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x1401CEA00
 * Reason: Hex-Rays returned no pseudocode for 0x1401CEA00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CEA00: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401CEA06: jz      KiSystemService32User
 * 00000001401CEA0C: test    cs:KiKvaShadow, 1
 * 00000001401CEA13: jnz     short loc_1401CEA18
 * 00000001401CEA15: swapgs
 * 00000001401CEA18: lfence
 * 00000001401CEA1B: mov     rcx, r10
 * 00000001401CEA1E: sub     rsp, 8
 * 00000001401CEA22: push    rbp
 * 00000001401CEA23: sub     rsp, 158h
 * 00000001401CEA2A: lea     rbp, [rsp+168h+var_E8]
 * 00000001401CEA32: mov     [rbp+0C0h], rbx
 * 00000001401CEA39: mov     [rbp+0C8h], rdi
 * 00000001401CEA40: mov     [rbp+0D0h], rsi
 * 00000001401CEA47: mov     [rbp-50h], rax
 * 00000001401CEA4B: mov     [rbp-48h], rcx
 * 00000001401CEA4F: mov     [rbp-40h], rdx
 * 00000001401CEA53: mov     rcx, gs:188h
 * 00000001401CEA5C: mov     rcx, [rcx+220h]
 * 00000001401CEA63: mov     rcx, [rcx+830h]
 * 00000001401CEA6A: mov     gs:858h, rcx
 * 00000001401CEA73: mov     cx, gs:850h
 * 00000001401CEA7C: mov     gs:852h, cx
 * 00000001401CEA85: mov     cx, gs:860h
 * 00000001401CEA8E: mov     gs:854h, cx
 * 00000001401CEA97: movzx   eax, word ptr gs:866h
 * 00000001401CEAA0: cmp     gs:864h, ax
 * 00000001401CEAA9: jz      short loc_1401CEABD
 * 00000001401CEAAB: mov     gs:864h, ax
 * 00000001401CEAB4: mov     ecx, 48h ; 'H'
 * 00000001401CEAB9: xor     edx, edx
 * 00000001401CEABB: wrmsr
 * 00000001401CEABD: movzx   edx, word ptr gs:860h
 * 00000001401CEAC6: test    edx, 8
 * 00000001401CEACC: jz      short loc_1401CEAE5
 * 00000001401CEACE: mov     eax, 1
 * 00000001401CEAD3: xor     edx, edx
 * 00000001401CEAD5: mov     ecx, 49h ; 'I'
 * 00000001401CEADA: wrmsr
 * 00000001401CEADC: movzx   edx, word ptr gs:860h
 * 00000001401CEAE5: test    edx, 2
 * 00000001401CEAEB: jz      loc_1401CEC16
 * 00000001401CEAF1: call    loc_1401CEC04
 * 00000001401CEAF6: add     rsp, 8
 * 00000001401CEAFA: call    loc_1401CEC0D
 * 00000001401CEAFF: add     rsp, 8
 * 00000001401CEB03: call    loc_1401CEAF6
 * 00000001401CEB08: add     rsp, 8
 * 00000001401CEB0C: call    loc_1401CEAFF
 * 00000001401CEB11: add     rsp, 8
 * 00000001401CEB15: call    loc_1401CEB08
 * 00000001401CEB1A: add     rsp, 8
 * 00000001401CEB1E: call    loc_1401CEB11
 * 00000001401CEB23: add     rsp, 8
 * 00000001401CEB27: call    loc_1401CEB1A
 * 00000001401CEB2C: add     rsp, 8
 * 00000001401CEB30: call    loc_1401CEB23
 * 00000001401CEB35: add     rsp, 8
 * 00000001401CEB39: call    loc_1401CEB2C
 * 00000001401CEB3E: add     rsp, 8
 * 00000001401CEB42: call    loc_1401CEB35
 * 00000001401CEB47: add     rsp, 8
 * 00000001401CEB4B: call    loc_1401CEB3E
 * 00000001401CEB50: add     rsp, 8
 * 00000001401CEB54: call    loc_1401CEB47
 * 00000001401CEB59: add     rsp, 8
 * 00000001401CEB5D: call    loc_1401CEB50
 * 00000001401CEB62: add     rsp, 8
 * 00000001401CEB66: call    loc_1401CEB59
 * 00000001401CEB6B: add     rsp, 8
 * 00000001401CEB6F: call    loc_1401CEB62
 * 00000001401CEB74: add     rsp, 8
 * 00000001401CEB78: call    loc_1401CEB6B
 * 00000001401CEB7D: add     rsp, 8
 * 00000001401CEB81: call    loc_1401CEB74
 * 00000001401CEB86: add     rsp, 8
 * 00000001401CEB8A: call    loc_1401CEB7D
 * 00000001401CEB8F: add     rsp, 8
 * 00000001401CEB93: call    loc_1401CEB86
 * 00000001401CEB98: add     rsp, 8
 * 00000001401CEB9C: call    loc_1401CEB8F
 * 00000001401CEBA1: add     rsp, 8
 * 00000001401CEBA5: call    loc_1401CEB98
 * 00000001401CEBAA: add     rsp, 8
 * 00000001401CEBAE: call    loc_1401CEBA1
 * 00000001401CEBB3: add     rsp, 8
 * 00000001401CEBB7: call    loc_1401CEBAA
 * 00000001401CEBBC: add     rsp, 8
 * 00000001401CEBC0: call    loc_1401CEBB3
 * 00000001401CEBC5: add     rsp, 8
 * 00000001401CEBC9: call    loc_1401CEBBC
 * 00000001401CEBCE: add     rsp, 8
 * 00000001401CEBD2: call    loc_1401CEBC5
 * 00000001401CEBD7: add     rsp, 8
 * 00000001401CEBDB: call    loc_1401CEBCE
 * 00000001401CEBE0: add     rsp, 8
 * 00000001401CEBE4: call    loc_1401CEBD7
 * 00000001401CEBE9: add     rsp, 8
 * 00000001401CEBED: call    loc_1401CEBE0
 * 00000001401CEBF2: add     rsp, 8
 * 00000001401CEBF6: call    loc_1401CEBE9
 * 00000001401CEBFB: add     rsp, 8
 * 00000001401CEBFF: call    loc_1401CEBF2
 * 00000001401CEC04: add     rsp, 8
 * 00000001401CEC08: call    loc_1401CEBFB
 * 00000001401CEC0D: add     rsp, 8
 * 00000001401CEC11: mov     eax, 0DADAh
 * 00000001401CEC16: test    edx, 200h
 * 00000001401CEC1C: jz      short loc_1401CEC23
 * 00000001401CEC1E: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CEC23: lfence
 * 00000001401CEC26: mov     byte ptr gs:856h, 0
 * 00000001401CEC2F: jmp     KiSystemServiceUser
 * 00000001401CEC34: retn
 */
