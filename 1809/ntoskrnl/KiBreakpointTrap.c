/*
 * XREFs of KiBreakpointTrap @ 0x1401C8BC0
 * Callers:
 *     KiBreakpointTrapShadow @ 0x14032E280 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x1401C8BC0 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x1401C8BC0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8BC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8BC0: sub     rsp, 8
 * 00000001401C8BC4: push    rbp
 * 00000001401C8BC5: sub     rsp, 158h
 * 00000001401C8BCC: lea     rbp, [rsp+80h]
 * 00000001401C8BD4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C8BD8: mov     [rbp+0E8h+var_138], rax
 * 00000001401C8BDC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C8BE0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C8BE4: mov     [rbp+0E8h+var_120], r8
 * 00000001401C8BE8: mov     [rbp+0E8h+var_118], r9
 * 00000001401C8BEC: mov     [rbp+0E8h+var_110], r10
 * 00000001401C8BF0: mov     [rbp+0E8h+var_108], r11
 * 00000001401C8BF4: test    [rbp+0E8h+arg_0], 1
 * 00000001401C8BFB: jnz     short loc_1401C8C2C
 * 00000001401C8BFD: lfence
 * 00000001401C8C00: test    word ptr gs:860h, 1
 * 00000001401C8C0B: jnz     short loc_1401C8C15
 * 00000001401C8C0D: lfence
 * 00000001401C8C10: jmp     loc_1401C8E7E
 * 00000001401C8C15: movzx   eax, word ptr gs:864h
 * 00000001401C8C1E: mov     ecx, 48h ; 'H'
 * 00000001401C8C23: xor     edx, edx
 * 00000001401C8C25: wrmsr
 * 00000001401C8C27: jmp     loc_1401C8E7E
 * 00000001401C8C2C: test    cs:KiKvaShadow, 1
 * 00000001401C8C33: jnz     short loc_1401C8C38
 * 00000001401C8C35: swapgs
 * 00000001401C8C38: lfence
 * 00000001401C8C3B: mov     r10, gs:188h
 * 00000001401C8C44: mov     rcx, gs:188h
 * 00000001401C8C4D: mov     rcx, [rcx+220h]
 * 00000001401C8C54: mov     rcx, [rcx+830h]
 * 00000001401C8C5B: mov     gs:858h, rcx
 * 00000001401C8C64: mov     cx, gs:850h
 * 00000001401C8C6D: mov     gs:852h, cx
 * 00000001401C8C76: mov     cx, gs:860h
 * 00000001401C8C7F: mov     gs:854h, cx
 * 00000001401C8C88: movzx   eax, word ptr gs:866h
 * 00000001401C8C91: cmp     gs:864h, ax
 * 00000001401C8C9A: jz      short loc_1401C8CAE
 * 00000001401C8C9C: mov     gs:864h, ax
 * 00000001401C8CA5: mov     ecx, 48h ; 'H'
 * 00000001401C8CAA: xor     edx, edx
 * 00000001401C8CAC: wrmsr
 * 00000001401C8CAE: movzx   edx, word ptr gs:860h
 * 00000001401C8CB7: test    edx, 8
 * 00000001401C8CBD: jz      short loc_1401C8CD6
 * 00000001401C8CBF: mov     eax, 1
 * 00000001401C8CC4: xor     edx, edx
 * 00000001401C8CC6: mov     ecx, 49h ; 'I'
 * 00000001401C8CCB: wrmsr
 * 00000001401C8CCD: movzx   edx, word ptr gs:860h
 * 00000001401C8CD6: test    edx, 2
 * 00000001401C8CDC: jz      loc_1401C8E07
 * 00000001401C8CE2: call    loc_1401C8DF5
 * 00000001401C8CE7: add     rsp, 8
 * 00000001401C8CEB: call    loc_1401C8DFE
 * 00000001401C8CF0: add     rsp, 8
 * 00000001401C8CF4: call    loc_1401C8CE7
 * 00000001401C8CF9: add     rsp, 8
 * 00000001401C8CFD: call    loc_1401C8CF0
 * 00000001401C8D02: add     rsp, 8
 * 00000001401C8D06: call    loc_1401C8CF9
 * 00000001401C8D0B: add     rsp, 8
 * 00000001401C8D0F: call    loc_1401C8D02
 * 00000001401C8D14: add     rsp, 8
 * 00000001401C8D18: call    loc_1401C8D0B
 * 00000001401C8D1D: add     rsp, 8
 * 00000001401C8D21: call    loc_1401C8D14
 * 00000001401C8D26: add     rsp, 8
 * 00000001401C8D2A: call    loc_1401C8D1D
 * 00000001401C8D2F: add     rsp, 8
 * 00000001401C8D33: call    loc_1401C8D26
 * 00000001401C8D38: add     rsp, 8
 * 00000001401C8D3C: call    loc_1401C8D2F
 * 00000001401C8D41: add     rsp, 8
 * 00000001401C8D45: call    loc_1401C8D38
 * 00000001401C8D4A: add     rsp, 8
 * 00000001401C8D4E: call    loc_1401C8D41
 * 00000001401C8D53: add     rsp, 8
 * 00000001401C8D57: call    loc_1401C8D4A
 * 00000001401C8D5C: add     rsp, 8
 * 00000001401C8D60: call    loc_1401C8D53
 * 00000001401C8D65: add     rsp, 8
 * 00000001401C8D69: call    loc_1401C8D5C
 * 00000001401C8D6E: add     rsp, 8
 * 00000001401C8D72: call    loc_1401C8D65
 * 00000001401C8D77: add     rsp, 8
 * 00000001401C8D7B: call    loc_1401C8D6E
 * 00000001401C8D80: add     rsp, 8
 * 00000001401C8D84: call    loc_1401C8D77
 * 00000001401C8D89: add     rsp, 8
 * 00000001401C8D8D: call    loc_1401C8D80
 * 00000001401C8D92: add     rsp, 8
 * 00000001401C8D96: call    loc_1401C8D89
 * 00000001401C8D9B: add     rsp, 8
 * 00000001401C8D9F: call    loc_1401C8D92
 * 00000001401C8DA4: add     rsp, 8
 * 00000001401C8DA8: call    loc_1401C8D9B
 * 00000001401C8DAD: add     rsp, 8
 * 00000001401C8DB1: call    loc_1401C8DA4
 * 00000001401C8DB6: add     rsp, 8
 * 00000001401C8DBA: call    loc_1401C8DAD
 * 00000001401C8DBF: add     rsp, 8
 * 00000001401C8DC3: call    loc_1401C8DB6
 * 00000001401C8DC8: add     rsp, 8
 * 00000001401C8DCC: call    loc_1401C8DBF
 * 00000001401C8DD1: add     rsp, 8
 * 00000001401C8DD5: call    loc_1401C8DC8
 * 00000001401C8DDA: add     rsp, 8
 * 00000001401C8DDE: call    loc_1401C8DD1
 * 00000001401C8DE3: add     rsp, 8
 * 00000001401C8DE7: call    loc_1401C8DDA
 * 00000001401C8DEC: add     rsp, 8
 * 00000001401C8DF0: call    loc_1401C8DE3
 * 00000001401C8DF5: add     rsp, 8
 * 00000001401C8DF9: call    loc_1401C8DEC
 * 00000001401C8DFE: add     rsp, 8
 * 00000001401C8E02: mov     eax, 0DADAh
 * 00000001401C8E07: test    edx, 200h
 * 00000001401C8E0D: jz      short loc_1401C8E14
 * 00000001401C8E0F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C8E14: lfence
 * 00000001401C8E17: mov     byte ptr gs:856h, 0
 * 00000001401C8E20: test    byte ptr [r10+3], 80h
 * 00000001401C8E25: jz      short loc_1401C8E69
 * 00000001401C8E27: mov     ecx, 0C0000102h
 * 00000001401C8E2C: rdmsr
 * 00000001401C8E2E: shl     rdx, 20h
 * 00000001401C8E32: or      rax, rdx
 * 00000001401C8E35: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C8E3C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C8E44: cmp     [r10+0F0h], rax
 * 00000001401C8E4B: jz      short loc_1401C8E69
 * 00000001401C8E4D: mov     rdx, [r10+1F0h]
 * 00000001401C8E54: bts     dword ptr [r10+74h], 8
 * 00000001401C8E5A: dec     word ptr [r10+1E6h]
 * 00000001401C8E62: mov     [rdx+80h], rax
 * 00000001401C8E69: test    byte ptr [r10+3], 3
 * 00000001401C8E6E: mov     [rbp+0E8h+var_68], 0
 * 00000001401C8E77: jz      short loc_1401C8E7E
 * 00000001401C8E79: call    KiSaveDebugRegisterState
 * 00000001401C8E7E: cld
 * 00000001401C8E7F: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C8E83: ldmxcsr dword ptr gs:180h
 * 00000001401C8E8C: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C8E90: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C8E94: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C8E98: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C8E9C: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C8EA0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C8EA4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C8EAE: jz      short loc_1401C8EB1
 * 00000001401C8EB0: sti
 * 00000001401C8EB1: mov     ecx, 80000003h
 * 00000001401C8EB6: mov     edx, 1
 * 00000001401C8EBB: mov     r8, [rbp+0E8h]
 * 00000001401C8EC2: dec     r8
 * 00000001401C8EC5: mov     r9d, 0
 * 00000001401C8ECB: call    KiExceptionDispatch
 * 00000001401C8ED0: nop
 * 00000001401C8ED1: retn
 */
