/*
 * XREFs of KxDebugTrapOrFault @ 0x1401C8300
 * Callers:
 *     KiDebugTrapOrFault @ 0x1401C8240 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1401C8300 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1401C8300
 * Reason: Hex-Rays returned no pseudocode for 0x1401C8300
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C8300: sub     rsp, 8
 * 00000001401C8304: push    rbp
 * 00000001401C8305: sub     rsp, 158h
 * 00000001401C830C: lea     rbp, [rsp+80h]
 * 00000001401C8314: mov     [rbp+0E8h+var_13D], 1
 * 00000001401C8318: mov     [rbp+0E8h+var_138], rax
 * 00000001401C831C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401C8320: mov     [rbp+0E8h+var_128], rdx
 * 00000001401C8324: mov     [rbp+0E8h+var_120], r8
 * 00000001401C8328: mov     [rbp+0E8h+var_118], r9
 * 00000001401C832C: mov     [rbp+0E8h+var_110], r10
 * 00000001401C8330: mov     [rbp+0E8h+var_108], r11
 * 00000001401C8334: test    [rbp+0E8h+arg_0], 1
 * 00000001401C833B: jnz     short loc_1401C836C
 * 00000001401C833D: lfence
 * 00000001401C8340: test    word ptr gs:860h, 1
 * 00000001401C834B: jnz     short loc_1401C8355
 * 00000001401C834D: lfence
 * 00000001401C8350: jmp     loc_1401C85BE
 * 00000001401C8355: movzx   eax, word ptr gs:864h
 * 00000001401C835E: mov     ecx, 48h ; 'H'
 * 00000001401C8363: xor     edx, edx
 * 00000001401C8365: wrmsr
 * 00000001401C8367: jmp     loc_1401C85BE
 * 00000001401C836C: test    cs:KiKvaShadow, 1
 * 00000001401C8373: jnz     short loc_1401C8378
 * 00000001401C8375: swapgs
 * 00000001401C8378: lfence
 * 00000001401C837B: mov     r10, gs:188h
 * 00000001401C8384: mov     rcx, gs:188h
 * 00000001401C838D: mov     rcx, [rcx+220h]
 * 00000001401C8394: mov     rcx, [rcx+830h]
 * 00000001401C839B: mov     gs:858h, rcx
 * 00000001401C83A4: mov     cx, gs:850h
 * 00000001401C83AD: mov     gs:852h, cx
 * 00000001401C83B6: mov     cx, gs:860h
 * 00000001401C83BF: mov     gs:854h, cx
 * 00000001401C83C8: movzx   eax, word ptr gs:866h
 * 00000001401C83D1: cmp     gs:864h, ax
 * 00000001401C83DA: jz      short loc_1401C83EE
 * 00000001401C83DC: mov     gs:864h, ax
 * 00000001401C83E5: mov     ecx, 48h ; 'H'
 * 00000001401C83EA: xor     edx, edx
 * 00000001401C83EC: wrmsr
 * 00000001401C83EE: movzx   edx, word ptr gs:860h
 * 00000001401C83F7: test    edx, 8
 * 00000001401C83FD: jz      short loc_1401C8416
 * 00000001401C83FF: mov     eax, 1
 * 00000001401C8404: xor     edx, edx
 * 00000001401C8406: mov     ecx, 49h ; 'I'
 * 00000001401C840B: wrmsr
 * 00000001401C840D: movzx   edx, word ptr gs:860h
 * 00000001401C8416: test    edx, 2
 * 00000001401C841C: jz      loc_1401C8547
 * 00000001401C8422: call    loc_1401C8535
 * 00000001401C8427: add     rsp, 8
 * 00000001401C842B: call    loc_1401C853E
 * 00000001401C8430: add     rsp, 8
 * 00000001401C8434: call    loc_1401C8427
 * 00000001401C8439: add     rsp, 8
 * 00000001401C843D: call    loc_1401C8430
 * 00000001401C8442: add     rsp, 8
 * 00000001401C8446: call    loc_1401C8439
 * 00000001401C844B: add     rsp, 8
 * 00000001401C844F: call    loc_1401C8442
 * 00000001401C8454: add     rsp, 8
 * 00000001401C8458: call    loc_1401C844B
 * 00000001401C845D: add     rsp, 8
 * 00000001401C8461: call    loc_1401C8454
 * 00000001401C8466: add     rsp, 8
 * 00000001401C846A: call    loc_1401C845D
 * 00000001401C846F: add     rsp, 8
 * 00000001401C8473: call    loc_1401C8466
 * 00000001401C8478: add     rsp, 8
 * 00000001401C847C: call    loc_1401C846F
 * 00000001401C8481: add     rsp, 8
 * 00000001401C8485: call    loc_1401C8478
 * 00000001401C848A: add     rsp, 8
 * 00000001401C848E: call    loc_1401C8481
 * 00000001401C8493: add     rsp, 8
 * 00000001401C8497: call    loc_1401C848A
 * 00000001401C849C: add     rsp, 8
 * 00000001401C84A0: call    loc_1401C8493
 * 00000001401C84A5: add     rsp, 8
 * 00000001401C84A9: call    loc_1401C849C
 * 00000001401C84AE: add     rsp, 8
 * 00000001401C84B2: call    loc_1401C84A5
 * 00000001401C84B7: add     rsp, 8
 * 00000001401C84BB: call    loc_1401C84AE
 * 00000001401C84C0: add     rsp, 8
 * 00000001401C84C4: call    loc_1401C84B7
 * 00000001401C84C9: add     rsp, 8
 * 00000001401C84CD: call    loc_1401C84C0
 * 00000001401C84D2: add     rsp, 8
 * 00000001401C84D6: call    loc_1401C84C9
 * 00000001401C84DB: add     rsp, 8
 * 00000001401C84DF: call    loc_1401C84D2
 * 00000001401C84E4: add     rsp, 8
 * 00000001401C84E8: call    loc_1401C84DB
 * 00000001401C84ED: add     rsp, 8
 * 00000001401C84F1: call    loc_1401C84E4
 * 00000001401C84F6: add     rsp, 8
 * 00000001401C84FA: call    loc_1401C84ED
 * 00000001401C84FF: add     rsp, 8
 * 00000001401C8503: call    loc_1401C84F6
 * 00000001401C8508: add     rsp, 8
 * 00000001401C850C: call    loc_1401C84FF
 * 00000001401C8511: add     rsp, 8
 * 00000001401C8515: call    loc_1401C8508
 * 00000001401C851A: add     rsp, 8
 * 00000001401C851E: call    loc_1401C8511
 * 00000001401C8523: add     rsp, 8
 * 00000001401C8527: call    loc_1401C851A
 * 00000001401C852C: add     rsp, 8
 * 00000001401C8530: call    loc_1401C8523
 * 00000001401C8535: add     rsp, 8
 * 00000001401C8539: call    loc_1401C852C
 * 00000001401C853E: add     rsp, 8
 * 00000001401C8542: mov     eax, 0DADAh
 * 00000001401C8547: test    edx, 200h
 * 00000001401C854D: jz      short loc_1401C8554
 * 00000001401C854F: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C8554: lfence
 * 00000001401C8557: mov     byte ptr gs:856h, 0
 * 00000001401C8560: test    byte ptr [r10+3], 80h
 * 00000001401C8565: jz      short loc_1401C85A9
 * 00000001401C8567: mov     ecx, 0C0000102h
 * 00000001401C856C: rdmsr
 * 00000001401C856E: shl     rdx, 20h
 * 00000001401C8572: or      rax, rdx
 * 00000001401C8575: cmp     rax, cs:MmUserProbeAddress
 * 00000001401C857C: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401C8584: cmp     [r10+0F0h], rax
 * 00000001401C858B: jz      short loc_1401C85A9
 * 00000001401C858D: mov     rdx, [r10+1F0h]
 * 00000001401C8594: bts     dword ptr [r10+74h], 8
 * 00000001401C859A: dec     word ptr [r10+1E6h]
 * 00000001401C85A2: mov     [rdx+80h], rax
 * 00000001401C85A9: test    byte ptr [r10+3], 3
 * 00000001401C85AE: mov     [rbp+0E8h+var_68], 0
 * 00000001401C85B7: jz      short loc_1401C85BE
 * 00000001401C85B9: call    KiSaveDebugRegisterState
 * 00000001401C85BE: cld
 * 00000001401C85BF: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401C85C3: ldmxcsr dword ptr gs:180h
 * 00000001401C85CC: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401C85D0: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401C85D4: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401C85D8: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401C85DC: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401C85E0: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401C85E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001401C85EE: jz      short loc_1401C85F1
 * 00000001401C85F0: sti
 * 00000001401C85F1: test    cs:KiCpuTracingFlags, 2
 * 00000001401C85FB: jz      short loc_1401C8610
 * 00000001401C85FD: mov     ecx, 1D9h
 * 00000001401C8602: rdmsr
 * 00000001401C8604: or      eax, 1
 * 00000001401C8607: wrmsr
 * 00000001401C8609: xor     edx, edx
 * 00000001401C860B: jmp     loc_1401C86DF
 * 00000001401C8610: xor     edx, edx
 * 00000001401C8612: test    [rbp+0E8h+arg_8], 100h
 * 00000001401C861C: jz      loc_1401C86DF
 * 00000001401C8622: test    byte ptr gs:6422h, 2
 * 00000001401C862B: jz      loc_1401C86DF
 * 00000001401C8631: test    [rbp+0E8h+arg_0], 1
 * 00000001401C8638: jnz     short loc_1401C8691
 * 00000001401C863A: mov     rax, dr7
 * 00000001401C863D: test    ax, 200h
 * 00000001401C8641: jz      loc_1401C86DF
 * 00000001401C8647: test    ax, 100h
 * 00000001401C864B: jz      loc_1401C86DF
 * 00000001401C8651: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001401C8658: or      r8d, r8d
 * 00000001401C865B: jz      short loc_1401C8665
 * 00000001401C865D: mov     ecx, r8d
 * 00000001401C8660: rdmsr
 * 00000001401C8662: mov     r8d, eax
 * 00000001401C8665: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001401C866B: add     ecx, r8d
 * 00000001401C866E: rdmsr
 * 00000001401C8670: mov     r9d, eax
 * 00000001401C8673: shl     rdx, 20h
 * 00000001401C8677: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001401C867D: or      r9, rdx
 * 00000001401C8680: add     ecx, r8d
 * 00000001401C8683: rdmsr
 * 00000001401C8685: mov     r10d, eax
 * 00000001401C8688: shl     rdx, 20h
 * 00000001401C868C: or      r10, rdx
 * 00000001401C868F: jmp     short loc_1401C86DA
 * 00000001401C8691: test    [rbp+0E8h+var_68], 200h
 * 00000001401C869A: jz      short loc_1401C86DF
 * 00000001401C869C: test    [rbp+0E8h+var_68], 100h
 * 00000001401C86A5: jz      short loc_1401C86DF
 * 00000001401C86A7: and     [rbp+0E8h+var_40], 0
 * 00000001401C86AF: and     [rbp+0E8h+var_48], 0
 * 00000001401C86B7: mov     rcx, cs:MmUserProbeAddress
 * 00000001401C86BE: mov     r9, [rbp+0E8h+var_50]
 * 00000001401C86C5: cmp     r9, rcx
 * 00000001401C86C8: cmovnb  r9, rcx
 * 00000001401C86CC: mov     r10, [rbp+0E8h+var_58]
 * 00000001401C86D3: cmp     r10, rcx
 * 00000001401C86D6: cmovnb  r10, rcx
 * 00000001401C86DA: mov     edx, 2
 * 00000001401C86DF: mov     ecx, 80000004h
 * 00000001401C86E4: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001401C86EE: mov     r8, [rbp+0E8h]
 * 00000001401C86F5: call    KiExceptionDispatch
 * 00000001401C86FA: nop
 * 00000001401C86FB: retn
 */
