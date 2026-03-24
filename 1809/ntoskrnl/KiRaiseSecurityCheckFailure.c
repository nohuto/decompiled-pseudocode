/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1401CE040
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x14032ED00 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401CE040 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1401D02C0 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1401CE040
 * Reason: Hex-Rays returned no pseudocode for 0x1401CE040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CE040: sub     qword ptr [rsp+0], 2
 * 00000001401CE045: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401CE04B: jnz     short loc_1401CE052
 * 00000001401CE04D: and     dword ptr [rsp+4], 0
 * 00000001401CE052: sub     rsp, 8
 * 00000001401CE056: push    rbp
 * 00000001401CE057: sub     rsp, 158h
 * 00000001401CE05E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401CE066: mov     byte ptr [rbp-55h], 1
 * 00000001401CE06A: mov     [rbp-50h], rax
 * 00000001401CE06E: mov     [rbp-48h], rcx
 * 00000001401CE072: mov     [rbp-40h], rdx
 * 00000001401CE076: mov     [rbp-38h], r8
 * 00000001401CE07A: mov     [rbp-30h], r9
 * 00000001401CE07E: mov     [rbp-28h], r10
 * 00000001401CE082: mov     [rbp-20h], r11
 * 00000001401CE086: test    byte ptr [rbp+0F0h], 1
 * 00000001401CE08D: jnz     short loc_1401CE0BE
 * 00000001401CE08F: lfence
 * 00000001401CE092: test    word ptr gs:860h, 1
 * 00000001401CE09D: jnz     short loc_1401CE0A7
 * 00000001401CE09F: lfence
 * 00000001401CE0A2: jmp     loc_1401CE310
 * 00000001401CE0A7: movzx   eax, word ptr gs:864h
 * 00000001401CE0B0: mov     ecx, 48h ; 'H'
 * 00000001401CE0B5: xor     edx, edx
 * 00000001401CE0B7: wrmsr
 * 00000001401CE0B9: jmp     loc_1401CE310
 * 00000001401CE0BE: test    cs:KiKvaShadow, 1
 * 00000001401CE0C5: jnz     short loc_1401CE0CA
 * 00000001401CE0C7: swapgs
 * 00000001401CE0CA: lfence
 * 00000001401CE0CD: mov     r10, gs:188h
 * 00000001401CE0D6: mov     rcx, gs:188h
 * 00000001401CE0DF: mov     rcx, [rcx+220h]
 * 00000001401CE0E6: mov     rcx, [rcx+830h]
 * 00000001401CE0ED: mov     gs:858h, rcx
 * 00000001401CE0F6: mov     cx, gs:850h
 * 00000001401CE0FF: mov     gs:852h, cx
 * 00000001401CE108: mov     cx, gs:860h
 * 00000001401CE111: mov     gs:854h, cx
 * 00000001401CE11A: movzx   eax, word ptr gs:866h
 * 00000001401CE123: cmp     gs:864h, ax
 * 00000001401CE12C: jz      short loc_1401CE140
 * 00000001401CE12E: mov     gs:864h, ax
 * 00000001401CE137: mov     ecx, 48h ; 'H'
 * 00000001401CE13C: xor     edx, edx
 * 00000001401CE13E: wrmsr
 * 00000001401CE140: movzx   edx, word ptr gs:860h
 * 00000001401CE149: test    edx, 8
 * 00000001401CE14F: jz      short loc_1401CE168
 * 00000001401CE151: mov     eax, 1
 * 00000001401CE156: xor     edx, edx
 * 00000001401CE158: mov     ecx, 49h ; 'I'
 * 00000001401CE15D: wrmsr
 * 00000001401CE15F: movzx   edx, word ptr gs:860h
 * 00000001401CE168: test    edx, 2
 * 00000001401CE16E: jz      loc_1401CE299
 * 00000001401CE174: call    loc_1401CE287
 * 00000001401CE179: add     rsp, 8
 * 00000001401CE17D: call    loc_1401CE290
 * 00000001401CE182: add     rsp, 8
 * 00000001401CE186: call    loc_1401CE179
 * 00000001401CE18B: add     rsp, 8
 * 00000001401CE18F: call    loc_1401CE182
 * 00000001401CE194: add     rsp, 8
 * 00000001401CE198: call    loc_1401CE18B
 * 00000001401CE19D: add     rsp, 8
 * 00000001401CE1A1: call    loc_1401CE194
 * 00000001401CE1A6: add     rsp, 8
 * 00000001401CE1AA: call    loc_1401CE19D
 * 00000001401CE1AF: add     rsp, 8
 * 00000001401CE1B3: call    loc_1401CE1A6
 * 00000001401CE1B8: add     rsp, 8
 * 00000001401CE1BC: call    loc_1401CE1AF
 * 00000001401CE1C1: add     rsp, 8
 * 00000001401CE1C5: call    loc_1401CE1B8
 * 00000001401CE1CA: add     rsp, 8
 * 00000001401CE1CE: call    loc_1401CE1C1
 * 00000001401CE1D3: add     rsp, 8
 * 00000001401CE1D7: call    loc_1401CE1CA
 * 00000001401CE1DC: add     rsp, 8
 * 00000001401CE1E0: call    loc_1401CE1D3
 * 00000001401CE1E5: add     rsp, 8
 * 00000001401CE1E9: call    loc_1401CE1DC
 * 00000001401CE1EE: add     rsp, 8
 * 00000001401CE1F2: call    loc_1401CE1E5
 * 00000001401CE1F7: add     rsp, 8
 * 00000001401CE1FB: call    loc_1401CE1EE
 * 00000001401CE200: add     rsp, 8
 * 00000001401CE204: call    loc_1401CE1F7
 * 00000001401CE209: add     rsp, 8
 * 00000001401CE20D: call    loc_1401CE200
 * 00000001401CE212: add     rsp, 8
 * 00000001401CE216: call    loc_1401CE209
 * 00000001401CE21B: add     rsp, 8
 * 00000001401CE21F: call    loc_1401CE212
 * 00000001401CE224: add     rsp, 8
 * 00000001401CE228: call    loc_1401CE21B
 * 00000001401CE22D: add     rsp, 8
 * 00000001401CE231: call    loc_1401CE224
 * 00000001401CE236: add     rsp, 8
 * 00000001401CE23A: call    loc_1401CE22D
 * 00000001401CE23F: add     rsp, 8
 * 00000001401CE243: call    loc_1401CE236
 * 00000001401CE248: add     rsp, 8
 * 00000001401CE24C: call    loc_1401CE23F
 * 00000001401CE251: add     rsp, 8
 * 00000001401CE255: call    loc_1401CE248
 * 00000001401CE25A: add     rsp, 8
 * 00000001401CE25E: call    loc_1401CE251
 * 00000001401CE263: add     rsp, 8
 * 00000001401CE267: call    loc_1401CE25A
 * 00000001401CE26C: add     rsp, 8
 * 00000001401CE270: call    loc_1401CE263
 * 00000001401CE275: add     rsp, 8
 * 00000001401CE279: call    loc_1401CE26C
 * 00000001401CE27E: add     rsp, 8
 * 00000001401CE282: call    loc_1401CE275
 * 00000001401CE287: add     rsp, 8
 * 00000001401CE28B: call    loc_1401CE27E
 * 00000001401CE290: add     rsp, 8
 * 00000001401CE294: mov     eax, 0DADAh
 * 00000001401CE299: test    edx, 200h
 * 00000001401CE29F: jz      short loc_1401CE2A6
 * 00000001401CE2A1: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CE2A6: lfence
 * 00000001401CE2A9: mov     byte ptr gs:856h, 0
 * 00000001401CE2B2: test    byte ptr [r10+3], 80h
 * 00000001401CE2B7: jz      short loc_1401CE2FB
 * 00000001401CE2B9: mov     ecx, 0C0000102h
 * 00000001401CE2BE: rdmsr
 * 00000001401CE2C0: shl     rdx, 20h
 * 00000001401CE2C4: or      rax, rdx
 * 00000001401CE2C7: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CE2CE: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CE2D6: cmp     [r10+0F0h], rax
 * 00000001401CE2DD: jz      short loc_1401CE2FB
 * 00000001401CE2DF: mov     rdx, [r10+1F0h]
 * 00000001401CE2E6: bts     dword ptr [r10+74h], 8
 * 00000001401CE2EC: dec     word ptr [r10+1E6h]
 * 00000001401CE2F4: mov     [rdx+80h], rax
 * 00000001401CE2FB: test    byte ptr [r10+3], 3
 * 00000001401CE300: mov     word ptr [rbp+80h], 0
 * 00000001401CE309: jz      short loc_1401CE310
 * 00000001401CE30B: call    KiSaveDebugRegisterState
 * 00000001401CE310: cld
 * 00000001401CE311: stmxcsr dword ptr [rbp-54h]
 * 00000001401CE315: ldmxcsr dword ptr gs:180h
 * 00000001401CE31E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CE322: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CE326: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CE32A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CE32E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CE332: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CE336: test    dword ptr [rbp+0F8h], 200h
 * 00000001401CE340: jz      short loc_1401CE343
 * 00000001401CE342: sti
 * 00000001401CE343: mov     r9, [rbp-48h]
 * 00000001401CE347: mov     ecx, 0C0000409h
 * 00000001401CE34C: mov     edx, 1
 * 00000001401CE351: mov     r8, [rbp+0E8h]
 * 00000001401CE358: call    KiFastFailDispatch
 * 00000001401CE35D: nop
 * 00000001401CE35E: retn
 */
