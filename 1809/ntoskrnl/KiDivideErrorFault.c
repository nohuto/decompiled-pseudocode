/*
 * XREFs of KiDivideErrorFault @ 0x1401C8000
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x14032F100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x1401C8000 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x1401C8000
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8000
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8000: sub     rsp, 8
 * 00000001401C8004: push    rbp
 * 00000001401C8005: sub     rsp, 158h
 * 00000001401C800C: lea     rbp, [rsp+80h]
 * 00000001401C8014: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C8018: mov     [rbp+0E8h+var_138], rax
 * 00000001401C801C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C8020: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C8024: mov     [rbp+0E8h+var_120], r8
 * 00000001401C8028: mov     [rbp+0E8h+var_118], r9
 * 00000001401C802C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C8030: mov     [rbp+0E8h+var_108], r11
 * 00000001401C8034: test    [rbp+0E8h+arg_0], 1
 * 00000001401C803B: jnz     short loc_1401C806C
 * 00000001401C803D: lfence
 * 00000001401C8040: test    word ptr gs:860h, 1
 * 00000001401C804B: jnz     short loc_1401C8055
 * 00000001401C804D: lfence
 * 00000001401C8050: jmp     loc_1401C82BE
 * 00000001401C8055: movzx   eax, word ptr gs:864h
 * 00000001401C805E: mov     ecx, 48h ; 'H'
 * 00000001401C8063: xor     edx, edx
 * 00000001401C8065: wrmsr
 * 00000001401C8067: jmp     loc_1401C82BE
 * 00000001401C806C: test    cs:KiKvaShadow, 1
 * 00000001401C8073: jnz     short loc_1401C8078
 * 00000001401C8075: swapgs
 * 00000001401C8078: lfence
 * 00000001401C807B: mov     r10, gs:188h
 * 00000001401C8084: mov     rcx, gs:188h
 * 00000001401C808D: mov     rcx, [rcx+220h]
 * 00000001401C8094: mov     rcx, [rcx+830h]
 * 00000001401C809B: mov     gs:858h, rcx
 * 00000001401C80A4: mov     cx, gs:850h
 * 00000001401C80AD: mov     gs:852h, cx
 * 00000001401C80B6: mov     cx, gs:860h
 * 00000001401C80BF: mov     gs:854h, cx
 * 00000001401C80C8: movzx   eax, word ptr gs:866h
 * 00000001401C80D1: cmp     gs:864h, ax
 * 00000001401C80DA: jz      short loc_1401C80EE
 * 00000001401C80DC: mov     gs:864h, ax
 * 00000001401C80E5: mov     ecx, 48h ; 'H'
 * 00000001401C80EA: xor     edx, edx
 * 00000001401C80EC: wrmsr
 * 00000001401C80EE: movzx   edx, word ptr gs:860h
 * 00000001401C80F7: test    edx, 8
 * 00000001401C80FD: jz      short loc_1401C8116
 * 00000001401C80FF: mov     eax, 1
 * 00000001401C8104: xor     edx, edx
 * 00000001401C8106: mov     ecx, 49h ; 'I'
 * 00000001401C810B: wrmsr
 * 00000001401C810D: movzx   edx, word ptr gs:860h
 * 00000001401C8116: test    edx, 2
 * 00000001401C811C: jz      loc_1401C8247
 * 00000001401C8122: call    loc_1401C8235
 * 00000001401C8127: add     rsp, 8
 * 00000001401C812B: call    loc_1401C823E
 * 00000001401C8130: add     rsp, 8
 * 00000001401C8134: call    loc_1401C8127
 * 00000001401C8139: add     rsp, 8
 * 00000001401C813D: call    loc_1401C8130
 * 00000001401C8142: add     rsp, 8
 * 00000001401C8146: call    loc_1401C8139
 * 00000001401C814B: add     rsp, 8
 * 00000001401C814F: call    loc_1401C8142
 * 00000001401C8154: add     rsp, 8
 * 00000001401C8158: call    loc_1401C814B
 * 00000001401C815D: add     rsp, 8
 * 00000001401C8161: call    loc_1401C8154
 * 00000001401C8166: add     rsp, 8
 * 00000001401C816A: call    loc_1401C815D
 * 00000001401C816F: add     rsp, 8
 * 00000001401C8173: call    loc_1401C8166
 * 00000001401C8178: add     rsp, 8
 * 00000001401C817C: call    loc_1401C816F
 * 00000001401C8181: add     rsp, 8
 * 00000001401C8185: call    loc_1401C8178
 * 00000001401C818A: add     rsp, 8
 * 00000001401C818E: call    loc_1401C8181
 * 00000001401C8193: add     rsp, 8
 * 00000001401C8197: call    loc_1401C818A
 * 00000001401C819C: add     rsp, 8
 * 00000001401C81A0: call    loc_1401C8193
 * 00000001401C81A5: add     rsp, 8
 * 00000001401C81A9: call    loc_1401C819C
 * 00000001401C81AE: add     rsp, 8
 * 00000001401C81B2: call    loc_1401C81A5
 * 00000001401C81B7: add     rsp, 8
 * 00000001401C81BB: call    loc_1401C81AE
 * 00000001401C81C0: add     rsp, 8
 * 00000001401C81C4: call    loc_1401C81B7
 * 00000001401C81C9: add     rsp, 8
 * 00000001401C81CD: call    loc_1401C81C0
 * 00000001401C81D2: add     rsp, 8
 * 00000001401C81D6: call    loc_1401C81C9
 * 00000001401C81DB: add     rsp, 8
 * 00000001401C81DF: call    loc_1401C81D2
 * 00000001401C81E4: add     rsp, 8
 * 00000001401C81E8: call    loc_1401C81DB
 * 00000001401C81ED: add     rsp, 8
 * 00000001401C81F1: call    loc_1401C81E4
 * 00000001401C81F6: add     rsp, 8
 * 00000001401C81FA: call    loc_1401C81ED
 * 00000001401C81FF: add     rsp, 8
 * 00000001401C8203: call    loc_1401C81F6
 * 00000001401C8208: add     rsp, 8
 * 00000001401C820C: call    loc_1401C81FF
 * 00000001401C8211: add     rsp, 8
 * 00000001401C8215: call    loc_1401C8208
 * 00000001401C821A: add     rsp, 8
 * 00000001401C821E: call    loc_1401C8211
 * 00000001401C8223: add     rsp, 8
 * 00000001401C8227: call    loc_1401C821A
 * 00000001401C822C: add     rsp, 8
 * 00000001401C8230: call    loc_1401C8223
 * 00000001401C8235: add     rsp, 8
 * 00000001401C8239: call    loc_1401C822C
 * 00000001401C823E: add     rsp, 8
 * 00000001401C8242: mov     eax, 0DADAh
 * 00000001401C8247: test    edx, 200h
 * 00000001401C824D: jz      short loc_1401C8254
 * 00000001401C824F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C8254: lfence
 * 00000001401C8257: mov     byte ptr gs:856h, 0
 * 00000001401C8260: test    byte ptr [r10+3], 80h
 * 00000001401C8265: jz      short loc_1401C82A9
 * 00000001401C8267: mov     ecx, 0C0000102h
 * 00000001401C826C: rdmsr
 * 00000001401C826E: shl     rdx, 20h
 * 00000001401C8272: or      rax, rdx
 * 00000001401C8275: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C827C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C8284: cmp     [r10+0F0h], rax
 * 00000001401C828B: jz      short loc_1401C82A9
 * 00000001401C828D: mov     rdx, [r10+1F0h]
 * 00000001401C8294: bts     dword ptr [r10+74h], 8
 * 00000001401C829A: dec     word ptr [r10+1E6h]
 * 00000001401C82A2: mov     [rdx+80h], rax
 * 00000001401C82A9: test    byte ptr [r10+3], 3
 * 00000001401C82AE: mov     [rbp+0E8h+var_68], 0
 * 00000001401C82B7: jz      short loc_1401C82BE
 * 00000001401C82B9: call    KiSaveDebugRegisterState
 * 00000001401C82BE: cld
 * 00000001401C82BF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C82C3: ldmxcsr dword ptr gs:180h
 * 00000001401C82CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C82D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C82D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C82D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C82DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C82E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C82E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C82EE: jz      short loc_1401C82F1
 * 00000001401C82F0: sti
 * 00000001401C82F1: mov     ecx, 10000003h
 * 00000001401C82F6: xor     edx, edx
 * 00000001401C82F8: mov     r8, [rbp+0E8h]
 * 00000001401C82FF: call    KiExceptionDispatch
 * 00000001401C8304: nop
 * 00000001401C8305: retn
 */
