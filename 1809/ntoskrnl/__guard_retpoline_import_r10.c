/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140332420
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140332500 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140332560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140332420
 * Reason: Hex-Rays returned no pseudocode for 0x140332420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140332420: sub     rsp, 18h
 * 0000000140332424: mov     [rsp+18h+var_18], rax
 * 0000000140332428: mov     [rsp+18h+var_10], r11
 * 000000014033242D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140332437: mov     r11, [r11]
 * 000000014033243A: test    r11, r11
 * 000000014033243D: jz      short loc_14033248F
 * 000000014033243F: mov     rax, r10
 * 0000000140332442: shr     rax, 10h
 * 0000000140332446: bt      [r11], rax
 * 000000014033244A: jnb     short loc_14033245B
 * 000000014033244C: mov     rax, [rsp+18h+var_18]
 * 0000000140332450: mov     r11, [rsp+18h+var_10]
 * 0000000140332455: add     rsp, 18h
 * 0000000140332459: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 000000014033245B: or      byte ptr gs:856h, 1
 * 0000000140332464: test    byte ptr gs:856h, 2
 * 000000014033246D: jnz     short loc_14033248F
 * 000000014033246F: call    __guard_retpoline_exit
 * 0000000140332474: mov     r11, (offset xmmword_140542350+4)
 * 000000014033247E: mov     r11d, [r11]
 * 0000000140332481: test    r11d, 2
 * 0000000140332488: jz      short loc_14033248F
 * 000000014033248A: call    __guard_retpoline_import_r10_log_event
 * 000000014033248F: lfence
 * 0000000140332492: mov     rax, [rsp+18h+var_18]
 * 0000000140332496: mov     r11, [rsp+18h+var_10]
 * 000000014033249B: add     rsp, 18h
 * 000000014033249F: jmp     r10
 */
