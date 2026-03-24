/*
 * XREFs of KiSystemCall64Shadow @ 0x140330140
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140330140 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140330140
 * Reason: Hex-Rays returned no pseudocode for 0x140330140
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140330140: swapgs
 * 0000000140330143: mov     gs:7010h, rsp
 * 000000014033014C: mov     rsp, gs:7000h
 * 0000000140330155: bt      dword ptr gs:7018h, 1
 * 000000014033015F: jb      short loc_140330164
 * 0000000140330161: mov     cr3, rsp
 * 0000000140330164: mov     rsp, gs:7008h
 * 000000014033016D: push    2Bh ; '+'
 * 000000014033016F: push    qword ptr gs:7010h
 * 0000000140330177: push    r11
 * 0000000140330179: push    33h ; '3'
 * 000000014033017B: push    rcx
 * 000000014033017C: mov     rcx, r10
 * 000000014033017F: sub     rsp, 8
 * 0000000140330183: push    rbp
 * 0000000140330184: sub     rsp, 158h
 * 000000014033018B: lea     rbp, [rsp+190h+var_110]
 * 0000000140330193: mov     [rbp+0C0h], rbx
 * 000000014033019A: mov     [rbp+0C8h], rdi
 * 00000001403301A1: mov     [rbp+0D0h], rsi
 * 00000001403301A8: mov     [rbp-50h], rax
 * 00000001403301AC: mov     [rbp-48h], rcx
 * 00000001403301B0: mov     [rbp-40h], rdx
 * 00000001403301B4: mov     rcx, gs:188h
 * 00000001403301BD: mov     rcx, [rcx+220h]
 * 00000001403301C4: mov     rcx, [rcx+830h]
 * 00000001403301CB: mov     gs:858h, rcx
 * 00000001403301D4: mov     cx, gs:850h
 * 00000001403301DD: mov     gs:852h, cx
 * 00000001403301E6: mov     cx, gs:860h
 * 00000001403301EF: mov     gs:854h, cx
 * 00000001403301F8: movzx   eax, word ptr gs:866h
 * 0000000140330201: cmp     gs:864h, ax
 * 000000014033020A: jz      short loc_14033021E
 * 000000014033020C: mov     gs:864h, ax
 * 0000000140330215: mov     ecx, 48h ; 'H'
 * 000000014033021A: xor     edx, edx
 * 000000014033021C: wrmsr
 * 000000014033021E: movzx   edx, word ptr gs:860h
 * 0000000140330227: test    edx, 8
 * 000000014033022D: jz      short loc_140330246
 * 000000014033022F: mov     eax, 1
 * 0000000140330234: xor     edx, edx
 * 0000000140330236: mov     ecx, 49h ; 'I'
 * 000000014033023B: wrmsr
 * 000000014033023D: movzx   edx, word ptr gs:860h
 * 0000000140330246: test    edx, 2
 * 000000014033024C: jz      loc_140330377
 * 0000000140330252: call    loc_140330365
 * 0000000140330257: add     rsp, 8
 * 000000014033025B: call    loc_14033036E
 * 0000000140330260: add     rsp, 8
 * 0000000140330264: call    loc_140330257
 * 0000000140330269: add     rsp, 8
 * 000000014033026D: call    loc_140330260
 * 0000000140330272: add     rsp, 8
 * 0000000140330276: call    loc_140330269
 * 000000014033027B: add     rsp, 8
 * 000000014033027F: call    loc_140330272
 * 0000000140330284: add     rsp, 8
 * 0000000140330288: call    loc_14033027B
 * 000000014033028D: add     rsp, 8
 * 0000000140330291: call    loc_140330284
 * 0000000140330296: add     rsp, 8
 * 000000014033029A: call    loc_14033028D
 * 000000014033029F: add     rsp, 8
 * 00000001403302A3: call    loc_140330296
 * 00000001403302A8: add     rsp, 8
 * 00000001403302AC: call    loc_14033029F
 * 00000001403302B1: add     rsp, 8
 * 00000001403302B5: call    loc_1403302A8
 * 00000001403302BA: add     rsp, 8
 * 00000001403302BE: call    loc_1403302B1
 * 00000001403302C3: add     rsp, 8
 * 00000001403302C7: call    loc_1403302BA
 * 00000001403302CC: add     rsp, 8
 * 00000001403302D0: call    loc_1403302C3
 * 00000001403302D5: add     rsp, 8
 * 00000001403302D9: call    loc_1403302CC
 * 00000001403302DE: add     rsp, 8
 * 00000001403302E2: call    loc_1403302D5
 * 00000001403302E7: add     rsp, 8
 * 00000001403302EB: call    loc_1403302DE
 * 00000001403302F0: add     rsp, 8
 * 00000001403302F4: call    loc_1403302E7
 * 00000001403302F9: add     rsp, 8
 * 00000001403302FD: call    loc_1403302F0
 * 0000000140330302: add     rsp, 8
 * 0000000140330306: call    loc_1403302F9
 * 000000014033030B: add     rsp, 8
 * 000000014033030F: call    loc_140330302
 * 0000000140330314: add     rsp, 8
 * 0000000140330318: call    loc_14033030B
 * 000000014033031D: add     rsp, 8
 * 0000000140330321: call    loc_140330314
 * 0000000140330326: add     rsp, 8
 * 000000014033032A: call    loc_14033031D
 * 000000014033032F: add     rsp, 8
 * 0000000140330333: call    loc_140330326
 * 0000000140330338: add     rsp, 8
 * 000000014033033C: call    loc_14033032F
 * 0000000140330341: add     rsp, 8
 * 0000000140330345: call    loc_140330338
 * 000000014033034A: add     rsp, 8
 * 000000014033034E: call    loc_140330341
 * 0000000140330353: add     rsp, 8
 * 0000000140330357: call    loc_14033034A
 * 000000014033035C: add     rsp, 8
 * 0000000140330360: call    loc_140330353
 * 0000000140330365: add     rsp, 8
 * 0000000140330369: call    loc_14033035C
 * 000000014033036E: add     rsp, 8
 * 0000000140330372: mov     eax, 0DADAh
 * 0000000140330377: test    edx, 200h
 * 000000014033037D: jz      short loc_140330384
 * 000000014033037F: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140330384: lfence
 * 0000000140330387: mov     byte ptr gs:856h, 0
 * 0000000140330390: jmp     KiSystemServiceUser
 * 0000000140330395: retn
 */
