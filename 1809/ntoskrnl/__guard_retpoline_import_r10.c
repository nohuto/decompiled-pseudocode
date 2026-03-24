/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140331420
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140331500 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140331560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140331420
 * Reason: Hex-Rays returned no pseudocode for 0x140331420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140331420: sub     rsp, 18h
 * 0000000140331424: mov     [rsp+18h+var_18], rax
 * 0000000140331428: mov     [rsp+18h+var_10], r11
 * 000000014033142D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140331437: mov     r11, [r11]
 * 000000014033143A: test    r11, r11
 * 000000014033143D: jz      short loc_14033148F
 * 000000014033143F: mov     rax, r10
 * 0000000140331442: shr     rax, 10h
 * 0000000140331446: bt      [r11], rax
 * 000000014033144A: jnb     short loc_14033145B
 * 000000014033144C: mov     rax, [rsp+18h+var_18]
 * 0000000140331450: mov     r11, [rsp+18h+var_10]
 * 0000000140331455: add     rsp, 18h
 * 0000000140331459: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 000000014033145B: or      byte ptr gs:856h, 1
 * 0000000140331464: test    byte ptr gs:856h, 2
 * 000000014033146D: jnz     short loc_14033148F
 * 000000014033146F: call    __guard_retpoline_exit
 * 0000000140331474: mov     r11, (offset xmmword_140541350+4)
 * 000000014033147E: mov     r11d, [r11]
 * 0000000140331481: test    r11d, 2
 * 0000000140331488: jz      short loc_14033148F
 * 000000014033148A: call    __guard_retpoline_import_r10_log_event
 * 000000014033148F: lfence
 * 0000000140331492: mov     rax, [rsp+18h+var_18]
 * 0000000140331496: mov     r11, [rsp+18h+var_10]
 * 000000014033149B: add     rsp, 18h
 * 000000014033149F: jmp     r10
 */
