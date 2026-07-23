/*
 * XREFs of KiInterruptDispatch @ 0x1401BDCD0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1401BD920 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDCD0 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1401BDCD0
 * Reason: Hex-Rays returned no pseudocode for 0x1401BDCD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BDCD0: mov     rdx, rsp
 * 00000001401BDCD3: mov     rcx, gs:6458h
 * 00000001401BDCDC: lea     rax, [rcx-6000h]
 * 00000001401BDCE3: cmp     rax, rsp
 * 00000001401BDCE6: ja      short loc_1401BDCED
 * 00000001401BDCE8: cmp     rsp, rcx
 * 00000001401BDCEB: jb      short loc_1401BDCF9
 * 00000001401BDCED: cmp     cs:KiBugCheckActive, 0
 * 00000001401BDCF4: jnz     short loc_1401BDCF9
 * 00000001401BDCF6: mov     rsp, rcx
 * 00000001401BDCF9: sub     rsp, 20h
 * 00000001401BDCFD: mov     [rsp+20h+var_10], rdx
 * 00000001401BDD02: call    KiInterruptSubDispatch
 * 00000001401BDD07: mov     rsp, [rsp+20h+var_10]
 * 00000001401BDD0C: mov     rcx, rsi
 * 00000001401BDD0F: call    HalPerformEndOfInterrupt_0
 * 00000001401BDD14: mov     rcx, gs:20h
 * 00000001401BDD1D: cmp     byte ptr [rcx+20h], 1
 * 00000001401BDD21: ja      short loc_1401BDD9D
 * 00000001401BDD23: rdtsc
 * 00000001401BDD25: shl     rdx, 20h
 * 00000001401BDD29: or      rax, rdx
 * 00000001401BDD2C: sub     rax, [rcx+5BC0h]
 * 00000001401BDD33: add     [rcx+5C38h], rax
 * 00000001401BDD3A: add     [rcx+5BC0h], rax
 * 00000001401BDD41: mov     r8, rax
 * 00000001401BDD44: mov     rax, [rcx+8]
 * 00000001401BDD48: test    byte ptr [rax+2], 72h
 * 00000001401BDD4C: jz      short loc_1401BDD61
 * 00000001401BDD4E: xor     edx, edx
 * 00000001401BDD50: call    KiBeginThreadAccountingPeriod
 * 00000001401BDD55: mov     rcx, gs:20h
 * 00000001401BDD5E: inc     byte ptr [rcx+20h]
 * 00000001401BDD61: mov     dl, [rcx+6]
 * 00000001401BDD64: and     byte ptr [rcx+6], 0
 * 00000001401BDD68: cmp     byte ptr [rcx+7], 0
 * 00000001401BDD6C: jnz     short loc_1401BDD9D
 * 00000001401BDD6E: test    dl, dl
 * 00000001401BDD70: jz      short loc_1401BDD9D
 * 00000001401BDD72: cmp     byte ptr [rbp-57h], 2
 * 00000001401BDD76: jnb     short loc_1401BDD83
 * 00000001401BDD78: and     byte ptr [rcx+20h], 0
 * 00000001401BDD7C: call    KiDpcInterruptBypass
 * 00000001401BDD81: jmp     short loc_1401BDDA0
 * 00000001401BDD83: mov     ecx, 2
 * 00000001401BDD88: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BDD8F: nop     dword ptr [rax+rax+00h]
 * 00000001401BDD94: mov     rcx, gs:20h
 * 00000001401BDD9D: dec     byte ptr [rcx+20h]
 * 00000001401BDDA0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BDDA4: cmp     cs:KiIrqlFlags, 0
 * 00000001401BDDAB: jz      short loc_1401BDDB4
 * 00000001401BDDAD: call    KzSetIrqlUnsafe
 * 00000001401BDDB2: jmp     short loc_1401BDDB8
 * 00000001401BDDB4: mov     cr8, rcx
 * 00000001401BDDB8: mov     rsi, [rbp+0D0h]
 * 00000001401BDDBF: test    byte ptr [rbp+0F0h], 1
 * 00000001401BDDC6: jz      loc_1401BE05C
 * 00000001401BDDCC: mov     rcx, gs:188h
 * 00000001401BDDD5: test    byte ptr [rcx+0C2h], 3
 * 00000001401BDDDC: jz      short loc_1401BDDF9
 * 00000001401BDDDE: mov     ecx, 1
 * 00000001401BDDE3: mov     cr8, rcx
 * 00000001401BDDE7: sti
 * 00000001401BDDE8: call    KiInitiateUserApc
 * 00000001401BDDED: cli
 * 00000001401BDDEE: mov     ecx, 0
 * 00000001401BDDF3: mov     cr8, rcx
 * 00000001401BDDF7: jmp     short loc_1401BDDCC
 * 00000001401BDDF9: test    byte ptr gs:86Ch, 2
 * 00000001401BDE02: jz      short loc_1401BDE0B
 * 00000001401BDE04: xor     ecx, ecx
 * 00000001401BDE06: call    KiUpdateStibpPairing
 * 00000001401BDE0B: mov     rcx, gs:188h
 * 00000001401BDE14: test    dword ptr [rcx], 8000000h
 * 00000001401BDE1A: jz      short loc_1401BDE21
 * 00000001401BDE1C: call    KiRestoreSetContextState
 * 00000001401BDE21: mov     rcx, gs:188h
 * 00000001401BDE2A: test    dword ptr [rcx], 40010000h
 * 00000001401BDE30: jz      short loc_1401BDE46
 * 00000001401BDE32: test    byte ptr [rcx+2], 1
 * 00000001401BDE36: jz      short loc_1401BDE46
 * 00000001401BDE38: call    KiCopyCounters
 * 00000001401BDE3D: mov     rcx, gs:188h
 * 00000001401BDE46: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BDE4A: cmp     word ptr [rbp+80h], 0
 * 00000001401BDE52: jz      short loc_1401BDE59
 * 00000001401BDE54: call    KiRestoreDebugRegisterState
 * 00000001401BDE59: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BDE5D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BDE61: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BDE65: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BDE69: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BDE6D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BDE71: mov     r11, [rbp-20h]
 * 00000001401BDE75: mov     r10, [rbp-28h]
 * 00000001401BDE79: mov     r9, [rbp-30h]
 * 00000001401BDE7D: mov     r8, [rbp-38h]
 * 00000001401BDE81: mov     byte ptr gs:856h, 0
 * 00000001401BDE8A: movzx   eax, word ptr gs:86Ah
 * 00000001401BDE93: cmp     gs:864h, ax
 * 00000001401BDE9C: jz      short loc_1401BDEB0
 * 00000001401BDE9E: mov     gs:864h, ax
 * 00000001401BDEA7: mov     ecx, 48h ; 'H'
 * 00000001401BDEAC: xor     edx, edx
 * 00000001401BDEAE: wrmsr
 * 00000001401BDEB0: btr     word ptr gs:860h, 2
 * 00000001401BDEBB: jnb     short loc_1401BDECB
 * 00000001401BDEBD: mov     eax, 1
 * 00000001401BDEC2: xor     edx, edx
 * 00000001401BDEC4: mov     ecx, 49h ; 'I'
 * 00000001401BDEC9: wrmsr
 * 00000001401BDECB: btr     word ptr gs:860h, 5
 * 00000001401BDED6: jnb     loc_1401BE001
 * 00000001401BDEDC: call    loc_1401BDFEF
 * 00000001401BDEE1: add     rsp, 8
 * 00000001401BDEE5: call    loc_1401BDFF8
 * 00000001401BDEEA: add     rsp, 8
 * 00000001401BDEEE: call    loc_1401BDEE1
 * 00000001401BDEF3: add     rsp, 8
 * 00000001401BDEF7: call    loc_1401BDEEA
 * 00000001401BDEFC: add     rsp, 8
 * 00000001401BDF00: call    loc_1401BDEF3
 * 00000001401BDF05: add     rsp, 8
 * 00000001401BDF09: call    loc_1401BDEFC
 * 00000001401BDF0E: add     rsp, 8
 * 00000001401BDF12: call    loc_1401BDF05
 * 00000001401BDF17: add     rsp, 8
 * 00000001401BDF1B: call    loc_1401BDF0E
 * 00000001401BDF20: add     rsp, 8
 * 00000001401BDF24: call    loc_1401BDF17
 * 00000001401BDF29: add     rsp, 8
 * 00000001401BDF2D: call    loc_1401BDF20
 * 00000001401BDF32: add     rsp, 8
 * 00000001401BDF36: call    loc_1401BDF29
 * 00000001401BDF3B: add     rsp, 8
 * 00000001401BDF3F: call    loc_1401BDF32
 * 00000001401BDF44: add     rsp, 8
 * 00000001401BDF48: call    loc_1401BDF3B
 * 00000001401BDF4D: add     rsp, 8
 * 00000001401BDF51: call    loc_1401BDF44
 * 00000001401BDF56: add     rsp, 8
 * 00000001401BDF5A: call    loc_1401BDF4D
 * 00000001401BDF5F: add     rsp, 8
 * 00000001401BDF63: call    loc_1401BDF56
 * 00000001401BDF68: add     rsp, 8
 * 00000001401BDF6C: call    loc_1401BDF5F
 * 00000001401BDF71: add     rsp, 8
 * 00000001401BDF75: call    loc_1401BDF68
 * 00000001401BDF7A: add     rsp, 8
 * 00000001401BDF7E: call    loc_1401BDF71
 * 00000001401BDF83: add     rsp, 8
 * 00000001401BDF87: call    loc_1401BDF7A
 * 00000001401BDF8C: add     rsp, 8
 * 00000001401BDF90: call    loc_1401BDF83
 * 00000001401BDF95: add     rsp, 8
 * 00000001401BDF99: call    loc_1401BDF8C
 * 00000001401BDF9E: add     rsp, 8
 * 00000001401BDFA2: call    loc_1401BDF95
 * 00000001401BDFA7: add     rsp, 8
 * 00000001401BDFAB: call    loc_1401BDF9E
 * 00000001401BDFB0: add     rsp, 8
 * 00000001401BDFB4: call    loc_1401BDFA7
 * 00000001401BDFB9: add     rsp, 8
 * 00000001401BDFBD: call    loc_1401BDFB0
 * 00000001401BDFC2: add     rsp, 8
 * 00000001401BDFC6: call    loc_1401BDFB9
 * 00000001401BDFCB: add     rsp, 8
 * 00000001401BDFCF: call    loc_1401BDFC2
 * 00000001401BDFD4: add     rsp, 8
 * 00000001401BDFD8: call    loc_1401BDFCB
 * 00000001401BDFDD: add     rsp, 8
 * 00000001401BDFE1: call    loc_1401BDFD4
 * 00000001401BDFE6: add     rsp, 8
 * 00000001401BDFEA: call    loc_1401BDFDD
 * 00000001401BDFEF: add     rsp, 8
 * 00000001401BDFF3: call    loc_1401BDFE6
 * 00000001401BDFF8: add     rsp, 8
 * 00000001401BDFFC: mov     eax, 0DADAh
 * 00000001401BE001: test    word ptr gs:860h, 80h
 * 00000001401BE00C: jz      short loc_1401BE01A
 * 00000001401BE00E: xor     eax, eax
 * 00000001401BE010: xor     edx, edx
 * 00000001401BE012: mov     ecx, 1
 * 00000001401BE017: div     rcx
 * 00000001401BE01A: mov     rdx, [rbp-40h]
 * 00000001401BE01E: mov     rcx, [rbp-48h]
 * 00000001401BE022: mov     rax, [rbp-50h]
 * 00000001401BE026: mov     rsp, rbp
 * 00000001401BE029: mov     rbp, [rbp+0D8h]
 * 00000001401BE030: add     rsp, 0E8h
 * 00000001401BE037: test    cs:KiKvaShadow, 1
 * 00000001401BE03E: jz      short loc_1401BE045
 * 00000001401BE040: jmp     KiKernelExit
 * 00000001401BE045: test    word ptr gs:860h, 100h
 * 00000001401BE050: jz      short loc_1401BE057
 * 00000001401BE052: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BE057: swapgs
 * 00000001401BE05A: iretq
 * 00000001401BE05C: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BE060: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BE064: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BE068: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BE06C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BE070: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BE074: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BE078: mov     r11, [rbp-20h]
 * 00000001401BE07C: mov     r10, [rbp-28h]
 * 00000001401BE080: mov     r9, [rbp-30h]
 * 00000001401BE084: mov     r8, [rbp-38h]
 * 00000001401BE088: mov     rdx, [rbp-40h]
 * 00000001401BE08C: mov     rcx, [rbp-48h]
 * 00000001401BE090: mov     rax, [rbp-50h]
 * 00000001401BE094: mov     rsp, rbp
 * 00000001401BE097: mov     rbp, [rbp+0D8h]
 * 00000001401BE09E: add     rsp, 0E8h
 * 00000001401BE0A5: iretq
 */
