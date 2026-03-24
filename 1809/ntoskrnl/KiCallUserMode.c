/*
 * XREFs of KiCallUserMode @ 0x1401BFEA0
 * Callers:
 *     KeUserModeCallback @ 0x140646460 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1401BFEA0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1401BFEA0
 * Reason: Hex-Rays returned no pseudocode for 0x1401BFEA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BFEA0: sub     rsp, 138h
 * 00000001401BFEA7: lea     rax, [rsp+138h+var_38]
 * 00000001401BFEAF: movaps  [rsp+138h+var_108], xmm6
 * 00000001401BFEB4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001401BFEB9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001401BFEBF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001401BFEC5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001401BFECB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001401BFED0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001401BFED5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001401BFEDA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001401BFEDF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001401BFEE4: mov     [rax-8], rbp
 * 00000001401BFEE8: mov     rbp, rsp
 * 00000001401BFEEB: mov     [rax], rbx
 * 00000001401BFEEE: mov     [rax+8], rdi
 * 00000001401BFEF2: mov     [rax+10h], rsi
 * 00000001401BFEF6: mov     [rax+18h], r12
 * 00000001401BFEFA: mov     [rax+20h], r13
 * 00000001401BFEFE: mov     [rax+28h], r14
 * 00000001401BFF02: mov     [rax+30h], r15
 * 00000001401BFF06: xor     r10, r10
 * 00000001401BFF09: xor     r12, r12
 * 00000001401BFF0C: xor     r13, r13
 * 00000001401BFF0F: xor     r14, r14
 * 00000001401BFF12: xor     r15, r15
 * 00000001401BFF15: pxor    xmm6, xmm6
 * 00000001401BFF19: pxor    xmm7, xmm7
 * 00000001401BFF1D: pxor    xmm8, xmm8
 * 00000001401BFF22: pxor    xmm9, xmm9
 * 00000001401BFF27: pxor    xmm10, xmm10
 * 00000001401BFF2C: pxor    xmm11, xmm11
 * 00000001401BFF31: pxor    xmm12, xmm12
 * 00000001401BFF36: pxor    xmm13, xmm13
 * 00000001401BFF3B: pxor    xmm14, xmm14
 * 00000001401BFF40: pxor    xmm15, xmm15
 * 00000001401BFF45: mov     [rbp+0D8h], rcx
 * 00000001401BFF4C: mov     [rbp+0E0h], rdx
 * 00000001401BFF53: mov     rbx, gs:188h
 * 00000001401BFF5C: mov     [r8+20h], rsp
 * 00000001401BFF60: mov     rsi, [rbx+90h]
 * 00000001401BFF67: mov     [rbp+0D0h], rsi
 * 00000001401BFF6E: cli
 * 00000001401BFF6F: mov     [rbx+28h], r8
 * 00000001401BFF73: mov     [rbx+38h], r9
 * 00000001401BFF77: test    cs:KiKvaShadow, 1
 * 00000001401BFF7E: jnz     short loc_1401BFF8F
 * 00000001401BFF80: mov     rdi, gs:8
 * 00000001401BFF89: mov     [rdi+4], r8
 * 00000001401BFF8D: jmp     short loc_1401BFF98
 * 00000001401BFF8F: mov     gs:7008h, r8
 * 00000001401BFF98: mov     ecx, cs:KeKernelStackSize
 * 00000001401BFF9E: sub     r9, rcx
 * 00000001401BFFA1: mov     gs:1A8h, r8
 * 00000001401BFFAA: mov     [rbx+30h], r9
 * 00000001401BFFAE: lea     rsp, [r8-190h]
 * 00000001401BFFB5: mov     rdi, rsp
 * 00000001401BFFB8: mov     ecx, 32h ; '2'
 * 00000001401BFFBD: rep movsq
 * 00000001401BFFC0: xor     edi, edi
 * 00000001401BFFC2: test    byte ptr [rbx+0C2h], 3
 * 00000001401BFFC9: jnz     loc_1401C0231
 * 00000001401BFFCF: test    dword ptr [rbx], 48010000h
 * 00000001401BFFD5: jnz     loc_1401C0231
 * 00000001401BFFDB: test    byte ptr gs:86Ch, 2
 * 00000001401BFFE4: jnz     loc_1401C0231
 * 00000001401BFFEA: lea     rbp, [rsi-110h]
 * 00000001401BFFF1: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BFFF5: xor     esi, esi
 * 00000001401BFFF7: test    byte ptr [rbx+3], 3
 * 00000001401BFFFB: jnz     loc_1401C0206
 * 00000001401C0001: mov     r9, cs:KeUserCallbackDispatcher
 * 00000001401C0008: mov     byte ptr gs:856h, 0
 * 00000001401C0011: movzx   eax, word ptr gs:86Ah
 * 00000001401C001A: cmp     gs:864h, ax
 * 00000001401C0023: jz      short loc_1401C0037
 * 00000001401C0025: mov     gs:864h, ax
 * 00000001401C002E: mov     ecx, 48h ; 'H'
 * 00000001401C0033: xor     edx, edx
 * 00000001401C0035: wrmsr
 * 00000001401C0037: btr     word ptr gs:860h, 2
 * 00000001401C0042: jnb     short loc_1401C0052
 * 00000001401C0044: mov     eax, 1
 * 00000001401C0049: xor     edx, edx
 * 00000001401C004B: mov     ecx, 49h ; 'I'
 * 00000001401C0050: wrmsr
 * 00000001401C0052: btr     word ptr gs:860h, 5
 * 00000001401C005D: jnb     loc_1401C0188
 * 00000001401C0063: call    loc_1401C0176
 * 00000001401C0068: add     rsp, 8
 * 00000001401C006C: call    loc_1401C017F
 * 00000001401C0071: add     rsp, 8
 * 00000001401C0075: call    loc_1401C0068
 * 00000001401C007A: add     rsp, 8
 * 00000001401C007E: call    loc_1401C0071
 * 00000001401C0083: add     rsp, 8
 * 00000001401C0087: call    loc_1401C007A
 * 00000001401C008C: add     rsp, 8
 * 00000001401C0090: call    loc_1401C0083
 * 00000001401C0095: add     rsp, 8
 * 00000001401C0099: call    loc_1401C008C
 * 00000001401C009E: add     rsp, 8
 * 00000001401C00A2: call    loc_1401C0095
 * 00000001401C00A7: add     rsp, 8
 * 00000001401C00AB: call    loc_1401C009E
 * 00000001401C00B0: add     rsp, 8
 * 00000001401C00B4: call    loc_1401C00A7
 * 00000001401C00B9: add     rsp, 8
 * 00000001401C00BD: call    loc_1401C00B0
 * 00000001401C00C2: add     rsp, 8
 * 00000001401C00C6: call    loc_1401C00B9
 * 00000001401C00CB: add     rsp, 8
 * 00000001401C00CF: call    loc_1401C00C2
 * 00000001401C00D4: add     rsp, 8
 * 00000001401C00D8: call    loc_1401C00CB
 * 00000001401C00DD: add     rsp, 8
 * 00000001401C00E1: call    loc_1401C00D4
 * 00000001401C00E6: add     rsp, 8
 * 00000001401C00EA: call    loc_1401C00DD
 * 00000001401C00EF: add     rsp, 8
 * 00000001401C00F3: call    loc_1401C00E6
 * 00000001401C00F8: add     rsp, 8
 * 00000001401C00FC: call    loc_1401C00EF
 * 00000001401C0101: add     rsp, 8
 * 00000001401C0105: call    loc_1401C00F8
 * 00000001401C010A: add     rsp, 8
 * 00000001401C010E: call    loc_1401C0101
 * 00000001401C0113: add     rsp, 8
 * 00000001401C0117: call    loc_1401C010A
 * 00000001401C011C: add     rsp, 8
 * 00000001401C0120: call    loc_1401C0113
 * 00000001401C0125: add     rsp, 8
 * 00000001401C0129: call    loc_1401C011C
 * 00000001401C012E: add     rsp, 8
 * 00000001401C0132: call    loc_1401C0125
 * 00000001401C0137: add     rsp, 8
 * 00000001401C013B: call    loc_1401C012E
 * 00000001401C0140: add     rsp, 8
 * 00000001401C0144: call    loc_1401C0137
 * 00000001401C0149: add     rsp, 8
 * 00000001401C014D: call    loc_1401C0140
 * 00000001401C0152: add     rsp, 8
 * 00000001401C0156: call    loc_1401C0149
 * 00000001401C015B: add     rsp, 8
 * 00000001401C015F: call    loc_1401C0152
 * 00000001401C0164: add     rsp, 8
 * 00000001401C0168: call    loc_1401C015B
 * 00000001401C016D: add     rsp, 8
 * 00000001401C0171: call    loc_1401C0164
 * 00000001401C0176: add     rsp, 8
 * 00000001401C017A: call    loc_1401C016D
 * 00000001401C017F: add     rsp, 8
 * 00000001401C0183: mov     eax, 0DADAh
 * 00000001401C0188: test    word ptr gs:860h, 80h
 * 00000001401C0193: jz      short loc_1401C01A1
 * 00000001401C0195: xor     eax, eax
 * 00000001401C0197: xor     edx, edx
 * 00000001401C0199: mov     ecx, 1
 * 00000001401C019E: div     rcx
 * 00000001401C01A1: mov     rcx, r9
 * 00000001401C01A4: xor     eax, eax
 * 00000001401C01A6: xor     edx, edx
 * 00000001401C01A8: mov     r8, [rbp+100h]
 * 00000001401C01AF: mov     r9, [rbp+0D8h]
 * 00000001401C01B6: pxor    xmm0, xmm0
 * 00000001401C01BA: pxor    xmm1, xmm1
 * 00000001401C01BE: pxor    xmm2, xmm2
 * 00000001401C01C2: pxor    xmm3, xmm3
 * 00000001401C01C6: pxor    xmm4, xmm4
 * 00000001401C01CA: pxor    xmm5, xmm5
 * 00000001401C01CE: mov     r11, [rbp+0F8h]
 * 00000001401C01D5: xor     ebx, ebx
 * 00000001401C01D7: test    cs:KiKvaShadow, 1
 * 00000001401C01DE: jnz     KiKernelSysretExit
 * 00000001401C01E4: mov     rbp, r9
 * 00000001401C01E7: mov     rsp, r8
 * 00000001401C01EA: test    word ptr gs:860h, 100h
 * 00000001401C01F5: jz      short loc_1401C0200
 * 00000001401C01F7: verw    word ptr gs:701Ch
 * 00000001401C0200: swapgs
 * 00000001401C0203: sysret
 * 00000001401C0206: call    KiRestoreDebugRegisterState
 * 00000001401C020B: mov     r10, cs:KeUserCallbackDispatcher
 * 00000001401C0212: mov     r9, [rbx+0B8h]
 * 00000001401C0219: mov     r9, [r9+2C8h]
 * 00000001401C0220: or      r9, r9
 * 00000001401C0223: jnz     loc_1401C0008
 * 00000001401C0229: xchg    r9, r10
 * 00000001401C022C: jmp     loc_1401C0008
 * 00000001401C0231: lea     rbp, [rsp+138h+var_B8]
 * 00000001401C0239: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001401C0242: mov     rax, cs:KeUserCallbackDispatcher
 * 00000001401C0249: mov     [rbp+0E8h], rax
 * 00000001401C0250: lea     rcx, KiSystemServiceExit
 * 00000001401C0257: jmp     rcx
 * 00000001401C025D: retn
 */
