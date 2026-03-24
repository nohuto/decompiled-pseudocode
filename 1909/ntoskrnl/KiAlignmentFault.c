/*
 * XREFs of KiAlignmentFault @ 0x1401D2E00
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140350900 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x1401D2E00 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x1401D2E00
 * Reason: Hex-Rays returned no pseudocode for 0x1401D2E00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D2E00: push    rbp
 * 00000001401D2E01: sub     rsp, 158h
 * 00000001401D2E08: lea     rbp, [rsp+80h]
 * 00000001401D2E10: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D2E14: mov     [rbp+0D8h+var_128], rax
 * 00000001401D2E18: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D2E1C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D2E20: mov     [rbp+0D8h+var_110], r8
 * 00000001401D2E24: mov     [rbp+0D8h+var_108], r9
 * 00000001401D2E28: mov     [rbp+0D8h+var_100], r10
 * 00000001401D2E2C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D2E30: test    [rbp+0D8h+arg_8], 1
 * 00000001401D2E37: jnz     short loc_1401D2E66
 * 00000001401D2E39: lfence
 * 00000001401D2E3C: test    byte ptr gs:278h, 1
 * 00000001401D2E45: jnz     short loc_1401D2E4F
 * 00000001401D2E47: lfence
 * 00000001401D2E4A: jmp     loc_1401D30AB
 * 00000001401D2E4F: movzx   eax, byte ptr gs:27Ah
 * 00000001401D2E58: mov     ecx, 48h ; 'H'
 * 00000001401D2E5D: xor     edx, edx
 * 00000001401D2E5F: wrmsr
 * 00000001401D2E61: jmp     loc_1401D30AB
 * 00000001401D2E66: test    cs:KiKvaShadow, 1
 * 00000001401D2E6D: jnz     short loc_1401D2E72
 * 00000001401D2E6F: swapgs
 * 00000001401D2E72: lfence
 * 00000001401D2E75: mov     r10, gs:188h
 * 00000001401D2E7E: mov     rcx, gs:188h
 * 00000001401D2E87: mov     rcx, [rcx+220h]
 * 00000001401D2E8E: mov     rcx, [rcx+860h]
 * 00000001401D2E95: mov     gs:270h, rcx
 * 00000001401D2E9E: mov     cl, gs:850h
 * 00000001401D2EA6: mov     gs:851h, cl
 * 00000001401D2EAE: mov     cl, gs:278h
 * 00000001401D2EB6: mov     gs:852h, cl
 * 00000001401D2EBE: movzx   eax, byte ptr gs:27Bh
 * 00000001401D2EC7: cmp     gs:27Ah, al
 * 00000001401D2ECF: jz      short loc_1401D2EE2
 * 00000001401D2ED1: mov     gs:27Ah, al
 * 00000001401D2ED9: mov     ecx, 48h ; 'H'
 * 00000001401D2EDE: xor     edx, edx
 * 00000001401D2EE0: wrmsr
 * 00000001401D2EE2: movzx   edx, byte ptr gs:278h
 * 00000001401D2EEB: test    edx, 8
 * 00000001401D2EF1: jz      short loc_1401D2F06
 * 00000001401D2EF3: mov     eax, 1
 * 00000001401D2EF8: xor     edx, edx
 * 00000001401D2EFA: mov     ecx, 49h ; 'I'
 * 00000001401D2EFF: wrmsr
 * 00000001401D2F01: jmp     loc_1401D3044
 * 00000001401D2F06: test    edx, 2
 * 00000001401D2F0C: jz      loc_1401D3041
 * 00000001401D2F12: test    byte ptr gs:279h, 4
 * 00000001401D2F1B: jnz     loc_1401D3041
 * 00000001401D2F21: call    loc_1401D3034
 * 00000001401D2F26: add     rsp, 8
 * 00000001401D2F2A: call    loc_1401D303D
 * 00000001401D2F2F: add     rsp, 8
 * 00000001401D2F33: call    loc_1401D2F26
 * 00000001401D2F38: add     rsp, 8
 * 00000001401D2F3C: call    loc_1401D2F2F
 * 00000001401D2F41: add     rsp, 8
 * 00000001401D2F45: call    loc_1401D2F38
 * 00000001401D2F4A: add     rsp, 8
 * 00000001401D2F4E: call    loc_1401D2F41
 * 00000001401D2F53: add     rsp, 8
 * 00000001401D2F57: call    loc_1401D2F4A
 * 00000001401D2F5C: add     rsp, 8
 * 00000001401D2F60: call    loc_1401D2F53
 * 00000001401D2F65: add     rsp, 8
 * 00000001401D2F69: call    loc_1401D2F5C
 * 00000001401D2F6E: add     rsp, 8
 * 00000001401D2F72: call    loc_1401D2F65
 * 00000001401D2F77: add     rsp, 8
 * 00000001401D2F7B: call    loc_1401D2F6E
 * 00000001401D2F80: add     rsp, 8
 * 00000001401D2F84: call    loc_1401D2F77
 * 00000001401D2F89: add     rsp, 8
 * 00000001401D2F8D: call    loc_1401D2F80
 * 00000001401D2F92: add     rsp, 8
 * 00000001401D2F96: call    loc_1401D2F89
 * 00000001401D2F9B: add     rsp, 8
 * 00000001401D2F9F: call    loc_1401D2F92
 * 00000001401D2FA4: add     rsp, 8
 * 00000001401D2FA8: call    loc_1401D2F9B
 * 00000001401D2FAD: add     rsp, 8
 * 00000001401D2FB1: call    loc_1401D2FA4
 * 00000001401D2FB6: add     rsp, 8
 * 00000001401D2FBA: call    loc_1401D2FAD
 * 00000001401D2FBF: add     rsp, 8
 * 00000001401D2FC3: call    loc_1401D2FB6
 * 00000001401D2FC8: add     rsp, 8
 * 00000001401D2FCC: call    loc_1401D2FBF
 * 00000001401D2FD1: add     rsp, 8
 * 00000001401D2FD5: call    loc_1401D2FC8
 * 00000001401D2FDA: add     rsp, 8
 * 00000001401D2FDE: call    loc_1401D2FD1
 * 00000001401D2FE3: add     rsp, 8
 * 00000001401D2FE7: call    loc_1401D2FDA
 * 00000001401D2FEC: add     rsp, 8
 * 00000001401D2FF0: call    loc_1401D2FE3
 * 00000001401D2FF5: add     rsp, 8
 * 00000001401D2FF9: call    loc_1401D2FEC
 * 00000001401D2FFE: add     rsp, 8
 * 00000001401D3002: call    loc_1401D2FF5
 * 00000001401D3007: add     rsp, 8
 * 00000001401D300B: call    loc_1401D2FFE
 * 00000001401D3010: add     rsp, 8
 * 00000001401D3014: call    loc_1401D3007
 * 00000001401D3019: add     rsp, 8
 * 00000001401D301D: call    loc_1401D3010
 * 00000001401D3022: add     rsp, 8
 * 00000001401D3026: call    loc_1401D3019
 * 00000001401D302B: add     rsp, 8
 * 00000001401D302F: call    loc_1401D3022
 * 00000001401D3034: add     rsp, 8
 * 00000001401D3038: call    loc_1401D302B
 * 00000001401D303D: add     rsp, 8
 * 00000001401D3041: lfence
 * 00000001401D3044: mov     byte ptr gs:853h, 0
 * 00000001401D304D: test    byte ptr [r10+3], 80h
 * 00000001401D3052: jz      short loc_1401D3096
 * 00000001401D3054: mov     ecx, 0C0000102h
 * 00000001401D3059: rdmsr
 * 00000001401D305B: shl     rdx, 20h
 * 00000001401D305F: or      rax, rdx
 * 00000001401D3062: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D3069: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D3071: cmp     [r10+0F0h], rax
 * 00000001401D3078: jz      short loc_1401D3096
 * 00000001401D307A: mov     rdx, [r10+1F0h]
 * 00000001401D3081: bts     dword ptr [r10+74h], 8
 * 00000001401D3087: dec     word ptr [r10+1E6h]
 * 00000001401D308F: mov     [rdx+80h], rax
 * 00000001401D3096: test    byte ptr [r10+3], 3
 * 00000001401D309B: mov     [rbp+0D8h+var_58], 0
 * 00000001401D30A4: jz      short loc_1401D30AB
 * 00000001401D30A6: call    KiSaveDebugRegisterState
 * 00000001401D30AB: cld
 * 00000001401D30AC: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D30B0: ldmxcsr dword ptr gs:180h
 * 00000001401D30B9: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D30BD: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D30C1: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D30C5: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D30C9: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D30CD: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D30D1: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D30D8: jz      short loc_1401D30E6
 * 00000001401D30DA: test    [rbp+0D8h+arg_8], 1
 * 00000001401D30E1: jz      short loc_1401D30E6
 * 00000001401D30E3: stac
 * 00000001401D30E6: mov     eax, [rbp+0E0h]
 * 00000001401D30EC: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D30F6: jz      short loc_1401D30F9
 * 00000001401D30F8: sti
 * 00000001401D30F9: mov     ecx, 80000002h
 * 00000001401D30FE: xor     edx, edx
 * 00000001401D3100: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D3107: call    KiExceptionDispatch
 * 00000001401D310C: nop
 * 00000001401D310D: retn
 */
