/*
 * XREFs of KiControlProtectionFault @ 0x1401D3900
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140350B80 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x1401D3900 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1401D58C0 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x1401D5C80 (KiFastFailDispatch.c)
 *     KiUmsExit @ 0x1401D6700 (KiUmsExit.c)
 *     KiProcessControlProtection @ 0x1402A42F0 (KiProcessControlProtection.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x1401D3900
 * Reason: Hex-Rays returned no pseudocode for 0x1401D3900
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D3900: push    rbp
 * 00000001401D3901: sub     rsp, 158h
 * 00000001401D3908: lea     rbp, [rsp+80h]
 * 00000001401D3910: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D3914: mov     [rbp+0D8h+var_128], rax
 * 00000001401D3918: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D391C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D3920: mov     [rbp+0D8h+var_110], r8
 * 00000001401D3924: mov     [rbp+0D8h+var_108], r9
 * 00000001401D3928: mov     [rbp+0D8h+var_100], r10
 * 00000001401D392C: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D3930: test    [rbp+0D8h+arg_8], 1
 * 00000001401D3937: jnz     short loc_1401D3966
 * 00000001401D3939: lfence
 * 00000001401D393C: test    byte ptr gs:278h, 1
 * 00000001401D3945: jnz     short loc_1401D394F
 * 00000001401D3947: lfence
 * 00000001401D394A: jmp     loc_1401D3B62
 * 00000001401D394F: movzx   eax, byte ptr gs:27Ah
 * 00000001401D3958: mov     ecx, 48h ; 'H'
 * 00000001401D395D: xor     edx, edx
 * 00000001401D395F: wrmsr
 * 00000001401D3961: jmp     loc_1401D3B62
 * 00000001401D3966: test    cs:KiKvaShadow, 1
 * 00000001401D396D: jnz     short loc_1401D3972
 * 00000001401D396F: swapgs
 * 00000001401D3972: lfence
 * 00000001401D3975: mov     r10, gs:188h
 * 00000001401D397E: mov     rcx, gs:188h
 * 00000001401D3987: mov     rcx, [rcx+220h]
 * 00000001401D398E: mov     rcx, [rcx+860h]
 * 00000001401D3995: mov     gs:270h, rcx
 * 00000001401D399E: mov     cl, gs:850h
 * 00000001401D39A6: mov     gs:851h, cl
 * 00000001401D39AE: mov     cl, gs:278h
 * 00000001401D39B6: mov     gs:852h, cl
 * 00000001401D39BE: movzx   eax, byte ptr gs:27Bh
 * 00000001401D39C7: cmp     gs:27Ah, al
 * 00000001401D39CF: jz      short loc_1401D39E2
 * 00000001401D39D1: mov     gs:27Ah, al
 * 00000001401D39D9: mov     ecx, 48h ; 'H'
 * 00000001401D39DE: xor     edx, edx
 * 00000001401D39E0: wrmsr
 * 00000001401D39E2: movzx   edx, byte ptr gs:278h
 * 00000001401D39EB: test    edx, 8
 * 00000001401D39F1: jz      short loc_1401D3A06
 * 00000001401D39F3: mov     eax, 1
 * 00000001401D39F8: xor     edx, edx
 * 00000001401D39FA: mov     ecx, 49h ; 'I'
 * 00000001401D39FF: wrmsr
 * 00000001401D3A01: jmp     loc_1401D3B44
 * 00000001401D3A06: test    edx, 2
 * 00000001401D3A0C: jz      loc_1401D3B41
 * 00000001401D3A12: test    byte ptr gs:279h, 4
 * 00000001401D3A1B: jnz     loc_1401D3B41
 * 00000001401D3A21: call    loc_1401D3B34
 * 00000001401D3A26: add     rsp, 8
 * 00000001401D3A2A: call    loc_1401D3B3D
 * 00000001401D3A2F: add     rsp, 8
 * 00000001401D3A33: call    loc_1401D3A26
 * 00000001401D3A38: add     rsp, 8
 * 00000001401D3A3C: call    loc_1401D3A2F
 * 00000001401D3A41: add     rsp, 8
 * 00000001401D3A45: call    loc_1401D3A38
 * 00000001401D3A4A: add     rsp, 8
 * 00000001401D3A4E: call    loc_1401D3A41
 * 00000001401D3A53: add     rsp, 8
 * 00000001401D3A57: call    loc_1401D3A4A
 * 00000001401D3A5C: add     rsp, 8
 * 00000001401D3A60: call    loc_1401D3A53
 * 00000001401D3A65: add     rsp, 8
 * 00000001401D3A69: call    loc_1401D3A5C
 * 00000001401D3A6E: add     rsp, 8
 * 00000001401D3A72: call    loc_1401D3A65
 * 00000001401D3A77: add     rsp, 8
 * 00000001401D3A7B: call    loc_1401D3A6E
 * 00000001401D3A80: add     rsp, 8
 * 00000001401D3A84: call    loc_1401D3A77
 * 00000001401D3A89: add     rsp, 8
 * 00000001401D3A8D: call    loc_1401D3A80
 * 00000001401D3A92: add     rsp, 8
 * 00000001401D3A96: call    loc_1401D3A89
 * 00000001401D3A9B: add     rsp, 8
 * 00000001401D3A9F: call    loc_1401D3A92
 * 00000001401D3AA4: add     rsp, 8
 * 00000001401D3AA8: call    loc_1401D3A9B
 * 00000001401D3AAD: add     rsp, 8
 * 00000001401D3AB1: call    loc_1401D3AA4
 * 00000001401D3AB6: add     rsp, 8
 * 00000001401D3ABA: call    loc_1401D3AAD
 * 00000001401D3ABF: add     rsp, 8
 * 00000001401D3AC3: call    loc_1401D3AB6
 * 00000001401D3AC8: add     rsp, 8
 * 00000001401D3ACC: call    loc_1401D3ABF
 * 00000001401D3AD1: add     rsp, 8
 * 00000001401D3AD5: call    loc_1401D3AC8
 * 00000001401D3ADA: add     rsp, 8
 * 00000001401D3ADE: call    loc_1401D3AD1
 * 00000001401D3AE3: add     rsp, 8
 * 00000001401D3AE7: call    loc_1401D3ADA
 * 00000001401D3AEC: add     rsp, 8
 * 00000001401D3AF0: call    loc_1401D3AE3
 * 00000001401D3AF5: add     rsp, 8
 * 00000001401D3AF9: call    loc_1401D3AEC
 * 00000001401D3AFE: add     rsp, 8
 * 00000001401D3B02: call    loc_1401D3AF5
 * 00000001401D3B07: add     rsp, 8
 * 00000001401D3B0B: call    loc_1401D3AFE
 * 00000001401D3B10: add     rsp, 8
 * 00000001401D3B14: call    loc_1401D3B07
 * 00000001401D3B19: add     rsp, 8
 * 00000001401D3B1D: call    loc_1401D3B10
 * 00000001401D3B22: add     rsp, 8
 * 00000001401D3B26: call    loc_1401D3B19
 * 00000001401D3B2B: add     rsp, 8
 * 00000001401D3B2F: call    loc_1401D3B22
 * 00000001401D3B34: add     rsp, 8
 * 00000001401D3B38: call    loc_1401D3B2B
 * 00000001401D3B3D: add     rsp, 8
 * 00000001401D3B41: lfence
 * 00000001401D3B44: mov     byte ptr gs:853h, 0
 * 00000001401D3B4D: test    byte ptr [r10+3], 3
 * 00000001401D3B52: mov     [rbp+0D8h+var_58], 0
 * 00000001401D3B5B: jz      short loc_1401D3B62
 * 00000001401D3B5D: call    KiSaveDebugRegisterState
 * 00000001401D3B62: cld
 * 00000001401D3B63: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D3B67: ldmxcsr dword ptr gs:180h
 * 00000001401D3B70: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D3B74: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D3B78: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D3B7C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D3B80: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D3B84: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D3B88: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D3B8F: jz      short loc_1401D3B9D
 * 00000001401D3B91: test    [rbp+0D8h+arg_8], 1
 * 00000001401D3B98: jz      short loc_1401D3B9D
 * 00000001401D3B9A: stac
 * 00000001401D3B9D: mov     eax, [rbp+0E0h]
 * 00000001401D3BA3: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D3BAD: jz      short loc_1401D3BB0
 * 00000001401D3BAF: sti
 * 00000001401D3BB0: test    byte ptr gs:6425h, 40h
 * 00000001401D3BB9: jz      short loc_1401D3BF6
 * 00000001401D3BBB: mov     r9, gs:188h
 * 00000001401D3BC4: test    byte ptr [r9+3], 80h
 * 00000001401D3BC9: jnz     short loc_1401D3BD8
 * 00000001401D3BCB: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401D3BCF: call    KiProcessControlProtection
 * 00000001401D3BD4: test    al, al
 * 00000001401D3BD6: jnz     short loc_1401D3C05
 * 00000001401D3BD8: mov     r9, 39h ; '9'
 * 00000001401D3BDF: mov     ecx, 0C0000409h
 * 00000001401D3BE4: mov     edx, 1
 * 00000001401D3BE9: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D3BF0: call    KiFastFailDispatch
 * 00000001401D3BF5: nop
 * 00000001401D3BF6: mov     edx, 15h
 * 00000001401D3BFB: mov     ecx, 7Fh
 * 00000001401D3C00: call    KiBugCheckDispatch
 * 00000001401D3C05: cli
 * 00000001401D3C06: test    [rbp+0D8h+arg_8], 1
 * 00000001401D3C0D: jz      loc_1401D3D5D
 * 00000001401D3C13: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D3C1A: jz      short loc_1401D3C1F
 * 00000001401D3C1C: stac
 * 00000001401D3C1F: mov     rcx, gs:188h
 * 00000001401D3C28: test    byte ptr [rcx+0C2h], 3
 * 00000001401D3C2F: jz      short loc_1401D3C4C
 * 00000001401D3C31: mov     ecx, 1
 * 00000001401D3C36: mov     cr8, rcx
 * 00000001401D3C3A: sti
 * 00000001401D3C3B: call    KiInitiateUserApc
 * 00000001401D3C40: cli
 * 00000001401D3C41: mov     ecx, 0
 * 00000001401D3C46: mov     cr8, rcx
 * 00000001401D3C4A: jmp     short loc_1401D3C1F
 * 00000001401D3C4C: test    byte ptr gs:27Eh, 2
 * 00000001401D3C55: jz      short loc_1401D3C5E
 * 00000001401D3C57: xor     ecx, ecx
 * 00000001401D3C59: call    KiUpdateStibpPairing
 * 00000001401D3C5E: mov     rcx, gs:188h
 * 00000001401D3C67: test    dword ptr [rcx], 8000000h
 * 00000001401D3C6D: jz      short loc_1401D3C74
 * 00000001401D3C6F: call    KiRestoreSetContextState
 * 00000001401D3C74: mov     rcx, gs:188h
 * 00000001401D3C7D: test    dword ptr [rcx], 40010000h
 * 00000001401D3C83: jz      short loc_1401D3CAA
 * 00000001401D3C85: test    byte ptr [rcx+2], 1
 * 00000001401D3C89: jz      short loc_1401D3C99
 * 00000001401D3C8B: call    KiCopyCounters
 * 00000001401D3C90: mov     rcx, gs:188h
 * 00000001401D3C99: test    byte ptr [rcx+3], 40h
 * 00000001401D3C9D: jz      short loc_1401D3CAA
 * 00000001401D3C9F: lea     rsp, [rbp-80h]
 * 00000001401D3CA3: mov     cl, 1
 * 00000001401D3CA5: call    KiUmsExit
 * 00000001401D3CAA: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401D3CAE: cmp     [rbp+0D8h+var_58], 0
 * 00000001401D3CB6: jz      short loc_1401D3CBD
 * 00000001401D3CB8: call    KiRestoreDebugRegisterState
 * 00000001401D3CBD: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401D3CC1: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401D3CC5: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401D3CC9: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401D3CCD: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401D3CD1: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401D3CD5: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401D3CD9: mov     r10, [rbp+0D8h+var_100]
 * 00000001401D3CDD: mov     r9, [rbp+0D8h+var_108]
 * 00000001401D3CE1: mov     r8, [rbp+0D8h+var_110]
 * 00000001401D3CE5: mov     byte ptr gs:853h, 0
 * 00000001401D3CEE: movzx   eax, byte ptr gs:27Dh
 * 00000001401D3CF7: cmp     gs:27Ah, al
 * 00000001401D3CFF: jz      short loc_1401D3D12
 * 00000001401D3D01: mov     gs:27Ah, al
 * 00000001401D3D09: mov     ecx, 48h ; 'H'
 * 00000001401D3D0E: xor     edx, edx
 * 00000001401D3D10: wrmsr
 * 00000001401D3D12: btr     word ptr gs:278h, 2
 * 00000001401D3D1D: jnb     short loc_1401D3D2D
 * 00000001401D3D1F: mov     eax, 1
 * 00000001401D3D24: xor     edx, edx
 * 00000001401D3D26: mov     ecx, 49h ; 'I'
 * 00000001401D3D2B: wrmsr
 * 00000001401D3D2D: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401D3D31: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401D3D35: mov     rax, [rbp+0D8h+var_128]
 * 00000001401D3D39: mov     rsp, rbp
 * 00000001401D3D3C: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401D3D43: add     rsp, 0E8h
 * 00000001401D3D4A: test    cs:KiKvaShadow, 1
 * 00000001401D3D51: jz      short loc_1401D3D58
 * 00000001401D3D53: jmp     KiKernelExit
 * 00000001401D3D58: swapgs
 * 00000001401D3D5B: iretq
 * 00000001401D3D5D: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401D3D61: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401D3D65: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401D3D69: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401D3D6D: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401D3D71: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401D3D75: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401D3D79: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401D3D7D: mov     r10, [rbp+0D8h+var_100]
 * 00000001401D3D81: mov     r9, [rbp+0D8h+var_108]
 * 00000001401D3D85: mov     r8, [rbp+0D8h+var_110]
 * 00000001401D3D89: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401D3D8D: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401D3D91: mov     rax, [rbp+0D8h+var_128]
 * 00000001401D3D95: mov     rsp, rbp
 * 00000001401D3D98: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401D3D9F: add     rsp, 0E8h
 * 00000001401D3DA6: iretq
 * 00000001401D3DA8: retn
 */
