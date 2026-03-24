/*
 * XREFs of KiDivideErrorFault @ 0x1401C7F00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x14032E100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x1401C7F00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x1401C7F00
 * Reason: Hex-Rays returned no pseudocode for 0x1401C7F00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C7F00: sub     rsp, 8
 * 00000001401C7F04: push    rbp
 * 00000001401C7F05: sub     rsp, 158h
 * 00000001401C7F0C: lea     rbp, [rsp+80h]
 * 00000001401C7F14: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C7F18: mov     [rbp+0E8h+var_138], rax
 * 00000001401C7F1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C7F20: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C7F24: mov     [rbp+0E8h+var_120], r8
 * 00000001401C7F28: mov     [rbp+0E8h+var_118], r9
 * 00000001401C7F2C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C7F30: mov     [rbp+0E8h+var_108], r11
 * 00000001401C7F34: test    [rbp+0E8h+arg_0], 1
 * 00000001401C7F3B: jnz     short loc_1401C7F6C
 * 00000001401C7F3D: lfence
 * 00000001401C7F40: test    word ptr gs:860h, 1
 * 00000001401C7F4B: jnz     short loc_1401C7F55
 * 00000001401C7F4D: lfence
 * 00000001401C7F50: jmp     loc_1401C81BE
 * 00000001401C7F55: movzx   eax, word ptr gs:864h
 * 00000001401C7F5E: mov     ecx, 48h ; 'H'
 * 00000001401C7F63: xor     edx, edx
 * 00000001401C7F65: wrmsr
 * 00000001401C7F67: jmp     loc_1401C81BE
 * 00000001401C7F6C: test    cs:KiKvaShadow, 1
 * 00000001401C7F73: jnz     short loc_1401C7F78
 * 00000001401C7F75: swapgs
 * 00000001401C7F78: lfence
 * 00000001401C7F7B: mov     r10, gs:188h
 * 00000001401C7F84: mov     rcx, gs:188h
 * 00000001401C7F8D: mov     rcx, [rcx+220h]
 * 00000001401C7F94: mov     rcx, [rcx+830h]
 * 00000001401C7F9B: mov     gs:858h, rcx
 * 00000001401C7FA4: mov     cx, gs:850h
 * 00000001401C7FAD: mov     gs:852h, cx
 * 00000001401C7FB6: mov     cx, gs:860h
 * 00000001401C7FBF: mov     gs:854h, cx
 * 00000001401C7FC8: movzx   eax, word ptr gs:866h
 * 00000001401C7FD1: cmp     gs:864h, ax
 * 00000001401C7FDA: jz      short loc_1401C7FEE
 * 00000001401C7FDC: mov     gs:864h, ax
 * 00000001401C7FE5: mov     ecx, 48h ; 'H'
 * 00000001401C7FEA: xor     edx, edx
 * 00000001401C7FEC: wrmsr
 * 00000001401C7FEE: movzx   edx, word ptr gs:860h
 * 00000001401C7FF7: test    edx, 8
 * 00000001401C7FFD: jz      short loc_1401C8016
 * 00000001401C7FFF: mov     eax, 1
 * 00000001401C8004: xor     edx, edx
 * 00000001401C8006: mov     ecx, 49h ; 'I'
 * 00000001401C800B: wrmsr
 * 00000001401C800D: movzx   edx, word ptr gs:860h
 * 00000001401C8016: test    edx, 2
 * 00000001401C801C: jz      loc_1401C8147
 * 00000001401C8022: call    loc_1401C8135
 * 00000001401C8027: add     rsp, 8
 * 00000001401C802B: call    loc_1401C813E
 * 00000001401C8030: add     rsp, 8
 * 00000001401C8034: call    loc_1401C8027
 * 00000001401C8039: add     rsp, 8
 * 00000001401C803D: call    loc_1401C8030
 * 00000001401C8042: add     rsp, 8
 * 00000001401C8046: call    loc_1401C8039
 * 00000001401C804B: add     rsp, 8
 * 00000001401C804F: call    loc_1401C8042
 * 00000001401C8054: add     rsp, 8
 * 00000001401C8058: call    loc_1401C804B
 * 00000001401C805D: add     rsp, 8
 * 00000001401C8061: call    loc_1401C8054
 * 00000001401C8066: add     rsp, 8
 * 00000001401C806A: call    loc_1401C805D
 * 00000001401C806F: add     rsp, 8
 * 00000001401C8073: call    loc_1401C8066
 * 00000001401C8078: add     rsp, 8
 * 00000001401C807C: call    loc_1401C806F
 * 00000001401C8081: add     rsp, 8
 * 00000001401C8085: call    loc_1401C8078
 * 00000001401C808A: add     rsp, 8
 * 00000001401C808E: call    loc_1401C8081
 * 00000001401C8093: add     rsp, 8
 * 00000001401C8097: call    loc_1401C808A
 * 00000001401C809C: add     rsp, 8
 * 00000001401C80A0: call    loc_1401C8093
 * 00000001401C80A5: add     rsp, 8
 * 00000001401C80A9: call    loc_1401C809C
 * 00000001401C80AE: add     rsp, 8
 * 00000001401C80B2: call    loc_1401C80A5
 * 00000001401C80B7: add     rsp, 8
 * 00000001401C80BB: call    loc_1401C80AE
 * 00000001401C80C0: add     rsp, 8
 * 00000001401C80C4: call    loc_1401C80B7
 * 00000001401C80C9: add     rsp, 8
 * 00000001401C80CD: call    loc_1401C80C0
 * 00000001401C80D2: add     rsp, 8
 * 00000001401C80D6: call    loc_1401C80C9
 * 00000001401C80DB: add     rsp, 8
 * 00000001401C80DF: call    loc_1401C80D2
 * 00000001401C80E4: add     rsp, 8
 * 00000001401C80E8: call    loc_1401C80DB
 * 00000001401C80ED: add     rsp, 8
 * 00000001401C80F1: call    loc_1401C80E4
 * 00000001401C80F6: add     rsp, 8
 * 00000001401C80FA: call    loc_1401C80ED
 * 00000001401C80FF: add     rsp, 8
 * 00000001401C8103: call    loc_1401C80F6
 * 00000001401C8108: add     rsp, 8
 * 00000001401C810C: call    loc_1401C80FF
 * 00000001401C8111: add     rsp, 8
 * 00000001401C8115: call    loc_1401C8108
 * 00000001401C811A: add     rsp, 8
 * 00000001401C811E: call    loc_1401C8111
 * 00000001401C8123: add     rsp, 8
 * 00000001401C8127: call    loc_1401C811A
 * 00000001401C812C: add     rsp, 8
 * 00000001401C8130: call    loc_1401C8123
 * 00000001401C8135: add     rsp, 8
 * 00000001401C8139: call    loc_1401C812C
 * 00000001401C813E: add     rsp, 8
 * 00000001401C8142: mov     eax, 0DADAh
 * 00000001401C8147: test    edx, 200h
 * 00000001401C814D: jz      short loc_1401C8154
 * 00000001401C814F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C8154: lfence
 * 00000001401C8157: mov     byte ptr gs:856h, 0
 * 00000001401C8160: test    byte ptr [r10+3], 80h
 * 00000001401C8165: jz      short loc_1401C81A9
 * 00000001401C8167: mov     ecx, 0C0000102h
 * 00000001401C816C: rdmsr
 * 00000001401C816E: shl     rdx, 20h
 * 00000001401C8172: or      rax, rdx
 * 00000001401C8175: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C817C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C8184: cmp     [r10+0F0h], rax
 * 00000001401C818B: jz      short loc_1401C81A9
 * 00000001401C818D: mov     rdx, [r10+1F0h]
 * 00000001401C8194: bts     dword ptr [r10+74h], 8
 * 00000001401C819A: dec     word ptr [r10+1E6h]
 * 00000001401C81A2: mov     [rdx+80h], rax
 * 00000001401C81A9: test    byte ptr [r10+3], 3
 * 00000001401C81AE: mov     [rbp+0E8h+var_68], 0
 * 00000001401C81B7: jz      short loc_1401C81BE
 * 00000001401C81B9: call    KiSaveDebugRegisterState
 * 00000001401C81BE: cld
 * 00000001401C81BF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C81C3: ldmxcsr dword ptr gs:180h
 * 00000001401C81CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C81D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C81D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C81D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C81DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C81E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C81E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C81EE: jz      short loc_1401C81F1
 * 00000001401C81F0: sti
 * 00000001401C81F1: mov     ecx, 10000003h
 * 00000001401C81F6: xor     edx, edx
 * 00000001401C81F8: mov     r8, [rbp+0E8h]
 * 00000001401C81FF: call    KiExceptionDispatch
 * 00000001401C8204: nop
 * 00000001401C8205: retn
 */
