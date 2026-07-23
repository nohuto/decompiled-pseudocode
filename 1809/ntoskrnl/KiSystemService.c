/*
 * XREFs of KiSystemService @ 0x1401CEB00
 * Callers:
 *     KiSystemServiceShadow @ 0x14032FE80 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x1401CEB00 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x1401CEB00
 * Reason: Hex-Rays returned no pseudocode for 0x1401CEB00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CEB00: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401CEB06: jz      KiSystemService32User
 * 00000001401CEB0C: test    cs:KiKvaShadow, 1
 * 00000001401CEB13: jnz     short loc_1401CEB18
 * 00000001401CEB15: swapgs
 * 00000001401CEB18: lfence
 * 00000001401CEB1B: mov     rcx, r10
 * 00000001401CEB1E: sub     rsp, 8
 * 00000001401CEB22: push    rbp
 * 00000001401CEB23: sub     rsp, 158h
 * 00000001401CEB2A: lea     rbp, [rsp+168h+var_E8]
 * 00000001401CEB32: mov     [rbp+0C0h], rbx
 * 00000001401CEB39: mov     [rbp+0C8h], rdi
 * 00000001401CEB40: mov     [rbp+0D0h], rsi
 * 00000001401CEB47: cld
 * 00000001401CEB48: mov     [rbp-50h], rax
 * 00000001401CEB4C: mov     [rbp-48h], rcx
 * 00000001401CEB50: mov     [rbp-40h], rdx
 * 00000001401CEB54: mov     rcx, gs:188h
 * 00000001401CEB5D: mov     rcx, [rcx+220h]
 * 00000001401CEB64: mov     rcx, [rcx+830h]
 * 00000001401CEB6B: mov     gs:858h, rcx
 * 00000001401CEB74: mov     cx, gs:850h
 * 00000001401CEB7D: mov     gs:852h, cx
 * 00000001401CEB86: mov     cx, gs:860h
 * 00000001401CEB8F: mov     gs:854h, cx
 * 00000001401CEB98: movzx   eax, word ptr gs:866h
 * 00000001401CEBA1: cmp     gs:864h, ax
 * 00000001401CEBAA: jz      short loc_1401CEBBE
 * 00000001401CEBAC: mov     gs:864h, ax
 * 00000001401CEBB5: mov     ecx, 48h ; 'H'
 * 00000001401CEBBA: xor     edx, edx
 * 00000001401CEBBC: wrmsr
 * 00000001401CEBBE: movzx   edx, word ptr gs:860h
 * 00000001401CEBC7: test    edx, 8
 * 00000001401CEBCD: jz      short loc_1401CEBE6
 * 00000001401CEBCF: mov     eax, 1
 * 00000001401CEBD4: xor     edx, edx
 * 00000001401CEBD6: mov     ecx, 49h ; 'I'
 * 00000001401CEBDB: wrmsr
 * 00000001401CEBDD: movzx   edx, word ptr gs:860h
 * 00000001401CEBE6: test    edx, 2
 * 00000001401CEBEC: jz      loc_1401CED17
 * 00000001401CEBF2: call    loc_1401CED05
 * 00000001401CEBF7: add     rsp, 8
 * 00000001401CEBFB: call    loc_1401CED0E
 * 00000001401CEC00: add     rsp, 8
 * 00000001401CEC04: call    loc_1401CEBF7
 * 00000001401CEC09: add     rsp, 8
 * 00000001401CEC0D: call    loc_1401CEC00
 * 00000001401CEC12: add     rsp, 8
 * 00000001401CEC16: call    loc_1401CEC09
 * 00000001401CEC1B: add     rsp, 8
 * 00000001401CEC1F: call    loc_1401CEC12
 * 00000001401CEC24: add     rsp, 8
 * 00000001401CEC28: call    loc_1401CEC1B
 * 00000001401CEC2D: add     rsp, 8
 * 00000001401CEC31: call    loc_1401CEC24
 * 00000001401CEC36: add     rsp, 8
 * 00000001401CEC3A: call    loc_1401CEC2D
 * 00000001401CEC3F: add     rsp, 8
 * 00000001401CEC43: call    loc_1401CEC36
 * 00000001401CEC48: add     rsp, 8
 * 00000001401CEC4C: call    loc_1401CEC3F
 * 00000001401CEC51: add     rsp, 8
 * 00000001401CEC55: call    loc_1401CEC48
 * 00000001401CEC5A: add     rsp, 8
 * 00000001401CEC5E: call    loc_1401CEC51
 * 00000001401CEC63: add     rsp, 8
 * 00000001401CEC67: call    loc_1401CEC5A
 * 00000001401CEC6C: add     rsp, 8
 * 00000001401CEC70: call    loc_1401CEC63
 * 00000001401CEC75: add     rsp, 8
 * 00000001401CEC79: call    loc_1401CEC6C
 * 00000001401CEC7E: add     rsp, 8
 * 00000001401CEC82: call    loc_1401CEC75
 * 00000001401CEC87: add     rsp, 8
 * 00000001401CEC8B: call    loc_1401CEC7E
 * 00000001401CEC90: add     rsp, 8
 * 00000001401CEC94: call    loc_1401CEC87
 * 00000001401CEC99: add     rsp, 8
 * 00000001401CEC9D: call    loc_1401CEC90
 * 00000001401CECA2: add     rsp, 8
 * 00000001401CECA6: call    loc_1401CEC99
 * 00000001401CECAB: add     rsp, 8
 * 00000001401CECAF: call    loc_1401CECA2
 * 00000001401CECB4: add     rsp, 8
 * 00000001401CECB8: call    loc_1401CECAB
 * 00000001401CECBD: add     rsp, 8
 * 00000001401CECC1: call    loc_1401CECB4
 * 00000001401CECC6: add     rsp, 8
 * 00000001401CECCA: call    loc_1401CECBD
 * 00000001401CECCF: add     rsp, 8
 * 00000001401CECD3: call    loc_1401CECC6
 * 00000001401CECD8: add     rsp, 8
 * 00000001401CECDC: call    loc_1401CECCF
 * 00000001401CECE1: add     rsp, 8
 * 00000001401CECE5: call    loc_1401CECD8
 * 00000001401CECEA: add     rsp, 8
 * 00000001401CECEE: call    loc_1401CECE1
 * 00000001401CECF3: add     rsp, 8
 * 00000001401CECF7: call    loc_1401CECEA
 * 00000001401CECFC: add     rsp, 8
 * 00000001401CED00: call    loc_1401CECF3
 * 00000001401CED05: add     rsp, 8
 * 00000001401CED09: call    loc_1401CECFC
 * 00000001401CED0E: add     rsp, 8
 * 00000001401CED12: mov     eax, 0DADAh
 * 00000001401CED17: test    edx, 200h
 * 00000001401CED1D: jz      short loc_1401CED24
 * 00000001401CED1F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CED24: lfence
 * 00000001401CED27: mov     byte ptr gs:856h, 0
 * 00000001401CED30: jmp     KiSystemServiceUser
 * 00000001401CED35: retn
 */
