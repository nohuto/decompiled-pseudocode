/*
 * XREFs of KyStartUserThread @ 0x1401CB140
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1401CB140 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1401CB410 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1401CB140
 * Reason: Hex-Rays returned no pseudocode for 0x1401CB140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CB140: sub     rsp, 8
 * 00000001401CB144: push    rbp
 * 00000001401CB145: sub     rsp, 158h
 * 00000001401CB14C: lea     rbp, [rsp+80h]
 * 00000001401CB154: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CB158: mov     [rbp+0E8h+var_138], rax
 * 00000001401CB15C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CB160: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CB164: mov     [rbp+0E8h+var_120], r8
 * 00000001401CB168: mov     [rbp+0E8h+var_118], r9
 * 00000001401CB16C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CB170: mov     [rbp+0E8h+var_108], r11
 * 00000001401CB174: test    [rbp+0E8h+arg_0], 1
 * 00000001401CB17B: jnz     short loc_1401CB1AA
 * 00000001401CB17D: lfence
 * 00000001401CB180: test    byte ptr gs:278h, 1
 * 00000001401CB189: jnz     short loc_1401CB193
 * 00000001401CB18B: lfence
 * 00000001401CB18E: jmp     loc_1401CB3A6
 * 00000001401CB193: movzx   eax, byte ptr gs:27Ah
 * 00000001401CB19C: mov     ecx, 48h ; 'H'
 * 00000001401CB1A1: xor     edx, edx
 * 00000001401CB1A3: wrmsr
 * 00000001401CB1A5: jmp     loc_1401CB3A6
 * 00000001401CB1AA: test    cs:KiKvaShadow, 1
 * 00000001401CB1B1: jnz     short loc_1401CB1B6
 * 00000001401CB1B3: swapgs
 * 00000001401CB1B6: lfence
 * 00000001401CB1B9: mov     r10, gs:188h
 * 00000001401CB1C2: mov     rcx, gs:188h
 * 00000001401CB1CB: mov     rcx, [rcx+220h]
 * 00000001401CB1D2: mov     rcx, [rcx+860h]
 * 00000001401CB1D9: mov     gs:270h, rcx
 * 00000001401CB1E2: mov     cl, gs:850h
 * 00000001401CB1EA: mov     gs:851h, cl
 * 00000001401CB1F2: mov     cl, gs:278h
 * 00000001401CB1FA: mov     gs:852h, cl
 * 00000001401CB202: movzx   eax, byte ptr gs:27Bh
 * 00000001401CB20B: cmp     gs:27Ah, al
 * 00000001401CB213: jz      short loc_1401CB226
 * 00000001401CB215: mov     gs:27Ah, al
 * 00000001401CB21D: mov     ecx, 48h ; 'H'
 * 00000001401CB222: xor     edx, edx
 * 00000001401CB224: wrmsr
 * 00000001401CB226: movzx   edx, byte ptr gs:278h
 * 00000001401CB22F: test    edx, 8
 * 00000001401CB235: jz      short loc_1401CB24A
 * 00000001401CB237: mov     eax, 1
 * 00000001401CB23C: xor     edx, edx
 * 00000001401CB23E: mov     ecx, 49h ; 'I'
 * 00000001401CB243: wrmsr
 * 00000001401CB245: jmp     loc_1401CB388
 * 00000001401CB24A: test    edx, 2
 * 00000001401CB250: jz      loc_1401CB385
 * 00000001401CB256: test    byte ptr gs:279h, 4
 * 00000001401CB25F: jnz     loc_1401CB385
 * 00000001401CB265: call    loc_1401CB378
 * 00000001401CB26A: add     rsp, 8
 * 00000001401CB26E: call    loc_1401CB381
 * 00000001401CB273: add     rsp, 8
 * 00000001401CB277: call    loc_1401CB26A
 * 00000001401CB27C: add     rsp, 8
 * 00000001401CB280: call    loc_1401CB273
 * 00000001401CB285: add     rsp, 8
 * 00000001401CB289: call    loc_1401CB27C
 * 00000001401CB28E: add     rsp, 8
 * 00000001401CB292: call    loc_1401CB285
 * 00000001401CB297: add     rsp, 8
 * 00000001401CB29B: call    loc_1401CB28E
 * 00000001401CB2A0: add     rsp, 8
 * 00000001401CB2A4: call    loc_1401CB297
 * 00000001401CB2A9: add     rsp, 8
 * 00000001401CB2AD: call    loc_1401CB2A0
 * 00000001401CB2B2: add     rsp, 8
 * 00000001401CB2B6: call    loc_1401CB2A9
 * 00000001401CB2BB: add     rsp, 8
 * 00000001401CB2BF: call    loc_1401CB2B2
 * 00000001401CB2C4: add     rsp, 8
 * 00000001401CB2C8: call    loc_1401CB2BB
 * 00000001401CB2CD: add     rsp, 8
 * 00000001401CB2D1: call    loc_1401CB2C4
 * 00000001401CB2D6: add     rsp, 8
 * 00000001401CB2DA: call    loc_1401CB2CD
 * 00000001401CB2DF: add     rsp, 8
 * 00000001401CB2E3: call    loc_1401CB2D6
 * 00000001401CB2E8: add     rsp, 8
 * 00000001401CB2EC: call    loc_1401CB2DF
 * 00000001401CB2F1: add     rsp, 8
 * 00000001401CB2F5: call    loc_1401CB2E8
 * 00000001401CB2FA: add     rsp, 8
 * 00000001401CB2FE: call    loc_1401CB2F1
 * 00000001401CB303: add     rsp, 8
 * 00000001401CB307: call    loc_1401CB2FA
 * 00000001401CB30C: add     rsp, 8
 * 00000001401CB310: call    loc_1401CB303
 * 00000001401CB315: add     rsp, 8
 * 00000001401CB319: call    loc_1401CB30C
 * 00000001401CB31E: add     rsp, 8
 * 00000001401CB322: call    loc_1401CB315
 * 00000001401CB327: add     rsp, 8
 * 00000001401CB32B: call    loc_1401CB31E
 * 00000001401CB330: add     rsp, 8
 * 00000001401CB334: call    loc_1401CB327
 * 00000001401CB339: add     rsp, 8
 * 00000001401CB33D: call    loc_1401CB330
 * 00000001401CB342: add     rsp, 8
 * 00000001401CB346: call    loc_1401CB339
 * 00000001401CB34B: add     rsp, 8
 * 00000001401CB34F: call    loc_1401CB342
 * 00000001401CB354: add     rsp, 8
 * 00000001401CB358: call    loc_1401CB34B
 * 00000001401CB35D: add     rsp, 8
 * 00000001401CB361: call    loc_1401CB354
 * 00000001401CB366: add     rsp, 8
 * 00000001401CB36A: call    loc_1401CB35D
 * 00000001401CB36F: add     rsp, 8
 * 00000001401CB373: call    loc_1401CB366
 * 00000001401CB378: add     rsp, 8
 * 00000001401CB37C: call    loc_1401CB36F
 * 00000001401CB381: add     rsp, 8
 * 00000001401CB385: lfence
 * 00000001401CB388: mov     byte ptr gs:853h, 0
 * 00000001401CB391: test    byte ptr [r10+3], 3
 * 00000001401CB396: mov     [rbp+0E8h+var_68], 0
 * 00000001401CB39F: jz      short loc_1401CB3A6
 * 00000001401CB3A1: call    KiSaveDebugRegisterState
 * 00000001401CB3A6: cld
 * 00000001401CB3A7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CB3AB: ldmxcsr dword ptr gs:180h
 * 00000001401CB3B4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CB3B8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CB3BC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CB3C0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CB3C4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CB3C8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CB3CC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CB3D3: jz      short loc_1401CB3E1
 * 00000001401CB3D5: test    [rbp+0E8h+arg_0], 1
 * 00000001401CB3DC: jz      short loc_1401CB3E1
 * 00000001401CB3DE: stac
 * 00000001401CB3E1: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CB3EB: jz      short loc_1401CB3EE
 * 00000001401CB3ED: sti
 * 00000001401CB3EE: call    KxStartUserThread
 * 00000001401CB3F3: nop     word ptr [rax+rax+00000000h]
 * 00000001401CB400: nop
 * 00000001401CB401: retn
 */
