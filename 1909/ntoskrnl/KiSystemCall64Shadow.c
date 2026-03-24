/*
 * XREFs of KiSystemCall64Shadow @ 0x140352140
 * Callers:
 *     <none>
 * Callees:
 *     KiSystemCall64Shadow @ 0x140352140 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140352140
 * Reason: Hex-Rays returned no pseudocode for 0x140352140
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140352140: swapgs
 * 0000000140352143: mov     gs:7010h, rsp
 * 000000014035214C: mov     rsp, gs:7000h
 * 0000000140352155: bt      dword ptr gs:7018h, 1
 * 000000014035215F: jb      short loc_140352164
 * 0000000140352161: mov     cr3, rsp
 * 0000000140352164: mov     rsp, gs:7008h
 * 000000014035216D: push    2Bh ; '+'
 * 000000014035216F: push    qword ptr gs:7010h
 * 0000000140352177: push    r11
 * 0000000140352179: push    33h ; '3'
 * 000000014035217B: push    rcx
 * 000000014035217C: mov     rcx, r10
 * 000000014035217F: sub     rsp, 8
 * 0000000140352183: push    rbp
 * 0000000140352184: sub     rsp, 158h
 * 000000014035218B: lea     rbp, [rsp+190h+var_110]
 * 0000000140352193: mov     [rbp+0C0h], rbx
 * 000000014035219A: mov     [rbp+0C8h], rdi
 * 00000001403521A1: mov     [rbp+0D0h], rsi
 * 00000001403521A8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001403521AF: jz      short loc_1403521BD
 * 00000001403521B1: test    byte ptr [rbp+0F0h], 1
 * 00000001403521B8: jz      short loc_1403521BD
 * 00000001403521BA: stac
 * 00000001403521BD: mov     [rbp-50h], rax
 * 00000001403521C1: mov     [rbp-48h], rcx
 * 00000001403521C5: mov     [rbp-40h], rdx
 * 00000001403521C9: mov     rcx, gs:188h
 * 00000001403521D2: mov     rcx, [rcx+220h]
 * 00000001403521D9: mov     rcx, [rcx+860h]
 * 00000001403521E0: mov     gs:270h, rcx
 * 00000001403521E9: mov     cl, gs:850h
 * 00000001403521F1: mov     gs:851h, cl
 * 00000001403521F9: mov     cl, gs:278h
 * 0000000140352201: mov     gs:852h, cl
 * 0000000140352209: movzx   eax, byte ptr gs:27Bh
 * 0000000140352212: cmp     gs:27Ah, al
 * 000000014035221A: jz      short loc_14035222D
 * 000000014035221C: mov     gs:27Ah, al
 * 0000000140352224: mov     ecx, 48h ; 'H'
 * 0000000140352229: xor     edx, edx
 * 000000014035222B: wrmsr
 * 000000014035222D: movzx   edx, byte ptr gs:278h
 * 0000000140352236: test    edx, 8
 * 000000014035223C: jz      short loc_140352251
 * 000000014035223E: mov     eax, 1
 * 0000000140352243: xor     edx, edx
 * 0000000140352245: mov     ecx, 49h ; 'I'
 * 000000014035224A: wrmsr
 * 000000014035224C: jmp     loc_14035238F
 * 0000000140352251: test    edx, 2
 * 0000000140352257: jz      loc_14035238C
 * 000000014035225D: test    byte ptr gs:279h, 4
 * 0000000140352266: jnz     loc_14035238C
 * 000000014035226C: call    loc_14035237F
 * 0000000140352271: add     rsp, 8
 * 0000000140352275: call    loc_140352388
 * 000000014035227A: add     rsp, 8
 * 000000014035227E: call    loc_140352271
 * 0000000140352283: add     rsp, 8
 * 0000000140352287: call    loc_14035227A
 * 000000014035228C: add     rsp, 8
 * 0000000140352290: call    loc_140352283
 * 0000000140352295: add     rsp, 8
 * 0000000140352299: call    loc_14035228C
 * 000000014035229E: add     rsp, 8
 * 00000001403522A2: call    loc_140352295
 * 00000001403522A7: add     rsp, 8
 * 00000001403522AB: call    loc_14035229E
 * 00000001403522B0: add     rsp, 8
 * 00000001403522B4: call    loc_1403522A7
 * 00000001403522B9: add     rsp, 8
 * 00000001403522BD: call    loc_1403522B0
 * 00000001403522C2: add     rsp, 8
 * 00000001403522C6: call    loc_1403522B9
 * 00000001403522CB: add     rsp, 8
 * 00000001403522CF: call    loc_1403522C2
 * 00000001403522D4: add     rsp, 8
 * 00000001403522D8: call    loc_1403522CB
 * 00000001403522DD: add     rsp, 8
 * 00000001403522E1: call    loc_1403522D4
 * 00000001403522E6: add     rsp, 8
 * 00000001403522EA: call    loc_1403522DD
 * 00000001403522EF: add     rsp, 8
 * 00000001403522F3: call    loc_1403522E6
 * 00000001403522F8: add     rsp, 8
 * 00000001403522FC: call    loc_1403522EF
 * 0000000140352301: add     rsp, 8
 * 0000000140352305: call    loc_1403522F8
 * 000000014035230A: add     rsp, 8
 * 000000014035230E: call    loc_140352301
 * 0000000140352313: add     rsp, 8
 * 0000000140352317: call    loc_14035230A
 * 000000014035231C: add     rsp, 8
 * 0000000140352320: call    loc_140352313
 * 0000000140352325: add     rsp, 8
 * 0000000140352329: call    loc_14035231C
 * 000000014035232E: add     rsp, 8
 * 0000000140352332: call    loc_140352325
 * 0000000140352337: add     rsp, 8
 * 000000014035233B: call    loc_14035232E
 * 0000000140352340: add     rsp, 8
 * 0000000140352344: call    loc_140352337
 * 0000000140352349: add     rsp, 8
 * 000000014035234D: call    loc_140352340
 * 0000000140352352: add     rsp, 8
 * 0000000140352356: call    loc_140352349
 * 000000014035235B: add     rsp, 8
 * 000000014035235F: call    loc_140352352
 * 0000000140352364: add     rsp, 8
 * 0000000140352368: call    loc_14035235B
 * 000000014035236D: add     rsp, 8
 * 0000000140352371: call    loc_140352364
 * 0000000140352376: add     rsp, 8
 * 000000014035237A: call    loc_14035236D
 * 000000014035237F: add     rsp, 8
 * 0000000140352383: call    loc_140352376
 * 0000000140352388: add     rsp, 8
 * 000000014035238C: lfence
 * 000000014035238F: mov     byte ptr gs:853h, 0
 * 0000000140352398: jmp     KiSystemServiceUser
 * 000000014035239D: retn
 */
