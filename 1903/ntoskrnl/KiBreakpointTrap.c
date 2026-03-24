/*
 * XREFs of KiBreakpointTrap @ 0x1401CF100
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140350280 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x1401CF100 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x1401CF100
 * Reason: Hex-Rays returned no pseudocode for 0x1401CF100
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CF100: sub     rsp, 8
 * 00000001401CF104: push    rbp
 * 00000001401CF105: sub     rsp, 158h
 * 00000001401CF10C: lea     rbp, [rsp+80h]
 * 00000001401CF114: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CF118: mov     [rbp+0E8h+var_138], rax
 * 00000001401CF11C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CF120: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CF124: mov     [rbp+0E8h+var_120], r8
 * 00000001401CF128: mov     [rbp+0E8h+var_118], r9
 * 00000001401CF12C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CF130: mov     [rbp+0E8h+var_108], r11
 * 00000001401CF134: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF13B: jnz     short loc_1401CF16A
 * 00000001401CF13D: lfence
 * 00000001401CF140: test    byte ptr gs:278h, 1
 * 00000001401CF149: jnz     short loc_1401CF153
 * 00000001401CF14B: lfence
 * 00000001401CF14E: jmp     loc_1401CF3AF
 * 00000001401CF153: movzx   eax, byte ptr gs:27Ah
 * 00000001401CF15C: mov     ecx, 48h ; 'H'
 * 00000001401CF161: xor     edx, edx
 * 00000001401CF163: wrmsr
 * 00000001401CF165: jmp     loc_1401CF3AF
 * 00000001401CF16A: test    cs:KiKvaShadow, 1
 * 00000001401CF171: jnz     short loc_1401CF176
 * 00000001401CF173: swapgs
 * 00000001401CF176: lfence
 * 00000001401CF179: mov     r10, gs:188h
 * 00000001401CF182: mov     rcx, gs:188h
 * 00000001401CF18B: mov     rcx, [rcx+220h]
 * 00000001401CF192: mov     rcx, [rcx+860h]
 * 00000001401CF199: mov     gs:270h, rcx
 * 00000001401CF1A2: mov     cl, gs:850h
 * 00000001401CF1AA: mov     gs:851h, cl
 * 00000001401CF1B2: mov     cl, gs:278h
 * 00000001401CF1BA: mov     gs:852h, cl
 * 00000001401CF1C2: movzx   eax, byte ptr gs:27Bh
 * 00000001401CF1CB: cmp     gs:27Ah, al
 * 00000001401CF1D3: jz      short loc_1401CF1E6
 * 00000001401CF1D5: mov     gs:27Ah, al
 * 00000001401CF1DD: mov     ecx, 48h ; 'H'
 * 00000001401CF1E2: xor     edx, edx
 * 00000001401CF1E4: wrmsr
 * 00000001401CF1E6: movzx   edx, byte ptr gs:278h
 * 00000001401CF1EF: test    edx, 8
 * 00000001401CF1F5: jz      short loc_1401CF20A
 * 00000001401CF1F7: mov     eax, 1
 * 00000001401CF1FC: xor     edx, edx
 * 00000001401CF1FE: mov     ecx, 49h ; 'I'
 * 00000001401CF203: wrmsr
 * 00000001401CF205: jmp     loc_1401CF348
 * 00000001401CF20A: test    edx, 2
 * 00000001401CF210: jz      loc_1401CF345
 * 00000001401CF216: test    byte ptr gs:279h, 4
 * 00000001401CF21F: jnz     loc_1401CF345
 * 00000001401CF225: call    loc_1401CF338
 * 00000001401CF22A: add     rsp, 8
 * 00000001401CF22E: call    loc_1401CF341
 * 00000001401CF233: add     rsp, 8
 * 00000001401CF237: call    loc_1401CF22A
 * 00000001401CF23C: add     rsp, 8
 * 00000001401CF240: call    loc_1401CF233
 * 00000001401CF245: add     rsp, 8
 * 00000001401CF249: call    loc_1401CF23C
 * 00000001401CF24E: add     rsp, 8
 * 00000001401CF252: call    loc_1401CF245
 * 00000001401CF257: add     rsp, 8
 * 00000001401CF25B: call    loc_1401CF24E
 * 00000001401CF260: add     rsp, 8
 * 00000001401CF264: call    loc_1401CF257
 * 00000001401CF269: add     rsp, 8
 * 00000001401CF26D: call    loc_1401CF260
 * 00000001401CF272: add     rsp, 8
 * 00000001401CF276: call    loc_1401CF269
 * 00000001401CF27B: add     rsp, 8
 * 00000001401CF27F: call    loc_1401CF272
 * 00000001401CF284: add     rsp, 8
 * 00000001401CF288: call    loc_1401CF27B
 * 00000001401CF28D: add     rsp, 8
 * 00000001401CF291: call    loc_1401CF284
 * 00000001401CF296: add     rsp, 8
 * 00000001401CF29A: call    loc_1401CF28D
 * 00000001401CF29F: add     rsp, 8
 * 00000001401CF2A3: call    loc_1401CF296
 * 00000001401CF2A8: add     rsp, 8
 * 00000001401CF2AC: call    loc_1401CF29F
 * 00000001401CF2B1: add     rsp, 8
 * 00000001401CF2B5: call    loc_1401CF2A8
 * 00000001401CF2BA: add     rsp, 8
 * 00000001401CF2BE: call    loc_1401CF2B1
 * 00000001401CF2C3: add     rsp, 8
 * 00000001401CF2C7: call    loc_1401CF2BA
 * 00000001401CF2CC: add     rsp, 8
 * 00000001401CF2D0: call    loc_1401CF2C3
 * 00000001401CF2D5: add     rsp, 8
 * 00000001401CF2D9: call    loc_1401CF2CC
 * 00000001401CF2DE: add     rsp, 8
 * 00000001401CF2E2: call    loc_1401CF2D5
 * 00000001401CF2E7: add     rsp, 8
 * 00000001401CF2EB: call    loc_1401CF2DE
 * 00000001401CF2F0: add     rsp, 8
 * 00000001401CF2F4: call    loc_1401CF2E7
 * 00000001401CF2F9: add     rsp, 8
 * 00000001401CF2FD: call    loc_1401CF2F0
 * 00000001401CF302: add     rsp, 8
 * 00000001401CF306: call    loc_1401CF2F9
 * 00000001401CF30B: add     rsp, 8
 * 00000001401CF30F: call    loc_1401CF302
 * 00000001401CF314: add     rsp, 8
 * 00000001401CF318: call    loc_1401CF30B
 * 00000001401CF31D: add     rsp, 8
 * 00000001401CF321: call    loc_1401CF314
 * 00000001401CF326: add     rsp, 8
 * 00000001401CF32A: call    loc_1401CF31D
 * 00000001401CF32F: add     rsp, 8
 * 00000001401CF333: call    loc_1401CF326
 * 00000001401CF338: add     rsp, 8
 * 00000001401CF33C: call    loc_1401CF32F
 * 00000001401CF341: add     rsp, 8
 * 00000001401CF345: lfence
 * 00000001401CF348: mov     byte ptr gs:853h, 0
 * 00000001401CF351: test    byte ptr [r10+3], 80h
 * 00000001401CF356: jz      short loc_1401CF39A
 * 00000001401CF358: mov     ecx, 0C0000102h
 * 00000001401CF35D: rdmsr
 * 00000001401CF35F: shl     rdx, 20h
 * 00000001401CF363: or      rax, rdx
 * 00000001401CF366: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CF36D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CF375: cmp     [r10+0F0h], rax
 * 00000001401CF37C: jz      short loc_1401CF39A
 * 00000001401CF37E: mov     rdx, [r10+1F0h]
 * 00000001401CF385: bts     dword ptr [r10+74h], 8
 * 00000001401CF38B: dec     word ptr [r10+1E6h]
 * 00000001401CF393: mov     [rdx+80h], rax
 * 00000001401CF39A: test    byte ptr [r10+3], 3
 * 00000001401CF39F: mov     [rbp+0E8h+var_68], 0
 * 00000001401CF3A8: jz      short loc_1401CF3AF
 * 00000001401CF3AA: call    KiSaveDebugRegisterState
 * 00000001401CF3AF: cld
 * 00000001401CF3B0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CF3B4: ldmxcsr dword ptr gs:180h
 * 00000001401CF3BD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CF3C1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CF3C5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CF3C9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CF3CD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CF3D1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CF3D5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CF3DC: jz      short loc_1401CF3EA
 * 00000001401CF3DE: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF3E5: jz      short loc_1401CF3EA
 * 00000001401CF3E7: stac
 * 00000001401CF3EA: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CF3F4: jz      short loc_1401CF3F7
 * 00000001401CF3F6: sti
 * 00000001401CF3F7: mov     ecx, 80000003h
 * 00000001401CF3FC: mov     edx, 1
 * 00000001401CF401: mov     r8, [rbp+0E8h]
 * 00000001401CF408: dec     r8
 * 00000001401CF40B: mov     r9d, 0
 * 00000001401CF411: call    KiExceptionDispatch
 * 00000001401CF416: nop
 * 00000001401CF417: retn
 */
