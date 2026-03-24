/*
 * XREFs of KiOverflowTrap @ 0x1401C8F00
 * Callers:
 *     KiOverflowTrapShadow @ 0x14032E300 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x1401C8F00 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x1401C8F00
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8F00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8F00: sub     rsp, 8
 * 00000001401C8F04: push    rbp
 * 00000001401C8F05: sub     rsp, 158h
 * 00000001401C8F0C: lea     rbp, [rsp+80h]
 * 00000001401C8F14: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C8F18: mov     [rbp+0E8h+var_138], rax
 * 00000001401C8F1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C8F20: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C8F24: mov     [rbp+0E8h+var_120], r8
 * 00000001401C8F28: mov     [rbp+0E8h+var_118], r9
 * 00000001401C8F2C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C8F30: mov     [rbp+0E8h+var_108], r11
 * 00000001401C8F34: test    [rbp+0E8h+arg_0], 1
 * 00000001401C8F3B: jnz     short loc_1401C8F6C
 * 00000001401C8F3D: lfence
 * 00000001401C8F40: test    word ptr gs:860h, 1
 * 00000001401C8F4B: jnz     short loc_1401C8F55
 * 00000001401C8F4D: lfence
 * 00000001401C8F50: jmp     loc_1401C91BE
 * 00000001401C8F55: movzx   eax, word ptr gs:864h
 * 00000001401C8F5E: mov     ecx, 48h ; 'H'
 * 00000001401C8F63: xor     edx, edx
 * 00000001401C8F65: wrmsr
 * 00000001401C8F67: jmp     loc_1401C91BE
 * 00000001401C8F6C: test    cs:KiKvaShadow, 1
 * 00000001401C8F73: jnz     short loc_1401C8F78
 * 00000001401C8F75: swapgs
 * 00000001401C8F78: lfence
 * 00000001401C8F7B: mov     r10, gs:188h
 * 00000001401C8F84: mov     rcx, gs:188h
 * 00000001401C8F8D: mov     rcx, [rcx+220h]
 * 00000001401C8F94: mov     rcx, [rcx+830h]
 * 00000001401C8F9B: mov     gs:858h, rcx
 * 00000001401C8FA4: mov     cx, gs:850h
 * 00000001401C8FAD: mov     gs:852h, cx
 * 00000001401C8FB6: mov     cx, gs:860h
 * 00000001401C8FBF: mov     gs:854h, cx
 * 00000001401C8FC8: movzx   eax, word ptr gs:866h
 * 00000001401C8FD1: cmp     gs:864h, ax
 * 00000001401C8FDA: jz      short loc_1401C8FEE
 * 00000001401C8FDC: mov     gs:864h, ax
 * 00000001401C8FE5: mov     ecx, 48h ; 'H'
 * 00000001401C8FEA: xor     edx, edx
 * 00000001401C8FEC: wrmsr
 * 00000001401C8FEE: movzx   edx, word ptr gs:860h
 * 00000001401C8FF7: test    edx, 8
 * 00000001401C8FFD: jz      short loc_1401C9016
 * 00000001401C8FFF: mov     eax, 1
 * 00000001401C9004: xor     edx, edx
 * 00000001401C9006: mov     ecx, 49h ; 'I'
 * 00000001401C900B: wrmsr
 * 00000001401C900D: movzx   edx, word ptr gs:860h
 * 00000001401C9016: test    edx, 2
 * 00000001401C901C: jz      loc_1401C9147
 * 00000001401C9022: call    loc_1401C9135
 * 00000001401C9027: add     rsp, 8
 * 00000001401C902B: call    loc_1401C913E
 * 00000001401C9030: add     rsp, 8
 * 00000001401C9034: call    loc_1401C9027
 * 00000001401C9039: add     rsp, 8
 * 00000001401C903D: call    loc_1401C9030
 * 00000001401C9042: add     rsp, 8
 * 00000001401C9046: call    loc_1401C9039
 * 00000001401C904B: add     rsp, 8
 * 00000001401C904F: call    loc_1401C9042
 * 00000001401C9054: add     rsp, 8
 * 00000001401C9058: call    loc_1401C904B
 * 00000001401C905D: add     rsp, 8
 * 00000001401C9061: call    loc_1401C9054
 * 00000001401C9066: add     rsp, 8
 * 00000001401C906A: call    loc_1401C905D
 * 00000001401C906F: add     rsp, 8
 * 00000001401C9073: call    loc_1401C9066
 * 00000001401C9078: add     rsp, 8
 * 00000001401C907C: call    loc_1401C906F
 * 00000001401C9081: add     rsp, 8
 * 00000001401C9085: call    loc_1401C9078
 * 00000001401C908A: add     rsp, 8
 * 00000001401C908E: call    loc_1401C9081
 * 00000001401C9093: add     rsp, 8
 * 00000001401C9097: call    loc_1401C908A
 * 00000001401C909C: add     rsp, 8
 * 00000001401C90A0: call    loc_1401C9093
 * 00000001401C90A5: add     rsp, 8
 * 00000001401C90A9: call    loc_1401C909C
 * 00000001401C90AE: add     rsp, 8
 * 00000001401C90B2: call    loc_1401C90A5
 * 00000001401C90B7: add     rsp, 8
 * 00000001401C90BB: call    loc_1401C90AE
 * 00000001401C90C0: add     rsp, 8
 * 00000001401C90C4: call    loc_1401C90B7
 * 00000001401C90C9: add     rsp, 8
 * 00000001401C90CD: call    loc_1401C90C0
 * 00000001401C90D2: add     rsp, 8
 * 00000001401C90D6: call    loc_1401C90C9
 * 00000001401C90DB: add     rsp, 8
 * 00000001401C90DF: call    loc_1401C90D2
 * 00000001401C90E4: add     rsp, 8
 * 00000001401C90E8: call    loc_1401C90DB
 * 00000001401C90ED: add     rsp, 8
 * 00000001401C90F1: call    loc_1401C90E4
 * 00000001401C90F6: add     rsp, 8
 * 00000001401C90FA: call    loc_1401C90ED
 * 00000001401C90FF: add     rsp, 8
 * 00000001401C9103: call    loc_1401C90F6
 * 00000001401C9108: add     rsp, 8
 * 00000001401C910C: call    loc_1401C90FF
 * 00000001401C9111: add     rsp, 8
 * 00000001401C9115: call    loc_1401C9108
 * 00000001401C911A: add     rsp, 8
 * 00000001401C911E: call    loc_1401C9111
 * 00000001401C9123: add     rsp, 8
 * 00000001401C9127: call    loc_1401C911A
 * 00000001401C912C: add     rsp, 8
 * 00000001401C9130: call    loc_1401C9123
 * 00000001401C9135: add     rsp, 8
 * 00000001401C9139: call    loc_1401C912C
 * 00000001401C913E: add     rsp, 8
 * 00000001401C9142: mov     eax, 0DADAh
 * 00000001401C9147: test    edx, 200h
 * 00000001401C914D: jz      short loc_1401C9154
 * 00000001401C914F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C9154: lfence
 * 00000001401C9157: mov     byte ptr gs:856h, 0
 * 00000001401C9160: test    byte ptr [r10+3], 80h
 * 00000001401C9165: jz      short loc_1401C91A9
 * 00000001401C9167: mov     ecx, 0C0000102h
 * 00000001401C916C: rdmsr
 * 00000001401C916E: shl     rdx, 20h
 * 00000001401C9172: or      rax, rdx
 * 00000001401C9175: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C917C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C9184: cmp     [r10+0F0h], rax
 * 00000001401C918B: jz      short loc_1401C91A9
 * 00000001401C918D: mov     rdx, [r10+1F0h]
 * 00000001401C9194: bts     dword ptr [r10+74h], 8
 * 00000001401C919A: dec     word ptr [r10+1E6h]
 * 00000001401C91A2: mov     [rdx+80h], rax
 * 00000001401C91A9: test    byte ptr [r10+3], 3
 * 00000001401C91AE: mov     [rbp+0E8h+var_68], 0
 * 00000001401C91B7: jz      short loc_1401C91BE
 * 00000001401C91B9: call    KiSaveDebugRegisterState
 * 00000001401C91BE: cld
 * 00000001401C91BF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C91C3: ldmxcsr dword ptr gs:180h
 * 00000001401C91CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C91D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C91D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C91D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C91DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C91E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C91E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C91EE: jz      short loc_1401C91F1
 * 00000001401C91F0: sti
 * 00000001401C91F1: mov     ecx, 0C0000095h
 * 00000001401C91F6: xor     edx, edx
 * 00000001401C91F8: mov     r8, [rbp+0E8h]
 * 00000001401C91FF: dec     r8
 * 00000001401C9202: call    KiExceptionDispatch
 * 00000001401C9207: nop
 * 00000001401C9208: retn
 */
