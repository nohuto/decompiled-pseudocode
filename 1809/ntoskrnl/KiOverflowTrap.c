/*
 * XREFs of KiOverflowTrap @ 0x1401C9000
 * Callers:
 *     KiOverflowTrapShadow @ 0x14032F300 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x1401C9000 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x1401C9000
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9000
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9000: sub     rsp, 8
 * 00000001401C9004: push    rbp
 * 00000001401C9005: sub     rsp, 158h
 * 00000001401C900C: lea     rbp, [rsp+80h]
 * 00000001401C9014: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C9018: mov     [rbp+0E8h+var_138], rax
 * 00000001401C901C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C9020: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C9024: mov     [rbp+0E8h+var_120], r8
 * 00000001401C9028: mov     [rbp+0E8h+var_118], r9
 * 00000001401C902C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C9030: mov     [rbp+0E8h+var_108], r11
 * 00000001401C9034: test    [rbp+0E8h+arg_0], 1
 * 00000001401C903B: jnz     short loc_1401C906C
 * 00000001401C903D: lfence
 * 00000001401C9040: test    word ptr gs:860h, 1
 * 00000001401C904B: jnz     short loc_1401C9055
 * 00000001401C904D: lfence
 * 00000001401C9050: jmp     loc_1401C92BE
 * 00000001401C9055: movzx   eax, word ptr gs:864h
 * 00000001401C905E: mov     ecx, 48h ; 'H'
 * 00000001401C9063: xor     edx, edx
 * 00000001401C9065: wrmsr
 * 00000001401C9067: jmp     loc_1401C92BE
 * 00000001401C906C: test    cs:KiKvaShadow, 1
 * 00000001401C9073: jnz     short loc_1401C9078
 * 00000001401C9075: swapgs
 * 00000001401C9078: lfence
 * 00000001401C907B: mov     r10, gs:188h
 * 00000001401C9084: mov     rcx, gs:188h
 * 00000001401C908D: mov     rcx, [rcx+220h]
 * 00000001401C9094: mov     rcx, [rcx+830h]
 * 00000001401C909B: mov     gs:858h, rcx
 * 00000001401C90A4: mov     cx, gs:850h
 * 00000001401C90AD: mov     gs:852h, cx
 * 00000001401C90B6: mov     cx, gs:860h
 * 00000001401C90BF: mov     gs:854h, cx
 * 00000001401C90C8: movzx   eax, word ptr gs:866h
 * 00000001401C90D1: cmp     gs:864h, ax
 * 00000001401C90DA: jz      short loc_1401C90EE
 * 00000001401C90DC: mov     gs:864h, ax
 * 00000001401C90E5: mov     ecx, 48h ; 'H'
 * 00000001401C90EA: xor     edx, edx
 * 00000001401C90EC: wrmsr
 * 00000001401C90EE: movzx   edx, word ptr gs:860h
 * 00000001401C90F7: test    edx, 8
 * 00000001401C90FD: jz      short loc_1401C9116
 * 00000001401C90FF: mov     eax, 1
 * 00000001401C9104: xor     edx, edx
 * 00000001401C9106: mov     ecx, 49h ; 'I'
 * 00000001401C910B: wrmsr
 * 00000001401C910D: movzx   edx, word ptr gs:860h
 * 00000001401C9116: test    edx, 2
 * 00000001401C911C: jz      loc_1401C9247
 * 00000001401C9122: call    loc_1401C9235
 * 00000001401C9127: add     rsp, 8
 * 00000001401C912B: call    loc_1401C923E
 * 00000001401C9130: add     rsp, 8
 * 00000001401C9134: call    loc_1401C9127
 * 00000001401C9139: add     rsp, 8
 * 00000001401C913D: call    loc_1401C9130
 * 00000001401C9142: add     rsp, 8
 * 00000001401C9146: call    loc_1401C9139
 * 00000001401C914B: add     rsp, 8
 * 00000001401C914F: call    loc_1401C9142
 * 00000001401C9154: add     rsp, 8
 * 00000001401C9158: call    loc_1401C914B
 * 00000001401C915D: add     rsp, 8
 * 00000001401C9161: call    loc_1401C9154
 * 00000001401C9166: add     rsp, 8
 * 00000001401C916A: call    loc_1401C915D
 * 00000001401C916F: add     rsp, 8
 * 00000001401C9173: call    loc_1401C9166
 * 00000001401C9178: add     rsp, 8
 * 00000001401C917C: call    loc_1401C916F
 * 00000001401C9181: add     rsp, 8
 * 00000001401C9185: call    loc_1401C9178
 * 00000001401C918A: add     rsp, 8
 * 00000001401C918E: call    loc_1401C9181
 * 00000001401C9193: add     rsp, 8
 * 00000001401C9197: call    loc_1401C918A
 * 00000001401C919C: add     rsp, 8
 * 00000001401C91A0: call    loc_1401C9193
 * 00000001401C91A5: add     rsp, 8
 * 00000001401C91A9: call    loc_1401C919C
 * 00000001401C91AE: add     rsp, 8
 * 00000001401C91B2: call    loc_1401C91A5
 * 00000001401C91B7: add     rsp, 8
 * 00000001401C91BB: call    loc_1401C91AE
 * 00000001401C91C0: add     rsp, 8
 * 00000001401C91C4: call    loc_1401C91B7
 * 00000001401C91C9: add     rsp, 8
 * 00000001401C91CD: call    loc_1401C91C0
 * 00000001401C91D2: add     rsp, 8
 * 00000001401C91D6: call    loc_1401C91C9
 * 00000001401C91DB: add     rsp, 8
 * 00000001401C91DF: call    loc_1401C91D2
 * 00000001401C91E4: add     rsp, 8
 * 00000001401C91E8: call    loc_1401C91DB
 * 00000001401C91ED: add     rsp, 8
 * 00000001401C91F1: call    loc_1401C91E4
 * 00000001401C91F6: add     rsp, 8
 * 00000001401C91FA: call    loc_1401C91ED
 * 00000001401C91FF: add     rsp, 8
 * 00000001401C9203: call    loc_1401C91F6
 * 00000001401C9208: add     rsp, 8
 * 00000001401C920C: call    loc_1401C91FF
 * 00000001401C9211: add     rsp, 8
 * 00000001401C9215: call    loc_1401C9208
 * 00000001401C921A: add     rsp, 8
 * 00000001401C921E: call    loc_1401C9211
 * 00000001401C9223: add     rsp, 8
 * 00000001401C9227: call    loc_1401C921A
 * 00000001401C922C: add     rsp, 8
 * 00000001401C9230: call    loc_1401C9223
 * 00000001401C9235: add     rsp, 8
 * 00000001401C9239: call    loc_1401C922C
 * 00000001401C923E: add     rsp, 8
 * 00000001401C9242: mov     eax, 0DADAh
 * 00000001401C9247: test    edx, 200h
 * 00000001401C924D: jz      short loc_1401C9254
 * 00000001401C924F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C9254: lfence
 * 00000001401C9257: mov     byte ptr gs:856h, 0
 * 00000001401C9260: test    byte ptr [r10+3], 80h
 * 00000001401C9265: jz      short loc_1401C92A9
 * 00000001401C9267: mov     ecx, 0C0000102h
 * 00000001401C926C: rdmsr
 * 00000001401C926E: shl     rdx, 20h
 * 00000001401C9272: or      rax, rdx
 * 00000001401C9275: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C927C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C9284: cmp     [r10+0F0h], rax
 * 00000001401C928B: jz      short loc_1401C92A9
 * 00000001401C928D: mov     rdx, [r10+1F0h]
 * 00000001401C9294: bts     dword ptr [r10+74h], 8
 * 00000001401C929A: dec     word ptr [r10+1E6h]
 * 00000001401C92A2: mov     [rdx+80h], rax
 * 00000001401C92A9: test    byte ptr [r10+3], 3
 * 00000001401C92AE: mov     [rbp+0E8h+var_68], 0
 * 00000001401C92B7: jz      short loc_1401C92BE
 * 00000001401C92B9: call    KiSaveDebugRegisterState
 * 00000001401C92BE: cld
 * 00000001401C92BF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C92C3: ldmxcsr dword ptr gs:180h
 * 00000001401C92CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C92D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C92D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C92D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C92DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C92E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C92E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C92EE: jz      short loc_1401C92F1
 * 00000001401C92F0: sti
 * 00000001401C92F1: mov     ecx, 0C0000095h
 * 00000001401C92F6: xor     edx, edx
 * 00000001401C92F8: mov     r8, [rbp+0E8h]
 * 00000001401C92FF: dec     r8
 * 00000001401C9302: call    KiExceptionDispatch
 * 00000001401C9307: nop
 * 00000001401C9308: retn
 */
