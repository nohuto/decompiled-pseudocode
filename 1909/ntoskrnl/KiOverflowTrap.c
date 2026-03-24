/*
 * XREFs of KiOverflowTrap @ 0x1401D0040
 * Callers:
 *     KiOverflowTrapShadow @ 0x140350300 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x1401D0040 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x1401D0040
 * Reason: Hex-Rays returned no pseudocode for 0x1401D0040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D0040: sub     rsp, 8
 * 00000001401D0044: push    rbp
 * 00000001401D0045: sub     rsp, 158h
 * 00000001401D004C: lea     rbp, [rsp+80h]
 * 00000001401D0054: mov     [rbp+0E8h+var_13D], 1
 * 00000001401D0058: mov     [rbp+0E8h+var_138], rax
 * 00000001401D005C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401D0060: mov     [rbp+0E8h+var_128], rdx
 * 00000001401D0064: mov     [rbp+0E8h+var_120], r8
 * 00000001401D0068: mov     [rbp+0E8h+var_118], r9
 * 00000001401D006C: mov     [rbp+0E8h+var_110], r10
 * 00000001401D0070: mov     [rbp+0E8h+var_108], r11
 * 00000001401D0074: test    [rbp+0E8h+arg_0], 1
 * 00000001401D007B: jnz     short loc_1401D00AA
 * 00000001401D007D: lfence
 * 00000001401D0080: test    byte ptr gs:278h, 1
 * 00000001401D0089: jnz     short loc_1401D0093
 * 00000001401D008B: lfence
 * 00000001401D008E: jmp     loc_1401D02EF
 * 00000001401D0093: movzx   eax, byte ptr gs:27Ah
 * 00000001401D009C: mov     ecx, 48h ; 'H'
 * 00000001401D00A1: xor     edx, edx
 * 00000001401D00A3: wrmsr
 * 00000001401D00A5: jmp     loc_1401D02EF
 * 00000001401D00AA: test    cs:KiKvaShadow, 1
 * 00000001401D00B1: jnz     short loc_1401D00B6
 * 00000001401D00B3: swapgs
 * 00000001401D00B6: lfence
 * 00000001401D00B9: mov     r10, gs:188h
 * 00000001401D00C2: mov     rcx, gs:188h
 * 00000001401D00CB: mov     rcx, [rcx+220h]
 * 00000001401D00D2: mov     rcx, [rcx+860h]
 * 00000001401D00D9: mov     gs:270h, rcx
 * 00000001401D00E2: mov     cl, gs:850h
 * 00000001401D00EA: mov     gs:851h, cl
 * 00000001401D00F2: mov     cl, gs:278h
 * 00000001401D00FA: mov     gs:852h, cl
 * 00000001401D0102: movzx   eax, byte ptr gs:27Bh
 * 00000001401D010B: cmp     gs:27Ah, al
 * 00000001401D0113: jz      short loc_1401D0126
 * 00000001401D0115: mov     gs:27Ah, al
 * 00000001401D011D: mov     ecx, 48h ; 'H'
 * 00000001401D0122: xor     edx, edx
 * 00000001401D0124: wrmsr
 * 00000001401D0126: movzx   edx, byte ptr gs:278h
 * 00000001401D012F: test    edx, 8
 * 00000001401D0135: jz      short loc_1401D014A
 * 00000001401D0137: mov     eax, 1
 * 00000001401D013C: xor     edx, edx
 * 00000001401D013E: mov     ecx, 49h ; 'I'
 * 00000001401D0143: wrmsr
 * 00000001401D0145: jmp     loc_1401D0288
 * 00000001401D014A: test    edx, 2
 * 00000001401D0150: jz      loc_1401D0285
 * 00000001401D0156: test    byte ptr gs:279h, 4
 * 00000001401D015F: jnz     loc_1401D0285
 * 00000001401D0165: call    loc_1401D0278
 * 00000001401D016A: add     rsp, 8
 * 00000001401D016E: call    loc_1401D0281
 * 00000001401D0173: add     rsp, 8
 * 00000001401D0177: call    loc_1401D016A
 * 00000001401D017C: add     rsp, 8
 * 00000001401D0180: call    loc_1401D0173
 * 00000001401D0185: add     rsp, 8
 * 00000001401D0189: call    loc_1401D017C
 * 00000001401D018E: add     rsp, 8
 * 00000001401D0192: call    loc_1401D0185
 * 00000001401D0197: add     rsp, 8
 * 00000001401D019B: call    loc_1401D018E
 * 00000001401D01A0: add     rsp, 8
 * 00000001401D01A4: call    loc_1401D0197
 * 00000001401D01A9: add     rsp, 8
 * 00000001401D01AD: call    loc_1401D01A0
 * 00000001401D01B2: add     rsp, 8
 * 00000001401D01B6: call    loc_1401D01A9
 * 00000001401D01BB: add     rsp, 8
 * 00000001401D01BF: call    loc_1401D01B2
 * 00000001401D01C4: add     rsp, 8
 * 00000001401D01C8: call    loc_1401D01BB
 * 00000001401D01CD: add     rsp, 8
 * 00000001401D01D1: call    loc_1401D01C4
 * 00000001401D01D6: add     rsp, 8
 * 00000001401D01DA: call    loc_1401D01CD
 * 00000001401D01DF: add     rsp, 8
 * 00000001401D01E3: call    loc_1401D01D6
 * 00000001401D01E8: add     rsp, 8
 * 00000001401D01EC: call    loc_1401D01DF
 * 00000001401D01F1: add     rsp, 8
 * 00000001401D01F5: call    loc_1401D01E8
 * 00000001401D01FA: add     rsp, 8
 * 00000001401D01FE: call    loc_1401D01F1
 * 00000001401D0203: add     rsp, 8
 * 00000001401D0207: call    loc_1401D01FA
 * 00000001401D020C: add     rsp, 8
 * 00000001401D0210: call    loc_1401D0203
 * 00000001401D0215: add     rsp, 8
 * 00000001401D0219: call    loc_1401D020C
 * 00000001401D021E: add     rsp, 8
 * 00000001401D0222: call    loc_1401D0215
 * 00000001401D0227: add     rsp, 8
 * 00000001401D022B: call    loc_1401D021E
 * 00000001401D0230: add     rsp, 8
 * 00000001401D0234: call    loc_1401D0227
 * 00000001401D0239: add     rsp, 8
 * 00000001401D023D: call    loc_1401D0230
 * 00000001401D0242: add     rsp, 8
 * 00000001401D0246: call    loc_1401D0239
 * 00000001401D024B: add     rsp, 8
 * 00000001401D024F: call    loc_1401D0242
 * 00000001401D0254: add     rsp, 8
 * 00000001401D0258: call    loc_1401D024B
 * 00000001401D025D: add     rsp, 8
 * 00000001401D0261: call    loc_1401D0254
 * 00000001401D0266: add     rsp, 8
 * 00000001401D026A: call    loc_1401D025D
 * 00000001401D026F: add     rsp, 8
 * 00000001401D0273: call    loc_1401D0266
 * 00000001401D0278: add     rsp, 8
 * 00000001401D027C: call    loc_1401D026F
 * 00000001401D0281: add     rsp, 8
 * 00000001401D0285: lfence
 * 00000001401D0288: mov     byte ptr gs:853h, 0
 * 00000001401D0291: test    byte ptr [r10+3], 80h
 * 00000001401D0296: jz      short loc_1401D02DA
 * 00000001401D0298: mov     ecx, 0C0000102h
 * 00000001401D029D: rdmsr
 * 00000001401D029F: shl     rdx, 20h
 * 00000001401D02A3: or      rax, rdx
 * 00000001401D02A6: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D02AD: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D02B5: cmp     [r10+0F0h], rax
 * 00000001401D02BC: jz      short loc_1401D02DA
 * 00000001401D02BE: mov     rdx, [r10+1F0h]
 * 00000001401D02C5: bts     dword ptr [r10+74h], 8
 * 00000001401D02CB: dec     word ptr [r10+1E6h]
 * 00000001401D02D3: mov     [rdx+80h], rax
 * 00000001401D02DA: test    byte ptr [r10+3], 3
 * 00000001401D02DF: mov     [rbp+0E8h+var_68], 0
 * 00000001401D02E8: jz      short loc_1401D02EF
 * 00000001401D02EA: call    KiSaveDebugRegisterState
 * 00000001401D02EF: cld
 * 00000001401D02F0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401D02F4: ldmxcsr dword ptr gs:180h
 * 00000001401D02FD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401D0301: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401D0305: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401D0309: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401D030D: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401D0311: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401D0315: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D031C: jz      short loc_1401D032A
 * 00000001401D031E: test    [rbp+0E8h+arg_0], 1
 * 00000001401D0325: jz      short loc_1401D032A
 * 00000001401D0327: stac
 * 00000001401D032A: test    [rbp+0E8h+arg_8], 200h
 * 00000001401D0334: jz      short loc_1401D0337
 * 00000001401D0336: sti
 * 00000001401D0337: mov     ecx, 0C0000095h
 * 00000001401D033C: xor     edx, edx
 * 00000001401D033E: mov     r8, [rbp+0E8h]
 * 00000001401D0345: dec     r8
 * 00000001401D0348: call    KiExceptionDispatch
 * 00000001401D034D: nop
 * 00000001401D034E: retn
 */
