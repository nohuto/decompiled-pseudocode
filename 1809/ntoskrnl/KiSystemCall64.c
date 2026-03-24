/*
 * XREFs of KiSystemCall64 @ 0x1401CF100
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1401BC090 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x1401C06A0 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1401C1080 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x1401CF100 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x1401CFE00 (KiBugCheckDispatch.c)
 *     KiUmsCallEntry @ 0x1401D0D80 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x1401D1000 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140295EC0 (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x140312320 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403123B0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x1405F4E90 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x140844C80 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x140844D80 (KiTrackSystemCallExit.c)
 *     PsPicoSystemCallDispatch @ 0x14088BF50 (PsPicoSystemCallDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x1401CF100
 * Reason: Hex-Rays returned no pseudocode for 0x1401CF100
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CF100: swapgs
 * 00000001401CF103: mov     gs:10h, rsp
 * 00000001401CF10C: mov     rsp, gs:1A8h
 * 00000001401CF115: push    2Bh ; '+'
 * 00000001401CF117: push    qword ptr gs:10h
 * 00000001401CF11F: push    r11
 * 00000001401CF121: push    33h ; '3'
 * 00000001401CF123: push    rcx
 * 00000001401CF124: mov     rcx, r10
 * 00000001401CF127: sub     rsp, 8
 * 00000001401CF12B: push    rbp
 * 00000001401CF12C: sub     rsp, 158h
 * 00000001401CF133: lea     rbp, [rsp+190h+var_110]
 * 00000001401CF13B: mov     [rbp+0C0h], rbx
 * 00000001401CF142: mov     [rbp+0C8h], rdi
 * 00000001401CF149: mov     [rbp+0D0h], rsi
 * 00000001401CF150: mov     [rbp-50h], rax
 * 00000001401CF154: mov     [rbp-48h], rcx
 * 00000001401CF158: mov     [rbp-40h], rdx
 * 00000001401CF15C: mov     rcx, gs:188h
 * 00000001401CF165: mov     rcx, [rcx+220h]
 * 00000001401CF16C: mov     rcx, [rcx+830h]
 * 00000001401CF173: mov     gs:858h, rcx
 * 00000001401CF17C: mov     cx, gs:850h
 * 00000001401CF185: mov     gs:852h, cx
 * 00000001401CF18E: mov     cx, gs:860h
 * 00000001401CF197: mov     gs:854h, cx
 * 00000001401CF1A0: movzx   eax, word ptr gs:866h
 * 00000001401CF1A9: cmp     gs:864h, ax
 * 00000001401CF1B2: jz      short loc_1401CF1C6
 * 00000001401CF1B4: mov     gs:864h, ax
 * 00000001401CF1BD: mov     ecx, 48h ; 'H'
 * 00000001401CF1C2: xor     edx, edx
 * 00000001401CF1C4: wrmsr
 * 00000001401CF1C6: movzx   edx, word ptr gs:860h
 * 00000001401CF1CF: test    edx, 8
 * 00000001401CF1D5: jz      short loc_1401CF1EE
 * 00000001401CF1D7: mov     eax, 1
 * 00000001401CF1DC: xor     edx, edx
 * 00000001401CF1DE: mov     ecx, 49h ; 'I'
 * 00000001401CF1E3: wrmsr
 * 00000001401CF1E5: movzx   edx, word ptr gs:860h
 * 00000001401CF1EE: test    edx, 2
 * 00000001401CF1F4: jz      loc_1401CF31F
 * 00000001401CF1FA: call    loc_1401CF30D
 * 00000001401CF1FF: add     rsp, 8
 * 00000001401CF203: call    loc_1401CF316
 * 00000001401CF208: add     rsp, 8
 * 00000001401CF20C: call    loc_1401CF1FF
 * 00000001401CF211: add     rsp, 8
 * 00000001401CF215: call    loc_1401CF208
 * 00000001401CF21A: add     rsp, 8
 * 00000001401CF21E: call    loc_1401CF211
 * 00000001401CF223: add     rsp, 8
 * 00000001401CF227: call    loc_1401CF21A
 * 00000001401CF22C: add     rsp, 8
 * 00000001401CF230: call    loc_1401CF223
 * 00000001401CF235: add     rsp, 8
 * 00000001401CF239: call    loc_1401CF22C
 * 00000001401CF23E: add     rsp, 8
 * 00000001401CF242: call    loc_1401CF235
 * 00000001401CF247: add     rsp, 8
 * 00000001401CF24B: call    loc_1401CF23E
 * 00000001401CF250: add     rsp, 8
 * 00000001401CF254: call    loc_1401CF247
 * 00000001401CF259: add     rsp, 8
 * 00000001401CF25D: call    loc_1401CF250
 * 00000001401CF262: add     rsp, 8
 * 00000001401CF266: call    loc_1401CF259
 * 00000001401CF26B: add     rsp, 8
 * 00000001401CF26F: call    loc_1401CF262
 * 00000001401CF274: add     rsp, 8
 * 00000001401CF278: call    loc_1401CF26B
 * 00000001401CF27D: add     rsp, 8
 * 00000001401CF281: call    loc_1401CF274
 * 00000001401CF286: add     rsp, 8
 * 00000001401CF28A: call    loc_1401CF27D
 * 00000001401CF28F: add     rsp, 8
 * 00000001401CF293: call    loc_1401CF286
 * 00000001401CF298: add     rsp, 8
 * 00000001401CF29C: call    loc_1401CF28F
 * 00000001401CF2A1: add     rsp, 8
 * 00000001401CF2A5: call    loc_1401CF298
 * 00000001401CF2AA: add     rsp, 8
 * 00000001401CF2AE: call    loc_1401CF2A1
 * 00000001401CF2B3: add     rsp, 8
 * 00000001401CF2B7: call    loc_1401CF2AA
 * 00000001401CF2BC: add     rsp, 8
 * 00000001401CF2C0: call    loc_1401CF2B3
 * 00000001401CF2C5: add     rsp, 8
 * 00000001401CF2C9: call    loc_1401CF2BC
 * 00000001401CF2CE: add     rsp, 8
 * 00000001401CF2D2: call    loc_1401CF2C5
 * 00000001401CF2D7: add     rsp, 8
 * 00000001401CF2DB: call    loc_1401CF2CE
 * 00000001401CF2E0: add     rsp, 8
 * 00000001401CF2E4: call    loc_1401CF2D7
 * 00000001401CF2E9: add     rsp, 8
 * 00000001401CF2ED: call    loc_1401CF2E0
 * 00000001401CF2F2: add     rsp, 8
 * 00000001401CF2F6: call    loc_1401CF2E9
 * 00000001401CF2FB: add     rsp, 8
 * 00000001401CF2FF: call    loc_1401CF2F2
 * 00000001401CF304: add     rsp, 8
 * 00000001401CF308: call    loc_1401CF2FB
 * 00000001401CF30D: add     rsp, 8
 * 00000001401CF311: call    loc_1401CF304
 * 00000001401CF316: add     rsp, 8
 * 00000001401CF31A: mov     eax, 0DADAh
 * 00000001401CF31F: test    edx, 200h
 * 00000001401CF325: jz      short loc_1401CF32C
 * 00000001401CF327: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CF32C: lfence
 * 00000001401CF32F: mov     byte ptr gs:856h, 0
 * 00000001401CF338: mov     byte ptr [rbp-55h], 2
 * 00000001401CF33C: mov     rbx, gs:188h
 * 00000001401CF345: prefetchw byte ptr [rbx+90h]
 * 00000001401CF34C: stmxcsr dword ptr [rbp-54h]
 * 00000001401CF350: ldmxcsr dword ptr gs:180h
 * 00000001401CF359: cmp     byte ptr [rbx+3], 0
 * 00000001401CF35D: mov     word ptr [rbp+80h], 0
 * 00000001401CF366: jz      loc_1401CF414
 * 00000001401CF36C: test    byte ptr [rbx+3], 3
 * 00000001401CF370: mov     [rbp-38h], r8
 * 00000001401CF374: mov     [rbp-30h], r9
 * 00000001401CF378: jz      short loc_1401CF37F
 * 00000001401CF37A: call    KiSaveDebugRegisterState
 * 00000001401CF37F: test    byte ptr [rbx+3], 4
 * 00000001401CF383: jz      short loc_1401CF3B3
 * 00000001401CF385: mov     [rbp-20h], r10
 * 00000001401CF389: mov     [rbp-28h], r10
 * 00000001401CF38D: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CF391: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CF395: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CF399: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CF39D: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CF3A1: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CF3A5: sti
 * 00000001401CF3A6: mov     rcx, rsp
 * 00000001401CF3A9: call    PsPicoSystemCallDispatch
 * 00000001401CF3AE: jmp     KiSystemServiceExitPico
 * 00000001401CF3B3: test    byte ptr [rbx+3], 80h
 * 00000001401CF3B7: jz      short loc_1401CF401
 * 00000001401CF3B9: mov     ecx, 0C0000102h
 * 00000001401CF3BE: rdmsr
 * 00000001401CF3C0: shl     rdx, 20h
 * 00000001401CF3C4: or      rax, rdx
 * 00000001401CF3C7: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CF3CE: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CF3D6: cmp     [rbx+0F0h], rax
 * 00000001401CF3DD: jz      short loc_1401CF401
 * 00000001401CF3DF: mov     rdx, [rbx+1F0h]
 * 00000001401CF3E6: bts     dword ptr [rbx+74h], 8
 * 00000001401CF3EB: dec     word ptr [rbx+1E6h]
 * 00000001401CF3F2: mov     [rdx+80h], rax
 * 00000001401CF3F9: sti
 * 00000001401CF3FA: call    KiUmsCallEntry
 * 00000001401CF3FF: jmp     short loc_1401CF40C
 * 00000001401CF401: test    byte ptr [rbx+3], 40h
 * 00000001401CF405: jz      short loc_1401CF40C
 * 00000001401CF407: bts     dword ptr [rbx+74h], 10h
 * 00000001401CF40C: mov     r8, [rbp-38h]
 * 00000001401CF410: mov     r9, [rbp-30h]
 * 00000001401CF414: mov     rax, [rbp-50h]
 * 00000001401CF418: mov     rcx, [rbp-48h]
 * 00000001401CF41C: mov     rdx, [rbp-40h]
 * 00000001401CF420: sti
 * 00000001401CF421: mov     [rbx+88h], rcx
 * 00000001401CF428: mov     [rbx+80h], eax
 * 00000001401CF42E: xchg    ax, ax
 * 00000001401CF430: mov     [rbx+90h], rsp
 * 00000001401CF437: mov     edi, eax
 * 00000001401CF439: shr     edi, 7
 * 00000001401CF43C: and     edi, 20h
 * 00000001401CF43F: and     eax, 0FFFh
 * 00000001401CF444: lea     r10, KeServiceDescriptorTable
 * 00000001401CF44B: lea     r11, KeServiceDescriptorTableShadow
 * 00000001401CF452: test    dword ptr [rbx+78h], 80h
 * 00000001401CF459: jz      short loc_1401CF46E
 * 00000001401CF45B: test    dword ptr [rbx+78h], 200000h
 * 00000001401CF462: jz      short loc_1401CF46B
 * 00000001401CF464: lea     r11, KeServiceDescriptorTableFilter
 * 00000001401CF46B: mov     r10, r11
 * 00000001401CF46E: cmp     eax, [r10+rdi+10h]
 * 00000001401CF473: jnb     loc_1401CFC6F
 * 00000001401CF479: mov     r10, [r10+rdi]
 * 00000001401CF47D: movsxd  r11, dword ptr [r10+rax*4]
 * 00000001401CF481: mov     rax, r11
 * 00000001401CF484: sar     r11, 4
 * 00000001401CF488: add     r10, r11
 * 00000001401CF48B: cmp     edi, 20h ; ' '
 * 00000001401CF48E: jnz     short loc_1401CF4E0
 * 00000001401CF490: mov     r11, [rbx+0F0h]
 * 00000001401CF497: cmp     dword ptr [r11+1740h], 0
 * 00000001401CF49F: jz      short loc_1401CF4E0
 * 00000001401CF4A1: mov     [rbp-50h], rax
 * 00000001401CF4A5: mov     [rbp-48h], rcx
 * 00000001401CF4A9: mov     [rbp-40h], rdx
 * 00000001401CF4AD: mov     rbx, r8
 * 00000001401CF4B0: mov     rdi, r9
 * 00000001401CF4B3: mov     rsi, r10
 * 00000001401CF4B6: mov     ecx, 7
 * 00000001401CF4BB: xor     edx, edx
 * 00000001401CF4BD: xor     r8, r8
 * 00000001401CF4C0: xor     r9, r9
 * 00000001401CF4C3: call    PsInvokeWin32Callout
 * 00000001401CF4C8: mov     rax, [rbp-50h]
 * 00000001401CF4CC: mov     rcx, [rbp-48h]
 * 00000001401CF4D0: mov     rdx, [rbp-40h]
 * 00000001401CF4D4: mov     r8, rbx
 * 00000001401CF4D7: mov     r9, rdi
 * 00000001401CF4DA: mov     r10, rsi
 * 00000001401CF4DD: nop     dword ptr [rax]
 * 00000001401CF4E0: and     eax, 0Fh
 * 00000001401CF4E3: jz      KiSystemServiceCopyEnd
 * 00000001401CF4E9: shl     eax, 3
 * 00000001401CF4EC: lea     rsp, [rsp-70h]
 * 00000001401CF4F1: lea     rdi, [rsp+100h+var_E8]
 * 00000001401CF4F6: mov     rsi, [rbp+100h]
 * 00000001401CF4FD: lea     rsi, [rsi+20h]
 * 00000001401CF501: test    byte ptr [rbp+0F0h], 1
 * 00000001401CF508: jz      short loc_1401CF520
 * 00000001401CF50A: cmp     rsi, cs:MmUserProbeAddress
 * 00000001401CF511: cmovnb  rsi, cs:MmUserProbeAddress
 * 00000001401CF519: nop     dword ptr [rax+00000000h]
 * 00000001401CF520: lea     r11, KiSystemServiceCopyEnd
 * 00000001401CF527: sub     r11, rax
 * 00000001401CF52A: jmp     r11
 * 00000001401CF530: mov     rax, [rsi+70h]
 * 00000001401CF534: mov     [rdi+70h], rax
 * 00000001401CF538: mov     rax, [rsi+68h]
 * 00000001401CF53C: mov     [rdi+68h], rax
 * 00000001401CF540: mov     rax, [rsi+60h]
 * 00000001401CF544: mov     [rdi+60h], rax
 * 00000001401CF548: mov     rax, [rsi+58h]
 * 00000001401CF54C: mov     [rdi+58h], rax
 * 00000001401CF550: mov     rax, [rsi+50h]
 * 00000001401CF554: mov     [rdi+50h], rax
 * 00000001401CF558: mov     rax, [rsi+48h]
 * 00000001401CF55C: mov     [rdi+48h], rax
 * 00000001401CF560: mov     rax, [rsi+40h]
 * 00000001401CF564: mov     [rdi+40h], rax
 * 00000001401CF568: mov     rax, [rsi+38h]
 * 00000001401CF56C: mov     [rdi+38h], rax
 * 00000001401CF570: mov     rax, [rsi+30h]
 * 00000001401CF574: mov     [rdi+30h], rax
 * 00000001401CF578: mov     rax, [rsi+28h]
 * 00000001401CF57C: mov     [rdi+28h], rax
 * 00000001401CF580: mov     rax, [rsi+20h]
 * 00000001401CF584: mov     [rdi+20h], rax
 * 00000001401CF588: mov     rax, [rsi+18h]
 * 00000001401CF58C: mov     [rdi+18h], rax
 * 00000001401CF590: mov     rax, [rsi+10h]
 * 00000001401CF594: mov     [rdi+10h], rax
 * 00000001401CF598: mov     rax, [rsi+8]
 * 00000001401CF59C: mov     [rdi+8], rax
 * 00000001401CF5A0: test    cs:KiDynamicTraceMask, 1
 * 00000001401CF5AA: jnz     loc_1401CFD0D
 * 00000001401CF5B0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001401CF5BA: jnz     loc_1401CFD81
 * 00000001401CF5C0: mov     rax, r10
 * 00000001401CF5C3: call    rax
 * 00000001401CF5C5: nop     dword ptr [rax]
 * 00000001401CF5C8: inc     dword ptr gs:2EB8h
 * 00000001401CF5D0: mov     rbx, [rbp+0C0h]
 * 00000001401CF5D7: mov     rdi, [rbp+0C8h]
 * 00000001401CF5DE: mov     rsi, [rbp+0D0h]
 * 00000001401CF5E5: mov     r11, gs:188h
 * 00000001401CF5EE: test    byte ptr [rbp+0F0h], 1
 * 00000001401CF5F5: jz      loc_1401CF97F
 * 00000001401CF5FB: mov     rcx, cr8
 * 00000001401CF5FF: or      cl, [r11+24Ah]
 * 00000001401CF606: or      ecx, [r11+1E4h]
 * 00000001401CF60D: jnz     loc_1401CFCD9
 * 00000001401CF613: cli
 * 00000001401CF614: mov     rcx, gs:188h
 * 00000001401CF61D: test    byte ptr [rcx+0C2h], 3
 * 00000001401CF624: jz      short loc_1401CF67F
 * 00000001401CF626: mov     [rbp-50h], rax
 * 00000001401CF62A: xor     eax, eax
 * 00000001401CF62C: mov     [rbp-48h], rax
 * 00000001401CF630: mov     [rbp-40h], rax
 * 00000001401CF634: mov     [rbp-38h], rax
 * 00000001401CF638: mov     [rbp-30h], rax
 * 00000001401CF63C: mov     [rbp-28h], rax
 * 00000001401CF640: mov     [rbp-20h], rax
 * 00000001401CF644: pxor    xmm0, xmm0
 * 00000001401CF648: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CF64C: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401CF650: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401CF654: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401CF658: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401CF65C: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401CF660: mov     ecx, 1
 * 00000001401CF665: mov     cr8, rcx
 * 00000001401CF669: sti
 * 00000001401CF66A: call    KiInitiateUserApc
 * 00000001401CF66F: cli
 * 00000001401CF670: mov     ecx, 0
 * 00000001401CF675: mov     cr8, rcx
 * 00000001401CF679: mov     rax, [rbp-50h]
 * 00000001401CF67D: jmp     short loc_1401CF614
 * 00000001401CF67F: test    byte ptr gs:86Ch, 2
 * 00000001401CF688: jz      short loc_1401CF699
 * 00000001401CF68A: mov     [rbp-50h], rax
 * 00000001401CF68E: xor     ecx, ecx
 * 00000001401CF690: call    KiUpdateStibpPairing
 * 00000001401CF695: mov     rax, [rbp-50h]
 * 00000001401CF699: mov     rcx, gs:188h
 * 00000001401CF6A2: test    dword ptr [rcx], 8000000h
 * 00000001401CF6A8: jz      short loc_1401CF6E9
 * 00000001401CF6AA: mov     [rbp-50h], rax
 * 00000001401CF6AE: xor     eax, eax
 * 00000001401CF6B0: mov     [rbp-48h], rax
 * 00000001401CF6B4: mov     [rbp-40h], rax
 * 00000001401CF6B8: mov     [rbp-38h], rax
 * 00000001401CF6BC: mov     [rbp-30h], rax
 * 00000001401CF6C0: mov     [rbp-28h], rax
 * 00000001401CF6C4: mov     [rbp-20h], rax
 * 00000001401CF6C8: pxor    xmm0, xmm0
 * 00000001401CF6CC: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CF6D0: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401CF6D4: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401CF6D8: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401CF6DC: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401CF6E0: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401CF6E4: call    KiRestoreSetContextState
 * 00000001401CF6E9: mov     rcx, gs:188h
 * 00000001401CF6F2: test    dword ptr [rcx], 40010000h
 * 00000001401CF6F8: jz      short loc_1401CF727
 * 00000001401CF6FA: mov     [rbp-50h], rax
 * 00000001401CF6FE: test    byte ptr [rcx+2], 1
 * 00000001401CF702: jz      short loc_1401CF712
 * 00000001401CF704: call    KiCopyCounters
 * 00000001401CF709: mov     rcx, gs:188h
 * 00000001401CF712: test    byte ptr [rcx+3], 40h
 * 00000001401CF716: jz      short loc_1401CF723
 * 00000001401CF718: lea     rsp, [rbp-80h]
 * 00000001401CF71C: xor     ecx, ecx
 * 00000001401CF71E: call    KiUmsExit
 * 00000001401CF723: mov     rax, [rbp-50h]
 * 00000001401CF727: ldmxcsr dword ptr [rbp-54h]
 * 00000001401CF72B: xor     r10, r10
 * 00000001401CF72E: cmp     word ptr [rbp+80h], 0
 * 00000001401CF736: jz      short loc_1401CF779
 * 00000001401CF738: mov     [rbp-50h], rax
 * 00000001401CF73C: call    KiRestoreDebugRegisterState
 * 00000001401CF741: mov     rax, gs:188h
 * 00000001401CF74A: mov     rax, [rax+0B8h]
 * 00000001401CF751: mov     rax, [rax+2C8h]
 * 00000001401CF758: or      rax, rax
 * 00000001401CF75B: jz      short loc_1401CF775
 * 00000001401CF75D: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001401CF765: jnz     short loc_1401CF775
 * 00000001401CF767: mov     r10, [rbp+0E8h]
 * 00000001401CF76E: mov     [rbp+0E8h], rax
 * 00000001401CF775: mov     rax, [rbp-50h]
 * 00000001401CF779: mov     [rbp-50h], rax
 * 00000001401CF77D: mov     byte ptr gs:856h, 0
 * 00000001401CF786: movzx   eax, word ptr gs:86Ah
 * 00000001401CF78F: cmp     gs:864h, ax
 * 00000001401CF798: jz      short loc_1401CF7AC
 * 00000001401CF79A: mov     gs:864h, ax
 * 00000001401CF7A3: mov     ecx, 48h ; 'H'
 * 00000001401CF7A8: xor     edx, edx
 * 00000001401CF7AA: wrmsr
 * 00000001401CF7AC: btr     word ptr gs:860h, 2
 * 00000001401CF7B7: jnb     short loc_1401CF7C7
 * 00000001401CF7B9: mov     eax, 1
 * 00000001401CF7BE: xor     edx, edx
 * 00000001401CF7C0: mov     ecx, 49h ; 'I'
 * 00000001401CF7C5: wrmsr
 * 00000001401CF7C7: btr     word ptr gs:860h, 5
 * 00000001401CF7D2: jnb     loc_1401CF8FD
 * 00000001401CF7D8: call    loc_1401CF8EB
 * 00000001401CF7DD: add     rsp, 8
 * 00000001401CF7E1: call    loc_1401CF8F4
 * 00000001401CF7E6: add     rsp, 8
 * 00000001401CF7EA: call    loc_1401CF7DD
 * 00000001401CF7EF: add     rsp, 8
 * 00000001401CF7F3: call    loc_1401CF7E6
 * 00000001401CF7F8: add     rsp, 8
 * 00000001401CF7FC: call    loc_1401CF7EF
 * 00000001401CF801: add     rsp, 8
 * 00000001401CF805: call    loc_1401CF7F8
 * 00000001401CF80A: add     rsp, 8
 * 00000001401CF80E: call    loc_1401CF801
 * 00000001401CF813: add     rsp, 8
 * 00000001401CF817: call    loc_1401CF80A
 * 00000001401CF81C: add     rsp, 8
 * 00000001401CF820: call    loc_1401CF813
 * 00000001401CF825: add     rsp, 8
 * 00000001401CF829: call    loc_1401CF81C
 * 00000001401CF82E: add     rsp, 8
 * 00000001401CF832: call    loc_1401CF825
 * 00000001401CF837: add     rsp, 8
 * 00000001401CF83B: call    loc_1401CF82E
 * 00000001401CF840: add     rsp, 8
 * 00000001401CF844: call    loc_1401CF837
 * 00000001401CF849: add     rsp, 8
 * 00000001401CF84D: call    loc_1401CF840
 * 00000001401CF852: add     rsp, 8
 * 00000001401CF856: call    loc_1401CF849
 * 00000001401CF85B: add     rsp, 8
 * 00000001401CF85F: call    loc_1401CF852
 * 00000001401CF864: add     rsp, 8
 * 00000001401CF868: call    loc_1401CF85B
 * 00000001401CF86D: add     rsp, 8
 * 00000001401CF871: call    loc_1401CF864
 * 00000001401CF876: add     rsp, 8
 * 00000001401CF87A: call    loc_1401CF86D
 * 00000001401CF87F: add     rsp, 8
 * 00000001401CF883: call    loc_1401CF876
 * 00000001401CF888: add     rsp, 8
 * 00000001401CF88C: call    loc_1401CF87F
 * 00000001401CF891: add     rsp, 8
 * 00000001401CF895: call    loc_1401CF888
 * 00000001401CF89A: add     rsp, 8
 * 00000001401CF89E: call    loc_1401CF891
 * 00000001401CF8A3: add     rsp, 8
 * 00000001401CF8A7: call    loc_1401CF89A
 * 00000001401CF8AC: add     rsp, 8
 * 00000001401CF8B0: call    loc_1401CF8A3
 * 00000001401CF8B5: add     rsp, 8
 * 00000001401CF8B9: call    loc_1401CF8AC
 * 00000001401CF8BE: add     rsp, 8
 * 00000001401CF8C2: call    loc_1401CF8B5
 * 00000001401CF8C7: add     rsp, 8
 * 00000001401CF8CB: call    loc_1401CF8BE
 * 00000001401CF8D0: add     rsp, 8
 * 00000001401CF8D4: call    loc_1401CF8C7
 * 00000001401CF8D9: add     rsp, 8
 * 00000001401CF8DD: call    loc_1401CF8D0
 * 00000001401CF8E2: add     rsp, 8
 * 00000001401CF8E6: call    loc_1401CF8D9
 * 00000001401CF8EB: add     rsp, 8
 * 00000001401CF8EF: call    loc_1401CF8E2
 * 00000001401CF8F4: add     rsp, 8
 * 00000001401CF8F8: mov     eax, 0DADAh
 * 00000001401CF8FD: test    word ptr gs:860h, 80h
 * 00000001401CF908: jz      short loc_1401CF916
 * 00000001401CF90A: xor     eax, eax
 * 00000001401CF90C: xor     edx, edx
 * 00000001401CF90E: mov     ecx, 1
 * 00000001401CF913: div     rcx
 * 00000001401CF916: mov     rax, [rbp-50h]
 * 00000001401CF91A: mov     r8, [rbp+100h]
 * 00000001401CF921: mov     r9, [rbp+0D8h]
 * 00000001401CF928: xor     edx, edx
 * 00000001401CF92A: pxor    xmm0, xmm0
 * 00000001401CF92E: pxor    xmm1, xmm1
 * 00000001401CF932: pxor    xmm2, xmm2
 * 00000001401CF936: pxor    xmm3, xmm3
 * 00000001401CF93A: pxor    xmm4, xmm4
 * 00000001401CF93E: pxor    xmm5, xmm5
 * 00000001401CF942: mov     rcx, [rbp+0E8h]
 * 00000001401CF949: mov     r11, [rbp+0F8h]
 * 00000001401CF950: test    cs:KiKvaShadow, 1
 * 00000001401CF957: jnz     KiKernelSysretExit
 * 00000001401CF95D: mov     rbp, r9
 * 00000001401CF960: mov     rsp, r8
 * 00000001401CF963: test    word ptr gs:860h, 100h
 * 00000001401CF96E: jz      short loc_1401CF979
 * 00000001401CF970: verw    word ptr gs:701Ch
 * 00000001401CF979: swapgs
 * 00000001401CF97C: sysret
 * 00000001401CF97F: mov     rdx, [rbp+0B8h]
 * 00000001401CF986: mov     [r11+90h], rdx
 * 00000001401CF98D: mov     dl, [rbp-58h]
 * 00000001401CF990: mov     [r11+232h], dl
 * 00000001401CF997: cli
 * 00000001401CF998: mov     rsp, rbp
 * 00000001401CF99B: mov     rbp, [rbp+0D8h]
 * 00000001401CF9A2: mov     rsp, [rsp+90h+arg_68]
 * 00000001401CF9AA: sti
 * 00000001401CF9AB: retn
 * 00000001401CF9AC: mov     r11, gs:188h
 * 00000001401CF9B5: mov     rcx, cr8
 * 00000001401CF9B9: or      cl, [r11+24Ah]
 * 00000001401CF9C0: or      ecx, [r11+1E4h]
 * 00000001401CF9C7: jnz     loc_1401CFCD9
 * 00000001401CF9CD: cli
 * 00000001401CF9CE: mov     [rbp-50h], rax
 * 00000001401CF9D2: mov     rcx, gs:188h
 * 00000001401CF9DB: test    byte ptr [rcx+0C2h], 3
 * 00000001401CF9E2: jz      short loc_1401CF9FF
 * 00000001401CF9E4: mov     ecx, 1
 * 00000001401CF9E9: mov     cr8, rcx
 * 00000001401CF9ED: sti
 * 00000001401CF9EE: call    KiInitiateUserApc
 * 00000001401CF9F3: mov     ecx, 0
 * 00000001401CF9F8: mov     cr8, rcx
 * 00000001401CF9FC: cli
 * 00000001401CF9FD: jmp     short loc_1401CF9D2
 * 00000001401CF9FF: test    byte ptr gs:86Ch, 2
 * 00000001401CFA08: jz      short loc_1401CFA11
 * 00000001401CFA0A: xor     ecx, ecx
 * 00000001401CFA0C: call    KiUpdateStibpPairing
 * 00000001401CFA11: mov     rcx, gs:188h
 * 00000001401CFA1A: test    dword ptr [rcx], 8000000h
 * 00000001401CFA20: jz      short loc_1401CFA27
 * 00000001401CFA22: call    KiRestoreSetContextState
 * 00000001401CFA27: mov     rcx, gs:188h
 * 00000001401CFA30: test    byte ptr [rcx+2], 1
 * 00000001401CFA34: jz      short loc_1401CFA44
 * 00000001401CFA36: call    KiCopyCounters
 * 00000001401CFA3B: mov     rcx, gs:188h
 * 00000001401CFA44: cmp     word ptr [rbp+80h], 0
 * 00000001401CFA4C: jz      short loc_1401CFA53
 * 00000001401CFA4E: call    KiRestoreDebugRegisterState
 * 00000001401CFA53: mov     byte ptr gs:856h, 0
 * 00000001401CFA5C: movzx   eax, word ptr gs:86Ah
 * 00000001401CFA65: cmp     gs:864h, ax
 * 00000001401CFA6E: jz      short loc_1401CFA82
 * 00000001401CFA70: mov     gs:864h, ax
 * 00000001401CFA79: mov     ecx, 48h ; 'H'
 * 00000001401CFA7E: xor     edx, edx
 * 00000001401CFA80: wrmsr
 * 00000001401CFA82: btr     word ptr gs:860h, 2
 * 00000001401CFA8D: jnb     short loc_1401CFA9D
 * 00000001401CFA8F: mov     eax, 1
 * 00000001401CFA94: xor     edx, edx
 * 00000001401CFA96: mov     ecx, 49h ; 'I'
 * 00000001401CFA9B: wrmsr
 * 00000001401CFA9D: btr     word ptr gs:860h, 5
 * 00000001401CFAA8: jnb     loc_1401CFBD3
 * 00000001401CFAAE: call    loc_1401CFBC1
 * 00000001401CFAB3: add     rsp, 8
 * 00000001401CFAB7: call    loc_1401CFBCA
 * 00000001401CFABC: add     rsp, 8
 * 00000001401CFAC0: call    loc_1401CFAB3
 * 00000001401CFAC5: add     rsp, 8
 * 00000001401CFAC9: call    loc_1401CFABC
 * 00000001401CFACE: add     rsp, 8
 * 00000001401CFAD2: call    loc_1401CFAC5
 * 00000001401CFAD7: add     rsp, 8
 * 00000001401CFADB: call    loc_1401CFACE
 * 00000001401CFAE0: add     rsp, 8
 * 00000001401CFAE4: call    loc_1401CFAD7
 * 00000001401CFAE9: add     rsp, 8
 * 00000001401CFAED: call    loc_1401CFAE0
 * 00000001401CFAF2: add     rsp, 8
 * 00000001401CFAF6: call    loc_1401CFAE9
 * 00000001401CFAFB: add     rsp, 8
 * 00000001401CFAFF: call    loc_1401CFAF2
 * 00000001401CFB04: add     rsp, 8
 * 00000001401CFB08: call    loc_1401CFAFB
 * 00000001401CFB0D: add     rsp, 8
 * 00000001401CFB11: call    loc_1401CFB04
 * 00000001401CFB16: add     rsp, 8
 * 00000001401CFB1A: call    loc_1401CFB0D
 * 00000001401CFB1F: add     rsp, 8
 * 00000001401CFB23: call    loc_1401CFB16
 * 00000001401CFB28: add     rsp, 8
 * 00000001401CFB2C: call    loc_1401CFB1F
 * 00000001401CFB31: add     rsp, 8
 * 00000001401CFB35: call    loc_1401CFB28
 * 00000001401CFB3A: add     rsp, 8
 * 00000001401CFB3E: call    loc_1401CFB31
 * 00000001401CFB43: add     rsp, 8
 * 00000001401CFB47: call    loc_1401CFB3A
 * 00000001401CFB4C: add     rsp, 8
 * 00000001401CFB50: call    loc_1401CFB43
 * 00000001401CFB55: add     rsp, 8
 * 00000001401CFB59: call    loc_1401CFB4C
 * 00000001401CFB5E: add     rsp, 8
 * 00000001401CFB62: call    loc_1401CFB55
 * 00000001401CFB67: add     rsp, 8
 * 00000001401CFB6B: call    loc_1401CFB5E
 * 00000001401CFB70: add     rsp, 8
 * 00000001401CFB74: call    loc_1401CFB67
 * 00000001401CFB79: add     rsp, 8
 * 00000001401CFB7D: call    loc_1401CFB70
 * 00000001401CFB82: add     rsp, 8
 * 00000001401CFB86: call    loc_1401CFB79
 * 00000001401CFB8B: add     rsp, 8
 * 00000001401CFB8F: call    loc_1401CFB82
 * 00000001401CFB94: add     rsp, 8
 * 00000001401CFB98: call    loc_1401CFB8B
 * 00000001401CFB9D: add     rsp, 8
 * 00000001401CFBA1: call    loc_1401CFB94
 * 00000001401CFBA6: add     rsp, 8
 * 00000001401CFBAA: call    loc_1401CFB9D
 * 00000001401CFBAF: add     rsp, 8
 * 00000001401CFBB3: call    loc_1401CFBA6
 * 00000001401CFBB8: add     rsp, 8
 * 00000001401CFBBC: call    loc_1401CFBAF
 * 00000001401CFBC1: add     rsp, 8
 * 00000001401CFBC5: call    loc_1401CFBB8
 * 00000001401CFBCA: add     rsp, 8
 * 00000001401CFBCE: mov     eax, 0DADAh
 * 00000001401CFBD3: test    word ptr gs:860h, 80h
 * 00000001401CFBDE: jz      short loc_1401CFBEC
 * 00000001401CFBE0: xor     eax, eax
 * 00000001401CFBE2: xor     edx, edx
 * 00000001401CFBE4: mov     ecx, 1
 * 00000001401CFBE9: div     rcx
 * 00000001401CFBEC: ldmxcsr dword ptr [rbp-54h]
 * 00000001401CFBF0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401CFBF4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401CFBF8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401CFBFC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401CFC00: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401CFC04: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401CFC08: mov     r11, [rbp-20h]
 * 00000001401CFC0C: mov     r10, [rbp-28h]
 * 00000001401CFC10: mov     r9, [rbp-30h]
 * 00000001401CFC14: mov     r8, [rbp-38h]
 * 00000001401CFC18: mov     rdx, [rbp-40h]
 * 00000001401CFC1C: mov     rcx, [rbp-48h]
 * 00000001401CFC20: mov     rax, [rbp-50h]
 * 00000001401CFC24: mov     rsi, [rbp+0D0h]
 * 00000001401CFC2B: mov     rdi, [rbp+0C8h]
 * 00000001401CFC32: mov     rbx, [rbp+0C0h]
 * 00000001401CFC39: mov     rsp, rbp
 * 00000001401CFC3C: mov     rbp, [rbp+0D8h]
 * 00000001401CFC43: add     rsp, 0E8h
 * 00000001401CFC4A: test    cs:KiKvaShadow, 1
 * 00000001401CFC51: jz      short loc_1401CFC58
 * 00000001401CFC53: jmp     KiKernelExit
 * 00000001401CFC58: test    word ptr gs:860h, 100h
 * 00000001401CFC63: jz      short loc_1401CFC6A
 * 00000001401CFC65: verw    [rsp-158h+arg_170]
 * 00000001401CFC6A: swapgs
 * 00000001401CFC6D: iretq
 * 00000001401CFC6F: cmp     edi, 20h ; ' '
 * 00000001401CFC72: jnz     short loc_1401CFCCF
 * 00000001401CFC74: mov     [rbp-80h], eax
 * 00000001401CFC77: mov     [rbp-78h], rcx
 * 00000001401CFC7B: mov     [rbp-70h], rdx
 * 00000001401CFC7F: mov     [rbp-68h], r8
 * 00000001401CFC83: mov     [rbp-60h], r9
 * 00000001401CFC87: call    KiConvertToGuiThread
 * 00000001401CFC8C: or      eax, eax
 * 00000001401CFC8E: mov     eax, [rbp-80h]
 * 00000001401CFC91: mov     rcx, [rbp-78h]
 * 00000001401CFC95: mov     rdx, [rbp-70h]
 * 00000001401CFC99: mov     r8, [rbp-68h]
 * 00000001401CFC9D: mov     r9, [rbp-60h]
 * 00000001401CFCA1: mov     [rbx+90h], rsp
 * 00000001401CFCA8: jz      KiSystemServiceRepeat
 * 00000001401CFCAE: lea     rdi, xmmword_1405419A0
 * 00000001401CFCB5: mov     esi, [rdi+10h]
 * 00000001401CFCB8: mov     rdi, [rdi]
 * 00000001401CFCBB: cmp     eax, esi
 * 00000001401CFCBD: jnb     short loc_1401CFCCF
 * 00000001401CFCBF: lea     rdi, [rdi+rsi*4]
 * 00000001401CFCC3: movsx   eax, byte ptr [rdi+rax]
 * 00000001401CFCC7: or      eax, eax
 * 00000001401CFCC9: jle     KiSystemServiceExit
 * 00000001401CFCCF: mov     eax, 0C000001Ch
 * 00000001401CFCD4: jmp     KiSystemServiceExit
 * 00000001401CFCD9: mov     ecx, 4Ah ; 'J'
 * 00000001401CFCDE: xor     r9d, r9d
 * 00000001401CFCE1: mov     r8, cr8
 * 00000001401CFCE5: or      r8d, r8d
 * 00000001401CFCE8: jnz     short loc_1401CFCFE
 * 00000001401CFCEA: mov     ecx, 1
 * 00000001401CFCEF: movzx   r8d, byte ptr [r11+24Ah]
 * 00000001401CFCF7: mov     r9d, [r11+1E4h]
 * 00000001401CFCFE: mov     rdx, [rbp+0E8h]
 * 00000001401CFD05: mov     r10, rbp
 * 00000001401CFD08: call    KiBugCheckDispatch
 * 00000001401CFD0D: sub     rsp, 50h
 * 00000001401CFD11: mov     [rsp+0E0h+var_C0], rcx
 * 00000001401CFD16: mov     [rsp+0E0h+var_B8], rdx
 * 00000001401CFD1B: mov     [rsp+0E0h+var_B0], r8
 * 00000001401CFD20: mov     [rsp+0E0h+var_A8], r9
 * 00000001401CFD25: mov     [rsp+0E0h+var_A0], r10
 * 00000001401CFD2A: mov     rcx, r10
 * 00000001401CFD2D: mov     rdx, rsp
 * 00000001401CFD30: add     rdx, 20h ; ' '
 * 00000001401CFD34: mov     r8, 4
 * 00000001401CFD3B: mov     r9, rsp
 * 00000001401CFD3E: add     r9, 70h ; 'p'
 * 00000001401CFD42: call    KiTrackSystemCallEntry
 * 00000001401CFD47: mov     [rbp-50h], rax
 * 00000001401CFD4B: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001401CFD50: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001401CFD55: mov     r8, [rsp+0E0h+var_B0]
 * 00000001401CFD5A: mov     r9, [rsp+0E0h+var_A8]
 * 00000001401CFD5F: mov     r10, [rsp+0E0h+var_A0]
 * 00000001401CFD64: add     rsp, 50h
 * 00000001401CFD68: mov     rax, r10
 * 00000001401CFD6B: call    rax
 * 00000001401CFD6D: nop     dword ptr [rax]
 * 00000001401CFD70: mov     rcx, [rbp-50h]
 * 00000001401CFD74: mov     rdx, rax
 * 00000001401CFD77: call    KiTrackSystemCallExit
 * 00000001401CFD7C: jmp     loc_1401CF5C8
 * 00000001401CFD81: sub     rsp, 50h
 * 00000001401CFD85: mov     [rsp+0E0h+var_C0], rcx
 * 00000001401CFD8A: mov     [rsp+0E0h+var_B8], rdx
 * 00000001401CFD8F: mov     [rsp+0E0h+var_B0], r8
 * 00000001401CFD94: mov     [rsp+0E0h+var_A8], r9
 * 00000001401CFD99: mov     [rsp+0E0h+var_A0], r10
 * 00000001401CFD9E: mov     rcx, r10
 * 00000001401CFDA1: call    PerfInfoLogSysCallEntry
 * 00000001401CFDA6: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001401CFDAB: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001401CFDB0: mov     r8, [rsp+0E0h+var_B0]
 * 00000001401CFDB5: mov     r9, [rsp+0E0h+var_A8]
 * 00000001401CFDBA: mov     r10, [rsp+0E0h+var_A0]
 * 00000001401CFDBF: add     rsp, 50h
 * 00000001401CFDC3: mov     rax, r10
 * 00000001401CFDC6: call    rax
 * 00000001401CFDC8: nop     dword ptr [rax]
 * 00000001401CFDCB: mov     rcx, rax
 * 00000001401CFDCE: call    PerfInfoLogSysCallExit
 * 00000001401CFDD3: jmp     loc_1401CF5C8
 * 00000001401CFDD8: retn
 */
