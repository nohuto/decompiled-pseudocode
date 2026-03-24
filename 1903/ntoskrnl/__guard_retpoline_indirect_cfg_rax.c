/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x1403532A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x1403532A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x1403532A0
 * Reason: Hex-Rays returned no pseudocode for 0x1403532A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403532A0: mov     r11, offset _guard_icall_bitmap
 * 00000001403532AA: mov     r11, [r11]
 * 00000001403532AD: test    rax, rax
 * 00000001403532B0: jge     loc_140353358
 * 00000001403532B6: test    r11, r11
 * 00000001403532B9: jz      short __guard_retpoline_indirect_rax
 * 00000001403532BB: mov     r10, rax
 * 00000001403532BE: shr     r10, 9
 * 00000001403532C2: mov     r11, [r11+r10*8]
 * 00000001403532C6: mov     r10, rax
 * 00000001403532C9: shr     r10, 3
 * 00000001403532CD: test    al, 0Fh
 * 00000001403532CF: jnz     loc_140353341
 * 00000001403532D5: bt      r11, r10
 * 00000001403532D9: jnb     loc_140353358
 * 00000001403532DF: nop
 * 00000001403532E0: mov     r11, offset _retpoline_image_bitmap
 * 00000001403532EA: mov     r11, [r11]
 * 00000001403532ED: test    r11, r11
 * 00000001403532F0: jz      short loc_14035333B
 * 00000001403532F2: mov     r10, rax
 * 00000001403532F5: shr     r10, 10h
 * 00000001403532F9: bt      [r11], r10
 * 00000001403532FD: jnb     short loc_140353325
 * 00000001403532FF: call    loc_140353320
 * 0000000140353304: int     3; Trap to Debugger
 * 0000000140353320: mov     [rsp+0], rax
 * 0000000140353324: retn
 * 0000000140353325: or      byte ptr gs:853h, 1
 * 000000014035332E: test    byte ptr gs:853h, 2
 * 0000000140353337: jnz     short loc_14035333B
 * 0000000140353339: jmp     short __guard_retpoline_exit_indirect_rax
 * 000000014035333B: lfence
 * 000000014035333E: jmp     rax
 * 0000000140353341: btr     r10, 0
 * 0000000140353346: bt      r11, r10
 * 000000014035334A: jnb     short loc_140353358
 * 000000014035334C: or      r10, 1
 * 0000000140353350: bt      r11, r10
 * 0000000140353354: jnb     short loc_140353358
 * 0000000140353356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140353358: mov     rcx, rax
 * 000000014035335B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140353365: call    loc_140353380
 * 000000014035336A: int     3; Trap to Debugger
 * 0000000140353380: mov     [rsp+0], rax
 * 0000000140353384: retn
 */
