/*
 * XREFs of KyStartUserThread @ 0x1401C4B50
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1401C4B50 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1401C4E10 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1401C4B50
 * Reason: Hex-Rays returned no pseudocode for 0x1401C4B50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C4B50: sub     rsp, 8
 * 00000001401C4B54: push    rbp
 * 00000001401C4B55: sub     rsp, 158h
 * 00000001401C4B5C: lea     rbp, [rsp+80h]
 * 00000001401C4B64: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C4B68: mov     [rbp+0E8h+var_138], rax
 * 00000001401C4B6C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C4B70: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C4B74: mov     [rbp+0E8h+var_120], r8
 * 00000001401C4B78: mov     [rbp+0E8h+var_118], r9
 * 00000001401C4B7C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C4B80: mov     [rbp+0E8h+var_108], r11
 * 00000001401C4B84: test    [rbp+0E8h+arg_0], 1
 * 00000001401C4B8B: jnz     short loc_1401C4BBC
 * 00000001401C4B8D: lfence
 * 00000001401C4B90: test    word ptr gs:860h, 1
 * 00000001401C4B9B: jnz     short loc_1401C4BA5
 * 00000001401C4B9D: lfence
 * 00000001401C4BA0: jmp     loc_1401C4DC5
 * 00000001401C4BA5: movzx   eax, word ptr gs:864h
 * 00000001401C4BAE: mov     ecx, 48h ; 'H'
 * 00000001401C4BB3: xor     edx, edx
 * 00000001401C4BB5: wrmsr
 * 00000001401C4BB7: jmp     loc_1401C4DC5
 * 00000001401C4BBC: test    cs:KiKvaShadow, 1
 * 00000001401C4BC3: jnz     short loc_1401C4BC8
 * 00000001401C4BC5: swapgs
 * 00000001401C4BC8: lfence
 * 00000001401C4BCB: mov     r10, gs:188h
 * 00000001401C4BD4: mov     rcx, gs:188h
 * 00000001401C4BDD: mov     rcx, [rcx+220h]
 * 00000001401C4BE4: mov     rcx, [rcx+830h]
 * 00000001401C4BEB: mov     gs:858h, rcx
 * 00000001401C4BF4: mov     cx, gs:850h
 * 00000001401C4BFD: mov     gs:852h, cx
 * 00000001401C4C06: mov     cx, gs:860h
 * 00000001401C4C0F: mov     gs:854h, cx
 * 00000001401C4C18: movzx   eax, word ptr gs:866h
 * 00000001401C4C21: cmp     gs:864h, ax
 * 00000001401C4C2A: jz      short loc_1401C4C3E
 * 00000001401C4C2C: mov     gs:864h, ax
 * 00000001401C4C35: mov     ecx, 48h ; 'H'
 * 00000001401C4C3A: xor     edx, edx
 * 00000001401C4C3C: wrmsr
 * 00000001401C4C3E: movzx   edx, word ptr gs:860h
 * 00000001401C4C47: test    edx, 8
 * 00000001401C4C4D: jz      short loc_1401C4C66
 * 00000001401C4C4F: mov     eax, 1
 * 00000001401C4C54: xor     edx, edx
 * 00000001401C4C56: mov     ecx, 49h ; 'I'
 * 00000001401C4C5B: wrmsr
 * 00000001401C4C5D: movzx   edx, word ptr gs:860h
 * 00000001401C4C66: test    edx, 2
 * 00000001401C4C6C: jz      loc_1401C4D97
 * 00000001401C4C72: call    loc_1401C4D85
 * 00000001401C4C77: add     rsp, 8
 * 00000001401C4C7B: call    loc_1401C4D8E
 * 00000001401C4C80: add     rsp, 8
 * 00000001401C4C84: call    loc_1401C4C77
 * 00000001401C4C89: add     rsp, 8
 * 00000001401C4C8D: call    loc_1401C4C80
 * 00000001401C4C92: add     rsp, 8
 * 00000001401C4C96: call    loc_1401C4C89
 * 00000001401C4C9B: add     rsp, 8
 * 00000001401C4C9F: call    loc_1401C4C92
 * 00000001401C4CA4: add     rsp, 8
 * 00000001401C4CA8: call    loc_1401C4C9B
 * 00000001401C4CAD: add     rsp, 8
 * 00000001401C4CB1: call    loc_1401C4CA4
 * 00000001401C4CB6: add     rsp, 8
 * 00000001401C4CBA: call    loc_1401C4CAD
 * 00000001401C4CBF: add     rsp, 8
 * 00000001401C4CC3: call    loc_1401C4CB6
 * 00000001401C4CC8: add     rsp, 8
 * 00000001401C4CCC: call    loc_1401C4CBF
 * 00000001401C4CD1: add     rsp, 8
 * 00000001401C4CD5: call    loc_1401C4CC8
 * 00000001401C4CDA: add     rsp, 8
 * 00000001401C4CDE: call    loc_1401C4CD1
 * 00000001401C4CE3: add     rsp, 8
 * 00000001401C4CE7: call    loc_1401C4CDA
 * 00000001401C4CEC: add     rsp, 8
 * 00000001401C4CF0: call    loc_1401C4CE3
 * 00000001401C4CF5: add     rsp, 8
 * 00000001401C4CF9: call    loc_1401C4CEC
 * 00000001401C4CFE: add     rsp, 8
 * 00000001401C4D02: call    loc_1401C4CF5
 * 00000001401C4D07: add     rsp, 8
 * 00000001401C4D0B: call    loc_1401C4CFE
 * 00000001401C4D10: add     rsp, 8
 * 00000001401C4D14: call    loc_1401C4D07
 * 00000001401C4D19: add     rsp, 8
 * 00000001401C4D1D: call    loc_1401C4D10
 * 00000001401C4D22: add     rsp, 8
 * 00000001401C4D26: call    loc_1401C4D19
 * 00000001401C4D2B: add     rsp, 8
 * 00000001401C4D2F: call    loc_1401C4D22
 * 00000001401C4D34: add     rsp, 8
 * 00000001401C4D38: call    loc_1401C4D2B
 * 00000001401C4D3D: add     rsp, 8
 * 00000001401C4D41: call    loc_1401C4D34
 * 00000001401C4D46: add     rsp, 8
 * 00000001401C4D4A: call    loc_1401C4D3D
 * 00000001401C4D4F: add     rsp, 8
 * 00000001401C4D53: call    loc_1401C4D46
 * 00000001401C4D58: add     rsp, 8
 * 00000001401C4D5C: call    loc_1401C4D4F
 * 00000001401C4D61: add     rsp, 8
 * 00000001401C4D65: call    loc_1401C4D58
 * 00000001401C4D6A: add     rsp, 8
 * 00000001401C4D6E: call    loc_1401C4D61
 * 00000001401C4D73: add     rsp, 8
 * 00000001401C4D77: call    loc_1401C4D6A
 * 00000001401C4D7C: add     rsp, 8
 * 00000001401C4D80: call    loc_1401C4D73
 * 00000001401C4D85: add     rsp, 8
 * 00000001401C4D89: call    loc_1401C4D7C
 * 00000001401C4D8E: add     rsp, 8
 * 00000001401C4D92: mov     eax, 0DADAh
 * 00000001401C4D97: test    edx, 200h
 * 00000001401C4D9D: jz      short loc_1401C4DA4
 * 00000001401C4D9F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C4DA4: lfence
 * 00000001401C4DA7: mov     byte ptr gs:856h, 0
 * 00000001401C4DB0: test    byte ptr [r10+3], 3
 * 00000001401C4DB5: mov     [rbp+0E8h+var_68], 0
 * 00000001401C4DBE: jz      short loc_1401C4DC5
 * 00000001401C4DC0: call    KiSaveDebugRegisterState
 * 00000001401C4DC5: cld
 * 00000001401C4DC6: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C4DCA: ldmxcsr dword ptr gs:180h
 * 00000001401C4DD3: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C4DD7: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C4DDB: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C4DDF: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C4DE3: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C4DE7: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C4DEB: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C4DF5: jz      short loc_1401C4DF8
 * 00000001401C4DF7: sti
 * 00000001401C4DF8: call    KxStartUserThread
 * 00000001401C4DFD: nop     dword ptr [rax]
 * 00000001401C4E00: nop
 * 00000001401C4E01: retn
 */
