/*
 * XREFs of KiGeneralProtectionFault @ 0x1401CB1C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x14032E780 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1401CB1C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1401CB1C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CB1C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CB1C0: push    rbp
 * 00000001401CB1C1: sub     rsp, 158h
 * 00000001401CB1C8: lea     rbp, [rsp+80h]
 * 00000001401CB1D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CB1D4: mov     [rbp+0D8h+var_128], rax
 * 00000001401CB1D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CB1DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CB1E0: mov     [rbp+0D8h+var_110], r8
 * 00000001401CB1E4: mov     [rbp+0D8h+var_108], r9
 * 00000001401CB1E8: mov     [rbp+0D8h+var_100], r10
 * 00000001401CB1EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CB1F0: test    [rbp+0D8h+arg_8], 1
 * 00000001401CB1F7: jnz     short loc_1401CB228
 * 00000001401CB1F9: lfence
 * 00000001401CB1FC: test    word ptr gs:860h, 1
 * 00000001401CB207: jnz     short loc_1401CB211
 * 00000001401CB209: lfence
 * 00000001401CB20C: jmp     loc_1401CB47A
 * 00000001401CB211: movzx   eax, word ptr gs:864h
 * 00000001401CB21A: mov     ecx, 48h ; 'H'
 * 00000001401CB21F: xor     edx, edx
 * 00000001401CB221: wrmsr
 * 00000001401CB223: jmp     loc_1401CB47A
 * 00000001401CB228: test    cs:KiKvaShadow, 1
 * 00000001401CB22F: jnz     short loc_1401CB234
 * 00000001401CB231: swapgs
 * 00000001401CB234: lfence
 * 00000001401CB237: mov     r10, gs:188h
 * 00000001401CB240: mov     rcx, gs:188h
 * 00000001401CB249: mov     rcx, [rcx+220h]
 * 00000001401CB250: mov     rcx, [rcx+830h]
 * 00000001401CB257: mov     gs:858h, rcx
 * 00000001401CB260: mov     cx, gs:850h
 * 00000001401CB269: mov     gs:852h, cx
 * 00000001401CB272: mov     cx, gs:860h
 * 00000001401CB27B: mov     gs:854h, cx
 * 00000001401CB284: movzx   eax, word ptr gs:866h
 * 00000001401CB28D: cmp     gs:864h, ax
 * 00000001401CB296: jz      short loc_1401CB2AA
 * 00000001401CB298: mov     gs:864h, ax
 * 00000001401CB2A1: mov     ecx, 48h ; 'H'
 * 00000001401CB2A6: xor     edx, edx
 * 00000001401CB2A8: wrmsr
 * 00000001401CB2AA: movzx   edx, word ptr gs:860h
 * 00000001401CB2B3: test    edx, 8
 * 00000001401CB2B9: jz      short loc_1401CB2D2
 * 00000001401CB2BB: mov     eax, 1
 * 00000001401CB2C0: xor     edx, edx
 * 00000001401CB2C2: mov     ecx, 49h ; 'I'
 * 00000001401CB2C7: wrmsr
 * 00000001401CB2C9: movzx   edx, word ptr gs:860h
 * 00000001401CB2D2: test    edx, 2
 * 00000001401CB2D8: jz      loc_1401CB403
 * 00000001401CB2DE: call    loc_1401CB3F1
 * 00000001401CB2E3: add     rsp, 8
 * 00000001401CB2E7: call    loc_1401CB3FA
 * 00000001401CB2EC: add     rsp, 8
 * 00000001401CB2F0: call    loc_1401CB2E3
 * 00000001401CB2F5: add     rsp, 8
 * 00000001401CB2F9: call    loc_1401CB2EC
 * 00000001401CB2FE: add     rsp, 8
 * 00000001401CB302: call    loc_1401CB2F5
 * 00000001401CB307: add     rsp, 8
 * 00000001401CB30B: call    loc_1401CB2FE
 * 00000001401CB310: add     rsp, 8
 * 00000001401CB314: call    loc_1401CB307
 * 00000001401CB319: add     rsp, 8
 * 00000001401CB31D: call    loc_1401CB310
 * 00000001401CB322: add     rsp, 8
 * 00000001401CB326: call    loc_1401CB319
 * 00000001401CB32B: add     rsp, 8
 * 00000001401CB32F: call    loc_1401CB322
 * 00000001401CB334: add     rsp, 8
 * 00000001401CB338: call    loc_1401CB32B
 * 00000001401CB33D: add     rsp, 8
 * 00000001401CB341: call    loc_1401CB334
 * 00000001401CB346: add     rsp, 8
 * 00000001401CB34A: call    loc_1401CB33D
 * 00000001401CB34F: add     rsp, 8
 * 00000001401CB353: call    loc_1401CB346
 * 00000001401CB358: add     rsp, 8
 * 00000001401CB35C: call    loc_1401CB34F
 * 00000001401CB361: add     rsp, 8
 * 00000001401CB365: call    loc_1401CB358
 * 00000001401CB36A: add     rsp, 8
 * 00000001401CB36E: call    loc_1401CB361
 * 00000001401CB373: add     rsp, 8
 * 00000001401CB377: call    loc_1401CB36A
 * 00000001401CB37C: add     rsp, 8
 * 00000001401CB380: call    loc_1401CB373
 * 00000001401CB385: add     rsp, 8
 * 00000001401CB389: call    loc_1401CB37C
 * 00000001401CB38E: add     rsp, 8
 * 00000001401CB392: call    loc_1401CB385
 * 00000001401CB397: add     rsp, 8
 * 00000001401CB39B: call    loc_1401CB38E
 * 00000001401CB3A0: add     rsp, 8
 * 00000001401CB3A4: call    loc_1401CB397
 * 00000001401CB3A9: add     rsp, 8
 * 00000001401CB3AD: call    loc_1401CB3A0
 * 00000001401CB3B2: add     rsp, 8
 * 00000001401CB3B6: call    loc_1401CB3A9
 * 00000001401CB3BB: add     rsp, 8
 * 00000001401CB3BF: call    loc_1401CB3B2
 * 00000001401CB3C4: add     rsp, 8
 * 00000001401CB3C8: call    loc_1401CB3BB
 * 00000001401CB3CD: add     rsp, 8
 * 00000001401CB3D1: call    loc_1401CB3C4
 * 00000001401CB3D6: add     rsp, 8
 * 00000001401CB3DA: call    loc_1401CB3CD
 * 00000001401CB3DF: add     rsp, 8
 * 00000001401CB3E3: call    loc_1401CB3D6
 * 00000001401CB3E8: add     rsp, 8
 * 00000001401CB3EC: call    loc_1401CB3DF
 * 00000001401CB3F1: add     rsp, 8
 * 00000001401CB3F5: call    loc_1401CB3E8
 * 00000001401CB3FA: add     rsp, 8
 * 00000001401CB3FE: mov     eax, 0DADAh
 * 00000001401CB403: test    edx, 200h
 * 00000001401CB409: jz      short loc_1401CB410
 * 00000001401CB40B: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CB410: lfence
 * 00000001401CB413: mov     byte ptr gs:856h, 0
 * 00000001401CB41C: test    byte ptr [r10+3], 80h
 * 00000001401CB421: jz      short loc_1401CB465
 * 00000001401CB423: mov     ecx, 0C0000102h
 * 00000001401CB428: rdmsr
 * 00000001401CB42A: shl     rdx, 20h
 * 00000001401CB42E: or      rax, rdx
 * 00000001401CB431: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CB438: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CB440: cmp     [r10+0F0h], rax
 * 00000001401CB447: jz      short loc_1401CB465
 * 00000001401CB449: mov     rdx, [r10+1F0h]
 * 00000001401CB450: bts     dword ptr [r10+74h], 8
 * 00000001401CB456: dec     word ptr [r10+1E6h]
 * 00000001401CB45E: mov     [rdx+80h], rax
 * 00000001401CB465: test    byte ptr [r10+3], 3
 * 00000001401CB46A: mov     [rbp+0D8h+var_58], 0
 * 00000001401CB473: jz      short loc_1401CB47A
 * 00000001401CB475: call    KiSaveDebugRegisterState
 * 00000001401CB47A: cld
 * 00000001401CB47B: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CB47F: ldmxcsr dword ptr gs:180h
 * 00000001401CB488: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CB48C: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CB490: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CB494: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CB498: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CB49C: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CB4A0: mov     eax, [rbp+0E0h]
 * 00000001401CB4A6: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CB4B0: jz      short loc_1401CB4B3
 * 00000001401CB4B2: sti
 * 00000001401CB4B3: mov     ecx, 10000001h
 * 00000001401CB4B8: mov     edx, 2
 * 00000001401CB4BD: mov     r9d, [rbp+0E0h]
 * 00000001401CB4C4: and     r9d, 0FFFFh
 * 00000001401CB4CB: xor     r10, r10
 * 00000001401CB4CE: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CB4D5: call    KiExceptionDispatch
 * 00000001401CB4DA: nop
 * 00000001401CB4DB: retn
 */
