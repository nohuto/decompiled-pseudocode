/*
 * XREFs of KiCallUserMode @ 0x1401C0000
 * Callers:
 *     KeUserModeCallback @ 0x140647480 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1401C0000 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1401C0000
 * Reason: Hex-Rays returned no pseudocode for 0x1401C0000
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C0000: sub     rsp, 138h
 * 00000001401C0007: lea     rax, [rsp+138h+var_38]
 * 00000001401C000F: movaps  [rsp+138h+var_108], xmm6
 * 00000001401C0014: movaps  [rsp+138h+var_F8], xmm7
 * 00000001401C0019: movaps  [rsp+138h+var_E8], xmm8
 * 00000001401C001F: movaps  [rsp+138h+var_D8], xmm9
 * 00000001401C0025: movaps  [rsp+138h+var_C8], xmm10
 * 00000001401C002B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001401C0030: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001401C0035: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001401C003A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001401C003F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001401C0044: mov     [rax-8], rbp
 * 00000001401C0048: mov     rbp, rsp
 * 00000001401C004B: mov     [rax], rbx
 * 00000001401C004E: mov     [rax+8], rdi
 * 00000001401C0052: mov     [rax+10h], rsi
 * 00000001401C0056: mov     [rax+18h], r12
 * 00000001401C005A: mov     [rax+20h], r13
 * 00000001401C005E: mov     [rax+28h], r14
 * 00000001401C0062: mov     [rax+30h], r15
 * 00000001401C0066: xor     r10, r10
 * 00000001401C0069: xor     r12, r12
 * 00000001401C006C: xor     r13, r13
 * 00000001401C006F: xor     r14, r14
 * 00000001401C0072: xor     r15, r15
 * 00000001401C0075: pxor    xmm6, xmm6
 * 00000001401C0079: pxor    xmm7, xmm7
 * 00000001401C007D: pxor    xmm8, xmm8
 * 00000001401C0082: pxor    xmm9, xmm9
 * 00000001401C0087: pxor    xmm10, xmm10
 * 00000001401C008C: pxor    xmm11, xmm11
 * 00000001401C0091: pxor    xmm12, xmm12
 * 00000001401C0096: pxor    xmm13, xmm13
 * 00000001401C009B: pxor    xmm14, xmm14
 * 00000001401C00A0: pxor    xmm15, xmm15
 * 00000001401C00A5: mov     [rbp+0D8h], rcx
 * 00000001401C00AC: mov     [rbp+0E0h], rdx
 * 00000001401C00B3: mov     rbx, gs:188h
 * 00000001401C00BC: mov     [r8+20h], rsp
 * 00000001401C00C0: mov     rsi, [rbx+90h]
 * 00000001401C00C7: mov     [rbp+0D0h], rsi
 * 00000001401C00CE: cli
 * 00000001401C00CF: mov     [rbx+28h], r8
 * 00000001401C00D3: mov     [rbx+38h], r9
 * 00000001401C00D7: test    cs:KiKvaShadow, 1
 * 00000001401C00DE: jnz     short loc_1401C00EF
 * 00000001401C00E0: mov     rdi, gs:8
 * 00000001401C00E9: mov     [rdi+4], r8
 * 00000001401C00ED: jmp     short loc_1401C00F8
 * 00000001401C00EF: mov     gs:7008h, r8
 * 00000001401C00F8: mov     ecx, cs:KeKernelStackSize
 * 00000001401C00FE: sub     r9, rcx
 * 00000001401C0101: mov     gs:1A8h, r8
 * 00000001401C010A: mov     [rbx+30h], r9
 * 00000001401C010E: lea     rsp, [r8-190h]
 * 00000001401C0115: mov     rdi, rsp
 * 00000001401C0118: mov     ecx, 32h ; '2'
 * 00000001401C011D: rep movsq
 * 00000001401C0120: xor     edi, edi
 * 00000001401C0122: test    byte ptr [rbx+0C2h], 3
 * 00000001401C0129: jnz     loc_1401C0391
 * 00000001401C012F: test    dword ptr [rbx], 48010000h
 * 00000001401C0135: jnz     loc_1401C0391
 * 00000001401C013B: test    byte ptr gs:86Ch, 2
 * 00000001401C0144: jnz     loc_1401C0391
 * 00000001401C014A: lea     rbp, [rsi-110h]
 * 00000001401C0151: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C0155: xor     esi, esi
 * 00000001401C0157: test    byte ptr [rbx+3], 3
 * 00000001401C015B: jnz     loc_1401C0366
 * 00000001401C0161: mov     r9, cs:KeUserCallbackDispatcher
 * 00000001401C0168: mov     byte ptr gs:856h, 0
 * 00000001401C0171: movzx   eax, word ptr gs:86Ah
 * 00000001401C017A: cmp     gs:864h, ax
 * 00000001401C0183: jz      short loc_1401C0197
 * 00000001401C0185: mov     gs:864h, ax
 * 00000001401C018E: mov     ecx, 48h ; 'H'
 * 00000001401C0193: xor     edx, edx
 * 00000001401C0195: wrmsr
 * 00000001401C0197: btr     word ptr gs:860h, 2
 * 00000001401C01A2: jnb     short loc_1401C01B2
 * 00000001401C01A4: mov     eax, 1
 * 00000001401C01A9: xor     edx, edx
 * 00000001401C01AB: mov     ecx, 49h ; 'I'
 * 00000001401C01B0: wrmsr
 * 00000001401C01B2: btr     word ptr gs:860h, 5
 * 00000001401C01BD: jnb     loc_1401C02E8
 * 00000001401C01C3: call    loc_1401C02D6
 * 00000001401C01C8: add     rsp, 8
 * 00000001401C01CC: call    loc_1401C02DF
 * 00000001401C01D1: add     rsp, 8
 * 00000001401C01D5: call    loc_1401C01C8
 * 00000001401C01DA: add     rsp, 8
 * 00000001401C01DE: call    loc_1401C01D1
 * 00000001401C01E3: add     rsp, 8
 * 00000001401C01E7: call    loc_1401C01DA
 * 00000001401C01EC: add     rsp, 8
 * 00000001401C01F0: call    loc_1401C01E3
 * 00000001401C01F5: add     rsp, 8
 * 00000001401C01F9: call    loc_1401C01EC
 * 00000001401C01FE: add     rsp, 8
 * 00000001401C0202: call    loc_1401C01F5
 * 00000001401C0207: add     rsp, 8
 * 00000001401C020B: call    loc_1401C01FE
 * 00000001401C0210: add     rsp, 8
 * 00000001401C0214: call    loc_1401C0207
 * 00000001401C0219: add     rsp, 8
 * 00000001401C021D: call    loc_1401C0210
 * 00000001401C0222: add     rsp, 8
 * 00000001401C0226: call    loc_1401C0219
 * 00000001401C022B: add     rsp, 8
 * 00000001401C022F: call    loc_1401C0222
 * 00000001401C0234: add     rsp, 8
 * 00000001401C0238: call    loc_1401C022B
 * 00000001401C023D: add     rsp, 8
 * 00000001401C0241: call    loc_1401C0234
 * 00000001401C0246: add     rsp, 8
 * 00000001401C024A: call    loc_1401C023D
 * 00000001401C024F: add     rsp, 8
 * 00000001401C0253: call    loc_1401C0246
 * 00000001401C0258: add     rsp, 8
 * 00000001401C025C: call    loc_1401C024F
 * 00000001401C0261: add     rsp, 8
 * 00000001401C0265: call    loc_1401C0258
 * 00000001401C026A: add     rsp, 8
 * 00000001401C026E: call    loc_1401C0261
 * 00000001401C0273: add     rsp, 8
 * 00000001401C0277: call    loc_1401C026A
 * 00000001401C027C: add     rsp, 8
 * 00000001401C0280: call    loc_1401C0273
 * 00000001401C0285: add     rsp, 8
 * 00000001401C0289: call    loc_1401C027C
 * 00000001401C028E: add     rsp, 8
 * 00000001401C0292: call    loc_1401C0285
 * 00000001401C0297: add     rsp, 8
 * 00000001401C029B: call    loc_1401C028E
 * 00000001401C02A0: add     rsp, 8
 * 00000001401C02A4: call    loc_1401C0297
 * 00000001401C02A9: add     rsp, 8
 * 00000001401C02AD: call    loc_1401C02A0
 * 00000001401C02B2: add     rsp, 8
 * 00000001401C02B6: call    loc_1401C02A9
 * 00000001401C02BB: add     rsp, 8
 * 00000001401C02BF: call    loc_1401C02B2
 * 00000001401C02C4: add     rsp, 8
 * 00000001401C02C8: call    loc_1401C02BB
 * 00000001401C02CD: add     rsp, 8
 * 00000001401C02D1: call    loc_1401C02C4
 * 00000001401C02D6: add     rsp, 8
 * 00000001401C02DA: call    loc_1401C02CD
 * 00000001401C02DF: add     rsp, 8
 * 00000001401C02E3: mov     eax, 0DADAh
 * 00000001401C02E8: test    word ptr gs:860h, 80h
 * 00000001401C02F3: jz      short loc_1401C0301
 * 00000001401C02F5: xor     eax, eax
 * 00000001401C02F7: xor     edx, edx
 * 00000001401C02F9: mov     ecx, 1
 * 00000001401C02FE: div     rcx
 * 00000001401C0301: mov     rcx, r9
 * 00000001401C0304: xor     eax, eax
 * 00000001401C0306: xor     edx, edx
 * 00000001401C0308: mov     r8, [rbp+100h]
 * 00000001401C030F: mov     r9, [rbp+0D8h]
 * 00000001401C0316: pxor    xmm0, xmm0
 * 00000001401C031A: pxor    xmm1, xmm1
 * 00000001401C031E: pxor    xmm2, xmm2
 * 00000001401C0322: pxor    xmm3, xmm3
 * 00000001401C0326: pxor    xmm4, xmm4
 * 00000001401C032A: pxor    xmm5, xmm5
 * 00000001401C032E: mov     r11, [rbp+0F8h]
 * 00000001401C0335: xor     ebx, ebx
 * 00000001401C0337: test    cs:KiKvaShadow, 1
 * 00000001401C033E: jnz     KiKernelSysretExit
 * 00000001401C0344: mov     rbp, r9
 * 00000001401C0347: mov     rsp, r8
 * 00000001401C034A: test    word ptr gs:860h, 100h
 * 00000001401C0355: jz      short loc_1401C0360
 * 00000001401C0357: verw    word ptr gs:701Ch
 * 00000001401C0360: swapgs
 * 00000001401C0363: sysret
 * 00000001401C0366: call    KiRestoreDebugRegisterState
 * 00000001401C036B: mov     r10, cs:KeUserCallbackDispatcher
 * 00000001401C0372: mov     r9, [rbx+0B8h]
 * 00000001401C0379: mov     r9, [r9+2C8h]
 * 00000001401C0380: or      r9, r9
 * 00000001401C0383: jnz     loc_1401C0168
 * 00000001401C0389: xchg    r9, r10
 * 00000001401C038C: jmp     loc_1401C0168
 * 00000001401C0391: lea     rbp, [rsp+138h+var_B8]
 * 00000001401C0399: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001401C03A2: mov     rax, cs:KeUserCallbackDispatcher
 * 00000001401C03A9: mov     [rbp+0E8h], rax
 * 00000001401C03B0: lea     rcx, KiSystemServiceExit
 * 00000001401C03B7: jmp     rcx
 * 00000001401C03BD: retn
 */
