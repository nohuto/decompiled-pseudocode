/*
 * XREFs of KiSystemCall32Shadow @ 0x140351E00
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 *     KiSystemCall32Shadow @ 0x140351E00 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140351E00
 * Reason: Hex-Rays returned no pseudocode for 0x140351E00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140351E00: swapgs
 * 0000000140351E03: mov     gs:7010h, rsp
 * 0000000140351E0C: mov     rsp, gs:7000h
 * 0000000140351E15: mov     cr3, rsp
 * 0000000140351E18: mov     rsp, gs:7008h
 * 0000000140351E21: push    2Bh ; '+'
 * 0000000140351E23: push    qword ptr gs:7010h
 * 0000000140351E2B: push    r11
 * 0000000140351E2D: push    23h ; '#'
 * 0000000140351E2F: push    rcx
 * 0000000140351E30: sub     rsp, 8
 * 0000000140351E34: push    rbp
 * 0000000140351E35: sub     rsp, 158h
 * 0000000140351E3C: lea     rbp, [rsp+190h+var_110]
 * 0000000140351E44: mov     byte ptr [rbp-55h], 1
 * 0000000140351E48: mov     [rbp-50h], rax
 * 0000000140351E4C: mov     [rbp-48h], rcx
 * 0000000140351E50: mov     [rbp-40h], rdx
 * 0000000140351E54: mov     [rbp-38h], r8
 * 0000000140351E58: mov     [rbp-30h], r9
 * 0000000140351E5C: mov     [rbp-28h], r10
 * 0000000140351E60: mov     [rbp-20h], r11
 * 0000000140351E64: test    byte ptr [rbp+0F0h], 1
 * 0000000140351E6B: jnz     short loc_140351E9A
 * 0000000140351E6D: lfence
 * 0000000140351E70: test    byte ptr gs:278h, 1
 * 0000000140351E79: jnz     short loc_140351E83
 * 0000000140351E7B: lfence
 * 0000000140351E7E: jmp     loc_1403520DF
 * 0000000140351E83: movzx   eax, byte ptr gs:27Ah
 * 0000000140351E8C: mov     ecx, 48h ; 'H'
 * 0000000140351E91: xor     edx, edx
 * 0000000140351E93: wrmsr
 * 0000000140351E95: jmp     loc_1403520DF
 * 0000000140351E9A: test    cs:KiKvaShadow, 1
 * 0000000140351EA1: jnz     short loc_140351EA6
 * 0000000140351EA3: swapgs
 * 0000000140351EA6: lfence
 * 0000000140351EA9: mov     r10, gs:188h
 * 0000000140351EB2: mov     rcx, gs:188h
 * 0000000140351EBB: mov     rcx, [rcx+220h]
 * 0000000140351EC2: mov     rcx, [rcx+860h]
 * 0000000140351EC9: mov     gs:270h, rcx
 * 0000000140351ED2: mov     cl, gs:850h
 * 0000000140351EDA: mov     gs:851h, cl
 * 0000000140351EE2: mov     cl, gs:278h
 * 0000000140351EEA: mov     gs:852h, cl
 * 0000000140351EF2: movzx   eax, byte ptr gs:27Bh
 * 0000000140351EFB: cmp     gs:27Ah, al
 * 0000000140351F03: jz      short loc_140351F16
 * 0000000140351F05: mov     gs:27Ah, al
 * 0000000140351F0D: mov     ecx, 48h ; 'H'
 * 0000000140351F12: xor     edx, edx
 * 0000000140351F14: wrmsr
 * 0000000140351F16: movzx   edx, byte ptr gs:278h
 * 0000000140351F1F: test    edx, 8
 * 0000000140351F25: jz      short loc_140351F3A
 * 0000000140351F27: mov     eax, 1
 * 0000000140351F2C: xor     edx, edx
 * 0000000140351F2E: mov     ecx, 49h ; 'I'
 * 0000000140351F33: wrmsr
 * 0000000140351F35: jmp     loc_140352078
 * 0000000140351F3A: test    edx, 2
 * 0000000140351F40: jz      loc_140352075
 * 0000000140351F46: test    byte ptr gs:279h, 4
 * 0000000140351F4F: jnz     loc_140352075
 * 0000000140351F55: call    loc_140352068
 * 0000000140351F5A: add     rsp, 8
 * 0000000140351F5E: call    loc_140352071
 * 0000000140351F63: add     rsp, 8
 * 0000000140351F67: call    loc_140351F5A
 * 0000000140351F6C: add     rsp, 8
 * 0000000140351F70: call    loc_140351F63
 * 0000000140351F75: add     rsp, 8
 * 0000000140351F79: call    loc_140351F6C
 * 0000000140351F7E: add     rsp, 8
 * 0000000140351F82: call    loc_140351F75
 * 0000000140351F87: add     rsp, 8
 * 0000000140351F8B: call    loc_140351F7E
 * 0000000140351F90: add     rsp, 8
 * 0000000140351F94: call    loc_140351F87
 * 0000000140351F99: add     rsp, 8
 * 0000000140351F9D: call    loc_140351F90
 * 0000000140351FA2: add     rsp, 8
 * 0000000140351FA6: call    loc_140351F99
 * 0000000140351FAB: add     rsp, 8
 * 0000000140351FAF: call    loc_140351FA2
 * 0000000140351FB4: add     rsp, 8
 * 0000000140351FB8: call    loc_140351FAB
 * 0000000140351FBD: add     rsp, 8
 * 0000000140351FC1: call    loc_140351FB4
 * 0000000140351FC6: add     rsp, 8
 * 0000000140351FCA: call    loc_140351FBD
 * 0000000140351FCF: add     rsp, 8
 * 0000000140351FD3: call    loc_140351FC6
 * 0000000140351FD8: add     rsp, 8
 * 0000000140351FDC: call    loc_140351FCF
 * 0000000140351FE1: add     rsp, 8
 * 0000000140351FE5: call    loc_140351FD8
 * 0000000140351FEA: add     rsp, 8
 * 0000000140351FEE: call    loc_140351FE1
 * 0000000140351FF3: add     rsp, 8
 * 0000000140351FF7: call    loc_140351FEA
 * 0000000140351FFC: add     rsp, 8
 * 0000000140352000: call    loc_140351FF3
 * 0000000140352005: add     rsp, 8
 * 0000000140352009: call    loc_140351FFC
 * 000000014035200E: add     rsp, 8
 * 0000000140352012: call    loc_140352005
 * 0000000140352017: add     rsp, 8
 * 000000014035201B: call    loc_14035200E
 * 0000000140352020: add     rsp, 8
 * 0000000140352024: call    loc_140352017
 * 0000000140352029: add     rsp, 8
 * 000000014035202D: call    loc_140352020
 * 0000000140352032: add     rsp, 8
 * 0000000140352036: call    loc_140352029
 * 000000014035203B: add     rsp, 8
 * 000000014035203F: call    loc_140352032
 * 0000000140352044: add     rsp, 8
 * 0000000140352048: call    loc_14035203B
 * 000000014035204D: add     rsp, 8
 * 0000000140352051: call    loc_140352044
 * 0000000140352056: add     rsp, 8
 * 000000014035205A: call    loc_14035204D
 * 000000014035205F: add     rsp, 8
 * 0000000140352063: call    loc_140352056
 * 0000000140352068: add     rsp, 8
 * 000000014035206C: call    loc_14035205F
 * 0000000140352071: add     rsp, 8
 * 0000000140352075: lfence
 * 0000000140352078: mov     byte ptr gs:853h, 0
 * 0000000140352081: test    byte ptr [r10+3], 80h
 * 0000000140352086: jz      short loc_1403520CA
 * 0000000140352088: mov     ecx, 0C0000102h
 * 000000014035208D: rdmsr
 * 000000014035208F: shl     rdx, 20h
 * 0000000140352093: or      rax, rdx
 * 0000000140352096: cmp     rax, cs:MmUserProbeAddress
 * 000000014035209D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001403520A5: cmp     [r10+0F0h], rax
 * 00000001403520AC: jz      short loc_1403520CA
 * 00000001403520AE: mov     rdx, [r10+1F0h]
 * 00000001403520B5: bts     dword ptr [r10+74h], 8
 * 00000001403520BB: dec     word ptr [r10+1E6h]
 * 00000001403520C3: mov     [rdx+80h], rax
 * 00000001403520CA: test    byte ptr [r10+3], 3
 * 00000001403520CF: mov     word ptr [rbp+80h], 0
 * 00000001403520D8: jz      short loc_1403520DF
 * 00000001403520DA: call    KiSaveDebugRegisterState
 * 00000001403520DF: cld
 * 00000001403520E0: stmxcsr dword ptr [rbp-54h]
 * 00000001403520E4: ldmxcsr dword ptr gs:180h
 * 00000001403520ED: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001403520F1: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001403520F5: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001403520F9: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001403520FD: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140352101: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140352105: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014035210C: jz      short loc_14035211A
 * 000000014035210E: test    byte ptr [rbp+0F0h], 1
 * 0000000140352115: jz      short loc_14035211A
 * 0000000140352117: stac
 * 000000014035211A: sub     qword ptr [rbp+0E8h], 2
 * 0000000140352122: and     dword ptr [rbp+0ECh], 0
 * 0000000140352129: sti
 * 000000014035212A: mov     ecx, 0C000001Dh
 * 000000014035212F: xor     edx, edx
 * 0000000140352131: mov     r8, [rbp+0E8h]
 * 0000000140352138: call    KiExceptionDispatch
 * 000000014035213D: nop
 * 000000014035213E: retn
 */
