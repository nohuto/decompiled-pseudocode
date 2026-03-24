/*
 * XREFs of KiSystemCall32 @ 0x1401D49C0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1401D49C0 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1401D49C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401D49C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D49C0: swapgs
 * 00000001401D49C3: mov     gs:10h, rsp
 * 00000001401D49CC: mov     rsp, gs:1A8h
 * 00000001401D49D5: push    2Bh ; '+'
 * 00000001401D49D7: push    qword ptr gs:10h
 * 00000001401D49DF: push    r11
 * 00000001401D49E1: push    23h ; '#'
 * 00000001401D49E3: push    rcx
 * 00000001401D49E4: swapgs
 * 00000001401D49E7: lfence
 * 00000001401D49EA: sub     rsp, 8
 * 00000001401D49EE: push    rbp
 * 00000001401D49EF: sub     rsp, 158h
 * 00000001401D49F6: lea     rbp, [rsp+190h+var_110]
 * 00000001401D49FE: mov     byte ptr [rbp-55h], 1
 * 00000001401D4A02: mov     [rbp-50h], rax
 * 00000001401D4A06: mov     [rbp-48h], rcx
 * 00000001401D4A0A: mov     [rbp-40h], rdx
 * 00000001401D4A0E: mov     [rbp-38h], r8
 * 00000001401D4A12: mov     [rbp-30h], r9
 * 00000001401D4A16: mov     [rbp-28h], r10
 * 00000001401D4A1A: mov     [rbp-20h], r11
 * 00000001401D4A1E: test    byte ptr [rbp+0F0h], 1
 * 00000001401D4A25: jnz     short loc_1401D4A54
 * 00000001401D4A27: lfence
 * 00000001401D4A2A: test    byte ptr gs:278h, 1
 * 00000001401D4A33: jnz     short loc_1401D4A3D
 * 00000001401D4A35: lfence
 * 00000001401D4A38: jmp     loc_1401D4C99
 * 00000001401D4A3D: movzx   eax, byte ptr gs:27Ah
 * 00000001401D4A46: mov     ecx, 48h ; 'H'
 * 00000001401D4A4B: xor     edx, edx
 * 00000001401D4A4D: wrmsr
 * 00000001401D4A4F: jmp     loc_1401D4C99
 * 00000001401D4A54: test    cs:KiKvaShadow, 1
 * 00000001401D4A5B: jnz     short loc_1401D4A60
 * 00000001401D4A5D: swapgs
 * 00000001401D4A60: lfence
 * 00000001401D4A63: mov     r10, gs:188h
 * 00000001401D4A6C: mov     rcx, gs:188h
 * 00000001401D4A75: mov     rcx, [rcx+220h]
 * 00000001401D4A7C: mov     rcx, [rcx+860h]
 * 00000001401D4A83: mov     gs:270h, rcx
 * 00000001401D4A8C: mov     cl, gs:850h
 * 00000001401D4A94: mov     gs:851h, cl
 * 00000001401D4A9C: mov     cl, gs:278h
 * 00000001401D4AA4: mov     gs:852h, cl
 * 00000001401D4AAC: movzx   eax, byte ptr gs:27Bh
 * 00000001401D4AB5: cmp     gs:27Ah, al
 * 00000001401D4ABD: jz      short loc_1401D4AD0
 * 00000001401D4ABF: mov     gs:27Ah, al
 * 00000001401D4AC7: mov     ecx, 48h ; 'H'
 * 00000001401D4ACC: xor     edx, edx
 * 00000001401D4ACE: wrmsr
 * 00000001401D4AD0: movzx   edx, byte ptr gs:278h
 * 00000001401D4AD9: test    edx, 8
 * 00000001401D4ADF: jz      short loc_1401D4AF4
 * 00000001401D4AE1: mov     eax, 1
 * 00000001401D4AE6: xor     edx, edx
 * 00000001401D4AE8: mov     ecx, 49h ; 'I'
 * 00000001401D4AED: wrmsr
 * 00000001401D4AEF: jmp     loc_1401D4C32
 * 00000001401D4AF4: test    edx, 2
 * 00000001401D4AFA: jz      loc_1401D4C2F
 * 00000001401D4B00: test    byte ptr gs:279h, 4
 * 00000001401D4B09: jnz     loc_1401D4C2F
 * 00000001401D4B0F: call    loc_1401D4C22
 * 00000001401D4B14: add     rsp, 8
 * 00000001401D4B18: call    loc_1401D4C2B
 * 00000001401D4B1D: add     rsp, 8
 * 00000001401D4B21: call    loc_1401D4B14
 * 00000001401D4B26: add     rsp, 8
 * 00000001401D4B2A: call    loc_1401D4B1D
 * 00000001401D4B2F: add     rsp, 8
 * 00000001401D4B33: call    loc_1401D4B26
 * 00000001401D4B38: add     rsp, 8
 * 00000001401D4B3C: call    loc_1401D4B2F
 * 00000001401D4B41: add     rsp, 8
 * 00000001401D4B45: call    loc_1401D4B38
 * 00000001401D4B4A: add     rsp, 8
 * 00000001401D4B4E: call    loc_1401D4B41
 * 00000001401D4B53: add     rsp, 8
 * 00000001401D4B57: call    loc_1401D4B4A
 * 00000001401D4B5C: add     rsp, 8
 * 00000001401D4B60: call    loc_1401D4B53
 * 00000001401D4B65: add     rsp, 8
 * 00000001401D4B69: call    loc_1401D4B5C
 * 00000001401D4B6E: add     rsp, 8
 * 00000001401D4B72: call    loc_1401D4B65
 * 00000001401D4B77: add     rsp, 8
 * 00000001401D4B7B: call    loc_1401D4B6E
 * 00000001401D4B80: add     rsp, 8
 * 00000001401D4B84: call    loc_1401D4B77
 * 00000001401D4B89: add     rsp, 8
 * 00000001401D4B8D: call    loc_1401D4B80
 * 00000001401D4B92: add     rsp, 8
 * 00000001401D4B96: call    loc_1401D4B89
 * 00000001401D4B9B: add     rsp, 8
 * 00000001401D4B9F: call    loc_1401D4B92
 * 00000001401D4BA4: add     rsp, 8
 * 00000001401D4BA8: call    loc_1401D4B9B
 * 00000001401D4BAD: add     rsp, 8
 * 00000001401D4BB1: call    loc_1401D4BA4
 * 00000001401D4BB6: add     rsp, 8
 * 00000001401D4BBA: call    loc_1401D4BAD
 * 00000001401D4BBF: add     rsp, 8
 * 00000001401D4BC3: call    loc_1401D4BB6
 * 00000001401D4BC8: add     rsp, 8
 * 00000001401D4BCC: call    loc_1401D4BBF
 * 00000001401D4BD1: add     rsp, 8
 * 00000001401D4BD5: call    loc_1401D4BC8
 * 00000001401D4BDA: add     rsp, 8
 * 00000001401D4BDE: call    loc_1401D4BD1
 * 00000001401D4BE3: add     rsp, 8
 * 00000001401D4BE7: call    loc_1401D4BDA
 * 00000001401D4BEC: add     rsp, 8
 * 00000001401D4BF0: call    loc_1401D4BE3
 * 00000001401D4BF5: add     rsp, 8
 * 00000001401D4BF9: call    loc_1401D4BEC
 * 00000001401D4BFE: add     rsp, 8
 * 00000001401D4C02: call    loc_1401D4BF5
 * 00000001401D4C07: add     rsp, 8
 * 00000001401D4C0B: call    loc_1401D4BFE
 * 00000001401D4C10: add     rsp, 8
 * 00000001401D4C14: call    loc_1401D4C07
 * 00000001401D4C19: add     rsp, 8
 * 00000001401D4C1D: call    loc_1401D4C10
 * 00000001401D4C22: add     rsp, 8
 * 00000001401D4C26: call    loc_1401D4C19
 * 00000001401D4C2B: add     rsp, 8
 * 00000001401D4C2F: lfence
 * 00000001401D4C32: mov     byte ptr gs:853h, 0
 * 00000001401D4C3B: test    byte ptr [r10+3], 80h
 * 00000001401D4C40: jz      short loc_1401D4C84
 * 00000001401D4C42: mov     ecx, 0C0000102h
 * 00000001401D4C47: rdmsr
 * 00000001401D4C49: shl     rdx, 20h
 * 00000001401D4C4D: or      rax, rdx
 * 00000001401D4C50: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D4C57: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D4C5F: cmp     [r10+0F0h], rax
 * 00000001401D4C66: jz      short loc_1401D4C84
 * 00000001401D4C68: mov     rdx, [r10+1F0h]
 * 00000001401D4C6F: bts     dword ptr [r10+74h], 8
 * 00000001401D4C75: dec     word ptr [r10+1E6h]
 * 00000001401D4C7D: mov     [rdx+80h], rax
 * 00000001401D4C84: test    byte ptr [r10+3], 3
 * 00000001401D4C89: mov     word ptr [rbp+80h], 0
 * 00000001401D4C92: jz      short loc_1401D4C99
 * 00000001401D4C94: call    KiSaveDebugRegisterState
 * 00000001401D4C99: cld
 * 00000001401D4C9A: stmxcsr dword ptr [rbp-54h]
 * 00000001401D4C9E: ldmxcsr dword ptr gs:180h
 * 00000001401D4CA7: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D4CAB: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401D4CAF: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401D4CB3: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401D4CB7: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401D4CBB: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401D4CBF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D4CC6: jz      short loc_1401D4CD4
 * 00000001401D4CC8: test    byte ptr [rbp+0F0h], 1
 * 00000001401D4CCF: jz      short loc_1401D4CD4
 * 00000001401D4CD1: stac
 * 00000001401D4CD4: sub     qword ptr [rbp+0E8h], 2
 * 00000001401D4CDC: and     dword ptr [rbp+0ECh], 0
 * 00000001401D4CE3: sti
 * 00000001401D4CE4: mov     ecx, 0C000001Dh
 * 00000001401D4CE9: xor     edx, edx
 * 00000001401D4CEB: mov     r8, [rbp+0E8h]
 * 00000001401D4CF2: call    KiExceptionDispatch
 * 00000001401D4CF7: nop
 * 00000001401D4CF8: retn
 */
