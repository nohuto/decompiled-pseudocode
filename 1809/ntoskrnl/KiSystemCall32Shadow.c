/*
 * XREFs of KiSystemCall32Shadow @ 0x14032FE00
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x14032FE00 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x14032FE00
 * Reason: Hex-Rays returned no pseudocode for 0x14032FE00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014032FE00: swapgs
 * 000000014032FE03: mov     gs:7010h, rsp
 * 000000014032FE0C: mov     rsp, gs:7000h
 * 000000014032FE15: mov     cr3, rsp
 * 000000014032FE18: mov     rsp, gs:7008h
 * 000000014032FE21: push    2Bh ; '+'
 * 000000014032FE23: push    qword ptr gs:7010h
 * 000000014032FE2B: push    r11
 * 000000014032FE2D: push    23h ; '#'
 * 000000014032FE2F: push    rcx
 * 000000014032FE30: sub     rsp, 8
 * 000000014032FE34: push    rbp
 * 000000014032FE35: sub     rsp, 158h
 * 000000014032FE3C: lea     rbp, [rsp+190h+var_110]
 * 000000014032FE44: mov     byte ptr [rbp-55h], 1
 * 000000014032FE48: mov     [rbp-50h], rax
 * 000000014032FE4C: mov     [rbp-48h], rcx
 * 000000014032FE50: mov     [rbp-40h], rdx
 * 000000014032FE54: mov     [rbp-38h], r8
 * 000000014032FE58: mov     [rbp-30h], r9
 * 000000014032FE5C: mov     [rbp-28h], r10
 * 000000014032FE60: mov     [rbp-20h], r11
 * 000000014032FE64: test    byte ptr [rbp+0F0h], 1
 * 000000014032FE6B: jnz     short loc_14032FE9C
 * 000000014032FE6D: lfence
 * 000000014032FE70: test    word ptr gs:860h, 1
 * 000000014032FE7B: jnz     short loc_14032FE85
 * 000000014032FE7D: lfence
 * 000000014032FE80: jmp     loc_1403300EE
 * 000000014032FE85: movzx   eax, word ptr gs:864h
 * 000000014032FE8E: mov     ecx, 48h ; 'H'
 * 000000014032FE93: xor     edx, edx
 * 000000014032FE95: wrmsr
 * 000000014032FE97: jmp     loc_1403300EE
 * 000000014032FE9C: test    cs:KiKvaShadow, 1
 * 000000014032FEA3: jnz     short loc_14032FEA8
 * 000000014032FEA5: swapgs
 * 000000014032FEA8: lfence
 * 000000014032FEAB: mov     r10, gs:188h
 * 000000014032FEB4: mov     rcx, gs:188h
 * 000000014032FEBD: mov     rcx, [rcx+220h]
 * 000000014032FEC4: mov     rcx, [rcx+830h]
 * 000000014032FECB: mov     gs:858h, rcx
 * 000000014032FED4: mov     cx, gs:850h
 * 000000014032FEDD: mov     gs:852h, cx
 * 000000014032FEE6: mov     cx, gs:860h
 * 000000014032FEEF: mov     gs:854h, cx
 * 000000014032FEF8: movzx   eax, word ptr gs:866h
 * 000000014032FF01: cmp     gs:864h, ax
 * 000000014032FF0A: jz      short loc_14032FF1E
 * 000000014032FF0C: mov     gs:864h, ax
 * 000000014032FF15: mov     ecx, 48h ; 'H'
 * 000000014032FF1A: xor     edx, edx
 * 000000014032FF1C: wrmsr
 * 000000014032FF1E: movzx   edx, word ptr gs:860h
 * 000000014032FF27: test    edx, 8
 * 000000014032FF2D: jz      short loc_14032FF46
 * 000000014032FF2F: mov     eax, 1
 * 000000014032FF34: xor     edx, edx
 * 000000014032FF36: mov     ecx, 49h ; 'I'
 * 000000014032FF3B: wrmsr
 * 000000014032FF3D: movzx   edx, word ptr gs:860h
 * 000000014032FF46: test    edx, 2
 * 000000014032FF4C: jz      loc_140330077
 * 000000014032FF52: call    loc_140330065
 * 000000014032FF57: add     rsp, 8
 * 000000014032FF5B: call    loc_14033006E
 * 000000014032FF60: add     rsp, 8
 * 000000014032FF64: call    loc_14032FF57
 * 000000014032FF69: add     rsp, 8
 * 000000014032FF6D: call    loc_14032FF60
 * 000000014032FF72: add     rsp, 8
 * 000000014032FF76: call    loc_14032FF69
 * 000000014032FF7B: add     rsp, 8
 * 000000014032FF7F: call    loc_14032FF72
 * 000000014032FF84: add     rsp, 8
 * 000000014032FF88: call    loc_14032FF7B
 * 000000014032FF8D: add     rsp, 8
 * 000000014032FF91: call    loc_14032FF84
 * 000000014032FF96: add     rsp, 8
 * 000000014032FF9A: call    loc_14032FF8D
 * 000000014032FF9F: add     rsp, 8
 * 000000014032FFA3: call    loc_14032FF96
 * 000000014032FFA8: add     rsp, 8
 * 000000014032FFAC: call    loc_14032FF9F
 * 000000014032FFB1: add     rsp, 8
 * 000000014032FFB5: call    loc_14032FFA8
 * 000000014032FFBA: add     rsp, 8
 * 000000014032FFBE: call    loc_14032FFB1
 * 000000014032FFC3: add     rsp, 8
 * 000000014032FFC7: call    loc_14032FFBA
 * 000000014032FFCC: add     rsp, 8
 * 000000014032FFD0: call    loc_14032FFC3
 * 000000014032FFD5: add     rsp, 8
 * 000000014032FFD9: call    loc_14032FFCC
 * 000000014032FFDE: add     rsp, 8
 * 000000014032FFE2: call    loc_14032FFD5
 * 000000014032FFE7: add     rsp, 8
 * 000000014032FFEB: call    loc_14032FFDE
 * 000000014032FFF0: add     rsp, 8
 * 000000014032FFF4: call    loc_14032FFE7
 * 000000014032FFF9: add     rsp, 8
 * 000000014032FFFD: call    loc_14032FFF0
 * 0000000140330002: add     rsp, 8
 * 0000000140330006: call    loc_14032FFF9
 * 000000014033000B: add     rsp, 8
 * 000000014033000F: call    loc_140330002
 * 0000000140330014: add     rsp, 8
 * 0000000140330018: call    loc_14033000B
 * 000000014033001D: add     rsp, 8
 * 0000000140330021: call    loc_140330014
 * 0000000140330026: add     rsp, 8
 * 000000014033002A: call    loc_14033001D
 * 000000014033002F: add     rsp, 8
 * 0000000140330033: call    loc_140330026
 * 0000000140330038: add     rsp, 8
 * 000000014033003C: call    loc_14033002F
 * 0000000140330041: add     rsp, 8
 * 0000000140330045: call    loc_140330038
 * 000000014033004A: add     rsp, 8
 * 000000014033004E: call    loc_140330041
 * 0000000140330053: add     rsp, 8
 * 0000000140330057: call    loc_14033004A
 * 000000014033005C: add     rsp, 8
 * 0000000140330060: call    loc_140330053
 * 0000000140330065: add     rsp, 8
 * 0000000140330069: call    loc_14033005C
 * 000000014033006E: add     rsp, 8
 * 0000000140330072: mov     eax, 0DADAh
 * 0000000140330077: test    edx, 200h
 * 000000014033007D: jz      short loc_140330084
 * 000000014033007F: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140330084: lfence
 * 0000000140330087: mov     byte ptr gs:856h, 0
 * 0000000140330090: test    byte ptr [r10+3], 80h
 * 0000000140330095: jz      short loc_1403300D9
 * 0000000140330097: mov     ecx, 0C0000102h
 * 000000014033009C: rdmsr
 * 000000014033009E: shl     rdx, 20h
 * 00000001403300A2: or      rax, rdx
 * 00000001403300A5: cmp     rax, cs:MmUserProbeAddress
 * 00000001403300AC: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001403300B4: cmp     [r10+0F0h], rax
 * 00000001403300BB: jz      short loc_1403300D9
 * 00000001403300BD: mov     rdx, [r10+1F0h]
 * 00000001403300C4: bts     dword ptr [r10+74h], 8
 * 00000001403300CA: dec     word ptr [r10+1E6h]
 * 00000001403300D2: mov     [rdx+80h], rax
 * 00000001403300D9: test    byte ptr [r10+3], 3
 * 00000001403300DE: mov     word ptr [rbp+80h], 0
 * 00000001403300E7: jz      short loc_1403300EE
 * 00000001403300E9: call    KiSaveDebugRegisterState
 * 00000001403300EE: cld
 * 00000001403300EF: stmxcsr dword ptr [rbp-54h]
 * 00000001403300F3: ldmxcsr dword ptr gs:180h
 * 00000001403300FC: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140330100: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140330104: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140330108: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014033010C: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140330110: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140330114: sub     qword ptr [rbp+0E8h], 2
 * 000000014033011C: and     dword ptr [rbp+0ECh], 0
 * 0000000140330123: sti
 * 0000000140330124: mov     ecx, 0C000001Dh
 * 0000000140330129: xor     edx, edx
 * 000000014033012B: mov     r8, [rbp+0E8h]
 * 0000000140330132: call    KiExceptionDispatch
 * 0000000140330137: nop
 * 0000000140330138: retn
 */
