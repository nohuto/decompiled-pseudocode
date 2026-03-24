/*
 * XREFs of KiRaiseAssertion @ 0x1401D4D00
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140350D80 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x1401D4D00 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x1401D4D00
 * Reason: Hex-Rays returned no pseudocode for 0x1401D4D00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D4D00: sub     qword ptr [rsp+0], 2
 * 00000001401D4D05: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401D4D0B: jnz     short loc_1401D4D12
 * 00000001401D4D0D: and     dword ptr [rsp+4], 0
 * 00000001401D4D12: sub     rsp, 8
 * 00000001401D4D16: push    rbp
 * 00000001401D4D17: sub     rsp, 158h
 * 00000001401D4D1E: lea     rbp, [rsp+168h+var_E8]
 * 00000001401D4D26: mov     byte ptr [rbp-55h], 1
 * 00000001401D4D2A: mov     [rbp-50h], rax
 * 00000001401D4D2E: mov     [rbp-48h], rcx
 * 00000001401D4D32: mov     [rbp-40h], rdx
 * 00000001401D4D36: mov     [rbp-38h], r8
 * 00000001401D4D3A: mov     [rbp-30h], r9
 * 00000001401D4D3E: mov     [rbp-28h], r10
 * 00000001401D4D42: mov     [rbp-20h], r11
 * 00000001401D4D46: test    byte ptr [rbp+0F0h], 1
 * 00000001401D4D4D: jnz     short loc_1401D4D7C
 * 00000001401D4D4F: lfence
 * 00000001401D4D52: test    byte ptr gs:278h, 1
 * 00000001401D4D5B: jnz     short loc_1401D4D65
 * 00000001401D4D5D: lfence
 * 00000001401D4D60: jmp     loc_1401D4FC1
 * 00000001401D4D65: movzx   eax, byte ptr gs:27Ah
 * 00000001401D4D6E: mov     ecx, 48h ; 'H'
 * 00000001401D4D73: xor     edx, edx
 * 00000001401D4D75: wrmsr
 * 00000001401D4D77: jmp     loc_1401D4FC1
 * 00000001401D4D7C: test    cs:KiKvaShadow, 1
 * 00000001401D4D83: jnz     short loc_1401D4D88
 * 00000001401D4D85: swapgs
 * 00000001401D4D88: lfence
 * 00000001401D4D8B: mov     r10, gs:188h
 * 00000001401D4D94: mov     rcx, gs:188h
 * 00000001401D4D9D: mov     rcx, [rcx+220h]
 * 00000001401D4DA4: mov     rcx, [rcx+860h]
 * 00000001401D4DAB: mov     gs:270h, rcx
 * 00000001401D4DB4: mov     cl, gs:850h
 * 00000001401D4DBC: mov     gs:851h, cl
 * 00000001401D4DC4: mov     cl, gs:278h
 * 00000001401D4DCC: mov     gs:852h, cl
 * 00000001401D4DD4: movzx   eax, byte ptr gs:27Bh
 * 00000001401D4DDD: cmp     gs:27Ah, al
 * 00000001401D4DE5: jz      short loc_1401D4DF8
 * 00000001401D4DE7: mov     gs:27Ah, al
 * 00000001401D4DEF: mov     ecx, 48h ; 'H'
 * 00000001401D4DF4: xor     edx, edx
 * 00000001401D4DF6: wrmsr
 * 00000001401D4DF8: movzx   edx, byte ptr gs:278h
 * 00000001401D4E01: test    edx, 8
 * 00000001401D4E07: jz      short loc_1401D4E1C
 * 00000001401D4E09: mov     eax, 1
 * 00000001401D4E0E: xor     edx, edx
 * 00000001401D4E10: mov     ecx, 49h ; 'I'
 * 00000001401D4E15: wrmsr
 * 00000001401D4E17: jmp     loc_1401D4F5A
 * 00000001401D4E1C: test    edx, 2
 * 00000001401D4E22: jz      loc_1401D4F57
 * 00000001401D4E28: test    byte ptr gs:279h, 4
 * 00000001401D4E31: jnz     loc_1401D4F57
 * 00000001401D4E37: call    loc_1401D4F4A
 * 00000001401D4E3C: add     rsp, 8
 * 00000001401D4E40: call    loc_1401D4F53
 * 00000001401D4E45: add     rsp, 8
 * 00000001401D4E49: call    loc_1401D4E3C
 * 00000001401D4E4E: add     rsp, 8
 * 00000001401D4E52: call    loc_1401D4E45
 * 00000001401D4E57: add     rsp, 8
 * 00000001401D4E5B: call    loc_1401D4E4E
 * 00000001401D4E60: add     rsp, 8
 * 00000001401D4E64: call    loc_1401D4E57
 * 00000001401D4E69: add     rsp, 8
 * 00000001401D4E6D: call    loc_1401D4E60
 * 00000001401D4E72: add     rsp, 8
 * 00000001401D4E76: call    loc_1401D4E69
 * 00000001401D4E7B: add     rsp, 8
 * 00000001401D4E7F: call    loc_1401D4E72
 * 00000001401D4E84: add     rsp, 8
 * 00000001401D4E88: call    loc_1401D4E7B
 * 00000001401D4E8D: add     rsp, 8
 * 00000001401D4E91: call    loc_1401D4E84
 * 00000001401D4E96: add     rsp, 8
 * 00000001401D4E9A: call    loc_1401D4E8D
 * 00000001401D4E9F: add     rsp, 8
 * 00000001401D4EA3: call    loc_1401D4E96
 * 00000001401D4EA8: add     rsp, 8
 * 00000001401D4EAC: call    loc_1401D4E9F
 * 00000001401D4EB1: add     rsp, 8
 * 00000001401D4EB5: call    loc_1401D4EA8
 * 00000001401D4EBA: add     rsp, 8
 * 00000001401D4EBE: call    loc_1401D4EB1
 * 00000001401D4EC3: add     rsp, 8
 * 00000001401D4EC7: call    loc_1401D4EBA
 * 00000001401D4ECC: add     rsp, 8
 * 00000001401D4ED0: call    loc_1401D4EC3
 * 00000001401D4ED5: add     rsp, 8
 * 00000001401D4ED9: call    loc_1401D4ECC
 * 00000001401D4EDE: add     rsp, 8
 * 00000001401D4EE2: call    loc_1401D4ED5
 * 00000001401D4EE7: add     rsp, 8
 * 00000001401D4EEB: call    loc_1401D4EDE
 * 00000001401D4EF0: add     rsp, 8
 * 00000001401D4EF4: call    loc_1401D4EE7
 * 00000001401D4EF9: add     rsp, 8
 * 00000001401D4EFD: call    loc_1401D4EF0
 * 00000001401D4F02: add     rsp, 8
 * 00000001401D4F06: call    loc_1401D4EF9
 * 00000001401D4F0B: add     rsp, 8
 * 00000001401D4F0F: call    loc_1401D4F02
 * 00000001401D4F14: add     rsp, 8
 * 00000001401D4F18: call    loc_1401D4F0B
 * 00000001401D4F1D: add     rsp, 8
 * 00000001401D4F21: call    loc_1401D4F14
 * 00000001401D4F26: add     rsp, 8
 * 00000001401D4F2A: call    loc_1401D4F1D
 * 00000001401D4F2F: add     rsp, 8
 * 00000001401D4F33: call    loc_1401D4F26
 * 00000001401D4F38: add     rsp, 8
 * 00000001401D4F3C: call    loc_1401D4F2F
 * 00000001401D4F41: add     rsp, 8
 * 00000001401D4F45: call    loc_1401D4F38
 * 00000001401D4F4A: add     rsp, 8
 * 00000001401D4F4E: call    loc_1401D4F41
 * 00000001401D4F53: add     rsp, 8
 * 00000001401D4F57: lfence
 * 00000001401D4F5A: mov     byte ptr gs:853h, 0
 * 00000001401D4F63: test    byte ptr [r10+3], 80h
 * 00000001401D4F68: jz      short loc_1401D4FAC
 * 00000001401D4F6A: mov     ecx, 0C0000102h
 * 00000001401D4F6F: rdmsr
 * 00000001401D4F71: shl     rdx, 20h
 * 00000001401D4F75: or      rax, rdx
 * 00000001401D4F78: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D4F7F: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D4F87: cmp     [r10+0F0h], rax
 * 00000001401D4F8E: jz      short loc_1401D4FAC
 * 00000001401D4F90: mov     rdx, [r10+1F0h]
 * 00000001401D4F97: bts     dword ptr [r10+74h], 8
 * 00000001401D4F9D: dec     word ptr [r10+1E6h]
 * 00000001401D4FA5: mov     [rdx+80h], rax
 * 00000001401D4FAC: test    byte ptr [r10+3], 3
 * 00000001401D4FB1: mov     word ptr [rbp+80h], 0
 * 00000001401D4FBA: jz      short loc_1401D4FC1
 * 00000001401D4FBC: call    KiSaveDebugRegisterState
 * 00000001401D4FC1: cld
 * 00000001401D4FC2: stmxcsr dword ptr [rbp-54h]
 * 00000001401D4FC6: ldmxcsr dword ptr gs:180h
 * 00000001401D4FCF: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D4FD3: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401D4FD7: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401D4FDB: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401D4FDF: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401D4FE3: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401D4FE7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D4FEE: jz      short loc_1401D4FFC
 * 00000001401D4FF0: test    byte ptr [rbp+0F0h], 1
 * 00000001401D4FF7: jz      short loc_1401D4FFC
 * 00000001401D4FF9: stac
 * 00000001401D4FFC: test    dword ptr [rbp+0F8h], 200h
 * 00000001401D5006: jz      short loc_1401D5009
 * 00000001401D5008: sti
 * 00000001401D5009: mov     ecx, 0C0000420h
 * 00000001401D500E: xor     edx, edx
 * 00000001401D5010: mov     r8, [rbp+0E8h]
 * 00000001401D5017: call    KiExceptionDispatch
 * 00000001401D501C: nop
 * 00000001401D501D: retn
 */
