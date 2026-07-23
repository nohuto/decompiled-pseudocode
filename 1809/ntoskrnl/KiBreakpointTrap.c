/*
 * XREFs of KiBreakpointTrap @ 0x1401C8CC0
 * Callers:
 *     KiBreakpointTrapShadow @ 0x14032F280 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x1401C8CC0 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x1401C8CC0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8CC0: sub     rsp, 8
 * 00000001401C8CC4: push    rbp
 * 00000001401C8CC5: sub     rsp, 158h
 * 00000001401C8CCC: lea     rbp, [rsp+80h]
 * 00000001401C8CD4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C8CD8: mov     [rbp+0E8h+var_138], rax
 * 00000001401C8CDC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C8CE0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C8CE4: mov     [rbp+0E8h+var_120], r8
 * 00000001401C8CE8: mov     [rbp+0E8h+var_118], r9
 * 00000001401C8CEC: mov     [rbp+0E8h+var_110], r10
 * 00000001401C8CF0: mov     [rbp+0E8h+var_108], r11
 * 00000001401C8CF4: test    [rbp+0E8h+arg_0], 1
 * 00000001401C8CFB: jnz     short loc_1401C8D2C
 * 00000001401C8CFD: lfence
 * 00000001401C8D00: test    word ptr gs:860h, 1
 * 00000001401C8D0B: jnz     short loc_1401C8D15
 * 00000001401C8D0D: lfence
 * 00000001401C8D10: jmp     loc_1401C8F7E
 * 00000001401C8D15: movzx   eax, word ptr gs:864h
 * 00000001401C8D1E: mov     ecx, 48h ; 'H'
 * 00000001401C8D23: xor     edx, edx
 * 00000001401C8D25: wrmsr
 * 00000001401C8D27: jmp     loc_1401C8F7E
 * 00000001401C8D2C: test    cs:KiKvaShadow, 1
 * 00000001401C8D33: jnz     short loc_1401C8D38
 * 00000001401C8D35: swapgs
 * 00000001401C8D38: lfence
 * 00000001401C8D3B: mov     r10, gs:188h
 * 00000001401C8D44: mov     rcx, gs:188h
 * 00000001401C8D4D: mov     rcx, [rcx+220h]
 * 00000001401C8D54: mov     rcx, [rcx+830h]
 * 00000001401C8D5B: mov     gs:858h, rcx
 * 00000001401C8D64: mov     cx, gs:850h
 * 00000001401C8D6D: mov     gs:852h, cx
 * 00000001401C8D76: mov     cx, gs:860h
 * 00000001401C8D7F: mov     gs:854h, cx
 * 00000001401C8D88: movzx   eax, word ptr gs:866h
 * 00000001401C8D91: cmp     gs:864h, ax
 * 00000001401C8D9A: jz      short loc_1401C8DAE
 * 00000001401C8D9C: mov     gs:864h, ax
 * 00000001401C8DA5: mov     ecx, 48h ; 'H'
 * 00000001401C8DAA: xor     edx, edx
 * 00000001401C8DAC: wrmsr
 * 00000001401C8DAE: movzx   edx, word ptr gs:860h
 * 00000001401C8DB7: test    edx, 8
 * 00000001401C8DBD: jz      short loc_1401C8DD6
 * 00000001401C8DBF: mov     eax, 1
 * 00000001401C8DC4: xor     edx, edx
 * 00000001401C8DC6: mov     ecx, 49h ; 'I'
 * 00000001401C8DCB: wrmsr
 * 00000001401C8DCD: movzx   edx, word ptr gs:860h
 * 00000001401C8DD6: test    edx, 2
 * 00000001401C8DDC: jz      loc_1401C8F07
 * 00000001401C8DE2: call    loc_1401C8EF5
 * 00000001401C8DE7: add     rsp, 8
 * 00000001401C8DEB: call    loc_1401C8EFE
 * 00000001401C8DF0: add     rsp, 8
 * 00000001401C8DF4: call    loc_1401C8DE7
 * 00000001401C8DF9: add     rsp, 8
 * 00000001401C8DFD: call    loc_1401C8DF0
 * 00000001401C8E02: add     rsp, 8
 * 00000001401C8E06: call    loc_1401C8DF9
 * 00000001401C8E0B: add     rsp, 8
 * 00000001401C8E0F: call    loc_1401C8E02
 * 00000001401C8E14: add     rsp, 8
 * 00000001401C8E18: call    loc_1401C8E0B
 * 00000001401C8E1D: add     rsp, 8
 * 00000001401C8E21: call    loc_1401C8E14
 * 00000001401C8E26: add     rsp, 8
 * 00000001401C8E2A: call    loc_1401C8E1D
 * 00000001401C8E2F: add     rsp, 8
 * 00000001401C8E33: call    loc_1401C8E26
 * 00000001401C8E38: add     rsp, 8
 * 00000001401C8E3C: call    loc_1401C8E2F
 * 00000001401C8E41: add     rsp, 8
 * 00000001401C8E45: call    loc_1401C8E38
 * 00000001401C8E4A: add     rsp, 8
 * 00000001401C8E4E: call    loc_1401C8E41
 * 00000001401C8E53: add     rsp, 8
 * 00000001401C8E57: call    loc_1401C8E4A
 * 00000001401C8E5C: add     rsp, 8
 * 00000001401C8E60: call    loc_1401C8E53
 * 00000001401C8E65: add     rsp, 8
 * 00000001401C8E69: call    loc_1401C8E5C
 * 00000001401C8E6E: add     rsp, 8
 * 00000001401C8E72: call    loc_1401C8E65
 * 00000001401C8E77: add     rsp, 8
 * 00000001401C8E7B: call    loc_1401C8E6E
 * 00000001401C8E80: add     rsp, 8
 * 00000001401C8E84: call    loc_1401C8E77
 * 00000001401C8E89: add     rsp, 8
 * 00000001401C8E8D: call    loc_1401C8E80
 * 00000001401C8E92: add     rsp, 8
 * 00000001401C8E96: call    loc_1401C8E89
 * 00000001401C8E9B: add     rsp, 8
 * 00000001401C8E9F: call    loc_1401C8E92
 * 00000001401C8EA4: add     rsp, 8
 * 00000001401C8EA8: call    loc_1401C8E9B
 * 00000001401C8EAD: add     rsp, 8
 * 00000001401C8EB1: call    loc_1401C8EA4
 * 00000001401C8EB6: add     rsp, 8
 * 00000001401C8EBA: call    loc_1401C8EAD
 * 00000001401C8EBF: add     rsp, 8
 * 00000001401C8EC3: call    loc_1401C8EB6
 * 00000001401C8EC8: add     rsp, 8
 * 00000001401C8ECC: call    loc_1401C8EBF
 * 00000001401C8ED1: add     rsp, 8
 * 00000001401C8ED5: call    loc_1401C8EC8
 * 00000001401C8EDA: add     rsp, 8
 * 00000001401C8EDE: call    loc_1401C8ED1
 * 00000001401C8EE3: add     rsp, 8
 * 00000001401C8EE7: call    loc_1401C8EDA
 * 00000001401C8EEC: add     rsp, 8
 * 00000001401C8EF0: call    loc_1401C8EE3
 * 00000001401C8EF5: add     rsp, 8
 * 00000001401C8EF9: call    loc_1401C8EEC
 * 00000001401C8EFE: add     rsp, 8
 * 00000001401C8F02: mov     eax, 0DADAh
 * 00000001401C8F07: test    edx, 200h
 * 00000001401C8F0D: jz      short loc_1401C8F14
 * 00000001401C8F0F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C8F14: lfence
 * 00000001401C8F17: mov     byte ptr gs:856h, 0
 * 00000001401C8F20: test    byte ptr [r10+3], 80h
 * 00000001401C8F25: jz      short loc_1401C8F69
 * 00000001401C8F27: mov     ecx, 0C0000102h
 * 00000001401C8F2C: rdmsr
 * 00000001401C8F2E: shl     rdx, 20h
 * 00000001401C8F32: or      rax, rdx
 * 00000001401C8F35: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C8F3C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C8F44: cmp     [r10+0F0h], rax
 * 00000001401C8F4B: jz      short loc_1401C8F69
 * 00000001401C8F4D: mov     rdx, [r10+1F0h]
 * 00000001401C8F54: bts     dword ptr [r10+74h], 8
 * 00000001401C8F5A: dec     word ptr [r10+1E6h]
 * 00000001401C8F62: mov     [rdx+80h], rax
 * 00000001401C8F69: test    byte ptr [r10+3], 3
 * 00000001401C8F6E: mov     [rbp+0E8h+var_68], 0
 * 00000001401C8F77: jz      short loc_1401C8F7E
 * 00000001401C8F79: call    KiSaveDebugRegisterState
 * 00000001401C8F7E: cld
 * 00000001401C8F7F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C8F83: ldmxcsr dword ptr gs:180h
 * 00000001401C8F8C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C8F90: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C8F94: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C8F98: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C8F9C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C8FA0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C8FA4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C8FAE: jz      short loc_1401C8FB1
 * 00000001401C8FB0: sti
 * 00000001401C8FB1: mov     ecx, 80000003h
 * 00000001401C8FB6: mov     edx, 1
 * 00000001401C8FBB: mov     r8, [rbp+0E8h]
 * 00000001401C8FC2: dec     r8
 * 00000001401C8FC5: mov     r9d, 0
 * 00000001401C8FCB: call    KiExceptionDispatch
 * 00000001401C8FD0: nop
 * 00000001401C8FD1: retn
 */
