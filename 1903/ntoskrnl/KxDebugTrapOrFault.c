/*
 * XREFs of KxDebugTrapOrFault @ 0x1401CE800
 * Callers:
 *     KiDebugTrapOrFault @ 0x1401CE740 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1401CE800 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1401CE800
 * Reason: Hex-Rays returned no pseudocode for 0x1401CE800
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CE800: sub     rsp, 8
 * 00000001401CE804: push    rbp
 * 00000001401CE805: sub     rsp, 158h
 * 00000001401CE80C: lea     rbp, [rsp+80h]
 * 00000001401CE814: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CE818: mov     [rbp+0E8h+var_138], rax
 * 00000001401CE81C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CE820: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CE824: mov     [rbp+0E8h+var_120], r8
 * 00000001401CE828: mov     [rbp+0E8h+var_118], r9
 * 00000001401CE82C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CE830: mov     [rbp+0E8h+var_108], r11
 * 00000001401CE834: test    [rbp+0E8h+arg_0], 1
 * 00000001401CE83B: jnz     short loc_1401CE86A
 * 00000001401CE83D: lfence
 * 00000001401CE840: test    byte ptr gs:278h, 1
 * 00000001401CE849: jnz     short loc_1401CE853
 * 00000001401CE84B: lfence
 * 00000001401CE84E: jmp     loc_1401CEAAF
 * 00000001401CE853: movzx   eax, byte ptr gs:27Ah
 * 00000001401CE85C: mov     ecx, 48h ; 'H'
 * 00000001401CE861: xor     edx, edx
 * 00000001401CE863: wrmsr
 * 00000001401CE865: jmp     loc_1401CEAAF
 * 00000001401CE86A: test    cs:KiKvaShadow, 1
 * 00000001401CE871: jnz     short loc_1401CE876
 * 00000001401CE873: swapgs
 * 00000001401CE876: lfence
 * 00000001401CE879: mov     r10, gs:188h
 * 00000001401CE882: mov     rcx, gs:188h
 * 00000001401CE88B: mov     rcx, [rcx+220h]
 * 00000001401CE892: mov     rcx, [rcx+860h]
 * 00000001401CE899: mov     gs:270h, rcx
 * 00000001401CE8A2: mov     cl, gs:850h
 * 00000001401CE8AA: mov     gs:851h, cl
 * 00000001401CE8B2: mov     cl, gs:278h
 * 00000001401CE8BA: mov     gs:852h, cl
 * 00000001401CE8C2: movzx   eax, byte ptr gs:27Bh
 * 00000001401CE8CB: cmp     gs:27Ah, al
 * 00000001401CE8D3: jz      short loc_1401CE8E6
 * 00000001401CE8D5: mov     gs:27Ah, al
 * 00000001401CE8DD: mov     ecx, 48h ; 'H'
 * 00000001401CE8E2: xor     edx, edx
 * 00000001401CE8E4: wrmsr
 * 00000001401CE8E6: movzx   edx, byte ptr gs:278h
 * 00000001401CE8EF: test    edx, 8
 * 00000001401CE8F5: jz      short loc_1401CE90A
 * 00000001401CE8F7: mov     eax, 1
 * 00000001401CE8FC: xor     edx, edx
 * 00000001401CE8FE: mov     ecx, 49h ; 'I'
 * 00000001401CE903: wrmsr
 * 00000001401CE905: jmp     loc_1401CEA48
 * 00000001401CE90A: test    edx, 2
 * 00000001401CE910: jz      loc_1401CEA45
 * 00000001401CE916: test    byte ptr gs:279h, 4
 * 00000001401CE91F: jnz     loc_1401CEA45
 * 00000001401CE925: call    loc_1401CEA38
 * 00000001401CE92A: add     rsp, 8
 * 00000001401CE92E: call    loc_1401CEA41
 * 00000001401CE933: add     rsp, 8
 * 00000001401CE937: call    loc_1401CE92A
 * 00000001401CE93C: add     rsp, 8
 * 00000001401CE940: call    loc_1401CE933
 * 00000001401CE945: add     rsp, 8
 * 00000001401CE949: call    loc_1401CE93C
 * 00000001401CE94E: add     rsp, 8
 * 00000001401CE952: call    loc_1401CE945
 * 00000001401CE957: add     rsp, 8
 * 00000001401CE95B: call    loc_1401CE94E
 * 00000001401CE960: add     rsp, 8
 * 00000001401CE964: call    loc_1401CE957
 * 00000001401CE969: add     rsp, 8
 * 00000001401CE96D: call    loc_1401CE960
 * 00000001401CE972: add     rsp, 8
 * 00000001401CE976: call    loc_1401CE969
 * 00000001401CE97B: add     rsp, 8
 * 00000001401CE97F: call    loc_1401CE972
 * 00000001401CE984: add     rsp, 8
 * 00000001401CE988: call    loc_1401CE97B
 * 00000001401CE98D: add     rsp, 8
 * 00000001401CE991: call    loc_1401CE984
 * 00000001401CE996: add     rsp, 8
 * 00000001401CE99A: call    loc_1401CE98D
 * 00000001401CE99F: add     rsp, 8
 * 00000001401CE9A3: call    loc_1401CE996
 * 00000001401CE9A8: add     rsp, 8
 * 00000001401CE9AC: call    loc_1401CE99F
 * 00000001401CE9B1: add     rsp, 8
 * 00000001401CE9B5: call    loc_1401CE9A8
 * 00000001401CE9BA: add     rsp, 8
 * 00000001401CE9BE: call    loc_1401CE9B1
 * 00000001401CE9C3: add     rsp, 8
 * 00000001401CE9C7: call    loc_1401CE9BA
 * 00000001401CE9CC: add     rsp, 8
 * 00000001401CE9D0: call    loc_1401CE9C3
 * 00000001401CE9D5: add     rsp, 8
 * 00000001401CE9D9: call    loc_1401CE9CC
 * 00000001401CE9DE: add     rsp, 8
 * 00000001401CE9E2: call    loc_1401CE9D5
 * 00000001401CE9E7: add     rsp, 8
 * 00000001401CE9EB: call    loc_1401CE9DE
 * 00000001401CE9F0: add     rsp, 8
 * 00000001401CE9F4: call    loc_1401CE9E7
 * 00000001401CE9F9: add     rsp, 8
 * 00000001401CE9FD: call    loc_1401CE9F0
 * 00000001401CEA02: add     rsp, 8
 * 00000001401CEA06: call    loc_1401CE9F9
 * 00000001401CEA0B: add     rsp, 8
 * 00000001401CEA0F: call    loc_1401CEA02
 * 00000001401CEA14: add     rsp, 8
 * 00000001401CEA18: call    loc_1401CEA0B
 * 00000001401CEA1D: add     rsp, 8
 * 00000001401CEA21: call    loc_1401CEA14
 * 00000001401CEA26: add     rsp, 8
 * 00000001401CEA2A: call    loc_1401CEA1D
 * 00000001401CEA2F: add     rsp, 8
 * 00000001401CEA33: call    loc_1401CEA26
 * 00000001401CEA38: add     rsp, 8
 * 00000001401CEA3C: call    loc_1401CEA2F
 * 00000001401CEA41: add     rsp, 8
 * 00000001401CEA45: lfence
 * 00000001401CEA48: mov     byte ptr gs:853h, 0
 * 00000001401CEA51: test    byte ptr [r10+3], 80h
 * 00000001401CEA56: jz      short loc_1401CEA9A
 * 00000001401CEA58: mov     ecx, 0C0000102h
 * 00000001401CEA5D: rdmsr
 * 00000001401CEA5F: shl     rdx, 20h
 * 00000001401CEA63: or      rax, rdx
 * 00000001401CEA66: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CEA6D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CEA75: cmp     [r10+0F0h], rax
 * 00000001401CEA7C: jz      short loc_1401CEA9A
 * 00000001401CEA7E: mov     rdx, [r10+1F0h]
 * 00000001401CEA85: bts     dword ptr [r10+74h], 8
 * 00000001401CEA8B: dec     word ptr [r10+1E6h]
 * 00000001401CEA93: mov     [rdx+80h], rax
 * 00000001401CEA9A: test    byte ptr [r10+3], 3
 * 00000001401CEA9F: mov     [rbp+0E8h+var_68], 0
 * 00000001401CEAA8: jz      short loc_1401CEAAF
 * 00000001401CEAAA: call    KiSaveDebugRegisterState
 * 00000001401CEAAF: cld
 * 00000001401CEAB0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CEAB4: ldmxcsr dword ptr gs:180h
 * 00000001401CEABD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CEAC1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CEAC5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CEAC9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CEACD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CEAD1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CEAD5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CEADC: jz      short loc_1401CEAEA
 * 00000001401CEADE: test    [rbp+0E8h+arg_0], 1
 * 00000001401CEAE5: jz      short loc_1401CEAEA
 * 00000001401CEAE7: stac
 * 00000001401CEAEA: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CEAF4: jz      short loc_1401CEAF7
 * 00000001401CEAF6: sti
 * 00000001401CEAF7: test    cs:KiCpuTracingFlags, 2
 * 00000001401CEB01: jz      short loc_1401CEB16
 * 00000001401CEB03: mov     ecx, 1D9h
 * 00000001401CEB08: rdmsr
 * 00000001401CEB0A: or      eax, 1
 * 00000001401CEB0D: wrmsr
 * 00000001401CEB0F: xor     edx, edx
 * 00000001401CEB11: jmp     loc_1401CEBE5
 * 00000001401CEB16: xor     edx, edx
 * 00000001401CEB18: test    [rbp+0E8h+arg_8], 100h
 * 00000001401CEB22: jz      loc_1401CEBE5
 * 00000001401CEB28: test    byte ptr gs:6422h, 2
 * 00000001401CEB31: jz      loc_1401CEBE5
 * 00000001401CEB37: test    [rbp+0E8h+arg_0], 1
 * 00000001401CEB3E: jnz     short loc_1401CEB97
 * 00000001401CEB40: mov     rax, dr7
 * 00000001401CEB43: test    ax, 200h
 * 00000001401CEB47: jz      loc_1401CEBE5
 * 00000001401CEB4D: test    ax, 100h
 * 00000001401CEB51: jz      loc_1401CEBE5
 * 00000001401CEB57: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001401CEB5E: or      r8d, r8d
 * 00000001401CEB61: jz      short loc_1401CEB6B
 * 00000001401CEB63: mov     ecx, r8d
 * 00000001401CEB66: rdmsr
 * 00000001401CEB68: mov     r8d, eax
 * 00000001401CEB6B: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001401CEB71: add     ecx, r8d
 * 00000001401CEB74: rdmsr
 * 00000001401CEB76: mov     r9d, eax
 * 00000001401CEB79: shl     rdx, 20h
 * 00000001401CEB7D: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001401CEB83: or      r9, rdx
 * 00000001401CEB86: add     ecx, r8d
 * 00000001401CEB89: rdmsr
 * 00000001401CEB8B: mov     r10d, eax
 * 00000001401CEB8E: shl     rdx, 20h
 * 00000001401CEB92: or      r10, rdx
 * 00000001401CEB95: jmp     short loc_1401CEBE0
 * 00000001401CEB97: test    [rbp+0E8h+var_68], 200h
 * 00000001401CEBA0: jz      short loc_1401CEBE5
 * 00000001401CEBA2: test    [rbp+0E8h+var_68], 100h
 * 00000001401CEBAB: jz      short loc_1401CEBE5
 * 00000001401CEBAD: and     [rbp+0E8h+var_40], 0
 * 00000001401CEBB5: and     [rbp+0E8h+var_48], 0
 * 00000001401CEBBD: mov     rcx, cs:MmUserProbeAddress
 * 00000001401CEBC4: mov     r9, [rbp+0E8h+var_50]
 * 00000001401CEBCB: cmp     r9, rcx
 * 00000001401CEBCE: cmovnb  r9, rcx
 * 00000001401CEBD2: mov     r10, [rbp+0E8h+var_58]
 * 00000001401CEBD9: cmp     r10, rcx
 * 00000001401CEBDC: cmovnb  r10, rcx
 * 00000001401CEBE0: mov     edx, 2
 * 00000001401CEBE5: mov     ecx, 80000004h
 * 00000001401CEBEA: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001401CEBF4: mov     r8, [rbp+0E8h]
 * 00000001401CEBFB: call    KiExceptionDispatch
 * 00000001401CEC00: nop
 * 00000001401CEC01: retn
 */
