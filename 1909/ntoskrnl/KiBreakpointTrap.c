/*
 * XREFs of KiBreakpointTrap @ 0x1401CFD00
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140350280 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x1401CFD00 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x1401CFD00
 * Reason: Hex-Rays returned no pseudocode for 0x1401CFD00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CFD00: sub     rsp, 8
 * 00000001401CFD04: push    rbp
 * 00000001401CFD05: sub     rsp, 158h
 * 00000001401CFD0C: lea     rbp, [rsp+80h]
 * 00000001401CFD14: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CFD18: mov     [rbp+0E8h+var_138], rax
 * 00000001401CFD1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CFD20: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CFD24: mov     [rbp+0E8h+var_120], r8
 * 00000001401CFD28: mov     [rbp+0E8h+var_118], r9
 * 00000001401CFD2C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CFD30: mov     [rbp+0E8h+var_108], r11
 * 00000001401CFD34: test    [rbp+0E8h+arg_0], 1
 * 00000001401CFD3B: jnz     short loc_1401CFD6A
 * 00000001401CFD3D: lfence
 * 00000001401CFD40: test    byte ptr gs:278h, 1
 * 00000001401CFD49: jnz     short loc_1401CFD53
 * 00000001401CFD4B: lfence
 * 00000001401CFD4E: jmp     loc_1401CFFAF
 * 00000001401CFD53: movzx   eax, byte ptr gs:27Ah
 * 00000001401CFD5C: mov     ecx, 48h ; 'H'
 * 00000001401CFD61: xor     edx, edx
 * 00000001401CFD63: wrmsr
 * 00000001401CFD65: jmp     loc_1401CFFAF
 * 00000001401CFD6A: test    cs:KiKvaShadow, 1
 * 00000001401CFD71: jnz     short loc_1401CFD76
 * 00000001401CFD73: swapgs
 * 00000001401CFD76: lfence
 * 00000001401CFD79: mov     r10, gs:188h
 * 00000001401CFD82: mov     rcx, gs:188h
 * 00000001401CFD8B: mov     rcx, [rcx+220h]
 * 00000001401CFD92: mov     rcx, [rcx+860h]
 * 00000001401CFD99: mov     gs:270h, rcx
 * 00000001401CFDA2: mov     cl, gs:850h
 * 00000001401CFDAA: mov     gs:851h, cl
 * 00000001401CFDB2: mov     cl, gs:278h
 * 00000001401CFDBA: mov     gs:852h, cl
 * 00000001401CFDC2: movzx   eax, byte ptr gs:27Bh
 * 00000001401CFDCB: cmp     gs:27Ah, al
 * 00000001401CFDD3: jz      short loc_1401CFDE6
 * 00000001401CFDD5: mov     gs:27Ah, al
 * 00000001401CFDDD: mov     ecx, 48h ; 'H'
 * 00000001401CFDE2: xor     edx, edx
 * 00000001401CFDE4: wrmsr
 * 00000001401CFDE6: movzx   edx, byte ptr gs:278h
 * 00000001401CFDEF: test    edx, 8
 * 00000001401CFDF5: jz      short loc_1401CFE0A
 * 00000001401CFDF7: mov     eax, 1
 * 00000001401CFDFC: xor     edx, edx
 * 00000001401CFDFE: mov     ecx, 49h ; 'I'
 * 00000001401CFE03: wrmsr
 * 00000001401CFE05: jmp     loc_1401CFF48
 * 00000001401CFE0A: test    edx, 2
 * 00000001401CFE10: jz      loc_1401CFF45
 * 00000001401CFE16: test    byte ptr gs:279h, 4
 * 00000001401CFE1F: jnz     loc_1401CFF45
 * 00000001401CFE25: call    loc_1401CFF38
 * 00000001401CFE2A: add     rsp, 8
 * 00000001401CFE2E: call    loc_1401CFF41
 * 00000001401CFE33: add     rsp, 8
 * 00000001401CFE37: call    loc_1401CFE2A
 * 00000001401CFE3C: add     rsp, 8
 * 00000001401CFE40: call    loc_1401CFE33
 * 00000001401CFE45: add     rsp, 8
 * 00000001401CFE49: call    loc_1401CFE3C
 * 00000001401CFE4E: add     rsp, 8
 * 00000001401CFE52: call    loc_1401CFE45
 * 00000001401CFE57: add     rsp, 8
 * 00000001401CFE5B: call    loc_1401CFE4E
 * 00000001401CFE60: add     rsp, 8
 * 00000001401CFE64: call    loc_1401CFE57
 * 00000001401CFE69: add     rsp, 8
 * 00000001401CFE6D: call    loc_1401CFE60
 * 00000001401CFE72: add     rsp, 8
 * 00000001401CFE76: call    loc_1401CFE69
 * 00000001401CFE7B: add     rsp, 8
 * 00000001401CFE7F: call    loc_1401CFE72
 * 00000001401CFE84: add     rsp, 8
 * 00000001401CFE88: call    loc_1401CFE7B
 * 00000001401CFE8D: add     rsp, 8
 * 00000001401CFE91: call    loc_1401CFE84
 * 00000001401CFE96: add     rsp, 8
 * 00000001401CFE9A: call    loc_1401CFE8D
 * 00000001401CFE9F: add     rsp, 8
 * 00000001401CFEA3: call    loc_1401CFE96
 * 00000001401CFEA8: add     rsp, 8
 * 00000001401CFEAC: call    loc_1401CFE9F
 * 00000001401CFEB1: add     rsp, 8
 * 00000001401CFEB5: call    loc_1401CFEA8
 * 00000001401CFEBA: add     rsp, 8
 * 00000001401CFEBE: call    loc_1401CFEB1
 * 00000001401CFEC3: add     rsp, 8
 * 00000001401CFEC7: call    loc_1401CFEBA
 * 00000001401CFECC: add     rsp, 8
 * 00000001401CFED0: call    loc_1401CFEC3
 * 00000001401CFED5: add     rsp, 8
 * 00000001401CFED9: call    loc_1401CFECC
 * 00000001401CFEDE: add     rsp, 8
 * 00000001401CFEE2: call    loc_1401CFED5
 * 00000001401CFEE7: add     rsp, 8
 * 00000001401CFEEB: call    loc_1401CFEDE
 * 00000001401CFEF0: add     rsp, 8
 * 00000001401CFEF4: call    loc_1401CFEE7
 * 00000001401CFEF9: add     rsp, 8
 * 00000001401CFEFD: call    loc_1401CFEF0
 * 00000001401CFF02: add     rsp, 8
 * 00000001401CFF06: call    loc_1401CFEF9
 * 00000001401CFF0B: add     rsp, 8
 * 00000001401CFF0F: call    loc_1401CFF02
 * 00000001401CFF14: add     rsp, 8
 * 00000001401CFF18: call    loc_1401CFF0B
 * 00000001401CFF1D: add     rsp, 8
 * 00000001401CFF21: call    loc_1401CFF14
 * 00000001401CFF26: add     rsp, 8
 * 00000001401CFF2A: call    loc_1401CFF1D
 * 00000001401CFF2F: add     rsp, 8
 * 00000001401CFF33: call    loc_1401CFF26
 * 00000001401CFF38: add     rsp, 8
 * 00000001401CFF3C: call    loc_1401CFF2F
 * 00000001401CFF41: add     rsp, 8
 * 00000001401CFF45: lfence
 * 00000001401CFF48: mov     byte ptr gs:853h, 0
 * 00000001401CFF51: test    byte ptr [r10+3], 80h
 * 00000001401CFF56: jz      short loc_1401CFF9A
 * 00000001401CFF58: mov     ecx, 0C0000102h
 * 00000001401CFF5D: rdmsr
 * 00000001401CFF5F: shl     rdx, 20h
 * 00000001401CFF63: or      rax, rdx
 * 00000001401CFF66: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CFF6D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CFF75: cmp     [r10+0F0h], rax
 * 00000001401CFF7C: jz      short loc_1401CFF9A
 * 00000001401CFF7E: mov     rdx, [r10+1F0h]
 * 00000001401CFF85: bts     dword ptr [r10+74h], 8
 * 00000001401CFF8B: dec     word ptr [r10+1E6h]
 * 00000001401CFF93: mov     [rdx+80h], rax
 * 00000001401CFF9A: test    byte ptr [r10+3], 3
 * 00000001401CFF9F: mov     [rbp+0E8h+var_68], 0
 * 00000001401CFFA8: jz      short loc_1401CFFAF
 * 00000001401CFFAA: call    KiSaveDebugRegisterState
 * 00000001401CFFAF: cld
 * 00000001401CFFB0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CFFB4: ldmxcsr dword ptr gs:180h
 * 00000001401CFFBD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CFFC1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CFFC5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CFFC9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CFFCD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CFFD1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CFFD5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CFFDC: jz      short loc_1401CFFEA
 * 00000001401CFFDE: test    [rbp+0E8h+arg_0], 1
 * 00000001401CFFE5: jz      short loc_1401CFFEA
 * 00000001401CFFE7: stac
 * 00000001401CFFEA: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CFFF4: jz      short loc_1401CFFF7
 * 00000001401CFFF6: sti
 * 00000001401CFFF7: mov     ecx, 80000003h
 * 00000001401CFFFC: mov     edx, 1
 * 00000001401D0001: mov     r8, [rbp+0E8h]
 * 00000001401D0008: dec     r8
 * 00000001401D000B: mov     r9d, 0
 * 00000001401D0011: call    KiExceptionDispatch
 * 00000001401D0016: nop
 * 00000001401D0017: retn
 */
