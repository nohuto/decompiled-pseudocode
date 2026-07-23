/*
 * XREFs of KiStackFault @ 0x1401CAF80
 * Callers:
 *     KiStackFaultShadow @ 0x14032F700 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1401CAF80 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1401CAF80
 * Reason: Hex-Rays returned no pseudocode for 0x1401CAF80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CAF80: push    rbp
 * 00000001401CAF81: sub     rsp, 158h
 * 00000001401CAF88: lea     rbp, [rsp+80h]
 * 00000001401CAF90: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CAF94: mov     [rbp+0D8h+var_128], rax
 * 00000001401CAF98: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CAF9C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CAFA0: mov     [rbp+0D8h+var_110], r8
 * 00000001401CAFA4: mov     [rbp+0D8h+var_108], r9
 * 00000001401CAFA8: mov     [rbp+0D8h+var_100], r10
 * 00000001401CAFAC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CAFB0: test    [rbp+0D8h+arg_8], 1
 * 00000001401CAFB7: jnz     short loc_1401CAFE8
 * 00000001401CAFB9: lfence
 * 00000001401CAFBC: test    word ptr gs:860h, 1
 * 00000001401CAFC7: jnz     short loc_1401CAFD1
 * 00000001401CAFC9: lfence
 * 00000001401CAFCC: jmp     loc_1401CB23A
 * 00000001401CAFD1: movzx   eax, word ptr gs:864h
 * 00000001401CAFDA: mov     ecx, 48h ; 'H'
 * 00000001401CAFDF: xor     edx, edx
 * 00000001401CAFE1: wrmsr
 * 00000001401CAFE3: jmp     loc_1401CB23A
 * 00000001401CAFE8: test    cs:KiKvaShadow, 1
 * 00000001401CAFEF: jnz     short loc_1401CAFF4
 * 00000001401CAFF1: swapgs
 * 00000001401CAFF4: lfence
 * 00000001401CAFF7: mov     r10, gs:188h
 * 00000001401CB000: mov     rcx, gs:188h
 * 00000001401CB009: mov     rcx, [rcx+220h]
 * 00000001401CB010: mov     rcx, [rcx+830h]
 * 00000001401CB017: mov     gs:858h, rcx
 * 00000001401CB020: mov     cx, gs:850h
 * 00000001401CB029: mov     gs:852h, cx
 * 00000001401CB032: mov     cx, gs:860h
 * 00000001401CB03B: mov     gs:854h, cx
 * 00000001401CB044: movzx   eax, word ptr gs:866h
 * 00000001401CB04D: cmp     gs:864h, ax
 * 00000001401CB056: jz      short loc_1401CB06A
 * 00000001401CB058: mov     gs:864h, ax
 * 00000001401CB061: mov     ecx, 48h ; 'H'
 * 00000001401CB066: xor     edx, edx
 * 00000001401CB068: wrmsr
 * 00000001401CB06A: movzx   edx, word ptr gs:860h
 * 00000001401CB073: test    edx, 8
 * 00000001401CB079: jz      short loc_1401CB092
 * 00000001401CB07B: mov     eax, 1
 * 00000001401CB080: xor     edx, edx
 * 00000001401CB082: mov     ecx, 49h ; 'I'
 * 00000001401CB087: wrmsr
 * 00000001401CB089: movzx   edx, word ptr gs:860h
 * 00000001401CB092: test    edx, 2
 * 00000001401CB098: jz      loc_1401CB1C3
 * 00000001401CB09E: call    loc_1401CB1B1
 * 00000001401CB0A3: add     rsp, 8
 * 00000001401CB0A7: call    loc_1401CB1BA
 * 00000001401CB0AC: add     rsp, 8
 * 00000001401CB0B0: call    loc_1401CB0A3
 * 00000001401CB0B5: add     rsp, 8
 * 00000001401CB0B9: call    loc_1401CB0AC
 * 00000001401CB0BE: add     rsp, 8
 * 00000001401CB0C2: call    loc_1401CB0B5
 * 00000001401CB0C7: add     rsp, 8
 * 00000001401CB0CB: call    loc_1401CB0BE
 * 00000001401CB0D0: add     rsp, 8
 * 00000001401CB0D4: call    loc_1401CB0C7
 * 00000001401CB0D9: add     rsp, 8
 * 00000001401CB0DD: call    loc_1401CB0D0
 * 00000001401CB0E2: add     rsp, 8
 * 00000001401CB0E6: call    loc_1401CB0D9
 * 00000001401CB0EB: add     rsp, 8
 * 00000001401CB0EF: call    loc_1401CB0E2
 * 00000001401CB0F4: add     rsp, 8
 * 00000001401CB0F8: call    loc_1401CB0EB
 * 00000001401CB0FD: add     rsp, 8
 * 00000001401CB101: call    loc_1401CB0F4
 * 00000001401CB106: add     rsp, 8
 * 00000001401CB10A: call    loc_1401CB0FD
 * 00000001401CB10F: add     rsp, 8
 * 00000001401CB113: call    loc_1401CB106
 * 00000001401CB118: add     rsp, 8
 * 00000001401CB11C: call    loc_1401CB10F
 * 00000001401CB121: add     rsp, 8
 * 00000001401CB125: call    loc_1401CB118
 * 00000001401CB12A: add     rsp, 8
 * 00000001401CB12E: call    loc_1401CB121
 * 00000001401CB133: add     rsp, 8
 * 00000001401CB137: call    loc_1401CB12A
 * 00000001401CB13C: add     rsp, 8
 * 00000001401CB140: call    loc_1401CB133
 * 00000001401CB145: add     rsp, 8
 * 00000001401CB149: call    loc_1401CB13C
 * 00000001401CB14E: add     rsp, 8
 * 00000001401CB152: call    loc_1401CB145
 * 00000001401CB157: add     rsp, 8
 * 00000001401CB15B: call    loc_1401CB14E
 * 00000001401CB160: add     rsp, 8
 * 00000001401CB164: call    loc_1401CB157
 * 00000001401CB169: add     rsp, 8
 * 00000001401CB16D: call    loc_1401CB160
 * 00000001401CB172: add     rsp, 8
 * 00000001401CB176: call    loc_1401CB169
 * 00000001401CB17B: add     rsp, 8
 * 00000001401CB17F: call    loc_1401CB172
 * 00000001401CB184: add     rsp, 8
 * 00000001401CB188: call    loc_1401CB17B
 * 00000001401CB18D: add     rsp, 8
 * 00000001401CB191: call    loc_1401CB184
 * 00000001401CB196: add     rsp, 8
 * 00000001401CB19A: call    loc_1401CB18D
 * 00000001401CB19F: add     rsp, 8
 * 00000001401CB1A3: call    loc_1401CB196
 * 00000001401CB1A8: add     rsp, 8
 * 00000001401CB1AC: call    loc_1401CB19F
 * 00000001401CB1B1: add     rsp, 8
 * 00000001401CB1B5: call    loc_1401CB1A8
 * 00000001401CB1BA: add     rsp, 8
 * 00000001401CB1BE: mov     eax, 0DADAh
 * 00000001401CB1C3: test    edx, 200h
 * 00000001401CB1C9: jz      short loc_1401CB1D0
 * 00000001401CB1CB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CB1D0: lfence
 * 00000001401CB1D3: mov     byte ptr gs:856h, 0
 * 00000001401CB1DC: test    byte ptr [r10+3], 80h
 * 00000001401CB1E1: jz      short loc_1401CB225
 * 00000001401CB1E3: mov     ecx, 0C0000102h
 * 00000001401CB1E8: rdmsr
 * 00000001401CB1EA: shl     rdx, 20h
 * 00000001401CB1EE: or      rax, rdx
 * 00000001401CB1F1: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CB1F8: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CB200: cmp     [r10+0F0h], rax
 * 00000001401CB207: jz      short loc_1401CB225
 * 00000001401CB209: mov     rdx, [r10+1F0h]
 * 00000001401CB210: bts     dword ptr [r10+74h], 8
 * 00000001401CB216: dec     word ptr [r10+1E6h]
 * 00000001401CB21E: mov     [rdx+80h], rax
 * 00000001401CB225: test    byte ptr [r10+3], 3
 * 00000001401CB22A: mov     [rbp+0D8h+var_58], 0
 * 00000001401CB233: jz      short loc_1401CB23A
 * 00000001401CB235: call    KiSaveDebugRegisterState
 * 00000001401CB23A: cld
 * 00000001401CB23B: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CB23F: ldmxcsr dword ptr gs:180h
 * 00000001401CB248: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CB24C: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CB250: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CB254: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CB258: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CB25C: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CB260: mov     eax, [rbp+0E0h]
 * 00000001401CB266: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CB270: jz      short loc_1401CB273
 * 00000001401CB272: sti
 * 00000001401CB273: mov     ecx, 0C0000005h
 * 00000001401CB278: mov     edx, 2
 * 00000001401CB27D: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CB284: mov     r9d, [rbp+0E0h]
 * 00000001401CB28B: or      r9d, 3
 * 00000001401CB28F: and     r9d, 0FFFFh
 * 00000001401CB296: test    [rbp+0D8h+arg_8], 1
 * 00000001401CB29D: jnz     short loc_1401CB2A3
 * 00000001401CB29F: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001401CB2A3: xor     r10, r10
 * 00000001401CB2A6: call    KiExceptionDispatch
 * 00000001401CB2AB: nop
 * 00000001401CB2AC: retn
 */
