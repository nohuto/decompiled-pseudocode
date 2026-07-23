/*
 * XREFs of KiSystemCall64 @ 0x1401CF200
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC1F0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x1401C0800 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x1401CFF00 (KiBugCheckDispatch.c)
 *     KiUmsCallEntry @ 0x1401D0E80 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1402960B0 (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x140312510 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403125A0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x140845EE0 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x140845FE0 (KiTrackSystemCallExit.c)
 *     PsPicoSystemCallDispatch @ 0x14088D1B0 (PsPicoSystemCallDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x1401CF200
 * Reason: Hex-Rays returned no pseudocode for 0x1401CF200
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CF200: swapgs
 * 00000001401CF203: mov     gs:10h, rsp
 * 00000001401CF20C: mov     rsp, gs:1A8h
 * 00000001401CF215: push    2Bh ; '+'
 * 00000001401CF217: push    qword ptr gs:10h
 * 00000001401CF21F: push    r11
 * 00000001401CF221: push    33h ; '3'
 * 00000001401CF223: push    rcx
 * 00000001401CF224: mov     rcx, r10
 * 00000001401CF227: sub     rsp, 8
 * 00000001401CF22B: push    rbp
 * 00000001401CF22C: sub     rsp, 158h
 * 00000001401CF233: lea     rbp, [rsp+190h+var_110]
 * 00000001401CF23B: mov     [rbp+0C0h], rbx
 * 00000001401CF242: mov     [rbp+0C8h], rdi
 * 00000001401CF249: mov     [rbp+0D0h], rsi
 * 00000001401CF250: mov     [rbp-50h], rax
 * 00000001401CF254: mov     [rbp-48h], rcx
 * 00000001401CF258: mov     [rbp-40h], rdx
 * 00000001401CF25C: mov     rcx, gs:188h
 * 00000001401CF265: mov     rcx, [rcx+220h]
 * 00000001401CF26C: mov     rcx, [rcx+830h]
 * 00000001401CF273: mov     gs:858h, rcx
 * 00000001401CF27C: mov     cx, gs:850h
 * 00000001401CF285: mov     gs:852h, cx
 * 00000001401CF28E: mov     cx, gs:860h
 * 00000001401CF297: mov     gs:854h, cx
 * 00000001401CF2A0: movzx   eax, word ptr gs:866h
 * 00000001401CF2A9: cmp     gs:864h, ax
 * 00000001401CF2B2: jz      short loc_1401CF2C6
 * 00000001401CF2B4: mov     gs:864h, ax
 * 00000001401CF2BD: mov     ecx, 48h ; 'H'
 * 00000001401CF2C2: xor     edx, edx
 * 00000001401CF2C4: wrmsr
 * 00000001401CF2C6: movzx   edx, word ptr gs:860h
 * 00000001401CF2CF: test    edx, 8
 * 00000001401CF2D5: jz      short loc_1401CF2EE
 * 00000001401CF2D7: mov     eax, 1
 * 00000001401CF2DC: xor     edx, edx
 * 00000001401CF2DE: mov     ecx, 49h ; 'I'
 * 00000001401CF2E3: wrmsr
 * 00000001401CF2E5: movzx   edx, word ptr gs:860h
 * 00000001401CF2EE: test    edx, 2
 * 00000001401CF2F4: jz      loc_1401CF41F
 * 00000001401CF2FA: call    loc_1401CF40D
 * 00000001401CF2FF: add     rsp, 8
 * 00000001401CF303: call    loc_1401CF416
 * 00000001401CF308: add     rsp, 8
 * 00000001401CF30C: call    loc_1401CF2FF
 * 00000001401CF311: add     rsp, 8
 * 00000001401CF315: call    loc_1401CF308
 * 00000001401CF31A: add     rsp, 8
 * 00000001401CF31E: call    loc_1401CF311
 * 00000001401CF323: add     rsp, 8
 * 00000001401CF327: call    loc_1401CF31A
 * 00000001401CF32C: add     rsp, 8
 * 00000001401CF330: call    loc_1401CF323
 * 00000001401CF335: add     rsp, 8
 * 00000001401CF339: call    loc_1401CF32C
 * 00000001401CF33E: add     rsp, 8
 * 00000001401CF342: call    loc_1401CF335
 * 00000001401CF347: add     rsp, 8
 * 00000001401CF34B: call    loc_1401CF33E
 * 00000001401CF350: add     rsp, 8
 * 00000001401CF354: call    loc_1401CF347
 * 00000001401CF359: add     rsp, 8
 * 00000001401CF35D: call    loc_1401CF350
 * 00000001401CF362: add     rsp, 8
 * 00000001401CF366: call    loc_1401CF359
 * 00000001401CF36B: add     rsp, 8
 * 00000001401CF36F: call    loc_1401CF362
 * 00000001401CF374: add     rsp, 8
 * 00000001401CF378: call    loc_1401CF36B
 * 00000001401CF37D: add     rsp, 8
 * 00000001401CF381: call    loc_1401CF374
 * 00000001401CF386: add     rsp, 8
 * 00000001401CF38A: call    loc_1401CF37D
 * 00000001401CF38F: add     rsp, 8
 * 00000001401CF393: call    loc_1401CF386
 * 00000001401CF398: add     rsp, 8
 * 00000001401CF39C: call    loc_1401CF38F
 * 00000001401CF3A1: add     rsp, 8
 * 00000001401CF3A5: call    loc_1401CF398
 * 00000001401CF3AA: add     rsp, 8
 * 00000001401CF3AE: call    loc_1401CF3A1
 * 00000001401CF3B3: add     rsp, 8
 * 00000001401CF3B7: call    loc_1401CF3AA
 * 00000001401CF3BC: add     rsp, 8
 * 00000001401CF3C0: call    loc_1401CF3B3
 * 00000001401CF3C5: add     rsp, 8
 * 00000001401CF3C9: call    loc_1401CF3BC
 * 00000001401CF3CE: add     rsp, 8
 * 00000001401CF3D2: call    loc_1401CF3C5
 * 00000001401CF3D7: add     rsp, 8
 * 00000001401CF3DB: call    loc_1401CF3CE
 * 00000001401CF3E0: add     rsp, 8
 * 00000001401CF3E4: call    loc_1401CF3D7
 * 00000001401CF3E9: add     rsp, 8
 * 00000001401CF3ED: call    loc_1401CF3E0
 * 00000001401CF3F2: add     rsp, 8
 * 00000001401CF3F6: call    loc_1401CF3E9
 * 00000001401CF3FB: add     rsp, 8
 * 00000001401CF3FF: call    loc_1401CF3F2
 * 00000001401CF404: add     rsp, 8
 * 00000001401CF408: call    loc_1401CF3FB
 * 00000001401CF40D: add     rsp, 8
 * 00000001401CF411: call    loc_1401CF404
 * 00000001401CF416: add     rsp, 8
 * 00000001401CF41A: mov     eax, 0DADAh
 * 00000001401CF41F: test    edx, 200h
 * 00000001401CF425: jz      short loc_1401CF42C
 * 00000001401CF427: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CF42C: lfence
 * 00000001401CF42F: mov     byte ptr gs:856h, 0
 * 00000001401CF438: mov     byte ptr [rbp-55h], 2
 * 00000001401CF43C: mov     rbx, gs:188h
 * 00000001401CF445: prefetchw byte ptr [rbx+90h]
 * 00000001401CF44C: stmxcsr dword ptr [rbp-54h]
 * 00000001401CF450: ldmxcsr dword ptr gs:180h
 * 00000001401CF459: cmp     byte ptr [rbx+3], 0
 * 00000001401CF45D: mov     word ptr [rbp+80h], 0
 * 00000001401CF466: jz      loc_1401CF514
 * 00000001401CF46C: test    byte ptr [rbx+3], 3
 * 00000001401CF470: mov     [rbp-38h], r8
 * 00000001401CF474: mov     [rbp-30h], r9
 * 00000001401CF478: jz      short loc_1401CF47F
 * 00000001401CF47A: call    KiSaveDebugRegisterState
 * 00000001401CF47F: test    byte ptr [rbx+3], 4
 * 00000001401CF483: jz      short loc_1401CF4B3
 * 00000001401CF485: mov     [rbp-20h], r10
 * 00000001401CF489: mov     [rbp-28h], r10
 * 00000001401CF48D: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CF491: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CF495: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CF499: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CF49D: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CF4A1: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CF4A5: sti
 * 00000001401CF4A6: mov     rcx, rsp
 * 00000001401CF4A9: call    PsPicoSystemCallDispatch
 * 00000001401CF4AE: jmp     KiSystemServiceExitPico
 * 00000001401CF4B3: test    byte ptr [rbx+3], 80h
 * 00000001401CF4B7: jz      short loc_1401CF501
 * 00000001401CF4B9: mov     ecx, 0C0000102h
 * 00000001401CF4BE: rdmsr
 * 00000001401CF4C0: shl     rdx, 20h
 * 00000001401CF4C4: or      rax, rdx
 * 00000001401CF4C7: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CF4CE: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CF4D6: cmp     [rbx+0F0h], rax
 * 00000001401CF4DD: jz      short loc_1401CF501
 * 00000001401CF4DF: mov     rdx, [rbx+1F0h]
 * 00000001401CF4E6: bts     dword ptr [rbx+74h], 8
 * 00000001401CF4EB: dec     word ptr [rbx+1E6h]
 * 00000001401CF4F2: mov     [rdx+80h], rax
 * 00000001401CF4F9: sti
 * 00000001401CF4FA: call    KiUmsCallEntry
 * 00000001401CF4FF: jmp     short loc_1401CF50C
 * 00000001401CF501: test    byte ptr [rbx+3], 40h
 * 00000001401CF505: jz      short loc_1401CF50C
 * 00000001401CF507: bts     dword ptr [rbx+74h], 10h
 * 00000001401CF50C: mov     r8, [rbp-38h]
 * 00000001401CF510: mov     r9, [rbp-30h]
 * 00000001401CF514: mov     rax, [rbp-50h]
 * 00000001401CF518: mov     rcx, [rbp-48h]
 * 00000001401CF51C: mov     rdx, [rbp-40h]
 * 00000001401CF520: sti
 * 00000001401CF521: mov     [rbx+88h], rcx
 * 00000001401CF528: mov     [rbx+80h], eax
 * 00000001401CF52E: xchg    ax, ax
 * 00000001401CF530: mov     [rbx+90h], rsp
 * 00000001401CF537: mov     edi, eax
 * 00000001401CF539: shr     edi, 7
 * 00000001401CF53C: and     edi, 20h
 * 00000001401CF53F: and     eax, 0FFFh
 * 00000001401CF544: lea     r10, KeServiceDescriptorTable
 * 00000001401CF54B: lea     r11, KeServiceDescriptorTableShadow
 * 00000001401CF552: test    dword ptr [rbx+78h], 80h
 * 00000001401CF559: jz      short loc_1401CF56E
 * 00000001401CF55B: test    dword ptr [rbx+78h], 200000h
 * 00000001401CF562: jz      short loc_1401CF56B
 * 00000001401CF564: lea     r11, KeServiceDescriptorTableFilter
 * 00000001401CF56B: mov     r10, r11
 * 00000001401CF56E: cmp     eax, [r10+rdi+10h]
 * 00000001401CF573: jnb     loc_1401CFD6F
 * 00000001401CF579: mov     r10, [r10+rdi]
 * 00000001401CF57D: movsxd  r11, dword ptr [r10+rax*4]
 * 00000001401CF581: mov     rax, r11
 * 00000001401CF584: sar     r11, 4
 * 00000001401CF588: add     r10, r11
 * 00000001401CF58B: cmp     edi, 20h ; ' '
 * 00000001401CF58E: jnz     short loc_1401CF5E0
 * 00000001401CF590: mov     r11, [rbx+0F0h]
 * 00000001401CF597: cmp     dword ptr [r11+1740h], 0
 * 00000001401CF59F: jz      short loc_1401CF5E0
 * 00000001401CF5A1: mov     [rbp-50h], rax
 * 00000001401CF5A5: mov     [rbp-48h], rcx
 * 00000001401CF5A9: mov     [rbp-40h], rdx
 * 00000001401CF5AD: mov     rbx, r8
 * 00000001401CF5B0: mov     rdi, r9
 * 00000001401CF5B3: mov     rsi, r10
 * 00000001401CF5B6: mov     ecx, 7
 * 00000001401CF5BB: xor     edx, edx
 * 00000001401CF5BD: xor     r8, r8
 * 00000001401CF5C0: xor     r9, r9
 * 00000001401CF5C3: call    PsInvokeWin32Callout
 * 00000001401CF5C8: mov     rax, [rbp-50h]
 * 00000001401CF5CC: mov     rcx, [rbp-48h]
 * 00000001401CF5D0: mov     rdx, [rbp-40h]
 * 00000001401CF5D4: mov     r8, rbx
 * 00000001401CF5D7: mov     r9, rdi
 * 00000001401CF5DA: mov     r10, rsi
 * 00000001401CF5DD: nop     dword ptr [rax]
 * 00000001401CF5E0: and     eax, 0Fh
 * 00000001401CF5E3: jz      KiSystemServiceCopyEnd
 * 00000001401CF5E9: shl     eax, 3
 * 00000001401CF5EC: lea     rsp, [rsp-70h]
 * 00000001401CF5F1: lea     rdi, [rsp+100h+var_E8]
 * 00000001401CF5F6: mov     rsi, [rbp+100h]
 * 00000001401CF5FD: lea     rsi, [rsi+20h]
 * 00000001401CF601: test    byte ptr [rbp+0F0h], 1
 * 00000001401CF608: jz      short loc_1401CF620
 * 00000001401CF60A: cmp     rsi, cs:MmUserProbeAddress
 * 00000001401CF611: cmovnb  rsi, cs:MmUserProbeAddress
 * 00000001401CF619: nop     dword ptr [rax+00000000h]
 * 00000001401CF620: lea     r11, KiSystemServiceCopyEnd
 * 00000001401CF627: sub     r11, rax
 * 00000001401CF62A: jmp     r11
 * 00000001401CF630: mov     rax, [rsi+70h]
 * 00000001401CF634: mov     [rdi+70h], rax
 * 00000001401CF638: mov     rax, [rsi+68h]
 * 00000001401CF63C: mov     [rdi+68h], rax
 * 00000001401CF640: mov     rax, [rsi+60h]
 * 00000001401CF644: mov     [rdi+60h], rax
 * 00000001401CF648: mov     rax, [rsi+58h]
 * 00000001401CF64C: mov     [rdi+58h], rax
 * 00000001401CF650: mov     rax, [rsi+50h]
 * 00000001401CF654: mov     [rdi+50h], rax
 * 00000001401CF658: mov     rax, [rsi+48h]
 * 00000001401CF65C: mov     [rdi+48h], rax
 * 00000001401CF660: mov     rax, [rsi+40h]
 * 00000001401CF664: mov     [rdi+40h], rax
 * 00000001401CF668: mov     rax, [rsi+38h]
 * 00000001401CF66C: mov     [rdi+38h], rax
 * 00000001401CF670: mov     rax, [rsi+30h]
 * 00000001401CF674: mov     [rdi+30h], rax
 * 00000001401CF678: mov     rax, [rsi+28h]
 * 00000001401CF67C: mov     [rdi+28h], rax
 * 00000001401CF680: mov     rax, [rsi+20h]
 * 00000001401CF684: mov     [rdi+20h], rax
 * 00000001401CF688: mov     rax, [rsi+18h]
 * 00000001401CF68C: mov     [rdi+18h], rax
 * 00000001401CF690: mov     rax, [rsi+10h]
 * 00000001401CF694: mov     [rdi+10h], rax
 * 00000001401CF698: mov     rax, [rsi+8]
 * 00000001401CF69C: mov     [rdi+8], rax
 * 00000001401CF6A0: test    cs:KiDynamicTraceMask, 1
 * 00000001401CF6AA: jnz     loc_1401CFE0D
 * 00000001401CF6B0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001401CF6BA: jnz     loc_1401CFE81
 * 00000001401CF6C0: mov     rax, r10
 * 00000001401CF6C3: call    rax
 * 00000001401CF6C5: nop     dword ptr [rax]
 * 00000001401CF6C8: inc     dword ptr gs:2EB8h
 * 00000001401CF6D0: mov     rbx, [rbp+0C0h]
 * 00000001401CF6D7: mov     rdi, [rbp+0C8h]
 * 00000001401CF6DE: mov     rsi, [rbp+0D0h]
 * 00000001401CF6E5: mov     r11, gs:188h
 * 00000001401CF6EE: test    byte ptr [rbp+0F0h], 1
 * 00000001401CF6F5: jz      loc_1401CFA7F
 * 00000001401CF6FB: mov     rcx, cr8
 * 00000001401CF6FF: or      cl, [r11+24Ah]
 * 00000001401CF706: or      ecx, [r11+1E4h]
 * 00000001401CF70D: jnz     loc_1401CFDD9
 * 00000001401CF713: cli
 * 00000001401CF714: mov     rcx, gs:188h
 * 00000001401CF71D: test    byte ptr [rcx+0C2h], 3
 * 00000001401CF724: jz      short loc_1401CF77F
 * 00000001401CF726: mov     [rbp-50h], rax
 * 00000001401CF72A: xor     eax, eax
 * 00000001401CF72C: mov     [rbp-48h], rax
 * 00000001401CF730: mov     [rbp-40h], rax
 * 00000001401CF734: mov     [rbp-38h], rax
 * 00000001401CF738: mov     [rbp-30h], rax
 * 00000001401CF73C: mov     [rbp-28h], rax
 * 00000001401CF740: mov     [rbp-20h], rax
 * 00000001401CF744: pxor    xmm0, xmm0
 * 00000001401CF748: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CF74C: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401CF750: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401CF754: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401CF758: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401CF75C: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401CF760: mov     ecx, 1
 * 00000001401CF765: mov     cr8, rcx
 * 00000001401CF769: sti
 * 00000001401CF76A: call    KiInitiateUserApc
 * 00000001401CF76F: cli
 * 00000001401CF770: mov     ecx, 0
 * 00000001401CF775: mov     cr8, rcx
 * 00000001401CF779: mov     rax, [rbp-50h]
 * 00000001401CF77D: jmp     short loc_1401CF714
 * 00000001401CF77F: test    byte ptr gs:86Ch, 2
 * 00000001401CF788: jz      short loc_1401CF799
 * 00000001401CF78A: mov     [rbp-50h], rax
 * 00000001401CF78E: xor     ecx, ecx
 * 00000001401CF790: call    KiUpdateStibpPairing
 * 00000001401CF795: mov     rax, [rbp-50h]
 * 00000001401CF799: mov     rcx, gs:188h
 * 00000001401CF7A2: test    dword ptr [rcx], 8000000h
 * 00000001401CF7A8: jz      short loc_1401CF7E9
 * 00000001401CF7AA: mov     [rbp-50h], rax
 * 00000001401CF7AE: xor     eax, eax
 * 00000001401CF7B0: mov     [rbp-48h], rax
 * 00000001401CF7B4: mov     [rbp-40h], rax
 * 00000001401CF7B8: mov     [rbp-38h], rax
 * 00000001401CF7BC: mov     [rbp-30h], rax
 * 00000001401CF7C0: mov     [rbp-28h], rax
 * 00000001401CF7C4: mov     [rbp-20h], rax
 * 00000001401CF7C8: pxor    xmm0, xmm0
 * 00000001401CF7CC: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CF7D0: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401CF7D4: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401CF7D8: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401CF7DC: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401CF7E0: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401CF7E4: call    KiRestoreSetContextState
 * 00000001401CF7E9: mov     rcx, gs:188h
 * 00000001401CF7F2: test    dword ptr [rcx], 40010000h
 * 00000001401CF7F8: jz      short loc_1401CF827
 * 00000001401CF7FA: mov     [rbp-50h], rax
 * 00000001401CF7FE: test    byte ptr [rcx+2], 1
 * 00000001401CF802: jz      short loc_1401CF812
 * 00000001401CF804: call    KiCopyCounters
 * 00000001401CF809: mov     rcx, gs:188h
 * 00000001401CF812: test    byte ptr [rcx+3], 40h
 * 00000001401CF816: jz      short loc_1401CF823
 * 00000001401CF818: lea     rsp, [rbp-80h]
 * 00000001401CF81C: xor     ecx, ecx
 * 00000001401CF81E: call    KiUmsExit
 * 00000001401CF823: mov     rax, [rbp-50h]
 * 00000001401CF827: ldmxcsr dword ptr [rbp-54h]
 * 00000001401CF82B: xor     r10, r10
 * 00000001401CF82E: cmp     word ptr [rbp+80h], 0
 * 00000001401CF836: jz      short loc_1401CF879
 * 00000001401CF838: mov     [rbp-50h], rax
 * 00000001401CF83C: call    KiRestoreDebugRegisterState
 * 00000001401CF841: mov     rax, gs:188h
 * 00000001401CF84A: mov     rax, [rax+0B8h]
 * 00000001401CF851: mov     rax, [rax+2C8h]
 * 00000001401CF858: or      rax, rax
 * 00000001401CF85B: jz      short loc_1401CF875
 * 00000001401CF85D: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001401CF865: jnz     short loc_1401CF875
 * 00000001401CF867: mov     r10, [rbp+0E8h]
 * 00000001401CF86E: mov     [rbp+0E8h], rax
 * 00000001401CF875: mov     rax, [rbp-50h]
 * 00000001401CF879: mov     [rbp-50h], rax
 * 00000001401CF87D: mov     byte ptr gs:856h, 0
 * 00000001401CF886: movzx   eax, word ptr gs:86Ah
 * 00000001401CF88F: cmp     gs:864h, ax
 * 00000001401CF898: jz      short loc_1401CF8AC
 * 00000001401CF89A: mov     gs:864h, ax
 * 00000001401CF8A3: mov     ecx, 48h ; 'H'
 * 00000001401CF8A8: xor     edx, edx
 * 00000001401CF8AA: wrmsr
 * 00000001401CF8AC: btr     word ptr gs:860h, 2
 * 00000001401CF8B7: jnb     short loc_1401CF8C7
 * 00000001401CF8B9: mov     eax, 1
 * 00000001401CF8BE: xor     edx, edx
 * 00000001401CF8C0: mov     ecx, 49h ; 'I'
 * 00000001401CF8C5: wrmsr
 * 00000001401CF8C7: btr     word ptr gs:860h, 5
 * 00000001401CF8D2: jnb     loc_1401CF9FD
 * 00000001401CF8D8: call    loc_1401CF9EB
 * 00000001401CF8DD: add     rsp, 8
 * 00000001401CF8E1: call    loc_1401CF9F4
 * 00000001401CF8E6: add     rsp, 8
 * 00000001401CF8EA: call    loc_1401CF8DD
 * 00000001401CF8EF: add     rsp, 8
 * 00000001401CF8F3: call    loc_1401CF8E6
 * 00000001401CF8F8: add     rsp, 8
 * 00000001401CF8FC: call    loc_1401CF8EF
 * 00000001401CF901: add     rsp, 8
 * 00000001401CF905: call    loc_1401CF8F8
 * 00000001401CF90A: add     rsp, 8
 * 00000001401CF90E: call    loc_1401CF901
 * 00000001401CF913: add     rsp, 8
 * 00000001401CF917: call    loc_1401CF90A
 * 00000001401CF91C: add     rsp, 8
 * 00000001401CF920: call    loc_1401CF913
 * 00000001401CF925: add     rsp, 8
 * 00000001401CF929: call    loc_1401CF91C
 * 00000001401CF92E: add     rsp, 8
 * 00000001401CF932: call    loc_1401CF925
 * 00000001401CF937: add     rsp, 8
 * 00000001401CF93B: call    loc_1401CF92E
 * 00000001401CF940: add     rsp, 8
 * 00000001401CF944: call    loc_1401CF937
 * 00000001401CF949: add     rsp, 8
 * 00000001401CF94D: call    loc_1401CF940
 * 00000001401CF952: add     rsp, 8
 * 00000001401CF956: call    loc_1401CF949
 * 00000001401CF95B: add     rsp, 8
 * 00000001401CF95F: call    loc_1401CF952
 * 00000001401CF964: add     rsp, 8
 * 00000001401CF968: call    loc_1401CF95B
 * 00000001401CF96D: add     rsp, 8
 * 00000001401CF971: call    loc_1401CF964
 * 00000001401CF976: add     rsp, 8
 * 00000001401CF97A: call    loc_1401CF96D
 * 00000001401CF97F: add     rsp, 8
 * 00000001401CF983: call    loc_1401CF976
 * 00000001401CF988: add     rsp, 8
 * 00000001401CF98C: call    loc_1401CF97F
 * 00000001401CF991: add     rsp, 8
 * 00000001401CF995: call    loc_1401CF988
 * 00000001401CF99A: add     rsp, 8
 * 00000001401CF99E: call    loc_1401CF991
 * 00000001401CF9A3: add     rsp, 8
 * 00000001401CF9A7: call    loc_1401CF99A
 * 00000001401CF9AC: add     rsp, 8
 * 00000001401CF9B0: call    loc_1401CF9A3
 * 00000001401CF9B5: add     rsp, 8
 * 00000001401CF9B9: call    loc_1401CF9AC
 * 00000001401CF9BE: add     rsp, 8
 * 00000001401CF9C2: call    loc_1401CF9B5
 * 00000001401CF9C7: add     rsp, 8
 * 00000001401CF9CB: call    loc_1401CF9BE
 * 00000001401CF9D0: add     rsp, 8
 * 00000001401CF9D4: call    loc_1401CF9C7
 * 00000001401CF9D9: add     rsp, 8
 * 00000001401CF9DD: call    loc_1401CF9D0
 * 00000001401CF9E2: add     rsp, 8
 * 00000001401CF9E6: call    loc_1401CF9D9
 * 00000001401CF9EB: add     rsp, 8
 * 00000001401CF9EF: call    loc_1401CF9E2
 * 00000001401CF9F4: add     rsp, 8
 * 00000001401CF9F8: mov     eax, 0DADAh
 * 00000001401CF9FD: test    word ptr gs:860h, 80h
 * 00000001401CFA08: jz      short loc_1401CFA16
 * 00000001401CFA0A: xor     eax, eax
 * 00000001401CFA0C: xor     edx, edx
 * 00000001401CFA0E: mov     ecx, 1
 * 00000001401CFA13: div     rcx
 * 00000001401CFA16: mov     rax, [rbp-50h]
 * 00000001401CFA1A: mov     r8, [rbp+100h]
 * 00000001401CFA21: mov     r9, [rbp+0D8h]
 * 00000001401CFA28: xor     edx, edx
 * 00000001401CFA2A: pxor    xmm0, xmm0
 * 00000001401CFA2E: pxor    xmm1, xmm1
 * 00000001401CFA32: pxor    xmm2, xmm2
 * 00000001401CFA36: pxor    xmm3, xmm3
 * 00000001401CFA3A: pxor    xmm4, xmm4
 * 00000001401CFA3E: pxor    xmm5, xmm5
 * 00000001401CFA42: mov     rcx, [rbp+0E8h]
 * 00000001401CFA49: mov     r11, [rbp+0F8h]
 * 00000001401CFA50: test    cs:KiKvaShadow, 1
 * 00000001401CFA57: jnz     KiKernelSysretExit
 * 00000001401CFA5D: mov     rbp, r9
 * 00000001401CFA60: mov     rsp, r8
 * 00000001401CFA63: test    word ptr gs:860h, 100h
 * 00000001401CFA6E: jz      short loc_1401CFA79
 * 00000001401CFA70: verw    word ptr gs:701Ch
 * 00000001401CFA79: swapgs
 * 00000001401CFA7C: sysret
 * 00000001401CFA7F: mov     rdx, [rbp+0B8h]
 * 00000001401CFA86: mov     [r11+90h], rdx
 * 00000001401CFA8D: mov     dl, [rbp-58h]
 * 00000001401CFA90: mov     [r11+232h], dl
 * 00000001401CFA97: cli
 * 00000001401CFA98: mov     rsp, rbp
 * 00000001401CFA9B: mov     rbp, [rbp+0D8h]
 * 00000001401CFAA2: mov     rsp, [rsp+90h+arg_68]
 * 00000001401CFAAA: sti
 * 00000001401CFAAB: retn
 * 00000001401CFAAC: mov     r11, gs:188h
 * 00000001401CFAB5: mov     rcx, cr8
 * 00000001401CFAB9: or      cl, [r11+24Ah]
 * 00000001401CFAC0: or      ecx, [r11+1E4h]
 * 00000001401CFAC7: jnz     loc_1401CFDD9
 * 00000001401CFACD: cli
 * 00000001401CFACE: mov     [rbp-50h], rax
 * 00000001401CFAD2: mov     rcx, gs:188h
 * 00000001401CFADB: test    byte ptr [rcx+0C2h], 3
 * 00000001401CFAE2: jz      short loc_1401CFAFF
 * 00000001401CFAE4: mov     ecx, 1
 * 00000001401CFAE9: mov     cr8, rcx
 * 00000001401CFAED: sti
 * 00000001401CFAEE: call    KiInitiateUserApc
 * 00000001401CFAF3: mov     ecx, 0
 * 00000001401CFAF8: mov     cr8, rcx
 * 00000001401CFAFC: cli
 * 00000001401CFAFD: jmp     short loc_1401CFAD2
 * 00000001401CFAFF: test    byte ptr gs:86Ch, 2
 * 00000001401CFB08: jz      short loc_1401CFB11
 * 00000001401CFB0A: xor     ecx, ecx
 * 00000001401CFB0C: call    KiUpdateStibpPairing
 * 00000001401CFB11: mov     rcx, gs:188h
 * 00000001401CFB1A: test    dword ptr [rcx], 8000000h
 * 00000001401CFB20: jz      short loc_1401CFB27
 * 00000001401CFB22: call    KiRestoreSetContextState
 * 00000001401CFB27: mov     rcx, gs:188h
 * 00000001401CFB30: test    byte ptr [rcx+2], 1
 * 00000001401CFB34: jz      short loc_1401CFB44
 * 00000001401CFB36: call    KiCopyCounters
 * 00000001401CFB3B: mov     rcx, gs:188h
 * 00000001401CFB44: cmp     word ptr [rbp+80h], 0
 * 00000001401CFB4C: jz      short loc_1401CFB53
 * 00000001401CFB4E: call    KiRestoreDebugRegisterState
 * 00000001401CFB53: mov     byte ptr gs:856h, 0
 * 00000001401CFB5C: movzx   eax, word ptr gs:86Ah
 * 00000001401CFB65: cmp     gs:864h, ax
 * 00000001401CFB6E: jz      short loc_1401CFB82
 * 00000001401CFB70: mov     gs:864h, ax
 * 00000001401CFB79: mov     ecx, 48h ; 'H'
 * 00000001401CFB7E: xor     edx, edx
 * 00000001401CFB80: wrmsr
 * 00000001401CFB82: btr     word ptr gs:860h, 2
 * 00000001401CFB8D: jnb     short loc_1401CFB9D
 * 00000001401CFB8F: mov     eax, 1
 * 00000001401CFB94: xor     edx, edx
 * 00000001401CFB96: mov     ecx, 49h ; 'I'
 * 00000001401CFB9B: wrmsr
 * 00000001401CFB9D: btr     word ptr gs:860h, 5
 * 00000001401CFBA8: jnb     loc_1401CFCD3
 * 00000001401CFBAE: call    loc_1401CFCC1
 * 00000001401CFBB3: add     rsp, 8
 * 00000001401CFBB7: call    loc_1401CFCCA
 * 00000001401CFBBC: add     rsp, 8
 * 00000001401CFBC0: call    loc_1401CFBB3
 * 00000001401CFBC5: add     rsp, 8
 * 00000001401CFBC9: call    loc_1401CFBBC
 * 00000001401CFBCE: add     rsp, 8
 * 00000001401CFBD2: call    loc_1401CFBC5
 * 00000001401CFBD7: add     rsp, 8
 * 00000001401CFBDB: call    loc_1401CFBCE
 * 00000001401CFBE0: add     rsp, 8
 * 00000001401CFBE4: call    loc_1401CFBD7
 * 00000001401CFBE9: add     rsp, 8
 * 00000001401CFBED: call    loc_1401CFBE0
 * 00000001401CFBF2: add     rsp, 8
 * 00000001401CFBF6: call    loc_1401CFBE9
 * 00000001401CFBFB: add     rsp, 8
 * 00000001401CFBFF: call    loc_1401CFBF2
 * 00000001401CFC04: add     rsp, 8
 * 00000001401CFC08: call    loc_1401CFBFB
 * 00000001401CFC0D: add     rsp, 8
 * 00000001401CFC11: call    loc_1401CFC04
 * 00000001401CFC16: add     rsp, 8
 * 00000001401CFC1A: call    loc_1401CFC0D
 * 00000001401CFC1F: add     rsp, 8
 * 00000001401CFC23: call    loc_1401CFC16
 * 00000001401CFC28: add     rsp, 8
 * 00000001401CFC2C: call    loc_1401CFC1F
 * 00000001401CFC31: add     rsp, 8
 * 00000001401CFC35: call    loc_1401CFC28
 * 00000001401CFC3A: add     rsp, 8
 * 00000001401CFC3E: call    loc_1401CFC31
 * 00000001401CFC43: add     rsp, 8
 * 00000001401CFC47: call    loc_1401CFC3A
 * 00000001401CFC4C: add     rsp, 8
 * 00000001401CFC50: call    loc_1401CFC43
 * 00000001401CFC55: add     rsp, 8
 * 00000001401CFC59: call    loc_1401CFC4C
 * 00000001401CFC5E: add     rsp, 8
 * 00000001401CFC62: call    loc_1401CFC55
 * 00000001401CFC67: add     rsp, 8
 * 00000001401CFC6B: call    loc_1401CFC5E
 * 00000001401CFC70: add     rsp, 8
 * 00000001401CFC74: call    loc_1401CFC67
 * 00000001401CFC79: add     rsp, 8
 * 00000001401CFC7D: call    loc_1401CFC70
 * 00000001401CFC82: add     rsp, 8
 * 00000001401CFC86: call    loc_1401CFC79
 * 00000001401CFC8B: add     rsp, 8
 * 00000001401CFC8F: call    loc_1401CFC82
 * 00000001401CFC94: add     rsp, 8
 * 00000001401CFC98: call    loc_1401CFC8B
 * 00000001401CFC9D: add     rsp, 8
 * 00000001401CFCA1: call    loc_1401CFC94
 * 00000001401CFCA6: add     rsp, 8
 * 00000001401CFCAA: call    loc_1401CFC9D
 * 00000001401CFCAF: add     rsp, 8
 * 00000001401CFCB3: call    loc_1401CFCA6
 * 00000001401CFCB8: add     rsp, 8
 * 00000001401CFCBC: call    loc_1401CFCAF
 * 00000001401CFCC1: add     rsp, 8
 * 00000001401CFCC5: call    loc_1401CFCB8
 * 00000001401CFCCA: add     rsp, 8
 * 00000001401CFCCE: mov     eax, 0DADAh
 * 00000001401CFCD3: test    word ptr gs:860h, 80h
 * 00000001401CFCDE: jz      short loc_1401CFCEC
 * 00000001401CFCE0: xor     eax, eax
 * 00000001401CFCE2: xor     edx, edx
 * 00000001401CFCE4: mov     ecx, 1
 * 00000001401CFCE9: div     rcx
 * 00000001401CFCEC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401CFCF0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401CFCF4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401CFCF8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401CFCFC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401CFD00: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401CFD04: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401CFD08: mov     r11, [rbp-20h]
 * 00000001401CFD0C: mov     r10, [rbp-28h]
 * 00000001401CFD10: mov     r9, [rbp-30h]
 * 00000001401CFD14: mov     r8, [rbp-38h]
 * 00000001401CFD18: mov     rdx, [rbp-40h]
 * 00000001401CFD1C: mov     rcx, [rbp-48h]
 * 00000001401CFD20: mov     rax, [rbp-50h]
 * 00000001401CFD24: mov     rsi, [rbp+0D0h]
 * 00000001401CFD2B: mov     rdi, [rbp+0C8h]
 * 00000001401CFD32: mov     rbx, [rbp+0C0h]
 * 00000001401CFD39: mov     rsp, rbp
 * 00000001401CFD3C: mov     rbp, [rbp+0D8h]
 * 00000001401CFD43: add     rsp, 0E8h
 * 00000001401CFD4A: test    cs:KiKvaShadow, 1
 * 00000001401CFD51: jz      short loc_1401CFD58
 * 00000001401CFD53: jmp     KiKernelExit
 * 00000001401CFD58: test    word ptr gs:860h, 100h
 * 00000001401CFD63: jz      short loc_1401CFD6A
 * 00000001401CFD65: verw    [rsp-158h+arg_170]
 * 00000001401CFD6A: swapgs
 * 00000001401CFD6D: iretq
 * 00000001401CFD6F: cmp     edi, 20h ; ' '
 * 00000001401CFD72: jnz     short loc_1401CFDCF
 * 00000001401CFD74: mov     [rbp-80h], eax
 * 00000001401CFD77: mov     [rbp-78h], rcx
 * 00000001401CFD7B: mov     [rbp-70h], rdx
 * 00000001401CFD7F: mov     [rbp-68h], r8
 * 00000001401CFD83: mov     [rbp-60h], r9
 * 00000001401CFD87: call    KiConvertToGuiThread
 * 00000001401CFD8C: or      eax, eax
 * 00000001401CFD8E: mov     eax, [rbp-80h]
 * 00000001401CFD91: mov     rcx, [rbp-78h]
 * 00000001401CFD95: mov     rdx, [rbp-70h]
 * 00000001401CFD99: mov     r8, [rbp-68h]
 * 00000001401CFD9D: mov     r9, [rbp-60h]
 * 00000001401CFDA1: mov     [rbx+90h], rsp
 * 00000001401CFDA8: jz      KiSystemServiceRepeat
 * 00000001401CFDAE: lea     rdi, xmmword_1405429A0
 * 00000001401CFDB5: mov     esi, [rdi+10h]
 * 00000001401CFDB8: mov     rdi, [rdi]
 * 00000001401CFDBB: cmp     eax, esi
 * 00000001401CFDBD: jnb     short loc_1401CFDCF
 * 00000001401CFDBF: lea     rdi, [rdi+rsi*4]
 * 00000001401CFDC3: movsx   eax, byte ptr [rdi+rax]
 * 00000001401CFDC7: or      eax, eax
 * 00000001401CFDC9: jle     KiSystemServiceExit
 * 00000001401CFDCF: mov     eax, 0C000001Ch
 * 00000001401CFDD4: jmp     KiSystemServiceExit
 * 00000001401CFDD9: mov     ecx, 4Ah ; 'J'
 * 00000001401CFDDE: xor     r9d, r9d
 * 00000001401CFDE1: mov     r8, cr8
 * 00000001401CFDE5: or      r8d, r8d
 * 00000001401CFDE8: jnz     short loc_1401CFDFE
 * 00000001401CFDEA: mov     ecx, 1
 * 00000001401CFDEF: movzx   r8d, byte ptr [r11+24Ah]
 * 00000001401CFDF7: mov     r9d, [r11+1E4h]
 * 00000001401CFDFE: mov     rdx, [rbp+0E8h]
 * 00000001401CFE05: mov     r10, rbp
 * 00000001401CFE08: call    KiBugCheckDispatch
 * 00000001401CFE0D: sub     rsp, 50h
 * 00000001401CFE11: mov     [rsp+0E0h+var_C0], rcx
 * 00000001401CFE16: mov     [rsp+0E0h+var_B8], rdx
 * 00000001401CFE1B: mov     [rsp+0E0h+var_B0], r8
 * 00000001401CFE20: mov     [rsp+0E0h+var_A8], r9
 * 00000001401CFE25: mov     [rsp+0E0h+var_A0], r10
 * 00000001401CFE2A: mov     rcx, r10
 * 00000001401CFE2D: mov     rdx, rsp
 * 00000001401CFE30: add     rdx, 20h ; ' '
 * 00000001401CFE34: mov     r8, 4
 * 00000001401CFE3B: mov     r9, rsp
 * 00000001401CFE3E: add     r9, 70h ; 'p'
 * 00000001401CFE42: call    KiTrackSystemCallEntry
 * 00000001401CFE47: mov     [rbp-50h], rax
 * 00000001401CFE4B: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001401CFE50: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001401CFE55: mov     r8, [rsp+0E0h+var_B0]
 * 00000001401CFE5A: mov     r9, [rsp+0E0h+var_A8]
 * 00000001401CFE5F: mov     r10, [rsp+0E0h+var_A0]
 * 00000001401CFE64: add     rsp, 50h
 * 00000001401CFE68: mov     rax, r10
 * 00000001401CFE6B: call    rax
 * 00000001401CFE6D: nop     dword ptr [rax]
 * 00000001401CFE70: mov     rcx, [rbp-50h]
 * 00000001401CFE74: mov     rdx, rax
 * 00000001401CFE77: call    KiTrackSystemCallExit
 * 00000001401CFE7C: jmp     loc_1401CF6C8
 * 00000001401CFE81: sub     rsp, 50h
 * 00000001401CFE85: mov     [rsp+0E0h+var_C0], rcx
 * 00000001401CFE8A: mov     [rsp+0E0h+var_B8], rdx
 * 00000001401CFE8F: mov     [rsp+0E0h+var_B0], r8
 * 00000001401CFE94: mov     [rsp+0E0h+var_A8], r9
 * 00000001401CFE99: mov     [rsp+0E0h+var_A0], r10
 * 00000001401CFE9E: mov     rcx, r10
 * 00000001401CFEA1: call    PerfInfoLogSysCallEntry
 * 00000001401CFEA6: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001401CFEAB: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001401CFEB0: mov     r8, [rsp+0E0h+var_B0]
 * 00000001401CFEB5: mov     r9, [rsp+0E0h+var_A8]
 * 00000001401CFEBA: mov     r10, [rsp+0E0h+var_A0]
 * 00000001401CFEBF: add     rsp, 50h
 * 00000001401CFEC3: mov     rax, r10
 * 00000001401CFEC6: call    rax
 * 00000001401CFEC8: nop     dword ptr [rax]
 * 00000001401CFECB: mov     rcx, rax
 * 00000001401CFECE: call    PerfInfoLogSysCallExit
 * 00000001401CFED3: jmp     loc_1401CF6C8
 * 00000001401CFED8: retn
 */
