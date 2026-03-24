/*
 * XREFs of KiInterruptDispatch @ 0x1401BDB70
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x1401BD7C0 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDB70 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1401BDB70
 * Reason: Hex-Rays returned no pseudocode for 0x1401BDB70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BDB70: mov     rdx, rsp
 * 00000001401BDB73: mov     rcx, gs:6458h
 * 00000001401BDB7C: lea     rax, [rcx-6000h]
 * 00000001401BDB83: cmp     rax, rsp
 * 00000001401BDB86: ja      short loc_1401BDB8D
 * 00000001401BDB88: cmp     rsp, rcx
 * 00000001401BDB8B: jb      short loc_1401BDB99
 * 00000001401BDB8D: cmp     cs:KiBugCheckActive, 0
 * 00000001401BDB94: jnz     short loc_1401BDB99
 * 00000001401BDB96: mov     rsp, rcx
 * 00000001401BDB99: sub     rsp, 20h
 * 00000001401BDB9D: mov     [rsp+20h+var_10], rdx
 * 00000001401BDBA2: call    KiInterruptSubDispatch
 * 00000001401BDBA7: mov     rsp, [rsp+20h+var_10]
 * 00000001401BDBAC: mov     rcx, rsi
 * 00000001401BDBAF: call    HalPerformEndOfInterrupt_0
 * 00000001401BDBB4: mov     rcx, gs:20h
 * 00000001401BDBBD: cmp     byte ptr [rcx+20h], 1
 * 00000001401BDBC1: ja      short loc_1401BDC3D
 * 00000001401BDBC3: rdtsc
 * 00000001401BDBC5: shl     rdx, 20h
 * 00000001401BDBC9: or      rax, rdx
 * 00000001401BDBCC: sub     rax, [rcx+5BC0h]
 * 00000001401BDBD3: add     [rcx+5C38h], rax
 * 00000001401BDBDA: add     [rcx+5BC0h], rax
 * 00000001401BDBE1: mov     r8, rax
 * 00000001401BDBE4: mov     rax, [rcx+8]
 * 00000001401BDBE8: test    byte ptr [rax+2], 72h
 * 00000001401BDBEC: jz      short loc_1401BDC01
 * 00000001401BDBEE: xor     edx, edx
 * 00000001401BDBF0: call    KiBeginThreadAccountingPeriod
 * 00000001401BDBF5: mov     rcx, gs:20h
 * 00000001401BDBFE: inc     byte ptr [rcx+20h]
 * 00000001401BDC01: mov     dl, [rcx+6]
 * 00000001401BDC04: and     byte ptr [rcx+6], 0
 * 00000001401BDC08: cmp     byte ptr [rcx+7], 0
 * 00000001401BDC0C: jnz     short loc_1401BDC3D
 * 00000001401BDC0E: test    dl, dl
 * 00000001401BDC10: jz      short loc_1401BDC3D
 * 00000001401BDC12: cmp     byte ptr [rbp-57h], 2
 * 00000001401BDC16: jnb     short loc_1401BDC23
 * 00000001401BDC18: and     byte ptr [rcx+20h], 0
 * 00000001401BDC1C: call    KiDpcInterruptBypass
 * 00000001401BDC21: jmp     short loc_1401BDC40
 * 00000001401BDC23: mov     ecx, 2
 * 00000001401BDC28: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BDC2F: nop     dword ptr [rax+rax+00h]
 * 00000001401BDC34: mov     rcx, gs:20h
 * 00000001401BDC3D: dec     byte ptr [rcx+20h]
 * 00000001401BDC40: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401BDC44: cmp     cs:KiIrqlFlags, 0
 * 00000001401BDC4B: jz      short loc_1401BDC54
 * 00000001401BDC4D: call    KzSetIrqlUnsafe
 * 00000001401BDC52: jmp     short loc_1401BDC58
 * 00000001401BDC54: mov     cr8, rcx
 * 00000001401BDC58: mov     rsi, [rbp+0D0h]
 * 00000001401BDC5F: test    byte ptr [rbp+0F0h], 1
 * 00000001401BDC66: jz      loc_1401BDEFC
 * 00000001401BDC6C: mov     rcx, gs:188h
 * 00000001401BDC75: test    byte ptr [rcx+0C2h], 3
 * 00000001401BDC7C: jz      short loc_1401BDC99
 * 00000001401BDC7E: mov     ecx, 1
 * 00000001401BDC83: mov     cr8, rcx
 * 00000001401BDC87: sti
 * 00000001401BDC88: call    KiInitiateUserApc
 * 00000001401BDC8D: cli
 * 00000001401BDC8E: mov     ecx, 0
 * 00000001401BDC93: mov     cr8, rcx
 * 00000001401BDC97: jmp     short loc_1401BDC6C
 * 00000001401BDC99: test    byte ptr gs:86Ch, 2
 * 00000001401BDCA2: jz      short loc_1401BDCAB
 * 00000001401BDCA4: xor     ecx, ecx
 * 00000001401BDCA6: call    KiUpdateStibpPairing
 * 00000001401BDCAB: mov     rcx, gs:188h
 * 00000001401BDCB4: test    dword ptr [rcx], 8000000h
 * 00000001401BDCBA: jz      short loc_1401BDCC1
 * 00000001401BDCBC: call    KiRestoreSetContextState
 * 00000001401BDCC1: mov     rcx, gs:188h
 * 00000001401BDCCA: test    dword ptr [rcx], 40010000h
 * 00000001401BDCD0: jz      short loc_1401BDCE6
 * 00000001401BDCD2: test    byte ptr [rcx+2], 1
 * 00000001401BDCD6: jz      short loc_1401BDCE6
 * 00000001401BDCD8: call    KiCopyCounters
 * 00000001401BDCDD: mov     rcx, gs:188h
 * 00000001401BDCE6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BDCEA: cmp     word ptr [rbp+80h], 0
 * 00000001401BDCF2: jz      short loc_1401BDCF9
 * 00000001401BDCF4: call    KiRestoreDebugRegisterState
 * 00000001401BDCF9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BDCFD: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BDD01: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BDD05: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BDD09: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BDD0D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BDD11: mov     r11, [rbp-20h]
 * 00000001401BDD15: mov     r10, [rbp-28h]
 * 00000001401BDD19: mov     r9, [rbp-30h]
 * 00000001401BDD1D: mov     r8, [rbp-38h]
 * 00000001401BDD21: mov     byte ptr gs:856h, 0
 * 00000001401BDD2A: movzx   eax, word ptr gs:86Ah
 * 00000001401BDD33: cmp     gs:864h, ax
 * 00000001401BDD3C: jz      short loc_1401BDD50
 * 00000001401BDD3E: mov     gs:864h, ax
 * 00000001401BDD47: mov     ecx, 48h ; 'H'
 * 00000001401BDD4C: xor     edx, edx
 * 00000001401BDD4E: wrmsr
 * 00000001401BDD50: btr     word ptr gs:860h, 2
 * 00000001401BDD5B: jnb     short loc_1401BDD6B
 * 00000001401BDD5D: mov     eax, 1
 * 00000001401BDD62: xor     edx, edx
 * 00000001401BDD64: mov     ecx, 49h ; 'I'
 * 00000001401BDD69: wrmsr
 * 00000001401BDD6B: btr     word ptr gs:860h, 5
 * 00000001401BDD76: jnb     loc_1401BDEA1
 * 00000001401BDD7C: call    loc_1401BDE8F
 * 00000001401BDD81: add     rsp, 8
 * 00000001401BDD85: call    loc_1401BDE98
 * 00000001401BDD8A: add     rsp, 8
 * 00000001401BDD8E: call    loc_1401BDD81
 * 00000001401BDD93: add     rsp, 8
 * 00000001401BDD97: call    loc_1401BDD8A
 * 00000001401BDD9C: add     rsp, 8
 * 00000001401BDDA0: call    loc_1401BDD93
 * 00000001401BDDA5: add     rsp, 8
 * 00000001401BDDA9: call    loc_1401BDD9C
 * 00000001401BDDAE: add     rsp, 8
 * 00000001401BDDB2: call    loc_1401BDDA5
 * 00000001401BDDB7: add     rsp, 8
 * 00000001401BDDBB: call    loc_1401BDDAE
 * 00000001401BDDC0: add     rsp, 8
 * 00000001401BDDC4: call    loc_1401BDDB7
 * 00000001401BDDC9: add     rsp, 8
 * 00000001401BDDCD: call    loc_1401BDDC0
 * 00000001401BDDD2: add     rsp, 8
 * 00000001401BDDD6: call    loc_1401BDDC9
 * 00000001401BDDDB: add     rsp, 8
 * 00000001401BDDDF: call    loc_1401BDDD2
 * 00000001401BDDE4: add     rsp, 8
 * 00000001401BDDE8: call    loc_1401BDDDB
 * 00000001401BDDED: add     rsp, 8
 * 00000001401BDDF1: call    loc_1401BDDE4
 * 00000001401BDDF6: add     rsp, 8
 * 00000001401BDDFA: call    loc_1401BDDED
 * 00000001401BDDFF: add     rsp, 8
 * 00000001401BDE03: call    loc_1401BDDF6
 * 00000001401BDE08: add     rsp, 8
 * 00000001401BDE0C: call    loc_1401BDDFF
 * 00000001401BDE11: add     rsp, 8
 * 00000001401BDE15: call    loc_1401BDE08
 * 00000001401BDE1A: add     rsp, 8
 * 00000001401BDE1E: call    loc_1401BDE11
 * 00000001401BDE23: add     rsp, 8
 * 00000001401BDE27: call    loc_1401BDE1A
 * 00000001401BDE2C: add     rsp, 8
 * 00000001401BDE30: call    loc_1401BDE23
 * 00000001401BDE35: add     rsp, 8
 * 00000001401BDE39: call    loc_1401BDE2C
 * 00000001401BDE3E: add     rsp, 8
 * 00000001401BDE42: call    loc_1401BDE35
 * 00000001401BDE47: add     rsp, 8
 * 00000001401BDE4B: call    loc_1401BDE3E
 * 00000001401BDE50: add     rsp, 8
 * 00000001401BDE54: call    loc_1401BDE47
 * 00000001401BDE59: add     rsp, 8
 * 00000001401BDE5D: call    loc_1401BDE50
 * 00000001401BDE62: add     rsp, 8
 * 00000001401BDE66: call    loc_1401BDE59
 * 00000001401BDE6B: add     rsp, 8
 * 00000001401BDE6F: call    loc_1401BDE62
 * 00000001401BDE74: add     rsp, 8
 * 00000001401BDE78: call    loc_1401BDE6B
 * 00000001401BDE7D: add     rsp, 8
 * 00000001401BDE81: call    loc_1401BDE74
 * 00000001401BDE86: add     rsp, 8
 * 00000001401BDE8A: call    loc_1401BDE7D
 * 00000001401BDE8F: add     rsp, 8
 * 00000001401BDE93: call    loc_1401BDE86
 * 00000001401BDE98: add     rsp, 8
 * 00000001401BDE9C: mov     eax, 0DADAh
 * 00000001401BDEA1: test    word ptr gs:860h, 80h
 * 00000001401BDEAC: jz      short loc_1401BDEBA
 * 00000001401BDEAE: xor     eax, eax
 * 00000001401BDEB0: xor     edx, edx
 * 00000001401BDEB2: mov     ecx, 1
 * 00000001401BDEB7: div     rcx
 * 00000001401BDEBA: mov     rdx, [rbp-40h]
 * 00000001401BDEBE: mov     rcx, [rbp-48h]
 * 00000001401BDEC2: mov     rax, [rbp-50h]
 * 00000001401BDEC6: mov     rsp, rbp
 * 00000001401BDEC9: mov     rbp, [rbp+0D8h]
 * 00000001401BDED0: add     rsp, 0E8h
 * 00000001401BDED7: test    cs:KiKvaShadow, 1
 * 00000001401BDEDE: jz      short loc_1401BDEE5
 * 00000001401BDEE0: jmp     KiKernelExit
 * 00000001401BDEE5: test    word ptr gs:860h, 100h
 * 00000001401BDEF0: jz      short loc_1401BDEF7
 * 00000001401BDEF2: verw    [rsp-1C8h+arg_1E0]
 * 00000001401BDEF7: swapgs
 * 00000001401BDEFA: iretq
 * 00000001401BDEFC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401BDF00: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401BDF04: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401BDF08: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401BDF0C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401BDF10: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401BDF14: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401BDF18: mov     r11, [rbp-20h]
 * 00000001401BDF1C: mov     r10, [rbp-28h]
 * 00000001401BDF20: mov     r9, [rbp-30h]
 * 00000001401BDF24: mov     r8, [rbp-38h]
 * 00000001401BDF28: mov     rdx, [rbp-40h]
 * 00000001401BDF2C: mov     rcx, [rbp-48h]
 * 00000001401BDF30: mov     rax, [rbp-50h]
 * 00000001401BDF34: mov     rsp, rbp
 * 00000001401BDF37: mov     rbp, [rbp+0D8h]
 * 00000001401BDF3E: add     rsp, 0E8h
 * 00000001401BDF45: iretq
 */
