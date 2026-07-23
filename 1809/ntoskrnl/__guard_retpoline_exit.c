/*
 * XREFs of __guard_retpoline_exit @ 0x140332560
 * Callers:
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x1403323A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140332420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140332560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140332560
 * Reason: Hex-Rays returned no pseudocode for 0x140332560
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140332560: pushfq
 * 0000000140332562: sub     rsp, 18h
 * 0000000140332566: mov     [rsp+20h+var_20], rax
 * 000000014033256A: mov     [rsp+20h+var_18], rcx
 * 000000014033256F: mov     [rsp+20h+var_10], rdx
 * 0000000140332574: cli
 * 0000000140332575: movzx   eax, word ptr gs:852h
 * 000000014033257E: cmp     gs:864h, ax
 * 0000000140332587: jz      short loc_14033259B
 * 0000000140332589: mov     gs:864h, ax
 * 0000000140332592: mov     ecx, 48h ; 'H'
 * 0000000140332597: xor     edx, edx
 * 0000000140332599: wrmsr
 * 000000014033259B: movzx   edx, byte ptr gs:854h
 * 00000001403325A4: test    edx, 10h
 * 00000001403325AA: jz      short loc_1403325C3
 * 00000001403325AC: mov     eax, 1
 * 00000001403325B1: xor     edx, edx
 * 00000001403325B3: mov     ecx, 49h ; 'I'
 * 00000001403325B8: wrmsr
 * 00000001403325BA: movzx   edx, byte ptr gs:854h
 * 00000001403325C3: test    edx, 40h
 * 00000001403325C9: jz      loc_1403326F4
 * 00000001403325CF: call    loc_1403326E2
 * 00000001403325D4: add     rsp, 8
 * 00000001403325D8: call    loc_1403326EB
 * 00000001403325DD: add     rsp, 8
 * 00000001403325E1: call    loc_1403325D4
 * 00000001403325E6: add     rsp, 8
 * 00000001403325EA: call    loc_1403325DD
 * 00000001403325EF: add     rsp, 8
 * 00000001403325F3: call    loc_1403325E6
 * 00000001403325F8: add     rsp, 8
 * 00000001403325FC: call    loc_1403325EF
 * 0000000140332601: add     rsp, 8
 * 0000000140332605: call    loc_1403325F8
 * 000000014033260A: add     rsp, 8
 * 000000014033260E: call    loc_140332601
 * 0000000140332613: add     rsp, 8
 * 0000000140332617: call    loc_14033260A
 * 000000014033261C: add     rsp, 8
 * 0000000140332620: call    loc_140332613
 * 0000000140332625: add     rsp, 8
 * 0000000140332629: call    loc_14033261C
 * 000000014033262E: add     rsp, 8
 * 0000000140332632: call    loc_140332625
 * 0000000140332637: add     rsp, 8
 * 000000014033263B: call    loc_14033262E
 * 0000000140332640: add     rsp, 8
 * 0000000140332644: call    loc_140332637
 * 0000000140332649: add     rsp, 8
 * 000000014033264D: call    loc_140332640
 * 0000000140332652: add     rsp, 8
 * 0000000140332656: call    loc_140332649
 * 000000014033265B: add     rsp, 8
 * 000000014033265F: call    loc_140332652
 * 0000000140332664: add     rsp, 8
 * 0000000140332668: call    loc_14033265B
 * 000000014033266D: add     rsp, 8
 * 0000000140332671: call    loc_140332664
 * 0000000140332676: add     rsp, 8
 * 000000014033267A: call    loc_14033266D
 * 000000014033267F: add     rsp, 8
 * 0000000140332683: call    loc_140332676
 * 0000000140332688: add     rsp, 8
 * 000000014033268C: call    loc_14033267F
 * 0000000140332691: add     rsp, 8
 * 0000000140332695: call    loc_140332688
 * 000000014033269A: add     rsp, 8
 * 000000014033269E: call    loc_140332691
 * 00000001403326A3: add     rsp, 8
 * 00000001403326A7: call    loc_14033269A
 * 00000001403326AC: add     rsp, 8
 * 00000001403326B0: call    loc_1403326A3
 * 00000001403326B5: add     rsp, 8
 * 00000001403326B9: call    loc_1403326AC
 * 00000001403326BE: add     rsp, 8
 * 00000001403326C2: call    loc_1403326B5
 * 00000001403326C7: add     rsp, 8
 * 00000001403326CB: call    loc_1403326BE
 * 00000001403326D0: add     rsp, 8
 * 00000001403326D4: call    loc_1403326C7
 * 00000001403326D9: add     rsp, 8
 * 00000001403326DD: call    loc_1403326D0
 * 00000001403326E2: add     rsp, 8
 * 00000001403326E6: call    loc_1403326D9
 * 00000001403326EB: add     rsp, 8
 * 00000001403326EF: mov     eax, 0DADAh
 * 00000001403326F4: lfence
 * 00000001403326F7: or      byte ptr gs:856h, 2
 * 0000000140332700: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140332707: jnb     short loc_14033270A
 * 0000000140332709: sti
 * 000000014033270A: mov     rax, [rsp-0E0h+arg_D8]
 * 000000014033270E: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140332713: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140332718: add     rsp, 20h
 * 000000014033271C: retn
 */
