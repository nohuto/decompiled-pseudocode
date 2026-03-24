/*
 * XREFs of __guard_retpoline_indirect_cfg_rax @ 0x1403312A0
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_indirect_cfg_rax @ 0x1403312A0 (__guard_retpoline_indirect_cfg_rax.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_indirect_cfg_rax @ 0x1403312A0
 * Reason: Hex-Rays returned no pseudocode for 0x1403312A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403312A0: mov     r11, offset _guard_icall_bitmap
 * 00000001403312AA: mov     r11, [r11]
 * 00000001403312AD: test    rax, rax
 * 00000001403312B0: jge     loc_140331358
 * 00000001403312B6: test    r11, r11
 * 00000001403312B9: jz      short __guard_retpoline_indirect_rax
 * 00000001403312BB: mov     r10, rax
 * 00000001403312BE: shr     r10, 9
 * 00000001403312C2: mov     r11, [r11+r10*8]
 * 00000001403312C6: mov     r10, rax
 * 00000001403312C9: shr     r10, 3
 * 00000001403312CD: test    al, 0Fh
 * 00000001403312CF: jnz     loc_140331341
 * 00000001403312D5: bt      r11, r10
 * 00000001403312D9: jnb     loc_140331358
 * 00000001403312DF: nop
 * 00000001403312E0: mov     r11, offset _retpoline_image_bitmap
 * 00000001403312EA: mov     r11, [r11]
 * 00000001403312ED: test    r11, r11
 * 00000001403312F0: jz      short loc_14033133B
 * 00000001403312F2: mov     r10, rax
 * 00000001403312F5: shr     r10, 10h
 * 00000001403312F9: bt      [r11], r10
 * 00000001403312FD: jnb     short loc_140331325
 * 00000001403312FF: call    loc_140331320
 * 0000000140331304: int     3; Trap to Debugger
 * 0000000140331320: mov     [rsp+0], rax
 * 0000000140331324: retn
 * 0000000140331325: or      byte ptr gs:856h, 1
 * 000000014033132E: test    byte ptr gs:856h, 2
 * 0000000140331337: jnz     short loc_14033133B
 * 0000000140331339: jmp     short __guard_retpoline_exit_indirect_rax
 * 000000014033133B: lfence
 * 000000014033133E: jmp     rax
 * 0000000140331341: btr     r10, 0
 * 0000000140331346: bt      r11, r10
 * 000000014033134A: jnb     short loc_140331358
 * 000000014033134C: or      r10, 1
 * 0000000140331350: bt      r11, r10
 * 0000000140331354: jnb     short loc_140331358
 * 0000000140331356: jmp     short __guard_retpoline_indirect_rax
 * 0000000140331358: mov     rcx, rax
 * 000000014033135B: mov     rax, offset _guard_icall_bugcheck
 * 0000000140331365: call    loc_140331380
 * 000000014033136A: int     3; Trap to Debugger
 * 0000000140331380: mov     [rsp+0], rax
 * 0000000140331384: retn
 */
