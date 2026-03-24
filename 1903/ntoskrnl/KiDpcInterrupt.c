/*
 * XREFs of KiDpcInterrupt @ 0x1401C9CF0
 * Callers:
 *     KiDpcInterruptShadow @ 0x140350F00 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400EA770 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401B9F20 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401C3FF0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401C4A60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1401C9CF0 (KiDpcInterrupt.c)
 *     KiDispatchInterrupt @ 0x1401CA8D0 (KiDispatchInterrupt.c)
 *     KzSetIrqlUnsafe @ 0x1402A4590 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402AC690 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1401C9CF0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C9CF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C9CF0: sub     rsp, 8
 * 00000001401C9CF4: push    rbp
 * 00000001401C9CF5: push    rsi
 * 00000001401C9CF6: sub     rsp, 150h
 * 00000001401C9CFD: lea     rbp, [rsp+80h]
 * 00000001401C9D05: mov     [rbp+0E8h+var_13D], 0
 * 00000001401C9D09: mov     [rbp+0E8h+var_138], rax
 * 00000001401C9D0D: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C9D11: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C9D15: mov     [rbp+0E8h+var_120], r8
 * 00000001401C9D19: mov     [rbp+0E8h+var_118], r9
 * 00000001401C9D1D: mov     [rbp+0E8h+var_110], r10
 * 00000001401C9D21: mov     [rbp+0E8h+var_108], r11
 * 00000001401C9D25: test    [rbp+0E8h+arg_0], 1
 * 00000001401C9D2C: jnz     short loc_1401C9D5B
 * 00000001401C9D2E: lfence
 * 00000001401C9D31: test    byte ptr gs:278h, 1
 * 00000001401C9D3A: jnz     short loc_1401C9D44
 * 00000001401C9D3C: lfence
 * 00000001401C9D3F: jmp     loc_1401C9F57
 * 00000001401C9D44: movzx   eax, byte ptr gs:27Ah
 * 00000001401C9D4D: mov     ecx, 48h ; 'H'
 * 00000001401C9D52: xor     edx, edx
 * 00000001401C9D54: wrmsr
 * 00000001401C9D56: jmp     loc_1401C9F57
 * 00000001401C9D5B: test    cs:KiKvaShadow, 1
 * 00000001401C9D62: jnz     short loc_1401C9D67
 * 00000001401C9D64: swapgs
 * 00000001401C9D67: lfence
 * 00000001401C9D6A: mov     r10, gs:188h
 * 00000001401C9D73: mov     rcx, gs:188h
 * 00000001401C9D7C: mov     rcx, [rcx+220h]
 * 00000001401C9D83: mov     rcx, [rcx+860h]
 * 00000001401C9D8A: mov     gs:270h, rcx
 * 00000001401C9D93: mov     cl, gs:850h
 * 00000001401C9D9B: mov     gs:851h, cl
 * 00000001401C9DA3: mov     cl, gs:278h
 * 00000001401C9DAB: mov     gs:852h, cl
 * 00000001401C9DB3: movzx   eax, byte ptr gs:27Bh
 * 00000001401C9DBC: cmp     gs:27Ah, al
 * 00000001401C9DC4: jz      short loc_1401C9DD7
 * 00000001401C9DC6: mov     gs:27Ah, al
 * 00000001401C9DCE: mov     ecx, 48h ; 'H'
 * 00000001401C9DD3: xor     edx, edx
 * 00000001401C9DD5: wrmsr
 * 00000001401C9DD7: movzx   edx, byte ptr gs:278h
 * 00000001401C9DE0: test    edx, 8
 * 00000001401C9DE6: jz      short loc_1401C9DFB
 * 00000001401C9DE8: mov     eax, 1
 * 00000001401C9DED: xor     edx, edx
 * 00000001401C9DEF: mov     ecx, 49h ; 'I'
 * 00000001401C9DF4: wrmsr
 * 00000001401C9DF6: jmp     loc_1401C9F39
 * 00000001401C9DFB: test    edx, 2
 * 00000001401C9E01: jz      loc_1401C9F36
 * 00000001401C9E07: test    byte ptr gs:279h, 4
 * 00000001401C9E10: jnz     loc_1401C9F36
 * 00000001401C9E16: call    loc_1401C9F29
 * 00000001401C9E1B: add     rsp, 8
 * 00000001401C9E1F: call    loc_1401C9F32
 * 00000001401C9E24: add     rsp, 8
 * 00000001401C9E28: call    loc_1401C9E1B
 * 00000001401C9E2D: add     rsp, 8
 * 00000001401C9E31: call    loc_1401C9E24
 * 00000001401C9E36: add     rsp, 8
 * 00000001401C9E3A: call    loc_1401C9E2D
 * 00000001401C9E3F: add     rsp, 8
 * 00000001401C9E43: call    loc_1401C9E36
 * 00000001401C9E48: add     rsp, 8
 * 00000001401C9E4C: call    loc_1401C9E3F
 * 00000001401C9E51: add     rsp, 8
 * 00000001401C9E55: call    loc_1401C9E48
 * 00000001401C9E5A: add     rsp, 8
 * 00000001401C9E5E: call    loc_1401C9E51
 * 00000001401C9E63: add     rsp, 8
 * 00000001401C9E67: call    loc_1401C9E5A
 * 00000001401C9E6C: add     rsp, 8
 * 00000001401C9E70: call    loc_1401C9E63
 * 00000001401C9E75: add     rsp, 8
 * 00000001401C9E79: call    loc_1401C9E6C
 * 00000001401C9E7E: add     rsp, 8
 * 00000001401C9E82: call    loc_1401C9E75
 * 00000001401C9E87: add     rsp, 8
 * 00000001401C9E8B: call    loc_1401C9E7E
 * 00000001401C9E90: add     rsp, 8
 * 00000001401C9E94: call    loc_1401C9E87
 * 00000001401C9E99: add     rsp, 8
 * 00000001401C9E9D: call    loc_1401C9E90
 * 00000001401C9EA2: add     rsp, 8
 * 00000001401C9EA6: call    loc_1401C9E99
 * 00000001401C9EAB: add     rsp, 8
 * 00000001401C9EAF: call    loc_1401C9EA2
 * 00000001401C9EB4: add     rsp, 8
 * 00000001401C9EB8: call    loc_1401C9EAB
 * 00000001401C9EBD: add     rsp, 8
 * 00000001401C9EC1: call    loc_1401C9EB4
 * 00000001401C9EC6: add     rsp, 8
 * 00000001401C9ECA: call    loc_1401C9EBD
 * 00000001401C9ECF: add     rsp, 8
 * 00000001401C9ED3: call    loc_1401C9EC6
 * 00000001401C9ED8: add     rsp, 8
 * 00000001401C9EDC: call    loc_1401C9ECF
 * 00000001401C9EE1: add     rsp, 8
 * 00000001401C9EE5: call    loc_1401C9ED8
 * 00000001401C9EEA: add     rsp, 8
 * 00000001401C9EEE: call    loc_1401C9EE1
 * 00000001401C9EF3: add     rsp, 8
 * 00000001401C9EF7: call    loc_1401C9EEA
 * 00000001401C9EFC: add     rsp, 8
 * 00000001401C9F00: call    loc_1401C9EF3
 * 00000001401C9F05: add     rsp, 8
 * 00000001401C9F09: call    loc_1401C9EFC
 * 00000001401C9F0E: add     rsp, 8
 * 00000001401C9F12: call    loc_1401C9F05
 * 00000001401C9F17: add     rsp, 8
 * 00000001401C9F1B: call    loc_1401C9F0E
 * 00000001401C9F20: add     rsp, 8
 * 00000001401C9F24: call    loc_1401C9F17
 * 00000001401C9F29: add     rsp, 8
 * 00000001401C9F2D: call    loc_1401C9F20
 * 00000001401C9F32: add     rsp, 8
 * 00000001401C9F36: lfence
 * 00000001401C9F39: mov     byte ptr gs:853h, 0
 * 00000001401C9F42: test    byte ptr [r10+3], 3
 * 00000001401C9F47: mov     [rbp+0E8h+var_68], 0
 * 00000001401C9F50: jz      short loc_1401C9F57
 * 00000001401C9F52: call    KiSaveDebugRegisterState
 * 00000001401C9F57: cld
 * 00000001401C9F58: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C9F5C: ldmxcsr dword ptr gs:180h
 * 00000001401C9F65: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C9F69: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C9F6D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C9F71: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C9F75: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C9F79: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C9F7D: xor     esi, esi
 * 00000001401C9F7F: inc     dword ptr gs:5D00h
 * 00000001401C9F87: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401C9F8E: jz      short loc_1401C9F93
 * 00000001401C9F90: clac
 * 00000001401C9F93: mov     ecx, 2
 * 00000001401C9F98: cmp     cs:KiIrqlFlags, 0
 * 00000001401C9F9F: jz      short loc_1401C9FA8
 * 00000001401C9FA1: call    KzSetIrqlUnsafe
 * 00000001401C9FA6: jmp     short loc_1401C9FB0
 * 00000001401C9FA8: mov     rax, cr8
 * 00000001401C9FAC: mov     cr8, rcx
 * 00000001401C9FB0: mov     [rbp+0E8h+var_13F], al
 * 00000001401C9FB3: mov     rcx, rsi
 * 00000001401C9FB6: call    HalPerformEndOfInterrupt_0
 * 00000001401C9FBB: sti
 * 00000001401C9FBC: cmp     byte ptr gs:187h, 0
 * 00000001401C9FC5: jnz     short loc_1401C9FDE
 * 00000001401C9FC7: mov     al, [rbp+0E8h+var_13F]
 * 00000001401C9FCA: mov     rcx, gs:188h
 * 00000001401C9FD3: mov     [rcx+186h], al
 * 00000001401C9FD9: call    KiDispatchInterrupt
 * 00000001401C9FDE: cli
 * 00000001401C9FDF: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401C9FE3: cmp     cs:KiIrqlFlags, 0
 * 00000001401C9FEA: jz      short loc_1401C9FF3
 * 00000001401C9FEC: call    KzSetIrqlUnsafe
 * 00000001401C9FF1: jmp     short loc_1401C9FF7
 * 00000001401C9FF3: mov     cr8, rcx
 * 00000001401C9FF7: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401C9FFE: cli
 * 00000001401C9FFF: test    [rbp+0E8h+arg_0], 1
 * 00000001401CA006: jz      loc_1401CA145
 * 00000001401CA00C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CA013: jz      short loc_1401CA018
 * 00000001401CA015: stac
 * 00000001401CA018: mov     rcx, gs:188h
 * 00000001401CA021: test    byte ptr [rcx+0C2h], 3
 * 00000001401CA028: jz      short loc_1401CA045
 * 00000001401CA02A: mov     ecx, 1
 * 00000001401CA02F: mov     cr8, rcx
 * 00000001401CA033: sti
 * 00000001401CA034: call    KiInitiateUserApc
 * 00000001401CA039: cli
 * 00000001401CA03A: mov     ecx, 0
 * 00000001401CA03F: mov     cr8, rcx
 * 00000001401CA043: jmp     short loc_1401CA018
 * 00000001401CA045: test    byte ptr gs:27Eh, 2
 * 00000001401CA04E: jz      short loc_1401CA057
 * 00000001401CA050: xor     ecx, ecx
 * 00000001401CA052: call    KiUpdateStibpPairing
 * 00000001401CA057: mov     rcx, gs:188h
 * 00000001401CA060: test    dword ptr [rcx], 8000000h
 * 00000001401CA066: jz      short loc_1401CA06D
 * 00000001401CA068: call    KiRestoreSetContextState
 * 00000001401CA06D: mov     rcx, gs:188h
 * 00000001401CA076: test    dword ptr [rcx], 40010000h
 * 00000001401CA07C: jz      short loc_1401CA092
 * 00000001401CA07E: test    byte ptr [rcx+2], 1
 * 00000001401CA082: jz      short loc_1401CA092
 * 00000001401CA084: call    KiCopyCounters
 * 00000001401CA089: mov     rcx, gs:188h
 * 00000001401CA092: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CA096: cmp     [rbp+0E8h+var_68], 0
 * 00000001401CA09E: jz      short loc_1401CA0A5
 * 00000001401CA0A0: call    KiRestoreDebugRegisterState
 * 00000001401CA0A5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CA0A9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CA0AD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CA0B1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CA0B5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CA0B9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CA0BD: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CA0C1: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CA0C5: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CA0C9: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CA0CD: mov     byte ptr gs:853h, 0
 * 00000001401CA0D6: movzx   eax, byte ptr gs:27Dh
 * 00000001401CA0DF: cmp     gs:27Ah, al
 * 00000001401CA0E7: jz      short loc_1401CA0FA
 * 00000001401CA0E9: mov     gs:27Ah, al
 * 00000001401CA0F1: mov     ecx, 48h ; 'H'
 * 00000001401CA0F6: xor     edx, edx
 * 00000001401CA0F8: wrmsr
 * 00000001401CA0FA: btr     word ptr gs:278h, 2
 * 00000001401CA105: jnb     short loc_1401CA115
 * 00000001401CA107: mov     eax, 1
 * 00000001401CA10C: xor     edx, edx
 * 00000001401CA10E: mov     ecx, 49h ; 'I'
 * 00000001401CA113: wrmsr
 * 00000001401CA115: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CA119: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CA11D: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CA121: mov     rsp, rbp
 * 00000001401CA124: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CA12B: add     rsp, 0E8h
 * 00000001401CA132: test    cs:KiKvaShadow, 1
 * 00000001401CA139: jz      short loc_1401CA140
 * 00000001401CA13B: jmp     KiKernelExit
 * 00000001401CA140: swapgs
 * 00000001401CA143: iretq
 * 00000001401CA145: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401CA149: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401CA14D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401CA151: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401CA155: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401CA159: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401CA15D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401CA161: mov     r11, [rbp+0E8h+var_108]
 * 00000001401CA165: mov     r10, [rbp+0E8h+var_110]
 * 00000001401CA169: mov     r9, [rbp+0E8h+var_118]
 * 00000001401CA16D: mov     r8, [rbp+0E8h+var_120]
 * 00000001401CA171: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401CA175: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401CA179: mov     rax, [rbp+0E8h+var_138]
 * 00000001401CA17D: mov     rsp, rbp
 * 00000001401CA180: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401CA187: add     rsp, 0E8h
 * 00000001401CA18E: iretq
 */
