/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1401CE140
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x14032FD00 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401CE140 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1401CE140
 * Reason: Hex-Rays returned no pseudocode for 0x1401CE140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CE140: sub     qword ptr [rsp+0], 2
 * 00000001401CE145: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401CE14B: jnz     short loc_1401CE152
 * 00000001401CE14D: and     dword ptr [rsp+4], 0
 * 00000001401CE152: sub     rsp, 8
 * 00000001401CE156: push    rbp
 * 00000001401CE157: sub     rsp, 158h
 * 00000001401CE15E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401CE166: mov     byte ptr [rbp-55h], 1
 * 00000001401CE16A: mov     [rbp-50h], rax
 * 00000001401CE16E: mov     [rbp-48h], rcx
 * 00000001401CE172: mov     [rbp-40h], rdx
 * 00000001401CE176: mov     [rbp-38h], r8
 * 00000001401CE17A: mov     [rbp-30h], r9
 * 00000001401CE17E: mov     [rbp-28h], r10
 * 00000001401CE182: mov     [rbp-20h], r11
 * 00000001401CE186: test    byte ptr [rbp+0F0h], 1
 * 00000001401CE18D: jnz     short loc_1401CE1BE
 * 00000001401CE18F: lfence
 * 00000001401CE192: test    word ptr gs:860h, 1
 * 00000001401CE19D: jnz     short loc_1401CE1A7
 * 00000001401CE19F: lfence
 * 00000001401CE1A2: jmp     loc_1401CE410
 * 00000001401CE1A7: movzx   eax, word ptr gs:864h
 * 00000001401CE1B0: mov     ecx, 48h ; 'H'
 * 00000001401CE1B5: xor     edx, edx
 * 00000001401CE1B7: wrmsr
 * 00000001401CE1B9: jmp     loc_1401CE410
 * 00000001401CE1BE: test    cs:KiKvaShadow, 1
 * 00000001401CE1C5: jnz     short loc_1401CE1CA
 * 00000001401CE1C7: swapgs
 * 00000001401CE1CA: lfence
 * 00000001401CE1CD: mov     r10, gs:188h
 * 00000001401CE1D6: mov     rcx, gs:188h
 * 00000001401CE1DF: mov     rcx, [rcx+220h]
 * 00000001401CE1E6: mov     rcx, [rcx+830h]
 * 00000001401CE1ED: mov     gs:858h, rcx
 * 00000001401CE1F6: mov     cx, gs:850h
 * 00000001401CE1FF: mov     gs:852h, cx
 * 00000001401CE208: mov     cx, gs:860h
 * 00000001401CE211: mov     gs:854h, cx
 * 00000001401CE21A: movzx   eax, word ptr gs:866h
 * 00000001401CE223: cmp     gs:864h, ax
 * 00000001401CE22C: jz      short loc_1401CE240
 * 00000001401CE22E: mov     gs:864h, ax
 * 00000001401CE237: mov     ecx, 48h ; 'H'
 * 00000001401CE23C: xor     edx, edx
 * 00000001401CE23E: wrmsr
 * 00000001401CE240: movzx   edx, word ptr gs:860h
 * 00000001401CE249: test    edx, 8
 * 00000001401CE24F: jz      short loc_1401CE268
 * 00000001401CE251: mov     eax, 1
 * 00000001401CE256: xor     edx, edx
 * 00000001401CE258: mov     ecx, 49h ; 'I'
 * 00000001401CE25D: wrmsr
 * 00000001401CE25F: movzx   edx, word ptr gs:860h
 * 00000001401CE268: test    edx, 2
 * 00000001401CE26E: jz      loc_1401CE399
 * 00000001401CE274: call    loc_1401CE387
 * 00000001401CE279: add     rsp, 8
 * 00000001401CE27D: call    loc_1401CE390
 * 00000001401CE282: add     rsp, 8
 * 00000001401CE286: call    loc_1401CE279
 * 00000001401CE28B: add     rsp, 8
 * 00000001401CE28F: call    loc_1401CE282
 * 00000001401CE294: add     rsp, 8
 * 00000001401CE298: call    loc_1401CE28B
 * 00000001401CE29D: add     rsp, 8
 * 00000001401CE2A1: call    loc_1401CE294
 * 00000001401CE2A6: add     rsp, 8
 * 00000001401CE2AA: call    loc_1401CE29D
 * 00000001401CE2AF: add     rsp, 8
 * 00000001401CE2B3: call    loc_1401CE2A6
 * 00000001401CE2B8: add     rsp, 8
 * 00000001401CE2BC: call    loc_1401CE2AF
 * 00000001401CE2C1: add     rsp, 8
 * 00000001401CE2C5: call    loc_1401CE2B8
 * 00000001401CE2CA: add     rsp, 8
 * 00000001401CE2CE: call    loc_1401CE2C1
 * 00000001401CE2D3: add     rsp, 8
 * 00000001401CE2D7: call    loc_1401CE2CA
 * 00000001401CE2DC: add     rsp, 8
 * 00000001401CE2E0: call    loc_1401CE2D3
 * 00000001401CE2E5: add     rsp, 8
 * 00000001401CE2E9: call    loc_1401CE2DC
 * 00000001401CE2EE: add     rsp, 8
 * 00000001401CE2F2: call    loc_1401CE2E5
 * 00000001401CE2F7: add     rsp, 8
 * 00000001401CE2FB: call    loc_1401CE2EE
 * 00000001401CE300: add     rsp, 8
 * 00000001401CE304: call    loc_1401CE2F7
 * 00000001401CE309: add     rsp, 8
 * 00000001401CE30D: call    loc_1401CE300
 * 00000001401CE312: add     rsp, 8
 * 00000001401CE316: call    loc_1401CE309
 * 00000001401CE31B: add     rsp, 8
 * 00000001401CE31F: call    loc_1401CE312
 * 00000001401CE324: add     rsp, 8
 * 00000001401CE328: call    loc_1401CE31B
 * 00000001401CE32D: add     rsp, 8
 * 00000001401CE331: call    loc_1401CE324
 * 00000001401CE336: add     rsp, 8
 * 00000001401CE33A: call    loc_1401CE32D
 * 00000001401CE33F: add     rsp, 8
 * 00000001401CE343: call    loc_1401CE336
 * 00000001401CE348: add     rsp, 8
 * 00000001401CE34C: call    loc_1401CE33F
 * 00000001401CE351: add     rsp, 8
 * 00000001401CE355: call    loc_1401CE348
 * 00000001401CE35A: add     rsp, 8
 * 00000001401CE35E: call    loc_1401CE351
 * 00000001401CE363: add     rsp, 8
 * 00000001401CE367: call    loc_1401CE35A
 * 00000001401CE36C: add     rsp, 8
 * 00000001401CE370: call    loc_1401CE363
 * 00000001401CE375: add     rsp, 8
 * 00000001401CE379: call    loc_1401CE36C
 * 00000001401CE37E: add     rsp, 8
 * 00000001401CE382: call    loc_1401CE375
 * 00000001401CE387: add     rsp, 8
 * 00000001401CE38B: call    loc_1401CE37E
 * 00000001401CE390: add     rsp, 8
 * 00000001401CE394: mov     eax, 0DADAh
 * 00000001401CE399: test    edx, 200h
 * 00000001401CE39F: jz      short loc_1401CE3A6
 * 00000001401CE3A1: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CE3A6: lfence
 * 00000001401CE3A9: mov     byte ptr gs:856h, 0
 * 00000001401CE3B2: test    byte ptr [r10+3], 80h
 * 00000001401CE3B7: jz      short loc_1401CE3FB
 * 00000001401CE3B9: mov     ecx, 0C0000102h
 * 00000001401CE3BE: rdmsr
 * 00000001401CE3C0: shl     rdx, 20h
 * 00000001401CE3C4: or      rax, rdx
 * 00000001401CE3C7: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CE3CE: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CE3D6: cmp     [r10+0F0h], rax
 * 00000001401CE3DD: jz      short loc_1401CE3FB
 * 00000001401CE3DF: mov     rdx, [r10+1F0h]
 * 00000001401CE3E6: bts     dword ptr [r10+74h], 8
 * 00000001401CE3EC: dec     word ptr [r10+1E6h]
 * 00000001401CE3F4: mov     [rdx+80h], rax
 * 00000001401CE3FB: test    byte ptr [r10+3], 3
 * 00000001401CE400: mov     word ptr [rbp+80h], 0
 * 00000001401CE409: jz      short loc_1401CE410
 * 00000001401CE40B: call    KiSaveDebugRegisterState
 * 00000001401CE410: cld
 * 00000001401CE411: stmxcsr dword ptr [rbp-54h]
 * 00000001401CE415: ldmxcsr dword ptr gs:180h
 * 00000001401CE41E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CE422: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CE426: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CE42A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CE42E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CE432: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CE436: test    dword ptr [rbp+0F8h], 200h
 * 00000001401CE440: jz      short loc_1401CE443
 * 00000001401CE442: sti
 * 00000001401CE443: mov     r9, [rbp-48h]
 * 00000001401CE447: mov     ecx, 0C0000409h
 * 00000001401CE44C: mov     edx, 1
 * 00000001401CE451: mov     r8, [rbp+0E8h]
 * 00000001401CE458: call    KiFastFailDispatch
 * 00000001401CE45D: nop
 * 00000001401CE45E: retn
 */
