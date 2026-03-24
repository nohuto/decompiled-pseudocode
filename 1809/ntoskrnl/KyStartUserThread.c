/*
 * XREFs of KyStartUserThread @ 0x1401C49F0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1401C49F0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1401C4CB0 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1401C49F0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C49F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C49F0: sub     rsp, 8
 * 00000001401C49F4: push    rbp
 * 00000001401C49F5: sub     rsp, 158h
 * 00000001401C49FC: lea     rbp, [rsp+80h]
 * 00000001401C4A04: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C4A08: mov     [rbp+0E8h+var_138], rax
 * 00000001401C4A0C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C4A10: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C4A14: mov     [rbp+0E8h+var_120], r8
 * 00000001401C4A18: mov     [rbp+0E8h+var_118], r9
 * 00000001401C4A1C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C4A20: mov     [rbp+0E8h+var_108], r11
 * 00000001401C4A24: test    [rbp+0E8h+arg_0], 1
 * 00000001401C4A2B: jnz     short loc_1401C4A5C
 * 00000001401C4A2D: lfence
 * 00000001401C4A30: test    word ptr gs:860h, 1
 * 00000001401C4A3B: jnz     short loc_1401C4A45
 * 00000001401C4A3D: lfence
 * 00000001401C4A40: jmp     loc_1401C4C65
 * 00000001401C4A45: movzx   eax, word ptr gs:864h
 * 00000001401C4A4E: mov     ecx, 48h ; 'H'
 * 00000001401C4A53: xor     edx, edx
 * 00000001401C4A55: wrmsr
 * 00000001401C4A57: jmp     loc_1401C4C65
 * 00000001401C4A5C: test    cs:KiKvaShadow, 1
 * 00000001401C4A63: jnz     short loc_1401C4A68
 * 00000001401C4A65: swapgs
 * 00000001401C4A68: lfence
 * 00000001401C4A6B: mov     r10, gs:188h
 * 00000001401C4A74: mov     rcx, gs:188h
 * 00000001401C4A7D: mov     rcx, [rcx+220h]
 * 00000001401C4A84: mov     rcx, [rcx+830h]
 * 00000001401C4A8B: mov     gs:858h, rcx
 * 00000001401C4A94: mov     cx, gs:850h
 * 00000001401C4A9D: mov     gs:852h, cx
 * 00000001401C4AA6: mov     cx, gs:860h
 * 00000001401C4AAF: mov     gs:854h, cx
 * 00000001401C4AB8: movzx   eax, word ptr gs:866h
 * 00000001401C4AC1: cmp     gs:864h, ax
 * 00000001401C4ACA: jz      short loc_1401C4ADE
 * 00000001401C4ACC: mov     gs:864h, ax
 * 00000001401C4AD5: mov     ecx, 48h ; 'H'
 * 00000001401C4ADA: xor     edx, edx
 * 00000001401C4ADC: wrmsr
 * 00000001401C4ADE: movzx   edx, word ptr gs:860h
 * 00000001401C4AE7: test    edx, 8
 * 00000001401C4AED: jz      short loc_1401C4B06
 * 00000001401C4AEF: mov     eax, 1
 * 00000001401C4AF4: xor     edx, edx
 * 00000001401C4AF6: mov     ecx, 49h ; 'I'
 * 00000001401C4AFB: wrmsr
 * 00000001401C4AFD: movzx   edx, word ptr gs:860h
 * 00000001401C4B06: test    edx, 2
 * 00000001401C4B0C: jz      loc_1401C4C37
 * 00000001401C4B12: call    loc_1401C4C25
 * 00000001401C4B17: add     rsp, 8
 * 00000001401C4B1B: call    loc_1401C4C2E
 * 00000001401C4B20: add     rsp, 8
 * 00000001401C4B24: call    loc_1401C4B17
 * 00000001401C4B29: add     rsp, 8
 * 00000001401C4B2D: call    loc_1401C4B20
 * 00000001401C4B32: add     rsp, 8
 * 00000001401C4B36: call    loc_1401C4B29
 * 00000001401C4B3B: add     rsp, 8
 * 00000001401C4B3F: call    loc_1401C4B32
 * 00000001401C4B44: add     rsp, 8
 * 00000001401C4B48: call    loc_1401C4B3B
 * 00000001401C4B4D: add     rsp, 8
 * 00000001401C4B51: call    loc_1401C4B44
 * 00000001401C4B56: add     rsp, 8
 * 00000001401C4B5A: call    loc_1401C4B4D
 * 00000001401C4B5F: add     rsp, 8
 * 00000001401C4B63: call    loc_1401C4B56
 * 00000001401C4B68: add     rsp, 8
 * 00000001401C4B6C: call    loc_1401C4B5F
 * 00000001401C4B71: add     rsp, 8
 * 00000001401C4B75: call    loc_1401C4B68
 * 00000001401C4B7A: add     rsp, 8
 * 00000001401C4B7E: call    loc_1401C4B71
 * 00000001401C4B83: add     rsp, 8
 * 00000001401C4B87: call    loc_1401C4B7A
 * 00000001401C4B8C: add     rsp, 8
 * 00000001401C4B90: call    loc_1401C4B83
 * 00000001401C4B95: add     rsp, 8
 * 00000001401C4B99: call    loc_1401C4B8C
 * 00000001401C4B9E: add     rsp, 8
 * 00000001401C4BA2: call    loc_1401C4B95
 * 00000001401C4BA7: add     rsp, 8
 * 00000001401C4BAB: call    loc_1401C4B9E
 * 00000001401C4BB0: add     rsp, 8
 * 00000001401C4BB4: call    loc_1401C4BA7
 * 00000001401C4BB9: add     rsp, 8
 * 00000001401C4BBD: call    loc_1401C4BB0
 * 00000001401C4BC2: add     rsp, 8
 * 00000001401C4BC6: call    loc_1401C4BB9
 * 00000001401C4BCB: add     rsp, 8
 * 00000001401C4BCF: call    loc_1401C4BC2
 * 00000001401C4BD4: add     rsp, 8
 * 00000001401C4BD8: call    loc_1401C4BCB
 * 00000001401C4BDD: add     rsp, 8
 * 00000001401C4BE1: call    loc_1401C4BD4
 * 00000001401C4BE6: add     rsp, 8
 * 00000001401C4BEA: call    loc_1401C4BDD
 * 00000001401C4BEF: add     rsp, 8
 * 00000001401C4BF3: call    loc_1401C4BE6
 * 00000001401C4BF8: add     rsp, 8
 * 00000001401C4BFC: call    loc_1401C4BEF
 * 00000001401C4C01: add     rsp, 8
 * 00000001401C4C05: call    loc_1401C4BF8
 * 00000001401C4C0A: add     rsp, 8
 * 00000001401C4C0E: call    loc_1401C4C01
 * 00000001401C4C13: add     rsp, 8
 * 00000001401C4C17: call    loc_1401C4C0A
 * 00000001401C4C1C: add     rsp, 8
 * 00000001401C4C20: call    loc_1401C4C13
 * 00000001401C4C25: add     rsp, 8
 * 00000001401C4C29: call    loc_1401C4C1C
 * 00000001401C4C2E: add     rsp, 8
 * 00000001401C4C32: mov     eax, 0DADAh
 * 00000001401C4C37: test    edx, 200h
 * 00000001401C4C3D: jz      short loc_1401C4C44
 * 00000001401C4C3F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C4C44: lfence
 * 00000001401C4C47: mov     byte ptr gs:856h, 0
 * 00000001401C4C50: test    byte ptr [r10+3], 3
 * 00000001401C4C55: mov     [rbp+0E8h+var_68], 0
 * 00000001401C4C5E: jz      short loc_1401C4C65
 * 00000001401C4C60: call    KiSaveDebugRegisterState
 * 00000001401C4C65: cld
 * 00000001401C4C66: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C4C6A: ldmxcsr dword ptr gs:180h
 * 00000001401C4C73: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C4C77: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C4C7B: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C4C7F: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C4C83: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C4C87: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C4C8B: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C4C95: jz      short loc_1401C4C98
 * 00000001401C4C97: sti
 * 00000001401C4C98: call    KxStartUserThread
 * 00000001401C4C9D: nop     dword ptr [rax]
 * 00000001401C4CA0: nop
 * 00000001401C4CA1: retn
 */
