/*
 * XREFs of NtCallEnclave @ 0x1401C6100
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x1401C6100 (NtCallEnclave.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x1401C6100
 * Reason: Hex-Rays returned no pseudocode for 0x1401C6100
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C6100: sub     rsp, 28h
 * 00000001401C6104: xor     eax, eax
 * 00000001401C6106: xorps   xmm0, xmm0
 * 00000001401C6109: mov     [rbp-48h], eax
 * 00000001401C610C: mov     [rbp-40h], eax
 * 00000001401C610F: mov     [rbp-38h], eax
 * 00000001401C6112: mov     [rbp-30h], eax
 * 00000001401C6115: mov     [rbp-28h], eax
 * 00000001401C6118: mov     [rbp-20h], eax
 * 00000001401C611B: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C611F: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401C6123: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401C6127: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401C612B: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401C612F: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401C6133: call    PsCallEnclave
 * 00000001401C6138: mov     [rbp-50h], rax
 * 00000001401C613C: mov     rbx, [rbp+0C0h]
 * 00000001401C6143: mov     rdi, [rbp+0C8h]
 * 00000001401C614A: mov     rsi, [rbp+0D0h]
 * 00000001401C6151: cli
 * 00000001401C6152: test    byte ptr [rbp+0F0h], 1
 * 00000001401C6159: jz      loc_1401C6400
 * 00000001401C615F: mov     rcx, gs:188h
 * 00000001401C6168: test    byte ptr [rcx+0C2h], 3
 * 00000001401C616F: jz      short loc_1401C618C
 * 00000001401C6171: mov     ecx, 1
 * 00000001401C6176: mov     cr8, rcx
 * 00000001401C617A: sti
 * 00000001401C617B: call    KiInitiateUserApc
 * 00000001401C6180: cli
 * 00000001401C6181: mov     ecx, 0
 * 00000001401C6186: mov     cr8, rcx
 * 00000001401C618A: jmp     short loc_1401C615F
 * 00000001401C618C: test    byte ptr gs:86Ch, 2
 * 00000001401C6195: jz      short loc_1401C619E
 * 00000001401C6197: xor     ecx, ecx
 * 00000001401C6199: call    KiUpdateStibpPairing
 * 00000001401C619E: mov     rcx, gs:188h
 * 00000001401C61A7: test    dword ptr [rcx], 8000000h
 * 00000001401C61AD: jz      short loc_1401C61B4
 * 00000001401C61AF: call    KiRestoreSetContextState
 * 00000001401C61B4: mov     rcx, gs:188h
 * 00000001401C61BD: test    dword ptr [rcx], 40010000h
 * 00000001401C61C3: jz      short loc_1401C61EA
 * 00000001401C61C5: test    byte ptr [rcx+2], 1
 * 00000001401C61C9: jz      short loc_1401C61D9
 * 00000001401C61CB: call    KiCopyCounters
 * 00000001401C61D0: mov     rcx, gs:188h
 * 00000001401C61D9: test    byte ptr [rcx+3], 40h
 * 00000001401C61DD: jz      short loc_1401C61EA
 * 00000001401C61DF: lea     rsp, [rbp-80h]
 * 00000001401C61E3: mov     cl, 1
 * 00000001401C61E5: call    KiUmsExit
 * 00000001401C61EA: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C61EE: cmp     word ptr [rbp+80h], 0
 * 00000001401C61F6: jz      short loc_1401C61FD
 * 00000001401C61F8: call    KiRestoreDebugRegisterState
 * 00000001401C61FD: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C6201: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C6205: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C6209: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C620D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C6211: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C6215: mov     r11, [rbp-20h]
 * 00000001401C6219: mov     r10, [rbp-28h]
 * 00000001401C621D: mov     r9, [rbp-30h]
 * 00000001401C6221: mov     r8, [rbp-38h]
 * 00000001401C6225: mov     byte ptr gs:856h, 0
 * 00000001401C622E: movzx   eax, word ptr gs:86Ah
 * 00000001401C6237: cmp     gs:864h, ax
 * 00000001401C6240: jz      short loc_1401C6254
 * 00000001401C6242: mov     gs:864h, ax
 * 00000001401C624B: mov     ecx, 48h ; 'H'
 * 00000001401C6250: xor     edx, edx
 * 00000001401C6252: wrmsr
 * 00000001401C6254: btr     word ptr gs:860h, 2
 * 00000001401C625F: jnb     short loc_1401C626F
 * 00000001401C6261: mov     eax, 1
 * 00000001401C6266: xor     edx, edx
 * 00000001401C6268: mov     ecx, 49h ; 'I'
 * 00000001401C626D: wrmsr
 * 00000001401C626F: btr     word ptr gs:860h, 5
 * 00000001401C627A: jnb     loc_1401C63A5
 * 00000001401C6280: call    loc_1401C6393
 * 00000001401C6285: add     rsp, 8
 * 00000001401C6289: call    loc_1401C639C
 * 00000001401C628E: add     rsp, 8
 * 00000001401C6292: call    loc_1401C6285
 * 00000001401C6297: add     rsp, 8
 * 00000001401C629B: call    loc_1401C628E
 * 00000001401C62A0: add     rsp, 8
 * 00000001401C62A4: call    loc_1401C6297
 * 00000001401C62A9: add     rsp, 8
 * 00000001401C62AD: call    loc_1401C62A0
 * 00000001401C62B2: add     rsp, 8
 * 00000001401C62B6: call    loc_1401C62A9
 * 00000001401C62BB: add     rsp, 8
 * 00000001401C62BF: call    loc_1401C62B2
 * 00000001401C62C4: add     rsp, 8
 * 00000001401C62C8: call    loc_1401C62BB
 * 00000001401C62CD: add     rsp, 8
 * 00000001401C62D1: call    loc_1401C62C4
 * 00000001401C62D6: add     rsp, 8
 * 00000001401C62DA: call    loc_1401C62CD
 * 00000001401C62DF: add     rsp, 8
 * 00000001401C62E3: call    loc_1401C62D6
 * 00000001401C62E8: add     rsp, 8
 * 00000001401C62EC: call    loc_1401C62DF
 * 00000001401C62F1: add     rsp, 8
 * 00000001401C62F5: call    loc_1401C62E8
 * 00000001401C62FA: add     rsp, 8
 * 00000001401C62FE: call    loc_1401C62F1
 * 00000001401C6303: add     rsp, 8
 * 00000001401C6307: call    loc_1401C62FA
 * 00000001401C630C: add     rsp, 8
 * 00000001401C6310: call    loc_1401C6303
 * 00000001401C6315: add     rsp, 8
 * 00000001401C6319: call    loc_1401C630C
 * 00000001401C631E: add     rsp, 8
 * 00000001401C6322: call    loc_1401C6315
 * 00000001401C6327: add     rsp, 8
 * 00000001401C632B: call    loc_1401C631E
 * 00000001401C6330: add     rsp, 8
 * 00000001401C6334: call    loc_1401C6327
 * 00000001401C6339: add     rsp, 8
 * 00000001401C633D: call    loc_1401C6330
 * 00000001401C6342: add     rsp, 8
 * 00000001401C6346: call    loc_1401C6339
 * 00000001401C634B: add     rsp, 8
 * 00000001401C634F: call    loc_1401C6342
 * 00000001401C6354: add     rsp, 8
 * 00000001401C6358: call    loc_1401C634B
 * 00000001401C635D: add     rsp, 8
 * 00000001401C6361: call    loc_1401C6354
 * 00000001401C6366: add     rsp, 8
 * 00000001401C636A: call    loc_1401C635D
 * 00000001401C636F: add     rsp, 8
 * 00000001401C6373: call    loc_1401C6366
 * 00000001401C6378: add     rsp, 8
 * 00000001401C637C: call    loc_1401C636F
 * 00000001401C6381: add     rsp, 8
 * 00000001401C6385: call    loc_1401C6378
 * 00000001401C638A: add     rsp, 8
 * 00000001401C638E: call    loc_1401C6381
 * 00000001401C6393: add     rsp, 8
 * 00000001401C6397: call    loc_1401C638A
 * 00000001401C639C: add     rsp, 8
 * 00000001401C63A0: mov     eax, 0DADAh
 * 00000001401C63A5: test    word ptr gs:860h, 80h
 * 00000001401C63B0: jz      short loc_1401C63BE
 * 00000001401C63B2: xor     eax, eax
 * 00000001401C63B4: xor     edx, edx
 * 00000001401C63B6: mov     ecx, 1
 * 00000001401C63BB: div     rcx
 * 00000001401C63BE: mov     rdx, [rbp-40h]
 * 00000001401C63C2: mov     rcx, [rbp-48h]
 * 00000001401C63C6: mov     rax, [rbp-50h]
 * 00000001401C63CA: mov     rsp, rbp
 * 00000001401C63CD: mov     rbp, [rbp+0D8h]
 * 00000001401C63D4: add     rsp, 0E8h
 * 00000001401C63DB: test    cs:KiKvaShadow, 1
 * 00000001401C63E2: jz      short loc_1401C63E9
 * 00000001401C63E4: jmp     KiKernelExit
 * 00000001401C63E9: test    word ptr gs:860h, 100h
 * 00000001401C63F4: jz      short loc_1401C63FB
 * 00000001401C63F6: verw    [rsp-188h+arg_1A0]
 * 00000001401C63FB: swapgs
 * 00000001401C63FE: iretq
 * 00000001401C6400: ldmxcsr dword ptr [rbp-54h]
 * 00000001401C6404: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401C6408: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401C640C: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401C6410: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401C6414: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401C6418: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401C641C: mov     r11, [rbp-20h]
 * 00000001401C6420: mov     r10, [rbp-28h]
 * 00000001401C6424: mov     r9, [rbp-30h]
 * 00000001401C6428: mov     r8, [rbp-38h]
 * 00000001401C642C: mov     rdx, [rbp-40h]
 * 00000001401C6430: mov     rcx, [rbp-48h]
 * 00000001401C6434: mov     rax, [rbp-50h]
 * 00000001401C6438: mov     rsp, rbp
 * 00000001401C643B: mov     rbp, [rbp+0D8h]
 * 00000001401C6442: add     rsp, 0E8h
 * 00000001401C6449: iretq
 */
