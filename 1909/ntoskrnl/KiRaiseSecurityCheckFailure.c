/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1401D49C0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140350D00 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1401D49C0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1401D6880 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1401D49C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401D49C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D49C0: sub     qword ptr [rsp+0], 2
 * 00000001401D49C5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401D49CB: jnz     short loc_1401D49D2
 * 00000001401D49CD: and     dword ptr [rsp+4], 0
 * 00000001401D49D2: sub     rsp, 8
 * 00000001401D49D6: push    rbp
 * 00000001401D49D7: sub     rsp, 158h
 * 00000001401D49DE: lea     rbp, [rsp+168h+var_E8]
 * 00000001401D49E6: mov     byte ptr [rbp-55h], 1
 * 00000001401D49EA: mov     [rbp-50h], rax
 * 00000001401D49EE: mov     [rbp-48h], rcx
 * 00000001401D49F2: mov     [rbp-40h], rdx
 * 00000001401D49F6: mov     [rbp-38h], r8
 * 00000001401D49FA: mov     [rbp-30h], r9
 * 00000001401D49FE: mov     [rbp-28h], r10
 * 00000001401D4A02: mov     [rbp-20h], r11
 * 00000001401D4A06: test    byte ptr [rbp+0F0h], 1
 * 00000001401D4A0D: jnz     short loc_1401D4A3C
 * 00000001401D4A0F: lfence
 * 00000001401D4A12: test    byte ptr gs:278h, 1
 * 00000001401D4A1B: jnz     short loc_1401D4A25
 * 00000001401D4A1D: lfence
 * 00000001401D4A20: jmp     loc_1401D4C81
 * 00000001401D4A25: movzx   eax, byte ptr gs:27Ah
 * 00000001401D4A2E: mov     ecx, 48h ; 'H'
 * 00000001401D4A33: xor     edx, edx
 * 00000001401D4A35: wrmsr
 * 00000001401D4A37: jmp     loc_1401D4C81
 * 00000001401D4A3C: test    cs:KiKvaShadow, 1
 * 00000001401D4A43: jnz     short loc_1401D4A48
 * 00000001401D4A45: swapgs
 * 00000001401D4A48: lfence
 * 00000001401D4A4B: mov     r10, gs:188h
 * 00000001401D4A54: mov     rcx, gs:188h
 * 00000001401D4A5D: mov     rcx, [rcx+220h]
 * 00000001401D4A64: mov     rcx, [rcx+860h]
 * 00000001401D4A6B: mov     gs:270h, rcx
 * 00000001401D4A74: mov     cl, gs:850h
 * 00000001401D4A7C: mov     gs:851h, cl
 * 00000001401D4A84: mov     cl, gs:278h
 * 00000001401D4A8C: mov     gs:852h, cl
 * 00000001401D4A94: movzx   eax, byte ptr gs:27Bh
 * 00000001401D4A9D: cmp     gs:27Ah, al
 * 00000001401D4AA5: jz      short loc_1401D4AB8
 * 00000001401D4AA7: mov     gs:27Ah, al
 * 00000001401D4AAF: mov     ecx, 48h ; 'H'
 * 00000001401D4AB4: xor     edx, edx
 * 00000001401D4AB6: wrmsr
 * 00000001401D4AB8: movzx   edx, byte ptr gs:278h
 * 00000001401D4AC1: test    edx, 8
 * 00000001401D4AC7: jz      short loc_1401D4ADC
 * 00000001401D4AC9: mov     eax, 1
 * 00000001401D4ACE: xor     edx, edx
 * 00000001401D4AD0: mov     ecx, 49h ; 'I'
 * 00000001401D4AD5: wrmsr
 * 00000001401D4AD7: jmp     loc_1401D4C1A
 * 00000001401D4ADC: test    edx, 2
 * 00000001401D4AE2: jz      loc_1401D4C17
 * 00000001401D4AE8: test    byte ptr gs:279h, 4
 * 00000001401D4AF1: jnz     loc_1401D4C17
 * 00000001401D4AF7: call    loc_1401D4C0A
 * 00000001401D4AFC: add     rsp, 8
 * 00000001401D4B00: call    loc_1401D4C13
 * 00000001401D4B05: add     rsp, 8
 * 00000001401D4B09: call    loc_1401D4AFC
 * 00000001401D4B0E: add     rsp, 8
 * 00000001401D4B12: call    loc_1401D4B05
 * 00000001401D4B17: add     rsp, 8
 * 00000001401D4B1B: call    loc_1401D4B0E
 * 00000001401D4B20: add     rsp, 8
 * 00000001401D4B24: call    loc_1401D4B17
 * 00000001401D4B29: add     rsp, 8
 * 00000001401D4B2D: call    loc_1401D4B20
 * 00000001401D4B32: add     rsp, 8
 * 00000001401D4B36: call    loc_1401D4B29
 * 00000001401D4B3B: add     rsp, 8
 * 00000001401D4B3F: call    loc_1401D4B32
 * 00000001401D4B44: add     rsp, 8
 * 00000001401D4B48: call    loc_1401D4B3B
 * 00000001401D4B4D: add     rsp, 8
 * 00000001401D4B51: call    loc_1401D4B44
 * 00000001401D4B56: add     rsp, 8
 * 00000001401D4B5A: call    loc_1401D4B4D
 * 00000001401D4B5F: add     rsp, 8
 * 00000001401D4B63: call    loc_1401D4B56
 * 00000001401D4B68: add     rsp, 8
 * 00000001401D4B6C: call    loc_1401D4B5F
 * 00000001401D4B71: add     rsp, 8
 * 00000001401D4B75: call    loc_1401D4B68
 * 00000001401D4B7A: add     rsp, 8
 * 00000001401D4B7E: call    loc_1401D4B71
 * 00000001401D4B83: add     rsp, 8
 * 00000001401D4B87: call    loc_1401D4B7A
 * 00000001401D4B8C: add     rsp, 8
 * 00000001401D4B90: call    loc_1401D4B83
 * 00000001401D4B95: add     rsp, 8
 * 00000001401D4B99: call    loc_1401D4B8C
 * 00000001401D4B9E: add     rsp, 8
 * 00000001401D4BA2: call    loc_1401D4B95
 * 00000001401D4BA7: add     rsp, 8
 * 00000001401D4BAB: call    loc_1401D4B9E
 * 00000001401D4BB0: add     rsp, 8
 * 00000001401D4BB4: call    loc_1401D4BA7
 * 00000001401D4BB9: add     rsp, 8
 * 00000001401D4BBD: call    loc_1401D4BB0
 * 00000001401D4BC2: add     rsp, 8
 * 00000001401D4BC6: call    loc_1401D4BB9
 * 00000001401D4BCB: add     rsp, 8
 * 00000001401D4BCF: call    loc_1401D4BC2
 * 00000001401D4BD4: add     rsp, 8
 * 00000001401D4BD8: call    loc_1401D4BCB
 * 00000001401D4BDD: add     rsp, 8
 * 00000001401D4BE1: call    loc_1401D4BD4
 * 00000001401D4BE6: add     rsp, 8
 * 00000001401D4BEA: call    loc_1401D4BDD
 * 00000001401D4BEF: add     rsp, 8
 * 00000001401D4BF3: call    loc_1401D4BE6
 * 00000001401D4BF8: add     rsp, 8
 * 00000001401D4BFC: call    loc_1401D4BEF
 * 00000001401D4C01: add     rsp, 8
 * 00000001401D4C05: call    loc_1401D4BF8
 * 00000001401D4C0A: add     rsp, 8
 * 00000001401D4C0E: call    loc_1401D4C01
 * 00000001401D4C13: add     rsp, 8
 * 00000001401D4C17: lfence
 * 00000001401D4C1A: mov     byte ptr gs:853h, 0
 * 00000001401D4C23: test    byte ptr [r10+3], 80h
 * 00000001401D4C28: jz      short loc_1401D4C6C
 * 00000001401D4C2A: mov     ecx, 0C0000102h
 * 00000001401D4C2F: rdmsr
 * 00000001401D4C31: shl     rdx, 20h
 * 00000001401D4C35: or      rax, rdx
 * 00000001401D4C38: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D4C3F: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D4C47: cmp     [r10+0F0h], rax
 * 00000001401D4C4E: jz      short loc_1401D4C6C
 * 00000001401D4C50: mov     rdx, [r10+1F0h]
 * 00000001401D4C57: bts     dword ptr [r10+74h], 8
 * 00000001401D4C5D: dec     word ptr [r10+1E6h]
 * 00000001401D4C65: mov     [rdx+80h], rax
 * 00000001401D4C6C: test    byte ptr [r10+3], 3
 * 00000001401D4C71: mov     word ptr [rbp+80h], 0
 * 00000001401D4C7A: jz      short loc_1401D4C81
 * 00000001401D4C7C: call    KiSaveDebugRegisterState
 * 00000001401D4C81: cld
 * 00000001401D4C82: stmxcsr dword ptr [rbp-54h]
 * 00000001401D4C86: ldmxcsr dword ptr gs:180h
 * 00000001401D4C8F: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D4C93: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401D4C97: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401D4C9B: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401D4C9F: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401D4CA3: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401D4CA7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D4CAE: jz      short loc_1401D4CBC
 * 00000001401D4CB0: test    byte ptr [rbp+0F0h], 1
 * 00000001401D4CB7: jz      short loc_1401D4CBC
 * 00000001401D4CB9: stac
 * 00000001401D4CBC: test    dword ptr [rbp+0F8h], 200h
 * 00000001401D4CC6: jz      short loc_1401D4CC9
 * 00000001401D4CC8: sti
 * 00000001401D4CC9: mov     r9, [rbp-48h]
 * 00000001401D4CCD: mov     ecx, 0C0000409h
 * 00000001401D4CD2: mov     edx, 1
 * 00000001401D4CD7: mov     r8, [rbp+0E8h]
 * 00000001401D4CDE: call    KiFastFailDispatch
 * 00000001401D4CE3: nop
 * 00000001401D4CE4: retn
 */
