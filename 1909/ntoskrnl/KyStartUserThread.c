/*
 * XREFs of KyStartUserThread @ 0x1401CBCC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1401CBCC0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1401CBF90 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1401CBCC0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CBCC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CBCC0: sub     rsp, 8
 * 00000001401CBCC4: push    rbp
 * 00000001401CBCC5: sub     rsp, 158h
 * 00000001401CBCCC: lea     rbp, [rsp+80h]
 * 00000001401CBCD4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CBCD8: mov     [rbp+0E8h+var_138], rax
 * 00000001401CBCDC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CBCE0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CBCE4: mov     [rbp+0E8h+var_120], r8
 * 00000001401CBCE8: mov     [rbp+0E8h+var_118], r9
 * 00000001401CBCEC: mov     [rbp+0E8h+var_110], r10
 * 00000001401CBCF0: mov     [rbp+0E8h+var_108], r11
 * 00000001401CBCF4: test    [rbp+0E8h+arg_0], 1
 * 00000001401CBCFB: jnz     short loc_1401CBD2A
 * 00000001401CBCFD: lfence
 * 00000001401CBD00: test    byte ptr gs:278h, 1
 * 00000001401CBD09: jnz     short loc_1401CBD13
 * 00000001401CBD0B: lfence
 * 00000001401CBD0E: jmp     loc_1401CBF26
 * 00000001401CBD13: movzx   eax, byte ptr gs:27Ah
 * 00000001401CBD1C: mov     ecx, 48h ; 'H'
 * 00000001401CBD21: xor     edx, edx
 * 00000001401CBD23: wrmsr
 * 00000001401CBD25: jmp     loc_1401CBF26
 * 00000001401CBD2A: test    cs:KiKvaShadow, 1
 * 00000001401CBD31: jnz     short loc_1401CBD36
 * 00000001401CBD33: swapgs
 * 00000001401CBD36: lfence
 * 00000001401CBD39: mov     r10, gs:188h
 * 00000001401CBD42: mov     rcx, gs:188h
 * 00000001401CBD4B: mov     rcx, [rcx+220h]
 * 00000001401CBD52: mov     rcx, [rcx+860h]
 * 00000001401CBD59: mov     gs:270h, rcx
 * 00000001401CBD62: mov     cl, gs:850h
 * 00000001401CBD6A: mov     gs:851h, cl
 * 00000001401CBD72: mov     cl, gs:278h
 * 00000001401CBD7A: mov     gs:852h, cl
 * 00000001401CBD82: movzx   eax, byte ptr gs:27Bh
 * 00000001401CBD8B: cmp     gs:27Ah, al
 * 00000001401CBD93: jz      short loc_1401CBDA6
 * 00000001401CBD95: mov     gs:27Ah, al
 * 00000001401CBD9D: mov     ecx, 48h ; 'H'
 * 00000001401CBDA2: xor     edx, edx
 * 00000001401CBDA4: wrmsr
 * 00000001401CBDA6: movzx   edx, byte ptr gs:278h
 * 00000001401CBDAF: test    edx, 8
 * 00000001401CBDB5: jz      short loc_1401CBDCA
 * 00000001401CBDB7: mov     eax, 1
 * 00000001401CBDBC: xor     edx, edx
 * 00000001401CBDBE: mov     ecx, 49h ; 'I'
 * 00000001401CBDC3: wrmsr
 * 00000001401CBDC5: jmp     loc_1401CBF08
 * 00000001401CBDCA: test    edx, 2
 * 00000001401CBDD0: jz      loc_1401CBF05
 * 00000001401CBDD6: test    byte ptr gs:279h, 4
 * 00000001401CBDDF: jnz     loc_1401CBF05
 * 00000001401CBDE5: call    loc_1401CBEF8
 * 00000001401CBDEA: add     rsp, 8
 * 00000001401CBDEE: call    loc_1401CBF01
 * 00000001401CBDF3: add     rsp, 8
 * 00000001401CBDF7: call    loc_1401CBDEA
 * 00000001401CBDFC: add     rsp, 8
 * 00000001401CBE00: call    loc_1401CBDF3
 * 00000001401CBE05: add     rsp, 8
 * 00000001401CBE09: call    loc_1401CBDFC
 * 00000001401CBE0E: add     rsp, 8
 * 00000001401CBE12: call    loc_1401CBE05
 * 00000001401CBE17: add     rsp, 8
 * 00000001401CBE1B: call    loc_1401CBE0E
 * 00000001401CBE20: add     rsp, 8
 * 00000001401CBE24: call    loc_1401CBE17
 * 00000001401CBE29: add     rsp, 8
 * 00000001401CBE2D: call    loc_1401CBE20
 * 00000001401CBE32: add     rsp, 8
 * 00000001401CBE36: call    loc_1401CBE29
 * 00000001401CBE3B: add     rsp, 8
 * 00000001401CBE3F: call    loc_1401CBE32
 * 00000001401CBE44: add     rsp, 8
 * 00000001401CBE48: call    loc_1401CBE3B
 * 00000001401CBE4D: add     rsp, 8
 * 00000001401CBE51: call    loc_1401CBE44
 * 00000001401CBE56: add     rsp, 8
 * 00000001401CBE5A: call    loc_1401CBE4D
 * 00000001401CBE5F: add     rsp, 8
 * 00000001401CBE63: call    loc_1401CBE56
 * 00000001401CBE68: add     rsp, 8
 * 00000001401CBE6C: call    loc_1401CBE5F
 * 00000001401CBE71: add     rsp, 8
 * 00000001401CBE75: call    loc_1401CBE68
 * 00000001401CBE7A: add     rsp, 8
 * 00000001401CBE7E: call    loc_1401CBE71
 * 00000001401CBE83: add     rsp, 8
 * 00000001401CBE87: call    loc_1401CBE7A
 * 00000001401CBE8C: add     rsp, 8
 * 00000001401CBE90: call    loc_1401CBE83
 * 00000001401CBE95: add     rsp, 8
 * 00000001401CBE99: call    loc_1401CBE8C
 * 00000001401CBE9E: add     rsp, 8
 * 00000001401CBEA2: call    loc_1401CBE95
 * 00000001401CBEA7: add     rsp, 8
 * 00000001401CBEAB: call    loc_1401CBE9E
 * 00000001401CBEB0: add     rsp, 8
 * 00000001401CBEB4: call    loc_1401CBEA7
 * 00000001401CBEB9: add     rsp, 8
 * 00000001401CBEBD: call    loc_1401CBEB0
 * 00000001401CBEC2: add     rsp, 8
 * 00000001401CBEC6: call    loc_1401CBEB9
 * 00000001401CBECB: add     rsp, 8
 * 00000001401CBECF: call    loc_1401CBEC2
 * 00000001401CBED4: add     rsp, 8
 * 00000001401CBED8: call    loc_1401CBECB
 * 00000001401CBEDD: add     rsp, 8
 * 00000001401CBEE1: call    loc_1401CBED4
 * 00000001401CBEE6: add     rsp, 8
 * 00000001401CBEEA: call    loc_1401CBEDD
 * 00000001401CBEEF: add     rsp, 8
 * 00000001401CBEF3: call    loc_1401CBEE6
 * 00000001401CBEF8: add     rsp, 8
 * 00000001401CBEFC: call    loc_1401CBEEF
 * 00000001401CBF01: add     rsp, 8
 * 00000001401CBF05: lfence
 * 00000001401CBF08: mov     byte ptr gs:853h, 0
 * 00000001401CBF11: test    byte ptr [r10+3], 3
 * 00000001401CBF16: mov     [rbp+0E8h+var_68], 0
 * 00000001401CBF1F: jz      short loc_1401CBF26
 * 00000001401CBF21: call    KiSaveDebugRegisterState
 * 00000001401CBF26: cld
 * 00000001401CBF27: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CBF2B: ldmxcsr dword ptr gs:180h
 * 00000001401CBF34: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CBF38: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CBF3C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CBF40: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CBF44: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CBF48: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CBF4C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CBF53: jz      short loc_1401CBF61
 * 00000001401CBF55: test    [rbp+0E8h+arg_0], 1
 * 00000001401CBF5C: jz      short loc_1401CBF61
 * 00000001401CBF5E: stac
 * 00000001401CBF61: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CBF6B: jz      short loc_1401CBF6E
 * 00000001401CBF6D: sti
 * 00000001401CBF6E: call    KxStartUserThread
 * 00000001401CBF73: nop     word ptr [rax+rax+00000000h]
 * 00000001401CBF80: nop
 * 00000001401CBF81: retn
 */
