/*
 * XREFs of KiInterruptDispatchNoLock @ 0x1401BDF50
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BD910 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF50 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x1401BDF50
 * Reason: Hex-Rays returned no pseudocode for 0x1401BDF50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BDF50: mov     rdx, rsp
 * 00000001401BDF53: mov     rcx, gs:6458h
 * 00000001401BDF5C: lea     rax, [rcx-6000h]
 * 00000001401BDF63: cmp     rax, rsp
 * 00000001401BDF66: ja      short loc_1401BDF6D
 * 00000001401BDF68: cmp     rsp, rcx
 * 00000001401BDF6B: jb      short loc_1401BDF79
 * 00000001401BDF6D: cmp     cs:KiBugCheckActive, 0
 * 00000001401BDF74: jnz     short loc_1401BDF79
 * 00000001401BDF76: mov     rsp, rcx
 * 00000001401BDF79: sub     rsp, 20h
 * 00000001401BDF7D: mov     [rsp+20h+var_10], rdx
 * 00000001401BDF82: call    KiInterruptSubDispatchNoLock
 * 00000001401BDF87: mov     rsp, [rsp+20h+var_10]
 * 00000001401BDF8C: mov     rcx, rsi
 * 00000001401BDF8F: call    HalPerformEndOfInterrupt_0
 * 00000001401BDF94: mov     rcx, gs:20h
 * 00000001401BDF9D: cmp     byte ptr [rcx+20h], 1
 * 00000001401BDFA1: ja      short loc_1401BE01D
 * 00000001401BDFA3: rdtsc
 * 00000001401BDFA5: shl     rdx, 20h
 * 00000001401BDFA9: or      rax, rdx
 * 00000001401BDFAC: sub     rax, [rcx+5BC0h]
 * 00000001401BDFB3: add     [rcx+5C38h], rax
 * 00000001401BDFBA: add     [rcx+5BC0h], rax
 * 00000001401BDFC1: mov     r8, rax
 * 00000001401BDFC4: mov     rax, [rcx+8]
 * 00000001401BDFC8: test    byte ptr [rax+2], 72h
 * 00000001401BDFCC: jz      short loc_1401BDFE1
 * 00000001401BDFCE: xor     edx, edx
 * 00000001401BDFD0: call    KiBeginThreadAccountingPeriod
 * 00000001401BDFD5: mov     rcx, gs:20h
 * 00000001401BDFDE: inc     byte ptr [rcx+20h]
 * 00000001401BDFE1: mov     dl, [rcx+6]
 * 00000001401BDFE4: and     byte ptr [rcx+6], 0
 * 00000001401BDFE8: cmp     byte ptr [rcx+7], 0
 * 00000001401BDFEC: jnz     short loc_1401BE01D
 * 00000001401BDFEE: test    dl, dl
 * 00000001401BDFF0: jz      short loc_1401BE01D
 * 00000001401BDFF2: cmp     byte ptr [rbp-57h], 2
 * 00000001401BDFF6: jnb     short loc_1401BE003
 * 00000001401BDFF8: and     byte ptr [rcx+20h], 0
 * 00000001401BDFFC: call    KiDpcInterruptBypass
 * 00000001401BE001: jmp     short loc_1401BE020
 * 00000001401BE003: mov     ecx, 2
 * 00000001401BE008: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BE00F: nop     dword ptr [rax+rax+00h]
 * 00000001401BE014: mov     rcx, gs:20h
 * 00000001401BE01D: dec     byte ptr [rcx+20h]
 * 00000001401BE020: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BE024: cmp     cs:KiIrqlFlags, 0
 * 00000001401BE02B: jz      short loc_1401BE034
 * 00000001401BE02D: call    KzSetIrqlUnsafe
 * 00000001401BE032: jmp     short loc_1401BE038
 * 00000001401BE034: mov     cr8, rcx
 * 00000001401BE038: mov     rsi, [rbp+0D0h]
 * 00000001401BE03F: test    byte ptr [rbp+0F0h], 1
 * 00000001401BE046: jz      loc_1401BE2DC
 * 00000001401BE04C: mov     rcx, gs:188h
 * 00000001401BE055: test    byte ptr [rcx+0C2h], 3
 * 00000001401BE05C: jz      short loc_1401BE079
 * 00000001401BE05E: mov     ecx, 1
 * 00000001401BE063: mov     cr8, rcx
 * 00000001401BE067: sti
 * 00000001401BE068: call    KiInitiateUserApc
 * 00000001401BE06D: cli
 * 00000001401BE06E: mov     ecx, 0
 * 00000001401BE073: mov     cr8, rcx
 * 00000001401BE077: jmp     short loc_1401BE04C
 * 00000001401BE079: test    byte ptr gs:86Ch, 2
 * 00000001401BE082: jz      short loc_1401BE08B
 * 00000001401BE084: xor     ecx, ecx
 * 00000001401BE086: call    KiUpdateStibpPairing
 * 00000001401BE08B: mov     rcx, gs:188h
 * 00000001401BE094: test    dword ptr [rcx], 8000000h
 * 00000001401BE09A: jz      short loc_1401BE0A1
 * 00000001401BE09C: call    KiRestoreSetContextState
 * 00000001401BE0A1: mov     rcx, gs:188h
 * 00000001401BE0AA: test    dword ptr [rcx], 40010000h
 * 00000001401BE0B0: jz      short loc_1401BE0C6
 * 00000001401BE0B2: test    byte ptr [rcx+2], 1
 * 00000001401BE0B6: jz      short loc_1401BE0C6
 * 00000001401BE0B8: call    KiCopyCounters
 * 00000001401BE0BD: mov     rcx, gs:188h
 * 00000001401BE0C6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE0CA: cmp     word ptr [rbp+80h], 0
 * 00000001401BE0D2: jz      short loc_1401BE0D9
 * 00000001401BE0D4: call    KiRestoreDebugRegisterState
 * 00000001401BE0D9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE0DD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE0E1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE0E5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE0E9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE0ED: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE0F1: mov     r11, [rbp-20h]
 * 00000001401BE0F5: mov     r10, [rbp-28h]
 * 00000001401BE0F9: mov     r9, [rbp-30h]
 * 00000001401BE0FD: mov     r8, [rbp-38h]
 * 00000001401BE101: mov     byte ptr gs:856h, 0
 * 00000001401BE10A: movzx   eax, word ptr gs:86Ah
 * 00000001401BE113: cmp     gs:864h, ax
 * 00000001401BE11C: jz      short loc_1401BE130
 * 00000001401BE11E: mov     gs:864h, ax
 * 00000001401BE127: mov     ecx, 48h ; 'H'
 * 00000001401BE12C: xor     edx, edx
 * 00000001401BE12E: wrmsr
 * 00000001401BE130: btr     word ptr gs:860h, 2
 * 00000001401BE13B: jnb     short loc_1401BE14B
 * 00000001401BE13D: mov     eax, 1
 * 00000001401BE142: xor     edx, edx
 * 00000001401BE144: mov     ecx, 49h ; 'I'
 * 00000001401BE149: wrmsr
 * 00000001401BE14B: btr     word ptr gs:860h, 5
 * 00000001401BE156: jnb     loc_1401BE281
 * 00000001401BE15C: call    loc_1401BE26F
 * 00000001401BE161: add     rsp, 8
 * 00000001401BE165: call    loc_1401BE278
 * 00000001401BE16A: add     rsp, 8
 * 00000001401BE16E: call    loc_1401BE161
 * 00000001401BE173: add     rsp, 8
 * 00000001401BE177: call    loc_1401BE16A
 * 00000001401BE17C: add     rsp, 8
 * 00000001401BE180: call    loc_1401BE173
 * 00000001401BE185: add     rsp, 8
 * 00000001401BE189: call    loc_1401BE17C
 * 00000001401BE18E: add     rsp, 8
 * 00000001401BE192: call    loc_1401BE185
 * 00000001401BE197: add     rsp, 8
 * 00000001401BE19B: call    loc_1401BE18E
 * 00000001401BE1A0: add     rsp, 8
 * 00000001401BE1A4: call    loc_1401BE197
 * 00000001401BE1A9: add     rsp, 8
 * 00000001401BE1AD: call    loc_1401BE1A0
 * 00000001401BE1B2: add     rsp, 8
 * 00000001401BE1B6: call    loc_1401BE1A9
 * 00000001401BE1BB: add     rsp, 8
 * 00000001401BE1BF: call    loc_1401BE1B2
 * 00000001401BE1C4: add     rsp, 8
 * 00000001401BE1C8: call    loc_1401BE1BB
 * 00000001401BE1CD: add     rsp, 8
 * 00000001401BE1D1: call    loc_1401BE1C4
 * 00000001401BE1D6: add     rsp, 8
 * 00000001401BE1DA: call    loc_1401BE1CD
 * 00000001401BE1DF: add     rsp, 8
 * 00000001401BE1E3: call    loc_1401BE1D6
 * 00000001401BE1E8: add     rsp, 8
 * 00000001401BE1EC: call    loc_1401BE1DF
 * 00000001401BE1F1: add     rsp, 8
 * 00000001401BE1F5: call    loc_1401BE1E8
 * 00000001401BE1FA: add     rsp, 8
 * 00000001401BE1FE: call    loc_1401BE1F1
 * 00000001401BE203: add     rsp, 8
 * 00000001401BE207: call    loc_1401BE1FA
 * 00000001401BE20C: add     rsp, 8
 * 00000001401BE210: call    loc_1401BE203
 * 00000001401BE215: add     rsp, 8
 * 00000001401BE219: call    loc_1401BE20C
 * 00000001401BE21E: add     rsp, 8
 * 00000001401BE222: call    loc_1401BE215
 * 00000001401BE227: add     rsp, 8
 * 00000001401BE22B: call    loc_1401BE21E
 * 00000001401BE230: add     rsp, 8
 * 00000001401BE234: call    loc_1401BE227
 * 00000001401BE239: add     rsp, 8
 * 00000001401BE23D: call    loc_1401BE230
 * 00000001401BE242: add     rsp, 8
 * 00000001401BE246: call    loc_1401BE239
 * 00000001401BE24B: add     rsp, 8
 * 00000001401BE24F: call    loc_1401BE242
 * 00000001401BE254: add     rsp, 8
 * 00000001401BE258: call    loc_1401BE24B
 * 00000001401BE25D: add     rsp, 8
 * 00000001401BE261: call    loc_1401BE254
 * 00000001401BE266: add     rsp, 8
 * 00000001401BE26A: call    loc_1401BE25D
 * 00000001401BE26F: add     rsp, 8
 * 00000001401BE273: call    loc_1401BE266
 * 00000001401BE278: add     rsp, 8
 * 00000001401BE27C: mov     eax, 0DADAh
 * 00000001401BE281: test    word ptr gs:860h, 80h
 * 00000001401BE28C: jz      short loc_1401BE29A
 * 00000001401BE28E: xor     eax, eax
 * 00000001401BE290: xor     edx, edx
 * 00000001401BE292: mov     ecx, 1
 * 00000001401BE297: div     rcx
 * 00000001401BE29A: mov     rdx, [rbp-40h]
 * 00000001401BE29E: mov     rcx, [rbp-48h]
 * 00000001401BE2A2: mov     rax, [rbp-50h]
 * 00000001401BE2A6: mov     rsp, rbp
 * 00000001401BE2A9: mov     rbp, [rbp+0D8h]
 * 00000001401BE2B0: add     rsp, 0E8h
 * 00000001401BE2B7: test    cs:KiKvaShadow, 1
 * 00000001401BE2BE: jz      short loc_1401BE2C5
 * 00000001401BE2C0: jmp     KiKernelExit
 * 00000001401BE2C5: test    word ptr gs:860h, 100h
 * 00000001401BE2D0: jz      short loc_1401BE2D7
 * 00000001401BE2D2: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BE2D7: swapgs
 * 00000001401BE2DA: iretq
 * 00000001401BE2DC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE2E0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE2E4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE2E8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE2EC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE2F0: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE2F4: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE2F8: mov     r11, [rbp-20h]
 * 00000001401BE2FC: mov     r10, [rbp-28h]
 * 00000001401BE300: mov     r9, [rbp-30h]
 * 00000001401BE304: mov     r8, [rbp-38h]
 * 00000001401BE308: mov     rdx, [rbp-40h]
 * 00000001401BE30C: mov     rcx, [rbp-48h]
 * 00000001401BE310: mov     rax, [rbp-50h]
 * 00000001401BE314: mov     rsp, rbp
 * 00000001401BE317: mov     rbp, [rbp+0D8h]
 * 00000001401BE31E: add     rsp, 0E8h
 * 00000001401BE325: iretq
 */
