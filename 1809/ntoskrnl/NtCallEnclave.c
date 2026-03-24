/*
 * XREFs of NtCallEnclave @ 0x1401C5FA0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x1401C5FA0 (NtCallEnclave.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x14088D580 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x1401C5FA0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C5FA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C5FA0: sub     rsp, 28h
 * 00000001401C5FA4: xor     eax, eax
 * 00000001401C5FA6: xorps   xmm0, xmm0
 * 00000001401C5FA9: mov     [rbp-48h], eax
 * 00000001401C5FAC: mov     [rbp-40h], eax
 * 00000001401C5FAF: mov     [rbp-38h], eax
 * 00000001401C5FB2: mov     [rbp-30h], eax
 * 00000001401C5FB5: mov     [rbp-28h], eax
 * 00000001401C5FB8: mov     [rbp-20h], eax
 * 00000001401C5FBB: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C5FBF: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401C5FC3: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401C5FC7: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401C5FCB: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401C5FCF: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401C5FD3: call    PsCallEnclave
 * 00000001401C5FD8: mov     [rbp-50h], rax
 * 00000001401C5FDC: mov     rbx, [rbp+0C0h]
 * 00000001401C5FE3: mov     rdi, [rbp+0C8h]
 * 00000001401C5FEA: mov     rsi, [rbp+0D0h]
 * 00000001401C5FF1: cli
 * 00000001401C5FF2: test    byte ptr [rbp+0F0h], 1
 * 00000001401C5FF9: jz      loc_1401C62A0
 * 00000001401C5FFF: mov     rcx, gs:188h
 * 00000001401C6008: test    byte ptr [rcx+0C2h], 3
 * 00000001401C600F: jz      short loc_1401C602C
 * 00000001401C6011: mov     ecx, 1
 * 00000001401C6016: mov     cr8, rcx
 * 00000001401C601A: sti
 * 00000001401C601B: call    KiInitiateUserApc
 * 00000001401C6020: cli
 * 00000001401C6021: mov     ecx, 0
 * 00000001401C6026: mov     cr8, rcx
 * 00000001401C602A: jmp     short loc_1401C5FFF
 * 00000001401C602C: test    byte ptr gs:86Ch, 2
 * 00000001401C6035: jz      short loc_1401C603E
 * 00000001401C6037: xor     ecx, ecx
 * 00000001401C6039: call    KiUpdateStibpPairing
 * 00000001401C603E: mov     rcx, gs:188h
 * 00000001401C6047: test    dword ptr [rcx], 8000000h
 * 00000001401C604D: jz      short loc_1401C6054
 * 00000001401C604F: call    KiRestoreSetContextState
 * 00000001401C6054: mov     rcx, gs:188h
 * 00000001401C605D: test    dword ptr [rcx], 40010000h
 * 00000001401C6063: jz      short loc_1401C608A
 * 00000001401C6065: test    byte ptr [rcx+2], 1
 * 00000001401C6069: jz      short loc_1401C6079
 * 00000001401C606B: call    KiCopyCounters
 * 00000001401C6070: mov     rcx, gs:188h
 * 00000001401C6079: test    byte ptr [rcx+3], 40h
 * 00000001401C607D: jz      short loc_1401C608A
 * 00000001401C607F: lea     rsp, [rbp-80h]
 * 00000001401C6083: mov     cl, 1
 * 00000001401C6085: call    KiUmsExit
 * 00000001401C608A: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C608E: cmp     word ptr [rbp+80h], 0
 * 00000001401C6096: jz      short loc_1401C609D
 * 00000001401C6098: call    KiRestoreDebugRegisterState
 * 00000001401C609D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C60A1: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C60A5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C60A9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C60AD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C60B1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C60B5: mov     r11, [rbp-20h]
 * 00000001401C60B9: mov     r10, [rbp-28h]
 * 00000001401C60BD: mov     r9, [rbp-30h]
 * 00000001401C60C1: mov     r8, [rbp-38h]
 * 00000001401C60C5: mov     byte ptr gs:856h, 0
 * 00000001401C60CE: movzx   eax, word ptr gs:86Ah
 * 00000001401C60D7: cmp     gs:864h, ax
 * 00000001401C60E0: jz      short loc_1401C60F4
 * 00000001401C60E2: mov     gs:864h, ax
 * 00000001401C60EB: mov     ecx, 48h ; 'H'
 * 00000001401C60F0: xor     edx, edx
 * 00000001401C60F2: wrmsr
 * 00000001401C60F4: btr     word ptr gs:860h, 2
 * 00000001401C60FF: jnb     short loc_1401C610F
 * 00000001401C6101: mov     eax, 1
 * 00000001401C6106: xor     edx, edx
 * 00000001401C6108: mov     ecx, 49h ; 'I'
 * 00000001401C610D: wrmsr
 * 00000001401C610F: btr     word ptr gs:860h, 5
 * 00000001401C611A: jnb     loc_1401C6245
 * 00000001401C6120: call    loc_1401C6233
 * 00000001401C6125: add     rsp, 8
 * 00000001401C6129: call    loc_1401C623C
 * 00000001401C612E: add     rsp, 8
 * 00000001401C6132: call    loc_1401C6125
 * 00000001401C6137: add     rsp, 8
 * 00000001401C613B: call    loc_1401C612E
 * 00000001401C6140: add     rsp, 8
 * 00000001401C6144: call    loc_1401C6137
 * 00000001401C6149: add     rsp, 8
 * 00000001401C614D: call    loc_1401C6140
 * 00000001401C6152: add     rsp, 8
 * 00000001401C6156: call    loc_1401C6149
 * 00000001401C615B: add     rsp, 8
 * 00000001401C615F: call    loc_1401C6152
 * 00000001401C6164: add     rsp, 8
 * 00000001401C6168: call    loc_1401C615B
 * 00000001401C616D: add     rsp, 8
 * 00000001401C6171: call    loc_1401C6164
 * 00000001401C6176: add     rsp, 8
 * 00000001401C617A: call    loc_1401C616D
 * 00000001401C617F: add     rsp, 8
 * 00000001401C6183: call    loc_1401C6176
 * 00000001401C6188: add     rsp, 8
 * 00000001401C618C: call    loc_1401C617F
 * 00000001401C6191: add     rsp, 8
 * 00000001401C6195: call    loc_1401C6188
 * 00000001401C619A: add     rsp, 8
 * 00000001401C619E: call    loc_1401C6191
 * 00000001401C61A3: add     rsp, 8
 * 00000001401C61A7: call    loc_1401C619A
 * 00000001401C61AC: add     rsp, 8
 * 00000001401C61B0: call    loc_1401C61A3
 * 00000001401C61B5: add     rsp, 8
 * 00000001401C61B9: call    loc_1401C61AC
 * 00000001401C61BE: add     rsp, 8
 * 00000001401C61C2: call    loc_1401C61B5
 * 00000001401C61C7: add     rsp, 8
 * 00000001401C61CB: call    loc_1401C61BE
 * 00000001401C61D0: add     rsp, 8
 * 00000001401C61D4: call    loc_1401C61C7
 * 00000001401C61D9: add     rsp, 8
 * 00000001401C61DD: call    loc_1401C61D0
 * 00000001401C61E2: add     rsp, 8
 * 00000001401C61E6: call    loc_1401C61D9
 * 00000001401C61EB: add     rsp, 8
 * 00000001401C61EF: call    loc_1401C61E2
 * 00000001401C61F4: add     rsp, 8
 * 00000001401C61F8: call    loc_1401C61EB
 * 00000001401C61FD: add     rsp, 8
 * 00000001401C6201: call    loc_1401C61F4
 * 00000001401C6206: add     rsp, 8
 * 00000001401C620A: call    loc_1401C61FD
 * 00000001401C620F: add     rsp, 8
 * 00000001401C6213: call    loc_1401C6206
 * 00000001401C6218: add     rsp, 8
 * 00000001401C621C: call    loc_1401C620F
 * 00000001401C6221: add     rsp, 8
 * 00000001401C6225: call    loc_1401C6218
 * 00000001401C622A: add     rsp, 8
 * 00000001401C622E: call    loc_1401C6221
 * 00000001401C6233: add     rsp, 8
 * 00000001401C6237: call    loc_1401C622A
 * 00000001401C623C: add     rsp, 8
 * 00000001401C6240: mov     eax, 0DADAh
 * 00000001401C6245: test    word ptr gs:860h, 80h
 * 00000001401C6250: jz      short loc_1401C625E
 * 00000001401C6252: xor     eax, eax
 * 00000001401C6254: xor     edx, edx
 * 00000001401C6256: mov     ecx, 1
 * 00000001401C625B: div     rcx
 * 00000001401C625E: mov     rdx, [rbp-40h]
 * 00000001401C6262: mov     rcx, [rbp-48h]
 * 00000001401C6266: mov     rax, [rbp-50h]
 * 00000001401C626A: mov     rsp, rbp
 * 00000001401C626D: mov     rbp, [rbp+0D8h]
 * 00000001401C6274: add     rsp, 0E8h
 * 00000001401C627B: test    cs:KiKvaShadow, 1
 * 00000001401C6282: jz      short loc_1401C6289
 * 00000001401C6284: jmp     KiKernelExit
 * 00000001401C6289: test    word ptr gs:860h, 100h
 * 00000001401C6294: jz      short loc_1401C629B
 * 00000001401C6296: verw    [rsp-188h+arg_1A0]
 * 00000001401C629B: swapgs
 * 00000001401C629E: iretq
 * 00000001401C62A0: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C62A4: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C62A8: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C62AC: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C62B0: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C62B4: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C62B8: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C62BC: mov     r11, [rbp-20h]
 * 00000001401C62C0: mov     r10, [rbp-28h]
 * 00000001401C62C4: mov     r9, [rbp-30h]
 * 00000001401C62C8: mov     r8, [rbp-38h]
 * 00000001401C62CC: mov     rdx, [rbp-40h]
 * 00000001401C62D0: mov     rcx, [rbp-48h]
 * 00000001401C62D4: mov     rax, [rbp-50h]
 * 00000001401C62D8: mov     rsp, rbp
 * 00000001401C62DB: mov     rbp, [rbp+0D8h]
 * 00000001401C62E2: add     rsp, 0E8h
 * 00000001401C62E9: iretq
 */
