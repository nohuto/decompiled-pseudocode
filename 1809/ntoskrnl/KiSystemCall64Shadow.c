/*
 * XREFs of KiSystemCall64Shadow @ 0x140331140
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140331140 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140331140
 * Reason: Hex-Rays returned no pseudocode for 0x140331140
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140331140: swapgs
 * 0000000140331143: mov     gs:7010h, rsp
 * 000000014033114C: mov     rsp, gs:7000h
 * 0000000140331155: bt      dword ptr gs:7018h, 1
 * 000000014033115F: jb      short loc_140331164
 * 0000000140331161: mov     cr3, rsp
 * 0000000140331164: mov     rsp, gs:7008h
 * 000000014033116D: push    2Bh ; '+'
 * 000000014033116F: push    qword ptr gs:7010h
 * 0000000140331177: push    r11
 * 0000000140331179: push    33h ; '3'
 * 000000014033117B: push    rcx
 * 000000014033117C: mov     rcx, r10
 * 000000014033117F: sub     rsp, 8
 * 0000000140331183: push    rbp
 * 0000000140331184: sub     rsp, 158h
 * 000000014033118B: lea     rbp, [rsp+190h+var_110]
 * 0000000140331193: mov     [rbp+0C0h], rbx
 * 000000014033119A: mov     [rbp+0C8h], rdi
 * 00000001403311A1: mov     [rbp+0D0h], rsi
 * 00000001403311A8: mov     [rbp-50h], rax
 * 00000001403311AC: mov     [rbp-48h], rcx
 * 00000001403311B0: mov     [rbp-40h], rdx
 * 00000001403311B4: mov     rcx, gs:188h
 * 00000001403311BD: mov     rcx, [rcx+220h]
 * 00000001403311C4: mov     rcx, [rcx+830h]
 * 00000001403311CB: mov     gs:858h, rcx
 * 00000001403311D4: mov     cx, gs:850h
 * 00000001403311DD: mov     gs:852h, cx
 * 00000001403311E6: mov     cx, gs:860h
 * 00000001403311EF: mov     gs:854h, cx
 * 00000001403311F8: movzx   eax, word ptr gs:866h
 * 0000000140331201: cmp     gs:864h, ax
 * 000000014033120A: jz      short loc_14033121E
 * 000000014033120C: mov     gs:864h, ax
 * 0000000140331215: mov     ecx, 48h ; 'H'
 * 000000014033121A: xor     edx, edx
 * 000000014033121C: wrmsr
 * 000000014033121E: movzx   edx, word ptr gs:860h
 * 0000000140331227: test    edx, 8
 * 000000014033122D: jz      short loc_140331246
 * 000000014033122F: mov     eax, 1
 * 0000000140331234: xor     edx, edx
 * 0000000140331236: mov     ecx, 49h ; 'I'
 * 000000014033123B: wrmsr
 * 000000014033123D: movzx   edx, word ptr gs:860h
 * 0000000140331246: test    edx, 2
 * 000000014033124C: jz      loc_140331377
 * 0000000140331252: call    loc_140331365
 * 0000000140331257: add     rsp, 8
 * 000000014033125B: call    loc_14033136E
 * 0000000140331260: add     rsp, 8
 * 0000000140331264: call    loc_140331257
 * 0000000140331269: add     rsp, 8
 * 000000014033126D: call    loc_140331260
 * 0000000140331272: add     rsp, 8
 * 0000000140331276: call    loc_140331269
 * 000000014033127B: add     rsp, 8
 * 000000014033127F: call    loc_140331272
 * 0000000140331284: add     rsp, 8
 * 0000000140331288: call    loc_14033127B
 * 000000014033128D: add     rsp, 8
 * 0000000140331291: call    loc_140331284
 * 0000000140331296: add     rsp, 8
 * 000000014033129A: call    loc_14033128D
 * 000000014033129F: add     rsp, 8
 * 00000001403312A3: call    loc_140331296
 * 00000001403312A8: add     rsp, 8
 * 00000001403312AC: call    loc_14033129F
 * 00000001403312B1: add     rsp, 8
 * 00000001403312B5: call    loc_1403312A8
 * 00000001403312BA: add     rsp, 8
 * 00000001403312BE: call    loc_1403312B1
 * 00000001403312C3: add     rsp, 8
 * 00000001403312C7: call    loc_1403312BA
 * 00000001403312CC: add     rsp, 8
 * 00000001403312D0: call    loc_1403312C3
 * 00000001403312D5: add     rsp, 8
 * 00000001403312D9: call    loc_1403312CC
 * 00000001403312DE: add     rsp, 8
 * 00000001403312E2: call    loc_1403312D5
 * 00000001403312E7: add     rsp, 8
 * 00000001403312EB: call    loc_1403312DE
 * 00000001403312F0: add     rsp, 8
 * 00000001403312F4: call    loc_1403312E7
 * 00000001403312F9: add     rsp, 8
 * 00000001403312FD: call    loc_1403312F0
 * 0000000140331302: add     rsp, 8
 * 0000000140331306: call    loc_1403312F9
 * 000000014033130B: add     rsp, 8
 * 000000014033130F: call    loc_140331302
 * 0000000140331314: add     rsp, 8
 * 0000000140331318: call    loc_14033130B
 * 000000014033131D: add     rsp, 8
 * 0000000140331321: call    loc_140331314
 * 0000000140331326: add     rsp, 8
 * 000000014033132A: call    loc_14033131D
 * 000000014033132F: add     rsp, 8
 * 0000000140331333: call    loc_140331326
 * 0000000140331338: add     rsp, 8
 * 000000014033133C: call    loc_14033132F
 * 0000000140331341: add     rsp, 8
 * 0000000140331345: call    loc_140331338
 * 000000014033134A: add     rsp, 8
 * 000000014033134E: call    loc_140331341
 * 0000000140331353: add     rsp, 8
 * 0000000140331357: call    loc_14033134A
 * 000000014033135C: add     rsp, 8
 * 0000000140331360: call    loc_140331353
 * 0000000140331365: add     rsp, 8
 * 0000000140331369: call    loc_14033135C
 * 000000014033136E: add     rsp, 8
 * 0000000140331372: mov     eax, 0DADAh
 * 0000000140331377: test    edx, 200h
 * 000000014033137D: jz      short loc_140331384
 * 000000014033137F: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140331384: lfence
 * 0000000140331387: mov     byte ptr gs:856h, 0
 * 0000000140331390: jmp     KiSystemServiceUser
 * 0000000140331395: retn
 */
