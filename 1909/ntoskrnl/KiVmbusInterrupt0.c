/*
 * XREFs of KiVmbusInterrupt0 @ 0x1401C8F50
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140351000 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x1401C8F50 (KiVmbusInterrupt0.c)
 *     KeWakeProcessor @ 0x1402AA3D0 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1401C8F50
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8F50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8F50: push    1
 * 00000001401C8F52: push    rbp
 * 00000001401C8F53: push    rsi
 * 00000001401C8F54: sub     rsp, 150h
 * 00000001401C8F5B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C8F63: mov     byte ptr [rbp-55h], 0
 * 00000001401C8F67: mov     [rbp-50h], rax
 * 00000001401C8F6B: mov     [rbp-48h], rcx
 * 00000001401C8F6F: mov     [rbp-40h], rdx
 * 00000001401C8F73: mov     [rbp-38h], r8
 * 00000001401C8F77: mov     [rbp-30h], r9
 * 00000001401C8F7B: mov     [rbp-28h], r10
 * 00000001401C8F7F: mov     [rbp-20h], r11
 * 00000001401C8F83: test    byte ptr [rbp+0F0h], 1
 * 00000001401C8F8A: jnz     short loc_1401C8FB9
 * 00000001401C8F8C: lfence
 * 00000001401C8F8F: test    byte ptr gs:278h, 1
 * 00000001401C8F98: jnz     short loc_1401C8FA2
 * 00000001401C8F9A: lfence
 * 00000001401C8F9D: jmp     loc_1401C91B5
 * 00000001401C8FA2: movzx   eax, byte ptr gs:27Ah
 * 00000001401C8FAB: mov     ecx, 48h ; 'H'
 * 00000001401C8FB0: xor     edx, edx
 * 00000001401C8FB2: wrmsr
 * 00000001401C8FB4: jmp     loc_1401C91B5
 * 00000001401C8FB9: test    cs:KiKvaShadow, 1
 * 00000001401C8FC0: jnz     short loc_1401C8FC5
 * 00000001401C8FC2: swapgs
 * 00000001401C8FC5: lfence
 * 00000001401C8FC8: mov     r10, gs:188h
 * 00000001401C8FD1: mov     rcx, gs:188h
 * 00000001401C8FDA: mov     rcx, [rcx+220h]
 * 00000001401C8FE1: mov     rcx, [rcx+860h]
 * 00000001401C8FE8: mov     gs:270h, rcx
 * 00000001401C8FF1: mov     cl, gs:850h
 * 00000001401C8FF9: mov     gs:851h, cl
 * 00000001401C9001: mov     cl, gs:278h
 * 00000001401C9009: mov     gs:852h, cl
 * 00000001401C9011: movzx   eax, byte ptr gs:27Bh
 * 00000001401C901A: cmp     gs:27Ah, al
 * 00000001401C9022: jz      short loc_1401C9035
 * 00000001401C9024: mov     gs:27Ah, al
 * 00000001401C902C: mov     ecx, 48h ; 'H'
 * 00000001401C9031: xor     edx, edx
 * 00000001401C9033: wrmsr
 * 00000001401C9035: movzx   edx, byte ptr gs:278h
 * 00000001401C903E: test    edx, 8
 * 00000001401C9044: jz      short loc_1401C9059
 * 00000001401C9046: mov     eax, 1
 * 00000001401C904B: xor     edx, edx
 * 00000001401C904D: mov     ecx, 49h ; 'I'
 * 00000001401C9052: wrmsr
 * 00000001401C9054: jmp     loc_1401C9197
 * 00000001401C9059: test    edx, 2
 * 00000001401C905F: jz      loc_1401C9194
 * 00000001401C9065: test    byte ptr gs:279h, 4
 * 00000001401C906E: jnz     loc_1401C9194
 * 00000001401C9074: call    loc_1401C9187
 * 00000001401C9079: add     rsp, 8
 * 00000001401C907D: call    loc_1401C9190
 * 00000001401C9082: add     rsp, 8
 * 00000001401C9086: call    loc_1401C9079
 * 00000001401C908B: add     rsp, 8
 * 00000001401C908F: call    loc_1401C9082
 * 00000001401C9094: add     rsp, 8
 * 00000001401C9098: call    loc_1401C908B
 * 00000001401C909D: add     rsp, 8
 * 00000001401C90A1: call    loc_1401C9094
 * 00000001401C90A6: add     rsp, 8
 * 00000001401C90AA: call    loc_1401C909D
 * 00000001401C90AF: add     rsp, 8
 * 00000001401C90B3: call    loc_1401C90A6
 * 00000001401C90B8: add     rsp, 8
 * 00000001401C90BC: call    loc_1401C90AF
 * 00000001401C90C1: add     rsp, 8
 * 00000001401C90C5: call    loc_1401C90B8
 * 00000001401C90CA: add     rsp, 8
 * 00000001401C90CE: call    loc_1401C90C1
 * 00000001401C90D3: add     rsp, 8
 * 00000001401C90D7: call    loc_1401C90CA
 * 00000001401C90DC: add     rsp, 8
 * 00000001401C90E0: call    loc_1401C90D3
 * 00000001401C90E5: add     rsp, 8
 * 00000001401C90E9: call    loc_1401C90DC
 * 00000001401C90EE: add     rsp, 8
 * 00000001401C90F2: call    loc_1401C90E5
 * 00000001401C90F7: add     rsp, 8
 * 00000001401C90FB: call    loc_1401C90EE
 * 00000001401C9100: add     rsp, 8
 * 00000001401C9104: call    loc_1401C90F7
 * 00000001401C9109: add     rsp, 8
 * 00000001401C910D: call    loc_1401C9100
 * 00000001401C9112: add     rsp, 8
 * 00000001401C9116: call    loc_1401C9109
 * 00000001401C911B: add     rsp, 8
 * 00000001401C911F: call    loc_1401C9112
 * 00000001401C9124: add     rsp, 8
 * 00000001401C9128: call    loc_1401C911B
 * 00000001401C912D: add     rsp, 8
 * 00000001401C9131: call    loc_1401C9124
 * 00000001401C9136: add     rsp, 8
 * 00000001401C913A: call    loc_1401C912D
 * 00000001401C913F: add     rsp, 8
 * 00000001401C9143: call    loc_1401C9136
 * 00000001401C9148: add     rsp, 8
 * 00000001401C914C: call    loc_1401C913F
 * 00000001401C9151: add     rsp, 8
 * 00000001401C9155: call    loc_1401C9148
 * 00000001401C915A: add     rsp, 8
 * 00000001401C915E: call    loc_1401C9151
 * 00000001401C9163: add     rsp, 8
 * 00000001401C9167: call    loc_1401C915A
 * 00000001401C916C: add     rsp, 8
 * 00000001401C9170: call    loc_1401C9163
 * 00000001401C9175: add     rsp, 8
 * 00000001401C9179: call    loc_1401C916C
 * 00000001401C917E: add     rsp, 8
 * 00000001401C9182: call    loc_1401C9175
 * 00000001401C9187: add     rsp, 8
 * 00000001401C918B: call    loc_1401C917E
 * 00000001401C9190: add     rsp, 8
 * 00000001401C9194: lfence
 * 00000001401C9197: mov     byte ptr gs:853h, 0
 * 00000001401C91A0: test    byte ptr [r10+3], 3
 * 00000001401C91A5: mov     word ptr [rbp+80h], 0
 * 00000001401C91AE: jz      short loc_1401C91B5
 * 00000001401C91B0: call    KiSaveDebugRegisterState
 * 00000001401C91B5: cld
 * 00000001401C91B6: stmxcsr dword ptr [rbp-54h]
 * 00000001401C91BA: ldmxcsr dword ptr gs:180h
 * 00000001401C91C3: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C91C7: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C91CB: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C91CF: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C91D3: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C91D7: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C91DB: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C91E4: jz      short loc_1401C91EB
 * 00000001401C91E6: call    KeWakeProcessor
 * 00000001401C91EB: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C91F2: cmp     rax, [rbp+0E8h]
 * 00000001401C91F9: jnb     short loc_1401C9214
 * 00000001401C91FB: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C9202: cmp     rax, [rbp+0E8h]
 * 00000001401C9209: jb      short loc_1401C9214
 * 00000001401C920B: lea     rcx, [rbp-80h]
 * 00000001401C920F: call    KiCheckForSListAddress
 * 00000001401C9214: xor     esi, esi
 * 00000001401C9216: inc     dword ptr gs:5D00h
 * 00000001401C921E: jmp     KiVmbusInterruptDispatch
 */
