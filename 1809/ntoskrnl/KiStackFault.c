/*
 * XREFs of KiStackFault @ 0x1401CAE80
 * Callers:
 *     KiStackFaultShadow @ 0x14032E700 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1401CAE80 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1401CAE80
 * Reason: Hex-Rays returned no pseudocode for 0x1401CAE80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CAE80: push    rbp
 * 00000001401CAE81: sub     rsp, 158h
 * 00000001401CAE88: lea     rbp, [rsp+80h]
 * 00000001401CAE90: mov     [rbp+0D8h+var_12D], 1
 * 00000001401CAE94: mov     [rbp+0D8h+var_128], rax
 * 00000001401CAE98: mov     [rbp+0D8h+var_120], rcx
 * 00000001401CAE9C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401CAEA0: mov     [rbp+0D8h+var_110], r8
 * 00000001401CAEA4: mov     [rbp+0D8h+var_108], r9
 * 00000001401CAEA8: mov     [rbp+0D8h+var_100], r10
 * 00000001401CAEAC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401CAEB0: test    [rbp+0D8h+arg_8], 1
 * 00000001401CAEB7: jnz     short loc_1401CAEE8
 * 00000001401CAEB9: lfence
 * 00000001401CAEBC: test    word ptr gs:860h, 1
 * 00000001401CAEC7: jnz     short loc_1401CAED1
 * 00000001401CAEC9: lfence
 * 00000001401CAECC: jmp     loc_1401CB13A
 * 00000001401CAED1: movzx   eax, word ptr gs:864h
 * 00000001401CAEDA: mov     ecx, 48h ; 'H'
 * 00000001401CAEDF: xor     edx, edx
 * 00000001401CAEE1: wrmsr
 * 00000001401CAEE3: jmp     loc_1401CB13A
 * 00000001401CAEE8: test    cs:KiKvaShadow, 1
 * 00000001401CAEEF: jnz     short loc_1401CAEF4
 * 00000001401CAEF1: swapgs
 * 00000001401CAEF4: lfence
 * 00000001401CAEF7: mov     r10, gs:188h
 * 00000001401CAF00: mov     rcx, gs:188h
 * 00000001401CAF09: mov     rcx, [rcx+220h]
 * 00000001401CAF10: mov     rcx, [rcx+830h]
 * 00000001401CAF17: mov     gs:858h, rcx
 * 00000001401CAF20: mov     cx, gs:850h
 * 00000001401CAF29: mov     gs:852h, cx
 * 00000001401CAF32: mov     cx, gs:860h
 * 00000001401CAF3B: mov     gs:854h, cx
 * 00000001401CAF44: movzx   eax, word ptr gs:866h
 * 00000001401CAF4D: cmp     gs:864h, ax
 * 00000001401CAF56: jz      short loc_1401CAF6A
 * 00000001401CAF58: mov     gs:864h, ax
 * 00000001401CAF61: mov     ecx, 48h ; 'H'
 * 00000001401CAF66: xor     edx, edx
 * 00000001401CAF68: wrmsr
 * 00000001401CAF6A: movzx   edx, word ptr gs:860h
 * 00000001401CAF73: test    edx, 8
 * 00000001401CAF79: jz      short loc_1401CAF92
 * 00000001401CAF7B: mov     eax, 1
 * 00000001401CAF80: xor     edx, edx
 * 00000001401CAF82: mov     ecx, 49h ; 'I'
 * 00000001401CAF87: wrmsr
 * 00000001401CAF89: movzx   edx, word ptr gs:860h
 * 00000001401CAF92: test    edx, 2
 * 00000001401CAF98: jz      loc_1401CB0C3
 * 00000001401CAF9E: call    loc_1401CB0B1
 * 00000001401CAFA3: add     rsp, 8
 * 00000001401CAFA7: call    loc_1401CB0BA
 * 00000001401CAFAC: add     rsp, 8
 * 00000001401CAFB0: call    loc_1401CAFA3
 * 00000001401CAFB5: add     rsp, 8
 * 00000001401CAFB9: call    loc_1401CAFAC
 * 00000001401CAFBE: add     rsp, 8
 * 00000001401CAFC2: call    loc_1401CAFB5
 * 00000001401CAFC7: add     rsp, 8
 * 00000001401CAFCB: call    loc_1401CAFBE
 * 00000001401CAFD0: add     rsp, 8
 * 00000001401CAFD4: call    loc_1401CAFC7
 * 00000001401CAFD9: add     rsp, 8
 * 00000001401CAFDD: call    loc_1401CAFD0
 * 00000001401CAFE2: add     rsp, 8
 * 00000001401CAFE6: call    loc_1401CAFD9
 * 00000001401CAFEB: add     rsp, 8
 * 00000001401CAFEF: call    loc_1401CAFE2
 * 00000001401CAFF4: add     rsp, 8
 * 00000001401CAFF8: call    loc_1401CAFEB
 * 00000001401CAFFD: add     rsp, 8
 * 00000001401CB001: call    loc_1401CAFF4
 * 00000001401CB006: add     rsp, 8
 * 00000001401CB00A: call    loc_1401CAFFD
 * 00000001401CB00F: add     rsp, 8
 * 00000001401CB013: call    loc_1401CB006
 * 00000001401CB018: add     rsp, 8
 * 00000001401CB01C: call    loc_1401CB00F
 * 00000001401CB021: add     rsp, 8
 * 00000001401CB025: call    loc_1401CB018
 * 00000001401CB02A: add     rsp, 8
 * 00000001401CB02E: call    loc_1401CB021
 * 00000001401CB033: add     rsp, 8
 * 00000001401CB037: call    loc_1401CB02A
 * 00000001401CB03C: add     rsp, 8
 * 00000001401CB040: call    loc_1401CB033
 * 00000001401CB045: add     rsp, 8
 * 00000001401CB049: call    loc_1401CB03C
 * 00000001401CB04E: add     rsp, 8
 * 00000001401CB052: call    loc_1401CB045
 * 00000001401CB057: add     rsp, 8
 * 00000001401CB05B: call    loc_1401CB04E
 * 00000001401CB060: add     rsp, 8
 * 00000001401CB064: call    loc_1401CB057
 * 00000001401CB069: add     rsp, 8
 * 00000001401CB06D: call    loc_1401CB060
 * 00000001401CB072: add     rsp, 8
 * 00000001401CB076: call    loc_1401CB069
 * 00000001401CB07B: add     rsp, 8
 * 00000001401CB07F: call    loc_1401CB072
 * 00000001401CB084: add     rsp, 8
 * 00000001401CB088: call    loc_1401CB07B
 * 00000001401CB08D: add     rsp, 8
 * 00000001401CB091: call    loc_1401CB084
 * 00000001401CB096: add     rsp, 8
 * 00000001401CB09A: call    loc_1401CB08D
 * 00000001401CB09F: add     rsp, 8
 * 00000001401CB0A3: call    loc_1401CB096
 * 00000001401CB0A8: add     rsp, 8
 * 00000001401CB0AC: call    loc_1401CB09F
 * 00000001401CB0B1: add     rsp, 8
 * 00000001401CB0B5: call    loc_1401CB0A8
 * 00000001401CB0BA: add     rsp, 8
 * 00000001401CB0BE: mov     eax, 0DADAh
 * 00000001401CB0C3: test    edx, 200h
 * 00000001401CB0C9: jz      short loc_1401CB0D0
 * 00000001401CB0CB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CB0D0: lfence
 * 00000001401CB0D3: mov     byte ptr gs:856h, 0
 * 00000001401CB0DC: test    byte ptr [r10+3], 80h
 * 00000001401CB0E1: jz      short loc_1401CB125
 * 00000001401CB0E3: mov     ecx, 0C0000102h
 * 00000001401CB0E8: rdmsr
 * 00000001401CB0EA: shl     rdx, 20h
 * 00000001401CB0EE: or      rax, rdx
 * 00000001401CB0F1: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CB0F8: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CB100: cmp     [r10+0F0h], rax
 * 00000001401CB107: jz      short loc_1401CB125
 * 00000001401CB109: mov     rdx, [r10+1F0h]
 * 00000001401CB110: bts     dword ptr [r10+74h], 8
 * 00000001401CB116: dec     word ptr [r10+1E6h]
 * 00000001401CB11E: mov     [rdx+80h], rax
 * 00000001401CB125: test    byte ptr [r10+3], 3
 * 00000001401CB12A: mov     [rbp+0D8h+var_58], 0
 * 00000001401CB133: jz      short loc_1401CB13A
 * 00000001401CB135: call    KiSaveDebugRegisterState
 * 00000001401CB13A: cld
 * 00000001401CB13B: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401CB13F: ldmxcsr dword ptr gs:180h
 * 00000001401CB148: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401CB14C: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401CB150: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401CB154: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401CB158: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401CB15C: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401CB160: mov     eax, [rbp+0E0h]
 * 00000001401CB166: test    [rbp+0D8h+arg_10], 200h
 * 00000001401CB170: jz      short loc_1401CB173
 * 00000001401CB172: sti
 * 00000001401CB173: mov     ecx, 0C0000005h
 * 00000001401CB178: mov     edx, 2
 * 00000001401CB17D: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401CB184: mov     r9d, [rbp+0E0h]
 * 00000001401CB18B: or      r9d, 3
 * 00000001401CB18F: and     r9d, 0FFFFh
 * 00000001401CB196: test    [rbp+0D8h+arg_8], 1
 * 00000001401CB19D: jnz     short loc_1401CB1A3
 * 00000001401CB19F: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001401CB1A3: xor     r10, r10
 * 00000001401CB1A6: call    KiExceptionDispatch
 * 00000001401CB1AB: nop
 * 00000001401CB1AC: retn
 */
