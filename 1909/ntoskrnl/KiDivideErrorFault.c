/*
 * XREFs of KiDivideErrorFault @ 0x1401CF000
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140350100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x1401CF000 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x1401CF000
 * Reason: Hex-Rays returned no pseudocode for 0x1401CF000
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CF000: sub     rsp, 8
 * 00000001401CF004: push    rbp
 * 00000001401CF005: sub     rsp, 158h
 * 00000001401CF00C: lea     rbp, [rsp+80h]
 * 00000001401CF014: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CF018: mov     [rbp+0E8h+var_138], rax
 * 00000001401CF01C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CF020: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CF024: mov     [rbp+0E8h+var_120], r8
 * 00000001401CF028: mov     [rbp+0E8h+var_118], r9
 * 00000001401CF02C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CF030: mov     [rbp+0E8h+var_108], r11
 * 00000001401CF034: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF03B: jnz     short loc_1401CF06A
 * 00000001401CF03D: lfence
 * 00000001401CF040: test    byte ptr gs:278h, 1
 * 00000001401CF049: jnz     short loc_1401CF053
 * 00000001401CF04B: lfence
 * 00000001401CF04E: jmp     loc_1401CF2AF
 * 00000001401CF053: movzx   eax, byte ptr gs:27Ah
 * 00000001401CF05C: mov     ecx, 48h ; 'H'
 * 00000001401CF061: xor     edx, edx
 * 00000001401CF063: wrmsr
 * 00000001401CF065: jmp     loc_1401CF2AF
 * 00000001401CF06A: test    cs:KiKvaShadow, 1
 * 00000001401CF071: jnz     short loc_1401CF076
 * 00000001401CF073: swapgs
 * 00000001401CF076: lfence
 * 00000001401CF079: mov     r10, gs:188h
 * 00000001401CF082: mov     rcx, gs:188h
 * 00000001401CF08B: mov     rcx, [rcx+220h]
 * 00000001401CF092: mov     rcx, [rcx+860h]
 * 00000001401CF099: mov     gs:270h, rcx
 * 00000001401CF0A2: mov     cl, gs:850h
 * 00000001401CF0AA: mov     gs:851h, cl
 * 00000001401CF0B2: mov     cl, gs:278h
 * 00000001401CF0BA: mov     gs:852h, cl
 * 00000001401CF0C2: movzx   eax, byte ptr gs:27Bh
 * 00000001401CF0CB: cmp     gs:27Ah, al
 * 00000001401CF0D3: jz      short loc_1401CF0E6
 * 00000001401CF0D5: mov     gs:27Ah, al
 * 00000001401CF0DD: mov     ecx, 48h ; 'H'
 * 00000001401CF0E2: xor     edx, edx
 * 00000001401CF0E4: wrmsr
 * 00000001401CF0E6: movzx   edx, byte ptr gs:278h
 * 00000001401CF0EF: test    edx, 8
 * 00000001401CF0F5: jz      short loc_1401CF10A
 * 00000001401CF0F7: mov     eax, 1
 * 00000001401CF0FC: xor     edx, edx
 * 00000001401CF0FE: mov     ecx, 49h ; 'I'
 * 00000001401CF103: wrmsr
 * 00000001401CF105: jmp     loc_1401CF248
 * 00000001401CF10A: test    edx, 2
 * 00000001401CF110: jz      loc_1401CF245
 * 00000001401CF116: test    byte ptr gs:279h, 4
 * 00000001401CF11F: jnz     loc_1401CF245
 * 00000001401CF125: call    loc_1401CF238
 * 00000001401CF12A: add     rsp, 8
 * 00000001401CF12E: call    loc_1401CF241
 * 00000001401CF133: add     rsp, 8
 * 00000001401CF137: call    loc_1401CF12A
 * 00000001401CF13C: add     rsp, 8
 * 00000001401CF140: call    loc_1401CF133
 * 00000001401CF145: add     rsp, 8
 * 00000001401CF149: call    loc_1401CF13C
 * 00000001401CF14E: add     rsp, 8
 * 00000001401CF152: call    loc_1401CF145
 * 00000001401CF157: add     rsp, 8
 * 00000001401CF15B: call    loc_1401CF14E
 * 00000001401CF160: add     rsp, 8
 * 00000001401CF164: call    loc_1401CF157
 * 00000001401CF169: add     rsp, 8
 * 00000001401CF16D: call    loc_1401CF160
 * 00000001401CF172: add     rsp, 8
 * 00000001401CF176: call    loc_1401CF169
 * 00000001401CF17B: add     rsp, 8
 * 00000001401CF17F: call    loc_1401CF172
 * 00000001401CF184: add     rsp, 8
 * 00000001401CF188: call    loc_1401CF17B
 * 00000001401CF18D: add     rsp, 8
 * 00000001401CF191: call    loc_1401CF184
 * 00000001401CF196: add     rsp, 8
 * 00000001401CF19A: call    loc_1401CF18D
 * 00000001401CF19F: add     rsp, 8
 * 00000001401CF1A3: call    loc_1401CF196
 * 00000001401CF1A8: add     rsp, 8
 * 00000001401CF1AC: call    loc_1401CF19F
 * 00000001401CF1B1: add     rsp, 8
 * 00000001401CF1B5: call    loc_1401CF1A8
 * 00000001401CF1BA: add     rsp, 8
 * 00000001401CF1BE: call    loc_1401CF1B1
 * 00000001401CF1C3: add     rsp, 8
 * 00000001401CF1C7: call    loc_1401CF1BA
 * 00000001401CF1CC: add     rsp, 8
 * 00000001401CF1D0: call    loc_1401CF1C3
 * 00000001401CF1D5: add     rsp, 8
 * 00000001401CF1D9: call    loc_1401CF1CC
 * 00000001401CF1DE: add     rsp, 8
 * 00000001401CF1E2: call    loc_1401CF1D5
 * 00000001401CF1E7: add     rsp, 8
 * 00000001401CF1EB: call    loc_1401CF1DE
 * 00000001401CF1F0: add     rsp, 8
 * 00000001401CF1F4: call    loc_1401CF1E7
 * 00000001401CF1F9: add     rsp, 8
 * 00000001401CF1FD: call    loc_1401CF1F0
 * 00000001401CF202: add     rsp, 8
 * 00000001401CF206: call    loc_1401CF1F9
 * 00000001401CF20B: add     rsp, 8
 * 00000001401CF20F: call    loc_1401CF202
 * 00000001401CF214: add     rsp, 8
 * 00000001401CF218: call    loc_1401CF20B
 * 00000001401CF21D: add     rsp, 8
 * 00000001401CF221: call    loc_1401CF214
 * 00000001401CF226: add     rsp, 8
 * 00000001401CF22A: call    loc_1401CF21D
 * 00000001401CF22F: add     rsp, 8
 * 00000001401CF233: call    loc_1401CF226
 * 00000001401CF238: add     rsp, 8
 * 00000001401CF23C: call    loc_1401CF22F
 * 00000001401CF241: add     rsp, 8
 * 00000001401CF245: lfence
 * 00000001401CF248: mov     byte ptr gs:853h, 0
 * 00000001401CF251: test    byte ptr [r10+3], 80h
 * 00000001401CF256: jz      short loc_1401CF29A
 * 00000001401CF258: mov     ecx, 0C0000102h
 * 00000001401CF25D: rdmsr
 * 00000001401CF25F: shl     rdx, 20h
 * 00000001401CF263: or      rax, rdx
 * 00000001401CF266: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CF26D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CF275: cmp     [r10+0F0h], rax
 * 00000001401CF27C: jz      short loc_1401CF29A
 * 00000001401CF27E: mov     rdx, [r10+1F0h]
 * 00000001401CF285: bts     dword ptr [r10+74h], 8
 * 00000001401CF28B: dec     word ptr [r10+1E6h]
 * 00000001401CF293: mov     [rdx+80h], rax
 * 00000001401CF29A: test    byte ptr [r10+3], 3
 * 00000001401CF29F: mov     [rbp+0E8h+var_68], 0
 * 00000001401CF2A8: jz      short loc_1401CF2AF
 * 00000001401CF2AA: call    KiSaveDebugRegisterState
 * 00000001401CF2AF: cld
 * 00000001401CF2B0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CF2B4: ldmxcsr dword ptr gs:180h
 * 00000001401CF2BD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CF2C1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CF2C5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CF2C9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CF2CD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CF2D1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CF2D5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CF2DC: jz      short loc_1401CF2EA
 * 00000001401CF2DE: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF2E5: jz      short loc_1401CF2EA
 * 00000001401CF2E7: stac
 * 00000001401CF2EA: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CF2F4: jz      short loc_1401CF2F7
 * 00000001401CF2F6: sti
 * 00000001401CF2F7: mov     ecx, 10000003h
 * 00000001401CF2FC: xor     edx, edx
 * 00000001401CF2FE: mov     r8, [rbp+0E8h]
 * 00000001401CF305: call    KiExceptionDispatch
 * 00000001401CF30A: nop
 * 00000001401CF30B: retn
 */
