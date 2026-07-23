/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x1403322A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x1403322A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x1403322A0
 * Reason: Hex-Rays returned no pseudocode for 0x1403322A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403322A0: mov     r11, offset _guard_icall_bitmap
 * 00000001403322AA: mov     r11, [r11]
 * 00000001403322AD: test    rax, rax
 * 00000001403322B0: jge     loc_140332358
 * 00000001403322B6: test    r11, r11
 * 00000001403322B9: jz      short __guard_retpoline_indirect_rax
 * 00000001403322BB: mov     r10, rax
 * 00000001403322BE: shr     r10, 9
 * 00000001403322C2: mov     r11, [r11+r10*8]
 * 00000001403322C6: mov     r10, rax
 * 00000001403322C9: shr     r10, 3
 * 00000001403322CD: test    al, 0Fh
 * 00000001403322CF: jnz     loc_140332341
 * 00000001403322D5: bt      r11, r10
 * 00000001403322D9: jnb     loc_140332358
 * 00000001403322DF: nop
 * 00000001403322E0: mov     r11, offset _retpoline_image_bitmap
 * 00000001403322EA: mov     r11, [r11]
 * 00000001403322ED: test    r11, r11
 * 00000001403322F0: jz      short loc_14033233B
 * 00000001403322F2: mov     r10, rax
 * 00000001403322F5: shr     r10, 10h
 * 00000001403322F9: bt      [r11], r10
 * 00000001403322FD: jnb     short loc_140332325
 * 00000001403322FF: call    loc_140332320
 * 0000000140332304: int     3; Trap to Debugger
 * 0000000140332320: mov     [rsp+0], rax
 * 0000000140332324: retn
 * 0000000140332325: or      byte ptr gs:856h, 1
 * 000000014033232E: test    byte ptr gs:856h, 2
 * 0000000140332337: jnz     short loc_14033233B
 * 0000000140332339: jmp     short __guard_retpoline_exit_indirect_rax
 * 000000014033233B: lfence
 * 000000014033233E: jmp     rax
 * 0000000140332341: btr     r10, 0
 * 0000000140332346: bt      r11, r10
 * 000000014033234A: jnb     short loc_140332358
 * 000000014033234C: or      r10, 1
 * 0000000140332350: bt      r11, r10
 * 0000000140332354: jnb     short loc_140332358
 * 0000000140332356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140332358: mov     rcx, rax
 * 000000014033235B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140332365: call    loc_140332380
 * 000000014033236A: int     3; Trap to Debugger
 * 0000000140332380: mov     [rsp+0], rax
 * 0000000140332384: retn
 */
