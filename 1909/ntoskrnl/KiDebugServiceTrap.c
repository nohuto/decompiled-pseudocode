/*
 * XREFs of KiDebugServiceTrap @ 0x1401D5040
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140350E00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1401D5040 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1401D5040
 * Reason: Hex-Rays returned no pseudocode for 0x1401D5040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D5040: inc     qword ptr [rsp+0]
 * 00000001401D5044: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401D504A: jnz     short loc_1401D5051
 * 00000001401D504C: and     dword ptr [rsp+4], 0
 * 00000001401D5051: sub     rsp, 8
 * 00000001401D5055: push    rbp
 * 00000001401D5056: sub     rsp, 158h
 * 00000001401D505D: lea     rbp, [rsp+168h+var_E8]
 * 00000001401D5065: mov     byte ptr [rbp-55h], 1
 * 00000001401D5069: mov     [rbp-50h], rax
 * 00000001401D506D: mov     [rbp-48h], rcx
 * 00000001401D5071: mov     [rbp-40h], rdx
 * 00000001401D5075: mov     [rbp-38h], r8
 * 00000001401D5079: mov     [rbp-30h], r9
 * 00000001401D507D: mov     [rbp-28h], r10
 * 00000001401D5081: mov     [rbp-20h], r11
 * 00000001401D5085: test    byte ptr [rbp+0F0h], 1
 * 00000001401D508C: jnz     short loc_1401D50BB
 * 00000001401D508E: lfence
 * 00000001401D5091: test    byte ptr gs:278h, 1
 * 00000001401D509A: jnz     short loc_1401D50A4
 * 00000001401D509C: lfence
 * 00000001401D509F: jmp     loc_1401D5300
 * 00000001401D50A4: movzx   eax, byte ptr gs:27Ah
 * 00000001401D50AD: mov     ecx, 48h ; 'H'
 * 00000001401D50B2: xor     edx, edx
 * 00000001401D50B4: wrmsr
 * 00000001401D50B6: jmp     loc_1401D5300
 * 00000001401D50BB: test    cs:KiKvaShadow, 1
 * 00000001401D50C2: jnz     short loc_1401D50C7
 * 00000001401D50C4: swapgs
 * 00000001401D50C7: lfence
 * 00000001401D50CA: mov     r10, gs:188h
 * 00000001401D50D3: mov     rcx, gs:188h
 * 00000001401D50DC: mov     rcx, [rcx+220h]
 * 00000001401D50E3: mov     rcx, [rcx+860h]
 * 00000001401D50EA: mov     gs:270h, rcx
 * 00000001401D50F3: mov     cl, gs:850h
 * 00000001401D50FB: mov     gs:851h, cl
 * 00000001401D5103: mov     cl, gs:278h
 * 00000001401D510B: mov     gs:852h, cl
 * 00000001401D5113: movzx   eax, byte ptr gs:27Bh
 * 00000001401D511C: cmp     gs:27Ah, al
 * 00000001401D5124: jz      short loc_1401D5137
 * 00000001401D5126: mov     gs:27Ah, al
 * 00000001401D512E: mov     ecx, 48h ; 'H'
 * 00000001401D5133: xor     edx, edx
 * 00000001401D5135: wrmsr
 * 00000001401D5137: movzx   edx, byte ptr gs:278h
 * 00000001401D5140: test    edx, 8
 * 00000001401D5146: jz      short loc_1401D515B
 * 00000001401D5148: mov     eax, 1
 * 00000001401D514D: xor     edx, edx
 * 00000001401D514F: mov     ecx, 49h ; 'I'
 * 00000001401D5154: wrmsr
 * 00000001401D5156: jmp     loc_1401D5299
 * 00000001401D515B: test    edx, 2
 * 00000001401D5161: jz      loc_1401D5296
 * 00000001401D5167: test    byte ptr gs:279h, 4
 * 00000001401D5170: jnz     loc_1401D5296
 * 00000001401D5176: call    loc_1401D5289
 * 00000001401D517B: add     rsp, 8
 * 00000001401D517F: call    loc_1401D5292
 * 00000001401D5184: add     rsp, 8
 * 00000001401D5188: call    loc_1401D517B
 * 00000001401D518D: add     rsp, 8
 * 00000001401D5191: call    loc_1401D5184
 * 00000001401D5196: add     rsp, 8
 * 00000001401D519A: call    loc_1401D518D
 * 00000001401D519F: add     rsp, 8
 * 00000001401D51A3: call    loc_1401D5196
 * 00000001401D51A8: add     rsp, 8
 * 00000001401D51AC: call    loc_1401D519F
 * 00000001401D51B1: add     rsp, 8
 * 00000001401D51B5: call    loc_1401D51A8
 * 00000001401D51BA: add     rsp, 8
 * 00000001401D51BE: call    loc_1401D51B1
 * 00000001401D51C3: add     rsp, 8
 * 00000001401D51C7: call    loc_1401D51BA
 * 00000001401D51CC: add     rsp, 8
 * 00000001401D51D0: call    loc_1401D51C3
 * 00000001401D51D5: add     rsp, 8
 * 00000001401D51D9: call    loc_1401D51CC
 * 00000001401D51DE: add     rsp, 8
 * 00000001401D51E2: call    loc_1401D51D5
 * 00000001401D51E7: add     rsp, 8
 * 00000001401D51EB: call    loc_1401D51DE
 * 00000001401D51F0: add     rsp, 8
 * 00000001401D51F4: call    loc_1401D51E7
 * 00000001401D51F9: add     rsp, 8
 * 00000001401D51FD: call    loc_1401D51F0
 * 00000001401D5202: add     rsp, 8
 * 00000001401D5206: call    loc_1401D51F9
 * 00000001401D520B: add     rsp, 8
 * 00000001401D520F: call    loc_1401D5202
 * 00000001401D5214: add     rsp, 8
 * 00000001401D5218: call    loc_1401D520B
 * 00000001401D521D: add     rsp, 8
 * 00000001401D5221: call    loc_1401D5214
 * 00000001401D5226: add     rsp, 8
 * 00000001401D522A: call    loc_1401D521D
 * 00000001401D522F: add     rsp, 8
 * 00000001401D5233: call    loc_1401D5226
 * 00000001401D5238: add     rsp, 8
 * 00000001401D523C: call    loc_1401D522F
 * 00000001401D5241: add     rsp, 8
 * 00000001401D5245: call    loc_1401D5238
 * 00000001401D524A: add     rsp, 8
 * 00000001401D524E: call    loc_1401D5241
 * 00000001401D5253: add     rsp, 8
 * 00000001401D5257: call    loc_1401D524A
 * 00000001401D525C: add     rsp, 8
 * 00000001401D5260: call    loc_1401D5253
 * 00000001401D5265: add     rsp, 8
 * 00000001401D5269: call    loc_1401D525C
 * 00000001401D526E: add     rsp, 8
 * 00000001401D5272: call    loc_1401D5265
 * 00000001401D5277: add     rsp, 8
 * 00000001401D527B: call    loc_1401D526E
 * 00000001401D5280: add     rsp, 8
 * 00000001401D5284: call    loc_1401D5277
 * 00000001401D5289: add     rsp, 8
 * 00000001401D528D: call    loc_1401D5280
 * 00000001401D5292: add     rsp, 8
 * 00000001401D5296: lfence
 * 00000001401D5299: mov     byte ptr gs:853h, 0
 * 00000001401D52A2: test    byte ptr [r10+3], 80h
 * 00000001401D52A7: jz      short loc_1401D52EB
 * 00000001401D52A9: mov     ecx, 0C0000102h
 * 00000001401D52AE: rdmsr
 * 00000001401D52B0: shl     rdx, 20h
 * 00000001401D52B4: or      rax, rdx
 * 00000001401D52B7: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D52BE: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D52C6: cmp     [r10+0F0h], rax
 * 00000001401D52CD: jz      short loc_1401D52EB
 * 00000001401D52CF: mov     rdx, [r10+1F0h]
 * 00000001401D52D6: bts     dword ptr [r10+74h], 8
 * 00000001401D52DC: dec     word ptr [r10+1E6h]
 * 00000001401D52E4: mov     [rdx+80h], rax
 * 00000001401D52EB: test    byte ptr [r10+3], 3
 * 00000001401D52F0: mov     word ptr [rbp+80h], 0
 * 00000001401D52F9: jz      short loc_1401D5300
 * 00000001401D52FB: call    KiSaveDebugRegisterState
 * 00000001401D5300: cld
 * 00000001401D5301: stmxcsr dword ptr [rbp-54h]
 * 00000001401D5305: ldmxcsr dword ptr gs:180h
 * 00000001401D530E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D5312: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401D5316: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401D531A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401D531E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401D5322: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401D5326: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D532D: jz      short loc_1401D533B
 * 00000001401D532F: test    byte ptr [rbp+0F0h], 1
 * 00000001401D5336: jz      short loc_1401D533B
 * 00000001401D5338: stac
 * 00000001401D533B: test    dword ptr [rbp+0F8h], 200h
 * 00000001401D5345: jz      short loc_1401D5348
 * 00000001401D5347: sti
 * 00000001401D5348: mov     ecx, 80000003h
 * 00000001401D534D: mov     edx, 1
 * 00000001401D5352: mov     r9, [rbp-50h]
 * 00000001401D5356: mov     r8, [rbp+0E8h]
 * 00000001401D535D: call    KiExceptionDispatch
 * 00000001401D5362: nop
 * 00000001401D5363: retn
 */
