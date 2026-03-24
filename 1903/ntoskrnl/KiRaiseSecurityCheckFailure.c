/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1401D3DC0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140350D00 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401D3DC0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1401D5C80 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1401D3DC0
 * Reason: Hex-Rays returned no pseudocode for 0x1401D3DC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D3DC0: sub     qword ptr [rsp+0], 2
 * 00000001401D3DC5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401D3DCB: jnz     short loc_1401D3DD2
 * 00000001401D3DCD: and     dword ptr [rsp+4], 0
 * 00000001401D3DD2: sub     rsp, 8
 * 00000001401D3DD6: push    rbp
 * 00000001401D3DD7: sub     rsp, 158h
 * 00000001401D3DDE: lea     rbp, [rsp+168h+var_E8]
 * 00000001401D3DE6: mov     byte ptr [rbp-55h], 1
 * 00000001401D3DEA: mov     [rbp-50h], rax
 * 00000001401D3DEE: mov     [rbp-48h], rcx
 * 00000001401D3DF2: mov     [rbp-40h], rdx
 * 00000001401D3DF6: mov     [rbp-38h], r8
 * 00000001401D3DFA: mov     [rbp-30h], r9
 * 00000001401D3DFE: mov     [rbp-28h], r10
 * 00000001401D3E02: mov     [rbp-20h], r11
 * 00000001401D3E06: test    byte ptr [rbp+0F0h], 1
 * 00000001401D3E0D: jnz     short loc_1401D3E3C
 * 00000001401D3E0F: lfence
 * 00000001401D3E12: test    byte ptr gs:278h, 1
 * 00000001401D3E1B: jnz     short loc_1401D3E25
 * 00000001401D3E1D: lfence
 * 00000001401D3E20: jmp     loc_1401D4081
 * 00000001401D3E25: movzx   eax, byte ptr gs:27Ah
 * 00000001401D3E2E: mov     ecx, 48h ; 'H'
 * 00000001401D3E33: xor     edx, edx
 * 00000001401D3E35: wrmsr
 * 00000001401D3E37: jmp     loc_1401D4081
 * 00000001401D3E3C: test    cs:KiKvaShadow, 1
 * 00000001401D3E43: jnz     short loc_1401D3E48
 * 00000001401D3E45: swapgs
 * 00000001401D3E48: lfence
 * 00000001401D3E4B: mov     r10, gs:188h
 * 00000001401D3E54: mov     rcx, gs:188h
 * 00000001401D3E5D: mov     rcx, [rcx+220h]
 * 00000001401D3E64: mov     rcx, [rcx+860h]
 * 00000001401D3E6B: mov     gs:270h, rcx
 * 00000001401D3E74: mov     cl, gs:850h
 * 00000001401D3E7C: mov     gs:851h, cl
 * 00000001401D3E84: mov     cl, gs:278h
 * 00000001401D3E8C: mov     gs:852h, cl
 * 00000001401D3E94: movzx   eax, byte ptr gs:27Bh
 * 00000001401D3E9D: cmp     gs:27Ah, al
 * 00000001401D3EA5: jz      short loc_1401D3EB8
 * 00000001401D3EA7: mov     gs:27Ah, al
 * 00000001401D3EAF: mov     ecx, 48h ; 'H'
 * 00000001401D3EB4: xor     edx, edx
 * 00000001401D3EB6: wrmsr
 * 00000001401D3EB8: movzx   edx, byte ptr gs:278h
 * 00000001401D3EC1: test    edx, 8
 * 00000001401D3EC7: jz      short loc_1401D3EDC
 * 00000001401D3EC9: mov     eax, 1
 * 00000001401D3ECE: xor     edx, edx
 * 00000001401D3ED0: mov     ecx, 49h ; 'I'
 * 00000001401D3ED5: wrmsr
 * 00000001401D3ED7: jmp     loc_1401D401A
 * 00000001401D3EDC: test    edx, 2
 * 00000001401D3EE2: jz      loc_1401D4017
 * 00000001401D3EE8: test    byte ptr gs:279h, 4
 * 00000001401D3EF1: jnz     loc_1401D4017
 * 00000001401D3EF7: call    loc_1401D400A
 * 00000001401D3EFC: add     rsp, 8
 * 00000001401D3F00: call    loc_1401D4013
 * 00000001401D3F05: add     rsp, 8
 * 00000001401D3F09: call    loc_1401D3EFC
 * 00000001401D3F0E: add     rsp, 8
 * 00000001401D3F12: call    loc_1401D3F05
 * 00000001401D3F17: add     rsp, 8
 * 00000001401D3F1B: call    loc_1401D3F0E
 * 00000001401D3F20: add     rsp, 8
 * 00000001401D3F24: call    loc_1401D3F17
 * 00000001401D3F29: add     rsp, 8
 * 00000001401D3F2D: call    loc_1401D3F20
 * 00000001401D3F32: add     rsp, 8
 * 00000001401D3F36: call    loc_1401D3F29
 * 00000001401D3F3B: add     rsp, 8
 * 00000001401D3F3F: call    loc_1401D3F32
 * 00000001401D3F44: add     rsp, 8
 * 00000001401D3F48: call    loc_1401D3F3B
 * 00000001401D3F4D: add     rsp, 8
 * 00000001401D3F51: call    loc_1401D3F44
 * 00000001401D3F56: add     rsp, 8
 * 00000001401D3F5A: call    loc_1401D3F4D
 * 00000001401D3F5F: add     rsp, 8
 * 00000001401D3F63: call    loc_1401D3F56
 * 00000001401D3F68: add     rsp, 8
 * 00000001401D3F6C: call    loc_1401D3F5F
 * 00000001401D3F71: add     rsp, 8
 * 00000001401D3F75: call    loc_1401D3F68
 * 00000001401D3F7A: add     rsp, 8
 * 00000001401D3F7E: call    loc_1401D3F71
 * 00000001401D3F83: add     rsp, 8
 * 00000001401D3F87: call    loc_1401D3F7A
 * 00000001401D3F8C: add     rsp, 8
 * 00000001401D3F90: call    loc_1401D3F83
 * 00000001401D3F95: add     rsp, 8
 * 00000001401D3F99: call    loc_1401D3F8C
 * 00000001401D3F9E: add     rsp, 8
 * 00000001401D3FA2: call    loc_1401D3F95
 * 00000001401D3FA7: add     rsp, 8
 * 00000001401D3FAB: call    loc_1401D3F9E
 * 00000001401D3FB0: add     rsp, 8
 * 00000001401D3FB4: call    loc_1401D3FA7
 * 00000001401D3FB9: add     rsp, 8
 * 00000001401D3FBD: call    loc_1401D3FB0
 * 00000001401D3FC2: add     rsp, 8
 * 00000001401D3FC6: call    loc_1401D3FB9
 * 00000001401D3FCB: add     rsp, 8
 * 00000001401D3FCF: call    loc_1401D3FC2
 * 00000001401D3FD4: add     rsp, 8
 * 00000001401D3FD8: call    loc_1401D3FCB
 * 00000001401D3FDD: add     rsp, 8
 * 00000001401D3FE1: call    loc_1401D3FD4
 * 00000001401D3FE6: add     rsp, 8
 * 00000001401D3FEA: call    loc_1401D3FDD
 * 00000001401D3FEF: add     rsp, 8
 * 00000001401D3FF3: call    loc_1401D3FE6
 * 00000001401D3FF8: add     rsp, 8
 * 00000001401D3FFC: call    loc_1401D3FEF
 * 00000001401D4001: add     rsp, 8
 * 00000001401D4005: call    loc_1401D3FF8
 * 00000001401D400A: add     rsp, 8
 * 00000001401D400E: call    loc_1401D4001
 * 00000001401D4013: add     rsp, 8
 * 00000001401D4017: lfence
 * 00000001401D401A: mov     byte ptr gs:853h, 0
 * 00000001401D4023: test    byte ptr [r10+3], 80h
 * 00000001401D4028: jz      short loc_1401D406C
 * 00000001401D402A: mov     ecx, 0C0000102h
 * 00000001401D402F: rdmsr
 * 00000001401D4031: shl     rdx, 20h
 * 00000001401D4035: or      rax, rdx
 * 00000001401D4038: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D403F: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D4047: cmp     [r10+0F0h], rax
 * 00000001401D404E: jz      short loc_1401D406C
 * 00000001401D4050: mov     rdx, [r10+1F0h]
 * 00000001401D4057: bts     dword ptr [r10+74h], 8
 * 00000001401D405D: dec     word ptr [r10+1E6h]
 * 00000001401D4065: mov     [rdx+80h], rax
 * 00000001401D406C: test    byte ptr [r10+3], 3
 * 00000001401D4071: mov     word ptr [rbp+80h], 0
 * 00000001401D407A: jz      short loc_1401D4081
 * 00000001401D407C: call    KiSaveDebugRegisterState
 * 00000001401D4081: cld
 * 00000001401D4082: stmxcsr dword ptr [rbp-54h]
 * 00000001401D4086: ldmxcsr dword ptr gs:180h
 * 00000001401D408F: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D4093: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401D4097: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401D409B: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401D409F: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401D40A3: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401D40A7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D40AE: jz      short loc_1401D40BC
 * 00000001401D40B0: test    byte ptr [rbp+0F0h], 1
 * 00000001401D40B7: jz      short loc_1401D40BC
 * 00000001401D40B9: stac
 * 00000001401D40BC: test    dword ptr [rbp+0F8h], 200h
 * 00000001401D40C6: jz      short loc_1401D40C9
 * 00000001401D40C8: sti
 * 00000001401D40C9: mov     r9, [rbp-48h]
 * 00000001401D40CD: mov     ecx, 0C0000409h
 * 00000001401D40D2: mov     edx, 1
 * 00000001401D40D7: mov     r8, [rbp+0E8h]
 * 00000001401D40DE: call    KiFastFailDispatch
 * 00000001401D40E3: nop
 * 00000001401D40E4: retn
 */
