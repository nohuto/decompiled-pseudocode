/*
 * XREFs of KxIsrLinkage @ 0x1401BF890
 * Callers:
 *     KxIsrLinkageShadow @ 0x140330AC0 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D20B0 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x1401009F0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF170 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C3920 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DC50 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x140312630 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1401BF890
 * Reason: Hex-Rays returned no pseudocode for 0x1401BF890
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BF890: push    rbp
 * 00000001401BF891: push    rsi
 * 00000001401BF892: sub     rsp, 150h
 * 00000001401BF899: lea     rbp, [rsp+80h]
 * 00000001401BF8A1: mov     [rbp+0D8h+var_12D], 0
 * 00000001401BF8A5: mov     [rbp+0D8h+var_128], rax
 * 00000001401BF8A9: mov     [rbp+0D8h+var_120], rcx
 * 00000001401BF8AD: mov     [rbp+0D8h+var_118], rdx
 * 00000001401BF8B1: mov     [rbp+0D8h+var_110], r8
 * 00000001401BF8B5: mov     [rbp+0D8h+var_108], r9
 * 00000001401BF8B9: mov     [rbp+0D8h+var_100], r10
 * 00000001401BF8BD: mov     [rbp+0D8h+var_F8], r11
 * 00000001401BF8C1: test    [rbp+0D8h+arg_8], 1
 * 00000001401BF8C8: jnz     short loc_1401BF8F9
 * 00000001401BF8CA: lfence
 * 00000001401BF8CD: test    word ptr gs:860h, 1
 * 00000001401BF8D8: jnz     short loc_1401BF8E2
 * 00000001401BF8DA: lfence
 * 00000001401BF8DD: jmp     loc_1401BFB02
 * 00000001401BF8E2: movzx   eax, word ptr gs:864h
 * 00000001401BF8EB: mov     ecx, 48h ; 'H'
 * 00000001401BF8F0: xor     edx, edx
 * 00000001401BF8F2: wrmsr
 * 00000001401BF8F4: jmp     loc_1401BFB02
 * 00000001401BF8F9: test    cs:KiKvaShadow, 1
 * 00000001401BF900: jnz     short loc_1401BF905
 * 00000001401BF902: swapgs
 * 00000001401BF905: lfence
 * 00000001401BF908: mov     r10, gs:188h
 * 00000001401BF911: mov     rcx, gs:188h
 * 00000001401BF91A: mov     rcx, [rcx+220h]
 * 00000001401BF921: mov     rcx, [rcx+830h]
 * 00000001401BF928: mov     gs:858h, rcx
 * 00000001401BF931: mov     cx, gs:850h
 * 00000001401BF93A: mov     gs:852h, cx
 * 00000001401BF943: mov     cx, gs:860h
 * 00000001401BF94C: mov     gs:854h, cx
 * 00000001401BF955: movzx   eax, word ptr gs:866h
 * 00000001401BF95E: cmp     gs:864h, ax
 * 00000001401BF967: jz      short loc_1401BF97B
 * 00000001401BF969: mov     gs:864h, ax
 * 00000001401BF972: mov     ecx, 48h ; 'H'
 * 00000001401BF977: xor     edx, edx
 * 00000001401BF979: wrmsr
 * 00000001401BF97B: movzx   edx, word ptr gs:860h
 * 00000001401BF984: test    edx, 8
 * 00000001401BF98A: jz      short loc_1401BF9A3
 * 00000001401BF98C: mov     eax, 1
 * 00000001401BF991: xor     edx, edx
 * 00000001401BF993: mov     ecx, 49h ; 'I'
 * 00000001401BF998: wrmsr
 * 00000001401BF99A: movzx   edx, word ptr gs:860h
 * 00000001401BF9A3: test    edx, 2
 * 00000001401BF9A9: jz      loc_1401BFAD4
 * 00000001401BF9AF: call    loc_1401BFAC2
 * 00000001401BF9B4: add     rsp, 8
 * 00000001401BF9B8: call    loc_1401BFACB
 * 00000001401BF9BD: add     rsp, 8
 * 00000001401BF9C1: call    loc_1401BF9B4
 * 00000001401BF9C6: add     rsp, 8
 * 00000001401BF9CA: call    loc_1401BF9BD
 * 00000001401BF9CF: add     rsp, 8
 * 00000001401BF9D3: call    loc_1401BF9C6
 * 00000001401BF9D8: add     rsp, 8
 * 00000001401BF9DC: call    loc_1401BF9CF
 * 00000001401BF9E1: add     rsp, 8
 * 00000001401BF9E5: call    loc_1401BF9D8
 * 00000001401BF9EA: add     rsp, 8
 * 00000001401BF9EE: call    loc_1401BF9E1
 * 00000001401BF9F3: add     rsp, 8
 * 00000001401BF9F7: call    loc_1401BF9EA
 * 00000001401BF9FC: add     rsp, 8
 * 00000001401BFA00: call    loc_1401BF9F3
 * 00000001401BFA05: add     rsp, 8
 * 00000001401BFA09: call    loc_1401BF9FC
 * 00000001401BFA0E: add     rsp, 8
 * 00000001401BFA12: call    loc_1401BFA05
 * 00000001401BFA17: add     rsp, 8
 * 00000001401BFA1B: call    loc_1401BFA0E
 * 00000001401BFA20: add     rsp, 8
 * 00000001401BFA24: call    loc_1401BFA17
 * 00000001401BFA29: add     rsp, 8
 * 00000001401BFA2D: call    loc_1401BFA20
 * 00000001401BFA32: add     rsp, 8
 * 00000001401BFA36: call    loc_1401BFA29
 * 00000001401BFA3B: add     rsp, 8
 * 00000001401BFA3F: call    loc_1401BFA32
 * 00000001401BFA44: add     rsp, 8
 * 00000001401BFA48: call    loc_1401BFA3B
 * 00000001401BFA4D: add     rsp, 8
 * 00000001401BFA51: call    loc_1401BFA44
 * 00000001401BFA56: add     rsp, 8
 * 00000001401BFA5A: call    loc_1401BFA4D
 * 00000001401BFA5F: add     rsp, 8
 * 00000001401BFA63: call    loc_1401BFA56
 * 00000001401BFA68: add     rsp, 8
 * 00000001401BFA6C: call    loc_1401BFA5F
 * 00000001401BFA71: add     rsp, 8
 * 00000001401BFA75: call    loc_1401BFA68
 * 00000001401BFA7A: add     rsp, 8
 * 00000001401BFA7E: call    loc_1401BFA71
 * 00000001401BFA83: add     rsp, 8
 * 00000001401BFA87: call    loc_1401BFA7A
 * 00000001401BFA8C: add     rsp, 8
 * 00000001401BFA90: call    loc_1401BFA83
 * 00000001401BFA95: add     rsp, 8
 * 00000001401BFA99: call    loc_1401BFA8C
 * 00000001401BFA9E: add     rsp, 8
 * 00000001401BFAA2: call    loc_1401BFA95
 * 00000001401BFAA7: add     rsp, 8
 * 00000001401BFAAB: call    loc_1401BFA9E
 * 00000001401BFAB0: add     rsp, 8
 * 00000001401BFAB4: call    loc_1401BFAA7
 * 00000001401BFAB9: add     rsp, 8
 * 00000001401BFABD: call    loc_1401BFAB0
 * 00000001401BFAC2: add     rsp, 8
 * 00000001401BFAC6: call    loc_1401BFAB9
 * 00000001401BFACB: add     rsp, 8
 * 00000001401BFACF: mov     eax, 0DADAh
 * 00000001401BFAD4: test    edx, 200h
 * 00000001401BFADA: jz      short loc_1401BFAE1
 * 00000001401BFADC: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401BFAE1: lfence
 * 00000001401BFAE4: mov     byte ptr gs:856h, 0
 * 00000001401BFAED: test    byte ptr [r10+3], 3
 * 00000001401BFAF2: mov     [rbp+0D8h+var_58], 0
 * 00000001401BFAFB: jz      short loc_1401BFB02
 * 00000001401BFAFD: call    KiSaveDebugRegisterState
 * 00000001401BFB02: cld
 * 00000001401BFB03: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401BFB07: ldmxcsr dword ptr gs:180h
 * 00000001401BFB10: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401BFB14: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401BFB18: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401BFB1C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401BFB20: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401BFB24: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401BFB28: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401BFB31: jz      short loc_1401BFB38
 * 00000001401BFB33: call    KeWakeProcessor
 * 00000001401BFB38: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401BFB3F: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401BFB46: jnb     short loc_1401BFB61
 * 00000001401BFB48: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401BFB4F: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401BFB56: jb      short loc_1401BFB61
 * 00000001401BFB58: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401BFB5C: call    KiCheckForSListAddress
 * 00000001401BFB61: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001401BFB68: mov     rsi, gs:20h
 * 00000001401BFB71: mov     rsi, [rsi+rax*8+2E80h]
 * 00000001401BFB79: inc     dword ptr gs:5D00h
 * 00000001401BFB81: test    rsi, rsi
 * 00000001401BFB84: jz      short loc_1401BFB8F
 * 00000001401BFB86: mov     rax, [rsi+50h]
 * 00000001401BFB8A: jmp     _guard_dispatch_icall
 * 00000001401BFB8F: mov     ecx, eax
 * 00000001401BFB91: shr     ecx, 4
 * 00000001401BFB94: cmp     cs:KiIrqlFlags, 0
 * 00000001401BFB9B: jz      short loc_1401BFBA4
 * 00000001401BFB9D: call    KzSetIrqlUnsafe
 * 00000001401BFBA2: jmp     short loc_1401BFBAC
 * 00000001401BFBA4: mov     rax, cr8
 * 00000001401BFBA8: mov     cr8, rcx
 * 00000001401BFBAC: mov     [rbp+0D8h+var_12F], al
 * 00000001401BFBAF: mov     rcx, gs:20h
 * 00000001401BFBB8: inc     byte ptr [rcx+20h]
 * 00000001401BFBBB: cmp     byte ptr [rcx+20h], 1
 * 00000001401BFBBF: jnz     short loc_1401BFC11
 * 00000001401BFBC1: rdtsc
 * 00000001401BFBC3: shl     rdx, 20h
 * 00000001401BFBC7: or      rax, rdx
 * 00000001401BFBCA: mov     r8, [rcx+8]
 * 00000001401BFBCE: sub     rax, [rcx+5BC0h]
 * 00000001401BFBD5: add     [r8+48h], rax
 * 00000001401BFBD9: mov     edx, [r8+50h]
 * 00000001401BFBDD: add     [rcx+5BC0h], rax
 * 00000001401BFBE4: add     rdx, rax
 * 00000001401BFBE7: mov     ecx, edx
 * 00000001401BFBE9: shr     rdx, 20h
 * 00000001401BFBED: jz      short loc_1401BFBF2
 * 00000001401BFBEF: or      ecx, 0FFFFFFFFh
 * 00000001401BFBF2: mov     [r8+50h], ecx
 * 00000001401BFBF6: test    byte ptr [r8+2], 3Eh
 * 00000001401BFBFB: jz      short loc_1401BFC11
 * 00000001401BFBFD: mov     rdx, r8
 * 00000001401BFC00: mov     r8, rax
 * 00000001401BFC03: mov     rcx, gs:20h
 * 00000001401BFC0C: call    KiEndThreadAccountingPeriod
 * 00000001401BFC11: sti
 * 00000001401BFC12: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001401BFC1C: jz      short loc_1401BFC2A
 * 00000001401BFC1E: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001401BFC25: call    PerfInfoLogUnexpectedInterrupt
 * 00000001401BFC2A: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001401BFC31: jz      short loc_1401BFC52
 * 00000001401BFC33: and     [rbp+0D8h+var_138], 0
 * 00000001401BFC38: xor     r9, r9
 * 00000001401BFC3B: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001401BFC43: mov     edx, 1
 * 00000001401BFC48: mov     ecx, 12h
 * 00000001401BFC4D: call    KiBugCheckDispatch
 * 00000001401BFC52: cli
 * 00000001401BFC53: mov     rcx, rsi
 * 00000001401BFC56: call    HalPerformEndOfInterrupt_0
 * 00000001401BFC5B: mov     rcx, gs:20h
 * 00000001401BFC64: cmp     byte ptr [rcx+20h], 1
 * 00000001401BFC68: ja      short loc_1401BFCE4
 * 00000001401BFC6A: rdtsc
 * 00000001401BFC6C: shl     rdx, 20h
 * 00000001401BFC70: or      rax, rdx
 * 00000001401BFC73: sub     rax, [rcx+5BC0h]
 * 00000001401BFC7A: add     [rcx+5C38h], rax
 * 00000001401BFC81: add     [rcx+5BC0h], rax
 * 00000001401BFC88: mov     r8, rax
 * 00000001401BFC8B: mov     rax, [rcx+8]
 * 00000001401BFC8F: test    byte ptr [rax+2], 72h
 * 00000001401BFC93: jz      short loc_1401BFCA8
 * 00000001401BFC95: xor     edx, edx
 * 00000001401BFC97: call    KiBeginThreadAccountingPeriod
 * 00000001401BFC9C: mov     rcx, gs:20h
 * 00000001401BFCA5: inc     byte ptr [rcx+20h]
 * 00000001401BFCA8: mov     dl, [rcx+6]
 * 00000001401BFCAB: and     byte ptr [rcx+6], 0
 * 00000001401BFCAF: cmp     byte ptr [rcx+7], 0
 * 00000001401BFCB3: jnz     short loc_1401BFCE4
 * 00000001401BFCB5: test    dl, dl
 * 00000001401BFCB7: jz      short loc_1401BFCE4
 * 00000001401BFCB9: cmp     [rbp+0D8h+var_12F], 2
 * 00000001401BFCBD: jnb     short loc_1401BFCCA
 * 00000001401BFCBF: and     byte ptr [rcx+20h], 0
 * 00000001401BFCC3: call    KiDpcInterruptBypass
 * 00000001401BFCC8: jmp     short loc_1401BFCE7
 * 00000001401BFCCA: mov     ecx, 2
 * 00000001401BFCCF: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BFCD6: nop     dword ptr [rax+rax+00h]
 * 00000001401BFCDB: mov     rcx, gs:20h
 * 00000001401BFCE4: dec     byte ptr [rcx+20h]
 * 00000001401BFCE7: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001401BFCEB: cmp     cs:KiIrqlFlags, 0
 * 00000001401BFCF2: jz      short loc_1401BFCFB
 * 00000001401BFCF4: call    KzSetIrqlUnsafe
 * 00000001401BFCF9: jmp     short loc_1401BFCFF
 * 00000001401BFCFB: mov     cr8, rcx
 * 00000001401BFCFF: mov     rsi, [rbp+0D8h+var_8]
 * 00000001401BFD06: cli
 * 00000001401BFD07: test    [rbp+0D8h+arg_8], 1
 * 00000001401BFD0E: jz      loc_1401BFFA4
 * 00000001401BFD14: mov     rcx, gs:188h
 * 00000001401BFD1D: test    byte ptr [rcx+0C2h], 3
 * 00000001401BFD24: jz      short loc_1401BFD41
 * 00000001401BFD26: mov     ecx, 1
 * 00000001401BFD2B: mov     cr8, rcx
 * 00000001401BFD2F: sti
 * 00000001401BFD30: call    KiInitiateUserApc
 * 00000001401BFD35: cli
 * 00000001401BFD36: mov     ecx, 0
 * 00000001401BFD3B: mov     cr8, rcx
 * 00000001401BFD3F: jmp     short loc_1401BFD14
 * 00000001401BFD41: test    byte ptr gs:86Ch, 2
 * 00000001401BFD4A: jz      short loc_1401BFD53
 * 00000001401BFD4C: xor     ecx, ecx
 * 00000001401BFD4E: call    KiUpdateStibpPairing
 * 00000001401BFD53: mov     rcx, gs:188h
 * 00000001401BFD5C: test    dword ptr [rcx], 8000000h
 * 00000001401BFD62: jz      short loc_1401BFD69
 * 00000001401BFD64: call    KiRestoreSetContextState
 * 00000001401BFD69: mov     rcx, gs:188h
 * 00000001401BFD72: test    dword ptr [rcx], 40010000h
 * 00000001401BFD78: jz      short loc_1401BFD8E
 * 00000001401BFD7A: test    byte ptr [rcx+2], 1
 * 00000001401BFD7E: jz      short loc_1401BFD8E
 * 00000001401BFD80: call    KiCopyCounters
 * 00000001401BFD85: mov     rcx, gs:188h
 * 00000001401BFD8E: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401BFD92: cmp     [rbp+0D8h+var_58], 0
 * 00000001401BFD9A: jz      short loc_1401BFDA1
 * 00000001401BFD9C: call    KiRestoreDebugRegisterState
 * 00000001401BFDA1: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401BFDA5: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401BFDA9: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401BFDAD: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401BFDB1: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401BFDB5: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401BFDB9: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401BFDBD: mov     r10, [rbp+0D8h+var_100]
 * 00000001401BFDC1: mov     r9, [rbp+0D8h+var_108]
 * 00000001401BFDC5: mov     r8, [rbp+0D8h+var_110]
 * 00000001401BFDC9: mov     byte ptr gs:856h, 0
 * 00000001401BFDD2: movzx   eax, word ptr gs:86Ah
 * 00000001401BFDDB: cmp     gs:864h, ax
 * 00000001401BFDE4: jz      short loc_1401BFDF8
 * 00000001401BFDE6: mov     gs:864h, ax
 * 00000001401BFDEF: mov     ecx, 48h ; 'H'
 * 00000001401BFDF4: xor     edx, edx
 * 00000001401BFDF6: wrmsr
 * 00000001401BFDF8: btr     word ptr gs:860h, 2
 * 00000001401BFE03: jnb     short loc_1401BFE13
 * 00000001401BFE05: mov     eax, 1
 * 00000001401BFE0A: xor     edx, edx
 * 00000001401BFE0C: mov     ecx, 49h ; 'I'
 * 00000001401BFE11: wrmsr
 * 00000001401BFE13: btr     word ptr gs:860h, 5
 * 00000001401BFE1E: jnb     loc_1401BFF49
 * 00000001401BFE24: call    loc_1401BFF37
 * 00000001401BFE29: add     rsp, 8
 * 00000001401BFE2D: call    loc_1401BFF40
 * 00000001401BFE32: add     rsp, 8
 * 00000001401BFE36: call    loc_1401BFE29
 * 00000001401BFE3B: add     rsp, 8
 * 00000001401BFE3F: call    loc_1401BFE32
 * 00000001401BFE44: add     rsp, 8
 * 00000001401BFE48: call    loc_1401BFE3B
 * 00000001401BFE4D: add     rsp, 8
 * 00000001401BFE51: call    loc_1401BFE44
 * 00000001401BFE56: add     rsp, 8
 * 00000001401BFE5A: call    loc_1401BFE4D
 * 00000001401BFE5F: add     rsp, 8
 * 00000001401BFE63: call    loc_1401BFE56
 * 00000001401BFE68: add     rsp, 8
 * 00000001401BFE6C: call    loc_1401BFE5F
 * 00000001401BFE71: add     rsp, 8
 * 00000001401BFE75: call    loc_1401BFE68
 * 00000001401BFE7A: add     rsp, 8
 * 00000001401BFE7E: call    loc_1401BFE71
 * 00000001401BFE83: add     rsp, 8
 * 00000001401BFE87: call    loc_1401BFE7A
 * 00000001401BFE8C: add     rsp, 8
 * 00000001401BFE90: call    loc_1401BFE83
 * 00000001401BFE95: add     rsp, 8
 * 00000001401BFE99: call    loc_1401BFE8C
 * 00000001401BFE9E: add     rsp, 8
 * 00000001401BFEA2: call    loc_1401BFE95
 * 00000001401BFEA7: add     rsp, 8
 * 00000001401BFEAB: call    loc_1401BFE9E
 * 00000001401BFEB0: add     rsp, 8
 * 00000001401BFEB4: call    loc_1401BFEA7
 * 00000001401BFEB9: add     rsp, 8
 * 00000001401BFEBD: call    loc_1401BFEB0
 * 00000001401BFEC2: add     rsp, 8
 * 00000001401BFEC6: call    loc_1401BFEB9
 * 00000001401BFECB: add     rsp, 8
 * 00000001401BFECF: call    loc_1401BFEC2
 * 00000001401BFED4: add     rsp, 8
 * 00000001401BFED8: call    loc_1401BFECB
 * 00000001401BFEDD: add     rsp, 8
 * 00000001401BFEE1: call    loc_1401BFED4
 * 00000001401BFEE6: add     rsp, 8
 * 00000001401BFEEA: call    loc_1401BFEDD
 * 00000001401BFEEF: add     rsp, 8
 * 00000001401BFEF3: call    loc_1401BFEE6
 * 00000001401BFEF8: add     rsp, 8
 * 00000001401BFEFC: call    loc_1401BFEEF
 * 00000001401BFF01: add     rsp, 8
 * 00000001401BFF05: call    loc_1401BFEF8
 * 00000001401BFF0A: add     rsp, 8
 * 00000001401BFF0E: call    loc_1401BFF01
 * 00000001401BFF13: add     rsp, 8
 * 00000001401BFF17: call    loc_1401BFF0A
 * 00000001401BFF1C: add     rsp, 8
 * 00000001401BFF20: call    loc_1401BFF13
 * 00000001401BFF25: add     rsp, 8
 * 00000001401BFF29: call    loc_1401BFF1C
 * 00000001401BFF2E: add     rsp, 8
 * 00000001401BFF32: call    loc_1401BFF25
 * 00000001401BFF37: add     rsp, 8
 * 00000001401BFF3B: call    loc_1401BFF2E
 * 00000001401BFF40: add     rsp, 8
 * 00000001401BFF44: mov     eax, 0DADAh
 * 00000001401BFF49: test    word ptr gs:860h, 80h
 * 00000001401BFF54: jz      short loc_1401BFF62
 * 00000001401BFF56: xor     eax, eax
 * 00000001401BFF58: xor     edx, edx
 * 00000001401BFF5A: mov     ecx, 1
 * 00000001401BFF5F: div     rcx
 * 00000001401BFF62: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401BFF66: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401BFF6A: mov     rax, [rbp+0D8h+var_128]
 * 00000001401BFF6E: mov     rsp, rbp
 * 00000001401BFF71: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401BFF78: add     rsp, 0E8h
 * 00000001401BFF7F: test    cs:KiKvaShadow, 1
 * 00000001401BFF86: jz      short loc_1401BFF8D
 * 00000001401BFF88: jmp     KiKernelExit
 * 00000001401BFF8D: test    word ptr gs:860h, 100h
 * 00000001401BFF98: jz      short loc_1401BFF9F
 * 00000001401BFF9A: verw    [rsp-10h+arg_20]
 * 00000001401BFF9F: swapgs
 * 00000001401BFFA2: iretq
 * 00000001401BFFA4: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401BFFA8: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401BFFAC: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401BFFB0: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401BFFB4: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401BFFB8: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401BFFBC: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401BFFC0: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401BFFC4: mov     r10, [rbp+0D8h+var_100]
 * 00000001401BFFC8: mov     r9, [rbp+0D8h+var_108]
 * 00000001401BFFCC: mov     r8, [rbp+0D8h+var_110]
 * 00000001401BFFD0: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401BFFD4: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401BFFD8: mov     rax, [rbp+0D8h+var_128]
 * 00000001401BFFDC: mov     rsp, rbp
 * 00000001401BFFDF: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401BFFE6: add     rsp, 0E8h
 * 00000001401BFFED: iretq
 */
