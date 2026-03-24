/*
 * XREFs of __guard_retpoline_exit @ 0x140331560
 * Callers:
 *     KeExitRetpoline @ 0x14013916C (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x1403313A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140331420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140331560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit @ 0x140331560
 * Reason: Hex-Rays returned no pseudocode for 0x140331560
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140331560: pushfq
 * 0000000140331562: sub     rsp, 18h
 * 0000000140331566: mov     [rsp+20h+var_20], rax
 * 000000014033156A: mov     [rsp+20h+var_18], rcx
 * 000000014033156F: mov     [rsp+20h+var_10], rdx
 * 0000000140331574: cli
 * 0000000140331575: movzx   eax, word ptr gs:852h
 * 000000014033157E: cmp     gs:864h, ax
 * 0000000140331587: jz      short loc_14033159B
 * 0000000140331589: mov     gs:864h, ax
 * 0000000140331592: mov     ecx, 48h ; 'H'
 * 0000000140331597: xor     edx, edx
 * 0000000140331599: wrmsr
 * 000000014033159B: movzx   edx, byte ptr gs:854h
 * 00000001403315A4: test    edx, 10h
 * 00000001403315AA: jz      short loc_1403315C3
 * 00000001403315AC: mov     eax, 1
 * 00000001403315B1: xor     edx, edx
 * 00000001403315B3: mov     ecx, 49h ; 'I'
 * 00000001403315B8: wrmsr
 * 00000001403315BA: movzx   edx, byte ptr gs:854h
 * 00000001403315C3: test    edx, 40h
 * 00000001403315C9: jz      loc_1403316F4
 * 00000001403315CF: call    loc_1403316E2
 * 00000001403315D4: add     rsp, 8
 * 00000001403315D8: call    loc_1403316EB
 * 00000001403315DD: add     rsp, 8
 * 00000001403315E1: call    loc_1403315D4
 * 00000001403315E6: add     rsp, 8
 * 00000001403315EA: call    loc_1403315DD
 * 00000001403315EF: add     rsp, 8
 * 00000001403315F3: call    loc_1403315E6
 * 00000001403315F8: add     rsp, 8
 * 00000001403315FC: call    loc_1403315EF
 * 0000000140331601: add     rsp, 8
 * 0000000140331605: call    loc_1403315F8
 * 000000014033160A: add     rsp, 8
 * 000000014033160E: call    loc_140331601
 * 0000000140331613: add     rsp, 8
 * 0000000140331617: call    loc_14033160A
 * 000000014033161C: add     rsp, 8
 * 0000000140331620: call    loc_140331613
 * 0000000140331625: add     rsp, 8
 * 0000000140331629: call    loc_14033161C
 * 000000014033162E: add     rsp, 8
 * 0000000140331632: call    loc_140331625
 * 0000000140331637: add     rsp, 8
 * 000000014033163B: call    loc_14033162E
 * 0000000140331640: add     rsp, 8
 * 0000000140331644: call    loc_140331637
 * 0000000140331649: add     rsp, 8
 * 000000014033164D: call    loc_140331640
 * 0000000140331652: add     rsp, 8
 * 0000000140331656: call    loc_140331649
 * 000000014033165B: add     rsp, 8
 * 000000014033165F: call    loc_140331652
 * 0000000140331664: add     rsp, 8
 * 0000000140331668: call    loc_14033165B
 * 000000014033166D: add     rsp, 8
 * 0000000140331671: call    loc_140331664
 * 0000000140331676: add     rsp, 8
 * 000000014033167A: call    loc_14033166D
 * 000000014033167F: add     rsp, 8
 * 0000000140331683: call    loc_140331676
 * 0000000140331688: add     rsp, 8
 * 000000014033168C: call    loc_14033167F
 * 0000000140331691: add     rsp, 8
 * 0000000140331695: call    loc_140331688
 * 000000014033169A: add     rsp, 8
 * 000000014033169E: call    loc_140331691
 * 00000001403316A3: add     rsp, 8
 * 00000001403316A7: call    loc_14033169A
 * 00000001403316AC: add     rsp, 8
 * 00000001403316B0: call    loc_1403316A3
 * 00000001403316B5: add     rsp, 8
 * 00000001403316B9: call    loc_1403316AC
 * 00000001403316BE: add     rsp, 8
 * 00000001403316C2: call    loc_1403316B5
 * 00000001403316C7: add     rsp, 8
 * 00000001403316CB: call    loc_1403316BE
 * 00000001403316D0: add     rsp, 8
 * 00000001403316D4: call    loc_1403316C7
 * 00000001403316D9: add     rsp, 8
 * 00000001403316DD: call    loc_1403316D0
 * 00000001403316E2: add     rsp, 8
 * 00000001403316E6: call    loc_1403316D9
 * 00000001403316EB: add     rsp, 8
 * 00000001403316EF: mov     eax, 0DADAh
 * 00000001403316F4: lfence
 * 00000001403316F7: or      byte ptr gs:856h, 2
 * 0000000140331700: bt      [rsp-0E0h+arg_F0], 9
 * 0000000140331707: jnb     short loc_14033170A
 * 0000000140331709: sti
 * 000000014033170A: mov     rax, [rsp-0E0h+arg_D8]
 * 000000014033170E: mov     rcx, [rsp-0E0h+arg_E0]
 * 0000000140331713: mov     rdx, [rsp-0E0h+arg_E8]
 * 0000000140331718: add     rsp, 20h
 * 000000014033171C: retn
 */
