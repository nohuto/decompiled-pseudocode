/*
 * XREFs of sub_1800098D0 @ 0x1800098D0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_180007DE8 @ 0x180007DE8 (sub_180007DE8.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800098D0 @ 0x1800098D0
 * Reason: Hex-Rays returned no pseudocode for 0x1800098D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800098D0: push    rbx
 * 00000001800098D2: sub     rsp, 20h
 * 00000001800098D6: lea     r9, qword_180166388
 * 00000001800098DD: xor     r8d, r8d
 * 00000001800098E0: lea     rdx, sub_180102300
 * 00000001800098E7: lea     rcx, unk_18011C9E0
 * 00000001800098EE: call    EtwEventRegister
 * 00000001800098F3: test    cs:byte_180166058, 8
 * 00000001800098FA: mov     ebx, eax
 * 00000001800098FC: jnz     loc_1800A921A
 * 0000000180009902: mov     eax, ebx
 * 0000000180009904: add     rsp, 20h
 * 0000000180009908: pop     rbx
 * 0000000180009909: retn
 * 00000001800A921A: lea     rcx, dword_18015F5C8
 * 00000001800A9221: call    sub_180007DE8
 * 00000001800A9226: nop
 * 00000001800A9227: jmp     loc_180009902
 */
