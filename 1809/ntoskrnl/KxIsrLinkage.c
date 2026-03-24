/*
 * XREFs of KxIsrLinkage @ 0x1401BF730
 * Callers:
 *     KxIsrLinkageShadow @ 0x14032FAC0 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1400D2030 (KiEndThreadAccountingPeriod.c)
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiBeginThreadAccountingPeriod @ 0x140100970 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401AF030 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1401C37C0 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1401CFE00 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KzSetIrqlUnsafe @ 0x14028DA60 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140293C90 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x140312440 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1401BF730
 * Reason: Hex-Rays returned no pseudocode for 0x1401BF730
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401BF730: push    rbp
 * 00000001401BF731: push    rsi
 * 00000001401BF732: sub     rsp, 150h
 * 00000001401BF739: lea     rbp, [rsp+80h]
 * 00000001401BF741: mov     [rbp+0D8h+var_12D], 0
 * 00000001401BF745: mov     [rbp+0D8h+var_128], rax
 * 00000001401BF749: mov     [rbp+0D8h+var_120], rcx
 * 00000001401BF74D: mov     [rbp+0D8h+var_118], rdx
 * 00000001401BF751: mov     [rbp+0D8h+var_110], r8
 * 00000001401BF755: mov     [rbp+0D8h+var_108], r9
 * 00000001401BF759: mov     [rbp+0D8h+var_100], r10
 * 00000001401BF75D: mov     [rbp+0D8h+var_F8], r11
 * 00000001401BF761: test    [rbp+0D8h+arg_8], 1
 * 00000001401BF768: jnz     short loc_1401BF799
 * 00000001401BF76A: lfence
 * 00000001401BF76D: test    word ptr gs:860h, 1
 * 00000001401BF778: jnz     short loc_1401BF782
 * 00000001401BF77A: lfence
 * 00000001401BF77D: jmp     loc_1401BF9A2
 * 00000001401BF782: movzx   eax, word ptr gs:864h
 * 00000001401BF78B: mov     ecx, 48h ; 'H'
 * 00000001401BF790: xor     edx, edx
 * 00000001401BF792: wrmsr
 * 00000001401BF794: jmp     loc_1401BF9A2
 * 00000001401BF799: test    cs:KiKvaShadow, 1
 * 00000001401BF7A0: jnz     short loc_1401BF7A5
 * 00000001401BF7A2: swapgs
 * 00000001401BF7A5: lfence
 * 00000001401BF7A8: mov     r10, gs:188h
 * 00000001401BF7B1: mov     rcx, gs:188h
 * 00000001401BF7BA: mov     rcx, [rcx+220h]
 * 00000001401BF7C1: mov     rcx, [rcx+830h]
 * 00000001401BF7C8: mov     gs:858h, rcx
 * 00000001401BF7D1: mov     cx, gs:850h
 * 00000001401BF7DA: mov     gs:852h, cx
 * 00000001401BF7E3: mov     cx, gs:860h
 * 00000001401BF7EC: mov     gs:854h, cx
 * 00000001401BF7F5: movzx   eax, word ptr gs:866h
 * 00000001401BF7FE: cmp     gs:864h, ax
 * 00000001401BF807: jz      short loc_1401BF81B
 * 00000001401BF809: mov     gs:864h, ax
 * 00000001401BF812: mov     ecx, 48h ; 'H'
 * 00000001401BF817: xor     edx, edx
 * 00000001401BF819: wrmsr
 * 00000001401BF81B: movzx   edx, word ptr gs:860h
 * 00000001401BF824: test    edx, 8
 * 00000001401BF82A: jz      short loc_1401BF843
 * 00000001401BF82C: mov     eax, 1
 * 00000001401BF831: xor     edx, edx
 * 00000001401BF833: mov     ecx, 49h ; 'I'
 * 00000001401BF838: wrmsr
 * 00000001401BF83A: movzx   edx, word ptr gs:860h
 * 00000001401BF843: test    edx, 2
 * 00000001401BF849: jz      loc_1401BF974
 * 00000001401BF84F: call    loc_1401BF962
 * 00000001401BF854: add     rsp, 8
 * 00000001401BF858: call    loc_1401BF96B
 * 00000001401BF85D: add     rsp, 8
 * 00000001401BF861: call    loc_1401BF854
 * 00000001401BF866: add     rsp, 8
 * 00000001401BF86A: call    loc_1401BF85D
 * 00000001401BF86F: add     rsp, 8
 * 00000001401BF873: call    loc_1401BF866
 * 00000001401BF878: add     rsp, 8
 * 00000001401BF87C: call    loc_1401BF86F
 * 00000001401BF881: add     rsp, 8
 * 00000001401BF885: call    loc_1401BF878
 * 00000001401BF88A: add     rsp, 8
 * 00000001401BF88E: call    loc_1401BF881
 * 00000001401BF893: add     rsp, 8
 * 00000001401BF897: call    loc_1401BF88A
 * 00000001401BF89C: add     rsp, 8
 * 00000001401BF8A0: call    loc_1401BF893
 * 00000001401BF8A5: add     rsp, 8
 * 00000001401BF8A9: call    loc_1401BF89C
 * 00000001401BF8AE: add     rsp, 8
 * 00000001401BF8B2: call    loc_1401BF8A5
 * 00000001401BF8B7: add     rsp, 8
 * 00000001401BF8BB: call    loc_1401BF8AE
 * 00000001401BF8C0: add     rsp, 8
 * 00000001401BF8C4: call    loc_1401BF8B7
 * 00000001401BF8C9: add     rsp, 8
 * 00000001401BF8CD: call    loc_1401BF8C0
 * 00000001401BF8D2: add     rsp, 8
 * 00000001401BF8D6: call    loc_1401BF8C9
 * 00000001401BF8DB: add     rsp, 8
 * 00000001401BF8DF: call    loc_1401BF8D2
 * 00000001401BF8E4: add     rsp, 8
 * 00000001401BF8E8: call    loc_1401BF8DB
 * 00000001401BF8ED: add     rsp, 8
 * 00000001401BF8F1: call    loc_1401BF8E4
 * 00000001401BF8F6: add     rsp, 8
 * 00000001401BF8FA: call    loc_1401BF8ED
 * 00000001401BF8FF: add     rsp, 8
 * 00000001401BF903: call    loc_1401BF8F6
 * 00000001401BF908: add     rsp, 8
 * 00000001401BF90C: call    loc_1401BF8FF
 * 00000001401BF911: add     rsp, 8
 * 00000001401BF915: call    loc_1401BF908
 * 00000001401BF91A: add     rsp, 8
 * 00000001401BF91E: call    loc_1401BF911
 * 00000001401BF923: add     rsp, 8
 * 00000001401BF927: call    loc_1401BF91A
 * 00000001401BF92C: add     rsp, 8
 * 00000001401BF930: call    loc_1401BF923
 * 00000001401BF935: add     rsp, 8
 * 00000001401BF939: call    loc_1401BF92C
 * 00000001401BF93E: add     rsp, 8
 * 00000001401BF942: call    loc_1401BF935
 * 00000001401BF947: add     rsp, 8
 * 00000001401BF94B: call    loc_1401BF93E
 * 00000001401BF950: add     rsp, 8
 * 00000001401BF954: call    loc_1401BF947
 * 00000001401BF959: add     rsp, 8
 * 00000001401BF95D: call    loc_1401BF950
 * 00000001401BF962: add     rsp, 8
 * 00000001401BF966: call    loc_1401BF959
 * 00000001401BF96B: add     rsp, 8
 * 00000001401BF96F: mov     eax, 0DADAh
 * 00000001401BF974: test    edx, 200h
 * 00000001401BF97A: jz      short loc_1401BF981
 * 00000001401BF97C: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401BF981: lfence
 * 00000001401BF984: mov     byte ptr gs:856h, 0
 * 00000001401BF98D: test    byte ptr [r10+3], 3
 * 00000001401BF992: mov     [rbp+0D8h+var_58], 0
 * 00000001401BF99B: jz      short loc_1401BF9A2
 * 00000001401BF99D: call    KiSaveDebugRegisterState
 * 00000001401BF9A2: cld
 * 00000001401BF9A3: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401BF9A7: ldmxcsr dword ptr gs:180h
 * 00000001401BF9B0: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401BF9B4: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401BF9B8: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401BF9BC: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401BF9C0: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401BF9C4: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401BF9C8: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401BF9D1: jz      short loc_1401BF9D8
 * 00000001401BF9D3: call    KeWakeProcessor
 * 00000001401BF9D8: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401BF9DF: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401BF9E6: jnb     short loc_1401BFA01
 * 00000001401BF9E8: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401BF9EF: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001401BF9F6: jb      short loc_1401BFA01
 * 00000001401BF9F8: lea     rcx, [rbp+0D8h+var_158]
 * 00000001401BF9FC: call    KiCheckForSListAddress
 * 00000001401BFA01: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001401BFA08: mov     rsi, gs:20h
 * 00000001401BFA11: mov     rsi, [rsi+rax*8+2E80h]
 * 00000001401BFA19: inc     dword ptr gs:5D00h
 * 00000001401BFA21: test    rsi, rsi
 * 00000001401BFA24: jz      short loc_1401BFA2F
 * 00000001401BFA26: mov     rax, [rsi+50h]
 * 00000001401BFA2A: jmp     _guard_dispatch_icall
 * 00000001401BFA2F: mov     ecx, eax
 * 00000001401BFA31: shr     ecx, 4
 * 00000001401BFA34: cmp     cs:KiIrqlFlags, 0
 * 00000001401BFA3B: jz      short loc_1401BFA44
 * 00000001401BFA3D: call    KzSetIrqlUnsafe
 * 00000001401BFA42: jmp     short loc_1401BFA4C
 * 00000001401BFA44: mov     rax, cr8
 * 00000001401BFA48: mov     cr8, rcx
 * 00000001401BFA4C: mov     [rbp+0D8h+var_12F], al
 * 00000001401BFA4F: mov     rcx, gs:20h
 * 00000001401BFA58: inc     byte ptr [rcx+20h]
 * 00000001401BFA5B: cmp     byte ptr [rcx+20h], 1
 * 00000001401BFA5F: jnz     short loc_1401BFAB1
 * 00000001401BFA61: rdtsc
 * 00000001401BFA63: shl     rdx, 20h
 * 00000001401BFA67: or      rax, rdx
 * 00000001401BFA6A: mov     r8, [rcx+8]
 * 00000001401BFA6E: sub     rax, [rcx+5BC0h]
 * 00000001401BFA75: add     [r8+48h], rax
 * 00000001401BFA79: mov     edx, [r8+50h]
 * 00000001401BFA7D: add     [rcx+5BC0h], rax
 * 00000001401BFA84: add     rdx, rax
 * 00000001401BFA87: mov     ecx, edx
 * 00000001401BFA89: shr     rdx, 20h
 * 00000001401BFA8D: jz      short loc_1401BFA92
 * 00000001401BFA8F: or      ecx, 0FFFFFFFFh
 * 00000001401BFA92: mov     [r8+50h], ecx
 * 00000001401BFA96: test    byte ptr [r8+2], 3Eh
 * 00000001401BFA9B: jz      short loc_1401BFAB1
 * 00000001401BFA9D: mov     rdx, r8
 * 00000001401BFAA0: mov     r8, rax
 * 00000001401BFAA3: mov     rcx, gs:20h
 * 00000001401BFAAC: call    KiEndThreadAccountingPeriod
 * 00000001401BFAB1: sti
 * 00000001401BFAB2: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 00000001401BFABC: jz      short loc_1401BFACA
 * 00000001401BFABE: movzx   ecx, byte ptr [rbp+0E0h]
 * 00000001401BFAC5: call    PerfInfoLogUnexpectedInterrupt
 * 00000001401BFACA: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 00000001401BFAD1: jz      short loc_1401BFAF2
 * 00000001401BFAD3: and     [rbp+0D8h+var_138], 0
 * 00000001401BFAD8: xor     r9, r9
 * 00000001401BFADB: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001401BFAE3: mov     edx, 1
 * 00000001401BFAE8: mov     ecx, 12h
 * 00000001401BFAED: call    KiBugCheckDispatch
 * 00000001401BFAF2: cli
 * 00000001401BFAF3: mov     rcx, rsi
 * 00000001401BFAF6: call    HalPerformEndOfInterrupt_0
 * 00000001401BFAFB: mov     rcx, gs:20h
 * 00000001401BFB04: cmp     byte ptr [rcx+20h], 1
 * 00000001401BFB08: ja      short loc_1401BFB84
 * 00000001401BFB0A: rdtsc
 * 00000001401BFB0C: shl     rdx, 20h
 * 00000001401BFB10: or      rax, rdx
 * 00000001401BFB13: sub     rax, [rcx+5BC0h]
 * 00000001401BFB1A: add     [rcx+5C38h], rax
 * 00000001401BFB21: add     [rcx+5BC0h], rax
 * 00000001401BFB28: mov     r8, rax
 * 00000001401BFB2B: mov     rax, [rcx+8]
 * 00000001401BFB2F: test    byte ptr [rax+2], 72h
 * 00000001401BFB33: jz      short loc_1401BFB48
 * 00000001401BFB35: xor     edx, edx
 * 00000001401BFB37: call    KiBeginThreadAccountingPeriod
 * 00000001401BFB3C: mov     rcx, gs:20h
 * 00000001401BFB45: inc     byte ptr [rcx+20h]
 * 00000001401BFB48: mov     dl, [rcx+6]
 * 00000001401BFB4B: and     byte ptr [rcx+6], 0
 * 00000001401BFB4F: cmp     byte ptr [rcx+7], 0
 * 00000001401BFB53: jnz     short loc_1401BFB84
 * 00000001401BFB55: test    dl, dl
 * 00000001401BFB57: jz      short loc_1401BFB84
 * 00000001401BFB59: cmp     [rbp+0D8h+var_12F], 2
 * 00000001401BFB5D: jnb     short loc_1401BFB6A
 * 00000001401BFB5F: and     byte ptr [rcx+20h], 0
 * 00000001401BFB63: call    KiDpcInterruptBypass
 * 00000001401BFB68: jmp     short loc_1401BFB87
 * 00000001401BFB6A: mov     ecx, 2
 * 00000001401BFB6F: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401BFB76: nop     dword ptr [rax+rax+00h]
 * 00000001401BFB7B: mov     rcx, gs:20h
 * 00000001401BFB84: dec     byte ptr [rcx+20h]
 * 00000001401BFB87: movzx   ecx, [rbp+0D8h+var_12F]
 * 00000001401BFB8B: cmp     cs:KiIrqlFlags, 0
 * 00000001401BFB92: jz      short loc_1401BFB9B
 * 00000001401BFB94: call    KzSetIrqlUnsafe
 * 00000001401BFB99: jmp     short loc_1401BFB9F
 * 00000001401BFB9B: mov     cr8, rcx
 * 00000001401BFB9F: mov     rsi, [rbp+0D8h+var_8]
 * 00000001401BFBA6: cli
 * 00000001401BFBA7: test    [rbp+0D8h+arg_8], 1
 * 00000001401BFBAE: jz      loc_1401BFE44
 * 00000001401BFBB4: mov     rcx, gs:188h
 * 00000001401BFBBD: test    byte ptr [rcx+0C2h], 3
 * 00000001401BFBC4: jz      short loc_1401BFBE1
 * 00000001401BFBC6: mov     ecx, 1
 * 00000001401BFBCB: mov     cr8, rcx
 * 00000001401BFBCF: sti
 * 00000001401BFBD0: call    KiInitiateUserApc
 * 00000001401BFBD5: cli
 * 00000001401BFBD6: mov     ecx, 0
 * 00000001401BFBDB: mov     cr8, rcx
 * 00000001401BFBDF: jmp     short loc_1401BFBB4
 * 00000001401BFBE1: test    byte ptr gs:86Ch, 2
 * 00000001401BFBEA: jz      short loc_1401BFBF3
 * 00000001401BFBEC: xor     ecx, ecx
 * 00000001401BFBEE: call    KiUpdateStibpPairing
 * 00000001401BFBF3: mov     rcx, gs:188h
 * 00000001401BFBFC: test    dword ptr [rcx], 8000000h
 * 00000001401BFC02: jz      short loc_1401BFC09
 * 00000001401BFC04: call    KiRestoreSetContextState
 * 00000001401BFC09: mov     rcx, gs:188h
 * 00000001401BFC12: test    dword ptr [rcx], 40010000h
 * 00000001401BFC18: jz      short loc_1401BFC2E
 * 00000001401BFC1A: test    byte ptr [rcx+2], 1
 * 00000001401BFC1E: jz      short loc_1401BFC2E
 * 00000001401BFC20: call    KiCopyCounters
 * 00000001401BFC25: mov     rcx, gs:188h
 * 00000001401BFC2E: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401BFC32: cmp     [rbp+0D8h+var_58], 0
 * 00000001401BFC3A: jz      short loc_1401BFC41
 * 00000001401BFC3C: call    KiRestoreDebugRegisterState
 * 00000001401BFC41: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401BFC45: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401BFC49: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401BFC4D: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401BFC51: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401BFC55: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401BFC59: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401BFC5D: mov     r10, [rbp+0D8h+var_100]
 * 00000001401BFC61: mov     r9, [rbp+0D8h+var_108]
 * 00000001401BFC65: mov     r8, [rbp+0D8h+var_110]
 * 00000001401BFC69: mov     byte ptr gs:856h, 0
 * 00000001401BFC72: movzx   eax, word ptr gs:86Ah
 * 00000001401BFC7B: cmp     gs:864h, ax
 * 00000001401BFC84: jz      short loc_1401BFC98
 * 00000001401BFC86: mov     gs:864h, ax
 * 00000001401BFC8F: mov     ecx, 48h ; 'H'
 * 00000001401BFC94: xor     edx, edx
 * 00000001401BFC96: wrmsr
 * 00000001401BFC98: btr     word ptr gs:860h, 2
 * 00000001401BFCA3: jnb     short loc_1401BFCB3
 * 00000001401BFCA5: mov     eax, 1
 * 00000001401BFCAA: xor     edx, edx
 * 00000001401BFCAC: mov     ecx, 49h ; 'I'
 * 00000001401BFCB1: wrmsr
 * 00000001401BFCB3: btr     word ptr gs:860h, 5
 * 00000001401BFCBE: jnb     loc_1401BFDE9
 * 00000001401BFCC4: call    loc_1401BFDD7
 * 00000001401BFCC9: add     rsp, 8
 * 00000001401BFCCD: call    loc_1401BFDE0
 * 00000001401BFCD2: add     rsp, 8
 * 00000001401BFCD6: call    loc_1401BFCC9
 * 00000001401BFCDB: add     rsp, 8
 * 00000001401BFCDF: call    loc_1401BFCD2
 * 00000001401BFCE4: add     rsp, 8
 * 00000001401BFCE8: call    loc_1401BFCDB
 * 00000001401BFCED: add     rsp, 8
 * 00000001401BFCF1: call    loc_1401BFCE4
 * 00000001401BFCF6: add     rsp, 8
 * 00000001401BFCFA: call    loc_1401BFCED
 * 00000001401BFCFF: add     rsp, 8
 * 00000001401BFD03: call    loc_1401BFCF6
 * 00000001401BFD08: add     rsp, 8
 * 00000001401BFD0C: call    loc_1401BFCFF
 * 00000001401BFD11: add     rsp, 8
 * 00000001401BFD15: call    loc_1401BFD08
 * 00000001401BFD1A: add     rsp, 8
 * 00000001401BFD1E: call    loc_1401BFD11
 * 00000001401BFD23: add     rsp, 8
 * 00000001401BFD27: call    loc_1401BFD1A
 * 00000001401BFD2C: add     rsp, 8
 * 00000001401BFD30: call    loc_1401BFD23
 * 00000001401BFD35: add     rsp, 8
 * 00000001401BFD39: call    loc_1401BFD2C
 * 00000001401BFD3E: add     rsp, 8
 * 00000001401BFD42: call    loc_1401BFD35
 * 00000001401BFD47: add     rsp, 8
 * 00000001401BFD4B: call    loc_1401BFD3E
 * 00000001401BFD50: add     rsp, 8
 * 00000001401BFD54: call    loc_1401BFD47
 * 00000001401BFD59: add     rsp, 8
 * 00000001401BFD5D: call    loc_1401BFD50
 * 00000001401BFD62: add     rsp, 8
 * 00000001401BFD66: call    loc_1401BFD59
 * 00000001401BFD6B: add     rsp, 8
 * 00000001401BFD6F: call    loc_1401BFD62
 * 00000001401BFD74: add     rsp, 8
 * 00000001401BFD78: call    loc_1401BFD6B
 * 00000001401BFD7D: add     rsp, 8
 * 00000001401BFD81: call    loc_1401BFD74
 * 00000001401BFD86: add     rsp, 8
 * 00000001401BFD8A: call    loc_1401BFD7D
 * 00000001401BFD8F: add     rsp, 8
 * 00000001401BFD93: call    loc_1401BFD86
 * 00000001401BFD98: add     rsp, 8
 * 00000001401BFD9C: call    loc_1401BFD8F
 * 00000001401BFDA1: add     rsp, 8
 * 00000001401BFDA5: call    loc_1401BFD98
 * 00000001401BFDAA: add     rsp, 8
 * 00000001401BFDAE: call    loc_1401BFDA1
 * 00000001401BFDB3: add     rsp, 8
 * 00000001401BFDB7: call    loc_1401BFDAA
 * 00000001401BFDBC: add     rsp, 8
 * 00000001401BFDC0: call    loc_1401BFDB3
 * 00000001401BFDC5: add     rsp, 8
 * 00000001401BFDC9: call    loc_1401BFDBC
 * 00000001401BFDCE: add     rsp, 8
 * 00000001401BFDD2: call    loc_1401BFDC5
 * 00000001401BFDD7: add     rsp, 8
 * 00000001401BFDDB: call    loc_1401BFDCE
 * 00000001401BFDE0: add     rsp, 8
 * 00000001401BFDE4: mov     eax, 0DADAh
 * 00000001401BFDE9: test    word ptr gs:860h, 80h
 * 00000001401BFDF4: jz      short loc_1401BFE02
 * 00000001401BFDF6: xor     eax, eax
 * 00000001401BFDF8: xor     edx, edx
 * 00000001401BFDFA: mov     ecx, 1
 * 00000001401BFDFF: div     rcx
 * 00000001401BFE02: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401BFE06: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401BFE0A: mov     rax, [rbp+0D8h+var_128]
 * 00000001401BFE0E: mov     rsp, rbp
 * 00000001401BFE11: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401BFE18: add     rsp, 0E8h
 * 00000001401BFE1F: test    cs:KiKvaShadow, 1
 * 00000001401BFE26: jz      short loc_1401BFE2D
 * 00000001401BFE28: jmp     KiKernelExit
 * 00000001401BFE2D: test    word ptr gs:860h, 100h
 * 00000001401BFE38: jz      short loc_1401BFE3F
 * 00000001401BFE3A: verw    [rsp-10h+arg_20]
 * 00000001401BFE3F: swapgs
 * 00000001401BFE42: iretq
 * 00000001401BFE44: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401BFE48: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401BFE4C: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401BFE50: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401BFE54: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401BFE58: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401BFE5C: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401BFE60: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401BFE64: mov     r10, [rbp+0D8h+var_100]
 * 00000001401BFE68: mov     r9, [rbp+0D8h+var_108]
 * 00000001401BFE6C: mov     r8, [rbp+0D8h+var_110]
 * 00000001401BFE70: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401BFE74: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401BFE78: mov     rax, [rbp+0D8h+var_128]
 * 00000001401BFE7C: mov     rsp, rbp
 * 00000001401BFE7F: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401BFE86: add     rsp, 0E8h
 * 00000001401BFE8D: iretq
 */
