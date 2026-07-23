/*
 * XREFs of KiSystemCall32Shadow @ 0x140330E00
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140330E00 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140330E00
 * Reason: Hex-Rays returned no pseudocode for 0x140330E00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140330E00: swapgs
 * 0000000140330E03: mov     gs:7010h, rsp
 * 0000000140330E0C: mov     rsp, gs:7000h
 * 0000000140330E15: mov     cr3, rsp
 * 0000000140330E18: mov     rsp, gs:7008h
 * 0000000140330E21: push    2Bh ; '+'
 * 0000000140330E23: push    qword ptr gs:7010h
 * 0000000140330E2B: push    r11
 * 0000000140330E2D: push    23h ; '#'
 * 0000000140330E2F: push    rcx
 * 0000000140330E30: sub     rsp, 8
 * 0000000140330E34: push    rbp
 * 0000000140330E35: sub     rsp, 158h
 * 0000000140330E3C: lea     rbp, [rsp+190h+var_110]
 * 0000000140330E44: mov     byte ptr [rbp-55h], 1
 * 0000000140330E48: mov     [rbp-50h], rax
 * 0000000140330E4C: mov     [rbp-48h], rcx
 * 0000000140330E50: mov     [rbp-40h], rdx
 * 0000000140330E54: mov     [rbp-38h], r8
 * 0000000140330E58: mov     [rbp-30h], r9
 * 0000000140330E5C: mov     [rbp-28h], r10
 * 0000000140330E60: mov     [rbp-20h], r11
 * 0000000140330E64: test    byte ptr [rbp+0F0h], 1
 * 0000000140330E6B: jnz     short loc_140330E9C
 * 0000000140330E6D: lfence
 * 0000000140330E70: test    word ptr gs:860h, 1
 * 0000000140330E7B: jnz     short loc_140330E85
 * 0000000140330E7D: lfence
 * 0000000140330E80: jmp     loc_1403310EE
 * 0000000140330E85: movzx   eax, word ptr gs:864h
 * 0000000140330E8E: mov     ecx, 48h ; 'H'
 * 0000000140330E93: xor     edx, edx
 * 0000000140330E95: wrmsr
 * 0000000140330E97: jmp     loc_1403310EE
 * 0000000140330E9C: test    cs:KiKvaShadow, 1
 * 0000000140330EA3: jnz     short loc_140330EA8
 * 0000000140330EA5: swapgs
 * 0000000140330EA8: lfence
 * 0000000140330EAB: mov     r10, gs:188h
 * 0000000140330EB4: mov     rcx, gs:188h
 * 0000000140330EBD: mov     rcx, [rcx+220h]
 * 0000000140330EC4: mov     rcx, [rcx+830h]
 * 0000000140330ECB: mov     gs:858h, rcx
 * 0000000140330ED4: mov     cx, gs:850h
 * 0000000140330EDD: mov     gs:852h, cx
 * 0000000140330EE6: mov     cx, gs:860h
 * 0000000140330EEF: mov     gs:854h, cx
 * 0000000140330EF8: movzx   eax, word ptr gs:866h
 * 0000000140330F01: cmp     gs:864h, ax
 * 0000000140330F0A: jz      short loc_140330F1E
 * 0000000140330F0C: mov     gs:864h, ax
 * 0000000140330F15: mov     ecx, 48h ; 'H'
 * 0000000140330F1A: xor     edx, edx
 * 0000000140330F1C: wrmsr
 * 0000000140330F1E: movzx   edx, word ptr gs:860h
 * 0000000140330F27: test    edx, 8
 * 0000000140330F2D: jz      short loc_140330F46
 * 0000000140330F2F: mov     eax, 1
 * 0000000140330F34: xor     edx, edx
 * 0000000140330F36: mov     ecx, 49h ; 'I'
 * 0000000140330F3B: wrmsr
 * 0000000140330F3D: movzx   edx, word ptr gs:860h
 * 0000000140330F46: test    edx, 2
 * 0000000140330F4C: jz      loc_140331077
 * 0000000140330F52: call    loc_140331065
 * 0000000140330F57: add     rsp, 8
 * 0000000140330F5B: call    loc_14033106E
 * 0000000140330F60: add     rsp, 8
 * 0000000140330F64: call    loc_140330F57
 * 0000000140330F69: add     rsp, 8
 * 0000000140330F6D: call    loc_140330F60
 * 0000000140330F72: add     rsp, 8
 * 0000000140330F76: call    loc_140330F69
 * 0000000140330F7B: add     rsp, 8
 * 0000000140330F7F: call    loc_140330F72
 * 0000000140330F84: add     rsp, 8
 * 0000000140330F88: call    loc_140330F7B
 * 0000000140330F8D: add     rsp, 8
 * 0000000140330F91: call    loc_140330F84
 * 0000000140330F96: add     rsp, 8
 * 0000000140330F9A: call    loc_140330F8D
 * 0000000140330F9F: add     rsp, 8
 * 0000000140330FA3: call    loc_140330F96
 * 0000000140330FA8: add     rsp, 8
 * 0000000140330FAC: call    loc_140330F9F
 * 0000000140330FB1: add     rsp, 8
 * 0000000140330FB5: call    loc_140330FA8
 * 0000000140330FBA: add     rsp, 8
 * 0000000140330FBE: call    loc_140330FB1
 * 0000000140330FC3: add     rsp, 8
 * 0000000140330FC7: call    loc_140330FBA
 * 0000000140330FCC: add     rsp, 8
 * 0000000140330FD0: call    loc_140330FC3
 * 0000000140330FD5: add     rsp, 8
 * 0000000140330FD9: call    loc_140330FCC
 * 0000000140330FDE: add     rsp, 8
 * 0000000140330FE2: call    loc_140330FD5
 * 0000000140330FE7: add     rsp, 8
 * 0000000140330FEB: call    loc_140330FDE
 * 0000000140330FF0: add     rsp, 8
 * 0000000140330FF4: call    loc_140330FE7
 * 0000000140330FF9: add     rsp, 8
 * 0000000140330FFD: call    loc_140330FF0
 * 0000000140331002: add     rsp, 8
 * 0000000140331006: call    loc_140330FF9
 * 000000014033100B: add     rsp, 8
 * 000000014033100F: call    loc_140331002
 * 0000000140331014: add     rsp, 8
 * 0000000140331018: call    loc_14033100B
 * 000000014033101D: add     rsp, 8
 * 0000000140331021: call    loc_140331014
 * 0000000140331026: add     rsp, 8
 * 000000014033102A: call    loc_14033101D
 * 000000014033102F: add     rsp, 8
 * 0000000140331033: call    loc_140331026
 * 0000000140331038: add     rsp, 8
 * 000000014033103C: call    loc_14033102F
 * 0000000140331041: add     rsp, 8
 * 0000000140331045: call    loc_140331038
 * 000000014033104A: add     rsp, 8
 * 000000014033104E: call    loc_140331041
 * 0000000140331053: add     rsp, 8
 * 0000000140331057: call    loc_14033104A
 * 000000014033105C: add     rsp, 8
 * 0000000140331060: call    loc_140331053
 * 0000000140331065: add     rsp, 8
 * 0000000140331069: call    loc_14033105C
 * 000000014033106E: add     rsp, 8
 * 0000000140331072: mov     eax, 0DADAh
 * 0000000140331077: test    edx, 200h
 * 000000014033107D: jz      short loc_140331084
 * 000000014033107F: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140331084: lfence
 * 0000000140331087: mov     byte ptr gs:856h, 0
 * 0000000140331090: test    byte ptr [r10+3], 80h
 * 0000000140331095: jz      short loc_1403310D9
 * 0000000140331097: mov     ecx, 0C0000102h
 * 000000014033109C: rdmsr
 * 000000014033109E: shl     rdx, 20h
 * 00000001403310A2: or      rax, rdx
 * 00000001403310A5: cmp     rax, cs:MmUserProbeAddress
 * 00000001403310AC: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001403310B4: cmp     [r10+0F0h], rax
 * 00000001403310BB: jz      short loc_1403310D9
 * 00000001403310BD: mov     rdx, [r10+1F0h]
 * 00000001403310C4: bts     dword ptr [r10+74h], 8
 * 00000001403310CA: dec     word ptr [r10+1E6h]
 * 00000001403310D2: mov     [rdx+80h], rax
 * 00000001403310D9: test    byte ptr [r10+3], 3
 * 00000001403310DE: mov     word ptr [rbp+80h], 0
 * 00000001403310E7: jz      short loc_1403310EE
 * 00000001403310E9: call    KiSaveDebugRegisterState
 * 00000001403310EE: cld
 * 00000001403310EF: stmxcsr dword ptr [rbp-54h]
 * 00000001403310F3: ldmxcsr dword ptr gs:180h
 * 00000001403310FC: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140331100: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140331104: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140331108: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014033110C: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140331110: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140331114: sub     qword ptr [rbp+0E8h], 2
 * 000000014033111C: and     dword ptr [rbp+0ECh], 0
 * 0000000140331123: sti
 * 0000000140331124: mov     ecx, 0C000001Dh
 * 0000000140331129: xor     edx, edx
 * 000000014033112B: mov     r8, [rbp+0E8h]
 * 0000000140331132: call    KiExceptionDispatch
 * 0000000140331137: nop
 * 0000000140331138: retn
 */
