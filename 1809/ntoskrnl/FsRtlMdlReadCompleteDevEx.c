/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140333010
 * Callers:
 *     KiDecodeMcaFault @ 0x14019F820 (KiDecodeMcaFault.c)
 *     sub_1401AD820 @ 0x1401AD820 (sub_1401AD820.c)
 *     FsRtlUninitializeSmallMcb @ 0x14034B8E0 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1401ADA3C @ 0x1401ADA3C (sub_1401ADA3C.c)
 *     sub_1401ADB1C @ 0x1401ADB1C (sub_1401ADB1C.c)
 *     sub_1401AEA44 @ 0x1401AEA44 (sub_1401AEA44.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     sub_140346BE8 @ 0x140346BE8 (sub_140346BE8.c)
 *     sub_140348B4C @ 0x140348B4C (sub_140348B4C.c)
 *     sub_1403495B4 @ 0x1403495B4 (sub_1403495B4.c)
 *     sub_140349E50 @ 0x140349E50 (sub_140349E50.c)
 *     KiGetGdtIdt @ 0x14034B7B0 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x14034B7C0 (KiGetLdtr.c)
 *     KiGetTr @ 0x14034B7D0 (KiGetTr.c)
 *     KiErrata704Present @ 0x14034B7E0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x14034B890 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x14034BB50 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x14034BCEC (RtlInitMinimalBarrier.c)
 *     sub_14098FFA4 @ 0x14098FFA4 (sub_14098FFA4.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140333010
 * Reason: Hex-Rays returned no pseudocode for 0x140333010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140333010: mov     rax, rsp
 * 0000000140333013: mov     [rax+10h], rbx
 * 0000000140333017: mov     [rax+18h], rsi
 * 000000014033301B: mov     [rax+20h], rdi
 * 000000014033301F: mov     [rax+8], rcx
 * 0000000140333023: push    rbp
 * 0000000140333024: push    r12
 * 0000000140333026: push    r13
 * 0000000140333028: push    r14
 * 000000014033302A: push    r15
 * 000000014033302C: sub     rsp, 10D0h
 * 0000000140333033: lea     rbp, [rax-1028h]
 * 000000014033303A: and     rbp, 0FFFFFFFFFFFFFF80h
 * 000000014033303E: mov     eax, [rcx+970h]
 * 0000000140333044: xor     r8d, r8d
 * 0000000140333047: mov     r12, rcx
 * 000000014033304A: mov     [rbp+20F0h+var_1900], rcx
 * 0000000140333051: mov     ecx, 110000h
 * 0000000140333056: mov     r9d, 130h
 * 000000014033305C: and     eax, ecx
 * 000000014033305E: mov     r11d, 0FFFFFFF8h
 * 0000000140333064: lea     esi, [r8+1]
 * 0000000140333068: mov     r10d, 0FFFFFFFFh
 * 000000014033306E: cmp     eax, ecx
 * 0000000140333070: jz      loc_14033313E
 * 0000000140333076: mov     ecx, r9d
 * 0000000140333079: lea     rax, [rbp+20F0h+var_13F0]
 * 0000000140333080: lea     edx, [rsi+25h]
 * 0000000140333083: mov     [rax], r8
 * 0000000140333086: add     ecx, r11d
 * 0000000140333089: add     rax, 8
 * 000000014033308D: sub     rdx, rsi
 * 0000000140333090: jnz     short loc_140333083
 * 0000000140333092: test    ecx, ecx
 * 0000000140333094: jz      short loc_1403330A1
 * 0000000140333096: mov     [rax], r8b
 * 0000000140333099: add     rax, rsi
 * 000000014033309C: add     ecx, r10d
 * 000000014033309F: jnz     short loc_140333096
 * 00000001403330A1: movups  xmm0, xmmword ptr [r12+830h]
 * 00000001403330AA: lea     rax, [rbp+20F0h+var_13F0]
 * 00000001403330B1: movdqu  [rbp+20F0h+var_13E0], xmm0
 * 00000001403330B9: movups  xmm1, xmmword ptr [r12+840h]
 * 00000001403330C2: movdqu  [rbp+20F0h+var_13D0], xmm1
 * 00000001403330CA: movups  xmm0, xmmword ptr [r12+850h]
 * 00000001403330D3: mov     [rbp+20F0h+var_1D4E], rax
 * 00000001403330DA: lea     rax, [r12+860h]
 * 00000001403330E2: mov     rcx, rax
 * 00000001403330E5: mov     word ptr [rbp+20F0h+var_13E0], ax
 * 00000001403330EC: shr     rcx, 10h
 * 00000001403330F0: shr     rax, 20h
 * 00000001403330F4: mov     dword ptr [rbp+20F0h+var_13E0+8], eax
 * 00000001403330FA: movdqu  [rbp+20F0h+var_12D0], xmm0
 * 0000000140333102: mov     word ptr [rbp+20F0h+var_1D50], r9w
 * 000000014033310A: mov     word ptr [rbp+20F0h+var_13E0+6], cx
 * 0000000140333111: cli
 * 0000000140333112: xor     eax, eax
 * 0000000140333114: cmp     [r12+970h], eax
 * 000000014033311C: jge     short loc_140333124
 * 000000014033311E: mov     dr7, rax
 * 0000000140333121: sti
 * 0000000140333122: jmp     short loc_140333140
 * 0000000140333124: sidt    fword ptr [rbp+20F0h+var_1BC0]
 * 000000014033312B: lidt    fword ptr [rbp+20F0h+var_1D50]
 * 0000000140333132: mov     dr7, rax
 * 0000000140333135: lidt    fword ptr [rbp+20F0h+var_1BC0]
 * 000000014033313C: jmp     short loc_140333121
 * 000000014033313E: xor     eax, eax
 * 0000000140333140: test    dword ptr [r12+974h], 100h
 * 000000014033314C: mov     [rbp+20F0h+var_2038], rax
 * 0000000140333153: jz      short loc_14033316E
 * 0000000140333155: lea     rcx, [rsp+10F8h]
 * 000000014033315D: mov     rax, [rcx]
 * 0000000140333160: mov     [rbp+20F0h+var_2038], rax
 * 0000000140333167: xor     eax, eax
 * 0000000140333169: mov     [rcx], rax
 * 000000014033316C: jmp     short loc_140333170
 * 000000014033316E: xor     eax, eax
 * 0000000140333170: mov     edi, 40h ; '@'
 * 0000000140333175: mov     [r12+810h], eax
 * 000000014033317D: test    dword ptr [r12+970h], 40000000h
 * 0000000140333189: mov     r14, 7010008004002001h
 * 0000000140333193: lea     r13d, [rdi-20h]
 * 0000000140333197: lea     r15d, [rdi-3Ch]
 * 000000014033319B: jz      short loc_1403331AD
 * 000000014033319D: xor     eax, eax
 * 000000014033319F: cmp     [r12+0A48h], rax
 * 00000001403331A7: jnz     loc_140333437
 * 00000001403331AD: mov     r14, [r12+7A0h]
 * 00000001403331B5: lea     rbx, [r12+780h]
 * 00000001403331BD: mov     [rbp+20F0h+var_20F0], r14
 * 00000001403331C1: lea     rdx, [rbp+20F0h+var_15E0]
 * 00000001403331C8: mov     rcx, rbx
 * 00000001403331CB: mov     r8d, r13d
 * 00000001403331CE: mov     r9, r15
 * 00000001403331D1: mov     rax, [rcx]
 * 00000001403331D4: add     r8d, r11d
 * 00000001403331D7: mov     [rdx], rax
 * 00000001403331DA: add     rcx, 8
 * 00000001403331DE: add     rdx, 8
 * 00000001403331E2: sub     r9, rsi
 * 00000001403331E5: jnz     short loc_1403331D1
 * 00000001403331E7: xor     eax, eax
 * 00000001403331E9: test    r8d, r8d
 * 00000001403331EC: jz      short loc_1403331FF
 * 00000001403331EE: mov     al, [rcx]
 * 00000001403331F0: add     rcx, rsi
 * 00000001403331F3: mov     [rdx], al
 * 00000001403331F5: add     rdx, rsi
 * 00000001403331F8: add     r8d, r10d
 * 00000001403331FB: jnz     short loc_1403331EE
 * 00000001403331FD: xor     eax, eax
 * 00000001403331FF: mov     [r12+7A0h], rax
 * 0000000140333207: mov     ecx, r13d
 * 000000014033320A: mov     [r12+810h], eax
 * 0000000140333212: mov     rdx, r15
 * 0000000140333215: mov     rax, rbx
 * 0000000140333218: xor     r8d, r8d
 * 000000014033321B: mov     [rax], r8
 * 000000014033321E: add     ecx, r11d
 * 0000000140333221: add     rax, 8
 * 0000000140333225: sub     rdx, rsi
 * 0000000140333228: jnz     short loc_14033321B
 * 000000014033322A: test    ecx, ecx
 * 000000014033322C: jz      short loc_140333239
 * 000000014033322E: mov     [rax], r8b
 * 0000000140333231: add     rax, rsi
 * 0000000140333234: add     ecx, r10d
 * 0000000140333237: jnz     short loc_14033322E
 * 0000000140333239: mov     eax, [r12+7CCh]
 * 0000000140333241: mov     r9, r12
 * 0000000140333244: add     [r12+810h], eax
 * 000000014033324C: mov     rax, r12
 * 000000014033324F: mov     r10d, [r12+7CCh]
 * 0000000140333257: mov     r11d, [r12+7FCh]
 * 000000014033325F: mov     rsi, [r12+800h]
 * 0000000140333267: lea     rcx, [r12+r10]
 * 000000014033326B: cmp     r12, rcx
 * 000000014033326E: jnb     short loc_14033327B
 * 0000000140333270: prefetchnta byte ptr [rax]
 * 0000000140333273: add     rax, rdi
 * 0000000140333276: cmp     rax, rcx
 * 0000000140333279: jb      short loc_140333270
 * 000000014033327B: mov     edi, r10d
 * 000000014033327E: mov     r8, rsi
 * 0000000140333281: shr     edi, 7
 * 0000000140333284: test    edi, edi
 * 0000000140333286: jz      short loc_140333301
 * 0000000140333288: mov     r14, 7010008004002001h
 * 0000000140333292: mov     edx, 8
 * 0000000140333297: lea     r12d, [rdx-7]
 * 000000014033329B: mov     rax, [r9]
 * 000000014033329E: mov     ecx, r11d
 * 00000001403332A1: xor     rax, r8
 * 00000001403332A4: mov     r8, [r9+8]
 * 00000001403332A8: rol     rax, cl
 * 00000001403332AB: add     r9, 10h
 * 00000001403332AF: xor     r8, rax
 * 00000001403332B2: rol     r8, cl
 * 00000001403332B5: sub     rdx, r12
 * 00000001403332B8: jnz     short loc_14033329B
 * 00000001403332BA: mov     r12, [rsp+10F0h+arg_0]
 * 00000001403332C2: mov     rcx, r9
 * 00000001403332C5: sub     rcx, r12
 * 00000001403332C8: xor     rcx, rsi
 * 00000001403332CB: mov     rax, rcx
 * 00000001403332CE: rol     rax, 11h
 * 00000001403332D2: xor     rcx, rax
 * 00000001403332D5: mov     rax, r14
 * 00000001403332D8: mul     rcx
 * 00000001403332DB: xor     eax, edx
 * 00000001403332DD: mov     [rbp+20F0h+var_1850], rdx
 * 00000001403332E4: xor     r11d, eax
 * 00000001403332E7: mov     eax, 1
 * 00000001403332EC: and     r11d, 3Fh
 * 00000001403332F0: cmovz   r11d, eax
 * 00000001403332F4: mov     eax, 0FFFFFFFFh
 * 00000001403332F9: add     edi, eax
 * 00000001403332FB: jnz     short loc_140333292
 * 00000001403332FD: mov     r14, [rbp+20F0h+var_20F0]
 * 0000000140333301: and     r10d, 7Fh
 * 0000000140333305: mov     esi, 1
 * 000000014033330A: cmp     r10d, 8
 * 000000014033330E: jb      short loc_14033332D
 * 0000000140333310: mov     edx, r10d
 * 0000000140333313: shr     rdx, 3
 * 0000000140333317: xor     r8, [r9]
 * 000000014033331A: mov     ecx, r11d
 * 000000014033331D: rol     r8, cl
 * 0000000140333320: add     r9, 8
 * 0000000140333324: add     r10d, 0FFFFFFF8h
 * 0000000140333328: sub     rdx, rsi
 * 000000014033332B: jnz     short loc_140333317
 * 000000014033332D: test    r10d, r10d
 * 0000000140333330: jz      short loc_140333355
 * 0000000140333332: mov     r12d, 0FFFFFFFFh
 * 0000000140333338: movzx   eax, byte ptr [r9]
 * 000000014033333C: mov     ecx, r11d
 * 000000014033333F: xor     r8, rax
 * 0000000140333342: add     r9, rsi
 * 0000000140333345: rol     r8, cl
 * 0000000140333348: add     r10d, r12d
 * 000000014033334B: jnz     short loc_140333338
 * 000000014033334D: mov     r12, [rsp+10F0h+arg_0]
 * 0000000140333355: mov     [r12+7A0h], r14
 * 000000014033335D: lea     rcx, [rbp+20F0h+var_15E0]
 * 0000000140333364: mov     edx, r13d
 * 0000000140333367: mov     r9, r15
 * 000000014033336A: mov     r11d, 0FFFFFFF8h
 * 0000000140333370: mov     rax, [rcx]
 * 0000000140333373: add     edx, r11d
 * 0000000140333376: mov     [rbx], rax
 * 0000000140333379: add     rcx, 8
 * 000000014033337D: add     rbx, 8
 * 0000000140333381: sub     r9, rsi
 * 0000000140333384: jnz     short loc_140333370
 * 0000000140333386: test    edx, edx
 * 0000000140333388: jz      short loc_14033339F
 * 000000014033338A: mov     r10d, 0FFFFFFFFh
 * 0000000140333390: mov     al, [rcx]
 * 0000000140333392: add     rcx, rsi
 * 0000000140333395: mov     [rbx], al
 * 0000000140333397: add     rbx, rsi
 * 000000014033339A: add     edx, r10d
 * 000000014033339D: jnz     short loc_140333390
 * 000000014033339F: cmp     [r12+7A0h], r8
 * 00000001403333A7: jz      loc_14033342D
 * 00000001403333AD: mov     rax, [r12+580h]
 * 00000001403333B5: mov     ecx, [r12+7CCh]
 * 00000001403333BD: mov     [rax], r12
 * 00000001403333C0: mov     [rax+10h], ecx
 * 00000001403333C3: mov     eax, [r12+8D8h]
 * 00000001403333CB: mov     rcx, [r12+7A0h]
 * 00000001403333D3: test    eax, eax
 * 00000001403333D5: jnz     short loc_14033342D
 * 00000001403333D7: mov     rax, [r12+580h]
 * 00000001403333DF: xor     rcx, r8
 * 00000001403333E2: mov     [rax+18h], rcx
 * 00000001403333E6: mov     eax, [r12+8D8h]
 * 00000001403333EE: test    eax, eax
 * 00000001403333F0: jnz     short loc_14033342D
 * 00000001403333F2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403333FC: add     rax, r12
 * 00000001403333FF: mov     [r12+8E0h], rax
 * 0000000140333407: xor     eax, eax
 * 0000000140333409: mov     [r12+8E8h], rax
 * 0000000140333411: mov     qword ptr [r12+8F0h], 101h
 * 000000014033341D: mov     [r12+8F8h], r8
 * 0000000140333425: mov     [r12+8D8h], esi
 * 000000014033342D: mov     r14, 7010008004002001h
 * 0000000140333437: or      [r12+970h], r15d
 * 000000014033343F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140333446: add     [r12+81Ch], esi
 * 000000014033344E: mov     r8, 0ABCC77118461CEFDh
 * 0000000140333458: mov     eax, [r12+970h]
 * 0000000140333460: test    al, 8
 * 0000000140333462: jz      loc_140333878
 * 0000000140333468: bt      eax, 17h
 * 000000014033346C: jb      loc_140333878
 * 0000000140333472: mov     eax, [r12+974h]
 * 000000014033347A: mov     r10, [r12+0A40h]
 * 0000000140333482: mov     r13d, [r12+7CCh]
 * 000000014033348A: mov     r11, [r12+9D8h]
 * 0000000140333492: mov     r15d, [r12+7F0h]
 * 000000014033349A: mov     [rbp+20F0h+var_20F0], r10
 * 000000014033349E: and     eax, esi
 * 00000001403334A0: jz      short loc_1403334AA
 * 00000001403334A2: mov     r11, [r12+5C8h]
 * 00000001403334AA: mov     rbx, [rsp+10F0h+arg_0]
 * 00000001403334B2: mov     r12, [r12+158h]
 * 00000001403334BA: mov     [rbp+20F0h+var_20D8], r12
 * 00000001403334BE: mov     rax, [rbx+2C0h]
 * 00000001403334C5: mov     [rbp+20F0h+var_2080], rax
 * 00000001403334C9: mov     rax, [rbx+338h]
 * 00000001403334D0: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403334D4: rdtsc
 * 00000001403334D6: shl     rdx, 20h
 * 00000001403334DA: mov     r9, rdi
 * 00000001403334DD: or      rax, rdx
 * 00000001403334E0: mov     rcx, rax
 * 00000001403334E3: ror     rax, 3
 * 00000001403334E7: xor     rcx, rax
 * 00000001403334EA: mov     rax, r14
 * 00000001403334ED: mul     rcx
 * 00000001403334F0: mov     rcx, rdx
 * 00000001403334F3: mov     [rbp+20F0h+var_1848], rdx
 * 00000001403334FA: xor     rcx, rax
 * 00000001403334FD: mov     rax, r8
 * 0000000140333500: mul     rcx
 * 0000000140333503: shr     rdx, 1Ah
 * 0000000140333507: imul    rax, rdx, 5F5E100h
 * 000000014033350E: sub     rcx, rax
 * 0000000140333511: sub     r9, rcx
 * 0000000140333514: mov     [rbp+20F0h+var_1EF0], r9
 * 000000014033351B: mov     r8d, [rbx+970h]
 * 0000000140333522: bt      r8d, 1Ah
 * 0000000140333527: jnb     loc_1403335CE
 * 000000014033352D: rdtsc
 * 000000014033352F: shl     rdx, 20h
 * 0000000140333533: or      rax, rdx
 * 0000000140333536: mov     rcx, rax
 * 0000000140333539: ror     rax, 3
 * 000000014033353D: xor     rcx, rax
 * 0000000140333540: mov     rax, r14
 * 0000000140333543: mul     rcx
 * 0000000140333546: mov     rcx, rdx
 * 0000000140333549: mov     [rbp+20F0h+var_1840], rdx
 * 0000000140333550: xor     rcx, rax
 * 0000000140333553: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014033355D: mul     rcx
 * 0000000140333560: shr     rdx, 3
 * 0000000140333564: lea     rax, [rdx+rdx*4]
 * 0000000140333568: add     rax, rax
 * 000000014033356B: sub     rcx, rax
 * 000000014033356E: mov     eax, 2
 * 0000000140333573: cmp     rcx, rax
 * 0000000140333576: jnb     short loc_1403335CE
 * 0000000140333578: rdtsc
 * 000000014033357A: shl     rdx, 20h
 * 000000014033357E: or      rax, rdx
 * 0000000140333581: mov     rcx, rax
 * 0000000140333584: ror     rax, 3
 * 0000000140333588: xor     rcx, rax
 * 000000014033358B: mov     rax, r14
 * 000000014033358E: mul     rcx
 * 0000000140333591: mov     rcx, rdx
 * 0000000140333594: mov     [rbp+20F0h+var_1838], rdx
 * 000000014033359B: xor     rcx, rax
 * 000000014033359E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001403335A8: mul     rcx
 * 00000001403335AB: shr     rdx, 3
 * 00000001403335AF: lea     rax, [rdx+rdx*4]
 * 00000001403335B3: add     rax, rax
 * 00000001403335B6: sub     rcx, rax
 * 00000001403335B9: add     rcx, rsi
 * 00000001403335BC: imul    rcx, r9
 * 00000001403335C0: mov     [rbp+20F0h+var_1EF0], rcx
 * 00000001403335C7: mov     r8d, [rbx+970h]
 * 00000001403335CE: xor     eax, eax
 * 00000001403335D0: mov     esi, r15d
 * 00000001403335D3: mov     ebx, eax
 * 00000001403335D5: mov     r14d, eax
 * 00000001403335D8: lea     ecx, [rax+2]
 * 00000001403335DB: test    cl, r8b
 * 00000001403335DE: cmovnz  esi, r13d
 * 00000001403335E2: test    r8b, r8b
 * 00000001403335E5: js      short loc_1403335EF
 * 00000001403335E7: mov     r13d, eax
 * 00000001403335EA: jmp     loc_1403336CD
 * 00000001403335EF: mov     r9d, 1
 * 00000001403335F5: mov     r13d, r9d
 * 00000001403335F8: rdtsc
 * 00000001403335FA: shl     rdx, 20h
 * 00000001403335FE: or      rax, rdx
 * 0000000140333601: mov     rcx, rax
 * 0000000140333604: ror     rax, 3
 * 0000000140333608: xor     rcx, rax
 * 000000014033360B: mov     rax, 7010008004002001h
 * 0000000140333615: mul     rcx
 * 0000000140333618: mov     ecx, 14Eh
 * 000000014033361D: mov     rbx, rdx
 * 0000000140333620: mov     [rbp+20F0h+var_1830], rdx
 * 0000000140333627: mov     rdx, [rsp+10F0h+arg_0]
 * 000000014033362F: xor     rbx, rax
 * 0000000140333632: mov     r14, rbx
 * 0000000140333635: mov     r8, rbx
 * 0000000140333638: xor     r14, rdx
 * 000000014033363B: lea     rax, [rdx+0A68h]
 * 0000000140333642: xor     [rax], r8
 * 0000000140333645: lea     rax, [rax-8]
 * 0000000140333649: ror     r8, cl
 * 000000014033364C: sub     ecx, r9d
 * 000000014033364F: jnz     short loc_140333642
 * 0000000140333651: lea     r9, [r15-0A70h]
 * 0000000140333658: mov     r12, r15
 * 000000014033365B: shr     r9, 3
 * 000000014033365F: test    r9d, r9d
 * 0000000140333662: jz      short loc_1403336A0
 * 0000000140333664: movsxd  r10, r9d
 * 0000000140333667: mov     rdi, r13
 * 000000014033366A: add     r10, 14Dh
 * 0000000140333671: lea     r10, [rdx+r10*8]
 * 0000000140333675: mov     rdx, [r10]
 * 0000000140333678: lea     rax, [r14+r14]
 * 000000014033367C: mov     ecx, r9d
 * 000000014033367F: lea     r10, [r10-8]
 * 0000000140333683: ror     rdx, cl
 * 0000000140333686: mov     r14, rdx
 * 0000000140333689: xor     r14, rax
 * 000000014033368C: sub     r9d, edi
 * 000000014033368F: jnz     short loc_140333675
 * 0000000140333691: mov     r10, [rbp+20F0h+var_20F0]
 * 0000000140333695: mov     r12, r15
 * 0000000140333698: mov     rdx, [rsp+10F0h+arg_0]
 * 00000001403336A0: mov     ecx, esi
 * 00000001403336A2: add     rdx, r12
 * 00000001403336A5: sub     ecx, r15d
 * 00000001403336A8: shr     ecx, 3
 * 00000001403336AB: test    ecx, ecx
 * 00000001403336AD: jz      short loc_1403336C9
 * 00000001403336AF: lea     rdx, [rdx+rcx*8]
 * 00000001403336B3: mov     r9, r13
 * 00000001403336B6: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001403336BA: xor     [rdx], r8
 * 00000001403336BD: lea     rdx, [rdx-8]
 * 00000001403336C1: ror     r8, cl
 * 00000001403336C4: sub     ecx, r9d
 * 00000001403336C7: jnz     short loc_1403336BA
 * 00000001403336C9: mov     r12, [rbp+20F0h+var_20D8]
 * 00000001403336CD: test    r10, r10
 * 00000001403336D0: jz      short loc_1403336F9
 * 00000001403336D2: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403336D6: lea     r8, [rbp+20F0h+var_1EF0]
 * 00000001403336DD: mov     r9, r12
 * 00000001403336E0: mov     [rsp+10F0h+BugCheckParameter4], r10
 * 00000001403336E5: mov     r12, [rsp+10F0h+arg_0]
 * 00000001403336ED: mov     edx, esi
 * 00000001403336EF: mov     rcx, r12
 * 00000001403336F2: call    KeGuardDispatchICall
 * 00000001403336F7: jmp     short loc_140333739
 * 00000001403336F9: xor     edx, edx
 * 00000001403336FB: test    r11, r11
 * 00000001403336FE: jnz     short loc_140333713
 * 0000000140333700: lea     r8, [rbp+20F0h+var_1EF0]
 * 0000000140333707: xor     ecx, ecx
 * 0000000140333709: mov     rax, r12
 * 000000014033370C: call    KeGuardDispatchICall
 * 0000000140333711: jmp     short loc_140333731
 * 0000000140333713: lea     rax, [rbp+20F0h+var_1EF0]
 * 000000014033371A: xor     r9d, r9d
 * 000000014033371D: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 0000000140333722: xor     r8d, r8d
 * 0000000140333725: mov     rax, [rbp+20F0h+var_2080]
 * 0000000140333729: mov     rcx, r11
 * 000000014033372C: call    KeGuardDispatchICall
 * 0000000140333731: mov     r12, [rsp+10F0h+arg_0]
 * 0000000140333739: xor     eax, eax
 * 000000014033373B: test    r13d, r13d
 * 000000014033373E: jz      loc_14033386C
 * 0000000140333744: mov     r8, rbx
 * 0000000140333747: lea     rax, [r12+0A68h]
 * 000000014033374F: xor     r8, r12
 * 0000000140333752: mov     ecx, 14Eh
 * 0000000140333757: mov     r13d, 1
 * 000000014033375D: xor     [rax], rbx
 * 0000000140333760: lea     rax, [rax-8]
 * 0000000140333764: ror     rbx, cl
 * 0000000140333767: sub     ecx, r13d
 * 000000014033376A: jnz     short loc_14033375D
 * 000000014033376C: lea     r9, [r15-0A70h]
 * 0000000140333773: mov     r11, r15
 * 0000000140333776: shr     r9, 3
 * 000000014033377A: test    r9d, r9d
 * 000000014033377D: jz      short loc_1403337AC
 * 000000014033377F: movsxd  r10, r9d
 * 0000000140333782: add     r10, 14Dh
 * 0000000140333789: lea     r10, [r12+r10*8]
 * 000000014033378D: mov     rdx, [r10]
 * 0000000140333790: lea     rax, [r8+r8]
 * 0000000140333794: mov     ecx, r9d
 * 0000000140333797: lea     r10, [r10-8]
 * 000000014033379B: ror     rdx, cl
 * 000000014033379E: mov     r8, rdx
 * 00000001403337A1: xor     r8, rax
 * 00000001403337A4: sub     r9d, r13d
 * 00000001403337A7: jnz     short loc_14033378D
 * 00000001403337A9: mov     r11, r15
 * 00000001403337AC: sub     esi, r15d
 * 00000001403337AF: lea     rcx, [r11+r12]
 * 00000001403337B3: shr     esi, 3
 * 00000001403337B6: test    esi, esi
 * 00000001403337B8: jz      short loc_1403337D4
 * 00000001403337BA: mov     eax, esi
 * 00000001403337BC: dec     rax
 * 00000001403337BF: lea     rdx, [rcx+rax*8]
 * 00000001403337C3: xor     [rdx], rbx
 * 00000001403337C6: mov     ecx, esi
 * 00000001403337C8: ror     rbx, cl
 * 00000001403337CB: lea     rdx, [rdx-8]
 * 00000001403337CF: sub     esi, r13d
 * 00000001403337D2: jnz     short loc_1403337C3
 * 00000001403337D4: cmp     r8, r14
 * 00000001403337D7: jz      loc_140333861
 * 00000001403337DD: mov     rax, [r12+580h]
 * 00000001403337E5: mov     ecx, [r12+7CCh]
 * 00000001403337ED: mov     [rax], r12
 * 00000001403337F0: mov     [rax+10h], ecx
 * 00000001403337F3: mov     eax, [r12+8D8h]
 * 00000001403337FB: test    eax, eax
 * 00000001403337FD: jnz     short loc_140333861
 * 00000001403337FF: mov     rax, [r12+580h]
 * 0000000140333807: mov     rcx, r8
 * 000000014033380A: xor     rcx, r14
 * 000000014033380D: mov     [rax+18h], rcx
 * 0000000140333811: mov     eax, [r12+8D8h]
 * 0000000140333819: test    eax, eax
 * 000000014033381B: jnz     short loc_140333861
 * 000000014033381D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140333827: mov     r14, r13
 * 000000014033382A: add     rax, r12
 * 000000014033382D: mov     [r12+8E0h], rax
 * 0000000140333835: xor     eax, eax
 * 0000000140333837: mov     [r12+8E8h], rax
 * 000000014033383F: mov     qword ptr [r12+8F0h], 10Eh
 * 000000014033384B: mov     [r12+8F8h], r8
 * 0000000140333853: mov     [r12+8D8h], r14d
 * 000000014033385B: lea     r15d, [rax+4]
 * 000000014033385F: jmp     short loc_140333880
 * 0000000140333861: mov     r15d, 4
 * 0000000140333867: mov     r14, r13
 * 000000014033386A: jmp     short loc_14033387E
 * 000000014033386C: mov     r15d, 4
 * 0000000140333872: lea     r14d, [r15-3]
 * 0000000140333876: jmp     short loc_140333880
 * 0000000140333878: mov     r14d, 1
 * 000000014033387E: xor     eax, eax
 * 0000000140333880: mov     esi, [r12+0C4h]
 * 0000000140333888: lea     rcx, [r12+610h]
 * 0000000140333890: mov     [r12+0C4h], eax
 * 0000000140333898: mov     r9, r12
 * 000000014033389B: add     dword ptr [r12+810h], 610h
 * 00000001403338A7: mov     rax, r12
 * 00000001403338AA: mov     r10d, [r12+7FCh]
 * 00000001403338B2: mov     r11, [r12+800h]
 * 00000001403338BA: cmp     r12, rcx
 * 00000001403338BD: jnb     short loc_1403338CF
 * 00000001403338BF: mov     edx, 40h ; '@'
 * 00000001403338C4: prefetchnta byte ptr [rax]
 * 00000001403338C7: add     rax, rdx
 * 00000001403338CA: cmp     rax, rcx
 * 00000001403338CD: jb      short loc_1403338C4
 * 00000001403338CF: mov     r8, r11
 * 00000001403338D2: mov     ebx, 0Ch
 * 00000001403338D7: mov     rdi, 7010008004002001h
 * 00000001403338E1: mov     r13d, 0FFFFFFFFh
 * 00000001403338E7: mov     edx, 8
 * 00000001403338EC: mov     rax, [r9]
 * 00000001403338EF: mov     ecx, r10d
 * 00000001403338F2: xor     rax, r8
 * 00000001403338F5: mov     r8, [r9+8]
 * 00000001403338F9: rol     rax, cl
 * 00000001403338FC: add     r9, 10h
 * 0000000140333900: xor     r8, rax
 * 0000000140333903: rol     r8, cl
 * 0000000140333906: sub     rdx, r14
 * 0000000140333909: jnz     short loc_1403338EC
 * 000000014033390B: mov     rcx, r9
 * 000000014033390E: sub     rcx, r12
 * 0000000140333911: xor     rcx, r11
 * 0000000140333914: mov     rax, rcx
 * 0000000140333917: rol     rax, 11h
 * 000000014033391B: xor     rcx, rax
 * 000000014033391E: mov     rax, rdi
 * 0000000140333921: mul     rcx
 * 0000000140333924: xor     r10d, eax
 * 0000000140333927: mov     [rbp+20F0h+var_1828], rdx
 * 000000014033392E: xor     r10d, edx
 * 0000000140333931: and     r10d, 3Fh
 * 0000000140333935: cmovz   r10d, r14d
 * 0000000140333939: add     ebx, r13d
 * 000000014033393C: jnz     short loc_1403338E7
 * 000000014033393E: lea     edx, [rbx+10h]
 * 0000000140333941: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140333948: lea     r11d, [rbx+2]
 * 000000014033394C: xor     r8, [r9]
 * 000000014033394F: mov     ecx, r10d
 * 0000000140333952: rol     r8, cl
 * 0000000140333955: add     r9, 8
 * 0000000140333959: add     edx, 0FFFFFFF8h
 * 000000014033395C: sub     r11, r14
 * 000000014033395F: jnz     short loc_14033394C
 * 0000000140333961: test    edx, edx
 * 0000000140333963: jz      short loc_14033397A
 * 0000000140333965: movzx   eax, byte ptr [r9]
 * 0000000140333969: mov     ecx, r10d
 * 000000014033396C: xor     r8, rax
 * 000000014033396F: add     r9, r14
 * 0000000140333972: rol     r8, cl
 * 0000000140333975: add     edx, r13d
 * 0000000140333978: jnz     short loc_140333965
 * 000000014033397A: mov     [r12+0C4h], esi
 * 0000000140333982: cmp     [r12+0A00h], r8
 * 000000014033398A: jz      loc_140333A15
 * 0000000140333990: mov     rax, [r12+580h]
 * 0000000140333998: mov     ecx, [r12+7CCh]
 * 00000001403339A0: mov     [rax], r12
 * 00000001403339A3: mov     [rax+10h], ecx
 * 00000001403339A6: mov     eax, [r12+8D8h]
 * 00000001403339AE: mov     rdx, [r12+0A00h]
 * 00000001403339B6: test    eax, eax
 * 00000001403339B8: jnz     short loc_140333A15
 * 00000001403339BA: mov     rax, [r12+580h]
 * 00000001403339C2: mov     rcx, r8
 * 00000001403339C5: xor     rcx, rdx
 * 00000001403339C8: mov     [rax+18h], rcx
 * 00000001403339CC: mov     eax, [r12+8D8h]
 * 00000001403339D4: test    eax, eax
 * 00000001403339D6: jnz     short loc_140333A15
 * 00000001403339D8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403339E2: add     rax, r12
 * 00000001403339E5: mov     [r12+8E0h], rax
 * 00000001403339ED: xor     eax, eax
 * 00000001403339EF: mov     [r12+8E8h], rax
 * 00000001403339F7: mov     qword ptr [r12+8F0h], 109h
 * 0000000140333A03: mov     [r12+8F8h], r8
 * 0000000140333A0B: mov     [r12+8D8h], r14d
 * 0000000140333A13: jmp     short loc_140333A17
 * 0000000140333A15: xor     eax, eax
 * 0000000140333A17: mov     ecx, [r12+950h]
 * 0000000140333A1F: mov     r9d, 5
 * 0000000140333A25: mov     [rbp+20F0h+var_20E0], r12
 * 0000000140333A29: mov     rsi, r12
 * 0000000140333A2C: mov     [rbp+20F0h+var_2018], eax
 * 0000000140333A32: mov     r10, 2E8BA2E8BA2E8BA3h
 * 0000000140333A3C: mov     [rbp+20F0h+var_20C0], eax
 * 0000000140333A3F: lea     r8d, [r9+1]
 * 0000000140333A43: cmp     ecx, r13d
 * 0000000140333A46: jz      loc_140333B45
 * 0000000140333A4C: mov     rax, [r12+270h]
 * 0000000140333A54: call    KeGuardDispatchICall
 * 0000000140333A59: mov     rbx, rax
 * 0000000140333A5C: test    rax, rax
 * 0000000140333A5F: jnz     short loc_140333A7C
 * 0000000140333A61: mov     rax, [r12+278h]
 * 0000000140333A69: xor     ecx, ecx
 * 0000000140333A6B: call    KeGuardDispatchICall
 * 0000000140333A70: mov     rbx, rax
 * 0000000140333A73: test    rax, rax
 * 0000000140333A76: jz      loc_140333B31
 * 0000000140333A7C: mov     rax, [r12+288h]
 * 0000000140333A84: lea     rdx, [rbp+20F0h+var_1B40]
 * 0000000140333A8B: mov     rcx, rbx
 * 0000000140333A8E: call    KeGuardDispatchICall
 * 0000000140333A93: mov     r14d, eax
 * 0000000140333A96: test    eax, eax
 * 0000000140333A98: jns     short loc_140333AAE
 * 0000000140333A9A: mov     rax, [r12+280h]
 * 0000000140333AA2: mov     rcx, rbx
 * 0000000140333AA5: call    KeGuardDispatchICall
 * 0000000140333AAA: xor     eax, eax
 * 0000000140333AAC: jmp     short loc_140333B1D
 * 0000000140333AAE: mov     [r12+960h], rbx
 * 0000000140333AB6: mov     rax, [r12+2B0h]
 * 0000000140333ABE: call    KeGuardDispatchICall
 * 0000000140333AC3: mov     rbx, rax
 * 0000000140333AC6: mov     rax, [r12+2D0h]
 * 0000000140333ACE: mov     rcx, rbx
 * 0000000140333AD1: call    KeGuardDispatchICall
 * 0000000140333AD6: mov     rdx, rax
 * 0000000140333AD9: test    rax, rax
 * 0000000140333ADC: jnz     short loc_140333AE3
 * 0000000140333ADE: mov     ecx, r15d
 * 0000000140333AE1: jmp     short loc_140333AF7
 * 0000000140333AE3: mov     rax, [r12+2E0h]
 * 0000000140333AEB: mov     rcx, rbx
 * 0000000140333AEE: call    KeGuardDispatchICall
 * 0000000140333AF3: xor     eax, eax
 * 0000000140333AF5: mov     ecx, eax
 * 0000000140333AF7: mov     eax, [r12+974h]
 * 0000000140333AFF: and     eax, 0FFFFFFFBh
 * 0000000140333B02: or      eax, ecx
 * 0000000140333B04: mov     [r12+974h], eax
 * 0000000140333B0C: add     dword ptr [r12+810h], 10000h
 * 0000000140333B18: xor     eax, eax
 * 0000000140333B1A: mov     r14d, eax
 * 0000000140333B1D: test    r14d, r14d
 * 0000000140333B20: js      short loc_140333B31
 * 0000000140333B22: mov     r13d, 1
 * 0000000140333B28: mov     [rbp+20F0h+var_20C0], r13d
 * 0000000140333B2C: jmp     loc_140333EAD
 * 0000000140333B31: mov     r9d, 5
 * 0000000140333B37: mov     r10, 2E8BA2E8BA2E8BA3h
 * 0000000140333B41: lea     r8d, [r9+1]
 * 0000000140333B45: mov     eax, [r12+974h]
 * 0000000140333B4D: test    al, 8
 * 0000000140333B4F: jz      loc_140333E9F
 * 0000000140333B55: bt      eax, 0Ch
 * 0000000140333B59: jb      loc_140333E9F
 * 0000000140333B5F: rdtsc
 * 0000000140333B61: shl     rdx, 20h
 * 0000000140333B65: mov     rbx, 7010008004002001h
 * 0000000140333B6F: or      rax, rdx
 * 0000000140333B72: mov     rcx, rax
 * 0000000140333B75: ror     rax, 3
 * 0000000140333B79: xor     rcx, rax
 * 0000000140333B7C: mov     rax, rbx
 * 0000000140333B7F: mul     rcx
 * 0000000140333B82: mov     [rbp+20F0h+var_1820], rdx
 * 0000000140333B89: xor     dl, al
 * 0000000140333B8B: test    dl, 3
 * 0000000140333B8E: jnz     loc_140333E9F
 * 0000000140333B94: rdtsc
 * 0000000140333B96: shl     rdx, 20h
 * 0000000140333B9A: or      rax, rdx
 * 0000000140333B9D: mov     rcx, rax
 * 0000000140333BA0: ror     rax, 3
 * 0000000140333BA4: xor     rcx, rax
 * 0000000140333BA7: mov     rax, rbx
 * 0000000140333BAA: mul     rcx
 * 0000000140333BAD: mov     rcx, rdx
 * 0000000140333BB0: mov     [rbp+20F0h+var_1818], rdx
 * 0000000140333BB7: xor     rcx, rax
 * 0000000140333BBA: mov     rax, r10
 * 0000000140333BBD: mul     rcx
 * 0000000140333BC0: shr     rdx, 1
 * 0000000140333BC3: imul    rax, rdx, 0Bh
 * 0000000140333BC7: sub     rcx, rax
 * 0000000140333BCA: cmp     ecx, r9d
 * 0000000140333BCD: ja      loc_140333C8B
 * 0000000140333BD3: jz      loc_140333C71
 * 0000000140333BD9: test    ecx, ecx
 * 0000000140333BDB: jz      short loc_140333C57
 * 0000000140333BDD: sub     ecx, 1
 * 0000000140333BE0: jz      short loc_140333C3E
 * 0000000140333BE2: sub     ecx, 1
 * 0000000140333BE5: jz      short loc_140333C24
 * 0000000140333BE7: cmp     ecx, 1
 * 0000000140333BEA: jz      short loc_140333C06
 * 0000000140333BEC: mov     [rbp+20F0h+var_1ED0], 67076494h
 * 0000000140333BF6: mov     r9d, [rbp+20F0h+var_1ED0]
 * 0000000140333BFD: rol     r9d, 4
 * 0000000140333C01: jmp     loc_140333DB0
 * 0000000140333C06: mov     [rbp+20F0h+var_1ECC], 0A8223938h
 * 0000000140333C10: mov     r9d, [rbp+20F0h+var_1ECC]
 * 0000000140333C17: xor     r9d, 3
 * 0000000140333C1B: ror     r9d, 0Fh
 * 0000000140333C1F: jmp     loc_140333DB0
 * 0000000140333C24: mov     [rbp+20F0h+var_1EC8], 85B5910Dh
 * 0000000140333C2E: mov     r9d, [rbp+20F0h+var_1EC8]
 * 0000000140333C35: ror     r9d, 2
 * 0000000140333C39: jmp     loc_140333DB0
 * 0000000140333C3E: mov     [rbp+20F0h+var_1EC4], 0B2AD31A1h
 * 0000000140333C48: mov     r9d, [rbp+20F0h+var_1EC4]
 * 0000000140333C4F: rol     r9d, 1
 * 0000000140333C52: jmp     loc_140333DB0
 * 0000000140333C57: mov     [rbp+20F0h+var_1EC0], 0D098D0D8h
 * 0000000140333C61: mov     r9d, [rbp+20F0h+var_1EC0]
 * 0000000140333C68: ror     r9d, 6
 * 0000000140333C6C: jmp     loc_140333DB0
 * 0000000140333C71: mov     [rbp+20F0h+var_1EBC], 288C49EDh
 * 0000000140333C7B: mov     r9d, [rbp+20F0h+var_1EBC]
 * 0000000140333C82: ror     r9d, 5
 * 0000000140333C86: jmp     loc_140333DB0
 * 0000000140333C8B: sub     ecx, r8d
 * 0000000140333C8E: jz      loc_140333D98
 * 0000000140333C94: sub     ecx, 1
 * 0000000140333C97: jz      loc_140333D81
 * 0000000140333C9D: sub     ecx, 1
 * 0000000140333CA0: jz      loc_140333D6A
 * 0000000140333CA6: cmp     ecx, 1
 * 0000000140333CA9: jz      loc_140333D4F
 * 0000000140333CAF: rdtsc
 * 0000000140333CB1: shl     rdx, 20h
 * 0000000140333CB5: or      rax, rdx
 * 0000000140333CB8: mov     rcx, rax
 * 0000000140333CBB: ror     rax, 3
 * 0000000140333CBF: xor     rcx, rax
 * 0000000140333CC2: mov     rax, rbx
 * 0000000140333CC5: mul     rcx
 * 0000000140333CC8: mov     r9, rdx
 * 0000000140333CCB: mov     [rbp+20F0h+var_1810], rdx
 * 0000000140333CD2: xor     r9d, eax
 * 0000000140333CD5: mov     eax, 4EC4EC4Fh
 * 0000000140333CDA: mul     r9d
 * 0000000140333CDD: mov     ecx, r9d
 * 0000000140333CE0: shr     r9d, 5
 * 0000000140333CE4: shr     edx, 3
 * 0000000140333CE7: mov     r8d, r9d
 * 0000000140333CEA: imul    eax, edx, 1Ah
 * 0000000140333CED: sub     ecx, eax
 * 0000000140333CEF: mov     eax, 4EC4EC4Fh
 * 0000000140333CF4: mul     r9d
 * 0000000140333CF7: add     ecx, 61h ; 'a'
 * 0000000140333CFA: shr     r9d, 5
 * 0000000140333CFE: shl     ecx, 8
 * 0000000140333D01: shr     edx, 3
 * 0000000140333D04: imul    eax, edx, 1Ah
 * 0000000140333D07: sub     r8d, eax
 * 0000000140333D0A: mov     eax, 4EC4EC4Fh
 * 0000000140333D0F: mul     r9d
 * 0000000140333D12: add     r8d, 41h ; 'A'
 * 0000000140333D16: or      r8d, ecx
 * 0000000140333D19: shr     edx, 3
 * 0000000140333D1C: imul    eax, edx, 1Ah
 * 0000000140333D1F: mov     ecx, r9d
 * 0000000140333D22: shr     r9d, 5
 * 0000000140333D26: shl     r8d, 8
 * 0000000140333D2A: sub     ecx, eax
 * 0000000140333D2C: mov     eax, 4EC4EC4Fh
 * 0000000140333D31: mul     r9d
 * 0000000140333D34: add     ecx, 61h ; 'a'
 * 0000000140333D37: shr     edx, 3
 * 0000000140333D3A: or      ecx, r8d
 * 0000000140333D3D: imul    eax, edx, 1Ah
 * 0000000140333D40: shl     ecx, 8
 * 0000000140333D43: sub     r9d, eax
 * 0000000140333D46: add     r9d, 41h ; 'A'
 * 0000000140333D4A: or      r9d, ecx
 * 0000000140333D4D: jmp     short loc_140333DB0
 * 0000000140333D4F: mov     [rbp+20F0h+var_1EB8], 0B0869E85h
 * 0000000140333D59: mov     r9d, [rbp+20F0h+var_1EB8]
 * 0000000140333D60: xor     r9d, 9
 * 0000000140333D64: ror     r9d, 21h
 * 0000000140333D68: jmp     short loc_140333DB0
 * 0000000140333D6A: mov     [rbp+20F0h+var_1EB4], 64664142h
 * 0000000140333D74: mov     r9d, [rbp+20F0h+var_1EB4]
 * 0000000140333D7B: ror     r9d, 8
 * 0000000140333D7F: jmp     short loc_140333DB0
 * 0000000140333D81: mov     [rbp+20F0h+var_1EB0], 82C6A6D8h
 * 0000000140333D8B: mov     r9d, [rbp+20F0h+var_1EB0]
 * 0000000140333D92: rol     r9d, 7
 * 0000000140333D96: jmp     short loc_140333DB0
 * 0000000140333D98: mov     [rbp+20F0h+var_1EAC], 4E574672h
 * 0000000140333DA2: mov     r9d, [rbp+20F0h+var_1EAC]
 * 0000000140333DA9: xor     r9d, r8d
 * 0000000140333DAC: ror     r9d, 18h
 * 0000000140333DB0: mov     rax, [r12+0F0h]
 * 0000000140333DB8: mov     r8d, r9d
 * 0000000140333DBB: mov     rdx, [r12+750h]
 * 0000000140333DC3: mov     ecx, 200h
 * 0000000140333DC8: call    KeGuardDispatchICall
 * 0000000140333DCD: mov     r15, rax
 * 0000000140333DD0: xor     eax, eax
 * 0000000140333DD2: test    r15, r15
 * 0000000140333DD5: jz      loc_140333EA1
 * 0000000140333DDB: mov     rcx, [r12+6D0h]
 * 0000000140333DE3: mov     rax, [r12+508h]
 * 0000000140333DEB: mov     r14d, [rcx+rax]
 * 0000000140333DEF: test    r14d, r14d
 * 0000000140333DF2: jz      short loc_140333E1F
 * 0000000140333DF4: rdtsc
 * 0000000140333DF6: shl     rdx, 20h
 * 0000000140333DFA: or      rax, rdx
 * 0000000140333DFD: mov     rcx, rax
 * 0000000140333E00: ror     rax, 3
 * 0000000140333E04: xor     rcx, rax
 * 0000000140333E07: mov     rax, rbx
 * 0000000140333E0A: mul     rcx
 * 0000000140333E0D: mov     [rbp+20F0h+var_1808], rdx
 * 0000000140333E14: xor     rax, rdx
 * 0000000140333E17: xor     edx, edx
 * 0000000140333E19: div     r14
 * 0000000140333E1C: mov     r14, rdx
 * 0000000140333E1F: mov     rax, [r12+3A8h]
 * 0000000140333E27: xor     ecx, ecx
 * 0000000140333E29: call    KeGuardDispatchICall
 * 0000000140333E2E: mov     rbx, rax
 * 0000000140333E31: test    rax, rax
 * 0000000140333E34: jz      short loc_140333E8F
 * 0000000140333E36: test    r14d, r14d
 * 0000000140333E39: jz      short loc_140333E56
 * 0000000140333E3B: mov     rax, [r12+3A8h]
 * 0000000140333E43: mov     rcx, rbx
 * 0000000140333E46: add     r14d, r13d
 * 0000000140333E49: call    KeGuardDispatchICall
 * 0000000140333E4E: mov     rbx, rax
 * 0000000140333E51: test    rax, rax
 * 0000000140333E54: jnz     short loc_140333E36
 * 0000000140333E56: mov     rsi, r12
 * 0000000140333E59: test    rbx, rbx
 * 0000000140333E5C: jz      short loc_140333E8F
 * 0000000140333E5E: mov     rax, [r12+398h]
 * 0000000140333E66: mov     rcx, rbx
 * 0000000140333E69: call    KeGuardDispatchICall
 * 0000000140333E6E: test    eax, eax
 * 0000000140333E70: jns     short loc_140333E86
 * 0000000140333E72: mov     rax, [r12+3B0h]
 * 0000000140333E7A: mov     rcx, rbx
 * 0000000140333E7D: call    KeGuardDispatchICall
 * 0000000140333E82: xor     eax, eax
 * 0000000140333E84: mov     ebx, eax
 * 0000000140333E86: test    rbx, rbx
 * 0000000140333E89: jnz     loc_140333F60
 * 0000000140333E8F: mov     rax, [r12+0F8h]
 * 0000000140333E97: mov     rcx, r15
 * 0000000140333E9A: call    KeGuardDispatchICall
 * 0000000140333E9F: xor     eax, eax
 * 0000000140333EA1: mov     r13d, 1
 * 0000000140333EA7: mov     [rbp+20F0h+var_2018], eax
 * 0000000140333EAD: mov     [rbp+20F0h+var_1F68], rax
 * 0000000140333EB4: mov     ecx, 4
 * 0000000140333EB9: lea     rax, [rbp+20F0h+var_1F60]
 * 0000000140333EC0: xor     edx, edx
 * 0000000140333EC2: mov     r9d, 0FFFFFFFFh
 * 0000000140333EC8: mov     [rax], dl
 * 0000000140333ECA: add     rax, r13
 * 0000000140333ECD: add     ecx, r9d
 * 0000000140333ED0: jnz     short loc_140333EC8
 * 0000000140333ED2: mov     ecx, [r12+808h]
 * 0000000140333EDA: mov     r11, 0B3B74BDEE4453415h
 * 0000000140333EE4: mov     rdx, [rsp+10F0h+arg_0]
 * 0000000140333EEC: add     r12, 814h
 * 0000000140333EF3: mov     [rbp+20F0h+var_2068], r12
 * 0000000140333EFA: mov     r10d, 19h
 * 0000000140333F00: mov     [rbp+20F0h+var_2098], 0C000009Ah
 * 0000000140333F07: mov     r14d, 8000h
 * 0000000140333F0D: mov     eax, [r12]
 * 0000000140333F11: cmp     [rdx+810h], eax
 * 0000000140333F17: jge     loc_14033F288
 * 0000000140333F1D: mov     r14d, [rbp+20F0h+var_1CB8]
 * 0000000140333F24: lea     edx, [r10-18h]
 * 0000000140333F28: mov     ebx, [rbp+20F0h+var_1CC8]
 * 0000000140333F2E: mov     [rbp+20F0h+var_20A8], r14d
 * 0000000140333F32: mov     [rbp+20F0h+var_2040], ebx
 * 0000000140333F38: mov     eax, [rsi+970h]
 * 0000000140333F3E: mov     r8d, 110000h
 * 0000000140333F44: and     eax, r8d
 * 0000000140333F47: mov     r15d, 0C0000082h
 * 0000000140333F4D: cmp     eax, r8d
 * 0000000140333F50: jz      loc_14033409F
 * 0000000140333F56: xor     eax, eax
 * 0000000140333F58: mov     dr7, rax
 * 0000000140333F5B: jmp     loc_1403340A1
 * 0000000140333F60: mov     rax, [r12+430h]
 * 0000000140333F68: lea     rdx, [rbp+20F0h+var_1B40]
 * 0000000140333F6F: mov     rcx, rbx
 * 0000000140333F72: call    KeGuardDispatchICall
 * 0000000140333F77: mov     rax, [r12+1B8h]
 * 0000000140333F7F: xor     r9d, r9d
 * 0000000140333F82: xor     r8d, r8d
 * 0000000140333F85: mov     rdx, r15
 * 0000000140333F88: mov     rcx, rbx
 * 0000000140333F8B: call    KeGuardDispatchICall
 * 0000000140333F90: rdtsc
 * 0000000140333F92: shl     rdx, 20h
 * 0000000140333F96: or      rax, rdx
 * 0000000140333F99: mov     rcx, rax
 * 0000000140333F9C: ror     rax, 3
 * 0000000140333FA0: xor     rcx, rax
 * 0000000140333FA3: mov     rax, 7010008004002001h
 * 0000000140333FAD: mul     rcx
 * 0000000140333FB0: mov     rcx, r15
 * 0000000140333FB3: mov     rbx, rdx
 * 0000000140333FB6: mov     [rbp+20F0h+var_1800], rdx
 * 0000000140333FBD: xor     rbx, rax
 * 0000000140333FC0: mov     rax, [r12+1B0h]
 * 0000000140333FC8: call    KeGuardDispatchICall
 * 0000000140333FCD: mov     ecx, eax
 * 0000000140333FCF: xor     edx, edx
 * 0000000140333FD1: mov     rax, rbx
 * 0000000140333FD4: div     rcx
 * 0000000140333FD7: mov     rbx, rdx
 * 0000000140333FDA: cli
 * 0000000140333FDB: mov     rcx, gs:20h
 * 0000000140333FE4: mov     rax, [r12+630h]
 * 0000000140333FEC: mov     rcx, [rcx+rax]
 * 0000000140333FF0: sti
 * 0000000140333FF1: mov     rax, [r12+1C0h]
 * 0000000140333FF9: lea     rdx, [rbp+20F0h+var_1B50]
 * 0000000140334000: call    KeGuardDispatchICall
 * 0000000140334005: mov     rax, [r12+1A0h]
 * 000000014033400D: lea     rcx, [rbp+20F0h+var_16C0]
 * 0000000140334014: mov     rdx, r15
 * 0000000140334017: call    KeGuardDispatchICall
 * 000000014033401C: jmp     short loc_140334025
 * 000000014033401E: test    ebx, ebx
 * 0000000140334020: jz      short loc_140334046
 * 0000000140334022: add     ebx, r13d
 * 0000000140334025: mov     rax, [r12+1A8h]
 * 000000014033402D: lea     rdx, [rbp+20F0h+var_16C0]
 * 0000000140334034: lea     rcx, [rbp+20F0h+var_1F70]
 * 000000014033403B: call    KeGuardDispatchICall
 * 0000000140334040: test    eax, eax
 * 0000000140334042: jns     short loc_14033401E
 * 0000000140334044: jmp     short loc_140334060
 * 0000000140334046: mov     rax, [r12+198h]
 * 000000014033404E: lea     rcx, [rbp+20F0h+var_1B50]
 * 0000000140334055: mov     edx, [rbp+20F0h+var_1F70]
 * 000000014033405B: call    KeGuardDispatchICall
 * 0000000140334060: mov     rax, [r12+1C8h]
 * 0000000140334068: lea     rdx, [rbp+20F0h+var_16E0]
 * 000000014033406F: lea     rcx, [rbp+20F0h+var_1B50]
 * 0000000140334076: call    KeGuardDispatchICall
 * 000000014033407B: mov     rax, [r12+0F8h]
 * 0000000140334083: mov     rcx, r15
 * 0000000140334086: call    KeGuardDispatchICall
 * 000000014033408B: mov     r13d, 1
 * 0000000140334091: xor     eax, eax
 * 0000000140334093: mov     [rbp+20F0h+var_2018], r13d
 * 000000014033409A: jmp     loc_140333EAD
 * 000000014033409F: xor     eax, eax
 * 00000001403340A1: cmp     ecx, [rsi+7F4h]
 * 00000001403340A7: jnz     short loc_1403340DF
 * 00000001403340A9: add     [rsi+818h], edx
 * 00000001403340AF: mov     ecx, eax
 * 00000001403340B1: cmp     dword ptr [rsi+934h], 0Bh
 * 00000001403340B8: jnz     short loc_1403340DF
 * 00000001403340BA: mov     eax, [rsi+970h]
 * 00000001403340C0: test    dl, al
 * 00000001403340C2: jnz     short loc_1403340DF
 * 00000001403340C4: cmp     [rsi+950h], r9d
 * 00000001403340CB: jnz     short loc_1403340D7
 * 00000001403340CD: xor     eax, eax
 * 00000001403340CF: mov     [rsi+950h], eax
 * 00000001403340D5: jmp     short loc_1403340DF
 * 00000001403340D7: or      eax, edx
 * 00000001403340D9: mov     [rsi+970h], eax
 * 00000001403340DF: mov     rax, [rsi+0A48h]
 * 00000001403340E6: mov     r9, rsi
 * 00000001403340E9: test    rax, rax
 * 00000001403340EC: mov     [rbp+20F0h+var_2094], ecx
 * 00000001403340EF: cmovnz  r9, rax
 * 00000001403340F3: xor     eax, eax
 * 00000001403340F5: mov     r8d, eax
 * 00000001403340F8: mov     r13d, [r9+7F0h]
 * 00000001403340FF: add     r13, r9
 * 0000000140334102: mov     [rbp+20F0h+var_20D0], r13
 * 0000000140334106: cmp     dword ptr [rbp+20F0h+var_1F68], eax
 * 000000014033410C: jz      short loc_14033412B
 * 000000014033410E: cmp     dword ptr [rbp+20F0h+var_1F68+4], ecx
 * 0000000140334114: ja      short loc_14033412B
 * 0000000140334116: mov     r13d, [rbp+20F0h+var_1F60]
 * 000000014033411D: mov     r8d, dword ptr [rbp+20F0h+var_1F68+4]
 * 0000000140334124: add     r13, r9
 * 0000000140334127: mov     [rbp+20F0h+var_20D0], r13
 * 000000014033412B: mov     edx, 1
 * 0000000140334130: cmp     r8d, ecx
 * 0000000140334133: jz      loc_140334272
 * 0000000140334139: sub     ecx, r8d
 * 000000014033413C: lea     esi, [rdx+0Bh]
 * 000000014033413F: mov     r10d, ecx
 * 0000000140334142: lea     r11d, [rdx+1]
 * 0000000140334146: add     r8d, ecx
 * 0000000140334149: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 0000000140334153: mov     r15d, 0FFFh
 * 0000000140334159: mov     ecx, [r13+0]
 * 000000014033415D: cmp     ecx, esi
 * 000000014033415F: jg      short loc_1403341A6
 * 0000000140334161: jz      short loc_1403341BF
 * 0000000140334163: sub     ecx, 1
 * 0000000140334166: jz      short loc_1403341BF
 * 0000000140334168: sub     ecx, 6
 * 000000014033416B: jz      short loc_140334194
 * 000000014033416D: sub     ecx, 1
 * 0000000140334170: jz      short loc_14033418A
 * 0000000140334172: cmp     ecx, r11d
 * 0000000140334175: jnz     loc_1403341FC
 * 000000014033417B: mov     eax, [r13+1Ch]
 * 000000014033417F: add     eax, 3
 * 0000000140334182: shl     eax, 4
 * 0000000140334185: jmp     loc_140334234
 * 000000014033418A: movzx   eax, word ptr [r13+20h]
 * 000000014033418F: jmp     loc_14033422E
 * 0000000140334194: mov     eax, [r13+18h]
 * 0000000140334198: add     eax, r11d
 * 000000014033419B: lea     eax, [rax+rax*2]
 * 000000014033419E: shl     eax, 3
 * 00000001403341A1: jmp     loc_140334234
 * 00000001403341A6: cmp     ecx, 1Ch
 * 00000001403341A9: jz      short loc_140334229
 * 00000001403341AB: cmp     ecx, 1Eh
 * 00000001403341AE: jz      short loc_140334203
 * 00000001403341B0: cmp     ecx, 20h ; ' '
 * 00000001403341B3: jle     short loc_1403341FC
 * 00000001403341B5: cmp     ecx, 22h ; '"'
 * 00000001403341B8: jle     short loc_1403341DB
 * 00000001403341BA: cmp     ecx, 2Bh ; '+'
 * 00000001403341BD: jnz     short loc_1403341FC
 * 00000001403341BF: mov     ecx, [r13+10h]
 * 00000001403341C3: mov     rax, rdi
 * 00000001403341C6: mul     rcx
 * 00000001403341C9: shr     rdx, 3
 * 00000001403341CD: lea     eax, ds:30h[rdx*4]
 * 00000001403341D4: mov     edx, 1
 * 00000001403341D9: jmp     short loc_140334234
 * 00000001403341DB: mov     ecx, [r13+20h]
 * 00000001403341DF: mov     edx, [r13+28h]
 * 00000001403341E3: and     rcx, r15
 * 00000001403341E6: add     rdx, r15
 * 00000001403341E9: add     rdx, rcx
 * 00000001403341EC: shr     rdx, 0Ch
 * 00000001403341F0: lea     eax, [rdx+rdx*4]
 * 00000001403341F3: lea     eax, ds:30h[rax*4]
 * 00000001403341FA: jmp     short loc_1403341D4
 * 00000001403341FC: mov     eax, 30h ; '0'
 * 0000000140334201: jmp     short loc_140334234
 * 0000000140334203: mov     ecx, [r13+24h]
 * 0000000140334207: mov     rax, rdi
 * 000000014033420A: sub     ecx, edx
 * 000000014033420C: mul     rcx
 * 000000014033420F: movzx   eax, word ptr [r13+28h]
 * 0000000140334214: shr     rdx, 3
 * 0000000140334218: add     edx, 7
 * 000000014033421B: and     edx, 0FFFFFFF8h
 * 000000014033421E: add     eax, r11d
 * 0000000140334221: lea     eax, [rax+rax*2]
 * 0000000140334224: lea     eax, [rdx+rax*8]
 * 0000000140334227: jmp     short loc_1403341D4
 * 0000000140334229: movzx   eax, word ptr [r13+28h]
 * 000000014033422E: add     eax, 37h ; '7'
 * 0000000140334231: and     eax, 0FFFFFFF8h
 * 0000000140334234: add     r13, rax
 * 0000000140334237: sub     r10, rdx
 * 000000014033423A: jnz     loc_140334159
 * 0000000140334240: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140334244: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033424B: mov     r12, [rbp+20F0h+var_2068]
 * 0000000140334252: mov     r10d, 19h
 * 0000000140334258: mov     ebx, [rbp+20F0h+var_2040]
 * 000000014033425E: mov     r15d, 0C0000082h
 * 0000000140334264: mov     [rbp+20F0h+var_20D0], r13
 * 0000000140334268: mov     r11, 0B3B74BDEE4453415h
 * 0000000140334272: mov     eax, r13d
 * 0000000140334275: mov     dword ptr [rbp+20F0h+var_1F68], edx
 * 000000014033427B: sub     eax, r9d
 * 000000014033427E: mov     dword ptr [rbp+20F0h+var_1F68+4], r8d
 * 0000000140334285: mov     [rbp+20F0h+var_1F60], eax
 * 000000014033428B: mov     r14d, [r13+0]
 * 000000014033428F: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 0000000140334293: cmp     r14d, 1Ch
 * 0000000140334297: jg      loc_1403398E4
 * 000000014033429D: jz      loc_140338ED6
 * 00000001403342A3: mov     r8d, 0Ch
 * 00000001403342A9: cmp     r14d, r8d
 * 00000001403342AC: jg      loc_1403357AE
 * 00000001403342B2: jz      loc_14033D2B1
 * 00000001403342B8: xor     eax, eax
 * 00000001403342BA: mov     ecx, r14d
 * 00000001403342BD: test    r14d, r14d
 * 00000001403342C0: jz      loc_140335520
 * 00000001403342C6: sub     ecx, 1
 * 00000001403342C9: jz      loc_14033D2B3
 * 00000001403342CF: sub     ecx, 3
 * 00000001403342D2: jz      loc_1403352BB
 * 00000001403342D8: sub     ecx, 1
 * 00000001403342DB: jz      loc_140334F9E
 * 00000001403342E1: lea     r8d, [rax+2]
 * 00000001403342E5: sub     ecx, r8d
 * 00000001403342E8: jz      loc_140334E3F
 * 00000001403342EE: sub     ecx, 1
 * 00000001403342F1: jz      loc_140334A2F
 * 00000001403342F7: sub     ecx, r8d
 * 00000001403342FA: jz      loc_14033468C
 * 0000000140334300: cmp     ecx, 1
 * 0000000140334303: jnz     loc_14033E4C6
 * 0000000140334309: cmp     [rsi+960h], rax
 * 0000000140334310: jnz     short loc_140334320
 * 0000000140334312: mov     [rsi+80Ch], eax
 * 0000000140334318: xor     r10d, r10d
 * 000000014033431B: jmp     loc_14033462F
 * 0000000140334320: cmp     [rsi+80Ch], eax
 * 0000000140334326: jnz     loc_140334408
 * 000000014033432C: mov     eax, [rsi+974h]
 * 0000000140334332: mov     ecx, eax
 * 0000000140334334: shl     ecx, 3
 * 0000000140334337: xor     ecx, eax
 * 0000000140334339: and     ecx, 20h
 * 000000014033433C: xor     ecx, eax
 * 000000014033433E: mov     [rsi+974h], ecx
 * 0000000140334344: test    cl, 4
 * 0000000140334347: jz      loc_140334424
 * 000000014033434D: mov     rcx, [r13+8]
 * 0000000140334351: mov     r14d, 0FFFh
 * 0000000140334357: mov     eax, [r13+10h]
 * 000000014033435B: and     r14, rcx
 * 000000014033435E: add     rax, 0FFFh
 * 0000000140334364: mov     rbx, rcx
 * 0000000140334367: add     r14, rax
 * 000000014033436A: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140334371: shr     r14, 0Ch
 * 0000000140334375: test    r14, r14
 * 0000000140334378: jz      short loc_140334318
 * 000000014033437A: xor     edi, edi
 * 000000014033437C: mov     r12, 0B3B74BDEE4453415h
 * 0000000140334386: mov     rax, [rsi+2A8h]
 * 000000014033438D: mov     rcx, rbx
 * 0000000140334390: sub     r14, rdx
 * 0000000140334393: call    KeGuardDispatchICall
 * 0000000140334398: mov     edx, 1
 * 000000014033439D: test    al, al
 * 000000014033439F: jz      short loc_1403343E0
 * 00000001403343A1: cmp     [rsi+8D8h], edi
 * 00000001403343A7: jnz     short loc_1403343E0
 * 00000001403343A9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403343B3: add     rax, rsi
 * 00000001403343B6: mov     [rsi+8E0h], rax
 * 00000001403343BD: lea     rax, [r12+r13]
 * 00000001403343C1: mov     [rsi+8E8h], rax
 * 00000001403343C8: movsxd  rax, dword ptr [r13+0]
 * 00000001403343CC: mov     [rsi+8F0h], rax
 * 00000001403343D3: mov     [rsi+8F8h], rbx
 * 00000001403343DA: mov     [rsi+8D8h], edx
 * 00000001403343E0: add     dword ptr [rsi+810h], 100h
 * 00000001403343EA: add     rbx, 1000h
 * 00000001403343F1: test    r14, r14
 * 00000001403343F4: jnz     short loc_140334386
 * 00000001403343F6: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403343FD: xor     r10d, r10d
 * 0000000140334400: mov     r11, r12
 * 0000000140334403: jmp     loc_14033462F
 * 0000000140334408: mov     ecx, [rsi+974h]
 * 000000014033440E: mov     eax, ecx
 * 0000000140334410: shr     eax, 3
 * 0000000140334413: xor     eax, ecx
 * 0000000140334415: test    al, 4
 * 0000000140334417: jz      loc_140334344
 * 000000014033441D: xor     eax, eax
 * 000000014033441F: jmp     loc_140334312
 * 0000000140334424: mov     r11, [r13+8]
 * 0000000140334428: mov     r8d, [r13+10h]
 * 000000014033442C: mov     r9, r11
 * 000000014033442F: add     [rsi+810h], r8d
 * 0000000140334436: mov     rax, r11
 * 0000000140334439: mov     r14d, [rsi+7FCh]
 * 0000000140334440: mov     r15, [rsi+800h]
 * 0000000140334447: lea     rcx, [r11+r8]
 * 000000014033444B: cmp     r11, rcx
 * 000000014033444E: jnb     short loc_140334460
 * 0000000140334450: mov     edx, 40h ; '@'
 * 0000000140334455: prefetchnta byte ptr [rax]
 * 0000000140334458: add     rax, rdx
 * 000000014033445B: cmp     rax, rcx
 * 000000014033445E: jb      short loc_140334455
 * 0000000140334460: mov     r10d, r8d
 * 0000000140334463: mov     rbx, r15
 * 0000000140334466: shr     r10d, 7
 * 000000014033446A: mov     r12d, 1
 * 0000000140334470: test    r10d, r10d
 * 0000000140334473: jz      short loc_1403344DE
 * 0000000140334475: mov     rsi, 7010008004002001h
 * 000000014033447F: mov     edx, 8
 * 0000000140334484: mov     rax, [r9]
 * 0000000140334487: mov     ecx, r14d
 * 000000014033448A: xor     rax, rbx
 * 000000014033448D: mov     rbx, [r9+8]
 * 0000000140334491: rol     rax, cl
 * 0000000140334494: add     r9, 10h
 * 0000000140334498: xor     rbx, rax
 * 000000014033449B: rol     rbx, cl
 * 000000014033449E: sub     rdx, r12
 * 00000001403344A1: jnz     short loc_140334484
 * 00000001403344A3: mov     rcx, r9
 * 00000001403344A6: sub     rcx, r11
 * 00000001403344A9: xor     rcx, r15
 * 00000001403344AC: mov     rax, rcx
 * 00000001403344AF: rol     rax, 11h
 * 00000001403344B3: xor     rcx, rax
 * 00000001403344B6: mov     rax, rsi
 * 00000001403344B9: mul     rcx
 * 00000001403344BC: mov     [rbp+20F0h+var_17F8], rdx
 * 00000001403344C3: xor     edx, eax
 * 00000001403344C5: xor     r14d, edx
 * 00000001403344C8: mov     eax, 0FFFFFFFFh
 * 00000001403344CD: and     r14d, 3Fh
 * 00000001403344D1: cmovz   r14d, r12d
 * 00000001403344D5: add     r10d, eax
 * 00000001403344D8: jnz     short loc_14033447F
 * 00000001403344DA: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403344DE: and     r8d, 7Fh
 * 00000001403344E2: cmp     r8d, 8
 * 00000001403344E6: jb      short loc_140334505
 * 00000001403344E8: mov     edx, r8d
 * 00000001403344EB: shr     rdx, 3
 * 00000001403344EF: xor     rbx, [r9]
 * 00000001403344F2: mov     ecx, r14d
 * 00000001403344F5: rol     rbx, cl
 * 00000001403344F8: add     r9, 8
 * 00000001403344FC: add     r8d, 0FFFFFFF8h
 * 0000000140334500: sub     rdx, r12
 * 0000000140334503: jnz     short loc_1403344EF
 * 0000000140334505: test    r8d, r8d
 * 0000000140334508: jz      short loc_140334528
 * 000000014033450A: mov     esi, 0FFFFFFFFh
 * 000000014033450F: movzx   eax, byte ptr [r9]
 * 0000000140334513: mov     ecx, r14d
 * 0000000140334516: xor     rbx, rax
 * 0000000140334519: add     r9, r12
 * 000000014033451C: rol     rbx, cl
 * 000000014033451F: add     r8d, esi
 * 0000000140334522: jnz     short loc_14033450F
 * 0000000140334524: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140334528: mov     rax, rbx
 * 000000014033452B: shr     rax, 1Fh
 * 000000014033452F: xor     r10d, r10d
 * 0000000140334532: jmp     short loc_14033453A
 * 0000000140334534: xor     ebx, eax
 * 0000000140334536: shr     rax, 1Fh
 * 000000014033453A: test    rax, rax
 * 000000014033453D: jnz     short loc_140334534
 * 000000014033453F: mov     edx, [r13+14h]
 * 0000000140334543: btr     ebx, 1Fh
 * 0000000140334547: cmp     ebx, edx
 * 0000000140334549: jz      loc_140334625
 * 000000014033454F: mov     ecx, [r13+10h]
 * 0000000140334553: mov     r8, [r13+8]
 * 0000000140334557: test    rcx, rcx
 * 000000014033455A: jz      loc_1403345F5
 * 0000000140334560: mov     eax, [rsi+974h]
 * 0000000140334566: mov     r9d, 40h ; '@'
 * 000000014033456C: test    r9b, al
 * 000000014033456F: jz      loc_1403345F5
 * 0000000140334575: mov     r12, cr8
 * 0000000140334579: lea     eax, [r9-3Eh]
 * 000000014033457D: mov     cr8, rax
 * 0000000140334581: lea     rax, [rcx-1]
 * 0000000140334585: mov     r14, r8
 * 0000000140334588: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033458F: add     rax, r8
 * 0000000140334592: mov     ecx, 0FFFh
 * 0000000140334597: or      rax, rcx
 * 000000014033459A: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033459E: lea     r13, [r14-1]
 * 00000001403345A2: movzx   r15d, r12b
 * 00000001403345A6: mov     rax, [rsi+460h]
 * 00000001403345AD: xor     edx, edx
 * 00000001403345AF: mov     rcx, r14
 * 00000001403345B2: call    KeGuardDispatchICall
 * 00000001403345B7: cmp     eax, 0C000022Dh
 * 00000001403345BC: jnz     short loc_1403345E2
 * 00000001403345BE: mov     eax, 1
 * 00000001403345C3: cmp     r12b, al
 * 00000001403345C6: ja      short loc_14033460C
 * 00000001403345C8: movzx   r15d, r12b
 * 00000001403345CC: mov     cr8, r15
 * 00000001403345D0: mov     al, [r14]
 * 00000001403345D3: mov     rax, cr8
 * 00000001403345D7: mov     eax, 2
 * 00000001403345DC: mov     cr8, rax
 * 00000001403345E0: jmp     short loc_1403345A6
 * 00000001403345E2: xor     r10d, r10d
 * 00000001403345E5: test    eax, eax
 * 00000001403345E7: jns     short loc_14033460F
 * 00000001403345E9: mov     cr8, r15
 * 00000001403345ED: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403345F1: mov     edx, [r13+14h]
 * 00000001403345F5: mov     eax, [rsi+8D8h]
 * 00000001403345FB: test    eax, eax
 * 00000001403345FD: jnz     loc_140335751
 * 0000000140334603: mov     ecx, ebx
 * 0000000140334605: mov     eax, edx
 * 0000000140334607: jmp     loc_14033573D
 * 000000014033460C: xor     r10d, r10d
 * 000000014033460F: mov     r8d, 1000h
 * 0000000140334615: add     r14, r8
 * 0000000140334618: add     r13, r8
 * 000000014033461B: cmp     r13, [rbp+20F0h+var_20F0]
 * 000000014033461F: jnz     short loc_1403345A2
 * 0000000140334621: mov     cr8, r15
 * 0000000140334625: mov     r11, 0B3B74BDEE4453415h
 * 000000014033462F: mov     r14d, 8000h
 * 0000000140334635: mov     edx, [rbp+20F0h+var_2094]
 * 0000000140334638: cmp     dword ptr [rsi+80Ch], 0
 * 000000014033463F: lea     ecx, [rdx-1]
 * 0000000140334642: cmovz   ecx, edx
 * 0000000140334645: mov     edx, 1
 * 000000014033464A: add     ecx, edx
 * 000000014033464C: cmp     [rsi+8D8h], r10d
 * 0000000140334653: jnz     loc_14033F28D
 * 0000000140334659: lea     r12, [rsi+814h]
 * 0000000140334660: mov     eax, [r12]
 * 0000000140334664: mov     [rbp+20F0h+var_2068], r12
 * 000000014033466B: cmp     [rsi+810h], eax
 * 0000000140334671: jge     loc_14033F28D
 * 0000000140334677: mov     ebx, [rbp+20F0h+var_2040]
 * 000000014033467D: lea     r10d, [rdx+18h]
 * 0000000140334681: mov     r9d, 0FFFFFFFFh
 * 0000000140334687: jmp     loc_140333F38
 * 000000014033468C: cmp     [r13+18h], eax
 * 0000000140334690: jz      short loc_1403346D3
 * 0000000140334692: cmp     [rsi+960h], rax
 * 0000000140334699: jz      loc_14033483A
 * 000000014033469F: mov     ecx, [rsi+974h]
 * 00000001403346A5: test    cl, 4
 * 00000001403346A8: jnz     loc_14033483A
 * 00000001403346AE: lea     rax, [rsi+80Ch]
 * 00000001403346B5: xor     r10d, r10d
 * 00000001403346B8: cmp     [rax], r10d
 * 00000001403346BB: jnz     loc_140334829
 * 00000001403346C1: mov     eax, ecx
 * 00000001403346C3: shl     eax, 3
 * 00000001403346C6: xor     eax, ecx
 * 00000001403346C8: and     eax, 20h
 * 00000001403346CB: xor     eax, ecx
 * 00000001403346CD: mov     [rsi+974h], eax
 * 00000001403346D3: mov     edx, [r13+1Ch]
 * 00000001403346D7: lea     rax, [rsi+80Ch]
 * 00000001403346DE: mov     r14d, [rax]
 * 00000001403346E1: lea     rcx, [r13+30h]
 * 00000001403346E5: shl     r14, 4
 * 00000001403346E9: add     r14, rcx
 * 00000001403346EC: shl     rdx, 4
 * 00000001403346F0: add     rdx, rcx
 * 00000001403346F3: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403346F7: mov     [rbp+20F0h+var_20F0], rdx
 * 00000001403346FB: mov     [rbp+20F0h+var_20D8], r14
 * 00000001403346FF: xor     eax, eax
 * 0000000140334701: cmp     [r14], eax
 * 0000000140334704: jl      loc_1403349DA
 * 000000014033470A: mov     rdi, [r14+8]
 * 000000014033470E: mov     r8d, [r14+4]
 * 0000000140334712: mov     r9, rdi
 * 0000000140334715: add     [rsi+810h], r8d
 * 000000014033471C: mov     rax, rdi
 * 000000014033471F: mov     r11d, [rsi+7FCh]
 * 0000000140334726: mov     r12d, r8d
 * 0000000140334729: mov     r15, [rsi+800h]
 * 0000000140334730: lea     rcx, [r8+rdi]
 * 0000000140334734: cmp     rdi, rcx
 * 0000000140334737: jnb     short loc_14033474A
 * 0000000140334739: mov     r10d, 40h ; '@'
 * 000000014033473F: prefetchnta byte ptr [rax]
 * 0000000140334742: add     rax, r10
 * 0000000140334745: cmp     rax, rcx
 * 0000000140334748: jb      short loc_14033473F
 * 000000014033474A: mov     r10d, r8d
 * 000000014033474D: mov     rbx, r15
 * 0000000140334750: shr     r10d, 7
 * 0000000140334754: test    r10d, r10d
 * 0000000140334757: jz      short loc_1403347CD
 * 0000000140334759: mov     esi, 1
 * 000000014033475E: mov     r12d, 0FFFFFFFFh
 * 0000000140334764: mov     r14, 7010008004002001h
 * 000000014033476E: mov     eax, 8
 * 0000000140334773: xor     rbx, [r9]
 * 0000000140334776: mov     ecx, r11d
 * 0000000140334779: rol     rbx, cl
 * 000000014033477C: xor     rbx, [r9+8]
 * 0000000140334780: add     r9, 10h
 * 0000000140334784: rol     rbx, cl
 * 0000000140334787: sub     rax, rsi
 * 000000014033478A: jnz     short loc_140334773
 * 000000014033478C: mov     rcx, r9
 * 000000014033478F: sub     rcx, rdi
 * 0000000140334792: xor     rcx, r15
 * 0000000140334795: mov     rax, rcx
 * 0000000140334798: rol     rax, 11h
 * 000000014033479C: xor     rcx, rax
 * 000000014033479F: mov     rax, r14
 * 00000001403347A2: mul     rcx
 * 00000001403347A5: mov     [rbp+20F0h+var_17F0], rdx
 * 00000001403347AC: xor     edx, eax
 * 00000001403347AE: xor     r11d, edx
 * 00000001403347B1: and     r11d, 3Fh
 * 00000001403347B5: cmovz   r11d, esi
 * 00000001403347B9: add     r10d, r12d
 * 00000001403347BC: jnz     short loc_14033476E
 * 00000001403347BE: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403347C2: mov     r12, r8
 * 00000001403347C5: mov     r14, [rbp+20F0h+var_20D8]
 * 00000001403347C9: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403347CD: and     r8d, 7Fh
 * 00000001403347D1: mov     r10d, 1
 * 00000001403347D7: cmp     r8d, 8
 * 00000001403347DB: jb      short loc_1403347FA
 * 00000001403347DD: mov     eax, r8d
 * 00000001403347E0: shr     rax, 3
 * 00000001403347E4: xor     rbx, [r9]
 * 00000001403347E7: mov     ecx, r11d
 * 00000001403347EA: rol     rbx, cl
 * 00000001403347ED: add     r9, 8
 * 00000001403347F1: add     r8d, 0FFFFFFF8h
 * 00000001403347F5: sub     rax, r10
 * 00000001403347F8: jnz     short loc_1403347E4
 * 00000001403347FA: test    r8d, r8d
 * 00000001403347FD: jz      short loc_14033481D
 * 00000001403347FF: mov     esi, 0FFFFFFFFh
 * 0000000140334804: movzx   eax, byte ptr [r9]
 * 0000000140334808: mov     ecx, r11d
 * 000000014033480B: xor     rbx, rax
 * 000000014033480E: add     r9, r10
 * 0000000140334811: rol     rbx, cl
 * 0000000140334814: add     r8d, esi
 * 0000000140334817: jnz     short loc_140334804
 * 0000000140334819: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033481D: mov     rax, rbx
 * 0000000140334820: shr     rax, 1Fh
 * 0000000140334824: xor     r10d, r10d
 * 0000000140334827: jmp     short loc_140334852
 * 0000000140334829: test    cl, 20h
 * 000000014033482C: jz      loc_1403346D3
 * 0000000140334832: mov     r14d, r10d
 * 0000000140334835: jmp     loc_140334A27
 * 000000014033483A: mov     r14d, eax
 * 000000014033483D: xor     r10d, r10d
 * 0000000140334840: lea     rax, [rsi+80Ch]
 * 0000000140334847: jmp     loc_140334A27
 * 000000014033484C: xor     ebx, eax
 * 000000014033484E: shr     rax, 1Fh
 * 0000000140334852: test    rax, rax
 * 0000000140334855: jnz     short loc_14033484C
 * 0000000140334857: mov     ecx, [r14]
 * 000000014033485A: btr     ebx, 1Fh
 * 000000014033485E: mov     eax, ecx
 * 0000000140334860: btr     eax, 1Fh
 * 0000000140334864: cmp     ebx, eax
 * 0000000140334866: jz      loc_1403349B2
 * 000000014033486C: test    r12, r12
 * 000000014033486F: jz      loc_140334912
 * 0000000140334875: mov     eax, [rsi+974h]
 * 000000014033487B: mov     edx, 40h ; '@'
 * 0000000140334880: test    dl, al
 * 0000000140334882: jz      loc_140334912
 * 0000000140334888: mov     r13, cr8
 * 000000014033488C: lea     eax, [rdx-3Eh]
 * 000000014033488F: mov     cr8, rax
 * 0000000140334893: mov     r15, rdi
 * 0000000140334896: lea     rax, [rdi-1]
 * 000000014033489A: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001403348A1: add     rax, r12
 * 00000001403348A4: mov     ecx, 0FFFh
 * 00000001403348A9: or      rax, rcx
 * 00000001403348AC: mov     [rbp+20F0h+var_2080], rax
 * 00000001403348B0: lea     rax, [r15-1]
 * 00000001403348B4: mov     [rbp+20F0h+var_20D8], rax
 * 00000001403348B8: movzx   r12d, r13b
 * 00000001403348BC: mov     rax, [rsi+460h]
 * 00000001403348C3: xor     edx, edx
 * 00000001403348C5: mov     rcx, r15
 * 00000001403348C8: call    KeGuardDispatchICall
 * 00000001403348CD: cmp     eax, 0C000022Dh
 * 00000001403348D2: jnz     short loc_1403348FC
 * 00000001403348D4: mov     eax, 1
 * 00000001403348D9: cmp     r13b, al
 * 00000001403348DC: ja      loc_14033498A
 * 00000001403348E2: movzx   r12d, r13b
 * 00000001403348E6: mov     cr8, r12
 * 00000001403348EA: mov     al, [r15]
 * 00000001403348ED: mov     rax, cr8
 * 00000001403348F1: mov     eax, 2
 * 00000001403348F6: mov     cr8, rax
 * 00000001403348FA: jmp     short loc_1403348BC
 * 00000001403348FC: xor     r10d, r10d
 * 00000001403348FF: test    eax, eax
 * 0000000140334901: jns     loc_14033498D
 * 0000000140334907: mov     cr8, r12
 * 000000014033490B: mov     ecx, [r14]
 * 000000014033490E: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140334912: mov     eax, ecx
 * 0000000140334914: mov     ecx, [rsi+8D8h]
 * 000000014033491A: btr     eax, 1Fh
 * 000000014033491E: test    ecx, ecx
 * 0000000140334920: jnz     loc_1403349C5
 * 0000000140334926: mov     ecx, ebx
 * 0000000140334928: xor     rcx, rax
 * 000000014033492B: mov     rax, [rsi+580h]
 * 0000000140334932: mov     [rax+18h], rcx
 * 0000000140334936: mov     ecx, [rsi+8D8h]
 * 000000014033493C: test    ecx, ecx
 * 000000014033493E: jnz     loc_1403349C5
 * 0000000140334944: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033494E: mov     r11, 0B3B74BDEE4453415h
 * 0000000140334958: add     rax, rsi
 * 000000014033495B: mov     [rsi+8E0h], rax
 * 0000000140334962: lea     rax, [r11+r13]
 * 0000000140334966: mov     [rsi+8E8h], rax
 * 000000014033496D: movsxd  rax, dword ptr [r13+0]
 * 0000000140334971: mov     [rsi+8F0h], rax
 * 0000000140334978: lea     eax, [rcx+1]
 * 000000014033497B: mov     [rsi+8F8h], rdi
 * 0000000140334982: mov     [rsi+8D8h], eax
 * 0000000140334988: jmp     short loc_1403349CF
 * 000000014033498A: xor     r10d, r10d
 * 000000014033498D: mov     rax, [rbp+20F0h+var_20D8]
 * 0000000140334991: mov     ecx, 1000h
 * 0000000140334996: add     rax, rcx
 * 0000000140334999: add     r15, rcx
 * 000000014033499C: mov     [rbp+20F0h+var_20D8], rax
 * 00000001403349A0: cmp     rax, [rbp+20F0h+var_2080]
 * 00000001403349A4: jnz     loc_1403348B8
 * 00000001403349AA: mov     cr8, r12
 * 00000001403349AE: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403349B2: mov     r12, [rbp+20F0h+var_2068]
 * 00000001403349B9: mov     r11, 0B3B74BDEE4453415h
 * 00000001403349C3: jmp     short loc_1403349DD
 * 00000001403349C5: mov     r11, 0B3B74BDEE4453415h
 * 00000001403349CF: mov     r12, [rbp+20F0h+var_2068]
 * 00000001403349D6: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403349DA: xor     r10d, r10d
 * 00000001403349DD: add     r14, 10h
 * 00000001403349E1: mov     [rbp+20F0h+var_20D8], r14
 * 00000001403349E5: cmp     r14, rdx
 * 00000001403349E8: jnb     short loc_140334A01
 * 00000001403349EA: mov     eax, [r12]
 * 00000001403349EE: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403349F2: cmp     [rsi+810h], eax
 * 00000001403349F8: jl      loc_1403346FF
 * 00000001403349FE: cmp     r14, rdx
 * 0000000140334A01: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140334A08: jnz     short loc_140334A14
 * 0000000140334A0A: xor     eax, eax
 * 0000000140334A0C: mov     r14d, eax
 * 0000000140334A0F: xor     r10d, r10d
 * 0000000140334A12: jmp     short loc_140334A23
 * 0000000140334A14: mov     rax, [rbp+20F0h+var_20D0]
 * 0000000140334A18: add     rax, 30h ; '0'
 * 0000000140334A1C: sub     r14, rax
 * 0000000140334A1F: sar     r14, 4
 * 0000000140334A23: mov     rax, [rbp+20F0h+var_20A0]
 * 0000000140334A27: mov     [rax], r14d
 * 0000000140334A2A: jmp     loc_14033462F
 * 0000000140334A2F: mov     r8, [r13+18h]
 * 0000000140334A33: mov     r12d, 1
 * 0000000140334A39: mov     rcx, [rsi+6D8h]
 * 0000000140334A40: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140334A4A: mov     rax, [rsi+708h]
 * 0000000140334A51: add     rcx, r8
 * 0000000140334A54: movzx   edx, word ptr [r13+22h]
 * 0000000140334A59: cmp     [rcx+rax], dx
 * 0000000140334A5D: jz      short loc_140334A9D
 * 0000000140334A5F: xor     eax, eax
 * 0000000140334A61: cmp     [rsi+8D8h], eax
 * 0000000140334A67: jnz     short loc_140334A9D
 * 0000000140334A69: lea     rax, [rsi+r9]
 * 0000000140334A6D: mov     [rsi+8E0h], rax
 * 0000000140334A74: lea     rax, [r11+r13]
 * 0000000140334A78: mov     [rsi+8E8h], rax
 * 0000000140334A7F: movsxd  rax, dword ptr [r13+0]
 * 0000000140334A83: mov     [rsi+8F0h], rax
 * 0000000140334A8A: mov     [rsi+8F8h], r8
 * 0000000140334A91: mov     [rsi+8D8h], r12d
 * 0000000140334A98: movzx   edx, word ptr [r13+22h]
 * 0000000140334A9D: test    [rsi+710h], dx
 * 0000000140334AA4: jnz     short loc_140334AEE
 * 0000000140334AA6: mov     rcx, [rsi+6E0h]
 * 0000000140334AAD: add     rcx, r8
 * 0000000140334AB0: cmp     [rcx], rcx
 * 0000000140334AB3: jz      short loc_140334AEE
 * 0000000140334AB5: xor     eax, eax
 * 0000000140334AB7: cmp     [rsi+8D8h], eax
 * 0000000140334ABD: jnz     short loc_140334AEE
 * 0000000140334ABF: lea     rax, [rsi+r9]
 * 0000000140334AC3: mov     [rsi+8E0h], rax
 * 0000000140334ACA: lea     rax, [r11+r13]
 * 0000000140334ACE: mov     [rsi+8E8h], rax
 * 0000000140334AD5: movsxd  rax, dword ptr [r13+0]
 * 0000000140334AD9: mov     [rsi+8F0h], rax
 * 0000000140334AE0: mov     [rsi+8F8h], r8
 * 0000000140334AE7: mov     [rsi+8D8h], r12d
 * 0000000140334AEE: mov     r11, [r13+8]
 * 0000000140334AF2: mov     r8d, [r13+10h]
 * 0000000140334AF6: mov     r9, r11
 * 0000000140334AF9: add     [rsi+810h], r8d
 * 0000000140334B00: mov     rax, r11
 * 0000000140334B03: mov     r14d, [rsi+7FCh]
 * 0000000140334B0A: mov     r15, [rsi+800h]
 * 0000000140334B11: lea     rcx, [r11+r8]
 * 0000000140334B15: cmp     r11, rcx
 * 0000000140334B18: jnb     short loc_140334B2A
 * 0000000140334B1A: mov     edx, 40h ; '@'
 * 0000000140334B1F: prefetchnta byte ptr [rax]
 * 0000000140334B22: add     rax, rdx
 * 0000000140334B25: cmp     rax, rcx
 * 0000000140334B28: jb      short loc_140334B1F
 * 0000000140334B2A: mov     r10d, r8d
 * 0000000140334B2D: mov     rbx, r15
 * 0000000140334B30: shr     r10d, 7
 * 0000000140334B34: mov     r13d, 0FFFFFFFFh
 * 0000000140334B3A: test    r10d, r10d
 * 0000000140334B3D: jz      short loc_140334BA3
 * 0000000140334B3F: mov     rsi, 7010008004002001h
 * 0000000140334B49: mov     edx, 8
 * 0000000140334B4E: mov     rax, [r9]
 * 0000000140334B51: mov     ecx, r14d
 * 0000000140334B54: xor     rax, rbx
 * 0000000140334B57: mov     rbx, [r9+8]
 * 0000000140334B5B: rol     rax, cl
 * 0000000140334B5E: add     r9, 10h
 * 0000000140334B62: xor     rbx, rax
 * 0000000140334B65: rol     rbx, cl
 * 0000000140334B68: sub     rdx, r12
 * 0000000140334B6B: jnz     short loc_140334B4E
 * 0000000140334B6D: mov     rcx, r9
 * 0000000140334B70: sub     rcx, r11
 * 0000000140334B73: xor     rcx, r15
 * 0000000140334B76: mov     rax, rcx
 * 0000000140334B79: rol     rax, 11h
 * 0000000140334B7D: xor     rcx, rax
 * 0000000140334B80: mov     rax, rsi
 * 0000000140334B83: mul     rcx
 * 0000000140334B86: mov     [rbp+20F0h+var_17E8], rdx
 * 0000000140334B8D: xor     edx, eax
 * 0000000140334B8F: xor     r14d, edx
 * 0000000140334B92: and     r14d, 3Fh
 * 0000000140334B96: cmovz   r14d, r12d
 * 0000000140334B9A: add     r10d, r13d
 * 0000000140334B9D: jnz     short loc_140334B49
 * 0000000140334B9F: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140334BA3: and     r8d, 7Fh
 * 0000000140334BA7: cmp     r8d, 8
 * 0000000140334BAB: jb      short loc_140334BCA
 * 0000000140334BAD: mov     edx, r8d
 * 0000000140334BB0: shr     rdx, 3
 * 0000000140334BB4: xor     rbx, [r9]
 * 0000000140334BB7: mov     ecx, r14d
 * 0000000140334BBA: rol     rbx, cl
 * 0000000140334BBD: add     r9, 8
 * 0000000140334BC1: add     r8d, 0FFFFFFF8h
 * 0000000140334BC5: sub     rdx, r12
 * 0000000140334BC8: jnz     short loc_140334BB4
 * 0000000140334BCA: test    r8d, r8d
 * 0000000140334BCD: jz      short loc_140334BE4
 * 0000000140334BCF: movzx   eax, byte ptr [r9]
 * 0000000140334BD3: mov     ecx, r14d
 * 0000000140334BD6: xor     rbx, rax
 * 0000000140334BD9: add     r9, r12
 * 0000000140334BDC: rol     rbx, cl
 * 0000000140334BDF: add     r8d, r13d
 * 0000000140334BE2: jnz     short loc_140334BCF
 * 0000000140334BE4: mov     rax, rbx
 * 0000000140334BE7: jmp     short loc_140334BEB
 * 0000000140334BE9: xor     ebx, eax
 * 0000000140334BEB: shr     rax, 1Fh
 * 0000000140334BEF: test    rax, rax
 * 0000000140334BF2: jnz     short loc_140334BE9
 * 0000000140334BF4: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140334BF8: btr     ebx, 1Fh
 * 0000000140334BFC: mov     r13d, eax
 * 0000000140334BFF: cmp     ebx, [r14+14h]
 * 0000000140334C03: jz      loc_140334CDD
 * 0000000140334C09: cmp     [r14], eax
 * 0000000140334C0C: jnz     short loc_140334C16
 * 0000000140334C0E: cmp     [r14+18h], eax
 * 0000000140334C12: cmovnz  r13d, r12d
 * 0000000140334C16: mov     ecx, [r14+10h]
 * 0000000140334C1A: mov     rdx, [r14+8]
 * 0000000140334C1E: test    rcx, rcx
 * 0000000140334C21: jz      loc_140334DC4
 * 0000000140334C27: mov     eax, [rsi+974h]
 * 0000000140334C2D: mov     r8d, 40h ; '@'
 * 0000000140334C33: test    r8b, al
 * 0000000140334C36: jz      loc_140334DC4
 * 0000000140334C3C: mov     r12, cr8
 * 0000000140334C40: lea     eax, [r8-3Eh]
 * 0000000140334C44: mov     cr8, rax
 * 0000000140334C48: lea     rax, [rcx-1]
 * 0000000140334C4C: mov     r14, rdx
 * 0000000140334C4F: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140334C56: add     rax, rdx
 * 0000000140334C59: mov     ecx, 0FFFh
 * 0000000140334C5E: or      rax, rcx
 * 0000000140334C61: mov     [rbp+20F0h+var_20D8], rax
 * 0000000140334C65: lea     rax, [r14-1]
 * 0000000140334C69: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140334C6D: movzx   r15d, r12b
 * 0000000140334C71: mov     rax, [rsi+460h]
 * 0000000140334C78: xor     edx, edx
 * 0000000140334C7A: mov     rcx, r14
 * 0000000140334C7D: call    KeGuardDispatchICall
 * 0000000140334C82: cmp     eax, 0C000022Dh
 * 0000000140334C87: jnz     short loc_140334CB4
 * 0000000140334C89: test    r13d, r13d
 * 0000000140334C8C: jnz     loc_140334DBC
 * 0000000140334C92: lea     eax, [r13+1]
 * 0000000140334C96: cmp     r12b, al
 * 0000000140334C99: ja      short loc_140334CBC
 * 0000000140334C9B: movzx   r15d, r12b
 * 0000000140334C9F: mov     cr8, r15
 * 0000000140334CA3: mov     al, [r14]
 * 0000000140334CA6: mov     rax, cr8
 * 0000000140334CAA: lea     eax, [r13+2]
 * 0000000140334CAE: mov     cr8, rax
 * 0000000140334CB2: jmp     short loc_140334C71
 * 0000000140334CB4: test    eax, eax
 * 0000000140334CB6: js      loc_140334DBC
 * 0000000140334CBC: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140334CC0: mov     ecx, 1000h
 * 0000000140334CC5: add     rax, rcx
 * 0000000140334CC8: add     r14, rcx
 * 0000000140334CCB: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140334CCF: cmp     rax, [rbp+20F0h+var_20D8]
 * 0000000140334CD3: jnz     short loc_140334C6D
 * 0000000140334CD5: mov     cr8, r15
 * 0000000140334CD9: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140334CDD: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140334CE7: mov     r15, 0B3B74BDEE4453415h
 * 0000000140334CF1: mov     ebx, 1
 * 0000000140334CF6: lea     rax, [r14+30h]
 * 0000000140334CFA: xor     r9d, r9d
 * 0000000140334CFD: mov     [rbp+20F0h+var_1C80], rax
 * 0000000140334D04: lea     rcx, [rbp+20F0h+var_1C88]
 * 0000000140334D0B: movzx   eax, word ptr [r14+20h]
 * 0000000140334D10: xor     r8d, r8d
 * 0000000140334D13: mov     [rbp+20F0h+var_1C88], ax
 * 0000000140334D1A: xor     edx, edx
 * 0000000140334D1C: mov     [rbp+20F0h+var_1C86], ax
 * 0000000140334D23: lea     rax, [rbp+20F0h+var_1DA8]
 * 0000000140334D2A: mov     [rsp+10F0h+var_10B8], rax
 * 0000000140334D2F: xor     eax, eax
 * 0000000140334D31: mov     [rsp+10F0h+var_10C0], rax
 * 0000000140334D36: mov     byte ptr [rsp+10F0h+var_10C8], al
 * 0000000140334D3A: mov     rax, [rsi+4F8h]
 * 0000000140334D41: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 0000000140334D46: mov     rax, [rsi+1E0h]
 * 0000000140334D4D: call    KeGuardDispatchICall
 * 0000000140334D52: xor     r10d, r10d
 * 0000000140334D55: test    eax, eax
 * 0000000140334D57: js      loc_140334625
 * 0000000140334D5D: mov     rcx, [rbp+20F0h+var_1DA8]
 * 0000000140334D64: cmp     rcx, [r14+18h]
 * 0000000140334D68: jz      short loc_140334DA8
 * 0000000140334D6A: xor     eax, eax
 * 0000000140334D6C: cmp     [rsi+8D8h], eax
 * 0000000140334D72: jnz     short loc_140334DA8
 * 0000000140334D74: lea     rax, [rsi+r12]
 * 0000000140334D78: mov     [rsi+8E0h], rax
 * 0000000140334D7F: lea     rax, [r14+r15]
 * 0000000140334D83: mov     [rsi+8E8h], rax
 * 0000000140334D8A: movsxd  rax, dword ptr [r14]
 * 0000000140334D8D: mov     [rsi+8F0h], rax
 * 0000000140334D94: mov     [rsi+8F8h], rcx
 * 0000000140334D9B: mov     [rsi+8D8h], ebx
 * 0000000140334DA1: mov     rcx, [rbp+20F0h+var_1DA8]
 * 0000000140334DA8: mov     rax, [rsi+1D8h]
 * 0000000140334DAF: call    KeGuardDispatchICall
 * 0000000140334DB4: xor     r10d, r10d
 * 0000000140334DB7: jmp     loc_140334625
 * 0000000140334DBC: mov     cr8, r15
 * 0000000140334DC0: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140334DC4: mov     eax, [rsi+8D8h]
 * 0000000140334DCA: mov     edx, [r14+14h]
 * 0000000140334DCE: test    eax, eax
 * 0000000140334DD0: jnz     short loc_140334DE8
 * 0000000140334DD2: mov     rax, [rsi+580h]
 * 0000000140334DD9: mov     ecx, ebx
 * 0000000140334DDB: xor     rcx, rdx
 * 0000000140334DDE: mov     [rax+18h], rcx
 * 0000000140334DE2: mov     eax, [rsi+8D8h]
 * 0000000140334DE8: mov     rcx, [r14+8]
 * 0000000140334DEC: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140334DF6: mov     r15, 0B3B74BDEE4453415h
 * 0000000140334E00: mov     ebx, 1
 * 0000000140334E05: test    eax, eax
 * 0000000140334E07: jnz     loc_140334CF6
 * 0000000140334E0D: lea     rax, [rsi+r12]
 * 0000000140334E11: mov     [rsi+8E0h], rax
 * 0000000140334E18: lea     rax, [r14+r15]
 * 0000000140334E1C: mov     [rsi+8E8h], rax
 * 0000000140334E23: movsxd  rax, dword ptr [r14]
 * 0000000140334E26: mov     [rsi+8F0h], rax
 * 0000000140334E2D: mov     [rsi+8F8h], rcx
 * 0000000140334E34: mov     [rsi+8D8h], ebx
 * 0000000140334E3A: jmp     loc_140334CF6
 * 0000000140334E3F: mov     rax, [rsi+198h]
 * 0000000140334E46: lea     rcx, [rbp+20F0h+var_17B0]
 * 0000000140334E4D: mov     edx, [r13+1Ch]
 * 0000000140334E51: call    KeGuardDispatchICall
 * 0000000140334E56: mov     rax, [rsi+1C8h]
 * 0000000140334E5D: lea     rdx, [rbp+20F0h+var_17A0]
 * 0000000140334E64: lea     rcx, [rbp+20F0h+var_17B0]
 * 0000000140334E6B: call    KeGuardDispatchICall
 * 0000000140334E70: xor     eax, eax
 * 0000000140334E72: mov     r11d, eax
 * 0000000140334E75: cmp     [r13+18h], eax
 * 0000000140334E79: jbe     loc_140334F79
 * 0000000140334E7F: lea     ebx, [rax+1]
 * 0000000140334E82: mov     r12, 0B3B74BDEE4453415h
 * 0000000140334E8C: mov     eax, r11d
 * 0000000140334E8F: mov     ecx, 2
 * 0000000140334E94: lea     r10, [rax+rax*2]
 * 0000000140334E98: mov     r9d, [r13+r10*8+40h]
 * 0000000140334E9D: test    [rsi+863h], cl
 * 0000000140334EA3: jz      short loc_140334EC3
 * 0000000140334EA5: cmp     r9d, r15d
 * 0000000140334EA8: jnz     short loc_140334EC3
 * 0000000140334EAA: mov     eax, gs:1A4h
 * 0000000140334EB2: cmp     eax, [rsi+8D0h]
 * 0000000140334EB8: jnz     short loc_140334EC3
 * 0000000140334EBA: mov     rdx, [rsi+8C8h]
 * 0000000140334EC1: jmp     short loc_140334ECF
 * 0000000140334EC3: mov     ecx, r9d
 * 0000000140334EC6: rdmsr
 * 0000000140334EC8: shl     rdx, 20h
 * 0000000140334ECC: or      rdx, rax
 * 0000000140334ECF: mov     r8, [r13+r10*8+30h]
 * 0000000140334ED4: mov     rcx, [r13+r10*8+38h]
 * 0000000140334ED9: and     rdx, r8
 * 0000000140334EDC: cmp     rdx, rcx
 * 0000000140334EDF: jz      short loc_140334F47
 * 0000000140334EE1: mov     r8d, [r13+1Ch]
 * 0000000140334EE5: mov     eax, [rsi+8D8h]
 * 0000000140334EEB: shl     r8, 20h
 * 0000000140334EEF: or      r8, r9
 * 0000000140334EF2: test    eax, eax
 * 0000000140334EF4: jnz     short loc_140334F65
 * 0000000140334EF6: mov     rax, [rsi+580h]
 * 0000000140334EFD: xor     rcx, rdx
 * 0000000140334F00: mov     [rax+18h], rcx
 * 0000000140334F04: mov     eax, [rsi+8D8h]
 * 0000000140334F0A: test    eax, eax
 * 0000000140334F0C: jnz     short loc_140334F65
 * 0000000140334F0E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140334F18: add     rax, rsi
 * 0000000140334F1B: mov     [rsi+8E0h], rax
 * 0000000140334F22: lea     rax, [r12+r13]
 * 0000000140334F26: mov     [rsi+8E8h], rax
 * 0000000140334F2D: movsxd  rax, dword ptr [r13+0]
 * 0000000140334F31: mov     [rsi+8F0h], rax
 * 0000000140334F38: mov     [rsi+8F8h], r8
 * 0000000140334F3F: mov     [rsi+8D8h], ebx
 * 0000000140334F45: jmp     short loc_140334F65
 * 0000000140334F47: test    dword ptr [rsi+974h], 200h
 * 0000000140334F51: jz      short loc_140334F65
 * 0000000140334F53: cmp     r8, 0FFFFFFFFFFFFFFFFh
 * 0000000140334F57: jnz     short loc_140334F65
 * 0000000140334F59: mov     rax, rdx
 * 0000000140334F5C: mov     ecx, r9d
 * 0000000140334F5F: shr     rdx, 20h
 * 0000000140334F63: wrmsr
 * 0000000140334F65: add     r11d, ebx
 * 0000000140334F68: cmp     r11d, [r13+18h]
 * 0000000140334F6C: jb      loc_140334E8C
 * 0000000140334F72: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140334F79: mov     rax, [rsi+190h]
 * 0000000140334F80: lea     rcx, [rbp+20F0h+var_17A0]
 * 0000000140334F87: call    KeGuardDispatchICall
 * 0000000140334F8C: mov     eax, [r13+18h]
 * 0000000140334F90: shl     eax, 0Fh
 * 0000000140334F93: add     [rsi+810h], eax
 * 0000000140334F99: jmp     loc_140334DB4
 * 0000000140334F9E: mov     ecx, [rsi+818h]
 * 0000000140334FA4: test    dl, cl
 * 0000000140334FA6: jz      loc_140334318
 * 0000000140334FAC: mov     r15d, 40000000h
 * 0000000140334FB2: test    [rsi+970h], r15d
 * 0000000140334FB9: jnz     short loc_140334FCE
 * 0000000140334FBB: mov     r14d, eax
 * 0000000140334FBE: and     ecx, 3
 * 0000000140334FC1: cmp     cl, 3
 * 0000000140334FC4: setz    r14b
 * 0000000140334FC8: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 0000000140334FCC: jmp     short loc_14033501F
 * 0000000140334FCE: rdtsc
 * 0000000140334FD0: shl     rdx, 20h
 * 0000000140334FD4: or      rax, rdx
 * 0000000140334FD7: mov     rcx, rax
 * 0000000140334FDA: ror     rax, 3
 * 0000000140334FDE: xor     rcx, rax
 * 0000000140334FE1: mov     rax, 7010008004002001h
 * 0000000140334FEB: mul     rcx
 * 0000000140334FEE: mov     rcx, rdx
 * 0000000140334FF1: mov     [rbp+20F0h+var_17D8], rdx
 * 0000000140334FF8: xor     rcx, rax
 * 0000000140334FFB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140335005: mul     rcx
 * 0000000140335008: shr     rdx, 1
 * 000000014033500B: lea     rax, [rdx+rdx*2]
 * 000000014033500F: cmp     rcx, rax
 * 0000000140335012: mov     eax, 0
 * 0000000140335017: setz    al
 * 000000014033501A: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 000000014033501D: xor     eax, eax
 * 000000014033501F: mov     rbx, [rsi+538h]
 * 0000000140335026: mov     r13d, eax
 * 0000000140335029: mov     [rbp+20F0h+var_205C], eax
 * 000000014033502F: mov     rax, [rsi+170h]
 * 0000000140335036: call    KeGuardDispatchICall
 * 000000014033503B: test    [rsi+970h], r15d
 * 0000000140335042: jnz     short loc_14033505D
 * 0000000140335044: mov     ecx, [rsi+930h]
 * 000000014033504A: cmp     ecx, 7
 * 000000014033504D: jnb     short loc_14033505D
 * 000000014033504F: mov     r15d, 1
 * 0000000140335055: mov     r14d, r15d
 * 0000000140335058: shl     r14b, cl
 * 000000014033505B: jmp     short loc_14033507B
 * 000000014033505D: mov     rax, [rsi+120h]
 * 0000000140335064: xor     edx, edx
 * 0000000140335066: mov     rcx, [rsi+9E0h]
 * 000000014033506D: call    KeGuardDispatchICall
 * 0000000140335072: mov     r14b, 80h
 * 0000000140335075: mov     r15d, 1
 * 000000014033507B: mov     rax, [rsi+130h]
 * 0000000140335082: xor     edx, edx
 * 0000000140335084: mov     rcx, rbx
 * 0000000140335087: call    KeGuardDispatchICall
 * 000000014033508C: mov     r8, [rsi+510h]
 * 0000000140335093: mov     rdx, [r8]
 * 0000000140335096: cmp     rdx, r8
 * 0000000140335099: jz      short loc_1403350C3
 * 000000014033509B: mov     rax, [rsi+6A0h]
 * 00000001403350A2: mov     rcx, rdx
 * 00000001403350A5: sub     rcx, [rsi+6B8h]
 * 00000001403350AC: lock or [rcx+rax], r14b
 * 00000001403350B1: mov     rdx, [rdx]
 * 00000001403350B4: add     r13d, r15d
 * 00000001403350B7: cmp     rdx, r8
 * 00000001403350BA: jnz     short loc_14033509B
 * 00000001403350BC: mov     [rbp+20F0h+var_205C], r13d
 * 00000001403350C3: mov     rax, [rsi+540h]
 * 00000001403350CA: mov     ebx, 4
 * 00000001403350CF: mov     edi, dword ptr [rbp+20F0h+var_20B8]
 * 00000001403350D2: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403350D6: mov     r15, [rax]
 * 00000001403350D9: mov     rax, [rsi+718h]
 * 00000001403350E0: mov     r12d, [rax+r15]
 * 00000001403350E4: mov     rax, [rsi+100h]
 * 00000001403350EB: mov     rdx, rbx
 * 00000001403350EE: mov     rcx, r15
 * 00000001403350F1: call    KeGuardDispatchICall
 * 00000001403350F6: mov     r10, rax
 * 00000001403350F9: xor     eax, eax
 * 00000001403350FB: test    r10, r10
 * 00000001403350FE: jz      loc_14033524D
 * 0000000140335104: mov     rdx, [r10]
 * 0000000140335107: sar     rdx, 10h
 * 000000014033510B: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014033510F: mov     al, [rdx]
 * 0000000140335111: and     al, 7Fh
 * 0000000140335113: cmp     al, 3
 * 0000000140335115: jnz     loc_1403351A2
 * 000000014033511B: mov     r9, [rsi+6A0h]
 * 0000000140335122: mov     r8, r9
 * 0000000140335125: test    [rdx+r9], r14b
 * 0000000140335129: jnz     short loc_140335193
 * 000000014033512B: mov     rax, [rsi+6A8h]
 * 0000000140335132: mov     ecx, [rdx+rax]
 * 0000000140335135: test    [rsi+6C0h], ecx
 * 000000014033513B: jz      short loc_140335193
 * 000000014033513D: xor     eax, eax
 * 000000014033513F: cmp     [rsi+8D8h], eax
 * 0000000140335145: jnz     short loc_140335193
 * 0000000140335147: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140335151: add     rax, rsi
 * 0000000140335154: mov     [rsi+8E0h], rax
 * 000000014033515B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140335165: add     rax, r13
 * 0000000140335168: mov     [rsi+8E8h], rax
 * 000000014033516F: movsxd  rax, dword ptr [r13+0]
 * 0000000140335173: mov     [rsi+8F0h], rax
 * 000000014033517A: mov     eax, 1
 * 000000014033517F: mov     [rsi+8F8h], rdx
 * 0000000140335186: mov     [rsi+8D8h], eax
 * 000000014033518C: mov     r8, [rsi+6A0h]
 * 0000000140335193: mov     al, r14b
 * 0000000140335196: not     al
 * 0000000140335198: lock and [rdx+r8], al
 * 000000014033519D: jmp     loc_14033523B
 * 00000001403351A2: cmp     al, 6
 * 00000001403351A4: jnz     short loc_1403351E8
 * 00000001403351A6: test    edi, edi
 * 00000001403351A8: jz      loc_14033523B
 * 00000001403351AE: mov     rcx, [rsi+668h]
 * 00000001403351B5: mov     rax, [rdx+rcx+20h]
 * 00000001403351BA: cmp     rax, [rsi+318h]
 * 00000001403351C1: jz      short loc_1403351CC
 * 00000001403351C3: cmp     rax, [rsi+320h]
 * 00000001403351CA: jnz     short loc_1403351EC
 * 00000001403351CC: mov     rax, [rsi+328h]
 * 00000001403351D3: cmp     [rdx+rcx+30h], rax
 * 00000001403351D8: jnz     short loc_1403351EC
 * 00000001403351DA: mov     rax, [rsi+330h]
 * 00000001403351E1: cmp     [rdx+rcx+28h], rax
 * 00000001403351E6: jmp     short loc_1403351EA
 * 00000001403351E8: test    al, al
 * 00000001403351EA: jz      short loc_14033523B
 * 00000001403351EC: xor     eax, eax
 * 00000001403351EE: cmp     [rsi+8D8h], eax
 * 00000001403351F4: jnz     short loc_14033523B
 * 00000001403351F6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140335200: add     rax, rsi
 * 0000000140335203: mov     [rsi+8E0h], rax
 * 000000014033520A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140335214: add     rax, r13
 * 0000000140335217: mov     [rsi+8E8h], rax
 * 000000014033521E: movsxd  rax, dword ptr [r13+0]
 * 0000000140335222: mov     [rsi+8F0h], rax
 * 0000000140335229: mov     eax, 1
 * 000000014033522E: mov     [rsi+8F8h], rdx
 * 0000000140335235: mov     [rsi+8D8h], eax
 * 000000014033523B: mov     rax, [rsi+118h]
 * 0000000140335242: mov     rdx, r10
 * 0000000140335245: mov     rcx, r15
 * 0000000140335248: call    KeGuardDispatchICall
 * 000000014033524D: add     rbx, 4
 * 0000000140335251: cmp     rbx, r12
 * 0000000140335254: jb      loc_1403350E4
 * 000000014033525A: mov     r13d, [rbp+20F0h+var_205C]
 * 0000000140335261: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140335268: cmp     r14b, 80h
 * 000000014033526C: jnz     short loc_140335283
 * 000000014033526E: mov     rax, [rsi+128h]
 * 0000000140335275: xor     edx, edx
 * 0000000140335277: mov     rcx, [rsi+9E0h]
 * 000000014033527E: call    KeGuardDispatchICall
 * 0000000140335283: mov     rcx, [rsi+538h]
 * 000000014033528A: xor     edx, edx
 * 000000014033528C: mov     rax, [rsi+138h]
 * 0000000140335293: call    KeGuardDispatchICall
 * 0000000140335298: mov     rax, [rsi+178h]
 * 000000014033529F: call    KeGuardDispatchICall
 * 00000001403352A4: shr     r12, 2
 * 00000001403352A8: add     r13d, r12d
 * 00000001403352AB: shl     r13d, 8
 * 00000001403352AF: add     [rsi+810h], r13d
 * 00000001403352B6: jmp     loc_140334DB4
 * 00000001403352BB: mov     eax, [rsi+818h]
 * 00000001403352C1: test    dl, al
 * 00000001403352C3: jnz     loc_140334318
 * 00000001403352C9: mov     r14, [rsi+538h]
 * 00000001403352D0: xor     eax, eax
 * 00000001403352D2: mov     r15d, eax
 * 00000001403352D5: mov     rax, [rsi+170h]
 * 00000001403352DC: call    KeGuardDispatchICall
 * 00000001403352E1: test    dword ptr [rsi+970h], 40000000h
 * 00000001403352EB: jnz     short loc_140335305
 * 00000001403352ED: mov     ecx, [rsi+930h]
 * 00000001403352F3: cmp     ecx, 7
 * 00000001403352F6: jnb     short loc_140335305
 * 00000001403352F8: mov     r12d, 1
 * 00000001403352FE: mov     ebx, r12d
 * 0000000140335301: shl     bl, cl
 * 0000000140335303: jmp     short loc_140335322
 * 0000000140335305: mov     rax, [rsi+120h]
 * 000000014033530C: xor     edx, edx
 * 000000014033530E: mov     rcx, [rsi+9E0h]
 * 0000000140335315: call    KeGuardDispatchICall
 * 000000014033531A: mov     bl, 80h
 * 000000014033531C: mov     r12d, 1
 * 0000000140335322: mov     rax, [rsi+130h]
 * 0000000140335329: xor     edx, edx
 * 000000014033532B: mov     rcx, r14
 * 000000014033532E: mov     dword ptr [rbp+20F0h+var_20B8], ebx
 * 0000000140335331: call    KeGuardDispatchICall
 * 0000000140335336: mov     r9, [rsi+510h]
 * 000000014033533D: mov     r8, [r9]
 * 0000000140335340: cmp     r8, r9
 * 0000000140335343: jz      loc_1403353E8
 * 0000000140335349: xor     edi, edi
 * 000000014033534B: mov     rdx, r8
 * 000000014033534E: sub     rdx, [rsi+6B8h]
 * 0000000140335355: cmp     bl, 80h
 * 0000000140335358: jz      short loc_1403353C7
 * 000000014033535A: mov     rax, [rsi+6A0h]
 * 0000000140335361: test    [rdx+rax], bl
 * 0000000140335364: jz      short loc_1403353C7
 * 0000000140335366: mov     rax, [rsi+6A8h]
 * 000000014033536D: mov     ecx, [rdx+rax]
 * 0000000140335370: test    [rsi+6C0h], ecx
 * 0000000140335376: jz      short loc_1403353C7
 * 0000000140335378: cmp     [rsi+8D8h], edi
 * 000000014033537E: jnz     short loc_1403353C7
 * 0000000140335380: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033538A: add     rax, rsi
 * 000000014033538D: mov     [rsi+8E0h], rax
 * 0000000140335394: mov     rax, 0B3B74BDEE4453415h
 * 000000014033539E: add     rax, r13
 * 00000001403353A1: mov     [rsi+8E8h], rax
 * 00000001403353A8: movsxd  rax, dword ptr [r13+0]
 * 00000001403353AC: mov     [rsi+8F0h], rax
 * 00000001403353B3: mov     rax, rdx
 * 00000001403353B6: or      rax, r12
 * 00000001403353B9: mov     [rsi+8F8h], rax
 * 00000001403353C0: mov     [rsi+8D8h], r12d
 * 00000001403353C7: mov     rax, [rsi+6A0h]
 * 00000001403353CE: lock or [rdx+rax], bl
 * 00000001403353D2: mov     r8, [r8]
 * 00000001403353D5: add     r15d, r12d
 * 00000001403353D8: cmp     r8, r9
 * 00000001403353DB: jnz     loc_14033534B
 * 00000001403353E1: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403353E8: mov     rcx, [rsi+4F0h]
 * 00000001403353EF: mov     r14, cr8
 * 00000001403353F3: mov     [rbp+20F0h+var_20F0], r14
 * 00000001403353F7: mov     r10d, 0Ch
 * 00000001403353FD: mov     cr8, r10
 * 0000000140335401: mov     rax, [rsi+140h]
 * 0000000140335408: lea     rdx, [rbp+20F0h+var_1658]
 * 000000014033540F: call    KeGuardDispatchICall
 * 0000000140335414: mov     r10, [rsi+4E8h]
 * 000000014033541B: mov     r8, [r10]
 * 000000014033541E: cmp     r8, r10
 * 0000000140335421: jz      loc_1403354BA
 * 0000000140335427: mov     r9b, bl
 * 000000014033542A: movzx   r11d, bl
 * 000000014033542E: not     r9b
 * 0000000140335431: xor     edi, edi
 * 0000000140335433: mov     rbx, 0A3A03F5891C8B4E8h
 * 000000014033543D: mov     r14, 0B3B74BDEE4453415h
 * 0000000140335447: mov     rcx, [rsi+6A0h]
 * 000000014033544E: mov     rdx, r8
 * 0000000140335451: sub     rdx, [rsi+698h]
 * 0000000140335458: movsx   eax, byte ptr [rdx+rcx]
 * 000000014033545C: test    r11d, eax
 * 000000014033545F: jnz     short loc_14033549F
 * 0000000140335461: cmp     [rsi+8D8h], edi
 * 0000000140335467: jnz     short loc_14033549F
 * 0000000140335469: lea     rax, [rsi+rbx]
 * 000000014033546D: mov     [rsi+8E0h], rax
 * 0000000140335474: lea     rax, [r14+r13]
 * 0000000140335478: mov     [rsi+8E8h], rax
 * 000000014033547F: movsxd  rax, dword ptr [r13+0]
 * 0000000140335483: mov     [rsi+8F0h], rax
 * 000000014033548A: mov     [rsi+8F8h], rdx
 * 0000000140335491: mov     [rsi+8D8h], r12d
 * 0000000140335498: mov     rcx, [rsi+6A0h]
 * 000000014033549F: lock and [rdx+rcx], r9b
 * 00000001403354A4: mov     r8, [r8]
 * 00000001403354A7: cmp     r8, r10
 * 00000001403354AA: jnz     short loc_140335447
 * 00000001403354AC: mov     ebx, dword ptr [rbp+20F0h+var_20B8]
 * 00000001403354AF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403354B6: mov     r14, [rbp+20F0h+var_20F0]
 * 00000001403354BA: mov     rax, [rsi+180h]
 * 00000001403354C1: lea     rcx, [rbp+20F0h+var_1658]
 * 00000001403354C8: call    KeGuardDispatchICall
 * 00000001403354CD: movzx   eax, r14b
 * 00000001403354D1: mov     cr8, rax
 * 00000001403354D5: cmp     bl, 80h
 * 00000001403354D8: jnz     short loc_1403354EF
 * 00000001403354DA: mov     rax, [rsi+128h]
 * 00000001403354E1: xor     edx, edx
 * 00000001403354E3: mov     rcx, [rsi+9E0h]
 * 00000001403354EA: call    KeGuardDispatchICall
 * 00000001403354EF: mov     rcx, [rsi+538h]
 * 00000001403354F6: xor     edx, edx
 * 00000001403354F8: mov     rax, [rsi+138h]
 * 00000001403354FF: call    KeGuardDispatchICall
 * 0000000140335504: mov     rax, [rsi+178h]
 * 000000014033550B: call    KeGuardDispatchICall
 * 0000000140335510: shl     r15d, 8
 * 0000000140335514: add     [rsi+810h], r15d
 * 000000014033551B: jmp     loc_140334DB4
 * 0000000140335520: mov     r14, [r13+8]
 * 0000000140335524: mov     r8d, [r13+10h]
 * 0000000140335528: mov     r9, r14
 * 000000014033552B: add     [rsi+810h], r8d
 * 0000000140335532: mov     rax, r14
 * 0000000140335535: mov     r11d, [rsi+7FCh]
 * 000000014033553C: mov     r15, [rsi+800h]
 * 0000000140335543: lea     rcx, [r14+r8]
 * 0000000140335547: cmp     r14, rcx
 * 000000014033554A: jnb     short loc_14033555C
 * 000000014033554C: mov     edx, 40h ; '@'
 * 0000000140335551: prefetchnta byte ptr [rax]
 * 0000000140335554: add     rax, rdx
 * 0000000140335557: cmp     rax, rcx
 * 000000014033555A: jb      short loc_140335551
 * 000000014033555C: mov     r10d, r8d
 * 000000014033555F: mov     rbx, r15
 * 0000000140335562: shr     r10d, 7
 * 0000000140335566: mov     r12d, 1
 * 000000014033556C: test    r10d, r10d
 * 000000014033556F: jz      short loc_1403355DA
 * 0000000140335571: mov     rsi, 7010008004002001h
 * 000000014033557B: mov     edx, 8
 * 0000000140335580: mov     rax, [r9]
 * 0000000140335583: mov     ecx, r11d
 * 0000000140335586: xor     rax, rbx
 * 0000000140335589: mov     rbx, [r9+8]
 * 000000014033558D: rol     rax, cl
 * 0000000140335590: add     r9, 10h
 * 0000000140335594: xor     rbx, rax
 * 0000000140335597: rol     rbx, cl
 * 000000014033559A: sub     rdx, r12
 * 000000014033559D: jnz     short loc_140335580
 * 000000014033559F: mov     rcx, r9
 * 00000001403355A2: sub     rcx, r14
 * 00000001403355A5: xor     rcx, r15
 * 00000001403355A8: mov     rax, rcx
 * 00000001403355AB: rol     rax, 11h
 * 00000001403355AF: xor     rcx, rax
 * 00000001403355B2: mov     rax, rsi
 * 00000001403355B5: mul     rcx
 * 00000001403355B8: mov     [rbp+20F0h+var_17D0], rdx
 * 00000001403355BF: xor     edx, eax
 * 00000001403355C1: xor     r11d, edx
 * 00000001403355C4: mov     eax, 0FFFFFFFFh
 * 00000001403355C9: and     r11d, 3Fh
 * 00000001403355CD: cmovz   r11d, r12d
 * 00000001403355D1: add     r10d, eax
 * 00000001403355D4: jnz     short loc_14033557B
 * 00000001403355D6: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403355DA: and     r8d, 7Fh
 * 00000001403355DE: cmp     r8d, 8
 * 00000001403355E2: jb      short loc_140335601
 * 00000001403355E4: mov     edx, r8d
 * 00000001403355E7: shr     rdx, 3
 * 00000001403355EB: xor     rbx, [r9]
 * 00000001403355EE: mov     ecx, r11d
 * 00000001403355F1: rol     rbx, cl
 * 00000001403355F4: add     r9, 8
 * 00000001403355F8: add     r8d, 0FFFFFFF8h
 * 00000001403355FC: sub     rdx, r12
 * 00000001403355FF: jnz     short loc_1403355EB
 * 0000000140335601: test    r8d, r8d
 * 0000000140335604: jz      short loc_140335624
 * 0000000140335606: mov     esi, 0FFFFFFFFh
 * 000000014033560B: movzx   eax, byte ptr [r9]
 * 000000014033560F: mov     ecx, r11d
 * 0000000140335612: xor     rbx, rax
 * 0000000140335615: add     r9, r12
 * 0000000140335618: rol     rbx, cl
 * 000000014033561B: add     r8d, esi
 * 000000014033561E: jnz     short loc_14033560B
 * 0000000140335620: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140335624: mov     rax, rbx
 * 0000000140335627: jmp     short loc_14033562B
 * 0000000140335629: xor     ebx, eax
 * 000000014033562B: shr     rax, 1Fh
 * 000000014033562F: test    rax, rax
 * 0000000140335632: jnz     short loc_140335629
 * 0000000140335634: btr     ebx, 1Fh
 * 0000000140335638: mov     r12d, eax
 * 000000014033563B: cmp     ebx, [r13+14h]
 * 000000014033563F: jz      loc_140334DB4
 * 0000000140335645: cmp     [r13+0], eax
 * 0000000140335649: jnz     short loc_140335656
 * 000000014033564B: cmp     [r13+18h], eax
 * 000000014033564F: lea     ecx, [rax+1]
 * 0000000140335652: cmovnz  r12d, ecx
 * 0000000140335656: mov     ecx, [r13+10h]
 * 000000014033565A: mov     rdx, [r13+8]
 * 000000014033565E: test    rcx, rcx
 * 0000000140335661: jz      loc_14033572A
 * 0000000140335667: mov     eax, [rsi+974h]
 * 000000014033566D: mov     r8d, 40h ; '@'
 * 0000000140335673: test    r8b, al
 * 0000000140335676: jz      loc_14033572A
 * 000000014033567C: mov     r13, cr8
 * 0000000140335680: lea     eax, [r8-3Eh]
 * 0000000140335684: mov     cr8, rax
 * 0000000140335688: lea     rax, [rcx-1]
 * 000000014033568C: mov     r14, rdx
 * 000000014033568F: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140335696: add     rax, rdx
 * 0000000140335699: mov     ecx, 0FFFh
 * 000000014033569E: or      rax, rcx
 * 00000001403356A1: mov     [rbp+20F0h+var_20D8], rax
 * 00000001403356A5: lea     rax, [r14-1]
 * 00000001403356A9: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403356AD: movzx   r15d, r13b
 * 00000001403356B1: mov     rax, [rsi+460h]
 * 00000001403356B8: xor     edx, edx
 * 00000001403356BA: mov     rcx, r14
 * 00000001403356BD: call    KeGuardDispatchICall
 * 00000001403356C2: cmp     eax, 0C000022Dh
 * 00000001403356C7: jnz     short loc_1403356F2
 * 00000001403356C9: test    r12d, r12d
 * 00000001403356CC: jnz     short loc_14033571D
 * 00000001403356CE: lea     eax, [r12+1]
 * 00000001403356D3: cmp     r13b, al
 * 00000001403356D6: ja      short loc_1403356FB
 * 00000001403356D8: movzx   r15d, r13b
 * 00000001403356DC: mov     cr8, r15
 * 00000001403356E0: mov     al, [r14]
 * 00000001403356E3: mov     rax, cr8
 * 00000001403356E7: lea     eax, [r12+2]
 * 00000001403356EC: mov     cr8, rax
 * 00000001403356F0: jmp     short loc_1403356B1
 * 00000001403356F2: xor     r10d, r10d
 * 00000001403356F5: test    eax, eax
 * 00000001403356F7: js      short loc_140335720
 * 00000001403356F9: jmp     short loc_1403356FE
 * 00000001403356FB: xor     r10d, r10d
 * 00000001403356FE: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140335702: mov     r8d, 1000h
 * 0000000140335708: add     rax, r8
 * 000000014033570B: add     r14, r8
 * 000000014033570E: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140335712: cmp     rax, [rbp+20F0h+var_20D8]
 * 0000000140335716: jnz     short loc_1403356AD
 * 0000000140335718: jmp     loc_140334621
 * 000000014033571D: xor     r10d, r10d
 * 0000000140335720: mov     cr8, r15
 * 0000000140335724: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140335728: jmp     short loc_14033572D
 * 000000014033572A: xor     r10d, r10d
 * 000000014033572D: mov     eax, [rsi+8D8h]
 * 0000000140335733: mov     ecx, [r13+14h]
 * 0000000140335737: test    eax, eax
 * 0000000140335739: jnz     short loc_140335751
 * 000000014033573B: mov     eax, ebx
 * 000000014033573D: xor     rcx, rax
 * 0000000140335740: mov     rax, [rsi+580h]
 * 0000000140335747: mov     [rax+18h], rcx
 * 000000014033574B: mov     eax, [rsi+8D8h]
 * 0000000140335751: mov     rcx, [r13+8]
 * 0000000140335755: mov     r11, 0B3B74BDEE4453415h
 * 000000014033575F: mov     r14d, 8000h
 * 0000000140335765: test    eax, eax
 * 0000000140335767: jnz     loc_140334635
 * 000000014033576D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140335777: add     rax, rsi
 * 000000014033577A: mov     [rsi+8E0h], rax
 * 0000000140335781: lea     rax, [r11+r13]
 * 0000000140335785: mov     [rsi+8E8h], rax
 * 000000014033578C: movsxd  rax, dword ptr [r13+0]
 * 0000000140335790: mov     [rsi+8F0h], rax
 * 0000000140335797: mov     [rsi+8F8h], rcx
 * 000000014033579E: mov     eax, 1
 * 00000001403357A3: mov     [rsi+8D8h], eax
 * 00000001403357A9: jmp     loc_140334635
 * 00000001403357AE: cmp     r14d, 0Eh
 * 00000001403357B2: jle     loc_140338A2C
 * 00000001403357B8: mov     ebx, 0Fh
 * 00000001403357BD: cmp     r14d, ebx
 * 00000001403357C0: jz      loc_1403388ED
 * 00000001403357C6: cmp     r14d, 15h
 * 00000001403357CA: jz      loc_1403387E7
 * 00000001403357D0: cmp     r14d, 18h
 * 00000001403357D4: jz      loc_140336075
 * 00000001403357DA: cmp     r14d, r10d
 * 00000001403357DD: jz      loc_140335C4A
 * 00000001403357E3: cmp     r14d, 1Ah
 * 00000001403357E7: jz      loc_140335A9B
 * 00000001403357ED: cmp     r14d, 1Bh
 * 00000001403357F1: jnz     loc_14033E4CB
 * 00000001403357F7: mov     eax, [rsi+818h]
 * 00000001403357FD: test    dl, al
 * 00000001403357FF: jz      loc_140334318
 * 0000000140335805: mov     r15, [rsi+598h]
 * 000000014033580C: xor     eax, eax
 * 000000014033580E: mov     r13, [rsi+5A0h]
 * 0000000140335815: mov     r12d, eax
 * 0000000140335818: mov     rbx, [rsi+538h]
 * 000000014033581F: mov     [rbp+20F0h+var_20E8], eax
 * 0000000140335822: mov     rax, [rsi+170h]
 * 0000000140335829: mov     [rbp+20F0h+var_20D8], r15
 * 000000014033582D: call    KeGuardDispatchICall
 * 0000000140335832: test    dword ptr [rsi+970h], 40000000h
 * 000000014033583C: jnz     short loc_140335854
 * 000000014033583E: mov     ecx, [rsi+930h]
 * 0000000140335844: cmp     ecx, 7
 * 0000000140335847: jnb     short loc_140335854
 * 0000000140335849: mov     r14d, 1
 * 000000014033584F: shl     r14b, cl
 * 0000000140335852: jmp     short loc_14033586C
 * 0000000140335854: mov     rax, [rsi+120h]
 * 000000014033585B: xor     edx, edx
 * 000000014033585D: mov     rcx, [rsi+9E0h]
 * 0000000140335864: call    KeGuardDispatchICall
 * 0000000140335869: mov     r14b, 80h
 * 000000014033586C: mov     rax, [rsi+130h]
 * 0000000140335873: xor     edx, edx
 * 0000000140335875: mov     rcx, rbx
 * 0000000140335878: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 000000014033587C: call    KeGuardDispatchICall
 * 0000000140335881: mov     rax, [rsi+130h]
 * 0000000140335888: xor     edx, edx
 * 000000014033588A: mov     rcx, r15
 * 000000014033588D: call    KeGuardDispatchICall
 * 0000000140335892: mov     r9, [rsi+590h]
 * 0000000140335899: xor     eax, eax
 * 000000014033589B: mov     r15d, eax
 * 000000014033589E: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403358A2: mov     r8, [r9]
 * 00000001403358A5: cmp     r8, r9
 * 00000001403358A8: jz      short loc_140335904
 * 00000001403358AA: lea     r12d, [rax+1]
 * 00000001403358AE: lea     rdx, [r8-18h]
 * 00000001403358B2: cmp     rdx, r13
 * 00000001403358B5: jz      short loc_1403358ED
 * 00000001403358B7: mov     rax, [rsi+720h]
 * 00000001403358BE: mov     rdx, [rdx+rax]
 * 00000001403358C2: mov     rax, [rsi+6A8h]
 * 00000001403358C9: mov     ecx, [rdx+rax]
 * 00000001403358CC: test    [rsi+6C0h], ecx
 * 00000001403358D2: jnz     short loc_1403358E1
 * 00000001403358D4: test    r15, r15
 * 00000001403358D7: mov     rax, rdx
 * 00000001403358DA: cmovnz  rax, r12
 * 00000001403358DE: mov     r15, rax
 * 00000001403358E1: mov     rax, [rsi+6A0h]
 * 00000001403358E8: lock or [rdx+rax], r14b
 * 00000001403358ED: mov     r8, [r8]
 * 00000001403358F0: cmp     r8, r9
 * 00000001403358F3: jnz     short loc_1403358AE
 * 00000001403358F5: mov     r12d, [rbp+20F0h+var_20E8]
 * 00000001403358F9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140335900: mov     [rbp+20F0h+var_20F0], r15
 * 0000000140335904: mov     rbx, [rsi+510h]
 * 000000014033590B: mov     r10, [rbx]
 * 000000014033590E: cmp     r10, rbx
 * 0000000140335911: jz      loc_1403359E2
 * 0000000140335917: mov     edi, [rbp+20F0h+var_20E8]
 * 000000014033591A: mov     r11b, r14b
 * 000000014033591D: movzx   r12d, r14b
 * 0000000140335921: not     r11b
 * 0000000140335924: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140335928: xor     r15d, r15d
 * 000000014033592B: mov     r8, [rsi+6A0h]
 * 0000000140335932: mov     rdx, r10
 * 0000000140335935: sub     rdx, [rsi+6B8h]
 * 000000014033593C: mov     rcx, r8
 * 000000014033593F: movsx   eax, byte ptr [r8+rdx]
 * 0000000140335944: test    r12d, eax
 * 0000000140335947: jnz     short loc_1403359B2
 * 0000000140335949: mov     rax, [rsi+6B0h]
 * 0000000140335950: mov     r9, [rdx+rax]
 * 0000000140335954: test    r9, r9
 * 0000000140335957: jz      short loc_1403359B2
 * 0000000140335959: cmp     r9, r13
 * 000000014033595C: jz      short loc_1403359B2
 * 000000014033595E: cmp     [rsi+8D8h], r15d
 * 0000000140335965: jnz     short loc_1403359B2
 * 0000000140335967: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140335971: add     rax, rsi
 * 0000000140335974: mov     [rsi+8E0h], rax
 * 000000014033597B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140335985: add     rax, r14
 * 0000000140335988: mov     [rsi+8E8h], rax
 * 000000014033598F: movsxd  rax, dword ptr [r14]
 * 0000000140335992: mov     [rsi+8F0h], rax
 * 0000000140335999: mov     eax, 1
 * 000000014033599E: mov     [rsi+8F8h], rdx
 * 00000001403359A5: mov     [rsi+8D8h], eax
 * 00000001403359AB: mov     rcx, [rsi+6A0h]
 * 00000001403359B2: lock and [rcx+rdx], r11b
 * 00000001403359B7: mov     r10, [r10]
 * 00000001403359BA: mov     ecx, 1
 * 00000001403359BF: add     edi, ecx
 * 00000001403359C1: cmp     r10, rbx
 * 00000001403359C4: jnz     loc_14033592B
 * 00000001403359CA: mov     r14d, dword ptr [rbp+20F0h+var_20B8]
 * 00000001403359CE: mov     r15, [rbp+20F0h+var_20F0]
 * 00000001403359D2: mov     [rbp+20F0h+var_20E8], edi
 * 00000001403359D5: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403359DC: mov     r12d, [rbp+20F0h+var_20E8]
 * 00000001403359E0: jmp     short loc_1403359E7
 * 00000001403359E2: mov     ecx, 1
 * 00000001403359E7: test    r15, r15
 * 00000001403359EA: jz      short loc_140335A3D
 * 00000001403359EC: cmp     r15, rcx
 * 00000001403359EF: jz      short loc_140335A04
 * 00000001403359F1: mov     rax, [rsi+6A0h]
 * 00000001403359F8: mov     cl, r14b
 * 00000001403359FB: not     cl
 * 00000001403359FD: lock and [r15+rax], cl
 * 0000000140335A02: jmp     short loc_140335A3D
 * 0000000140335A04: mov     r10, [rsi+590h]
 * 0000000140335A0B: mov     r9, [r10]
 * 0000000140335A0E: jmp     short loc_140335A38
 * 0000000140335A10: lea     r8, [r9-18h]
 * 0000000140335A14: cmp     r8, r13
 * 0000000140335A17: jz      short loc_140335A35
 * 0000000140335A19: mov     rax, [rsi+720h]
 * 0000000140335A20: mov     dl, r14b
 * 0000000140335A23: not     dl
 * 0000000140335A25: mov     r8, [r8+rax]
 * 0000000140335A29: mov     rax, [rsi+6A0h]
 * 0000000140335A30: lock and [r8+rax], dl
 * 0000000140335A35: mov     r9, [r9]
 * 0000000140335A38: cmp     r9, r10
 * 0000000140335A3B: jnz     short loc_140335A10
 * 0000000140335A3D: mov     rax, [rsi+138h]
 * 0000000140335A44: xor     edx, edx
 * 0000000140335A46: mov     rcx, [rbp+20F0h+var_20D8]
 * 0000000140335A4A: call    KeGuardDispatchICall
 * 0000000140335A4F: cmp     r14b, 80h
 * 0000000140335A53: jnz     short loc_140335A6A
 * 0000000140335A55: mov     rax, [rsi+128h]
 * 0000000140335A5C: xor     edx, edx
 * 0000000140335A5E: mov     rcx, [rsi+9E0h]
 * 0000000140335A65: call    KeGuardDispatchICall
 * 0000000140335A6A: mov     rcx, [rsi+538h]
 * 0000000140335A71: xor     edx, edx
 * 0000000140335A73: mov     rax, [rsi+138h]
 * 0000000140335A7A: call    KeGuardDispatchICall
 * 0000000140335A7F: mov     rax, [rsi+178h]
 * 0000000140335A86: call    KeGuardDispatchICall
 * 0000000140335A8B: shl     r12d, 8
 * 0000000140335A8F: add     [rsi+810h], r12d
 * 0000000140335A96: jmp     loc_140334DB4
 * 0000000140335A9B: mov     eax, [rsi+818h]
 * 0000000140335AA1: test    dl, al
 * 0000000140335AA3: jnz     loc_140334318
 * 0000000140335AA9: mov     r12, [rsi+598h]
 * 0000000140335AB0: xor     eax, eax
 * 0000000140335AB2: mov     r13, [rsi+5A0h]
 * 0000000140335AB9: mov     r15d, eax
 * 0000000140335ABC: mov     r14, [rsi+538h]
 * 0000000140335AC3: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 0000000140335AC6: mov     rax, [rsi+170h]
 * 0000000140335ACD: mov     [rbp+20F0h+var_20F0], r12
 * 0000000140335AD1: call    KeGuardDispatchICall
 * 0000000140335AD6: test    dword ptr [rsi+970h], 40000000h
 * 0000000140335AE0: jnz     short loc_140335AF6
 * 0000000140335AE2: mov     ecx, [rsi+930h]
 * 0000000140335AE8: cmp     ecx, 7
 * 0000000140335AEB: jnb     short loc_140335AF6
 * 0000000140335AED: mov     ebx, 1
 * 0000000140335AF2: shl     bl, cl
 * 0000000140335AF4: jmp     short loc_140335B0D
 * 0000000140335AF6: mov     rax, [rsi+120h]
 * 0000000140335AFD: xor     edx, edx
 * 0000000140335AFF: mov     rcx, [rsi+9E0h]
 * 0000000140335B06: call    KeGuardDispatchICall
 * 0000000140335B0B: mov     bl, 80h
 * 0000000140335B0D: mov     rax, [rsi+130h]
 * 0000000140335B14: xor     edx, edx
 * 0000000140335B16: mov     rcx, r14
 * 0000000140335B19: call    KeGuardDispatchICall
 * 0000000140335B1E: mov     r8, [rsi+510h]
 * 0000000140335B25: mov     r14d, 1
 * 0000000140335B2B: mov     rdx, [r8]
 * 0000000140335B2E: cmp     rdx, r8
 * 0000000140335B31: jz      short loc_140335B57
 * 0000000140335B33: mov     rax, [rsi+6A0h]
 * 0000000140335B3A: mov     rcx, rdx
 * 0000000140335B3D: sub     rcx, [rsi+6B8h]
 * 0000000140335B44: lock or [rcx+rax], bl
 * 0000000140335B48: mov     rdx, [rdx]
 * 0000000140335B4B: add     r15d, r14d
 * 0000000140335B4E: cmp     rdx, r8
 * 0000000140335B51: jnz     short loc_140335B33
 * 0000000140335B53: mov     dword ptr [rbp+20F0h+var_20B8], r15d
 * 0000000140335B57: mov     rax, [rsi+130h]
 * 0000000140335B5E: xor     edx, edx
 * 0000000140335B60: mov     rcx, r12
 * 0000000140335B63: call    KeGuardDispatchICall
 * 0000000140335B68: mov     r11, [rsi+590h]
 * 0000000140335B6F: mov     r10, [r11]
 * 0000000140335B72: cmp     r10, r11
 * 0000000140335B75: jz      loc_140335C34
 * 0000000140335B7B: mov     rdi, [rbp+20F0h+var_20D0]
 * 0000000140335B7F: xor     r12d, r12d
 * 0000000140335B82: mov     r15, 0B3B74BDEE4453415h
 * 0000000140335B8C: mov     rcx, r10
 * 0000000140335B8F: sub     rcx, [rsi+728h]
 * 0000000140335B96: cmp     rcx, r13
 * 0000000140335B99: jz      short loc_140335C19
 * 0000000140335B9B: mov     r9, [rsi+6A0h]
 * 0000000140335BA2: mov     rax, [rsi+720h]
 * 0000000140335BA9: mov     rdx, r9
 * 0000000140335BAC: mov     r8, [rcx+rax]
 * 0000000140335BB0: test    [r8+r9], bl
 * 0000000140335BB4: jnz     short loc_140335C10
 * 0000000140335BB6: mov     rax, [rsi+6A8h]
 * 0000000140335BBD: mov     ecx, [r8+rax]
 * 0000000140335BC1: test    [rsi+6C0h], ecx
 * 0000000140335BC7: jz      short loc_140335C10
 * 0000000140335BC9: cmp     [rsi+8D8h], r12d
 * 0000000140335BD0: jnz     short loc_140335C10
 * 0000000140335BD2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140335BDC: add     rax, rsi
 * 0000000140335BDF: mov     [rsi+8E0h], rax
 * 0000000140335BE6: lea     rax, [rdi+r15]
 * 0000000140335BEA: mov     [rsi+8E8h], rax
 * 0000000140335BF1: movsxd  rax, dword ptr [rdi]
 * 0000000140335BF4: mov     [rsi+8F0h], rax
 * 0000000140335BFB: mov     [rsi+8F8h], r8
 * 0000000140335C02: mov     [rsi+8D8h], r14d
 * 0000000140335C09: mov     rdx, [rsi+6A0h]
 * 0000000140335C10: mov     al, bl
 * 0000000140335C12: not     al
 * 0000000140335C14: lock and [r8+rdx], al
 * 0000000140335C19: mov     r10, [r10]
 * 0000000140335C1C: cmp     r10, r11
 * 0000000140335C1F: jnz     loc_140335B8C
 * 0000000140335C25: mov     r15d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140335C29: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140335C30: mov     r12, [rbp+20F0h+var_20F0]
 * 0000000140335C34: mov     rax, [rsi+138h]
 * 0000000140335C3B: xor     edx, edx
 * 0000000140335C3D: mov     rcx, r12
 * 0000000140335C40: call    KeGuardDispatchICall
 * 0000000140335C45: jmp     loc_1403354D5
 * 0000000140335C4A: mov     r12, [rsi+520h]
 * 0000000140335C51: xor     eax, eax
 * 0000000140335C53: mov     [rbp+20F0h+var_2090], eax
 * 0000000140335C56: mov     rax, [rsi+370h]
 * 0000000140335C5D: call    KeGuardDispatchICall
 * 0000000140335C62: mov     [rbp+20F0h+var_20A0], rax
 * 0000000140335C66: cli
 * 0000000140335C67: mov     rcx, gs:20h
 * 0000000140335C70: mov     rax, [rsi+630h]
 * 0000000140335C77: mov     rcx, [rcx+rax]
 * 0000000140335C7B: sti
 * 0000000140335C7C: mov     rax, [rsi+160h]
 * 0000000140335C83: call    KeGuardDispatchICall
 * 0000000140335C88: mov     rcx, [rsi+528h]
 * 0000000140335C8F: mov     ebx, 1
 * 0000000140335C94: mov     rax, [rsi+0E8h]
 * 0000000140335C9B: mov     dl, bl
 * 0000000140335C9D: call    KeGuardDispatchICall
 * 0000000140335CA2: mov     rax, [rsi+600h]
 * 0000000140335CA9: mov     rcx, [rax]
 * 0000000140335CAC: mov     r13d, [rcx]
 * 0000000140335CAF: lea     rdx, [rcx+10h]
 * 0000000140335CB3: mov     [rbp+20F0h+var_20F0], rdx
 * 0000000140335CB7: lea     rax, ds:0[r13*2]
 * 0000000140335CBF: add     rax, r13
 * 0000000140335CC2: lea     rax, [rdx+rax*8]
 * 0000000140335CC6: mov     [rbp+20F0h+var_20D8], rax
 * 0000000140335CCA: xor     eax, eax
 * 0000000140335CCC: mov     [rbp+20F0h+var_20E8], eax
 * 0000000140335CCF: cmp     [rcx+0Ch], al
 * 0000000140335CD2: jz      short loc_140335CE8
 * 0000000140335CD4: mov     r13d, eax
 * 0000000140335CD7: mov     rax, [r12]
 * 0000000140335CDB: jmp     short loc_140335CE3
 * 0000000140335CDD: mov     rax, [rax]
 * 0000000140335CE0: add     r13d, ebx
 * 0000000140335CE3: cmp     rax, r12
 * 0000000140335CE6: jnz     short loc_140335CDD
 * 0000000140335CE8: mov     r8d, [rsi+7F8h]
 * 0000000140335CEF: mov     r15d, r13d
 * 0000000140335CF2: shl     r15d, 3
 * 0000000140335CF6: rdtsc
 * 0000000140335CF8: shl     rdx, 20h
 * 0000000140335CFC: mov     r9, 7010008004002001h
 * 0000000140335D06: or      rax, rdx
 * 0000000140335D09: mov     rcx, rax
 * 0000000140335D0C: ror     rax, 3
 * 0000000140335D10: xor     rcx, rax
 * 0000000140335D13: mov     rax, r9
 * 0000000140335D16: mul     rcx
 * 0000000140335D19: mov     rbx, rax
 * 0000000140335D1C: mov     [rbp+20F0h+var_17C8], rdx
 * 0000000140335D23: xor     ebx, edx
 * 0000000140335D25: and     ebx, 7FFh
 * 0000000140335D2B: rdtsc
 * 0000000140335D2D: shl     rdx, 20h
 * 0000000140335D31: or      rax, rdx
 * 0000000140335D34: mov     rcx, rax
 * 0000000140335D37: ror     rax, 3
 * 0000000140335D3B: xor     rcx, rax
 * 0000000140335D3E: mov     rax, r9
 * 0000000140335D41: mul     rcx
 * 0000000140335D44: lea     ecx, [rbx+1]
 * 0000000140335D47: xor     rax, rdx
 * 0000000140335D4A: mov     [rbp+20F0h+var_17C0], rdx
 * 0000000140335D51: xor     edx, edx
 * 0000000140335D53: div     rcx
 * 0000000140335D56: mov     rax, [rsi+0F0h]
 * 0000000140335D5D: mov     ecx, 200h
 * 0000000140335D62: mov     r14, rdx
 * 0000000140335D65: lea     edx, [rbx+r15]
 * 0000000140335D69: call    KeGuardDispatchICall
 * 0000000140335D6E: mov     r11, rax
 * 0000000140335D71: xor     eax, eax
 * 0000000140335D73: test    r11, r11
 * 0000000140335D76: jnz     short loc_140335D86
 * 0000000140335D78: lea     ecx, [rax+1]
 * 0000000140335D7B: add     [rsi+9F8h], ecx
 * 0000000140335D81: jmp     loc_140335ED7
 * 0000000140335D86: mov     r10d, r14d
 * 0000000140335D89: mov     r9, r11
 * 0000000140335D8C: cmp     r14d, 8
 * 0000000140335D90: jb      short loc_140335DE6
 * 0000000140335D92: mov     r8d, r14d
 * 0000000140335D95: mov     esi, 1
 * 0000000140335D9A: shr     r8, 3
 * 0000000140335D9E: mov     rdi, 7010008004002001h
 * 0000000140335DA8: rdtsc
 * 0000000140335DAA: shl     rdx, 20h
 * 0000000140335DAE: add     r10d, 0FFFFFFF8h
 * 0000000140335DB2: or      rax, rdx
 * 0000000140335DB5: mov     rcx, rax
 * 0000000140335DB8: ror     rax, 3
 * 0000000140335DBC: xor     rcx, rax
 * 0000000140335DBF: mov     rax, rdi
 * 0000000140335DC2: mul     rcx
 * 0000000140335DC5: mov     [rbp+20F0h+var_17B8], rdx
 * 0000000140335DCC: xor     rdx, rax
 * 0000000140335DCF: mov     [r9], rdx
 * 0000000140335DD2: add     r9, 8
 * 0000000140335DD6: sub     r8, rsi
 * 0000000140335DD9: jnz     short loc_140335DA8
 * 0000000140335DDB: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140335DDF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140335DE6: test    r10d, r10d
 * 0000000140335DE9: jz      short loc_140335E2E
 * 0000000140335DEB: rdtsc
 * 0000000140335DED: shl     rdx, 20h
 * 0000000140335DF1: or      rax, rdx
 * 0000000140335DF4: mov     rcx, rax
 * 0000000140335DF7: ror     rax, 3
 * 0000000140335DFB: xor     rcx, rax
 * 0000000140335DFE: mov     rax, 7010008004002001h
 * 0000000140335E08: mul     rcx
 * 0000000140335E0B: mov     ecx, 0FFFFFFFFh
 * 0000000140335E10: mov     [rbp+20F0h+var_16D0], rdx
 * 0000000140335E17: xor     rdx, rax
 * 0000000140335E1A: mov     eax, 1
 * 0000000140335E1F: mov     [r9], dl
 * 0000000140335E22: add     r9, rax
 * 0000000140335E25: shr     rdx, 8
 * 0000000140335E29: add     r10d, ecx
 * 0000000140335E2C: jnz     short loc_140335E1F
 * 0000000140335E2E: mov     r10d, r14d
 * 0000000140335E31: sub     ebx, r14d
 * 0000000140335E34: mov     r8d, r15d
 * 0000000140335E37: mov     r14d, 1
 * 0000000140335E3D: add     r8, r10
 * 0000000140335E40: mov     r15, 7010008004002001h
 * 0000000140335E4A: add     r8, r11
 * 0000000140335E4D: cmp     ebx, 8
 * 0000000140335E50: jb      short loc_140335E8B
 * 0000000140335E52: mov     r9d, ebx
 * 0000000140335E55: shr     r9, 3
 * 0000000140335E59: rdtsc
 * 0000000140335E5B: shl     rdx, 20h
 * 0000000140335E5F: add     ebx, 0FFFFFFF8h
 * 0000000140335E62: or      rax, rdx
 * 0000000140335E65: mov     rcx, rax
 * 0000000140335E68: ror     rax, 3
 * 0000000140335E6C: xor     rcx, rax
 * 0000000140335E6F: mov     rax, r15
 * 0000000140335E72: mul     rcx
 * 0000000140335E75: mov     [rbp+20F0h+var_16C8], rdx
 * 0000000140335E7C: xor     rdx, rax
 * 0000000140335E7F: mov     [r8], rdx
 * 0000000140335E82: add     r8, 8
 * 0000000140335E86: sub     r9, r14
 * 0000000140335E89: jnz     short loc_140335E59
 * 0000000140335E8B: test    ebx, ebx
 * 0000000140335E8D: jz      short loc_140335EC5
 * 0000000140335E8F: rdtsc
 * 0000000140335E91: shl     rdx, 20h
 * 0000000140335E95: or      rax, rdx
 * 0000000140335E98: mov     rcx, rax
 * 0000000140335E9B: ror     rax, 3
 * 0000000140335E9F: xor     rcx, rax
 * 0000000140335EA2: mov     rax, r15
 * 0000000140335EA5: mul     rcx
 * 0000000140335EA8: mov     [rbp+20F0h+var_16A8], rdx
 * 0000000140335EAF: xor     rdx, rax
 * 0000000140335EB2: mov     eax, 0FFFFFFFFh
 * 0000000140335EB7: mov     [r8], dl
 * 0000000140335EBA: add     r8, r14
 * 0000000140335EBD: shr     rdx, 8
 * 0000000140335EC1: add     ebx, eax
 * 0000000140335EC3: jnz     short loc_140335EB7
 * 0000000140335EC5: lea     r15, [r10+r11]
 * 0000000140335EC9: mov     [rbp+20F0h+var_1E40], r11
 * 0000000140335ED0: test    r15, r15
 * 0000000140335ED3: jnz     short loc_140335EE3
 * 0000000140335ED5: xor     eax, eax
 * 0000000140335ED7: mov     [rbp+20F0h+var_1E40], rax
 * 0000000140335EDE: jmp     loc_140336018
 * 0000000140335EE3: mov     rbx, [r12]
 * 0000000140335EE7: cmp     rbx, r12
 * 0000000140335EEA: jz      short loc_140335F3E
 * 0000000140335EEC: mov     edi, [rbp+20F0h+var_20E8]
 * 0000000140335EEF: mov     rax, [rsi+738h]
 * 0000000140335EF6: mov     rcx, rbx
 * 0000000140335EF9: sub     rcx, [rsi+730h]
 * 0000000140335F00: mov     r14, [rcx+rax]
 * 0000000140335F04: mov     rax, [rsi+2A0h]
 * 0000000140335F0B: mov     rcx, r14
 * 0000000140335F0E: call    KeGuardDispatchICall
 * 0000000140335F13: test    eax, eax
 * 0000000140335F15: jnz     short loc_140335F2B
 * 0000000140335F17: cmp     edi, r13d
 * 0000000140335F1A: jnb     short loc_140335F2B
 * 0000000140335F1C: mov     eax, edi
 * 0000000140335F1E: mov     [r15+rax*8], r14
 * 0000000140335F22: mov     eax, 1
 * 0000000140335F27: add     edi, eax
 * 0000000140335F29: jmp     short loc_140335F30
 * 0000000140335F2B: mov     eax, 1
 * 0000000140335F30: mov     rbx, [rbx]
 * 0000000140335F33: add     [rbp+20F0h+var_2090], eax
 * 0000000140335F36: cmp     rbx, r12
 * 0000000140335F39: jnz     short loc_140335EEF
 * 0000000140335F3B: mov     [rbp+20F0h+var_20E8], edi
 * 0000000140335F3E: mov     r14d, [rbp+20F0h+var_20E8]
 * 0000000140335F42: mov     rcx, r15
 * 0000000140335F45: mov     rax, [rsi+390h]
 * 0000000140335F4C: mov     edx, r14d
 * 0000000140335F4F: call    KeGuardDispatchICall
 * 0000000140335F54: mov     r12, [rbp+20F0h+var_20F0]
 * 0000000140335F58: mov     r13, [rbp+20F0h+var_20D8]
 * 0000000140335F5C: mov     rdi, [rbp+20F0h+var_20D0]
 * 0000000140335F60: mov     rbx, [r12+8]
 * 0000000140335F65: mov     rax, [rsi+2A0h]
 * 0000000140335F6C: mov     rcx, rbx
 * 0000000140335F6F: call    KeGuardDispatchICall
 * 0000000140335F74: test    eax, eax
 * 0000000140335F76: jnz     loc_140336004
 * 0000000140335F7C: xor     eax, eax
 * 0000000140335F7E: lea     edx, [r14-1]
 * 0000000140335F82: mov     r8d, eax
 * 0000000140335F85: test    edx, edx
 * 0000000140335F87: js      short loc_140335FB8
 * 0000000140335F89: lea     ecx, [rdx+r8]
 * 0000000140335F8D: sar     ecx, 1
 * 0000000140335F8F: movsxd  rax, ecx
 * 0000000140335F92: mov     r9, [r15+rax*8]
 * 0000000140335F96: cmp     rbx, r9
 * 0000000140335F99: jnb     short loc_140335FA6
 * 0000000140335F9B: xor     eax, eax
 * 0000000140335F9D: test    ecx, ecx
 * 0000000140335F9F: jz      short loc_140335FB8
 * 0000000140335FA1: lea     edx, [rcx-1]
 * 0000000140335FA4: jmp     short loc_140335FAC
 * 0000000140335FA6: jbe     short loc_140335FB1
 * 0000000140335FA8: lea     r8d, [rcx+1]
 * 0000000140335FAC: cmp     edx, r8d
 * 0000000140335FAF: jge     short loc_140335F89
 * 0000000140335FB1: cmp     edx, r8d
 * 0000000140335FB4: jge     short loc_140336004
 * 0000000140335FB6: xor     eax, eax
 * 0000000140335FB8: cmp     [rsi+8D8h], eax
 * 0000000140335FBE: jnz     short loc_140336004
 * 0000000140335FC0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140335FCA: add     rax, rsi
 * 0000000140335FCD: mov     [rsi+8E0h], rax
 * 0000000140335FD4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140335FDE: add     rax, rdi
 * 0000000140335FE1: mov     [rsi+8E8h], rax
 * 0000000140335FE8: movsxd  rax, dword ptr [rdi]
 * 0000000140335FEB: mov     [rsi+8F0h], rax
 * 0000000140335FF2: mov     eax, 1
 * 0000000140335FF7: mov     [rsi+8F8h], rbx
 * 0000000140335FFE: mov     [rsi+8D8h], eax
 * 0000000140336004: add     r12, 18h
 * 0000000140336008: cmp     r12, r13
 * 000000014033600B: jb      loc_140335F60
 * 0000000140336011: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140336018: mov     rcx, [rsi+528h]
 * 000000014033601F: mov     rax, [rsi+110h]
 * 0000000140336026: call    KeGuardDispatchICall
 * 000000014033602B: mov     rax, [rsi+168h]
 * 0000000140336032: call    KeGuardDispatchICall
 * 0000000140336037: mov     rax, [rsi+378h]
 * 000000014033603E: mov     rcx, [rbp+20F0h+var_20A0]
 * 0000000140336042: call    KeGuardDispatchICall
 * 0000000140336047: xor     eax, eax
 * 0000000140336049: cmp     [rbp+20F0h+var_1E40], rax
 * 0000000140336050: jz      loc_140334DB4
 * 0000000140336056: mov     eax, [rbp+20F0h+var_2090]
 * 0000000140336059: shl     eax, 9
 * 000000014033605C: add     [rsi+810h], eax
 * 0000000140336062: mov     rax, [rsi+0F8h]
 * 0000000140336069: mov     rcx, [rbp+20F0h+var_1E40]
 * 0000000140336070: jmp     loc_140334DAF
 * 0000000140336075: mov     r15d, 40000000h
 * 000000014033607B: test    [rsi+970h], r15d
 * 0000000140336082: jz      short loc_1403360E0
 * 0000000140336084: test    dword ptr [rsi+974h], 1000h
 * 000000014033608E: jnz     short loc_1403360E0
 * 0000000140336090: rdtsc
 * 0000000140336092: shl     rdx, 20h
 * 0000000140336096: or      rax, rdx
 * 0000000140336099: mov     rcx, rax
 * 000000014033609C: ror     rax, 3
 * 00000001403360A0: xor     rcx, rax
 * 00000001403360A3: mov     rax, 7010008004002001h
 * 00000001403360AD: mul     rcx
 * 00000001403360B0: mov     rcx, rdx
 * 00000001403360B3: mov     [rbp+20F0h+var_16A0], rdx
 * 00000001403360BA: xor     rcx, rax
 * 00000001403360BD: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001403360C7: mul     rcx
 * 00000001403360CA: shr     rdx, 2
 * 00000001403360CE: lea     rax, [rdx+rdx*4]
 * 00000001403360D2: mov     edx, 1
 * 00000001403360D7: sub     rcx, rax
 * 00000001403360DA: mov     [rsi+80Ch], ecx
 * 00000001403360E0: mov     ecx, [rsi+80Ch]
 * 00000001403360E6: xor     eax, eax
 * 00000001403360E8: test    ecx, ecx
 * 00000001403360EA: jz      loc_140338659
 * 00000001403360F0: sub     ecx, 1
 * 00000001403360F3: jz      loc_1403384FD
 * 00000001403360F9: sub     ecx, 1
 * 00000001403360FC: jz      loc_14033835B
 * 0000000140336102: sub     ecx, 1
 * 0000000140336105: jz      loc_140336456
 * 000000014033610B: sub     ecx, 1
 * 000000014033610E: jz      loc_1403362B1
 * 0000000140336114: cmp     ecx, 1
 * 0000000140336117: jnz     loc_1403387D8
 * 000000014033611D: mov     rbx, r13
 * 0000000140336120: mov     [rbp+20F0h+var_204D], 0FFh
 * 0000000140336127: mov     r12d, eax
 * 000000014033612A: mov     r14d, eax
 * 000000014033612D: mov     r15d, eax
 * 0000000140336130: jmp     short loc_140336134
 * 0000000140336132: xor     eax, eax
 * 0000000140336134: mov     [rbp+20F0h+var_1DA0], rax
 * 000000014033613B: lea     r9, [rbp+20F0h+var_1EE8]
 * 0000000140336142: mov     rax, [rsi+428h]
 * 0000000140336149: lea     r8, [rbp+20F0h+var_204D]
 * 0000000140336150: lea     rdx, [rbp+20F0h+var_1DA0]
 * 0000000140336157: mov     ecx, r14d
 * 000000014033615A: call    KeGuardDispatchICall
 * 000000014033615F: test    eax, eax
 * 0000000140336161: jz      loc_140336290
 * 0000000140336167: mov     r13d, 1
 * 000000014033616D: mov     rax, [rsi+200h]
 * 0000000140336174: lea     rdx, [rbp+20F0h+var_1698]
 * 000000014033617B: mov     rcx, [rbp+20F0h+var_1EE8]
 * 0000000140336182: add     r12d, r13d
 * 0000000140336185: call    KeGuardDispatchICall
 * 000000014033618A: test    rax, rax
 * 000000014033618D: jnz     loc_140336264
 * 0000000140336193: test    dword ptr [rsi+970h], 40000000h
 * 000000014033619D: jz      short loc_1403361E5
 * 000000014033619F: mov     rcx, [rsi+0A50h]
 * 00000001403361A6: lea     edx, [rax+30h]
 * 00000001403361A9: lea     r8d, [rax+6]
 * 00000001403361AD: mov     rax, [rbx]
 * 00000001403361B0: add     edx, 0FFFFFFF8h
 * 00000001403361B3: mov     [rcx], rax
 * 00000001403361B6: add     rbx, 8
 * 00000001403361BA: add     rcx, 8
 * 00000001403361BE: sub     r8, r13
 * 00000001403361C1: jnz     short loc_1403361AD
 * 00000001403361C3: test    edx, edx
 * 00000001403361C5: jz      short loc_1403361DE
 * 00000001403361C7: mov     esi, 0FFFFFFFFh
 * 00000001403361CC: mov     al, [rbx]
 * 00000001403361CE: add     rbx, r13
 * 00000001403361D1: mov     [rcx], al
 * 00000001403361D3: add     rcx, r13
 * 00000001403361D6: add     edx, esi
 * 00000001403361D8: jnz     short loc_1403361CC
 * 00000001403361DA: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403361DE: mov     rbx, [rsi+0A50h]
 * 00000001403361E5: mov     rax, [rbp+20F0h+var_1EE8]
 * 00000001403361EC: mov     [rbx+18h], rax
 * 00000001403361F0: mov     rax, [rsi+580h]
 * 00000001403361F7: mov     [rax], rbx
 * 00000001403361FA: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140336201: mov     rax, [rbp+20F0h+var_1EE8]
 * 0000000140336208: mov     rcx, [rsi+580h]
 * 000000014033620F: mov     [rcx+8], rax
 * 0000000140336213: xor     eax, eax
 * 0000000140336215: mov     dword ptr [rcx+14h], 1000h
 * 000000014033621C: cmp     [rsi+8D8h], eax
 * 0000000140336222: jnz     short loc_140336264
 * 0000000140336224: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033622E: add     rax, rsi
 * 0000000140336231: mov     [rsi+8E0h], rax
 * 0000000140336238: mov     rax, 0B3B74BDEE4453415h
 * 0000000140336242: add     rax, rbx
 * 0000000140336245: mov     [rsi+8E8h], rax
 * 000000014033624C: movsxd  rax, dword ptr [rbx]
 * 000000014033624F: mov     [rsi+8F0h], rax
 * 0000000140336256: mov     [rsi+8F8h], r15
 * 000000014033625D: mov     [rsi+8D8h], r13d
 * 0000000140336264: mov     rax, [rsi+428h]
 * 000000014033626B: lea     r9, [rbp+20F0h+var_1EE8]
 * 0000000140336272: lea     r8, [rbp+20F0h+var_204D]
 * 0000000140336279: mov     ecx, r14d
 * 000000014033627C: lea     rdx, [rbp+20F0h+var_1DA0]
 * 0000000140336283: call    KeGuardDispatchICall
 * 0000000140336288: test    eax, eax
 * 000000014033628A: jnz     loc_14033616D
 * 0000000140336290: mov     edx, 1
 * 0000000140336295: add     r14d, edx
 * 0000000140336298: add     r15, rdx
 * 000000014033629B: cmp     r14d, 3
 * 000000014033629F: jb      loc_140336132
 * 00000001403362A5: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403362AC: jmp     loc_14033879A
 * 00000001403362B1: mov     r12d, eax
 * 00000001403362B4: mov     [rbp+20F0h+var_2078], eax
 * 00000001403362B7: mov     rax, [rsi+310h]
 * 00000001403362BE: xor     ecx, ecx
 * 00000001403362C0: call    KeGuardDispatchICall
 * 00000001403362C5: mov     r15, rax
 * 00000001403362C8: xor     eax, eax
 * 00000001403362CA: test    r15, r15
 * 00000001403362CD: jz      loc_140338795
 * 00000001403362D3: mov     rdi, [rbp+20F0h+var_20D0]
 * 00000001403362D7: mov     r13d, eax
 * 00000001403362DA: mov     [rbp+20F0h+var_1D98], rax
 * 00000001403362E1: lea     rdx, [rbp+20F0h+var_1D98]
 * 00000001403362E8: mov     rax, [rsi+308h]
 * 00000001403362EF: mov     rcx, r15
 * 00000001403362F2: mov     rbx, rdi
 * 00000001403362F5: mov     r12d, 1
 * 00000001403362FB: call    KeGuardDispatchICall
 * 0000000140336300: mov     r14, rax
 * 0000000140336303: test    rax, rax
 * 0000000140336306: jz      loc_14033642A
 * 000000014033630C: lea     edi, [r12+5]
 * 0000000140336311: xor     r13d, r13d
 * 0000000140336314: mov     rax, [rsi+200h]
 * 000000014033631B: lea     rdx, [rbp+20F0h+var_1690]
 * 0000000140336322: mov     rcx, r14
 * 0000000140336325: inc     r12d
 * 0000000140336328: call    KeGuardDispatchICall
 * 000000014033632D: test    rax, rax
 * 0000000140336330: jnz     loc_140336400
 * 0000000140336336: test    dword ptr [rsi+970h], 40000000h
 * 0000000140336340: lea     r9d, [rax+1]
 * 0000000140336344: jz      short loc_14033638C
 * 0000000140336346: mov     rcx, [rsi+0A50h]
 * 000000014033634D: lea     edx, [rax+30h]
 * 0000000140336350: mov     r8, rdi
 * 0000000140336353: mov     rax, [rbx]
 * 0000000140336356: add     edx, 0FFFFFFF8h
 * 0000000140336359: mov     [rcx], rax
 * 000000014033635C: add     rbx, 8
 * 0000000140336360: add     rcx, 8
 * 0000000140336364: sub     r8, r9
 * 0000000140336367: jnz     short loc_140336353
 * 0000000140336369: test    edx, edx
 * 000000014033636B: jz      short loc_140336385
 * 000000014033636D: mov     r13d, 0FFFFFFFFh
 * 0000000140336373: mov     al, [rbx]
 * 0000000140336375: add     rbx, r9
 * 0000000140336378: mov     [rcx], al
 * 000000014033637A: add     rcx, r9
 * 000000014033637D: add     edx, r13d
 * 0000000140336380: jnz     short loc_140336373
 * 0000000140336382: xor     r13d, r13d
 * 0000000140336385: mov     rbx, [rsi+0A50h]
 * 000000014033638C: mov     [rbx+18h], r14
 * 0000000140336390: mov     [rbx+20h], r15
 * 0000000140336394: mov     rax, [rsi+580h]
 * 000000014033639B: mov     [rax], rbx
 * 000000014033639E: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001403363A5: mov     rax, [rsi+580h]
 * 00000001403363AC: mov     [rax+8], r14
 * 00000001403363B0: mov     dword ptr [rax+14h], 1000h
 * 00000001403363B7: cmp     [rsi+8D8h], r13d
 * 00000001403363BE: jnz     short loc_140336400
 * 00000001403363C0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403363CA: add     rax, rsi
 * 00000001403363CD: mov     [rsi+8E0h], rax
 * 00000001403363D4: mov     rax, 0B3B74BDEE4453415h
 * 00000001403363DE: add     rax, rbx
 * 00000001403363E1: mov     [rsi+8E8h], rax
 * 00000001403363E8: movsxd  rax, dword ptr [rbx]
 * 00000001403363EB: mov     [rsi+8F0h], rax
 * 00000001403363F2: mov     [rsi+8F8h], rdi
 * 00000001403363F9: mov     [rsi+8D8h], r9d
 * 0000000140336400: mov     rax, [rsi+308h]
 * 0000000140336407: lea     rdx, [rbp+20F0h+var_1D98]
 * 000000014033640E: mov     rcx, r15
 * 0000000140336411: call    KeGuardDispatchICall
 * 0000000140336416: mov     r14, rax
 * 0000000140336419: test    rax, rax
 * 000000014033641C: jnz     loc_140336314
 * 0000000140336422: mov     r13d, [rbp+20F0h+var_2078]
 * 0000000140336426: mov     rdi, [rbp+20F0h+var_20D0]
 * 000000014033642A: mov     rax, [rsi+310h]
 * 0000000140336431: add     r13d, r12d
 * 0000000140336434: mov     rcx, r15
 * 0000000140336437: mov     [rbp+20F0h+var_2078], r13d
 * 000000014033643B: call    KeGuardDispatchICall
 * 0000000140336440: mov     r15, rax
 * 0000000140336443: xor     eax, eax
 * 0000000140336445: test    r15, r15
 * 0000000140336448: jnz     loc_1403362DA
 * 000000014033644E: mov     r12d, r13d
 * 0000000140336451: jmp     loc_14033878E
 * 0000000140336456: mov     r12d, eax
 * 0000000140336459: mov     rax, [rsi+4E0h]
 * 0000000140336460: mov     r13, rsi
 * 0000000140336463: mov     [rbp+20F0h+var_1FE0], rsi
 * 000000014033646A: mov     rbx, [rax]
 * 000000014033646D: mov     [rbp+20F0h+var_2000], rbx
 * 0000000140336474: test    [rsi+970h], r15d
 * 000000014033647B: jz      short loc_140336484
 * 000000014033647D: xor     eax, eax
 * 000000014033647F: jmp     loc_14033879A
 * 0000000140336484: mov     rcx, [rbp+20F0h+var_20D0]
 * 0000000140336488: mov     rax, [rcx+28h]
 * 000000014033648C: test    rax, rax
 * 000000014033648F: jz      loc_14033651A
 * 0000000140336495: mov     edx, 1
 * 000000014033649A: mov     r12d, edx
 * 000000014033649D: cmp     rbx, rax
 * 00000001403364A0: jz      loc_14033879A
 * 00000001403364A6: mov     [rcx+18h], rbx
 * 00000001403364AA: mov     rax, [rsi+580h]
 * 00000001403364B1: mov     [rax], rcx
 * 00000001403364B4: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001403364BB: mov     rax, [rsi+580h]
 * 00000001403364C2: mov     [rax+8], rbx
 * 00000001403364C6: mov     dword ptr [rax+14h], 1000h
 * 00000001403364CD: xor     eax, eax
 * 00000001403364CF: cmp     [rsi+8D8h], eax
 * 00000001403364D5: jnz     loc_14033879A
 * 00000001403364DB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403364E5: add     rax, rsi
 * 00000001403364E8: mov     [rsi+8E0h], rax
 * 00000001403364EF: lea     rax, [rcx+r11]
 * 00000001403364F3: mov     [rsi+8E8h], rax
 * 00000001403364FA: movsxd  rax, dword ptr [rcx]
 * 00000001403364FD: mov     [rsi+8F0h], rax
 * 0000000140336504: mov     qword ptr [rsi+8F8h], 5
 * 000000014033650F: mov     [rsi+8D8h], edx
 * 0000000140336515: jmp     loc_14033879A
 * 000000014033651A: test    rbx, rbx
 * 000000014033651D: jz      loc_140338795
 * 0000000140336523: mov     rax, [rsi+1F8h]
 * 000000014033652A: lea     r8, [rbp+20F0h+var_204C]
 * 0000000140336531: mov     r14d, 1
 * 0000000140336537: mov     [rbp+20F0h+var_1FF0], rsi
 * 000000014033653E: lea     rdx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336545: mov     [rbp+20F0h+var_2078], r14d
 * 0000000140336549: mov     rcx, rbx
 * 000000014033654C: mov     r12d, r14d
 * 000000014033654F: call    KeGuardDispatchICall
 * 0000000140336554: mov     [rbp+20F0h+var_20B0], rax
 * 0000000140336558: test    rax, rax
 * 000000014033655B: jnz     short loc_140336567
 * 000000014033655D: mov     ecx, 0C000007Bh
 * 0000000140336562: jmp     loc_14033831F
 * 0000000140336567: mov     r12d, [rbp+20F0h+var_204C]
 * 000000014033656E: xor     eax, eax
 * 0000000140336570: mov     r15, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336577: mov     ecx, 4
 * 000000014033657C: mov     [rbp+20F0h+var_1F20], rax
 * 0000000140336583: xor     edx, edx
 * 0000000140336585: lea     rax, [rbp+20F0h+var_1F18]
 * 000000014033658C: mov     [rbp+20F0h+var_20E8], r12d
 * 0000000140336590: mov     [rbp+20F0h+var_20D8], r15
 * 0000000140336594: mov     r8d, 0FFFFFFFFh
 * 000000014033659A: mov     [rax], dl
 * 000000014033659C: add     rax, r14
 * 000000014033659F: add     ecx, r8d
 * 00000001403365A2: jnz     short loc_14033659A
 * 00000001403365A4: xor     eax, eax
 * 00000001403365A6: mov     r14d, eax
 * 00000001403365A9: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 00000001403365AC: cmp     [rsi+7F4h], eax
 * 00000001403365B2: jbe     loc_1403367B3
 * 00000001403365B8: mov     edx, [rbp+20F0h+var_1F18]
 * 00000001403365BE: mov     r9d, dword ptr [rbp+20F0h+var_1F20+4]
 * 00000001403365C5: mov     r10d, dword ptr [rbp+20F0h+var_1F20]
 * 00000001403365CC: mov     rax, [rsi+0A48h]
 * 00000001403365D3: mov     rbx, rsi
 * 00000001403365D6: test    rax, rax
 * 00000001403365D9: cmovnz  rbx, rax
 * 00000001403365DD: xor     eax, eax
 * 00000001403365DF: mov     [rbp+20F0h+var_20F0], rbx
 * 00000001403365E3: mov     r11d, eax
 * 00000001403365E6: mov     r8d, [rbx+7F0h]
 * 00000001403365ED: add     r8, rbx
 * 00000001403365F0: test    r10d, r10d
 * 00000001403365F3: jz      short loc_140336603
 * 00000001403365F5: cmp     r9d, r14d
 * 00000001403365F8: ja      short loc_140336603
 * 00000001403365FA: mov     r8d, edx
 * 00000001403365FD: mov     r11d, r9d
 * 0000000140336600: add     r8, rbx
 * 0000000140336603: cmp     r11d, r14d
 * 0000000140336606: jz      loc_140336740
 * 000000014033660C: mov     eax, r14d
 * 000000014033660F: mov     r12d, 2
 * 0000000140336615: sub     eax, r11d
 * 0000000140336618: mov     ebx, 0FFFh
 * 000000014033661D: add     r11d, eax
 * 0000000140336620: mov     r9d, eax
 * 0000000140336623: mov     [rbp+20F0h+var_205C], r11d
 * 000000014033662A: mov     r11, 0AAAAAAAAAAAAAAABh
 * 0000000140336634: lea     r14d, [r12+0Ah]
 * 0000000140336639: mov     ecx, [r8]
 * 000000014033663C: cmp     ecx, r14d
 * 000000014033663F: jg      short loc_140336682
 * 0000000140336641: jz      short loc_14033669B
 * 0000000140336643: sub     ecx, 1
 * 0000000140336646: jz      short loc_14033669B
 * 0000000140336648: sub     ecx, 6
 * 000000014033664B: jz      short loc_140336670
 * 000000014033664D: sub     ecx, 1
 * 0000000140336650: jz      short loc_140336666
 * 0000000140336652: cmp     ecx, r12d
 * 0000000140336655: jnz     short loc_1403366D3
 * 0000000140336657: mov     eax, [r8+1Ch]
 * 000000014033665B: add     eax, 3
 * 000000014033665E: shl     eax, 4
 * 0000000140336661: jmp     loc_14033670B
 * 0000000140336666: movzx   eax, word ptr [r8+20h]
 * 000000014033666B: jmp     loc_140336705
 * 0000000140336670: mov     eax, [r8+18h]
 * 0000000140336674: add     eax, r12d
 * 0000000140336677: lea     eax, [rax+rax*2]
 * 000000014033667A: shl     eax, 3
 * 000000014033667D: jmp     loc_14033670B
 * 0000000140336682: cmp     ecx, 1Ch
 * 0000000140336685: jz      short loc_140336700
 * 0000000140336687: cmp     ecx, 1Eh
 * 000000014033668A: jz      short loc_1403366DA
 * 000000014033668C: cmp     ecx, 20h ; ' '
 * 000000014033668F: jle     short loc_1403366D3
 * 0000000140336691: cmp     ecx, 22h ; '"'
 * 0000000140336694: jle     short loc_1403366B2
 * 0000000140336696: cmp     ecx, 2Bh ; '+'
 * 0000000140336699: jnz     short loc_1403366D3
 * 000000014033669B: mov     ecx, [r8+10h]
 * 000000014033669F: mov     rax, r11
 * 00000001403366A2: mul     rcx
 * 00000001403366A5: shr     rdx, 3
 * 00000001403366A9: lea     eax, ds:30h[rdx*4]
 * 00000001403366B0: jmp     short loc_14033670B
 * 00000001403366B2: mov     ecx, [r8+20h]
 * 00000001403366B6: mov     edx, [r8+28h]
 * 00000001403366BA: and     rcx, rbx
 * 00000001403366BD: add     rdx, rbx
 * 00000001403366C0: add     rdx, rcx
 * 00000001403366C3: shr     rdx, 0Ch
 * 00000001403366C7: lea     eax, [rdx+rdx*4]
 * 00000001403366CA: lea     eax, ds:30h[rax*4]
 * 00000001403366D1: jmp     short loc_14033670B
 * 00000001403366D3: mov     eax, 30h ; '0'
 * 00000001403366D8: jmp     short loc_14033670B
 * 00000001403366DA: mov     ecx, [r8+24h]
 * 00000001403366DE: mov     rax, r11
 * 00000001403366E1: dec     ecx
 * 00000001403366E3: mul     rcx
 * 00000001403366E6: movzx   eax, word ptr [r8+28h]
 * 00000001403366EB: shr     rdx, 3
 * 00000001403366EF: add     edx, 7
 * 00000001403366F2: and     edx, 0FFFFFFF8h
 * 00000001403366F5: add     eax, r12d
 * 00000001403366F8: lea     eax, [rax+rax*2]
 * 00000001403366FB: lea     eax, [rdx+rax*8]
 * 00000001403366FE: jmp     short loc_14033670B
 * 0000000140336700: movzx   eax, word ptr [r8+28h]
 * 0000000140336705: add     eax, 37h ; '7'
 * 0000000140336708: and     eax, 0FFFFFFF8h
 * 000000014033670B: add     r8, rax
 * 000000014033670E: mov     eax, 1
 * 0000000140336713: sub     r9, rax
 * 0000000140336716: jnz     loc_140336639
 * 000000014033671C: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140336720: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140336727: mov     r11d, [rbp+20F0h+var_205C]
 * 000000014033672E: mov     rbx, [rbp+20F0h+var_20F0]
 * 0000000140336732: mov     r14d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140336736: mov     r15, [rbp+20F0h+var_20D8]
 * 000000014033673A: mov     r12d, [rbp+20F0h+var_20E8]
 * 000000014033673E: jmp     short loc_140336745
 * 0000000140336740: mov     eax, 1
 * 0000000140336745: mov     edx, r8d
 * 0000000140336748: mov     dword ptr [rbp+20F0h+var_1F20], eax
 * 000000014033674E: sub     edx, ebx
 * 0000000140336750: mov     dword ptr [rbp+20F0h+var_1F20+4], r11d
 * 0000000140336757: mov     [rbp+20F0h+var_1F18], edx
 * 000000014033675D: mov     r10d, eax
 * 0000000140336760: movsxd  rcx, dword ptr [r8]
 * 0000000140336763: mov     r9d, r11d
 * 0000000140336766: cmp     ecx, 2Bh ; '+'
 * 0000000140336769: ja      short loc_14033678B
 * 000000014033676B: mov     r11, 80000001002h
 * 0000000140336775: bt      r11, rcx
 * 0000000140336779: jnb     short loc_14033678B
 * 000000014033677B: mov     rax, [rbp+20F0h+var_20B0]
 * 000000014033677F: cmp     [r8+8], rax
 * 0000000140336783: jnz     short loc_14033678B
 * 0000000140336785: cmp     [r8+10h], r12d
 * 0000000140336789: jz      short loc_1403367B6
 * 000000014033678B: lea     eax, [rcx-21h]
 * 000000014033678E: mov     ecx, 1
 * 0000000140336793: cmp     eax, ecx
 * 0000000140336795: ja      short loc_14033679D
 * 0000000140336797: cmp     [r8+20h], r15
 * 000000014033679B: jz      short loc_1403367B6
 * 000000014033679D: add     r14d, ecx
 * 00000001403367A0: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 00000001403367A4: cmp     r14d, [rsi+7F4h]
 * 00000001403367AB: jb      loc_1403365CC
 * 00000001403367B1: xor     eax, eax
 * 00000001403367B3: mov     r8, rax
 * 00000001403367B6: mov     rbx, [rbp+20F0h+var_2000]
 * 00000001403367BD: mov     [rbp+20F0h+var_1F98], r8
 * 00000001403367C4: test    r8, r8
 * 00000001403367C7: jz      short loc_1403367D3
 * 00000001403367C9: mov     ecx, 0C000010Eh
 * 00000001403367CE: jmp     loc_14033831B
 * 00000001403367D3: mov     rax, [rsi+2A0h]
 * 00000001403367DA: mov     rcx, rbx
 * 00000001403367DD: call    KeGuardDispatchICall
 * 00000001403367E2: test    dword ptr [rsi+970h], 40000000h
 * 00000001403367EC: mov     r14d, eax
 * 00000001403367EF: mov     [rbp+20F0h+var_2090], eax
 * 00000001403367F2: mov     eax, [rbp+20F0h+var_204C]
 * 00000001403367F8: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 00000001403367FB: jz      short loc_140336822
 * 00000001403367FD: mov     rdx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336804: lea     rcx, [rbp+20F0h+var_1FE0]
 * 000000014033680B: mov     r8d, 9
 * 0000000140336811: call    sub_14098FFA4
 * 0000000140336816: mov     r13, [rbp+20F0h+var_1FE0]
 * 000000014033681D: jmp     loc_140338319
 * 0000000140336822: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336829: lea     r9, [rbp+20F0h+var_204C]
 * 0000000140336830: xor     eax, eax
 * 0000000140336832: xor     r8d, r8d
 * 0000000140336835: mov     [rbp+20F0h+var_1C20], rax
 * 000000014033683C: mov     [rbp+20F0h+var_1DC8], eax
 * 0000000140336842: mov     rax, [rsi+1E8h]
 * 0000000140336849: lea     r12d, [r8+1]
 * 000000014033684D: mov     dl, r12b
 * 0000000140336850: call    KeGuardDispatchICall
 * 0000000140336855: mov     rdx, rax
 * 0000000140336858: lea     r8d, [r12+0Bh]
 * 000000014033685D: neg     rax
 * 0000000140336860: mov     [rbp+20F0h+var_1C38], rdx
 * 0000000140336867: lea     r9, [rbp+20F0h+var_204C]
 * 000000014033686E: mov     dl, r12b
 * 0000000140336871: sbb     ecx, ecx
 * 0000000140336873: and     ecx, [rbp+20F0h+var_204C]
 * 0000000140336879: mov     [rbp+20F0h+var_204C], ecx
 * 000000014033687F: mov     rax, [rsi+1E8h]
 * 0000000140336886: mov     [rbp+20F0h+var_1DD4], ecx
 * 000000014033688C: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336893: call    KeGuardDispatchICall
 * 0000000140336898: mov     rdx, rax
 * 000000014033689B: mov     [rbp+20F0h+var_2080], rax
 * 000000014033689F: neg     rax
 * 00000001403368A2: mov     [rbp+20F0h+var_1C30], rdx
 * 00000001403368A9: lea     r8d, [r12+9]
 * 00000001403368AE: mov     dl, r12b
 * 00000001403368B1: sbb     ecx, ecx
 * 00000001403368B3: lea     r9, [rbp+20F0h+var_204C]
 * 00000001403368BA: and     ecx, [rbp+20F0h+var_204C]
 * 00000001403368C0: mov     [rbp+20F0h+var_204C], ecx
 * 00000001403368C6: mov     rax, [rsi+1E8h]
 * 00000001403368CD: mov     [rbp+20F0h+var_2060], ecx
 * 00000001403368D3: mov     [rbp+20F0h+var_1DD0], ecx
 * 00000001403368D9: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 00000001403368E0: call    KeGuardDispatchICall
 * 00000001403368E5: mov     rdx, rax
 * 00000001403368E8: neg     rax
 * 00000001403368EB: mov     [rbp+20F0h+var_1C28], rdx
 * 00000001403368F2: sbb     ecx, ecx
 * 00000001403368F4: and     ecx, [rbp+20F0h+var_204C]
 * 00000001403368FA: mov     [rbp+20F0h+var_204C], ecx
 * 0000000140336900: mov     rax, [rsi+1F0h]
 * 0000000140336907: mov     [rbp+20F0h+var_1DCC], ecx
 * 000000014033690D: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336914: call    KeGuardDispatchICall
 * 0000000140336919: mov     rbx, rax
 * 000000014033691C: test    rax, rax
 * 000000014033691F: jnz     short loc_140336932
 * 0000000140336921: mov     ecx, 0C000007Bh
 * 0000000140336926: mov     rbx, [rbp+20F0h+var_2000]
 * 000000014033692D: jmp     loc_14033831F
 * 0000000140336932: mov     rax, [rsi+490h]
 * 0000000140336939: lea     rdx, [rbp+20F0h+var_1CB0]
 * 0000000140336940: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336947: call    KeGuardDispatchICall
 * 000000014033694C: mov     r15d, [rsi+7CCh]
 * 0000000140336953: mov     r8d, [rsi+904h]
 * 000000014033695A: mov     [rbp+20F0h+var_1C18], rax
 * 0000000140336961: mov     eax, [rbp+20F0h+var_1CB0]
 * 0000000140336967: mov     [rbp+20F0h+var_1DC4], eax
 * 000000014033696D: mov     rax, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336974: mov     [rbp+20F0h+var_1C40], rax
 * 000000014033697B: mov     eax, [rbx+54h]
 * 000000014033697E: mov     [rbp+20F0h+var_1DD8], eax
 * 0000000140336984: mov     eax, r14d
 * 0000000140336987: neg     eax
 * 0000000140336989: lea     eax, [r15+120h]
 * 0000000140336990: sbb     r9d, r9d
 * 0000000140336993: and     r9d, 0Bh
 * 0000000140336997: mov     [rbp+20F0h+var_20E8], r9d
 * 000000014033699B: cmp     eax, [rsi+9FCh]
 * 00000001403369A1: jbe     loc_140336AAD
 * 00000001403369A7: mov     edx, eax
 * 00000001403369A9: mov     rcx, rsi
 * 00000001403369AC: call    sub_1403495B4
 * 00000001403369B1: mov     r14, rax
 * 00000001403369B4: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403369B8: xor     eax, eax
 * 00000001403369BA: test    r14, r14
 * 00000001403369BD: jz      loc_140336A9C
 * 00000001403369C3: mov     ecx, [rsi+970h]
 * 00000001403369C9: test    cl, 4
 * 00000001403369CC: jnz     loc_140336A8E
 * 00000001403369D2: mov     eax, [rsi+7CCh]
 * 00000001403369D8: and     ecx, 20000000h
 * 00000001403369DE: mov     r9, [rsi+7B0h]
 * 00000001403369E5: neg     ecx
 * 00000001403369E7: mov     rcx, rsi
 * 00000001403369EA: sbb     r8d, r8d
 * 00000001403369ED: and     r8d, [rsi+904h]
 * 00000001403369F4: cmp     eax, 8
 * 00000001403369F7: jb      short loc_140336A1A
 * 00000001403369F9: mov     edx, eax
 * 00000001403369FB: shr     rdx, 3
 * 00000001403369FF: xor     r12d, r12d
 * 0000000140336A02: lea     r10d, [r12+1]
 * 0000000140336A07: mov     [rcx], r12
 * 0000000140336A0A: add     eax, 0FFFFFFF8h
 * 0000000140336A0D: add     rcx, 8
 * 0000000140336A11: sub     rdx, r10
 * 0000000140336A14: jnz     short loc_140336A07
 * 0000000140336A16: lea     r12d, [rdx+1]
 * 0000000140336A1A: xor     edx, edx
 * 0000000140336A1C: test    eax, eax
 * 0000000140336A1E: jz      short loc_140336A30
 * 0000000140336A20: mov     r11d, 0FFFFFFFFh
 * 0000000140336A26: mov     [rcx], dl
 * 0000000140336A28: add     rcx, r12
 * 0000000140336A2B: add     eax, r11d
 * 0000000140336A2E: jnz     short loc_140336A26
 * 0000000140336A30: mov     ebx, [r14+904h]
 * 0000000140336A37: mov     [r14+904h], r8d
 * 0000000140336A3E: cmp     r8d, 3
 * 0000000140336A42: jz      short loc_140336A78
 * 0000000140336A44: test    dword ptr [r14+970h], 10000000h
 * 0000000140336A4F: mov     rcx, rdx
 * 0000000140336A52: cmovz   ecx, r8d
 * 0000000140336A56: test    ecx, ecx
 * 0000000140336A58: jz      short loc_140336A6F
 * 0000000140336A5A: mov     rax, [r14+220h]
 * 0000000140336A61: lea     rcx, [r9-8]
 * 0000000140336A65: mov     rdx, [rcx]
 * 0000000140336A68: call    KeGuardDispatchICall
 * 0000000140336A6D: jmp     short loc_140336A87
 * 0000000140336A6F: mov     rax, [r14+0F8h]
 * 0000000140336A76: jmp     short loc_140336A7F
 * 0000000140336A78: mov     rax, [r14+360h]
 * 0000000140336A7F: mov     rcx, r9
 * 0000000140336A82: call    KeGuardDispatchICall
 * 0000000140336A87: mov     [r14+904h], ebx
 * 0000000140336A8E: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140336A96: mov     r9d, [rbp+20F0h+var_20E8]
 * 0000000140336A9A: jmp     short loc_140336ABA
 * 0000000140336A9C: mov     [rbp+20F0h+var_1FF0], rax
 * 0000000140336AA3: mov     ecx, 0C000009Ah
 * 0000000140336AA8: jmp     loc_140336926
 * 0000000140336AAD: mov     r14, rsi
 * 0000000140336AB0: mov     [rbp+20F0h+var_20F0], rsi
 * 0000000140336AB4: mov     [rsi+7CCh], eax
 * 0000000140336ABA: mov     eax, 6
 * 0000000140336ABF: lea     r12, [r14+r15]
 * 0000000140336AC3: add     [r14+7F4h], eax
 * 0000000140336ACA: lea     rdi, [rbp+20F0h+var_1C40]
 * 0000000140336AD1: xor     r10d, r10d
 * 0000000140336AD4: mov     [rbp+20F0h+var_1DB0], r12
 * 0000000140336ADB: mov     [rbp+20F0h+var_1F98], r12
 * 0000000140336AE2: lea     rsi, [rbp+20F0h+var_1DD8]
 * 0000000140336AE9: mov     [rbp+20F0h+var_20D8], rdi
 * 0000000140336AED: mov     [rbp+20F0h+var_20A0], rax
 * 0000000140336AF1: mov     r13d, [rsi]
 * 0000000140336AF4: mov     ecx, 30h ; '0'
 * 0000000140336AF9: mov     r15, [rdi]
 * 0000000140336AFC: mov     rdx, rax
 * 0000000140336AFF: mov     [rbp+20F0h+var_205C], r13d
 * 0000000140336B06: mov     rax, r12
 * 0000000140336B09: lea     r8d, [rcx-2Fh]
 * 0000000140336B0D: mov     [rax], r10
 * 0000000140336B10: add     ecx, 0FFFFFFF8h
 * 0000000140336B13: add     rax, 8
 * 0000000140336B17: sub     rdx, r8
 * 0000000140336B1A: jnz     short loc_140336B0D
 * 0000000140336B1C: mov     rdx, r8
 * 0000000140336B1F: test    ecx, ecx
 * 0000000140336B21: jz      short loc_140336B34
 * 0000000140336B23: mov     r8d, 0FFFFFFFFh
 * 0000000140336B29: mov     [rax], r10b
 * 0000000140336B2C: add     rax, rdx
 * 0000000140336B2F: add     ecx, r8d
 * 0000000140336B32: jnz     short loc_140336B29
 * 0000000140336B34: mov     [r12], r9d
 * 0000000140336B38: lea     rcx, [r15+r13]
 * 0000000140336B3C: mov     [r12+8], r15
 * 0000000140336B41: mov     r10, r15
 * 0000000140336B44: mov     [r12+10h], r13d
 * 0000000140336B49: mov     rax, r15
 * 0000000140336B4C: add     [r14+810h], r13d
 * 0000000140336B53: mov     ebx, [r14+7FCh]
 * 0000000140336B5A: mov     r11, [r14+800h]
 * 0000000140336B61: cmp     r15, rcx
 * 0000000140336B64: jnb     short loc_140336B77
 * 0000000140336B66: mov     r8d, 40h ; '@'
 * 0000000140336B6C: prefetchnta byte ptr [rax]
 * 0000000140336B6F: add     rax, r8
 * 0000000140336B72: cmp     rax, rcx
 * 0000000140336B75: jb      short loc_140336B6C
 * 0000000140336B77: mov     r9d, r13d
 * 0000000140336B7A: mov     r8, r11
 * 0000000140336B7D: shr     r9d, 7
 * 0000000140336B81: test    r9d, r9d
 * 0000000140336B84: jz      short loc_140336BF6
 * 0000000140336B86: mov     rdi, 7010008004002001h
 * 0000000140336B90: mov     r13d, 0FFFFFFFFh
 * 0000000140336B96: mov     eax, 8
 * 0000000140336B9B: xor     r8, [r10]
 * 0000000140336B9E: mov     ecx, ebx
 * 0000000140336BA0: rol     r8, cl
 * 0000000140336BA3: xor     r8, [r10+8]
 * 0000000140336BA7: add     r10, 10h
 * 0000000140336BAB: rol     r8, cl
 * 0000000140336BAE: sub     rax, rdx
 * 0000000140336BB1: jnz     short loc_140336B9B
 * 0000000140336BB3: mov     rcx, r10
 * 0000000140336BB6: sub     rcx, r15
 * 0000000140336BB9: xor     rcx, r11
 * 0000000140336BBC: mov     rax, rcx
 * 0000000140336BBF: rol     rax, 11h
 * 0000000140336BC3: xor     rcx, rax
 * 0000000140336BC6: mov     rax, rdi
 * 0000000140336BC9: mul     rcx
 * 0000000140336BCC: xor     eax, edx
 * 0000000140336BCE: mov     [rbp+20F0h+var_1688], rdx
 * 0000000140336BD5: xor     ebx, eax
 * 0000000140336BD7: mov     edx, 1
 * 0000000140336BDC: and     ebx, 3Fh
 * 0000000140336BDF: cmovz   ebx, edx
 * 0000000140336BE2: add     r9d, r13d
 * 0000000140336BE5: jnz     short loc_140336B96
 * 0000000140336BE7: mov     r14, [rbp+20F0h+var_20F0]
 * 0000000140336BEB: mov     r13d, [rbp+20F0h+var_205C]
 * 0000000140336BF2: mov     rdi, [rbp+20F0h+var_20D8]
 * 0000000140336BF6: mov     edx, r13d
 * 0000000140336BF9: mov     r15d, 1
 * 0000000140336BFF: and     edx, 7Fh
 * 0000000140336C02: cmp     edx, 8
 * 0000000140336C05: jb      short loc_140336C21
 * 0000000140336C07: mov     eax, edx
 * 0000000140336C09: shr     rax, 3
 * 0000000140336C0D: xor     r8, [r10]
 * 0000000140336C10: mov     ecx, ebx
 * 0000000140336C12: rol     r8, cl
 * 0000000140336C15: add     r10, 8
 * 0000000140336C19: add     edx, 0FFFFFFF8h
 * 0000000140336C1C: sub     rax, r15
 * 0000000140336C1F: jnz     short loc_140336C0D
 * 0000000140336C21: test    edx, edx
 * 0000000140336C23: jz      short loc_140336C43
 * 0000000140336C25: mov     r14d, 0FFFFFFFFh
 * 0000000140336C2B: movzx   eax, byte ptr [r10]
 * 0000000140336C2F: mov     ecx, ebx
 * 0000000140336C31: xor     r8, rax
 * 0000000140336C34: add     r10, r15
 * 0000000140336C37: rol     r8, cl
 * 0000000140336C3A: add     edx, r14d
 * 0000000140336C3D: jnz     short loc_140336C2B
 * 0000000140336C3F: mov     r14, [rbp+20F0h+var_20F0]
 * 0000000140336C43: mov     rax, r8
 * 0000000140336C46: shr     rax, 1Fh
 * 0000000140336C4A: xor     r10d, r10d
 * 0000000140336C4D: jmp     short loc_140336C56
 * 0000000140336C4F: xor     r8d, eax
 * 0000000140336C52: shr     rax, 1Fh
 * 0000000140336C56: test    rax, rax
 * 0000000140336C59: jnz     short loc_140336C4F
 * 0000000140336C5B: mov     r9d, [rbp+20F0h+var_20E8]
 * 0000000140336C5F: btr     r8d, 1Fh
 * 0000000140336C64: mov     [r12+14h], r8d
 * 0000000140336C69: add     rdi, 8
 * 0000000140336C6D: add     [r14+810h], r13d
 * 0000000140336C74: add     rsi, 4
 * 0000000140336C78: mov     r12, [rbp+20F0h+var_1DB0]
 * 0000000140336C7F: mov     eax, 6
 * 0000000140336C84: add     r12, 30h ; '0'
 * 0000000140336C88: mov     [rbp+20F0h+var_20D8], rdi
 * 0000000140336C8C: sub     [rbp+20F0h+var_20A0], r15
 * 0000000140336C90: mov     [rbp+20F0h+var_1DB0], r12
 * 0000000140336C97: jnz     loc_140336AF1
 * 0000000140336C9D: mov     rcx, [rbp+20F0h+var_1F98]
 * 0000000140336CA4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140336CAB: mov     rax, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336CB2: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140336CB6: mov     edx, [rbp+20F0h+var_2090]
 * 0000000140336CB9: mov     dword ptr [rcx], 2Ch ; ','
 * 0000000140336CBF: mov     [rcx+18h], rax
 * 0000000140336CC3: test    dword ptr [r14+970h], 10200000h
 * 0000000140336CCE: jnz     short loc_140336CE5
 * 0000000140336CD0: test    edx, edx
 * 0000000140336CD2: jnz     short loc_140336CE9
 * 0000000140336CD4: test    dword ptr [r14+974h], 8000h
 * 0000000140336CDF: jz      short loc_140336CF1
 * 0000000140336CE1: or      [rcx+20h], r15d
 * 0000000140336CE5: test    edx, edx
 * 0000000140336CE7: jz      short loc_140336CF1
 * 0000000140336CE9: mov     eax, 2
 * 0000000140336CEE: or      [rcx+20h], eax
 * 0000000140336CF1: mov     r9, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336CF8: lea     rax, [rbp+20F0h+var_1EA8]
 * 0000000140336CFF: mov     r8d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140336D03: lea     rcx, [rbp+20F0h+var_1FF0]
 * 0000000140336D0A: mov     [rsp+10F0h+var_10B8], rax
 * 0000000140336D0F: mov     r13, r14
 * 0000000140336D12: lea     rax, [rbp+20F0h+var_1F74]
 * 0000000140336D19: mov     [rbp+20F0h+var_1FF0], r14
 * 0000000140336D20: mov     [rsp+10F0h+var_10C0], rax
 * 0000000140336D25: mov     dword ptr [rsp+10F0h+var_10C8], 9
 * 0000000140336D2D: mov     dword ptr [rsp+10F0h+BugCheckParameter4], edx
 * 0000000140336D31: mov     rdx, [rbp+20F0h+var_20B0]
 * 0000000140336D35: mov     [rbp+20F0h+var_1FE0], r14
 * 0000000140336D3C: call    sub_140348B4C
 * 0000000140336D41: mov     ecx, eax
 * 0000000140336D43: test    eax, eax
 * 0000000140336D45: jns     short loc_140336D53
 * 0000000140336D47: mov     rbx, [rbp+20F0h+var_2000]
 * 0000000140336D4E: jmp     loc_14033831B
 * 0000000140336D53: mov     r13, [rbp+20F0h+var_1FF0]
 * 0000000140336D5A: mov     rcx, [rbp+20F0h+var_1F98]
 * 0000000140336D61: mov     rax, r13
 * 0000000140336D64: mov     r9d, [rbp+20F0h+var_1EA8]
 * 0000000140336D6B: sub     rax, r14
 * 0000000140336D6E: mov     ebx, [rbp+20F0h+var_1F74]
 * 0000000140336D74: add     rcx, rax
 * 0000000140336D77: sub     r9d, [rbp+20F0h+var_1F74]
 * 0000000140336D7E: add     rbx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336D85: mov     [rbp+20F0h+var_1F98], rcx
 * 0000000140336D8C: xor     r8d, r8d
 * 0000000140336D8F: lea     r12, [rcx+0C0h]
 * 0000000140336D96: mov     [rbp+20F0h+var_1FE0], r13
 * 0000000140336D9D: mov     ecx, 30h ; '0'
 * 0000000140336DA2: mov     rax, r12
 * 0000000140336DA5: lea     edx, [rcx-2Ah]
 * 0000000140336DA8: mov     [rax], r8
 * 0000000140336DAB: add     ecx, 0FFFFFFF8h
 * 0000000140336DAE: add     rax, 8
 * 0000000140336DB2: sub     rdx, r15
 * 0000000140336DB5: jnz     short loc_140336DA8
 * 0000000140336DB7: mov     edx, 0FFFFFFFFh
 * 0000000140336DBC: test    ecx, ecx
 * 0000000140336DBE: jz      short loc_140336DCA
 * 0000000140336DC0: mov     [rax], r8b
 * 0000000140336DC3: add     rax, r15
 * 0000000140336DC6: add     ecx, edx
 * 0000000140336DC8: jnz     short loc_140336DC0
 * 0000000140336DCA: mov     eax, [rbp+20F0h+var_20E8]
 * 0000000140336DCD: mov     r10, rbx
 * 0000000140336DD0: mov     [r12], eax
 * 0000000140336DD4: mov     rax, rbx
 * 0000000140336DD7: mov     [r12+8], rbx
 * 0000000140336DDC: mov     [r12+10h], r9d
 * 0000000140336DE1: add     [r13+810h], r9d
 * 0000000140336DE8: mov     r14d, [r13+7FCh]
 * 0000000140336DEF: mov     r15, [r13+800h]
 * 0000000140336DF6: mov     ecx, r9d
 * 0000000140336DF9: add     rcx, rbx
 * 0000000140336DFC: cmp     rbx, rcx
 * 0000000140336DFF: jnb     short loc_140336E12
 * 0000000140336E01: mov     r8d, 40h ; '@'
 * 0000000140336E07: prefetchnta byte ptr [rax]
 * 0000000140336E0A: add     rax, r8
 * 0000000140336E0D: cmp     rax, rcx
 * 0000000140336E10: jb      short loc_140336E07
 * 0000000140336E12: mov     r11d, r9d
 * 0000000140336E15: mov     r8, r15
 * 0000000140336E18: shr     r11d, 7
 * 0000000140336E1C: test    r11d, r11d
 * 0000000140336E1F: jz      short loc_140336E97
 * 0000000140336E21: mov     rdi, 7010008004002001h
 * 0000000140336E2B: mov     edx, 8
 * 0000000140336E30: lea     esi, [rdx-7]
 * 0000000140336E33: mov     rax, [r10]
 * 0000000140336E36: mov     ecx, r14d
 * 0000000140336E39: xor     rax, r8
 * 0000000140336E3C: mov     r8, [r10+8]
 * 0000000140336E40: rol     rax, cl
 * 0000000140336E43: add     r10, 10h
 * 0000000140336E47: xor     r8, rax
 * 0000000140336E4A: rol     r8, cl
 * 0000000140336E4D: sub     rdx, rsi
 * 0000000140336E50: jnz     short loc_140336E33
 * 0000000140336E52: mov     rcx, r10
 * 0000000140336E55: sub     rcx, rbx
 * 0000000140336E58: xor     rcx, r15
 * 0000000140336E5B: mov     rax, rcx
 * 0000000140336E5E: rol     rax, 11h
 * 0000000140336E62: xor     rcx, rax
 * 0000000140336E65: mov     rax, rdi
 * 0000000140336E68: mul     rcx
 * 0000000140336E6B: xor     eax, edx
 * 0000000140336E6D: mov     [rbp+20F0h+var_1680], rdx
 * 0000000140336E74: xor     r14d, eax
 * 0000000140336E77: mov     edx, 0FFFFFFFFh
 * 0000000140336E7C: and     r14d, 3Fh
 * 0000000140336E80: mov     rax, rsi
 * 0000000140336E83: cmovz   r14d, eax
 * 0000000140336E87: add     r11d, edx
 * 0000000140336E8A: jnz     short loc_140336E2B
 * 0000000140336E8C: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140336E90: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140336E97: and     r9d, 7Fh
 * 0000000140336E9B: mov     r11d, 1
 * 0000000140336EA1: cmp     r9d, 8
 * 0000000140336EA5: jb      short loc_140336EC9
 * 0000000140336EA7: mov     edx, r9d
 * 0000000140336EAA: shr     rdx, 3
 * 0000000140336EAE: xor     r8, [r10]
 * 0000000140336EB1: mov     ecx, r14d
 * 0000000140336EB4: rol     r8, cl
 * 0000000140336EB7: add     r10, 8
 * 0000000140336EBB: add     r9d, 0FFFFFFF8h
 * 0000000140336EBF: sub     rdx, r11
 * 0000000140336EC2: jnz     short loc_140336EAE
 * 0000000140336EC4: mov     edx, 0FFFFFFFFh
 * 0000000140336EC9: test    r9d, r9d
 * 0000000140336ECC: jz      short loc_140336EE3
 * 0000000140336ECE: movzx   eax, byte ptr [r10]
 * 0000000140336ED2: mov     ecx, r14d
 * 0000000140336ED5: xor     r8, rax
 * 0000000140336ED8: add     r10, r11
 * 0000000140336EDB: rol     r8, cl
 * 0000000140336EDE: add     r9d, edx
 * 0000000140336EE1: jnz     short loc_140336ECE
 * 0000000140336EE3: mov     rax, r8
 * 0000000140336EE6: shr     rax, 1Fh
 * 0000000140336EEA: xor     ecx, ecx
 * 0000000140336EEC: jmp     short loc_140336EF5
 * 0000000140336EEE: xor     r8d, eax
 * 0000000140336EF1: shr     rax, 1Fh
 * 0000000140336EF5: test    rax, rax
 * 0000000140336EF8: jnz     short loc_140336EEE
 * 0000000140336EFA: btr     r8d, 1Fh
 * 0000000140336EFF: mov     [r12+14h], r8d
 * 0000000140336F04: mov     rdx, [rbp+20F0h+var_1F98]
 * 0000000140336F0B: mov     r8d, [rbp+20F0h+var_2090]
 * 0000000140336F0F: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 0000000140336F19: cmp     [rdx+100h], eax
 * 0000000140336F1F: jz      short loc_140336F38
 * 0000000140336F21: mov     eax, [rdx+108h]
 * 0000000140336F27: test    r8d, r8d
 * 0000000140336F2A: setnz   cl
 * 0000000140336F2D: and     eax, 0FFFFFFFEh
 * 0000000140336F30: or      ecx, eax
 * 0000000140336F32: mov     [rdx+108h], ecx
 * 0000000140336F38: mov     rcx, [rbp+20F0h+var_1F98]
 * 0000000140336F3F: mov     eax, r8d
 * 0000000140336F42: add     rcx, 60h ; '`'
 * 0000000140336F46: mov     [rbp+20F0h+var_1FE0], r13
 * 0000000140336F4D: neg     eax
 * 0000000140336F4F: mov     [rbp+20F0h+var_1EE0], rcx
 * 0000000140336F56: sbb     r12d, r12d
 * 0000000140336F59: neg     r12d
 * 0000000140336F5C: add     r12d, 0Dh
 * 0000000140336F60: test    rcx, rcx
 * 0000000140336F63: jnz     loc_14033721A
 * 0000000140336F69: mov     r15d, [r13+7CCh]
 * 0000000140336F70: mov     r8d, [r13+904h]
 * 0000000140336F77: lea     eax, [r15+30h]
 * 0000000140336F7B: cmp     eax, [r13+9FCh]
 * 0000000140336F82: jbe     loc_14033707C
 * 0000000140336F88: mov     edx, eax
 * 0000000140336F8A: mov     rcx, r13
 * 0000000140336F8D: call    sub_1403495B4
 * 0000000140336F92: mov     rbx, rax
 * 0000000140336F95: xor     eax, eax
 * 0000000140336F97: test    rbx, rbx
 * 0000000140336F9A: jz      loc_14033706B
 * 0000000140336FA0: mov     ecx, [r13+970h]
 * 0000000140336FA7: test    cl, 4
 * 0000000140336FAA: jnz     loc_140337062
 * 0000000140336FB0: mov     eax, [r13+7CCh]
 * 0000000140336FB7: and     ecx, 20000000h
 * 0000000140336FBD: mov     r8, [r13+7B0h]
 * 0000000140336FC4: neg     ecx
 * 0000000140336FC6: mov     r10d, 1
 * 0000000140336FCC: sbb     edx, edx
 * 0000000140336FCE: and     edx, [r13+904h]
 * 0000000140336FD5: cmp     eax, 8
 * 0000000140336FD8: jb      short loc_140336FF3
 * 0000000140336FDA: mov     ecx, eax
 * 0000000140336FDC: shr     rcx, 3
 * 0000000140336FE0: xor     r9d, r9d
 * 0000000140336FE3: mov     [r13+0], r9
 * 0000000140336FE7: add     eax, 0FFFFFFF8h
 * 0000000140336FEA: add     r13, 8
 * 0000000140336FEE: sub     rcx, r10
 * 0000000140336FF1: jnz     short loc_140336FE3
 * 0000000140336FF3: xor     ecx, ecx
 * 0000000140336FF5: test    eax, eax
 * 0000000140336FF7: jz      short loc_14033700B
 * 0000000140336FF9: mov     r11d, 0FFFFFFFFh
 * 0000000140336FFF: mov     [r13+0], cl
 * 0000000140337003: add     r13, r10
 * 0000000140337006: add     eax, r11d
 * 0000000140337009: jnz     short loc_140336FFF
 * 000000014033700B: mov     r14d, [rbx+904h]
 * 0000000140337012: mov     [rbx+904h], edx
 * 0000000140337018: cmp     edx, 3
 * 000000014033701B: jz      short loc_14033704C
 * 000000014033701D: test    dword ptr [rbx+970h], 10000000h
 * 0000000140337027: cmovz   ecx, edx
 * 000000014033702A: test    ecx, ecx
 * 000000014033702C: jz      short loc_140337043
 * 000000014033702E: mov     rax, [rbx+220h]
 * 0000000140337035: lea     rcx, [r8-8]
 * 0000000140337039: mov     rdx, [rcx]
 * 000000014033703C: call    KeGuardDispatchICall
 * 0000000140337041: jmp     short loc_14033705B
 * 0000000140337043: mov     rax, [rbx+0F8h]
 * 000000014033704A: jmp     short loc_140337053
 * 000000014033704C: mov     rax, [rbx+360h]
 * 0000000140337053: mov     rcx, r8
 * 0000000140337056: call    KeGuardDispatchICall
 * 000000014033705B: mov     [rbx+904h], r14d
 * 0000000140337062: and     dword ptr [rbx+970h], 0FFFFFFFBh
 * 0000000140337069: jmp     short loc_140337086
 * 000000014033706B: mov     [rbp+20F0h+var_1FF0], rax
 * 0000000140337072: mov     ecx, 0C000009Ah
 * 0000000140337077: jmp     loc_140336D47
 * 000000014033707C: mov     rbx, r13
 * 000000014033707F: mov     [r13+7CCh], eax
 * 0000000140337086: add     r15, rbx
 * 0000000140337089: mov     r9d, 1
 * 000000014033708F: add     [rbx+7F4h], r9d
 * 0000000140337096: mov     rax, r15
 * 0000000140337099: mov     [rbp+20F0h+var_1CA8], r15
 * 00000001403370A0: xor     r8d, r8d
 * 00000001403370A3: lea     ecx, [r9+2Fh]
 * 00000001403370A7: lea     edx, [rcx-2Ah]
 * 00000001403370AA: mov     [rax], r8
 * 00000001403370AD: add     ecx, 0FFFFFFF8h
 * 00000001403370B0: add     rax, 8
 * 00000001403370B4: sub     rdx, r9
 * 00000001403370B7: jnz     short loc_1403370AA
 * 00000001403370B9: test    ecx, ecx
 * 00000001403370BB: jz      short loc_1403370CC
 * 00000001403370BD: mov     edx, 0FFFFFFFFh
 * 00000001403370C2: mov     [rax], r8b
 * 00000001403370C5: add     rax, r9
 * 00000001403370C8: add     ecx, edx
 * 00000001403370CA: jnz     short loc_1403370C2
 * 00000001403370CC: mov     r13, [rbp+20F0h+var_2080]
 * 00000001403370D0: mov     [r15], r12d
 * 00000001403370D3: mov     r9, r13
 * 00000001403370D6: mov     r12d, [rbp+20F0h+var_2060]
 * 00000001403370DD: mov     [r15+8], r13
 * 00000001403370E1: mov     [r15+10h], r12d
 * 00000001403370E5: add     [rbx+810h], r12d
 * 00000001403370EC: mov     r11d, [rbx+7FCh]
 * 00000001403370F3: lea     rcx, [r12+r13]
 * 00000001403370F7: mov     r14, [rbx+800h]
 * 00000001403370FE: cmp     r13, rcx
 * 0000000140337101: jnb     short loc_140337116
 * 0000000140337103: mov     rax, r13
 * 0000000140337106: mov     edx, 40h ; '@'
 * 000000014033710B: prefetchnta byte ptr [rax]
 * 000000014033710E: add     rax, rdx
 * 0000000140337111: cmp     rax, rcx
 * 0000000140337114: jb      short loc_14033710B
 * 0000000140337116: mov     r10d, r12d
 * 0000000140337119: mov     r8, r14
 * 000000014033711C: shr     r10d, 7
 * 0000000140337120: test    r10d, r10d
 * 0000000140337123: jz      short loc_14033719C
 * 0000000140337125: mov     esi, 1
 * 000000014033712A: mov     rdi, 7010008004002001h
 * 0000000140337134: mov     r12d, 0FFFFFFFFh
 * 000000014033713A: mov     eax, 8
 * 000000014033713F: xor     r8, [r9]
 * 0000000140337142: mov     ecx, r11d
 * 0000000140337145: rol     r8, cl
 * 0000000140337148: xor     r8, [r9+8]
 * 000000014033714C: add     r9, 10h
 * 0000000140337150: rol     r8, cl
 * 0000000140337153: sub     rax, rsi
 * 0000000140337156: jnz     short loc_14033713F
 * 0000000140337158: mov     rcx, r9
 * 000000014033715B: sub     rcx, r13
 * 000000014033715E: xor     rcx, r14
 * 0000000140337161: mov     rax, rcx
 * 0000000140337164: rol     rax, 11h
 * 0000000140337168: xor     rcx, rax
 * 000000014033716B: mov     rax, rdi
 * 000000014033716E: mul     rcx
 * 0000000140337171: xor     eax, edx
 * 0000000140337173: mov     [rbp+20F0h+var_1B10], rdx
 * 000000014033717A: xor     r11d, eax
 * 000000014033717D: and     r11d, 3Fh
 * 0000000140337181: cmovz   r11d, esi
 * 0000000140337185: add     r10d, r12d
 * 0000000140337188: jnz     short loc_14033713A
 * 000000014033718A: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033718E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140337195: mov     r12d, [rbp+20F0h+var_2060]
 * 000000014033719C: mov     edx, r12d
 * 000000014033719F: mov     r10d, 1
 * 00000001403371A5: and     edx, 7Fh
 * 00000001403371A8: cmp     edx, 8
 * 00000001403371AB: jb      short loc_1403371C8
 * 00000001403371AD: mov     eax, edx
 * 00000001403371AF: shr     rax, 3
 * 00000001403371B3: xor     r8, [r9]
 * 00000001403371B6: mov     ecx, r11d
 * 00000001403371B9: rol     r8, cl
 * 00000001403371BC: add     r9, 8
 * 00000001403371C0: add     edx, 0FFFFFFF8h
 * 00000001403371C3: sub     rax, r10
 * 00000001403371C6: jnz     short loc_1403371B3
 * 00000001403371C8: test    edx, edx
 * 00000001403371CA: jz      short loc_1403371E9
 * 00000001403371CC: mov     esi, 0FFFFFFFFh
 * 00000001403371D1: movzx   eax, byte ptr [r9]
 * 00000001403371D5: mov     ecx, r11d
 * 00000001403371D8: xor     r8, rax
 * 00000001403371DB: add     r9, r10
 * 00000001403371DE: rol     r8, cl
 * 00000001403371E1: add     edx, esi
 * 00000001403371E3: jnz     short loc_1403371D1
 * 00000001403371E5: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403371E9: mov     rax, r8
 * 00000001403371EC: jmp     short loc_1403371F1
 * 00000001403371EE: xor     r8d, eax
 * 00000001403371F1: shr     rax, 1Fh
 * 00000001403371F5: test    rax, rax
 * 00000001403371F8: jnz     short loc_1403371EE
 * 00000001403371FA: btr     r8d, 1Fh
 * 00000001403371FF: mov     [r15+14h], r8d
 * 0000000140337203: mov     rax, [rbp+20F0h+var_1CA8]
 * 000000014033720A: mov     [rbp+20F0h+var_1EE0], rax
 * 0000000140337211: add     [rbx+810h], r12d
 * 0000000140337218: jmp     short loc_14033722B
 * 000000014033721A: mov     rbx, r13
 * 000000014033721D: mov     [rcx], r12d
 * 0000000140337220: mov     r12d, [rbp+20F0h+var_2060]
 * 0000000140337227: mov     r13, [rbp+20F0h+var_2080]
 * 000000014033722B: test    dword ptr [rbx+970h], 40000000h
 * 0000000140337235: jz      short loc_140337255
 * 0000000140337237: test    r12d, r12d
 * 000000014033723A: jz      short loc_140337255
 * 000000014033723C: mov     r9, [rbp+20F0h+var_1EE0]
 * 0000000140337243: mov     r8d, r12d
 * 0000000140337246: add     r9, 1Ch
 * 000000014033724A: mov     rdx, r13
 * 000000014033724D: mov     rcx, rbx
 * 0000000140337250: call    sub_1401ADA3C
 * 0000000140337255: mov     rax, [rbp+20F0h+var_1EE0]
 * 000000014033725C: xor     ecx, ecx
 * 000000014033725E: mov     [rbp+20F0h+var_1FE0], rbx
 * 0000000140337265: mov     [rax+18h], ecx
 * 0000000140337268: lea     r12d, [rcx+1]
 * 000000014033726C: mov     rax, [rbp+20F0h+var_1EE0]
 * 0000000140337273: or      [rax+18h], r12d
 * 0000000140337277: xor     eax, eax
 * 0000000140337279: mov     r14, [rbp+20F0h+var_1F98]
 * 0000000140337280: cmp     [rbp+20F0h+var_2090], eax
 * 0000000140337283: mov     r15, [rbp+20F0h+BugCheckParameter2]
 * 000000014033728A: setnz   cl
 * 000000014033728D: mov     dword ptr [r14+90h], 23h ; '#'
 * 0000000140337298: mov     eax, [r14+0B8h]
 * 000000014033729F: and     eax, 0FFFFFFFEh
 * 00000001403372A2: or      ecx, eax
 * 00000001403372A4: mov     [r14+0B8h], ecx
 * 00000001403372AB: cmp     dword ptr [r14+0A0h], 94h
 * 00000001403372B6: jb      loc_14033733D
 * 00000001403372BC: mov     rax, [rbx+1F0h]
 * 00000001403372C3: mov     rcx, r15
 * 00000001403372C6: mov     r13, [r14+98h]
 * 00000001403372CD: call    KeGuardDispatchICall
 * 00000001403372D2: test    rax, rax
 * 00000001403372D5: jnz     short loc_1403372EB
 * 00000001403372D7: mov     [rbp+20F0h+var_1FF0], rax
 * 00000001403372DE: mov     ecx, 0C000009Ah
 * 00000001403372E3: mov     r13, rbx
 * 00000001403372E6: jmp     loc_140336926
 * 00000001403372EB: mov     ecx, [rax+50h]
 * 00000001403372EE: mov     eax, 2
 * 00000001403372F3: or      [r14+0B8h], eax
 * 00000001403372FA: add     rcx, r15
 * 00000001403372FD: mov     rax, [r13+70h]
 * 0000000140337301: cmp     rax, r15
 * 0000000140337304: jb      short loc_14033731D
 * 0000000140337306: cmp     rax, rcx
 * 0000000140337309: jnb     short loc_14033731D
 * 000000014033730B: mov     rax, [rax]
 * 000000014033730E: mov     [r14+0A8h], rax
 * 0000000140337315: or      dword ptr [r14+0B8h], 4
 * 000000014033731D: mov     rax, [r13+78h]
 * 0000000140337321: cmp     rax, r15
 * 0000000140337324: jb      short loc_14033733D
 * 0000000140337326: cmp     rax, rcx
 * 0000000140337329: jnb     short loc_14033733D
 * 000000014033732B: mov     rax, [rax]
 * 000000014033732E: mov     [r14+0B0h], rax
 * 0000000140337335: or      dword ptr [r14+0B8h], 8
 * 000000014033733D: test    dword ptr [rbx+970h], 400000h
 * 0000000140337347: mov     r13, rbx
 * 000000014033734A: mov     r14, [rbp+20F0h+BugCheckParameter2]
 * 0000000140337351: mov     [rbp+20F0h+var_2058], r14
 * 0000000140337358: mov     [rbp+20F0h+var_1FF0], rbx
 * 000000014033735F: mov     [rbp+20F0h+var_1FE0], rbx
 * 0000000140337366: jz      loc_140338306
 * 000000014033736C: mov     rax, [rbx+1F0h]
 * 0000000140337373: mov     rcx, r14
 * 0000000140337376: call    KeGuardDispatchICall
 * 000000014033737B: mov     [rbp+20F0h+var_20A0], rax
 * 000000014033737F: mov     r15, rax
 * 0000000140337382: test    rax, rax
 * 0000000140337385: jnz     short loc_140337391
 * 0000000140337387: mov     ecx, 0C000007Bh
 * 000000014033738C: jmp     loc_140336D47
 * 0000000140337391: movzx   r10d, word ptr [r15+6]
 * 0000000140337396: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001403373A0: mov     ecx, dword ptr [rbp+20F0h+var_20B8]
 * 00000001403373A3: mul     rcx
 * 00000001403373A6: xor     eax, eax
 * 00000001403373A8: mov     word ptr [rbp+20F0h+var_2060], r10w
 * 00000001403373B0: mov     r9, rdx
 * 00000001403373B3: shr     r9, 3
 * 00000001403373B7: mov     [rbp+20F0h+var_2068], r9
 * 00000001403373BE: test    r10w, r10w
 * 00000001403373C2: jnz     short loc_140337417
 * 00000001403373C4: test    dword ptr [rbx+970h], 200000h
 * 00000001403373CE: jz      loc_1403465AA
 * 00000001403373D4: cmp     [rbx+8D8h], eax
 * 00000001403373DA: jnz     short loc_140337387
 * 00000001403373DC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403373E6: add     rax, rbx
 * 00000001403373E9: mov     [rbx+8E0h], rax
 * 00000001403373F0: xor     eax, eax
 * 00000001403373F2: mov     [rbx+8E8h], rax
 * 00000001403373F9: mov     qword ptr [rbx+8F0h], 10Fh
 * 0000000140337404: mov     [rbx+8F8h], r14
 * 000000014033740B: mov     [rbx+8D8h], r12d
 * 0000000140337412: jmp     loc_140337387
 * 0000000140337417: mov     rdx, [rbp+20F0h+var_20B0]
 * 000000014033741B: movzx   r11d, word ptr [r15+14h]
 * 0000000140337420: mov     r12, rdx
 * 0000000140337423: mov     eax, r9d
 * 0000000140337426: add     r11, 18h
 * 000000014033742A: add     r11, r15
 * 000000014033742D: mov     [rbp+20F0h+var_20D8], r11
 * 0000000140337431: lea     r13, [rax+rax*2]
 * 0000000140337435: shl     r13, 2
 * 0000000140337439: mov     [rbp+20F0h+var_20C8], r13
 * 000000014033743D: lea     rax, [rdx+r13]
 * 0000000140337441: xor     edx, edx
 * 0000000140337443: mov     [rbp+20F0h+var_2030], rax
 * 000000014033744A: xor     eax, eax
 * 000000014033744C: mov     ecx, eax
 * 000000014033744E: mov     [rbp+20F0h+var_20E8], eax
 * 0000000140337451: movzx   eax, r10w
 * 0000000140337455: test    eax, eax
 * 0000000140337457: jz      loc_14033769B
 * 000000014033745D: mov     rdx, r11
 * 0000000140337460: mov     r9d, 1; BugCheckParameter3
 * 0000000140337466: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014033746A: mov     r13d, [rdx+10h]
 * 000000014033746E: mov     eax, [rdx+8]
 * 0000000140337471: cmp     r13d, eax
 * 0000000140337474: mov     r8d, [rdx+0Ch]
 * 0000000140337478: cmovbe  r13d, eax
 * 000000014033747C: mov     [rbp+20F0h+var_205C], r8d
 * 0000000140337483: add     r13d, r8d
 * 0000000140337486: test    ecx, ecx
 * 0000000140337488: jz      short loc_14033749F
 * 000000014033748A: lea     eax, [rcx-1]
 * 000000014033748D: lea     rax, [rax+rax*4]
 * 0000000140337491: cmp     r13d, [r11+rax*8+0Ch]
 * 0000000140337496: jb      loc_1403376BC
 * 000000014033749C: mov     ecx, [rbp+20F0h+var_20E8]
 * 000000014033749F: cmp     r12, [rbp+20F0h+var_2030]
 * 00000001403374A6: jz      loc_140337670
 * 00000001403374AC: mov     ecx, [r12]
 * 00000001403374B0: mov     eax, [r12+4]
 * 00000001403374B5: cmp     ecx, r13d
 * 00000001403374B8: jnb     loc_14033765B
 * 00000001403374BE: cmp     eax, r8d
 * 00000001403374C1: jbe     loc_14033765B
 * 00000001403374C7: cmp     ecx, r8d
 * 00000001403374CA: jb      loc_140337716
 * 00000001403374D0: cmp     eax, r13d
 * 00000001403374D3: ja      loc_140337716
 * 00000001403374D9: mov     eax, [r12+8]
 * 00000001403374DE: mov     ecx, 1
 * 00000001403374E3: mov     [rbp+20F0h+var_1B08], r12
 * 00000001403374EA: test    cl, al
 * 00000001403374EC: jnz     short loc_1403374FA
 * 00000001403374EE: mov     al, [rax+r14]
 * 00000001403374F2: test    al, 20h
 * 00000001403374F4: jz      loc_14033764A
 * 00000001403374FA: mov     eax, [rdx+8]
 * 00000001403374FD: mov     rcx, r12
 * 0000000140337500: mov     r14d, [rdx+10h]
 * 0000000140337504: cmp     r14d, eax
 * 0000000140337507: mov     r15d, [rdx+0Ch]
 * 000000014033750B: mov     rdx, [rbp+20F0h+var_2058]
 * 0000000140337512: cmovbe  r14d, eax
 * 0000000140337516: mov     rax, [rbx+410h]
 * 000000014033751D: add     r14d, r15d
 * 0000000140337520: call    KeGuardDispatchICall
 * 0000000140337525: mov     rcx, rax
 * 0000000140337528: cmp     [rax], r15d
 * 000000014033752B: jb      short loc_140337533
 * 000000014033752D: cmp     [rax+4], r14d
 * 0000000140337531: jbe     short loc_14033759C
 * 0000000140337533: mov     r10, [rbp+20F0h+var_2058]
 * 000000014033753A: mov     eax, 80000000h
 * 000000014033753F: mov     edx, ecx
 * 0000000140337541: sub     edx, r10d
 * 0000000140337544: or      edx, eax
 * 0000000140337546: xor     eax, eax
 * 0000000140337548: test    dword ptr [rbx+970h], 200000h
 * 0000000140337552: jz      loc_140346621
 * 0000000140337558: cmp     [rbx+8D8h], eax
 * 000000014033755E: jnz     short loc_1403375A3
 * 0000000140337560: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033756A: add     rax, rbx
 * 000000014033756D: mov     [rbx+8E0h], rax
 * 0000000140337574: xor     eax, eax
 * 0000000140337576: mov     [rbx+8E8h], rax
 * 000000014033757D: mov     eax, 1
 * 0000000140337582: mov     qword ptr [rbx+8F0h], 10Fh
 * 000000014033758D: mov     [rbx+8F8h], r10
 * 0000000140337594: mov     [rbx+8D8h], eax
 * 000000014033759A: jmp     short loc_1403375A3
 * 000000014033759C: mov     r10, [rbp+20F0h+var_2058]
 * 00000001403375A3: mov     r8d, [rcx]
 * 00000001403375A6: mov     rdx, r10
 * 00000001403375A9: mov     rax, [rbx+418h]
 * 00000001403375B0: add     r8, r10
 * 00000001403375B3: call    KeGuardDispatchICall
 * 00000001403375B8: mov     rdx, rax
 * 00000001403375BB: cmp     [rax], r15d
 * 00000001403375BE: jb      short loc_1403375C6
 * 00000001403375C0: cmp     [rax+4], r14d
 * 00000001403375C4: jbe     short loc_140337638
 * 00000001403375C6: mov     r14, [rbp+20F0h+var_2058]
 * 00000001403375CD: mov     eax, 80000000h
 * 00000001403375D2: sub     edx, r14d
 * 00000001403375D5: or      edx, eax
 * 00000001403375D7: xor     eax, eax
 * 00000001403375D9: test    dword ptr [rbx+970h], 200000h
 * 00000001403375E3: jz      loc_1403465F8
 * 00000001403375E9: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403375ED: mov     r8d, [rbp+20F0h+var_205C]
 * 00000001403375F4: cmp     [rbx+8D8h], eax
 * 00000001403375FA: jnz     short loc_14033764A
 * 00000001403375FC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140337606: add     rax, rbx
 * 0000000140337609: mov     [rbx+8E0h], rax
 * 0000000140337610: xor     eax, eax
 * 0000000140337612: mov     [rbx+8E8h], rax
 * 0000000140337619: mov     eax, 1
 * 000000014033761E: mov     qword ptr [rbx+8F0h], 10Fh
 * 0000000140337629: mov     [rbx+8F8h], r14
 * 0000000140337630: mov     [rbx+8D8h], eax
 * 0000000140337636: jmp     short loc_14033764A
 * 0000000140337638: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033763C: mov     r8d, [rbp+20F0h+var_205C]
 * 0000000140337643: mov     r14, [rbp+20F0h+var_2058]
 * 000000014033764A: add     r12, 0Ch
 * 000000014033764E: cmp     r12, [rbp+20F0h+var_2030]
 * 0000000140337655: jnz     loc_1403374AC
 * 000000014033765B: mov     ecx, [rbp+20F0h+var_20E8]
 * 000000014033765E: mov     r9d, 1
 * 0000000140337664: movzx   r10d, word ptr [rbp+20F0h+var_2060]
 * 000000014033766C: mov     r11, [rbp+20F0h+var_20D8]
 * 0000000140337670: add     ecx, r9d
 * 0000000140337673: movzx   eax, r10w
 * 0000000140337677: add     rdx, 28h ; '('
 * 000000014033767B: mov     [rbp+20F0h+var_20E8], ecx
 * 000000014033767E: mov     [rbp+20F0h+var_20F0], rdx
 * 0000000140337682: cmp     ecx, eax
 * 0000000140337684: jb      loc_14033746A
 * 000000014033768A: mov     r9, [rbp+20F0h+var_2068]
 * 0000000140337691: xor     edx, edx
 * 0000000140337693: mov     r15, [rbp+20F0h+var_20A0]
 * 0000000140337697: mov     r13, [rbp+20F0h+var_20C8]
 * 000000014033769B: cmp     r12, [rbp+20F0h+var_2030]
 * 00000001403376A2: jz      loc_14033776C
 * 00000001403376A8: test    dword ptr [rbx+970h], 200000h
 * 00000001403376B2: jz      loc_140346675
 * 00000001403376B8: xor     eax, eax
 * 00000001403376BA: jmp     short loc_140337728
 * 00000001403376BC: xor     eax, eax
 * 00000001403376BE: test    dword ptr [rbx+970h], 200000h
 * 00000001403376C8: jz      loc_1403465D2
 * 00000001403376CE: cmp     [rbx+8D8h], eax
 * 00000001403376D4: jnz     short loc_14033770C
 * 00000001403376D6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403376E0: add     rax, rbx
 * 00000001403376E3: mov     [rbx+8E0h], rax
 * 00000001403376EA: xor     eax, eax
 * 00000001403376EC: mov     [rbx+8E8h], rax
 * 00000001403376F3: mov     qword ptr [rbx+8F0h], 10Fh
 * 00000001403376FE: mov     [rbx+8F8h], r14
 * 0000000140337705: mov     [rbx+8D8h], r9d
 * 000000014033770C: mov     ecx, 0C000007Bh
 * 0000000140337711: jmp     loc_140337897
 * 0000000140337716: xor     eax, eax
 * 0000000140337718: test    dword ptr [rbx+970h], 200000h
 * 0000000140337722: jz      loc_14034664A
 * 0000000140337728: cmp     [rbx+8D8h], eax
 * 000000014033772E: jnz     short loc_14033770C
 * 0000000140337730: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033773A: add     rax, rbx
 * 000000014033773D: mov     [rbx+8E0h], rax
 * 0000000140337744: xor     eax, eax
 * 0000000140337746: mov     [rbx+8E8h], rax
 * 000000014033774D: mov     eax, 1
 * 0000000140337752: mov     qword ptr [rbx+8F0h], 10Fh
 * 000000014033775D: mov     [rbx+8F8h], r14
 * 0000000140337764: mov     [rbx+8D8h], eax
 * 000000014033776A: jmp     short loc_14033770C
 * 000000014033776C: mov     r14d, [rbx+7CCh]
 * 0000000140337773: lea     eax, [rax+rax*2]
 * 0000000140337776: mov     r8d, [rbx+904h]
 * 000000014033777D: lea     eax, [rax+6]
 * 0000000140337780: lea     ecx, [r9+6]
 * 0000000140337784: and     ecx, 0FFFFFFF8h
 * 0000000140337787: lea     eax, [rcx+rax*8]
 * 000000014033778A: add     eax, r14d
 * 000000014033778D: cmp     eax, [rbx+9FCh]
 * 0000000140337793: jbe     loc_14033789F
 * 0000000140337799: mov     edx, eax
 * 000000014033779B: mov     rcx, rbx
 * 000000014033779E: call    sub_1403495B4
 * 00000001403377A3: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403377A7: mov     r12, rax
 * 00000001403377AA: test    rax, rax
 * 00000001403377AD: jz      loc_140337892
 * 00000001403377B3: mov     ecx, [rbx+970h]
 * 00000001403377B9: test    cl, 4
 * 00000001403377BC: jnz     loc_140337878
 * 00000001403377C2: mov     eax, [rbx+7CCh]
 * 00000001403377C8: and     ecx, 20000000h
 * 00000001403377CE: mov     r8, [rbx+7B0h]
 * 00000001403377D5: neg     ecx
 * 00000001403377D7: mov     r10d, 1
 * 00000001403377DD: sbb     edx, edx
 * 00000001403377DF: and     edx, [rbx+904h]
 * 00000001403377E5: cmp     eax, 8
 * 00000001403377E8: jb      short loc_140337802
 * 00000001403377EA: mov     ecx, eax
 * 00000001403377EC: shr     rcx, 3
 * 00000001403377F0: xor     r9d, r9d
 * 00000001403377F3: mov     [rbx], r9
 * 00000001403377F6: add     eax, 0FFFFFFF8h
 * 00000001403377F9: add     rbx, 8
 * 00000001403377FD: sub     rcx, r10
 * 0000000140337800: jnz     short loc_1403377F3
 * 0000000140337802: xor     ecx, ecx
 * 0000000140337804: test    eax, eax
 * 0000000140337806: jz      short loc_140337818
 * 0000000140337808: mov     r9d, 0FFFFFFFFh
 * 000000014033780E: mov     [rbx], cl
 * 0000000140337810: add     rbx, r10
 * 0000000140337813: add     eax, r9d
 * 0000000140337816: jnz     short loc_14033780E
 * 0000000140337818: mov     ebx, [r12+904h]
 * 0000000140337820: mov     [r12+904h], edx
 * 0000000140337828: cmp     edx, 3
 * 000000014033782B: jz      short loc_140337860
 * 000000014033782D: test    dword ptr [r12+970h], 10000000h
 * 0000000140337839: cmovz   ecx, edx
 * 000000014033783C: test    ecx, ecx
 * 000000014033783E: jz      short loc_140337856
 * 0000000140337840: mov     rax, [r12+220h]
 * 0000000140337848: lea     rcx, [r8-8]
 * 000000014033784C: mov     rdx, [rcx]
 * 000000014033784F: call    KeGuardDispatchICall
 * 0000000140337854: jmp     short loc_140337870
 * 0000000140337856: mov     rax, [r12+0F8h]
 * 000000014033785E: jmp     short loc_140337868
 * 0000000140337860: mov     rax, [r12+360h]
 * 0000000140337868: mov     rcx, r8
 * 000000014033786B: call    KeGuardDispatchICall
 * 0000000140337870: mov     [r12+904h], ebx
 * 0000000140337878: and     dword ptr [r12+970h], 0FFFFFFFBh
 * 0000000140337881: mov     r9, [rbp+20F0h+var_2068]
 * 0000000140337888: movzx   r10d, word ptr [rbp+20F0h+var_2060]
 * 0000000140337890: jmp     short loc_1403378AC
 * 0000000140337892: mov     ecx, 0C000009Ah
 * 0000000140337897: mov     r13, rbx
 * 000000014033789A: jmp     loc_140336D47
 * 000000014033789F: mov     r12, rbx
 * 00000001403378A2: mov     [rbp+20F0h+var_20A0], rbx
 * 00000001403378A6: mov     [rbx+7CCh], eax
 * 00000001403378AC: mov     ebx, 1
 * 00000001403378B1: lea     r8, [r12+r14]
 * 00000001403378B5: add     [r12+7F4h], ebx
 * 00000001403378BD: mov     rax, r8
 * 00000001403378C0: mov     [rbp+20F0h+var_1C98], r8
 * 00000001403378C7: xor     r11d, r11d
 * 00000001403378CA: lea     ecx, [rbx+2Fh]
 * 00000001403378CD: lea     edx, [rbx+5]
 * 00000001403378D0: mov     [rax], r11
 * 00000001403378D3: add     ecx, 0FFFFFFF8h
 * 00000001403378D6: add     rax, 8
 * 00000001403378DA: sub     rdx, rbx
 * 00000001403378DD: jnz     short loc_1403378D0
 * 00000001403378DF: test    ecx, ecx
 * 00000001403378E1: jz      short loc_1403378F2
 * 00000001403378E3: mov     edx, 0FFFFFFFFh
 * 00000001403378E8: mov     [rax], r11b
 * 00000001403378EB: add     rax, rbx
 * 00000001403378EE: add     ecx, edx
 * 00000001403378F0: jnz     short loc_1403378E8
 * 00000001403378F2: mov     r14, [rbp+20F0h+var_20B0]
 * 00000001403378F6: xor     eax, eax
 * 00000001403378F8: mov     dword ptr [r8], 1Eh
 * 00000001403378FF: mov     [r8+8], r14
 * 0000000140337903: mov     [r8+10h], eax
 * 0000000140337907: mov     rcx, [r12+800h]
 * 000000014033790F: mov     rax, rcx
 * 0000000140337912: jmp     short loc_140337916
 * 0000000140337914: xor     ecx, eax
 * 0000000140337916: shr     rax, 1Fh
 * 000000014033791A: test    rax, rax
 * 000000014033791D: jnz     short loc_140337914
 * 000000014033791F: btr     ecx, 1Fh
 * 0000000140337923: lea     r11d, [r9-1]
 * 0000000140337927: mov     [r8+14h], ecx
 * 000000014033792B: mov     rbx, r12
 * 000000014033792E: mov     rax, [rbp+20F0h+var_1C98]
 * 0000000140337935: mov     r8d, 0FFFEh
 * 000000014033793B: mov     rcx, [rbp+20F0h+var_2058]
 * 0000000140337942: mov     [rbp+20F0h+var_1F38], rax
 * 0000000140337949: mov     [rbp+20F0h+var_1FF0], rbx
 * 0000000140337950: mov     [rax+18h], rcx
 * 0000000140337954: mov     ecx, [r15+50h]
 * 0000000140337958: mov     r15d, 0Ch
 * 000000014033795E: mov     rax, [rbp+20F0h+var_1F38]
 * 0000000140337965: mov     [rax+20h], ecx
 * 0000000140337968: mov     rax, [rbp+20F0h+var_1F38]
 * 000000014033796F: mov     ecx, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140337972: mov     [rax+24h], ecx
 * 0000000140337975: mov     rax, [rbp+20F0h+var_1F38]
 * 000000014033797C: mov     [rax+28h], r10w
 * 0000000140337981: xor     eax, eax
 * 0000000140337983: cmp     [rbp+20F0h+var_2090], eax
 * 0000000140337986: mov     ecx, eax
 * 0000000140337988: mov     rdx, [rbp+20F0h+var_1F38]
 * 000000014033798F: setnz   cl
 * 0000000140337992: add     r11, 7
 * 0000000140337996: and     r11, 0FFFFFFFFFFFFFFF8h
 * 000000014033799A: movzx   eax, word ptr [rdx+2Ah]
 * 000000014033799E: and     ax, r8w
 * 00000001403379A2: or      cx, ax
 * 00000001403379A5: mov     [rdx+2Ah], cx
 * 00000001403379A9: mov     rcx, [rbp+20F0h+var_1F38]
 * 00000001403379B0: movzx   eax, word ptr [rcx+28h]
 * 00000001403379B4: lea     rdx, [rcx+30h]
 * 00000001403379B8: add     r11, rdx
 * 00000001403379BB: mov     [rbp+20F0h+var_2080], rdx
 * 00000001403379BF: mov     [rbp+20F0h+var_2068], r11
 * 00000001403379C6: lea     rcx, [rax+rax*2]
 * 00000001403379CA: xor     eax, eax
 * 00000001403379CC: lea     r8, [r11+rcx*8]
 * 00000001403379D0: test    r9d, r9d
 * 00000001403379D3: mov     ecx, r15d
 * 00000001403379D6: mov     [rbp+20F0h+var_20C8], r8
 * 00000001403379DA: cmovz   rcx, r13
 * 00000001403379DE: add     rcx, r14
 * 00000001403379E1: mov     [rbp+20F0h+var_20F0], rcx
 * 00000001403379E5: cmp     ax, r10w
 * 00000001403379E9: jnb     short loc_140337A27
 * 00000001403379EB: movzx   edx, r10w
 * 00000001403379EF: lea     rax, [r11+8]
 * 00000001403379F3: lea     r10d, [r15-0Bh]
 * 00000001403379F7: xor     r9d, r9d
 * 00000001403379FA: lea     esi, [r15-0Ah]
 * 00000001403379FE: mov     r13d, 80000000h
 * 0000000140337A04: mov     rcx, rsi
 * 0000000140337A07: mov     [rax-8], r9d
 * 0000000140337A0B: mov     [rax-4], r9d
 * 0000000140337A0F: mov     [rax], r13d
 * 0000000140337A12: add     rax, r15
 * 0000000140337A15: sub     rcx, r10
 * 0000000140337A18: jnz     short loc_140337A07
 * 0000000140337A1A: sub     rdx, r10
 * 0000000140337A1D: jnz     short loc_140337A04
 * 0000000140337A1F: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140337A23: xor     eax, eax
 * 0000000140337A25: jmp     short loc_140337A2D
 * 0000000140337A27: mov     r10d, 1
 * 0000000140337A2D: cmp     r11, r8
 * 0000000140337A30: jz      loc_140338306
 * 0000000140337A36: mov     r13, [rbp+20F0h+var_20D8]
 * 0000000140337A3A: jmp     short loc_140337A3E
 * 0000000140337A3C: xor     eax, eax
 * 0000000140337A3E: mov     r15d, eax
 * 0000000140337A41: mov     eax, [r13+24h]
 * 0000000140337A45: bt      eax, 19h
 * 0000000140337A49: jb      loc_140337C73
 * 0000000140337A4F: mov     ecx, [r13+0]
 * 0000000140337A53: cmp     ecx, 54494E49h
 * 0000000140337A59: jnz     short loc_140337A69
 * 0000000140337A5B: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140337A63: jz      loc_140337C73
 * 0000000140337A69: cmp     ecx, 45474150h
 * 0000000140337A6F: jnz     short loc_140337AA0
 * 0000000140337A71: movzx   eax, word ptr [r13+4]
 * 0000000140337A76: mov     edx, 7877h
 * 0000000140337A7B: cmp     ax, dx
 * 0000000140337A7E: jz      loc_140337C73
 * 0000000140337A84: mov     edx, 7277h
 * 0000000140337A89: cmp     ax, dx
 * 0000000140337A8C: jz      loc_140337C73
 * 0000000140337A92: mov     edx, 7777h
 * 0000000140337A97: cmp     ax, dx
 * 0000000140337A9A: jz      loc_140337C73
 * 0000000140337AA0: cmp     ecx, 41525245h
 * 0000000140337AA6: jnz     short loc_140337AB8
 * 0000000140337AA8: mov     eax, 4154h
 * 0000000140337AAD: cmp     [r13+4], ax
 * 0000000140337AB2: jz      loc_140337C73
 * 0000000140337AB8: mov     r8, [r12+910h]
 * 0000000140337AC0: mov     r10d, 7
 * 0000000140337AC6: mov     r11, [r12+918h]
 * 0000000140337ACE: mov     r9, r13
 * 0000000140337AD1: mov     rbx, [r12+920h]
 * 0000000140337AD9: mov     r14, [r12+928h]
 * 0000000140337AE1: movzx   edx, byte ptr [r9]
 * 0000000140337AE5: inc     r9
 * 0000000140337AE8: movzx   eax, byte ptr [r8]
 * 0000000140337AEC: inc     r8
 * 0000000140337AEF: cmp     rdx, rax
 * 0000000140337AF2: jnz     loc_140337BC1
 * 0000000140337AF8: mov     eax, 0FFFFFFFFh
 * 0000000140337AFD: add     r10d, eax
 * 0000000140337B00: jnz     short loc_140337AE1
 * 0000000140337B02: mov     r10d, 1
 * 0000000140337B08: mov     r15d, r10d
 * 0000000140337B0B: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140337B0F: mov     r11, [rbp+20F0h+var_2068]
 * 0000000140337B16: mov     ecx, [r13+24h]
 * 0000000140337B1A: xor     eax, eax
 * 0000000140337B1C: test    ecx, ecx
 * 0000000140337B1E: cmovs   r15d, r10d
 * 0000000140337B22: mov     [rbp+20F0h+var_2090], r15d
 * 0000000140337B26: test    r15d, r15d
 * 0000000140337B29: jz      short loc_140337B53
 * 0000000140337B2B: cmp     dword ptr [r13+0], 54494E49h
 * 0000000140337B33: jnz     short loc_140337B53
 * 0000000140337B35: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140337B3D: jnz     short loc_140337B53
 * 0000000140337B3F: test    dword ptr [r12+974h], 2000h
 * 0000000140337B4B: cmovnz  r15d, eax
 * 0000000140337B4F: mov     [rbp+20F0h+var_2090], r15d
 * 0000000140337B53: test    dword ptr [r12+974h], 4000h
 * 0000000140337B5F: jz      short loc_140337B89
 * 0000000140337B61: bt      ecx, 1Dh
 * 0000000140337B65: jnb     short loc_140337B89
 * 0000000140337B67: mov     rax, [rbp+20F0h+var_2058]
 * 0000000140337B6E: cmp     rax, [r12+5D8h]
 * 0000000140337B76: jz      short loc_140337B82
 * 0000000140337B78: cmp     rax, [r12+5E0h]
 * 0000000140337B80: jnz     short loc_140337B89
 * 0000000140337B82: mov     r15d, r10d
 * 0000000140337B85: mov     [rbp+20F0h+var_2090], r10d
 * 0000000140337B89: mov     ecx, [r13+10h]
 * 0000000140337B8D: mov     eax, [r13+8]
 * 0000000140337B91: cmp     ecx, eax
 * 0000000140337B93: mov     ebx, [r13+0Ch]
 * 0000000140337B97: mov     r8, [rbp+20F0h+var_2030]
 * 0000000140337B9E: cmovbe  ecx, eax
 * 0000000140337BA1: add     ecx, ebx
 * 0000000140337BA3: mov     [rbp+20F0h+var_2060], ebx
 * 0000000140337BA9: mov     [rbp+20F0h+var_20E8], ecx
 * 0000000140337BAC: cmp     r14, r8
 * 0000000140337BAF: jz      loc_140337C7B
 * 0000000140337BB5: mov     r13d, [r14]
 * 0000000140337BB8: mov     eax, [r14+4]
 * 0000000140337BBC: jmp     loc_140337C80
 * 0000000140337BC1: mov     r8d, 8
 * 0000000140337BC7: mov     r9, r13
 * 0000000140337BCA: mov     rcx, [r9]
 * 0000000140337BCD: add     r9, 8
 * 0000000140337BD1: mov     rax, [r11]
 * 0000000140337BD4: add     r11, 8
 * 0000000140337BD8: cmp     rcx, rax
 * 0000000140337BDB: jnz     short loc_140337C18
 * 0000000140337BDD: add     r8d, 0FFFFFFF8h
 * 0000000140337BE1: cmp     r8d, 8
 * 0000000140337BE5: jnb     short loc_140337BCA
 * 0000000140337BE7: test    r8d, r8d
 * 0000000140337BEA: jz      loc_140337B02
 * 0000000140337BF0: mov     r10d, 1
 * 0000000140337BF6: movzx   edx, byte ptr [r9]
 * 0000000140337BFA: add     r9, r10
 * 0000000140337BFD: movzx   eax, byte ptr [r11]
 * 0000000140337C01: add     r11, r10
 * 0000000140337C04: cmp     rdx, rax
 * 0000000140337C07: jnz     short loc_140337C1E
 * 0000000140337C09: mov     eax, 0FFFFFFFFh
 * 0000000140337C0E: add     r8d, eax
 * 0000000140337C11: jnz     short loc_140337BF6
 * 0000000140337C13: jmp     loc_140337B08
 * 0000000140337C18: mov     r10d, 1
 * 0000000140337C1E: mov     r9d, 4
 * 0000000140337C24: mov     r8, r13
 * 0000000140337C27: mov     r11d, 0FFFFFFFFh
 * 0000000140337C2D: movzx   edx, byte ptr [r8]
 * 0000000140337C31: add     r8, r10
 * 0000000140337C34: movzx   eax, byte ptr [rbx]
 * 0000000140337C37: add     rbx, r10
 * 0000000140337C3A: cmp     rdx, rax
 * 0000000140337C3D: jnz     short loc_140337C49
 * 0000000140337C3F: add     r9d, r11d
 * 0000000140337C42: jnz     short loc_140337C2D
 * 0000000140337C44: jmp     loc_140337B08
 * 0000000140337C49: mov     r9d, 6
 * 0000000140337C4F: mov     r8, r13
 * 0000000140337C52: movzx   edx, byte ptr [r8]
 * 0000000140337C56: add     r8, r10
 * 0000000140337C59: movzx   eax, byte ptr [r14]
 * 0000000140337C5D: add     r14, r10
 * 0000000140337C60: cmp     rdx, rax
 * 0000000140337C63: jnz     loc_140337B0B
 * 0000000140337C69: add     r9d, r11d
 * 0000000140337C6C: jnz     short loc_140337C52
 * 0000000140337C6E: jmp     loc_140337B08
 * 0000000140337C73: mov     r15d, r10d
 * 0000000140337C76: jmp     loc_140337B16
 * 0000000140337C7B: xor     eax, eax
 * 0000000140337C7D: mov     r13d, eax
 * 0000000140337C80: mov     [rbp+20F0h+var_205C], eax
 * 0000000140337C86: mov     dword ptr [rbp+20F0h+var_20B8], ebx
 * 0000000140337C89: cmp     r14, r8
 * 0000000140337C8C: jz      loc_140337E6D
 * 0000000140337C92: cmp     r13d, ebx
 * 0000000140337C95: jbe     loc_140337E6D
 * 0000000140337C9B: cmp     eax, ecx
 * 0000000140337C9D: ja      loc_140337E6D
 * 0000000140337CA3: test    r15d, r15d
 * 0000000140337CA6: mov     r15, [rbp+20F0h+var_2058]
 * 0000000140337CAD: jnz     loc_140337E74
 * 0000000140337CB3: mov     [r11], ebx
 * 0000000140337CB6: lea     rdx, [rbp+20F0h+var_1DD8]
 * 0000000140337CBD: mov     [r11+4], r13d
 * 0000000140337CC1: lea     r8, [rbp+20F0h+var_1C40]
 * 0000000140337CC8: mov     eax, [r11]
 * 0000000140337CCB: mov     r10d, r13d
 * 0000000140337CCE: sub     r10d, eax
 * 0000000140337CD1: mov     dword ptr [rbp+20F0h+var_20B8], r13d
 * 0000000140337CD5: mov     r11d, r10d
 * 0000000140337CD8: lea     r14, [r15+rax]
 * 0000000140337CDC: add     r11, r14
 * 0000000140337CDF: xor     eax, eax
 * 0000000140337CE1: mov     r9d, eax
 * 0000000140337CE4: mov     rcx, [r8]
 * 0000000140337CE7: mov     eax, [rdx]
 * 0000000140337CE9: add     rax, rcx
 * 0000000140337CEC: cmp     r14, rax
 * 0000000140337CEF: jnb     short loc_140337CFA
 * 0000000140337CF1: cmp     r11, rcx
 * 0000000140337CF4: ja      loc_140337E57
 * 0000000140337CFA: inc     r9d
 * 0000000140337CFD: add     r8, 8
 * 0000000140337D01: add     rdx, 4
 * 0000000140337D05: cmp     r9d, 6
 * 0000000140337D09: jb      short loc_140337CE4
 * 0000000140337D0B: add     [r12+810h], r10d
 * 0000000140337D13: mov     rbx, r14
 * 0000000140337D16: mov     r15, [rbp+20F0h+var_20A0]
 * 0000000140337D1A: mov     rax, r14
 * 0000000140337D1D: mov     r12d, [r12+7FCh]
 * 0000000140337D25: mov     r15, [r15+800h]
 * 0000000140337D2C: cmp     r14, r11
 * 0000000140337D2F: jnb     short loc_140337D41
 * 0000000140337D31: mov     ecx, 40h ; '@'
 * 0000000140337D36: prefetchnta byte ptr [rax]
 * 0000000140337D39: add     rax, rcx
 * 0000000140337D3C: cmp     rax, r11
 * 0000000140337D3F: jb      short loc_140337D36
 * 0000000140337D41: mov     r9d, r10d
 * 0000000140337D44: mov     r8, r15
 * 0000000140337D47: shr     r9d, 7
 * 0000000140337D4B: mov     r11d, 1
 * 0000000140337D51: test    r9d, r9d
 * 0000000140337D54: jz      short loc_140337DBF
 * 0000000140337D56: mov     rsi, 7010008004002001h
 * 0000000140337D60: mov     edx, 8
 * 0000000140337D65: mov     rax, [rbx]
 * 0000000140337D68: mov     ecx, r12d
 * 0000000140337D6B: xor     rax, r8
 * 0000000140337D6E: mov     r8, [rbx+8]
 * 0000000140337D72: rol     rax, cl
 * 0000000140337D75: add     rbx, 10h
 * 0000000140337D79: xor     r8, rax
 * 0000000140337D7C: rol     r8, cl
 * 0000000140337D7F: sub     rdx, r11
 * 0000000140337D82: jnz     short loc_140337D65
 * 0000000140337D84: mov     rcx, rbx
 * 0000000140337D87: sub     rcx, r14
 * 0000000140337D8A: xor     rcx, r15
 * 0000000140337D8D: mov     rax, rcx
 * 0000000140337D90: rol     rax, 11h
 * 0000000140337D94: xor     rcx, rax
 * 0000000140337D97: mov     rax, rsi
 * 0000000140337D9A: mul     rcx
 * 0000000140337D9D: xor     eax, edx
 * 0000000140337D9F: mov     [rbp+20F0h+var_1B00], rdx
 * 0000000140337DA6: xor     r12d, eax
 * 0000000140337DA9: mov     eax, 0FFFFFFFFh
 * 0000000140337DAE: and     r12d, 3Fh
 * 0000000140337DB2: cmovz   r12d, r11d
 * 0000000140337DB6: add     r9d, eax
 * 0000000140337DB9: jnz     short loc_140337D60
 * 0000000140337DBB: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140337DBF: and     r10d, 7Fh
 * 0000000140337DC3: cmp     r10d, 8
 * 0000000140337DC7: jb      short loc_140337DE6
 * 0000000140337DC9: mov     edx, r10d
 * 0000000140337DCC: shr     rdx, 3
 * 0000000140337DD0: xor     r8, [rbx]
 * 0000000140337DD3: mov     ecx, r12d
 * 0000000140337DD6: rol     r8, cl
 * 0000000140337DD9: add     rbx, 8
 * 0000000140337DDD: add     r10d, 0FFFFFFF8h
 * 0000000140337DE1: sub     rdx, r11
 * 0000000140337DE4: jnz     short loc_140337DD0
 * 0000000140337DE6: test    r10d, r10d
 * 0000000140337DE9: jz      short loc_140337E08
 * 0000000140337DEB: mov     esi, 0FFFFFFFFh
 * 0000000140337DF0: movzx   eax, byte ptr [rbx]
 * 0000000140337DF3: mov     ecx, r12d
 * 0000000140337DF6: xor     r8, rax
 * 0000000140337DF9: add     rbx, r11
 * 0000000140337DFC: rol     r8, cl
 * 0000000140337DFF: add     r10d, esi
 * 0000000140337E02: jnz     short loc_140337DF0
 * 0000000140337E04: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140337E08: mov     rax, r8
 * 0000000140337E0B: shr     rax, 1Fh
 * 0000000140337E0F: xor     r9d, r9d
 * 0000000140337E12: jmp     short loc_140337E1B
 * 0000000140337E14: xor     r8d, eax
 * 0000000140337E17: shr     rax, 1Fh
 * 0000000140337E1B: test    rax, rax
 * 0000000140337E1E: jnz     short loc_140337E14
 * 0000000140337E20: mov     rax, [rbp+20F0h+var_2068]
 * 0000000140337E27: btr     r8d, 1Fh
 * 0000000140337E2C: mov     ecx, [rbp+20F0h+var_20E8]
 * 0000000140337E2F: mov     r10d, 1
 * 0000000140337E35: mov     ebx, [rbp+20F0h+var_2060]
 * 0000000140337E3B: mov     r12, [rbp+20F0h+var_20A0]
 * 0000000140337E3F: mov     r15, [rbp+20F0h+var_2058]
 * 0000000140337E46: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140337E4A: mov     [rax+8], r8d
 * 0000000140337E4E: mov     r8, [rbp+20F0h+var_2030]
 * 0000000140337E55: jmp     short loc_140337E77
 * 0000000140337E57: mov     ecx, [rbp+20F0h+var_20E8]
 * 0000000140337E5A: mov     r10d, 1
 * 0000000140337E60: mov     r8, [rbp+20F0h+var_2030]
 * 0000000140337E67: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140337E6B: jmp     short loc_140337E74
 * 0000000140337E6D: mov     r15, [rbp+20F0h+var_2058]
 * 0000000140337E74: xor     r9d, r9d
 * 0000000140337E77: cmp     r13d, ebx
 * 0000000140337E7A: jb      loc_140338100
 * 0000000140337E80: cmp     [rbp+20F0h+var_205C], ecx
 * 0000000140337E86: ja      loc_140338100
 * 0000000140337E8C: cmp     r14, r8
 * 0000000140337E8F: jz      loc_140338100
 * 0000000140337E95: mov     r11, [rbp+20F0h+var_20F0]
 * 0000000140337E99: mov     r13d, [r11+4]
 * 0000000140337E9D: cmp     r13d, ecx
 * 0000000140337EA0: ja      loc_140338100
 * 0000000140337EA6: mov     rax, [rbp+20F0h+var_2080]
 * 0000000140337EAA: mov     edx, 0Ch
 * 0000000140337EAF: jmp     short loc_140337EB5
 * 0000000140337EB1: mov     r12, [rbp+20F0h+var_20A0]
 * 0000000140337EB5: cmp     r11, r8
 * 0000000140337EB8: jz      loc_140338100
 * 0000000140337EBE: cmp     [rbp+20F0h+var_2090], r9d
 * 0000000140337EC2: jz      short loc_140337ECC
 * 0000000140337EC4: mov     r8b, 80h
 * 0000000140337EC7: jmp     loc_1403380CB
 * 0000000140337ECC: mov     edx, [r11]
 * 0000000140337ECF: mov     ecx, [r14+4]
 * 0000000140337ED3: mov     dword ptr [rbp+20F0h+var_20B8], edx
 * 0000000140337ED6: cmp     edx, ecx
 * 0000000140337ED8: jnb     short loc_140337F33
 * 0000000140337EDA: test    dword ptr [r12+970h], 200000h
 * 0000000140337EE6: jz      loc_1403466A0
 * 0000000140337EEC: xor     eax, eax
 * 0000000140337EEE: cmp     [r12+8D8h], eax
 * 0000000140337EF6: jnz     short loc_140337F33
 * 0000000140337EF8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140337F02: add     rax, r12
 * 0000000140337F05: mov     [r12+8E0h], rax
 * 0000000140337F0D: xor     eax, eax
 * 0000000140337F0F: mov     [r12+8E8h], rax
 * 0000000140337F17: mov     qword ptr [r12+8F0h], 10Fh
 * 0000000140337F23: mov     [r12+8F8h], r15
 * 0000000140337F2B: mov     [r12+8D8h], r10d
 * 0000000140337F33: mov     r9d, edx
 * 0000000140337F36: lea     r14, [r15+rcx]
 * 0000000140337F3A: sub     r9d, ecx
 * 0000000140337F3D: lea     rdx, [rbp+20F0h+var_1DD8]
 * 0000000140337F44: mov     ebx, r9d
 * 0000000140337F47: lea     r8, [rbp+20F0h+var_1C40]
 * 0000000140337F4E: add     rbx, r14
 * 0000000140337F51: xor     eax, eax
 * 0000000140337F53: mov     r10d, eax
 * 0000000140337F56: mov     rcx, [r8]
 * 0000000140337F59: mov     eax, [rdx]
 * 0000000140337F5B: add     rax, rcx
 * 0000000140337F5E: cmp     r14, rax
 * 0000000140337F61: jnb     short loc_140337F6C
 * 0000000140337F63: cmp     rbx, rcx
 * 0000000140337F66: ja      loc_1403380B0
 * 0000000140337F6C: mov     eax, 4
 * 0000000140337F71: inc     r10d
 * 0000000140337F74: add     rdx, rax
 * 0000000140337F77: add     r8, 8
 * 0000000140337F7B: cmp     r10d, 6
 * 0000000140337F7F: jb      short loc_140337F56
 * 0000000140337F81: cmp     r9d, eax
 * 0000000140337F84: jb      loc_1403380B0
 * 0000000140337F8A: add     [r12+810h], r9d
 * 0000000140337F92: mov     r11, r14
 * 0000000140337F95: mov     r15, [rbp+20F0h+var_20A0]
 * 0000000140337F99: mov     rax, r14
 * 0000000140337F9C: mov     r12d, [r12+7FCh]
 * 0000000140337FA4: mov     r15, [r15+800h]
 * 0000000140337FAB: cmp     r14, rbx
 * 0000000140337FAE: jnb     short loc_140337FC0
 * 0000000140337FB0: mov     ecx, 40h ; '@'
 * 0000000140337FB5: prefetchnta byte ptr [rax]
 * 0000000140337FB8: add     rax, rcx
 * 0000000140337FBB: cmp     rax, rbx
 * 0000000140337FBE: jb      short loc_140337FB5
 * 0000000140337FC0: mov     r10d, r9d
 * 0000000140337FC3: mov     r8, r15
 * 0000000140337FC6: shr     r10d, 7
 * 0000000140337FCA: mov     ebx, 1
 * 0000000140337FCF: test    r10d, r10d
 * 0000000140337FD2: jz      short loc_14033803D
 * 0000000140337FD4: mov     rsi, 7010008004002001h
 * 0000000140337FDE: mov     edx, 8
 * 0000000140337FE3: mov     rax, [r11]
 * 0000000140337FE6: mov     ecx, r12d
 * 0000000140337FE9: xor     rax, r8
 * 0000000140337FEC: mov     r8, [r11+8]
 * 0000000140337FF0: rol     rax, cl
 * 0000000140337FF3: add     r11, 10h
 * 0000000140337FF7: xor     r8, rax
 * 0000000140337FFA: rol     r8, cl
 * 0000000140337FFD: sub     rdx, rbx
 * 0000000140338000: jnz     short loc_140337FE3
 * 0000000140338002: mov     rcx, r11
 * 0000000140338005: sub     rcx, r14
 * 0000000140338008: xor     rcx, r15
 * 000000014033800B: mov     rax, rcx
 * 000000014033800E: rol     rax, 11h
 * 0000000140338012: xor     rcx, rax
 * 0000000140338015: mov     rax, rsi
 * 0000000140338018: mul     rcx
 * 000000014033801B: xor     eax, edx
 * 000000014033801D: mov     [rbp+20F0h+var_1AF8], rdx
 * 0000000140338024: xor     r12d, eax
 * 0000000140338027: mov     eax, 0FFFFFFFFh
 * 000000014033802C: and     r12d, 3Fh
 * 0000000140338030: cmovz   r12d, ebx
 * 0000000140338034: add     r10d, eax
 * 0000000140338037: jnz     short loc_140337FDE
 * 0000000140338039: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033803D: and     r9d, 7Fh
 * 0000000140338041: cmp     r9d, 8
 * 0000000140338045: jb      short loc_140338064
 * 0000000140338047: mov     edx, r9d
 * 000000014033804A: shr     rdx, 3
 * 000000014033804E: xor     r8, [r11]
 * 0000000140338051: mov     ecx, r12d
 * 0000000140338054: rol     r8, cl
 * 0000000140338057: add     r11, 8
 * 000000014033805B: add     r9d, 0FFFFFFF8h
 * 000000014033805F: sub     rdx, rbx
 * 0000000140338062: jnz     short loc_14033804E
 * 0000000140338064: test    r9d, r9d
 * 0000000140338067: jz      short loc_140338087
 * 0000000140338069: mov     esi, 0FFFFFFFFh
 * 000000014033806E: movzx   eax, byte ptr [r11]
 * 0000000140338072: mov     ecx, r12d
 * 0000000140338075: xor     r8, rax
 * 0000000140338078: add     r11, rbx
 * 000000014033807B: rol     r8, cl
 * 000000014033807E: add     r9d, esi
 * 0000000140338081: jnz     short loc_14033806E
 * 0000000140338083: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140338087: mov     rax, r8
 * 000000014033808A: shr     rax, 7
 * 000000014033808E: xor     r9d, r9d
 * 0000000140338091: jmp     short loc_14033809A
 * 0000000140338093: xor     r8b, al
 * 0000000140338096: shr     rax, 7
 * 000000014033809A: test    rax, rax
 * 000000014033809D: jnz     short loc_140338093
 * 000000014033809F: mov     r15, [rbp+20F0h+var_2058]
 * 00000001403380A6: and     r8b, 7Fh
 * 00000001403380AA: mov     r11, [rbp+20F0h+var_20F0]
 * 00000001403380AE: jmp     short loc_1403380B6
 * 00000001403380B0: xor     r9d, r9d
 * 00000001403380B3: mov     r8b, 80h
 * 00000001403380B6: mov     r14, [rbp+20F0h+var_20B0]
 * 00000001403380BA: mov     r10d, 1
 * 00000001403380C0: mov     ecx, [rbp+20F0h+var_20E8]
 * 00000001403380C3: mov     rax, [rbp+20F0h+var_2080]
 * 00000001403380C7: lea     edx, [r10+0Bh]
 * 00000001403380CB: mov     [rax], r8b
 * 00000001403380CE: add     r14, rdx
 * 00000001403380D1: mov     rax, [rbp+20F0h+var_2080]
 * 00000001403380D5: add     r11, rdx
 * 00000001403380D8: mov     r8, [rbp+20F0h+var_2030]
 * 00000001403380DF: add     rax, r10
 * 00000001403380E2: mov     [rbp+20F0h+var_20B0], r14
 * 00000001403380E6: mov     [rbp+20F0h+var_2080], rax
 * 00000001403380EA: mov     [rbp+20F0h+var_20F0], r11
 * 00000001403380EE: cmp     r11, r8
 * 00000001403380F1: jz      short loc_1403380F7
 * 00000001403380F3: mov     r13d, [r11+4]
 * 00000001403380F7: cmp     r13d, ecx
 * 00000001403380FA: jbe     loc_140337EB1
 * 0000000140338100: mov     r11, [rbp+20F0h+var_2068]
 * 0000000140338107: xor     eax, eax
 * 0000000140338109: cmp     [rbp+20F0h+var_2090], eax
 * 000000014033810C: jnz     loc_140338289
 * 0000000140338112: mov     eax, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140338115: cmp     eax, ecx
 * 0000000140338117: jz      loc_140338289
 * 000000014033811D: mov     [r11+0Ch], eax
 * 0000000140338121: lea     rdx, [rbp+20F0h+var_1DD8]
 * 0000000140338128: mov     [r11+10h], ecx
 * 000000014033812C: lea     r8, [rbp+20F0h+var_1C40]
 * 0000000140338133: mov     eax, [r11+0Ch]
 * 0000000140338137: mov     r9d, ecx
 * 000000014033813A: sub     r9d, eax
 * 000000014033813D: mov     ebx, r9d
 * 0000000140338140: lea     r14, [r15+rax]
 * 0000000140338144: add     rbx, r14
 * 0000000140338147: xor     eax, eax
 * 0000000140338149: mov     r10d, eax
 * 000000014033814C: lea     r13d, [rax+1]
 * 0000000140338150: mov     rcx, [r8]
 * 0000000140338153: mov     eax, [rdx]
 * 0000000140338155: add     rax, rcx
 * 0000000140338158: cmp     r14, rax
 * 000000014033815B: jnb     short loc_140338166
 * 000000014033815D: cmp     rbx, rcx
 * 0000000140338160: ja      loc_140338285
 * 0000000140338166: add     r10d, r13d
 * 0000000140338169: add     r8, 8
 * 000000014033816D: add     rdx, 4
 * 0000000140338171: cmp     r10d, 6
 * 0000000140338175: jb      short loc_140338150
 * 0000000140338177: mov     rax, [rbp+20F0h+var_20A0]
 * 000000014033817B: mov     r11, r14
 * 000000014033817E: add     [rax+810h], r9d
 * 0000000140338185: mov     r12d, [rax+7FCh]
 * 000000014033818C: mov     r15, [rax+800h]
 * 0000000140338193: mov     rax, r14
 * 0000000140338196: cmp     r14, rbx
 * 0000000140338199: jnb     short loc_1403381AB
 * 000000014033819B: mov     ecx, 40h ; '@'
 * 00000001403381A0: prefetchnta byte ptr [rax]
 * 00000001403381A3: add     rax, rcx
 * 00000001403381A6: cmp     rax, rbx
 * 00000001403381A9: jb      short loc_1403381A0
 * 00000001403381AB: mov     r10d, r9d
 * 00000001403381AE: mov     r8, r15
 * 00000001403381B1: shr     r10d, 7
 * 00000001403381B5: mov     ebx, 0FFFFFFFFh
 * 00000001403381BA: test    r10d, r10d
 * 00000001403381BD: jz      short loc_140338223
 * 00000001403381BF: mov     rsi, 7010008004002001h
 * 00000001403381C9: mov     edx, 8
 * 00000001403381CE: mov     rax, [r11]
 * 00000001403381D1: mov     ecx, r12d
 * 00000001403381D4: xor     rax, r8
 * 00000001403381D7: mov     r8, [r11+8]
 * 00000001403381DB: rol     rax, cl
 * 00000001403381DE: add     r11, 10h
 * 00000001403381E2: xor     r8, rax
 * 00000001403381E5: rol     r8, cl
 * 00000001403381E8: sub     rdx, r13
 * 00000001403381EB: jnz     short loc_1403381CE
 * 00000001403381ED: mov     rcx, r11
 * 00000001403381F0: sub     rcx, r14
 * 00000001403381F3: xor     rcx, r15
 * 00000001403381F6: mov     rax, rcx
 * 00000001403381F9: rol     rax, 11h
 * 00000001403381FD: xor     rcx, rax
 * 0000000140338200: mov     rax, rsi
 * 0000000140338203: mul     rcx
 * 0000000140338206: xor     eax, edx
 * 0000000140338208: mov     [rbp+20F0h+var_1AF0], rdx
 * 000000014033820F: xor     r12d, eax
 * 0000000140338212: and     r12d, 3Fh
 * 0000000140338216: cmovz   r12d, r13d
 * 000000014033821A: add     r10d, ebx
 * 000000014033821D: jnz     short loc_1403381C9
 * 000000014033821F: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140338223: and     r9d, 7Fh
 * 0000000140338227: cmp     r9d, 8
 * 000000014033822B: jb      short loc_14033824A
 * 000000014033822D: mov     edx, r9d
 * 0000000140338230: shr     rdx, 3
 * 0000000140338234: xor     r8, [r11]
 * 0000000140338237: mov     ecx, r12d
 * 000000014033823A: rol     r8, cl
 * 000000014033823D: add     r11, 8
 * 0000000140338241: add     r9d, 0FFFFFFF8h
 * 0000000140338245: sub     rdx, r13
 * 0000000140338248: jnz     short loc_140338234
 * 000000014033824A: test    r9d, r9d
 * 000000014033824D: jz      short loc_140338264
 * 000000014033824F: movzx   eax, byte ptr [r11]
 * 0000000140338253: mov     ecx, r12d
 * 0000000140338256: xor     r8, rax
 * 0000000140338259: add     r11, r13
 * 000000014033825C: rol     r8, cl
 * 000000014033825F: add     r9d, ebx
 * 0000000140338262: jnz     short loc_14033824F
 * 0000000140338264: mov     rax, r8
 * 0000000140338267: jmp     short loc_14033826C
 * 0000000140338269: xor     r8d, eax
 * 000000014033826C: shr     rax, 1Fh
 * 0000000140338270: test    rax, rax
 * 0000000140338273: jnz     short loc_140338269
 * 0000000140338275: mov     r11, [rbp+20F0h+var_2068]
 * 000000014033827C: btr     r8d, 1Fh
 * 0000000140338281: mov     [r11+14h], r8d
 * 0000000140338285: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140338289: mov     rdx, [rbp+20F0h+var_2030]
 * 0000000140338290: cmp     r14, rdx
 * 0000000140338293: jz      short loc_1403382D4
 * 0000000140338295: mov     eax, [r14]
 * 0000000140338298: mov     ecx, [r14+4]
 * 000000014033829C: cmp     eax, [rbp+20F0h+var_2060]
 * 00000001403382A2: jb      short loc_1403382D4
 * 00000001403382A4: cmp     ecx, [rbp+20F0h+var_20E8]
 * 00000001403382A7: ja      short loc_1403382D4
 * 00000001403382A9: mov     rcx, [rbp+20F0h+var_20F0]
 * 00000001403382AD: mov     r15d, 0Ch
 * 00000001403382B3: cmp     rcx, rdx
 * 00000001403382B6: jz      short loc_1403382CD
 * 00000001403382B8: mov     rax, [rbp+20F0h+var_2080]
 * 00000001403382BC: mov     byte ptr [rax], 80h
 * 00000001403382BF: inc     rax
 * 00000001403382C2: add     rcx, r15
 * 00000001403382C5: mov     [rbp+20F0h+var_2080], rax
 * 00000001403382C9: mov     [rbp+20F0h+var_20F0], rcx
 * 00000001403382CD: add     r14, r15
 * 00000001403382D0: mov     [rbp+20F0h+var_20B0], r14
 * 00000001403382D4: mov     r13, [rbp+20F0h+var_20D8]
 * 00000001403382D8: add     r11, 18h
 * 00000001403382DC: mov     r12, [rbp+20F0h+var_20A0]
 * 00000001403382E0: add     r13, 28h ; '('
 * 00000001403382E4: mov     r10d, 1
 * 00000001403382EA: mov     [rbp+20F0h+var_2068], r11
 * 00000001403382F1: mov     [rbp+20F0h+var_20D8], r13
 * 00000001403382F5: cmp     r11, [rbp+20F0h+var_20C8]
 * 00000001403382F9: jnz     loc_140337A3C
 * 00000001403382FF: mov     rbx, [rbp+20F0h+var_1FF0]
 * 0000000140338306: mov     r13, rbx
 * 0000000140338309: mov     [rbp+20F0h+var_1FE0], rbx
 * 0000000140338310: mov     rbx, [rbp+20F0h+var_2000]
 * 0000000140338317: xor     eax, eax
 * 0000000140338319: mov     ecx, eax
 * 000000014033831B: mov     r12d, [rbp+20F0h+var_2078]
 * 000000014033831F: mov     rdx, [rbp+20F0h+var_20D0]
 * 0000000140338323: mov     r8d, 80000000h
 * 0000000140338329: mov     rax, r13
 * 000000014033832C: mov     [rbp+20F0h+var_20E0], r13
 * 0000000140338330: sub     rax, rsi
 * 0000000140338333: mov     rsi, r13
 * 0000000140338336: add     rdx, rax
 * 0000000140338339: lea     eax, [rcx+r8]
 * 000000014033833D: mov     [rbp+20F0h+var_20D0], rdx
 * 0000000140338341: test    r8d, eax
 * 0000000140338344: jnz     short loc_140338352
 * 0000000140338346: cmp     ecx, 0C000010Eh
 * 000000014033834C: jnz     loc_140338795
 * 0000000140338352: mov     [rdx+28h], rbx
 * 0000000140338356: jmp     loc_140338795
 * 000000014033835B: mov     rbx, r13
 * 000000014033835E: mov     [rbp+20F0h+var_2078], eax
 * 0000000140338361: mov     r13, rax
 * 0000000140338364: mov     r15d, eax
 * 0000000140338367: mov     r12d, eax
 * 000000014033836A: jmp     short loc_14033836E
 * 000000014033836C: xor     eax, eax
 * 000000014033836E: mov     [rbp+20F0h+var_1F78], eax
 * 0000000140338374: mov     rax, [rsi+2F0h]
 * 000000014033837B: lea     r8, [rbp+20F0h+var_1E38]
 * 0000000140338382: lea     rdx, [rbp+20F0h+var_1F78]
 * 0000000140338389: mov     ecx, r12d
 * 000000014033838C: call    KeGuardDispatchICall
 * 0000000140338391: test    eax, eax
 * 0000000140338393: jz      loc_1403384D5
 * 0000000140338399: mov     rax, [rsi+2D0h]
 * 00000001403383A0: mov     rcx, [rbp+20F0h+var_1E38]
 * 00000001403383A7: call    KeGuardDispatchICall
 * 00000001403383AC: mov     r14, rax
 * 00000001403383AF: test    rax, rax
 * 00000001403383B2: jz      short loc_140338374
 * 00000001403383B4: mov     rax, [rsi+2D8h]
 * 00000001403383BB: mov     edi, 1
 * 00000001403383C0: add     r15d, edi
 * 00000001403383C3: mov     rcx, r14
 * 00000001403383C6: mov     [rbp+20F0h+var_2078], r15d
 * 00000001403383CA: call    KeGuardDispatchICall
 * 00000001403383CF: mov     r15, rax
 * 00000001403383D2: lea     rdx, [rbp+20F0h+var_1AE8]
 * 00000001403383D9: mov     rax, [rsi+200h]
 * 00000001403383E0: mov     rcx, r15
 * 00000001403383E3: call    KeGuardDispatchICall
 * 00000001403383E8: test    rax, rax
 * 00000001403383EB: jz      short loc_14033840C
 * 00000001403383ED: mov     rax, [rsi+2E0h]
 * 00000001403383F4: mov     rdx, r14
 * 00000001403383F7: mov     rcx, [rbp+20F0h+var_1E38]
 * 00000001403383FE: call    KeGuardDispatchICall
 * 0000000140338403: mov     r15d, [rbp+20F0h+var_2078]
 * 0000000140338407: jmp     loc_140338374
 * 000000014033840C: test    dword ptr [rsi+970h], 40000000h
 * 0000000140338416: jz      short loc_140338460
 * 0000000140338418: mov     rcx, [rsi+0A50h]
 * 000000014033841F: mov     edx, 30h ; '0'
 * 0000000140338424: lea     r8d, [rdx-2Ah]
 * 0000000140338428: mov     rax, [rbx]
 * 000000014033842B: add     edx, 0FFFFFFF8h
 * 000000014033842E: mov     [rcx], rax
 * 0000000140338431: add     rbx, 8
 * 0000000140338435: add     rcx, 8
 * 0000000140338439: sub     r8, rdi
 * 000000014033843C: jnz     short loc_140338428
 * 000000014033843E: test    edx, edx
 * 0000000140338440: jz      short loc_140338459
 * 0000000140338442: mov     esi, 0FFFFFFFFh
 * 0000000140338447: mov     al, [rbx]
 * 0000000140338449: add     rbx, rdi
 * 000000014033844C: mov     [rcx], al
 * 000000014033844E: add     rcx, rdi
 * 0000000140338451: add     edx, esi
 * 0000000140338453: jnz     short loc_140338447
 * 0000000140338455: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140338459: mov     rbx, [rsi+0A50h]
 * 0000000140338460: mov     [rbx+18h], r15
 * 0000000140338464: mov     rdx, rdi
 * 0000000140338467: mov     rax, [rsi+580h]
 * 000000014033846E: mov     [rax], rbx
 * 0000000140338471: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140338478: mov     rax, [rsi+580h]
 * 000000014033847F: mov     [rax+8], r15
 * 0000000140338483: mov     dword ptr [rax+14h], 1000h
 * 000000014033848A: xor     eax, eax
 * 000000014033848C: cmp     [rsi+8D8h], eax
 * 0000000140338492: jnz     short loc_1403384DA
 * 0000000140338494: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033849E: add     rax, rsi
 * 00000001403384A1: mov     [rsi+8E0h], rax
 * 00000001403384A8: mov     rax, 0B3B74BDEE4453415h
 * 00000001403384B2: add     rax, rbx
 * 00000001403384B5: mov     [rsi+8E8h], rax
 * 00000001403384BC: movsxd  rax, dword ptr [rbx]
 * 00000001403384BF: mov     [rsi+8F0h], rax
 * 00000001403384C6: mov     [rsi+8F8h], r13
 * 00000001403384CD: mov     [rsi+8D8h], edx
 * 00000001403384D3: jmp     short loc_1403384DA
 * 00000001403384D5: mov     edx, 1
 * 00000001403384DA: mov     r15d, [rbp+20F0h+var_2078]
 * 00000001403384DE: add     r12d, edx
 * 00000001403384E1: add     r13, rdx
 * 00000001403384E4: cmp     r12d, 3
 * 00000001403384E8: jb      loc_14033836C
 * 00000001403384EE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403384F5: mov     r12d, r15d
 * 00000001403384F8: jmp     loc_14033879A
 * 00000001403384FD: mov     rbx, r13
 * 0000000140338500: mov     [rbp+20F0h+var_1D80], rax
 * 0000000140338507: mov     r12d, eax
 * 000000014033850A: mov     r15, cr8
 * 000000014033850E: mov     [rbp+20F0h+var_20C8], r15
 * 0000000140338512: mov     cr8, r8
 * 0000000140338516: mov     rax, [rsi+300h]
 * 000000014033851D: lea     rcx, [rbp+20F0h+var_1D80]
 * 0000000140338524: call    KeGuardDispatchICall
 * 0000000140338529: mov     r14, rax
 * 000000014033852C: test    rax, rax
 * 000000014033852F: jz      loc_14033864C
 * 0000000140338535: mov     edi, 1
 * 000000014033853A: mov     rax, [rsi+200h]
 * 0000000140338541: lea     rdx, [rbp+20F0h+var_1AE0]
 * 0000000140338548: mov     rcx, r14
 * 000000014033854B: add     r12d, edi
 * 000000014033854E: call    KeGuardDispatchICall
 * 0000000140338553: test    rax, rax
 * 0000000140338556: jnz     loc_140338622
 * 000000014033855C: test    dword ptr [rsi+970h], 40000000h
 * 0000000140338566: jz      short loc_1403385AE
 * 0000000140338568: mov     rcx, [rsi+0A50h]
 * 000000014033856F: lea     edx, [rax+30h]
 * 0000000140338572: lea     r8d, [rax+6]
 * 0000000140338576: mov     rax, [rbx]
 * 0000000140338579: add     edx, 0FFFFFFF8h
 * 000000014033857C: mov     [rcx], rax
 * 000000014033857F: add     rbx, 8
 * 0000000140338583: add     rcx, 8
 * 0000000140338587: sub     r8, rdi
 * 000000014033858A: jnz     short loc_140338576
 * 000000014033858C: test    edx, edx
 * 000000014033858E: jz      short loc_1403385A7
 * 0000000140338590: mov     esi, 0FFFFFFFFh
 * 0000000140338595: mov     al, [rbx]
 * 0000000140338597: add     rbx, rdi
 * 000000014033859A: mov     [rcx], al
 * 000000014033859C: add     rcx, rdi
 * 000000014033859F: add     edx, esi
 * 00000001403385A1: jnz     short loc_140338595
 * 00000001403385A3: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403385A7: mov     rbx, [rsi+0A50h]
 * 00000001403385AE: mov     [rbx+18h], r14
 * 00000001403385B2: mov     rax, [rsi+580h]
 * 00000001403385B9: mov     [rax], rbx
 * 00000001403385BC: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001403385C3: mov     rax, [rsi+580h]
 * 00000001403385CA: mov     [rax+8], r14
 * 00000001403385CE: mov     dword ptr [rax+14h], 1000h
 * 00000001403385D5: xor     eax, eax
 * 00000001403385D7: cmp     [rsi+8D8h], eax
 * 00000001403385DD: jnz     short loc_140338622
 * 00000001403385DF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403385E9: add     rax, rsi
 * 00000001403385EC: mov     [rsi+8E0h], rax
 * 00000001403385F3: mov     rax, 0B3B74BDEE4453415h
 * 00000001403385FD: add     rax, rbx
 * 0000000140338600: mov     [rsi+8E8h], rax
 * 0000000140338607: movsxd  rax, dword ptr [rbx]
 * 000000014033860A: mov     [rsi+8F0h], rax
 * 0000000140338611: mov     qword ptr [rsi+8F8h], 4
 * 000000014033861C: mov     [rsi+8D8h], edi
 * 0000000140338622: mov     rax, [rsi+300h]
 * 0000000140338629: lea     rcx, [rbp+20F0h+var_1D80]
 * 0000000140338630: call    KeGuardDispatchICall
 * 0000000140338635: mov     r14, rax
 * 0000000140338638: test    rax, rax
 * 000000014033863B: jnz     loc_14033853A
 * 0000000140338641: mov     r15, [rbp+20F0h+var_20C8]
 * 0000000140338645: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033864C: movzx   eax, r15b
 * 0000000140338650: mov     cr8, rax
 * 0000000140338654: jmp     loc_140338795
 * 0000000140338659: mov     [rbp+20F0h+var_1D78], rax
 * 0000000140338660: lea     rcx, [rbp+20F0h+var_1D78]
 * 0000000140338667: mov     r12d, eax
 * 000000014033866A: mov     rbx, r13
 * 000000014033866D: mov     rax, [rsi+2F8h]
 * 0000000140338674: call    KeGuardDispatchICall
 * 0000000140338679: mov     r14, rax
 * 000000014033867C: test    rax, rax
 * 000000014033867F: jz      loc_140338795
 * 0000000140338685: mov     edi, 1
 * 000000014033868A: mov     rax, [rsi+200h]
 * 0000000140338691: lea     rdx, [rbp+20F0h+var_1AD8]
 * 0000000140338698: mov     rcx, r14
 * 000000014033869B: add     r12d, edi
 * 000000014033869E: call    KeGuardDispatchICall
 * 00000001403386A3: test    rax, rax
 * 00000001403386A6: jnz     loc_14033876F
 * 00000001403386AC: test    [rsi+970h], r15d
 * 00000001403386B3: jz      short loc_1403386FB
 * 00000001403386B5: mov     rcx, [rsi+0A50h]
 * 00000001403386BC: lea     edx, [rax+30h]
 * 00000001403386BF: lea     r8d, [rax+6]
 * 00000001403386C3: mov     rax, [rbx]
 * 00000001403386C6: add     edx, 0FFFFFFF8h
 * 00000001403386C9: mov     [rcx], rax
 * 00000001403386CC: add     rbx, 8
 * 00000001403386D0: add     rcx, 8
 * 00000001403386D4: sub     r8, rdi
 * 00000001403386D7: jnz     short loc_1403386C3
 * 00000001403386D9: test    edx, edx
 * 00000001403386DB: jz      short loc_1403386F4
 * 00000001403386DD: mov     esi, 0FFFFFFFFh
 * 00000001403386E2: mov     al, [rbx]
 * 00000001403386E4: add     rbx, rdi
 * 00000001403386E7: mov     [rcx], al
 * 00000001403386E9: add     rcx, rdi
 * 00000001403386EC: add     edx, esi
 * 00000001403386EE: jnz     short loc_1403386E2
 * 00000001403386F0: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403386F4: mov     rbx, [rsi+0A50h]
 * 00000001403386FB: mov     [rbx+18h], r14
 * 00000001403386FF: mov     rax, [rsi+580h]
 * 0000000140338706: mov     [rax], rbx
 * 0000000140338709: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140338710: mov     rax, [rsi+580h]
 * 0000000140338717: mov     [rax+8], r14
 * 000000014033871B: mov     dword ptr [rax+14h], 1000h
 * 0000000140338722: xor     eax, eax
 * 0000000140338724: cmp     [rsi+8D8h], eax
 * 000000014033872A: jnz     short loc_14033876F
 * 000000014033872C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338736: add     rax, rsi
 * 0000000140338739: mov     [rsi+8E0h], rax
 * 0000000140338740: mov     rax, 0B3B74BDEE4453415h
 * 000000014033874A: add     rax, rbx
 * 000000014033874D: mov     [rsi+8E8h], rax
 * 0000000140338754: movsxd  rax, dword ptr [rbx]
 * 0000000140338757: mov     [rsi+8F0h], rax
 * 000000014033875E: mov     qword ptr [rsi+8F8h], 3
 * 0000000140338769: mov     [rsi+8D8h], edi
 * 000000014033876F: mov     rax, [rsi+2F8h]
 * 0000000140338776: lea     rcx, [rbp+20F0h+var_1D78]
 * 000000014033877D: call    KeGuardDispatchICall
 * 0000000140338782: mov     r14, rax
 * 0000000140338785: test    rax, rax
 * 0000000140338788: jnz     loc_14033868A
 * 000000014033878E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140338795: mov     edx, 1
 * 000000014033879A: shl     r12d, 0Ch
 * 000000014033879E: mov     r11, 0B3B74BDEE4453415h
 * 00000001403387A8: add     [rsi+810h], r12d
 * 00000001403387AF: add     [rsi+80Ch], edx
 * 00000001403387B5: mov     eax, [rsi+814h]
 * 00000001403387BB: cmp     [rsi+810h], eax
 * 00000001403387C1: jge     short loc_1403387DE
 * 00000001403387C3: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403387C7: mov     r8d, 0Ch
 * 00000001403387CD: mov     r15d, 40000000h
 * 00000001403387D3: jmp     loc_1403360E0
 * 00000001403387D8: mov     [rsi+80Ch], eax
 * 00000001403387DE: mov     [rbp+20F0h+var_20E0], rsi
 * 00000001403387E2: jmp     loc_140334318
 * 00000001403387E7: mov     edx, [r13+2Ch]
 * 00000001403387EB: lea     rcx, [rbp+20F0h+var_1790]
 * 00000001403387F2: mov     rax, [rsi+198h]
 * 00000001403387F9: mov     ebx, [r13+28h]
 * 00000001403387FD: call    KeGuardDispatchICall
 * 0000000140338802: mov     rax, [rsi+1C8h]
 * 0000000140338809: lea     rdx, [rbp+20F0h+var_1780]
 * 0000000140338810: lea     rcx, [rbp+20F0h+var_1790]
 * 0000000140338817: call    KeGuardDispatchICall
 * 000000014033881C: cmp     r14d, 26h ; '&'
 * 0000000140338820: jz      short loc_140338830
 * 0000000140338822: test    ebx, ebx
 * 0000000140338824: jz      short loc_14033882B
 * 0000000140338826: mov     rbx, cr4
 * 0000000140338829: jmp     short loc_14033883F
 * 000000014033882B: mov     rbx, cr0
 * 000000014033882E: jmp     short loc_14033883F
 * 0000000140338830: xor     ecx, ecx
 * 0000000140338832: xgetbv
 * 0000000140338835: shl     rdx, 20h
 * 0000000140338839: or      rdx, rax
 * 000000014033883C: mov     rbx, rdx
 * 000000014033883F: mov     rax, [rsi+190h]
 * 0000000140338846: lea     rcx, [rbp+20F0h+var_1780]
 * 000000014033884D: call    KeGuardDispatchICall
 * 0000000140338852: mov     r8, [r13+18h]
 * 0000000140338856: xor     r10d, r10d
 * 0000000140338859: mov     rcx, [r13+20h]
 * 000000014033885D: and     r8, rbx
 * 0000000140338860: cmp     r8, rcx
 * 0000000140338863: jz      loc_140334625
 * 0000000140338869: mov     eax, [r13+28h]
 * 000000014033886D: mov     edx, [r13+2Ch]
 * 0000000140338871: shl     rdx, 20h
 * 0000000140338875: or      rdx, rax
 * 0000000140338878: mov     eax, [rsi+8D8h]
 * 000000014033887E: test    eax, eax
 * 0000000140338880: jnz     loc_140334625
 * 0000000140338886: mov     rax, [rsi+580h]
 * 000000014033888D: xor     rcx, r8
 * 0000000140338890: mov     [rax+18h], rcx
 * 0000000140338894: mov     eax, [rsi+8D8h]
 * 000000014033889A: test    eax, eax
 * 000000014033889C: jnz     loc_140334625
 * 00000001403388A2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403388AC: mov     r11, 0B3B74BDEE4453415h
 * 00000001403388B6: add     rax, rsi
 * 00000001403388B9: mov     [rsi+8E0h], rax
 * 00000001403388C0: lea     rax, [r11+r13]
 * 00000001403388C4: mov     [rsi+8E8h], rax
 * 00000001403388CB: movsxd  rax, dword ptr [r13+0]
 * 00000001403388CF: mov     [rsi+8F0h], rax
 * 00000001403388D6: mov     [rsi+8F8h], rdx
 * 00000001403388DD: mov     eax, 1
 * 00000001403388E2: mov     [rsi+8D8h], eax
 * 00000001403388E8: jmp     loc_14033462F
 * 00000001403388ED: cmp     dword ptr [rsi+934h], 0Bh
 * 00000001403388F4: jnz     loc_140334318
 * 00000001403388FA: add     dword ptr [rsi+810h], 100h
 * 0000000140338904: mov     r14, [rsi+578h]
 * 000000014033890B: mov     rax, [rsi+2D0h]
 * 0000000140338912: mov     rcx, r14
 * 0000000140338915: call    KeGuardDispatchICall
 * 000000014033891A: mov     rbx, rax
 * 000000014033891D: test    rax, rax
 * 0000000140338920: jz      loc_140334DB4
 * 0000000140338926: mov     rax, [rsi+2D8h]
 * 000000014033892D: mov     rcx, rbx
 * 0000000140338930: call    KeGuardDispatchICall
 * 0000000140338935: mov     rcx, rax
 * 0000000140338938: mov     rax, [r13+18h]
 * 000000014033893C: test    rax, rax
 * 000000014033893F: jz      short loc_14033899F
 * 0000000140338941: cmp     rax, rcx
 * 0000000140338944: jz      loc_140338A15
 * 000000014033894A: xor     eax, eax
 * 000000014033894C: cmp     [rsi+8D8h], eax
 * 0000000140338952: jnz     loc_140338A15
 * 0000000140338958: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338962: add     rax, rsi
 * 0000000140338965: mov     [rsi+8E0h], rax
 * 000000014033896C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140338976: add     rax, r13
 * 0000000140338979: mov     [rsi+8E8h], rax
 * 0000000140338980: movsxd  rax, dword ptr [r13+0]
 * 0000000140338984: mov     [rsi+8F0h], rax
 * 000000014033898B: mov     eax, 1
 * 0000000140338990: mov     [rsi+8F8h], rcx
 * 0000000140338997: mov     [rsi+8D8h], eax
 * 000000014033899D: jmp     short loc_140338A15
 * 000000014033899F: mov     eax, [rsi+954h]
 * 00000001403389A5: mov     rdx, [rsi+958h]
 * 00000001403389AC: test    rax, rax
 * 00000001403389AF: jz      short loc_1403389C2
 * 00000001403389B1: lea     r8, [rax-1]
 * 00000001403389B5: add     r8, rdx
 * 00000001403389B8: cmp     rcx, rdx
 * 00000001403389BB: jb      short loc_1403389C2
 * 00000001403389BD: cmp     rcx, r8
 * 00000001403389C0: jbe     short loc_140338A11
 * 00000001403389C2: xor     eax, eax
 * 00000001403389C4: cmp     [rsi+8D8h], eax
 * 00000001403389CA: jnz     short loc_140338A11
 * 00000001403389CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403389D6: add     rax, rsi
 * 00000001403389D9: mov     [rsi+8E0h], rax
 * 00000001403389E0: mov     rax, 0B3B74BDEE4453415h
 * 00000001403389EA: add     rax, r13
 * 00000001403389ED: mov     [rsi+8E8h], rax
 * 00000001403389F4: movsxd  rax, dword ptr [r13+0]
 * 00000001403389F8: mov     [rsi+8F0h], rax
 * 00000001403389FF: mov     eax, 1
 * 0000000140338A04: mov     [rsi+8F8h], rcx
 * 0000000140338A0B: mov     [rsi+8D8h], eax
 * 0000000140338A11: mov     [r13+18h], rcx
 * 0000000140338A15: mov     rax, [rsi+2E0h]
 * 0000000140338A1C: mov     rdx, rbx
 * 0000000140338A1F: mov     rcx, r14
 * 0000000140338A22: call    KeGuardDispatchICall
 * 0000000140338A27: jmp     loc_140334DB4
 * 0000000140338A2C: jnz     short loc_140338A7E
 * 0000000140338A2E: xor     eax, eax
 * 0000000140338A30: cmp     [rsi+960h], rax
 * 0000000140338A37: jz      loc_140334312
 * 0000000140338A3D: mov     ecx, [rsi+974h]
 * 0000000140338A43: mov     eax, ecx
 * 0000000140338A45: shr     eax, 2
 * 0000000140338A48: and     eax, edx
 * 0000000140338A4A: jnz     loc_14033441D
 * 0000000140338A50: xor     edx, edx
 * 0000000140338A52: cmp     [rsi+80Ch], edx
 * 0000000140338A58: lea     edx, [rax+1]
 * 0000000140338A5B: jnz     short loc_140338A71
 * 0000000140338A5D: mov     eax, ecx
 * 0000000140338A5F: shl     eax, 3
 * 0000000140338A62: xor     eax, ecx
 * 0000000140338A64: and     eax, 20h
 * 0000000140338A67: xor     eax, ecx
 * 0000000140338A69: mov     [rsi+974h], eax
 * 0000000140338A6F: jmp     short loc_140338A7E
 * 0000000140338A71: shr     ecx, 5
 * 0000000140338A74: and     ecx, edx
 * 0000000140338A76: cmp     eax, ecx
 * 0000000140338A78: jnz     loc_14033441D
 * 0000000140338A7E: mov     r14, [r13+8]
 * 0000000140338A82: mov     r8d, [r13+10h]
 * 0000000140338A86: mov     r9, r14
 * 0000000140338A89: add     [rsi+810h], r8d
 * 0000000140338A90: mov     rax, r14
 * 0000000140338A93: mov     r11d, [rsi+7FCh]
 * 0000000140338A9A: mov     r15, [rsi+800h]
 * 0000000140338AA1: lea     rcx, [r14+r8]
 * 0000000140338AA5: cmp     r14, rcx
 * 0000000140338AA8: jnb     short loc_140338ABB
 * 0000000140338AAA: mov     r10d, 40h ; '@'
 * 0000000140338AB0: prefetchnta byte ptr [rax]
 * 0000000140338AB3: add     rax, r10
 * 0000000140338AB6: cmp     rax, rcx
 * 0000000140338AB9: jb      short loc_140338AB0
 * 0000000140338ABB: mov     r10d, r8d
 * 0000000140338ABE: mov     rbx, r15
 * 0000000140338AC1: shr     r10d, 7
 * 0000000140338AC5: mov     r12d, 0FFFFFFFFh
 * 0000000140338ACB: test    r10d, r10d
 * 0000000140338ACE: jz      short loc_140338B3B
 * 0000000140338AD0: mov     rdi, 7010008004002001h
 * 0000000140338ADA: mov     eax, 8
 * 0000000140338ADF: xor     rbx, [r9]
 * 0000000140338AE2: mov     ecx, r11d
 * 0000000140338AE5: rol     rbx, cl
 * 0000000140338AE8: xor     rbx, [r9+8]
 * 0000000140338AEC: add     r9, 10h
 * 0000000140338AF0: rol     rbx, cl
 * 0000000140338AF3: sub     rax, rdx
 * 0000000140338AF6: jnz     short loc_140338ADF
 * 0000000140338AF8: mov     rcx, r9
 * 0000000140338AFB: sub     rcx, r14
 * 0000000140338AFE: xor     rcx, r15
 * 0000000140338B01: mov     rax, rcx
 * 0000000140338B04: rol     rax, 11h
 * 0000000140338B08: xor     rcx, rax
 * 0000000140338B0B: mov     rax, rdi
 * 0000000140338B0E: mul     rcx
 * 0000000140338B11: xor     r11d, eax
 * 0000000140338B14: mov     [rbp+20F0h+var_1AD0], rdx
 * 0000000140338B1B: xor     r11d, edx
 * 0000000140338B1E: mov     edx, 1
 * 0000000140338B23: and     r11d, 3Fh
 * 0000000140338B27: cmovz   r11d, edx
 * 0000000140338B2B: add     r10d, r12d
 * 0000000140338B2E: jnz     short loc_140338ADA
 * 0000000140338B30: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140338B34: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140338B3B: and     r8d, 7Fh
 * 0000000140338B3F: cmp     r8d, 8
 * 0000000140338B43: jb      short loc_140338B62
 * 0000000140338B45: mov     eax, r8d
 * 0000000140338B48: shr     rax, 3
 * 0000000140338B4C: xor     rbx, [r9]
 * 0000000140338B4F: mov     ecx, r11d
 * 0000000140338B52: rol     rbx, cl
 * 0000000140338B55: add     r9, 8
 * 0000000140338B59: add     r8d, 0FFFFFFF8h
 * 0000000140338B5D: sub     rax, rdx
 * 0000000140338B60: jnz     short loc_140338B4C
 * 0000000140338B62: test    r8d, r8d
 * 0000000140338B65: jz      short loc_140338B7C
 * 0000000140338B67: movzx   eax, byte ptr [r9]
 * 0000000140338B6B: mov     ecx, r11d
 * 0000000140338B6E: xor     rbx, rax
 * 0000000140338B71: add     r9, rdx
 * 0000000140338B74: rol     rbx, cl
 * 0000000140338B77: add     r8d, r12d
 * 0000000140338B7A: jnz     short loc_140338B67
 * 0000000140338B7C: mov     rax, rbx
 * 0000000140338B7F: shr     rax, 1Fh
 * 0000000140338B83: xor     r10d, r10d
 * 0000000140338B86: jmp     short loc_140338B8E
 * 0000000140338B88: xor     ebx, eax
 * 0000000140338B8A: shr     rax, 1Fh
 * 0000000140338B8E: test    rax, rax
 * 0000000140338B91: jnz     short loc_140338B88
 * 0000000140338B93: btr     ebx, 1Fh
 * 0000000140338B97: cmp     ebx, [r13+14h]
 * 0000000140338B9B: jz      loc_140338CF9
 * 0000000140338BA1: lock or [rsp+10F0h+var_10F0], eax
 * 0000000140338BA5: mov     eax, [r13+18h]
 * 0000000140338BA9: test    dl, al
 * 0000000140338BAB: jz      short loc_140338BBE
 * 0000000140338BAD: mov     rax, [rsi+570h]
 * 0000000140338BB4: mov     cl, [rax]
 * 0000000140338BB6: test    cl, cl
 * 0000000140338BB8: jnz     loc_140338CF9
 * 0000000140338BBE: mov     ecx, [r13+10h]
 * 0000000140338BC2: mov     rdx, [r13+8]
 * 0000000140338BC6: test    rcx, rcx
 * 0000000140338BC9: jz      loc_140338C64
 * 0000000140338BCF: mov     eax, [rsi+974h]
 * 0000000140338BD5: mov     r8d, 40h ; '@'
 * 0000000140338BDB: test    r8b, al
 * 0000000140338BDE: jz      loc_140338C64
 * 0000000140338BE4: mov     r12, cr8
 * 0000000140338BE8: lea     eax, [r8-3Eh]
 * 0000000140338BEC: mov     cr8, rax
 * 0000000140338BF0: lea     rax, [rcx-1]
 * 0000000140338BF4: mov     r14, rdx
 * 0000000140338BF7: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140338BFE: add     rax, rdx
 * 0000000140338C01: mov     ecx, 0FFFh
 * 0000000140338C06: or      rax, rcx
 * 0000000140338C09: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140338C0D: lea     r13, [r14-1]
 * 0000000140338C11: movzx   r15d, r12b
 * 0000000140338C15: mov     rax, [rsi+460h]
 * 0000000140338C1C: xor     edx, edx
 * 0000000140338C1E: mov     rcx, r14
 * 0000000140338C21: call    KeGuardDispatchICall
 * 0000000140338C26: cmp     eax, 0C000022Dh
 * 0000000140338C2B: jnz     short loc_140338C55
 * 0000000140338C2D: mov     eax, 1
 * 0000000140338C32: cmp     r12b, al
 * 0000000140338C35: ja      loc_140338CD8
 * 0000000140338C3B: movzx   r15d, r12b
 * 0000000140338C3F: mov     cr8, r15
 * 0000000140338C43: mov     al, [r14]
 * 0000000140338C46: mov     rax, cr8
 * 0000000140338C4A: mov     eax, 2
 * 0000000140338C4F: mov     cr8, rax
 * 0000000140338C53: jmp     short loc_140338C15
 * 0000000140338C55: xor     r10d, r10d
 * 0000000140338C58: test    eax, eax
 * 0000000140338C5A: jns     short loc_140338CDB
 * 0000000140338C5C: mov     cr8, r15
 * 0000000140338C60: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140338C64: mov     eax, [rsi+8D8h]
 * 0000000140338C6A: mov     ecx, [r13+14h]
 * 0000000140338C6E: test    eax, eax
 * 0000000140338C70: jnz     short loc_140338C88
 * 0000000140338C72: mov     eax, ebx
 * 0000000140338C74: xor     rcx, rax
 * 0000000140338C77: mov     rax, [rsi+580h]
 * 0000000140338C7E: mov     [rax+18h], rcx
 * 0000000140338C82: mov     eax, [rsi+8D8h]
 * 0000000140338C88: mov     rcx, [r13+8]
 * 0000000140338C8C: mov     r11, 0B3B74BDEE4453415h
 * 0000000140338C96: mov     ebx, 1
 * 0000000140338C9B: test    eax, eax
 * 0000000140338C9D: jnz     short loc_140338D08
 * 0000000140338C9F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338CA9: add     rax, rsi
 * 0000000140338CAC: mov     [rsi+8E0h], rax
 * 0000000140338CB3: lea     rax, [r11+r13]
 * 0000000140338CB7: mov     [rsi+8E8h], rax
 * 0000000140338CBE: movsxd  rax, dword ptr [r13+0]
 * 0000000140338CC2: mov     [rsi+8F0h], rax
 * 0000000140338CC9: mov     [rsi+8F8h], rcx
 * 0000000140338CD0: mov     [rsi+8D8h], ebx
 * 0000000140338CD6: jmp     short loc_140338D08
 * 0000000140338CD8: xor     r10d, r10d
 * 0000000140338CDB: mov     r8d, 1000h
 * 0000000140338CE1: add     r14, r8
 * 0000000140338CE4: add     r13, r8
 * 0000000140338CE7: cmp     r13, [rbp+20F0h+var_20C8]
 * 0000000140338CEB: jnz     loc_140338C11
 * 0000000140338CF1: mov     cr8, r15
 * 0000000140338CF5: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140338CF9: mov     ebx, 1
 * 0000000140338CFE: mov     r11, 0B3B74BDEE4453415h
 * 0000000140338D08: mov     r15d, 40000000h
 * 0000000140338D0E: test    [rsi+970h], r15d
 * 0000000140338D15: jz      loc_14033462F
 * 0000000140338D1B: mov     r8d, [r13+10h]
 * 0000000140338D1F: test    r8d, r8d
 * 0000000140338D22: jz      loc_140334318
 * 0000000140338D28: mov     rdx, [r13+8]
 * 0000000140338D2C: lea     r9, [rbp+20F0h+var_1770]
 * 0000000140338D33: mov     rcx, rsi
 * 0000000140338D36: call    sub_1401ADA3C
 * 0000000140338D3B: mov     r8d, 10h
 * 0000000140338D41: lea     r9, [r13+1Ch]
 * 0000000140338D45: lea     r10, [rbp+20F0h+var_1770]
 * 0000000140338D4C: mov     rcx, [r10]
 * 0000000140338D4F: add     r10, 8
 * 0000000140338D53: mov     rax, [r9]
 * 0000000140338D56: add     r9, 8
 * 0000000140338D5A: cmp     rcx, rax
 * 0000000140338D5D: jnz     short loc_140338DAA
 * 0000000140338D5F: add     r8d, 0FFFFFFF8h
 * 0000000140338D63: cmp     r8d, 8
 * 0000000140338D67: jnb     short loc_140338D4C
 * 0000000140338D69: test    r8d, r8d
 * 0000000140338D6C: jz      short loc_140338D8B
 * 0000000140338D6E: movzx   edx, byte ptr [r10]
 * 0000000140338D72: add     r10, rbx
 * 0000000140338D75: movzx   eax, byte ptr [r9]
 * 0000000140338D79: add     r9, rbx
 * 0000000140338D7C: cmp     rdx, rax
 * 0000000140338D7F: jnz     short loc_140338DAA
 * 0000000140338D81: mov     eax, 0FFFFFFFFh
 * 0000000140338D86: add     r8d, eax
 * 0000000140338D89: jnz     short loc_140338D6E
 * 0000000140338D8B: mov     r11, 0B3B74BDEE4453415h
 * 0000000140338D95: mov     rax, [rbp+20F0h+var_20D0]
 * 0000000140338D99: mov     eax, [rax+10h]
 * 0000000140338D9C: shl     eax, 4
 * 0000000140338D9F: add     [rsi+810h], eax
 * 0000000140338DA5: jmp     loc_140334318
 * 0000000140338DAA: xor     eax, eax
 * 0000000140338DAC: lock or [rsp+10F0h+var_10F0], eax
 * 0000000140338DB0: mov     eax, [r13+18h]
 * 0000000140338DB4: test    bl, al
 * 0000000140338DB6: jz      short loc_140338DC5
 * 0000000140338DB8: mov     rax, [rsi+570h]
 * 0000000140338DBF: mov     cl, [rax]
 * 0000000140338DC1: test    cl, cl
 * 0000000140338DC3: jnz     short loc_140338D8B
 * 0000000140338DC5: mov     edx, [r13+10h]
 * 0000000140338DC9: mov     rcx, [r13+8]
 * 0000000140338DCD: test    rdx, rdx
 * 0000000140338DD0: jz      loc_140338E82
 * 0000000140338DD6: mov     eax, [rsi+974h]
 * 0000000140338DDC: mov     r8d, 40h ; '@'
 * 0000000140338DE2: test    r8b, al
 * 0000000140338DE5: jz      loc_140338E82
 * 0000000140338DEB: mov     r15, cr8
 * 0000000140338DEF: lea     eax, [r8-3Eh]
 * 0000000140338DF3: mov     cr8, rax
 * 0000000140338DF7: mov     rbx, rcx
 * 0000000140338DFA: lea     r13, [rdx-1]
 * 0000000140338DFE: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140338E05: add     r13, rcx
 * 0000000140338E08: mov     eax, 0FFFh
 * 0000000140338E0D: or      r13, rax
 * 0000000140338E10: lea     r12, [rbx-1]
 * 0000000140338E14: movzx   r14d, r15b
 * 0000000140338E18: mov     rax, [rsi+460h]
 * 0000000140338E1F: xor     edx, edx
 * 0000000140338E21: mov     rcx, rbx
 * 0000000140338E24: call    KeGuardDispatchICall
 * 0000000140338E29: cmp     eax, 0C000022Dh
 * 0000000140338E2E: jnz     short loc_140338E53
 * 0000000140338E30: mov     eax, 1
 * 0000000140338E35: cmp     r15b, al
 * 0000000140338E38: ja      short loc_140338E57
 * 0000000140338E3A: movzx   r14d, r15b
 * 0000000140338E3E: mov     cr8, r14
 * 0000000140338E42: mov     al, [rbx]
 * 0000000140338E44: mov     rax, cr8
 * 0000000140338E48: mov     eax, 2
 * 0000000140338E4D: mov     cr8, rax
 * 0000000140338E51: jmp     short loc_140338E18
 * 0000000140338E53: test    eax, eax
 * 0000000140338E55: js      short loc_140338E71
 * 0000000140338E57: mov     r8d, 1000h
 * 0000000140338E5D: add     rbx, r8
 * 0000000140338E60: add     r12, r8
 * 0000000140338E63: cmp     r12, r13
 * 0000000140338E66: jnz     short loc_140338E14
 * 0000000140338E68: mov     cr8, r14
 * 0000000140338E6C: jmp     loc_140338D8B
 * 0000000140338E71: mov     cr8, r14
 * 0000000140338E75: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140338E79: mov     ebx, 1
 * 0000000140338E7E: mov     rcx, [r13+8]
 * 0000000140338E82: xor     eax, eax
 * 0000000140338E84: mov     r11, 0B3B74BDEE4453415h
 * 0000000140338E8E: cmp     [rsi+8D8h], eax
 * 0000000140338E94: jnz     loc_140338D95
 * 0000000140338E9A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338EA4: add     rax, rsi
 * 0000000140338EA7: mov     [rsi+8E0h], rax
 * 0000000140338EAE: lea     rax, [r11+r13]
 * 0000000140338EB2: mov     [rsi+8E8h], rax
 * 0000000140338EB9: movsxd  rax, dword ptr [r13+0]
 * 0000000140338EBD: mov     [rsi+8F0h], rax
 * 0000000140338EC4: mov     [rsi+8F8h], rcx
 * 0000000140338ECB: mov     [rsi+8D8h], ebx
 * 0000000140338ED1: jmp     loc_140338D95
 * 0000000140338ED6: mov     r8d, [r13+10h]
 * 0000000140338EDA: test    r8d, r8d
 * 0000000140338EDD: jnz     loc_1403394A6
 * 0000000140338EE3: lea     rax, [r13+30h]
 * 0000000140338EE7: xor     r9d, r9d
 * 0000000140338EEA: mov     [rbp+20F0h+var_1C70], rax
 * 0000000140338EF1: lea     rcx, [rbp+20F0h+var_1C78]
 * 0000000140338EF8: movzx   eax, word ptr [r13+28h]
 * 0000000140338EFD: xor     r8d, r8d
 * 0000000140338F00: mov     [rbp+20F0h+var_1C78], ax
 * 0000000140338F07: xor     edx, edx
 * 0000000140338F09: mov     [rbp+20F0h+var_1C76], ax
 * 0000000140338F10: lea     rax, [rbp+20F0h+var_1F80]
 * 0000000140338F17: mov     [rsp+10F0h+var_10B8], rax
 * 0000000140338F1C: xor     eax, eax
 * 0000000140338F1E: mov     [rsp+10F0h+var_10C0], rax
 * 0000000140338F23: mov     byte ptr [rsp+10F0h+var_10C8], al
 * 0000000140338F27: mov     rax, [rsi+500h]
 * 0000000140338F2E: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 0000000140338F33: mov     rax, [rsi+1E0h]
 * 0000000140338F3A: call    KeGuardDispatchICall
 * 0000000140338F3F: xor     r10d, r10d
 * 0000000140338F42: test    eax, eax
 * 0000000140338F44: js      loc_140334625
 * 0000000140338F4A: mov     rax, [rbp+20F0h+var_1F80]
 * 0000000140338F51: mov     ecx, [rax+10h]
 * 0000000140338F54: lea     eax, [r10+10h]
 * 0000000140338F58: test    al, cl
 * 0000000140338F5A: jnz     short loc_140338F68
 * 0000000140338F5C: mov     rcx, [rbp+20F0h+var_1F80]
 * 0000000140338F63: jmp     loc_140334DA8
 * 0000000140338F68: mov     rcx, [rsi+1E0h]
 * 0000000140338F6F: lea     r8, [rbp+20F0h+var_1CCC]
 * 0000000140338F76: mov     rax, [rsi+1F8h]
 * 0000000140338F7D: lea     rdx, [rbp+20F0h+var_1E30]
 * 0000000140338F84: call    KeGuardDispatchICall
 * 0000000140338F89: test    rax, rax
 * 0000000140338F8C: jz      short loc_140338FB0
 * 0000000140338F8E: mov     rax, [rsi+1F0h]
 * 0000000140338F95: mov     rcx, [rbp+20F0h+var_1E30]
 * 0000000140338F9C: call    KeGuardDispatchICall
 * 0000000140338FA1: test    rax, rax
 * 0000000140338FA4: jz      short loc_140338FB0
 * 0000000140338FA6: mov     r14d, [rax+50h]
 * 0000000140338FAA: mov     [rbp+20F0h+var_20A8], r14d
 * 0000000140338FAE: jmp     short loc_140338FB4
 * 0000000140338FB0: mov     r14d, [rbp+20F0h+var_20A8]
 * 0000000140338FB4: mov     rcx, [r13+18h]
 * 0000000140338FB8: lea     r8, [rbp+20F0h+var_1CD0]
 * 0000000140338FBF: mov     rax, [rsi+1F8h]
 * 0000000140338FC6: lea     rdx, [rbp+20F0h+var_1E28]
 * 0000000140338FCD: call    KeGuardDispatchICall
 * 0000000140338FD2: test    rax, rax
 * 0000000140338FD5: jz      short loc_140338FF8
 * 0000000140338FD7: mov     rax, [rsi+1F0h]
 * 0000000140338FDE: mov     rcx, [rbp+20F0h+var_1E28]
 * 0000000140338FE5: call    KeGuardDispatchICall
 * 0000000140338FEA: test    rax, rax
 * 0000000140338FED: jz      short loc_140338FF8
 * 0000000140338FEF: mov     ebx, [rax+50h]
 * 0000000140338FF2: mov     [rbp+20F0h+var_2040], ebx
 * 0000000140338FF8: mov     r15d, 40000000h
 * 0000000140338FFE: test    [rsi+970h], r15d
 * 0000000140339005: jnz     short loc_14033901E
 * 0000000140339007: mov     rax, [rbp+20F0h+var_1F80]
 * 000000014033900E: add     rax, 70h ; 'p'
 * 0000000140339012: mov     [r13+8], rax
 * 0000000140339016: mov     dword ptr [r13+10h], 0E0h
 * 000000014033901E: mov     rcx, [rbp+20F0h+var_1F80]
 * 0000000140339025: xor     eax, eax
 * 0000000140339027: mov     r10, [rbp+20F0h+var_1E30]
 * 000000014033902E: mov     dl, al
 * 0000000140339030: mov     r11, [rbp+20F0h+var_1E28]
 * 0000000140339037: mov     r12d, r14d
 * 000000014033903A: movzx   eax, dl
 * 000000014033903D: mov     r9, [rcx+rax*8+70h]
 * 0000000140339042: test    r14d, r14d
 * 0000000140339045: jz      short loc_140339058
 * 0000000140339047: lea     rax, [r10-1]
 * 000000014033904B: add     rax, r12
 * 000000014033904E: cmp     r9, r10
 * 0000000140339051: jb      short loc_140339058
 * 0000000140339053: cmp     r9, rax
 * 0000000140339056: jbe     short loc_14033907B
 * 0000000140339058: mov     eax, ebx
 * 000000014033905A: test    ebx, ebx
 * 000000014033905C: jz      loc_1403393DA
 * 0000000140339062: lea     r8, [r11-1]
 * 0000000140339066: add     r8, rax
 * 0000000140339069: cmp     r9, r11
 * 000000014033906C: jb      loc_1403393DA
 * 0000000140339072: cmp     r9, r8
 * 0000000140339075: ja      loc_1403393DA
 * 000000014033907B: add     dl, 1
 * 000000014033907E: cmp     dl, 1Ch
 * 0000000140339081: jb      short loc_14033903A
 * 0000000140339083: test    [rsi+970h], r15d
 * 000000014033908A: jnz     loc_140334DA8
 * 0000000140339090: mov     rbx, [r13+8]
 * 0000000140339094: mov     r9d, [r13+10h]
 * 0000000140339098: mov     r10, rbx
 * 000000014033909B: add     [rsi+810h], r9d
 * 00000001403390A2: mov     rax, rbx
 * 00000001403390A5: mov     r14d, [rsi+7FCh]
 * 00000001403390AC: mov     r15, [rsi+800h]
 * 00000001403390B3: lea     rcx, [rbx+r9]
 * 00000001403390B7: cmp     rbx, rcx
 * 00000001403390BA: jnb     short loc_1403390CC
 * 00000001403390BC: mov     edx, 40h ; '@'
 * 00000001403390C1: prefetchnta byte ptr [rax]
 * 00000001403390C4: add     rax, rdx
 * 00000001403390C7: cmp     rax, rcx
 * 00000001403390CA: jb      short loc_1403390C1
 * 00000001403390CC: mov     r11d, r9d
 * 00000001403390CF: mov     r8, r15
 * 00000001403390D2: shr     r11d, 7
 * 00000001403390D6: test    r11d, r11d
 * 00000001403390D9: jz      short loc_140339151
 * 00000001403390DB: mov     rdi, 7010008004002001h
 * 00000001403390E5: mov     edx, 8
 * 00000001403390EA: lea     esi, [rdx-7]
 * 00000001403390ED: mov     rax, [r10]
 * 00000001403390F0: mov     ecx, r14d
 * 00000001403390F3: xor     rax, r8
 * 00000001403390F6: mov     r8, [r10+8]
 * 00000001403390FA: rol     rax, cl
 * 00000001403390FD: add     r10, 10h
 * 0000000140339101: xor     r8, rax
 * 0000000140339104: rol     r8, cl
 * 0000000140339107: sub     rdx, rsi
 * 000000014033910A: jnz     short loc_1403390ED
 * 000000014033910C: mov     rcx, r10
 * 000000014033910F: sub     rcx, rbx
 * 0000000140339112: xor     rcx, r15
 * 0000000140339115: mov     rax, rcx
 * 0000000140339118: rol     rax, 11h
 * 000000014033911C: xor     rcx, rax
 * 000000014033911F: mov     rax, rdi
 * 0000000140339122: mul     rcx
 * 0000000140339125: xor     eax, edx
 * 0000000140339127: mov     [rbp+20F0h+var_1AC8], rdx
 * 000000014033912E: xor     r14d, eax
 * 0000000140339131: mov     rax, rsi
 * 0000000140339134: and     r14d, 3Fh
 * 0000000140339138: cmovz   r14d, eax
 * 000000014033913C: mov     eax, 0FFFFFFFFh
 * 0000000140339141: add     r11d, eax
 * 0000000140339144: jnz     short loc_1403390E5
 * 0000000140339146: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033914A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140339151: and     r9d, 7Fh
 * 0000000140339155: mov     r11d, 1
 * 000000014033915B: cmp     r9d, 8
 * 000000014033915F: jb      short loc_14033917E
 * 0000000140339161: mov     edx, r9d
 * 0000000140339164: shr     rdx, 3
 * 0000000140339168: xor     r8, [r10]
 * 000000014033916B: mov     ecx, r14d
 * 000000014033916E: rol     r8, cl
 * 0000000140339171: add     r10, 8
 * 0000000140339175: add     r9d, 0FFFFFFF8h
 * 0000000140339179: sub     rdx, r11
 * 000000014033917C: jnz     short loc_140339168
 * 000000014033917E: test    r9d, r9d
 * 0000000140339181: jz      short loc_1403391A1
 * 0000000140339183: mov     esi, 0FFFFFFFFh
 * 0000000140339188: movzx   eax, byte ptr [r10]
 * 000000014033918C: mov     ecx, r14d
 * 000000014033918F: xor     r8, rax
 * 0000000140339192: add     r10, r11
 * 0000000140339195: rol     r8, cl
 * 0000000140339198: add     r9d, esi
 * 000000014033919B: jnz     short loc_140339188
 * 000000014033919D: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403391A1: mov     rax, r8
 * 00000001403391A4: jmp     short loc_1403391A9
 * 00000001403391A6: xor     r8d, eax
 * 00000001403391A9: shr     rax, 1Fh
 * 00000001403391AD: test    rax, rax
 * 00000001403391B0: jnz     short loc_1403391A6
 * 00000001403391B2: btr     r8d, 1Fh
 * 00000001403391B7: mov     [r13+14h], r8d
 * 00000001403391BB: mov     rax, [rbp+20F0h+var_1F80]
 * 00000001403391C2: mov     r14, [rax+50h]
 * 00000001403391C6: xor     eax, eax
 * 00000001403391C8: mov     r10d, eax
 * 00000001403391CB: test    r14, r14
 * 00000001403391CE: jz      short loc_14033924E
 * 00000001403391D0: mov     r10d, [r14]
 * 00000001403391D3: mov     r8b, al
 * 00000001403391D6: lea     r9d, [r10-8]
 * 00000001403391DA: shr     r9d, 3
 * 00000001403391DE: test    r9d, r9d
 * 00000001403391E1: jz      short loc_14033924E
 * 00000001403391E3: mov     r11, [rbp+20F0h+var_1E30]
 * 00000001403391EA: mov     rbx, [rbp+20F0h+var_1E28]
 * 00000001403391F1: mov     r15d, [rbp+20F0h+var_2040]
 * 00000001403391F8: movzx   eax, r8b
 * 00000001403391FC: mov     rcx, [r14+rax*8+8]
 * 0000000140339201: test    rcx, rcx
 * 0000000140339204: jz      short loc_140339241
 * 0000000140339206: test    r12, r12
 * 0000000140339209: jz      short loc_14033921C
 * 000000014033920B: lea     rax, [r11-1]
 * 000000014033920F: add     rax, r12
 * 0000000140339212: cmp     rcx, r11
 * 0000000140339215: jb      short loc_14033921C
 * 0000000140339217: cmp     rcx, rax
 * 000000014033921A: jbe     short loc_140339241
 * 000000014033921C: mov     rax, r15
 * 000000014033921F: test    r15d, r15d
 * 0000000140339222: jz      loc_140339352
 * 0000000140339228: lea     rdx, [rbx-1]
 * 000000014033922C: add     rdx, rax
 * 000000014033922F: cmp     rcx, rbx
 * 0000000140339232: jb      loc_140339352
 * 0000000140339238: cmp     rcx, rdx
 * 000000014033923B: ja      loc_140339352
 * 0000000140339241: add     r8b, 1
 * 0000000140339245: movzx   eax, r8b
 * 0000000140339249: cmp     eax, r9d
 * 000000014033924C: jb      short loc_1403391F8
 * 000000014033924E: add     [rsi+810h], r10d
 * 0000000140339255: mov     r9, r14
 * 0000000140339258: mov     ebx, [rsi+7FCh]
 * 000000014033925E: mov     rax, r14
 * 0000000140339261: mov     r15, [rsi+800h]
 * 0000000140339268: mov     ecx, r10d
 * 000000014033926B: add     rcx, r14
 * 000000014033926E: cmp     r14, rcx
 * 0000000140339271: jnb     short loc_140339283
 * 0000000140339273: mov     edx, 40h ; '@'
 * 0000000140339278: prefetchnta byte ptr [rax]
 * 000000014033927B: add     rax, rdx
 * 000000014033927E: cmp     rax, rcx
 * 0000000140339281: jb      short loc_140339278
 * 0000000140339283: mov     r11d, r10d
 * 0000000140339286: mov     r8, r15
 * 0000000140339289: shr     r11d, 7
 * 000000014033928D: mov     r12d, 1
 * 0000000140339293: test    r11d, r11d
 * 0000000140339296: jz      short loc_1403392FE
 * 0000000140339298: mov     rsi, 7010008004002001h
 * 00000001403392A2: mov     edx, 8
 * 00000001403392A7: mov     rax, [r9]
 * 00000001403392AA: mov     ecx, ebx
 * 00000001403392AC: xor     rax, r8
 * 00000001403392AF: mov     r8, [r9+8]
 * 00000001403392B3: rol     rax, cl
 * 00000001403392B6: add     r9, 10h
 * 00000001403392BA: xor     r8, rax
 * 00000001403392BD: rol     r8, cl
 * 00000001403392C0: sub     rdx, r12
 * 00000001403392C3: jnz     short loc_1403392A7
 * 00000001403392C5: mov     rcx, r9
 * 00000001403392C8: sub     rcx, r14
 * 00000001403392CB: xor     rcx, r15
 * 00000001403392CE: mov     rax, rcx
 * 00000001403392D1: rol     rax, 11h
 * 00000001403392D5: xor     rcx, rax
 * 00000001403392D8: mov     rax, rsi
 * 00000001403392DB: mul     rcx
 * 00000001403392DE: xor     eax, edx
 * 00000001403392E0: mov     [rbp+20F0h+var_1AC0], rdx
 * 00000001403392E7: xor     ebx, eax
 * 00000001403392E9: mov     eax, 0FFFFFFFFh
 * 00000001403392EE: and     ebx, 3Fh
 * 00000001403392F1: cmovz   ebx, r12d
 * 00000001403392F5: add     r11d, eax
 * 00000001403392F8: jnz     short loc_1403392A2
 * 00000001403392FA: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403392FE: and     r10d, 7Fh
 * 0000000140339302: cmp     r10d, 8
 * 0000000140339306: jb      short loc_140339324
 * 0000000140339308: mov     edx, r10d
 * 000000014033930B: shr     rdx, 3
 * 000000014033930F: xor     r8, [r9]
 * 0000000140339312: mov     ecx, ebx
 * 0000000140339314: rol     r8, cl
 * 0000000140339317: add     r9, 8
 * 000000014033931B: add     r10d, 0FFFFFFF8h
 * 000000014033931F: sub     rdx, r12
 * 0000000140339322: jnz     short loc_14033930F
 * 0000000140339324: test    r10d, r10d
 * 0000000140339327: jz      short loc_140339346
 * 0000000140339329: mov     esi, 0FFFFFFFFh
 * 000000014033932E: movzx   eax, byte ptr [r9]
 * 0000000140339332: mov     ecx, ebx
 * 0000000140339334: xor     r8, rax
 * 0000000140339337: add     r9, r12
 * 000000014033933A: rol     r8, cl
 * 000000014033933D: add     r10d, esi
 * 0000000140339340: jnz     short loc_14033932E
 * 0000000140339342: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140339346: mov     rax, r8
 * 0000000140339349: shr     rax, 1Fh
 * 000000014033934D: xor     r10d, r10d
 * 0000000140339350: jmp     short loc_1403393C7
 * 0000000140339352: mov     [r13+20h], rcx
 * 0000000140339356: mov     r11, 0B3B74BDEE4453415h
 * 0000000140339360: mov     rax, [rsi+580h]
 * 0000000140339367: mov     [rax], r13
 * 000000014033936A: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140339371: xor     eax, eax
 * 0000000140339373: cmp     [rsi+8D8h], eax
 * 0000000140339379: jnz     loc_140334318
 * 000000014033937F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339389: add     rax, rsi
 * 000000014033938C: mov     [rsi+8E0h], rax
 * 0000000140339393: lea     rax, [r11+r13]
 * 0000000140339397: mov     [rsi+8E8h], rax
 * 000000014033939E: movsxd  rax, dword ptr [r13+0]
 * 00000001403393A2: mov     [rsi+8F0h], rax
 * 00000001403393A9: mov     eax, 1
 * 00000001403393AE: mov     [rsi+8F8h], r14
 * 00000001403393B5: mov     [rsi+8D8h], eax
 * 00000001403393BB: jmp     loc_140334318
 * 00000001403393C0: xor     r8d, eax
 * 00000001403393C3: shr     rax, 1Fh
 * 00000001403393C7: test    rax, rax
 * 00000001403393CA: jnz     short loc_1403393C0
 * 00000001403393CC: btr     r8d, 1Fh
 * 00000001403393D1: mov     [r13+2Ch], r8d
 * 00000001403393D5: jmp     loc_140334625
 * 00000001403393DA: mov     r10d, 1
 * 00000001403393E0: test    [rsi+970h], r15d
 * 00000001403393E7: jz      short loc_140339433
 * 00000001403393E9: mov     rcx, [rsi+0A50h]
 * 00000001403393F0: lea     edx, [r10+2Fh]
 * 00000001403393F4: lea     r8d, [r10+5]
 * 00000001403393F8: mov     rax, [r13+0]
 * 00000001403393FC: add     edx, 0FFFFFFF8h
 * 00000001403393FF: mov     [rcx], rax
 * 0000000140339402: add     r13, 8
 * 0000000140339406: add     rcx, 8
 * 000000014033940A: sub     r8, r10
 * 000000014033940D: jnz     short loc_1403393F8
 * 000000014033940F: test    edx, edx
 * 0000000140339411: jz      short loc_14033942C
 * 0000000140339413: mov     esi, 0FFFFFFFFh
 * 0000000140339418: mov     al, [r13+0]
 * 000000014033941C: add     r13, r10
 * 000000014033941F: mov     [rcx], al
 * 0000000140339421: add     rcx, r10
 * 0000000140339424: add     edx, esi
 * 0000000140339426: jnz     short loc_140339418
 * 0000000140339428: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033942C: mov     r13, [rsi+0A50h]
 * 0000000140339433: mov     [r13+20h], r9
 * 0000000140339437: mov     r11, 0B3B74BDEE4453415h
 * 0000000140339441: mov     rax, [rsi+580h]
 * 0000000140339448: mov     r14d, 8000h
 * 000000014033944E: mov     [rax], r13
 * 0000000140339451: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140339458: xor     eax, eax
 * 000000014033945A: mov     rcx, [r13+8]
 * 000000014033945E: cmp     [rsi+8D8h], eax
 * 0000000140339464: jnz     short loc_14033949E
 * 0000000140339466: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339470: add     rax, rsi
 * 0000000140339473: mov     [rsi+8E0h], rax
 * 000000014033947A: lea     rax, [r11+r13]
 * 000000014033947E: mov     [rsi+8E8h], rax
 * 0000000140339485: movsxd  rax, dword ptr [r13+0]
 * 0000000140339489: mov     [rsi+8F0h], rax
 * 0000000140339490: mov     [rsi+8F8h], rcx
 * 0000000140339497: mov     [rsi+8D8h], r10d
 * 000000014033949E: xor     r10d, r10d
 * 00000001403394A1: jmp     loc_140334635
 * 00000001403394A6: mov     r11, [r13+8]
 * 00000001403394AA: add     [rsi+810h], r8d
 * 00000001403394B1: mov     r9, r11
 * 00000001403394B4: mov     r14d, [rsi+7FCh]
 * 00000001403394BB: mov     rax, r11
 * 00000001403394BE: mov     r15, [rsi+800h]
 * 00000001403394C5: lea     rcx, [r11+r8]
 * 00000001403394C9: cmp     r11, rcx
 * 00000001403394CC: jnb     short loc_1403394DE
 * 00000001403394CE: mov     edx, 40h ; '@'
 * 00000001403394D3: prefetchnta byte ptr [rax]
 * 00000001403394D6: add     rax, rdx
 * 00000001403394D9: cmp     rax, rcx
 * 00000001403394DC: jb      short loc_1403394D3
 * 00000001403394DE: mov     r10d, r8d
 * 00000001403394E1: mov     rbx, r15
 * 00000001403394E4: shr     r10d, 7
 * 00000001403394E8: mov     r12d, 1
 * 00000001403394EE: mov     r13d, 0FFFFFFFFh
 * 00000001403394F4: test    r10d, r10d
 * 00000001403394F7: jz      short loc_14033955D
 * 00000001403394F9: mov     rsi, 7010008004002001h
 * 0000000140339503: mov     edx, 8
 * 0000000140339508: mov     rax, [r9]
 * 000000014033950B: mov     ecx, r14d
 * 000000014033950E: xor     rax, rbx
 * 0000000140339511: mov     rbx, [r9+8]
 * 0000000140339515: rol     rax, cl
 * 0000000140339518: add     r9, 10h
 * 000000014033951C: xor     rbx, rax
 * 000000014033951F: rol     rbx, cl
 * 0000000140339522: sub     rdx, r12
 * 0000000140339525: jnz     short loc_140339508
 * 0000000140339527: mov     rcx, r9
 * 000000014033952A: sub     rcx, r11
 * 000000014033952D: xor     rcx, r15
 * 0000000140339530: mov     rax, rcx
 * 0000000140339533: rol     rax, 11h
 * 0000000140339537: xor     rcx, rax
 * 000000014033953A: mov     rax, rsi
 * 000000014033953D: mul     rcx
 * 0000000140339540: xor     eax, edx
 * 0000000140339542: mov     [rbp+20F0h+var_1AB8], rdx
 * 0000000140339549: xor     r14d, eax
 * 000000014033954C: and     r14d, 3Fh
 * 0000000140339550: cmovz   r14d, r12d
 * 0000000140339554: add     r10d, r13d
 * 0000000140339557: jnz     short loc_140339503
 * 0000000140339559: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033955D: and     r8d, 7Fh
 * 0000000140339561: cmp     r8d, 8
 * 0000000140339565: jb      short loc_140339584
 * 0000000140339567: mov     edx, r8d
 * 000000014033956A: shr     rdx, 3
 * 000000014033956E: xor     rbx, [r9]
 * 0000000140339571: mov     ecx, r14d
 * 0000000140339574: rol     rbx, cl
 * 0000000140339577: add     r9, 8
 * 000000014033957B: add     r8d, 0FFFFFFF8h
 * 000000014033957F: sub     rdx, r12
 * 0000000140339582: jnz     short loc_14033956E
 * 0000000140339584: test    r8d, r8d
 * 0000000140339587: jz      short loc_14033959E
 * 0000000140339589: movzx   eax, byte ptr [r9]
 * 000000014033958D: mov     ecx, r14d
 * 0000000140339590: xor     rbx, rax
 * 0000000140339593: add     r9, r12
 * 0000000140339596: rol     rbx, cl
 * 0000000140339599: add     r8d, r13d
 * 000000014033959C: jnz     short loc_140339589
 * 000000014033959E: mov     rax, rbx
 * 00000001403395A1: jmp     short loc_1403395A5
 * 00000001403395A3: xor     ebx, eax
 * 00000001403395A5: shr     rax, 1Fh
 * 00000001403395A9: test    rax, rax
 * 00000001403395AC: jnz     short loc_1403395A3
 * 00000001403395AE: mov     r12, [rbp+20F0h+var_20D0]
 * 00000001403395B2: btr     ebx, 1Fh
 * 00000001403395B6: mov     r13d, eax
 * 00000001403395B9: cmp     ebx, [r12+14h]
 * 00000001403395BE: jz      loc_14033969F
 * 00000001403395C4: cmp     [r12], eax
 * 00000001403395C8: jnz     short loc_1403395D6
 * 00000001403395CA: cmp     [r12+18h], eax
 * 00000001403395CF: lea     ecx, [rax+1]
 * 00000001403395D2: cmovnz  r13d, ecx
 * 00000001403395D6: mov     ecx, [r12+10h]
 * 00000001403395DB: mov     rdx, [r12+8]
 * 00000001403395E0: test    rcx, rcx
 * 00000001403395E3: jz      loc_1403397D3
 * 00000001403395E9: mov     eax, [rsi+974h]
 * 00000001403395EF: mov     r8d, 40h ; '@'
 * 00000001403395F5: test    r8b, al
 * 00000001403395F8: jz      loc_1403397D3
 * 00000001403395FE: mov     r12, cr8
 * 0000000140339602: lea     eax, [r8-3Eh]
 * 0000000140339606: mov     cr8, rax
 * 000000014033960A: lea     rax, [rcx-1]
 * 000000014033960E: mov     r14, rdx
 * 0000000140339611: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140339618: add     rax, rdx
 * 000000014033961B: mov     ecx, 0FFFh
 * 0000000140339620: or      rax, rcx
 * 0000000140339623: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140339627: lea     rax, [r14-1]
 * 000000014033962B: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033962F: movzx   r15d, r12b
 * 0000000140339633: mov     rax, [rsi+460h]
 * 000000014033963A: xor     edx, edx
 * 000000014033963C: mov     rcx, r14
 * 000000014033963F: call    KeGuardDispatchICall
 * 0000000140339644: cmp     eax, 0C000022Dh
 * 0000000140339649: jnz     short loc_140339676
 * 000000014033964B: test    r13d, r13d
 * 000000014033964E: jnz     loc_1403397CB
 * 0000000140339654: lea     eax, [r13+1]
 * 0000000140339658: cmp     r12b, al
 * 000000014033965B: ja      short loc_14033967E
 * 000000014033965D: movzx   r15d, r12b
 * 0000000140339661: mov     cr8, r15
 * 0000000140339665: mov     al, [r14]
 * 0000000140339668: mov     rax, cr8
 * 000000014033966C: lea     eax, [r13+2]
 * 0000000140339670: mov     cr8, rax
 * 0000000140339674: jmp     short loc_140339633
 * 0000000140339676: test    eax, eax
 * 0000000140339678: js      loc_1403397CB
 * 000000014033967E: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140339682: mov     ecx, 1000h
 * 0000000140339687: add     rax, rcx
 * 000000014033968A: add     r14, rcx
 * 000000014033968D: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140339691: cmp     rax, [rbp+20F0h+var_20C8]
 * 0000000140339695: jnz     short loc_14033962F
 * 0000000140339697: mov     cr8, r15
 * 000000014033969B: mov     r12, [rbp+20F0h+var_20D0]
 * 000000014033969F: mov     r13d, 1
 * 00000001403396A5: mov     rax, [r12+8]
 * 00000001403396AA: sub     rax, 70h ; 'p'
 * 00000001403396AE: mov     [rbp+20F0h+var_1F80], rax
 * 00000001403396B5: mov     r15, [rax+50h]
 * 00000001403396B9: xor     eax, eax
 * 00000001403396BB: mov     r9d, eax
 * 00000001403396BE: test    r15, r15
 * 00000001403396C1: jz      short loc_1403396C6
 * 00000001403396C3: mov     r9d, [r15]
 * 00000001403396C6: add     [rsi+810h], r9d
 * 00000001403396CD: mov     r10, r15
 * 00000001403396D0: mov     r11d, [rsi+7FCh]
 * 00000001403396D7: mov     rax, r15
 * 00000001403396DA: mov     r14, [rsi+800h]
 * 00000001403396E1: mov     ecx, r9d
 * 00000001403396E4: add     rcx, r15
 * 00000001403396E7: cmp     r15, rcx
 * 00000001403396EA: jnb     short loc_1403396FC
 * 00000001403396EC: mov     edx, 40h ; '@'
 * 00000001403396F1: prefetchnta byte ptr [rax]
 * 00000001403396F4: add     rax, rdx
 * 00000001403396F7: cmp     rax, rcx
 * 00000001403396FA: jb      short loc_1403396F1
 * 00000001403396FC: mov     ebx, r9d
 * 00000001403396FF: mov     r8, r14
 * 0000000140339702: shr     ebx, 7
 * 0000000140339705: test    ebx, ebx
 * 0000000140339707: jz      short loc_140339772
 * 0000000140339709: mov     rsi, 7010008004002001h
 * 0000000140339713: mov     edx, 8
 * 0000000140339718: mov     rax, [r10]
 * 000000014033971B: mov     ecx, r11d
 * 000000014033971E: xor     rax, r8
 * 0000000140339721: mov     r8, [r10+8]
 * 0000000140339725: rol     rax, cl
 * 0000000140339728: add     r10, 10h
 * 000000014033972C: xor     r8, rax
 * 000000014033972F: rol     r8, cl
 * 0000000140339732: sub     rdx, r13
 * 0000000140339735: jnz     short loc_140339718
 * 0000000140339737: mov     rcx, r10
 * 000000014033973A: sub     rcx, r15
 * 000000014033973D: xor     rcx, r14
 * 0000000140339740: mov     rax, rcx
 * 0000000140339743: rol     rax, 11h
 * 0000000140339747: xor     rcx, rax
 * 000000014033974A: mov     rax, rsi
 * 000000014033974D: mul     rcx
 * 0000000140339750: xor     r11d, eax
 * 0000000140339753: mov     [rbp+20F0h+var_1AB0], rdx
 * 000000014033975A: xor     r11d, edx
 * 000000014033975D: mov     eax, 0FFFFFFFFh
 * 0000000140339762: and     r11d, 3Fh
 * 0000000140339766: cmovz   r11d, r13d
 * 000000014033976A: add     ebx, eax
 * 000000014033976C: jnz     short loc_140339713
 * 000000014033976E: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140339772: and     r9d, 7Fh
 * 0000000140339776: cmp     r9d, 8
 * 000000014033977A: jb      short loc_140339799
 * 000000014033977C: mov     edx, r9d
 * 000000014033977F: shr     rdx, 3
 * 0000000140339783: xor     r8, [r10]
 * 0000000140339786: mov     ecx, r11d
 * 0000000140339789: rol     r8, cl
 * 000000014033978C: add     r10, 8
 * 0000000140339790: add     r9d, 0FFFFFFF8h
 * 0000000140339794: sub     rdx, r13
 * 0000000140339797: jnz     short loc_140339783
 * 0000000140339799: test    r9d, r9d
 * 000000014033979C: jz      short loc_1403397BC
 * 000000014033979E: mov     esi, 0FFFFFFFFh
 * 00000001403397A3: movzx   eax, byte ptr [r10]
 * 00000001403397A7: mov     ecx, r11d
 * 00000001403397AA: xor     r8, rax
 * 00000001403397AD: add     r10, r13
 * 00000001403397B0: rol     r8, cl
 * 00000001403397B3: add     r9d, esi
 * 00000001403397B6: jnz     short loc_1403397A3
 * 00000001403397B8: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403397BC: mov     rax, r8
 * 00000001403397BF: shr     rax, 1Fh
 * 00000001403397C3: xor     r10d, r10d
 * 00000001403397C6: jmp     loc_140339858
 * 00000001403397CB: mov     cr8, r15
 * 00000001403397CF: mov     r12, [rbp+20F0h+var_20D0]
 * 00000001403397D3: mov     eax, [rsi+8D8h]
 * 00000001403397D9: mov     ecx, [r12+14h]
 * 00000001403397DE: test    eax, eax
 * 00000001403397E0: jnz     short loc_1403397F8
 * 00000001403397E2: mov     eax, ebx
 * 00000001403397E4: xor     rcx, rax
 * 00000001403397E7: mov     rax, [rsi+580h]
 * 00000001403397EE: mov     [rax+18h], rcx
 * 00000001403397F2: mov     eax, [rsi+8D8h]
 * 00000001403397F8: mov     rcx, [r12+8]
 * 00000001403397FD: mov     r13d, 1
 * 0000000140339803: test    eax, eax
 * 0000000140339805: jnz     loc_1403396A5
 * 000000014033980B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339815: add     rax, rsi
 * 0000000140339818: mov     [rsi+8E0h], rax
 * 000000014033981F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140339829: add     rax, r12
 * 000000014033982C: mov     [rsi+8E8h], rax
 * 0000000140339833: movsxd  rax, dword ptr [r12]
 * 0000000140339837: mov     [rsi+8F0h], rax
 * 000000014033983E: mov     [rsi+8F8h], rcx
 * 0000000140339845: mov     [rsi+8D8h], r13d
 * 000000014033984C: jmp     loc_1403396A5
 * 0000000140339851: xor     r8d, eax
 * 0000000140339854: shr     rax, 1Fh
 * 0000000140339858: test    rax, rax
 * 000000014033985B: jnz     short loc_140339851
 * 000000014033985D: mov     ecx, [r12+2Ch]
 * 0000000140339862: btr     r8d, 1Fh
 * 0000000140339867: cmp     r8d, ecx
 * 000000014033986A: jz      loc_140334625
 * 0000000140339870: mov     eax, [rsi+8D8h]
 * 0000000140339876: test    eax, eax
 * 0000000140339878: jnz     loc_140334625
 * 000000014033987E: mov     eax, r8d
 * 0000000140339881: xor     rcx, rax
 * 0000000140339884: mov     rax, [rsi+580h]
 * 000000014033988B: mov     [rax+18h], rcx
 * 000000014033988F: mov     eax, [rsi+8D8h]
 * 0000000140339895: test    eax, eax
 * 0000000140339897: jnz     loc_140334625
 * 000000014033989D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403398A7: mov     r11, 0B3B74BDEE4453415h
 * 00000001403398B1: add     rax, rsi
 * 00000001403398B4: mov     [rsi+8E0h], rax
 * 00000001403398BB: lea     rax, [r12+r11]
 * 00000001403398BF: mov     [rsi+8E8h], rax
 * 00000001403398C6: movsxd  rax, dword ptr [r12]
 * 00000001403398CA: mov     [rsi+8F0h], rax
 * 00000001403398D1: mov     [rsi+8F8h], r15
 * 00000001403398D8: mov     [rsi+8D8h], r13d
 * 00000001403398DF: jmp     loc_14033462F
 * 00000001403398E4: cmp     r14d, 25h ; '%'
 * 00000001403398E8: jg      loc_14033BCFD
 * 00000001403398EE: jz      loc_14033BC80
 * 00000001403398F4: mov     ecx, r14d
 * 00000001403398F7: sub     ecx, 1Dh
 * 00000001403398FA: jz      loc_14033B852
 * 0000000140339900: sub     ecx, 1
 * 0000000140339903: jz      loc_14033B0F2
 * 0000000140339909: sub     ecx, 1
 * 000000014033990C: jz      loc_14033A583
 * 0000000140339912: sub     ecx, 1
 * 0000000140339915: jz      loc_14033A573
 * 000000014033991B: sub     ecx, 1
 * 000000014033991E: jz      loc_14033A563
 * 0000000140339924: sub     ecx, 2
 * 0000000140339927: jz      loc_140339E24
 * 000000014033992D: cmp     ecx, 1
 * 0000000140339930: jnz     loc_14033E4C6
 * 0000000140339936: mov     r14, [r13+8]
 * 000000014033993A: mov     r8d, [r13+10h]
 * 000000014033993E: mov     r9, r14
 * 0000000140339941: add     [rsi+810h], r8d
 * 0000000140339948: mov     rax, r14
 * 000000014033994B: mov     r10d, [rsi+7FCh]
 * 0000000140339952: mov     r15, [rsi+800h]
 * 0000000140339959: lea     rcx, [r14+r8]
 * 000000014033995D: cmp     r14, rcx
 * 0000000140339960: jnb     short loc_140339972
 * 0000000140339962: mov     edx, 40h ; '@'
 * 0000000140339967: prefetchnta byte ptr [rax]
 * 000000014033996A: add     rax, rdx
 * 000000014033996D: cmp     rax, rcx
 * 0000000140339970: jb      short loc_140339967
 * 0000000140339972: mov     r11d, r8d
 * 0000000140339975: mov     rbx, r15
 * 0000000140339978: shr     r11d, 7
 * 000000014033997C: mov     r12d, 1
 * 0000000140339982: test    r11d, r11d
 * 0000000140339985: jz      short loc_1403399F1
 * 0000000140339987: mov     rsi, 7010008004002001h
 * 0000000140339991: mov     edx, 8
 * 0000000140339996: mov     rax, [r9]
 * 0000000140339999: mov     ecx, r10d
 * 000000014033999C: xor     rax, rbx
 * 000000014033999F: mov     rbx, [r9+8]
 * 00000001403399A3: rol     rax, cl
 * 00000001403399A6: add     r9, 10h
 * 00000001403399AA: xor     rbx, rax
 * 00000001403399AD: rol     rbx, cl
 * 00000001403399B0: sub     rdx, r12
 * 00000001403399B3: jnz     short loc_140339996
 * 00000001403399B5: mov     rcx, r9
 * 00000001403399B8: sub     rcx, r14
 * 00000001403399BB: xor     rcx, r15
 * 00000001403399BE: mov     rax, rcx
 * 00000001403399C1: rol     rax, 11h
 * 00000001403399C5: xor     rcx, rax
 * 00000001403399C8: mov     rax, rsi
 * 00000001403399CB: mul     rcx
 * 00000001403399CE: xor     r10d, eax
 * 00000001403399D1: mov     [rbp+20F0h+var_1AA8], rdx
 * 00000001403399D8: xor     r10d, edx
 * 00000001403399DB: mov     eax, 0FFFFFFFFh
 * 00000001403399E0: and     r10d, 3Fh
 * 00000001403399E4: cmovz   r10d, r12d
 * 00000001403399E8: add     r11d, eax
 * 00000001403399EB: jnz     short loc_140339991
 * 00000001403399ED: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403399F1: and     r8d, 7Fh
 * 00000001403399F5: cmp     r8d, 8
 * 00000001403399F9: jb      short loc_140339A18
 * 00000001403399FB: mov     edx, r8d
 * 00000001403399FE: shr     rdx, 3
 * 0000000140339A02: xor     rbx, [r9]
 * 0000000140339A05: mov     ecx, r10d
 * 0000000140339A08: rol     rbx, cl
 * 0000000140339A0B: add     r9, 8
 * 0000000140339A0F: add     r8d, 0FFFFFFF8h
 * 0000000140339A13: sub     rdx, r12
 * 0000000140339A16: jnz     short loc_140339A02
 * 0000000140339A18: test    r8d, r8d
 * 0000000140339A1B: jz      short loc_140339A3B
 * 0000000140339A1D: mov     esi, 0FFFFFFFFh
 * 0000000140339A22: movzx   eax, byte ptr [r9]
 * 0000000140339A26: mov     ecx, r10d
 * 0000000140339A29: xor     rbx, rax
 * 0000000140339A2C: add     r9, r12
 * 0000000140339A2F: rol     rbx, cl
 * 0000000140339A32: add     r8d, esi
 * 0000000140339A35: jnz     short loc_140339A22
 * 0000000140339A37: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140339A3B: mov     rax, rbx
 * 0000000140339A3E: jmp     short loc_140339A42
 * 0000000140339A40: xor     ebx, eax
 * 0000000140339A42: shr     rax, 1Fh
 * 0000000140339A46: test    rax, rax
 * 0000000140339A49: jnz     short loc_140339A40
 * 0000000140339A4B: btr     ebx, 1Fh
 * 0000000140339A4F: mov     r12d, eax
 * 0000000140339A52: cmp     ebx, [r13+14h]
 * 0000000140339A56: jz      loc_140339BA5
 * 0000000140339A5C: cmp     [r13+0], eax
 * 0000000140339A60: jnz     short loc_140339A6D
 * 0000000140339A62: cmp     [r13+18h], eax
 * 0000000140339A66: lea     ecx, [rax+1]
 * 0000000140339A69: cmovnz  r12d, ecx
 * 0000000140339A6D: mov     ecx, [r13+10h]
 * 0000000140339A71: mov     rdx, [r13+8]
 * 0000000140339A75: test    rcx, rcx
 * 0000000140339A78: jz      loc_140339B34
 * 0000000140339A7E: mov     eax, [rsi+974h]
 * 0000000140339A84: mov     r8d, 40h ; '@'
 * 0000000140339A8A: test    r8b, al
 * 0000000140339A8D: jz      loc_140339B34
 * 0000000140339A93: mov     r13, cr8
 * 0000000140339A97: lea     eax, [r8-3Eh]
 * 0000000140339A9B: mov     cr8, rax
 * 0000000140339A9F: lea     rax, [rcx-1]
 * 0000000140339AA3: mov     r14, rdx
 * 0000000140339AA6: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140339AAD: add     rax, rdx
 * 0000000140339AB0: mov     ecx, 0FFFh
 * 0000000140339AB5: or      rax, rcx
 * 0000000140339AB8: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140339ABC: lea     rax, [r14-1]
 * 0000000140339AC0: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140339AC4: movzx   r15d, r13b
 * 0000000140339AC8: mov     rax, [rsi+460h]
 * 0000000140339ACF: xor     edx, edx
 * 0000000140339AD1: mov     rcx, r14
 * 0000000140339AD4: call    KeGuardDispatchICall
 * 0000000140339AD9: cmp     eax, 0C000022Dh
 * 0000000140339ADE: jnz     short loc_140339B09
 * 0000000140339AE0: test    r12d, r12d
 * 0000000140339AE3: jnz     short loc_140339B2C
 * 0000000140339AE5: lea     eax, [r12+1]
 * 0000000140339AEA: cmp     r13b, al
 * 0000000140339AED: ja      short loc_140339B0D
 * 0000000140339AEF: movzx   r15d, r13b
 * 0000000140339AF3: mov     cr8, r15
 * 0000000140339AF7: mov     al, [r14]
 * 0000000140339AFA: mov     rax, cr8
 * 0000000140339AFE: lea     eax, [r12+2]
 * 0000000140339B03: mov     cr8, rax
 * 0000000140339B07: jmp     short loc_140339AC8
 * 0000000140339B09: test    eax, eax
 * 0000000140339B0B: js      short loc_140339B2C
 * 0000000140339B0D: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140339B11: mov     ecx, 1000h
 * 0000000140339B16: add     rax, rcx
 * 0000000140339B19: add     r14, rcx
 * 0000000140339B1C: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140339B20: cmp     rax, [rbp+20F0h+var_20C8]
 * 0000000140339B24: jnz     short loc_140339AC4
 * 0000000140339B26: mov     cr8, r15
 * 0000000140339B2A: jmp     short loc_140339BA5
 * 0000000140339B2C: mov     cr8, r15
 * 0000000140339B30: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140339B34: mov     eax, [rsi+8D8h]
 * 0000000140339B3A: mov     edx, [r13+14h]
 * 0000000140339B3E: test    eax, eax
 * 0000000140339B40: jnz     short loc_140339B58
 * 0000000140339B42: mov     rax, [rsi+580h]
 * 0000000140339B49: mov     ecx, ebx
 * 0000000140339B4B: xor     rcx, rdx
 * 0000000140339B4E: mov     [rax+18h], rcx
 * 0000000140339B52: mov     eax, [rsi+8D8h]
 * 0000000140339B58: mov     rcx, [r13+8]
 * 0000000140339B5C: test    eax, eax
 * 0000000140339B5E: jnz     short loc_140339BA5
 * 0000000140339B60: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339B6A: add     rax, rsi
 * 0000000140339B6D: mov     [rsi+8E0h], rax
 * 0000000140339B74: mov     rax, 0B3B74BDEE4453415h
 * 0000000140339B7E: add     rax, r13
 * 0000000140339B81: mov     [rsi+8E8h], rax
 * 0000000140339B88: movsxd  rax, dword ptr [r13+0]
 * 0000000140339B8C: mov     [rsi+8F0h], rax
 * 0000000140339B93: mov     eax, 1
 * 0000000140339B98: mov     [rsi+8F8h], rcx
 * 0000000140339B9F: mov     [rsi+8D8h], eax
 * 0000000140339BA5: mov     rcx, [rsi+530h]
 * 0000000140339BAC: mov     r14, cr8
 * 0000000140339BB0: mov     eax, 0Fh
 * 0000000140339BB5: mov     cr8, rax
 * 0000000140339BB9: mov     rax, [rsi+148h]
 * 0000000140339BC0: call    KeGuardDispatchICall
 * 0000000140339BC5: mov     rax, [rsi+600h]
 * 0000000140339BCC: mov     r12, [rbp+20F0h+var_20D0]
 * 0000000140339BD0: mov     rcx, [rax]
 * 0000000140339BD3: mov     eax, [rcx]
 * 0000000140339BD5: lea     rbx, [rcx+10h]
 * 0000000140339BD9: mov     r15b, [rcx+0Ch]
 * 0000000140339BDD: lea     rcx, [rax+rax*2]
 * 0000000140339BE1: lea     r13, [rbx+rcx*8]
 * 0000000140339BE5: mov     r8d, 18h
 * 0000000140339BEB: lea     r9, [r12+18h]
 * 0000000140339BF0: mov     r10, rbx
 * 0000000140339BF3: mov     rcx, [r10]
 * 0000000140339BF6: add     r10, 8
 * 0000000140339BFA: mov     rax, [r9]
 * 0000000140339BFD: add     r9, 8
 * 0000000140339C01: cmp     rcx, rax
 * 0000000140339C04: jnz     short loc_140339C3A
 * 0000000140339C06: add     r8d, 0FFFFFFF8h
 * 0000000140339C0A: cmp     r8d, 8
 * 0000000140339C0E: jnb     short loc_140339BF3
 * 0000000140339C10: test    r8d, r8d
 * 0000000140339C13: jz      short loc_140339C43
 * 0000000140339C15: mov     r11d, 1
 * 0000000140339C1B: movzx   edx, byte ptr [r10]
 * 0000000140339C1F: add     r10, r11
 * 0000000140339C22: movzx   eax, byte ptr [r9]
 * 0000000140339C26: add     r9, r11
 * 0000000140339C29: cmp     rdx, rax
 * 0000000140339C2C: jnz     short loc_140339C3A
 * 0000000140339C2E: mov     eax, 0FFFFFFFFh
 * 0000000140339C33: add     r8d, eax
 * 0000000140339C36: jz      short loc_140339C43
 * 0000000140339C38: jmp     short loc_140339C1B
 * 0000000140339C3A: add     rbx, 18h
 * 0000000140339C3E: cmp     rbx, r13
 * 0000000140339C41: jb      short loc_140339BE5
 * 0000000140339C43: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140339C47: mov     rcx, [rsi+530h]
 * 0000000140339C4E: mov     rax, [rsi+188h]
 * 0000000140339C55: call    KeGuardDispatchICall
 * 0000000140339C5A: movzx   eax, r14b
 * 0000000140339C5E: mov     cr8, rax
 * 0000000140339C62: xor     eax, eax
 * 0000000140339C64: test    r15b, r15b
 * 0000000140339C67: jz      short loc_140339CDC
 * 0000000140339C69: mov     eax, [rsi+974h]
 * 0000000140339C6F: mov     ecx, 10h
 * 0000000140339C74: test    cl, al
 * 0000000140339C76: jz      short loc_140339CCC
 * 0000000140339C78: xor     eax, eax
 * 0000000140339C7A: cmp     [rsi+8D8h], eax
 * 0000000140339C80: jnz     short loc_140339CCC
 * 0000000140339C82: mov     rcx, [rbp+20F0h+var_20D0]
 * 0000000140339C86: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339C90: add     rax, rsi
 * 0000000140339C93: mov     [rsi+8E0h], rax
 * 0000000140339C9A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140339CA4: add     rax, rcx
 * 0000000140339CA7: mov     [rsi+8E8h], rax
 * 0000000140339CAE: movsxd  rax, dword ptr [rcx]
 * 0000000140339CB1: mov     ecx, 1
 * 0000000140339CB6: mov     [rsi+8F0h], rax
 * 0000000140339CBD: mov     [rsi+8F8h], rcx
 * 0000000140339CC4: mov     [rsi+8D8h], ecx
 * 0000000140339CCA: jmp     short loc_140339CD1
 * 0000000140339CCC: mov     ecx, 1
 * 0000000140339CD1: cmp     [r12+18h], rcx
 * 0000000140339CD6: jz      short loc_140339D35
 * 0000000140339CD8: xor     eax, eax
 * 0000000140339CDA: jmp     short loc_140339CE1
 * 0000000140339CDC: mov     ecx, 1
 * 0000000140339CE1: mov     r12, [rbp+20F0h+var_20D0]
 * 0000000140339CE5: cmp     rbx, r13
 * 0000000140339CE8: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140339CF2: jnz     short loc_140339D43
 * 0000000140339CF4: cmp     [rsi+8D8h], eax
 * 0000000140339CFA: jnz     short loc_140339D43
 * 0000000140339CFC: lea     rax, [rsi+r13]
 * 0000000140339D00: mov     [rsi+8E0h], rax
 * 0000000140339D07: mov     rax, 0B3B74BDEE4453415h
 * 0000000140339D11: add     rax, r12
 * 0000000140339D14: mov     [rsi+8E8h], rax
 * 0000000140339D1B: movsxd  rax, dword ptr [r12]
 * 0000000140339D1F: mov     [rsi+8F0h], rax
 * 0000000140339D26: mov     [rsi+8F8h], rbx
 * 0000000140339D2D: mov     [rsi+8D8h], ecx
 * 0000000140339D33: jmp     short loc_140339D43
 * 0000000140339D35: mov     r12, [rbp+20F0h+var_20D0]
 * 0000000140339D39: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140339D43: mov     rcx, [rsi+530h]
 * 0000000140339D4A: mov     r15, cr8
 * 0000000140339D4E: mov     eax, 0Fh
 * 0000000140339D53: mov     cr8, rax
 * 0000000140339D57: mov     rax, [rsi+148h]
 * 0000000140339D5E: call    KeGuardDispatchICall
 * 0000000140339D63: mov     rax, [rsi+600h]
 * 0000000140339D6A: mov     rcx, [rax]
 * 0000000140339D6D: mov     eax, [rcx]
 * 0000000140339D6F: lea     rbx, [rcx+10h]
 * 0000000140339D73: lea     rcx, [rax+rax*2]
 * 0000000140339D77: xor     eax, eax
 * 0000000140339D79: lea     r14, [rbx+rcx*8]
 * 0000000140339D7D: jmp     short loc_140339DA6
 * 0000000140339D7F: mov     rcx, [rbx+8]
 * 0000000140339D83: cmp     rcx, rdx
 * 0000000140339D86: jb      short loc_140339DB2
 * 0000000140339D88: mov     rax, rcx
 * 0000000140339D8B: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140339D91: cmp     rax, rcx
 * 0000000140339D94: jnz     short loc_140339DB2
 * 0000000140339D96: mov     eax, [rbx+10h]
 * 0000000140339D99: add     rax, rcx
 * 0000000140339D9C: cmp     rax, rcx
 * 0000000140339D9F: jbe     short loc_140339DB2
 * 0000000140339DA1: cmp     rax, rdx
 * 0000000140339DA4: jz      short loc_140339DB2
 * 0000000140339DA6: add     rbx, 18h
 * 0000000140339DAA: mov     rdx, rax
 * 0000000140339DAD: cmp     rbx, r14
 * 0000000140339DB0: jb      short loc_140339D7F
 * 0000000140339DB2: mov     rcx, [rsi+530h]
 * 0000000140339DB9: mov     rax, [rsi+188h]
 * 0000000140339DC0: call    KeGuardDispatchICall
 * 0000000140339DC5: movzx   eax, r15b
 * 0000000140339DC9: mov     cr8, rax
 * 0000000140339DCD: cmp     rbx, r14
 * 0000000140339DD0: jz      loc_140334DB4
 * 0000000140339DD6: xor     eax, eax
 * 0000000140339DD8: xor     r10d, r10d
 * 0000000140339DDB: mov     r11, 0B3B74BDEE4453415h
 * 0000000140339DE5: mov     r14d, 8000h
 * 0000000140339DEB: cmp     [rsi+8D8h], eax
 * 0000000140339DF1: jnz     loc_140334635
 * 0000000140339DF7: lea     rax, [rsi+r13]
 * 0000000140339DFB: mov     [rsi+8E0h], rax
 * 0000000140339E02: lea     rax, [r12+r11]
 * 0000000140339E06: mov     [rsi+8E8h], rax
 * 0000000140339E0D: movsxd  rax, dword ptr [r12]
 * 0000000140339E11: mov     [rsi+8F0h], rax
 * 0000000140339E18: mov     [rsi+8F8h], rbx
 * 0000000140339E1F: jmp     loc_14033579E
 * 0000000140339E24: mov     ecx, [r13+28h]
 * 0000000140339E28: and     ecx, edx
 * 0000000140339E2A: jz      short loc_140339E49
 * 0000000140339E2C: xor     eax, eax
 * 0000000140339E2E: cmp     [rsi+960h], rax
 * 0000000140339E35: jz      loc_140334312
 * 0000000140339E3B: mov     eax, [rsi+974h]
 * 0000000140339E41: test    al, 4
 * 0000000140339E43: jnz     loc_14033441D
 * 0000000140339E49: xor     eax, eax
 * 0000000140339E4B: test    ecx, ecx
 * 0000000140339E4D: jz      loc_14033A33E
 * 0000000140339E53: mov     edx, [rsi+974h]
 * 0000000140339E59: mov     ecx, edx
 * 0000000140339E5B: cmp     [rsi+80Ch], eax
 * 0000000140339E61: jnz     short loc_140339E75
 * 0000000140339E63: shl     ecx, 3
 * 0000000140339E66: xor     ecx, edx
 * 0000000140339E68: and     ecx, 20h
 * 0000000140339E6B: xor     ecx, edx
 * 0000000140339E6D: mov     [rsi+974h], ecx
 * 0000000140339E73: jmp     short loc_140339E86
 * 0000000140339E75: mov     eax, edx
 * 0000000140339E77: shr     eax, 3
 * 0000000140339E7A: xor     eax, edx
 * 0000000140339E7C: test    al, 4
 * 0000000140339E7E: jnz     loc_14033441D
 * 0000000140339E84: xor     eax, eax
 * 0000000140339E86: cmp     [rsi+960h], rax
 * 0000000140339E8D: jz      loc_14033A32C
 * 0000000140339E93: mov     edx, ecx
 * 0000000140339E95: cmp     [rsi+80Ch], eax
 * 0000000140339E9B: jnz     short loc_140339EAF
 * 0000000140339E9D: shl     edx, 3
 * 0000000140339EA0: xor     edx, ecx
 * 0000000140339EA2: and     edx, 20h
 * 0000000140339EA5: xor     edx, ecx
 * 0000000140339EA7: mov     [rsi+974h], edx
 * 0000000140339EAD: jmp     short loc_140339EBE
 * 0000000140339EAF: mov     eax, ecx
 * 0000000140339EB1: shr     eax, 3
 * 0000000140339EB4: xor     eax, ecx
 * 0000000140339EB6: test    al, 4
 * 0000000140339EB8: jnz     loc_14033A32A
 * 0000000140339EBE: test    dl, 4
 * 0000000140339EC1: jz      loc_140339F81
 * 0000000140339EC7: mov     rcx, [r13+8]
 * 0000000140339ECB: mov     r14d, 0FFFh
 * 0000000140339ED1: mov     eax, [r13+10h]
 * 0000000140339ED5: and     r14, rcx
 * 0000000140339ED8: add     rax, 0FFFh
 * 0000000140339EDE: mov     rbx, rcx
 * 0000000140339EE1: add     r14, rax
 * 0000000140339EE4: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140339EEB: shr     r14, 0Ch
 * 0000000140339EEF: mov     r12d, 1
 * 0000000140339EF5: test    r14, r14
 * 0000000140339EF8: jz      short loc_140339F79
 * 0000000140339EFA: xor     edi, edi
 * 0000000140339EFC: mov     rax, [rsi+2A8h]
 * 0000000140339F03: mov     rcx, rbx
 * 0000000140339F06: sub     r14, r12
 * 0000000140339F09: call    KeGuardDispatchICall
 * 0000000140339F0E: mov     r11, 0B3B74BDEE4453415h
 * 0000000140339F18: test    al, al
 * 0000000140339F1A: jz      short loc_140339F5C
 * 0000000140339F1C: cmp     [rsi+8D8h], edi
 * 0000000140339F22: jnz     short loc_140339F5C
 * 0000000140339F24: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339F2E: add     rax, rsi
 * 0000000140339F31: mov     [rsi+8E0h], rax
 * 0000000140339F38: lea     rax, [r11+r13]
 * 0000000140339F3C: mov     [rsi+8E8h], rax
 * 0000000140339F43: movsxd  rax, dword ptr [r13+0]
 * 0000000140339F47: mov     [rsi+8F0h], rax
 * 0000000140339F4E: mov     [rsi+8F8h], rbx
 * 0000000140339F55: mov     [rsi+8D8h], r12d
 * 0000000140339F5C: add     dword ptr [rsi+810h], 100h
 * 0000000140339F66: add     rbx, 1000h
 * 0000000140339F6D: test    r14, r14
 * 0000000140339F70: jnz     short loc_140339EFC
 * 0000000140339F72: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140339F79: xor     r10d, r10d
 * 0000000140339F7C: jmp     loc_14033A202
 * 0000000140339F81: mov     r11, [r13+8]
 * 0000000140339F85: mov     r8d, [r13+10h]
 * 0000000140339F89: mov     r9, r11
 * 0000000140339F8C: add     [rsi+810h], r8d
 * 0000000140339F93: mov     rax, r11
 * 0000000140339F96: mov     r14d, [rsi+7FCh]
 * 0000000140339F9D: mov     r15, [rsi+800h]
 * 0000000140339FA4: lea     rcx, [r11+r8]
 * 0000000140339FA8: cmp     r11, rcx
 * 0000000140339FAB: jnb     short loc_140339FBD
 * 0000000140339FAD: mov     edx, 40h ; '@'
 * 0000000140339FB2: prefetchnta byte ptr [rax]
 * 0000000140339FB5: add     rax, rdx
 * 0000000140339FB8: cmp     rax, rcx
 * 0000000140339FBB: jb      short loc_140339FB2
 * 0000000140339FBD: mov     r10d, r8d
 * 0000000140339FC0: mov     rbx, r15
 * 0000000140339FC3: shr     r10d, 7
 * 0000000140339FC7: mov     r12d, 1
 * 0000000140339FCD: test    r10d, r10d
 * 0000000140339FD0: jz      short loc_14033A03B
 * 0000000140339FD2: mov     rsi, 7010008004002001h
 * 0000000140339FDC: mov     edx, 8
 * 0000000140339FE1: mov     rax, [r9]
 * 0000000140339FE4: mov     ecx, r14d
 * 0000000140339FE7: xor     rax, rbx
 * 0000000140339FEA: mov     rbx, [r9+8]
 * 0000000140339FEE: rol     rax, cl
 * 0000000140339FF1: add     r9, 10h
 * 0000000140339FF5: xor     rbx, rax
 * 0000000140339FF8: rol     rbx, cl
 * 0000000140339FFB: sub     rdx, r12
 * 0000000140339FFE: jnz     short loc_140339FE1
 * 000000014033A000: mov     rcx, r9
 * 000000014033A003: sub     rcx, r11
 * 000000014033A006: xor     rcx, r15
 * 000000014033A009: mov     rax, rcx
 * 000000014033A00C: rol     rax, 11h
 * 000000014033A010: xor     rcx, rax
 * 000000014033A013: mov     rax, rsi
 * 000000014033A016: mul     rcx
 * 000000014033A019: xor     eax, edx
 * 000000014033A01B: mov     [rbp+20F0h+var_1AA0], rdx
 * 000000014033A022: xor     r14d, eax
 * 000000014033A025: mov     eax, 0FFFFFFFFh
 * 000000014033A02A: and     r14d, 3Fh
 * 000000014033A02E: cmovz   r14d, r12d
 * 000000014033A032: add     r10d, eax
 * 000000014033A035: jnz     short loc_140339FDC
 * 000000014033A037: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033A03B: and     r8d, 7Fh
 * 000000014033A03F: cmp     r8d, 8
 * 000000014033A043: jb      short loc_14033A062
 * 000000014033A045: mov     edx, r8d
 * 000000014033A048: shr     rdx, 3
 * 000000014033A04C: xor     rbx, [r9]
 * 000000014033A04F: mov     ecx, r14d
 * 000000014033A052: rol     rbx, cl
 * 000000014033A055: add     r9, 8
 * 000000014033A059: add     r8d, 0FFFFFFF8h
 * 000000014033A05D: sub     rdx, r12
 * 000000014033A060: jnz     short loc_14033A04C
 * 000000014033A062: test    r8d, r8d
 * 000000014033A065: jz      short loc_14033A085
 * 000000014033A067: mov     esi, 0FFFFFFFFh
 * 000000014033A06C: movzx   eax, byte ptr [r9]
 * 000000014033A070: mov     ecx, r14d
 * 000000014033A073: xor     rbx, rax
 * 000000014033A076: add     r9, r12
 * 000000014033A079: rol     rbx, cl
 * 000000014033A07C: add     r8d, esi
 * 000000014033A07F: jnz     short loc_14033A06C
 * 000000014033A081: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033A085: mov     rax, rbx
 * 000000014033A088: shr     rax, 1Fh
 * 000000014033A08C: xor     r10d, r10d
 * 000000014033A08F: jmp     short loc_14033A097
 * 000000014033A091: xor     ebx, eax
 * 000000014033A093: shr     rax, 1Fh
 * 000000014033A097: test    rax, rax
 * 000000014033A09A: jnz     short loc_14033A091
 * 000000014033A09C: mov     r8d, [r13+14h]
 * 000000014033A0A0: btr     ebx, 1Fh
 * 000000014033A0A4: cmp     ebx, r8d
 * 000000014033A0A7: jz      loc_14033A1F8
 * 000000014033A0AD: mov     ecx, [r13+10h]
 * 000000014033A0B1: mov     rdx, [r13+8]
 * 000000014033A0B5: test    rcx, rcx
 * 000000014033A0B8: jz      loc_14033A15B
 * 000000014033A0BE: mov     eax, [rsi+974h]
 * 000000014033A0C4: mov     r9d, 40h ; '@'
 * 000000014033A0CA: test    r9b, al
 * 000000014033A0CD: jz      loc_14033A15B
 * 000000014033A0D3: mov     r12, cr8
 * 000000014033A0D7: lea     eax, [r9-3Eh]
 * 000000014033A0DB: mov     cr8, rax
 * 000000014033A0DF: lea     rax, [rcx-1]
 * 000000014033A0E3: mov     r14, rdx
 * 000000014033A0E6: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033A0ED: add     rax, rdx
 * 000000014033A0F0: mov     ecx, 0FFFh
 * 000000014033A0F5: or      rax, rcx
 * 000000014033A0F8: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033A0FC: lea     r13, [r14-1]
 * 000000014033A100: movzx   r15d, r12b
 * 000000014033A104: mov     rax, [rsi+460h]
 * 000000014033A10B: xor     edx, edx
 * 000000014033A10D: mov     rcx, r14
 * 000000014033A110: call    KeGuardDispatchICall
 * 000000014033A115: cmp     eax, 0C000022Dh
 * 000000014033A11A: jnz     short loc_14033A144
 * 000000014033A11C: mov     eax, 1
 * 000000014033A121: cmp     r12b, al
 * 000000014033A124: ja      loc_14033A1D1
 * 000000014033A12A: movzx   r15d, r12b
 * 000000014033A12E: mov     cr8, r15
 * 000000014033A132: mov     al, [r14]
 * 000000014033A135: mov     rax, cr8
 * 000000014033A139: mov     eax, 2
 * 000000014033A13E: mov     cr8, rax
 * 000000014033A142: jmp     short loc_14033A104
 * 000000014033A144: xor     r10d, r10d
 * 000000014033A147: test    eax, eax
 * 000000014033A149: jns     loc_14033A1D4
 * 000000014033A14F: mov     cr8, r15
 * 000000014033A153: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033A157: mov     r8d, [r13+14h]
 * 000000014033A15B: mov     eax, [rsi+8D8h]
 * 000000014033A161: test    eax, eax
 * 000000014033A163: jnz     short loc_14033A17E
 * 000000014033A165: mov     ecx, ebx
 * 000000014033A167: mov     eax, r8d
 * 000000014033A16A: xor     rcx, rax
 * 000000014033A16D: mov     rax, [rsi+580h]
 * 000000014033A174: mov     [rax+18h], rcx
 * 000000014033A178: mov     eax, [rsi+8D8h]
 * 000000014033A17E: mov     rcx, [r13+8]
 * 000000014033A182: mov     r9, 0A3A03F5891C8B4E8h
 * 000000014033A18C: mov     r11, 0B3B74BDEE4453415h
 * 000000014033A196: mov     r12d, 1
 * 000000014033A19C: test    eax, eax
 * 000000014033A19E: jnz     short loc_14033A20C
 * 000000014033A1A0: lea     rax, [rsi+r9]
 * 000000014033A1A4: mov     [rsi+8E0h], rax
 * 000000014033A1AB: lea     rax, [r11+r13]
 * 000000014033A1AF: mov     [rsi+8E8h], rax
 * 000000014033A1B6: movsxd  rax, dword ptr [r13+0]
 * 000000014033A1BA: mov     [rsi+8F0h], rax
 * 000000014033A1C1: mov     [rsi+8F8h], rcx
 * 000000014033A1C8: mov     [rsi+8D8h], r12d
 * 000000014033A1CF: jmp     short loc_14033A20C
 * 000000014033A1D1: xor     r10d, r10d
 * 000000014033A1D4: mov     r8d, 1000h
 * 000000014033A1DA: add     r14, r8
 * 000000014033A1DD: add     r13, r8
 * 000000014033A1E0: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033A1E4: jnz     loc_14033A100
 * 000000014033A1EA: mov     cr8, r15
 * 000000014033A1EE: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033A1F2: mov     r12d, 1
 * 000000014033A1F8: mov     r11, 0B3B74BDEE4453415h
 * 000000014033A202: mov     r9, 0A3A03F5891C8B4E8h
 * 000000014033A20C: mov     eax, [r13+28h]
 * 000000014033A210: mov     ecx, 2
 * 000000014033A215: test    cl, al
 * 000000014033A217: jz      loc_14033462F
 * 000000014033A21D: mov     r8, [r13+8]
 * 000000014033A221: test    al, 4
 * 000000014033A223: jz      short loc_14033A29B
 * 000000014033A225: mov     rax, [r8+70h]
 * 000000014033A229: mov     rdx, [r13+18h]
 * 000000014033A22D: mov     rcx, [rax]
 * 000000014033A230: cmp     rcx, rdx
 * 000000014033A233: jz      short loc_14033A29B
 * 000000014033A235: mov     rax, [rsi+580h]
 * 000000014033A23C: mov     [rax], rcx
 * 000000014033A23F: mov     dword ptr [rax+10h], 100h
 * 000000014033A246: mov     eax, [rsi+8D8h]
 * 000000014033A24C: test    eax, eax
 * 000000014033A24E: jnz     short loc_14033A264
 * 000000014033A250: mov     rax, [rsi+580h]
 * 000000014033A257: xor     rcx, rdx
 * 000000014033A25A: mov     [rax+18h], rcx
 * 000000014033A25E: mov     eax, [rsi+8D8h]
 * 000000014033A264: mov     rcx, [r8+70h]
 * 000000014033A268: test    eax, eax
 * 000000014033A26A: jnz     short loc_14033A29B
 * 000000014033A26C: lea     rax, [rsi+r9]
 * 000000014033A270: mov     [rsi+8E0h], rax
 * 000000014033A277: lea     rax, [r11+r13]
 * 000000014033A27B: mov     [rsi+8E8h], rax
 * 000000014033A282: movsxd  rax, dword ptr [r13+0]
 * 000000014033A286: mov     [rsi+8F0h], rax
 * 000000014033A28D: mov     [rsi+8F8h], rcx
 * 000000014033A294: mov     [rsi+8D8h], r12d
 * 000000014033A29B: mov     eax, [r13+28h]
 * 000000014033A29F: test    al, 8
 * 000000014033A2A1: jz      loc_14033462F
 * 000000014033A2A7: mov     rax, [r8+78h]
 * 000000014033A2AB: mov     rdx, [r13+20h]
 * 000000014033A2AF: mov     rcx, [rax]
 * 000000014033A2B2: cmp     rcx, rdx
 * 000000014033A2B5: jz      loc_14033462F
 * 000000014033A2BB: mov     rax, [rsi+580h]
 * 000000014033A2C2: mov     [rax], rcx
 * 000000014033A2C5: mov     dword ptr [rax+10h], 100h
 * 000000014033A2CC: mov     eax, [rsi+8D8h]
 * 000000014033A2D2: test    eax, eax
 * 000000014033A2D4: jnz     short loc_14033A2EA
 * 000000014033A2D6: mov     rax, [rsi+580h]
 * 000000014033A2DD: xor     rcx, rdx
 * 000000014033A2E0: mov     [rax+18h], rcx
 * 000000014033A2E4: mov     eax, [rsi+8D8h]
 * 000000014033A2EA: mov     rcx, [r8+78h]
 * 000000014033A2EE: test    eax, eax
 * 000000014033A2F0: jnz     loc_14033462F
 * 000000014033A2F6: lea     rax, [rsi+r9]
 * 000000014033A2FA: mov     [rsi+8E0h], rax
 * 000000014033A301: lea     rax, [r11+r13]
 * 000000014033A305: mov     [rsi+8E8h], rax
 * 000000014033A30C: movsxd  rax, dword ptr [r13+0]
 * 000000014033A310: mov     [rsi+8F0h], rax
 * 000000014033A317: mov     [rsi+8F8h], rcx
 * 000000014033A31E: mov     [rsi+8D8h], r12d
 * 000000014033A325: jmp     loc_14033462F
 * 000000014033A32A: xor     eax, eax
 * 000000014033A32C: xor     r10d, r10d
 * 000000014033A32F: mov     [rsi+80Ch], eax
 * 000000014033A335: lea     r12d, [r10+1]
 * 000000014033A339: jmp     loc_14033A202
 * 000000014033A33E: mov     r14, [r13+8]
 * 000000014033A342: mov     r8d, [r13+10h]
 * 000000014033A346: mov     r9, r14
 * 000000014033A349: add     [rsi+810h], r8d
 * 000000014033A350: mov     rax, r14
 * 000000014033A353: mov     r11d, [rsi+7FCh]
 * 000000014033A35A: mov     r15, [rsi+800h]
 * 000000014033A361: lea     rcx, [r14+r8]
 * 000000014033A365: cmp     r14, rcx
 * 000000014033A368: jnb     short loc_14033A37A
 * 000000014033A36A: mov     edx, 40h ; '@'
 * 000000014033A36F: prefetchnta byte ptr [rax]
 * 000000014033A372: add     rax, rdx
 * 000000014033A375: cmp     rax, rcx
 * 000000014033A378: jb      short loc_14033A36F
 * 000000014033A37A: mov     r10d, r8d
 * 000000014033A37D: mov     rbx, r15
 * 000000014033A380: shr     r10d, 7
 * 000000014033A384: mov     r13d, 1
 * 000000014033A38A: mov     r12d, 0FFFFFFFFh
 * 000000014033A390: test    r10d, r10d
 * 000000014033A393: jz      short loc_14033A3FA
 * 000000014033A395: mov     rsi, 7010008004002001h
 * 000000014033A39F: mov     edx, 8
 * 000000014033A3A4: mov     rax, [r9]
 * 000000014033A3A7: mov     ecx, r11d
 * 000000014033A3AA: xor     rax, rbx
 * 000000014033A3AD: mov     rbx, [r9+8]
 * 000000014033A3B1: rol     rax, cl
 * 000000014033A3B4: add     r9, 10h
 * 000000014033A3B8: xor     rbx, rax
 * 000000014033A3BB: rol     rbx, cl
 * 000000014033A3BE: sub     rdx, r13
 * 000000014033A3C1: jnz     short loc_14033A3A4
 * 000000014033A3C3: mov     rcx, r9
 * 000000014033A3C6: sub     rcx, r14
 * 000000014033A3C9: xor     rcx, r15
 * 000000014033A3CC: mov     rax, rcx
 * 000000014033A3CF: rol     rax, 11h
 * 000000014033A3D3: xor     rcx, rax
 * 000000014033A3D6: mov     rax, rsi
 * 000000014033A3D9: mul     rcx
 * 000000014033A3DC: xor     r11d, eax
 * 000000014033A3DF: mov     [rbp+20F0h+var_1A98], rdx
 * 000000014033A3E6: xor     r11d, edx
 * 000000014033A3E9: and     r11d, 3Fh
 * 000000014033A3ED: cmovz   r11d, r13d
 * 000000014033A3F1: add     r10d, r12d
 * 000000014033A3F4: jnz     short loc_14033A39F
 * 000000014033A3F6: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033A3FA: and     r8d, 7Fh
 * 000000014033A3FE: cmp     r8d, 8
 * 000000014033A402: jb      short loc_14033A421
 * 000000014033A404: mov     edx, r8d
 * 000000014033A407: shr     rdx, 3
 * 000000014033A40B: xor     rbx, [r9]
 * 000000014033A40E: mov     ecx, r11d
 * 000000014033A411: rol     rbx, cl
 * 000000014033A414: add     r9, 8
 * 000000014033A418: add     r8d, 0FFFFFFF8h
 * 000000014033A41C: sub     rdx, r13
 * 000000014033A41F: jnz     short loc_14033A40B
 * 000000014033A421: test    r8d, r8d
 * 000000014033A424: jz      short loc_14033A43B
 * 000000014033A426: movzx   eax, byte ptr [r9]
 * 000000014033A42A: mov     ecx, r11d
 * 000000014033A42D: xor     rbx, rax
 * 000000014033A430: add     r9, r13
 * 000000014033A433: rol     rbx, cl
 * 000000014033A436: add     r8d, r12d
 * 000000014033A439: jnz     short loc_14033A426
 * 000000014033A43B: mov     rax, rbx
 * 000000014033A43E: shr     rax, 1Fh
 * 000000014033A442: xor     r10d, r10d
 * 000000014033A445: jmp     short loc_14033A44D
 * 000000014033A447: xor     ebx, eax
 * 000000014033A449: shr     rax, 1Fh
 * 000000014033A44D: test    rax, rax
 * 000000014033A450: jnz     short loc_14033A447
 * 000000014033A452: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033A456: btr     ebx, 1Fh
 * 000000014033A45A: mov     r13d, r10d
 * 000000014033A45D: cmp     ebx, [rax+14h]
 * 000000014033A460: jz      loc_14033A1EE
 * 000000014033A466: cmp     [rax], r10d
 * 000000014033A469: jnz     short loc_14033A478
 * 000000014033A46B: cmp     [rax+18h], r10d
 * 000000014033A46F: mov     ecx, 1
 * 000000014033A474: cmovnz  r13d, ecx
 * 000000014033A478: mov     ecx, [rax+10h]
 * 000000014033A47B: mov     rdx, [rax+8]
 * 000000014033A47F: test    rcx, rcx
 * 000000014033A482: jz      loc_14033A543
 * 000000014033A488: mov     eax, [rsi+974h]
 * 000000014033A48E: mov     r8d, 40h ; '@'
 * 000000014033A494: test    r8b, al
 * 000000014033A497: jz      loc_14033A543
 * 000000014033A49D: mov     r12, cr8
 * 000000014033A4A1: lea     eax, [r8-3Eh]
 * 000000014033A4A5: mov     cr8, rax
 * 000000014033A4A9: lea     rax, [rcx-1]
 * 000000014033A4AD: mov     r14, rdx
 * 000000014033A4B0: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033A4B7: add     rax, rdx
 * 000000014033A4BA: mov     ecx, 0FFFh
 * 000000014033A4BF: or      rax, rcx
 * 000000014033A4C2: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033A4C6: lea     rax, [r14-1]
 * 000000014033A4CA: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033A4CE: movzx   r15d, r12b
 * 000000014033A4D2: mov     rax, [rsi+460h]
 * 000000014033A4D9: xor     edx, edx
 * 000000014033A4DB: mov     rcx, r14
 * 000000014033A4DE: call    KeGuardDispatchICall
 * 000000014033A4E3: cmp     eax, 0C000022Dh
 * 000000014033A4E8: jnz     short loc_14033A511
 * 000000014033A4EA: test    r13d, r13d
 * 000000014033A4ED: jnz     short loc_14033A53C
 * 000000014033A4EF: lea     eax, [r13+1]
 * 000000014033A4F3: cmp     r12b, al
 * 000000014033A4F6: ja      short loc_14033A51A
 * 000000014033A4F8: movzx   r15d, r12b
 * 000000014033A4FC: mov     cr8, r15
 * 000000014033A500: mov     al, [r14]
 * 000000014033A503: mov     rax, cr8
 * 000000014033A507: lea     eax, [r13+2]
 * 000000014033A50B: mov     cr8, rax
 * 000000014033A50F: jmp     short loc_14033A4D2
 * 000000014033A511: xor     r10d, r10d
 * 000000014033A514: test    eax, eax
 * 000000014033A516: js      short loc_14033A53F
 * 000000014033A518: jmp     short loc_14033A51D
 * 000000014033A51A: xor     r10d, r10d
 * 000000014033A51D: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033A521: mov     r8d, 1000h
 * 000000014033A527: add     rax, r8
 * 000000014033A52A: add     r14, r8
 * 000000014033A52D: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033A531: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033A535: jnz     short loc_14033A4CE
 * 000000014033A537: jmp     loc_14033A1EA
 * 000000014033A53C: xor     r10d, r10d
 * 000000014033A53F: mov     cr8, r15
 * 000000014033A543: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033A547: mov     eax, [rsi+8D8h]
 * 000000014033A54D: mov     edx, [r13+14h]
 * 000000014033A551: test    eax, eax
 * 000000014033A553: jnz     loc_14033A17E
 * 000000014033A559: mov     ecx, ebx
 * 000000014033A55B: xor     rcx, rdx
 * 000000014033A55E: jmp     loc_14033A16D
 * 000000014033A563: mov     rdx, r13
 * 000000014033A566: mov     rcx, rsi
 * 000000014033A569: call    sub_1401ADB1C
 * 000000014033A56E: jmp     loc_140334DB4
 * 000000014033A573: mov     rdx, r13
 * 000000014033A576: mov     rcx, rsi
 * 000000014033A579: call    sub_1401AEA44
 * 000000014033A57E: jmp     loc_140334DB4
 * 000000014033A583: mov     eax, [rsi+818h]
 * 000000014033A589: test    dl, al
 * 000000014033A58B: jz      loc_140334318
 * 000000014033A591: xor     eax, eax
 * 000000014033A593: cmp     [rsi+960h], rax
 * 000000014033A59A: jz      short loc_14033A5D8
 * 000000014033A59C: mov     eax, [rsi+974h]
 * 000000014033A5A2: test    al, 4
 * 000000014033A5A4: jnz     short loc_14033A5D6
 * 000000014033A5A6: mov     rax, [rsi+3C8h]
 * 000000014033A5AD: lea     rdx, [rbp+20F0h+var_1C50]
 * 000000014033A5B4: xor     r9d, r9d
 * 000000014033A5B7: xor     r8d, r8d
 * 000000014033A5BA: lea     ecx, [r9+1Ah]
 * 000000014033A5BE: call    KeGuardDispatchICall
 * 000000014033A5C3: mov     rbx, [rbp+20F0h+var_1C50]
 * 000000014033A5CA: xor     ecx, ecx
 * 000000014033A5CC: test    eax, eax
 * 000000014033A5CE: cmovs   rbx, rcx
 * 000000014033A5D2: xor     eax, eax
 * 000000014033A5D4: jmp     short loc_14033A5DB
 * 000000014033A5D6: xor     eax, eax
 * 000000014033A5D8: mov     rbx, rax
 * 000000014033A5DB: mov     r15d, eax
 * 000000014033A5DE: mov     [rbp+20F0h+var_20E8], eax
 * 000000014033A5E1: mov     rax, [rsi+3A8h]
 * 000000014033A5E8: xor     ecx, ecx
 * 000000014033A5EA: mov     [rbp+20F0h+var_20F0], rbx
 * 000000014033A5EE: call    KeGuardDispatchICall
 * 000000014033A5F3: mov     r13, rax
 * 000000014033A5F6: mov     r14d, 1
 * 000000014033A5FC: test    rax, rax
 * 000000014033A5FF: jz      loc_14033AD32
 * 000000014033A605: mov     rcx, r13
 * 000000014033A608: cmp     rbx, r13
 * 000000014033A60B: jnz     loc_14033A964
 * 000000014033A611: mov     rdi, [rbp+20F0h+var_20D0]
 * 000000014033A615: mov     rax, [rsi+398h]
 * 000000014033A61C: mov     r14, rdi
 * 000000014033A61F: call    KeGuardDispatchICall
 * 000000014033A624: test    eax, eax
 * 000000014033A626: js      loc_14033AD03
 * 000000014033A62C: mov     rax, [rsi+3D8h]
 * 000000014033A633: mov     rcx, r13
 * 000000014033A636: call    KeGuardDispatchICall
 * 000000014033A63B: mov     bl, al
 * 000000014033A63D: mov     [rbp+20F0h+var_1F8F], al
 * 000000014033A643: mov     rax, [rsi+3E0h]
 * 000000014033A64A: lea     rdx, [rbp+20F0h+var_2050]
 * 000000014033A651: mov     rcx, r13
 * 000000014033A654: call    KeGuardDispatchICall
 * 000000014033A659: mov     r15b, al
 * 000000014033A65C: mov     byte ptr [rbp+20F0h+var_2060], al
 * 000000014033A662: mov     rax, [rsi+3E8h]
 * 000000014033A669: mov     rcx, r13
 * 000000014033A66C: call    KeGuardDispatchICall
 * 000000014033A671: xor     r8d, r8d
 * 000000014033A674: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033A678: cmp     bl, 61h ; 'a'
 * 000000014033A67B: jz      short loc_14033A6EB
 * 000000014033A67D: mov     eax, [rsi+8D8h]
 * 000000014033A683: test    eax, eax
 * 000000014033A685: jnz     short loc_14033A6EB
 * 000000014033A687: mov     rax, [rsi+580h]
 * 000000014033A68E: movzx   ecx, bl
 * 000000014033A691: xor     rcx, 61h
 * 000000014033A695: mov     [rax+18h], rcx
 * 000000014033A699: mov     eax, [rsi+8D8h]
 * 000000014033A69F: test    eax, eax
 * 000000014033A6A1: jnz     short loc_14033A6EB
 * 000000014033A6A3: mov     r12, 0A3A03F5891C8B4E8h
 * 000000014033A6AD: lea     r10d, [r8+1]
 * 000000014033A6B1: mov     r11, 0B3B74BDEE4453415h
 * 000000014033A6BB: lea     rax, [rsi+r12]
 * 000000014033A6BF: mov     [rsi+8E0h], rax
 * 000000014033A6C6: lea     rax, [rdi+r11]
 * 000000014033A6CA: mov     [rsi+8E8h], rax
 * 000000014033A6D1: movsxd  rax, dword ptr [rdi]
 * 000000014033A6D4: mov     [rsi+8F0h], rax
 * 000000014033A6DB: mov     [rsi+8F8h], r13
 * 000000014033A6E2: mov     [rsi+8D8h], r10d
 * 000000014033A6E9: jmp     short loc_14033A705
 * 000000014033A6EB: mov     r12, 0A3A03F5891C8B4E8h
 * 000000014033A6F5: mov     r11, 0B3B74BDEE4453415h
 * 000000014033A6FF: mov     r10d, 1
 * 000000014033A705: movzx   ecx, bl
 * 000000014033A708: mov     dl, r8b
 * 000000014033A70B: and     ecx, 7
 * 000000014033A70E: mov     r9b, r8b
 * 000000014033A711: sub     ecx, 1
 * 000000014033A714: jz      short loc_14033A766
 * 000000014033A716: cmp     ecx, 1
 * 000000014033A719: jz      short loc_14033A75A
 * 000000014033A71B: xor     eax, eax
 * 000000014033A71D: test    bl, 7
 * 000000014033A720: jz      short loc_14033A76A
 * 000000014033A722: cmp     [rsi+8D8h], eax
 * 000000014033A728: jnz     short loc_14033A76A
 * 000000014033A72A: lea     rax, [rsi+r12]
 * 000000014033A72E: mov     [rsi+8E0h], rax
 * 000000014033A735: lea     rax, [rdi+r11]
 * 000000014033A739: mov     [rsi+8E8h], rax
 * 000000014033A740: movsxd  rax, dword ptr [rdi]
 * 000000014033A743: mov     [rsi+8F0h], rax
 * 000000014033A74A: mov     [rsi+8F8h], r13
 * 000000014033A751: mov     [rsi+8D8h], r10d
 * 000000014033A758: jmp     short loc_14033A768
 * 000000014033A75A: mov     eax, 10h
 * 000000014033A75F: mov     dl, al
 * 000000014033A761: mov     r9b, al
 * 000000014033A764: jmp     short loc_14033A768
 * 000000014033A766: mov     dl, 30h ; '0'
 * 000000014033A768: xor     eax, eax
 * 000000014033A76A: mov     r8, [rsi+5B8h]
 * 000000014033A771: movzx   ecx, bl
 * 000000014033A774: shr     rcx, 4
 * 000000014033A778: or      dl, [r8+rcx*2]
 * 000000014033A77C: cmp     dl, r15b
 * 000000014033A77F: jz      short loc_14033A7B7
 * 000000014033A781: cmp     [rsi+8D8h], eax
 * 000000014033A787: jnz     short loc_14033A7B7
 * 000000014033A789: lea     rax, [rsi+r12]
 * 000000014033A78D: mov     [rsi+8E0h], rax
 * 000000014033A794: lea     rax, [rdi+r11]
 * 000000014033A798: mov     [rsi+8E8h], rax
 * 000000014033A79F: movsxd  rax, dword ptr [rdi]
 * 000000014033A7A2: mov     [rsi+8F0h], rax
 * 000000014033A7A9: mov     [rsi+8F8h], r13
 * 000000014033A7B0: mov     [rsi+8D8h], r10d
 * 000000014033A7B7: mov     al, [r8+rcx*2+1]
 * 000000014033A7BC: or      al, r9b
 * 000000014033A7BF: cmp     al, [rbp+20F0h+var_2050]
 * 000000014033A7C5: jz      short loc_14033A7FF
 * 000000014033A7C7: xor     eax, eax
 * 000000014033A7C9: cmp     [rsi+8D8h], eax
 * 000000014033A7CF: jnz     short loc_14033A801
 * 000000014033A7D1: lea     rax, [rsi+r12]
 * 000000014033A7D5: mov     [rsi+8E0h], rax
 * 000000014033A7DC: lea     rax, [rdi+r11]
 * 000000014033A7E0: mov     [rsi+8E8h], rax
 * 000000014033A7E7: movsxd  rax, dword ptr [rdi]
 * 000000014033A7EA: mov     [rsi+8F0h], rax
 * 000000014033A7F1: mov     [rsi+8F8h], r13
 * 000000014033A7F8: mov     [rsi+8D8h], r10d
 * 000000014033A7FF: xor     eax, eax
 * 000000014033A801: cmp     r13, [rsi+4D0h]
 * 000000014033A808: jz      short loc_14033A81C
 * 000000014033A80A: mov     rax, [rsi+3D0h]
 * 000000014033A811: mov     edx, r10d
 * 000000014033A814: mov     rcx, r13
 * 000000014033A817: call    KeGuardDispatchICall
 * 000000014033A81C: mov     [rbp+20F0h+var_20D8], rax
 * 000000014033A820: mov     r15, rax
 * 000000014033A823: test    rax, rax
 * 000000014033A826: jz      loc_14033ACE1
 * 000000014033A82C: mov     rcx, [rax]
 * 000000014033A82F: mov     rbx, rax
 * 000000014033A832: test    rcx, rcx
 * 000000014033A835: jz      loc_14033ACD2
 * 000000014033A83B: mov     dil, byte ptr [rbp+20F0h+var_2060]
 * 000000014033A842: mov     r15, [rbp+20F0h+var_20C8]
 * 000000014033A846: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 000000014033A84A: mov     [rbx], rcx
 * 000000014033A84D: mov     rax, [rsi+1D8h]
 * 000000014033A854: call    KeGuardDispatchICall
 * 000000014033A859: mov     rcx, [rbx+8]
 * 000000014033A85D: movzx   edx, [rbp+20F0h+var_2050]
 * 000000014033A864: mov     r12, rcx
 * 000000014033A867: movzx   eax, dil
 * 000000014033A86B: and     r12, 0FFFFFFFFFFFF0000h
 * 000000014033A872: cmp     r12, r15
 * 000000014033A875: cmovz   edx, eax
 * 000000014033A878: mov     rax, [rsi+3F0h]
 * 000000014033A87F: shr     rcx, 6
 * 000000014033A883: and     cl, 0Fh
 * 000000014033A886: call    KeGuardDispatchICall
 * 000000014033A88B: xor     r9d, r9d
 * 000000014033A88E: test    eax, eax
 * 000000014033A890: jnz     loc_14033A94F
 * 000000014033A896: test    dword ptr [rsi+970h], 40000000h
 * 000000014033A8A0: lea     r10d, [r9+1]
 * 000000014033A8A4: jz      short loc_14033A8EE
 * 000000014033A8A6: mov     rcx, [rsi+0A50h]
 * 000000014033A8AD: lea     edx, [rax+30h]
 * 000000014033A8B0: lea     r8d, [r9+6]
 * 000000014033A8B4: mov     rax, [r14]
 * 000000014033A8B7: add     edx, 0FFFFFFF8h
 * 000000014033A8BA: mov     [rcx], rax
 * 000000014033A8BD: add     r14, 8
 * 000000014033A8C1: add     rcx, 8
 * 000000014033A8C5: sub     r8, r10
 * 000000014033A8C8: jnz     short loc_14033A8B4
 * 000000014033A8CA: test    edx, edx
 * 000000014033A8CC: jz      short loc_14033A8E7
 * 000000014033A8CE: mov     r9d, 0FFFFFFFFh
 * 000000014033A8D4: mov     al, [r14]
 * 000000014033A8D7: add     r14, r10
 * 000000014033A8DA: mov     [rcx], al
 * 000000014033A8DC: add     rcx, r10
 * 000000014033A8DF: add     edx, r9d
 * 000000014033A8E2: jnz     short loc_14033A8D4
 * 000000014033A8E4: xor     r9d, r9d
 * 000000014033A8E7: mov     r14, [rsi+0A50h]
 * 000000014033A8EE: mov     [r14+18h], r12
 * 000000014033A8F2: mov     rax, [rbx]
 * 000000014033A8F5: mov     [r14+20h], rax
 * 000000014033A8F9: mov     eax, [rbx+8]
 * 000000014033A8FC: shr     rax, 6
 * 000000014033A900: and     al, 0Fh
 * 000000014033A902: mov     [r14+28h], al
 * 000000014033A906: cmp     [rsi+8D8h], r9d
 * 000000014033A90D: jnz     short loc_14033A94F
 * 000000014033A90F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033A919: add     rax, rsi
 * 000000014033A91C: mov     [rsi+8E0h], rax
 * 000000014033A923: mov     rax, 0B3B74BDEE4453415h
 * 000000014033A92D: add     rax, r14
 * 000000014033A930: mov     [rsi+8E8h], rax
 * 000000014033A937: movsxd  rax, dword ptr [r14]
 * 000000014033A93A: mov     [rsi+8F0h], rax
 * 000000014033A941: mov     [rsi+8F8h], r13
 * 000000014033A948: mov     [rsi+8D8h], r10d
 * 000000014033A94F: add     rbx, 30h ; '0'
 * 000000014033A953: mov     rcx, [rbx]
 * 000000014033A956: test    rcx, rcx
 * 000000014033A959: jnz     loc_14033A846
 * 000000014033A95F: jmp     loc_14033ACCE
 * 000000014033A964: mov     rax, [rsi+3C0h]
 * 000000014033A96B: call    KeGuardDispatchICall
 * 000000014033A970: xor     edi, edi
 * 000000014033A972: test    eax, eax
 * 000000014033A974: jz      loc_14033AD09
 * 000000014033A97A: mov     r12, [rbp+20F0h+var_20D0]
 * 000000014033A97E: mov     rcx, r13
 * 000000014033A981: mov     rax, [rsi+398h]
 * 000000014033A988: mov     r14, r12
 * 000000014033A98B: call    KeGuardDispatchICall
 * 000000014033A990: test    eax, eax
 * 000000014033A992: js      loc_14033AD03
 * 000000014033A998: mov     rax, [rsi+3D8h]
 * 000000014033A99F: mov     rcx, r13
 * 000000014033A9A2: call    KeGuardDispatchICall
 * 000000014033A9A7: mov     bl, al
 * 000000014033A9A9: mov     [rbp+20F0h+var_1F90], al
 * 000000014033A9AF: mov     rax, [rsi+3E0h]
 * 000000014033A9B6: lea     rdx, [rbp+20F0h+var_204F]
 * 000000014033A9BD: mov     rcx, r13
 * 000000014033A9C0: call    KeGuardDispatchICall
 * 000000014033A9C5: mov     dil, al
 * 000000014033A9C8: mov     rcx, r13
 * 000000014033A9CB: mov     rax, [rsi+3E8h]
 * 000000014033A9D2: call    KeGuardDispatchICall
 * 000000014033A9D7: xor     r10d, r10d
 * 000000014033A9DA: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033A9DE: cmp     bl, 61h ; 'a'
 * 000000014033A9E1: jz      short loc_14033AA52
 * 000000014033A9E3: mov     eax, [rsi+8D8h]
 * 000000014033A9E9: test    eax, eax
 * 000000014033A9EB: jnz     short loc_14033AA52
 * 000000014033A9ED: mov     rax, [rsi+580h]
 * 000000014033A9F4: movzx   ecx, bl
 * 000000014033A9F7: xor     rcx, 61h
 * 000000014033A9FB: mov     [rax+18h], rcx
 * 000000014033A9FF: mov     eax, [rsi+8D8h]
 * 000000014033AA05: test    eax, eax
 * 000000014033AA07: jnz     short loc_14033AA52
 * 000000014033AA09: mov     r8, 0A3A03F5891C8B4E8h
 * 000000014033AA13: lea     r11d, [r10+1]
 * 000000014033AA17: mov     r15, 0B3B74BDEE4453415h
 * 000000014033AA21: lea     rax, [rsi+r8]
 * 000000014033AA25: mov     [rsi+8E0h], rax
 * 000000014033AA2C: lea     rax, [r12+r15]
 * 000000014033AA30: mov     [rsi+8E8h], rax
 * 000000014033AA37: movsxd  rax, dword ptr [r12]
 * 000000014033AA3B: mov     [rsi+8F0h], rax
 * 000000014033AA42: mov     [rsi+8F8h], r13
 * 000000014033AA49: mov     [rsi+8D8h], r11d
 * 000000014033AA50: jmp     short loc_14033AA6C
 * 000000014033AA52: mov     r8, 0A3A03F5891C8B4E8h
 * 000000014033AA5C: mov     r15, 0B3B74BDEE4453415h
 * 000000014033AA66: mov     r11d, 1
 * 000000014033AA6C: movzx   ecx, bl
 * 000000014033AA6F: mov     dl, r10b
 * 000000014033AA72: and     ecx, 7
 * 000000014033AA75: mov     r9b, r10b
 * 000000014033AA78: sub     ecx, 1
 * 000000014033AA7B: jz      short loc_14033AACD
 * 000000014033AA7D: cmp     ecx, 1
 * 000000014033AA80: jz      short loc_14033AAC1
 * 000000014033AA82: test    bl, 7
 * 000000014033AA85: jz      short loc_14033AACF
 * 000000014033AA87: cmp     [rsi+8D8h], r10d
 * 000000014033AA8E: jnz     short loc_14033AACF
 * 000000014033AA90: lea     rax, [rsi+r8]
 * 000000014033AA94: mov     [rsi+8E0h], rax
 * 000000014033AA9B: lea     rax, [r12+r15]
 * 000000014033AA9F: mov     [rsi+8E8h], rax
 * 000000014033AAA6: movsxd  rax, dword ptr [r12]
 * 000000014033AAAA: mov     [rsi+8F0h], rax
 * 000000014033AAB1: mov     [rsi+8F8h], r13
 * 000000014033AAB8: mov     [rsi+8D8h], r11d
 * 000000014033AABF: jmp     short loc_14033AACF
 * 000000014033AAC1: mov     eax, 10h
 * 000000014033AAC6: mov     dl, al
 * 000000014033AAC8: mov     r9b, al
 * 000000014033AACB: jmp     short loc_14033AACF
 * 000000014033AACD: mov     dl, 30h ; '0'
 * 000000014033AACF: mov     r8, [rsi+5B8h]
 * 000000014033AAD6: movzx   ecx, bl
 * 000000014033AAD9: shr     rcx, 4
 * 000000014033AADD: mov     al, [r8+rcx*2]
 * 000000014033AAE1: or      al, dl
 * 000000014033AAE3: mov     rdx, 0A3A03F5891C8B4E8h
 * 000000014033AAED: cmp     al, dil
 * 000000014033AAF0: jz      short loc_14033AB2A
 * 000000014033AAF2: cmp     [rsi+8D8h], r10d
 * 000000014033AAF9: jnz     short loc_14033AB2A
 * 000000014033AAFB: lea     rax, [rsi+rdx]
 * 000000014033AAFF: mov     [rsi+8E0h], rax
 * 000000014033AB06: lea     rax, [r12+r15]
 * 000000014033AB0A: mov     [rsi+8E8h], rax
 * 000000014033AB11: movsxd  rax, dword ptr [r12]
 * 000000014033AB15: mov     [rsi+8F0h], rax
 * 000000014033AB1C: mov     [rsi+8F8h], r13
 * 000000014033AB23: mov     [rsi+8D8h], r11d
 * 000000014033AB2A: mov     al, [r8+rcx*2+1]
 * 000000014033AB2F: or      al, r9b
 * 000000014033AB32: cmp     al, [rbp+20F0h+var_204F]
 * 000000014033AB38: jz      short loc_14033AB72
 * 000000014033AB3A: cmp     [rsi+8D8h], r10d
 * 000000014033AB41: jnz     short loc_14033AB72
 * 000000014033AB43: lea     rax, [rsi+rdx]
 * 000000014033AB47: mov     [rsi+8E0h], rax
 * 000000014033AB4E: lea     rax, [r12+r15]
 * 000000014033AB52: mov     [rsi+8E8h], rax
 * 000000014033AB59: movsxd  rax, dword ptr [r12]
 * 000000014033AB5D: mov     [rsi+8F0h], rax
 * 000000014033AB64: mov     [rsi+8F8h], r13
 * 000000014033AB6B: mov     [rsi+8D8h], r11d
 * 000000014033AB72: cmp     r13, [rsi+4D0h]
 * 000000014033AB79: jz      short loc_14033AB92
 * 000000014033AB7B: mov     rax, [rsi+3D0h]
 * 000000014033AB82: mov     edx, r11d
 * 000000014033AB85: mov     rcx, r13
 * 000000014033AB88: call    KeGuardDispatchICall
 * 000000014033AB8D: mov     r15, rax
 * 000000014033AB90: jmp     short loc_14033AB95
 * 000000014033AB92: mov     r15, r10
 * 000000014033AB95: mov     [rbp+20F0h+var_20D8], r15
 * 000000014033AB99: test    r15, r15
 * 000000014033AB9C: jz      loc_14033ACE1
 * 000000014033ABA2: mov     rcx, [r15]
 * 000000014033ABA5: mov     rbx, r15
 * 000000014033ABA8: test    rcx, rcx
 * 000000014033ABAB: jz      loc_14033ACD2
 * 000000014033ABB1: mov     r15, [rbp+20F0h+var_20C8]
 * 000000014033ABB5: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 000000014033ABB9: mov     [rbx], rcx
 * 000000014033ABBC: mov     rax, [rsi+1D8h]
 * 000000014033ABC3: call    KeGuardDispatchICall
 * 000000014033ABC8: mov     rcx, [rbx+8]
 * 000000014033ABCC: movzx   edx, [rbp+20F0h+var_204F]
 * 000000014033ABD3: mov     r12, rcx
 * 000000014033ABD6: movzx   eax, dil
 * 000000014033ABDA: and     r12, 0FFFFFFFFFFFF0000h
 * 000000014033ABE1: cmp     r12, r15
 * 000000014033ABE4: cmovz   edx, eax
 * 000000014033ABE7: mov     rax, [rsi+3F0h]
 * 000000014033ABEE: shr     rcx, 6
 * 000000014033ABF2: and     cl, 0Fh
 * 000000014033ABF5: call    KeGuardDispatchICall
 * 000000014033ABFA: xor     r9d, r9d
 * 000000014033ABFD: test    eax, eax
 * 000000014033ABFF: jnz     loc_14033ACBE
 * 000000014033AC05: test    dword ptr [rsi+970h], 40000000h
 * 000000014033AC0F: lea     r10d, [r9+1]
 * 000000014033AC13: jz      short loc_14033AC5D
 * 000000014033AC15: mov     rcx, [rsi+0A50h]
 * 000000014033AC1C: lea     edx, [rax+30h]
 * 000000014033AC1F: lea     r8d, [r9+6]
 * 000000014033AC23: mov     rax, [r14]
 * 000000014033AC26: add     edx, 0FFFFFFF8h
 * 000000014033AC29: mov     [rcx], rax
 * 000000014033AC2C: add     r14, 8
 * 000000014033AC30: add     rcx, 8
 * 000000014033AC34: sub     r8, r10
 * 000000014033AC37: jnz     short loc_14033AC23
 * 000000014033AC39: test    edx, edx
 * 000000014033AC3B: jz      short loc_14033AC56
 * 000000014033AC3D: mov     r9d, 0FFFFFFFFh
 * 000000014033AC43: mov     al, [r14]
 * 000000014033AC46: add     r14, r10
 * 000000014033AC49: mov     [rcx], al
 * 000000014033AC4B: add     rcx, r10
 * 000000014033AC4E: add     edx, r9d
 * 000000014033AC51: jnz     short loc_14033AC43
 * 000000014033AC53: xor     r9d, r9d
 * 000000014033AC56: mov     r14, [rsi+0A50h]
 * 000000014033AC5D: mov     [r14+18h], r12
 * 000000014033AC61: mov     rax, [rbx]
 * 000000014033AC64: mov     [r14+20h], rax
 * 000000014033AC68: mov     eax, [rbx+8]
 * 000000014033AC6B: shr     rax, 6
 * 000000014033AC6F: and     al, 0Fh
 * 000000014033AC71: mov     [r14+28h], al
 * 000000014033AC75: cmp     [rsi+8D8h], r9d
 * 000000014033AC7C: jnz     short loc_14033ACBE
 * 000000014033AC7E: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033AC88: add     rax, rsi
 * 000000014033AC8B: mov     [rsi+8E0h], rax
 * 000000014033AC92: mov     rax, 0B3B74BDEE4453415h
 * 000000014033AC9C: add     rax, r14
 * 000000014033AC9F: mov     [rsi+8E8h], rax
 * 000000014033ACA6: movsxd  rax, dword ptr [r14]
 * 000000014033ACA9: mov     [rsi+8F0h], rax
 * 000000014033ACB0: mov     [rsi+8F8h], r13
 * 000000014033ACB7: mov     [rsi+8D8h], r10d
 * 000000014033ACBE: add     rbx, 30h ; '0'
 * 000000014033ACC2: mov     rcx, [rbx]
 * 000000014033ACC5: test    rcx, rcx
 * 000000014033ACC8: jnz     loc_14033ABB5
 * 000000014033ACCE: mov     r15, [rbp+20F0h+var_20D8]
 * 000000014033ACD2: mov     rax, [rsi+0F8h]
 * 000000014033ACD9: mov     rcx, r15
 * 000000014033ACDC: call    KeGuardDispatchICall
 * 000000014033ACE1: mov     rax, [rsi+3A0h]
 * 000000014033ACE8: mov     rcx, r13
 * 000000014033ACEB: call    KeGuardDispatchICall
 * 000000014033ACF0: mov     r15d, [rbp+20F0h+var_20E8]
 * 000000014033ACF4: mov     eax, 8000h
 * 000000014033ACF9: add     [rsi+810h], eax
 * 000000014033ACFF: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033AD03: mov     r14d, 1
 * 000000014033AD09: mov     rax, [rsi+3A8h]
 * 000000014033AD10: add     r15d, r14d
 * 000000014033AD13: mov     rcx, r13
 * 000000014033AD16: mov     [rbp+20F0h+var_20E8], r15d
 * 000000014033AD1A: call    KeGuardDispatchICall
 * 000000014033AD1F: mov     r13, rax
 * 000000014033AD22: test    rax, rax
 * 000000014033AD25: jnz     loc_14033A605
 * 000000014033AD2B: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033AD32: mov     r12, [rsi+4D0h]
 * 000000014033AD39: mov     rax, [rsi+398h]
 * 000000014033AD40: mov     rcx, r12
 * 000000014033AD43: call    KeGuardDispatchICall
 * 000000014033AD48: xor     r10d, r10d
 * 000000014033AD4B: test    eax, eax
 * 000000014033AD4D: js      loc_14033B0CA
 * 000000014033AD53: mov     rax, [rsi+3D8h]
 * 000000014033AD5A: mov     rcx, r12
 * 000000014033AD5D: call    KeGuardDispatchICall
 * 000000014033AD62: mov     bl, al
 * 000000014033AD64: mov     byte ptr [rbp+20F0h+var_2044], al
 * 000000014033AD6A: mov     rax, [rsi+3E0h]
 * 000000014033AD71: lea     rdx, [rbp+20F0h+var_204E]
 * 000000014033AD78: mov     rcx, r12
 * 000000014033AD7B: call    KeGuardDispatchICall
 * 000000014033AD80: mov     r13b, al
 * 000000014033AD83: mov     rcx, r12
 * 000000014033AD86: mov     rax, [rsi+3E8h]
 * 000000014033AD8D: call    KeGuardDispatchICall
 * 000000014033AD92: xor     r11d, r11d
 * 000000014033AD95: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033AD99: cmp     bl, 72h ; 'r'
 * 000000014033AD9C: jz      short loc_14033AE0B
 * 000000014033AD9E: mov     eax, [rsi+8D8h]
 * 000000014033ADA4: test    eax, eax
 * 000000014033ADA6: jnz     short loc_14033AE0B
 * 000000014033ADA8: mov     rax, [rsi+580h]
 * 000000014033ADAF: movzx   ecx, bl
 * 000000014033ADB2: xor     rcx, 72h
 * 000000014033ADB6: mov     [rax+18h], rcx
 * 000000014033ADBA: mov     eax, [rsi+8D8h]
 * 000000014033ADC0: test    eax, eax
 * 000000014033ADC2: jnz     short loc_14033AE0B
 * 000000014033ADC4: mov     r10, [rbp+20F0h+var_20D0]
 * 000000014033ADC8: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033ADD2: add     rax, rsi
 * 000000014033ADD5: mov     r8, 0B3B74BDEE4453415h
 * 000000014033ADDF: mov     [rsi+8E0h], rax
 * 000000014033ADE6: lea     rax, [r10+r8]
 * 000000014033ADEA: mov     [rsi+8E8h], rax
 * 000000014033ADF1: movsxd  rax, dword ptr [r10]
 * 000000014033ADF4: mov     [rsi+8F0h], rax
 * 000000014033ADFB: mov     [rsi+8F8h], r12
 * 000000014033AE02: mov     [rsi+8D8h], r14d
 * 000000014033AE09: jmp     short loc_14033AE19
 * 000000014033AE0B: mov     r10, [rbp+20F0h+var_20D0]
 * 000000014033AE0F: mov     r8, 0B3B74BDEE4453415h
 * 000000014033AE19: movzx   ecx, bl
 * 000000014033AE1C: mov     dl, r11b
 * 000000014033AE1F: and     ecx, 7
 * 000000014033AE22: mov     r9b, r11b
 * 000000014033AE25: sub     ecx, 1
 * 000000014033AE28: jz      short loc_14033AE82
 * 000000014033AE2A: cmp     ecx, 1
 * 000000014033AE2D: jz      short loc_14033AE76
 * 000000014033AE2F: test    bl, 7
 * 000000014033AE32: jz      short loc_14033AE84
 * 000000014033AE34: cmp     [rsi+8D8h], r11d
 * 000000014033AE3B: jnz     short loc_14033AE84
 * 000000014033AE3D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033AE47: add     rax, rsi
 * 000000014033AE4A: mov     [rsi+8E0h], rax
 * 000000014033AE51: lea     rax, [r10+r8]
 * 000000014033AE55: mov     [rsi+8E8h], rax
 * 000000014033AE5C: movsxd  rax, dword ptr [r10]
 * 000000014033AE5F: mov     [rsi+8F0h], rax
 * 000000014033AE66: mov     [rsi+8F8h], r12
 * 000000014033AE6D: mov     [rsi+8D8h], r14d
 * 000000014033AE74: jmp     short loc_14033AE84
 * 000000014033AE76: mov     eax, 10h
 * 000000014033AE7B: mov     dl, al
 * 000000014033AE7D: mov     r9b, al
 * 000000014033AE80: jmp     short loc_14033AE84
 * 000000014033AE82: mov     dl, 30h ; '0'
 * 000000014033AE84: mov     r8, [rsi+5B8h]
 * 000000014033AE8B: movzx   ecx, bl
 * 000000014033AE8E: mov     rbx, 0A3A03F5891C8B4E8h
 * 000000014033AE98: shr     rcx, 4
 * 000000014033AE9C: mov     al, [r8+rcx*2]
 * 000000014033AEA0: or      al, dl
 * 000000014033AEA2: mov     rdx, 0B3B74BDEE4453415h
 * 000000014033AEAC: cmp     al, r13b
 * 000000014033AEAF: jz      short loc_14033AEE8
 * 000000014033AEB1: cmp     [rsi+8D8h], r11d
 * 000000014033AEB8: jnz     short loc_14033AEE8
 * 000000014033AEBA: lea     rax, [rsi+rbx]
 * 000000014033AEBE: mov     [rsi+8E0h], rax
 * 000000014033AEC5: lea     rax, [r10+rdx]
 * 000000014033AEC9: mov     [rsi+8E8h], rax
 * 000000014033AED0: movsxd  rax, dword ptr [r10]
 * 000000014033AED3: mov     [rsi+8F0h], rax
 * 000000014033AEDA: mov     [rsi+8F8h], r12
 * 000000014033AEE1: mov     [rsi+8D8h], r14d
 * 000000014033AEE8: mov     al, [r8+rcx*2+1]
 * 000000014033AEED: or      al, r9b
 * 000000014033AEF0: cmp     al, [rbp+20F0h+var_204E]
 * 000000014033AEF6: jz      short loc_14033AF2F
 * 000000014033AEF8: cmp     [rsi+8D8h], r11d
 * 000000014033AEFF: jnz     short loc_14033AF2F
 * 000000014033AF01: lea     rax, [rsi+rbx]
 * 000000014033AF05: mov     [rsi+8E0h], rax
 * 000000014033AF0C: lea     rax, [r10+rdx]
 * 000000014033AF10: mov     [rsi+8E8h], rax
 * 000000014033AF17: movsxd  rax, dword ptr [r10]
 * 000000014033AF1A: mov     [rsi+8F0h], rax
 * 000000014033AF21: mov     [rsi+8F8h], r12
 * 000000014033AF28: mov     [rsi+8D8h], r14d
 * 000000014033AF2F: cmp     r12, [rsi+4D0h]
 * 000000014033AF36: jz      short loc_14033AF4F
 * 000000014033AF38: mov     rax, [rsi+3D0h]
 * 000000014033AF3F: mov     edx, r14d
 * 000000014033AF42: mov     rcx, r12
 * 000000014033AF45: call    KeGuardDispatchICall
 * 000000014033AF4A: mov     r14, rax
 * 000000014033AF4D: jmp     short loc_14033AF52
 * 000000014033AF4F: mov     r14, r11
 * 000000014033AF52: mov     [rbp+20F0h+var_20D8], r14
 * 000000014033AF56: test    r14, r14
 * 000000014033AF59: jz      loc_14033B0AD
 * 000000014033AF5F: mov     rcx, [r14]
 * 000000014033AF62: mov     rbx, r14
 * 000000014033AF65: test    rcx, rcx
 * 000000014033AF68: jz      loc_14033B09E
 * 000000014033AF6E: mov     rdi, [rbp+20F0h+var_20C8]
 * 000000014033AF72: mov     r14, [rbp+20F0h+var_20D0]
 * 000000014033AF76: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 000000014033AF7A: mov     [rbx], rcx
 * 000000014033AF7D: mov     rax, [rsi+1D8h]
 * 000000014033AF84: call    KeGuardDispatchICall
 * 000000014033AF89: mov     rcx, [rbx+8]
 * 000000014033AF8D: movzx   edx, [rbp+20F0h+var_204E]
 * 000000014033AF94: mov     r15, rcx
 * 000000014033AF97: movzx   eax, r13b
 * 000000014033AF9B: and     r15, 0FFFFFFFFFFFF0000h
 * 000000014033AFA2: cmp     r15, rdi
 * 000000014033AFA5: cmovz   edx, eax
 * 000000014033AFA8: mov     rax, [rsi+3F0h]
 * 000000014033AFAF: shr     rcx, 6
 * 000000014033AFB3: and     cl, 0Fh
 * 000000014033AFB6: call    KeGuardDispatchICall
 * 000000014033AFBB: xor     r9d, r9d
 * 000000014033AFBE: test    eax, eax
 * 000000014033AFC0: jnz     loc_14033B07F
 * 000000014033AFC6: test    dword ptr [rsi+970h], 40000000h
 * 000000014033AFD0: lea     r10d, [r9+1]
 * 000000014033AFD4: jz      short loc_14033B01E
 * 000000014033AFD6: mov     rcx, [rsi+0A50h]
 * 000000014033AFDD: lea     edx, [rax+30h]
 * 000000014033AFE0: lea     r8d, [r9+6]
 * 000000014033AFE4: mov     rax, [r14]
 * 000000014033AFE7: add     edx, 0FFFFFFF8h
 * 000000014033AFEA: mov     [rcx], rax
 * 000000014033AFED: add     r14, 8
 * 000000014033AFF1: add     rcx, 8
 * 000000014033AFF5: sub     r8, r10
 * 000000014033AFF8: jnz     short loc_14033AFE4
 * 000000014033AFFA: test    edx, edx
 * 000000014033AFFC: jz      short loc_14033B017
 * 000000014033AFFE: mov     r9d, 0FFFFFFFFh
 * 000000014033B004: mov     al, [r14]
 * 000000014033B007: add     r14, r10
 * 000000014033B00A: mov     [rcx], al
 * 000000014033B00C: add     rcx, r10
 * 000000014033B00F: add     edx, r9d
 * 000000014033B012: jnz     short loc_14033B004
 * 000000014033B014: xor     r9d, r9d
 * 000000014033B017: mov     r14, [rsi+0A50h]
 * 000000014033B01E: mov     [r14+18h], r15
 * 000000014033B022: mov     rax, [rbx]
 * 000000014033B025: mov     [r14+20h], rax
 * 000000014033B029: mov     eax, [rbx+8]
 * 000000014033B02C: shr     rax, 6
 * 000000014033B030: and     al, 0Fh
 * 000000014033B032: mov     [r14+28h], al
 * 000000014033B036: cmp     [rsi+8D8h], r9d
 * 000000014033B03D: jnz     short loc_14033B07F
 * 000000014033B03F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033B049: add     rax, rsi
 * 000000014033B04C: mov     [rsi+8E0h], rax
 * 000000014033B053: mov     rax, 0B3B74BDEE4453415h
 * 000000014033B05D: add     rax, r14
 * 000000014033B060: mov     [rsi+8E8h], rax
 * 000000014033B067: movsxd  rax, dword ptr [r14]
 * 000000014033B06A: mov     [rsi+8F0h], rax
 * 000000014033B071: mov     [rsi+8F8h], r12
 * 000000014033B078: mov     [rsi+8D8h], r10d
 * 000000014033B07F: add     rbx, 30h ; '0'
 * 000000014033B083: mov     rcx, [rbx]
 * 000000014033B086: test    rcx, rcx
 * 000000014033B089: jnz     loc_14033AF76
 * 000000014033B08F: mov     r14, [rbp+20F0h+var_20D8]
 * 000000014033B093: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033B09A: mov     r15d, [rbp+20F0h+var_20E8]
 * 000000014033B09E: mov     rax, [rsi+0F8h]
 * 000000014033B0A5: mov     rcx, r14
 * 000000014033B0A8: call    KeGuardDispatchICall
 * 000000014033B0AD: mov     rax, [rsi+3A0h]
 * 000000014033B0B4: mov     rcx, r12
 * 000000014033B0B7: call    KeGuardDispatchICall
 * 000000014033B0BC: mov     eax, 8000h
 * 000000014033B0C1: add     [rsi+810h], eax
 * 000000014033B0C7: xor     r10d, r10d
 * 000000014033B0CA: mov     rcx, [rbp+20F0h+var_20F0]
 * 000000014033B0CE: test    rcx, rcx
 * 000000014033B0D1: jz      short loc_14033B0E2
 * 000000014033B0D3: mov     rax, [rsi+1D8h]
 * 000000014033B0DA: call    KeGuardDispatchICall
 * 000000014033B0DF: xor     r10d, r10d
 * 000000014033B0E2: shl     r15d, 8
 * 000000014033B0E6: add     [rsi+810h], r15d
 * 000000014033B0ED: jmp     loc_140334625
 * 000000014033B0F2: test    [r13+2Ah], dl
 * 000000014033B0F6: jz      short loc_14033B136
 * 000000014033B0F8: xor     r10d, r10d
 * 000000014033B0FB: cmp     [rsi+960h], r10
 * 000000014033B102: jz      loc_14033B30C
 * 000000014033B108: mov     ecx, [rsi+974h]
 * 000000014033B10E: test    cl, 4
 * 000000014033B111: jnz     loc_14033B30C
 * 000000014033B117: cmp     [rsi+80Ch], r10d
 * 000000014033B11E: jnz     loc_14033B303
 * 000000014033B124: mov     eax, ecx
 * 000000014033B126: shl     eax, 3
 * 000000014033B129: xor     eax, ecx
 * 000000014033B12B: and     eax, 20h
 * 000000014033B12E: xor     eax, ecx
 * 000000014033B130: mov     [rsi+974h], eax
 * 000000014033B136: mov     r11, [r13+8]
 * 000000014033B13A: mov     r8d, [rsi+80Ch]
 * 000000014033B141: mov     [rbp+20F0h+var_2030], r11
 * 000000014033B148: lea     rax, [r8+r8*2]
 * 000000014033B14C: lea     rcx, [r11+rax*4]
 * 000000014033B150: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014033B15A: lea     r9, [rcx+0Ch]
 * 000000014033B15E: mov     [rbp+20F0h+var_20C8], rcx
 * 000000014033B162: mov     ecx, [r13+24h]
 * 000000014033B166: mul     rcx
 * 000000014033B169: mov     [rbp+20F0h+var_20D8], r9
 * 000000014033B16D: mov     r10, rdx
 * 000000014033B170: shr     r10, 3
 * 000000014033B174: mov     eax, r10d
 * 000000014033B177: mov     [rbp+20F0h+var_20B0], r10
 * 000000014033B17B: lea     rcx, [rax+rax*2]
 * 000000014033B17F: lea     rax, [r11+rcx*4]
 * 000000014033B183: lea     r11d, [r10-1]
 * 000000014033B187: mov     [rbp+20F0h+var_2080], rax
 * 000000014033B18B: lea     rax, [r13+30h]
 * 000000014033B18F: mov     edx, r11d
 * 000000014033B192: add     rdx, 7
 * 000000014033B196: mov     [rbp+20F0h+var_205C], r11d
 * 000000014033B19D: lea     r15, [r8+rax]
 * 000000014033B1A1: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 000000014033B1A5: add     rdx, rax
 * 000000014033B1A8: mov     [rbp+20F0h+var_20F0], r15
 * 000000014033B1AC: movzx   eax, word ptr [r13+28h]
 * 000000014033B1B1: mov     [rbp+20F0h+var_2000], rdx
 * 000000014033B1B8: lea     rcx, [rax+rax*2]
 * 000000014033B1BC: lea     rax, [rdx+rcx*8]
 * 000000014033B1C0: mov     ecx, 1
 * 000000014033B1C5: mov     [rbp+20F0h+var_2058], rax
 * 000000014033B1CC: cmp     r8d, r11d
 * 000000014033B1CF: jnb     loc_14033B479
 * 000000014033B1D5: mov     rdi, [rbp+20F0h+var_20C8]
 * 000000014033B1D9: xor     edx, edx
 * 000000014033B1DB: cmp     [r15], dl
 * 000000014033B1DE: jl      loc_14033B401
 * 000000014033B1E4: mov     eax, [rdi+4]
 * 000000014033B1E7: mov     r9d, [r9]
 * 000000014033B1EA: mov     r13d, eax
 * 000000014033B1ED: sub     r9d, eax
 * 000000014033B1F0: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033B1F4: mov     r12d, r9d
 * 000000014033B1F7: mov     [rbp+20F0h+var_20C8], r12
 * 000000014033B1FB: add     r13, [rax+18h]
 * 000000014033B1FF: add     [rsi+810h], r9d
 * 000000014033B206: mov     r10, r13
 * 000000014033B209: mov     ebx, [rsi+7FCh]
 * 000000014033B20F: mov     rax, r13
 * 000000014033B212: mov     r14, [rsi+800h]
 * 000000014033B219: lea     rcx, [r9+r13]
 * 000000014033B21D: mov     [rbp+20F0h+var_20A0], r13
 * 000000014033B221: cmp     r13, rcx
 * 000000014033B224: jnb     short loc_14033B237
 * 000000014033B226: mov     r8d, 40h ; '@'
 * 000000014033B22C: prefetchnta byte ptr [rax]
 * 000000014033B22F: add     rax, r8
 * 000000014033B232: cmp     rax, rcx
 * 000000014033B235: jb      short loc_14033B22C
 * 000000014033B237: mov     r11d, r9d
 * 000000014033B23A: mov     r8, r14
 * 000000014033B23D: shr     r11d, 7
 * 000000014033B241: test    r11d, r11d
 * 000000014033B244: jz      short loc_14033B2B4
 * 000000014033B246: mov     esi, 0FFFFFFFFh
 * 000000014033B24B: mov     r15d, 1
 * 000000014033B251: mov     r12, 7010008004002001h
 * 000000014033B25B: mov     eax, 8
 * 000000014033B260: xor     r8, [r10]
 * 000000014033B263: mov     ecx, ebx
 * 000000014033B265: rol     r8, cl
 * 000000014033B268: xor     r8, [r10+8]
 * 000000014033B26C: add     r10, 10h
 * 000000014033B270: rol     r8, cl
 * 000000014033B273: sub     rax, r15
 * 000000014033B276: jnz     short loc_14033B260
 * 000000014033B278: mov     rcx, r10
 * 000000014033B27B: sub     rcx, r13
 * 000000014033B27E: xor     rcx, r14
 * 000000014033B281: mov     rax, rcx
 * 000000014033B284: rol     rax, 11h
 * 000000014033B288: xor     rcx, rax
 * 000000014033B28B: mov     rax, r12
 * 000000014033B28E: mul     rcx
 * 000000014033B291: xor     ebx, eax
 * 000000014033B293: mov     [rbp+20F0h+var_1A90], rdx
 * 000000014033B29A: xor     ebx, edx
 * 000000014033B29C: and     ebx, 3Fh
 * 000000014033B29F: cmovz   ebx, r15d
 * 000000014033B2A3: add     r11d, esi
 * 000000014033B2A6: jnz     short loc_14033B25B
 * 000000014033B2A8: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033B2AC: mov     r12, [rbp+20F0h+var_20C8]
 * 000000014033B2B0: mov     r15, [rbp+20F0h+var_20F0]
 * 000000014033B2B4: and     r9d, 7Fh
 * 000000014033B2B8: mov     r11d, 1
 * 000000014033B2BE: cmp     r9d, 8
 * 000000014033B2C2: jb      short loc_14033B2E0
 * 000000014033B2C4: mov     eax, r9d
 * 000000014033B2C7: shr     rax, 3
 * 000000014033B2CB: xor     r8, [r10]
 * 000000014033B2CE: mov     ecx, ebx
 * 000000014033B2D0: rol     r8, cl
 * 000000014033B2D3: add     r10, 8
 * 000000014033B2D7: add     r9d, 0FFFFFFF8h
 * 000000014033B2DB: sub     rax, r11
 * 000000014033B2DE: jnz     short loc_14033B2CB
 * 000000014033B2E0: test    r9d, r9d
 * 000000014033B2E3: jz      short loc_14033B2FE
 * 000000014033B2E5: mov     edx, 0FFFFFFFFh
 * 000000014033B2EA: movzx   eax, byte ptr [r10]
 * 000000014033B2EE: mov     ecx, ebx
 * 000000014033B2F0: xor     r8, rax
 * 000000014033B2F3: add     r10, r11
 * 000000014033B2F6: rol     r8, cl
 * 000000014033B2F9: add     r9d, edx
 * 000000014033B2FC: jnz     short loc_14033B2EA
 * 000000014033B2FE: mov     rax, r8
 * 000000014033B301: jmp     short loc_14033B31B
 * 000000014033B303: test    cl, 20h
 * 000000014033B306: jz      loc_14033B136
 * 000000014033B30C: mov     [rsi+80Ch], r10d
 * 000000014033B313: jmp     loc_14033462F
 * 000000014033B318: xor     r8b, al
 * 000000014033B31B: shr     rax, 7
 * 000000014033B31F: test    rax, rax
 * 000000014033B322: jnz     short loc_14033B318
 * 000000014033B324: movzx   ecx, byte ptr [r15]
 * 000000014033B328: mov     eax, ecx
 * 000000014033B32A: movzx   edx, r8b
 * 000000014033B32E: and     edx, 7Fh
 * 000000014033B331: and     eax, 7Fh
 * 000000014033B334: mov     dword ptr [rbp+20F0h+var_20B8], edx
 * 000000014033B337: cmp     edx, eax
 * 000000014033B339: jz      loc_14033B3E2
 * 000000014033B33F: test    r12, r12
 * 000000014033B342: jz      loc_14033B609
 * 000000014033B348: mov     eax, [rsi+974h]
 * 000000014033B34E: mov     r8d, 40h ; '@'
 * 000000014033B354: test    r8b, al
 * 000000014033B357: jz      loc_14033B609
 * 000000014033B35D: mov     r15, cr8
 * 000000014033B361: lea     eax, [r8-3Eh]
 * 000000014033B365: mov     cr8, rax
 * 000000014033B369: mov     rbx, r13
 * 000000014033B36C: dec     r12
 * 000000014033B36F: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033B376: add     r13, r12
 * 000000014033B379: mov     eax, 0FFFh
 * 000000014033B37E: or      r13, rax
 * 000000014033B381: lea     r12, [rbx-1]
 * 000000014033B385: movzx   r14d, r15b
 * 000000014033B389: mov     rax, [rsi+460h]
 * 000000014033B390: xor     edx, edx
 * 000000014033B392: mov     rcx, rbx
 * 000000014033B395: call    KeGuardDispatchICall
 * 000000014033B39A: cmp     eax, 0C000022Dh
 * 000000014033B39F: jnz     short loc_14033B3C4
 * 000000014033B3A1: mov     eax, 1
 * 000000014033B3A6: cmp     r15b, al
 * 000000014033B3A9: ja      short loc_14033B3CE
 * 000000014033B3AB: movzx   r14d, r15b
 * 000000014033B3AF: mov     cr8, r14
 * 000000014033B3B3: mov     al, [rbx]
 * 000000014033B3B5: mov     rax, cr8
 * 000000014033B3B9: mov     eax, 2
 * 000000014033B3BE: mov     cr8, rax
 * 000000014033B3C2: jmp     short loc_14033B389
 * 000000014033B3C4: xor     ecx, ecx
 * 000000014033B3C6: test    eax, eax
 * 000000014033B3C8: js      loc_14033B5F8
 * 000000014033B3CE: mov     eax, 1000h
 * 000000014033B3D3: add     rbx, rax
 * 000000014033B3D6: add     r12, rax
 * 000000014033B3D9: cmp     r12, r13
 * 000000014033B3DC: jnz     short loc_14033B385
 * 000000014033B3DE: mov     cr8, r14
 * 000000014033B3E2: xor     edx, edx
 * 000000014033B3E4: mov     r15, [rbp+20F0h+var_20F0]
 * 000000014033B3E8: mov     eax, 40h ; '@'
 * 000000014033B3ED: add     [rsi+810h], eax
 * 000000014033B3F3: mov     r9, [rbp+20F0h+var_20D8]
 * 000000014033B3F7: mov     r12, [rbp+20F0h+var_2068]
 * 000000014033B3FE: lea     ecx, [rax-3Fh]
 * 000000014033B401: mov     eax, 0Ch
 * 000000014033B406: add     r15, rcx
 * 000000014033B409: add     r9, rax
 * 000000014033B40C: mov     [rbp+20F0h+var_20F0], r15
 * 000000014033B410: add     rdi, rax
 * 000000014033B413: mov     [rbp+20F0h+var_20D8], r9
 * 000000014033B417: cmp     r9, [rbp+20F0h+var_2080]
 * 000000014033B41B: jnb     short loc_14033B42D
 * 000000014033B41D: mov     eax, [r12]
 * 000000014033B421: cmp     [rsi+810h], eax
 * 000000014033B427: jl      loc_14033B1DB
 * 000000014033B42D: sub     rdi, [rbp+20F0h+var_2030]
 * 000000014033B434: mov     rax, 2AAAAAAAAAAAAAABh
 * 000000014033B43E: mov     r11d, [rbp+20F0h+var_205C]
 * 000000014033B445: mov     r10, [rbp+20F0h+var_20B0]
 * 000000014033B449: imul    rdi
 * 000000014033B44C: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033B453: sar     rdx, 1
 * 000000014033B456: mov     rax, rdx
 * 000000014033B459: shr     rax, 3Fh
 * 000000014033B45D: add     rdx, rax
 * 000000014033B460: mov     r8d, edx
 * 000000014033B463: mov     [rsi+80Ch], edx
 * 000000014033B469: mov     rdx, [rbp+20F0h+var_2000]
 * 000000014033B470: cmp     r8d, r11d
 * 000000014033B473: jb      loc_140334DB4
 * 000000014033B479: mov     eax, [rsi+814h]
 * 000000014033B47F: cmp     [rsi+810h], eax
 * 000000014033B485: jge     loc_140334DB4
 * 000000014033B48B: sub     r8d, r10d
 * 000000014033B48E: add     r8d, ecx
 * 000000014033B491: lea     rcx, [r8+r8*2]
 * 000000014033B495: lea     rcx, [rdx+rcx*8]
 * 000000014033B499: mov     [rbp+20F0h+var_20A0], rcx
 * 000000014033B49D: mov     rdi, [rbp+20F0h+var_20D0]
 * 000000014033B4A1: lea     rdx, [rcx+8]
 * 000000014033B4A5: mov     eax, 2
 * 000000014033B4AA: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014033B4AE: mov     r12d, eax
 * 000000014033B4B1: mov     [rbp+20F0h+var_20D8], rax
 * 000000014033B4B5: xor     r10d, r10d
 * 000000014033B4B8: lea     ebx, [rax-1]
 * 000000014033B4BB: lea     eax, [rbx+0Bh]
 * 000000014033B4BE: cmp     [rdx], r10d
 * 000000014033B4C1: jl      loc_14033B7F2
 * 000000014033B4C7: mov     eax, [rdx-8]
 * 000000014033B4CA: mov     r8d, [rdx-4]
 * 000000014033B4CE: mov     r13d, eax
 * 000000014033B4D1: add     r13, [rdi+18h]
 * 000000014033B4D5: sub     r8d, eax
 * 000000014033B4D8: add     [rsi+810h], r8d
 * 000000014033B4DF: mov     r9, r13
 * 000000014033B4E2: mov     r11d, [rsi+7FCh]
 * 000000014033B4E9: mov     rax, r13
 * 000000014033B4EC: mov     r14, [rsi+800h]
 * 000000014033B4F3: lea     rcx, [r8+r13]
 * 000000014033B4F7: mov     r15d, r8d
 * 000000014033B4FA: mov     [rbp+20F0h+var_2080], r13
 * 000000014033B4FE: mov     [rbp+20F0h+var_20C8], r15
 * 000000014033B502: cmp     r13, rcx
 * 000000014033B505: jnb     short loc_14033B518
 * 000000014033B507: mov     r10d, 40h ; '@'
 * 000000014033B50D: prefetchnta byte ptr [rax]
 * 000000014033B510: add     rax, r10
 * 000000014033B513: cmp     rax, rcx
 * 000000014033B516: jb      short loc_14033B50D
 * 000000014033B518: mov     r10d, r8d
 * 000000014033B51B: mov     rbx, r14
 * 000000014033B51E: shr     r10d, 7
 * 000000014033B522: test    r10d, r10d
 * 000000014033B525: jz      short loc_14033B59D
 * 000000014033B527: mov     esi, 0FFFFFFFFh
 * 000000014033B52C: mov     r12d, 1
 * 000000014033B532: mov     r15, 7010008004002001h
 * 000000014033B53C: mov     eax, 8
 * 000000014033B541: xor     rbx, [r9]
 * 000000014033B544: mov     ecx, r11d
 * 000000014033B547: rol     rbx, cl
 * 000000014033B54A: xor     rbx, [r9+8]
 * 000000014033B54E: add     r9, 10h
 * 000000014033B552: rol     rbx, cl
 * 000000014033B555: sub     rax, r12
 * 000000014033B558: jnz     short loc_14033B541
 * 000000014033B55A: mov     rcx, r9
 * 000000014033B55D: sub     rcx, r13
 * 000000014033B560: xor     rcx, r14
 * 000000014033B563: mov     rax, rcx
 * 000000014033B566: rol     rax, 11h
 * 000000014033B56A: xor     rcx, rax
 * 000000014033B56D: mov     rax, r15
 * 000000014033B570: mul     rcx
 * 000000014033B573: xor     r11d, eax
 * 000000014033B576: mov     [rbp+20F0h+var_1A88], rdx
 * 000000014033B57D: xor     r11d, edx
 * 000000014033B580: and     r11d, 3Fh
 * 000000014033B584: cmovz   r11d, r12d
 * 000000014033B588: add     r10d, esi
 * 000000014033B58B: jnz     short loc_14033B53C
 * 000000014033B58D: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033B591: mov     r15, [rbp+20F0h+var_20C8]
 * 000000014033B595: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033B599: mov     r12, [rbp+20F0h+var_20D8]
 * 000000014033B59D: and     r8d, 7Fh
 * 000000014033B5A1: mov     r14d, 1
 * 000000014033B5A7: cmp     r8d, 8
 * 000000014033B5AB: jb      short loc_14033B5CA
 * 000000014033B5AD: mov     eax, r8d
 * 000000014033B5B0: shr     rax, 3
 * 000000014033B5B4: xor     rbx, [r9]
 * 000000014033B5B7: mov     ecx, r11d
 * 000000014033B5BA: rol     rbx, cl
 * 000000014033B5BD: add     r9, 8
 * 000000014033B5C1: add     r8d, 0FFFFFFF8h
 * 000000014033B5C5: sub     rax, r14
 * 000000014033B5C8: jnz     short loc_14033B5B4
 * 000000014033B5CA: xor     r10d, r10d
 * 000000014033B5CD: test    r8d, r8d
 * 000000014033B5D0: jz      short loc_14033B5F0
 * 000000014033B5D2: mov     r10d, 0FFFFFFFFh
 * 000000014033B5D8: movzx   eax, byte ptr [r9]
 * 000000014033B5DC: mov     ecx, r11d
 * 000000014033B5DF: xor     rbx, rax
 * 000000014033B5E2: add     r9, r14
 * 000000014033B5E5: rol     rbx, cl
 * 000000014033B5E8: add     r8d, r10d
 * 000000014033B5EB: jnz     short loc_14033B5D8
 * 000000014033B5ED: xor     r10d, r10d
 * 000000014033B5F0: mov     rax, rbx
 * 000000014033B5F3: jmp     loc_14033B686
 * 000000014033B5F8: mov     cr8, r14
 * 000000014033B5FC: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033B600: mov     edx, dword ptr [rbp+20F0h+var_20B8]
 * 000000014033B603: mov     r13, [rbp+20F0h+var_20A0]
 * 000000014033B607: mov     cl, [rax]
 * 000000014033B609: movzx   eax, cl
 * 000000014033B60C: mov     ecx, [rsi+8D8h]
 * 000000014033B612: and     eax, 7Fh
 * 000000014033B615: test    ecx, ecx
 * 000000014033B617: jnz     short loc_14033B62F
 * 000000014033B619: mov     ecx, edx
 * 000000014033B61B: xor     rcx, rax
 * 000000014033B61E: mov     rax, [rsi+580h]
 * 000000014033B625: mov     [rax+18h], rcx
 * 000000014033B629: mov     ecx, [rsi+8D8h]
 * 000000014033B62F: xor     edx, edx
 * 000000014033B631: test    ecx, ecx
 * 000000014033B633: jnz     loc_14033B3E4
 * 000000014033B639: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033B63D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033B647: add     rax, rsi
 * 000000014033B64A: mov     [rsi+8E0h], rax
 * 000000014033B651: mov     rax, 0B3B74BDEE4453415h
 * 000000014033B65B: add     rax, rcx
 * 000000014033B65E: mov     [rsi+8E8h], rax
 * 000000014033B665: movsxd  rax, dword ptr [rcx]
 * 000000014033B668: mov     [rsi+8F0h], rax
 * 000000014033B66F: lea     eax, [rdx+1]
 * 000000014033B672: mov     [rsi+8F8h], r13
 * 000000014033B679: mov     [rsi+8D8h], eax
 * 000000014033B67F: jmp     loc_14033B3E4
 * 000000014033B684: xor     ebx, eax
 * 000000014033B686: shr     rax, 1Fh
 * 000000014033B68A: test    rax, rax
 * 000000014033B68D: jnz     short loc_14033B684
 * 000000014033B68F: mov     ecx, [rdx]
 * 000000014033B691: btr     ebx, 1Fh
 * 000000014033B695: mov     eax, ecx
 * 000000014033B697: btr     eax, 1Fh
 * 000000014033B69B: cmp     ebx, eax
 * 000000014033B69D: jz      loc_14033B7EA
 * 000000014033B6A3: test    r15, r15
 * 000000014033B6A6: jz      loc_14033B74F
 * 000000014033B6AC: mov     eax, [rsi+974h]
 * 000000014033B6B2: mov     r8d, 40h ; '@'
 * 000000014033B6B8: test    r8b, al
 * 000000014033B6BB: jz      loc_14033B74F
 * 000000014033B6C1: mov     r12, cr8
 * 000000014033B6C5: lea     eax, [r8-3Eh]
 * 000000014033B6C9: mov     cr8, rax
 * 000000014033B6CD: mov     r14, r13
 * 000000014033B6D0: lea     rax, [r13-1]
 * 000000014033B6D4: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033B6DB: add     rax, r15
 * 000000014033B6DE: mov     ecx, 0FFFh
 * 000000014033B6E3: or      rax, rcx
 * 000000014033B6E6: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033B6EA: lea     r13, [r14-1]
 * 000000014033B6EE: movzx   r15d, r12b
 * 000000014033B6F2: mov     rax, [rsi+460h]
 * 000000014033B6F9: xor     edx, edx
 * 000000014033B6FB: mov     rcx, r14
 * 000000014033B6FE: call    KeGuardDispatchICall
 * 000000014033B703: cmp     eax, 0C000022Dh
 * 000000014033B708: jnz     short loc_14033B732
 * 000000014033B70A: mov     eax, 1
 * 000000014033B70F: cmp     r12b, al
 * 000000014033B712: ja      loc_14033B7C5
 * 000000014033B718: movzx   r15d, r12b
 * 000000014033B71C: mov     cr8, r15
 * 000000014033B720: mov     al, [r14]
 * 000000014033B723: mov     rax, cr8
 * 000000014033B727: mov     eax, 2
 * 000000014033B72C: mov     cr8, rax
 * 000000014033B730: jmp     short loc_14033B6F2
 * 000000014033B732: xor     r10d, r10d
 * 000000014033B735: test    eax, eax
 * 000000014033B737: jns     loc_14033B7C8
 * 000000014033B73D: mov     cr8, r15
 * 000000014033B741: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033B745: mov     r13, [rbp+20F0h+var_2080]
 * 000000014033B749: mov     r12, [rbp+20F0h+var_20D8]
 * 000000014033B74D: mov     ecx, [rdx]
 * 000000014033B74F: mov     eax, ecx
 * 000000014033B751: mov     ecx, [rsi+8D8h]
 * 000000014033B757: btr     eax, 1Fh
 * 000000014033B75B: test    ecx, ecx
 * 000000014033B75D: jnz     loc_14033B7EA
 * 000000014033B763: mov     ecx, ebx
 * 000000014033B765: xor     rcx, rax
 * 000000014033B768: mov     rax, [rsi+580h]
 * 000000014033B76F: mov     [rax+18h], rcx
 * 000000014033B773: mov     ecx, [rsi+8D8h]
 * 000000014033B779: test    ecx, ecx
 * 000000014033B77B: jnz     short loc_14033B7EA
 * 000000014033B77D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033B787: lea     ebx, [rcx+1]
 * 000000014033B78A: add     rax, rsi
 * 000000014033B78D: mov     r11, 0B3B74BDEE4453415h
 * 000000014033B797: mov     [rsi+8E0h], rax
 * 000000014033B79E: lea     rax, [rdi+r11]
 * 000000014033B7A2: mov     [rsi+8E8h], rax
 * 000000014033B7A9: movsxd  rax, dword ptr [rdi]
 * 000000014033B7AC: mov     [rsi+8F0h], rax
 * 000000014033B7B3: lea     eax, [rcx+0Ch]
 * 000000014033B7B6: mov     [rsi+8F8h], r13
 * 000000014033B7BD: mov     [rsi+8D8h], ebx
 * 000000014033B7C3: jmp     short loc_14033B7FC
 * 000000014033B7C5: xor     r10d, r10d
 * 000000014033B7C8: mov     r9d, 1000h
 * 000000014033B7CE: add     r14, r9
 * 000000014033B7D1: add     r13, r9
 * 000000014033B7D4: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033B7D8: jnz     loc_14033B6EE
 * 000000014033B7DE: mov     cr8, r15
 * 000000014033B7E2: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033B7E6: mov     r12, [rbp+20F0h+var_20D8]
 * 000000014033B7EA: mov     eax, 0Ch
 * 000000014033B7EF: lea     ebx, [rax-0Bh]
 * 000000014033B7F2: mov     r11, 0B3B74BDEE4453415h
 * 000000014033B7FC: add     rdx, rax
 * 000000014033B7FF: sub     r12, rbx
 * 000000014033B802: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014033B806: mov     [rbp+20F0h+var_20D8], r12
 * 000000014033B80A: jnz     loc_14033B4BE
 * 000000014033B810: mov     rcx, [rbp+20F0h+var_20A0]
 * 000000014033B814: mov     edx, 1
 * 000000014033B819: add     [rsi+80Ch], edx
 * 000000014033B81F: add     rcx, 18h
 * 000000014033B823: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033B82A: mov     [rbp+20F0h+var_20A0], rcx
 * 000000014033B82E: cmp     rcx, [rbp+20F0h+var_2058]
 * 000000014033B835: jz      loc_14033B30C
 * 000000014033B83B: mov     eax, [rsi+814h]
 * 000000014033B841: cmp     [rsi+810h], eax
 * 000000014033B847: jl      loc_14033B49D
 * 000000014033B84D: jmp     loc_14033462F
 * 000000014033B852: mov     r14, [r13+8]
 * 000000014033B856: mov     r8d, [r13+10h]
 * 000000014033B85A: mov     r9, r14
 * 000000014033B85D: add     [rsi+810h], r8d
 * 000000014033B864: mov     rax, r14
 * 000000014033B867: mov     r11d, [rsi+7FCh]
 * 000000014033B86E: mov     r15, [rsi+800h]
 * 000000014033B875: lea     rcx, [r14+r8]
 * 000000014033B879: cmp     r14, rcx
 * 000000014033B87C: jnb     short loc_14033B88F
 * 000000014033B87E: mov     r10d, 40h ; '@'
 * 000000014033B884: prefetchnta byte ptr [rax]
 * 000000014033B887: add     rax, r10
 * 000000014033B88A: cmp     rax, rcx
 * 000000014033B88D: jb      short loc_14033B884
 * 000000014033B88F: mov     r10d, r8d
 * 000000014033B892: mov     rbx, r15
 * 000000014033B895: shr     r10d, 7
 * 000000014033B899: mov     r12d, 0FFFFFFFFh
 * 000000014033B89F: test    r10d, r10d
 * 000000014033B8A2: jz      short loc_14033B90F
 * 000000014033B8A4: mov     rdi, 7010008004002001h
 * 000000014033B8AE: mov     eax, 8
 * 000000014033B8B3: xor     rbx, [r9]
 * 000000014033B8B6: mov     ecx, r11d
 * 000000014033B8B9: rol     rbx, cl
 * 000000014033B8BC: xor     rbx, [r9+8]
 * 000000014033B8C0: add     r9, 10h
 * 000000014033B8C4: rol     rbx, cl
 * 000000014033B8C7: sub     rax, rdx
 * 000000014033B8CA: jnz     short loc_14033B8B3
 * 000000014033B8CC: mov     rcx, r9
 * 000000014033B8CF: sub     rcx, r14
 * 000000014033B8D2: xor     rcx, r15
 * 000000014033B8D5: mov     rax, rcx
 * 000000014033B8D8: rol     rax, 11h
 * 000000014033B8DC: xor     rcx, rax
 * 000000014033B8DF: mov     rax, rdi
 * 000000014033B8E2: mul     rcx
 * 000000014033B8E5: xor     r11d, eax
 * 000000014033B8E8: mov     [rbp+20F0h+var_1A80], rdx
 * 000000014033B8EF: xor     r11d, edx
 * 000000014033B8F2: mov     edx, 1
 * 000000014033B8F7: and     r11d, 3Fh
 * 000000014033B8FB: cmovz   r11d, edx
 * 000000014033B8FF: add     r10d, r12d
 * 000000014033B902: jnz     short loc_14033B8AE
 * 000000014033B904: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033B908: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033B90F: and     r8d, 7Fh
 * 000000014033B913: cmp     r8d, 8
 * 000000014033B917: jb      short loc_14033B936
 * 000000014033B919: mov     eax, r8d
 * 000000014033B91C: shr     rax, 3
 * 000000014033B920: xor     rbx, [r9]
 * 000000014033B923: mov     ecx, r11d
 * 000000014033B926: rol     rbx, cl
 * 000000014033B929: add     r9, 8
 * 000000014033B92D: add     r8d, 0FFFFFFF8h
 * 000000014033B931: sub     rax, rdx
 * 000000014033B934: jnz     short loc_14033B920
 * 000000014033B936: xor     r10d, r10d
 * 000000014033B939: test    r8d, r8d
 * 000000014033B93C: jz      short loc_14033B953
 * 000000014033B93E: movzx   eax, byte ptr [r9]
 * 000000014033B942: mov     ecx, r11d
 * 000000014033B945: xor     rbx, rax
 * 000000014033B948: add     r9, rdx
 * 000000014033B94B: rol     rbx, cl
 * 000000014033B94E: add     r8d, r12d
 * 000000014033B951: jnz     short loc_14033B93E
 * 000000014033B953: mov     rax, rbx
 * 000000014033B956: jmp     short loc_14033B95A
 * 000000014033B958: xor     ebx, eax
 * 000000014033B95A: shr     rax, 1Fh
 * 000000014033B95E: test    rax, rax
 * 000000014033B961: jnz     short loc_14033B958
 * 000000014033B963: btr     ebx, 1Fh
 * 000000014033B967: mov     r12d, r10d
 * 000000014033B96A: cmp     ebx, [r13+14h]
 * 000000014033B96E: jz      loc_14033BA4D
 * 000000014033B974: cmp     [r13+0], r10d
 * 000000014033B978: jnz     short loc_14033B982
 * 000000014033B97A: cmp     [r13+18h], r10d
 * 000000014033B97E: cmovnz  r12d, edx
 * 000000014033B982: mov     ecx, [r13+10h]
 * 000000014033B986: mov     rdx, [r13+8]
 * 000000014033B98A: test    rcx, rcx
 * 000000014033B98D: jz      loc_14033BC05
 * 000000014033B993: mov     eax, [rsi+974h]
 * 000000014033B999: mov     r8d, 40h ; '@'
 * 000000014033B99F: test    r8b, al
 * 000000014033B9A2: jz      loc_14033BC05
 * 000000014033B9A8: mov     r13, cr8
 * 000000014033B9AC: lea     eax, [r8-3Eh]
 * 000000014033B9B0: mov     cr8, rax
 * 000000014033B9B4: lea     rax, [rcx-1]
 * 000000014033B9B8: mov     r14, rdx
 * 000000014033B9BB: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033B9C2: add     rax, rdx
 * 000000014033B9C5: mov     ecx, 0FFFh
 * 000000014033B9CA: or      rax, rcx
 * 000000014033B9CD: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033B9D1: lea     rax, [r14-1]
 * 000000014033B9D5: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033B9D9: movzx   r15d, r13b
 * 000000014033B9DD: mov     rax, [rsi+460h]
 * 000000014033B9E4: xor     edx, edx
 * 000000014033B9E6: mov     rcx, r14
 * 000000014033B9E9: call    KeGuardDispatchICall
 * 000000014033B9EE: xor     r10d, r10d
 * 000000014033B9F1: cmp     eax, 0C000022Dh
 * 000000014033B9F6: jnz     short loc_14033BA23
 * 000000014033B9F8: test    r12d, r12d
 * 000000014033B9FB: jnz     loc_14033BBFD
 * 000000014033BA01: lea     eax, [r10+1]
 * 000000014033BA05: cmp     r13b, al
 * 000000014033BA08: ja      short loc_14033BA2B
 * 000000014033BA0A: movzx   r15d, r13b
 * 000000014033BA0E: mov     cr8, r15
 * 000000014033BA12: mov     al, [r14]
 * 000000014033BA15: mov     rax, cr8
 * 000000014033BA19: lea     eax, [r10+2]
 * 000000014033BA1D: mov     cr8, rax
 * 000000014033BA21: jmp     short loc_14033B9DD
 * 000000014033BA23: test    eax, eax
 * 000000014033BA25: js      loc_14033BBFD
 * 000000014033BA2B: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033BA2F: mov     r9d, 1000h
 * 000000014033BA35: add     rax, r9
 * 000000014033BA38: add     r14, r9
 * 000000014033BA3B: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033BA3F: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033BA43: jnz     short loc_14033B9D9
 * 000000014033BA45: mov     cr8, r15
 * 000000014033BA49: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033BA4D: mov     r11, 0B3B74BDEE4453415h
 * 000000014033BA57: mov     ecx, 1
 * 000000014033BA5C: mov     eax, [r13+10h]
 * 000000014033BA60: mov     r12, [r13+8]
 * 000000014033BA64: shr     eax, 4
 * 000000014033BA67: mov     [rbp+20F0h+var_20F0], r12
 * 000000014033BA6B: test    eax, eax
 * 000000014033BA6D: jz      loc_14033462F
 * 000000014033BA73: mov     edi, eax
 * 000000014033BA75: mov     [rbp+20F0h+var_20D8], rdi
 * 000000014033BA79: mov     rax, [r12]
 * 000000014033BA7D: lea     rdx, [rbp+20F0h+var_1D90]
 * 000000014033BA84: mov     rbx, r13
 * 000000014033BA87: mov     r13d, ecx
 * 000000014033BA8A: mov     r15, [rax]
 * 000000014033BA8D: mov     [rbp+20F0h+var_1D90], r10
 * 000000014033BA94: mov     rcx, r15
 * 000000014033BA97: mov     rax, [rsi+308h]
 * 000000014033BA9E: call    KeGuardDispatchICall
 * 000000014033BAA3: xor     r10d, r10d
 * 000000014033BAA6: mov     r14, rax
 * 000000014033BAA9: test    rax, rax
 * 000000014033BAAC: jz      loc_14033BBD3
 * 000000014033BAB2: lea     edi, [r10+6]
 * 000000014033BAB6: mov     rax, [rsi+200h]
 * 000000014033BABD: lea     rdx, [rbp+20F0h+var_1A78]
 * 000000014033BAC4: mov     rcx, r14
 * 000000014033BAC7: inc     r13d
 * 000000014033BACA: call    KeGuardDispatchICall
 * 000000014033BACF: xor     r12d, r12d
 * 000000014033BAD2: test    rax, rax
 * 000000014033BAD5: jnz     loc_14033BBA6
 * 000000014033BADB: test    dword ptr [rsi+970h], 40000000h
 * 000000014033BAE5: lea     r9d, [r12+1]
 * 000000014033BAEA: jz      short loc_14033BB32
 * 000000014033BAEC: mov     rcx, [rsi+0A50h]
 * 000000014033BAF3: lea     edx, [rax+30h]
 * 000000014033BAF6: mov     r8, rdi
 * 000000014033BAF9: mov     rax, [rbx]
 * 000000014033BAFC: add     edx, 0FFFFFFF8h
 * 000000014033BAFF: mov     [rcx], rax
 * 000000014033BB02: add     rbx, 8
 * 000000014033BB06: add     rcx, 8
 * 000000014033BB0A: sub     r8, r9
 * 000000014033BB0D: jnz     short loc_14033BAF9
 * 000000014033BB0F: test    edx, edx
 * 000000014033BB11: jz      short loc_14033BB2B
 * 000000014033BB13: mov     r12d, 0FFFFFFFFh
 * 000000014033BB19: mov     al, [rbx]
 * 000000014033BB1B: add     rbx, r9
 * 000000014033BB1E: mov     [rcx], al
 * 000000014033BB20: add     rcx, r9
 * 000000014033BB23: add     edx, r12d
 * 000000014033BB26: jnz     short loc_14033BB19
 * 000000014033BB28: xor     r12d, r12d
 * 000000014033BB2B: mov     rbx, [rsi+0A50h]
 * 000000014033BB32: mov     [rbx+18h], r14
 * 000000014033BB36: mov     [rbx+20h], r15
 * 000000014033BB3A: mov     rax, [rsi+580h]
 * 000000014033BB41: mov     [rax], rbx
 * 000000014033BB44: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014033BB4B: mov     rax, [rsi+580h]
 * 000000014033BB52: mov     [rax+8], r14
 * 000000014033BB56: mov     dword ptr [rax+14h], 1000h
 * 000000014033BB5D: cmp     [rsi+8D8h], r12d
 * 000000014033BB64: jnz     short loc_14033BBA6
 * 000000014033BB66: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033BB70: add     rax, rsi
 * 000000014033BB73: mov     [rsi+8E0h], rax
 * 000000014033BB7A: mov     rax, 0B3B74BDEE4453415h
 * 000000014033BB84: add     rax, rbx
 * 000000014033BB87: mov     [rsi+8E8h], rax
 * 000000014033BB8E: movsxd  rax, dword ptr [rbx]
 * 000000014033BB91: mov     [rsi+8F0h], rax
 * 000000014033BB98: mov     [rsi+8F8h], rdi
 * 000000014033BB9F: mov     [rsi+8D8h], r9d
 * 000000014033BBA6: mov     rax, [rsi+308h]
 * 000000014033BBAD: lea     rdx, [rbp+20F0h+var_1D90]
 * 000000014033BBB4: mov     rcx, r15
 * 000000014033BBB7: call    KeGuardDispatchICall
 * 000000014033BBBC: xor     r10d, r10d
 * 000000014033BBBF: mov     r14, rax
 * 000000014033BBC2: test    rax, rax
 * 000000014033BBC5: jnz     loc_14033BAB6
 * 000000014033BBCB: mov     r12, [rbp+20F0h+var_20F0]
 * 000000014033BBCF: mov     rdi, [rbp+20F0h+var_20D8]
 * 000000014033BBD3: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033BBD7: add     r12, 10h
 * 000000014033BBDB: mov     ecx, 1
 * 000000014033BBE0: mov     [rbp+20F0h+var_20F0], r12
 * 000000014033BBE4: sub     rdi, rcx
 * 000000014033BBE7: mov     [rbp+20F0h+var_20D8], rdi
 * 000000014033BBEB: jnz     loc_14033BA79
 * 000000014033BBF1: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033BBF8: jmp     loc_140334625
 * 000000014033BBFD: mov     cr8, r15
 * 000000014033BC01: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033BC05: mov     eax, [rsi+8D8h]
 * 000000014033BC0B: mov     ecx, [r13+14h]
 * 000000014033BC0F: test    eax, eax
 * 000000014033BC11: jnz     short loc_14033BC29
 * 000000014033BC13: mov     eax, ebx
 * 000000014033BC15: xor     rcx, rax
 * 000000014033BC18: mov     rax, [rsi+580h]
 * 000000014033BC1F: mov     [rax+18h], rcx
 * 000000014033BC23: mov     eax, [rsi+8D8h]
 * 000000014033BC29: mov     rcx, [r13+8]
 * 000000014033BC2D: mov     r11, 0B3B74BDEE4453415h
 * 000000014033BC37: test    eax, eax
 * 000000014033BC39: jnz     loc_14033BA57
 * 000000014033BC3F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033BC49: add     rax, rsi
 * 000000014033BC4C: mov     [rsi+8E0h], rax
 * 000000014033BC53: lea     rax, [r11+r13]
 * 000000014033BC57: mov     [rsi+8E8h], rax
 * 000000014033BC5E: movsxd  rax, dword ptr [r13+0]
 * 000000014033BC62: mov     [rsi+8F0h], rax
 * 000000014033BC69: mov     [rsi+8F8h], rcx
 * 000000014033BC70: mov     ecx, 1
 * 000000014033BC75: mov     [rsi+8D8h], ecx
 * 000000014033BC7B: jmp     loc_14033BA5C
 * 000000014033BC80: mov     eax, [rsi+974h]
 * 000000014033BC86: mov     ecx, 2
 * 000000014033BC8B: test    cl, al
 * 000000014033BC8D: jnz     loc_140334318
 * 000000014033BC93: mov     rax, [rsi+420h]
 * 000000014033BC9A: call    KeGuardDispatchICall
 * 000000014033BC9F: xor     r10d, r10d
 * 000000014033BCA2: test    al, al
 * 000000014033BCA4: jz      loc_140334625
 * 000000014033BCAA: mov     r11, 0B3B74BDEE4453415h
 * 000000014033BCB4: mov     r14d, 8000h
 * 000000014033BCBA: cmp     [rsi+8D8h], r10d
 * 000000014033BCC1: jnz     loc_140334635
 * 000000014033BCC7: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033BCD1: add     rax, rsi
 * 000000014033BCD4: mov     [rsi+8E0h], rax
 * 000000014033BCDB: lea     rax, [r11+r13]
 * 000000014033BCDF: mov     [rsi+8E8h], rax
 * 000000014033BCE6: movsxd  rax, dword ptr [r13+0]
 * 000000014033BCEA: mov     [rsi+8F0h], rax
 * 000000014033BCF1: mov     [rsi+8F8h], r10
 * 000000014033BCF8: jmp     loc_14033579E
 * 000000014033BCFD: cmp     r14d, 26h ; '&'
 * 000000014033BD01: jz      loc_14033F1A5
 * 000000014033BD07: jle     loc_14033E4C6
 * 000000014033BD0D: cmp     r14d, 2Ah ; '*'
 * 000000014033BD11: jle     loc_14033E332
 * 000000014033BD17: cmp     r14d, 2Bh ; '+'
 * 000000014033BD1B: jz      loc_14033D2AB
 * 000000014033BD21: cmp     r14d, 2Ch ; ','
 * 000000014033BD25: jz      loc_14033C6FD
 * 000000014033BD2B: cmp     r14d, 2Eh ; '.'
 * 000000014033BD2F: jz      loc_14033C607
 * 000000014033BD35: cmp     r14d, 2Fh ; '/'
 * 000000014033BD39: jz      loc_14033C3A2
 * 000000014033BD3F: cmp     r14d, 30h ; '0'
 * 000000014033BD43: jnz     loc_14033E4C6
 * 000000014033BD49: xor     r10d, r10d
 * 000000014033BD4C: cmp     [r13+10h], r10d
 * 000000014033BD50: jz      loc_14033462F
 * 000000014033BD56: test    dword ptr [rsi+974h], 4000h
 * 000000014033BD60: jz      short loc_14033BD81
 * 000000014033BD62: mov     rcx, [rsi+4D0h]
 * 000000014033BD69: cli
 * 000000014033BD6A: mov     eax, [rsi+970h]
 * 000000014033BD70: shr     eax, 0Ah
 * 000000014033BD73: and     eax, 1Fh
 * 000000014033BD76: lock bts [rcx], eax
 * 000000014033BD7A: jnb     short loc_14033BD81
 * 000000014033BD7C: sti
 * 000000014033BD7D: pause
 * 000000014033BD7F: jmp     short loc_14033BD69
 * 000000014033BD81: mov     eax, [r13+18h]
 * 000000014033BD85: test    dl, al
 * 000000014033BD87: jnz     loc_14033C00E
 * 000000014033BD8D: mov     r14, [r13+8]
 * 000000014033BD91: mov     r8d, [r13+10h]
 * 000000014033BD95: mov     r9, r14
 * 000000014033BD98: add     [rsi+810h], r8d
 * 000000014033BD9F: mov     rax, r14
 * 000000014033BDA2: mov     r11d, [rsi+7FCh]
 * 000000014033BDA9: mov     r15, [rsi+800h]
 * 000000014033BDB0: lea     rcx, [r14+r8]
 * 000000014033BDB4: cmp     r14, rcx
 * 000000014033BDB7: jnb     short loc_14033BDCA
 * 000000014033BDB9: mov     r10d, 40h ; '@'
 * 000000014033BDBF: prefetchnta byte ptr [rax]
 * 000000014033BDC2: add     rax, r10
 * 000000014033BDC5: cmp     rax, rcx
 * 000000014033BDC8: jb      short loc_14033BDBF
 * 000000014033BDCA: mov     r10d, r8d
 * 000000014033BDCD: mov     rbx, r15
 * 000000014033BDD0: shr     r10d, 7
 * 000000014033BDD4: mov     r12d, 0FFFFFFFFh
 * 000000014033BDDA: test    r10d, r10d
 * 000000014033BDDD: jz      short loc_14033BE4A
 * 000000014033BDDF: mov     rdi, 7010008004002001h
 * 000000014033BDE9: mov     eax, 8
 * 000000014033BDEE: xor     rbx, [r9]
 * 000000014033BDF1: mov     ecx, r11d
 * 000000014033BDF4: rol     rbx, cl
 * 000000014033BDF7: xor     rbx, [r9+8]
 * 000000014033BDFB: add     r9, 10h
 * 000000014033BDFF: rol     rbx, cl
 * 000000014033BE02: sub     rax, rdx
 * 000000014033BE05: jnz     short loc_14033BDEE
 * 000000014033BE07: mov     rcx, r9
 * 000000014033BE0A: sub     rcx, r14
 * 000000014033BE0D: xor     rcx, r15
 * 000000014033BE10: mov     rax, rcx
 * 000000014033BE13: rol     rax, 11h
 * 000000014033BE17: xor     rcx, rax
 * 000000014033BE1A: mov     rax, rdi
 * 000000014033BE1D: mul     rcx
 * 000000014033BE20: xor     r11d, eax
 * 000000014033BE23: mov     [rbp+20F0h+var_1A70], rdx
 * 000000014033BE2A: xor     r11d, edx
 * 000000014033BE2D: mov     edx, 1
 * 000000014033BE32: and     r11d, 3Fh
 * 000000014033BE36: cmovz   r11d, edx
 * 000000014033BE3A: add     r10d, r12d
 * 000000014033BE3D: jnz     short loc_14033BDE9
 * 000000014033BE3F: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033BE43: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033BE4A: and     r8d, 7Fh
 * 000000014033BE4E: cmp     r8d, 8
 * 000000014033BE52: jb      short loc_14033BE71
 * 000000014033BE54: mov     eax, r8d
 * 000000014033BE57: shr     rax, 3
 * 000000014033BE5B: xor     rbx, [r9]
 * 000000014033BE5E: mov     ecx, r11d
 * 000000014033BE61: rol     rbx, cl
 * 000000014033BE64: add     r9, 8
 * 000000014033BE68: add     r8d, 0FFFFFFF8h
 * 000000014033BE6C: sub     rax, rdx
 * 000000014033BE6F: jnz     short loc_14033BE5B
 * 000000014033BE71: xor     r10d, r10d
 * 000000014033BE74: test    r8d, r8d
 * 000000014033BE77: jz      short loc_14033BE8E
 * 000000014033BE79: movzx   eax, byte ptr [r9]
 * 000000014033BE7D: mov     ecx, r11d
 * 000000014033BE80: xor     rbx, rax
 * 000000014033BE83: add     r9, rdx
 * 000000014033BE86: rol     rbx, cl
 * 000000014033BE89: add     r8d, r12d
 * 000000014033BE8C: jnz     short loc_14033BE79
 * 000000014033BE8E: mov     rax, rbx
 * 000000014033BE91: jmp     short loc_14033BE95
 * 000000014033BE93: xor     ebx, eax
 * 000000014033BE95: shr     rax, 1Fh
 * 000000014033BE99: test    rax, rax
 * 000000014033BE9C: jnz     short loc_14033BE93
 * 000000014033BE9E: mov     r8, [rbp+20F0h+var_20D0]
 * 000000014033BEA2: btr     ebx, 1Fh
 * 000000014033BEA6: mov     r13d, r10d
 * 000000014033BEA9: cmp     ebx, [r8+14h]
 * 000000014033BEAD: jz      loc_14033BF7F
 * 000000014033BEB3: cmp     [r8], r10d
 * 000000014033BEB6: jnz     short loc_14033BEC0
 * 000000014033BEB8: cmp     [r8+18h], r10d
 * 000000014033BEBC: cmovnz  r13d, edx
 * 000000014033BEC0: mov     ecx, [r8+10h]
 * 000000014033BEC4: mov     rdx, [r8+8]
 * 000000014033BEC8: test    rcx, rcx
 * 000000014033BECB: jz      loc_14033BF96
 * 000000014033BED1: mov     eax, [rsi+974h]
 * 000000014033BED7: mov     r9d, 40h ; '@'
 * 000000014033BEDD: test    r9b, al
 * 000000014033BEE0: jz      loc_14033BF96
 * 000000014033BEE6: mov     r12, cr8
 * 000000014033BEEA: lea     eax, [r9-3Eh]
 * 000000014033BEEE: mov     cr8, rax
 * 000000014033BEF2: lea     rax, [rcx-1]
 * 000000014033BEF6: mov     r14, rdx
 * 000000014033BEF9: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033BF00: add     rax, rdx
 * 000000014033BF03: mov     ecx, 0FFFh
 * 000000014033BF08: or      rax, rcx
 * 000000014033BF0B: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033BF0F: lea     rax, [r14-1]
 * 000000014033BF13: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033BF17: movzx   r15d, r12b
 * 000000014033BF1B: mov     rax, [rsi+460h]
 * 000000014033BF22: xor     edx, edx
 * 000000014033BF24: mov     rcx, r14
 * 000000014033BF27: call    KeGuardDispatchICall
 * 000000014033BF2C: xor     r10d, r10d
 * 000000014033BF2F: cmp     eax, 0C000022Dh
 * 000000014033BF34: jnz     short loc_14033BF5D
 * 000000014033BF36: test    r13d, r13d
 * 000000014033BF39: jnz     short loc_14033BF8E
 * 000000014033BF3B: lea     eax, [r10+1]
 * 000000014033BF3F: cmp     r12b, al
 * 000000014033BF42: ja      short loc_14033BF61
 * 000000014033BF44: movzx   r15d, r12b
 * 000000014033BF48: mov     cr8, r15
 * 000000014033BF4C: mov     al, [r14]
 * 000000014033BF4F: mov     rax, cr8
 * 000000014033BF53: lea     eax, [r10+2]
 * 000000014033BF57: mov     cr8, rax
 * 000000014033BF5B: jmp     short loc_14033BF1B
 * 000000014033BF5D: test    eax, eax
 * 000000014033BF5F: js      short loc_14033BF8E
 * 000000014033BF61: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033BF65: mov     r9d, 1000h
 * 000000014033BF6B: add     rax, r9
 * 000000014033BF6E: add     r14, r9
 * 000000014033BF71: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033BF75: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033BF79: jnz     short loc_14033BF17
 * 000000014033BF7B: mov     cr8, r15
 * 000000014033BF7F: mov     r11, 0B3B74BDEE4453415h
 * 000000014033BF89: jmp     loc_14033C368
 * 000000014033BF8E: mov     cr8, r15
 * 000000014033BF92: mov     r8, [rbp+20F0h+var_20D0]
 * 000000014033BF96: mov     eax, [rsi+8D8h]
 * 000000014033BF9C: mov     edx, [r8+14h]
 * 000000014033BFA0: test    eax, eax
 * 000000014033BFA2: jnz     short loc_14033BFBA
 * 000000014033BFA4: mov     rax, [rsi+580h]
 * 000000014033BFAB: mov     ecx, ebx
 * 000000014033BFAD: xor     rcx, rdx
 * 000000014033BFB0: mov     [rax+18h], rcx
 * 000000014033BFB4: mov     eax, [rsi+8D8h]
 * 000000014033BFBA: mov     rcx, [r8+8]
 * 000000014033BFBE: test    eax, eax
 * 000000014033BFC0: jnz     short loc_14033BF7F
 * 000000014033BFC2: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033BFCC: mov     r11, 0B3B74BDEE4453415h
 * 000000014033BFD6: add     rax, rsi
 * 000000014033BFD9: mov     [rsi+8E0h], rax
 * 000000014033BFE0: lea     rax, [r8+r11]
 * 000000014033BFE4: mov     [rsi+8E8h], rax
 * 000000014033BFEB: movsxd  rax, dword ptr [r8]
 * 000000014033BFEE: mov     [rsi+8F0h], rax
 * 000000014033BFF5: mov     r15d, 1
 * 000000014033BFFB: mov     [rsi+8F8h], rcx
 * 000000014033C002: mov     [rsi+8D8h], r15d
 * 000000014033C009: jmp     loc_14033C36E
 * 000000014033C00E: cmp     [rsi+960h], r10
 * 000000014033C015: jz      loc_14033C361
 * 000000014033C01B: mov     edx, [rsi+974h]
 * 000000014033C021: mov     ecx, edx
 * 000000014033C023: cmp     [rsi+80Ch], r10d
 * 000000014033C02A: jnz     short loc_14033C03E
 * 000000014033C02C: shl     ecx, 3
 * 000000014033C02F: xor     ecx, edx
 * 000000014033C031: and     ecx, 20h
 * 000000014033C034: xor     ecx, edx
 * 000000014033C036: mov     [rsi+974h], ecx
 * 000000014033C03C: jmp     short loc_14033C04D
 * 000000014033C03E: mov     eax, edx
 * 000000014033C040: shr     eax, 3
 * 000000014033C043: xor     eax, edx
 * 000000014033C045: test    al, 4
 * 000000014033C047: jnz     loc_14033C361
 * 000000014033C04D: test    cl, 4
 * 000000014033C050: jz      loc_14033C110
 * 000000014033C056: mov     rcx, [r13+8]
 * 000000014033C05A: mov     eax, 0FFFh
 * 000000014033C05F: mov     r14d, [r13+10h]
 * 000000014033C063: mov     rbx, rcx
 * 000000014033C066: add     r14, rax
 * 000000014033C069: and     rcx, rax
 * 000000014033C06C: add     r14, rcx
 * 000000014033C06F: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033C076: shr     r14, 0Ch
 * 000000014033C07A: test    r14, r14
 * 000000014033C07D: jz      loc_14033C368
 * 000000014033C083: mov     rdi, 0A3A03F5891C8B4E8h
 * 000000014033C08D: mov     r15d, 1
 * 000000014033C093: mov     rax, [rsi+2A8h]
 * 000000014033C09A: mov     rcx, rbx
 * 000000014033C09D: sub     r14, r15
 * 000000014033C0A0: call    KeGuardDispatchICall
 * 000000014033C0A5: xor     r10d, r10d
 * 000000014033C0A8: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C0B2: test    al, al
 * 000000014033C0B4: jz      short loc_14033C0EE
 * 000000014033C0B6: cmp     [rsi+8D8h], r10d
 * 000000014033C0BD: jnz     short loc_14033C0EE
 * 000000014033C0BF: lea     rax, [rsi+rdi]
 * 000000014033C0C3: mov     [rsi+8E0h], rax
 * 000000014033C0CA: lea     rax, [r11+r13]
 * 000000014033C0CE: mov     [rsi+8E8h], rax
 * 000000014033C0D5: movsxd  rax, dword ptr [r13+0]
 * 000000014033C0D9: mov     [rsi+8F0h], rax
 * 000000014033C0E0: mov     [rsi+8F8h], rbx
 * 000000014033C0E7: mov     [rsi+8D8h], r15d
 * 000000014033C0EE: add     dword ptr [rsi+810h], 100h
 * 000000014033C0F8: add     rbx, 1000h
 * 000000014033C0FF: test    r14, r14
 * 000000014033C102: jnz     short loc_14033C093
 * 000000014033C104: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033C10B: jmp     loc_14033C36E
 * 000000014033C110: mov     r14, [r13+8]
 * 000000014033C114: mov     r8d, [r13+10h]
 * 000000014033C118: mov     r9, r14
 * 000000014033C11B: add     [rsi+810h], r8d
 * 000000014033C122: mov     rax, r14
 * 000000014033C125: mov     r11d, [rsi+7FCh]
 * 000000014033C12C: mov     r15, [rsi+800h]
 * 000000014033C133: lea     rcx, [r14+r8]
 * 000000014033C137: cmp     r14, rcx
 * 000000014033C13A: jnb     short loc_14033C14C
 * 000000014033C13C: mov     edx, 40h ; '@'
 * 000000014033C141: prefetchnta byte ptr [rax]
 * 000000014033C144: add     rax, rdx
 * 000000014033C147: cmp     rax, rcx
 * 000000014033C14A: jb      short loc_14033C141
 * 000000014033C14C: mov     r10d, r8d
 * 000000014033C14F: mov     rbx, r15
 * 000000014033C152: shr     r10d, 7
 * 000000014033C156: mov     r12d, 1
 * 000000014033C15C: test    r10d, r10d
 * 000000014033C15F: jz      short loc_14033C1CE
 * 000000014033C161: mov     rdi, 7010008004002001h
 * 000000014033C16B: mov     eax, 8
 * 000000014033C170: xor     rbx, [r9]
 * 000000014033C173: mov     ecx, r11d
 * 000000014033C176: rol     rbx, cl
 * 000000014033C179: xor     rbx, [r9+8]
 * 000000014033C17D: add     r9, 10h
 * 000000014033C181: rol     rbx, cl
 * 000000014033C184: sub     rax, r12
 * 000000014033C187: jnz     short loc_14033C170
 * 000000014033C189: mov     rcx, r9
 * 000000014033C18C: sub     rcx, r14
 * 000000014033C18F: xor     rcx, r15
 * 000000014033C192: mov     rax, rcx
 * 000000014033C195: rol     rax, 11h
 * 000000014033C199: xor     rcx, rax
 * 000000014033C19C: mov     rax, rdi
 * 000000014033C19F: mul     rcx
 * 000000014033C1A2: xor     r11d, eax
 * 000000014033C1A5: mov     [rbp+20F0h+var_1A68], rdx
 * 000000014033C1AC: xor     r11d, edx
 * 000000014033C1AF: mov     edx, 0FFFFFFFFh
 * 000000014033C1B4: and     r11d, 3Fh
 * 000000014033C1B8: cmovz   r11d, r12d
 * 000000014033C1BC: add     r10d, edx
 * 000000014033C1BF: jnz     short loc_14033C16B
 * 000000014033C1C1: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033C1C5: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033C1CC: jmp     short loc_14033C1D3
 * 000000014033C1CE: mov     edx, 0FFFFFFFFh
 * 000000014033C1D3: and     r8d, 7Fh
 * 000000014033C1D7: cmp     r8d, 8
 * 000000014033C1DB: jb      short loc_14033C1FA
 * 000000014033C1DD: mov     eax, r8d
 * 000000014033C1E0: shr     rax, 3
 * 000000014033C1E4: xor     rbx, [r9]
 * 000000014033C1E7: mov     ecx, r11d
 * 000000014033C1EA: rol     rbx, cl
 * 000000014033C1ED: add     r9, 8
 * 000000014033C1F1: add     r8d, 0FFFFFFF8h
 * 000000014033C1F5: sub     rax, r12
 * 000000014033C1F8: jnz     short loc_14033C1E4
 * 000000014033C1FA: xor     r10d, r10d
 * 000000014033C1FD: test    r8d, r8d
 * 000000014033C200: jz      short loc_14033C217
 * 000000014033C202: movzx   eax, byte ptr [r9]
 * 000000014033C206: mov     ecx, r11d
 * 000000014033C209: xor     rbx, rax
 * 000000014033C20C: add     r9, r12
 * 000000014033C20F: rol     rbx, cl
 * 000000014033C212: add     r8d, edx
 * 000000014033C215: jnz     short loc_14033C202
 * 000000014033C217: mov     rax, rbx
 * 000000014033C21A: jmp     short loc_14033C21E
 * 000000014033C21C: xor     ebx, eax
 * 000000014033C21E: shr     rax, 1Fh
 * 000000014033C222: test    rax, rax
 * 000000014033C225: jnz     short loc_14033C21C
 * 000000014033C227: mov     r8d, [r13+14h]
 * 000000014033C22B: btr     ebx, 1Fh
 * 000000014033C22F: cmp     ebx, r8d
 * 000000014033C232: jz      loc_14033BF7F
 * 000000014033C238: mov     ecx, [r13+10h]
 * 000000014033C23C: mov     rdx, [r13+8]
 * 000000014033C240: test    rcx, rcx
 * 000000014033C243: jz      loc_14033C2E2
 * 000000014033C249: mov     eax, [rsi+974h]
 * 000000014033C24F: mov     r9d, 40h ; '@'
 * 000000014033C255: test    r9b, al
 * 000000014033C258: jz      loc_14033C2E2
 * 000000014033C25E: mov     r12, cr8
 * 000000014033C262: lea     eax, [r9-3Eh]
 * 000000014033C266: mov     cr8, rax
 * 000000014033C26A: lea     rax, [rcx-1]
 * 000000014033C26E: mov     r14, rdx
 * 000000014033C271: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033C278: add     rax, rdx
 * 000000014033C27B: mov     ecx, 0FFFh
 * 000000014033C280: or      rax, rcx
 * 000000014033C283: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033C287: lea     r13, [r14-1]
 * 000000014033C28B: movzx   r15d, r12b
 * 000000014033C28F: mov     rax, [rsi+460h]
 * 000000014033C296: xor     edx, edx
 * 000000014033C298: mov     rcx, r14
 * 000000014033C29B: call    KeGuardDispatchICall
 * 000000014033C2A0: cmp     eax, 0C000022Dh
 * 000000014033C2A5: jnz     short loc_14033C2CF
 * 000000014033C2A7: mov     eax, 1
 * 000000014033C2AC: cmp     r12b, al
 * 000000014033C2AF: ja      loc_14033C343
 * 000000014033C2B5: movzx   r15d, r12b
 * 000000014033C2B9: mov     cr8, r15
 * 000000014033C2BD: mov     al, [r14]
 * 000000014033C2C0: mov     rax, cr8
 * 000000014033C2C4: mov     eax, 2
 * 000000014033C2C9: mov     cr8, rax
 * 000000014033C2CD: jmp     short loc_14033C28F
 * 000000014033C2CF: xor     r10d, r10d
 * 000000014033C2D2: test    eax, eax
 * 000000014033C2D4: jns     short loc_14033C346
 * 000000014033C2D6: mov     cr8, r15
 * 000000014033C2DA: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033C2DE: mov     r8d, [r13+14h]
 * 000000014033C2E2: mov     eax, [rsi+8D8h]
 * 000000014033C2E8: test    eax, eax
 * 000000014033C2EA: jnz     short loc_14033C305
 * 000000014033C2EC: mov     eax, ebx
 * 000000014033C2EE: mov     ecx, r8d
 * 000000014033C2F1: xor     rcx, rax
 * 000000014033C2F4: mov     rax, [rsi+580h]
 * 000000014033C2FB: mov     [rax+18h], rcx
 * 000000014033C2FF: mov     eax, [rsi+8D8h]
 * 000000014033C305: mov     rcx, [r13+8]
 * 000000014033C309: test    eax, eax
 * 000000014033C30B: jnz     loc_14033BF7F
 * 000000014033C311: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033C31B: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C325: add     rax, rsi
 * 000000014033C328: mov     [rsi+8E0h], rax
 * 000000014033C32F: lea     rax, [r11+r13]
 * 000000014033C333: mov     [rsi+8E8h], rax
 * 000000014033C33A: movsxd  rax, dword ptr [r13+0]
 * 000000014033C33E: jmp     loc_14033BFEE
 * 000000014033C343: xor     r10d, r10d
 * 000000014033C346: mov     r9d, 1000h
 * 000000014033C34C: add     r14, r9
 * 000000014033C34F: add     r13, r9
 * 000000014033C352: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033C356: jnz     loc_14033C28B
 * 000000014033C35C: jmp     loc_14033BF7B
 * 000000014033C361: mov     [rsi+80Ch], r10d
 * 000000014033C368: mov     r15d, 1
 * 000000014033C36E: test    dword ptr [rsi+974h], 4000h
 * 000000014033C378: jz      loc_14033462F
 * 000000014033C37E: mov     ecx, [rsi+970h]
 * 000000014033C384: mov     edx, r15d
 * 000000014033C387: mov     r8, [rsi+4D0h]
 * 000000014033C38E: shr     ecx, 0Ah
 * 000000014033C391: and     ecx, 1Fh
 * 000000014033C394: shl     edx, cl
 * 000000014033C396: not     edx
 * 000000014033C398: lock and [r8], edx
 * 000000014033C39C: sti
 * 000000014033C39D: jmp     loc_14033462F
 * 000000014033C3A2: mov     rcx, gs:20h
 * 000000014033C3AB: mov     rax, [rsi+630h]
 * 000000014033C3B2: mov     rcx, [rax+rcx]
 * 000000014033C3B6: mov     rax, [rsi+670h]
 * 000000014033C3BD: add     rcx, [rsi+690h]
 * 000000014033C3C4: mov     rcx, [rcx+rax]
 * 000000014033C3C8: mov     [rbp+20F0h+var_2010], rcx
 * 000000014033C3CF: mov     rax, [rsi+488h]
 * 000000014033C3D6: call    KeGuardDispatchICall
 * 000000014033C3DB: mov     r12d, 0FFFFFFFFh
 * 000000014033C3E1: mov     r14, rax
 * 000000014033C3E4: cmp     rax, r12
 * 000000014033C3E7: jnz     loc_14033C545
 * 000000014033C3ED: xor     eax, eax
 * 000000014033C3EF: mov     [rbp+20F0h+var_2010], rax
 * 000000014033C3F6: mov     rcx, [rsi+968h]
 * 000000014033C3FD: test    rcx, rcx
 * 000000014033C400: jz      short loc_14033C431
 * 000000014033C402: mov     rax, [rsi+478h]
 * 000000014033C409: lea     rdx, [rbp+20F0h+var_2010]
 * 000000014033C410: call    KeGuardDispatchICall
 * 000000014033C415: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033C41C: xor     r10d, r10d
 * 000000014033C41F: test    eax, eax
 * 000000014033C421: cmovs   rcx, r10
 * 000000014033C425: mov     [rbp+20F0h+var_2010], rcx
 * 000000014033C42C: test    rcx, rcx
 * 000000014033C42F: jnz     short loc_14033C449
 * 000000014033C431: mov     rax, [rsi+3B8h]
 * 000000014033C438: xor     ecx, ecx
 * 000000014033C43A: call    KeGuardDispatchICall
 * 000000014033C43F: mov     [rbp+20F0h+var_2010], rax
 * 000000014033C446: xor     r10d, r10d
 * 000000014033C449: mov     [rsi+968h], r10
 * 000000014033C450: mov     ebx, r10d
 * 000000014033C453: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033C45A: test    rcx, rcx
 * 000000014033C45D: jz      loc_14033C537
 * 000000014033C463: mov     r15d, 1
 * 000000014033C469: mov     rax, [rsi+398h]
 * 000000014033C470: add     ebx, r15d
 * 000000014033C473: call    KeGuardDispatchICall
 * 000000014033C478: test    eax, eax
 * 000000014033C47A: js      short loc_14033C4D8
 * 000000014033C47C: mov     rax, [rsi+430h]
 * 000000014033C483: lea     rdx, [rbp+20F0h+var_15A0]
 * 000000014033C48A: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033C491: call    KeGuardDispatchICall
 * 000000014033C496: mov     rax, [rsi+488h]
 * 000000014033C49D: call    KeGuardDispatchICall
 * 000000014033C4A2: mov     r14, rax
 * 000000014033C4A5: lea     rcx, [rbp+20F0h+var_15A0]
 * 000000014033C4AC: mov     rax, [rsi+438h]
 * 000000014033C4B3: call    KeGuardDispatchICall
 * 000000014033C4B8: mov     rax, [rsi+3A0h]
 * 000000014033C4BF: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033C4C6: call    KeGuardDispatchICall
 * 000000014033C4CB: cmp     r14, r12
 * 000000014033C4CE: jnz     short loc_14033C502
 * 000000014033C4D0: cmp     ebx, 100h
 * 000000014033C4D6: ja      short loc_14033C502
 * 000000014033C4D8: mov     rax, [rsi+3B8h]
 * 000000014033C4DF: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033C4E6: call    KeGuardDispatchICall
 * 000000014033C4EB: xor     r10d, r10d
 * 000000014033C4EE: mov     [rbp+20F0h+var_2010], rax
 * 000000014033C4F5: mov     rcx, rax
 * 000000014033C4F8: test    rax, rax
 * 000000014033C4FB: jz      short loc_14033C537
 * 000000014033C4FD: jmp     loc_14033C469
 * 000000014033C502: mov     rax, [rsi+480h]
 * 000000014033C509: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033C510: call    KeGuardDispatchICall
 * 000000014033C515: mov     [rsi+968h], rax
 * 000000014033C51C: mov     rax, [rsi+1D8h]
 * 000000014033C523: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033C52A: call    KeGuardDispatchICall
 * 000000014033C52F: cmp     r14, r12
 * 000000014033C532: jnz     short loc_14033C54B
 * 000000014033C534: xor     r10d, r10d
 * 000000014033C537: shl     ebx, 0Ch
 * 000000014033C53A: add     [rsi+810h], ebx
 * 000000014033C540: jmp     loc_140334625
 * 000000014033C545: mov     r15d, 1
 * 000000014033C54B: test    dword ptr [rsi+970h], 40000000h
 * 000000014033C555: jz      short loc_14033C59F
 * 000000014033C557: mov     rcx, [rsi+0A50h]
 * 000000014033C55E: mov     edx, 30h ; '0'
 * 000000014033C563: lea     r8d, [rdx-2Ah]
 * 000000014033C567: mov     rax, [r13+0]
 * 000000014033C56B: add     edx, 0FFFFFFF8h
 * 000000014033C56E: mov     [rcx], rax
 * 000000014033C571: add     r13, 8
 * 000000014033C575: add     rcx, 8
 * 000000014033C579: sub     r8, r15
 * 000000014033C57C: jnz     short loc_14033C567
 * 000000014033C57E: xor     r10d, r10d
 * 000000014033C581: test    edx, edx
 * 000000014033C583: jz      short loc_14033C596
 * 000000014033C585: mov     al, [r13+0]
 * 000000014033C589: add     r13, r15
 * 000000014033C58C: mov     [rcx], al
 * 000000014033C58E: add     rcx, r15
 * 000000014033C591: add     edx, r12d
 * 000000014033C594: jnz     short loc_14033C585
 * 000000014033C596: mov     r13, [rsi+0A50h]
 * 000000014033C59D: jmp     short loc_14033C5A2
 * 000000014033C59F: xor     r10d, r10d
 * 000000014033C5A2: mov     [r13+18h], r14
 * 000000014033C5A6: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C5B0: mov     r14d, 8000h
 * 000000014033C5B6: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033C5BD: cmp     [rsi+8D8h], r10d
 * 000000014033C5C4: jnz     loc_140334635
 * 000000014033C5CA: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033C5D4: add     rax, rsi
 * 000000014033C5D7: mov     [rsi+8E0h], rax
 * 000000014033C5DE: lea     rax, [r11+r13]
 * 000000014033C5E2: mov     [rsi+8E8h], rax
 * 000000014033C5E9: movsxd  rax, dword ptr [r13+0]
 * 000000014033C5ED: mov     [rsi+8F0h], rax
 * 000000014033C5F4: mov     [rsi+8F8h], rcx
 * 000000014033C5FB: mov     [rsi+8D8h], r15d
 * 000000014033C602: jmp     loc_140334635
 * 000000014033C607: mov     eax, [rsi+818h]
 * 000000014033C60D: test    dl, al
 * 000000014033C60F: jnz     loc_140334318
 * 000000014033C615: mov     r15, [rsi+538h]
 * 000000014033C61C: xor     eax, eax
 * 000000014033C61E: mov     r14d, eax
 * 000000014033C621: mov     rax, [rsi+170h]
 * 000000014033C628: call    KeGuardDispatchICall
 * 000000014033C62D: test    dword ptr [rsi+970h], 40000000h
 * 000000014033C637: jnz     short loc_14033C651
 * 000000014033C639: mov     ecx, [rsi+930h]
 * 000000014033C63F: cmp     ecx, 7
 * 000000014033C642: jnb     short loc_14033C651
 * 000000014033C644: mov     r12d, 1
 * 000000014033C64A: mov     ebx, r12d
 * 000000014033C64D: shl     bl, cl
 * 000000014033C64F: jmp     short loc_14033C66E
 * 000000014033C651: mov     rax, [rsi+120h]
 * 000000014033C658: xor     edx, edx
 * 000000014033C65A: mov     rcx, [rsi+9E0h]
 * 000000014033C661: call    KeGuardDispatchICall
 * 000000014033C666: mov     bl, 80h
 * 000000014033C668: mov     r12d, 1
 * 000000014033C66E: mov     rax, [rsi+130h]
 * 000000014033C675: xor     edx, edx
 * 000000014033C677: mov     rcx, r15
 * 000000014033C67A: call    KeGuardDispatchICall
 * 000000014033C67F: cmp     bl, 80h
 * 000000014033C682: jz      short loc_14033C6B7
 * 000000014033C684: mov     r8, [rsi+510h]
 * 000000014033C68B: mov     rdx, [r8]
 * 000000014033C68E: cmp     rdx, r8
 * 000000014033C691: jz      short loc_14033C6CC
 * 000000014033C693: not     bl
 * 000000014033C695: mov     rax, [rsi+6A0h]
 * 000000014033C69C: mov     rcx, rdx
 * 000000014033C69F: sub     rcx, [rsi+6B8h]
 * 000000014033C6A6: lock and [rcx+rax], bl
 * 000000014033C6AA: mov     rdx, [rdx]
 * 000000014033C6AD: add     r14d, r12d
 * 000000014033C6B0: cmp     rdx, r8
 * 000000014033C6B3: jnz     short loc_14033C695
 * 000000014033C6B5: jmp     short loc_14033C6CC
 * 000000014033C6B7: mov     rax, [rsi+128h]
 * 000000014033C6BE: xor     edx, edx
 * 000000014033C6C0: mov     rcx, [rsi+9E0h]
 * 000000014033C6C7: call    KeGuardDispatchICall
 * 000000014033C6CC: mov     rcx, [rsi+538h]
 * 000000014033C6D3: xor     edx, edx
 * 000000014033C6D5: mov     rax, [rsi+138h]
 * 000000014033C6DC: call    KeGuardDispatchICall
 * 000000014033C6E1: mov     rax, [rsi+178h]
 * 000000014033C6E8: call    KeGuardDispatchICall
 * 000000014033C6ED: shl     r14d, 7
 * 000000014033C6F1: add     [rsi+810h], r14d
 * 000000014033C6F8: jmp     loc_140334DB4
 * 000000014033C6FD: mov     ecx, [r13+20h]
 * 000000014033C701: mov     edx, 2
 * 000000014033C706: xor     r10d, r10d
 * 000000014033C709: mov     [rbp+20F0h+var_20B0], rsi
 * 000000014033C70D: test    dl, cl
 * 000000014033C70F: jz      loc_14033CB7F
 * 000000014033C715: cmp     [rsi+960h], r10
 * 000000014033C71C: jz      loc_14033B30C
 * 000000014033C722: mov     eax, [rsi+974h]
 * 000000014033C728: test    al, 4
 * 000000014033C72A: jnz     loc_14033B30C
 * 000000014033C730: test    dl, cl
 * 000000014033C732: jz      loc_14033CB7F
 * 000000014033C738: mov     edx, eax
 * 000000014033C73A: mov     ecx, eax
 * 000000014033C73C: cmp     [rsi+80Ch], r10d
 * 000000014033C743: jnz     short loc_14033C757
 * 000000014033C745: shl     ecx, 3
 * 000000014033C748: xor     ecx, eax
 * 000000014033C74A: and     ecx, 20h
 * 000000014033C74D: xor     ecx, eax
 * 000000014033C74F: mov     [rsi+974h], ecx
 * 000000014033C755: jmp     short loc_14033C766
 * 000000014033C757: mov     eax, edx
 * 000000014033C759: shr     eax, 3
 * 000000014033C75C: xor     eax, edx
 * 000000014033C75E: test    al, 4
 * 000000014033C760: jnz     loc_14033B30C
 * 000000014033C766: cmp     [rsi+960h], r10
 * 000000014033C76D: jz      loc_14033CB73
 * 000000014033C773: mov     edx, ecx
 * 000000014033C775: cmp     [rsi+80Ch], r10d
 * 000000014033C77C: jnz     short loc_14033C790
 * 000000014033C77E: shl     edx, 3
 * 000000014033C781: xor     edx, ecx
 * 000000014033C783: and     edx, 20h
 * 000000014033C786: xor     edx, ecx
 * 000000014033C788: mov     [rsi+974h], edx
 * 000000014033C78E: jmp     short loc_14033C79F
 * 000000014033C790: mov     eax, ecx
 * 000000014033C792: shr     eax, 3
 * 000000014033C795: xor     eax, ecx
 * 000000014033C797: test    al, 4
 * 000000014033C799: jnz     loc_14033CB73
 * 000000014033C79F: test    dl, 4
 * 000000014033C7A2: jz      loc_14033C867
 * 000000014033C7A8: mov     rcx, [r13+8]
 * 000000014033C7AC: mov     r14d, 0FFFh
 * 000000014033C7B2: mov     eax, [r13+10h]
 * 000000014033C7B6: and     r14, rcx
 * 000000014033C7B9: add     r14, 0FFFh
 * 000000014033C7C0: mov     rbx, rcx
 * 000000014033C7C3: add     r14, rax
 * 000000014033C7C6: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033C7CD: shr     r14, 0Ch
 * 000000014033C7D1: test    r14, r14
 * 000000014033C7D4: jz      loc_14033CAE1
 * 000000014033C7DA: mov     rdi, 0A3A03F5891C8B4E8h
 * 000000014033C7E4: mov     r15d, 1
 * 000000014033C7EA: mov     rax, [rsi+2A8h]
 * 000000014033C7F1: mov     rcx, rbx
 * 000000014033C7F4: sub     r14, r15
 * 000000014033C7F7: call    KeGuardDispatchICall
 * 000000014033C7FC: xor     r10d, r10d
 * 000000014033C7FF: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C809: test    al, al
 * 000000014033C80B: jz      short loc_14033C845
 * 000000014033C80D: cmp     [rsi+8D8h], r10d
 * 000000014033C814: jnz     short loc_14033C845
 * 000000014033C816: lea     rax, [rsi+rdi]
 * 000000014033C81A: mov     [rsi+8E0h], rax
 * 000000014033C821: lea     rax, [r11+r13]
 * 000000014033C825: mov     [rsi+8E8h], rax
 * 000000014033C82C: movsxd  rax, dword ptr [r13+0]
 * 000000014033C830: mov     [rsi+8F0h], rax
 * 000000014033C837: mov     [rsi+8F8h], rbx
 * 000000014033C83E: mov     [rsi+8D8h], r15d
 * 000000014033C845: add     dword ptr [rsi+810h], 100h
 * 000000014033C84F: add     rbx, 1000h
 * 000000014033C856: test    r14, r14
 * 000000014033C859: jnz     short loc_14033C7EA
 * 000000014033C85B: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033C862: jmp     loc_14033CAE1
 * 000000014033C867: mov     r11, [r13+8]
 * 000000014033C86B: mov     r8d, [r13+10h]
 * 000000014033C86F: mov     r9, r11
 * 000000014033C872: add     [rsi+810h], r8d
 * 000000014033C879: mov     rax, r11
 * 000000014033C87C: mov     r14d, [rsi+7FCh]
 * 000000014033C883: mov     r15, [rsi+800h]
 * 000000014033C88A: lea     rcx, [r11+r8]
 * 000000014033C88E: cmp     r11, rcx
 * 000000014033C891: jnb     short loc_14033C8A3
 * 000000014033C893: mov     edx, 40h ; '@'
 * 000000014033C898: prefetchnta byte ptr [rax]
 * 000000014033C89B: add     rax, rdx
 * 000000014033C89E: cmp     rax, rcx
 * 000000014033C8A1: jb      short loc_14033C898
 * 000000014033C8A3: mov     r10d, r8d
 * 000000014033C8A6: mov     rbx, r15
 * 000000014033C8A9: shr     r10d, 7
 * 000000014033C8AD: test    r10d, r10d
 * 000000014033C8B0: jz      short loc_14033C921
 * 000000014033C8B2: mov     rsi, 7010008004002001h
 * 000000014033C8BC: mov     r12d, 1
 * 000000014033C8C2: mov     edx, 8
 * 000000014033C8C7: mov     rax, [r9]
 * 000000014033C8CA: mov     ecx, r14d
 * 000000014033C8CD: xor     rax, rbx
 * 000000014033C8D0: mov     rbx, [r9+8]
 * 000000014033C8D4: rol     rax, cl
 * 000000014033C8D7: add     r9, 10h
 * 000000014033C8DB: xor     rbx, rax
 * 000000014033C8DE: rol     rbx, cl
 * 000000014033C8E1: sub     rdx, r12
 * 000000014033C8E4: jnz     short loc_14033C8C7
 * 000000014033C8E6: mov     rcx, r9
 * 000000014033C8E9: sub     rcx, r11
 * 000000014033C8EC: xor     rcx, r15
 * 000000014033C8EF: mov     rax, rcx
 * 000000014033C8F2: rol     rax, 11h
 * 000000014033C8F6: xor     rcx, rax
 * 000000014033C8F9: mov     rax, rsi
 * 000000014033C8FC: mul     rcx
 * 000000014033C8FF: xor     eax, edx
 * 000000014033C901: mov     [rbp+20F0h+var_1A60], rdx
 * 000000014033C908: xor     r14d, eax
 * 000000014033C90B: mov     eax, 0FFFFFFFFh
 * 000000014033C910: and     r14d, 3Fh
 * 000000014033C914: cmovz   r14d, r12d
 * 000000014033C918: add     r10d, eax
 * 000000014033C91B: jnz     short loc_14033C8C2
 * 000000014033C91D: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033C921: and     r8d, 7Fh
 * 000000014033C925: mov     r11d, 1
 * 000000014033C92B: cmp     r8d, 8
 * 000000014033C92F: jb      short loc_14033C94E
 * 000000014033C931: mov     edx, r8d
 * 000000014033C934: shr     rdx, 3
 * 000000014033C938: xor     rbx, [r9]
 * 000000014033C93B: mov     ecx, r14d
 * 000000014033C93E: rol     rbx, cl
 * 000000014033C941: add     r9, 8
 * 000000014033C945: add     r8d, 0FFFFFFF8h
 * 000000014033C949: sub     rdx, r11
 * 000000014033C94C: jnz     short loc_14033C938
 * 000000014033C94E: xor     r10d, r10d
 * 000000014033C951: test    r8d, r8d
 * 000000014033C954: jz      short loc_14033C974
 * 000000014033C956: mov     r10d, 0FFFFFFFFh
 * 000000014033C95C: movzx   eax, byte ptr [r9]
 * 000000014033C960: mov     ecx, r14d
 * 000000014033C963: xor     rbx, rax
 * 000000014033C966: add     r9, r11
 * 000000014033C969: rol     rbx, cl
 * 000000014033C96C: add     r8d, r10d
 * 000000014033C96F: jnz     short loc_14033C95C
 * 000000014033C971: xor     r10d, r10d
 * 000000014033C974: mov     rax, rbx
 * 000000014033C977: jmp     short loc_14033C97B
 * 000000014033C979: xor     ebx, eax
 * 000000014033C97B: shr     rax, 1Fh
 * 000000014033C97F: test    rax, rax
 * 000000014033C982: jnz     short loc_14033C979
 * 000000014033C984: mov     r8d, [r13+14h]
 * 000000014033C988: btr     ebx, 1Fh
 * 000000014033C98C: cmp     ebx, r8d
 * 000000014033C98F: jz      loc_14033CAD7
 * 000000014033C995: mov     ecx, [r13+10h]
 * 000000014033C999: mov     rdx, [r13+8]
 * 000000014033C99D: test    rcx, rcx
 * 000000014033C9A0: jz      loc_14033CA43
 * 000000014033C9A6: mov     eax, [rsi+974h]
 * 000000014033C9AC: mov     r9d, 40h ; '@'
 * 000000014033C9B2: test    r9b, al
 * 000000014033C9B5: jz      loc_14033CA43
 * 000000014033C9BB: mov     r12, cr8
 * 000000014033C9BF: lea     eax, [r9-3Eh]
 * 000000014033C9C3: mov     cr8, rax
 * 000000014033C9C7: lea     rax, [rcx-1]
 * 000000014033C9CB: mov     r14, rdx
 * 000000014033C9CE: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033C9D5: add     rax, rdx
 * 000000014033C9D8: mov     ecx, 0FFFh
 * 000000014033C9DD: or      rax, rcx
 * 000000014033C9E0: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033C9E4: lea     r13, [r14-1]
 * 000000014033C9E8: movzx   r15d, r12b
 * 000000014033C9EC: mov     rax, [rsi+460h]
 * 000000014033C9F3: xor     edx, edx
 * 000000014033C9F5: mov     rcx, r14
 * 000000014033C9F8: call    KeGuardDispatchICall
 * 000000014033C9FD: cmp     eax, 0C000022Dh
 * 000000014033CA02: jnz     short loc_14033CA2C
 * 000000014033CA04: mov     eax, 1
 * 000000014033CA09: cmp     r12b, al
 * 000000014033CA0C: ja      loc_14033CAB6
 * 000000014033CA12: movzx   r15d, r12b
 * 000000014033CA16: mov     cr8, r15
 * 000000014033CA1A: mov     al, [r14]
 * 000000014033CA1D: mov     rax, cr8
 * 000000014033CA21: mov     eax, 2
 * 000000014033CA26: mov     cr8, rax
 * 000000014033CA2A: jmp     short loc_14033C9EC
 * 000000014033CA2C: xor     r10d, r10d
 * 000000014033CA2F: test    eax, eax
 * 000000014033CA31: jns     loc_14033CAB9
 * 000000014033CA37: mov     cr8, r15
 * 000000014033CA3B: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033CA3F: mov     r8d, [r13+14h]
 * 000000014033CA43: mov     eax, [rsi+8D8h]
 * 000000014033CA49: test    eax, eax
 * 000000014033CA4B: jnz     short loc_14033CA66
 * 000000014033CA4D: mov     eax, r8d
 * 000000014033CA50: mov     ecx, ebx
 * 000000014033CA52: xor     rcx, rax
 * 000000014033CA55: mov     rax, [rsi+580h]
 * 000000014033CA5C: mov     [rax+18h], rcx
 * 000000014033CA60: mov     eax, [rsi+8D8h]
 * 000000014033CA66: mov     rcx, [r13+8]
 * 000000014033CA6A: mov     r11, 0B3B74BDEE4453415h
 * 000000014033CA74: test    eax, eax
 * 000000014033CA76: jnz     short loc_14033CAE1
 * 000000014033CA78: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033CA82: add     rax, rsi
 * 000000014033CA85: mov     [rsi+8E0h], rax
 * 000000014033CA8C: lea     rax, [r11+r13]
 * 000000014033CA90: mov     [rsi+8E8h], rax
 * 000000014033CA97: movsxd  rax, dword ptr [r13+0]
 * 000000014033CA9B: mov     [rsi+8F0h], rax
 * 000000014033CAA2: mov     eax, 1
 * 000000014033CAA7: mov     [rsi+8F8h], rcx
 * 000000014033CAAE: mov     [rsi+8D8h], eax
 * 000000014033CAB4: jmp     short loc_14033CAE1
 * 000000014033CAB6: xor     r10d, r10d
 * 000000014033CAB9: mov     r9d, 1000h
 * 000000014033CABF: add     r14, r9
 * 000000014033CAC2: add     r13, r9
 * 000000014033CAC5: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033CAC9: jnz     loc_14033C9E8
 * 000000014033CACF: mov     cr8, r15
 * 000000014033CAD3: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033CAD7: mov     r11, 0B3B74BDEE4453415h
 * 000000014033CAE1: mov     eax, [r13+20h]
 * 000000014033CAE5: mov     r14d, 1
 * 000000014033CAEB: test    r14b, al
 * 000000014033CAEE: jz      loc_14033462F
 * 000000014033CAF4: mov     rbx, [r13+18h]
 * 000000014033CAF8: mov     rax, [rsi+1F0h]
 * 000000014033CAFF: mov     rcx, rbx
 * 000000014033CB02: mov     [rbp+20F0h+var_20F0], rbx
 * 000000014033CB06: call    KeGuardDispatchICall
 * 000000014033CB0B: movzx   r12d, word ptr [rax+14h]
 * 000000014033CB10: add     r12, 18h
 * 000000014033CB14: add     r12, rax
 * 000000014033CB17: movzx   eax, word ptr [rax+6]
 * 000000014033CB1B: lea     rcx, [rax+rax*4]
 * 000000014033CB1F: lea     rax, [r12+rcx*8]
 * 000000014033CB23: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033CB27: cmp     r12, rax
 * 000000014033CB2A: jz      loc_140334DB4
 * 000000014033CB30: mov     r15d, [rsi+80Ch]
 * 000000014033CB37: xor     edx, edx
 * 000000014033CB39: test    r15d, r15d
 * 000000014033CB3C: jnz     short loc_14033CB4E
 * 000000014033CB3E: mov     dword ptr [rsi+80Ch], 1000h
 * 000000014033CB48: mov     r15d, 1000h
 * 000000014033CB4E: mov     eax, r15d
 * 000000014033CB51: cmp     rbx, [rsi+5D8h]
 * 000000014033CB58: jz      loc_14033CDBA
 * 000000014033CB5E: cmp     rbx, [rsi+5E0h]
 * 000000014033CB65: jz      loc_14033CDBA
 * 000000014033CB6B: mov     dword ptr [rbp+20F0h+var_20B8], edx
 * 000000014033CB6E: jmp     loc_14033CDC1
 * 000000014033CB73: mov     [rsi+80Ch], r10d
 * 000000014033CB7A: jmp     loc_14033CAE1
 * 000000014033CB7F: mov     r11, [r13+8]
 * 000000014033CB83: mov     r8d, [r13+10h]
 * 000000014033CB87: mov     r9, r11
 * 000000014033CB8A: add     [rsi+810h], r8d
 * 000000014033CB91: mov     rax, r11
 * 000000014033CB94: mov     r14d, [rsi+7FCh]
 * 000000014033CB9B: mov     r15, [rsi+800h]
 * 000000014033CBA2: lea     rcx, [r11+r8]
 * 000000014033CBA6: cmp     r11, rcx
 * 000000014033CBA9: jnb     short loc_14033CBBB
 * 000000014033CBAB: mov     edx, 40h ; '@'
 * 000000014033CBB0: prefetchnta byte ptr [rax]
 * 000000014033CBB3: add     rax, rdx
 * 000000014033CBB6: cmp     rax, rcx
 * 000000014033CBB9: jb      short loc_14033CBB0
 * 000000014033CBBB: mov     r10d, r8d
 * 000000014033CBBE: mov     rbx, r15
 * 000000014033CBC1: shr     r10d, 7
 * 000000014033CBC5: mov     r13d, 1
 * 000000014033CBCB: mov     r12d, 0FFFFFFFFh
 * 000000014033CBD1: test    r10d, r10d
 * 000000014033CBD4: jz      short loc_14033CC3A
 * 000000014033CBD6: mov     rsi, 7010008004002001h
 * 000000014033CBE0: mov     edx, 8
 * 000000014033CBE5: mov     rax, [r9]
 * 000000014033CBE8: mov     ecx, r14d
 * 000000014033CBEB: xor     rax, rbx
 * 000000014033CBEE: mov     rbx, [r9+8]
 * 000000014033CBF2: rol     rax, cl
 * 000000014033CBF5: add     r9, 10h
 * 000000014033CBF9: xor     rbx, rax
 * 000000014033CBFC: rol     rbx, cl
 * 000000014033CBFF: sub     rdx, r13
 * 000000014033CC02: jnz     short loc_14033CBE5
 * 000000014033CC04: mov     rcx, r9
 * 000000014033CC07: sub     rcx, r11
 * 000000014033CC0A: xor     rcx, r15
 * 000000014033CC0D: mov     rax, rcx
 * 000000014033CC10: rol     rax, 11h
 * 000000014033CC14: xor     rcx, rax
 * 000000014033CC17: mov     rax, rsi
 * 000000014033CC1A: mul     rcx
 * 000000014033CC1D: xor     eax, edx
 * 000000014033CC1F: mov     [rbp+20F0h+var_1A58], rdx
 * 000000014033CC26: xor     r14d, eax
 * 000000014033CC29: and     r14d, 3Fh
 * 000000014033CC2D: cmovz   r14d, r13d
 * 000000014033CC31: add     r10d, r12d
 * 000000014033CC34: jnz     short loc_14033CBE0
 * 000000014033CC36: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033CC3A: and     r8d, 7Fh
 * 000000014033CC3E: cmp     r8d, 8
 * 000000014033CC42: jb      short loc_14033CC61
 * 000000014033CC44: mov     edx, r8d
 * 000000014033CC47: shr     rdx, 3
 * 000000014033CC4B: xor     rbx, [r9]
 * 000000014033CC4E: mov     ecx, r14d
 * 000000014033CC51: rol     rbx, cl
 * 000000014033CC54: add     r9, 8
 * 000000014033CC58: add     r8d, 0FFFFFFF8h
 * 000000014033CC5C: sub     rdx, r13
 * 000000014033CC5F: jnz     short loc_14033CC4B
 * 000000014033CC61: xor     r10d, r10d
 * 000000014033CC64: test    r8d, r8d
 * 000000014033CC67: jz      short loc_14033CC7E
 * 000000014033CC69: movzx   eax, byte ptr [r9]
 * 000000014033CC6D: mov     ecx, r14d
 * 000000014033CC70: xor     rbx, rax
 * 000000014033CC73: add     r9, r13
 * 000000014033CC76: rol     rbx, cl
 * 000000014033CC79: add     r8d, r12d
 * 000000014033CC7C: jnz     short loc_14033CC69
 * 000000014033CC7E: mov     rax, rbx
 * 000000014033CC81: jmp     short loc_14033CC85
 * 000000014033CC83: xor     ebx, eax
 * 000000014033CC85: shr     rax, 1Fh
 * 000000014033CC89: test    rax, rax
 * 000000014033CC8C: jnz     short loc_14033CC83
 * 000000014033CC8E: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033CC92: btr     ebx, 1Fh
 * 000000014033CC96: mov     r13d, r10d
 * 000000014033CC99: cmp     ebx, [rax+14h]
 * 000000014033CC9C: jz      loc_14033CAD3
 * 000000014033CCA2: cmp     [rax], r10d
 * 000000014033CCA5: jnz     short loc_14033CCB4
 * 000000014033CCA7: cmp     [rax+18h], r10d
 * 000000014033CCAB: mov     ecx, 1
 * 000000014033CCB0: cmovnz  r13d, ecx
 * 000000014033CCB4: mov     ecx, [rax+10h]
 * 000000014033CCB7: mov     rdx, [rax+8]
 * 000000014033CCBB: test    rcx, rcx
 * 000000014033CCBE: jz      loc_14033CD77
 * 000000014033CCC4: mov     eax, [rsi+974h]
 * 000000014033CCCA: mov     r8d, 40h ; '@'
 * 000000014033CCD0: test    r8b, al
 * 000000014033CCD3: jz      loc_14033CD77
 * 000000014033CCD9: mov     r12, cr8
 * 000000014033CCDD: lea     eax, [r8-3Eh]
 * 000000014033CCE1: mov     cr8, rax
 * 000000014033CCE5: lea     rax, [rcx-1]
 * 000000014033CCE9: mov     r14, rdx
 * 000000014033CCEC: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033CCF3: add     rax, rdx
 * 000000014033CCF6: mov     ecx, 0FFFh
 * 000000014033CCFB: or      rax, rcx
 * 000000014033CCFE: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033CD02: lea     rax, [r14-1]
 * 000000014033CD06: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033CD0A: movzx   r15d, r12b
 * 000000014033CD0E: mov     rax, [rsi+460h]
 * 000000014033CD15: xor     edx, edx
 * 000000014033CD17: mov     rcx, r14
 * 000000014033CD1A: call    KeGuardDispatchICall
 * 000000014033CD1F: xor     r10d, r10d
 * 000000014033CD22: cmp     eax, 0C000022Dh
 * 000000014033CD27: jnz     short loc_14033CD50
 * 000000014033CD29: test    r13d, r13d
 * 000000014033CD2C: jnz     short loc_14033CD73
 * 000000014033CD2E: lea     eax, [r10+1]
 * 000000014033CD32: cmp     r12b, al
 * 000000014033CD35: ja      short loc_14033CD54
 * 000000014033CD37: movzx   r15d, r12b
 * 000000014033CD3B: mov     cr8, r15
 * 000000014033CD3F: mov     al, [r14]
 * 000000014033CD42: mov     rax, cr8
 * 000000014033CD46: lea     eax, [r10+2]
 * 000000014033CD4A: mov     cr8, rax
 * 000000014033CD4E: jmp     short loc_14033CD0E
 * 000000014033CD50: test    eax, eax
 * 000000014033CD52: js      short loc_14033CD73
 * 000000014033CD54: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033CD58: mov     r9d, 1000h
 * 000000014033CD5E: add     rax, r9
 * 000000014033CD61: add     r14, r9
 * 000000014033CD64: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033CD68: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033CD6C: jnz     short loc_14033CD0A
 * 000000014033CD6E: jmp     loc_14033CACF
 * 000000014033CD73: mov     cr8, r15
 * 000000014033CD77: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033CD7B: mov     eax, [rsi+8D8h]
 * 000000014033CD81: mov     edx, [r13+14h]
 * 000000014033CD85: test    eax, eax
 * 000000014033CD87: jnz     short loc_14033CD9F
 * 000000014033CD89: mov     rax, [rsi+580h]
 * 000000014033CD90: mov     ecx, ebx
 * 000000014033CD92: xor     rcx, rdx
 * 000000014033CD95: mov     [rax+18h], rcx
 * 000000014033CD99: mov     eax, [rsi+8D8h]
 * 000000014033CD9F: mov     rcx, [r13+8]
 * 000000014033CDA3: test    eax, eax
 * 000000014033CDA5: jnz     loc_14033CAD7
 * 000000014033CDAB: mov     r11, 0B3B74BDEE4453415h
 * 000000014033CDB5: jmp     loc_14033CA78
 * 000000014033CDBA: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 000000014033CDBE: mov     r15d, eax
 * 000000014033CDC1: mov     esi, dword ptr [rbp+20F0h+var_20B8]
 * 000000014033CDC4: mov     rdi, [rbp+20F0h+var_20C8]
 * 000000014033CDC8: mov     ecx, [r12+10h]
 * 000000014033CDCD: mov     eax, [r12+8]
 * 000000014033CDD2: cmp     ecx, eax
 * 000000014033CDD4: mov     r11d, [r12+0Ch]
 * 000000014033CDD9: cmovbe  ecx, eax
 * 000000014033CDDC: lea     r13d, [r11+0FFFh]
 * 000000014033CDE3: add     r13d, ecx
 * 000000014033CDE6: and     r13d, 0FFFFF000h
 * 000000014033CDED: cmp     r15d, r13d
 * 000000014033CDF0: jnb     loc_14033CF09
 * 000000014033CDF6: mov     eax, [r12+24h]
 * 000000014033CDFB: bt      eax, 19h
 * 000000014033CDFF: jb      loc_14033CF06
 * 000000014033CE05: mov     ecx, [r12]
 * 000000014033CE09: cmp     ecx, 54494E49h
 * 000000014033CE0F: jnz     short loc_14033CE20
 * 000000014033CE11: cmp     dword ptr [r12+4], 4742444Bh
 * 000000014033CE1A: jz      loc_14033CF06
 * 000000014033CE20: cmp     ecx, 45474150h
 * 000000014033CE26: jnz     short loc_14033CE5E
 * 000000014033CE28: movzx   eax, word ptr [r12+4]
 * 000000014033CE2E: mov     r8d, 7877h
 * 000000014033CE34: cmp     ax, r8w
 * 000000014033CE38: jz      loc_14033CF06
 * 000000014033CE3E: mov     r8d, 7277h
 * 000000014033CE44: cmp     ax, r8w
 * 000000014033CE48: jz      loc_14033CF06
 * 000000014033CE4E: mov     r8d, 7777h
 * 000000014033CE54: cmp     ax, r8w
 * 000000014033CE58: jz      loc_14033CF06
 * 000000014033CE5E: cmp     ecx, 41525245h
 * 000000014033CE64: jnz     short loc_14033CE77
 * 000000014033CE66: mov     eax, 4154h
 * 000000014033CE6B: cmp     [r12+4], ax
 * 000000014033CE71: jz      loc_14033CF06
 * 000000014033CE77: mov     rcx, [rbp+20F0h+var_20B0]
 * 000000014033CE7B: test    rcx, rcx
 * 000000014033CE7E: jz      short loc_14033CEBA
 * 000000014033CE80: mov     rax, [rcx+918h]
 * 000000014033CE87: mov     r8, [rcx+910h]
 * 000000014033CE8E: mov     qword ptr [rbp+20F0h+var_1D70+8], rax
 * 000000014033CE95: mov     rax, [rcx+920h]
 * 000000014033CE9C: mov     qword ptr [rbp+20F0h+var_1D60], rax
 * 000000014033CEA3: mov     rax, [rcx+928h]
 * 000000014033CEAA: mov     qword ptr [rbp+20F0h+var_1D60+8], rax
 * 000000014033CEB1: mov     qword ptr [rbp+20F0h+var_1D70], r8
 * 000000014033CEB8: jmp     short loc_14033CEDD
 * 000000014033CEBA: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 000000014033CEC1: movups  xmm1, xmmword ptr cs:off_140402D70; "INIT"
 * 000000014033CEC8: movups  [rbp+20F0h+var_1D70], xmm0
 * 000000014033CECF: mov     r8, qword ptr [rbp+20F0h+var_1D70]
 * 000000014033CED6: movups  [rbp+20F0h+var_1D60], xmm1
 * 000000014033CEDD: mov     r10d, 7
 * 000000014033CEE3: mov     r9, r12
 * 000000014033CEE6: mov     r14d, 0FFFFFFFFh
 * 000000014033CEEC: movzx   edx, byte ptr [r9]
 * 000000014033CEF0: inc     r9
 * 000000014033CEF3: movzx   eax, byte ptr [r8]
 * 000000014033CEF7: inc     r8
 * 000000014033CEFA: cmp     rdx, rax
 * 000000014033CEFD: jnz     short loc_14033CF46
 * 000000014033CEFF: add     r10d, r14d
 * 000000014033CF02: jnz     short loc_14033CEEC
 * 000000014033CF04: xor     edx, edx
 * 000000014033CF06: mov     r15d, r13d
 * 000000014033CF09: mov     r8, [rbp+20F0h+var_20B0]
 * 000000014033CF0D: add     r12, 28h ; '('
 * 000000014033CF11: cmp     r12, rdi
 * 000000014033CF14: jnz     loc_14033CDC8
 * 000000014033CF1A: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033CF1E: cmp     r12, rdi
 * 000000014033CF21: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033CF28: jnz     loc_14033D29F
 * 000000014033CF2E: cmp     r15d, r13d
 * 000000014033CF31: jb      loc_14033D29F
 * 000000014033CF37: xor     r10d, r10d
 * 000000014033CF3A: mov     [r8+80Ch], r10d
 * 000000014033CF41: jmp     loc_140334625
 * 000000014033CF46: mov     r9, qword ptr [rbp+20F0h+var_1D70+8]
 * 000000014033CF4D: mov     r8d, 8
 * 000000014033CF53: mov     r10, r12
 * 000000014033CF56: mov     rcx, [r10]
 * 000000014033CF59: add     r10, 8
 * 000000014033CF5D: mov     rax, [r9]
 * 000000014033CF60: add     r9, 8
 * 000000014033CF64: cmp     rcx, rax
 * 000000014033CF67: jnz     short loc_14033CF97
 * 000000014033CF69: add     r8d, 0FFFFFFF8h
 * 000000014033CF6D: cmp     r8d, 8
 * 000000014033CF71: jnb     short loc_14033CF56
 * 000000014033CF73: xor     edx, edx
 * 000000014033CF75: test    r8d, r8d
 * 000000014033CF78: jz      short loc_14033CF06
 * 000000014033CF7A: movzx   edx, byte ptr [r10]
 * 000000014033CF7E: inc     r10
 * 000000014033CF81: movzx   eax, byte ptr [r9]
 * 000000014033CF85: inc     r9
 * 000000014033CF88: cmp     rdx, rax
 * 000000014033CF8B: jnz     short loc_14033CF97
 * 000000014033CF8D: add     r8d, r14d
 * 000000014033CF90: jnz     short loc_14033CF7A
 * 000000014033CF92: jmp     loc_14033CF04
 * 000000014033CF97: mov     r8, qword ptr [rbp+20F0h+var_1D60]
 * 000000014033CF9E: mov     r10d, 4
 * 000000014033CFA4: mov     r9, r12
 * 000000014033CFA7: movzx   edx, byte ptr [r9]
 * 000000014033CFAB: inc     r9
 * 000000014033CFAE: movzx   eax, byte ptr [r8]
 * 000000014033CFB2: inc     r8
 * 000000014033CFB5: cmp     rdx, rax
 * 000000014033CFB8: jnz     short loc_14033CFC4
 * 000000014033CFBA: add     r10d, r14d
 * 000000014033CFBD: jnz     short loc_14033CFA7
 * 000000014033CFBF: jmp     loc_14033CF04
 * 000000014033CFC4: mov     r8, qword ptr [rbp+20F0h+var_1D60+8]
 * 000000014033CFCB: mov     r10d, 6
 * 000000014033CFD1: mov     r9, r12
 * 000000014033CFD4: movzx   edx, byte ptr [r9]
 * 000000014033CFD8: inc     r9
 * 000000014033CFDB: movzx   eax, byte ptr [r8]
 * 000000014033CFDF: inc     r8
 * 000000014033CFE2: cmp     rdx, rax
 * 000000014033CFE5: jnz     short loc_14033CFF1
 * 000000014033CFE7: add     r10d, r14d
 * 000000014033CFEA: jnz     short loc_14033CFD4
 * 000000014033CFEC: jmp     loc_14033CF04
 * 000000014033CFF1: mov     eax, [r12+24h]
 * 000000014033CFF6: xor     edx, edx
 * 000000014033CFF8: test    eax, eax
 * 000000014033CFFA: js      loc_14033CF06
 * 000000014033D000: bt      eax, 1Dh
 * 000000014033D004: jnb     loc_14033CF06
 * 000000014033D00A: lea     r9d, [rdx+1]
 * 000000014033D00E: mov     r14d, r9d
 * 000000014033D011: test    esi, esi
 * 000000014033D013: jz      short loc_14033D029
 * 000000014033D015: mov     eax, [r12]
 * 000000014033D019: cmp     eax, 2E656461h
 * 000000014033D01E: jz      short loc_14033D029
 * 000000014033D020: cmp     eax, 45474150h
 * 000000014033D025: cmovnz  r14d, edx
 * 000000014033D029: mov     r8, [rbp+20F0h+var_20B0]
 * 000000014033D02D: cmp     r15d, r11d
 * 000000014033D030: cmovnb  r11d, r15d
 * 000000014033D034: mov     r15d, r11d
 * 000000014033D037: mov     eax, r15d
 * 000000014033D03A: add     rbx, rax
 * 000000014033D03D: test    byte ptr [r8+863h], 4
 * 000000014033D045: jz      short loc_14033D0AC
 * 000000014033D047: mov     ecx, 0FFFFFFFFh
 * 000000014033D04C: mov     eax, ecx
 * 000000014033D04E: xbegin  $+6
 * 000000014033D054: cmp     eax, ecx
 * 000000014033D056: jnz     short loc_14033D05F
 * 000000014033D058: mov     al, [rbx]
 * 000000014033D05A: xend
 * 000000014033D05D: jmp     short loc_14033D093
 * 000000014033D05F: rdtsc
 * 000000014033D061: shl     rdx, 20h
 * 000000014033D065: or      rax, rdx
 * 000000014033D068: mov     rcx, rax
 * 000000014033D06B: ror     rax, 3
 * 000000014033D06F: xor     rcx, rax
 * 000000014033D072: mov     rax, 7010008004002001h
 * 000000014033D07C: mul     rcx
 * 000000014033D07F: mov     [rbp+20F0h+var_1A50], rdx
 * 000000014033D086: xor     dl, al
 * 000000014033D088: mov     eax, 0Fh
 * 000000014033D08D: test    al, dl
 * 000000014033D08F: jz      short loc_14033D0AA
 * 000000014033D091: xor     edx, edx
 * 000000014033D093: add     [r8+824h], r9d
 * 000000014033D09A: add     dword ptr [r8+810h], 100h
 * 000000014033D0A5: jmp     loc_14033D265
 * 000000014033D0AA: xor     edx, edx
 * 000000014033D0AC: test    r14d, r14d
 * 000000014033D0AF: jz      loc_14033D13E
 * 000000014033D0B5: mov     rax, [r8+448h]
 * 000000014033D0BC: lea     rcx, [rbp+20F0h+var_1B88]
 * 000000014033D0C3: mov     rdx, rbx
 * 000000014033D0C6: call    KeGuardDispatchICall
 * 000000014033D0CB: xor     edx, edx
 * 000000014033D0CD: test    eax, eax
 * 000000014033D0CF: jns     loc_14033D1BA
 * 000000014033D0D5: mov     r8, [rbp+20F0h+var_20B0]
 * 000000014033D0D9: lea     r9d, [rdx+1]
 * 000000014033D0DD: cmp     eax, 0C0000005h
 * 000000014033D0E2: jnz     loc_14033D265
 * 000000014033D0E8: cmp     [r8+8D8h], edx
 * 000000014033D0EF: jnz     loc_14033D265
 * 000000014033D0F5: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033D0F9: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D103: add     rax, r8
 * 000000014033D106: mov     [r8+8E0h], rax
 * 000000014033D10D: mov     rax, 0B3B74BDEE4453415h
 * 000000014033D117: add     rax, rcx
 * 000000014033D11A: mov     [r8+8E8h], rax
 * 000000014033D121: movsxd  rax, dword ptr [rcx]
 * 000000014033D124: mov     [r8+8F0h], rax
 * 000000014033D12B: mov     [r8+8F8h], rbx
 * 000000014033D132: mov     [r8+8D8h], r9d
 * 000000014033D139: jmp     loc_14033D265
 * 000000014033D13E: mov     r9d, 0FFFh
 * 000000014033D144: mov     [rbp+20F0h+var_1B88], rdx
 * 000000014033D14B: movzx   eax, bx
 * 000000014033D14E: mov     [rbp+20F0h+var_1B7E], dx
 * 000000014033D155: and     ax, r9w
 * 000000014033D159: mov     [rbp+20F0h+var_1B60], 1000h
 * 000000014033D163: mov     ecx, 1FFFh
 * 000000014033D168: add     ax, cx
 * 000000014033D16B: mov     rcx, rbx
 * 000000014033D16E: shr     ax, 0Ch
 * 000000014033D172: add     ax, 6
 * 000000014033D176: shl     ax, 3
 * 000000014033D17A: mov     [rbp+20F0h+var_1B80], ax
 * 000000014033D181: mov     rax, rbx
 * 000000014033D184: and     rax, 0FFFFFFFFFFFFF000h
 * 000000014033D18A: mov     [rbp+20F0h+var_1B68], rax
 * 000000014033D191: mov     eax, ebx
 * 000000014033D193: and     eax, r9d
 * 000000014033D196: mov     [rbp+20F0h+var_1B5C], eax
 * 000000014033D19C: mov     rax, [r8+450h]
 * 000000014033D1A3: call    KeGuardDispatchICall
 * 000000014033D1A8: mov     [rbp+20F0h+var_1A48], rax
 * 000000014033D1AF: shr     rax, 0Ch
 * 000000014033D1B3: mov     [rbp+20F0h+var_1B58], rax
 * 000000014033D1BA: mov     rcx, [rbp+20F0h+var_20B0]
 * 000000014033D1BE: mov     eax, 1
 * 000000014033D1C3: add     [rcx+828h], eax
 * 000000014033D1C9: mov     eax, [rbp+20F0h+var_1B5C]
 * 000000014033D1CF: add     rax, [rbp+20F0h+var_1B68]
 * 000000014033D1D6: mov     [rcx+0A38h], rax
 * 000000014033D1DD: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033D1E1: mov     [rcx+0A30h], rax
 * 000000014033D1E8: mov     rbx, cr8
 * 000000014033D1EC: mov     eax, 2
 * 000000014033D1F1: mov     cr8, rax
 * 000000014033D1F5: mov     rax, [rcx+5E8h]
 * 000000014033D1FC: xor     r8d, r8d
 * 000000014033D1FF: add     rcx, 0A10h
 * 000000014033D206: mov     edx, [rax]
 * 000000014033D208: call    RtlInitMinimalBarrier
 * 000000014033D20D: mov     rdx, [rbp+20F0h+var_20B0]
 * 000000014033D211: mov     ecx, [rdx+7DCh]
 * 000000014033D217: mov     rax, [rdx+440h]
 * 000000014033D21E: add     rcx, rdx
 * 000000014033D221: call    KeGuardDispatchICall
 * 000000014033D226: mov     r8, rax
 * 000000014033D229: mov     [rbp+20F0h+var_20B0], rax
 * 000000014033D22D: movzx   eax, bl
 * 000000014033D230: mov     cr8, rax
 * 000000014033D234: xor     edx, edx
 * 000000014033D236: test    r14d, r14d
 * 000000014033D239: jz      short loc_14033D254
 * 000000014033D23B: mov     rax, [r8+458h]
 * 000000014033D242: lea     rcx, [rbp+20F0h+var_1B88]
 * 000000014033D249: call    KeGuardDispatchICall
 * 000000014033D24E: mov     r8, [rbp+20F0h+var_20B0]
 * 000000014033D252: xor     edx, edx
 * 000000014033D254: add     dword ptr [r8+810h], 14000h
 * 000000014033D25F: mov     r9d, 1
 * 000000014033D265: mov     eax, [r8+810h]
 * 000000014033D26C: add     r15d, 1000h
 * 000000014033D273: cmp     r15d, r13d
 * 000000014033D276: jnb     short loc_14033D289
 * 000000014033D278: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033D27C: cmp     eax, [r8+814h]
 * 000000014033D283: jl      loc_14033D037
 * 000000014033D289: cmp     eax, [r8+814h]
 * 000000014033D290: jge     loc_14033CF1A
 * 000000014033D296: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033D29A: jmp     loc_14033CF0D
 * 000000014033D29F: mov     [r8+80Ch], r15d
 * 000000014033D2A6: jmp     loc_140334DB4
 * 000000014033D2AB: mov     r8d, 0Ch
 * 000000014033D2B1: xor     eax, eax
 * 000000014033D2B3: cmp     r14d, r8d
 * 000000014033D2B6: jnz     loc_14033D5B9
 * 000000014033D2BC: cmp     [rsi+960h], rax
 * 000000014033D2C3: jz      loc_140334312
 * 000000014033D2C9: mov     edx, [rsi+974h]
 * 000000014033D2CF: mov     ecx, edx
 * 000000014033D2D1: cmp     [rsi+80Ch], eax
 * 000000014033D2D7: jnz     short loc_14033D2EB
 * 000000014033D2D9: shl     ecx, 3
 * 000000014033D2DC: xor     ecx, edx
 * 000000014033D2DE: and     ecx, 20h
 * 000000014033D2E1: xor     ecx, edx
 * 000000014033D2E3: mov     [rsi+974h], ecx
 * 000000014033D2E9: jmp     short loc_14033D2FC
 * 000000014033D2EB: mov     eax, edx
 * 000000014033D2ED: shr     eax, 3
 * 000000014033D2F0: xor     eax, edx
 * 000000014033D2F2: test    al, 4
 * 000000014033D2F4: jnz     loc_14033441D
 * 000000014033D2FA: xor     eax, eax
 * 000000014033D2FC: test    cl, 4
 * 000000014033D2FF: jz      loc_14033D5B4
 * 000000014033D305: mov     r15, [r13+20h]
 * 000000014033D309: xor     r10d, r10d
 * 000000014033D30C: mov     eax, [r13+28h]
 * 000000014033D310: test    r15, r15
 * 000000014033D313: jz      short loc_14033D33B
 * 000000014033D315: mov     ebx, [rsi+80Ch]
 * 000000014033D31B: mov     edx, 0FFFh
 * 000000014033D320: sub     eax, ebx
 * 000000014033D322: mov     r14d, eax
 * 000000014033D325: add     r14, rdx
 * 000000014033D328: lea     ecx, [r15+rbx]
 * 000000014033D32C: and     rcx, rdx
 * 000000014033D32F: add     r14, rcx
 * 000000014033D332: shr     r14, 0Ch
 * 000000014033D336: add     rbx, r15
 * 000000014033D339: jmp     short loc_14033D358
 * 000000014033D33B: mov     rbx, [r13+8]
 * 000000014033D33F: mov     eax, 0FFFh
 * 000000014033D344: mov     r14d, [r13+10h]
 * 000000014033D348: mov     rcx, rbx
 * 000000014033D34B: and     rcx, rax
 * 000000014033D34E: add     r14, rax
 * 000000014033D351: add     r14, rcx
 * 000000014033D354: shr     r14, 0Ch
 * 000000014033D358: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033D35F: test    r14, r14
 * 000000014033D362: jz      loc_14033D40B
 * 000000014033D368: mov     edi, 1
 * 000000014033D36D: mov     rax, [rsi+2A8h]
 * 000000014033D374: mov     rcx, rbx
 * 000000014033D377: sub     r14, rdi
 * 000000014033D37A: call    KeGuardDispatchICall
 * 000000014033D37F: xor     r10d, r10d
 * 000000014033D382: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D38C: test    al, al
 * 000000014033D38E: jz      short loc_14033D3D0
 * 000000014033D390: cmp     [rsi+8D8h], r10d
 * 000000014033D397: jnz     short loc_14033D3D0
 * 000000014033D399: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D3A3: add     rax, rsi
 * 000000014033D3A6: mov     [rsi+8E0h], rax
 * 000000014033D3AD: lea     rax, [r11+r13]
 * 000000014033D3B1: mov     [rsi+8E8h], rax
 * 000000014033D3B8: movsxd  rax, dword ptr [r13+0]
 * 000000014033D3BC: mov     [rsi+8F0h], rax
 * 000000014033D3C3: mov     [rsi+8F8h], rbx
 * 000000014033D3CA: mov     [rsi+8D8h], edi
 * 000000014033D3D0: add     dword ptr [rsi+810h], 100h
 * 000000014033D3DA: mov     r8d, 1000h
 * 000000014033D3E0: add     rbx, r8
 * 000000014033D3E3: test    r15, r15
 * 000000014033D3E6: jz      short loc_14033D3FB
 * 000000014033D3E8: add     [rsi+80Ch], r8d
 * 000000014033D3EF: mov     eax, [r12]
 * 000000014033D3F3: cmp     [rsi+810h], eax
 * 000000014033D3F9: jge     short loc_14033D404
 * 000000014033D3FB: test    r14, r14
 * 000000014033D3FE: jnz     loc_14033D36D
 * 000000014033D404: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033D40B: test    r15, r15
 * 000000014033D40E: jz      short loc_14033D41C
 * 000000014033D410: test    r14, r14
 * 000000014033D413: jnz     short loc_14033D41C
 * 000000014033D415: mov     [rsi+80Ch], r10d
 * 000000014033D41C: cmp     [rsi+80Ch], r10d
 * 000000014033D423: jnz     loc_14033462F
 * 000000014033D429: mov     rcx, [rsi+530h]
 * 000000014033D430: mov     r15, cr8
 * 000000014033D434: mov     eax, 0Fh
 * 000000014033D439: mov     cr8, rax
 * 000000014033D43D: mov     rax, [rsi+148h]
 * 000000014033D444: call    KeGuardDispatchICall
 * 000000014033D449: mov     rax, [rsi+600h]
 * 000000014033D450: mov     r14, [rbp+20F0h+var_20D0]
 * 000000014033D454: mov     rcx, [rax]
 * 000000014033D457: mov     eax, [rcx]
 * 000000014033D459: lea     rbx, [rcx+10h]
 * 000000014033D45D: mov     r12b, [rcx+0Ch]
 * 000000014033D461: lea     rcx, [rax+rax*2]
 * 000000014033D465: lea     r13, [rbx+rcx*8]
 * 000000014033D469: mov     r8d, 18h
 * 000000014033D46F: lea     r9, [r14+18h]
 * 000000014033D473: mov     r10, rbx
 * 000000014033D476: mov     rcx, [r10]
 * 000000014033D479: add     r10, 8
 * 000000014033D47D: mov     rax, [r9]
 * 000000014033D480: add     r9, 8
 * 000000014033D484: cmp     rcx, rax
 * 000000014033D487: jnz     short loc_14033D4BD
 * 000000014033D489: add     r8d, 0FFFFFFF8h
 * 000000014033D48D: cmp     r8d, 8
 * 000000014033D491: jnb     short loc_14033D476
 * 000000014033D493: test    r8d, r8d
 * 000000014033D496: jz      short loc_14033D4C6
 * 000000014033D498: mov     r11d, 1
 * 000000014033D49E: movzx   edx, byte ptr [r10]
 * 000000014033D4A2: add     r10, r11
 * 000000014033D4A5: movzx   eax, byte ptr [r9]
 * 000000014033D4A9: add     r9, r11
 * 000000014033D4AC: cmp     rdx, rax
 * 000000014033D4AF: jnz     short loc_14033D4BD
 * 000000014033D4B1: mov     eax, 0FFFFFFFFh
 * 000000014033D4B6: add     r8d, eax
 * 000000014033D4B9: jz      short loc_14033D4C6
 * 000000014033D4BB: jmp     short loc_14033D49E
 * 000000014033D4BD: add     rbx, 18h
 * 000000014033D4C1: cmp     rbx, r13
 * 000000014033D4C4: jb      short loc_14033D469
 * 000000014033D4C6: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033D4CA: mov     rcx, [rsi+530h]
 * 000000014033D4D1: mov     rax, [rsi+188h]
 * 000000014033D4D8: call    KeGuardDispatchICall
 * 000000014033D4DD: movzx   eax, r15b
 * 000000014033D4E1: mov     cr8, rax
 * 000000014033D4E5: xor     r10d, r10d
 * 000000014033D4E8: lea     edx, [r10+1]
 * 000000014033D4EC: test    r12b, r12b
 * 000000014033D4EF: jz      short loc_14033D555
 * 000000014033D4F1: mov     eax, [rsi+974h]
 * 000000014033D4F7: lea     ecx, [rdx+0Fh]
 * 000000014033D4FA: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D504: test    cl, al
 * 000000014033D506: jz      short loc_14033D54B
 * 000000014033D508: cmp     [rsi+8D8h], r10d
 * 000000014033D50F: jnz     short loc_14033D54B
 * 000000014033D511: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033D515: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D51F: add     rax, rsi
 * 000000014033D522: mov     [rsi+8E0h], rax
 * 000000014033D529: lea     rax, [rcx+r11]
 * 000000014033D52D: mov     [rsi+8E8h], rax
 * 000000014033D534: movsxd  rax, dword ptr [rcx]
 * 000000014033D537: mov     [rsi+8F0h], rax
 * 000000014033D53E: mov     [rsi+8F8h], rdx
 * 000000014033D545: mov     [rsi+8D8h], edx
 * 000000014033D54B: cmp     [r14+18h], rdx
 * 000000014033D54F: jz      loc_14033462F
 * 000000014033D555: cmp     rbx, r13
 * 000000014033D558: jnz     loc_140334625
 * 000000014033D55E: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D568: mov     r14d, 8000h
 * 000000014033D56E: cmp     [rsi+8D8h], r10d
 * 000000014033D575: jnz     loc_140334635
 * 000000014033D57B: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033D57F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D589: add     rax, rsi
 * 000000014033D58C: mov     [rsi+8E0h], rax
 * 000000014033D593: lea     rax, [rcx+r11]
 * 000000014033D597: mov     [rsi+8E8h], rax
 * 000000014033D59E: movsxd  rax, dword ptr [rcx]
 * 000000014033D5A1: mov     [rsi+8F0h], rax
 * 000000014033D5A8: mov     [rsi+8F8h], rbx
 * 000000014033D5AF: jmp     loc_14033E52C
 * 000000014033D5B4: mov     edx, 1
 * 000000014033D5B9: cmp     [rsi+80Ch], eax
 * 000000014033D5BF: jnz     short loc_14033D5D9
 * 000000014033D5C1: cmp     r14d, r8d
 * 000000014033D5C4: jnz     loc_14033DACC
 * 000000014033D5CA: cmp     [rsi+960h], rax
 * 000000014033D5D1: jnz     short loc_14033D5E1
 * 000000014033D5D3: mov     [rsi+80Ch], eax
 * 000000014033D5D9: xor     r10d, r10d
 * 000000014033D5DC: jmp     loc_14033D934
 * 000000014033D5E1: mov     eax, [rsi+974h]
 * 000000014033D5E7: mov     ecx, eax
 * 000000014033D5E9: shl     ecx, 3
 * 000000014033D5EC: xor     ecx, eax
 * 000000014033D5EE: and     ecx, 20h
 * 000000014033D5F1: xor     ecx, eax
 * 000000014033D5F3: mov     [rsi+974h], ecx
 * 000000014033D5F9: test    cl, 4
 * 000000014033D5FC: jz      loc_14033D6BA
 * 000000014033D602: mov     rcx, [r13+8]
 * 000000014033D606: mov     r14d, 0FFFh
 * 000000014033D60C: mov     eax, [r13+10h]
 * 000000014033D610: and     r14, rcx
 * 000000014033D613: add     r14, 0FFFh
 * 000000014033D61A: mov     rbx, rcx
 * 000000014033D61D: add     r14, rax
 * 000000014033D620: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033D627: shr     r14, 0Ch
 * 000000014033D62B: xor     r10d, r10d
 * 000000014033D62E: test    r14, r14
 * 000000014033D631: jz      loc_14033D934
 * 000000014033D637: mov     rdi, 0A3A03F5891C8B4E8h
 * 000000014033D641: mov     rax, [rsi+2A8h]
 * 000000014033D648: mov     rcx, rbx
 * 000000014033D64B: sub     r14, rdx
 * 000000014033D64E: call    KeGuardDispatchICall
 * 000000014033D653: xor     r10d, r10d
 * 000000014033D656: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D660: lea     edx, [r10+1]
 * 000000014033D664: test    al, al
 * 000000014033D666: jz      short loc_14033D69F
 * 000000014033D668: cmp     [rsi+8D8h], r10d
 * 000000014033D66F: jnz     short loc_14033D69F
 * 000000014033D671: lea     rax, [rsi+rdi]
 * 000000014033D675: mov     [rsi+8E0h], rax
 * 000000014033D67C: lea     rax, [r11+r13]
 * 000000014033D680: mov     [rsi+8E8h], rax
 * 000000014033D687: movsxd  rax, dword ptr [r13+0]
 * 000000014033D68B: mov     [rsi+8F0h], rax
 * 000000014033D692: mov     [rsi+8F8h], rbx
 * 000000014033D699: mov     [rsi+8D8h], edx
 * 000000014033D69F: add     dword ptr [rsi+810h], 100h
 * 000000014033D6A9: add     rbx, 1000h
 * 000000014033D6B0: test    r14, r14
 * 000000014033D6B3: jnz     short loc_14033D641
 * 000000014033D6B5: jmp     loc_14033D934
 * 000000014033D6BA: mov     r11, [r13+8]
 * 000000014033D6BE: mov     r8d, [r13+10h]
 * 000000014033D6C2: mov     r9, r11
 * 000000014033D6C5: add     [rsi+810h], r8d
 * 000000014033D6CC: mov     rax, r11
 * 000000014033D6CF: mov     r14d, [rsi+7FCh]
 * 000000014033D6D6: mov     r15, [rsi+800h]
 * 000000014033D6DD: lea     rcx, [r11+r8]
 * 000000014033D6E1: cmp     r11, rcx
 * 000000014033D6E4: jnb     short loc_14033D6F7
 * 000000014033D6E6: mov     r10d, 40h ; '@'
 * 000000014033D6EC: prefetchnta byte ptr [rax]
 * 000000014033D6EF: add     rax, r10
 * 000000014033D6F2: cmp     rax, rcx
 * 000000014033D6F5: jb      short loc_14033D6EC
 * 000000014033D6F7: mov     r10d, r8d
 * 000000014033D6FA: mov     rbx, r15
 * 000000014033D6FD: shr     r10d, 7
 * 000000014033D701: mov     r12d, 0FFFFFFFFh
 * 000000014033D707: test    r10d, r10d
 * 000000014033D70A: jz      short loc_14033D776
 * 000000014033D70C: mov     rdi, 7010008004002001h
 * 000000014033D716: mov     edx, 8
 * 000000014033D71B: lea     esi, [rdx-7]
 * 000000014033D71E: mov     rax, [r9]
 * 000000014033D721: mov     ecx, r14d
 * 000000014033D724: xor     rax, rbx
 * 000000014033D727: mov     rbx, [r9+8]
 * 000000014033D72B: rol     rax, cl
 * 000000014033D72E: add     r9, 10h
 * 000000014033D732: xor     rbx, rax
 * 000000014033D735: rol     rbx, cl
 * 000000014033D738: sub     rdx, rsi
 * 000000014033D73B: jnz     short loc_14033D71E
 * 000000014033D73D: mov     rcx, r9
 * 000000014033D740: sub     rcx, r11
 * 000000014033D743: xor     rcx, r15
 * 000000014033D746: mov     rax, rcx
 * 000000014033D749: rol     rax, 11h
 * 000000014033D74D: xor     rcx, rax
 * 000000014033D750: mov     rax, rdi
 * 000000014033D753: mul     rcx
 * 000000014033D756: xor     eax, edx
 * 000000014033D758: mov     [rbp+20F0h+var_1A40], rdx
 * 000000014033D75F: xor     r14d, eax
 * 000000014033D762: mov     rdx, rsi
 * 000000014033D765: and     r14d, 3Fh
 * 000000014033D769: cmovz   r14d, edx
 * 000000014033D76D: add     r10d, r12d
 * 000000014033D770: jnz     short loc_14033D716
 * 000000014033D772: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033D776: and     r8d, 7Fh
 * 000000014033D77A: cmp     r8d, 8
 * 000000014033D77E: jb      short loc_14033D7AB
 * 000000014033D780: mov     edx, r8d
 * 000000014033D783: mov     esi, 1
 * 000000014033D788: shr     rdx, 3
 * 000000014033D78C: xor     rbx, [r9]
 * 000000014033D78F: mov     ecx, r14d
 * 000000014033D792: rol     rbx, cl
 * 000000014033D795: add     r9, 8
 * 000000014033D799: add     r8d, 0FFFFFFF8h
 * 000000014033D79D: sub     rdx, rsi
 * 000000014033D7A0: jnz     short loc_14033D78C
 * 000000014033D7A2: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033D7A6: mov     edx, 1
 * 000000014033D7AB: xor     r10d, r10d
 * 000000014033D7AE: test    r8d, r8d
 * 000000014033D7B1: jz      short loc_14033D7C8
 * 000000014033D7B3: movzx   eax, byte ptr [r9]
 * 000000014033D7B7: mov     ecx, r14d
 * 000000014033D7BA: xor     rbx, rax
 * 000000014033D7BD: add     r9, rdx
 * 000000014033D7C0: rol     rbx, cl
 * 000000014033D7C3: add     r8d, r12d
 * 000000014033D7C6: jnz     short loc_14033D7B3
 * 000000014033D7C8: mov     rax, rbx
 * 000000014033D7CB: jmp     short loc_14033D7CF
 * 000000014033D7CD: xor     ebx, eax
 * 000000014033D7CF: shr     rax, 1Fh
 * 000000014033D7D3: test    rax, rax
 * 000000014033D7D6: jnz     short loc_14033D7CD
 * 000000014033D7D8: mov     r8d, [r13+14h]
 * 000000014033D7DC: btr     ebx, 1Fh
 * 000000014033D7E0: cmp     ebx, r8d
 * 000000014033D7E3: jz      loc_14033D92A
 * 000000014033D7E9: mov     ecx, [r13+10h]
 * 000000014033D7ED: mov     rdx, [r13+8]
 * 000000014033D7F1: test    rcx, rcx
 * 000000014033D7F4: jz      loc_14033D897
 * 000000014033D7FA: mov     eax, [rsi+974h]
 * 000000014033D800: mov     r9d, 40h ; '@'
 * 000000014033D806: test    r9b, al
 * 000000014033D809: jz      loc_14033D897
 * 000000014033D80F: mov     r12, cr8
 * 000000014033D813: lea     eax, [r9-3Eh]
 * 000000014033D817: mov     cr8, rax
 * 000000014033D81B: lea     rax, [rcx-1]
 * 000000014033D81F: mov     r14, rdx
 * 000000014033D822: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033D829: add     rax, rdx
 * 000000014033D82C: mov     ecx, 0FFFh
 * 000000014033D831: or      rax, rcx
 * 000000014033D834: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033D838: lea     r13, [r14-1]
 * 000000014033D83C: movzx   r15d, r12b
 * 000000014033D840: mov     rax, [rsi+460h]
 * 000000014033D847: xor     edx, edx
 * 000000014033D849: mov     rcx, r14
 * 000000014033D84C: call    KeGuardDispatchICall
 * 000000014033D851: cmp     eax, 0C000022Dh
 * 000000014033D856: jnz     short loc_14033D880
 * 000000014033D858: mov     eax, 1
 * 000000014033D85D: cmp     r12b, al
 * 000000014033D860: ja      loc_14033D90A
 * 000000014033D866: movzx   r15d, r12b
 * 000000014033D86A: mov     cr8, r15
 * 000000014033D86E: mov     al, [r14]
 * 000000014033D871: mov     rax, cr8
 * 000000014033D875: mov     eax, 2
 * 000000014033D87A: mov     cr8, rax
 * 000000014033D87E: jmp     short loc_14033D840
 * 000000014033D880: xor     r10d, r10d
 * 000000014033D883: test    eax, eax
 * 000000014033D885: jns     loc_14033D90D
 * 000000014033D88B: mov     cr8, r15
 * 000000014033D88F: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033D893: mov     r8d, [r13+14h]
 * 000000014033D897: mov     eax, [rsi+8D8h]
 * 000000014033D89D: test    eax, eax
 * 000000014033D89F: jnz     short loc_14033D8BA
 * 000000014033D8A1: mov     eax, ebx
 * 000000014033D8A3: mov     ecx, r8d
 * 000000014033D8A6: xor     rcx, rax
 * 000000014033D8A9: mov     rax, [rsi+580h]
 * 000000014033D8B0: mov     [rax+18h], rcx
 * 000000014033D8B4: mov     eax, [rsi+8D8h]
 * 000000014033D8BA: mov     rcx, [r13+8]
 * 000000014033D8BE: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D8C8: test    eax, eax
 * 000000014033D8CA: jnz     short loc_14033D934
 * 000000014033D8CC: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D8D6: add     rax, rsi
 * 000000014033D8D9: mov     [rsi+8E0h], rax
 * 000000014033D8E0: lea     rax, [r11+r13]
 * 000000014033D8E4: mov     [rsi+8E8h], rax
 * 000000014033D8EB: movsxd  rax, dword ptr [r13+0]
 * 000000014033D8EF: mov     [rsi+8F0h], rax
 * 000000014033D8F6: mov     eax, 1
 * 000000014033D8FB: mov     [rsi+8F8h], rcx
 * 000000014033D902: mov     [rsi+8D8h], eax
 * 000000014033D908: jmp     short loc_14033D934
 * 000000014033D90A: xor     r10d, r10d
 * 000000014033D90D: mov     eax, 1000h
 * 000000014033D912: add     r14, rax
 * 000000014033D915: add     r13, rax
 * 000000014033D918: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033D91C: jnz     loc_14033D83C
 * 000000014033D922: mov     cr8, r15
 * 000000014033D926: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033D92A: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D934: mov     r8d, [rsi+80Ch]
 * 000000014033D93B: mov     r9, [r13+8]
 * 000000014033D93F: mov     ecx, [r13+10h]
 * 000000014033D943: mov     edi, dword ptr [rbp+20F0h+var_20B8]
 * 000000014033D946: lea     rax, [r8+r8*2]
 * 000000014033D94A: mov     [rbp+20F0h+var_2030], r9
 * 000000014033D951: lea     r14, [r9+rax*4]
 * 000000014033D955: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014033D95F: mul     rcx
 * 000000014033D962: lea     r12, ds:30h[r8*4]
 * 000000014033D96A: mov     [rbp+20F0h+var_20A0], r14
 * 000000014033D96E: shr     rdx, 3
 * 000000014033D972: add     r12, r13
 * 000000014033D975: mov     [rbp+20F0h+var_2080], r12
 * 000000014033D979: lea     rax, [rdx+rdx*2]
 * 000000014033D97D: lea     rcx, [r9+rax*4]
 * 000000014033D981: mov     [rbp+20F0h+var_20D8], rcx
 * 000000014033D985: mov     r8, rcx
 * 000000014033D988: cmp     [r12], r10d
 * 000000014033D98C: jl      loc_14033E13B
 * 000000014033D992: mov     eax, [r14]
 * 000000014033D995: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033D999: mov     r13d, eax
 * 000000014033D99C: mov     r15d, [r14+4]
 * 000000014033D9A0: sub     r15d, eax
 * 000000014033D9A3: add     r13, [rcx+20h]
 * 000000014033D9A7: mov     [rbp+20F0h+var_20C8], r13
 * 000000014033D9AB: cmp     edi, 2Bh ; '+'
 * 000000014033D9AE: jz      loc_14033DD28
 * 000000014033D9B4: add     [rsi+810h], r15d
 * 000000014033D9BB: mov     r9, r13
 * 000000014033D9BE: mov     r10d, [rsi+7FCh]
 * 000000014033D9C5: mov     rax, r13
 * 000000014033D9C8: mov     r11, [rsi+800h]
 * 000000014033D9CF: mov     ecx, r15d
 * 000000014033D9D2: add     rcx, r13
 * 000000014033D9D5: cmp     r13, rcx
 * 000000014033D9D8: jnb     short loc_14033D9EA
 * 000000014033D9DA: mov     edx, 40h ; '@'
 * 000000014033D9DF: prefetchnta byte ptr [rax]
 * 000000014033D9E2: add     rax, rdx
 * 000000014033D9E5: cmp     rax, rcx
 * 000000014033D9E8: jb      short loc_14033D9DF
 * 000000014033D9EA: mov     r8d, r15d
 * 000000014033D9ED: mov     rbx, r11
 * 000000014033D9F0: shr     r8d, 7
 * 000000014033D9F4: test    r8d, r8d
 * 000000014033D9F7: jz      short loc_14033DA6D
 * 000000014033D9F9: mov     rsi, 7010008004002001h
 * 000000014033DA03: mov     edx, 8
 * 000000014033DA08: lea     r12d, [rdx-7]
 * 000000014033DA0C: mov     rax, [r9]
 * 000000014033DA0F: mov     ecx, r10d
 * 000000014033DA12: xor     rax, rbx
 * 000000014033DA15: mov     rbx, [r9+8]
 * 000000014033DA19: rol     rax, cl
 * 000000014033DA1C: add     r9, 10h
 * 000000014033DA20: xor     rbx, rax
 * 000000014033DA23: rol     rbx, cl
 * 000000014033DA26: sub     rdx, r12
 * 000000014033DA29: jnz     short loc_14033DA0C
 * 000000014033DA2B: mov     rcx, r9
 * 000000014033DA2E: sub     rcx, r13
 * 000000014033DA31: xor     rcx, r11
 * 000000014033DA34: mov     rax, rcx
 * 000000014033DA37: rol     rax, 11h
 * 000000014033DA3B: xor     rcx, rax
 * 000000014033DA3E: mov     rax, rsi
 * 000000014033DA41: mul     rcx
 * 000000014033DA44: xor     eax, edx
 * 000000014033DA46: mov     [rbp+20F0h+var_1A30], rdx
 * 000000014033DA4D: xor     r10d, eax
 * 000000014033DA50: mov     rax, r12
 * 000000014033DA53: and     r10d, 3Fh
 * 000000014033DA57: cmovz   r10d, eax
 * 000000014033DA5B: mov     eax, 0FFFFFFFFh
 * 000000014033DA60: add     r8d, eax
 * 000000014033DA63: jnz     short loc_14033DA03
 * 000000014033DA65: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033DA69: mov     r12, [rbp+20F0h+var_2080]
 * 000000014033DA6D: mov     edx, r15d
 * 000000014033DA70: mov     r11d, 1
 * 000000014033DA76: and     edx, 7Fh
 * 000000014033DA79: cmp     edx, 8
 * 000000014033DA7C: jb      short loc_14033DA9A
 * 000000014033DA7E: mov     r8d, edx
 * 000000014033DA81: shr     r8, 3
 * 000000014033DA85: xor     rbx, [r9]
 * 000000014033DA88: mov     ecx, r10d
 * 000000014033DA8B: rol     rbx, cl
 * 000000014033DA8E: add     r9, 8
 * 000000014033DA92: add     edx, 0FFFFFFF8h
 * 000000014033DA95: sub     r8, r11
 * 000000014033DA98: jnz     short loc_14033DA85
 * 000000014033DA9A: test    edx, edx
 * 000000014033DA9C: jz      short loc_14033DABD
 * 000000014033DA9E: mov     r12d, 0FFFFFFFFh
 * 000000014033DAA4: movzx   eax, byte ptr [r9]
 * 000000014033DAA8: mov     ecx, r10d
 * 000000014033DAAB: xor     rbx, rax
 * 000000014033DAAE: add     r9, r11
 * 000000014033DAB1: rol     rbx, cl
 * 000000014033DAB4: add     edx, r12d
 * 000000014033DAB7: jnz     short loc_14033DAA4
 * 000000014033DAB9: mov     r12, [rbp+20F0h+var_2080]
 * 000000014033DABD: mov     rax, rbx
 * 000000014033DAC0: shr     rax, 1Fh
 * 000000014033DAC4: xor     r10d, r10d
 * 000000014033DAC7: jmp     loc_14033DD16
 * 000000014033DACC: mov     r11, [r13+8]
 * 000000014033DAD0: mov     r8d, [r13+10h]
 * 000000014033DAD4: mov     r9, r11
 * 000000014033DAD7: add     [rsi+810h], r8d
 * 000000014033DADE: mov     rax, r11
 * 000000014033DAE1: mov     r14d, [rsi+7FCh]
 * 000000014033DAE8: mov     r15, [rsi+800h]
 * 000000014033DAEF: lea     rcx, [r11+r8]
 * 000000014033DAF3: cmp     r11, rcx
 * 000000014033DAF6: jnb     short loc_14033DB09
 * 000000014033DAF8: mov     r10d, 40h ; '@'
 * 000000014033DAFE: prefetchnta byte ptr [rax]
 * 000000014033DB01: add     rax, r10
 * 000000014033DB04: cmp     rax, rcx
 * 000000014033DB07: jb      short loc_14033DAFE
 * 000000014033DB09: mov     r10d, r8d
 * 000000014033DB0C: mov     rbx, r15
 * 000000014033DB0F: shr     r10d, 7
 * 000000014033DB13: mov     r12d, 0FFFFFFFFh
 * 000000014033DB19: test    r10d, r10d
 * 000000014033DB1C: jz      short loc_14033DB88
 * 000000014033DB1E: mov     rdi, 7010008004002001h
 * 000000014033DB28: mov     edx, 8
 * 000000014033DB2D: lea     esi, [rdx-7]
 * 000000014033DB30: mov     rax, [r9]
 * 000000014033DB33: mov     ecx, r14d
 * 000000014033DB36: xor     rax, rbx
 * 000000014033DB39: mov     rbx, [r9+8]
 * 000000014033DB3D: rol     rax, cl
 * 000000014033DB40: add     r9, 10h
 * 000000014033DB44: xor     rbx, rax
 * 000000014033DB47: rol     rbx, cl
 * 000000014033DB4A: sub     rdx, rsi
 * 000000014033DB4D: jnz     short loc_14033DB30
 * 000000014033DB4F: mov     rcx, r9
 * 000000014033DB52: sub     rcx, r11
 * 000000014033DB55: xor     rcx, r15
 * 000000014033DB58: mov     rax, rcx
 * 000000014033DB5B: rol     rax, 11h
 * 000000014033DB5F: xor     rcx, rax
 * 000000014033DB62: mov     rax, rdi
 * 000000014033DB65: mul     rcx
 * 000000014033DB68: xor     eax, edx
 * 000000014033DB6A: mov     [rbp+20F0h+var_1A38], rdx
 * 000000014033DB71: xor     r14d, eax
 * 000000014033DB74: mov     rdx, rsi
 * 000000014033DB77: and     r14d, 3Fh
 * 000000014033DB7B: cmovz   r14d, edx
 * 000000014033DB7F: add     r10d, r12d
 * 000000014033DB82: jnz     short loc_14033DB28
 * 000000014033DB84: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033DB88: and     r8d, 7Fh
 * 000000014033DB8C: cmp     r8d, 8
 * 000000014033DB90: jb      short loc_14033DBBD
 * 000000014033DB92: mov     edx, r8d
 * 000000014033DB95: mov     esi, 1
 * 000000014033DB9A: shr     rdx, 3
 * 000000014033DB9E: xor     rbx, [r9]
 * 000000014033DBA1: mov     ecx, r14d
 * 000000014033DBA4: rol     rbx, cl
 * 000000014033DBA7: add     r9, 8
 * 000000014033DBAB: add     r8d, 0FFFFFFF8h
 * 000000014033DBAF: sub     rdx, rsi
 * 000000014033DBB2: jnz     short loc_14033DB9E
 * 000000014033DBB4: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033DBB8: mov     edx, 1
 * 000000014033DBBD: xor     r10d, r10d
 * 000000014033DBC0: test    r8d, r8d
 * 000000014033DBC3: jz      short loc_14033DBDA
 * 000000014033DBC5: movzx   eax, byte ptr [r9]
 * 000000014033DBC9: mov     ecx, r14d
 * 000000014033DBCC: xor     rbx, rax
 * 000000014033DBCF: add     r9, rdx
 * 000000014033DBD2: rol     rbx, cl
 * 000000014033DBD5: add     r8d, r12d
 * 000000014033DBD8: jnz     short loc_14033DBC5
 * 000000014033DBDA: mov     rax, rbx
 * 000000014033DBDD: jmp     short loc_14033DBE1
 * 000000014033DBDF: xor     ebx, eax
 * 000000014033DBE1: shr     rax, 1Fh
 * 000000014033DBE5: test    rax, rax
 * 000000014033DBE8: jnz     short loc_14033DBDF
 * 000000014033DBEA: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033DBEE: btr     ebx, 1Fh
 * 000000014033DBF2: mov     r13d, r10d
 * 000000014033DBF5: cmp     ebx, [rax+14h]
 * 000000014033DBF8: jz      loc_14033D926
 * 000000014033DBFE: cmp     [rax], r10d
 * 000000014033DC01: jnz     short loc_14033DC0B
 * 000000014033DC03: cmp     [rax+18h], r10d
 * 000000014033DC07: cmovnz  r13d, edx
 * 000000014033DC0B: mov     ecx, [rax+10h]
 * 000000014033DC0E: mov     rdx, [rax+8]
 * 000000014033DC12: test    rcx, rcx
 * 000000014033DC15: jz      loc_14033DCCD
 * 000000014033DC1B: mov     eax, [rsi+974h]
 * 000000014033DC21: mov     r8d, 40h ; '@'
 * 000000014033DC27: test    r8b, al
 * 000000014033DC2A: jz      loc_14033DCCD
 * 000000014033DC30: mov     r12, cr8
 * 000000014033DC34: lea     eax, [r8-3Eh]
 * 000000014033DC38: mov     cr8, rax
 * 000000014033DC3C: lea     rax, [rcx-1]
 * 000000014033DC40: mov     r14, rdx
 * 000000014033DC43: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033DC4A: add     rax, rdx
 * 000000014033DC4D: mov     ecx, 0FFFh
 * 000000014033DC52: or      rax, rcx
 * 000000014033DC55: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033DC59: lea     rax, [r14-1]
 * 000000014033DC5D: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033DC61: movzx   r15d, r12b
 * 000000014033DC65: mov     rax, [rsi+460h]
 * 000000014033DC6C: xor     edx, edx
 * 000000014033DC6E: mov     rcx, r14
 * 000000014033DC71: call    KeGuardDispatchICall
 * 000000014033DC76: xor     r10d, r10d
 * 000000014033DC79: cmp     eax, 0C000022Dh
 * 000000014033DC7E: jnz     short loc_14033DCA7
 * 000000014033DC80: test    r13d, r13d
 * 000000014033DC83: jnz     short loc_14033DCC9
 * 000000014033DC85: lea     eax, [r10+1]
 * 000000014033DC89: cmp     r12b, al
 * 000000014033DC8C: ja      short loc_14033DCAB
 * 000000014033DC8E: movzx   r15d, r12b
 * 000000014033DC92: mov     cr8, r15
 * 000000014033DC96: mov     al, [r14]
 * 000000014033DC99: mov     rax, cr8
 * 000000014033DC9D: lea     eax, [r10+2]
 * 000000014033DCA1: mov     cr8, rax
 * 000000014033DCA5: jmp     short loc_14033DC65
 * 000000014033DCA7: test    eax, eax
 * 000000014033DCA9: js      short loc_14033DCC9
 * 000000014033DCAB: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033DCAF: mov     ecx, 1000h
 * 000000014033DCB4: add     rax, rcx
 * 000000014033DCB7: add     r14, rcx
 * 000000014033DCBA: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033DCBE: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033DCC2: jnz     short loc_14033DC61
 * 000000014033DCC4: jmp     loc_14033D922
 * 000000014033DCC9: mov     cr8, r15
 * 000000014033DCCD: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033DCD1: mov     eax, [rsi+8D8h]
 * 000000014033DCD7: mov     ecx, [r13+14h]
 * 000000014033DCDB: test    eax, eax
 * 000000014033DCDD: jnz     short loc_14033DCF5
 * 000000014033DCDF: mov     eax, ebx
 * 000000014033DCE1: xor     rcx, rax
 * 000000014033DCE4: mov     rax, [rsi+580h]
 * 000000014033DCEB: mov     [rax+18h], rcx
 * 000000014033DCEF: mov     eax, [rsi+8D8h]
 * 000000014033DCF5: mov     rcx, [r13+8]
 * 000000014033DCF9: test    eax, eax
 * 000000014033DCFB: jnz     loc_14033D92A
 * 000000014033DD01: mov     r11, 0B3B74BDEE4453415h
 * 000000014033DD0B: jmp     loc_14033D8CC
 * 000000014033DD10: xor     ebx, eax
 * 000000014033DD12: shr     rax, 1Fh
 * 000000014033DD16: test    rax, rax
 * 000000014033DD19: jnz     short loc_14033DD10
 * 000000014033DD1B: btr     ebx, 1Fh
 * 000000014033DD1F: mov     [rbp+20F0h+var_20F0], rbx
 * 000000014033DD23: jmp     loc_14033DFD0
 * 000000014033DD28: mov     r8d, r15d
 * 000000014033DD2B: mov     rdx, r13
 * 000000014033DD2E: mov     rcx, rsi
 * 000000014033DD31: call    sub_140349E50
 * 000000014033DD36: mov     ebx, eax
 * 000000014033DD38: xor     r10d, r10d
 * 000000014033DD3B: mov     eax, r15d
 * 000000014033DD3E: mov     [rbp+20F0h+var_20F0], rbx
 * 000000014033DD42: shl     eax, 3
 * 000000014033DD45: add     [rsi+810h], eax
 * 000000014033DD4B: mov     eax, [rsi+974h]
 * 000000014033DD51: bt      eax, 0Bh
 * 000000014033DD55: jnb     loc_14033DFD0
 * 000000014033DD5B: lea     rbx, [r13-6]
 * 000000014033DD5F: lea     r14, [rbx+5]
 * 000000014033DD63: mov     al, [r14]
 * 000000014033DD66: cmp     byte ptr [rbx], 4Ch ; 'L'
 * 000000014033DD69: jnz     loc_14033DF71
 * 000000014033DD6F: cmp     byte ptr [rbx+1], 87h
 * 000000014033DD73: jnz     loc_14033DF71
 * 000000014033DD79: cmp     [rbx+2], r10b
 * 000000014033DD7D: jnz     loc_14033DF71
 * 000000014033DD83: cmp     byte ptr [rbx+3], 98h
 * 000000014033DD87: jnz     loc_14033DF71
 * 000000014033DD8D: cmp     byte ptr [rbx+4], 0C3h
 * 000000014033DD91: jnz     loc_14033DF71
 * 000000014033DD97: cmp     al, 90h
 * 000000014033DD99: jz      short loc_14033DDA3
 * 000000014033DD9B: cmp     al, 0F1h
 * 000000014033DD9D: jnz     loc_14033DF71
 * 000000014033DDA3: mov     rcx, [rsi+4D0h]
 * 000000014033DDAA: cli
 * 000000014033DDAB: mov     eax, [rsi+970h]
 * 000000014033DDB1: shr     eax, 0Ah
 * 000000014033DDB4: and     eax, 1Fh
 * 000000014033DDB7: lock bts [rcx], eax
 * 000000014033DDBB: jnb     short loc_14033DDC2
 * 000000014033DDBD: sti
 * 000000014033DDBE: pause
 * 000000014033DDC0: jmp     short loc_14033DDAA
 * 000000014033DDC2: mov     edx, 26h ; '&'
 * 000000014033DDC7: lea     rax, [rbp+20F0h+var_1270]
 * 000000014033DDCE: mov     r9d, 130h
 * 000000014033DDD4: mov     ecx, r9d
 * 000000014033DDD7: lea     r8d, [rdx-25h]
 * 000000014033DDDB: mov     [rax], r10
 * 000000014033DDDE: add     ecx, 0FFFFFFF8h
 * 000000014033DDE1: add     rax, 8
 * 000000014033DDE5: sub     rdx, r8
 * 000000014033DDE8: jnz     short loc_14033DDDB
 * 000000014033DDEA: test    ecx, ecx
 * 000000014033DDEC: jz      short loc_14033DDFD
 * 000000014033DDEE: mov     edx, 0FFFFFFFFh
 * 000000014033DDF3: mov     [rax], r10b
 * 000000014033DDF6: add     rax, r8
 * 000000014033DDF9: add     ecx, edx
 * 000000014033DDFB: jnz     short loc_14033DDF3
 * 000000014033DDFD: movups  xmm0, xmmword ptr [rsi+830h]
 * 000000014033DE04: lea     rax, [rbp+20F0h+var_1270]
 * 000000014033DE0B: movdqu  [rbp+20F0h+var_1260], xmm0
 * 000000014033DE13: movups  xmm1, xmmword ptr [rsi+840h]
 * 000000014033DE1A: movdqu  [rbp+20F0h+var_1250], xmm1
 * 000000014033DE22: movups  xmm0, xmmword ptr [rsi+850h]
 * 000000014033DE29: mov     [rbp+20F0h+var_1D3E], rax
 * 000000014033DE30: lea     rax, [rsi+874h]
 * 000000014033DE37: mov     rcx, rax
 * 000000014033DE3A: mov     [rbp+20F0h+var_1A28], rax
 * 000000014033DE41: shr     rcx, 10h
 * 000000014033DE45: mov     word ptr [rbp+20F0h+var_1260], ax
 * 000000014033DE4C: shr     rax, 20h
 * 000000014033DE50: mov     dword ptr [rbp+20F0h+var_1260+8], eax
 * 000000014033DE56: movdqu  [rbp+20F0h+var_1150], xmm0
 * 000000014033DE5E: mov     word ptr [rbp+20F0h+var_1D40], r9w
 * 000000014033DE66: mov     word ptr [rbp+20F0h+var_1260+6], cx
 * 000000014033DE6D: sidt    fword ptr [rbp+20F0h+var_1BE0]
 * 000000014033DE74: lidt    fword ptr [rbp+20F0h+var_1D40]
 * 000000014033DE7B: mov     byte ptr [r14], 0F1h
 * 000000014033DE7F: mov     al, [r14]
 * 000000014033DE82: cmp     al, 0F1h
 * 000000014033DE84: jnz     loc_14033DF2C
 * 000000014033DE8A: test    dword ptr [rsi+974h], 20000h
 * 000000014033DE94: jnz     short loc_14033DEDC
 * 000000014033DE96: mov     rdx, gs:20h
 * 000000014033DE9F: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014033DEA9: mov     rax, [rsi+4B0h]
 * 000000014033DEB0: add     rcx, rsi
 * 000000014033DEB3: mov     [rax], rcx
 * 000000014033DEB6: lea     rcx, [rbx+6]
 * 000000014033DEBA: mov     rax, [rsi+4B8h]
 * 000000014033DEC1: mov     [rax], rdx
 * 000000014033DEC4: mov     rax, [rsi+4C0h]
 * 000000014033DECB: mov     [rax], rcx
 * 000000014033DECE: mov     rax, [rsi+4C8h]
 * 000000014033DED5: mov     qword ptr [rax], 113h
 * 000000014033DEDC: mov     rax, r14
 * 000000014033DEDF: call    KeGuardDispatchICall
 * 000000014033DEE4: xor     r10d, r10d
 * 000000014033DEE7: test    dword ptr [rsi+974h], 20000h
 * 000000014033DEF1: jnz     short loc_14033DF25
 * 000000014033DEF3: mov     rax, [rsi+4B0h]
 * 000000014033DEFA: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014033DF04: mov     [rax], rcx
 * 000000014033DF07: mov     rax, [rsi+4B8h]
 * 000000014033DF0E: mov     [rax], r10
 * 000000014033DF11: mov     rax, [rsi+4C0h]
 * 000000014033DF18: mov     [rax], r10
 * 000000014033DF1B: mov     rax, [rsi+4C8h]
 * 000000014033DF22: mov     [rax], r10
 * 000000014033DF25: mov     al, [r14]
 * 000000014033DF28: cmp     al, 0F1h
 * 000000014033DF2A: jz      short loc_14033DF31
 * 000000014033DF2C: mov     r9d, r10d
 * 000000014033DF2F: jmp     short loc_14033DF44
 * 000000014033DF31: mov     byte ptr [r14], 90h
 * 000000014033DF35: mov     r9d, 1
 * 000000014033DF3B: mov     al, [r14]
 * 000000014033DF3E: cmp     al, 90h
 * 000000014033DF40: cmovnz  r9d, r10d
 * 000000014033DF44: lidt    fword ptr [rbp+20F0h+var_1BE0]
 * 000000014033DF4B: mov     ecx, [rsi+970h]
 * 000000014033DF51: mov     edx, 1
 * 000000014033DF56: mov     r8, [rsi+4D0h]
 * 000000014033DF5D: shr     ecx, 0Ah
 * 000000014033DF60: and     ecx, 1Fh
 * 000000014033DF63: shl     edx, cl
 * 000000014033DF65: not     edx
 * 000000014033DF67: lock and [r8], edx
 * 000000014033DF6B: sti
 * 000000014033DF6C: test    r9d, r9d
 * 000000014033DF6F: jnz     short loc_14033DFC8
 * 000000014033DF71: mov     r14, [rbp+20F0h+var_20A0]
 * 000000014033DF75: cmp     [rsi+8D8h], r10d
 * 000000014033DF7C: jnz     short loc_14033DFCC
 * 000000014033DF7E: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033DF82: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033DF8C: add     rax, rsi
 * 000000014033DF8F: mov     [rsi+8E0h], rax
 * 000000014033DF96: mov     rax, 0B3B74BDEE4453415h
 * 000000014033DFA0: add     rax, rcx
 * 000000014033DFA3: mov     [rsi+8E8h], rax
 * 000000014033DFAA: movsxd  rax, dword ptr [rcx]
 * 000000014033DFAD: mov     [rsi+8F0h], rax
 * 000000014033DFB4: mov     eax, 1
 * 000000014033DFB9: mov     [rsi+8F8h], rbx
 * 000000014033DFC0: mov     [rsi+8D8h], eax
 * 000000014033DFC6: jmp     short loc_14033DFCC
 * 000000014033DFC8: mov     r14, [rbp+20F0h+var_20A0]
 * 000000014033DFCC: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033DFD0: mov     ecx, [r12]
 * 000000014033DFD4: mov     eax, ecx
 * 000000014033DFD6: btr     eax, 1Fh
 * 000000014033DFDA: cmp     ebx, eax
 * 000000014033DFDC: jz      loc_14033E12D
 * 000000014033DFE2: mov     edx, r15d
 * 000000014033DFE5: test    r15d, r15d
 * 000000014033DFE8: jz      loc_14033E08D
 * 000000014033DFEE: mov     eax, [rsi+974h]
 * 000000014033DFF4: mov     r8d, 40h ; '@'
 * 000000014033DFFA: test    r8b, al
 * 000000014033DFFD: jz      loc_14033E08D
 * 000000014033E003: mov     r15, cr8
 * 000000014033E007: lea     eax, [r8-3Eh]
 * 000000014033E00B: mov     cr8, rax
 * 000000014033E00F: mov     rbx, r13
 * 000000014033E012: mov     eax, 0FFFh
 * 000000014033E017: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033E01E: dec     r13
 * 000000014033E021: add     r13, rdx
 * 000000014033E024: or      r13, rax
 * 000000014033E027: lea     r12, [rbx-1]
 * 000000014033E02B: movzx   r14d, r15b
 * 000000014033E02F: mov     rax, [rsi+460h]
 * 000000014033E036: xor     edx, edx
 * 000000014033E038: mov     rcx, rbx
 * 000000014033E03B: call    KeGuardDispatchICall
 * 000000014033E040: cmp     eax, 0C000022Dh
 * 000000014033E045: jnz     short loc_14033E06E
 * 000000014033E047: mov     eax, 1
 * 000000014033E04C: cmp     r15b, al
 * 000000014033E04F: ja      loc_14033E10A
 * 000000014033E055: movzx   r14d, r15b
 * 000000014033E059: mov     cr8, r14
 * 000000014033E05D: mov     al, [rbx]
 * 000000014033E05F: mov     rax, cr8
 * 000000014033E063: mov     eax, 2
 * 000000014033E068: mov     cr8, rax
 * 000000014033E06C: jmp     short loc_14033E02F
 * 000000014033E06E: xor     r10d, r10d
 * 000000014033E071: test    eax, eax
 * 000000014033E073: jns     loc_14033E10D
 * 000000014033E079: mov     cr8, r14
 * 000000014033E07D: mov     r12, [rbp+20F0h+var_2080]
 * 000000014033E081: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033E085: mov     r13, [rbp+20F0h+var_20C8]
 * 000000014033E089: mov     ecx, [r12]
 * 000000014033E08D: mov     eax, ecx
 * 000000014033E08F: mov     ecx, [rsi+8D8h]
 * 000000014033E095: btr     eax, 1Fh
 * 000000014033E099: test    ecx, ecx
 * 000000014033E09B: jnz     loc_14033E129
 * 000000014033E0A1: mov     ecx, ebx
 * 000000014033E0A3: xor     rcx, rax
 * 000000014033E0A6: mov     rax, [rsi+580h]
 * 000000014033E0AD: mov     [rax+18h], rcx
 * 000000014033E0B1: mov     ecx, [rsi+8D8h]
 * 000000014033E0B7: test    ecx, ecx
 * 000000014033E0B9: jnz     short loc_14033E129
 * 000000014033E0BB: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033E0BF: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033E0C9: mov     r14, [rbp+20F0h+var_20A0]
 * 000000014033E0CD: add     rax, rsi
 * 000000014033E0D0: mov     [rsi+8E0h], rax
 * 000000014033E0D7: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E0E1: lea     rax, [rcx+r11]
 * 000000014033E0E5: mov     [rsi+8E8h], rax
 * 000000014033E0EC: movsxd  rax, dword ptr [rcx]
 * 000000014033E0EF: mov     [rsi+8F0h], rax
 * 000000014033E0F6: mov     eax, 1
 * 000000014033E0FB: mov     [rsi+8F8h], r13
 * 000000014033E102: mov     [rsi+8D8h], eax
 * 000000014033E108: jmp     short loc_14033E137
 * 000000014033E10A: xor     r10d, r10d
 * 000000014033E10D: mov     eax, 1000h
 * 000000014033E112: add     rbx, rax
 * 000000014033E115: add     r12, rax
 * 000000014033E118: cmp     r12, r13
 * 000000014033E11B: jnz     loc_14033E02B
 * 000000014033E121: mov     cr8, r14
 * 000000014033E125: mov     r12, [rbp+20F0h+var_2080]
 * 000000014033E129: mov     r14, [rbp+20F0h+var_20A0]
 * 000000014033E12D: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E137: mov     r8, [rbp+20F0h+var_20D8]
 * 000000014033E13B: add     r12, 4
 * 000000014033E13F: add     r14, 0Ch
 * 000000014033E143: mov     [rbp+20F0h+var_2080], r12
 * 000000014033E147: mov     [rbp+20F0h+var_20A0], r14
 * 000000014033E14B: cmp     r14, r8
 * 000000014033E14E: jnb     short loc_14033E168
 * 000000014033E150: mov     rax, [rbp+20F0h+var_2068]
 * 000000014033E157: mov     eax, [rax]
 * 000000014033E159: cmp     [rsi+810h], eax
 * 000000014033E15F: jl      loc_14033D988
 * 000000014033E165: cmp     r14, r8
 * 000000014033E168: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033E16F: jnz     loc_14033E306
 * 000000014033E175: mov     rcx, [rsi+530h]
 * 000000014033E17C: mov     r15, cr8
 * 000000014033E180: mov     eax, 0Fh
 * 000000014033E185: mov     cr8, rax
 * 000000014033E189: mov     rax, [rsi+148h]
 * 000000014033E190: call    KeGuardDispatchICall
 * 000000014033E195: mov     rax, [rsi+600h]
 * 000000014033E19C: mov     r14, [rbp+20F0h+var_20D0]
 * 000000014033E1A0: mov     rcx, [rax]
 * 000000014033E1A3: mov     eax, [rcx]
 * 000000014033E1A5: lea     rbx, [rcx+10h]
 * 000000014033E1A9: mov     r12b, [rcx+0Ch]
 * 000000014033E1AD: lea     rcx, [rax+rax*2]
 * 000000014033E1B1: lea     r13, [rbx+rcx*8]
 * 000000014033E1B5: mov     r8d, 18h
 * 000000014033E1BB: lea     r9, [r14+18h]
 * 000000014033E1BF: mov     r10, rbx
 * 000000014033E1C2: mov     rcx, [r10]
 * 000000014033E1C5: add     r10, 8
 * 000000014033E1C9: mov     rax, [r9]
 * 000000014033E1CC: add     r9, 8
 * 000000014033E1D0: cmp     rcx, rax
 * 000000014033E1D3: jnz     short loc_14033E209
 * 000000014033E1D5: add     r8d, 0FFFFFFF8h
 * 000000014033E1D9: cmp     r8d, 8
 * 000000014033E1DD: jnb     short loc_14033E1C2
 * 000000014033E1DF: test    r8d, r8d
 * 000000014033E1E2: jz      short loc_14033E212
 * 000000014033E1E4: mov     r11d, 1
 * 000000014033E1EA: movzx   edx, byte ptr [r10]
 * 000000014033E1EE: add     r10, r11
 * 000000014033E1F1: movzx   eax, byte ptr [r9]
 * 000000014033E1F5: add     r9, r11
 * 000000014033E1F8: cmp     rdx, rax
 * 000000014033E1FB: jnz     short loc_14033E209
 * 000000014033E1FD: mov     eax, 0FFFFFFFFh
 * 000000014033E202: add     r8d, eax
 * 000000014033E205: jz      short loc_14033E212
 * 000000014033E207: jmp     short loc_14033E1EA
 * 000000014033E209: add     rbx, 18h
 * 000000014033E20D: cmp     rbx, r13
 * 000000014033E210: jb      short loc_14033E1B5
 * 000000014033E212: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033E216: mov     rcx, [rsi+530h]
 * 000000014033E21D: mov     rax, [rsi+188h]
 * 000000014033E224: call    KeGuardDispatchICall
 * 000000014033E229: movzx   eax, r15b
 * 000000014033E22D: mov     cr8, rax
 * 000000014033E231: xor     r10d, r10d
 * 000000014033E234: lea     edx, [r10+1]
 * 000000014033E238: test    r12b, r12b
 * 000000014033E23B: jz      short loc_14033E29C
 * 000000014033E23D: mov     eax, [rsi+974h]
 * 000000014033E243: lea     ecx, [rdx+0Fh]
 * 000000014033E246: test    cl, al
 * 000000014033E248: jz      short loc_14033E296
 * 000000014033E24A: cmp     [rsi+8D8h], r10d
 * 000000014033E251: jnz     short loc_14033E296
 * 000000014033E253: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033E257: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033E261: add     rax, rsi
 * 000000014033E264: mov     [rsi+8E0h], rax
 * 000000014033E26B: mov     rax, 0B3B74BDEE4453415h
 * 000000014033E275: add     rax, rcx
 * 000000014033E278: mov     [rsi+8E8h], rax
 * 000000014033E27F: movsxd  rax, dword ptr [rcx]
 * 000000014033E282: mov     [rsi+8F0h], rax
 * 000000014033E289: mov     [rsi+8F8h], rdx
 * 000000014033E290: mov     [rsi+8D8h], edx
 * 000000014033E296: cmp     [r14+18h], rdx
 * 000000014033E29A: jz      short loc_14033E2F7
 * 000000014033E29C: cmp     rbx, r13
 * 000000014033E29F: jnz     short loc_14033E2F7
 * 000000014033E2A1: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E2AB: cmp     [rsi+8D8h], r10d
 * 000000014033E2B2: jnz     loc_14033B30C
 * 000000014033E2B8: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033E2BC: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033E2C6: add     rax, rsi
 * 000000014033E2C9: mov     [rsi+8E0h], rax
 * 000000014033E2D0: lea     rax, [rcx+r11]
 * 000000014033E2D4: mov     [rsi+8E8h], rax
 * 000000014033E2DB: movsxd  rax, dword ptr [rcx]
 * 000000014033E2DE: mov     [rsi+8F0h], rax
 * 000000014033E2E5: mov     [rsi+8F8h], rbx
 * 000000014033E2EC: mov     [rsi+8D8h], edx
 * 000000014033E2F2: jmp     loc_14033B30C
 * 000000014033E2F7: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E301: jmp     loc_14033B30C
 * 000000014033E306: sub     r14, [rbp+20F0h+var_2030]
 * 000000014033E30D: mov     rax, 2AAAAAAAAAAAAAABh
 * 000000014033E317: imul    r14
 * 000000014033E31A: sar     rdx, 1
 * 000000014033E31D: mov     rax, rdx
 * 000000014033E320: shr     rax, 3Fh
 * 000000014033E324: add     rdx, rax
 * 000000014033E327: mov     [rsi+80Ch], edx
 * 000000014033E32D: jmp     loc_14033462F
 * 000000014033E332: mov     eax, [r13+24h]
 * 000000014033E336: add     [rsi+810h], eax
 * 000000014033E33C: mov     r11d, [r13+20h]
 * 000000014033E340: mov     r9d, [r13+24h]
 * 000000014033E344: add     r11, rsi
 * 000000014033E347: mov     r14d, [rsi+7FCh]
 * 000000014033E34E: mov     r10, r11
 * 000000014033E351: mov     r15, [rsi+800h]
 * 000000014033E358: mov     rax, r11
 * 000000014033E35B: lea     rcx, [r11+r9]
 * 000000014033E35F: cmp     r11, rcx
 * 000000014033E362: jnb     short loc_14033E374
 * 000000014033E364: mov     edx, 40h ; '@'
 * 000000014033E369: prefetchnta byte ptr [rax]
 * 000000014033E36C: add     rax, rdx
 * 000000014033E36F: cmp     rax, rcx
 * 000000014033E372: jb      short loc_14033E369
 * 000000014033E374: mov     ebx, r9d
 * 000000014033E377: mov     r8, r15
 * 000000014033E37A: shr     ebx, 7
 * 000000014033E37D: test    ebx, ebx
 * 000000014033E37F: jz      short loc_14033E3F0
 * 000000014033E381: mov     rsi, 7010008004002001h
 * 000000014033E38B: mov     edx, 8
 * 000000014033E390: lea     r12d, [rdx-7]
 * 000000014033E394: mov     rax, [r10]
 * 000000014033E397: mov     ecx, r14d
 * 000000014033E39A: xor     rax, r8
 * 000000014033E39D: mov     r8, [r10+8]
 * 000000014033E3A1: rol     rax, cl
 * 000000014033E3A4: add     r10, 10h
 * 000000014033E3A8: xor     r8, rax
 * 000000014033E3AB: rol     r8, cl
 * 000000014033E3AE: sub     rdx, r12
 * 000000014033E3B1: jnz     short loc_14033E394
 * 000000014033E3B3: mov     rcx, r10
 * 000000014033E3B6: sub     rcx, r11
 * 000000014033E3B9: xor     rcx, r15
 * 000000014033E3BC: mov     rax, rcx
 * 000000014033E3BF: rol     rax, 11h
 * 000000014033E3C3: xor     rcx, rax
 * 000000014033E3C6: mov     rax, rsi
 * 000000014033E3C9: mul     rcx
 * 000000014033E3CC: xor     eax, edx
 * 000000014033E3CE: mov     [rbp+20F0h+var_1A20], rdx
 * 000000014033E3D5: xor     r14d, eax
 * 000000014033E3D8: mov     rax, r12
 * 000000014033E3DB: and     r14d, 3Fh
 * 000000014033E3DF: cmovz   r14d, eax
 * 000000014033E3E3: mov     eax, 0FFFFFFFFh
 * 000000014033E3E8: add     ebx, eax
 * 000000014033E3EA: jnz     short loc_14033E38B
 * 000000014033E3EC: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033E3F0: and     r9d, 7Fh
 * 000000014033E3F4: mov     r11d, 1
 * 000000014033E3FA: cmp     r9d, 8
 * 000000014033E3FE: jb      short loc_14033E41D
 * 000000014033E400: mov     edx, r9d
 * 000000014033E403: shr     rdx, 3
 * 000000014033E407: xor     r8, [r10]
 * 000000014033E40A: mov     ecx, r14d
 * 000000014033E40D: rol     r8, cl
 * 000000014033E410: add     r10, 8
 * 000000014033E414: add     r9d, 0FFFFFFF8h
 * 000000014033E418: sub     rdx, r11
 * 000000014033E41B: jnz     short loc_14033E407
 * 000000014033E41D: test    r9d, r9d
 * 000000014033E420: jz      short loc_14033E43D
 * 000000014033E422: mov     r12d, 0FFFFFFFFh
 * 000000014033E428: movzx   eax, byte ptr [r10]
 * 000000014033E42C: mov     ecx, r14d
 * 000000014033E42F: xor     r8, rax
 * 000000014033E432: add     r10, r11
 * 000000014033E435: rol     r8, cl
 * 000000014033E438: add     r9d, r12d
 * 000000014033E43B: jnz     short loc_14033E428
 * 000000014033E43D: mov     rcx, [r13+18h]
 * 000000014033E441: xor     r10d, r10d
 * 000000014033E444: cmp     r8, rcx
 * 000000014033E447: jz      loc_140334625
 * 000000014033E44D: mov     eax, [rsi+8D8h]
 * 000000014033E453: test    eax, eax
 * 000000014033E455: jnz     short loc_14033E46B
 * 000000014033E457: mov     rax, [rsi+580h]
 * 000000014033E45E: xor     rcx, r8
 * 000000014033E461: mov     [rax+18h], rcx
 * 000000014033E465: mov     eax, [rsi+8D8h]
 * 000000014033E46B: mov     ecx, [r13+20h]
 * 000000014033E46F: mov     r14d, 8000h
 * 000000014033E475: add     rcx, rsi
 * 000000014033E478: test    eax, eax
 * 000000014033E47A: jnz     loc_14033EB13
 * 000000014033E480: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033E48A: add     rax, rsi
 * 000000014033E48D: mov     [rsi+8E0h], rax
 * 000000014033E494: mov     rax, 0B3B74BDEE4453415h
 * 000000014033E49E: add     rax, r13
 * 000000014033E4A1: mov     [rsi+8E8h], rax
 * 000000014033E4A8: movsxd  rax, dword ptr [r13+0]
 * 000000014033E4AC: mov     [rsi+8F0h], rax
 * 000000014033E4B3: mov     [rsi+8F8h], rcx
 * 000000014033E4BA: mov     [rsi+8D8h], r11d
 * 000000014033E4C1: jmp     loc_14033EB13
 * 000000014033E4C6: mov     ebx, 0Fh
 * 000000014033E4CB: sub     r14d, 2
 * 000000014033E4CF: jz      loc_14033EB22
 * 000000014033E4D5: sub     r14d, 1
 * 000000014033E4D9: jz      loc_14033E741
 * 000000014033E4DF: cmp     r14d, 14h
 * 000000014033E4E3: jz      short loc_14033E537
 * 000000014033E4E5: xor     r10d, r10d
 * 000000014033E4E8: mov     r14d, 8000h
 * 000000014033E4EE: cmp     [rsi+8D8h], r10d
 * 000000014033E4F5: jnz     loc_140334635
 * 000000014033E4FB: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033E505: add     rax, rsi
 * 000000014033E508: mov     [rsi+8E0h], rax
 * 000000014033E50F: lea     rax, [r11+r13]
 * 000000014033E513: mov     [rsi+8E8h], rax
 * 000000014033E51A: mov     qword ptr [rsi+8F0h], 101h
 * 000000014033E525: mov     [rsi+8F8h], r10
 * 000000014033E52C: mov     [rsi+8D8h], edx
 * 000000014033E532: jmp     loc_140334635
 * 000000014033E537: mov     edx, [r13+28h]
 * 000000014033E53B: lea     rcx, [rbp+20F0h+var_1760]
 * 000000014033E542: mov     rax, [rsi+198h]
 * 000000014033E549: call    KeGuardDispatchICall
 * 000000014033E54E: mov     rax, [rsi+1C8h]
 * 000000014033E555: lea     rdx, [rbp+20F0h+var_1750]
 * 000000014033E55C: lea     rcx, [rbp+20F0h+var_1760]
 * 000000014033E563: call    KeGuardDispatchICall
 * 000000014033E568: mov     r8, [rsi+9F0h]
 * 000000014033E56F: test    r8, r8
 * 000000014033E572: jz      short loc_14033E584
 * 000000014033E574: mov     ebx, [r8+320h]
 * 000000014033E57B: mov     r8, [rsi+9F0h]
 * 000000014033E582: jmp     short loc_14033E595
 * 000000014033E584: mov     ecx, 832h
 * 000000014033E589: rdmsr
 * 000000014033E58B: shl     rdx, 20h
 * 000000014033E58F: or      rax, rdx
 * 000000014033E592: mov     rbx, rax
 * 000000014033E595: test    r8, r8
 * 000000014033E598: jz      short loc_14033E5A3
 * 000000014033E59A: mov     r14d, [r8+340h]
 * 000000014033E5A1: jmp     short loc_14033E5B4
 * 000000014033E5A3: mov     ecx, 834h
 * 000000014033E5A8: rdmsr
 * 000000014033E5AA: shl     rdx, 20h
 * 000000014033E5AE: or      rax, rdx
 * 000000014033E5B1: mov     r14, rax
 * 000000014033E5B4: mov     rax, [rsi+190h]
 * 000000014033E5BB: lea     rcx, [rbp+20F0h+var_1750]
 * 000000014033E5C2: call    KeGuardDispatchICall
 * 000000014033E5C7: mov     eax, [r13+1Ch]
 * 000000014033E5CB: mov     r8d, [r13+18h]
 * 000000014033E5CF: and     eax, ebx
 * 000000014033E5D1: cmp     eax, r8d
 * 000000014033E5D4: jnz     short loc_14033E5F9
 * 000000014033E5D6: bt      ebx, 10h
 * 000000014033E5DA: jb      loc_14033E681
 * 000000014033E5E0: cmp     bl, 0D1h
 * 000000014033E5E3: jz      loc_14033E681
 * 000000014033E5E9: lea     eax, [rbx+3]
 * 000000014033E5EC: mov     ecx, 1
 * 000000014033E5F1: cmp     al, cl
 * 000000014033E5F3: jbe     loc_14033E681
 * 000000014033E5F9: mov     edx, [r13+28h]
 * 000000014033E5FD: mov     rax, 32000000000h
 * 000000014033E607: shl     rdx, 30h
 * 000000014033E60B: xor     r10d, r10d
 * 000000014033E60E: or      rdx, r8
 * 000000014033E611: or      rdx, rax
 * 000000014033E614: mov     eax, [rsi+8D8h]
 * 000000014033E61A: test    eax, eax
 * 000000014033E61C: jnz     short loc_14033E684
 * 000000014033E61E: mov     rax, [rsi+580h]
 * 000000014033E625: mov     ecx, ebx
 * 000000014033E627: xor     rcx, r8
 * 000000014033E62A: mov     [rax+18h], rcx
 * 000000014033E62E: mov     eax, [rsi+8D8h]
 * 000000014033E634: test    eax, eax
 * 000000014033E636: jnz     short loc_14033E684
 * 000000014033E638: mov     r9, 0A3A03F5891C8B4E8h
 * 000000014033E642: lea     r8d, [r10+1]
 * 000000014033E646: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E650: lea     rax, [rsi+r9]
 * 000000014033E654: mov     [rsi+8E0h], rax
 * 000000014033E65B: lea     rax, [r11+r13]
 * 000000014033E65F: mov     [rsi+8E8h], rax
 * 000000014033E666: movsxd  rax, dword ptr [r13+0]
 * 000000014033E66A: mov     [rsi+8F0h], rax
 * 000000014033E671: mov     [rsi+8F8h], rdx
 * 000000014033E678: mov     [rsi+8D8h], r8d
 * 000000014033E67F: jmp     short loc_14033E69E
 * 000000014033E681: xor     r10d, r10d
 * 000000014033E684: mov     r9, 0A3A03F5891C8B4E8h
 * 000000014033E68E: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E698: mov     r8d, 1
 * 000000014033E69E: mov     eax, [r13+24h]
 * 000000014033E6A2: mov     ecx, [r13+20h]
 * 000000014033E6A6: and     eax, r14d
 * 000000014033E6A9: cmp     eax, ecx
 * 000000014033E6AB: jnz     short loc_14033E6C3
 * 000000014033E6AD: bt      r14d, 10h
 * 000000014033E6B2: jb      short loc_14033E72F
 * 000000014033E6B4: cmp     r14b, 0D1h
 * 000000014033E6B8: jz      short loc_14033E72F
 * 000000014033E6BA: lea     eax, [r14+3]
 * 000000014033E6BE: cmp     al, r8b
 * 000000014033E6C1: jbe     short loc_14033E72F
 * 000000014033E6C3: mov     edx, [r13+28h]
 * 000000014033E6C7: mov     rax, 34000000000h
 * 000000014033E6D1: shl     rdx, 30h
 * 000000014033E6D5: or      rdx, rcx
 * 000000014033E6D8: or      rdx, rax
 * 000000014033E6DB: mov     eax, [rsi+8D8h]
 * 000000014033E6E1: test    eax, eax
 * 000000014033E6E3: jnz     short loc_14033E72F
 * 000000014033E6E5: mov     eax, r14d
 * 000000014033E6E8: xor     rcx, rax
 * 000000014033E6EB: mov     rax, [rsi+580h]
 * 000000014033E6F2: mov     [rax+18h], rcx
 * 000000014033E6F6: mov     eax, [rsi+8D8h]
 * 000000014033E6FC: test    eax, eax
 * 000000014033E6FE: jnz     short loc_14033E72F
 * 000000014033E700: lea     rax, [rsi+r9]
 * 000000014033E704: mov     [rsi+8E0h], rax
 * 000000014033E70B: lea     rax, [r11+r13]
 * 000000014033E70F: mov     [rsi+8E8h], rax
 * 000000014033E716: movsxd  rax, dword ptr [r13+0]
 * 000000014033E71A: mov     [rsi+8F0h], rax
 * 000000014033E721: mov     [rsi+8F8h], rdx
 * 000000014033E728: mov     [rsi+8D8h], r8d
 * 000000014033E72F: mov     r14d, 8000h
 * 000000014033E735: add     [rsi+810h], r14d
 * 000000014033E73C: jmp     loc_140334635
 * 000000014033E741: mov     edx, [r13+28h]
 * 000000014033E745: lea     rcx, [rbp+20F0h+var_1740]
 * 000000014033E74C: mov     rax, [rsi+198h]
 * 000000014033E753: call    KeGuardDispatchICall
 * 000000014033E758: mov     rax, [rsi+1C8h]
 * 000000014033E75F: lea     rdx, [rbp+20F0h+var_1730]
 * 000000014033E766: lea     rcx, [rbp+20F0h+var_1740]
 * 000000014033E76D: call    KeGuardDispatchICall
 * 000000014033E772: lea     rdx, [rbp+20F0h+var_1678]
 * 000000014033E779: lea     rcx, [rbp+20F0h+var_1DC0]
 * 000000014033E780: call    KiGetGdtIdt
 * 000000014033E785: mov     r15, [rbp+20F0h+var_1DBE]
 * 000000014033E78C: mov     ecx, 2
 * 000000014033E791: mov     r14d, [r13+10h]
 * 000000014033E795: test    [rsi+863h], cl
 * 000000014033E79B: jz      loc_14033E8B1
 * 000000014033E7A1: mov     edx, 26h ; '&'
 * 000000014033E7A6: lea     rax, [rbp+20F0h+var_1570]
 * 000000014033E7AD: mov     r10d, 130h
 * 000000014033E7B3: xor     r8d, r8d
 * 000000014033E7B6: mov     ecx, r10d
 * 000000014033E7B9: lea     r9d, [rdx-25h]
 * 000000014033E7BD: mov     [rax], r8
 * 000000014033E7C0: add     ecx, 0FFFFFFF8h
 * 000000014033E7C3: add     rax, 8
 * 000000014033E7C7: sub     rdx, r9
 * 000000014033E7CA: jnz     short loc_14033E7BD
 * 000000014033E7CC: test    ecx, ecx
 * 000000014033E7CE: jz      short loc_14033E7DF
 * 000000014033E7D0: mov     edx, 0FFFFFFFFh
 * 000000014033E7D5: mov     [rax], r8b
 * 000000014033E7D8: add     rax, r9
 * 000000014033E7DB: add     ecx, edx
 * 000000014033E7DD: jnz     short loc_14033E7D5
 * 000000014033E7DF: movups  xmm0, xmmword ptr [rsi+830h]
 * 000000014033E7E6: lea     rax, [rbp+20F0h+var_1570]
 * 000000014033E7ED: movdqu  [rbp+20F0h+var_1560], xmm0
 * 000000014033E7F5: movups  xmm1, xmmword ptr [rsi+840h]
 * 000000014033E7FC: movdqu  [rbp+20F0h+var_1550], xmm1
 * 000000014033E804: movups  xmm0, xmmword ptr [rsi+850h]
 * 000000014033E80B: mov     [rbp+20F0h+var_1D2E], rax
 * 000000014033E812: lea     rax, [rsi+860h]
 * 000000014033E819: mov     rcx, rax
 * 000000014033E81C: mov     [rbp+20F0h+var_2070], rax
 * 000000014033E823: shr     rcx, 10h
 * 000000014033E827: mov     word ptr [rbp+20F0h+var_1560], ax
 * 000000014033E82E: shr     rax, 20h
 * 000000014033E832: mov     dword ptr [rbp+20F0h+var_1560+8], eax
 * 000000014033E838: movdqu  [rbp+20F0h+var_1450], xmm0
 * 000000014033E840: mov     word ptr [rbp+20F0h+var_1D30], r10w
 * 000000014033E848: mov     word ptr [rbp+20F0h+var_1560+6], cx
 * 000000014033E84F: cli
 * 000000014033E850: sidt    fword ptr [rbp+20F0h+var_1BD0]
 * 000000014033E857: lidt    fword ptr [rbp+20F0h+var_1D30]
 * 000000014033E85E: mov     dr7, r8
 * 000000014033E862: lea     rax, [rsi+866h]
 * 000000014033E869: mov     rcx, rax
 * 000000014033E86C: mov     [rbp+20F0h+var_2070], rax
 * 000000014033E873: mov     word ptr [rbp+20F0h+var_1560], ax
 * 000000014033E87A: shr     rcx, 10h
 * 000000014033E87E: shr     rax, 20h
 * 000000014033E882: mov     word ptr [rbp+20F0h+var_1560+6], cx
 * 000000014033E889: mov     dword ptr [rbp+20F0h+var_1560+8], eax
 * 000000014033E88F: call    KiErrata704Present
 * 000000014033E894: mov     [rsi+8C8h], rax
 * 000000014033E89B: mov     eax, gs:1A4h
 * 000000014033E8A3: mov     [rsi+8D0h], eax
 * 000000014033E8A9: lidt    fword ptr [rbp+20F0h+var_1BD0]
 * 000000014033E8B0: sti
 * 000000014033E8B1: call    KiGetLdtr
 * 000000014033E8B6: movzx   r12d, ax
 * 000000014033E8BA: call    KiGetTr
 * 000000014033E8BF: add     [rsi+810h], r14d
 * 000000014033E8C6: lea     rcx, [r15+r14]
 * 000000014033E8CA: mov     r10d, [rsi+7FCh]
 * 000000014033E8D1: movzx   r13d, ax
 * 000000014033E8D5: mov     r11, [rsi+800h]
 * 000000014033E8DC: mov     r8, r15
 * 000000014033E8DF: mov     rax, r15
 * 000000014033E8E2: cmp     r15, rcx
 * 000000014033E8E5: jnb     short loc_14033E8F7
 * 000000014033E8E7: mov     edx, 40h ; '@'
 * 000000014033E8EC: prefetchnta byte ptr [rax]
 * 000000014033E8EF: add     rax, rdx
 * 000000014033E8F2: cmp     rax, rcx
 * 000000014033E8F5: jb      short loc_14033E8EC
 * 000000014033E8F7: mov     r9d, r14d
 * 000000014033E8FA: mov     rbx, r11
 * 000000014033E8FD: shr     r9d, 7
 * 000000014033E901: test    r9d, r9d
 * 000000014033E904: jz      short loc_14033E97C
 * 000000014033E906: mov     rdi, 7010008004002001h
 * 000000014033E910: mov     edx, 8
 * 000000014033E915: lea     esi, [rdx-7]
 * 000000014033E918: mov     rax, [r8]
 * 000000014033E91B: mov     ecx, r10d
 * 000000014033E91E: xor     rax, rbx
 * 000000014033E921: mov     rbx, [r8+8]
 * 000000014033E925: rol     rax, cl
 * 000000014033E928: add     r8, 10h
 * 000000014033E92C: xor     rbx, rax
 * 000000014033E92F: rol     rbx, cl
 * 000000014033E932: sub     rdx, rsi
 * 000000014033E935: jnz     short loc_14033E918
 * 000000014033E937: mov     rcx, r8
 * 000000014033E93A: sub     rcx, r15
 * 000000014033E93D: xor     rcx, r11
 * 000000014033E940: mov     rax, rcx
 * 000000014033E943: rol     rax, 11h
 * 000000014033E947: xor     rcx, rax
 * 000000014033E94A: mov     rax, rdi
 * 000000014033E94D: mul     rcx
 * 000000014033E950: xor     eax, edx
 * 000000014033E952: mov     [rbp+20F0h+var_1A18], rdx
 * 000000014033E959: xor     r10d, eax
 * 000000014033E95C: mov     rax, rsi
 * 000000014033E95F: and     r10d, 3Fh
 * 000000014033E963: cmovz   r10d, eax
 * 000000014033E967: mov     eax, 0FFFFFFFFh
 * 000000014033E96C: add     r9d, eax
 * 000000014033E96F: jnz     short loc_14033E910
 * 000000014033E971: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033E975: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033E97C: and     r14d, 7Fh
 * 000000014033E980: mov     r9d, 1
 * 000000014033E986: cmp     r14d, 8
 * 000000014033E98A: jb      short loc_14033E9A9
 * 000000014033E98C: mov     edx, r14d
 * 000000014033E98F: shr     rdx, 3
 * 000000014033E993: xor     rbx, [r8]
 * 000000014033E996: mov     ecx, r10d
 * 000000014033E999: rol     rbx, cl
 * 000000014033E99C: add     r8, 8
 * 000000014033E9A0: add     r14d, 0FFFFFFF8h
 * 000000014033E9A4: sub     rdx, r9
 * 000000014033E9A7: jnz     short loc_14033E993
 * 000000014033E9A9: mov     r15d, 0FFFFFFFFh
 * 000000014033E9AF: test    r14d, r14d
 * 000000014033E9B2: jz      short loc_14033E9C9
 * 000000014033E9B4: movzx   eax, byte ptr [r8]
 * 000000014033E9B8: mov     ecx, r10d
 * 000000014033E9BB: xor     rbx, rax
 * 000000014033E9BE: add     r8, r9
 * 000000014033E9C1: rol     rbx, cl
 * 000000014033E9C4: add     r14d, r15d
 * 000000014033E9C7: jnz     short loc_14033E9B4
 * 000000014033E9C9: mov     rax, rbx
 * 000000014033E9CC: jmp     short loc_14033E9D0
 * 000000014033E9CE: xor     ebx, eax
 * 000000014033E9D0: shr     rax, 1Fh
 * 000000014033E9D4: test    rax, rax
 * 000000014033E9D7: jnz     short loc_14033E9CE
 * 000000014033E9D9: mov     rax, [rsi+190h]
 * 000000014033E9E0: lea     rcx, [rbp+20F0h+var_1730]
 * 000000014033E9E7: btr     ebx, 1Fh
 * 000000014033E9EB: call    KeGuardDispatchICall
 * 000000014033E9F0: mov     r9, [rbp+20F0h+var_20D0]
 * 000000014033E9F4: xor     r10d, r10d
 * 000000014033E9F7: lea     r14d, [r10+40h]
 * 000000014033E9FB: cmp     ebx, [r9+14h]
 * 000000014033E9FF: jnz     short loc_14033EA1F
 * 000000014033EA01: movzx   eax, word ptr [r9+2Ch]
 * 000000014033EA06: cmp     [rbp+20F0h+var_1DC0], ax
 * 000000014033EA0D: jnz     short loc_14033EA1F
 * 000000014033EA0F: test    r12w, r12w
 * 000000014033EA13: jnz     short loc_14033EA1F
 * 000000014033EA15: cmp     r13w, r14w
 * 000000014033EA19: jz      loc_14033EB06
 * 000000014033EA1F: test    dword ptr [rsi+970h], 40000000h
 * 000000014033EA29: mov     r11d, 1
 * 000000014033EA2F: jz      short loc_14033EA71
 * 000000014033EA31: mov     rcx, [rsi+0A50h]
 * 000000014033EA38: lea     edx, [r11+2Fh]
 * 000000014033EA3C: lea     r8d, [r11+5]
 * 000000014033EA40: mov     rax, [r9]
 * 000000014033EA43: add     edx, 0FFFFFFF8h
 * 000000014033EA46: mov     [rcx], rax
 * 000000014033EA49: add     r9, 8
 * 000000014033EA4D: add     rcx, 8
 * 000000014033EA51: sub     r8, r11
 * 000000014033EA54: jnz     short loc_14033EA40
 * 000000014033EA56: test    edx, edx
 * 000000014033EA58: jz      short loc_14033EA6A
 * 000000014033EA5A: mov     al, [r9]
 * 000000014033EA5D: add     r9, r11
 * 000000014033EA60: mov     [rcx], al
 * 000000014033EA62: add     rcx, r11
 * 000000014033EA65: add     edx, r15d
 * 000000014033EA68: jnz     short loc_14033EA5A
 * 000000014033EA6A: mov     r9, [rsi+0A50h]
 * 000000014033EA71: mov     rax, [rbp+20F0h+var_1DBE]
 * 000000014033EA78: mov     edx, ebx
 * 000000014033EA7A: mov     [r9+18h], rax
 * 000000014033EA7E: mov     [r9+20h], rdx
 * 000000014033EA82: test    r12w, r12w
 * 000000014033EA86: jz      short loc_14033EA8E
 * 000000014033EA88: movzx   eax, r12w
 * 000000014033EA8C: jmp     short loc_14033EA98
 * 000000014033EA8E: cmp     r13w, r14w
 * 000000014033EA92: jz      short loc_14033EA9C
 * 000000014033EA94: movzx   eax, r13w
 * 000000014033EA98: mov     [r9+18h], rax
 * 000000014033EA9C: mov     eax, [rsi+8D8h]
 * 000000014033EAA2: mov     ecx, [r9+14h]
 * 000000014033EAA6: test    eax, eax
 * 000000014033EAA8: jnz     short loc_14033EABE
 * 000000014033EAAA: mov     rax, [rsi+580h]
 * 000000014033EAB1: xor     rcx, rdx
 * 000000014033EAB4: mov     [rax+18h], rcx
 * 000000014033EAB8: mov     eax, [rsi+8D8h]
 * 000000014033EABE: mov     rcx, [r9+8]
 * 000000014033EAC2: test    eax, eax
 * 000000014033EAC4: jnz     short loc_14033EB06
 * 000000014033EAC6: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033EAD0: add     rax, rsi
 * 000000014033EAD3: mov     [rsi+8E0h], rax
 * 000000014033EADA: mov     rax, 0B3B74BDEE4453415h
 * 000000014033EAE4: add     rax, r9
 * 000000014033EAE7: mov     [rsi+8E8h], rax
 * 000000014033EAEE: movsxd  rax, dword ptr [r9]
 * 000000014033EAF1: mov     [rsi+8F0h], rax
 * 000000014033EAF8: mov     [rsi+8F8h], rcx
 * 000000014033EAFF: mov     [rsi+8D8h], r11d
 * 000000014033EB06: mov     r14d, 8000h
 * 000000014033EB0C: add     [rsi+810h], r14d
 * 000000014033EB13: mov     r11, 0B3B74BDEE4453415h
 * 000000014033EB1D: jmp     loc_140334635
 * 000000014033EB22: mov     edx, [r13+28h]
 * 000000014033EB26: lea     rcx, [rbp+20F0h+var_1720]
 * 000000014033EB2D: mov     rax, [rsi+198h]
 * 000000014033EB34: xor     r15d, r15d
 * 000000014033EB37: mov     [rbp+20F0h+var_2090], r15d
 * 000000014033EB3B: call    KeGuardDispatchICall
 * 000000014033EB40: mov     rax, [rsi+1C8h]
 * 000000014033EB47: lea     rdx, [rbp+20F0h+var_1710]
 * 000000014033EB4E: lea     rcx, [rbp+20F0h+var_1720]
 * 000000014033EB55: call    KeGuardDispatchICall
 * 000000014033EB5A: lea     rdx, [rbp+20F0h+var_1D20]
 * 000000014033EB61: lea     rcx, [rbp+20F0h+var_1668]
 * 000000014033EB68: call    KiGetGdtIdt
 * 000000014033EB6D: mov     rcx, [rbp+20F0h+var_1D1E]
 * 000000014033EB74: mov     edi, r15d
 * 000000014033EB77: mov     [rbp+20F0h+var_20C8], rcx
 * 000000014033EB7B: add     rcx, 4
 * 000000014033EB7F: mov     [rbp+20F0h+var_20F0], rcx
 * 000000014033EB83: mov     rax, [rsi+8B0h]
 * 000000014033EB8A: mov     r10, r15
 * 000000014033EB8D: mov     [rbp+20F0h+var_1F48], rax
 * 000000014033EB94: mov     r14, r15
 * 000000014033EB97: mov     r8, [rsi+8B8h]
 * 000000014033EB9E: mov     r12d, [rsi+894h]
 * 000000014033EBA5: mov     r13d, [rsi+898h]
 * 000000014033EBAC: mov     [rbp+20F0h+var_20D8], r8
 * 000000014033EBB0: mov     [rbp+20F0h+var_20B8], r15
 * 000000014033EBB4: mov     [rbp+20F0h+var_20A0], r15
 * 000000014033EBB8: mov     r15, cr8
 * 000000014033EBBC: mov     cr8, rbx
 * 000000014033EBC0: movzx   eax, word ptr [rcx-4]
 * 000000014033EBC4: movzx   r9d, word ptr [rcx]
 * 000000014033EBC8: mov     word ptr [rbp+20F0h+var_2088], ax
 * 000000014033EBCC: movzx   eax, word ptr [rcx+2]
 * 000000014033EBD0: mov     word ptr [rbp+20F0h+var_2088+2], ax
 * 000000014033EBD4: mov     eax, [rcx+4]
 * 000000014033EBD7: mov     rcx, [rsi+608h]
 * 000000014033EBDE: mov     dword ptr [rbp+20F0h+var_2088+4], eax
 * 000000014033EBE1: mov     rbx, [rbp+20F0h+var_2088]
 * 000000014033EBE5: mov     eax, edi
 * 000000014033EBE7: mov     word ptr [rbp+20F0h+var_2060], r9w
 * 000000014033EBEF: lea     rdx, [rcx+rax*8]
 * 000000014033EBF3: cmp     rbx, rdx
 * 000000014033EBF6: jnz     short loc_14033EC5F
 * 000000014033EBF8: mov     eax, 6000h
 * 000000014033EBFD: test    ax, r9w
 * 000000014033EC01: jz      short loc_14033EC13
 * 000000014033EC03: movzx   eax, r15b
 * 000000014033EC07: mov     cr8, rax
 * 000000014033EC0B: xor     r15d, r15d
 * 000000014033EC0E: jmp     loc_14033EFE9
 * 000000014033EC13: mov     rax, [rsi+468h]
 * 000000014033EC1A: mov     ecx, edi
 * 000000014033EC1C: call    KeGuardDispatchICall
 * 000000014033EC21: mov     r14, [rax]
 * 000000014033EC24: test    r14, r14
 * 000000014033EC27: jz      short loc_14033EC51
 * 000000014033EC29: mov     r12, [r12+r14]
 * 000000014033EC2D: mov     [rbp+20F0h+var_20B8], r12
 * 000000014033EC31: cmp     edi, 30h ; '0'
 * 000000014033EC34: jnb     short loc_14033EC46
 * 000000014033EC36: movzx   eax, r15b
 * 000000014033EC3A: mov     cr8, rax
 * 000000014033EC3E: xor     r15d, r15d
 * 000000014033EC41: jmp     loc_14033EFE5
 * 000000014033EC46: mov     r13, [r13+r14+0]
 * 000000014033EC4B: mov     r8, [rbp+20F0h+var_20D8]
 * 000000014033EC4F: jmp     short loc_14033EC66
 * 000000014033EC51: mov     r8, [rbp+20F0h+var_20D8]
 * 000000014033EC55: or      r14, 0FFFFFFFFFFFFFFFFh
 * 000000014033EC59: mov     r13, [rbp+20F0h+var_20A0]
 * 000000014033EC5D: jmp     short loc_14033EC62
 * 000000014033EC5F: mov     r13, r10
 * 000000014033EC62: mov     r12, [rbp+20F0h+var_20B8]
 * 000000014033EC66: movzx   eax, r15b
 * 000000014033EC6A: mov     cr8, rax
 * 000000014033EC6E: xor     r15d, r15d
 * 000000014033EC71: test    r14, r14
 * 000000014033EC74: jnz     short loc_14033ECBF
 * 000000014033EC76: mov     rdx, [rbp+20F0h+var_1F48]
 * 000000014033EC7D: cmp     rbx, rdx
 * 000000014033EC80: jb      loc_14033EFE5
 * 000000014033EC86: cmp     rbx, r8
 * 000000014033EC89: ja      loc_14033EFE5
 * 000000014033EC8F: mov     r8d, dword ptr [rbp+20F0h+var_2088]
 * 000000014033EC93: mov     rcx, [rsi+8C0h]
 * 000000014033EC9A: sub     r8d, edx
 * 000000014033EC9D: mov     rax, [rsi+208h]
 * 000000014033ECA4: call    KeGuardDispatchICall
 * 000000014033ECA9: test    rax, rax
 * 000000014033ECAC: jz      loc_14033EFE5
 * 000000014033ECB2: mov     eax, [rax+24h]
 * 000000014033ECB5: bt      eax, 19h
 * 000000014033ECB9: jb      loc_14033EFE5
 * 000000014033ECBF: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033ECC3: mov     ecx, 10h
 * 000000014033ECC8: cmp     [rax-2], cx
 * 000000014033ECCC: jnz     loc_14033EFE5
 * 000000014033ECD2: movzx   ecx, word ptr [rax]
 * 000000014033ECD5: mov     edx, 1F00h
 * 000000014033ECDA: movzx   eax, cx
 * 000000014033ECDD: and     ax, dx
 * 000000014033ECE0: mov     edx, 0E00h
 * 000000014033ECE5: cmp     ax, dx
 * 000000014033ECE8: jnz     loc_14033EFE5
 * 000000014033ECEE: mov     eax, 8000h
 * 000000014033ECF3: test    ax, cx
 * 000000014033ECF6: jz      loc_14033EFE5
 * 000000014033ECFC: mov     rax, [rsi+258h]
 * 000000014033ED03: lea     rdx, [rbp+20F0h+var_1F48]
 * 000000014033ED0A: xor     r8d, r8d
 * 000000014033ED0D: mov     rcx, rbx
 * 000000014033ED10: call    KeGuardDispatchICall
 * 000000014033ED15: test    rax, rax
 * 000000014033ED18: jz      loc_14033EF48
 * 000000014033ED1E: mov     eax, [rax]
 * 000000014033ED20: mov     rcx, [rbp+20F0h+var_1F48]
 * 000000014033ED27: add     rax, rcx
 * 000000014033ED2A: cmp     rax, rbx
 * 000000014033ED2D: jnz     loc_14033EF48
 * 000000014033ED33: cmp     rcx, [rsi+8B0h]
 * 000000014033ED3A: jnz     loc_14033EF48
 * 000000014033ED40: test    r14, r14
 * 000000014033ED43: jnz     loc_14033EF51
 * 000000014033ED49: mov     r13d, 1
 * 000000014033ED4F: mov     rcx, [rbp+20F0h+var_20F0]
 * 000000014033ED53: add     edi, r13d
 * 000000014033ED56: add     rcx, 10h
 * 000000014033ED5A: mov     ebx, 0Fh
 * 000000014033ED5F: mov     [rbp+20F0h+var_20F0], rcx
 * 000000014033ED63: cmp     edi, 0FFh
 * 000000014033ED69: jbe     loc_14033EB83
 * 000000014033ED6F: test    [rsi+863h], r13b
 * 000000014033ED76: jz      loc_14033EE4A
 * 000000014033ED7C: cli
 * 000000014033ED7D: mov     r14d, 0C0000082h
 * 000000014033ED83: mov     ecx, r14d
 * 000000014033ED86: rdmsr
 * 000000014033ED88: shl     rdx, 20h
 * 000000014033ED8C: or      rax, rdx
 * 000000014033ED8F: lea     rdx, [rsi+862h]
 * 000000014033ED96: mov     rbx, rax
 * 000000014033ED99: mov     rax, rdx
 * 000000014033ED9C: shr     rdx, 20h
 * 000000014033EDA0: wrmsr
 * 000000014033EDA2: test    dword ptr [rsi+974h], 20000h
 * 000000014033EDAC: jnz     short loc_14033EDF0
 * 000000014033EDAE: mov     rdx, gs:20h
 * 000000014033EDB7: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014033EDC1: mov     rax, [rsi+4B0h]
 * 000000014033EDC8: add     rcx, rsi
 * 000000014033EDCB: mov     [rax], rcx
 * 000000014033EDCE: mov     rax, [rsi+4B8h]
 * 000000014033EDD5: mov     [rax], rdx
 * 000000014033EDD8: mov     rax, [rsi+4C0h]
 * 000000014033EDDF: mov     [rax], r14
 * 000000014033EDE2: mov     rax, [rsi+4C8h]
 * 000000014033EDE9: mov     qword ptr [rax], 112h
 * 000000014033EDF0: lea     rax, [rsi+864h]
 * 000000014033EDF7: call    KeGuardDispatchICall
 * 000000014033EDFC: test    dword ptr [rsi+974h], 20000h
 * 000000014033EE06: jnz     short loc_14033EE3A
 * 000000014033EE08: mov     rax, [rsi+4B0h]
 * 000000014033EE0F: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014033EE19: mov     [rax], rcx
 * 000000014033EE1C: mov     rax, [rsi+4B8h]
 * 000000014033EE23: mov     [rax], r15
 * 000000014033EE26: mov     rax, [rsi+4C0h]
 * 000000014033EE2D: mov     [rax], r15
 * 000000014033EE30: mov     rax, [rsi+4C8h]
 * 000000014033EE37: mov     [rax], r15
 * 000000014033EE3A: mov     rdx, rbx
 * 000000014033EE3D: mov     rax, rbx
 * 000000014033EE40: shr     rdx, 20h
 * 000000014033EE44: mov     ecx, r14d
 * 000000014033EE47: wrmsr
 * 000000014033EE49: sti
 * 000000014033EE4A: mov     r15, [rbp+20F0h+var_20C8]
 * 000000014033EE4E: add     dword ptr [rsi+810h], 350h
 * 000000014033EE58: mov     r8, r15
 * 000000014033EE5B: mov     ebx, [rsi+810h]
 * 000000014033EE61: mov     rax, r15
 * 000000014033EE64: mov     r9d, [rsi+7FCh]
 * 000000014033EE6B: mov     r11, [rsi+800h]
 * 000000014033EE72: lea     rcx, [r15+350h]
 * 000000014033EE79: cmp     r15, rcx
 * 000000014033EE7C: jnb     short loc_14033EE8E
 * 000000014033EE7E: mov     edx, 40h ; '@'
 * 000000014033EE83: prefetchnta byte ptr [rax]
 * 000000014033EE86: add     rax, rdx
 * 000000014033EE89: cmp     rax, rcx
 * 000000014033EE8C: jb      short loc_14033EE83
 * 000000014033EE8E: mov     r14, r11
 * 000000014033EE91: mov     esi, 0FFFFFFFFh
 * 000000014033EE96: mov     rdi, 7010008004002001h
 * 000000014033EEA0: mov     r10d, 6
 * 000000014033EEA6: mov     eax, 8
 * 000000014033EEAB: xor     r14, [r8]
 * 000000014033EEAE: mov     ecx, r9d
 * 000000014033EEB1: rol     r14, cl
 * 000000014033EEB4: xor     r14, [r8+8]
 * 000000014033EEB8: add     r8, 10h
 * 000000014033EEBC: rol     r14, cl
 * 000000014033EEBF: sub     rax, r13
 * 000000014033EEC2: jnz     short loc_14033EEAB
 * 000000014033EEC4: mov     rcx, r8
 * 000000014033EEC7: sub     rcx, r15
 * 000000014033EECA: xor     rcx, r11
 * 000000014033EECD: mov     rax, rcx
 * 000000014033EED0: rol     rax, 11h
 * 000000014033EED4: xor     rcx, rax
 * 000000014033EED7: mov     rax, rdi
 * 000000014033EEDA: mul     rcx
 * 000000014033EEDD: xor     eax, edx
 * 000000014033EEDF: mov     [rbp+20F0h+var_1A10], rdx
 * 000000014033EEE6: xor     r9d, eax
 * 000000014033EEE9: and     r9d, 3Fh
 * 000000014033EEED: cmovz   r9d, r13d
 * 000000014033EEF1: add     r10d, esi
 * 000000014033EEF4: jnz     short loc_14033EEA6
 * 000000014033EEF6: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033EEFA: lea     edx, [r10+50h]
 * 000000014033EEFE: mov     r12d, [rbp+20F0h+var_2090]
 * 000000014033EF02: lea     eax, [rdx-46h]
 * 000000014033EF05: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033EF0C: xor     r14, [r8]
 * 000000014033EF0F: mov     ecx, r9d
 * 000000014033EF12: rol     r14, cl
 * 000000014033EF15: add     r8, 8
 * 000000014033EF19: add     edx, 0FFFFFFF8h
 * 000000014033EF1C: sub     rax, r13
 * 000000014033EF1F: jnz     short loc_14033EF0C
 * 000000014033EF21: test    edx, edx
 * 000000014033EF23: jz      short loc_14033EF40
 * 000000014033EF25: mov     r11d, 0FFFFFFFFh
 * 000000014033EF2B: movzx   eax, byte ptr [r8]
 * 000000014033EF2F: mov     ecx, r9d
 * 000000014033EF32: xor     r14, rax
 * 000000014033EF35: add     r8, r13
 * 000000014033EF38: rol     r14, cl
 * 000000014033EF3B: add     edx, r11d
 * 000000014033EF3E: jnz     short loc_14033EF2B
 * 000000014033EF40: mov     rax, r14
 * 000000014033EF43: jmp     loc_14033F023
 * 000000014033EF48: test    r14, r14
 * 000000014033EF4B: jz      loc_14033EFE5
 * 000000014033EF51: mov     eax, 6000h
 * 000000014033EF56: test    word ptr [rbp+20F0h+var_2060], ax
 * 000000014033EF5D: jnz     loc_14033EFE5
 * 000000014033EF63: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 000000014033EF67: jz      loc_14033ED49
 * 000000014033EF6D: mov     rax, [rsi+258h]
 * 000000014033EF74: lea     rdx, [rbp+20F0h+var_1F48]
 * 000000014033EF7B: xor     r8d, r8d
 * 000000014033EF7E: mov     rcx, r12
 * 000000014033EF81: call    KeGuardDispatchICall
 * 000000014033EF86: test    rax, rax
 * 000000014033EF89: jz      short loc_14033EFE5
 * 000000014033EF8B: mov     eax, [rax]
 * 000000014033EF8D: mov     rdx, [rbp+20F0h+var_1F48]
 * 000000014033EF94: add     rax, rdx
 * 000000014033EF97: cmp     rax, r12
 * 000000014033EF9A: jnz     short loc_14033EFE5
 * 000000014033EF9C: cmp     rdx, [rsi+8B0h]
 * 000000014033EFA3: jnz     short loc_14033EFE5
 * 000000014033EFA5: mov     rcx, [rsi+8C0h]
 * 000000014033EFAC: mov     r8d, r12d
 * 000000014033EFAF: mov     rax, [rsi+208h]
 * 000000014033EFB6: sub     r8d, edx
 * 000000014033EFB9: call    KeGuardDispatchICall
 * 000000014033EFBE: test    rax, rax
 * 000000014033EFC1: jz      short loc_14033EFE5
 * 000000014033EFC3: mov     eax, [rax+24h]
 * 000000014033EFC6: bt      eax, 19h
 * 000000014033EFCA: jb      short loc_14033EFE5
 * 000000014033EFCC: cmp     edi, 0FEh
 * 000000014033EFD2: jnz     loc_14033ED49
 * 000000014033EFD8: cmp     r13, [rsi+8A0h]
 * 000000014033EFDF: jz      loc_14033ED49
 * 000000014033EFE5: mov     r10, [rbp+20F0h+var_20B8]
 * 000000014033EFE9: mov     rax, [rsi+580h]
 * 000000014033EFF0: mov     [rax], rbx
 * 000000014033EFF3: mov     dword ptr [rax+10h], 80h
 * 000000014033EFFA: test    r10, r10
 * 000000014033EFFD: jz      short loc_14033F011
 * 000000014033EFFF: mov     rax, [rsi+580h]
 * 000000014033F006: mov     [rax+8], r10
 * 000000014033F00A: mov     dword ptr [rax+14h], 80h
 * 000000014033F011: mov     r13d, 1
 * 000000014033F017: mov     [rbp+20F0h+var_2090], r13d
 * 000000014033F01B: jmp     loc_14033ED4F
 * 000000014033F020: xor     r14d, eax
 * 000000014033F023: shr     rax, 1Fh
 * 000000014033F027: test    rax, rax
 * 000000014033F02A: jnz     short loc_14033F020
 * 000000014033F02C: lea     eax, [rbx+10h]
 * 000000014033F02F: btr     r14d, 1Fh
 * 000000014033F034: mov     [rsi+810h], eax
 * 000000014033F03A: lea     rdx, [r15+0E10h]
 * 000000014033F041: mov     r10d, [rsi+7FCh]
 * 000000014033F048: lea     rcx, [r15+0E20h]
 * 000000014033F04F: mov     rbx, [rsi+800h]
 * 000000014033F056: mov     rax, rdx
 * 000000014033F059: cmp     rdx, rcx
 * 000000014033F05C: jnb     short loc_14033F06F
 * 000000014033F05E: mov     r8d, 40h ; '@'
 * 000000014033F064: prefetchnta byte ptr [rax]
 * 000000014033F067: add     rax, r8
 * 000000014033F06A: cmp     rax, rcx
 * 000000014033F06D: jb      short loc_14033F064
 * 000000014033F06F: mov     r8d, 10h
 * 000000014033F075: lea     r9d, [r8-0Eh]
 * 000000014033F079: xor     rbx, [rdx]
 * 000000014033F07C: mov     ecx, r10d
 * 000000014033F07F: rol     rbx, cl
 * 000000014033F082: add     rdx, 8
 * 000000014033F086: add     r8d, 0FFFFFFF8h
 * 000000014033F08A: sub     r9, r13
 * 000000014033F08D: jnz     short loc_14033F079
 * 000000014033F08F: test    r8d, r8d
 * 000000014033F092: jz      short loc_14033F0AE
 * 000000014033F094: mov     r11d, 0FFFFFFFFh
 * 000000014033F09A: movzx   eax, byte ptr [rdx]
 * 000000014033F09D: mov     ecx, r10d
 * 000000014033F0A0: xor     rbx, rax
 * 000000014033F0A3: add     rdx, r13
 * 000000014033F0A6: rol     rbx, cl
 * 000000014033F0A9: add     r8d, r11d
 * 000000014033F0AC: jnz     short loc_14033F09A
 * 000000014033F0AE: mov     rax, rbx
 * 000000014033F0B1: jmp     short loc_14033F0B5
 * 000000014033F0B3: xor     ebx, eax
 * 000000014033F0B5: shr     rax, 1Fh
 * 000000014033F0B9: test    rax, rax
 * 000000014033F0BC: jnz     short loc_14033F0B3
 * 000000014033F0BE: mov     rax, [rsi+190h]
 * 000000014033F0C5: lea     rcx, [rbp+20F0h+var_1710]
 * 000000014033F0CC: btr     ebx, 1Fh
 * 000000014033F0D0: call    KeGuardDispatchICall
 * 000000014033F0D5: mov     r9, [rbp+20F0h+var_20D0]
 * 000000014033F0D9: xor     r10d, r10d
 * 000000014033F0DC: mov     r8d, [r9+14h]
 * 000000014033F0E0: cmp     r14d, r8d
 * 000000014033F0E3: jnz     short loc_14033F104
 * 000000014033F0E5: mov     eax, ebx
 * 000000014033F0E7: cmp     rax, [r9+18h]
 * 000000014033F0EB: jnz     short loc_14033F104
 * 000000014033F0ED: movzx   eax, word ptr [r9+2Ch]
 * 000000014033F0F2: cmp     [rbp+20F0h+var_1D20], ax
 * 000000014033F0F9: jnz     short loc_14033F104
 * 000000014033F0FB: test    r12d, r12d
 * 000000014033F0FE: jz      loc_14033F18C
 * 000000014033F104: test    r12d, r12d
 * 000000014033F107: jnz     short loc_14033F13C
 * 000000014033F109: mov     rdx, [r9+18h]
 * 000000014033F10D: mov     ecx, [rsi+8D8h]
 * 000000014033F113: mov     eax, ebx
 * 000000014033F115: cmp     rax, rdx
 * 000000014033F118: jnz     short loc_14033F126
 * 000000014033F11A: test    ecx, ecx
 * 000000014033F11C: jnz     short loc_14033F13C
 * 000000014033F11E: mov     rcx, r8
 * 000000014033F121: mov     eax, r14d
 * 000000014033F124: jmp     short loc_14033F12E
 * 000000014033F126: test    ecx, ecx
 * 000000014033F128: jnz     short loc_14033F13C
 * 000000014033F12A: mov     ecx, edx
 * 000000014033F12C: mov     eax, ebx
 * 000000014033F12E: xor     rcx, rax
 * 000000014033F131: mov     rax, [rsi+580h]
 * 000000014033F138: mov     [rax+18h], rcx
 * 000000014033F13C: mov     r11, 0B3B74BDEE4453415h
 * 000000014033F146: mov     rcx, [r9+8]
 * 000000014033F14A: cmp     [rsi+8D8h], r10d
 * 000000014033F151: jnz     short loc_14033F196
 * 000000014033F153: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033F15D: add     rax, rsi
 * 000000014033F160: mov     [rsi+8E0h], rax
 * 000000014033F167: lea     rax, [r9+r11]
 * 000000014033F16B: mov     [rsi+8E8h], rax
 * 000000014033F172: movsxd  rax, dword ptr [r9]
 * 000000014033F175: mov     [rsi+8F0h], rax
 * 000000014033F17C: mov     [rsi+8F8h], rcx
 * 000000014033F183: mov     [rsi+8D8h], r13d
 * 000000014033F18A: jmp     short loc_14033F196
 * 000000014033F18C: mov     r11, 0B3B74BDEE4453415h
 * 000000014033F196: add     dword ptr [rsi+810h], 10000h
 * 000000014033F1A0: jmp     loc_14033462F
 * 000000014033F1A5: mov     edx, [r13+2Ch]
 * 000000014033F1A9: lea     rcx, [rbp+20F0h+var_1700]
 * 000000014033F1B0: mov     rax, [rsi+198h]
 * 000000014033F1B7: call    KeGuardDispatchICall
 * 000000014033F1BC: mov     rax, [rsi+1C8h]
 * 000000014033F1C3: lea     rdx, [rbp+20F0h+var_16F0]
 * 000000014033F1CA: lea     rcx, [rbp+20F0h+var_1700]
 * 000000014033F1D1: call    KeGuardDispatchICall
 * 000000014033F1D6: xor     ecx, ecx
 * 000000014033F1D8: xgetbv
 * 000000014033F1DB: shl     rdx, 20h
 * 000000014033F1DF: lea     rcx, [rbp+20F0h+var_16F0]
 * 000000014033F1E6: or      rdx, rax
 * 000000014033F1E9: mov     rax, [rsi+190h]
 * 000000014033F1F0: mov     rbx, rdx
 * 000000014033F1F3: call    KeGuardDispatchICall
 * 000000014033F1F8: mov     r8, [r13+18h]
 * 000000014033F1FC: xor     r10d, r10d
 * 000000014033F1FF: mov     rdx, [r13+20h]
 * 000000014033F203: and     r8, rbx
 * 000000014033F206: cmp     r8, rdx
 * 000000014033F209: jz      loc_140334625
 * 000000014033F20F: mov     eax, [r13+28h]
 * 000000014033F213: mov     ecx, [r13+2Ch]
 * 000000014033F217: shl     rcx, 20h
 * 000000014033F21B: or      rcx, rax
 * 000000014033F21E: mov     eax, [rsi+8D8h]
 * 000000014033F224: test    eax, eax
 * 000000014033F226: jnz     loc_140334625
 * 000000014033F22C: mov     rax, [rsi+580h]
 * 000000014033F233: xor     rdx, r8
 * 000000014033F236: mov     [rax+18h], rdx
 * 000000014033F23A: mov     eax, [rsi+8D8h]
 * 000000014033F240: test    eax, eax
 * 000000014033F242: jnz     loc_140334625
 * 000000014033F248: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033F252: mov     r11, 0B3B74BDEE4453415h
 * 000000014033F25C: add     rax, rsi
 * 000000014033F25F: mov     [rsi+8E0h], rax
 * 000000014033F266: lea     rax, [r11+r13]
 * 000000014033F26A: mov     [rsi+8E8h], rax
 * 000000014033F271: movsxd  rax, dword ptr [r13+0]
 * 000000014033F275: mov     [rsi+8F0h], rax
 * 000000014033F27C: mov     [rsi+8F8h], rcx
 * 000000014033F283: jmp     loc_1403388DD
 * 000000014033F288: xor     r10d, r10d
 * 000000014033F28B: jmp     short loc_14033F290
 * 000000014033F28D: mov     r13, rdx
 * 000000014033F290: mov     [rsi+808h], ecx
 * 000000014033F296: cmp     [rbp+20F0h+var_2018], r10d
 * 000000014033F29D: jz      short loc_14033F30C
 * 000000014033F29F: mov     rcx, gs:20h
 * 000000014033F2A8: mov     rax, [rsi+630h]
 * 000000014033F2AF: mov     rdx, [rax+rcx]
 * 000000014033F2B3: lea     rcx, [rbp+20F0h+var_16E0]
 * 000000014033F2BA: mov     rax, [rsi+670h]
 * 000000014033F2C1: add     rdx, [rsi+690h]
 * 000000014033F2C8: mov     rbx, [rdx+rax]
 * 000000014033F2CC: mov     rax, [rsi+190h]
 * 000000014033F2D3: call    KeGuardDispatchICall
 * 000000014033F2D8: mov     rax, [rsi+438h]
 * 000000014033F2DF: lea     rcx, [rbp+20F0h+var_1B40]
 * 000000014033F2E6: call    KeGuardDispatchICall
 * 000000014033F2EB: mov     rax, [rsi+3A0h]
 * 000000014033F2F2: mov     rcx, rbx
 * 000000014033F2F5: call    KeGuardDispatchICall
 * 000000014033F2FA: mov     rax, [rsi+3B0h]
 * 000000014033F301: mov     rcx, rbx
 * 000000014033F304: call    KeGuardDispatchICall
 * 000000014033F309: xor     r10d, r10d
 * 000000014033F30C: cmp     [rbp+20F0h+var_20C0], r10d
 * 000000014033F310: jz      loc_14033F3B1
 * 000000014033F316: test    [rsi+970h], r14d
 * 000000014033F31D: jnz     short loc_14033F32C
 * 000000014033F31F: cmp     [rsi+8D8h], r10d
 * 000000014033F326: jnz     loc_14033F3B1
 * 000000014033F32C: mov     rbx, [rsi+960h]
 * 000000014033F333: lea     rdx, [rbp+20F0h+var_1B40]
 * 000000014033F33A: mov     [rsi+960h], r10
 * 000000014033F341: mov     rcx, rbx
 * 000000014033F344: mov     rax, [rsi+290h]
 * 000000014033F34B: call    KeGuardDispatchICall
 * 000000014033F350: mov     eax, [rsi+970h]
 * 000000014033F356: test    r13b, al
 * 000000014033F359: jz      short loc_14033F397
 * 000000014033F35B: and     eax, 0FFFFFFFEh
 * 000000014033F35E: mov     rcx, rbx
 * 000000014033F361: mov     [rsi+970h], eax
 * 000000014033F367: mov     rax, [rsi+278h]
 * 000000014033F36E: call    KeGuardDispatchICall
 * 000000014033F373: xor     r10d, r10d
 * 000000014033F376: mov     rbx, rax
 * 000000014033F379: test    rax, rax
 * 000000014033F37C: jz      loc_14033F54B
 * 000000014033F382: mov     rax, [rsi+298h]
 * 000000014033F389: mov     rcx, rbx
 * 000000014033F38C: call    KeGuardDispatchICall
 * 000000014033F391: mov     [rsi+950h], eax
 * 000000014033F397: xor     r10d, r10d
 * 000000014033F39A: test    rbx, rbx
 * 000000014033F39D: jz      short loc_14033F3B1
 * 000000014033F39F: mov     rax, [rsi+280h]
 * 000000014033F3A6: mov     rcx, rbx
 * 000000014033F3A9: call    KeGuardDispatchICall
 * 000000014033F3AE: xor     r10d, r10d
 * 000000014033F3B1: mov     eax, [rsi+970h]
 * 000000014033F3B7: mov     ecx, 800008h
 * 000000014033F3BC: and     eax, ecx
 * 000000014033F3BE: cmp     eax, ecx
 * 000000014033F3C0: jnz     loc_14033F7A9
 * 000000014033F3C6: mov     eax, [rsi+974h]
 * 000000014033F3CC: mov     r11d, [rsi+7F0h]
 * 000000014033F3D3: and     eax, r13d
 * 000000014033F3D6: mov     rax, [rsi+0A40h]
 * 000000014033F3DD: mov     r10d, [rsi+7CCh]
 * 000000014033F3E4: mov     r12, [rsi+9D8h]
 * 000000014033F3EB: mov     [rbp+20F0h+var_2070], rax
 * 000000014033F3F2: mov     [rbp+20F0h+var_20C0], r11d
 * 000000014033F3F6: jz      short loc_14033F3FF
 * 000000014033F3F8: mov     r12, [rsi+5C8h]
 * 000000014033F3FF: mov     rax, [rsi+158h]
 * 000000014033F406: mov     [rbp+20F0h+var_2088], rax
 * 000000014033F40A: mov     rax, [rsi+2C0h]
 * 000000014033F411: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033F415: mov     rax, [rsi+338h]
 * 000000014033F41C: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033F420: rdtsc
 * 000000014033F422: shl     rdx, 20h
 * 000000014033F426: mov     rbx, 7010008004002001h
 * 000000014033F430: or      rax, rdx
 * 000000014033F433: mov     r9, rdi
 * 000000014033F436: mov     rcx, rax
 * 000000014033F439: ror     rax, 3
 * 000000014033F43D: xor     rcx, rax
 * 000000014033F440: mov     rax, rbx
 * 000000014033F443: mul     rcx
 * 000000014033F446: mov     rcx, rdx
 * 000000014033F449: mov     [rbp+20F0h+var_1A08], rdx
 * 000000014033F450: xor     rcx, rax
 * 000000014033F453: mov     rax, 0ABCC77118461CEFDh
 * 000000014033F45D: mul     rcx
 * 000000014033F460: shr     rdx, 1Ah
 * 000000014033F464: imul    rax, rdx, 5F5E100h
 * 000000014033F46B: sub     rcx, rax
 * 000000014033F46E: sub     r9, rcx
 * 000000014033F471: mov     [rbp+20F0h+var_1ED8], r9
 * 000000014033F478: mov     r8d, [rsi+970h]
 * 000000014033F47F: bt      r8d, 1Ah
 * 000000014033F484: jnb     loc_14033F527
 * 000000014033F48A: rdtsc
 * 000000014033F48C: shl     rdx, 20h
 * 000000014033F490: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 000000014033F49A: or      rax, rdx
 * 000000014033F49D: mov     rcx, rax
 * 000000014033F4A0: ror     rax, 3
 * 000000014033F4A4: xor     rcx, rax
 * 000000014033F4A7: mov     rax, rbx
 * 000000014033F4AA: mul     rcx
 * 000000014033F4AD: mov     rcx, rdx
 * 000000014033F4B0: mov     [rbp+20F0h+var_1A00], rdx
 * 000000014033F4B7: xor     rcx, rax
 * 000000014033F4BA: mov     rax, r14
 * 000000014033F4BD: mul     rcx
 * 000000014033F4C0: shr     rdx, 3
 * 000000014033F4C4: lea     rax, [rdx+rdx*4]
 * 000000014033F4C8: add     rax, rax
 * 000000014033F4CB: sub     rcx, rax
 * 000000014033F4CE: mov     eax, 2
 * 000000014033F4D3: cmp     rcx, rax
 * 000000014033F4D6: jnb     short loc_14033F527
 * 000000014033F4D8: rdtsc
 * 000000014033F4DA: shl     rdx, 20h
 * 000000014033F4DE: or      rax, rdx
 * 000000014033F4E1: mov     rcx, rax
 * 000000014033F4E4: ror     rax, 3
 * 000000014033F4E8: xor     rcx, rax
 * 000000014033F4EB: mov     rax, rbx
 * 000000014033F4EE: mul     rcx
 * 000000014033F4F1: mov     rcx, rdx
 * 000000014033F4F4: mov     [rbp+20F0h+var_19F8], rdx
 * 000000014033F4FB: xor     rcx, rax
 * 000000014033F4FE: mov     rax, r14
 * 000000014033F501: mul     rcx
 * 000000014033F504: shr     rdx, 3
 * 000000014033F508: lea     rax, [rdx+rdx*4]
 * 000000014033F50C: add     rax, rax
 * 000000014033F50F: sub     rcx, rax
 * 000000014033F512: add     rcx, r13
 * 000000014033F515: imul    rcx, r9
 * 000000014033F519: mov     [rbp+20F0h+var_1ED8], rcx
 * 000000014033F520: mov     r8d, [rsi+970h]
 * 000000014033F527: xor     r9d, r9d
 * 000000014033F52A: mov     r14d, r11d
 * 000000014033F52D: mov     ebx, r9d
 * 000000014033F530: mov     r15d, r9d
 * 000000014033F533: lea     ecx, [r9+2]
 * 000000014033F537: test    cl, r8b
 * 000000014033F53A: cmovnz  r14d, r10d
 * 000000014033F53E: test    r8b, r8b
 * 000000014033F541: js      short loc_14033F55B
 * 000000014033F543: mov     r13d, r9d
 * 000000014033F546: jmp     loc_14033F624
 * 000000014033F54B: mov     eax, 0FFFFFFFFh
 * 000000014033F550: mov     [rsi+950h], eax
 * 000000014033F556: jmp     loc_14033F39A
 * 000000014033F55B: rdtsc
 * 000000014033F55D: shl     rdx, 20h
 * 000000014033F561: or      rax, rdx
 * 000000014033F564: mov     rcx, rax
 * 000000014033F567: ror     rax, 3
 * 000000014033F56B: xor     rcx, rax
 * 000000014033F56E: mov     rax, 7010008004002001h
 * 000000014033F578: mul     rcx
 * 000000014033F57B: mov     ecx, 14Eh
 * 000000014033F580: mov     rbx, rdx
 * 000000014033F583: mov     [rbp+20F0h+var_19F0], rdx
 * 000000014033F58A: xor     rbx, rax
 * 000000014033F58D: mov     edx, 1
 * 000000014033F592: mov     r15, rbx
 * 000000014033F595: lea     rax, [rsi+0A68h]
 * 000000014033F59C: xor     r15, rsi
 * 000000014033F59F: mov     r10, rbx
 * 000000014033F5A2: xor     [rax], r10
 * 000000014033F5A5: lea     rax, [rax-8]
 * 000000014033F5A9: ror     r10, cl
 * 000000014033F5AC: sub     ecx, edx
 * 000000014033F5AE: jnz     short loc_14033F5A2
 * 000000014033F5B0: lea     r8, [r11-0A70h]
 * 000000014033F5B7: shr     r8, 3
 * 000000014033F5BB: test    r8d, r8d
 * 000000014033F5BE: jz      short loc_14033F5F8
 * 000000014033F5C0: movsxd  r9, r8d
 * 000000014033F5C3: add     rsi, 0A68h
 * 000000014033F5CA: mov     rdi, rdx
 * 000000014033F5CD: lea     r9, [rsi+r9*8]
 * 000000014033F5D1: mov     rdx, [r9]
 * 000000014033F5D4: lea     rax, [r15+r15]
 * 000000014033F5D8: mov     ecx, r8d
 * 000000014033F5DB: lea     r9, [r9-8]
 * 000000014033F5DF: ror     rdx, cl
 * 000000014033F5E2: mov     r15, rdx
 * 000000014033F5E5: xor     r15, rax
 * 000000014033F5E8: sub     r8d, edi
 * 000000014033F5EB: jnz     short loc_14033F5D1
 * 000000014033F5ED: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033F5F1: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033F5F8: mov     ecx, r14d
 * 000000014033F5FB: lea     rdx, [r11+rsi]
 * 000000014033F5FF: sub     ecx, r11d
 * 000000014033F602: shr     ecx, 3
 * 000000014033F605: test    ecx, ecx
 * 000000014033F607: jz      short loc_14033F624
 * 000000014033F609: lea     rdx, [rdx+rcx*8]
 * 000000014033F60D: mov     eax, 1
 * 000000014033F612: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 000000014033F616: xor     [rdx], r10
 * 000000014033F619: lea     rdx, [rdx-8]
 * 000000014033F61D: ror     r10, cl
 * 000000014033F620: sub     ecx, eax
 * 000000014033F622: jnz     short loc_14033F616
 * 000000014033F624: mov     rax, [rbp+20F0h+var_2070]
 * 000000014033F62B: test    rax, rax
 * 000000014033F62E: jz      short loc_14033F651
 * 000000014033F630: mov     r9, [rbp+20F0h+var_2088]
 * 000000014033F634: lea     r8, [rbp+20F0h+var_1ED8]
 * 000000014033F63B: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 000000014033F640: mov     edx, r14d
 * 000000014033F643: mov     rax, [rbp+20F0h+var_20C8]
 * 000000014033F647: mov     rcx, rsi
 * 000000014033F64A: call    KeGuardDispatchICall
 * 000000014033F64F: jmp     short loc_14033F68A
 * 000000014033F651: xor     edx, edx
 * 000000014033F653: test    r12, r12
 * 000000014033F656: jnz     short loc_14033F66C
 * 000000014033F658: mov     rax, [rbp+20F0h+var_2088]
 * 000000014033F65C: lea     r8, [rbp+20F0h+var_1ED8]
 * 000000014033F663: xor     ecx, ecx
 * 000000014033F665: call    KeGuardDispatchICall
 * 000000014033F66A: jmp     short loc_14033F68A
 * 000000014033F66C: lea     rax, [rbp+20F0h+var_1ED8]
 * 000000014033F673: xor     r9d, r9d
 * 000000014033F676: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 000000014033F67B: xor     r8d, r8d
 * 000000014033F67E: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033F682: mov     rcx, r12
 * 000000014033F685: call    KeGuardDispatchICall
 * 000000014033F68A: xor     r10d, r10d
 * 000000014033F68D: test    r13d, r13d
 * 000000014033F690: jz      loc_14033F7A9
 * 000000014033F696: mov     r9, rbx
 * 000000014033F699: lea     rax, [rsi+0A68h]
 * 000000014033F6A0: xor     r9, rsi
 * 000000014033F6A3: lea     r13d, [r10+1]
 * 000000014033F6A7: mov     ecx, 14Eh
 * 000000014033F6AC: xor     [rax], rbx
 * 000000014033F6AF: lea     rax, [rax-8]
 * 000000014033F6B3: ror     rbx, cl
 * 000000014033F6B6: sub     ecx, r13d
 * 000000014033F6B9: jnz     short loc_14033F6AC
 * 000000014033F6BB: mov     r12d, [rbp+20F0h+var_20C0]
 * 000000014033F6BF: mov     r11d, r12d
 * 000000014033F6C2: lea     r8, [r12-0A70h]
 * 000000014033F6CA: shr     r8, 3
 * 000000014033F6CE: test    r8d, r8d
 * 000000014033F6D1: jz      short loc_14033F703
 * 000000014033F6D3: movsxd  r10, r8d
 * 000000014033F6D6: add     r10, 14Dh
 * 000000014033F6DD: lea     r10, [rsi+r10*8]
 * 000000014033F6E1: mov     rdx, [r10]
 * 000000014033F6E4: lea     rax, [r9+r9]
 * 000000014033F6E8: mov     ecx, r8d
 * 000000014033F6EB: lea     r10, [r10-8]
 * 000000014033F6EF: ror     rdx, cl
 * 000000014033F6F2: mov     r9, rdx
 * 000000014033F6F5: xor     r9, rax
 * 000000014033F6F8: sub     r8d, r13d
 * 000000014033F6FB: jnz     short loc_14033F6E1
 * 000000014033F6FD: mov     r11, r12
 * 000000014033F700: xor     r10d, r10d
 * 000000014033F703: sub     r14d, r12d
 * 000000014033F706: lea     rcx, [r11+rsi]
 * 000000014033F70A: shr     r14d, 3
 * 000000014033F70E: test    r14d, r14d
 * 000000014033F711: jz      short loc_14033F72F
 * 000000014033F713: mov     edx, r14d
 * 000000014033F716: dec     rdx
 * 000000014033F719: lea     rdx, [rcx+rdx*8]
 * 000000014033F71D: xor     [rdx], rbx
 * 000000014033F720: mov     ecx, r14d
 * 000000014033F723: ror     rbx, cl
 * 000000014033F726: lea     rdx, [rdx-8]
 * 000000014033F72A: sub     r14d, r13d
 * 000000014033F72D: jnz     short loc_14033F71D
 * 000000014033F72F: cmp     r9, r15
 * 000000014033F732: jz      short loc_14033F7A9
 * 000000014033F734: mov     rax, [rsi+580h]
 * 000000014033F73B: mov     ecx, [rsi+7CCh]
 * 000000014033F741: mov     [rax], rsi
 * 000000014033F744: mov     [rax+10h], ecx
 * 000000014033F747: mov     eax, [rsi+8D8h]
 * 000000014033F74D: test    eax, eax
 * 000000014033F74F: jnz     short loc_14033F7A9
 * 000000014033F751: mov     rax, [rsi+580h]
 * 000000014033F758: mov     rcx, r9
 * 000000014033F75B: xor     rcx, r15
 * 000000014033F75E: mov     [rax+18h], rcx
 * 000000014033F762: mov     eax, [rsi+8D8h]
 * 000000014033F768: test    eax, eax
 * 000000014033F76A: jnz     short loc_14033F7A9
 * 000000014033F76C: mov     r13, 0A3A03F5891C8B4E8h
 * 000000014033F776: mov     r15d, 1
 * 000000014033F77C: lea     rax, [rsi+r13]
 * 000000014033F780: mov     [rsi+8E0h], rax
 * 000000014033F787: mov     [rsi+8E8h], r10
 * 000000014033F78E: mov     qword ptr [rsi+8F0h], 10Eh
 * 000000014033F799: mov     [rsi+8F8h], r9
 * 000000014033F7A0: mov     [rsi+8D8h], r15d
 * 000000014033F7A7: jmp     short loc_14033F7B9
 * 000000014033F7A9: mov     r13, 0A3A03F5891C8B4E8h
 * 000000014033F7B3: mov     r15d, 1
 * 000000014033F7B9: mov     eax, [rsi+934h]
 * 000000014033F7BF: cmp     eax, 0Bh
 * 000000014033F7C2: jz      loc_1403440C8
 * 000000014033F7C8: cmp     eax, r15d
 * 000000014033F7CB: jz      loc_1403440C8
 * 000000014033F7D1: cmp     [rsi+8D8h], r10d
 * 000000014033F7D8: jnz     loc_1403440CC
 * 000000014033F7DE: mov     rax, [rsi+940h]
 * 000000014033F7E5: mov     rcx, [rax]
 * 000000014033F7E8: cmp     rcx, [rsi+948h]
 * 000000014033F7EF: jz      loc_140343E91
 * 000000014033F7F5: mov     ecx, [rsi+950h]
 * 000000014033F7FB: mov     r12d, 0FFFFFFFFh
 * 000000014033F801: mov     rbx, rsi
 * 000000014033F804: mov     [rbp+20F0h+var_20A0], rbx
 * 000000014033F808: cmp     ecx, r12d
 * 000000014033F80B: jz      short loc_14033F81E
 * 000000014033F80D: mov     rax, [rsi+270h]
 * 000000014033F814: call    KeGuardDispatchICall
 * 000000014033F819: mov     r14, rax
 * 000000014033F81C: jmp     short loc_14033F821
 * 000000014033F81E: mov     r14, r10
 * 000000014033F821: test    r14, r14
 * 000000014033F824: jnz     short loc_14033F840
 * 000000014033F826: mov     rax, [rsi+278h]
 * 000000014033F82D: xor     ecx, ecx
 * 000000014033F82F: call    KeGuardDispatchICall
 * 000000014033F834: mov     r14, rax
 * 000000014033F837: test    rax, rax
 * 000000014033F83A: jz      loc_1403440C8
 * 000000014033F840: mov     rax, [rsi+288h]
 * 000000014033F847: lea     rdx, [rbp+20F0h+var_1B40]
 * 000000014033F84E: mov     rcx, r14
 * 000000014033F851: call    KeGuardDispatchICall
 * 000000014033F856: mov     r15d, eax
 * 000000014033F859: test    eax, eax
 * 000000014033F85B: jns     short loc_14033F86E
 * 000000014033F85D: mov     rax, [rsi+280h]
 * 000000014033F864: mov     rcx, r14
 * 000000014033F867: call    KeGuardDispatchICall
 * 000000014033F86C: jmp     short loc_14033F8D6
 * 000000014033F86E: mov     [rsi+960h], r14
 * 000000014033F875: mov     rax, [rsi+2B0h]
 * 000000014033F87C: call    KeGuardDispatchICall
 * 000000014033F881: mov     r14, rax
 * 000000014033F884: mov     rax, [rsi+2D0h]
 * 000000014033F88B: mov     rcx, r14
 * 000000014033F88E: call    KeGuardDispatchICall
 * 000000014033F893: xor     r10d, r10d
 * 000000014033F896: mov     rdx, rax
 * 000000014033F899: test    rax, rax
 * 000000014033F89C: jnz     short loc_14033F8A3
 * 000000014033F89E: lea     ecx, [rax+4]
 * 000000014033F8A1: jmp     short loc_14033F8B8
 * 000000014033F8A3: mov     rax, [rsi+2E0h]
 * 000000014033F8AA: mov     rcx, r14
 * 000000014033F8AD: call    KeGuardDispatchICall
 * 000000014033F8B2: xor     r10d, r10d
 * 000000014033F8B5: mov     ecx, r10d
 * 000000014033F8B8: mov     eax, [rsi+974h]
 * 000000014033F8BE: mov     r15d, r10d
 * 000000014033F8C1: and     eax, 0FFFFFFFBh
 * 000000014033F8C4: or      eax, ecx
 * 000000014033F8C6: mov     [rsi+974h], eax
 * 000000014033F8CC: add     dword ptr [rsi+810h], 10000h
 * 000000014033F8D6: test    r15d, r15d
 * 000000014033F8D9: js      loc_1403440C2
 * 000000014033F8DF: mov     rax, [rsi+298h]
 * 000000014033F8E6: mov     rcx, [rsi+960h]
 * 000000014033F8ED: call    KeGuardDispatchICall
 * 000000014033F8F2: xor     r10d, r10d
 * 000000014033F8F5: test    eax, eax
 * 000000014033F8F7: jnz     loc_140343E62
 * 000000014033F8FD: mov     rax, [rsi+568h]
 * 000000014033F904: lea     ecx, [r10+20h]
 * 000000014033F908: add     rax, rcx
 * 000000014033F90B: mov     [rbp+20F0h+var_2068], 2
 * 000000014033F916: mov     [rbp+20F0h+var_1C68], rax
 * 000000014033F91D: lea     rdi, [rbp+20F0h+var_1C68]
 * 000000014033F924: mov     rax, [rsi+560h]
 * 000000014033F92B: mov     r13d, r10d
 * 000000014033F92E: add     rax, rcx
 * 000000014033F931: mov     [rbp+20F0h+var_2080], rdi
 * 000000014033F935: mov     [rbp+20F0h+var_1C60], rax
 * 000000014033F93C: mov     rax, [rsi+940h]
 * 000000014033F943: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033F947: mov     rax, [rsi+948h]
 * 000000014033F94E: mov     rsi, [rbp+20F0h+var_20F0]
 * 000000014033F952: mov     rbx, rax
 * 000000014033F955: mov     [rbp+20F0h+var_2088], rax
 * 000000014033F959: mov     rdx, [rdi]
 * 000000014033F95C: mov     r12, rsi
 * 000000014033F95F: xor     r12, r13
 * 000000014033F962: mov     [rbp+20F0h+var_2070], rdx
 * 000000014033F969: mov     r11d, r12d
 * 000000014033F96C: and     r11d, 3Fh
 * 000000014033F970: mov     r8, [rdx]
 * 000000014033F973: mov     r15d, [rdx+10h]
 * 000000014033F977: mov     r9, r8
 * 000000014033F97A: mov     r10d, r15d
 * 000000014033F97D: mov     [rbp+20F0h+var_20D8], r8
 * 000000014033F981: shl     r10d, 2
 * 000000014033F985: mov     rax, r8
 * 000000014033F988: mov     ecx, r10d
 * 000000014033F98B: add     rcx, r8
 * 000000014033F98E: cmp     r8, rcx
 * 000000014033F991: jnb     short loc_14033F9A4
 * 000000014033F993: mov     r8d, 40h ; '@'
 * 000000014033F999: prefetchnta byte ptr [rax]
 * 000000014033F99C: add     rax, r8
 * 000000014033F99F: cmp     rax, rcx
 * 000000014033F9A2: jb      short loc_14033F999
 * 000000014033F9A4: mov     r14d, r10d
 * 000000014033F9A7: xor     r13d, r13d
 * 000000014033F9AA: shr     r14d, 7
 * 000000014033F9AE: mov     r8, r12
 * 000000014033F9B1: test    r14d, r14d
 * 000000014033F9B4: jz      short loc_14033FA33
 * 000000014033F9B6: mov     r13, r9
 * 000000014033F9B9: mov     esi, 1
 * 000000014033F9BE: mov     ebx, 0FFFFFFFFh
 * 000000014033F9C3: mov     rdi, 7010008004002001h
 * 000000014033F9CD: mov     eax, 8
 * 000000014033F9D2: xor     r8, [r9]
 * 000000014033F9D5: mov     ecx, r11d
 * 000000014033F9D8: rol     r8, cl
 * 000000014033F9DB: xor     r8, [r9+8]
 * 000000014033F9DF: add     r9, 10h
 * 000000014033F9E3: rol     r8, cl
 * 000000014033F9E6: sub     rax, rsi
 * 000000014033F9E9: jnz     short loc_14033F9D2
 * 000000014033F9EB: mov     rcx, r9
 * 000000014033F9EE: sub     rcx, r13
 * 000000014033F9F1: xor     rcx, r12
 * 000000014033F9F4: mov     rax, rcx
 * 000000014033F9F7: rol     rax, 11h
 * 000000014033F9FB: xor     rcx, rax
 * 000000014033F9FE: mov     rax, rdi
 * 000000014033FA01: mul     rcx
 * 000000014033FA04: xor     eax, edx
 * 000000014033FA06: mov     [rbp+20F0h+var_19E8], rdx
 * 000000014033FA0D: xor     r11d, eax
 * 000000014033FA10: and     r11d, 3Fh
 * 000000014033FA14: cmovz   r11d, esi
 * 000000014033FA18: add     r14d, ebx
 * 000000014033FA1B: jnz     short loc_14033F9CD
 * 000000014033FA1D: mov     rdx, [rbp+20F0h+var_2070]
 * 000000014033FA24: xor     r13d, r13d
 * 000000014033FA27: mov     rdi, [rbp+20F0h+var_2080]
 * 000000014033FA2B: mov     rsi, [rbp+20F0h+var_20F0]
 * 000000014033FA2F: mov     rbx, [rbp+20F0h+var_2088]
 * 000000014033FA33: and     r10d, 7Fh
 * 000000014033FA37: mov     r14d, 1
 * 000000014033FA3D: cmp     r10d, 8
 * 000000014033FA41: jb      short loc_14033FA60
 * 000000014033FA43: mov     eax, r10d
 * 000000014033FA46: shr     rax, 3
 * 000000014033FA4A: xor     r8, [r9]
 * 000000014033FA4D: mov     ecx, r11d
 * 000000014033FA50: rol     r8, cl
 * 000000014033FA53: add     r9, 8
 * 000000014033FA57: add     r10d, 0FFFFFFF8h
 * 000000014033FA5B: sub     rax, r14
 * 000000014033FA5E: jnz     short loc_14033FA4A
 * 000000014033FA60: test    r10d, r10d
 * 000000014033FA63: jz      short loc_14033FA83
 * 000000014033FA65: mov     ebx, 0FFFFFFFFh
 * 000000014033FA6A: movzx   eax, byte ptr [r9]
 * 000000014033FA6E: mov     ecx, r11d
 * 000000014033FA71: xor     r8, rax
 * 000000014033FA74: add     r9, r14
 * 000000014033FA77: rol     r8, cl
 * 000000014033FA7A: add     r10d, ebx
 * 000000014033FA7D: jnz     short loc_14033FA6A
 * 000000014033FA7F: mov     rbx, [rbp+20F0h+var_2088]
 * 000000014033FA83: mov     r14, [rdx+18h]
 * 000000014033FA87: xor     r8, rbx
 * 000000014033FA8A: mov     r10d, r8d
 * 000000014033FA8D: mov     r9, r14
 * 000000014033FA90: and     r10d, 3Fh
 * 000000014033FA94: mov     rax, r14
 * 000000014033FA97: mov     r12, r15
 * 000000014033FA9A: lea     rcx, [r14+r15]
 * 000000014033FA9E: cmp     r14, rcx
 * 000000014033FAA1: jnb     short loc_14033FAB3
 * 000000014033FAA3: mov     edx, 40h ; '@'
 * 000000014033FAA8: prefetchnta byte ptr [rax]
 * 000000014033FAAB: add     rax, rdx
 * 000000014033FAAE: cmp     rax, rcx
 * 000000014033FAB1: jb      short loc_14033FAA8
 * 000000014033FAB3: mov     r11d, r15d
 * 000000014033FAB6: mov     r13, r8
 * 000000014033FAB9: shr     r11d, 7
 * 000000014033FABD: mov     edx, 1
 * 000000014033FAC2: test    r11d, r11d
 * 000000014033FAC5: jz      short loc_14033FB36
 * 000000014033FAC7: mov     ebx, 0FFFFFFFFh
 * 000000014033FACC: mov     r12, 7010008004002001h
 * 000000014033FAD6: mov     eax, 8
 * 000000014033FADB: xor     r13, [r9]
 * 000000014033FADE: mov     ecx, r10d
 * 000000014033FAE1: rol     r13, cl
 * 000000014033FAE4: xor     r13, [r9+8]
 * 000000014033FAE8: add     r9, 10h
 * 000000014033FAEC: rol     r13, cl
 * 000000014033FAEF: sub     rax, rdx
 * 000000014033FAF2: jnz     short loc_14033FADB
 * 000000014033FAF4: mov     rcx, r9
 * 000000014033FAF7: sub     rcx, r14
 * 000000014033FAFA: xor     rcx, r8
 * 000000014033FAFD: mov     rax, rcx
 * 000000014033FB00: rol     rax, 11h
 * 000000014033FB04: xor     rcx, rax
 * 000000014033FB07: mov     rax, r12
 * 000000014033FB0A: mul     rcx
 * 000000014033FB0D: xor     eax, edx
 * 000000014033FB0F: mov     [rbp+20F0h+var_19E0], rdx
 * 000000014033FB16: xor     r10d, eax
 * 000000014033FB19: mov     edx, 1
 * 000000014033FB1E: and     r10d, 3Fh
 * 000000014033FB22: cmovz   r10d, edx
 * 000000014033FB26: add     r11d, ebx
 * 000000014033FB29: jnz     short loc_14033FAD6
 * 000000014033FB2B: mov     rsi, [rbp+20F0h+var_20F0]
 * 000000014033FB2F: mov     r12, r15
 * 000000014033FB32: mov     rbx, [rbp+20F0h+var_2088]
 * 000000014033FB36: and     r15d, 7Fh
 * 000000014033FB3A: cmp     r15d, 8
 * 000000014033FB3E: jb      short loc_14033FB5D
 * 000000014033FB40: mov     eax, r15d
 * 000000014033FB43: shr     rax, 3
 * 000000014033FB47: xor     r13, [r9]
 * 000000014033FB4A: mov     ecx, r10d
 * 000000014033FB4D: rol     r13, cl
 * 000000014033FB50: add     r9, 8
 * 000000014033FB54: add     r15d, 0FFFFFFF8h
 * 000000014033FB58: sub     rax, rdx
 * 000000014033FB5B: jnz     short loc_14033FB47
 * 000000014033FB5D: xor     r14d, r14d
 * 000000014033FB60: test    r15d, r15d
 * 000000014033FB63: jz      short loc_14033FB83
 * 000000014033FB65: mov     r14d, 0FFFFFFFFh
 * 000000014033FB6B: movzx   eax, byte ptr [r9]
 * 000000014033FB6F: mov     ecx, r10d
 * 000000014033FB72: xor     r13, rax
 * 000000014033FB75: add     r9, rdx
 * 000000014033FB78: rol     r13, cl
 * 000000014033FB7B: add     r15d, r14d
 * 000000014033FB7E: jnz     short loc_14033FB6B
 * 000000014033FB80: xor     r14d, r14d
 * 000000014033FB83: mov     rcx, [rbp+20F0h+var_20D8]
 * 000000014033FB87: xor     r13, r12
 * 000000014033FB8A: add     rdi, 8
 * 000000014033FB8E: xor     r13, rcx
 * 000000014033FB91: mov     r15d, 1
 * 000000014033FB97: mov     [rbp+20F0h+var_2080], rdi
 * 000000014033FB9B: sub     [rbp+20F0h+var_2068], r15
 * 000000014033FBA2: jnz     loc_14033F959
 * 000000014033FBA8: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033FBAC: lea     r8, [rbp+20F0h+var_1D10]
 * 000000014033FBB3: lea     rdx, [rbp+20F0h+var_1D08]
 * 000000014033FBBA: mov     [rbp+20F0h+var_2070], r13
 * 000000014033FBC1: mov     rax, [rsi+1F8h]
 * 000000014033FBC8: call    KeGuardDispatchICall
 * 000000014033FBCD: mov     rbx, [rbp+20F0h+var_20A0]
 * 000000014033FBD1: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033FBD8: test    rax, rax
 * 000000014033FBDB: jz      loc_14034037F
 * 000000014033FBE1: rdtsc
 * 000000014033FBE3: shl     rdx, 20h
 * 000000014033FBE7: mov     r8, 7010008004002001h
 * 000000014033FBF1: or      rax, rdx
 * 000000014033FBF4: mov     rcx, rax
 * 000000014033FBF7: ror     rax, 3
 * 000000014033FBFB: xor     rcx, rax
 * 000000014033FBFE: mov     rax, r8
 * 000000014033FC01: mul     rcx
 * 000000014033FC04: mov     rcx, rdx
 * 000000014033FC07: mov     [rbp+20F0h+var_19D8], rdx
 * 000000014033FC0E: xor     rcx, rax
 * 000000014033FC11: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014033FC1B: mul     rcx
 * 000000014033FC1E: shr     rdx, 1
 * 000000014033FC21: imul    rax, rdx, 0Bh
 * 000000014033FC25: sub     rcx, rax
 * 000000014033FC28: lea     eax, [r15+4]
 * 000000014033FC2C: cmp     ecx, eax
 * 000000014033FC2E: ja      loc_14033FCEC
 * 000000014033FC34: jz      loc_14033FCD2
 * 000000014033FC3A: test    ecx, ecx
 * 000000014033FC3C: jz      short loc_14033FCB8
 * 000000014033FC3E: sub     ecx, r15d
 * 000000014033FC41: jz      short loc_14033FC9F
 * 000000014033FC43: sub     ecx, r15d
 * 000000014033FC46: jz      short loc_14033FC85
 * 000000014033FC48: cmp     ecx, r15d
 * 000000014033FC4B: jz      short loc_14033FC67
 * 000000014033FC4D: mov     [rbp+20F0h+var_1E8C], 67076494h
 * 000000014033FC57: mov     r9d, [rbp+20F0h+var_1E8C]
 * 000000014033FC5E: rol     r9d, 4
 * 000000014033FC62: jmp     loc_14033FE13
 * 000000014033FC67: mov     [rbp+20F0h+var_1E88], 0A8223938h
 * 000000014033FC71: mov     r9d, [rbp+20F0h+var_1E88]
 * 000000014033FC78: xor     r9d, 3
 * 000000014033FC7C: ror     r9d, 0Fh
 * 000000014033FC80: jmp     loc_14033FE13
 * 000000014033FC85: mov     [rbp+20F0h+var_1E84], 85B5910Dh
 * 000000014033FC8F: mov     r9d, [rbp+20F0h+var_1E84]
 * 000000014033FC96: ror     r9d, 2
 * 000000014033FC9A: jmp     loc_14033FE13
 * 000000014033FC9F: mov     [rbp+20F0h+var_1DF4], 0B2AD31A1h
 * 000000014033FCA9: mov     r9d, [rbp+20F0h+var_1DF4]
 * 000000014033FCB0: rol     r9d, 1
 * 000000014033FCB3: jmp     loc_14033FE13
 * 000000014033FCB8: mov     [rbp+20F0h+var_1DF8], 0D098D0D8h
 * 000000014033FCC2: mov     r9d, [rbp+20F0h+var_1DF8]
 * 000000014033FCC9: ror     r9d, 6
 * 000000014033FCCD: jmp     loc_14033FE13
 * 000000014033FCD2: mov     [rbp+20F0h+var_1E48], 288C49EDh
 * 000000014033FCDC: mov     r9d, [rbp+20F0h+var_1E48]
 * 000000014033FCE3: ror     r9d, 5
 * 000000014033FCE7: jmp     loc_14033FE13
 * 000000014033FCEC: mov     edx, 6
 * 000000014033FCF1: sub     ecx, edx
 * 000000014033FCF3: jz      loc_14033FDFB
 * 000000014033FCF9: sub     ecx, r15d
 * 000000014033FCFC: jz      loc_14033FDE4
 * 000000014033FD02: sub     ecx, r15d
 * 000000014033FD05: jz      loc_14033FDCD
 * 000000014033FD0B: cmp     ecx, r15d
 * 000000014033FD0E: jz      loc_14033FDB2
 * 000000014033FD14: rdtsc
 * 000000014033FD16: shl     rdx, 20h
 * 000000014033FD1A: mov     r10d, 4EC4EC4Fh
 * 000000014033FD20: or      rax, rdx
 * 000000014033FD23: mov     rcx, rax
 * 000000014033FD26: ror     rax, 3
 * 000000014033FD2A: xor     rcx, rax
 * 000000014033FD2D: mov     rax, r8
 * 000000014033FD30: mul     rcx
 * 000000014033FD33: mov     r9, rax
 * 000000014033FD36: mov     [rbp+20F0h+var_19D0], rdx
 * 000000014033FD3D: xor     r9d, edx
 * 000000014033FD40: mov     eax, r10d
 * 000000014033FD43: mul     r9d
 * 000000014033FD46: mov     ecx, r9d
 * 000000014033FD49: shr     r9d, 5
 * 000000014033FD4D: shr     edx, 3
 * 000000014033FD50: mov     r8d, r9d
 * 000000014033FD53: imul    eax, edx, 1Ah
 * 000000014033FD56: sub     ecx, eax
 * 000000014033FD58: mov     eax, r10d
 * 000000014033FD5B: mul     r9d
 * 000000014033FD5E: add     ecx, 61h ; 'a'
 * 000000014033FD61: shr     r9d, 5
 * 000000014033FD65: shl     ecx, 8
 * 000000014033FD68: shr     edx, 3
 * 000000014033FD6B: imul    eax, edx, 1Ah
 * 000000014033FD6E: sub     r8d, eax
 * 000000014033FD71: mov     eax, r10d
 * 000000014033FD74: mul     r9d
 * 000000014033FD77: add     r8d, 41h ; 'A'
 * 000000014033FD7B: or      r8d, ecx
 * 000000014033FD7E: shr     edx, 3
 * 000000014033FD81: imul    eax, edx, 1Ah
 * 000000014033FD84: mov     ecx, r9d
 * 000000014033FD87: shr     r9d, 5
 * 000000014033FD8B: shl     r8d, 8
 * 000000014033FD8F: sub     ecx, eax
 * 000000014033FD91: mov     eax, r10d
 * 000000014033FD94: mul     r9d
 * 000000014033FD97: add     ecx, 61h ; 'a'
 * 000000014033FD9A: shr     edx, 3
 * 000000014033FD9D: or      ecx, r8d
 * 000000014033FDA0: imul    eax, edx, 1Ah
 * 000000014033FDA3: shl     ecx, 8
 * 000000014033FDA6: sub     r9d, eax
 * 000000014033FDA9: add     r9d, 41h ; 'A'
 * 000000014033FDAD: or      r9d, ecx
 * 000000014033FDB0: jmp     short loc_14033FE13
 * 000000014033FDB2: mov     [rbp+20F0h+var_1E4C], 0B0869E85h
 * 000000014033FDBC: mov     r9d, [rbp+20F0h+var_1E4C]
 * 000000014033FDC3: xor     r9d, 9
 * 000000014033FDC7: ror     r9d, 21h
 * 000000014033FDCB: jmp     short loc_14033FE13
 * 000000014033FDCD: mov     [rbp+20F0h+var_1E50], 64664142h
 * 000000014033FDD7: mov     r9d, [rbp+20F0h+var_1E50]
 * 000000014033FDDE: ror     r9d, 8
 * 000000014033FDE2: jmp     short loc_14033FE13
 * 000000014033FDE4: mov     [rbp+20F0h+var_1E58], 82C6A6D8h
 * 000000014033FDEE: mov     r9d, [rbp+20F0h+var_1E58]
 * 000000014033FDF5: rol     r9d, 7
 * 000000014033FDF9: jmp     short loc_14033FE13
 * 000000014033FDFB: mov     [rbp+20F0h+var_1E5C], 4E574672h
 * 000000014033FE05: mov     r9d, [rbp+20F0h+var_1E5C]
 * 000000014033FE0C: xor     r9d, edx
 * 000000014033FE0F: ror     r9d, 18h
 * 000000014033FE13: mov     rax, [rsi+0F0h]
 * 000000014033FE1A: mov     r14d, 80h
 * 000000014033FE20: mov     edx, r14d
 * 000000014033FE23: mov     r8d, r9d
 * 000000014033FE26: mov     ecx, 200h
 * 000000014033FE2B: call    KeGuardDispatchICall
 * 000000014033FE30: xor     r10d, r10d
 * 000000014033FE33: mov     [rbp+20F0h+var_20D8], rax
 * 000000014033FE37: mov     r12, rax
 * 000000014033FE3A: test    rax, rax
 * 000000014033FE3D: jz      loc_1403416ED
 * 000000014033FE43: mov     ecx, r14d
 * 000000014033FE46: lea     edx, [r14-70h]
 * 000000014033FE4A: mov     [rax], r10
 * 000000014033FE4D: add     ecx, 0FFFFFFF8h
 * 000000014033FE50: add     rax, 8
 * 000000014033FE54: sub     rdx, r15
 * 000000014033FE57: jnz     short loc_14033FE4A
 * 000000014033FE59: test    ecx, ecx
 * 000000014033FE5B: jz      short loc_14033FE6C
 * 000000014033FE5D: mov     edx, 0FFFFFFFFh
 * 000000014033FE62: mov     [rax], r10b
 * 000000014033FE65: add     rax, r15
 * 000000014033FE68: add     ecx, edx
 * 000000014033FE6A: jnz     short loc_14033FE62
 * 000000014033FE6C: mov     rax, [rbp+20F0h+var_1D08]
 * 000000014033FE73: mov     rcx, r10
 * 000000014033FE76: mov     [rbp+20F0h+var_1F50], rax
 * 000000014033FE7D: mov     [r12], rax
 * 000000014033FE81: mov     rax, r13
 * 000000014033FE84: mov     [rbp+20F0h+var_2088], rax
 * 000000014033FE88: mov     [rbp+20F0h+var_20E8], r10d
 * 000000014033FE8C: mov     [rbp+20F0h+var_2080], rcx
 * 000000014033FE90: mov     rcx, [r12+rcx*8]
 * 000000014033FE94: mov     [rbp+20F0h+var_1F50], rcx
 * 000000014033FE9B: test    rcx, rcx
 * 000000014033FE9E: jz      loc_14034034F
 * 000000014033FEA4: and     eax, 3Fh
 * 000000014033FEA7: mov     [rbp+20F0h+var_2094], eax
 * 000000014033FEAA: mov     rax, [rsi+1F0h]
 * 000000014033FEB1: call    KeGuardDispatchICall
 * 000000014033FEB6: xor     r10d, r10d
 * 000000014033FEB9: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033FEBD: test    rax, rax
 * 000000014033FEC0: jz      loc_140340302
 * 000000014033FEC6: movzx   r11d, word ptr [rax+14h]
 * 000000014033FECB: mov     ebx, [rbp+20F0h+var_2094]
 * 000000014033FECE: add     r11, 18h
 * 000000014033FED2: mov     rdi, [rbp+20F0h+var_2088]
 * 000000014033FED6: add     r11, rax
 * 000000014033FED9: movzx   eax, word ptr [rax+6]
 * 000000014033FEDD: lea     rcx, [rax+rax*4]
 * 000000014033FEE1: lea     rax, [r11+rcx*8]
 * 000000014033FEE5: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033FEE9: mov     r13, rax
 * 000000014033FEEC: mov     eax, [r11+24h]
 * 000000014033FEF0: mov     [rbp+20F0h+var_2094], r10d
 * 000000014033FEF4: bt      eax, 19h
 * 000000014033FEF8: jb      loc_14033FFA6
 * 000000014033FEFE: mov     ecx, [r11]
 * 000000014033FF01: cmp     ecx, 54494E49h
 * 000000014033FF07: jnz     short loc_14033FF17
 * 000000014033FF09: cmp     dword ptr [r11+4], 4742444Bh
 * 000000014033FF11: jz      loc_14033FFA6
 * 000000014033FF17: cmp     ecx, 45474150h
 * 000000014033FF1D: jnz     short loc_14033FF42
 * 000000014033FF1F: movzx   eax, word ptr [r11+4]
 * 000000014033FF24: mov     edx, 7877h
 * 000000014033FF29: cmp     ax, dx
 * 000000014033FF2C: jz      short loc_14033FFA6
 * 000000014033FF2E: mov     edx, 7277h
 * 000000014033FF33: cmp     ax, dx
 * 000000014033FF36: jz      short loc_14033FFA6
 * 000000014033FF38: mov     edx, 7777h
 * 000000014033FF3D: cmp     ax, dx
 * 000000014033FF40: jz      short loc_14033FFA6
 * 000000014033FF42: cmp     ecx, 41525245h
 * 000000014033FF48: jnz     short loc_14033FF56
 * 000000014033FF4A: mov     eax, 4154h
 * 000000014033FF4F: cmp     [r11+4], ax
 * 000000014033FF54: jz      short loc_14033FFA6
 * 000000014033FF56: mov     r8, [rsi+910h]
 * 000000014033FF5D: mov     r9, r11
 * 000000014033FF60: mov     r10, [rsi+918h]
 * 000000014033FF67: sub     r9, r8
 * 000000014033FF6A: mov     r14, [rsi+920h]
 * 000000014033FF71: mov     r15d, 7
 * 000000014033FF77: mov     r12, [rsi+928h]
 * 000000014033FF7E: movzx   edx, byte ptr [r8+r9]
 * 000000014033FF83: movzx   eax, byte ptr [r8]
 * 000000014033FF87: inc     r8
 * 000000014033FF8A: cmp     rdx, rax
 * 000000014033FF8D: jnz     loc_1403401D8
 * 000000014033FF93: mov     eax, 0FFFFFFFFh
 * 000000014033FF98: add     r15d, eax
 * 000000014033FF9B: jnz     short loc_14033FF7E
 * 000000014033FF9D: mov     r15d, 1
 * 000000014033FFA3: xor     r10d, r10d
 * 000000014033FFA6: mov     ecx, r15d
 * 000000014033FFA9: cmp     [r11+24h], r10d
 * 000000014033FFAD: mov     eax, [r11+8]
 * 000000014033FFB1: mov     r8d, [r11+10h]
 * 000000014033FFB5: cmovl   ecx, r15d
 * 000000014033FFB9: cmp     r8d, eax
 * 000000014033FFBC: cmovbe  r8d, eax
 * 000000014033FFC0: mov     eax, [r11+0Ch]
 * 000000014033FFC4: test    ecx, ecx
 * 000000014033FFC6: jnz     loc_1403400D4
 * 000000014033FFCC: mov     r15d, eax
 * 000000014033FFCF: mov     ecx, r8d
 * 000000014033FFD2: add     r15, [rbp+20F0h+var_1F50]
 * 000000014033FFD9: mov     r14d, ebx
 * 000000014033FFDC: add     rcx, r15
 * 000000014033FFDF: mov     r10, r15
 * 000000014033FFE2: mov     rax, r15
 * 000000014033FFE5: cmp     r15, rcx
 * 000000014033FFE8: jnb     short loc_14033FFFA
 * 000000014033FFEA: mov     edx, 40h ; '@'
 * 000000014033FFEF: prefetchnta byte ptr [rax]
 * 000000014033FFF2: add     rax, rdx
 * 000000014033FFF5: cmp     rax, rcx
 * 000000014033FFF8: jb      short loc_14033FFEF
 * 000000014033FFFA: mov     r12d, r8d
 * 000000014033FFFD: mov     r9, rdi
 * 0000000140340000: shr     r12d, 7
 * 0000000140340004: test    r12d, r12d
 * 0000000140340007: jz      short loc_14034007E
 * 0000000140340009: mov     rsi, 7010008004002001h
 * 0000000140340013: mov     edx, 8
 * 0000000140340018: lea     r13d, [rdx-7]
 * 000000014034001C: mov     rax, [r10]
 * 000000014034001F: mov     ecx, r14d
 * 0000000140340022: xor     rax, r9
 * 0000000140340025: mov     r9, [r10+8]
 * 0000000140340029: rol     rax, cl
 * 000000014034002C: add     r10, 10h
 * 0000000140340030: xor     r9, rax
 * 0000000140340033: rol     r9, cl
 * 0000000140340036: sub     rdx, r13
 * 0000000140340039: jnz     short loc_14034001C
 * 000000014034003B: mov     rcx, r10
 * 000000014034003E: sub     rcx, r15
 * 0000000140340041: xor     rcx, rdi
 * 0000000140340044: mov     rax, rcx
 * 0000000140340047: rol     rax, 11h
 * 000000014034004B: xor     rcx, rax
 * 000000014034004E: mov     rax, rsi
 * 0000000140340051: mul     rcx
 * 0000000140340054: xor     r14d, eax
 * 0000000140340057: mov     [rbp+20F0h+var_19C8], rdx
 * 000000014034005E: xor     r14d, edx
 * 0000000140340061: mov     rax, r13
 * 0000000140340064: and     r14d, 3Fh
 * 0000000140340068: cmovz   r14d, eax
 * 000000014034006C: mov     eax, 0FFFFFFFFh
 * 0000000140340071: add     r12d, eax
 * 0000000140340074: jnz     short loc_140340013
 * 0000000140340076: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014034007A: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014034007E: and     r8d, 7Fh
 * 0000000140340082: mov     r15d, 1
 * 0000000140340088: cmp     r8d, 8
 * 000000014034008C: jb      short loc_1403400AB
 * 000000014034008E: mov     edx, r8d
 * 0000000140340091: shr     rdx, 3
 * 0000000140340095: xor     r9, [r10]
 * 0000000140340098: mov     ecx, r14d
 * 000000014034009B: rol     r9, cl
 * 000000014034009E: add     r10, 8
 * 00000001403400A2: add     r8d, 0FFFFFFF8h
 * 00000001403400A6: sub     rdx, r15
 * 00000001403400A9: jnz     short loc_140340095
 * 00000001403400AB: test    r8d, r8d
 * 00000001403400AE: jz      short loc_1403400CE
 * 00000001403400B0: mov     esi, 0FFFFFFFFh
 * 00000001403400B5: movzx   eax, byte ptr [r10]
 * 00000001403400B9: mov     ecx, r14d
 * 00000001403400BC: xor     r9, rax
 * 00000001403400BF: add     r10, r15
 * 00000001403400C2: rol     r9, cl
 * 00000001403400C5: add     r8d, esi
 * 00000001403400C8: jnz     short loc_1403400B5
 * 00000001403400CA: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403400CE: mov     rdi, r9
 * 00000001403400D1: xor     r10d, r10d
 * 00000001403400D4: add     r11, 28h ; '('
 * 00000001403400D8: cmp     r11, r13
 * 00000001403400DB: jnz     loc_14033FEEC
 * 00000001403400E1: mov     r8d, [rbp+20F0h+var_20E8]
 * 00000001403400E5: mov     r13, [rbp+20F0h+var_2070]
 * 00000001403400EC: mov     [rbp+20F0h+var_2088], rdi
 * 00000001403400F0: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403400F7: test    r8d, r8d
 * 00000001403400FA: jnz     loc_1403402D7
 * 0000000140340100: mov     rax, [rbp+20F0h+var_20C8]
 * 0000000140340104: mov     rdx, [rbp+20F0h+var_1F50]
 * 000000014034010B: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014034010F: mov     ecx, [rax+94h]
 * 0000000140340115: cmp     ecx, 14h
 * 0000000140340118: jb      loc_1403402D7
 * 000000014034011E: mov     eax, [rax+90h]
 * 0000000140340124: lea     r15, [rdx+rcx]
 * 0000000140340128: add     r15, rax
 * 000000014034012B: lea     r14, [rdx+rax]
 * 000000014034012F: cmp     r14, r15
 * 0000000140340132: jz      loc_1403402D1
 * 0000000140340138: cmp     [r14+0Ch], r10d
 * 000000014034013C: jz      loc_1403402CD
 * 0000000140340142: mov     eax, [r14+10h]
 * 0000000140340146: test    eax, eax
 * 0000000140340148: jz      loc_1403402CD
 * 000000014034014E: mov     r12, [rax+rdx]
 * 0000000140340152: test    r12, r12
 * 0000000140340155: jz      loc_1403402AE
 * 000000014034015B: mov     rax, [rsi+2A0h]
 * 0000000140340162: mov     rcx, r12
 * 0000000140340165: call    KeGuardDispatchICall
 * 000000014034016A: xor     r10d, r10d
 * 000000014034016D: test    eax, eax
 * 000000014034016F: jz      loc_1403402AA
 * 0000000140340175: mov     rax, [rsi+1F8h]
 * 000000014034017C: lea     r8, [rbp+20F0h+var_1C90]
 * 0000000140340183: lea     rdx, [rbp+20F0h+var_1F50]
 * 000000014034018A: mov     rcx, r12
 * 000000014034018D: call    KeGuardDispatchICall
 * 0000000140340192: xor     r10d, r10d
 * 0000000140340195: lea     r9d, [r10+10h]
 * 0000000140340199: test    rax, rax
 * 000000014034019C: jz      loc_1403402A4
 * 00000001403401A2: mov     r12, [rbp+20F0h+var_20D8]
 * 00000001403401A6: mov     ecx, r10d
 * 00000001403401A9: mov     r8, [rbp+20F0h+var_1F50]
 * 00000001403401B0: mov     rax, r12
 * 00000001403401B3: mov     rdx, [rax]
 * 00000001403401B6: cmp     rdx, r8
 * 00000001403401B9: jz      loc_14034029B
 * 00000001403401BF: test    rdx, rdx
 * 00000001403401C2: jz      loc_140340295
 * 00000001403401C8: inc     ecx
 * 00000001403401CA: add     rax, 8
 * 00000001403401CE: cmp     ecx, r9d
 * 00000001403401D1: jb      short loc_1403401B3
 * 00000001403401D3: jmp     loc_14034029B
 * 00000001403401D8: mov     r8d, 8
 * 00000001403401DE: mov     r9, r11
 * 00000001403401E1: mov     rcx, [r9]
 * 00000001403401E4: add     r9, 8
 * 00000001403401E8: mov     rax, [r10]
 * 00000001403401EB: add     r10, 8
 * 00000001403401EF: cmp     rcx, rax
 * 00000001403401F2: jnz     short loc_14034022F
 * 00000001403401F4: add     r8d, 0FFFFFFF8h
 * 00000001403401F8: cmp     r8d, 8
 * 00000001403401FC: jnb     short loc_1403401E1
 * 00000001403401FE: test    r8d, r8d
 * 0000000140340201: jz      loc_14033FF9D
 * 0000000140340207: mov     r15d, 1
 * 000000014034020D: movzx   edx, byte ptr [r9]
 * 0000000140340211: add     r9, r15
 * 0000000140340214: movzx   eax, byte ptr [r10]
 * 0000000140340218: add     r10, r15
 * 000000014034021B: cmp     rdx, rax
 * 000000014034021E: jnz     short loc_140340235
 * 0000000140340220: mov     eax, 0FFFFFFFFh
 * 0000000140340225: add     r8d, eax
 * 0000000140340228: jnz     short loc_14034020D
 * 000000014034022A: jmp     loc_14033FFA3
 * 000000014034022F: mov     r15d, 1
 * 0000000140340235: mov     r8, r11
 * 0000000140340238: mov     r9d, 4
 * 000000014034023E: sub     r8, r14
 * 0000000140340241: mov     r10d, 0FFFFFFFFh
 * 0000000140340247: movzx   edx, byte ptr [r14+r8]
 * 000000014034024C: movzx   eax, byte ptr [r14]
 * 0000000140340250: add     r14, r15
 * 0000000140340253: cmp     rdx, rax
 * 0000000140340256: jnz     short loc_140340262
 * 0000000140340258: add     r9d, r10d
 * 000000014034025B: jnz     short loc_140340247
 * 000000014034025D: jmp     loc_14033FFA3
 * 0000000140340262: mov     r8, r11
 * 0000000140340265: mov     r9d, 6
 * 000000014034026B: sub     r8, r12
 * 000000014034026E: movzx   edx, byte ptr [r12+r8]
 * 0000000140340273: movzx   eax, byte ptr [r12]
 * 0000000140340278: add     r12, r15
 * 000000014034027B: cmp     rdx, rax
 * 000000014034027E: jnz     short loc_14034028A
 * 0000000140340280: add     r9d, r10d
 * 0000000140340283: jnz     short loc_14034026E
 * 0000000140340285: jmp     loc_14033FFA3
 * 000000014034028A: mov     ecx, [rbp+20F0h+var_2094]
 * 000000014034028D: xor     r10d, r10d
 * 0000000140340290: jmp     loc_14033FFA9
 * 0000000140340295: mov     eax, ecx
 * 0000000140340297: mov     [r12+rax*8], r8
 * 000000014034029B: cmp     ecx, r9d
 * 000000014034029E: jz      loc_140340345
 * 00000001403402A4: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403402A8: jmp     short loc_1403402B4
 * 00000001403402AA: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403402AE: mov     r9d, 10h
 * 00000001403402B4: add     r14, 14h
 * 00000001403402B8: cmp     r14, r15
 * 00000001403402BB: jnz     loc_140340138
 * 00000001403402C1: mov     r8d, [rbp+20F0h+var_20E8]
 * 00000001403402C5: mov     r15d, 1
 * 00000001403402CB: jmp     short loc_1403402DD
 * 00000001403402CD: mov     r8d, [rbp+20F0h+var_20E8]
 * 00000001403402D1: mov     r15d, 1
 * 00000001403402D7: mov     r9d, 10h
 * 00000001403402DD: mov     rcx, [rbp+20F0h+var_2080]
 * 00000001403402E1: add     r8d, r15d
 * 00000001403402E4: mov     rax, [rbp+20F0h+var_2088]
 * 00000001403402E8: add     rcx, r15
 * 00000001403402EB: mov     r12, [rbp+20F0h+var_20D8]
 * 00000001403402EF: mov     [rbp+20F0h+var_20E8], r8d
 * 00000001403402F3: mov     [rbp+20F0h+var_2080], rcx
 * 00000001403402F7: cmp     r8d, r9d
 * 00000001403402FA: jb      loc_14033FE90
 * 0000000140340300: jmp     short loc_14034034F
 * 0000000140340302: cmp     [rsi+8D8h], r10d
 * 0000000140340309: jnz     short loc_140340352
 * 000000014034030B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140340315: add     rax, rsi
 * 0000000140340318: mov     [rsi+8E0h], rax
 * 000000014034031F: mov     [rsi+8E8h], r10
 * 0000000140340326: mov     qword ptr [rsi+8F0h], 102h
 * 0000000140340331: mov     qword ptr [rsi+8F8h], 0FFFFFFFFC000007Bh
 * 000000014034033C: mov     [rsi+8D8h], r15d
 * 0000000140340343: jmp     short loc_140340352
 * 0000000140340345: mov     rax, [rbp+20F0h+var_2088]
 * 0000000140340349: mov     r15d, 1
 * 000000014034034F: mov     r13, rax
 * 0000000140340352: cmp     r13, [rsi+948h]
 * 0000000140340359: jz      short loc_140340360
 * 000000014034035B: test    r13, r13
 * 000000014034035E: jnz     short loc_14034036D
 * 0000000140340360: mov     rax, 95EA5DE843D5D824h
 * 000000014034036A: xor     r13, rax
 * 000000014034036D: mov     rax, [rsi+0F8h]
 * 0000000140340374: mov     rcx, r12
 * 0000000140340377: call    KeGuardDispatchICall
 * 000000014034037C: xor     r14d, r14d
 * 000000014034037F: mov     rax, [rsi+940h]
 * 0000000140340386: mov     rcx, [rax]
 * 0000000140340389: cmp     r13, rcx
 * 000000014034038C: jz      short loc_140340400
 * 000000014034038E: mov     eax, [rsi+974h]
 * 0000000140340394: mov     ecx, 40h ; '@'
 * 0000000140340399: test    cl, al
 * 000000014034039B: jnz     short loc_140340400
 * 000000014034039D: mov     rax, [rsi+940h]
 * 00000001403403A4: mov     rdx, [rax]
 * 00000001403403A7: mov     eax, [rsi+8D8h]
 * 00000001403403AD: test    eax, eax
 * 00000001403403AF: jnz     short loc_140340400
 * 00000001403403B1: mov     rax, [rsi+580h]
 * 00000001403403B8: mov     rcx, r13
 * 00000001403403BB: xor     rcx, rdx
 * 00000001403403BE: mov     [rax+18h], rcx
 * 00000001403403C2: mov     eax, [rsi+8D8h]
 * 00000001403403C8: test    eax, eax
 * 00000001403403CA: jnz     short loc_140340400
 * 00000001403403CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403403D6: add     rax, rsi
 * 00000001403403D9: mov     [rsi+8E0h], rax
 * 00000001403403E0: mov     [rsi+8E8h], r14
 * 00000001403403E7: mov     qword ptr [rsi+8F0h], 102h
 * 00000001403403F2: mov     [rsi+8F8h], r13
 * 00000001403403F9: mov     [rsi+8D8h], r15d
 * 0000000140340400: mov     r10d, r14d
 * 0000000140340403: lea     r15, [rbp+20F0h+var_1C60]
 * 000000014034040A: mov     r12d, 2
 * 0000000140340410: mov     esi, 0FFFFFFFFh
 * 0000000140340415: mov     rax, [r15]
 * 0000000140340418: mov     r9d, r14d
 * 000000014034041B: mov     r11, [rax]
 * 000000014034041E: mov     r13d, [rax+10h]
 * 0000000140340422: lea     r8d, [r11+r10]
 * 0000000140340426: add     r8d, eax
 * 0000000140340429: test    r13d, r13d
 * 000000014034042C: jz      short loc_140340457
 * 000000014034042E: mov     r14, r11
 * 0000000140340431: movsxd  rdx, dword ptr [r14]
 * 0000000140340434: inc     r9d
 * 0000000140340437: mov     rax, rdx
 * 000000014034043A: lea     r14, [r14+4]
 * 000000014034043E: sar     rax, 4
 * 0000000140340442: mov     ecx, [rax+r11]
 * 0000000140340446: add     ecx, edx
 * 0000000140340448: xor     r8d, ecx
 * 000000014034044B: imul    r8d, r9d
 * 000000014034044F: cmp     r9d, r13d
 * 0000000140340452: jb      short loc_140340431
 * 0000000140340454: xor     r14d, r14d
 * 0000000140340457: lea     r10d, [r10+r8*2]
 * 000000014034045B: sub     r15, 8
 * 000000014034045F: add     r8d, r8d
 * 0000000140340462: add     r12d, esi
 * 0000000140340465: jnz     short loc_140340415
 * 0000000140340467: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014034046B: mov     rbx, [rbp+20F0h+var_20A0]
 * 000000014034046F: mov     rax, [rsi+588h]
 * 0000000140340476: mov     r9d, [rax]
 * 0000000140340479: cmp     r10d, r9d
 * 000000014034047C: jz      short loc_1403404EF
 * 000000014034047E: xor     r10d, r10d
 * 0000000140340481: test    dword ptr [rsi+970h], 20000h
 * 000000014034048B: jz      short loc_1403404F2
 * 000000014034048D: mov     eax, [rsi+8D8h]
 * 0000000140340493: test    eax, eax
 * 0000000140340495: jnz     short loc_1403404AE
 * 0000000140340497: mov     rdx, [rsi+580h]
 * 000000014034049E: mov     ecx, r8d
 * 00000001403404A1: xor     rcx, r9
 * 00000001403404A4: mov     [rdx+18h], rcx
 * 00000001403404A8: mov     eax, [rsi+8D8h]
 * 00000001403404AE: mov     ecx, r8d
 * 00000001403404B1: test    eax, eax
 * 00000001403404B3: jnz     short loc_1403404F2
 * 00000001403404B5: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403404BF: add     rax, rsi
 * 00000001403404C2: mov     [rsi+8E0h], rax
 * 00000001403404C9: mov     eax, 1
 * 00000001403404CE: mov     [rsi+8E8h], r10
 * 00000001403404D5: mov     qword ptr [rsi+8F0h], 107h
 * 00000001403404E0: mov     [rsi+8F8h], rcx
 * 00000001403404E7: mov     [rsi+8D8h], eax
 * 00000001403404ED: jmp     short loc_1403404F2
 * 00000001403404EF: xor     r10d, r10d
 * 00000001403404F2: mov     eax, [rsi+934h]
 * 00000001403404F8: cmp     eax, 7
 * 00000001403404FB: jl      short loc_14034051A
 * 00000001403404FD: jz      loc_14034169D
 * 0000000140340503: cmp     eax, 8
 * 0000000140340506: jz      loc_140343747
 * 000000014034050C: cmp     eax, 9
 * 000000014034050F: jz      loc_140343963
 * 0000000140340515: jmp     loc_140343DFD
 * 000000014034051A: mov     rdx, [rsi+568h]
 * 0000000140340521: mov     rcx, [rsi+560h]
 * 0000000140340528: mov     [rbp+20F0h+var_20D8], rdx
 * 000000014034052C: add     rdx, 20h ; ' '
 * 0000000140340530: mov     [rbp+20F0h+var_20F0], rdx
 * 0000000140340534: mov     edx, 2
 * 0000000140340539: mov     [rbp+20F0h+var_2088], rcx
 * 000000014034053D: lea     r13, [rcx+20h]
 * 0000000140340541: mov     [rbp+20F0h+var_20C8], r13
 * 0000000140340545: cmp     eax, edx
 * 0000000140340547: jge     loc_1403407FF
 * 000000014034054D: mov     r12, [r13+0]
 * 0000000140340551: mov     r13d, [rsi+7CCh]
 * 0000000140340558: mov     r15d, [rcx+30h]
 * 000000014034055C: mov     r8d, [rsi+904h]
 * 0000000140340563: shl     r15d, 2
 * 0000000140340567: lea     eax, [r13+30h]
 * 000000014034056B: cmp     eax, [rsi+9FCh]
 * 0000000140340571: jbe     loc_140340653
 * 0000000140340577: mov     edx, eax
 * 0000000140340579: mov     rcx, rsi
 * 000000014034057C: call    sub_1403495B4
 * 0000000140340581: xor     r10d, r10d
 * 0000000140340584: mov     r14, rax
 * 0000000140340587: test    rax, rax
 * 000000014034058A: jz      loc_140341681
 * 0000000140340590: mov     ecx, [rsi+970h]
 * 0000000140340596: test    cl, 4
 * 0000000140340599: jnz     loc_140340649
 * 000000014034059F: mov     eax, [rsi+7CCh]
 * 00000001403405A5: lea     r9d, [r10+1]
 * 00000001403405A9: mov     r8, [rsi+7B0h]
 * 00000001403405B0: and     ecx, 20000000h
 * 00000001403405B6: neg     ecx
 * 00000001403405B8: sbb     edx, edx
 * 00000001403405BA: and     edx, [rsi+904h]
 * 00000001403405C0: cmp     eax, 8
 * 00000001403405C3: jb      short loc_1403405DA
 * 00000001403405C5: mov     ecx, eax
 * 00000001403405C7: shr     rcx, 3
 * 00000001403405CB: mov     [rsi], r10
 * 00000001403405CE: add     eax, 0FFFFFFF8h
 * 00000001403405D1: add     rsi, 8
 * 00000001403405D5: sub     rcx, r9
 * 00000001403405D8: jnz     short loc_1403405CB
 * 00000001403405DA: test    eax, eax
 * 00000001403405DC: jz      short loc_1403405ED
 * 00000001403405DE: mov     ecx, 0FFFFFFFFh
 * 00000001403405E3: mov     [rsi], r10b
 * 00000001403405E6: add     rsi, r9
 * 00000001403405E9: add     eax, ecx
 * 00000001403405EB: jnz     short loc_1403405E3
 * 00000001403405ED: mov     ebx, [r14+904h]
 * 00000001403405F4: mov     [r14+904h], edx
 * 00000001403405FB: cmp     edx, 3
 * 00000001403405FE: jz      short loc_140340633
 * 0000000140340600: test    dword ptr [r14+970h], 10000000h
 * 000000014034060B: mov     ecx, r10d
 * 000000014034060E: cmovz   ecx, edx
 * 0000000140340611: test    ecx, ecx
 * 0000000140340613: jz      short loc_14034062A
 * 0000000140340615: mov     rax, [r14+220h]
 * 000000014034061C: lea     rcx, [r8-8]
 * 0000000140340620: mov     rdx, [rcx]
 * 0000000140340623: call    KeGuardDispatchICall
 * 0000000140340628: jmp     short loc_140340642
 * 000000014034062A: mov     rax, [r14+0F8h]
 * 0000000140340631: jmp     short loc_14034063A
 * 0000000140340633: mov     rax, [r14+360h]
 * 000000014034063A: mov     rcx, r8
 * 000000014034063D: call    KeGuardDispatchICall
 * 0000000140340642: mov     [r14+904h], ebx
 * 0000000140340649: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140340651: jmp     short loc_14034065C
 * 0000000140340653: mov     r14, rsi
 * 0000000140340656: mov     [rsi+7CCh], eax
 * 000000014034065C: lea     rbx, [r14+r13]
 * 0000000140340660: mov     r8d, 1
 * 0000000140340666: add     [r14+7F4h], r8d
 * 000000014034066D: mov     rax, rbx
 * 0000000140340670: mov     [rbp+20F0h+var_2070], rbx
 * 0000000140340677: xor     r13d, r13d
 * 000000014034067A: mov     [rbp+20F0h+var_19C0], rbx
 * 0000000140340681: lea     ecx, [r8+2Fh]
 * 0000000140340685: lea     edx, [rcx-2Ah]
 * 0000000140340688: mov     [rax], r13
 * 000000014034068B: add     ecx, 0FFFFFFF8h
 * 000000014034068E: add     rax, 8
 * 0000000140340692: sub     rdx, r8
 * 0000000140340695: jnz     short loc_140340688
 * 0000000140340697: test    ecx, ecx
 * 0000000140340699: jz      short loc_1403406AA
 * 000000014034069B: mov     edx, 0FFFFFFFFh
 * 00000001403406A0: mov     [rax], r13b
 * 00000001403406A3: add     rax, r8
 * 00000001403406A6: add     ecx, edx
 * 00000001403406A8: jnz     short loc_1403406A0
 * 00000001403406AA: mov     dword ptr [rbx], 0Bh
 * 00000001403406B0: mov     r9, r12
 * 00000001403406B3: mov     [rbx+8], r12
 * 00000001403406B7: mov     rax, r12
 * 00000001403406BA: mov     [rbx+10h], r15d
 * 00000001403406BE: add     [r14+810h], r15d
 * 00000001403406C5: mov     r10d, [r14+7FCh]
 * 00000001403406CC: mov     rsi, [r14+800h]
 * 00000001403406D3: mov     ecx, r15d
 * 00000001403406D6: add     rcx, r12
 * 00000001403406D9: cmp     r12, rcx
 * 00000001403406DC: jnb     short loc_1403406EE
 * 00000001403406DE: mov     edx, 40h ; '@'
 * 00000001403406E3: prefetchnta byte ptr [rax]
 * 00000001403406E6: add     rax, rdx
 * 00000001403406E9: cmp     rax, rcx
 * 00000001403406EC: jb      short loc_1403406E3
 * 00000001403406EE: mov     r11d, r15d
 * 00000001403406F1: mov     r8, rsi
 * 00000001403406F4: shr     r11d, 7
 * 00000001403406F8: test    r11d, r11d
 * 00000001403406FB: jz      short loc_140340774
 * 00000001403406FD: mov     edi, 1
 * 0000000140340702: mov     rbx, 7010008004002001h
 * 000000014034070C: mov     r13d, 0FFFFFFFFh
 * 0000000140340712: mov     eax, 8
 * 0000000140340717: xor     r8, [r9]
 * 000000014034071A: mov     ecx, r10d
 * 000000014034071D: rol     r8, cl
 * 0000000140340720: xor     r8, [r9+8]
 * 0000000140340724: add     r9, 10h
 * 0000000140340728: rol     r8, cl
 * 000000014034072B: sub     rax, rdi
 * 000000014034072E: jnz     short loc_140340717
 * 0000000140340730: mov     rcx, r9
 * 0000000140340733: sub     rcx, r12
 * 0000000140340736: xor     rcx, rsi
 * 0000000140340739: mov     rax, rcx
 * 000000014034073C: rol     rax, 11h
 * 0000000140340740: xor     rcx, rax
 * 0000000140340743: mov     rax, rbx
 * 0000000140340746: mul     rcx
 * 0000000140340749: xor     r10d, eax
 * 000000014034074C: mov     [rbp+20F0h+var_19B8], rdx
 * 0000000140340753: xor     r10d, edx
 * 0000000140340756: and     r10d, 3Fh
 * 000000014034075A: cmovz   r10d, edi
 * 000000014034075E: add     r11d, r13d
 * 0000000140340761: jnz     short loc_140340712
 * 0000000140340763: mov     rbx, [rbp+20F0h+var_2070]
 * 000000014034076A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140340771: xor     r13d, r13d
 * 0000000140340774: mov     edx, r15d
 * 0000000140340777: mov     r11d, 1
 * 000000014034077D: and     edx, 7Fh
 * 0000000140340780: cmp     edx, 8
 * 0000000140340783: jb      short loc_1403407A0
 * 0000000140340785: mov     eax, edx
 * 0000000140340787: shr     rax, 3
 * 000000014034078B: xor     r8, [r9]
 * 000000014034078E: mov     ecx, r10d
 * 0000000140340791: rol     r8, cl
 * 0000000140340794: add     r9, 8
 * 0000000140340798: add     edx, 0FFFFFFF8h
 * 000000014034079B: sub     rax, r11
 * 000000014034079E: jnz     short loc_14034078B
 * 00000001403407A0: test    edx, edx
 * 00000001403407A2: jz      short loc_1403407C4
 * 00000001403407A4: mov     edi, 0FFFFFFFFh
 * 00000001403407A9: movzx   eax, byte ptr [r9]
 * 00000001403407AD: mov     ecx, r10d
 * 00000001403407B0: xor     r8, rax
 * 00000001403407B3: add     r9, r11
 * 00000001403407B6: rol     r8, cl
 * 00000001403407B9: add     edx, edi
 * 00000001403407BB: jnz     short loc_1403407A9
 * 00000001403407BD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403407C4: mov     rax, r8
 * 00000001403407C7: shr     rax, 1Fh
 * 00000001403407CB: xor     r10d, r10d
 * 00000001403407CE: jmp     short loc_1403407D7
 * 00000001403407D0: xor     r8d, eax
 * 00000001403407D3: shr     rax, 1Fh
 * 00000001403407D7: test    rax, rax
 * 00000001403407DA: jnz     short loc_1403407D0
 * 00000001403407DC: mov     r13, [rbp+20F0h+var_20C8]
 * 00000001403407E0: btr     r8d, 1Fh
 * 00000001403407E5: mov     [rbx+14h], r8d
 * 00000001403407E9: mov     eax, 2
 * 00000001403407EE: add     [r14+810h], r15d
 * 00000001403407F5: mov     rbx, r14
 * 00000001403407F8: mov     [r14+934h], eax
 * 00000001403407FF: cmp     dword ptr [rbx+934h], 3
 * 0000000140340806: jge     loc_140340A3F
 * 000000014034080C: mov     r14d, [rbx+7CCh]
 * 0000000140340813: mov     r15d, 20h ; ' '
 * 0000000140340819: mov     r12d, [rbx+820h]
 * 0000000140340820: cmp     r12d, 7
 * 0000000140340824: mov     r8d, [rbx+904h]
 * 000000014034082B: cmovnz  r15d, r10d
 * 000000014034082F: lea     eax, [r14+30h]
 * 0000000140340833: cmp     eax, [rbx+9FCh]
 * 0000000140340839: jbe     loc_140340919
 * 000000014034083F: mov     edx, eax
 * 0000000140340841: mov     rcx, rbx
 * 0000000140340844: call    sub_1403495B4
 * 0000000140340849: xor     r10d, r10d
 * 000000014034084C: mov     rsi, rax
 * 000000014034084F: test    rax, rax
 * 0000000140340852: jz      loc_140341681
 * 0000000140340858: mov     ecx, [rbx+970h]
 * 000000014034085E: test    cl, 4
 * 0000000140340861: jnz     loc_140340910
 * 0000000140340867: mov     eax, [rbx+7CCh]
 * 000000014034086D: lea     r9d, [r10+1]
 * 0000000140340871: mov     r8, [rbx+7B0h]
 * 0000000140340878: and     ecx, 20000000h
 * 000000014034087E: neg     ecx
 * 0000000140340880: sbb     edx, edx
 * 0000000140340882: and     edx, [rbx+904h]
 * 0000000140340888: cmp     eax, 8
 * 000000014034088B: jb      short loc_1403408A2
 * 000000014034088D: mov     ecx, eax
 * 000000014034088F: shr     rcx, 3
 * 0000000140340893: mov     [rbx], r10
 * 0000000140340896: add     eax, 0FFFFFFF8h
 * 0000000140340899: add     rbx, 8
 * 000000014034089D: sub     rcx, r9
 * 00000001403408A0: jnz     short loc_140340893
 * 00000001403408A2: test    eax, eax
 * 00000001403408A4: jz      short loc_1403408B5
 * 00000001403408A6: mov     ecx, 0FFFFFFFFh
 * 00000001403408AB: mov     [rbx], r10b
 * 00000001403408AE: add     rbx, r9
 * 00000001403408B1: add     eax, ecx
 * 00000001403408B3: jnz     short loc_1403408AB
 * 00000001403408B5: mov     ebx, [rsi+904h]
 * 00000001403408BB: mov     [rsi+904h], edx
 * 00000001403408C1: cmp     edx, 3
 * 00000001403408C4: jz      short loc_1403408F8
 * 00000001403408C6: test    dword ptr [rsi+970h], 10000000h
 * 00000001403408D0: mov     ecx, r10d
 * 00000001403408D3: cmovz   ecx, edx
 * 00000001403408D6: test    ecx, ecx
 * 00000001403408D8: jz      short loc_1403408EF
 * 00000001403408DA: mov     rax, [rsi+220h]
 * 00000001403408E1: lea     rcx, [r8-8]
 * 00000001403408E5: mov     rdx, [rcx]
 * 00000001403408E8: call    KeGuardDispatchICall
 * 00000001403408ED: jmp     short loc_140340907
 * 00000001403408EF: mov     rax, [rsi+0F8h]
 * 00000001403408F6: jmp     short loc_1403408FF
 * 00000001403408F8: mov     rax, [rsi+360h]
 * 00000001403408FF: mov     rcx, r8
 * 0000000140340902: call    KeGuardDispatchICall
 * 0000000140340907: mov     [rsi+904h], ebx
 * 000000014034090D: xor     r10d, r10d
 * 0000000140340910: and     dword ptr [rsi+970h], 0FFFFFFFBh
 * 0000000140340917: jmp     short loc_140340922
 * 0000000140340919: mov     rsi, rbx
 * 000000014034091C: mov     [rbx+7CCh], eax
 * 0000000140340922: mov     eax, 1
 * 0000000140340927: lea     rbx, [rsi+r14]
 * 000000014034092B: add     [rsi+7F4h], eax
 * 0000000140340931: mov     [rbp+20F0h+var_19B0], rbx
 * 0000000140340938: lea     ecx, [rax+2Fh]
 * 000000014034093B: mov     rax, rbx
 * 000000014034093E: lea     edx, [rcx-2Ah]
 * 0000000140340941: lea     r14d, [rcx-2Fh]
 * 0000000140340945: mov     [rax], r10
 * 0000000140340948: add     ecx, 0FFFFFFF8h
 * 000000014034094B: add     rax, 8
 * 000000014034094F: sub     rdx, r14
 * 0000000140340952: jnz     short loc_140340945
 * 0000000140340954: test    ecx, ecx
 * 0000000140340956: jz      short loc_140340967
 * 0000000140340958: mov     edx, 0FFFFFFFFh
 * 000000014034095D: mov     [rax], r10b
 * 0000000140340960: add     rax, r14
 * 0000000140340963: add     ecx, edx
 * 0000000140340965: jnz     short loc_14034095D
 * 0000000140340967: mov     [rbx], r15d
 * 000000014034096A: mov     [rbx+8], r13
 * 000000014034096E: cmp     r12d, 7
 * 0000000140340972: jnz     short loc_140340988
 * 0000000140340974: lea     r9, [rbx+18h]
 * 0000000140340978: mov     rdx, r13
 * 000000014034097B: lea     r8d, [r12+19h]
 * 0000000140340980: mov     rcx, rsi
 * 0000000140340983: call    sub_1401ADA3C
 * 0000000140340988: mov     rcx, [rbp+20F0h+var_2088]
 * 000000014034098C: mov     r11d, 20h ; ' '
 * 0000000140340992: mov     [rbx+10h], r11d
 * 0000000140340996: add     rcx, 40h ; '@'
 * 000000014034099A: add     [rsi+810h], r11d
 * 00000001403409A1: mov     r8, r13
 * 00000001403409A4: mov     r10d, [rsi+7FCh]
 * 00000001403409AB: mov     rax, r13
 * 00000001403409AE: mov     rdx, [rsi+800h]
 * 00000001403409B5: cmp     r13, rcx
 * 00000001403409B8: jnb     short loc_1403409C9
 * 00000001403409BA: lea     r9d, [r11+20h]
 * 00000001403409BE: prefetchnta byte ptr [rax]
 * 00000001403409C1: add     rax, r9
 * 00000001403409C4: cmp     rax, rcx
 * 00000001403409C7: jb      short loc_1403409BE
 * 00000001403409C9: mov     r9d, r11d
 * 00000001403409CC: mov     eax, 4
 * 00000001403409D1: xor     rdx, [r8]
 * 00000001403409D4: mov     ecx, r10d
 * 00000001403409D7: rol     rdx, cl
 * 00000001403409DA: add     r8, 8
 * 00000001403409DE: add     r9d, 0FFFFFFF8h
 * 00000001403409E2: sub     rax, r14
 * 00000001403409E5: jnz     short loc_1403409D1
 * 00000001403409E7: test    r9d, r9d
 * 00000001403409EA: jz      short loc_140340A0D
 * 00000001403409EC: mov     edi, 0FFFFFFFFh
 * 00000001403409F1: movzx   eax, byte ptr [r8]
 * 00000001403409F5: mov     ecx, r10d
 * 00000001403409F8: xor     rdx, rax
 * 00000001403409FB: add     r8, r14
 * 00000001403409FE: rol     rdx, cl
 * 0000000140340A01: add     r9d, edi
 * 0000000140340A04: jnz     short loc_1403409F1
 * 0000000140340A06: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140340A0D: mov     rax, rdx
 * 0000000140340A10: shr     rax, 1Fh
 * 0000000140340A14: xor     r10d, r10d
 * 0000000140340A17: jmp     short loc_140340A1F
 * 0000000140340A19: xor     edx, eax
 * 0000000140340A1B: shr     rax, 1Fh
 * 0000000140340A1F: test    rax, rax
 * 0000000140340A22: jnz     short loc_140340A19
 * 0000000140340A24: btr     edx, 1Fh
 * 0000000140340A28: mov     [rbx+14h], edx
 * 0000000140340A2B: mov     rbx, rsi
 * 0000000140340A2E: add     [rsi+810h], r11d
 * 0000000140340A35: mov     dword ptr [rsi+934h], 3
 * 0000000140340A3F: cmp     dword ptr [rbx+934h], 4
 * 0000000140340A46: mov     r13, [rbp+20F0h+var_20F0]
 * 0000000140340A4A: jge     loc_140340CFD
 * 0000000140340A50: mov     rax, [rbp+20F0h+var_20D8]
 * 0000000140340A54: mov     r14d, [rbx+7CCh]
 * 0000000140340A5B: mov     r12, [r13+0]
 * 0000000140340A5F: mov     r8d, [rbx+904h]
 * 0000000140340A66: mov     r15d, [rax+30h]
 * 0000000140340A6A: shl     r15d, 2
 * 0000000140340A6E: lea     eax, [r14+30h]
 * 0000000140340A72: cmp     eax, [rbx+9FCh]
 * 0000000140340A78: jbe     loc_140340B55
 * 0000000140340A7E: mov     edx, eax
 * 0000000140340A80: mov     rcx, rbx
 * 0000000140340A83: call    sub_1403495B4
 * 0000000140340A88: xor     r10d, r10d
 * 0000000140340A8B: mov     rsi, rax
 * 0000000140340A8E: test    rax, rax
 * 0000000140340A91: jz      loc_140341681
 * 0000000140340A97: mov     ecx, [rbx+970h]
 * 0000000140340A9D: test    cl, 4
 * 0000000140340AA0: jnz     loc_140340B4C
 * 0000000140340AA6: mov     eax, [rbx+7CCh]
 * 0000000140340AAC: lea     r9d, [r10+1]
 * 0000000140340AB0: mov     r8, [rbx+7B0h]
 * 0000000140340AB7: and     ecx, 20000000h
 * 0000000140340ABD: neg     ecx
 * 0000000140340ABF: sbb     edx, edx
 * 0000000140340AC1: and     edx, [rbx+904h]
 * 0000000140340AC7: cmp     eax, 8
 * 0000000140340ACA: jb      short loc_140340AE1
 * 0000000140340ACC: mov     ecx, eax
 * 0000000140340ACE: shr     rcx, 3
 * 0000000140340AD2: mov     [rbx], r10
 * 0000000140340AD5: add     eax, 0FFFFFFF8h
 * 0000000140340AD8: add     rbx, 8
 * 0000000140340ADC: sub     rcx, r9
 * 0000000140340ADF: jnz     short loc_140340AD2
 * 0000000140340AE1: test    eax, eax
 * 0000000140340AE3: jz      short loc_140340AF4
 * 0000000140340AE5: mov     ecx, 0FFFFFFFFh
 * 0000000140340AEA: mov     [rbx], r10b
 * 0000000140340AED: add     rbx, r9
 * 0000000140340AF0: add     eax, ecx
 * 0000000140340AF2: jnz     short loc_140340AEA
 * 0000000140340AF4: mov     ebx, [rsi+904h]
 * 0000000140340AFA: mov     [rsi+904h], edx
 * 0000000140340B00: cmp     edx, 3
 * 0000000140340B03: jz      short loc_140340B37
 * 0000000140340B05: test    dword ptr [rsi+970h], 10000000h
 * 0000000140340B0F: mov     ecx, r10d
 * 0000000140340B12: cmovz   ecx, edx
 * 0000000140340B15: test    ecx, ecx
 * 0000000140340B17: jz      short loc_140340B2E
 * 0000000140340B19: mov     rax, [rsi+220h]
 * 0000000140340B20: lea     rcx, [r8-8]
 * 0000000140340B24: mov     rdx, [rcx]
 * 0000000140340B27: call    KeGuardDispatchICall
 * 0000000140340B2C: jmp     short loc_140340B46
 * 0000000140340B2E: mov     rax, [rsi+0F8h]
 * 0000000140340B35: jmp     short loc_140340B3E
 * 0000000140340B37: mov     rax, [rsi+360h]
 * 0000000140340B3E: mov     rcx, r8
 * 0000000140340B41: call    KeGuardDispatchICall
 * 0000000140340B46: mov     [rsi+904h], ebx
 * 0000000140340B4C: and     dword ptr [rsi+970h], 0FFFFFFFBh
 * 0000000140340B53: jmp     short loc_140340B5E
 * 0000000140340B55: mov     rsi, rbx
 * 0000000140340B58: mov     [rbx+7CCh], eax
 * 0000000140340B5E: lea     rbx, [rsi+r14]
 * 0000000140340B62: mov     r9d, 1
 * 0000000140340B68: add     [rsi+7F4h], r9d
 * 0000000140340B6F: mov     rax, rbx
 * 0000000140340B72: mov     [rbp+20F0h+var_2070], rbx
 * 0000000140340B79: xor     r8d, r8d
 * 0000000140340B7C: mov     [rbp+20F0h+var_19A8], rbx
 * 0000000140340B83: lea     ecx, [r9+2Fh]
 * 0000000140340B87: lea     edx, [rcx-2Ah]
 * 0000000140340B8A: mov     [rax], r8
 * 0000000140340B8D: add     ecx, 0FFFFFFF8h
 * 0000000140340B90: add     rax, 8
 * 0000000140340B94: sub     rdx, r9
 * 0000000140340B97: jnz     short loc_140340B8A
 * 0000000140340B99: test    ecx, ecx
 * 0000000140340B9B: jz      short loc_140340BAD
 * 0000000140340B9D: mov     r8d, 0FFFFFFFFh
 * 0000000140340BA3: mov     [rax], dl
 * 0000000140340BA5: add     rax, r9
 * 0000000140340BA8: add     ecx, r8d
 * 0000000140340BAB: jnz     short loc_140340BA3
 * 0000000140340BAD: mov     dword ptr [rbx], 0Bh
 * 0000000140340BB3: mov     r9, r12
 * 0000000140340BB6: mov     [rbx+8], r12
 * 0000000140340BBA: mov     rax, r12
 * 0000000140340BBD: mov     [rbx+10h], r15d
 * 0000000140340BC1: add     [rsi+810h], r15d
 * 0000000140340BC8: mov     r10d, [rsi+7FCh]
 * 0000000140340BCF: mov     r14, [rsi+800h]
 * 0000000140340BD6: mov     ecx, r15d
 * 0000000140340BD9: add     rcx, r12
 * 0000000140340BDC: cmp     r12, rcx
 * 0000000140340BDF: jnb     short loc_140340BF2
 * 0000000140340BE1: mov     r8d, 40h ; '@'
 * 0000000140340BE7: prefetchnta byte ptr [rax]
 * 0000000140340BEA: add     rax, r8
 * 0000000140340BED: cmp     rax, rcx
 * 0000000140340BF0: jb      short loc_140340BE7
 * 0000000140340BF2: mov     r11d, r15d
 * 0000000140340BF5: mov     r8, r14
 * 0000000140340BF8: shr     r11d, 7
 * 0000000140340BFC: test    r11d, r11d
 * 0000000140340BFF: jz      short loc_140340C79
 * 0000000140340C01: mov     edi, 0FFFFFFFFh
 * 0000000140340C06: mov     rbx, 7010008004002001h
 * 0000000140340C10: mov     r13d, 1
 * 0000000140340C16: mov     eax, 8
 * 0000000140340C1B: xor     r8, [r9]
 * 0000000140340C1E: mov     ecx, r10d
 * 0000000140340C21: rol     r8, cl
 * 0000000140340C24: xor     r8, [r9+8]
 * 0000000140340C28: add     r9, 10h
 * 0000000140340C2C: rol     r8, cl
 * 0000000140340C2F: sub     rax, r13
 * 0000000140340C32: jnz     short loc_140340C1B
 * 0000000140340C34: mov     rcx, r9
 * 0000000140340C37: sub     rcx, r12
 * 0000000140340C3A: xor     rcx, r14
 * 0000000140340C3D: mov     rax, rcx
 * 0000000140340C40: rol     rax, 11h
 * 0000000140340C44: xor     rcx, rax
 * 0000000140340C47: mov     rax, rbx
 * 0000000140340C4A: mul     rcx
 * 0000000140340C4D: xor     r10d, eax
 * 0000000140340C50: mov     [rbp+20F0h+var_19A0], rdx
 * 0000000140340C57: xor     r10d, edx
 * 0000000140340C5A: and     r10d, 3Fh
 * 0000000140340C5E: cmovz   r10d, r13d
 * 0000000140340C62: add     r11d, edi
 * 0000000140340C65: jnz     short loc_140340C16
 * 0000000140340C67: mov     rbx, [rbp+20F0h+var_2070]
 * 0000000140340C6E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140340C75: mov     r13, [rbp+20F0h+var_20F0]
 * 0000000140340C79: mov     edx, r15d
 * 0000000140340C7C: mov     r11d, 1
 * 0000000140340C82: and     edx, 7Fh
 * 0000000140340C85: cmp     edx, 8
 * 0000000140340C88: jb      short loc_140340CA5
 * 0000000140340C8A: mov     eax, edx
 * 0000000140340C8C: shr     rax, 3
 * 0000000140340C90: xor     r8, [r9]
 * 0000000140340C93: mov     ecx, r10d
 * 0000000140340C96: rol     r8, cl
 * 0000000140340C99: add     r9, 8
 * 0000000140340C9D: add     edx, 0FFFFFFF8h
 * 0000000140340CA0: sub     rax, r11
 * 0000000140340CA3: jnz     short loc_140340C90
 * 0000000140340CA5: test    edx, edx
 * 0000000140340CA7: jz      short loc_140340CC8
 * 0000000140340CA9: mov     r13d, 0FFFFFFFFh
 * 0000000140340CAF: movzx   eax, byte ptr [r9]
 * 0000000140340CB3: mov     ecx, r10d
 * 0000000140340CB6: xor     r8, rax
 * 0000000140340CB9: add     r9, r11
 * 0000000140340CBC: rol     r8, cl
 * 0000000140340CBF: add     edx, r13d
 * 0000000140340CC2: jnz     short loc_140340CAF
 * 0000000140340CC4: mov     r13, [rbp+20F0h+var_20F0]
 * 0000000140340CC8: mov     rax, r8
 * 0000000140340CCB: shr     rax, 1Fh
 * 0000000140340CCF: xor     r10d, r10d
 * 0000000140340CD2: jmp     short loc_140340CDB
 * 0000000140340CD4: xor     r8d, eax
 * 0000000140340CD7: shr     rax, 1Fh
 * 0000000140340CDB: test    rax, rax
 * 0000000140340CDE: jnz     short loc_140340CD4
 * 0000000140340CE0: btr     r8d, 1Fh
 * 0000000140340CE5: mov     [rbx+14h], r8d
 * 0000000140340CE9: mov     rbx, rsi
 * 0000000140340CEC: add     [rsi+810h], r15d
 * 0000000140340CF3: mov     dword ptr [rsi+934h], 4
 * 0000000140340CFD: cmp     dword ptr [rbx+934h], 5
 * 0000000140340D04: jge     loc_140340F37
 * 0000000140340D0A: mov     r14d, [rbx+7CCh]
 * 0000000140340D11: mov     r15d, 20h ; ' '
 * 0000000140340D17: mov     r12d, [rbx+820h]
 * 0000000140340D1E: cmp     r12d, 7
 * 0000000140340D22: mov     r8d, [rbx+904h]
 * 0000000140340D29: cmovnz  r15d, r10d
 * 0000000140340D2D: lea     eax, [r14+30h]
 * 0000000140340D31: cmp     eax, [rbx+9FCh]
 * 0000000140340D37: jbe     loc_140340E17
 * 0000000140340D3D: mov     edx, eax
 * 0000000140340D3F: mov     rcx, rbx
 * 0000000140340D42: call    sub_1403495B4
 * 0000000140340D47: xor     r10d, r10d
 * 0000000140340D4A: mov     rsi, rax
 * 0000000140340D4D: test    rax, rax
 * 0000000140340D50: jz      loc_140341681
 * 0000000140340D56: mov     ecx, [rbx+970h]
 * 0000000140340D5C: test    cl, 4
 * 0000000140340D5F: jnz     loc_140340E0E
 * 0000000140340D65: mov     eax, [rbx+7CCh]
 * 0000000140340D6B: lea     r9d, [r10+1]
 * 0000000140340D6F: mov     r8, [rbx+7B0h]
 * 0000000140340D76: and     ecx, 20000000h
 * 0000000140340D7C: neg     ecx
 * 0000000140340D7E: sbb     edx, edx
 * 0000000140340D80: and     edx, [rbx+904h]
 * 0000000140340D86: cmp     eax, 8
 * 0000000140340D89: jb      short loc_140340DA0
 * 0000000140340D8B: mov     ecx, eax
 * 0000000140340D8D: shr     rcx, 3
 * 0000000140340D91: mov     [rbx], r10
 * 0000000140340D94: add     eax, 0FFFFFFF8h
 * 0000000140340D97: add     rbx, 8
 * 0000000140340D9B: sub     rcx, r9
 * 0000000140340D9E: jnz     short loc_140340D91
 * 0000000140340DA0: test    eax, eax
 * 0000000140340DA2: jz      short loc_140340DB3
 * 0000000140340DA4: mov     ecx, 0FFFFFFFFh
 * 0000000140340DA9: mov     [rbx], r10b
 * 0000000140340DAC: add     rbx, r9
 * 0000000140340DAF: add     eax, ecx
 * 0000000140340DB1: jnz     short loc_140340DA9
 * 0000000140340DB3: mov     ebx, [rsi+904h]
 * 0000000140340DB9: mov     [rsi+904h], edx
 * 0000000140340DBF: cmp     edx, 3
 * 0000000140340DC2: jz      short loc_140340DF6
 * 0000000140340DC4: test    dword ptr [rsi+970h], 10000000h
 * 0000000140340DCE: mov     ecx, r10d
 * 0000000140340DD1: cmovz   ecx, edx
 * 0000000140340DD4: test    ecx, ecx
 * 0000000140340DD6: jz      short loc_140340DED
 * 0000000140340DD8: mov     rax, [rsi+220h]
 * 0000000140340DDF: lea     rcx, [r8-8]
 * 0000000140340DE3: mov     rdx, [rcx]
 * 0000000140340DE6: call    KeGuardDispatchICall
 * 0000000140340DEB: jmp     short loc_140340E05
 * 0000000140340DED: mov     rax, [rsi+0F8h]
 * 0000000140340DF4: jmp     short loc_140340DFD
 * 0000000140340DF6: mov     rax, [rsi+360h]
 * 0000000140340DFD: mov     rcx, r8
 * 0000000140340E00: call    KeGuardDispatchICall
 * 0000000140340E05: mov     [rsi+904h], ebx
 * 0000000140340E0B: xor     r10d, r10d
 * 0000000140340E0E: and     dword ptr [rsi+970h], 0FFFFFFFBh
 * 0000000140340E15: jmp     short loc_140340E20
 * 0000000140340E17: mov     rsi, rbx
 * 0000000140340E1A: mov     [rbx+7CCh], eax
 * 0000000140340E20: mov     r8d, 1
 * 0000000140340E26: lea     rbx, [rsi+r14]
 * 0000000140340E2A: add     [rsi+7F4h], r8d
 * 0000000140340E31: mov     rax, rbx
 * 0000000140340E34: mov     [rbp+20F0h+var_1998], rbx
 * 0000000140340E3B: lea     ecx, [r8+2Fh]
 * 0000000140340E3F: lea     edx, [rcx-2Ah]
 * 0000000140340E42: mov     [rax], r10
 * 0000000140340E45: add     ecx, 0FFFFFFF8h
 * 0000000140340E48: add     rax, 8
 * 0000000140340E4C: sub     rdx, r8
 * 0000000140340E4F: jnz     short loc_140340E42
 * 0000000140340E51: test    ecx, ecx
 * 0000000140340E53: jz      short loc_140340E64
 * 0000000140340E55: mov     edx, 0FFFFFFFFh
 * 0000000140340E5A: mov     [rax], r10b
 * 0000000140340E5D: add     rax, r8
 * 0000000140340E60: add     ecx, edx
 * 0000000140340E62: jnz     short loc_140340E5A
 * 0000000140340E64: mov     [rbx], r15d
 * 0000000140340E67: mov     r14d, 20h ; ' '
 * 0000000140340E6D: mov     [rbx+8], r13
 * 0000000140340E71: cmp     r12d, 7
 * 0000000140340E75: jnz     short loc_140340E89
 * 0000000140340E77: lea     r9, [rbx+18h]
 * 0000000140340E7B: mov     r8d, r14d
 * 0000000140340E7E: mov     rdx, r13
 * 0000000140340E81: mov     rcx, rsi
 * 0000000140340E84: call    sub_1401ADA3C
 * 0000000140340E89: mov     rcx, [rbp+20F0h+var_20D8]
 * 0000000140340E8D: mov     r8, r13
 * 0000000140340E90: mov     [rbx+10h], r14d
 * 0000000140340E94: add     rcx, 40h ; '@'
 * 0000000140340E98: add     [rsi+810h], r14d
 * 0000000140340E9F: mov     rax, r13
 * 0000000140340EA2: mov     r11d, [rsi+7FCh]
 * 0000000140340EA9: mov     rdx, [rsi+800h]
 * 0000000140340EB0: cmp     r13, rcx
 * 0000000140340EB3: jnb     short loc_140340EC6
 * 0000000140340EB5: mov     r9d, 40h ; '@'
 * 0000000140340EBB: prefetchnta byte ptr [rax]
 * 0000000140340EBE: add     rax, r9
 * 0000000140340EC1: cmp     rax, rcx
 * 0000000140340EC4: jb      short loc_140340EBB
 * 0000000140340EC6: mov     r10d, 4
 * 0000000140340ECC: mov     r9d, r14d
 * 0000000140340ECF: lea     r15d, [r10-3]
 * 0000000140340ED3: xor     rdx, [r8]
 * 0000000140340ED6: mov     ecx, r11d
 * 0000000140340ED9: rol     rdx, cl
 * 0000000140340EDC: add     r8, 8
 * 0000000140340EE0: add     r9d, 0FFFFFFF8h
 * 0000000140340EE4: sub     r10, r15
 * 0000000140340EE7: jnz     short loc_140340ED3
 * 0000000140340EE9: test    r9d, r9d
 * 0000000140340EEC: jz      short loc_140340F0C
 * 0000000140340EEE: mov     r10d, 0FFFFFFFFh
 * 0000000140340EF4: movzx   eax, byte ptr [r8]
 * 0000000140340EF8: mov     ecx, r11d
 * 0000000140340EFB: xor     rdx, rax
 * 0000000140340EFE: add     r8, r15
 * 0000000140340F01: rol     rdx, cl
 * 0000000140340F04: add     r9d, r10d
 * 0000000140340F07: jnz     short loc_140340EF4
 * 0000000140340F09: xor     r10d, r10d
 * 0000000140340F0C: mov     rax, rdx
 * 0000000140340F0F: jmp     short loc_140340F13
 * 0000000140340F11: xor     edx, eax
 * 0000000140340F13: shr     rax, 1Fh
 * 0000000140340F17: test    rax, rax
 * 0000000140340F1A: jnz     short loc_140340F11
 * 0000000140340F1C: btr     edx, 1Fh
 * 0000000140340F20: mov     [rbx+14h], edx
 * 0000000140340F23: mov     rbx, rsi
 * 0000000140340F26: add     [rsi+810h], r14d
 * 0000000140340F2D: mov     dword ptr [rsi+934h], 5
 * 0000000140340F37: mov     eax, [rbx+934h]
 * 0000000140340F3D: mov     r12d, 6
 * 0000000140340F43: mov     rsi, rbx
 * 0000000140340F46: mov     r14, rbx
 * 0000000140340F49: cmp     eax, r12d
 * 0000000140340F4C: jge     loc_140341322
 * 0000000140340F52: test    dword ptr [rbx+970h], 40000000h
 * 0000000140340F5C: mov     r13d, r10d
 * 0000000140340F5F: mov     r15, [rbp+20F0h+var_2088]
 * 0000000140340F63: mov     rax, [r15+20h]
 * 0000000140340F67: mov     [rbp+20F0h+var_20A0], rax
 * 0000000140340F6B: jnz     loc_14034130A
 * 0000000140340F71: mov     ebx, r10d
 * 0000000140340F74: cmp     [r15+30h], r10d
 * 0000000140340F78: jbe     loc_14034130A
 * 0000000140340F7E: mov     rdi, rax
 * 0000000140340F81: mov     eax, ebx
 * 0000000140340F83: lea     rdx, [rbp+20F0h+var_1CF8]
 * 0000000140340F8A: xor     r8d, r8d
 * 0000000140340F8D: movsxd  rcx, dword ptr [rdi+rax*4]
 * 0000000140340F91: mov     rax, [rsi+258h]
 * 0000000140340F98: sar     rcx, 4
 * 0000000140340F9C: add     rcx, rdi
 * 0000000140340F9F: call    KeGuardDispatchICall
 * 0000000140340FA4: xor     r10d, r10d
 * 0000000140340FA7: lea     r9d, [r10+1]
 * 0000000140340FAB: test    rax, rax
 * 0000000140340FAE: jnz     short loc_140340FB3
 * 0000000140340FB0: add     r13d, r9d
 * 0000000140340FB3: add     ebx, r9d
 * 0000000140340FB6: cmp     ebx, [r15+30h]
 * 0000000140340FBA: jb      short loc_140340F81
 * 0000000140340FBC: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140340FC3: test    r13d, r13d
 * 0000000140340FC6: jz      loc_14034130A
 * 0000000140340FCC: mov     r14d, [rsi+7CCh]
 * 0000000140340FD3: mov     ecx, r13d
 * 0000000140340FD6: mov     r8d, [rsi+904h]
 * 0000000140340FDD: shl     ecx, 4
 * 0000000140340FE0: add     ecx, 30h ; '0'
 * 0000000140340FE3: add     ecx, r14d
 * 0000000140340FE6: cmp     ecx, [rsi+9FCh]
 * 0000000140340FEC: jbe     loc_1403410DF
 * 0000000140340FF2: mov     edx, ecx
 * 0000000140340FF4: mov     rcx, rsi
 * 0000000140340FF7: call    sub_1403495B4
 * 0000000140340FFC: xor     r10d, r10d
 * 0000000140340FFF: mov     rbx, rax
 * 0000000140341002: test    rax, rax
 * 0000000140341005: jz      loc_1403410D2
 * 000000014034100B: mov     ecx, [rsi+970h]
 * 0000000140341011: test    cl, 4
 * 0000000140341014: jnz     loc_1403410C3
 * 000000014034101A: mov     eax, [rsi+7CCh]
 * 0000000140341020: lea     r9d, [r10+1]
 * 0000000140341024: mov     r8, [rsi+7B0h]
 * 000000014034102B: and     ecx, 20000000h
 * 0000000140341031: neg     ecx
 * 0000000140341033: sbb     edx, edx
 * 0000000140341035: and     edx, [rsi+904h]
 * 000000014034103B: cmp     eax, 8
 * 000000014034103E: jb      short loc_140341055
 * 0000000140341040: mov     ecx, eax
 * 0000000140341042: shr     rcx, 3
 * 0000000140341046: mov     [rsi], r10
 * 0000000140341049: add     eax, 0FFFFFFF8h
 * 000000014034104C: add     rsi, 8
 * 0000000140341050: sub     rcx, r9
 * 0000000140341053: jnz     short loc_140341046
 * 0000000140341055: test    eax, eax
 * 0000000140341057: jz      short loc_140341068
 * 0000000140341059: mov     ecx, 0FFFFFFFFh
 * 000000014034105E: mov     [rsi], r10b
 * 0000000140341061: add     rsi, r9
 * 0000000140341064: add     eax, ecx
 * 0000000140341066: jnz     short loc_14034105E
 * 0000000140341068: mov     esi, [rbx+904h]
 * 000000014034106E: mov     [rbx+904h], edx
 * 0000000140341074: cmp     edx, 3
 * 0000000140341077: jz      short loc_1403410AB
 * 0000000140341079: test    dword ptr [rbx+970h], 10000000h
 * 0000000140341083: mov     ecx, r10d
 * 0000000140341086: cmovz   ecx, edx
 * 0000000140341089: test    ecx, ecx
 * 000000014034108B: jz      short loc_1403410A2
 * 000000014034108D: mov     rax, [rbx+220h]
 * 0000000140341094: lea     rcx, [r8-8]
 * 0000000140341098: mov     rdx, [rcx]
 * 000000014034109B: call    KeGuardDispatchICall
 * 00000001403410A0: jmp     short loc_1403410BA
 * 00000001403410A2: mov     rax, [rbx+0F8h]
 * 00000001403410A9: jmp     short loc_1403410B2
 * 00000001403410AB: mov     rax, [rbx+360h]
 * 00000001403410B2: mov     rcx, r8
 * 00000001403410B5: call    KeGuardDispatchICall
 * 00000001403410BA: mov     [rbx+904h], esi
 * 00000001403410C0: xor     r10d, r10d
 * 00000001403410C3: and     dword ptr [rbx+970h], 0FFFFFFFBh
 * 00000001403410CA: mov     r9d, 1
 * 00000001403410D0: jmp     short loc_1403410E8
 * 00000001403410D2: mov     eax, 0C000022Dh
 * 00000001403410D7: mov     r14, rsi
 * 00000001403410DA: jmp     loc_14034130D
 * 00000001403410DF: mov     rbx, rsi
 * 00000001403410E2: mov     [rsi+7CCh], ecx
 * 00000001403410E8: add     [rbx+7F4h], r9d
 * 00000001403410EF: lea     rcx, [rbx+r14]
 * 00000001403410F3: mov     [rbp+20F0h+var_1D00], rcx
 * 00000001403410FA: mov     rax, rcx
 * 00000001403410FD: mov     edx, 30h ; '0'
 * 0000000140341102: mov     r8, r12
 * 0000000140341105: mov     [rax], r10
 * 0000000140341108: add     edx, 0FFFFFFF8h
 * 000000014034110B: add     rax, 8
 * 000000014034110F: sub     r8, r9
 * 0000000140341112: jnz     short loc_140341105
 * 0000000140341114: test    edx, edx
 * 0000000140341116: jz      short loc_140341129
 * 0000000140341118: mov     r8d, 0FFFFFFFFh
 * 000000014034111E: mov     [rax], r10b
 * 0000000140341121: add     rax, r9
 * 0000000140341124: add     edx, r8d
 * 0000000140341127: jnz     short loc_14034111E
 * 0000000140341129: mov     dword ptr [rcx], 0Ah
 * 000000014034112F: mov     [rcx+8], r10
 * 0000000140341133: mov     [rcx+10h], r10d
 * 0000000140341137: mov     rdx, [rbx+800h]
 * 000000014034113E: mov     rax, rdx
 * 0000000140341141: jmp     short loc_140341145
 * 0000000140341143: xor     edx, eax
 * 0000000140341145: shr     rax, 1Fh
 * 0000000140341149: test    rax, rax
 * 000000014034114C: jnz     short loc_140341143
 * 000000014034114E: btr     edx, 1Fh
 * 0000000140341152: mov     r14, rbx
 * 0000000140341155: mov     [rcx+14h], edx
 * 0000000140341158: mov     r12d, r10d
 * 000000014034115B: mov     rax, [rbp+20F0h+var_1D00]
 * 0000000140341162: mov     [rbp+20F0h+var_1E20], rax
 * 0000000140341169: mov     [rax+18h], r9d
 * 000000014034116D: mov     rax, [rbp+20F0h+var_1E20]
 * 0000000140341174: mov     r9, [rbp+20F0h+var_2088]
 * 0000000140341178: mov     [rax+1Ch], r13d
 * 000000014034117C: mov     rcx, [rbp+20F0h+var_1E20]
 * 0000000140341183: lea     r15, [rcx+30h]
 * 0000000140341187: cmp     [r9+30h], r10d
 * 000000014034118B: jbe     loc_140341293
 * 0000000140341191: mov     rcx, [rbp+20F0h+var_20A0]
 * 0000000140341195: lea     rdx, [rbp+20F0h+var_1CF8]
 * 000000014034119C: mov     eax, r12d
 * 000000014034119F: xor     r8d, r8d
 * 00000001403411A2: movsxd  rsi, dword ptr [rcx+rax*4]
 * 00000001403411A6: mov     rax, [rbx+258h]
 * 00000001403411AD: sar     rsi, 4
 * 00000001403411B1: add     rsi, rcx
 * 00000001403411B4: mov     rcx, rsi
 * 00000001403411B7: mov     [rbp+20F0h+var_2070], rsi
 * 00000001403411BE: call    KeGuardDispatchICall
 * 00000001403411C3: xor     r10d, r10d
 * 00000001403411C6: test    rax, rax
 * 00000001403411C9: jnz     loc_140341273
 * 00000001403411CF: lea     r11d, [r10+4]
 * 00000001403411D3: mov     r8, rsi
 * 00000001403411D6: add     [rbx+810h], r11d
 * 00000001403411DD: lea     rcx, [rsi+4]
 * 00000001403411E1: mov     r10d, [rbx+7FCh]
 * 00000001403411E8: mov     rax, rsi
 * 00000001403411EB: mov     rdx, [rbx+800h]
 * 00000001403411F2: cmp     rsi, rcx
 * 00000001403411F5: jnb     short loc_140341206
 * 00000001403411F7: lea     r9d, [r11+3Ch]
 * 00000001403411FB: prefetchnta byte ptr [rax]
 * 00000001403411FE: add     rax, r9
 * 0000000140341201: cmp     rax, rcx
 * 0000000140341204: jb      short loc_1403411FB
 * 0000000140341206: mov     r9d, r11d
 * 0000000140341209: mov     edi, 1
 * 000000014034120E: mov     esi, 0FFFFFFFFh
 * 0000000140341213: movzx   eax, byte ptr [r8]
 * 0000000140341217: mov     ecx, r10d
 * 000000014034121A: xor     rdx, rax
 * 000000014034121D: add     r8, rdi
 * 0000000140341220: rol     rdx, cl
 * 0000000140341223: add     r9d, esi
 * 0000000140341226: jnz     short loc_140341213
 * 0000000140341228: mov     rsi, [rbp+20F0h+var_2070]
 * 000000014034122F: mov     rax, rdx
 * 0000000140341232: shr     rax, 1Fh
 * 0000000140341236: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034123D: xor     r10d, r10d
 * 0000000140341240: jmp     short loc_140341248
 * 0000000140341242: xor     edx, eax
 * 0000000140341244: shr     rax, 1Fh
 * 0000000140341248: test    rax, rax
 * 000000014034124B: jnz     short loc_140341242
 * 000000014034124D: mov     eax, [r15]
 * 0000000140341250: xor     eax, edx
 * 0000000140341252: btr     eax, 1Fh
 * 0000000140341256: xor     [r15], eax
 * 0000000140341259: mov     eax, 0FFFFFFFFh
 * 000000014034125E: mov     [r15+4], r11d
 * 0000000140341262: mov     [r15+8], rsi
 * 0000000140341266: add     r15, 10h
 * 000000014034126A: add     r13d, eax
 * 000000014034126D: jz      loc_140341304
 * 0000000140341273: mov     rax, [rbp+20F0h+var_2088]
 * 0000000140341277: mov     r9d, 1
 * 000000014034127D: add     r12d, r9d
 * 0000000140341280: cmp     r12d, [rax+30h]
 * 0000000140341284: jb      loc_140341191
 * 000000014034128A: mov     rcx, [rbp+20F0h+var_1E20]
 * 0000000140341291: jmp     short loc_140341299
 * 0000000140341293: mov     r9d, 1
 * 0000000140341299: test    r13d, r13d
 * 000000014034129C: jz      short loc_140341304
 * 000000014034129E: cmp     [rbx+8D8h], r10d
 * 00000001403412A5: jnz     loc_140341681
 * 00000001403412AB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403412B5: add     rax, rbx
 * 00000001403412B8: mov     [rbx+8E0h], rax
 * 00000001403412BF: test    rcx, rcx
 * 00000001403412C2: jz      short loc_1403412D3
 * 00000001403412C4: mov     rax, 0B3B74BDEE4453415h
 * 00000001403412CE: add     rax, rcx
 * 00000001403412D1: jmp     short loc_1403412D6
 * 00000001403412D3: mov     rax, r10
 * 00000001403412D6: mov     [rbx+8E8h], rax
 * 00000001403412DD: test    rcx, rcx
 * 00000001403412E0: jz      short loc_1403412E7
 * 00000001403412E2: movsxd  rax, dword ptr [rcx]
 * 00000001403412E5: jmp     short loc_1403412EA
 * 00000001403412E7: mov     rax, r10
 * 00000001403412EA: mov     [rbx+8F0h], rax
 * 00000001403412F1: mov     [rbx+8F8h], r10
 * 00000001403412F8: mov     [rbx+8D8h], r9d
 * 00000001403412FF: jmp     loc_140341681
 * 0000000140341304: mov     r12d, 6
 * 000000014034130A: mov     eax, r10d
 * 000000014034130D: mov     rbx, r14
 * 0000000140341310: test    eax, eax
 * 0000000140341312: js      loc_140341681
 * 0000000140341318: mov     [r14+934h], r12d
 * 000000014034131F: mov     eax, r12d
 * 0000000140341322: cmp     eax, 7
 * 0000000140341325: jge     loc_140341693
 * 000000014034132B: test    dword ptr [r14+970h], 40000000h
 * 0000000140341336: mov     r13d, r10d
 * 0000000140341339: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014034133D: mov     rsi, [rdx]
 * 0000000140341340: mov     [rbp+20F0h+var_2088], rsi
 * 0000000140341344: jnz     loc_140341677
 * 000000014034134A: mov     rax, [rbp+20F0h+var_20D8]
 * 000000014034134E: mov     ebx, r10d
 * 0000000140341351: cmp     [rax+30h], r10d
 * 0000000140341355: jbe     loc_140341677
 * 000000014034135B: mov     rdi, rax
 * 000000014034135E: mov     eax, ebx
 * 0000000140341360: lea     rdx, [rbp+20F0h+var_1CE8]
 * 0000000140341367: xor     r8d, r8d
 * 000000014034136A: movsxd  rcx, dword ptr [rsi+rax*4]
 * 000000014034136E: mov     rax, [r14+258h]
 * 0000000140341375: sar     rcx, 4
 * 0000000140341379: add     rcx, rsi
 * 000000014034137C: call    KeGuardDispatchICall
 * 0000000140341381: xor     r10d, r10d
 * 0000000140341384: lea     r9d, [r10+1]
 * 0000000140341388: test    rax, rax
 * 000000014034138B: jnz     short loc_140341390
 * 000000014034138D: add     r13d, r9d
 * 0000000140341390: add     ebx, r9d
 * 0000000140341393: cmp     ebx, [rdi+30h]
 * 0000000140341396: jb      short loc_14034135E
 * 0000000140341398: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034139F: test    r13d, r13d
 * 00000001403413A2: jz      loc_140341677
 * 00000001403413A8: mov     r15d, [r14+7CCh]
 * 00000001403413AF: mov     ecx, r13d
 * 00000001403413B2: mov     r8d, [r14+904h]
 * 00000001403413B9: shl     ecx, 4
 * 00000001403413BC: add     ecx, 30h ; '0'
 * 00000001403413BF: add     ecx, r15d
 * 00000001403413C2: cmp     ecx, [r14+9FCh]
 * 00000001403413C9: jbe     loc_1403414C0
 * 00000001403413CF: mov     edx, ecx
 * 00000001403413D1: mov     rcx, r14
 * 00000001403413D4: call    sub_1403495B4
 * 00000001403413D9: xor     r10d, r10d
 * 00000001403413DC: mov     rbx, rax
 * 00000001403413DF: test    rax, rax
 * 00000001403413E2: jz      loc_1403414B6
 * 00000001403413E8: mov     ecx, [r14+970h]
 * 00000001403413EF: test    cl, 4
 * 00000001403413F2: jnz     loc_1403414A7
 * 00000001403413F8: mov     eax, [r14+7CCh]
 * 00000001403413FF: lea     r9d, [r10+1]
 * 0000000140341403: mov     r8, [r14+7B0h]
 * 000000014034140A: and     ecx, 20000000h
 * 0000000140341410: neg     ecx
 * 0000000140341412: sbb     edx, edx
 * 0000000140341414: and     edx, [r14+904h]
 * 000000014034141B: cmp     eax, 8
 * 000000014034141E: jb      short loc_140341435
 * 0000000140341420: mov     ecx, eax
 * 0000000140341422: shr     rcx, 3
 * 0000000140341426: mov     [r14], r10
 * 0000000140341429: add     eax, 0FFFFFFF8h
 * 000000014034142C: add     r14, 8
 * 0000000140341430: sub     rcx, r9
 * 0000000140341433: jnz     short loc_140341426
 * 0000000140341435: test    eax, eax
 * 0000000140341437: jz      short loc_140341448
 * 0000000140341439: mov     ecx, 0FFFFFFFFh
 * 000000014034143E: mov     [r14], r10b
 * 0000000140341441: add     r14, r9
 * 0000000140341444: add     eax, ecx
 * 0000000140341446: jnz     short loc_14034143E
 * 0000000140341448: mov     esi, [rbx+904h]
 * 000000014034144E: mov     [rbx+904h], edx
 * 0000000140341454: cmp     edx, 3
 * 0000000140341457: jz      short loc_14034148B
 * 0000000140341459: test    dword ptr [rbx+970h], 10000000h
 * 0000000140341463: mov     ecx, r10d
 * 0000000140341466: cmovz   ecx, edx
 * 0000000140341469: test    ecx, ecx
 * 000000014034146B: jz      short loc_140341482
 * 000000014034146D: mov     rax, [rbx+220h]
 * 0000000140341474: lea     rcx, [r8-8]
 * 0000000140341478: mov     rdx, [rcx]
 * 000000014034147B: call    KeGuardDispatchICall
 * 0000000140341480: jmp     short loc_14034149A
 * 0000000140341482: mov     rax, [rbx+0F8h]
 * 0000000140341489: jmp     short loc_140341492
 * 000000014034148B: mov     rax, [rbx+360h]
 * 0000000140341492: mov     rcx, r8
 * 0000000140341495: call    KeGuardDispatchICall
 * 000000014034149A: mov     [rbx+904h], esi
 * 00000001403414A0: xor     r10d, r10d
 * 00000001403414A3: mov     rsi, [rbp+20F0h+var_2088]
 * 00000001403414A7: and     dword ptr [rbx+970h], 0FFFFFFFBh
 * 00000001403414AE: mov     r9d, 1
 * 00000001403414B4: jmp     short loc_1403414CA
 * 00000001403414B6: mov     eax, 0C000022Dh
 * 00000001403414BB: jmp     loc_14034167A
 * 00000001403414C0: mov     rbx, r14
 * 00000001403414C3: mov     [r14+7CCh], ecx
 * 00000001403414CA: add     [rbx+7F4h], r9d
 * 00000001403414D1: lea     rcx, [rbx+r15]
 * 00000001403414D5: mov     [rbp+20F0h+var_1CF0], rcx
 * 00000001403414DC: mov     rax, rcx
 * 00000001403414DF: mov     edx, 30h ; '0'
 * 00000001403414E4: mov     r8, r12
 * 00000001403414E7: mov     [rax], r10
 * 00000001403414EA: add     edx, 0FFFFFFF8h
 * 00000001403414ED: add     rax, 8
 * 00000001403414F1: sub     r8, r9
 * 00000001403414F4: jnz     short loc_1403414E7
 * 00000001403414F6: test    edx, edx
 * 00000001403414F8: jz      short loc_14034150B
 * 00000001403414FA: mov     r8d, 0FFFFFFFFh
 * 0000000140341500: mov     [rax], r10b
 * 0000000140341503: add     rax, r9
 * 0000000140341506: add     edx, r8d
 * 0000000140341509: jnz     short loc_140341500
 * 000000014034150B: mov     dword ptr [rcx], 0Ah
 * 0000000140341511: mov     [rcx+8], r10
 * 0000000140341515: mov     [rcx+10h], r10d
 * 0000000140341519: mov     rdx, [rbx+800h]
 * 0000000140341520: mov     rax, rdx
 * 0000000140341523: jmp     short loc_140341527
 * 0000000140341525: xor     edx, eax
 * 0000000140341527: shr     rax, 1Fh
 * 000000014034152B: test    rax, rax
 * 000000014034152E: jnz     short loc_140341525
 * 0000000140341530: btr     edx, 1Fh
 * 0000000140341534: mov     r14, rbx
 * 0000000140341537: mov     [rcx+14h], edx
 * 000000014034153A: mov     r12d, r10d
 * 000000014034153D: mov     rax, [rbp+20F0h+var_1CF0]
 * 0000000140341544: mov     [rbp+20F0h+var_1E18], rax
 * 000000014034154B: mov     [rax+18h], r9d
 * 000000014034154F: mov     rax, [rbp+20F0h+var_1E18]
 * 0000000140341556: mov     [rax+1Ch], r13d
 * 000000014034155A: mov     rax, [rbp+20F0h+var_20D8]
 * 000000014034155E: mov     rcx, [rbp+20F0h+var_1E18]
 * 0000000140341565: lea     r15, [rcx+30h]
 * 0000000140341569: cmp     [rax+30h], r10d
 * 000000014034156D: jbe     loc_14034166E
 * 0000000140341573: mov     eax, r12d
 * 0000000140341576: lea     rdx, [rbp+20F0h+var_1CE8]
 * 000000014034157D: xor     r8d, r8d
 * 0000000140341580: movsxd  rsi, dword ptr [rsi+rax*4]
 * 0000000140341584: mov     rax, [rbx+258h]
 * 000000014034158B: sar     rsi, 4
 * 000000014034158F: add     rsi, [rbp+20F0h+var_2088]
 * 0000000140341593: mov     rcx, rsi
 * 0000000140341596: mov     [rbp+20F0h+var_2070], rsi
 * 000000014034159D: call    KeGuardDispatchICall
 * 00000001403415A2: xor     r10d, r10d
 * 00000001403415A5: test    rax, rax
 * 00000001403415A8: jnz     loc_14034164C
 * 00000001403415AE: lea     r11d, [r10+4]
 * 00000001403415B2: mov     r8, rsi
 * 00000001403415B5: add     [rbx+810h], r11d
 * 00000001403415BC: lea     rcx, [rsi+4]
 * 00000001403415C0: mov     r10d, [rbx+7FCh]
 * 00000001403415C7: mov     rax, rsi
 * 00000001403415CA: mov     rdx, [rbx+800h]
 * 00000001403415D1: cmp     rsi, rcx
 * 00000001403415D4: jnb     short loc_1403415E5
 * 00000001403415D6: lea     r9d, [r11+3Ch]
 * 00000001403415DA: prefetchnta byte ptr [rax]
 * 00000001403415DD: add     rax, r9
 * 00000001403415E0: cmp     rax, rcx
 * 00000001403415E3: jb      short loc_1403415DA
 * 00000001403415E5: mov     r9d, r11d
 * 00000001403415E8: mov     edi, 1
 * 00000001403415ED: mov     esi, 0FFFFFFFFh
 * 00000001403415F2: movzx   eax, byte ptr [r8]
 * 00000001403415F6: mov     ecx, r10d
 * 00000001403415F9: xor     rdx, rax
 * 00000001403415FC: add     r8, rdi
 * 00000001403415FF: rol     rdx, cl
 * 0000000140341602: add     r9d, esi
 * 0000000140341605: jnz     short loc_1403415F2
 * 0000000140341607: mov     rsi, [rbp+20F0h+var_2070]
 * 000000014034160E: mov     rax, rdx
 * 0000000140341611: shr     rax, 1Fh
 * 0000000140341615: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034161C: xor     r10d, r10d
 * 000000014034161F: jmp     short loc_140341627
 * 0000000140341621: xor     edx, eax
 * 0000000140341623: shr     rax, 1Fh
 * 0000000140341627: test    rax, rax
 * 000000014034162A: jnz     short loc_140341621
 * 000000014034162C: xor     edx, [r15]
 * 000000014034162F: mov     eax, 0FFFFFFFFh
 * 0000000140341634: btr     edx, 1Fh
 * 0000000140341638: xor     [r15], edx
 * 000000014034163B: mov     [r15+4], r11d
 * 000000014034163F: mov     [r15+8], rsi
 * 0000000140341643: add     r15, 10h
 * 0000000140341647: add     r13d, eax
 * 000000014034164A: jz      short loc_140341677
 * 000000014034164C: mov     rax, [rbp+20F0h+var_20D8]
 * 0000000140341650: mov     r9d, 1
 * 0000000140341656: mov     rsi, [rbp+20F0h+var_2088]
 * 000000014034165A: add     r12d, r9d
 * 000000014034165D: cmp     r12d, [rax+30h]
 * 0000000140341661: jb      loc_140341573
 * 0000000140341667: mov     rcx, [rbp+20F0h+var_1E18]
 * 000000014034166E: test    r13d, r13d
 * 0000000140341671: jnz     loc_14034129E
 * 0000000140341677: mov     eax, r10d
 * 000000014034167A: mov     rbx, r14
 * 000000014034167D: test    eax, eax
 * 000000014034167F: jns     short loc_140341688
 * 0000000140341681: mov     eax, 0C000022Dh
 * 0000000140341686: jmp     short loc_140341696
 * 0000000140341688: mov     dword ptr [r14+934h], 7
 * 0000000140341693: mov     eax, r10d
 * 0000000140341696: mov     rsi, rbx
 * 0000000140341699: test    eax, eax
 * 000000014034169B: js      short loc_1403416E7
 * 000000014034169D: mov     rax, [rbx+560h]
 * 00000001403416A4: lea     r8, [rbp+20F0h+var_1E80]
 * 00000001403416AB: lea     rdx, [rbp+20F0h+var_1F00]
 * 00000001403416B2: mov     [rbp+20F0h+var_20E0], rbx
 * 00000001403416B6: mov     rsi, rbx
 * 00000001403416B9: mov     [rbp+20F0h+var_1FF8], rbx
 * 00000001403416C0: mov     rcx, [rax+20h]
 * 00000001403416C4: mov     rax, [rbx+1F8h]
 * 00000001403416CB: mov     [rbp+20F0h+var_2088], rcx
 * 00000001403416CF: call    KeGuardDispatchICall
 * 00000001403416D4: xor     r10d, r10d
 * 00000001403416D7: mov     [rbp+20F0h+var_20C8], rax
 * 00000001403416DB: mov     r12, rax
 * 00000001403416DE: test    rax, rax
 * 00000001403416E1: jnz     loc_14034177E
 * 00000001403416E7: mov     r15d, 1
 * 00000001403416ED: mov     r12d, 0FFFFFFFFh
 * 00000001403416F3: mov     ecx, 8000h
 * 00000001403416F8: test    [rbx+970h], ecx
 * 00000001403416FE: jnz     short loc_14034170D
 * 0000000140341700: cmp     [rbx+8D8h], r10d
 * 0000000140341707: jnz     loc_1403440C8
 * 000000014034170D: mov     r14, [rbx+960h]
 * 0000000140341714: lea     rdx, [rbp+20F0h+var_1B40]
 * 000000014034171B: mov     [rbx+960h], r10
 * 0000000140341722: mov     rcx, r14
 * 0000000140341725: mov     rax, [rbx+290h]
 * 000000014034172C: call    KeGuardDispatchICall
 * 0000000140341731: mov     eax, [rbx+970h]
 * 0000000140341737: test    r15b, al
 * 000000014034173A: jz      loc_140343E74
 * 0000000140341740: and     eax, 0FFFFFFFEh
 * 0000000140341743: mov     rcx, r14
 * 0000000140341746: mov     [rbx+970h], eax
 * 000000014034174C: mov     rax, [rbx+278h]
 * 0000000140341753: call    KeGuardDispatchICall
 * 0000000140341758: mov     r14, rax
 * 000000014034175B: test    rax, rax
 * 000000014034175E: jz      loc_140343E6D
 * 0000000140341764: mov     rax, [rbx+298h]
 * 000000014034176B: mov     rcx, r14
 * 000000014034176E: call    KeGuardDispatchICall
 * 0000000140341773: mov     [rbx+950h], eax
 * 0000000140341779: jmp     loc_140343E74
 * 000000014034177E: mov     eax, [rbp+20F0h+var_1E80]
 * 0000000140341784: mov     ecx, 4
 * 0000000140341789: mov     r13, [rbp+20F0h+var_1F00]
 * 0000000140341790: mov     r8d, 0FFFFFFFFh
 * 0000000140341796: mov     [rbp+20F0h+var_20A8], eax
 * 0000000140341799: lea     rax, [rbp+20F0h+var_1F28]
 * 00000001403417A0: mov     [rbp+20F0h+var_20F0], r13
 * 00000001403417A4: lea     edx, [rcx-3]
 * 00000001403417A7: mov     [rbp+20F0h+var_1F30], r10
 * 00000001403417AE: mov     [rax], r10b
 * 00000001403417B1: add     rax, rdx
 * 00000001403417B4: add     ecx, r8d
 * 00000001403417B7: jnz     short loc_1403417AE
 * 00000001403417B9: mov     r15d, r10d
 * 00000001403417BC: mov     [rbp+20F0h+var_20C0], r10d
 * 00000001403417C0: cmp     [rbx+7F4h], r10d
 * 00000001403417C7: jbe     loc_1403419BD
 * 00000001403417CD: mov     ecx, [rbp+20F0h+var_1F28]
 * 00000001403417D3: mov     r9d, dword ptr [rbp+20F0h+var_1F30+4]
 * 00000001403417DA: mov     r11d, dword ptr [rbp+20F0h+var_1F30]
 * 00000001403417E1: mov     rax, [rbx+0A48h]
 * 00000001403417E8: mov     r14, rbx
 * 00000001403417EB: test    rax, rax
 * 00000001403417EE: cmovnz  r14, rax
 * 00000001403417F2: mov     [rbp+20F0h+var_2070], r14
 * 00000001403417F9: mov     r8d, [r14+7F0h]
 * 0000000140341800: add     r8, r14
 * 0000000140341803: test    r11d, r11d
 * 0000000140341806: jz      short loc_140341816
 * 0000000140341808: cmp     r9d, r15d
 * 000000014034180B: ja      short loc_140341816
 * 000000014034180D: mov     r8d, ecx
 * 0000000140341810: mov     r10d, r9d
 * 0000000140341813: add     r8, r14
 * 0000000140341816: cmp     r10d, r15d
 * 0000000140341819: jz      loc_14034194E
 * 000000014034181F: mov     eax, r15d
 * 0000000140341822: mov     esi, 2
 * 0000000140341827: sub     eax, r10d
 * 000000014034182A: mov     r14d, 0FFFh
 * 0000000140341830: add     r10d, eax
 * 0000000140341833: mov     r9d, eax
 * 0000000140341836: mov     [rbp+20F0h+var_2094], r10d
 * 000000014034183A: mov     r10, 0AAAAAAAAAAAAAAABh
 * 0000000140341844: lea     r12d, [rsi-1]
 * 0000000140341848: lea     r15d, [rsi+0Ah]
 * 000000014034184C: mov     ecx, [r8]
 * 000000014034184F: cmp     ecx, r15d
 * 0000000140341852: jg      short loc_140341893
 * 0000000140341854: jz      short loc_1403418AC
 * 0000000140341856: sub     ecx, r12d
 * 0000000140341859: jz      short loc_1403418AC
 * 000000014034185B: sub     ecx, 6
 * 000000014034185E: jz      short loc_140341882
 * 0000000140341860: sub     ecx, r12d
 * 0000000140341863: jz      short loc_140341878
 * 0000000140341865: cmp     ecx, esi
 * 0000000140341867: jnz     short loc_1403418E4
 * 0000000140341869: mov     eax, [r8+1Ch]
 * 000000014034186D: add     eax, 3
 * 0000000140341870: shl     eax, 4
 * 0000000140341873: jmp     loc_14034191C
 * 0000000140341878: movzx   eax, word ptr [r8+20h]
 * 000000014034187D: jmp     loc_140341916
 * 0000000140341882: mov     eax, [r8+18h]
 * 0000000140341886: add     eax, esi
 * 0000000140341888: lea     eax, [rax+rax*2]
 * 000000014034188B: shl     eax, 3
 * 000000014034188E: jmp     loc_14034191C
 * 0000000140341893: cmp     ecx, 1Ch
 * 0000000140341896: jz      short loc_140341911
 * 0000000140341898: cmp     ecx, 1Eh
 * 000000014034189B: jz      short loc_1403418EB
 * 000000014034189D: cmp     ecx, 20h ; ' '
 * 00000001403418A0: jle     short loc_1403418E4
 * 00000001403418A2: cmp     ecx, 22h ; '"'
 * 00000001403418A5: jle     short loc_1403418C3
 * 00000001403418A7: cmp     ecx, 2Bh ; '+'
 * 00000001403418AA: jnz     short loc_1403418E4
 * 00000001403418AC: mov     ecx, [r8+10h]
 * 00000001403418B0: mov     rax, r10
 * 00000001403418B3: mul     rcx
 * 00000001403418B6: shr     rdx, 3
 * 00000001403418BA: lea     eax, ds:30h[rdx*4]
 * 00000001403418C1: jmp     short loc_14034191C
 * 00000001403418C3: mov     ecx, [r8+20h]
 * 00000001403418C7: mov     edx, [r8+28h]
 * 00000001403418CB: and     rcx, r14
 * 00000001403418CE: add     rdx, r14
 * 00000001403418D1: add     rdx, rcx
 * 00000001403418D4: shr     rdx, 0Ch
 * 00000001403418D8: lea     eax, [rdx+rdx*4]
 * 00000001403418DB: lea     eax, ds:30h[rax*4]
 * 00000001403418E2: jmp     short loc_14034191C
 * 00000001403418E4: mov     eax, 30h ; '0'
 * 00000001403418E9: jmp     short loc_14034191C
 * 00000001403418EB: mov     ecx, [r8+24h]
 * 00000001403418EF: mov     rax, r10
 * 00000001403418F2: sub     ecx, r12d
 * 00000001403418F5: mul     rcx
 * 00000001403418F8: movzx   eax, word ptr [r8+28h]
 * 00000001403418FD: shr     rdx, 3
 * 0000000140341901: add     edx, 7
 * 0000000140341904: and     edx, 0FFFFFFF8h
 * 0000000140341907: add     eax, esi
 * 0000000140341909: lea     eax, [rax+rax*2]
 * 000000014034190C: lea     eax, [rdx+rax*8]
 * 000000014034190F: jmp     short loc_14034191C
 * 0000000140341911: movzx   eax, word ptr [r8+28h]
 * 0000000140341916: add     eax, 37h ; '7'
 * 0000000140341919: and     eax, 0FFFFFFF8h
 * 000000014034191C: add     r8, rax
 * 000000014034191F: sub     r9, r12
 * 0000000140341922: jnz     loc_14034184C
 * 0000000140341928: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014034192C: lea     edx, [r9+1]
 * 0000000140341930: mov     r10d, [rbp+20F0h+var_2094]
 * 0000000140341934: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034193B: mov     r14, [rbp+20F0h+var_2070]
 * 0000000140341942: mov     r15d, [rbp+20F0h+var_20C0]
 * 0000000140341946: mov     r12, [rbp+20F0h+var_20C8]
 * 000000014034194A: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014034194E: mov     ecx, r8d
 * 0000000140341951: mov     dword ptr [rbp+20F0h+var_1F30], edx
 * 0000000140341957: sub     ecx, r14d
 * 000000014034195A: mov     dword ptr [rbp+20F0h+var_1F30+4], r10d
 * 0000000140341961: mov     [rbp+20F0h+var_1F28], ecx
 * 0000000140341967: mov     r11d, edx
 * 000000014034196A: movsxd  rdx, dword ptr [r8]
 * 000000014034196D: mov     r9d, r10d
 * 0000000140341970: cmp     edx, 2Bh ; '+'
 * 0000000140341973: ja      short loc_140341994
 * 0000000140341975: mov     r10, 80000001002h
 * 000000014034197F: bt      r10, rdx
 * 0000000140341983: jnb     short loc_140341994
 * 0000000140341985: cmp     [r8+8], r12
 * 0000000140341989: jnz     short loc_140341994
 * 000000014034198B: mov     eax, [rbp+20F0h+var_20A8]
 * 000000014034198E: cmp     [r8+10h], eax
 * 0000000140341992: jz      short loc_1403419C0
 * 0000000140341994: lea     eax, [rdx-21h]
 * 0000000140341997: mov     edx, 1
 * 000000014034199C: cmp     eax, edx
 * 000000014034199E: ja      short loc_1403419A6
 * 00000001403419A0: cmp     [r8+20h], r13
 * 00000001403419A4: jz      short loc_1403419C0
 * 00000001403419A6: add     r15d, edx
 * 00000001403419A9: xor     r10d, r10d
 * 00000001403419AC: mov     [rbp+20F0h+var_20C0], r15d
 * 00000001403419B0: cmp     r15d, [rbx+7F4h]
 * 00000001403419B7: jb      loc_1403417E1
 * 00000001403419BD: mov     r8, r10
 * 00000001403419C0: test    r8, r8
 * 00000001403419C3: jz      short loc_1403419CD
 * 00000001403419C5: mov     rsi, rbx
 * 00000001403419C8: jmp     loc_1403436E5
 * 00000001403419CD: mov     rax, [rbx+1F8h]
 * 00000001403419D4: lea     r8, [rbp+20F0h+var_2048]
 * 00000001403419DB: mov     rcx, [rbp+20F0h+var_2088]
 * 00000001403419DF: lea     rdx, [rbp+20F0h+var_2020]
 * 00000001403419E6: mov     [rbp+20F0h+var_1FE8], rbx
 * 00000001403419ED: call    KeGuardDispatchICall
 * 00000001403419F2: xor     edx, edx
 * 00000001403419F4: mov     [rbp+20F0h+var_20B0], rax
 * 00000001403419F8: test    rax, rax
 * 00000001403419FB: jnz     short loc_140341A0F
 * 00000001403419FD: mov     [rbp+20F0h+var_2098], 0C000007Bh
 * 0000000140341A04: mov     r13d, 80000000h
 * 0000000140341A0A: jmp     loc_140343622
 * 0000000140341A0F: mov     r12, [rbp+20F0h+var_2020]
 * 0000000140341A16: lea     rax, [rbp+20F0h+var_1F08]
 * 0000000140341A1D: mov     r13d, [rbp+20F0h+var_2048]
 * 0000000140341A24: mov     ecx, 4
 * 0000000140341A29: mov     [rbp+20F0h+var_20A8], r13d
 * 0000000140341A2D: mov     r9d, 0FFFFFFFFh
 * 0000000140341A33: mov     [rbp+20F0h+var_20C8], r12
 * 0000000140341A37: mov     [rbp+20F0h+var_1F10], rdx
 * 0000000140341A3E: lea     r8d, [rcx-3]
 * 0000000140341A42: mov     [rax], dl
 * 0000000140341A44: add     rax, r8
 * 0000000140341A47: add     ecx, r9d
 * 0000000140341A4A: jnz     short loc_140341A42
 * 0000000140341A4C: mov     r15d, edx
 * 0000000140341A4F: mov     [rbp+20F0h+var_20C0], edx
 * 0000000140341A52: cmp     [rbx+7F4h], edx
 * 0000000140341A58: jbe     loc_140341C5A
 * 0000000140341A5E: mov     ecx, [rbp+20F0h+var_1F08]
 * 0000000140341A64: mov     r9d, dword ptr [rbp+20F0h+var_1F10+4]
 * 0000000140341A6B: mov     r11d, dword ptr [rbp+20F0h+var_1F10]
 * 0000000140341A72: mov     rax, [rbx+0A48h]
 * 0000000140341A79: mov     r14, rbx
 * 0000000140341A7C: test    rax, rax
 * 0000000140341A7F: mov     r10d, edx
 * 0000000140341A82: cmovnz  r14, rax
 * 0000000140341A86: mov     [rbp+20F0h+var_2070], r14
 * 0000000140341A8D: mov     r8d, [r14+7F0h]
 * 0000000140341A94: add     r8, r14
 * 0000000140341A97: test    r11d, r11d
 * 0000000140341A9A: jz      short loc_140341AAA
 * 0000000140341A9C: cmp     r9d, r15d
 * 0000000140341A9F: ja      short loc_140341AAA
 * 0000000140341AA1: mov     r8d, ecx
 * 0000000140341AA4: mov     r10d, r9d
 * 0000000140341AA7: add     r8, r14
 * 0000000140341AAA: cmp     r10d, r15d
 * 0000000140341AAD: jz      loc_140341BE0
 * 0000000140341AB3: mov     eax, r15d
 * 0000000140341AB6: mov     esi, 2
 * 0000000140341ABB: sub     eax, r10d
 * 0000000140341ABE: mov     r14d, 0FFFh
 * 0000000140341AC4: add     r10d, eax
 * 0000000140341AC7: mov     r9d, eax
 * 0000000140341ACA: mov     [rbp+20F0h+var_2094], r10d
 * 0000000140341ACE: mov     r10, 0AAAAAAAAAAAAAAABh
 * 0000000140341AD8: lea     r15d, [rsi+0Ah]
 * 0000000140341ADC: mov     ecx, [r8]
 * 0000000140341ADF: cmp     ecx, r15d
 * 0000000140341AE2: jg      short loc_140341B23
 * 0000000140341AE4: jz      short loc_140341B3C
 * 0000000140341AE6: sub     ecx, 1
 * 0000000140341AE9: jz      short loc_140341B3C
 * 0000000140341AEB: sub     ecx, 6
 * 0000000140341AEE: jz      short loc_140341B12
 * 0000000140341AF0: sub     ecx, 1
 * 0000000140341AF3: jz      short loc_140341B08
 * 0000000140341AF5: cmp     ecx, esi
 * 0000000140341AF7: jnz     short loc_140341B74
 * 0000000140341AF9: mov     eax, [r8+1Ch]
 * 0000000140341AFD: add     eax, 3
 * 0000000140341B00: shl     eax, 4
 * 0000000140341B03: jmp     loc_140341BAB
 * 0000000140341B08: movzx   eax, word ptr [r8+20h]
 * 0000000140341B0D: jmp     loc_140341BA5
 * 0000000140341B12: mov     eax, [r8+18h]
 * 0000000140341B16: add     eax, esi
 * 0000000140341B18: lea     eax, [rax+rax*2]
 * 0000000140341B1B: shl     eax, 3
 * 0000000140341B1E: jmp     loc_140341BAB
 * 0000000140341B23: cmp     ecx, 1Ch
 * 0000000140341B26: jz      short loc_140341BA0
 * 0000000140341B28: cmp     ecx, 1Eh
 * 0000000140341B2B: jz      short loc_140341B7B
 * 0000000140341B2D: cmp     ecx, 20h ; ' '
 * 0000000140341B30: jle     short loc_140341B74
 * 0000000140341B32: cmp     ecx, 22h ; '"'
 * 0000000140341B35: jle     short loc_140341B53
 * 0000000140341B37: cmp     ecx, 2Bh ; '+'
 * 0000000140341B3A: jnz     short loc_140341B74
 * 0000000140341B3C: mov     ecx, [r8+10h]
 * 0000000140341B40: mov     rax, r10
 * 0000000140341B43: mul     rcx
 * 0000000140341B46: shr     rdx, 3
 * 0000000140341B4A: lea     eax, ds:30h[rdx*4]
 * 0000000140341B51: jmp     short loc_140341BAB
 * 0000000140341B53: mov     ecx, [r8+20h]
 * 0000000140341B57: mov     edx, [r8+28h]
 * 0000000140341B5B: and     rcx, r14
 * 0000000140341B5E: add     rdx, r14
 * 0000000140341B61: add     rdx, rcx
 * 0000000140341B64: shr     rdx, 0Ch
 * 0000000140341B68: lea     eax, [rdx+rdx*4]
 * 0000000140341B6B: lea     eax, ds:30h[rax*4]
 * 0000000140341B72: jmp     short loc_140341BAB
 * 0000000140341B74: mov     eax, 30h ; '0'
 * 0000000140341B79: jmp     short loc_140341BAB
 * 0000000140341B7B: mov     ecx, [r8+24h]
 * 0000000140341B7F: mov     rax, r10
 * 0000000140341B82: dec     ecx
 * 0000000140341B84: mul     rcx
 * 0000000140341B87: movzx   eax, word ptr [r8+28h]
 * 0000000140341B8C: shr     rdx, 3
 * 0000000140341B90: add     edx, 7
 * 0000000140341B93: and     edx, 0FFFFFFF8h
 * 0000000140341B96: add     eax, esi
 * 0000000140341B98: lea     eax, [rax+rax*2]
 * 0000000140341B9B: lea     eax, [rdx+rax*8]
 * 0000000140341B9E: jmp     short loc_140341BAB
 * 0000000140341BA0: movzx   eax, word ptr [r8+28h]
 * 0000000140341BA5: add     eax, 37h ; '7'
 * 0000000140341BA8: and     eax, 0FFFFFFF8h
 * 0000000140341BAB: add     r8, rax
 * 0000000140341BAE: mov     eax, 1
 * 0000000140341BB3: sub     r9, rax
 * 0000000140341BB6: jnz     loc_140341ADC
 * 0000000140341BBC: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140341BC0: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140341BC7: mov     r10d, [rbp+20F0h+var_2094]
 * 0000000140341BCB: mov     r14, [rbp+20F0h+var_2070]
 * 0000000140341BD2: mov     r15d, [rbp+20F0h+var_20C0]
 * 0000000140341BD6: mov     r12, [rbp+20F0h+var_20C8]
 * 0000000140341BDA: mov     r13d, [rbp+20F0h+var_20A8]
 * 0000000140341BDE: jmp     short loc_140341BE5
 * 0000000140341BE0: mov     eax, 1
 * 0000000140341BE5: mov     ecx, r8d
 * 0000000140341BE8: mov     dword ptr [rbp+20F0h+var_1F10], eax
 * 0000000140341BEE: sub     ecx, r14d
 * 0000000140341BF1: mov     dword ptr [rbp+20F0h+var_1F10+4], r10d
 * 0000000140341BF8: mov     [rbp+20F0h+var_1F08], ecx
 * 0000000140341BFE: mov     r11d, eax
 * 0000000140341C01: movsxd  rdx, dword ptr [r8]
 * 0000000140341C04: mov     r9d, r10d
 * 0000000140341C07: cmp     edx, 2Bh ; '+'
 * 0000000140341C0A: ja      short loc_140341C2C
 * 0000000140341C0C: mov     r10, 80000001002h
 * 0000000140341C16: bt      r10, rdx
 * 0000000140341C1A: jnb     short loc_140341C2C
 * 0000000140341C1C: mov     rax, [rbp+20F0h+var_20B0]
 * 0000000140341C20: cmp     [r8+8], rax
 * 0000000140341C24: jnz     short loc_140341C2C
 * 0000000140341C26: cmp     [r8+10h], r13d
 * 0000000140341C2A: jz      short loc_140341C55
 * 0000000140341C2C: lea     eax, [rdx-21h]
 * 0000000140341C2F: mov     edx, 1
 * 0000000140341C34: cmp     eax, edx
 * 0000000140341C36: ja      short loc_140341C3E
 * 0000000140341C38: cmp     [r8+20h], r12
 * 0000000140341C3C: jz      short loc_140341C55
 * 0000000140341C3E: add     r15d, edx
 * 0000000140341C41: mov     [rbp+20F0h+var_20C0], r15d
 * 0000000140341C45: cmp     r15d, [rbx+7F4h]
 * 0000000140341C4C: jnb     short loc_140341C5A
 * 0000000140341C4E: xor     edx, edx
 * 0000000140341C50: jmp     loc_140341A72
 * 0000000140341C55: xor     r12d, r12d
 * 0000000140341C58: jmp     short loc_140341C60
 * 0000000140341C5A: xor     r12d, r12d
 * 0000000140341C5D: mov     r8d, r12d
 * 0000000140341C60: mov     [rbp+20F0h+var_1F88], r8
 * 0000000140341C67: test    r8, r8
 * 0000000140341C6A: jnz     loc_14034362D
 * 0000000140341C70: mov     rax, [rbx+2A0h]
 * 0000000140341C77: mov     rcx, [rbp+20F0h+var_2088]
 * 0000000140341C7B: call    KeGuardDispatchICall
 * 0000000140341C80: mov     ecx, [rbp+20F0h+var_2048]
 * 0000000140341C86: mov     dword ptr [rbp+20F0h+var_20B8], ecx
 * 0000000140341C89: mov     [rbp+20F0h+var_20C0], eax
 * 0000000140341C8C: test    eax, eax
 * 0000000140341C8E: jz      loc_14034362D
 * 0000000140341C94: test    dword ptr [rbx+970h], 40000000h
 * 0000000140341C9E: jz      short loc_140341CCA
 * 0000000140341CA0: mov     rdx, [rbp+20F0h+var_2020]
 * 0000000140341CA7: lea     rcx, [rbp+20F0h+var_1FF8]
 * 0000000140341CAE: mov     r8d, 0Fh
 * 0000000140341CB4: call    sub_14098FFA4
 * 0000000140341CB9: mov     rsi, [rbp+20F0h+var_1FF8]
 * 0000000140341CC0: mov     ecx, eax
 * 0000000140341CC2: mov     [rbp+20F0h+var_2098], eax
 * 0000000140341CC5: jmp     loc_140343608
 * 0000000140341CCA: mov     rax, [rbx+1E8h]
 * 0000000140341CD1: lea     r9, [rbp+20F0h+var_2048]
 * 0000000140341CD8: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140341CDF: xor     r8d, r8d
 * 0000000140341CE2: mov     [rbp+20F0h+var_1BF0], r12
 * 0000000140341CE9: mov     [rbp+20F0h+var_1DE0], r12d
 * 0000000140341CF0: lea     r15d, [r8+1]
 * 0000000140341CF4: mov     dl, r15b
 * 0000000140341CF7: call    KeGuardDispatchICall
 * 0000000140341CFC: mov     rdx, rax
 * 0000000140341CFF: lea     r8d, [r15+0Bh]
 * 0000000140341D03: neg     rax
 * 0000000140341D06: mov     [rbp+20F0h+var_1C08], rdx
 * 0000000140341D0D: lea     r9, [rbp+20F0h+var_2048]
 * 0000000140341D14: mov     dl, r15b
 * 0000000140341D17: sbb     ecx, ecx
 * 0000000140341D19: and     ecx, [rbp+20F0h+var_2048]
 * 0000000140341D1F: mov     [rbp+20F0h+var_2048], ecx
 * 0000000140341D25: mov     rax, [rbx+1E8h]
 * 0000000140341D2C: mov     [rbp+20F0h+var_1DEC], ecx
 * 0000000140341D32: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140341D39: call    KeGuardDispatchICall
 * 0000000140341D3E: mov     rdx, rax
 * 0000000140341D41: mov     [rbp+20F0h+var_20A0], rax
 * 0000000140341D45: neg     rax
 * 0000000140341D48: mov     [rbp+20F0h+var_1C00], rdx
 * 0000000140341D4F: lea     r8d, [r15+9]
 * 0000000140341D53: mov     dl, r15b
 * 0000000140341D56: sbb     ecx, ecx
 * 0000000140341D58: lea     r9, [rbp+20F0h+var_2048]
 * 0000000140341D5F: and     ecx, [rbp+20F0h+var_2048]
 * 0000000140341D65: mov     [rbp+20F0h+var_2048], ecx
 * 0000000140341D6B: mov     rax, [rbx+1E8h]
 * 0000000140341D72: mov     [rbp+20F0h+var_20A8], ecx
 * 0000000140341D75: mov     [rbp+20F0h+var_1DE8], ecx
 * 0000000140341D7B: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140341D82: call    KeGuardDispatchICall
 * 0000000140341D87: mov     rdx, rax
 * 0000000140341D8A: neg     rax
 * 0000000140341D8D: mov     [rbp+20F0h+var_1BF8], rdx
 * 0000000140341D94: sbb     ecx, ecx
 * 0000000140341D96: and     ecx, [rbp+20F0h+var_2048]
 * 0000000140341D9C: mov     [rbp+20F0h+var_2048], ecx
 * 0000000140341DA2: mov     rax, [rbx+1F0h]
 * 0000000140341DA9: mov     [rbp+20F0h+var_1DE4], ecx
 * 0000000140341DAF: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140341DB6: call    KeGuardDispatchICall
 * 0000000140341DBB: mov     r14, rax
 * 0000000140341DBE: test    rax, rax
 * 0000000140341DC1: jz      loc_1403419FD
 * 0000000140341DC7: mov     rax, [rbx+490h]
 * 0000000140341DCE: lea     rdx, [rbp+20F0h+var_1CC0]
 * 0000000140341DD5: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140341DDC: call    KeGuardDispatchICall
 * 0000000140341DE1: mov     r15d, [rbx+7CCh]
 * 0000000140341DE8: mov     r8d, [rbx+904h]
 * 0000000140341DEF: mov     [rbp+20F0h+var_1BE8], rax
 * 0000000140341DF6: mov     eax, [rbp+20F0h+var_1CC0]
 * 0000000140341DFC: mov     [rbp+20F0h+var_1DDC], eax
 * 0000000140341E02: mov     rax, [rbp+20F0h+var_2020]
 * 0000000140341E09: mov     [rbp+20F0h+var_1C10], rax
 * 0000000140341E10: mov     eax, [r14+54h]
 * 0000000140341E14: mov     [rbp+20F0h+var_1DF0], eax
 * 0000000140341E1A: lea     eax, [r15+120h]
 * 0000000140341E21: cmp     eax, [rbx+9FCh]
 * 0000000140341E27: jbe     loc_140341F18
 * 0000000140341E2D: mov     edx, eax
 * 0000000140341E2F: mov     rcx, rbx
 * 0000000140341E32: call    sub_1403495B4
 * 0000000140341E37: mov     [rbp+20F0h+var_2088], rax
 * 0000000140341E3B: mov     r14, rax
 * 0000000140341E3E: test    rax, rax
 * 0000000140341E41: jz      loc_140341F0C
 * 0000000140341E47: mov     ecx, [rbx+970h]
 * 0000000140341E4D: test    cl, 4
 * 0000000140341E50: jnz     loc_140341F02
 * 0000000140341E56: mov     eax, [rbx+7CCh]
 * 0000000140341E5C: and     ecx, 20000000h
 * 0000000140341E62: mov     r8, [rbx+7B0h]
 * 0000000140341E69: neg     ecx
 * 0000000140341E6B: mov     r9d, 1
 * 0000000140341E71: sbb     edx, edx
 * 0000000140341E73: and     edx, [rbx+904h]
 * 0000000140341E79: cmp     eax, 8
 * 0000000140341E7C: jb      short loc_140341E93
 * 0000000140341E7E: mov     ecx, eax
 * 0000000140341E80: shr     rcx, 3
 * 0000000140341E84: mov     [rbx], r12
 * 0000000140341E87: add     eax, 0FFFFFFF8h
 * 0000000140341E8A: add     rbx, 8
 * 0000000140341E8E: sub     rcx, r9
 * 0000000140341E91: jnz     short loc_140341E84
 * 0000000140341E93: test    eax, eax
 * 0000000140341E95: jz      short loc_140341EA6
 * 0000000140341E97: mov     ecx, 0FFFFFFFFh
 * 0000000140341E9C: mov     [rbx], r12b
 * 0000000140341E9F: add     rbx, r9
 * 0000000140341EA2: add     eax, ecx
 * 0000000140341EA4: jnz     short loc_140341E9C
 * 0000000140341EA6: mov     ebx, [r14+904h]
 * 0000000140341EAD: mov     [r14+904h], edx
 * 0000000140341EB4: cmp     edx, 3
 * 0000000140341EB7: jz      short loc_140341EEC
 * 0000000140341EB9: test    dword ptr [r14+970h], 10000000h
 * 0000000140341EC4: mov     ecx, r12d
 * 0000000140341EC7: cmovz   ecx, edx
 * 0000000140341ECA: test    ecx, ecx
 * 0000000140341ECC: jz      short loc_140341EE3
 * 0000000140341ECE: mov     rax, [r14+220h]
 * 0000000140341ED5: lea     rcx, [r8-8]
 * 0000000140341ED9: mov     rdx, [rcx]
 * 0000000140341EDC: call    KeGuardDispatchICall
 * 0000000140341EE1: jmp     short loc_140341EFB
 * 0000000140341EE3: mov     rax, [r14+0F8h]
 * 0000000140341EEA: jmp     short loc_140341EF3
 * 0000000140341EEC: mov     rax, [r14+360h]
 * 0000000140341EF3: mov     rcx, r8
 * 0000000140341EF6: call    KeGuardDispatchICall
 * 0000000140341EFB: mov     [r14+904h], ebx
 * 0000000140341F02: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140341F0A: jmp     short loc_140341F25
 * 0000000140341F0C: mov     [rbp+20F0h+var_1FE8], r12
 * 0000000140341F13: jmp     loc_140341A04
 * 0000000140341F18: mov     r14, rbx
 * 0000000140341F1B: mov     [rbp+20F0h+var_2088], rbx
 * 0000000140341F1F: mov     [rbx+7CCh], eax
 * 0000000140341F25: mov     eax, 6
 * 0000000140341F2A: lea     r10, [r14+r15]
 * 0000000140341F2E: add     [r14+7F4h], eax
 * 0000000140341F35: lea     r13, [rbp+20F0h+var_1C10]
 * 0000000140341F3C: mov     [rbp+20F0h+var_1D88], r10
 * 0000000140341F43: lea     rdi, [rbp+20F0h+var_1DF0]
 * 0000000140341F4A: mov     [rbp+20F0h+var_1F88], r10
 * 0000000140341F51: mov     [rbp+20F0h+var_20F0], r13
 * 0000000140341F55: mov     [rbp+20F0h+var_20D8], rax
 * 0000000140341F59: mov     r15d, [rdi]
 * 0000000140341F5C: mov     ecx, 30h ; '0'
 * 0000000140341F61: mov     rsi, [r13+0]
 * 0000000140341F65: mov     rdx, rax
 * 0000000140341F68: mov     [rbp+20F0h+var_2094], r15d
 * 0000000140341F6C: mov     rax, r10
 * 0000000140341F6F: lea     r8d, [rcx-2Fh]
 * 0000000140341F73: mov     [rax], r12
 * 0000000140341F76: add     ecx, 0FFFFFFF8h
 * 0000000140341F79: add     rax, 8
 * 0000000140341F7D: sub     rdx, r8
 * 0000000140341F80: jnz     short loc_140341F73
 * 0000000140341F82: mov     rdx, r8
 * 0000000140341F85: test    ecx, ecx
 * 0000000140341F87: jz      short loc_140341F9A
 * 0000000140341F89: mov     r8d, 0FFFFFFFFh
 * 0000000140341F8F: mov     [rax], r12b
 * 0000000140341F92: add     rax, rdx
 * 0000000140341F95: add     ecx, r8d
 * 0000000140341F98: jnz     short loc_140341F8F
 * 0000000140341F9A: mov     dword ptr [r10], 0Bh
 * 0000000140341FA1: lea     rcx, [rsi+r15]
 * 0000000140341FA5: mov     [r10+8], rsi
 * 0000000140341FA9: mov     r9, rsi
 * 0000000140341FAC: mov     [r10+10h], r15d
 * 0000000140341FB0: mov     rax, rsi
 * 0000000140341FB3: add     [r14+810h], r15d
 * 0000000140341FBA: mov     r11d, [r14+7FCh]
 * 0000000140341FC1: mov     r12, [r14+800h]
 * 0000000140341FC8: cmp     rsi, rcx
 * 0000000140341FCB: jnb     short loc_140341FDE
 * 0000000140341FCD: mov     r8d, 40h ; '@'
 * 0000000140341FD3: prefetchnta byte ptr [rax]
 * 0000000140341FD6: add     rax, r8
 * 0000000140341FD9: cmp     rax, rcx
 * 0000000140341FDC: jb      short loc_140341FD3
 * 0000000140341FDE: mov     ebx, r15d
 * 0000000140341FE1: mov     r8, r12
 * 0000000140341FE4: shr     ebx, 7
 * 0000000140341FE7: test    ebx, ebx
 * 0000000140341FE9: jz      short loc_14034205D
 * 0000000140341FEB: mov     r15d, 0FFFFFFFFh
 * 0000000140341FF1: mov     r13, 7010008004002001h
 * 0000000140341FFB: mov     eax, 8
 * 0000000140342000: xor     r8, [r9]
 * 0000000140342003: mov     ecx, r11d
 * 0000000140342006: rol     r8, cl
 * 0000000140342009: xor     r8, [r9+8]
 * 000000014034200D: add     r9, 10h
 * 0000000140342011: rol     r8, cl
 * 0000000140342014: sub     rax, rdx
 * 0000000140342017: jnz     short loc_140342000
 * 0000000140342019: mov     rcx, r9
 * 000000014034201C: sub     rcx, rsi
 * 000000014034201F: xor     rcx, r12
 * 0000000140342022: mov     rax, rcx
 * 0000000140342025: rol     rax, 11h
 * 0000000140342029: xor     rcx, rax
 * 000000014034202C: mov     rax, r13
 * 000000014034202F: mul     rcx
 * 0000000140342032: xor     r11d, eax
 * 0000000140342035: mov     [rbp+20F0h+var_1990], rdx
 * 000000014034203C: xor     r11d, edx
 * 000000014034203F: mov     edx, 1
 * 0000000140342044: and     r11d, 3Fh
 * 0000000140342048: cmovz   r11d, edx
 * 000000014034204C: add     ebx, r15d
 * 000000014034204F: jnz     short loc_140341FFB
 * 0000000140342051: mov     r14, [rbp+20F0h+var_2088]
 * 0000000140342055: mov     r15d, [rbp+20F0h+var_2094]
 * 0000000140342059: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014034205D: mov     edx, r15d
 * 0000000140342060: mov     ebx, 1
 * 0000000140342065: and     edx, 7Fh
 * 0000000140342068: cmp     edx, 8
 * 000000014034206B: jb      short loc_140342088
 * 000000014034206D: mov     eax, edx
 * 000000014034206F: shr     rax, 3
 * 0000000140342073: xor     r8, [r9]
 * 0000000140342076: mov     ecx, r11d
 * 0000000140342079: rol     r8, cl
 * 000000014034207C: add     r9, 8
 * 0000000140342080: add     edx, 0FFFFFFF8h
 * 0000000140342083: sub     rax, rbx
 * 0000000140342086: jnz     short loc_140342073
 * 0000000140342088: xor     r12d, r12d
 * 000000014034208B: test    edx, edx
 * 000000014034208D: jz      short loc_1403420AD
 * 000000014034208F: mov     r12d, 0FFFFFFFFh
 * 0000000140342095: movzx   eax, byte ptr [r9]
 * 0000000140342099: mov     ecx, r11d
 * 000000014034209C: xor     r8, rax
 * 000000014034209F: add     r9, rbx
 * 00000001403420A2: rol     r8, cl
 * 00000001403420A5: add     edx, r12d
 * 00000001403420A8: jnz     short loc_140342095
 * 00000001403420AA: xor     r12d, r12d
 * 00000001403420AD: mov     rax, r8
 * 00000001403420B0: jmp     short loc_1403420B5
 * 00000001403420B2: xor     r8d, eax
 * 00000001403420B5: shr     rax, 1Fh
 * 00000001403420B9: test    rax, rax
 * 00000001403420BC: jnz     short loc_1403420B2
 * 00000001403420BE: btr     r8d, 1Fh
 * 00000001403420C3: add     r13, 8
 * 00000001403420C7: mov     [r10+14h], r8d
 * 00000001403420CB: add     rdi, 4
 * 00000001403420CF: add     [r14+810h], r15d
 * 00000001403420D6: lea     r15d, [rax+1]
 * 00000001403420DA: mov     r10, [rbp+20F0h+var_1D88]
 * 00000001403420E1: lea     eax, [r15+5]
 * 00000001403420E5: add     r10, 30h ; '0'
 * 00000001403420E9: mov     [rbp+20F0h+var_20F0], r13
 * 00000001403420ED: sub     [rbp+20F0h+var_20D8], r15
 * 00000001403420F1: mov     [rbp+20F0h+var_1D88], r10
 * 00000001403420F8: jnz     loc_140341F59
 * 00000001403420FE: mov     rax, [rbp+20F0h+var_2020]
 * 0000000140342105: mov     rsi, r14
 * 0000000140342108: mov     rcx, [rbp+20F0h+var_1F88]
 * 000000014034210F: mov     r8d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140342113: mov     rdx, [rbp+20F0h+var_20B0]
 * 0000000140342117: mov     [rbp+20F0h+var_1FE8], r14
 * 000000014034211E: mov     dword ptr [rcx], 2Ch ; ','
 * 0000000140342124: mov     [rcx+18h], rax
 * 0000000140342128: lea     eax, [r15+1]
 * 000000014034212C: or      [rcx+20h], eax
 * 000000014034212F: lea     rax, [rbp+20F0h+var_1E78]
 * 0000000140342136: mov     r9, [rbp+20F0h+var_2020]
 * 000000014034213D: lea     rcx, [rbp+20F0h+var_1FE8]
 * 0000000140342144: mov     [rsp+10F0h+var_10B8], rax
 * 0000000140342149: lea     rax, [rbp+20F0h+var_1F40]
 * 0000000140342150: mov     [rsp+10F0h+var_10C0], rax
 * 0000000140342155: lea     eax, [r15+0Eh]
 * 0000000140342159: mov     dword ptr [rsp+10F0h+var_10C8], eax
 * 000000014034215D: mov     eax, [rbp+20F0h+var_20C0]
 * 0000000140342160: mov     dword ptr [rsp+10F0h+BugCheckParameter4], eax
 * 0000000140342164: mov     [rbp+20F0h+var_1FF8], r14
 * 000000014034216B: call    sub_140348B4C
 * 0000000140342170: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140342177: test    eax, eax
 * 0000000140342179: jns     short loc_140342185
 * 000000014034217B: mov     ecx, eax
 * 000000014034217D: mov     [rbp+20F0h+var_2098], eax
 * 0000000140342180: jmp     loc_140343608
 * 0000000140342185: mov     rsi, [rbp+20F0h+var_1FE8]
 * 000000014034218C: mov     rcx, [rbp+20F0h+var_1F88]
 * 0000000140342193: mov     rax, rsi
 * 0000000140342196: mov     r9d, [rbp+20F0h+var_1E78]
 * 000000014034219D: sub     rax, r14
 * 00000001403421A0: sub     r9d, [rbp+20F0h+var_1F40]
 * 00000001403421A7: add     rcx, rax
 * 00000001403421AA: mov     ebx, [rbp+20F0h+var_1F40]
 * 00000001403421B0: add     rbx, [rbp+20F0h+var_2020]
 * 00000001403421B7: mov     [rbp+20F0h+var_1F88], rcx
 * 00000001403421BE: xor     r8d, r8d
 * 00000001403421C1: lea     r12, [rcx+0C0h]
 * 00000001403421C8: mov     [rbp+20F0h+var_1FF8], rsi
 * 00000001403421CF: mov     ecx, 30h ; '0'
 * 00000001403421D4: mov     [rbp+20F0h+var_2094], r9d
 * 00000001403421D8: mov     [rbp+20F0h+var_2070], r12
 * 00000001403421DF: mov     rax, r12
 * 00000001403421E2: lea     r13d, [rcx-2Ah]
 * 00000001403421E6: mov     edx, r13d
 * 00000001403421E9: mov     [rax], r8
 * 00000001403421EC: add     ecx, 0FFFFFFF8h
 * 00000001403421EF: add     rax, 8
 * 00000001403421F3: sub     rdx, r15
 * 00000001403421F6: jnz     short loc_1403421E9
 * 00000001403421F8: test    ecx, ecx
 * 00000001403421FA: jz      short loc_14034220C
 * 00000001403421FC: mov     r8d, 0FFFFFFFFh
 * 0000000140342202: mov     [rax], dl
 * 0000000140342204: add     rax, r15
 * 0000000140342207: add     ecx, r8d
 * 000000014034220A: jnz     short loc_140342202
 * 000000014034220C: mov     dword ptr [r12], 0Bh
 * 0000000140342214: mov     r10, rbx
 * 0000000140342217: mov     [r12+8], rbx
 * 000000014034221C: mov     rax, rbx
 * 000000014034221F: mov     [r12+10h], r9d
 * 0000000140342224: add     [rsi+810h], r9d
 * 000000014034222B: mov     r11d, [rsi+7FCh]
 * 0000000140342232: mov     r15, [rsi+800h]
 * 0000000140342239: mov     ecx, r9d
 * 000000014034223C: add     rcx, rbx
 * 000000014034223F: cmp     rbx, rcx
 * 0000000140342242: jnb     short loc_140342255
 * 0000000140342244: mov     r8d, 40h ; '@'
 * 000000014034224A: prefetchnta byte ptr [rax]
 * 000000014034224D: add     rax, r8
 * 0000000140342250: cmp     rax, rcx
 * 0000000140342253: jb      short loc_14034224A
 * 0000000140342255: mov     r14d, r9d
 * 0000000140342258: mov     r8, r15
 * 000000014034225B: shr     r14d, 7
 * 000000014034225F: test    r14d, r14d
 * 0000000140342262: jz      short loc_1403422DC
 * 0000000140342264: mov     edi, 1
 * 0000000140342269: mov     r12d, 0FFFFFFFFh
 * 000000014034226F: mov     r9, 7010008004002001h
 * 0000000140342279: mov     eax, 8
 * 000000014034227E: xor     r8, [r10]
 * 0000000140342281: mov     ecx, r11d
 * 0000000140342284: rol     r8, cl
 * 0000000140342287: xor     r8, [r10+8]
 * 000000014034228B: add     r10, 10h
 * 000000014034228F: rol     r8, cl
 * 0000000140342292: sub     rax, rdi
 * 0000000140342295: jnz     short loc_14034227E
 * 0000000140342297: mov     rcx, r10
 * 000000014034229A: sub     rcx, rbx
 * 000000014034229D: xor     rcx, r15
 * 00000001403422A0: mov     rax, rcx
 * 00000001403422A3: rol     rax, 11h
 * 00000001403422A7: xor     rcx, rax
 * 00000001403422AA: mov     rax, r9
 * 00000001403422AD: mul     rcx
 * 00000001403422B0: xor     r11d, eax
 * 00000001403422B3: mov     [rbp+20F0h+var_1988], rdx
 * 00000001403422BA: xor     r11d, edx
 * 00000001403422BD: and     r11d, 3Fh
 * 00000001403422C1: cmovz   r11d, edi
 * 00000001403422C5: add     r14d, r12d
 * 00000001403422C8: jnz     short loc_140342279
 * 00000001403422CA: mov     r9d, [rbp+20F0h+var_2094]
 * 00000001403422CE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403422D5: mov     r12, [rbp+20F0h+var_2070]
 * 00000001403422DC: and     r9d, 7Fh
 * 00000001403422E0: mov     r15d, 1
 * 00000001403422E6: cmp     r9d, 8
 * 00000001403422EA: jb      short loc_140342309
 * 00000001403422EC: mov     eax, r9d
 * 00000001403422EF: shr     rax, 3
 * 00000001403422F3: xor     r8, [r10]
 * 00000001403422F6: mov     ecx, r11d
 * 00000001403422F9: rol     r8, cl
 * 00000001403422FC: add     r10, 8
 * 0000000140342300: add     r9d, 0FFFFFFF8h
 * 0000000140342304: sub     rax, r15
 * 0000000140342307: jnz     short loc_1403422F3
 * 0000000140342309: test    r9d, r9d
 * 000000014034230C: jz      short loc_14034232F
 * 000000014034230E: mov     edi, 0FFFFFFFFh
 * 0000000140342313: movzx   eax, byte ptr [r10]
 * 0000000140342317: mov     ecx, r11d
 * 000000014034231A: xor     r8, rax
 * 000000014034231D: add     r10, r15
 * 0000000140342320: rol     r8, cl
 * 0000000140342323: add     r9d, edi
 * 0000000140342326: jnz     short loc_140342313
 * 0000000140342328: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034232F: mov     rax, r8
 * 0000000140342332: shr     rax, 1Fh
 * 0000000140342336: xor     r11d, r11d
 * 0000000140342339: jmp     short loc_140342342
 * 000000014034233B: xor     r8d, eax
 * 000000014034233E: shr     rax, 1Fh
 * 0000000140342342: test    rax, rax
 * 0000000140342345: jnz     short loc_14034233B
 * 0000000140342347: btr     r8d, 1Fh
 * 000000014034234C: mov     [r12+14h], r8d
 * 0000000140342351: mov     rax, [rbp+20F0h+var_1F88]
 * 0000000140342358: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140342362: cmp     [rax+100h], r11d
 * 0000000140342369: jz      short loc_140342372
 * 000000014034236B: or      [rax+108h], r15d
 * 0000000140342372: mov     rax, [rbp+20F0h+var_1F88]
 * 0000000140342379: add     rax, 60h ; '`'
 * 000000014034237D: mov     [rbp+20F0h+var_1FF8], rsi
 * 0000000140342384: mov     [rbp+20F0h+var_1EF8], rax
 * 000000014034238B: jnz     loc_140342622
 * 0000000140342391: mov     r14d, [rsi+7CCh]
 * 0000000140342398: mov     r8d, [rsi+904h]
 * 000000014034239F: lea     eax, [r14+30h]
 * 00000001403423A3: cmp     eax, [rsi+9FCh]
 * 00000001403423A9: jbe     loc_14034249B
 * 00000001403423AF: mov     edx, eax
 * 00000001403423B1: mov     rcx, rsi
 * 00000001403423B4: call    sub_1403495B4
 * 00000001403423B9: xor     r11d, r11d
 * 00000001403423BC: mov     rbx, rax
 * 00000001403423BF: test    rax, rax
 * 00000001403423C2: jz      loc_140342485
 * 00000001403423C8: mov     ecx, [rsi+970h]
 * 00000001403423CE: test    cl, 4
 * 00000001403423D1: jnz     loc_14034247C
 * 00000001403423D7: mov     eax, [rsi+7CCh]
 * 00000001403423DD: and     ecx, 20000000h
 * 00000001403423E3: mov     r8, [rsi+7B0h]
 * 00000001403423EA: neg     ecx
 * 00000001403423EC: sbb     edx, edx
 * 00000001403423EE: and     edx, [rsi+904h]
 * 00000001403423F4: cmp     eax, 8
 * 00000001403423F7: jb      short loc_14034240E
 * 00000001403423F9: mov     ecx, eax
 * 00000001403423FB: shr     rcx, 3
 * 00000001403423FF: mov     [rsi], r11
 * 0000000140342402: add     eax, 0FFFFFFF8h
 * 0000000140342405: add     rsi, 8
 * 0000000140342409: sub     rcx, r15
 * 000000014034240C: jnz     short loc_1403423FF
 * 000000014034240E: test    eax, eax
 * 0000000140342410: jz      short loc_140342421
 * 0000000140342412: mov     ecx, 0FFFFFFFFh
 * 0000000140342417: mov     [rsi], r11b
 * 000000014034241A: add     rsi, r15
 * 000000014034241D: add     eax, ecx
 * 000000014034241F: jnz     short loc_140342417
 * 0000000140342421: mov     esi, [rbx+904h]
 * 0000000140342427: mov     [rbx+904h], edx
 * 000000014034242D: cmp     edx, 3
 * 0000000140342430: jz      short loc_140342464
 * 0000000140342432: test    dword ptr [rbx+970h], 10000000h
 * 000000014034243C: mov     ecx, r11d
 * 000000014034243F: cmovz   ecx, edx
 * 0000000140342442: test    ecx, ecx
 * 0000000140342444: jz      short loc_14034245B
 * 0000000140342446: mov     rax, [rbx+220h]
 * 000000014034244D: lea     rcx, [r8-8]
 * 0000000140342451: mov     rdx, [rcx]
 * 0000000140342454: call    KeGuardDispatchICall
 * 0000000140342459: jmp     short loc_140342473
 * 000000014034245B: mov     rax, [rbx+0F8h]
 * 0000000140342462: jmp     short loc_14034246B
 * 0000000140342464: mov     rax, [rbx+360h]
 * 000000014034246B: mov     rcx, r8
 * 000000014034246E: call    KeGuardDispatchICall
 * 0000000140342473: mov     [rbx+904h], esi
 * 0000000140342479: xor     r11d, r11d
 * 000000014034247C: and     dword ptr [rbx+970h], 0FFFFFFFBh
 * 0000000140342483: jmp     short loc_1403424A4
 * 0000000140342485: mov     [rbp+20F0h+var_1FE8], r11
 * 000000014034248C: mov     rbx, rsi
 * 000000014034248F: mov     [rbp+20F0h+var_2098], 0C000009Ah
 * 0000000140342496: jmp     loc_140341A04
 * 000000014034249B: mov     rbx, rsi
 * 000000014034249E: mov     [rsi+7CCh], eax
 * 00000001403424A4: add     [rbx+7F4h], r15d
 * 00000001403424AB: lea     rsi, [rbx+r14]
 * 00000001403424AF: mov     [rbp+20F0h+var_1CE0], rsi
 * 00000001403424B6: mov     rax, rsi
 * 00000001403424B9: mov     ecx, 30h ; '0'
 * 00000001403424BE: mov     rdx, r13
 * 00000001403424C1: mov     [rax], r11
 * 00000001403424C4: add     ecx, 0FFFFFFF8h
 * 00000001403424C7: add     rax, 8
 * 00000001403424CB: sub     rdx, r15
 * 00000001403424CE: jnz     short loc_1403424C1
 * 00000001403424D0: test    ecx, ecx
 * 00000001403424D2: jz      short loc_1403424E3
 * 00000001403424D4: mov     edx, 0FFFFFFFFh
 * 00000001403424D9: mov     [rax], r11b
 * 00000001403424DC: add     rax, r15
 * 00000001403424DF: add     ecx, edx
 * 00000001403424E1: jnz     short loc_1403424D9
 * 00000001403424E3: mov     r12, [rbp+20F0h+var_20A0]
 * 00000001403424E7: mov     r15d, [rbp+20F0h+var_20A8]
 * 00000001403424EB: mov     r9, r12
 * 00000001403424EE: mov     dword ptr [rsi], 0Eh
 * 00000001403424F4: mov     [rsi+8], r12
 * 00000001403424F8: mov     [rsi+10h], r15d
 * 00000001403424FC: add     [rbx+810h], r15d
 * 0000000140342503: lea     rcx, [r12+r15]
 * 0000000140342507: mov     r10d, [rbx+7FCh]
 * 000000014034250E: mov     r14, [rbx+800h]
 * 0000000140342515: cmp     r12, rcx
 * 0000000140342518: jnb     short loc_14034252D
 * 000000014034251A: mov     rax, r12
 * 000000014034251D: mov     edx, 40h ; '@'
 * 0000000140342522: prefetchnta byte ptr [rax]
 * 0000000140342525: add     rax, rdx
 * 0000000140342528: cmp     rax, rcx
 * 000000014034252B: jb      short loc_140342522
 * 000000014034252D: mov     r11d, r15d
 * 0000000140342530: mov     r8, r14
 * 0000000140342533: shr     r11d, 7
 * 0000000140342537: mov     r13d, 1
 * 000000014034253D: test    r11d, r11d
 * 0000000140342540: jz      short loc_1403425AB
 * 0000000140342542: mov     r15, 7010008004002001h
 * 000000014034254C: mov     edx, 8
 * 0000000140342551: mov     rax, [r9]
 * 0000000140342554: mov     ecx, r10d
 * 0000000140342557: xor     rax, r8
 * 000000014034255A: mov     r8, [r9+8]
 * 000000014034255E: rol     rax, cl
 * 0000000140342561: add     r9, 10h
 * 0000000140342565: xor     r8, rax
 * 0000000140342568: rol     r8, cl
 * 000000014034256B: sub     rdx, r13
 * 000000014034256E: jnz     short loc_140342551
 * 0000000140342570: mov     rcx, r9
 * 0000000140342573: sub     rcx, r12
 * 0000000140342576: xor     rcx, r14
 * 0000000140342579: mov     rax, rcx
 * 000000014034257C: rol     rax, 11h
 * 0000000140342580: xor     rcx, rax
 * 0000000140342583: mov     rax, r15
 * 0000000140342586: mul     rcx
 * 0000000140342589: xor     eax, edx
 * 000000014034258B: mov     [rbp+20F0h+var_1980], rdx
 * 0000000140342592: xor     r10d, eax
 * 0000000140342595: mov     eax, 0FFFFFFFFh
 * 000000014034259A: and     r10d, 3Fh
 * 000000014034259E: cmovz   r10d, r13d
 * 00000001403425A2: add     r11d, eax
 * 00000001403425A5: jnz     short loc_14034254C
 * 00000001403425A7: mov     r15d, [rbp+20F0h+var_20A8]
 * 00000001403425AB: mov     edx, r15d
 * 00000001403425AE: and     edx, 7Fh
 * 00000001403425B1: cmp     edx, 8
 * 00000001403425B4: jb      short loc_1403425D2
 * 00000001403425B6: mov     r11d, edx
 * 00000001403425B9: shr     r11, 3
 * 00000001403425BD: xor     r8, [r9]
 * 00000001403425C0: mov     ecx, r10d
 * 00000001403425C3: rol     r8, cl
 * 00000001403425C6: add     r9, 8
 * 00000001403425CA: add     edx, 0FFFFFFF8h
 * 00000001403425CD: sub     r11, r13
 * 00000001403425D0: jnz     short loc_1403425BD
 * 00000001403425D2: test    edx, edx
 * 00000001403425D4: jz      short loc_1403425F1
 * 00000001403425D6: mov     r11d, 0FFFFFFFFh
 * 00000001403425DC: movzx   eax, byte ptr [r9]
 * 00000001403425E0: mov     ecx, r10d
 * 00000001403425E3: xor     r8, rax
 * 00000001403425E6: add     r9, r13
 * 00000001403425E9: rol     r8, cl
 * 00000001403425EC: add     edx, r11d
 * 00000001403425EF: jnz     short loc_1403425DC
 * 00000001403425F1: mov     rax, r8
 * 00000001403425F4: jmp     short loc_1403425F9
 * 00000001403425F6: xor     r8d, eax
 * 00000001403425F9: shr     rax, 1Fh
 * 00000001403425FD: test    rax, rax
 * 0000000140342600: jnz     short loc_1403425F6
 * 0000000140342602: btr     r8d, 1Fh
 * 0000000140342607: mov     [rsi+14h], r8d
 * 000000014034260B: mov     rax, [rbp+20F0h+var_1CE0]
 * 0000000140342612: mov     [rbp+20F0h+var_1EF8], rax
 * 0000000140342619: add     [rbx+810h], r15d
 * 0000000140342620: jmp     short loc_140342633
 * 0000000140342622: mov     r15d, [rbp+20F0h+var_20A8]
 * 0000000140342626: mov     rbx, rsi
 * 0000000140342629: mov     r12, [rbp+20F0h+var_20A0]
 * 000000014034262D: mov     dword ptr [rax], 0Eh
 * 0000000140342633: test    dword ptr [rbx+970h], 40000000h
 * 000000014034263D: jz      short loc_14034265D
 * 000000014034263F: test    r15d, r15d
 * 0000000140342642: jz      short loc_14034265D
 * 0000000140342644: mov     r9, [rbp+20F0h+var_1EF8]
 * 000000014034264B: mov     r8d, r15d
 * 000000014034264E: add     r9, 1Ch
 * 0000000140342652: mov     rdx, r12
 * 0000000140342655: mov     rcx, rbx
 * 0000000140342658: call    sub_1401ADA3C
 * 000000014034265D: mov     rax, [rbp+20F0h+var_1EF8]
 * 0000000140342664: xor     r12d, r12d
 * 0000000140342667: mov     rsi, rbx
 * 000000014034266A: mov     [rbp+20F0h+var_1FF8], rbx
 * 0000000140342671: mov     [rax+18h], r12d
 * 0000000140342675: lea     ecx, [r12+1]
 * 000000014034267A: mov     rax, [rbp+20F0h+var_1EF8]
 * 0000000140342681: or      [rax+18h], ecx
 * 0000000140342684: mov     r14, [rbp+20F0h+var_1F88]
 * 000000014034268B: mov     r15, [rbp+20F0h+var_2020]
 * 0000000140342692: mov     dword ptr [r14+90h], 23h ; '#'
 * 000000014034269D: or      [r14+0B8h], ecx
 * 00000001403426A4: cmp     dword ptr [r14+0A0h], 94h
 * 00000001403426AF: jb      loc_140342735
 * 00000001403426B5: mov     rax, [rbx+1F0h]
 * 00000001403426BC: mov     rcx, r15
 * 00000001403426BF: mov     r13, [r14+98h]
 * 00000001403426C6: call    KeGuardDispatchICall
 * 00000001403426CB: test    rax, rax
 * 00000001403426CE: jnz     short loc_1403426E3
 * 00000001403426D0: mov     [rbp+20F0h+var_1FE8], r12
 * 00000001403426D7: mov     [rbp+20F0h+var_2098], 0C000009Ah
 * 00000001403426DE: jmp     loc_140341A04
 * 00000001403426E3: mov     ecx, [rax+50h]
 * 00000001403426E6: mov     eax, 2
 * 00000001403426EB: or      [r14+0B8h], eax
 * 00000001403426F2: add     rcx, r15
 * 00000001403426F5: mov     rax, [r13+70h]
 * 00000001403426F9: cmp     rax, r15
 * 00000001403426FC: jb      short loc_140342715
 * 00000001403426FE: cmp     rax, rcx
 * 0000000140342701: jnb     short loc_140342715
 * 0000000140342703: mov     rax, [rax]
 * 0000000140342706: mov     [r14+0A8h], rax
 * 000000014034270D: or      dword ptr [r14+0B8h], 4
 * 0000000140342715: mov     rax, [r13+78h]
 * 0000000140342719: cmp     rax, r15
 * 000000014034271C: jb      short loc_140342735
 * 000000014034271E: cmp     rax, rcx
 * 0000000140342721: jnb     short loc_140342735
 * 0000000140342723: mov     rax, [rax]
 * 0000000140342726: mov     [r14+0B0h], rax
 * 000000014034272D: or      dword ptr [r14+0B8h], 8
 * 0000000140342735: test    dword ptr [rbx+970h], 400000h
 * 000000014034273F: mov     r15, [rbp+20F0h+var_2020]
 * 0000000140342746: mov     [rbp+20F0h+var_20E0], r15
 * 000000014034274A: mov     [rbp+20F0h+var_1FE8], rbx
 * 0000000140342751: mov     [rbp+20F0h+var_1FF8], rbx
 * 0000000140342758: jz      loc_1403435F8
 * 000000014034275E: mov     rax, [rbx+1F0h]
 * 0000000140342765: mov     rcx, r15
 * 0000000140342768: call    KeGuardDispatchICall
 * 000000014034276D: mov     [rbp+20F0h+var_2070], rax
 * 0000000140342774: mov     r13, rax
 * 0000000140342777: test    rax, rax
 * 000000014034277A: jnz     short loc_140342786
 * 000000014034277C: mov     ecx, 0C000007Bh
 * 0000000140342781: jmp     loc_140343605
 * 0000000140342786: movzx   r10d, word ptr [r13+6]
 * 000000014034278B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140342795: mov     ecx, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140342798: mul     rcx
 * 000000014034279B: mov     [rbp+20F0h+var_2044], r10w
 * 00000001403427A3: mov     r9, rdx
 * 00000001403427A6: shr     r9, 3
 * 00000001403427AA: mov     [rbp+20F0h+var_2088], r9
 * 00000001403427AE: test    r10w, r10w
 * 00000001403427B2: jnz     short loc_14034280A
 * 00000001403427B4: test    dword ptr [rbx+970h], 200000h
 * 00000001403427BE: jz      loc_1403466CB
 * 00000001403427C4: cmp     [rbx+8D8h], r12d
 * 00000001403427CB: jnz     short loc_14034277C
 * 00000001403427CD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403427D7: add     rax, rbx
 * 00000001403427DA: mov     [rbx+8E0h], rax
 * 00000001403427E1: mov     eax, 1
 * 00000001403427E6: mov     [rbx+8E8h], r12
 * 00000001403427ED: mov     qword ptr [rbx+8F0h], 10Fh
 * 00000001403427F8: mov     [rbx+8F8h], r15
 * 00000001403427FF: mov     [rbx+8D8h], eax
 * 0000000140342805: jmp     loc_14034277C
 * 000000014034280A: mov     r14, [rbp+20F0h+var_20B0]
 * 000000014034280E: lea     r8, [r13+18h]
 * 0000000140342812: mov     eax, r9d
 * 0000000140342815: mov     ecx, r12d
 * 0000000140342818: mov     [rbp+20F0h+var_20E8], ecx
 * 000000014034281B: lea     rax, [rax+rax*2]
 * 000000014034281F: shl     rax, 2
 * 0000000140342823: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140342827: add     rax, r14
 * 000000014034282A: mov     [rbp+20F0h+var_2058], rax
 * 0000000140342831: movzx   eax, word ptr [r13+14h]
 * 0000000140342836: mov     r11, [rbp+20F0h+var_2058]
 * 000000014034283D: add     r8, rax
 * 0000000140342840: movzx   eax, r10w
 * 0000000140342844: mov     [rbp+20F0h+var_20D8], r8
 * 0000000140342848: test    eax, eax
 * 000000014034284A: jz      loc_140342A86
 * 0000000140342850: lea     r13, [r8+8]
 * 0000000140342854: xor     r9d, r9d
 * 0000000140342857: mov     r12d, [r13+8]
 * 000000014034285B: mov     eax, [r13+0]
 * 000000014034285F: cmp     r12d, eax
 * 0000000140342862: mov     edx, [r13+4]
 * 0000000140342866: cmovbe  r12d, eax
 * 000000014034286A: mov     [rbp+20F0h+var_20A8], edx
 * 000000014034286D: add     r12d, edx
 * 0000000140342870: test    ecx, ecx
 * 0000000140342872: jz      short loc_140342889
 * 0000000140342874: lea     eax, [rcx-1]
 * 0000000140342877: lea     rax, [rax+rax*4]
 * 000000014034287B: cmp     r12d, [r8+rax*8+0Ch]
 * 0000000140342880: jb      loc_140342A5C
 * 0000000140342886: mov     ecx, [rbp+20F0h+var_20E8]
 * 0000000140342889: cmp     r14, r11
 * 000000014034288C: jz      loc_140342A32
 * 0000000140342892: mov     ecx, [r14]
 * 0000000140342895: mov     eax, [r14+4]
 * 0000000140342899: cmp     ecx, r12d
 * 000000014034289C: jnb     loc_140342A1C
 * 00000001403428A2: cmp     eax, edx
 * 00000001403428A4: jbe     loc_140342A1C
 * 00000001403428AA: cmp     ecx, edx
 * 00000001403428AC: jb      loc_140342A74
 * 00000001403428B2: cmp     eax, r12d
 * 00000001403428B5: ja      loc_140342A74
 * 00000001403428BB: mov     eax, [r14+8]
 * 00000001403428BF: mov     ecx, 1
 * 00000001403428C4: test    cl, al
 * 00000001403428C6: jnz     short loc_1403428D4
 * 00000001403428C8: mov     al, [rax+r15]
 * 00000001403428CC: test    al, 20h
 * 00000001403428CE: jz      loc_140342A0B
 * 00000001403428D4: mov     eax, [r13+0]
 * 00000001403428D8: mov     ecx, [r13+4]
 * 00000001403428DC: mov     r15d, [r13+8]
 * 00000001403428E0: cmp     r15d, eax
 * 00000001403428E3: mov     rdx, [rbp+20F0h+var_20E0]
 * 00000001403428E7: cmovbe  r15d, eax
 * 00000001403428EB: mov     [rbp+20F0h+var_20C0], ecx
 * 00000001403428EE: mov     rax, [rbx+410h]
 * 00000001403428F5: add     r15d, ecx
 * 00000001403428F8: mov     rcx, r14
 * 00000001403428FB: call    KeGuardDispatchICall
 * 0000000140342900: mov     rcx, rax
 * 0000000140342903: mov     eax, [rbp+20F0h+var_20C0]
 * 0000000140342906: cmp     [rcx], eax
 * 0000000140342908: jb      short loc_140342910
 * 000000014034290A: cmp     [rcx+4], r15d
 * 000000014034290E: jbe     short loc_140342972
 * 0000000140342910: mov     r10, [rbp+20F0h+var_20E0]
 * 0000000140342914: mov     edx, ecx
 * 0000000140342916: sub     edx, r10d
 * 0000000140342919: mov     eax, 80000000h
 * 000000014034291E: or      edx, eax
 * 0000000140342920: test    dword ptr [rbx+970h], 200000h
 * 000000014034292A: jz      loc_140346747
 * 0000000140342930: xor     edx, edx
 * 0000000140342932: cmp     [rbx+8D8h], edx
 * 0000000140342938: jnz     short loc_140342976
 * 000000014034293A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140342944: add     rax, rbx
 * 0000000140342947: mov     [rbx+8E0h], rax
 * 000000014034294E: lea     eax, [rdx+1]
 * 0000000140342951: mov     [rbx+8E8h], rdx
 * 0000000140342958: mov     qword ptr [rbx+8F0h], 10Fh
 * 0000000140342963: mov     [rbx+8F8h], r10
 * 000000014034296A: mov     [rbx+8D8h], eax
 * 0000000140342970: jmp     short loc_140342976
 * 0000000140342972: mov     r10, [rbp+20F0h+var_20E0]
 * 0000000140342976: mov     r8d, [rcx]
 * 0000000140342979: mov     rdx, r10
 * 000000014034297C: mov     rax, [rbx+418h]
 * 0000000140342983: add     r8, r10
 * 0000000140342986: call    KeGuardDispatchICall
 * 000000014034298B: mov     rdx, rax
 * 000000014034298E: mov     eax, [rbp+20F0h+var_20C0]
 * 0000000140342991: cmp     [rdx], eax
 * 0000000140342993: jb      short loc_14034299B
 * 0000000140342995: cmp     [rdx+4], r15d
 * 0000000140342999: jbe     short loc_140342A01
 * 000000014034299B: mov     r15, [rbp+20F0h+var_20E0]
 * 000000014034299F: mov     eax, 80000000h
 * 00000001403429A4: sub     edx, r15d
 * 00000001403429A7: or      edx, eax
 * 00000001403429A9: test    dword ptr [rbx+970h], 200000h
 * 00000001403429B3: jz      loc_14034671E
 * 00000001403429B9: mov     edx, [rbp+20F0h+var_20A8]
 * 00000001403429BC: xor     r9d, r9d
 * 00000001403429BF: cmp     [rbx+8D8h], r9d
 * 00000001403429C6: jnz     short loc_140342A0B
 * 00000001403429C8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403429D2: add     rax, rbx
 * 00000001403429D5: mov     [rbx+8E0h], rax
 * 00000001403429DC: lea     eax, [r9+1]
 * 00000001403429E0: mov     [rbx+8E8h], r9
 * 00000001403429E7: mov     qword ptr [rbx+8F0h], 10Fh
 * 00000001403429F2: mov     [rbx+8F8h], r15
 * 00000001403429F9: mov     [rbx+8D8h], eax
 * 00000001403429FF: jmp     short loc_140342A0B
 * 0000000140342A01: mov     edx, [rbp+20F0h+var_20A8]
 * 0000000140342A04: xor     r9d, r9d
 * 0000000140342A07: mov     r15, [rbp+20F0h+var_20E0]
 * 0000000140342A0B: add     r14, 0Ch
 * 0000000140342A0F: cmp     r14, [rbp+20F0h+var_2058]
 * 0000000140342A16: jnz     loc_140342892
 * 0000000140342A1C: mov     ecx, [rbp+20F0h+var_20E8]
 * 0000000140342A1F: movzx   r10d, [rbp+20F0h+var_2044]
 * 0000000140342A27: mov     r8, [rbp+20F0h+var_20D8]
 * 0000000140342A2B: mov     r11, [rbp+20F0h+var_2058]
 * 0000000140342A32: mov     edx, 1
 * 0000000140342A37: movzx   eax, r10w
 * 0000000140342A3B: add     ecx, edx
 * 0000000140342A3D: add     r13, 28h ; '('
 * 0000000140342A41: mov     [rbp+20F0h+var_20E8], ecx
 * 0000000140342A44: cmp     ecx, eax
 * 0000000140342A46: jb      loc_140342857
 * 0000000140342A4C: mov     r9, [rbp+20F0h+var_2088]
 * 0000000140342A50: xor     r12d, r12d
 * 0000000140342A53: mov     r13, [rbp+20F0h+var_2070]
 * 0000000140342A5A: jmp     short loc_140342A8B
 * 0000000140342A5C: test    dword ptr [rbx+970h], 200000h
 * 0000000140342A66: jz      loc_1403466F3
 * 0000000140342A6C: xor     r12d, r12d
 * 0000000140342A6F: jmp     loc_1403427C4
 * 0000000140342A74: test    dword ptr [rbx+970h], 200000h
 * 0000000140342A7E: jz      loc_140346770
 * 0000000140342A84: jmp     short loc_140342A6C
 * 0000000140342A86: mov     edx, 1
 * 0000000140342A8B: cmp     r14, r11
 * 0000000140342A8E: jz      short loc_140342AE5
 * 0000000140342A90: test    dword ptr [rbx+970h], 200000h
 * 0000000140342A9A: jz      loc_14034679B
 * 0000000140342AA0: cmp     [rbx+8D8h], r12d
 * 0000000140342AA7: jnz     loc_14034277C
 * 0000000140342AAD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140342AB7: add     rax, rbx
 * 0000000140342ABA: mov     [rbx+8E0h], rax
 * 0000000140342AC1: mov     [rbx+8E8h], r12
 * 0000000140342AC8: mov     qword ptr [rbx+8F0h], 10Fh
 * 0000000140342AD3: mov     [rbx+8F8h], r15
 * 0000000140342ADA: mov     [rbx+8D8h], edx
 * 0000000140342AE0: jmp     loc_14034277C
 * 0000000140342AE5: mov     r12d, [rbx+7CCh]
 * 0000000140342AEC: lea     eax, [rax+rax*2]
 * 0000000140342AEF: mov     r8d, [rbx+904h]
 * 0000000140342AF6: lea     eax, [rax+6]
 * 0000000140342AF9: lea     ecx, [r9+6]
 * 0000000140342AFD: and     ecx, 0FFFFFFF8h
 * 0000000140342B00: lea     eax, [rcx+rax*8]
 * 0000000140342B03: add     eax, r12d
 * 0000000140342B06: cmp     eax, [rbx+9FCh]
 * 0000000140342B0C: jbe     loc_140342C0B
 * 0000000140342B12: mov     edx, eax
 * 0000000140342B14: mov     rcx, rbx
 * 0000000140342B17: call    sub_1403495B4
 * 0000000140342B1C: xor     r9d, r9d
 * 0000000140342B1F: mov     [rbp+20F0h+var_2080], rax
 * 0000000140342B23: mov     r14, rax
 * 0000000140342B26: test    rax, rax
 * 0000000140342B29: jz      loc_140342BFE
 * 0000000140342B2F: mov     ecx, [rbx+970h]
 * 0000000140342B35: test    cl, 4
 * 0000000140342B38: jnz     loc_140342BE8
 * 0000000140342B3E: mov     eax, [rbx+7CCh]
 * 0000000140342B44: lea     r10d, [r9+1]
 * 0000000140342B48: mov     r8, [rbx+7B0h]
 * 0000000140342B4F: and     ecx, 20000000h
 * 0000000140342B55: neg     ecx
 * 0000000140342B57: sbb     edx, edx
 * 0000000140342B59: and     edx, [rbx+904h]
 * 0000000140342B5F: cmp     eax, 8
 * 0000000140342B62: jb      short loc_140342B79
 * 0000000140342B64: mov     ecx, eax
 * 0000000140342B66: shr     rcx, 3
 * 0000000140342B6A: mov     [rbx], r9
 * 0000000140342B6D: add     eax, 0FFFFFFF8h
 * 0000000140342B70: add     rbx, 8
 * 0000000140342B74: sub     rcx, r10
 * 0000000140342B77: jnz     short loc_140342B6A
 * 0000000140342B79: test    eax, eax
 * 0000000140342B7B: jz      short loc_140342B8C
 * 0000000140342B7D: mov     ecx, 0FFFFFFFFh
 * 0000000140342B82: mov     [rbx], r9b
 * 0000000140342B85: add     rbx, r10
 * 0000000140342B88: add     eax, ecx
 * 0000000140342B8A: jnz     short loc_140342B82
 * 0000000140342B8C: mov     ebx, [r14+904h]
 * 0000000140342B93: mov     [r14+904h], edx
 * 0000000140342B9A: cmp     edx, 3
 * 0000000140342B9D: jz      short loc_140342BD2
 * 0000000140342B9F: test    dword ptr [r14+970h], 10000000h
 * 0000000140342BAA: mov     ecx, r9d
 * 0000000140342BAD: cmovz   ecx, edx
 * 0000000140342BB0: test    ecx, ecx
 * 0000000140342BB2: jz      short loc_140342BC9
 * 0000000140342BB4: mov     rax, [r14+220h]
 * 0000000140342BBB: lea     rcx, [r8-8]
 * 0000000140342BBF: mov     rdx, [rcx]
 * 0000000140342BC2: call    KeGuardDispatchICall
 * 0000000140342BC7: jmp     short loc_140342BE1
 * 0000000140342BC9: mov     rax, [r14+0F8h]
 * 0000000140342BD0: jmp     short loc_140342BD9
 * 0000000140342BD2: mov     rax, [r14+360h]
 * 0000000140342BD9: mov     rcx, r8
 * 0000000140342BDC: call    KeGuardDispatchICall
 * 0000000140342BE1: mov     [r14+904h], ebx
 * 0000000140342BE8: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140342BF0: mov     r9, [rbp+20F0h+var_2088]
 * 0000000140342BF4: movzx   r10d, [rbp+20F0h+var_2044]
 * 0000000140342BFC: jmp     short loc_140342C18
 * 0000000140342BFE: mov     ecx, 0C000009Ah
 * 0000000140342C03: xor     r12d, r12d
 * 0000000140342C06: jmp     loc_140343605
 * 0000000140342C0B: mov     r14, rbx
 * 0000000140342C0E: mov     [rbp+20F0h+var_2080], rbx
 * 0000000140342C12: mov     [rbx+7CCh], eax
 * 0000000140342C18: mov     r11d, 1
 * 0000000140342C1E: lea     rcx, [r14+r12]
 * 0000000140342C22: add     [r14+7F4h], r11d
 * 0000000140342C29: mov     rax, rcx
 * 0000000140342C2C: mov     [rbp+20F0h+var_1CD8], rcx
 * 0000000140342C33: xor     r12d, r12d
 * 0000000140342C36: lea     edx, [r11+2Fh]
 * 0000000140342C3A: lea     r8d, [r11+5]
 * 0000000140342C3E: mov     [rax], r12
 * 0000000140342C41: add     edx, 0FFFFFFF8h
 * 0000000140342C44: add     rax, 8
 * 0000000140342C48: sub     r8, r11
 * 0000000140342C4B: jnz     short loc_140342C3E
 * 0000000140342C4D: test    edx, edx
 * 0000000140342C4F: jz      short loc_140342C62
 * 0000000140342C51: mov     r8d, 0FFFFFFFFh
 * 0000000140342C57: mov     [rax], r12b
 * 0000000140342C5A: add     rax, r11
 * 0000000140342C5D: add     edx, r8d
 * 0000000140342C60: jnz     short loc_140342C57
 * 0000000140342C62: mov     rsi, [rbp+20F0h+var_20B0]
 * 0000000140342C66: mov     dword ptr [rcx], 1Eh
 * 0000000140342C6C: mov     [rcx+8], rsi
 * 0000000140342C70: mov     [rcx+10h], r12d
 * 0000000140342C74: mov     rdx, [r14+800h]
 * 0000000140342C7B: mov     rax, rdx
 * 0000000140342C7E: jmp     short loc_140342C82
 * 0000000140342C80: xor     edx, eax
 * 0000000140342C82: shr     rax, 1Fh
 * 0000000140342C86: test    rax, rax
 * 0000000140342C89: jnz     short loc_140342C80
 * 0000000140342C8B: btr     edx, 1Fh
 * 0000000140342C8F: mov     rbx, r14
 * 0000000140342C92: mov     [rcx+14h], edx
 * 0000000140342C95: mov     rax, [rbp+20F0h+var_1CD8]
 * 0000000140342C9C: mov     [rbp+20F0h+var_1F58], rax
 * 0000000140342CA3: mov     [rbp+20F0h+var_1FE8], rbx
 * 0000000140342CAA: mov     [rax+18h], r15
 * 0000000140342CAE: mov     ecx, [r13+50h]
 * 0000000140342CB2: mov     rax, [rbp+20F0h+var_1F58]
 * 0000000140342CB9: mov     [rax+20h], ecx
 * 0000000140342CBC: mov     rax, [rbp+20F0h+var_1F58]
 * 0000000140342CC3: mov     ecx, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140342CC6: mov     [rax+24h], ecx
 * 0000000140342CC9: mov     rax, [rbp+20F0h+var_1F58]
 * 0000000140342CD0: mov     [rax+28h], r10w
 * 0000000140342CD5: mov     rax, [rbp+20F0h+var_1F58]
 * 0000000140342CDC: or      [rax+2Ah], r11w
 * 0000000140342CE1: lea     r11d, [r9-1]
 * 0000000140342CE5: mov     rcx, [rbp+20F0h+var_1F58]
 * 0000000140342CEC: add     r11, 7
 * 0000000140342CF0: and     r11, 0FFFFFFFFFFFFFFF8h
 * 0000000140342CF4: movzx   eax, word ptr [rcx+28h]
 * 0000000140342CF8: lea     rdx, [rcx+30h]
 * 0000000140342CFC: add     r11, rdx
 * 0000000140342CFF: mov     [rbp+20F0h+var_20A0], rdx
 * 0000000140342D03: test    r9d, r9d
 * 0000000140342D06: mov     [rbp+20F0h+var_2068], r11
 * 0000000140342D0D: mov     r9d, 1
 * 0000000140342D13: lea     rcx, [rax+rax*2]
 * 0000000140342D17: lea     r8, [r11+rcx*8]
 * 0000000140342D1B: mov     ecx, 0Ch
 * 0000000140342D20: cmovz   rcx, [rbp+20F0h+var_20C8]
 * 0000000140342D25: add     rcx, rsi
 * 0000000140342D28: mov     [rbp+20F0h+var_2030], r8
 * 0000000140342D2F: mov     [rbp+20F0h+var_20F0], rcx
 * 0000000140342D33: cmp     r12w, r10w
 * 0000000140342D37: jnb     short loc_140342D6E
 * 0000000140342D39: movzx   edx, r10w
 * 0000000140342D3D: lea     rax, [r11+8]
 * 0000000140342D41: lea     r10d, [r9+0Bh]
 * 0000000140342D45: mov     r13d, 80000000h
 * 0000000140342D4B: lea     r15d, [r9+1]
 * 0000000140342D4F: mov     rcx, r15
 * 0000000140342D52: mov     [rax-8], r12d
 * 0000000140342D56: mov     [rax-4], r12d
 * 0000000140342D5A: mov     [rax], r13d
 * 0000000140342D5D: add     rax, r10
 * 0000000140342D60: sub     rcx, r9
 * 0000000140342D63: jnz     short loc_140342D52
 * 0000000140342D65: sub     rdx, r9
 * 0000000140342D68: jnz     short loc_140342D4F
 * 0000000140342D6A: mov     r15, [rbp+20F0h+var_20E0]
 * 0000000140342D6E: cmp     r11, r8
 * 0000000140342D71: jz      loc_1403435F8
 * 0000000140342D77: mov     r13, [rbp+20F0h+var_20D8]
 * 0000000140342D7B: mov     eax, [r13+24h]
 * 0000000140342D7F: bt      eax, 19h
 * 0000000140342D83: jb      loc_140342EE2
 * 0000000140342D89: mov     ecx, [r13+0]
 * 0000000140342D8D: cmp     ecx, 54494E49h
 * 0000000140342D93: jnz     short loc_140342DA3
 * 0000000140342D95: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140342D9D: jz      loc_140342EE2
 * 0000000140342DA3: cmp     ecx, 45474150h
 * 0000000140342DA9: jnz     short loc_140342DDA
 * 0000000140342DAB: movzx   eax, word ptr [r13+4]
 * 0000000140342DB0: mov     edx, 7877h
 * 0000000140342DB5: cmp     ax, dx
 * 0000000140342DB8: jz      loc_140342EE2
 * 0000000140342DBE: mov     edx, 7277h
 * 0000000140342DC3: cmp     ax, dx
 * 0000000140342DC6: jz      loc_140342EE2
 * 0000000140342DCC: mov     edx, 7777h
 * 0000000140342DD1: cmp     ax, dx
 * 0000000140342DD4: jz      loc_140342EE2
 * 0000000140342DDA: cmp     ecx, 41525245h
 * 0000000140342DE0: jnz     short loc_140342DF2
 * 0000000140342DE2: mov     eax, 4154h
 * 0000000140342DE7: cmp     [r13+4], ax
 * 0000000140342DEC: jz      loc_140342EE2
 * 0000000140342DF2: mov     r8, [r14+910h]
 * 0000000140342DF9: mov     r9, r13
 * 0000000140342DFC: mov     r10, [r14+918h]
 * 0000000140342E03: sub     r9, r8
 * 0000000140342E06: mov     r11, [r14+920h]
 * 0000000140342E0D: mov     esi, 7
 * 0000000140342E12: mov     rbx, [r14+928h]
 * 0000000140342E19: movzx   edx, byte ptr [r8+r9]
 * 0000000140342E1E: movzx   eax, byte ptr [r8]
 * 0000000140342E22: inc     r8
 * 0000000140342E25: cmp     rdx, rax
 * 0000000140342E28: jnz     short loc_140342E38
 * 0000000140342E2A: mov     eax, 0FFFFFFFFh
 * 0000000140342E2F: add     esi, eax
 * 0000000140342E31: jnz     short loc_140342E19
 * 0000000140342E33: jmp     loc_140342ED7
 * 0000000140342E38: mov     r8d, 8
 * 0000000140342E3E: mov     r9, r13
 * 0000000140342E41: mov     rcx, [r9]
 * 0000000140342E44: add     r9, 8
 * 0000000140342E48: mov     rax, [r10]
 * 0000000140342E4B: add     r10, 8
 * 0000000140342E4F: cmp     rcx, rax
 * 0000000140342E52: jnz     short loc_140342E87
 * 0000000140342E54: add     r8d, 0FFFFFFF8h
 * 0000000140342E58: cmp     r8d, 8
 * 0000000140342E5C: jnb     short loc_140342E41
 * 0000000140342E5E: test    r8d, r8d
 * 0000000140342E61: jz      short loc_140342ED7
 * 0000000140342E63: mov     esi, 1
 * 0000000140342E68: movzx   edx, byte ptr [r9]
 * 0000000140342E6C: add     r9, rsi
 * 0000000140342E6F: movzx   eax, byte ptr [r10]
 * 0000000140342E73: add     r10, rsi
 * 0000000140342E76: cmp     rdx, rax
 * 0000000140342E79: jnz     short loc_140342E8C
 * 0000000140342E7B: mov     eax, 0FFFFFFFFh
 * 0000000140342E80: add     r8d, eax
 * 0000000140342E83: jnz     short loc_140342E68
 * 0000000140342E85: jmp     short loc_140342ED7
 * 0000000140342E87: mov     esi, 1
 * 0000000140342E8C: mov     r8, r13
 * 0000000140342E8F: mov     r9d, 4
 * 0000000140342E95: sub     r8, r11
 * 0000000140342E98: mov     r10d, 0FFFFFFFFh
 * 0000000140342E9E: movzx   edx, byte ptr [r11+r8]
 * 0000000140342EA3: movzx   eax, byte ptr [r11]
 * 0000000140342EA7: add     r11, rsi
 * 0000000140342EAA: cmp     rdx, rax
 * 0000000140342EAD: jnz     short loc_140342EB6
 * 0000000140342EAF: add     r9d, r10d
 * 0000000140342EB2: jnz     short loc_140342E9E
 * 0000000140342EB4: jmp     short loc_140342ED7
 * 0000000140342EB6: mov     r8, r13
 * 0000000140342EB9: mov     r9d, 6
 * 0000000140342EBF: sub     r8, rbx
 * 0000000140342EC2: movzx   edx, byte ptr [rbx+r8]
 * 0000000140342EC7: movzx   eax, byte ptr [rbx]
 * 0000000140342ECA: add     rbx, rsi
 * 0000000140342ECD: cmp     rdx, rax
 * 0000000140342ED0: jnz     short loc_140342EE7
 * 0000000140342ED2: add     r9d, r10d
 * 0000000140342ED5: jnz     short loc_140342EC2
 * 0000000140342ED7: mov     r9d, 1
 * 0000000140342EDD: mov     r12d, r9d
 * 0000000140342EE0: jmp     short loc_140342EED
 * 0000000140342EE2: mov     r12d, r9d
 * 0000000140342EE5: jmp     short loc_140342EF8
 * 0000000140342EE7: mov     r9d, 1
 * 0000000140342EED: mov     rsi, [rbp+20F0h+var_20B0]
 * 0000000140342EF1: mov     r11, [rbp+20F0h+var_2068]
 * 0000000140342EF8: mov     ecx, [r13+24h]
 * 0000000140342EFC: xor     r10d, r10d
 * 0000000140342EFF: test    ecx, ecx
 * 0000000140342F01: cmovs   r12d, r9d
 * 0000000140342F05: mov     [rbp+20F0h+var_2098], r12d
 * 0000000140342F09: test    r12d, r12d
 * 0000000140342F0C: jz      short loc_140342F35
 * 0000000140342F0E: cmp     dword ptr [r13+0], 54494E49h
 * 0000000140342F16: jnz     short loc_140342F35
 * 0000000140342F18: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140342F20: jnz     short loc_140342F35
 * 0000000140342F22: test    dword ptr [r14+974h], 2000h
 * 0000000140342F2D: cmovnz  r12d, r10d
 * 0000000140342F31: mov     [rbp+20F0h+var_2098], r12d
 * 0000000140342F35: test    dword ptr [r14+974h], 4000h
 * 0000000140342F40: jz      short loc_140342F61
 * 0000000140342F42: bt      ecx, 1Dh
 * 0000000140342F46: jnb     short loc_140342F61
 * 0000000140342F48: cmp     r15, [r14+5D8h]
 * 0000000140342F4F: jz      short loc_140342F5A
 * 0000000140342F51: cmp     r15, [r14+5E0h]
 * 0000000140342F58: jnz     short loc_140342F61
 * 0000000140342F5A: mov     r12d, r9d
 * 0000000140342F5D: mov     [rbp+20F0h+var_2098], r9d
 * 0000000140342F61: mov     ecx, [r13+10h]
 * 0000000140342F65: mov     eax, [r13+8]
 * 0000000140342F69: cmp     ecx, eax
 * 0000000140342F6B: mov     edx, [r13+0Ch]
 * 0000000140342F6F: mov     r8, [rbp+20F0h+var_2058]
 * 0000000140342F76: cmovbe  ecx, eax
 * 0000000140342F79: add     ecx, edx
 * 0000000140342F7B: mov     dword ptr [rbp+20F0h+var_20B8], edx
 * 0000000140342F7E: mov     [rbp+20F0h+var_20E8], ecx
 * 0000000140342F81: cmp     rsi, r8
 * 0000000140342F84: jz      short loc_140342F8F
 * 0000000140342F86: mov     r15d, [rsi]
 * 0000000140342F89: mov     r13d, [rsi+4]
 * 0000000140342F8D: jmp     short loc_140342F95
 * 0000000140342F8F: mov     r15d, r10d
 * 0000000140342F92: mov     r13d, r10d
 * 0000000140342F95: mov     [rbp+20F0h+var_20C0], r13d
 * 0000000140342F99: mov     [rbp+20F0h+var_20A8], edx
 * 0000000140342F9C: cmp     rsi, r8
 * 0000000140342F9F: jz      loc_14034314C
 * 0000000140342FA5: cmp     r15d, edx
 * 0000000140342FA8: jbe     loc_14034314C
 * 0000000140342FAE: cmp     r13d, ecx
 * 0000000140342FB1: ja      loc_14034314C
 * 0000000140342FB7: test    r12d, r12d
 * 0000000140342FBA: jnz     loc_14034314C
 * 0000000140342FC0: mov     [r11], edx
 * 0000000140342FC3: lea     rcx, [rbp+20F0h+var_1DF0]
 * 0000000140342FCA: mov     [r11+4], r15d
 * 0000000140342FCE: lea     rdx, [rbp+20F0h+var_1C10]
 * 0000000140342FD5: mov     eax, [r11]
 * 0000000140342FD8: mov     r9d, r15d
 * 0000000140342FDB: mov     r11, [rbp+20F0h+var_20E0]
 * 0000000140342FDF: sub     r9d, eax
 * 0000000140342FE2: mov     esi, r9d
 * 0000000140342FE5: mov     r8d, r10d
 * 0000000140342FE8: mov     [rbp+20F0h+var_20A8], r15d
 * 0000000140342FEC: lea     rbx, [r11+rax]
 * 0000000140342FF0: add     rsi, rbx
 * 0000000140342FF3: mov     r10, [rdx]
 * 0000000140342FF6: mov     eax, [rcx]
 * 0000000140342FF8: add     rax, r10
 * 0000000140342FFB: cmp     rbx, rax
 * 0000000140342FFE: jnb     short loc_140343009
 * 0000000140343000: cmp     rsi, r10
 * 0000000140343003: ja      loc_140343152
 * 0000000140343009: inc     r8d
 * 000000014034300C: add     rdx, 8
 * 0000000140343010: add     rcx, 4
 * 0000000140343014: cmp     r8d, 6
 * 0000000140343018: jb      short loc_140342FF3
 * 000000014034301A: add     [r14+810h], r9d
 * 0000000140343021: mov     r10, rbx
 * 0000000140343024: mov     r11d, [r14+7FCh]
 * 000000014034302B: mov     rax, rbx
 * 000000014034302E: mov     r12, [r14+800h]
 * 0000000140343035: cmp     rbx, rsi
 * 0000000140343038: jnb     short loc_14034304A
 * 000000014034303A: mov     ecx, 40h ; '@'
 * 000000014034303F: prefetchnta byte ptr [rax]
 * 0000000140343042: add     rax, rcx
 * 0000000140343045: cmp     rax, rsi
 * 0000000140343048: jb      short loc_14034303F
 * 000000014034304A: mov     esi, r9d
 * 000000014034304D: mov     r8, r12
 * 0000000140343050: shr     esi, 7
 * 0000000140343053: test    esi, esi
 * 0000000140343055: jz      short loc_1403430CC
 * 0000000140343057: mov     edi, 1
 * 000000014034305C: mov     r14d, 0FFFFFFFFh
 * 0000000140343062: mov     r13, 7010008004002001h
 * 000000014034306C: mov     eax, 8
 * 0000000140343071: xor     r8, [r10]
 * 0000000140343074: mov     ecx, r11d
 * 0000000140343077: rol     r8, cl
 * 000000014034307A: xor     r8, [r10+8]
 * 000000014034307E: add     r10, 10h
 * 0000000140343082: rol     r8, cl
 * 0000000140343085: sub     rax, rdi
 * 0000000140343088: jnz     short loc_140343071
 * 000000014034308A: mov     rcx, r10
 * 000000014034308D: sub     rcx, rbx
 * 0000000140343090: xor     rcx, r12
 * 0000000140343093: mov     rax, rcx
 * 0000000140343096: rol     rax, 11h
 * 000000014034309A: xor     rcx, rax
 * 000000014034309D: mov     rax, r13
 * 00000001403430A0: mul     rcx
 * 00000001403430A3: xor     r11d, eax
 * 00000001403430A6: mov     [rbp+20F0h+var_1978], rdx
 * 00000001403430AD: xor     r11d, edx
 * 00000001403430B0: and     r11d, 3Fh
 * 00000001403430B4: cmovz   r11d, edi
 * 00000001403430B8: add     esi, r14d
 * 00000001403430BB: jnz     short loc_14034306C
 * 00000001403430BD: mov     r14, [rbp+20F0h+var_2080]
 * 00000001403430C1: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403430C8: mov     r13d, [rbp+20F0h+var_20C0]
 * 00000001403430CC: and     r9d, 7Fh
 * 00000001403430D0: mov     ebx, 1
 * 00000001403430D5: cmp     r9d, 8
 * 00000001403430D9: jb      short loc_1403430F8
 * 00000001403430DB: mov     eax, r9d
 * 00000001403430DE: shr     rax, 3
 * 00000001403430E2: xor     r8, [r10]
 * 00000001403430E5: mov     ecx, r11d
 * 00000001403430E8: rol     r8, cl
 * 00000001403430EB: add     r10, 8
 * 00000001403430EF: add     r9d, 0FFFFFFF8h
 * 00000001403430F3: sub     rax, rbx
 * 00000001403430F6: jnz     short loc_1403430E2
 * 00000001403430F8: test    r9d, r9d
 * 00000001403430FB: jz      short loc_14034311E
 * 00000001403430FD: mov     edi, 0FFFFFFFFh
 * 0000000140343102: movzx   eax, byte ptr [r10]
 * 0000000140343106: mov     ecx, r11d
 * 0000000140343109: xor     r8, rax
 * 000000014034310C: add     r10, rbx
 * 000000014034310F: rol     r8, cl
 * 0000000140343112: add     r9d, edi
 * 0000000140343115: jnz     short loc_140343102
 * 0000000140343117: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034311E: mov     rax, r8
 * 0000000140343121: shr     rax, 1Fh
 * 0000000140343125: xor     r10d, r10d
 * 0000000140343128: jmp     short loc_140343131
 * 000000014034312A: xor     r8d, eax
 * 000000014034312D: shr     rax, 1Fh
 * 0000000140343131: test    rax, rax
 * 0000000140343134: jnz     short loc_14034312A
 * 0000000140343136: mov     rax, [rbp+20F0h+var_2068]
 * 000000014034313D: btr     r8d, 1Fh
 * 0000000140343142: mov     r11, [rbp+20F0h+var_20E0]
 * 0000000140343146: mov     [rax+8], r8d
 * 000000014034314A: jmp     short loc_140343155
 * 000000014034314C: mov     r11, [rbp+20F0h+var_20E0]
 * 0000000140343150: jmp     short loc_14034316C
 * 0000000140343152: xor     r10d, r10d
 * 0000000140343155: mov     rsi, [rbp+20F0h+var_20B0]
 * 0000000140343159: mov     r9d, 1
 * 000000014034315F: mov     r8, [rbp+20F0h+var_2058]
 * 0000000140343166: mov     edx, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140343169: mov     ecx, [rbp+20F0h+var_20E8]
 * 000000014034316C: cmp     r15d, edx
 * 000000014034316F: jb      loc_1403433E4
 * 0000000140343175: cmp     r13d, ecx
 * 0000000140343178: mov     r13d, [rbp+20F0h+var_2098]
 * 000000014034317C: ja      loc_1403433E8
 * 0000000140343182: cmp     rsi, r8
 * 0000000140343185: jz      loc_1403433E8
 * 000000014034318B: mov     r15, [rbp+20F0h+var_20F0]
 * 000000014034318F: mov     r12d, [r15+4]
 * 0000000140343193: cmp     r12d, ecx
 * 0000000140343196: ja      loc_1403433E8
 * 000000014034319C: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403431A0: mov     edx, 0Ch
 * 00000001403431A5: cmp     r15, r8
 * 00000001403431A8: jz      loc_1403433E8
 * 00000001403431AE: test    r13d, r13d
 * 00000001403431B1: jz      short loc_1403431BB
 * 00000001403431B3: mov     r8b, 80h
 * 00000001403431B6: jmp     loc_1403433AD
 * 00000001403431BB: mov     edx, [r15]
 * 00000001403431BE: mov     ecx, [rsi+4]
 * 00000001403431C1: mov     [rbp+20F0h+var_20A8], edx
 * 00000001403431C4: cmp     edx, ecx
 * 00000001403431C6: jnb     short loc_140343216
 * 00000001403431C8: test    dword ptr [r14+970h], 200000h
 * 00000001403431D3: jz      loc_1403467C6
 * 00000001403431D9: cmp     [r14+8D8h], r10d
 * 00000001403431E0: jnz     short loc_140343216
 * 00000001403431E2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403431EC: add     rax, r14
 * 00000001403431EF: mov     [r14+8E0h], rax
 * 00000001403431F6: mov     [r14+8E8h], r10
 * 00000001403431FD: mov     qword ptr [r14+8F0h], 10Fh
 * 0000000140343208: mov     [r14+8F8h], r11
 * 000000014034320F: mov     [r14+8D8h], r9d
 * 0000000140343216: mov     r9d, edx
 * 0000000140343219: lea     rbx, [r11+rcx]
 * 000000014034321D: sub     r9d, ecx
 * 0000000140343220: lea     rdx, [rbp+20F0h+var_1C10]
 * 0000000140343227: mov     esi, r9d
 * 000000014034322A: lea     rcx, [rbp+20F0h+var_1DF0]
 * 0000000140343231: add     rsi, rbx
 * 0000000140343234: mov     r8d, r10d
 * 0000000140343237: mov     r10, [rdx]
 * 000000014034323A: mov     eax, [rcx]
 * 000000014034323C: add     rax, r10
 * 000000014034323F: cmp     rbx, rax
 * 0000000140343242: jnb     short loc_14034324D
 * 0000000140343244: cmp     rsi, r10
 * 0000000140343247: ja      loc_140343392
 * 000000014034324D: mov     eax, 4
 * 0000000140343252: inc     r8d
 * 0000000140343255: add     rcx, rax
 * 0000000140343258: add     rdx, 8
 * 000000014034325C: cmp     r8d, 6
 * 0000000140343260: jb      short loc_140343237
 * 0000000140343262: cmp     r9d, eax
 * 0000000140343265: jb      loc_140343392
 * 000000014034326B: add     [r14+810h], r9d
 * 0000000140343272: mov     r10, rbx
 * 0000000140343275: mov     r11d, [r14+7FCh]
 * 000000014034327C: mov     rax, rbx
 * 000000014034327F: mov     r15, [r14+800h]
 * 0000000140343286: cmp     rbx, rsi
 * 0000000140343289: jnb     short loc_14034329B
 * 000000014034328B: mov     ecx, 40h ; '@'
 * 0000000140343290: prefetchnta byte ptr [rax]
 * 0000000140343293: add     rax, rcx
 * 0000000140343296: cmp     rax, rsi
 * 0000000140343299: jb      short loc_140343290
 * 000000014034329B: mov     esi, r9d
 * 000000014034329E: mov     r8, r15
 * 00000001403432A1: shr     esi, 7
 * 00000001403432A4: test    esi, esi
 * 00000001403432A6: jz      short loc_14034331C
 * 00000001403432A8: mov     edi, 0FFFFFFFFh
 * 00000001403432AD: mov     r13d, 1
 * 00000001403432B3: mov     r14, 7010008004002001h
 * 00000001403432BD: mov     eax, 8
 * 00000001403432C2: xor     r8, [r10]
 * 00000001403432C5: mov     ecx, r11d
 * 00000001403432C8: rol     r8, cl
 * 00000001403432CB: xor     r8, [r10+8]
 * 00000001403432CF: add     r10, 10h
 * 00000001403432D3: rol     r8, cl
 * 00000001403432D6: sub     rax, r13
 * 00000001403432D9: jnz     short loc_1403432C2
 * 00000001403432DB: mov     rcx, r10
 * 00000001403432DE: sub     rcx, rbx
 * 00000001403432E1: xor     rcx, r15
 * 00000001403432E4: mov     rax, rcx
 * 00000001403432E7: rol     rax, 11h
 * 00000001403432EB: xor     rcx, rax
 * 00000001403432EE: mov     rax, r14
 * 00000001403432F1: mul     rcx
 * 00000001403432F4: xor     r11d, eax
 * 00000001403432F7: mov     [rbp+20F0h+var_1970], rdx
 * 00000001403432FE: xor     r11d, edx
 * 0000000140343301: and     r11d, 3Fh
 * 0000000140343305: cmovz   r11d, r13d
 * 0000000140343309: add     esi, edi
 * 000000014034330B: jnz     short loc_1403432BD
 * 000000014034330D: mov     r14, [rbp+20F0h+var_2080]
 * 0000000140343311: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140343318: mov     r13d, [rbp+20F0h+var_2098]
 * 000000014034331C: and     r9d, 7Fh
 * 0000000140343320: mov     ebx, 1
 * 0000000140343325: cmp     r9d, 8
 * 0000000140343329: jb      short loc_140343348
 * 000000014034332B: mov     eax, r9d
 * 000000014034332E: shr     rax, 3
 * 0000000140343332: xor     r8, [r10]
 * 0000000140343335: mov     ecx, r11d
 * 0000000140343338: rol     r8, cl
 * 000000014034333B: add     r10, 8
 * 000000014034333F: add     r9d, 0FFFFFFF8h
 * 0000000140343343: sub     rax, rbx
 * 0000000140343346: jnz     short loc_140343332
 * 0000000140343348: test    r9d, r9d
 * 000000014034334B: jz      short loc_14034336C
 * 000000014034334D: mov     r13d, 0FFFFFFFFh
 * 0000000140343353: movzx   eax, byte ptr [r10]
 * 0000000140343357: mov     ecx, r11d
 * 000000014034335A: xor     r8, rax
 * 000000014034335D: add     r10, rbx
 * 0000000140343360: rol     r8, cl
 * 0000000140343363: add     r9d, r13d
 * 0000000140343366: jnz     short loc_140343353
 * 0000000140343368: mov     r13d, [rbp+20F0h+var_2098]
 * 000000014034336C: mov     rax, r8
 * 000000014034336F: shr     rax, 7
 * 0000000140343373: xor     r10d, r10d
 * 0000000140343376: jmp     short loc_14034337F
 * 0000000140343378: xor     r8b, al
 * 000000014034337B: shr     rax, 7
 * 000000014034337F: test    rax, rax
 * 0000000140343382: jnz     short loc_140343378
 * 0000000140343384: mov     r11, [rbp+20F0h+var_20E0]
 * 0000000140343388: and     r8b, 7Fh
 * 000000014034338C: mov     r15, [rbp+20F0h+var_20F0]
 * 0000000140343390: jmp     short loc_140343398
 * 0000000140343392: xor     r10d, r10d
 * 0000000140343395: mov     r8b, 80h
 * 0000000140343398: mov     rsi, [rbp+20F0h+var_20B0]
 * 000000014034339C: mov     r9d, 1
 * 00000001403433A2: mov     ecx, [rbp+20F0h+var_20E8]
 * 00000001403433A5: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403433A9: lea     edx, [r9+0Bh]
 * 00000001403433AD: mov     [rax], r8b
 * 00000001403433B0: add     rsi, rdx
 * 00000001403433B3: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403433B7: add     r15, rdx
 * 00000001403433BA: mov     r8, [rbp+20F0h+var_2058]
 * 00000001403433C1: add     rax, r9
 * 00000001403433C4: mov     [rbp+20F0h+var_20B0], rsi
 * 00000001403433C8: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403433CC: mov     [rbp+20F0h+var_20F0], r15
 * 00000001403433D0: cmp     r15, r8
 * 00000001403433D3: jz      short loc_1403433D9
 * 00000001403433D5: mov     r12d, [r15+4]
 * 00000001403433D9: cmp     r12d, ecx
 * 00000001403433DC: jbe     loc_1403431A5
 * 00000001403433E2: jmp     short loc_1403433E8
 * 00000001403433E4: mov     r13d, [rbp+20F0h+var_2098]
 * 00000001403433E8: mov     r11, [rbp+20F0h+var_2068]
 * 00000001403433EF: xor     r12d, r12d
 * 00000001403433F2: mov     r15, [rbp+20F0h+var_20E0]
 * 00000001403433F6: test    r13d, r13d
 * 00000001403433F9: jnz     loc_14034357A
 * 00000001403433FF: mov     eax, [rbp+20F0h+var_20A8]
 * 0000000140343402: cmp     eax, ecx
 * 0000000140343404: jz      loc_14034357A
 * 000000014034340A: mov     [r11+0Ch], eax
 * 000000014034340E: lea     rdx, [rbp+20F0h+var_1C10]
 * 0000000140343415: mov     [r11+10h], ecx
 * 0000000140343419: lea     r13d, [r12+1]
 * 000000014034341E: mov     eax, [r11+0Ch]
 * 0000000140343422: mov     r9d, ecx
 * 0000000140343425: sub     r9d, eax
 * 0000000140343428: lea     rcx, [rbp+20F0h+var_1DF0]
 * 000000014034342F: mov     esi, r9d
 * 0000000140343432: mov     r8d, r12d
 * 0000000140343435: lea     rbx, [r15+rax]
 * 0000000140343439: add     rsi, rbx
 * 000000014034343C: mov     r10, [rdx]
 * 000000014034343F: mov     eax, [rcx]
 * 0000000140343441: add     rax, r10
 * 0000000140343444: cmp     rbx, rax
 * 0000000140343447: jnb     short loc_140343452
 * 0000000140343449: cmp     rsi, r10
 * 000000014034344C: ja      loc_140343576
 * 0000000140343452: add     r8d, r13d
 * 0000000140343455: add     rdx, 8
 * 0000000140343459: add     rcx, 4
 * 000000014034345D: cmp     r8d, 6
 * 0000000140343461: jb      short loc_14034343C
 * 0000000140343463: add     [r14+810h], r9d
 * 000000014034346A: mov     r10, rbx
 * 000000014034346D: mov     r11d, [r14+7FCh]
 * 0000000140343474: mov     rax, rbx
 * 0000000140343477: mov     r15, [r14+800h]
 * 000000014034347E: cmp     rbx, rsi
 * 0000000140343481: jnb     short loc_140343493
 * 0000000140343483: mov     ecx, 40h ; '@'
 * 0000000140343488: prefetchnta byte ptr [rax]
 * 000000014034348B: add     rax, rcx
 * 000000014034348E: cmp     rax, rsi
 * 0000000140343491: jb      short loc_140343488
 * 0000000140343493: mov     esi, r9d
 * 0000000140343496: mov     r8, r15
 * 0000000140343499: shr     esi, 7
 * 000000014034349C: test    esi, esi
 * 000000014034349E: jz      short loc_140343507
 * 00000001403434A0: mov     r12, 7010008004002001h
 * 00000001403434AA: mov     edx, 8
 * 00000001403434AF: mov     rax, [r10]
 * 00000001403434B2: mov     ecx, r11d
 * 00000001403434B5: xor     rax, r8
 * 00000001403434B8: mov     r8, [r10+8]
 * 00000001403434BC: rol     rax, cl
 * 00000001403434BF: add     r10, 10h
 * 00000001403434C3: xor     r8, rax
 * 00000001403434C6: rol     r8, cl
 * 00000001403434C9: sub     rdx, r13
 * 00000001403434CC: jnz     short loc_1403434AF
 * 00000001403434CE: mov     rcx, r10
 * 00000001403434D1: sub     rcx, rbx
 * 00000001403434D4: xor     rcx, r15
 * 00000001403434D7: mov     rax, rcx
 * 00000001403434DA: rol     rax, 11h
 * 00000001403434DE: xor     rcx, rax
 * 00000001403434E1: mov     rax, r12
 * 00000001403434E4: mul     rcx
 * 00000001403434E7: xor     eax, edx
 * 00000001403434E9: mov     [rbp+20F0h+var_1968], rdx
 * 00000001403434F0: xor     r11d, eax
 * 00000001403434F3: mov     eax, 0FFFFFFFFh
 * 00000001403434F8: and     r11d, 3Fh
 * 00000001403434FC: cmovz   r11d, r13d
 * 0000000140343500: add     esi, eax
 * 0000000140343502: jnz     short loc_1403434AA
 * 0000000140343504: xor     r12d, r12d
 * 0000000140343507: and     r9d, 7Fh
 * 000000014034350B: cmp     r9d, 8
 * 000000014034350F: jb      short loc_14034352E
 * 0000000140343511: mov     edx, r9d
 * 0000000140343514: shr     rdx, 3
 * 0000000140343518: xor     r8, [r10]
 * 000000014034351B: mov     ecx, r11d
 * 000000014034351E: rol     r8, cl
 * 0000000140343521: add     r10, 8
 * 0000000140343525: add     r9d, 0FFFFFFF8h
 * 0000000140343529: sub     rdx, r13
 * 000000014034352C: jnz     short loc_140343518
 * 000000014034352E: test    r9d, r9d
 * 0000000140343531: jz      short loc_140343551
 * 0000000140343533: mov     r12d, 0FFFFFFFFh
 * 0000000140343539: movzx   eax, byte ptr [r10]
 * 000000014034353D: mov     ecx, r11d
 * 0000000140343540: xor     r8, rax
 * 0000000140343543: add     r10, r13
 * 0000000140343546: rol     r8, cl
 * 0000000140343549: add     r9d, r12d
 * 000000014034354C: jnz     short loc_140343539
 * 000000014034354E: xor     r12d, r12d
 * 0000000140343551: mov     rax, r8
 * 0000000140343554: jmp     short loc_140343559
 * 0000000140343556: xor     r8d, eax
 * 0000000140343559: shr     rax, 1Fh
 * 000000014034355D: test    rax, rax
 * 0000000140343560: jnz     short loc_140343556
 * 0000000140343562: mov     r11, [rbp+20F0h+var_2068]
 * 0000000140343569: btr     r8d, 1Fh
 * 000000014034356E: mov     r15, [rbp+20F0h+var_20E0]
 * 0000000140343572: mov     [r11+14h], r8d
 * 0000000140343576: mov     rsi, [rbp+20F0h+var_20B0]
 * 000000014034357A: mov     rdx, [rbp+20F0h+var_2058]
 * 0000000140343581: cmp     rsi, rdx
 * 0000000140343584: jz      short loc_1403435C6
 * 0000000140343586: mov     eax, [rsi]
 * 0000000140343588: mov     ecx, [rsi+4]
 * 000000014034358B: cmp     eax, dword ptr [rbp+20F0h+var_20B8]
 * 000000014034358E: jb      short loc_1403435C6
 * 0000000140343590: cmp     ecx, [rbp+20F0h+var_20E8]
 * 0000000140343593: ja      short loc_1403435C6
 * 0000000140343595: mov     rcx, [rbp+20F0h+var_20F0]
 * 0000000140343599: cmp     rcx, rdx
 * 000000014034359C: jz      short loc_1403435BA
 * 000000014034359E: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403435A2: mov     byte ptr [rax], 80h
 * 00000001403435A5: inc     rax
 * 00000001403435A8: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403435AC: mov     eax, 0Ch
 * 00000001403435B1: add     rcx, rax
 * 00000001403435B4: mov     [rbp+20F0h+var_20F0], rcx
 * 00000001403435B8: jmp     short loc_1403435BF
 * 00000001403435BA: mov     eax, 0Ch
 * 00000001403435BF: add     rsi, rax
 * 00000001403435C2: mov     [rbp+20F0h+var_20B0], rsi
 * 00000001403435C6: mov     r13, [rbp+20F0h+var_20D8]
 * 00000001403435CA: add     r11, 18h
 * 00000001403435CE: add     r13, 28h ; '('
 * 00000001403435D2: mov     [rbp+20F0h+var_2068], r11
 * 00000001403435D9: mov     [rbp+20F0h+var_20D8], r13
 * 00000001403435DD: cmp     r11, [rbp+20F0h+var_2030]
 * 00000001403435E4: jz      short loc_1403435F1
 * 00000001403435E6: mov     r9d, 1
 * 00000001403435EC: jmp     loc_140342D7B
 * 00000001403435F1: mov     rbx, [rbp+20F0h+var_1FE8]
 * 00000001403435F8: mov     rsi, rbx
 * 00000001403435FB: mov     [rbp+20F0h+var_1FF8], rbx
 * 0000000140343602: mov     ecx, r12d
 * 0000000140343605: mov     [rbp+20F0h+var_2098], ecx
 * 0000000140343608: mov     r13d, 80000000h
 * 000000014034360E: mov     rbx, rsi
 * 0000000140343611: lea     eax, [rcx+r13]
 * 0000000140343615: test    r13d, eax
 * 0000000140343618: jnz     short loc_140343633
 * 000000014034361A: cmp     ecx, 0C000010Eh
 * 0000000140343620: jz      short loc_140343633
 * 0000000140343622: mov     ecx, [rbp+20F0h+var_2098]
 * 0000000140343625: xor     r10d, r10d
 * 0000000140343628: jmp     loc_1403436D0
 * 000000014034362D: mov     r13d, 80000000h
 * 0000000140343633: mov     rax, [rsi+1F0h]
 * 000000014034363A: mov     rcx, [rbp+20F0h+var_1F00]
 * 0000000140343641: call    KeGuardDispatchICall
 * 0000000140343646: mov     ecx, [rax+94h]
 * 000000014034364C: cmp     ecx, 14h
 * 000000014034364F: jb      loc_1403419C5
 * 0000000140343655: mov     eax, [rax+90h]
 * 000000014034365B: mov     r15d, ecx
 * 000000014034365E: mov     rcx, [rbp+20F0h+var_1F00]
 * 0000000140343665: add     r15, rcx
 * 0000000140343668: add     r15, rax
 * 000000014034366B: lea     r14, [rcx+rax]
 * 000000014034366F: cmp     r14, r15
 * 0000000140343672: jz      short loc_1403436CA
 * 0000000140343674: cmp     [r14+0Ch], r12d
 * 0000000140343678: jz      short loc_1403436CA
 * 000000014034367A: mov     eax, [r14+10h]
 * 000000014034367E: test    eax, eax
 * 0000000140343680: jz      short loc_1403436CA
 * 0000000140343682: mov     rdx, [rax+rcx]
 * 0000000140343686: test    rdx, rdx
 * 0000000140343689: jz      short loc_1403436C4
 * 000000014034368B: mov     r8d, 8000000Fh
 * 0000000140343691: lea     rcx, [rbp+20F0h+var_1FF8]
 * 0000000140343698: call    sub_140346BE8
 * 000000014034369D: mov     rsi, [rbp+20F0h+var_1FF8]
 * 00000001403436A4: mov     ecx, eax
 * 00000001403436A6: add     eax, r13d
 * 00000001403436A9: mov     rbx, rsi
 * 00000001403436AC: test    r13d, eax
 * 00000001403436AF: jnz     short loc_1403436BD
 * 00000001403436B1: cmp     ecx, 0C000010Eh
 * 00000001403436B7: jnz     loc_140343625
 * 00000001403436BD: mov     rcx, [rbp+20F0h+var_1F00]
 * 00000001403436C4: add     r14, 14h
 * 00000001403436C8: jmp     short loc_14034366F
 * 00000001403436CA: xor     r10d, r10d
 * 00000001403436CD: mov     ecx, r10d
 * 00000001403436D0: lea     eax, [rcx+r13]
 * 00000001403436D4: test    r13d, eax
 * 00000001403436D7: jnz     short loc_1403436E5
 * 00000001403436D9: cmp     ecx, 0C000010Eh
 * 00000001403436DF: jnz     loc_1403416E7
 * 00000001403436E5: mov     rax, [rbx+560h]
 * 00000001403436EC: lea     r14, [rbx+958h]
 * 00000001403436F3: lea     r8, [rbp+20F0h+var_1CA0]
 * 00000001403436FA: mov     rdx, r14
 * 00000001403436FD: mov     rcx, [rax+20h]
 * 0000000140343701: mov     rax, [rbx+1F8h]
 * 0000000140343708: call    KeGuardDispatchICall
 * 000000014034370D: xor     r10d, r10d
 * 0000000140343710: test    rax, rax
 * 0000000140343713: jz      loc_140343E0C
 * 0000000140343719: mov     rax, [rbx+1F0h]
 * 0000000140343720: mov     rcx, [r14]
 * 0000000140343723: call    KeGuardDispatchICall
 * 0000000140343728: xor     r10d, r10d
 * 000000014034372B: test    rax, rax
 * 000000014034372E: jz      loc_140343E0C
 * 0000000140343734: mov     eax, [rax+50h]
 * 0000000140343737: mov     [rbx+954h], eax
 * 000000014034373D: mov     dword ptr [rbx+934h], 8
 * 0000000140343747: mov     r15, [rbx+5F0h]
 * 000000014034374E: test    r15, r15
 * 0000000140343751: jz      loc_140343959
 * 0000000140343757: cmp     [r15], r10
 * 000000014034375A: jz      loc_140343959
 * 0000000140343760: mov     r9d, [rbx+820h]
 * 0000000140343767: mov     r12d, 20h ; ' '
 * 000000014034376D: mov     r13d, [rbx+7CCh]
 * 0000000140343774: cmp     r9d, 7
 * 0000000140343778: mov     r8d, [rbx+904h]
 * 000000014034377F: cmovnz  r12d, r10d
 * 0000000140343783: mov     [rbp+20F0h+var_2094], r9d
 * 0000000140343787: lea     eax, [r13+30h]
 * 000000014034378B: cmp     eax, [rbx+9FCh]
 * 0000000140343791: jbe     loc_140343882
 * 0000000140343797: mov     edx, eax
 * 0000000140343799: mov     rcx, rbx
 * 000000014034379C: call    sub_1403495B4
 * 00000001403437A1: xor     r10d, r10d
 * 00000001403437A4: mov     r14, rax
 * 00000001403437A7: test    rax, rax
 * 00000001403437AA: jz      loc_14034387A
 * 00000001403437B0: mov     ecx, [rbx+970h]
 * 00000001403437B6: test    cl, 4
 * 00000001403437B9: jnz     loc_14034386C
 * 00000001403437BF: mov     eax, [rbx+7CCh]
 * 00000001403437C5: lea     r9d, [r10+1]
 * 00000001403437C9: mov     r8, [rbx+7B0h]
 * 00000001403437D0: and     ecx, 20000000h
 * 00000001403437D6: neg     ecx
 * 00000001403437D8: sbb     edx, edx
 * 00000001403437DA: and     edx, [rbx+904h]
 * 00000001403437E0: cmp     eax, 8
 * 00000001403437E3: jb      short loc_1403437FA
 * 00000001403437E5: mov     ecx, eax
 * 00000001403437E7: shr     rcx, 3
 * 00000001403437EB: mov     [rbx], r10
 * 00000001403437EE: add     eax, 0FFFFFFF8h
 * 00000001403437F1: add     rbx, 8
 * 00000001403437F5: sub     rcx, r9
 * 00000001403437F8: jnz     short loc_1403437EB
 * 00000001403437FA: test    eax, eax
 * 00000001403437FC: jz      short loc_14034380D
 * 00000001403437FE: mov     ecx, 0FFFFFFFFh
 * 0000000140343803: mov     [rbx], r10b
 * 0000000140343806: add     rbx, r9
 * 0000000140343809: add     eax, ecx
 * 000000014034380B: jnz     short loc_140343803
 * 000000014034380D: mov     ebx, [r14+904h]
 * 0000000140343814: mov     [r14+904h], edx
 * 000000014034381B: cmp     edx, 3
 * 000000014034381E: jz      short loc_140343853
 * 0000000140343820: test    dword ptr [r14+970h], 10000000h
 * 000000014034382B: mov     ecx, r10d
 * 000000014034382E: cmovz   ecx, edx
 * 0000000140343831: test    ecx, ecx
 * 0000000140343833: jz      short loc_14034384A
 * 0000000140343835: mov     rax, [r14+220h]
 * 000000014034383C: lea     rcx, [r8-8]
 * 0000000140343840: mov     rdx, [rcx]
 * 0000000140343843: call    KeGuardDispatchICall
 * 0000000140343848: jmp     short loc_140343862
 * 000000014034384A: mov     rax, [r14+0F8h]
 * 0000000140343851: jmp     short loc_14034385A
 * 0000000140343853: mov     rax, [r14+360h]
 * 000000014034385A: mov     rcx, r8
 * 000000014034385D: call    KeGuardDispatchICall
 * 0000000140343862: mov     [r14+904h], ebx
 * 0000000140343869: xor     r10d, r10d
 * 000000014034386C: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140343874: mov     r9d, [rbp+20F0h+var_2094]
 * 0000000140343878: jmp     short loc_14034388B
 * 000000014034387A: mov     rbx, rsi
 * 000000014034387D: jmp     loc_1403416E7
 * 0000000140343882: mov     r14, rbx
 * 0000000140343885: mov     [rbx+7CCh], eax
 * 000000014034388B: mov     r8d, 1
 * 0000000140343891: lea     rbx, [r14+r13]
 * 0000000140343895: add     [r14+7F4h], r8d
 * 000000014034389C: mov     rax, rbx
 * 000000014034389F: mov     [rbp+20F0h+var_1960], rbx
 * 00000001403438A6: lea     ecx, [r8+2Fh]
 * 00000001403438AA: lea     edx, [rcx-2Ah]
 * 00000001403438AD: mov     [rax], r10
 * 00000001403438B0: add     ecx, 0FFFFFFF8h
 * 00000001403438B3: add     rax, 8
 * 00000001403438B7: sub     rdx, r8
 * 00000001403438BA: jnz     short loc_1403438AD
 * 00000001403438BC: test    ecx, ecx
 * 00000001403438BE: jz      short loc_1403438CF
 * 00000001403438C0: mov     edx, 0FFFFFFFFh
 * 00000001403438C5: mov     [rax], r10b
 * 00000001403438C8: add     rax, r8
 * 00000001403438CB: add     ecx, edx
 * 00000001403438CD: jnz     short loc_1403438C5
 * 00000001403438CF: mov     [rbx], r12d
 * 00000001403438D2: mov     [rbx+8], r15
 * 00000001403438D6: cmp     r9d, 7
 * 00000001403438DA: jnz     short loc_1403438F4
 * 00000001403438DC: lea     r9, [rbx+18h]
 * 00000001403438E0: mov     r8d, 8
 * 00000001403438E6: mov     rdx, r15
 * 00000001403438E9: mov     rcx, r14
 * 00000001403438EC: call    sub_1401ADA3C
 * 00000001403438F1: xor     r10d, r10d
 * 00000001403438F4: mov     dword ptr [rbx+10h], 8
 * 00000001403438FB: lea     r8, [r15+8]
 * 00000001403438FF: add     dword ptr [r14+810h], 8
 * 0000000140343907: mov     rdx, r15
 * 000000014034390A: mov     ecx, [r14+7FCh]
 * 0000000140343911: mov     rax, [r14+800h]
 * 0000000140343918: cmp     r15, r8
 * 000000014034391B: jnb     short loc_14034392E
 * 000000014034391D: mov     r9d, 40h ; '@'
 * 0000000140343923: prefetchnta byte ptr [rdx]
 * 0000000140343926: add     rdx, r9
 * 0000000140343929: cmp     rdx, r8
 * 000000014034392C: jb      short loc_140343923
 * 000000014034392E: xor     rax, [r15]
 * 0000000140343931: rol     rax, cl
 * 0000000140343934: mov     rcx, rax
 * 0000000140343937: jmp     short loc_14034393B
 * 0000000140343939: xor     eax, ecx
 * 000000014034393B: shr     rcx, 1Fh
 * 000000014034393F: test    rcx, rcx
 * 0000000140343942: jnz     short loc_140343939
 * 0000000140343944: btr     eax, 1Fh
 * 0000000140343948: mov     rsi, r14
 * 000000014034394B: mov     [rbx+14h], eax
 * 000000014034394E: mov     rbx, r14
 * 0000000140343951: add     dword ptr [r14+810h], 8
 * 0000000140343959: mov     dword ptr [rbx+934h], 9
 * 0000000140343963: mov     r15, [rbx+5F0h]
 * 000000014034396A: test    r15, r15
 * 000000014034396D: jz      loc_140343DF3
 * 0000000140343973: mov     r15, [r15]
 * 0000000140343976: test    r15, r15
 * 0000000140343979: jz      loc_140343DF3
 * 000000014034397F: lock or [rsp+10F0h+var_10F0], r10d
 * 0000000140343984: mov     r12d, [r15+7CCh]
 * 000000014034398B: mov     r9, r15
 * 000000014034398E: mov     r10d, [r15+7FCh]
 * 0000000140343995: mov     rax, r15
 * 0000000140343998: mov     r14, [r15+800h]
 * 000000014034399F: lea     rcx, [r15+r12]
 * 00000001403439A3: cmp     r15, rcx
 * 00000001403439A6: jnb     short loc_1403439B8
 * 00000001403439A8: mov     edx, 40h ; '@'
 * 00000001403439AD: prefetchnta byte ptr [rax]
 * 00000001403439B0: add     rax, rdx
 * 00000001403439B3: cmp     rax, rcx
 * 00000001403439B6: jb      short loc_1403439AD
 * 00000001403439B8: mov     r11d, r12d
 * 00000001403439BB: xor     r13d, r13d
 * 00000001403439BE: shr     r11d, 7
 * 00000001403439C2: mov     r8, r14
 * 00000001403439C5: test    r11d, r11d
 * 00000001403439C8: jz      short loc_140343A40
 * 00000001403439CA: mov     rdi, 7010008004002001h
 * 00000001403439D4: mov     edx, 8
 * 00000001403439D9: lea     r13d, [rdx-7]
 * 00000001403439DD: mov     rax, [r9]
 * 00000001403439E0: mov     ecx, r10d
 * 00000001403439E3: xor     rax, r8
 * 00000001403439E6: mov     r8, [r9+8]
 * 00000001403439EA: rol     rax, cl
 * 00000001403439ED: add     r9, 10h
 * 00000001403439F1: xor     r8, rax
 * 00000001403439F4: rol     r8, cl
 * 00000001403439F7: sub     rdx, r13
 * 00000001403439FA: jnz     short loc_1403439DD
 * 00000001403439FC: mov     rcx, r9
 * 00000001403439FF: sub     rcx, r15
 * 0000000140343A02: xor     rcx, r14
 * 0000000140343A05: mov     rax, rcx
 * 0000000140343A08: rol     rax, 11h
 * 0000000140343A0C: xor     rcx, rax
 * 0000000140343A0F: mov     rax, rdi
 * 0000000140343A12: mul     rcx
 * 0000000140343A15: xor     eax, edx
 * 0000000140343A17: mov     [rbp+20F0h+var_1958], rdx
 * 0000000140343A1E: xor     r10d, eax
 * 0000000140343A21: mov     rax, r13
 * 0000000140343A24: and     r10d, 3Fh
 * 0000000140343A28: cmovz   r10d, eax
 * 0000000140343A2C: mov     eax, 0FFFFFFFFh
 * 0000000140343A31: add     r11d, eax
 * 0000000140343A34: jnz     short loc_1403439D4
 * 0000000140343A36: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140343A3D: xor     r13d, r13d
 * 0000000140343A40: mov     edx, r12d
 * 0000000140343A43: mov     r14d, 1
 * 0000000140343A49: and     edx, 7Fh
 * 0000000140343A4C: cmp     edx, 8
 * 0000000140343A4F: jb      short loc_140343A6D
 * 0000000140343A51: mov     r11d, edx
 * 0000000140343A54: shr     r11, 3
 * 0000000140343A58: xor     r8, [r9]
 * 0000000140343A5B: mov     ecx, r10d
 * 0000000140343A5E: rol     r8, cl
 * 0000000140343A61: add     r9, 8
 * 0000000140343A65: add     edx, 0FFFFFFF8h
 * 0000000140343A68: sub     r11, r14
 * 0000000140343A6B: jnz     short loc_140343A58
 * 0000000140343A6D: test    edx, edx
 * 0000000140343A6F: jz      short loc_140343A91
 * 0000000140343A71: mov     edi, 0FFFFFFFFh
 * 0000000140343A76: movzx   eax, byte ptr [r9]
 * 0000000140343A7A: mov     ecx, r10d
 * 0000000140343A7D: xor     r8, rax
 * 0000000140343A80: add     r9, r14
 * 0000000140343A83: rol     r8, cl
 * 0000000140343A86: add     edx, edi
 * 0000000140343A88: jnz     short loc_140343A76
 * 0000000140343A8A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140343A91: mov     rax, [rbx+5F8h]
 * 0000000140343A98: cmp     r8, [rax]
 * 0000000140343A9B: jz      loc_140343B23
 * 0000000140343AA1: mov     rax, [rbx+580h]
 * 0000000140343AA8: xor     r10d, r10d
 * 0000000140343AAB: mov     [rax], r15
 * 0000000140343AAE: mov     [rax+10h], r12d
 * 0000000140343AB2: mov     rax, [rbx+5F8h]
 * 0000000140343AB9: mov     rcx, [rax]
 * 0000000140343ABC: mov     eax, [rbx+8D8h]
 * 0000000140343AC2: test    eax, eax
 * 0000000140343AC4: jnz     loc_1403416E7
 * 0000000140343ACA: mov     rax, [rbx+580h]
 * 0000000140343AD1: xor     rcx, r8
 * 0000000140343AD4: mov     [rax+18h], rcx
 * 0000000140343AD8: mov     eax, [rbx+8D8h]
 * 0000000140343ADE: test    eax, eax
 * 0000000140343AE0: jnz     loc_1403416E7
 * 0000000140343AE6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140343AF0: lea     r15d, [r10+1]
 * 0000000140343AF4: add     rax, rbx
 * 0000000140343AF7: mov     [rbx+8E0h], rax
 * 0000000140343AFE: mov     [rbx+8E8h], r10
 * 0000000140343B05: mov     qword ptr [rbx+8F0h], 111h
 * 0000000140343B10: mov     [rbx+8F8h], r8
 * 0000000140343B17: mov     [rbx+8D8h], r15d
 * 0000000140343B1E: jmp     loc_1403416ED
 * 0000000140343B23: mov     r9d, [rbx+820h]
 * 0000000140343B2A: mov     r13d, 20h ; ' '
 * 0000000140343B30: mov     eax, [rbx+7CCh]
 * 0000000140343B36: cmp     r9d, 7
 * 0000000140343B3A: mov     r8d, [rbx+904h]
 * 0000000140343B41: mov     [rbp+20F0h+var_20C0], eax
 * 0000000140343B44: lea     r10d, [r13-20h]
 * 0000000140343B48: mov     [rbp+20F0h+var_2094], r9d
 * 0000000140343B4C: cmovnz  r13d, r10d
 * 0000000140343B50: add     eax, 30h ; '0'
 * 0000000140343B53: cmp     eax, [rbx+9FCh]
 * 0000000140343B59: jbe     loc_140343C42
 * 0000000140343B5F: mov     edx, eax
 * 0000000140343B61: mov     rcx, rbx
 * 0000000140343B64: call    sub_1403495B4
 * 0000000140343B69: xor     r10d, r10d
 * 0000000140343B6C: mov     r14, rax
 * 0000000140343B6F: test    rax, rax
 * 0000000140343B72: jz      loc_14034387A
 * 0000000140343B78: mov     ecx, [rbx+970h]
 * 0000000140343B7E: test    cl, 4
 * 0000000140343B81: jnz     loc_140343C34
 * 0000000140343B87: mov     eax, [rbx+7CCh]
 * 0000000140343B8D: lea     r9d, [r10+1]
 * 0000000140343B91: mov     r8, [rbx+7B0h]
 * 0000000140343B98: and     ecx, 20000000h
 * 0000000140343B9E: neg     ecx
 * 0000000140343BA0: sbb     edx, edx
 * 0000000140343BA2: and     edx, [rbx+904h]
 * 0000000140343BA8: cmp     eax, 8
 * 0000000140343BAB: jb      short loc_140343BC2
 * 0000000140343BAD: mov     ecx, eax
 * 0000000140343BAF: shr     rcx, 3
 * 0000000140343BB3: mov     [rbx], r10
 * 0000000140343BB6: add     eax, 0FFFFFFF8h
 * 0000000140343BB9: add     rbx, 8
 * 0000000140343BBD: sub     rcx, r9
 * 0000000140343BC0: jnz     short loc_140343BB3
 * 0000000140343BC2: test    eax, eax
 * 0000000140343BC4: jz      short loc_140343BD5
 * 0000000140343BC6: mov     ecx, 0FFFFFFFFh
 * 0000000140343BCB: mov     [rbx], r10b
 * 0000000140343BCE: add     rbx, r9
 * 0000000140343BD1: add     eax, ecx
 * 0000000140343BD3: jnz     short loc_140343BCB
 * 0000000140343BD5: mov     ebx, [r14+904h]
 * 0000000140343BDC: mov     [r14+904h], edx
 * 0000000140343BE3: cmp     edx, 3
 * 0000000140343BE6: jz      short loc_140343C1B
 * 0000000140343BE8: test    dword ptr [r14+970h], 10000000h
 * 0000000140343BF3: mov     ecx, r10d
 * 0000000140343BF6: cmovz   ecx, edx
 * 0000000140343BF9: test    ecx, ecx
 * 0000000140343BFB: jz      short loc_140343C12
 * 0000000140343BFD: mov     rax, [r14+220h]
 * 0000000140343C04: lea     rcx, [r8-8]
 * 0000000140343C08: mov     rdx, [rcx]
 * 0000000140343C0B: call    KeGuardDispatchICall
 * 0000000140343C10: jmp     short loc_140343C2A
 * 0000000140343C12: mov     rax, [r14+0F8h]
 * 0000000140343C19: jmp     short loc_140343C22
 * 0000000140343C1B: mov     rax, [r14+360h]
 * 0000000140343C22: mov     rcx, r8
 * 0000000140343C25: call    KeGuardDispatchICall
 * 0000000140343C2A: mov     [r14+904h], ebx
 * 0000000140343C31: xor     r10d, r10d
 * 0000000140343C34: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140343C3C: mov     r9d, [rbp+20F0h+var_2094]
 * 0000000140343C40: jmp     short loc_140343C4B
 * 0000000140343C42: mov     r14, rbx
 * 0000000140343C45: mov     [rbx+7CCh], eax
 * 0000000140343C4B: mov     ebx, [rbp+20F0h+var_20C0]
 * 0000000140343C4E: mov     r8d, 1
 * 0000000140343C54: add     [r14+7F4h], r8d
 * 0000000140343C5B: add     rbx, r14
 * 0000000140343C5E: mov     [rbp+20F0h+var_1950], rbx
 * 0000000140343C65: mov     rax, rbx
 * 0000000140343C68: lea     ecx, [r8+2Fh]
 * 0000000140343C6C: lea     edx, [rcx-2Ah]
 * 0000000140343C6F: mov     [rax], r10
 * 0000000140343C72: add     ecx, 0FFFFFFF8h
 * 0000000140343C75: add     rax, 8
 * 0000000140343C79: sub     rdx, r8
 * 0000000140343C7C: jnz     short loc_140343C6F
 * 0000000140343C7E: test    ecx, ecx
 * 0000000140343C80: jz      short loc_140343C91
 * 0000000140343C82: mov     edx, 0FFFFFFFFh
 * 0000000140343C87: mov     [rax], r10b
 * 0000000140343C8A: add     rax, r8
 * 0000000140343C8D: add     ecx, edx
 * 0000000140343C8F: jnz     short loc_140343C87
 * 0000000140343C91: mov     [rbx], r13d
 * 0000000140343C94: mov     [rbx+8], r15
 * 0000000140343C98: cmp     r9d, 7
 * 0000000140343C9C: jnz     short loc_140343CB5
 * 0000000140343C9E: test    r12d, r12d
 * 0000000140343CA1: jz      short loc_140343CB5
 * 0000000140343CA3: lea     r9, [rbx+18h]
 * 0000000140343CA7: mov     r8d, r12d
 * 0000000140343CAA: mov     rdx, r15
 * 0000000140343CAD: mov     rcx, r14
 * 0000000140343CB0: call    sub_1401ADA3C
 * 0000000140343CB5: mov     [rbx+10h], r12d
 * 0000000140343CB9: lea     rcx, [r15+r12]
 * 0000000140343CBD: add     [r14+810h], r12d
 * 0000000140343CC4: mov     r9, r15
 * 0000000140343CC7: mov     r10d, [r14+7FCh]
 * 0000000140343CCE: mov     rax, r15
 * 0000000140343CD1: mov     rsi, [r14+800h]
 * 0000000140343CD8: cmp     r15, rcx
 * 0000000140343CDB: jnb     short loc_140343CED
 * 0000000140343CDD: mov     edx, 40h ; '@'
 * 0000000140343CE2: prefetchnta byte ptr [rax]
 * 0000000140343CE5: add     rax, rdx
 * 0000000140343CE8: cmp     rax, rcx
 * 0000000140343CEB: jb      short loc_140343CE2
 * 0000000140343CED: mov     r11d, r12d
 * 0000000140343CF0: xor     r13d, r13d
 * 0000000140343CF3: shr     r11d, 7
 * 0000000140343CF7: mov     r8, rsi
 * 0000000140343CFA: test    r11d, r11d
 * 0000000140343CFD: jz      short loc_140343D75
 * 0000000140343CFF: mov     rdi, 7010008004002001h
 * 0000000140343D09: mov     edx, 8
 * 0000000140343D0E: lea     r13d, [rdx-7]
 * 0000000140343D12: mov     rax, [r9]
 * 0000000140343D15: mov     ecx, r10d
 * 0000000140343D18: xor     rax, r8
 * 0000000140343D1B: mov     r8, [r9+8]
 * 0000000140343D1F: rol     rax, cl
 * 0000000140343D22: add     r9, 10h
 * 0000000140343D26: xor     r8, rax
 * 0000000140343D29: rol     r8, cl
 * 0000000140343D2C: sub     rdx, r13
 * 0000000140343D2F: jnz     short loc_140343D12
 * 0000000140343D31: mov     rcx, r9
 * 0000000140343D34: sub     rcx, r15
 * 0000000140343D37: xor     rcx, rsi
 * 0000000140343D3A: mov     rax, rcx
 * 0000000140343D3D: rol     rax, 11h
 * 0000000140343D41: xor     rcx, rax
 * 0000000140343D44: mov     rax, rdi
 * 0000000140343D47: mul     rcx
 * 0000000140343D4A: xor     eax, edx
 * 0000000140343D4C: mov     [rbp+20F0h+var_1948], rdx
 * 0000000140343D53: xor     r10d, eax
 * 0000000140343D56: mov     rax, r13
 * 0000000140343D59: and     r10d, 3Fh
 * 0000000140343D5D: cmovz   r10d, eax
 * 0000000140343D61: mov     eax, 0FFFFFFFFh
 * 0000000140343D66: add     r11d, eax
 * 0000000140343D69: jnz     short loc_140343D09
 * 0000000140343D6B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140343D72: xor     r13d, r13d
 * 0000000140343D75: mov     edx, r12d
 * 0000000140343D78: mov     esi, 1
 * 0000000140343D7D: and     edx, 7Fh
 * 0000000140343D80: cmp     edx, 8
 * 0000000140343D83: jb      short loc_140343DA1
 * 0000000140343D85: mov     r11d, edx
 * 0000000140343D88: shr     r11, 3
 * 0000000140343D8C: xor     r8, [r9]
 * 0000000140343D8F: mov     ecx, r10d
 * 0000000140343D92: rol     r8, cl
 * 0000000140343D95: add     r9, 8
 * 0000000140343D99: add     edx, 0FFFFFFF8h
 * 0000000140343D9C: sub     r11, rsi
 * 0000000140343D9F: jnz     short loc_140343D8C
 * 0000000140343DA1: test    edx, edx
 * 0000000140343DA3: jz      short loc_140343DC5
 * 0000000140343DA5: mov     edi, 0FFFFFFFFh
 * 0000000140343DAA: movzx   eax, byte ptr [r9]
 * 0000000140343DAE: mov     ecx, r10d
 * 0000000140343DB1: xor     r8, rax
 * 0000000140343DB4: add     r9, rsi
 * 0000000140343DB7: rol     r8, cl
 * 0000000140343DBA: add     edx, edi
 * 0000000140343DBC: jnz     short loc_140343DAA
 * 0000000140343DBE: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140343DC5: mov     rax, r8
 * 0000000140343DC8: shr     rax, 1Fh
 * 0000000140343DCC: xor     r10d, r10d
 * 0000000140343DCF: jmp     short loc_140343DD8
 * 0000000140343DD1: xor     r8d, eax
 * 0000000140343DD4: shr     rax, 1Fh
 * 0000000140343DD8: test    rax, rax
 * 0000000140343DDB: jnz     short loc_140343DD1
 * 0000000140343DDD: btr     r8d, 1Fh
 * 0000000140343DE2: mov     rsi, r14
 * 0000000140343DE5: mov     [rbx+14h], r8d
 * 0000000140343DE9: mov     rbx, r14
 * 0000000140343DEC: add     [r14+810h], r12d
 * 0000000140343DF3: mov     dword ptr [rbx+934h], 0Ah
 * 0000000140343DFD: mov     dword ptr [rbx+934h], 0Bh
 * 0000000140343E07: jmp     loc_1403416E7
 * 0000000140343E0C: mov     r15d, 1
 * 0000000140343E12: mov     r12d, 0FFFFFFFFh
 * 0000000140343E18: cmp     [rbx+8D8h], r10d
 * 0000000140343E1F: jnz     loc_1403416F3
 * 0000000140343E25: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140343E2F: add     rax, rbx
 * 0000000140343E32: mov     [rbx+8E0h], rax
 * 0000000140343E39: mov     [rbx+8E8h], r10
 * 0000000140343E40: mov     qword ptr [rbx+8F0h], 105h
 * 0000000140343E4B: mov     qword ptr [rbx+8F8h], 0FFFFFFFFC000007Bh
 * 0000000140343E56: mov     [rbx+8D8h], r15d
 * 0000000140343E5D: jmp     loc_1403416F3
 * 0000000140343E62: mov     r15d, 1
 * 0000000140343E68: jmp     loc_1403416F3
 * 0000000140343E6D: mov     [rbx+950h], r12d
 * 0000000140343E74: test    r14, r14
 * 0000000140343E77: jz      loc_1403440C8
 * 0000000140343E7D: mov     rax, [rbx+280h]
 * 0000000140343E84: mov     rcx, r14
 * 0000000140343E87: call    KeGuardDispatchICall
 * 0000000140343E8C: jmp     loc_1403440C8
 * 0000000140343E91: mov     eax, [rsi+818h]
 * 0000000140343E97: test    r15b, al
 * 0000000140343E9A: jz      loc_1403440C8
 * 0000000140343EA0: mov     ecx, [rsi+950h]
 * 0000000140343EA6: mov     r12d, 0FFFFFFFFh
 * 0000000140343EAC: cmp     ecx, r12d
 * 0000000140343EAF: jz      short loc_140343EC2
 * 0000000140343EB1: mov     rax, [rsi+270h]
 * 0000000140343EB8: call    KeGuardDispatchICall
 * 0000000140343EBD: mov     rbx, rax
 * 0000000140343EC0: jmp     short loc_140343EC5
 * 0000000140343EC2: mov     rbx, r10
 * 0000000140343EC5: test    rbx, rbx
 * 0000000140343EC8: jnz     short loc_140343EE4
 * 0000000140343ECA: mov     rax, [rsi+278h]
 * 0000000140343ED1: xor     ecx, ecx
 * 0000000140343ED3: call    KeGuardDispatchICall
 * 0000000140343ED8: mov     rbx, rax
 * 0000000140343EDB: test    rax, rax
 * 0000000140343EDE: jz      loc_1403440C8
 * 0000000140343EE4: mov     rax, [rsi+288h]
 * 0000000140343EEB: lea     rdx, [rbp+20F0h+var_1B40]
 * 0000000140343EF2: mov     rcx, rbx
 * 0000000140343EF5: call    KeGuardDispatchICall
 * 0000000140343EFA: mov     r14d, eax
 * 0000000140343EFD: test    eax, eax
 * 0000000140343EFF: jns     short loc_140343F15
 * 0000000140343F01: mov     rax, [rsi+280h]
 * 0000000140343F08: mov     rcx, rbx
 * 0000000140343F0B: call    KeGuardDispatchICall
 * 0000000140343F10: xor     r10d, r10d
 * 0000000140343F13: jmp     short loc_140343F7D
 * 0000000140343F15: mov     [rsi+960h], rbx
 * 0000000140343F1C: mov     rax, [rsi+2B0h]
 * 0000000140343F23: call    KeGuardDispatchICall
 * 0000000140343F28: mov     rbx, rax
 * 0000000140343F2B: mov     rax, [rsi+2D0h]
 * 0000000140343F32: mov     rcx, rbx
 * 0000000140343F35: call    KeGuardDispatchICall
 * 0000000140343F3A: xor     r10d, r10d
 * 0000000140343F3D: mov     rdx, rax
 * 0000000140343F40: test    rax, rax
 * 0000000140343F43: jnz     short loc_140343F4A
 * 0000000140343F45: lea     ecx, [rax+4]
 * 0000000140343F48: jmp     short loc_140343F5F
 * 0000000140343F4A: mov     rax, [rsi+2E0h]
 * 0000000140343F51: mov     rcx, rbx
 * 0000000140343F54: call    KeGuardDispatchICall
 * 0000000140343F59: xor     r10d, r10d
 * 0000000140343F5C: mov     ecx, r10d
 * 0000000140343F5F: mov     eax, [rsi+974h]
 * 0000000140343F65: mov     r14d, r10d
 * 0000000140343F68: and     eax, 0FFFFFFFBh
 * 0000000140343F6B: or      eax, ecx
 * 0000000140343F6D: mov     [rsi+974h], eax
 * 0000000140343F73: add     dword ptr [rsi+810h], 10000h
 * 0000000140343F7D: test    r14d, r14d
 * 0000000140343F80: js      loc_1403440C8
 * 0000000140343F86: mov     rax, [rsi+940h]
 * 0000000140343F8D: mov     rcx, [rax]
 * 0000000140343F90: cmp     rcx, [rsi+948h]
 * 0000000140343F97: jnz     loc_140344027
 * 0000000140343F9D: mov     rax, [rsi+560h]
 * 0000000140343FA4: cmp     [rax+30h], r10d
 * 0000000140343FA8: jz      short loc_140344027
 * 0000000140343FAA: lock or [rsp+10F0h+var_10F0], r10d
 * 0000000140343FAF: mov     rax, [rsi+940h]
 * 0000000140343FB6: mov     rcx, [rax]
 * 0000000140343FB9: cmp     rcx, [rsi+948h]
 * 0000000140343FC0: jnz     short loc_140344027
 * 0000000140343FC2: mov     rax, [rsi+940h]
 * 0000000140343FC9: mov     rdx, [rax]
 * 0000000140343FCC: mov     eax, [rsi+8D8h]
 * 0000000140343FD2: mov     rcx, [rsi+948h]
 * 0000000140343FD9: test    eax, eax
 * 0000000140343FDB: jnz     short loc_140344027
 * 0000000140343FDD: mov     rax, [rsi+580h]
 * 0000000140343FE4: xor     rcx, rdx
 * 0000000140343FE7: mov     [rax+18h], rcx
 * 0000000140343FEB: mov     eax, [rsi+8D8h]
 * 0000000140343FF1: mov     rcx, [rsi+948h]
 * 0000000140343FF8: test    eax, eax
 * 0000000140343FFA: jnz     short loc_140344027
 * 0000000140343FFC: lea     rax, [rsi+r13]
 * 0000000140344000: mov     [rsi+8E0h], rax
 * 0000000140344007: mov     [rsi+8E8h], r10
 * 000000014034400E: mov     qword ptr [rsi+8F0h], 103h
 * 0000000140344019: mov     [rsi+8F8h], rcx
 * 0000000140344020: mov     [rsi+8D8h], r15d
 * 0000000140344027: mov     ecx, 8000h
 * 000000014034402C: test    [rsi+970h], ecx
 * 0000000140344032: jnz     short loc_140344041
 * 0000000140344034: cmp     [rsi+8D8h], r10d
 * 000000014034403B: jnz     loc_1403440C8
 * 0000000140344041: mov     rbx, [rsi+960h]
 * 0000000140344048: lea     rdx, [rbp+20F0h+var_1B40]
 * 000000014034404F: mov     [rsi+960h], r10
 * 0000000140344056: mov     rcx, rbx
 * 0000000140344059: mov     rax, [rsi+290h]
 * 0000000140344060: call    KeGuardDispatchICall
 * 0000000140344065: mov     eax, [rsi+970h]
 * 000000014034406B: test    r15b, al
 * 000000014034406E: jz      short loc_1403440AE
 * 0000000140344070: and     eax, 0FFFFFFFEh
 * 0000000140344073: mov     rcx, rbx
 * 0000000140344076: mov     [rsi+970h], eax
 * 000000014034407C: mov     rax, [rsi+278h]
 * 0000000140344083: call    KeGuardDispatchICall
 * 0000000140344088: mov     rbx, rax
 * 000000014034408B: test    rax, rax
 * 000000014034408E: jz      short loc_1403440A7
 * 0000000140344090: mov     rax, [rsi+298h]
 * 0000000140344097: mov     rcx, rbx
 * 000000014034409A: call    KeGuardDispatchICall
 * 000000014034409F: mov     [rsi+950h], eax
 * 00000001403440A5: jmp     short loc_1403440AE
 * 00000001403440A7: mov     [rsi+950h], r12d
 * 00000001403440AE: test    rbx, rbx
 * 00000001403440B1: jz      short loc_1403440C8
 * 00000001403440B3: mov     rax, [rsi+280h]
 * 00000001403440BA: mov     rcx, rbx
 * 00000001403440BD: jmp     loc_140343E87
 * 00000001403440C2: mov     r15d, 1
 * 00000001403440C8: mov     [rbp+20F0h+var_20E0], rsi
 * 00000001403440CC: test    dword ptr [rsi+970h], 2000000h
 * 00000001403440D6: jz      short loc_14034414C
 * 00000001403440D8: mov     rbx, [rsi+978h]
 * 00000001403440DF: mov     rax, [rsi+388h]
 * 00000001403440E6: mov     rcx, rbx
 * 00000001403440E9: call    KeGuardDispatchICall
 * 00000001403440EE: xor     ecx, ecx
 * 00000001403440F0: test    eax, eax
 * 00000001403440F2: jz      short loc_140344130
 * 00000001403440F4: cmp     [rsi+8D8h], ecx
 * 00000001403440FA: jnz     short loc_140344130
 * 00000001403440FC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140344106: add     rax, rsi
 * 0000000140344109: mov     [rsi+8E0h], rax
 * 0000000140344110: mov     [rsi+8E8h], rcx
 * 0000000140344117: mov     qword ptr [rsi+8F0h], 110h
 * 0000000140344122: mov     [rsi+8F8h], rcx
 * 0000000140344129: mov     [rsi+8D8h], r15d
 * 0000000140344130: mov     rax, [rsi+380h]
 * 0000000140344137: lea     rdx, sub_14034B750
 * 000000014034413E: xor     r9d, r9d
 * 0000000140344141: mov     r8, rsi
 * 0000000140344144: mov     rcx, rbx
 * 0000000140344147: call    KeGuardDispatchICall
 * 000000014034414C: test    dword ptr [rsi+974h], 100h
 * 0000000140344156: jz      short loc_140344167
 * 0000000140344158: mov     rax, [rbp+20F0h+var_2038]
 * 000000014034415F: mov     [rsp+10F8h], rax
 * 0000000140344167: mov     r9d, [rsi+970h]
 * 000000014034416E: xor     r11d, r11d
 * 0000000140344171: mov     r8d, r9d
 * 0000000140344174: bt      r9d, 12h
 * 0000000140344179: jnb     loc_14034420D
 * 000000014034417F: rdtsc
 * 0000000140344181: shl     rdx, 20h
 * 0000000140344185: or      rax, rdx
 * 0000000140344188: mov     rcx, rax
 * 000000014034418B: ror     rax, 3
 * 000000014034418F: xor     rcx, rax
 * 0000000140344192: mov     rax, 7010008004002001h
 * 000000014034419C: mul     rcx
 * 000000014034419F: mov     rcx, rdx
 * 00000001403441A2: mov     [rbp+20F0h+var_1940], rdx
 * 00000001403441A9: xor     rcx, rax
 * 00000001403441AC: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001403441B6: mul     rcx
 * 00000001403441B9: shr     rdx, 3
 * 00000001403441BD: lea     rax, [rdx+rdx*4]
 * 00000001403441C1: add     rax, rax
 * 00000001403441C4: sub     rcx, rax
 * 00000001403441C7: lea     eax, [r11+2]
 * 00000001403441CB: cmp     rcx, rax
 * 00000001403441CE: jnb     short loc_14034420D
 * 00000001403441D0: cmp     [rsi+8D8h], r11d
 * 00000001403441D7: jnz     short loc_14034420D
 * 00000001403441D9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403441E3: add     rax, rsi
 * 00000001403441E6: mov     [rsi+8E0h], rax
 * 00000001403441ED: mov     [rsi+8E8h], r11
 * 00000001403441F4: mov     qword ptr [rsi+8F0h], 108h
 * 00000001403441FF: mov     [rsi+8F8h], r11
 * 0000000140344206: mov     [rsi+8D8h], r15d
 * 000000014034420D: mov     r10d, 8000h
 * 0000000140344213: bt      r8d, 1Eh
 * 0000000140344218: jb      short loc_14034428A
 * 000000014034421A: test    r10d, r8d
 * 000000014034421D: jnz     short loc_140344228
 * 000000014034421F: cmp     [rsi+8D8h], r11d
 * 0000000140344226: jnz     short loc_14034428A
 * 0000000140344228: mov     rcx, [rsp+10F0h+arg_0]
 * 0000000140344230: test    [rcx+970h], r10d
 * 0000000140344237: jnz     short loc_14034428A
 * 0000000140344239: add     rcx, 8D8h
 * 0000000140344240: cmp     [rcx], r11d
 * 0000000140344243: jz      short loc_14034428A
 * 0000000140344245: mov     r8d, 28h ; '('
 * 000000014034424B: lea     rdx, [rsi+8D8h]
 * 0000000140344252: lea     r9d, [r8-23h]
 * 0000000140344256: mov     rax, [rdx]
 * 0000000140344259: add     r8d, 0FFFFFFF8h
 * 000000014034425D: mov     [rcx], rax
 * 0000000140344260: add     rdx, 8
 * 0000000140344264: add     rcx, 8
 * 0000000140344268: sub     r9, r15
 * 000000014034426B: jnz     short loc_140344256
 * 000000014034426D: test    r8d, r8d
 * 0000000140344270: jz      short loc_14034428A
 * 0000000140344272: mov     r11d, 0FFFFFFFFh
 * 0000000140344278: mov     al, [rdx]
 * 000000014034427A: add     rdx, r15
 * 000000014034427D: mov     [rcx], al
 * 000000014034427F: add     rcx, r15
 * 0000000140344282: add     r8d, r11d
 * 0000000140344285: jnz     short loc_140344278
 * 0000000140344287: xor     r11d, r11d
 * 000000014034428A: test    [rsi+970h], r10d
 * 0000000140344291: jnz     short loc_1403442A0
 * 0000000140344293: cmp     [rsi+8D8h], r11d
 * 000000014034429A: jnz     loc_140344E44
 * 00000001403442A0: mov     eax, [rsi+0A08h]
 * 00000001403442A6: test    eax, eax
 * 00000001403442A8: jz      loc_140344E44
 * 00000001403442AE: lea     r14, [rsi+rax]
 * 00000001403442B2: xor     r13d, r13d
 * 00000001403442B5: mov     r11, [r14+8]
 * 00000001403442B9: mov     [rbp+20F0h+var_20B0], r14
 * 00000001403442BD: test    r11, r11
 * 00000001403442C0: jz      loc_140344581
 * 00000001403442C6: mov     r9d, [r14+10h]
 * 00000001403442CA: mov     r8, r11
 * 00000001403442CD: add     [rsi+810h], r9d
 * 00000001403442D4: mov     rax, r11
 * 00000001403442D7: mov     r10d, [rsi+7FCh]
 * 00000001403442DE: mov     r12, [rsi+800h]
 * 00000001403442E5: lea     rcx, [r11+r9]
 * 00000001403442E9: cmp     r11, rcx
 * 00000001403442EC: jnb     short loc_1403442FD
 * 00000001403442EE: lea     edx, [r13+40h]
 * 00000001403442F2: prefetchnta byte ptr [rax]
 * 00000001403442F5: add     rax, rdx
 * 00000001403442F8: cmp     rax, rcx
 * 00000001403442FB: jb      short loc_1403442F2
 * 00000001403442FD: mov     r15d, r9d
 * 0000000140344300: mov     rbx, r12
 * 0000000140344303: shr     r15d, 7
 * 0000000140344307: mov     edx, 1
 * 000000014034430C: test    r15d, r15d
 * 000000014034430F: jz      short loc_140344380
 * 0000000140344311: mov     rdi, 7010008004002001h
 * 000000014034431B: mov     r13d, 0FFFFFFFFh
 * 0000000140344321: mov     eax, 8
 * 0000000140344326: xor     rbx, [r8]
 * 0000000140344329: mov     ecx, r10d
 * 000000014034432C: rol     rbx, cl
 * 000000014034432F: xor     rbx, [r8+8]
 * 0000000140344333: add     r8, 10h
 * 0000000140344337: rol     rbx, cl
 * 000000014034433A: sub     rax, rdx
 * 000000014034433D: jnz     short loc_140344326
 * 000000014034433F: mov     rcx, r8
 * 0000000140344342: sub     rcx, r11
 * 0000000140344345: xor     rcx, r12
 * 0000000140344348: mov     rax, rcx
 * 000000014034434B: rol     rax, 11h
 * 000000014034434F: xor     rcx, rax
 * 0000000140344352: mov     rax, rdi
 * 0000000140344355: mul     rcx
 * 0000000140344358: xor     eax, edx
 * 000000014034435A: mov     [rbp+20F0h+var_1938], rdx
 * 0000000140344361: xor     r10d, eax
 * 0000000140344364: mov     edx, 1
 * 0000000140344369: and     r10d, 3Fh
 * 000000014034436D: cmovz   r10d, edx
 * 0000000140344371: add     r15d, r13d
 * 0000000140344374: jnz     short loc_140344321
 * 0000000140344376: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034437D: xor     r13d, r13d
 * 0000000140344380: and     r9d, 7Fh
 * 0000000140344384: cmp     r9d, 8
 * 0000000140344388: jb      short loc_1403443A7
 * 000000014034438A: mov     eax, r9d
 * 000000014034438D: shr     rax, 3
 * 0000000140344391: xor     rbx, [r8]
 * 0000000140344394: mov     ecx, r10d
 * 0000000140344397: rol     rbx, cl
 * 000000014034439A: add     r8, 8
 * 000000014034439E: add     r9d, 0FFFFFFF8h
 * 00000001403443A2: sub     rax, rdx
 * 00000001403443A5: jnz     short loc_140344391
 * 00000001403443A7: test    r9d, r9d
 * 00000001403443AA: jz      short loc_1403443CA
 * 00000001403443AC: mov     r13d, 0FFFFFFFFh
 * 00000001403443B2: movzx   eax, byte ptr [r8]
 * 00000001403443B6: mov     ecx, r10d
 * 00000001403443B9: xor     rbx, rax
 * 00000001403443BC: add     r8, rdx
 * 00000001403443BF: rol     rbx, cl
 * 00000001403443C2: add     r9d, r13d
 * 00000001403443C5: jnz     short loc_1403443B2
 * 00000001403443C7: xor     r13d, r13d
 * 00000001403443CA: mov     rax, rbx
 * 00000001403443CD: jmp     short loc_1403443D1
 * 00000001403443CF: xor     ebx, eax
 * 00000001403443D1: shr     rax, 1Fh
 * 00000001403443D5: test    rax, rax
 * 00000001403443D8: jnz     short loc_1403443CF
 * 00000001403443DA: btr     ebx, 1Fh
 * 00000001403443DE: mov     r12d, r13d
 * 00000001403443E1: cmp     ebx, [r14+14h]
 * 00000001403443E5: jz      loc_140344547
 * 00000001403443EB: cmp     [r14], r13d
 * 00000001403443EE: jnz     short loc_1403443F8
 * 00000001403443F0: cmp     [r14+18h], r13d
 * 00000001403443F4: cmovnz  r12d, edx
 * 00000001403443F8: mov     ecx, [r14+10h]
 * 00000001403443FC: mov     rdx, [r14+8]
 * 0000000140344400: test    rcx, rcx
 * 0000000140344403: jz      loc_1403444D7
 * 0000000140344409: mov     eax, [rsi+974h]
 * 000000014034440F: mov     r8d, 40h ; '@'
 * 0000000140344415: test    r8b, al
 * 0000000140344418: jz      loc_1403444D7
 * 000000014034441E: mov     rax, cr8
 * 0000000140344422: mov     [rbp+20F0h+var_2038], rax
 * 0000000140344429: mov     r8d, 2
 * 000000014034442F: mov     cr8, r8
 * 0000000140344433: mov     r15, rdx
 * 0000000140344436: dec     rdx
 * 0000000140344439: add     rcx, rdx
 * 000000014034443C: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140344443: mov     edx, 0FFFh
 * 0000000140344448: or      rcx, rdx
 * 000000014034444B: mov     [rbp+20F0h+var_2070], rcx
 * 0000000140344452: lea     rcx, [r15-1]
 * 0000000140344456: mov     [rbp+20F0h+var_2088], rcx
 * 000000014034445A: movzx   r13d, al
 * 000000014034445E: mov     rax, [rsi+460h]
 * 0000000140344465: xor     edx, edx
 * 0000000140344467: mov     rcx, r15
 * 000000014034446A: call    KeGuardDispatchICall
 * 000000014034446F: cmp     eax, 0C000022Dh
 * 0000000140344474: jnz     short loc_1403444A3
 * 0000000140344476: test    r12d, r12d
 * 0000000140344479: jnz     short loc_1403444D0
 * 000000014034447B: mov     rax, [rbp+20F0h+var_2038]
 * 0000000140344482: lea     ecx, [r12+1]
 * 0000000140344487: cmp     al, cl
 * 0000000140344489: ja      short loc_1403444AE
 * 000000014034448B: movzx   r13d, al
 * 000000014034448F: mov     cr8, r13
 * 0000000140344493: mov     al, [r15]
 * 0000000140344496: mov     rax, cr8
 * 000000014034449A: lea     eax, [rcx+1]
 * 000000014034449D: mov     cr8, rax
 * 00000001403444A1: jmp     short loc_14034445E
 * 00000001403444A3: test    eax, eax
 * 00000001403444A5: js      short loc_1403444D0
 * 00000001403444A7: mov     rax, [rbp+20F0h+var_2038]
 * 00000001403444AE: mov     rcx, [rbp+20F0h+var_2088]
 * 00000001403444B2: mov     edx, 1000h
 * 00000001403444B7: add     rcx, rdx
 * 00000001403444BA: add     r15, rdx
 * 00000001403444BD: mov     [rbp+20F0h+var_2088], rcx
 * 00000001403444C1: cmp     rcx, [rbp+20F0h+var_2070]
 * 00000001403444C8: jnz     short loc_14034445A
 * 00000001403444CA: mov     cr8, r13
 * 00000001403444CE: jmp     short loc_140344547
 * 00000001403444D0: mov     cr8, r13
 * 00000001403444D4: xor     r13d, r13d
 * 00000001403444D7: mov     eax, [rsi+8D8h]
 * 00000001403444DD: mov     ecx, [r14+14h]
 * 00000001403444E1: test    eax, eax
 * 00000001403444E3: jnz     short loc_1403444FB
 * 00000001403444E5: mov     eax, ebx
 * 00000001403444E7: xor     rcx, rax
 * 00000001403444EA: mov     rax, [rsi+580h]
 * 00000001403444F1: mov     [rax+18h], rcx
 * 00000001403444F5: mov     eax, [rsi+8D8h]
 * 00000001403444FB: mov     rcx, [r14+8]
 * 00000001403444FF: test    eax, eax
 * 0000000140344501: jnz     short loc_140344547
 * 0000000140344503: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014034450D: add     rax, rsi
 * 0000000140344510: mov     [rsi+8E0h], rax
 * 0000000140344517: mov     rax, 0B3B74BDEE4453415h
 * 0000000140344521: add     rax, r14
 * 0000000140344524: mov     [rsi+8E8h], rax
 * 000000014034452B: movsxd  rax, dword ptr [r14]
 * 000000014034452E: mov     [rsi+8F0h], rax
 * 0000000140344535: mov     eax, 1
 * 000000014034453A: mov     [rsi+8F8h], rcx
 * 0000000140344541: mov     [rsi+8D8h], eax
 * 0000000140344547: mov     rcx, [r14+18h]
 * 000000014034454B: mov     rax, [rsi+0F8h]
 * 0000000140344552: call    KeGuardDispatchICall
 * 0000000140344557: xor     r11d, r11d
 * 000000014034455A: mov     [r14+8], r11
 * 000000014034455E: mov     [r14+10h], r11d
 * 0000000140344562: mov     rcx, [rsi+800h]
 * 0000000140344569: mov     rax, rcx
 * 000000014034456C: jmp     short loc_140344570
 * 000000014034456E: xor     ecx, eax
 * 0000000140344570: shr     rax, 1Fh
 * 0000000140344574: test    rax, rax
 * 0000000140344577: jnz     short loc_14034456E
 * 0000000140344579: btr     ecx, 1Fh
 * 000000014034457D: mov     [r14+14h], ecx
 * 0000000140344581: rdtsc
 * 0000000140344583: shl     rdx, 20h
 * 0000000140344587: mov     r9, 7010008004002001h
 * 0000000140344591: or      rax, rdx
 * 0000000140344594: mov     rcx, rax
 * 0000000140344597: ror     rax, 3
 * 000000014034459B: xor     rcx, rax
 * 000000014034459E: mov     rax, r9
 * 00000001403445A1: mul     rcx
 * 00000001403445A4: mov     rcx, rdx
 * 00000001403445A7: mov     [rbp+20F0h+var_1930], rdx
 * 00000001403445AE: xor     rcx, rax
 * 00000001403445B1: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001403445BB: mul     rcx
 * 00000001403445BE: shr     rdx, 1
 * 00000001403445C1: lea     rax, [rdx+rdx*2]
 * 00000001403445C5: cmp     rcx, rax
 * 00000001403445C8: jnz     loc_140344E4E
 * 00000001403445CE: lea     r12, [r14+18h]
 * 00000001403445D2: mov     r8d, [rsi+7F8h]
 * 00000001403445D9: rdtsc
 * 00000001403445DB: shl     rdx, 20h
 * 00000001403445DF: or      rax, rdx
 * 00000001403445E2: mov     rcx, rax
 * 00000001403445E5: ror     rax, 3
 * 00000001403445E9: xor     rcx, rax
 * 00000001403445EC: mov     rax, r9
 * 00000001403445EF: mul     rcx
 * 00000001403445F2: mov     rbx, rax
 * 00000001403445F5: mov     [rbp+20F0h+var_1928], rdx
 * 00000001403445FC: xor     ebx, edx
 * 00000001403445FE: and     ebx, 7FFh
 * 0000000140344604: rdtsc
 * 0000000140344606: shl     rdx, 20h
 * 000000014034460A: or      rax, rdx
 * 000000014034460D: mov     rcx, rax
 * 0000000140344610: ror     rax, 3
 * 0000000140344614: xor     rcx, rax
 * 0000000140344617: mov     rax, r9
 * 000000014034461A: mul     rcx
 * 000000014034461D: mov     ecx, [rsi+970h]
 * 0000000140344623: lea     r9d, [rbx+1]
 * 0000000140344627: xor     rax, rdx
 * 000000014034462A: mov     [rbp+20F0h+var_1920], rdx
 * 0000000140344631: xor     edx, edx
 * 0000000140344633: shr     ecx, 13h
 * 0000000140344636: div     r9
 * 0000000140344639: mov     rax, [rsi+0F0h]
 * 0000000140344640: and     ecx, 200h
 * 0000000140344646: mov     r15, rdx
 * 0000000140344649: lea     edx, [rbx+0A70h]
 * 000000014034464F: call    KeGuardDispatchICall
 * 0000000140344654: xor     r13d, r13d
 * 0000000140344657: mov     r11, rax
 * 000000014034465A: test    rax, rax
 * 000000014034465D: jnz     short loc_140344679
 * 000000014034465F: lea     r12d, [rax+1]
 * 0000000140344663: add     [rsi+9F8h], r12d
 * 000000014034466A: mov     r9, 7010008004002001h
 * 0000000140344674: jmp     loc_140344E54
 * 0000000140344679: mov     r9d, r15d
 * 000000014034467C: mov     r8, r11
 * 000000014034467F: cmp     r15d, 8
 * 0000000140344683: jb      short loc_1403446D6
 * 0000000140344685: mov     r10d, r15d
 * 0000000140344688: mov     r13d, 1
 * 000000014034468E: shr     r10, 3
 * 0000000140344692: mov     r14, 7010008004002001h
 * 000000014034469C: rdtsc
 * 000000014034469E: shl     rdx, 20h
 * 00000001403446A2: add     r9d, 0FFFFFFF8h
 * 00000001403446A6: or      rax, rdx
 * 00000001403446A9: mov     rcx, rax
 * 00000001403446AC: ror     rax, 3
 * 00000001403446B0: xor     rcx, rax
 * 00000001403446B3: mov     rax, r14
 * 00000001403446B6: mul     rcx
 * 00000001403446B9: mov     [rbp+20F0h+var_1918], rdx
 * 00000001403446C0: xor     rdx, rax
 * 00000001403446C3: mov     [r8], rdx
 * 00000001403446C6: add     r8, 8
 * 00000001403446CA: sub     r10, r13
 * 00000001403446CD: jnz     short loc_14034469C
 * 00000001403446CF: mov     r14, [rbp+20F0h+var_20B0]
 * 00000001403446D3: xor     r13d, r13d
 * 00000001403446D6: test    r9d, r9d
 * 00000001403446D9: jz      short loc_14034471E
 * 00000001403446DB: rdtsc
 * 00000001403446DD: shl     rdx, 20h
 * 00000001403446E1: or      rax, rdx
 * 00000001403446E4: mov     rcx, rax
 * 00000001403446E7: ror     rax, 3
 * 00000001403446EB: xor     rcx, rax
 * 00000001403446EE: mov     rax, 7010008004002001h
 * 00000001403446F8: mul     rcx
 * 00000001403446FB: mov     ecx, 0FFFFFFFFh
 * 0000000140344700: mov     [rbp+20F0h+var_1910], rdx
 * 0000000140344707: xor     rdx, rax
 * 000000014034470A: mov     eax, 1
 * 000000014034470F: mov     [r8], dl
 * 0000000140344712: add     r8, rax
 * 0000000140344715: shr     rdx, 8
 * 0000000140344719: add     r9d, ecx
 * 000000014034471C: jnz     short loc_14034470F
 * 000000014034471E: mov     r8d, r15d
 * 0000000140344721: sub     ebx, r15d
 * 0000000140344724: add     r8, r11
 * 0000000140344727: mov     r15d, 1
 * 000000014034472D: lea     r9, [r8+0A70h]
 * 0000000140344734: cmp     ebx, 8
 * 0000000140344737: jb      short loc_14034477F
 * 0000000140344739: mov     r10d, ebx
 * 000000014034473C: mov     r13, 7010008004002001h
 * 0000000140344746: shr     r10, 3
 * 000000014034474A: rdtsc
 * 000000014034474C: shl     rdx, 20h
 * 0000000140344750: add     ebx, 0FFFFFFF8h
 * 0000000140344753: or      rax, rdx
 * 0000000140344756: mov     rcx, rax
 * 0000000140344759: ror     rax, 3
 * 000000014034475D: xor     rcx, rax
 * 0000000140344760: mov     rax, r13
 * 0000000140344763: mul     rcx
 * 0000000140344766: mov     [rbp+20F0h+var_1908], rdx
 * 000000014034476D: xor     rdx, rax
 * 0000000140344770: mov     [r9], rdx
 * 0000000140344773: add     r9, 8
 * 0000000140344777: sub     r10, r15
 * 000000014034477A: jnz     short loc_14034474A
 * 000000014034477C: xor     r13d, r13d
 * 000000014034477F: test    ebx, ebx
 * 0000000140344781: jz      short loc_1403447C0
 * 0000000140344783: rdtsc
 * 0000000140344785: shl     rdx, 20h
 * 0000000140344789: or      rax, rdx
 * 000000014034478C: mov     rcx, rax
 * 000000014034478F: ror     rax, 3
 * 0000000140344793: xor     rcx, rax
 * 0000000140344796: mov     rax, 7010008004002001h
 * 00000001403447A0: mul     rcx
 * 00000001403447A3: mov     [rbp+20F0h+var_17E0], rdx
 * 00000001403447AA: xor     rdx, rax
 * 00000001403447AD: mov     eax, 0FFFFFFFFh
 * 00000001403447B2: mov     [r9], dl
 * 00000001403447B5: add     r9, r15
 * 00000001403447B8: shr     rdx, 8
 * 00000001403447BC: add     ebx, eax
 * 00000001403447BE: jnz     short loc_1403447B2
 * 00000001403447C0: test    r12, r12
 * 00000001403447C3: jz      short loc_1403447C9
 * 00000001403447C5: mov     [r12], r11
 * 00000001403447C9: xor     r11d, r11d
 * 00000001403447CC: test    r8, r8
 * 00000001403447CF: jz      loc_140344E44
 * 00000001403447D5: mov     r10d, 0A70h
 * 00000001403447DB: mov     [r14+8], r8
 * 00000001403447DF: mov     [r14+10h], r10d
 * 00000001403447E3: mov     r9d, r10d
 * 00000001403447E6: mov     r14d, 14Eh
 * 00000001403447EC: mov     rcx, rsi
 * 00000001403447EF: mov     rdx, r8
 * 00000001403447F2: mov     rax, [rcx]
 * 00000001403447F5: add     r9d, 0FFFFFFF8h
 * 00000001403447F9: mov     [rdx], rax
 * 00000001403447FC: add     rcx, 8
 * 0000000140344800: add     rdx, 8
 * 0000000140344804: sub     r14, r15
 * 0000000140344807: jnz     short loc_1403447F2
 * 0000000140344809: test    r9d, r9d
 * 000000014034480C: jz      short loc_140344829
 * 000000014034480E: mov     r10d, 0FFFFFFFFh
 * 0000000140344814: mov     al, [rcx]
 * 0000000140344816: add     rcx, r15
 * 0000000140344819: mov     [rdx], al
 * 000000014034481B: add     rdx, r15
 * 000000014034481E: add     r9d, r10d
 * 0000000140344821: jnz     short loc_140344814
 * 0000000140344823: mov     r10d, 0A70h
 * 0000000140344829: bts     dword ptr [r8+970h], 13h
 * 0000000140344832: mov     [r8+7CCh], r10d
 * 0000000140344839: mov     [r8+7F0h], r10d
 * 0000000140344840: mov     eax, [r8+970h]
 * 0000000140344847: and     eax, 0FFFFFFFDh
 * 000000014034484A: mov     [r8+970h], eax
 * 0000000140344851: mov     r12d, [r8+7F0h]
 * 0000000140344858: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 000000014034485B: sub     r12d, 0C8h
 * 0000000140344862: mov     rax, [r8+4D8h]
 * 0000000140344869: shr     r12d, 3
 * 000000014034486D: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140344871: mov     rax, [r8+5B0h]
 * 0000000140344878: mov     [rbp+20F0h+var_20A8], r12d
 * 000000014034487C: mov     [r8+0C4h], r12d
 * 0000000140344883: mov     [rbp+20F0h+var_2088], rax
 * 0000000140344887: rdtsc
 * 0000000140344889: shl     rdx, 20h
 * 000000014034488D: lea     r13, [r8+780h]
 * 0000000140344894: or      rax, rdx
 * 0000000140344897: mov     r15d, 20h ; ' '
 * 000000014034489D: mov     rcx, rax
 * 00000001403448A0: mov     r9d, r15d
 * 00000001403448A3: ror     rax, 3
 * 00000001403448A7: xor     rcx, rax
 * 00000001403448AA: mov     rax, 7010008004002001h
 * 00000001403448B4: mul     rcx
 * 00000001403448B7: lea     r11d, [r15-1Ch]
 * 00000001403448BB: mov     rcx, r13
 * 00000001403448BE: mov     rbx, rdx
 * 00000001403448C1: mov     [rbp+20F0h+var_18F8], rdx
 * 00000001403448C8: xor     rbx, rax
 * 00000001403448CB: lea     rdx, [rbp+20F0h+var_15C0]
 * 00000001403448D2: mov     rax, [r8+7A0h]
 * 00000001403448D9: lea     r14d, [r15-1Fh]
 * 00000001403448DD: mov     [rbp+20F0h+var_2038], rax
 * 00000001403448E4: mov     r10d, r11d
 * 00000001403448E7: mov     eax, [r8+810h]
 * 00000001403448EE: mov     [rbp+20F0h+var_2094], eax
 * 00000001403448F1: mov     [rbp+20F0h+var_20C8], rbx
 * 00000001403448F5: mov     rax, [rcx]
 * 00000001403448F8: add     r9d, 0FFFFFFF8h
 * 00000001403448FC: mov     [rdx], rax
 * 00000001403448FF: add     rcx, 8
 * 0000000140344903: add     rdx, 8
 * 0000000140344907: sub     r10, r14
 * 000000014034490A: jnz     short loc_1403448F5
 * 000000014034490C: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140344910: test    r9d, r9d
 * 0000000140344913: jz      short loc_140344937
 * 0000000140344915: mov     r10d, 1
 * 000000014034491B: mov     r12d, 0FFFFFFFFh
 * 0000000140344921: mov     al, [rcx]
 * 0000000140344923: add     rcx, r10
 * 0000000140344926: mov     [rdx], al
 * 0000000140344928: add     rdx, r10
 * 000000014034492B: add     r9d, r12d
 * 000000014034492E: jnz     short loc_140344921
 * 0000000140344930: mov     r12d, [rbp+20F0h+var_20A8]
 * 0000000140344934: xor     r10d, r10d
 * 0000000140344937: mov     [r8+7A0h], r10
 * 000000014034493E: mov     ecx, r15d
 * 0000000140344941: mov     [r8+810h], r10d
 * 0000000140344948: mov     rax, r13
 * 000000014034494B: mov     rdx, r11
 * 000000014034494E: mov     r9d, 1
 * 0000000140344954: mov     [rax], r10
 * 0000000140344957: add     ecx, 0FFFFFFF8h
 * 000000014034495A: add     rax, 8
 * 000000014034495E: sub     rdx, r9
 * 0000000140344961: jnz     short loc_140344954
 * 0000000140344963: test    ecx, ecx
 * 0000000140344965: jz      short loc_140344976
 * 0000000140344967: mov     edx, 0FFFFFFFFh
 * 000000014034496C: mov     [rax], r10b
 * 000000014034496F: add     rax, r9
 * 0000000140344972: add     ecx, edx
 * 0000000140344974: jnz     short loc_14034496C
 * 0000000140344976: mov     eax, [r8+7CCh]
 * 000000014034497D: mov     r10, r8
 * 0000000140344980: add     [r8+810h], eax
 * 0000000140344987: mov     rax, r8
 * 000000014034498A: mov     r11d, [r8+7CCh]
 * 0000000140344991: mov     r15d, [r8+7FCh]
 * 0000000140344998: mov     r9, [r8+800h]
 * 000000014034499F: lea     rcx, [r8+r11]
 * 00000001403449A3: cmp     r8, rcx
 * 00000001403449A6: jnb     short loc_1403449B8
 * 00000001403449A8: mov     edx, 40h ; '@'
 * 00000001403449AD: prefetchnta byte ptr [rax]
 * 00000001403449B0: add     rax, rdx
 * 00000001403449B3: cmp     rax, rcx
 * 00000001403449B6: jb      short loc_1403449AD
 * 00000001403449B8: mov     eax, r11d
 * 00000001403449BB: shr     eax, 7
 * 00000001403449BE: mov     [rbp+20F0h+var_20C0], eax
 * 00000001403449C1: test    eax, eax
 * 00000001403449C3: jz      short loc_140344A42
 * 00000001403449C5: mov     rdi, r9
 * 00000001403449C8: mov     rbx, 7010008004002001h
 * 00000001403449D2: mov     r14d, 1
 * 00000001403449D8: mov     r12d, 0FFFFFFFFh
 * 00000001403449DE: mov     eax, 8
 * 00000001403449E3: xor     r9, [r10]
 * 00000001403449E6: mov     ecx, r15d
 * 00000001403449E9: rol     r9, cl
 * 00000001403449EC: xor     r9, [r10+8]
 * 00000001403449F0: add     r10, 10h
 * 00000001403449F4: rol     r9, cl
 * 00000001403449F7: sub     rax, r14
 * 00000001403449FA: jnz     short loc_1403449E3
 * 00000001403449FC: mov     rcx, r10
 * 00000001403449FF: sub     rcx, r8
 * 0000000140344A02: xor     rcx, rdi
 * 0000000140344A05: mov     rax, rcx
 * 0000000140344A08: rol     rax, 11h
 * 0000000140344A0C: xor     rcx, rax
 * 0000000140344A0F: mov     rax, rbx
 * 0000000140344A12: mul     rcx
 * 0000000140344A15: xor     eax, edx
 * 0000000140344A17: mov     [rbp+20F0h+var_18F0], rdx
 * 0000000140344A1E: xor     r15d, eax
 * 0000000140344A21: and     r15d, 3Fh
 * 0000000140344A25: cmovz   r15d, r14d
 * 0000000140344A29: add     [rbp+20F0h+var_20C0], r12d
 * 0000000140344A2D: jnz     short loc_1403449DE
 * 0000000140344A2F: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140344A33: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140344A3A: mov     rbx, [rbp+20F0h+var_20C8]
 * 0000000140344A3E: mov     r12d, [rbp+20F0h+var_20A8]
 * 0000000140344A42: and     r11d, 7Fh
 * 0000000140344A46: cmp     r11d, 8
 * 0000000140344A4A: jb      short loc_140344A6E
 * 0000000140344A4C: mov     eax, r11d
 * 0000000140344A4F: mov     edx, 1
 * 0000000140344A54: shr     rax, 3
 * 0000000140344A58: xor     r9, [r10]
 * 0000000140344A5B: mov     ecx, r15d
 * 0000000140344A5E: rol     r9, cl
 * 0000000140344A61: add     r10, 8
 * 0000000140344A65: add     r11d, 0FFFFFFF8h
 * 0000000140344A69: sub     rax, rdx
 * 0000000140344A6C: jnz     short loc_140344A58
 * 0000000140344A6E: test    r11d, r11d
 * 0000000140344A71: jz      short loc_140344A9C
 * 0000000140344A73: mov     r14d, 1
 * 0000000140344A79: mov     r12d, 0FFFFFFFFh
 * 0000000140344A7F: movzx   eax, byte ptr [r10]
 * 0000000140344A83: mov     ecx, r15d
 * 0000000140344A86: xor     r9, rax
 * 0000000140344A89: add     r10, r14
 * 0000000140344A8C: rol     r9, cl
 * 0000000140344A8F: add     r11d, r12d
 * 0000000140344A92: jnz     short loc_140344A7F
 * 0000000140344A94: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140344A98: mov     r12d, [rbp+20F0h+var_20A8]
 * 0000000140344A9C: mov     rax, [rbp+20F0h+var_2038]
 * 0000000140344AA3: lea     rcx, [rbp+20F0h+var_15C0]
 * 0000000140344AAA: mov     edx, 20h ; ' '
 * 0000000140344AAF: mov     [r8+7A0h], rax
 * 0000000140344AB6: mov     eax, [rbp+20F0h+var_2094]
 * 0000000140344AB9: add     [r8+810h], eax
 * 0000000140344AC0: lea     r11d, [rdx-1Ch]
 * 0000000140344AC4: mov     r10d, r11d
 * 0000000140344AC7: lea     r15d, [rdx-1Fh]
 * 0000000140344ACB: mov     rax, [rcx]
 * 0000000140344ACE: add     edx, 0FFFFFFF8h
 * 0000000140344AD1: mov     [r13+0], rax
 * 0000000140344AD5: add     rcx, 8
 * 0000000140344AD9: add     r13, 8
 * 0000000140344ADD: sub     r10, r15
 * 0000000140344AE0: jnz     short loc_140344ACB
 * 0000000140344AE2: test    edx, edx
 * 0000000140344AE4: jz      short loc_140344B01
 * 0000000140344AE6: mov     r14d, 0FFFFFFFFh
 * 0000000140344AEC: mov     al, [rcx]
 * 0000000140344AEE: add     rcx, r15
 * 0000000140344AF1: mov     [r13+0], al
 * 0000000140344AF5: add     r13, r15
 * 0000000140344AF8: add     edx, r14d
 * 0000000140344AFB: jnz     short loc_140344AEC
 * 0000000140344AFD: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140344B01: xor     r13d, r13d
 * 0000000140344B04: mov     [r8+7A0h], r9
 * 0000000140344B0B: test    dword ptr [r8+970h], 40000000h
 * 0000000140344B16: jnz     loc_140344D12
 * 0000000140344B1C: mov     rcx, r8
 * 0000000140344B1F: mov     eax, r13d
 * 0000000140344B22: xor     [rcx], rbx
 * 0000000140344B25: add     eax, r15d
 * 0000000140344B28: lea     rcx, [rcx+8]
 * 0000000140344B2C: cmp     eax, 19h
 * 0000000140344B2F: jb      short loc_140344B22
 * 0000000140344B31: mov     [rbp+20F0h+var_1E10], rbx
 * 0000000140344B38: test    rbx, rbx
 * 0000000140344B3B: jz      short loc_140344B7C
 * 0000000140344B3D: test    r12d, r12d
 * 0000000140344B40: jz      short loc_140344B7C
 * 0000000140344B42: mov     edx, r12d
 * 0000000140344B45: dec     rdx
 * 0000000140344B48: lea     rdx, [rcx+rdx*8]
 * 0000000140344B4C: xor     [rdx], rbx
 * 0000000140344B4F: lea     rax, [rbp+20F0h+var_1E10]
 * 0000000140344B56: mov     ecx, r12d
 * 0000000140344B59: lea     rdx, [rdx-8]
 * 0000000140344B5D: ror     rbx, cl
 * 0000000140344B60: mov     [rbp+20F0h+var_1E10], rbx
 * 0000000140344B67: and     ebx, 3Fh
 * 0000000140344B6A: btc     [rax], rbx
 * 0000000140344B6E: sub     r12d, r15d
 * 0000000140344B71: jz      short loc_140344B7C
 * 0000000140344B73: mov     rbx, [rbp+20F0h+var_1E10]
 * 0000000140344B7A: jmp     short loc_140344B4C
 * 0000000140344B7C: mov     r12d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140344B80: bt      r12d, 13h
 * 0000000140344B85: jnb     short loc_140344BD2
 * 0000000140344B87: rdtsc
 * 0000000140344B89: shl     rdx, 20h
 * 0000000140344B8D: or      rax, rdx
 * 0000000140344B90: mov     rcx, rax
 * 0000000140344B93: ror     rax, 3
 * 0000000140344B97: xor     rcx, rax
 * 0000000140344B9A: mov     rax, 7010008004002001h
 * 0000000140344BA4: mul     rcx
 * 0000000140344BA7: mov     rcx, rdx
 * 0000000140344BAA: mov     [rbp+20F0h+var_18E8], rdx
 * 0000000140344BB1: xor     rcx, rax
 * 0000000140344BB4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140344BBE: mul     rcx
 * 0000000140344BC1: shr     rdx, 1
 * 0000000140344BC4: lea     rax, [rdx+rdx*2]
 * 0000000140344BC8: cmp     rcx, rax
 * 0000000140344BCB: jz      short loc_140344BDD
 * 0000000140344BCD: jmp     loc_140344D12
 * 0000000140344BD2: bt      r12d, 8
 * 0000000140344BD7: jb      loc_140344D12
 * 0000000140344BDD: mov     rdi, [rbp+20F0h+var_2088]
 * 0000000140344BE1: mov     eax, 2
 * 0000000140344BE6: mov     [rbp+20F0h+var_1FB3], al
 * 0000000140344BEC: mov     ecx, r8d
 * 0000000140344BEF: mov     eax, 0Ch
 * 0000000140344BF4: mov     [rbp+20F0h+var_1FB5], r15b
 * 0000000140344BFB: mov     [rbp+20F0h+var_1FB7], al
 * 0000000140344C01: mov     r10, r8
 * 0000000140344C04: mov     eax, 0Fh
 * 0000000140344C09: mov     [rbp+20F0h+var_1FB8], r13b
 * 0000000140344C10: mov     [rbp+20F0h+var_1FB2], r11b
 * 0000000140344C17: mov     ebx, r13d
 * 0000000140344C1A: mov     r15, r13
 * 0000000140344C1D: mov     [rbp+20F0h+var_1FB0], 3
 * 0000000140344C24: mov     r13, [rbp+20F0h+var_20F0]
 * 0000000140344C28: mov     r11, r8
 * 0000000140344C2B: lea     esi, [rax+1]
 * 0000000140344C2E: mov     [rbp+20F0h+var_1FAF], 5
 * 0000000140344C35: mov     [rbp+20F0h+var_1FAC], 6
 * 0000000140344C3C: mov     [rbp+20F0h+var_1FB1], 7
 * 0000000140344C43: mov     [rbp+20F0h+var_1FAB], 8
 * 0000000140344C4A: mov     [rbp+20F0h+var_1FAE], 9
 * 0000000140344C51: mov     [rbp+20F0h+var_1FAA], 0Ah
 * 0000000140344C58: mov     [rbp+20F0h+var_1FB4], 0Bh
 * 0000000140344C5F: mov     [rbp+20F0h+var_1FA9], 0Dh
 * 0000000140344C66: mov     [rbp+20F0h+var_1FAD], 0Eh
 * 0000000140344C6D: mov     [rbp+20F0h+var_1FB6], al
 * 0000000140344C73: ror     r10, cl
 * 0000000140344C76: mov     r9, [r11]
 * 0000000140344C79: mov     r14d, 1
 * 0000000140344C7F: mov     rdx, rsi
 * 0000000140344C82: lea     r12d, [r14+0Eh]
 * 0000000140344C86: movzx   eax, byte ptr [r11]
 * 0000000140344C8A: and     r9, 0FFFFFFFFFFFFFFF0h
 * 0000000140344C8E: and     rax, r12
 * 0000000140344C91: movzx   ecx, [rbp+rax+20F0h+var_1FB8]
 * 0000000140344C99: or      r9, rcx
 * 0000000140344C9C: ror     r9, 4
 * 0000000140344CA0: mov     [r11], r9
 * 0000000140344CA3: sub     rdx, r14
 * 0000000140344CA6: jnz     short loc_140344C86
 * 0000000140344CA8: sub     r9, r15
 * 0000000140344CAB: test    dword ptr [rbp+20F0h+var_20B8], 200h
 * 0000000140344CB2: mov     [r11], r9
 * 0000000140344CB5: jnz     short loc_140344CCA
 * 0000000140344CB7: xor     r9, r13
 * 0000000140344CBA: mov     ecx, edi
 * 0000000140344CBC: bswap   r9
 * 0000000140344CBF: xor     r9, r10
 * 0000000140344CC2: ror     r9, cl
 * 0000000140344CC5: xor     r9, rdi
 * 0000000140344CC8: jmp     short loc_140344CCD
 * 0000000140344CCA: xor     r9, r10
 * 0000000140344CCD: mov     edx, 0C8h
 * 0000000140344CD2: mov     [r11], r9
 * 0000000140344CD5: sub     edx, ebx
 * 0000000140344CD7: mov     ecx, r9d
 * 0000000140344CDA: imul    edx, ebx
 * 0000000140344CDD: not     ecx
 * 0000000140344CDF: add     r11, 8
 * 0000000140344CE3: inc     ebx
 * 0000000140344CE5: add     r15, r8
 * 0000000140344CE8: ror     rdx, cl
 * 0000000140344CEB: mov     ecx, r9d
 * 0000000140344CEE: xor     r10, rdx
 * 0000000140344CF1: rol     r10, cl
 * 0000000140344CF4: add     r10, r8
 * 0000000140344CF7: cmp     ebx, 19h
 * 0000000140344CFA: jb      loc_140344C76
 * 0000000140344D00: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140344D04: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140344D0B: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140344D0F: xor     r13d, r13d
 * 0000000140344D12: mov     r15, [r14+8]
 * 0000000140344D16: mov     r10d, [r14+10h]
 * 0000000140344D1A: mov     r9, r15
 * 0000000140344D1D: add     [rsi+810h], r10d
 * 0000000140344D24: mov     rax, r15
 * 0000000140344D27: mov     r11d, [rsi+7FCh]
 * 0000000140344D2E: mov     r12, [rsi+800h]
 * 0000000140344D35: lea     rcx, [r15+r10]
 * 0000000140344D39: cmp     r15, rcx
 * 0000000140344D3C: jnb     short loc_140344D4E
 * 0000000140344D3E: mov     edx, 40h ; '@'
 * 0000000140344D43: prefetchnta byte ptr [rax]
 * 0000000140344D46: add     rax, rdx
 * 0000000140344D49: cmp     rax, rcx
 * 0000000140344D4C: jb      short loc_140344D43
 * 0000000140344D4E: mov     ebx, r10d
 * 0000000140344D51: mov     r8, r12
 * 0000000140344D54: shr     ebx, 7
 * 0000000140344D57: test    ebx, ebx
 * 0000000140344D59: jz      short loc_140344DCD
 * 0000000140344D5B: mov     r14, 7010008004002001h
 * 0000000140344D65: mov     edx, 8
 * 0000000140344D6A: lea     r13d, [rdx-7]
 * 0000000140344D6E: mov     rax, [r9]
 * 0000000140344D71: mov     ecx, r11d
 * 0000000140344D74: xor     rax, r8
 * 0000000140344D77: mov     r8, [r9+8]
 * 0000000140344D7B: rol     rax, cl
 * 0000000140344D7E: add     r9, 10h
 * 0000000140344D82: xor     r8, rax
 * 0000000140344D85: rol     r8, cl
 * 0000000140344D88: sub     rdx, r13
 * 0000000140344D8B: jnz     short loc_140344D6E
 * 0000000140344D8D: mov     rcx, r9
 * 0000000140344D90: sub     rcx, r15
 * 0000000140344D93: xor     rcx, r12
 * 0000000140344D96: mov     rax, rcx
 * 0000000140344D99: rol     rax, 11h
 * 0000000140344D9D: xor     rcx, rax
 * 0000000140344DA0: mov     rax, r14
 * 0000000140344DA3: mul     rcx
 * 0000000140344DA6: xor     eax, edx
 * 0000000140344DA8: mov     [rbp+20F0h+var_18E0], rdx
 * 0000000140344DAF: xor     r11d, eax
 * 0000000140344DB2: mov     rax, r13
 * 0000000140344DB5: and     r11d, 3Fh
 * 0000000140344DB9: cmovz   r11d, eax
 * 0000000140344DBD: mov     eax, 0FFFFFFFFh
 * 0000000140344DC2: add     ebx, eax
 * 0000000140344DC4: jnz     short loc_140344D65
 * 0000000140344DC6: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140344DCA: xor     r13d, r13d
 * 0000000140344DCD: and     r10d, 7Fh
 * 0000000140344DD1: mov     r12d, 1
 * 0000000140344DD7: cmp     r10d, 8
 * 0000000140344DDB: jb      short loc_140344DFA
 * 0000000140344DDD: mov     edx, r10d
 * 0000000140344DE0: shr     rdx, 3
 * 0000000140344DE4: xor     r8, [r9]
 * 0000000140344DE7: mov     ecx, r11d
 * 0000000140344DEA: rol     r8, cl
 * 0000000140344DED: add     r9, 8
 * 0000000140344DF1: add     r10d, 0FFFFFFF8h
 * 0000000140344DF5: sub     rdx, r12
 * 0000000140344DF8: jnz     short loc_140344DE4
 * 0000000140344DFA: test    r10d, r10d
 * 0000000140344DFD: jz      short loc_140344E1E
 * 0000000140344DFF: mov     r14d, 0FFFFFFFFh
 * 0000000140344E05: movzx   eax, byte ptr [r9]
 * 0000000140344E09: mov     ecx, r11d
 * 0000000140344E0C: xor     r8, rax
 * 0000000140344E0F: add     r9, r12
 * 0000000140344E12: rol     r8, cl
 * 0000000140344E15: add     r10d, r14d
 * 0000000140344E18: jnz     short loc_140344E05
 * 0000000140344E1A: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140344E1E: mov     rax, r8
 * 0000000140344E21: shr     rax, 1Fh
 * 0000000140344E25: xor     r11d, r11d
 * 0000000140344E28: jmp     short loc_140344E31
 * 0000000140344E2A: xor     r8d, eax
 * 0000000140344E2D: shr     rax, 1Fh
 * 0000000140344E31: test    rax, rax
 * 0000000140344E34: jnz     short loc_140344E2A
 * 0000000140344E36: btr     r8d, 1Fh
 * 0000000140344E3B: mov     [r14+14h], r8d
 * 0000000140344E3F: jmp     loc_14034466A
 * 0000000140344E44: mov     r9, 7010008004002001h
 * 0000000140344E4E: mov     r12d, 1
 * 0000000140344E54: mov     r13d, [rsi+970h]
 * 0000000140344E5B: mov     [rbp+20F0h+var_20C0], r11d
 * 0000000140344E5F: mov     [rbp+20F0h+var_20F0], r11
 * 0000000140344E63: mov     [rbp+20F0h+var_2040], r13d
 * 0000000140344E6A: bt      r13d, 1Eh
 * 0000000140344E6F: jb      loc_1403455AD
 * 0000000140344E75: mov     r14, [rsp+10F0h+arg_0]
 * 0000000140344E7D: cmp     rsi, r14
 * 0000000140344E80: jnz     loc_1403456C0
 * 0000000140344E86: mov     eax, 8000h
 * 0000000140344E8B: test    eax, r13d
 * 0000000140344E8E: jnz     short loc_140344E9D
 * 0000000140344E90: cmp     [rsi+8D8h], r11d
 * 0000000140344E97: jnz     loc_140345370
 * 0000000140344E9D: mov     r8d, [r14+904h]
 * 0000000140344EA4: mov     rcx, r14
 * 0000000140344EA7: mov     edx, [r14+7CCh]
 * 0000000140344EAE: call    sub_1403495B4
 * 0000000140344EB3: mov     rsi, rax
 * 0000000140344EB6: test    rax, rax
 * 0000000140344EB9: jz      loc_140345370
 * 0000000140344EBF: mov     rax, [rax+7B0h]
 * 0000000140344EC6: mov     ecx, 2
 * 0000000140344ECB: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140344ECF: mov     eax, [rsi+970h]
 * 0000000140344ED5: mov     [rbp+20F0h+var_20A8], eax
 * 0000000140344ED8: test    cl, al
 * 0000000140344EDA: jz      short loc_140344EE5
 * 0000000140344EDC: mov     r14d, [rsi+7CCh]
 * 0000000140344EE3: jmp     short loc_140344EEC
 * 0000000140344EE5: mov     r14d, [rsi+7F0h]
 * 0000000140344EEC: mov     rax, [rsi+4D8h]
 * 0000000140344EF3: add     r14d, 0FFFFFF38h
 * 0000000140344EFA: shr     r14d, 3
 * 0000000140344EFE: mov     [rbp+20F0h+var_2038], rax
 * 0000000140344F05: mov     rax, [rsi+5B0h]
 * 0000000140344F0C: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140344F10: mov     [rbp+20F0h+var_20C0], r14d
 * 0000000140344F14: mov     [rsi+0C4h], r14d
 * 0000000140344F1B: rdtsc
 * 0000000140344F1D: shl     rdx, 20h
 * 0000000140344F21: lea     r15, [rsi+780h]
 * 0000000140344F28: or      rax, rdx
 * 0000000140344F2B: mov     ebx, 20h ; ' '
 * 0000000140344F30: mov     rcx, rax
 * 0000000140344F33: mov     r8d, ebx
 * 0000000140344F36: ror     rax, 3
 * 0000000140344F3A: mov     r13d, 0FFFFFFF8h
 * 0000000140344F40: xor     rcx, rax
 * 0000000140344F43: mov     rax, 7010008004002001h
 * 0000000140344F4D: mul     rcx
 * 0000000140344F50: lea     r11d, [rbx-1Ch]
 * 0000000140344F54: mov     rcx, r15
 * 0000000140344F57: mov     r10, rdx
 * 0000000140344F5A: mov     [rbp+20F0h+var_18D8], rdx
 * 0000000140344F61: xor     r10, rax
 * 0000000140344F64: lea     rdx, [rbp+20F0h+var_1640]
 * 0000000140344F6B: mov     rax, [rsi+7A0h]
 * 0000000140344F72: mov     r9d, r11d
 * 0000000140344F75: mov     [rbp+20F0h+var_2070], rax
 * 0000000140344F7C: mov     eax, [rsi+810h]
 * 0000000140344F82: mov     [rbp+20F0h+var_2094], eax
 * 0000000140344F85: mov     rax, [rcx]
 * 0000000140344F88: add     r8d, r13d
 * 0000000140344F8B: mov     [rdx], rax
 * 0000000140344F8E: add     rcx, 8
 * 0000000140344F92: add     rdx, 8
 * 0000000140344F96: sub     r9, r12
 * 0000000140344F99: jnz     short loc_140344F85
 * 0000000140344F9B: test    r8d, r8d
 * 0000000140344F9E: jz      short loc_140344FB8
 * 0000000140344FA0: mov     r9d, 0FFFFFFFFh
 * 0000000140344FA6: mov     al, [rcx]
 * 0000000140344FA8: add     rcx, r12
 * 0000000140344FAB: mov     [rdx], al
 * 0000000140344FAD: add     rdx, r12
 * 0000000140344FB0: add     r8d, r9d
 * 0000000140344FB3: jnz     short loc_140344FA6
 * 0000000140344FB5: xor     r9d, r9d
 * 0000000140344FB8: mov     [rsi+7A0h], r9
 * 0000000140344FBF: mov     ecx, ebx
 * 0000000140344FC1: mov     [rsi+810h], r9d
 * 0000000140344FC8: mov     rax, r15
 * 0000000140344FCB: mov     rdx, r11
 * 0000000140344FCE: mov     [rax], r9
 * 0000000140344FD1: add     ecx, r13d
 * 0000000140344FD4: add     rax, 8
 * 0000000140344FD8: sub     rdx, r12
 * 0000000140344FDB: jnz     short loc_140344FCE
 * 0000000140344FDD: mov     edx, 0FFFFFFFFh
 * 0000000140344FE2: test    ecx, ecx
 * 0000000140344FE4: jz      short loc_140344FF0
 * 0000000140344FE6: mov     [rax], r9b
 * 0000000140344FE9: add     rax, r12
 * 0000000140344FEC: add     ecx, edx
 * 0000000140344FEE: jnz     short loc_140344FE6
 * 0000000140344FF0: mov     eax, [rsi+7CCh]
 * 0000000140344FF6: mov     r9, rsi
 * 0000000140344FF9: add     [rsi+810h], eax
 * 0000000140344FFF: mov     rax, rsi
 * 0000000140345002: mov     r11d, [rsi+7CCh]
 * 0000000140345009: mov     ebx, [rsi+7FCh]
 * 000000014034500F: mov     r13, [rsi+800h]
 * 0000000140345016: lea     rcx, [rsi+r11]
 * 000000014034501A: cmp     rsi, rcx
 * 000000014034501D: jnb     short loc_140345030
 * 000000014034501F: mov     r8d, 40h ; '@'
 * 0000000140345025: prefetchnta byte ptr [rax]
 * 0000000140345028: add     rax, r8
 * 000000014034502B: cmp     rax, rcx
 * 000000014034502E: jb      short loc_140345025
 * 0000000140345030: mov     r12d, r11d
 * 0000000140345033: mov     r8, r13
 * 0000000140345036: shr     r12d, 7
 * 000000014034503A: test    r12d, r12d
 * 000000014034503D: jz      short loc_1403450B1
 * 000000014034503F: mov     r14, 7010008004002001h
 * 0000000140345049: mov     edx, 8
 * 000000014034504E: lea     edi, [rdx-7]
 * 0000000140345051: mov     rax, [r9]
 * 0000000140345054: mov     ecx, ebx
 * 0000000140345056: xor     rax, r8
 * 0000000140345059: mov     r8, [r9+8]
 * 000000014034505D: rol     rax, cl
 * 0000000140345060: add     r9, 10h
 * 0000000140345064: xor     r8, rax
 * 0000000140345067: rol     r8, cl
 * 000000014034506A: sub     rdx, rdi
 * 000000014034506D: jnz     short loc_140345051
 * 000000014034506F: mov     rcx, r9
 * 0000000140345072: sub     rcx, rsi
 * 0000000140345075: xor     rcx, r13
 * 0000000140345078: mov     rax, rcx
 * 000000014034507B: rol     rax, 11h
 * 000000014034507F: xor     rcx, rax
 * 0000000140345082: mov     rax, r14
 * 0000000140345085: mul     rcx
 * 0000000140345088: xor     ebx, edx
 * 000000014034508A: mov     [rbp+20F0h+var_18D0], rdx
 * 0000000140345091: xor     ebx, eax
 * 0000000140345093: mov     edx, 0FFFFFFFFh
 * 0000000140345098: and     ebx, 3Fh
 * 000000014034509B: mov     rax, rdi
 * 000000014034509E: cmovz   ebx, eax
 * 00000001403450A1: add     r12d, edx
 * 00000001403450A4: jnz     short loc_140345049
 * 00000001403450A6: mov     r14d, [rbp+20F0h+var_20C0]
 * 00000001403450AA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403450B1: and     r11d, 7Fh
 * 00000001403450B5: mov     r13d, 1
 * 00000001403450BB: cmp     r11d, 8
 * 00000001403450BF: jb      short loc_1403450E2
 * 00000001403450C1: mov     edx, r11d
 * 00000001403450C4: shr     rdx, 3
 * 00000001403450C8: xor     r8, [r9]
 * 00000001403450CB: mov     ecx, ebx
 * 00000001403450CD: rol     r8, cl
 * 00000001403450D0: add     r9, 8
 * 00000001403450D4: add     r11d, 0FFFFFFF8h
 * 00000001403450D8: sub     rdx, r13
 * 00000001403450DB: jnz     short loc_1403450C8
 * 00000001403450DD: mov     edx, 0FFFFFFFFh
 * 00000001403450E2: test    r11d, r11d
 * 00000001403450E5: jz      short loc_1403450FB
 * 00000001403450E7: movzx   eax, byte ptr [r9]
 * 00000001403450EB: mov     ecx, ebx
 * 00000001403450ED: xor     r8, rax
 * 00000001403450F0: add     r9, r13
 * 00000001403450F3: rol     r8, cl
 * 00000001403450F6: add     r11d, edx
 * 00000001403450F9: jnz     short loc_1403450E7
 * 00000001403450FB: mov     rax, [rbp+20F0h+var_2070]
 * 0000000140345102: lea     rcx, [rbp+20F0h+var_1640]
 * 0000000140345109: mov     r9d, 4
 * 000000014034510F: mov     [rsi+7A0h], rax
 * 0000000140345116: mov     eax, [rbp+20F0h+var_2094]
 * 0000000140345119: mov     edx, r9d
 * 000000014034511C: add     [rsi+810h], eax
 * 0000000140345122: lea     r11d, [r9+1Ch]
 * 0000000140345126: mov     rax, [rcx]
 * 0000000140345129: add     r11d, 0FFFFFFF8h
 * 000000014034512D: mov     [r15], rax
 * 0000000140345130: add     rcx, 8
 * 0000000140345134: add     r15, 8
 * 0000000140345138: sub     rdx, r13
 * 000000014034513B: jnz     short loc_140345126
 * 000000014034513D: test    r11d, r11d
 * 0000000140345140: jz      short loc_14034515C
 * 0000000140345142: mov     r14d, 0FFFFFFFFh
 * 0000000140345148: mov     al, [rcx]
 * 000000014034514A: add     rcx, r13
 * 000000014034514D: mov     [r15], al
 * 0000000140345150: add     r15, r13
 * 0000000140345153: add     r11d, r14d
 * 0000000140345156: jnz     short loc_140345148
 * 0000000140345158: mov     r14d, [rbp+20F0h+var_20C0]
 * 000000014034515C: xor     r11d, r11d
 * 000000014034515F: mov     [rsi+7A0h], r8
 * 0000000140345166: test    dword ptr [rsi+970h], 40000000h
 * 0000000140345170: jnz     loc_140345365
 * 0000000140345176: mov     rcx, rsi
 * 0000000140345179: lea     r12d, [r11+19h]
 * 000000014034517D: mov     eax, r11d
 * 0000000140345180: xor     [rcx], r10
 * 0000000140345183: add     eax, r13d
 * 0000000140345186: lea     rcx, [rcx+8]
 * 000000014034518A: cmp     eax, r12d
 * 000000014034518D: jb      short loc_140345180
 * 000000014034518F: mov     [rbp+20F0h+var_1E08], r10
 * 0000000140345196: test    r10, r10
 * 0000000140345199: jz      short loc_1403451DB
 * 000000014034519B: test    r14d, r14d
 * 000000014034519E: jz      short loc_1403451DB
 * 00000001403451A0: mov     edx, r14d
 * 00000001403451A3: dec     rdx
 * 00000001403451A6: lea     rdx, [rcx+rdx*8]
 * 00000001403451AA: xor     [rdx], r10
 * 00000001403451AD: lea     rax, [rbp+20F0h+var_1E08]
 * 00000001403451B4: mov     ecx, r14d
 * 00000001403451B7: lea     rdx, [rdx-8]
 * 00000001403451BB: ror     r10, cl
 * 00000001403451BE: mov     [rbp+20F0h+var_1E08], r10
 * 00000001403451C5: and     r10d, 3Fh
 * 00000001403451C9: btc     [rax], r10
 * 00000001403451CD: sub     r14d, r13d
 * 00000001403451D0: jz      short loc_1403451DB
 * 00000001403451D2: mov     r10, [rbp+20F0h+var_1E08]
 * 00000001403451D9: jmp     short loc_1403451AA
 * 00000001403451DB: mov     r14d, [rbp+20F0h+var_20A8]
 * 00000001403451DF: bt      r14d, 13h
 * 00000001403451E4: jnb     short loc_140345231
 * 00000001403451E6: rdtsc
 * 00000001403451E8: shl     rdx, 20h
 * 00000001403451EC: or      rax, rdx
 * 00000001403451EF: mov     rcx, rax
 * 00000001403451F2: ror     rax, 3
 * 00000001403451F6: xor     rcx, rax
 * 00000001403451F9: mov     rax, 7010008004002001h
 * 0000000140345203: mul     rcx
 * 0000000140345206: mov     rcx, rdx
 * 0000000140345209: mov     [rbp+20F0h+var_18C8], rdx
 * 0000000140345210: xor     rcx, rax
 * 0000000140345213: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014034521D: mul     rcx
 * 0000000140345220: shr     rdx, 1
 * 0000000140345223: lea     rax, [rdx+rdx*2]
 * 0000000140345227: cmp     rcx, rax
 * 000000014034522A: jz      short loc_14034523C
 * 000000014034522C: jmp     loc_140345365
 * 0000000140345231: bt      r14d, 8
 * 0000000140345236: jb      loc_140345365
 * 000000014034523C: mov     rdi, [rbp+20F0h+var_20C8]
 * 0000000140345240: mov     eax, 2
 * 0000000140345245: mov     r15, [rbp+20F0h+var_2038]
 * 000000014034524C: mov     ecx, esi
 * 000000014034524E: mov     [rbp+20F0h+var_1FC3], al
 * 0000000140345254: mov     r10, rsi
 * 0000000140345257: mov     eax, 0Ch
 * 000000014034525C: mov     [rbp+20F0h+var_1FC2], r9b
 * 0000000140345263: mov     [rbp+20F0h+var_1FC7], al
 * 0000000140345269: mov     r9, rsi
 * 000000014034526C: mov     eax, 0Fh
 * 0000000140345271: ror     r9, cl
 * 0000000140345274: mov     [rbp+20F0h+var_1FC6], al
 * 000000014034527A: xor     eax, eax
 * 000000014034527C: mov     ebx, eax
 * 000000014034527E: mov     [rbp+20F0h+var_1FC8], r11b
 * 0000000140345285: mov     [rbp+20F0h+var_1FC5], r13b
 * 000000014034528C: mov     [rbp+20F0h+var_1FC0], 3
 * 0000000140345293: mov     [rbp+20F0h+var_1FBF], 5
 * 000000014034529A: mov     [rbp+20F0h+var_1FBC], 6
 * 00000001403452A1: mov     [rbp+20F0h+var_1FC1], 7
 * 00000001403452A8: mov     [rbp+20F0h+var_1FBB], 8
 * 00000001403452AF: mov     [rbp+20F0h+var_1FBE], 9
 * 00000001403452B6: mov     [rbp+20F0h+var_1FBA], 0Ah
 * 00000001403452BD: mov     [rbp+20F0h+var_1FC4], 0Bh
 * 00000001403452C4: mov     [rbp+20F0h+var_1FB9], 0Dh
 * 00000001403452CB: mov     [rbp+20F0h+var_1FBD], 0Eh
 * 00000001403452D2: mov     r8, [r10]
 * 00000001403452D5: mov     edx, 10h
 * 00000001403452DA: lea     r14d, [rdx-1]
 * 00000001403452DE: movzx   eax, byte ptr [r10]
 * 00000001403452E2: and     r8, 0FFFFFFFFFFFFFFF0h
 * 00000001403452E6: and     rax, r14
 * 00000001403452E9: movzx   ecx, [rbp+rax+20F0h+var_1FC8]
 * 00000001403452F1: or      r8, rcx
 * 00000001403452F4: ror     r8, 4
 * 00000001403452F8: mov     [r10], r8
 * 00000001403452FB: sub     rdx, r13
 * 00000001403452FE: jnz     short loc_1403452DE
 * 0000000140345300: sub     r8, rbx
 * 0000000140345303: test    [rbp+20F0h+var_20A8], 200h
 * 000000014034530A: mov     [r10], r8
 * 000000014034530D: jnz     short loc_140345322
 * 000000014034530F: xor     r8, r15
 * 0000000140345312: mov     ecx, edi
 * 0000000140345314: bswap   r8
 * 0000000140345317: xor     r8, r9
 * 000000014034531A: ror     r8, cl
 * 000000014034531D: xor     r8, rdi
 * 0000000140345320: jmp     short loc_140345325
 * 0000000140345322: xor     r8, r9
 * 0000000140345325: mov     edx, 0C8h
 * 000000014034532A: mov     [r10], r8
 * 000000014034532D: sub     edx, r11d
 * 0000000140345330: mov     ecx, r8d
 * 0000000140345333: imul    edx, r11d
 * 0000000140345337: not     ecx
 * 0000000140345339: add     r10, 8
 * 000000014034533D: add     r11d, r13d
 * 0000000140345340: add     rbx, rsi
 * 0000000140345343: ror     rdx, cl
 * 0000000140345346: mov     ecx, r8d
 * 0000000140345349: xor     r9, rdx
 * 000000014034534C: rol     r9, cl
 * 000000014034534F: add     r9, rsi
 * 0000000140345352: cmp     r11d, r12d
 * 0000000140345355: jb      loc_1403452D2
 * 000000014034535B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140345362: xor     r11d, r11d
 * 0000000140345365: mov     r12d, 1
 * 000000014034536B: jmp     loc_140345B6E
 * 0000000140345370: mov     r11d, 20h ; ' '
 * 0000000140345376: mov     [r14+0C4h], r12d
 * 000000014034537D: mov     r12, [r14+7A0h]
 * 0000000140345384: lea     rbx, [r14+780h]
 * 000000014034538B: mov     r13d, [r14+810h]
 * 0000000140345392: lea     rdx, [rbp+20F0h+var_1620]
 * 0000000140345399: mov     rsi, r14
 * 000000014034539C: mov     [rbp+20F0h+var_2070], r12
 * 00000001403453A3: lea     r10d, [r11-1Ch]
 * 00000001403453A7: mov     r8d, r11d
 * 00000001403453AA: mov     r9d, r10d
 * 00000001403453AD: lea     r15d, [r11-1Fh]
 * 00000001403453B1: mov     rcx, rbx
 * 00000001403453B4: mov     rax, [rcx]
 * 00000001403453B7: add     r8d, 0FFFFFFF8h
 * 00000001403453BB: mov     [rdx], rax
 * 00000001403453BE: add     rcx, 8
 * 00000001403453C2: add     rdx, 8
 * 00000001403453C6: sub     r9, r15
 * 00000001403453C9: jnz     short loc_1403453B4
 * 00000001403453CB: xor     r15d, r15d
 * 00000001403453CE: lea     r9d, [r15+1]
 * 00000001403453D2: test    r8d, r8d
 * 00000001403453D5: jz      short loc_1403453EF
 * 00000001403453D7: mov     r15d, 0FFFFFFFFh
 * 00000001403453DD: mov     al, [rcx]
 * 00000001403453DF: add     rcx, r9
 * 00000001403453E2: mov     [rdx], al
 * 00000001403453E4: add     rdx, r9
 * 00000001403453E7: add     r8d, r15d
 * 00000001403453EA: jnz     short loc_1403453DD
 * 00000001403453EC: xor     r15d, r15d
 * 00000001403453EF: mov     [r14+7A0h], r15
 * 00000001403453F6: mov     ecx, r11d
 * 00000001403453F9: mov     [r14+810h], r15d
 * 0000000140345400: mov     rax, rbx
 * 0000000140345403: mov     rdx, r10
 * 0000000140345406: mov     [rax], r15
 * 0000000140345409: add     ecx, 0FFFFFFF8h
 * 000000014034540C: add     rax, 8
 * 0000000140345410: sub     rdx, r9
 * 0000000140345413: jnz     short loc_140345406
 * 0000000140345415: mov     edx, 0FFFFFFFFh
 * 000000014034541A: test    ecx, ecx
 * 000000014034541C: jz      short loc_140345428
 * 000000014034541E: mov     [rax], r15b
 * 0000000140345421: add     rax, r9
 * 0000000140345424: add     ecx, edx
 * 0000000140345426: jnz     short loc_14034541E
 * 0000000140345428: mov     eax, [r14+7CCh]
 * 000000014034542F: mov     r9, r14
 * 0000000140345432: add     [r14+810h], eax
 * 0000000140345439: mov     rax, r14
 * 000000014034543C: mov     r10d, [r14+7CCh]
 * 0000000140345443: mov     r11d, [r14+7FCh]
 * 000000014034544A: mov     r15, [r14+800h]
 * 0000000140345451: lea     rcx, [r14+r10]
 * 0000000140345455: cmp     r14, rcx
 * 0000000140345458: jnb     short loc_14034546B
 * 000000014034545A: mov     r8d, 40h ; '@'
 * 0000000140345460: prefetchnta byte ptr [rax]
 * 0000000140345463: add     rax, r8
 * 0000000140345466: cmp     rax, rcx
 * 0000000140345469: jb      short loc_140345460
 * 000000014034546B: mov     r14d, r10d
 * 000000014034546E: mov     r8, r15
 * 0000000140345471: shr     r14d, 7
 * 0000000140345475: test    r14d, r14d
 * 0000000140345478: jz      short loc_1403454F9
 * 000000014034547A: mov     r12, 7010008004002001h
 * 0000000140345484: mov     edx, 8
 * 0000000140345489: lea     edi, [rdx-7]
 * 000000014034548C: mov     rax, [r9]
 * 000000014034548F: mov     ecx, r11d
 * 0000000140345492: xor     rax, r8
 * 0000000140345495: mov     r8, [r9+8]
 * 0000000140345499: rol     rax, cl
 * 000000014034549C: add     r9, 10h
 * 00000001403454A0: xor     r8, rax
 * 00000001403454A3: rol     r8, cl
 * 00000001403454A6: sub     rdx, rdi
 * 00000001403454A9: jnz     short loc_14034548C
 * 00000001403454AB: mov     rcx, r9
 * 00000001403454AE: sub     rcx, [rsp+10F0h+arg_0]
 * 00000001403454B6: xor     rcx, r15
 * 00000001403454B9: mov     rax, rcx
 * 00000001403454BC: rol     rax, 11h
 * 00000001403454C0: xor     rcx, rax
 * 00000001403454C3: mov     rax, r12
 * 00000001403454C6: mul     rcx
 * 00000001403454C9: xor     r11d, edx
 * 00000001403454CC: mov     [rbp+20F0h+var_18C0], rdx
 * 00000001403454D3: xor     r11d, eax
 * 00000001403454D6: mov     edx, 0FFFFFFFFh
 * 00000001403454DB: and     r11d, 3Fh
 * 00000001403454DF: mov     rax, rdi
 * 00000001403454E2: cmovz   r11d, eax
 * 00000001403454E6: add     r14d, edx
 * 00000001403454E9: jnz     short loc_140345484
 * 00000001403454EB: mov     r12, [rbp+20F0h+var_2070]
 * 00000001403454F2: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403454F9: and     r10d, 7Fh
 * 00000001403454FD: mov     r14d, 1
 * 0000000140345503: cmp     r10d, 8
 * 0000000140345507: jb      short loc_14034552B
 * 0000000140345509: mov     edx, r10d
 * 000000014034550C: shr     rdx, 3
 * 0000000140345510: xor     r8, [r9]
 * 0000000140345513: mov     ecx, r11d
 * 0000000140345516: rol     r8, cl
 * 0000000140345519: add     r9, 8
 * 000000014034551D: add     r10d, 0FFFFFFF8h
 * 0000000140345521: sub     rdx, r14
 * 0000000140345524: jnz     short loc_140345510
 * 0000000140345526: mov     edx, 0FFFFFFFFh
 * 000000014034552B: test    r10d, r10d
 * 000000014034552E: jz      short loc_140345545
 * 0000000140345530: movzx   eax, byte ptr [r9]
 * 0000000140345534: mov     ecx, r11d
 * 0000000140345537: xor     r8, rax
 * 000000014034553A: add     r9, r14
 * 000000014034553D: rol     r8, cl
 * 0000000140345540: add     r10d, edx
 * 0000000140345543: jnz     short loc_140345530
 * 0000000140345545: mov     r9, [rsp+10F0h+arg_0]
 * 000000014034554D: lea     rcx, [rbp+20F0h+var_1620]
 * 0000000140345554: mov     edx, 4
 * 0000000140345559: mov     [r9+7A0h], r12
 * 0000000140345560: add     [r9+810h], r13d
 * 0000000140345567: lea     r12d, [rdx-3]
 * 000000014034556B: lea     r10d, [rdx+1Ch]
 * 000000014034556F: mov     rax, [rcx]
 * 0000000140345572: add     r10d, 0FFFFFFF8h
 * 0000000140345576: mov     [rbx], rax
 * 0000000140345579: add     rcx, 8
 * 000000014034557D: add     rbx, 8
 * 0000000140345581: sub     rdx, r12
 * 0000000140345584: jnz     short loc_14034556F
 * 0000000140345586: xor     r11d, r11d
 * 0000000140345589: test    r10d, r10d
 * 000000014034558C: jz      short loc_1403455A6
 * 000000014034558E: mov     r11d, 0FFFFFFFFh
 * 0000000140345594: mov     al, [rcx]
 * 0000000140345596: add     rcx, r12
 * 0000000140345599: mov     [rbx], al
 * 000000014034559B: add     rbx, r12
 * 000000014034559E: add     r10d, r11d
 * 00000001403455A1: jnz     short loc_140345594
 * 00000001403455A3: xor     r11d, r11d
 * 00000001403455A6: mov     [r9+7A0h], r8
 * 00000001403455AD: mov     ebx, [rsi+970h]
 * 00000001403455B3: mov     r15, r11
 * 00000001403455B6: mov     [rbp+20F0h+var_20C8], r11
 * 00000001403455BA: bt      ebx, 1Eh
 * 00000001403455BE: jb      loc_140345C0D
 * 00000001403455C4: bt      ebx, 8
 * 00000001403455C8: jb      loc_140345BF7
 * 00000001403455CE: mov     r12, [rsi+5B0h]
 * 00000001403455D5: mov     edi, 1
 * 00000001403455DA: mov     r13, [rsi+4D8h]
 * 00000001403455E1: mov     ecx, esi
 * 00000001403455E3: mov     r9, rsi
 * 00000001403455E6: mov     [rbp+20F0h+var_1FD8], r11b
 * 00000001403455ED: ror     r9, cl
 * 00000001403455F0: mov     r10, rsi
 * 00000001403455F3: lea     eax, [rdi+1]
 * 00000001403455F6: mov     [rbp+20F0h+var_1FD5], dil
 * 00000001403455FD: mov     [rbp+20F0h+var_1FD3], al
 * 0000000140345603: lea     r15d, [rdi+0Eh]
 * 0000000140345607: lea     eax, [rdi+0Bh]
 * 000000014034560A: mov     [rbp+20F0h+var_1FD0], 3
 * 0000000140345611: mov     [rbp+20F0h+var_1FD7], al
 * 0000000140345617: lea     eax, [rdi+0Eh]
 * 000000014034561A: mov     [rbp+20F0h+var_1FD6], al
 * 0000000140345620: xor     eax, eax
 * 0000000140345622: mov     r14d, eax
 * 0000000140345625: mov     [rbp+20F0h+var_1FD2], 4
 * 000000014034562C: mov     [rbp+20F0h+var_1FCF], 5
 * 0000000140345633: mov     [rbp+20F0h+var_1FCC], 6
 * 000000014034563A: mov     [rbp+20F0h+var_1FD1], 7
 * 0000000140345641: mov     [rbp+20F0h+var_1FCB], 8
 * 0000000140345648: mov     [rbp+20F0h+var_1FCE], 9
 * 000000014034564F: mov     [rbp+20F0h+var_1FCA], 0Ah
 * 0000000140345656: mov     [rbp+20F0h+var_1FD4], 0Bh
 * 000000014034565D: mov     [rbp+20F0h+var_1FC9], 0Dh
 * 0000000140345664: mov     [rbp+20F0h+var_1FCD], 0Eh
 * 000000014034566B: mov     rdx, [r10]
 * 000000014034566E: mov     r8d, 10h
 * 0000000140345674: movzx   eax, byte ptr [r10]
 * 0000000140345678: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014034567C: and     rax, r15
 * 000000014034567F: movzx   ecx, [rbp+rax+20F0h+var_1FD8]
 * 0000000140345687: or      rdx, rcx
 * 000000014034568A: ror     rdx, 4
 * 000000014034568E: mov     [r10], rdx
 * 0000000140345691: sub     r8, rdi
 * 0000000140345694: jnz     short loc_140345674
 * 0000000140345696: sub     rdx, r14
 * 0000000140345699: mov     [r10], rdx
 * 000000014034569C: bt      ebx, 9
 * 00000001403456A0: jb      loc_140345BA4
 * 00000001403456A6: mov     r8, r13
 * 00000001403456A9: mov     ecx, r12d
 * 00000001403456AC: xor     r8, rdx
 * 00000001403456AF: bswap   r8
 * 00000001403456B2: xor     r8, r9
 * 00000001403456B5: ror     r8, cl
 * 00000001403456B8: xor     r8, r12
 * 00000001403456BB: jmp     loc_140345BAA
 * 00000001403456C0: mov     rax, [rsi+7B0h]
 * 00000001403456C7: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403456CB: mov     eax, 2
 * 00000001403456D0: test    al, r13b
 * 00000001403456D3: jz      short loc_1403456DE
 * 00000001403456D5: mov     r14d, [rsi+7CCh]
 * 00000001403456DC: jmp     short loc_1403456E5
 * 00000001403456DE: mov     r14d, [rsi+7F0h]
 * 00000001403456E5: mov     rax, [rsi+4D8h]
 * 00000001403456EC: add     r14d, 0FFFFFF38h
 * 00000001403456F3: shr     r14d, 3
 * 00000001403456F7: mov     [rbp+20F0h+var_20D8], rax
 * 00000001403456FB: mov     rax, [rsi+5B0h]
 * 0000000140345702: mov     [rbp+20F0h+var_2088], rax
 * 0000000140345706: mov     [rbp+20F0h+var_2094], r14d
 * 000000014034570A: mov     [rsi+0C4h], r14d
 * 0000000140345711: rdtsc
 * 0000000140345713: shl     rdx, 20h
 * 0000000140345717: lea     r15, [rsi+780h]
 * 000000014034571E: or      rax, rdx
 * 0000000140345721: mov     ebx, 20h ; ' '
 * 0000000140345726: mov     rcx, rax
 * 0000000140345729: mov     r8d, ebx
 * 000000014034572C: ror     rax, 3
 * 0000000140345730: xor     rcx, rax
 * 0000000140345733: mov     rax, r9
 * 0000000140345736: mul     rcx
 * 0000000140345739: lea     r11d, [rbx-1Ch]
 * 000000014034573D: mov     rcx, r15
 * 0000000140345740: mov     r10, rdx
 * 0000000140345743: mov     [rbp+20F0h+var_18B8], rdx
 * 000000014034574A: xor     r10, rax
 * 000000014034574D: lea     rdx, [rbp+20F0h+var_1600]
 * 0000000140345754: mov     rax, [rsi+7A0h]
 * 000000014034575B: mov     r9d, r11d
 * 000000014034575E: mov     [rbp+20F0h+var_2038], rax
 * 0000000140345765: mov     eax, [rsi+810h]
 * 000000014034576B: mov     [rbp+20F0h+var_20C0], eax
 * 000000014034576E: mov     [rbp+20F0h+var_20C8], r10
 * 0000000140345772: mov     rax, [rcx]
 * 0000000140345775: add     r8d, 0FFFFFFF8h
 * 0000000140345779: mov     [rdx], rax
 * 000000014034577C: add     rcx, 8
 * 0000000140345780: add     rdx, 8
 * 0000000140345784: sub     r9, r12
 * 0000000140345787: jnz     short loc_140345772
 * 0000000140345789: test    r8d, r8d
 * 000000014034578C: jz      short loc_1403457A6
 * 000000014034578E: mov     r9d, 0FFFFFFFFh
 * 0000000140345794: mov     al, [rcx]
 * 0000000140345796: add     rcx, r12
 * 0000000140345799: mov     [rdx], al
 * 000000014034579B: add     rdx, r12
 * 000000014034579E: add     r8d, r9d
 * 00000001403457A1: jnz     short loc_140345794
 * 00000001403457A3: xor     r9d, r9d
 * 00000001403457A6: mov     [rsi+7A0h], r9
 * 00000001403457AD: mov     ecx, ebx
 * 00000001403457AF: mov     [rsi+810h], r9d
 * 00000001403457B6: mov     rax, r15
 * 00000001403457B9: mov     rdx, r11
 * 00000001403457BC: mov     [rax], r9
 * 00000001403457BF: add     ecx, 0FFFFFFF8h
 * 00000001403457C2: add     rax, 8
 * 00000001403457C6: sub     rdx, r12
 * 00000001403457C9: jnz     short loc_1403457BC
 * 00000001403457CB: test    ecx, ecx
 * 00000001403457CD: jz      short loc_1403457DE
 * 00000001403457CF: mov     edx, 0FFFFFFFFh
 * 00000001403457D4: mov     [rax], r9b
 * 00000001403457D7: add     rax, r12
 * 00000001403457DA: add     ecx, edx
 * 00000001403457DC: jnz     short loc_1403457D4
 * 00000001403457DE: mov     eax, [rsi+7CCh]
 * 00000001403457E4: mov     r9, rsi
 * 00000001403457E7: add     [rsi+810h], eax
 * 00000001403457ED: mov     r11d, [rsi+7CCh]
 * 00000001403457F4: mov     ebx, [rsi+7FCh]
 * 00000001403457FA: mov     r8, [rsi+800h]
 * 0000000140345801: lea     rcx, [rsi+r11]
 * 0000000140345805: cmp     rsi, rcx
 * 0000000140345808: jnb     short loc_14034581D
 * 000000014034580A: mov     rax, rsi
 * 000000014034580D: mov     edx, 40h ; '@'
 * 0000000140345812: prefetchnta byte ptr [rax]
 * 0000000140345815: add     rax, rdx
 * 0000000140345818: cmp     rax, rcx
 * 000000014034581B: jb      short loc_140345812
 * 000000014034581D: mov     r12d, r11d
 * 0000000140345820: shr     r12d, 7
 * 0000000140345824: test    r12d, r12d
 * 0000000140345827: jz      short loc_1403458A5
 * 0000000140345829: mov     rdi, r8
 * 000000014034582C: mov     r13d, 1
 * 0000000140345832: mov     r14d, 0FFFFFFFFh
 * 0000000140345838: mov     r10, 7010008004002001h
 * 0000000140345842: mov     eax, 8
 * 0000000140345847: xor     r8, [r9]
 * 000000014034584A: mov     ecx, ebx
 * 000000014034584C: rol     r8, cl
 * 000000014034584F: xor     r8, [r9+8]
 * 0000000140345853: add     r9, 10h
 * 0000000140345857: rol     r8, cl
 * 000000014034585A: sub     rax, r13
 * 000000014034585D: jnz     short loc_140345847
 * 000000014034585F: mov     rcx, r9
 * 0000000140345862: sub     rcx, rsi
 * 0000000140345865: xor     rcx, rdi
 * 0000000140345868: mov     rax, rcx
 * 000000014034586B: rol     rax, 11h
 * 000000014034586F: xor     rcx, rax
 * 0000000140345872: mov     rax, r10
 * 0000000140345875: mul     rcx
 * 0000000140345878: xor     ebx, edx
 * 000000014034587A: mov     [rbp+20F0h+var_18B0], rdx
 * 0000000140345881: xor     ebx, eax
 * 0000000140345883: and     ebx, 3Fh
 * 0000000140345886: cmovz   ebx, r13d
 * 000000014034588A: add     r12d, r14d
 * 000000014034588D: jnz     short loc_140345842
 * 000000014034588F: mov     r10, [rbp+20F0h+var_20C8]
 * 0000000140345893: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034589A: mov     r14d, [rbp+20F0h+var_2094]
 * 000000014034589E: mov     r13d, [rbp+20F0h+var_2040]
 * 00000001403458A5: and     r11d, 7Fh
 * 00000001403458A9: mov     r12d, 1
 * 00000001403458AF: cmp     r11d, 8
 * 00000001403458B3: jb      short loc_1403458D1
 * 00000001403458B5: mov     eax, r11d
 * 00000001403458B8: shr     rax, 3
 * 00000001403458BC: xor     r8, [r9]
 * 00000001403458BF: mov     ecx, ebx
 * 00000001403458C1: rol     r8, cl
 * 00000001403458C4: add     r9, 8
 * 00000001403458C8: add     r11d, 0FFFFFFF8h
 * 00000001403458CC: sub     rax, r12
 * 00000001403458CF: jnz     short loc_1403458BC
 * 00000001403458D1: test    r11d, r11d
 * 00000001403458D4: jz      short loc_1403458F7
 * 00000001403458D6: mov     r13d, 0FFFFFFFFh
 * 00000001403458DC: movzx   eax, byte ptr [r9]
 * 00000001403458E0: mov     ecx, ebx
 * 00000001403458E2: xor     r8, rax
 * 00000001403458E5: add     r9, r12
 * 00000001403458E8: rol     r8, cl
 * 00000001403458EB: add     r11d, r13d
 * 00000001403458EE: jnz     short loc_1403458DC
 * 00000001403458F0: mov     r13d, [rbp+20F0h+var_2040]
 * 00000001403458F7: mov     rax, [rbp+20F0h+var_2038]
 * 00000001403458FE: lea     rcx, [rbp+20F0h+var_1600]
 * 0000000140345905: mov     r9d, 4
 * 000000014034590B: mov     [rsi+7A0h], rax
 * 0000000140345912: mov     eax, [rbp+20F0h+var_20C0]
 * 0000000140345915: mov     edx, r9d
 * 0000000140345918: add     [rsi+810h], eax
 * 000000014034591E: lea     r11d, [r9+1Ch]
 * 0000000140345922: mov     rax, [rcx]
 * 0000000140345925: add     r11d, 0FFFFFFF8h
 * 0000000140345929: mov     [r15], rax
 * 000000014034592C: add     rcx, 8
 * 0000000140345930: add     r15, 8
 * 0000000140345934: sub     rdx, r12
 * 0000000140345937: jnz     short loc_140345922
 * 0000000140345939: test    r11d, r11d
 * 000000014034593C: jz      short loc_14034595B
 * 000000014034593E: mov     r13d, 0FFFFFFFFh
 * 0000000140345944: mov     al, [rcx]
 * 0000000140345946: add     rcx, r12
 * 0000000140345949: mov     [r15], al
 * 000000014034594C: add     r15, r12
 * 000000014034594F: add     r11d, r13d
 * 0000000140345952: jnz     short loc_140345944
 * 0000000140345954: mov     r13d, [rbp+20F0h+var_2040]
 * 000000014034595B: xor     r11d, r11d
 * 000000014034595E: mov     [rsi+7A0h], r8
 * 0000000140345965: test    dword ptr [rsi+970h], 40000000h
 * 000000014034596F: jnz     loc_140345B6E
 * 0000000140345975: mov     rcx, rsi
 * 0000000140345978: lea     r12d, [r11+19h]
 * 000000014034597C: mov     eax, r11d
 * 000000014034597F: lea     r15d, [r11+1]
 * 0000000140345983: xor     [rcx], r10
 * 0000000140345986: add     eax, r15d
 * 0000000140345989: lea     rcx, [rcx+8]
 * 000000014034598D: cmp     eax, r12d
 * 0000000140345990: jb      short loc_140345983
 * 0000000140345992: mov     [rbp+20F0h+var_1E00], r10
 * 0000000140345999: test    r10, r10
 * 000000014034599C: jz      short loc_1403459DE
 * 000000014034599E: test    r14d, r14d
 * 00000001403459A1: jz      short loc_1403459DE
 * 00000001403459A3: mov     edx, r14d
 * 00000001403459A6: dec     rdx
 * 00000001403459A9: lea     rdx, [rcx+rdx*8]
 * 00000001403459AD: xor     [rdx], r10
 * 00000001403459B0: lea     rax, [rbp+20F0h+var_1E00]
 * 00000001403459B7: mov     ecx, r14d
 * 00000001403459BA: lea     rdx, [rdx-8]
 * 00000001403459BE: ror     r10, cl
 * 00000001403459C1: mov     [rbp+20F0h+var_1E00], r10
 * 00000001403459C8: and     r10d, 3Fh
 * 00000001403459CC: btc     [rax], r10
 * 00000001403459D0: sub     r14d, r15d
 * 00000001403459D3: jz      short loc_1403459DE
 * 00000001403459D5: mov     r10, [rbp+20F0h+var_1E00]
 * 00000001403459DC: jmp     short loc_1403459AD
 * 00000001403459DE: bt      r13d, 13h
 * 00000001403459E3: jnb     short loc_140345A30
 * 00000001403459E5: rdtsc
 * 00000001403459E7: shl     rdx, 20h
 * 00000001403459EB: or      rax, rdx
 * 00000001403459EE: mov     rcx, rax
 * 00000001403459F1: ror     rax, 3
 * 00000001403459F5: xor     rcx, rax
 * 00000001403459F8: mov     rax, 7010008004002001h
 * 0000000140345A02: mul     rcx
 * 0000000140345A05: mov     rcx, rdx
 * 0000000140345A08: mov     [rbp+20F0h+var_18A8], rdx
 * 0000000140345A0F: xor     rcx, rax
 * 0000000140345A12: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140345A1C: mul     rcx
 * 0000000140345A1F: shr     rdx, 1
 * 0000000140345A22: lea     rax, [rdx+rdx*2]
 * 0000000140345A26: cmp     rcx, rax
 * 0000000140345A29: jz      short loc_140345A3B
 * 0000000140345A2B: jmp     loc_140345B6B
 * 0000000140345A30: bt      r13d, 8
 * 0000000140345A35: jb      loc_140345B6B
 * 0000000140345A3B: mov     rdi, [rbp+20F0h+var_2088]
 * 0000000140345A3F: mov     eax, 2
 * 0000000140345A44: mov     r14, [rbp+20F0h+var_20D8]
 * 0000000140345A48: mov     ecx, esi
 * 0000000140345A4A: mov     [rbp+20F0h+var_1FA3], al
 * 0000000140345A50: mov     r10, rsi
 * 0000000140345A53: mov     eax, 0Ch
 * 0000000140345A58: mov     [rbp+20F0h+var_1FA2], r9b
 * 0000000140345A5F: mov     [rbp+20F0h+var_1FA7], al
 * 0000000140345A65: mov     r9, rsi
 * 0000000140345A68: mov     eax, 0Fh
 * 0000000140345A6D: ror     r9, cl
 * 0000000140345A70: mov     [rbp+20F0h+var_1FA6], al
 * 0000000140345A76: xor     eax, eax
 * 0000000140345A78: mov     ebx, eax
 * 0000000140345A7A: mov     [rbp+20F0h+var_1FA8], r11b
 * 0000000140345A81: mov     [rbp+20F0h+var_1FA5], r15b
 * 0000000140345A88: mov     [rbp+20F0h+var_1FA0], 3
 * 0000000140345A8F: mov     [rbp+20F0h+var_1F9F], 5
 * 0000000140345A96: mov     [rbp+20F0h+var_1F9C], 6
 * 0000000140345A9D: mov     [rbp+20F0h+var_1FA1], 7
 * 0000000140345AA4: mov     [rbp+20F0h+var_1F9B], 8
 * 0000000140345AAB: mov     [rbp+20F0h+var_1F9E], 9
 * 0000000140345AB2: mov     [rbp+20F0h+var_1F9A], 0Ah
 * 0000000140345AB9: mov     [rbp+20F0h+var_1FA4], 0Bh
 * 0000000140345AC0: mov     [rbp+20F0h+var_1F99], 0Dh
 * 0000000140345AC7: mov     [rbp+20F0h+var_1F9D], 0Eh
 * 0000000140345ACE: mov     rdx, [r10]
 * 0000000140345AD1: mov     r8d, 10h
 * 0000000140345AD7: lea     r13d, [r8-1]
 * 0000000140345ADB: movzx   eax, byte ptr [r10]
 * 0000000140345ADF: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140345AE3: and     rax, r13
 * 0000000140345AE6: movzx   ecx, [rbp+rax+20F0h+var_1FA8]
 * 0000000140345AEE: or      rdx, rcx
 * 0000000140345AF1: ror     rdx, 4
 * 0000000140345AF5: mov     [r10], rdx
 * 0000000140345AF8: sub     r8, r15
 * 0000000140345AFB: jnz     short loc_140345ADB
 * 0000000140345AFD: sub     rdx, rbx
 * 0000000140345B00: test    [rbp+20F0h+var_2040], 200h
 * 0000000140345B0A: mov     [r10], rdx
 * 0000000140345B0D: jnz     short loc_140345B25
 * 0000000140345B0F: mov     r8, r14
 * 0000000140345B12: mov     ecx, edi
 * 0000000140345B14: xor     r8, rdx
 * 0000000140345B17: bswap   r8
 * 0000000140345B1A: xor     r8, r9
 * 0000000140345B1D: ror     r8, cl
 * 0000000140345B20: xor     r8, rdi
 * 0000000140345B23: jmp     short loc_140345B2B
 * 0000000140345B25: mov     r8, r9
 * 0000000140345B28: xor     r8, rdx
 * 0000000140345B2B: mov     edx, 0C8h
 * 0000000140345B30: mov     [r10], r8
 * 0000000140345B33: sub     edx, r11d
 * 0000000140345B36: mov     ecx, r8d
 * 0000000140345B39: imul    edx, r11d
 * 0000000140345B3D: not     ecx
 * 0000000140345B3F: add     r10, 8
 * 0000000140345B43: add     r11d, r15d
 * 0000000140345B46: add     rbx, rsi
 * 0000000140345B49: ror     rdx, cl
 * 0000000140345B4C: mov     ecx, r8d
 * 0000000140345B4F: xor     r9, rdx
 * 0000000140345B52: rol     r9, cl
 * 0000000140345B55: add     r9, rsi
 * 0000000140345B58: cmp     r11d, r12d
 * 0000000140345B5B: jb      loc_140345ACE
 * 0000000140345B61: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140345B68: xor     r11d, r11d
 * 0000000140345B6B: mov     r12, r15
 * 0000000140345B6E: rdtsc
 * 0000000140345B70: shl     rdx, 20h
 * 0000000140345B74: mov     r9, 7010008004002001h
 * 0000000140345B7E: or      rax, rdx
 * 0000000140345B81: mov     [rbp+20F0h+var_20C0], r12d
 * 0000000140345B85: mov     rcx, rax
 * 0000000140345B88: ror     rax, 3
 * 0000000140345B8C: xor     rcx, rax
 * 0000000140345B8F: mov     rax, r9
 * 0000000140345B92: mul     rcx
 * 0000000140345B95: mov     r15, rax
 * 0000000140345B98: mov     [rbp+20F0h+var_18A0], rdx
 * 0000000140345B9F: xor     r15, rdx
 * 0000000140345BA2: jmp     short loc_140345C17
 * 0000000140345BA4: mov     r8, r9
 * 0000000140345BA7: xor     r8, rdx
 * 0000000140345BAA: mov     edx, 0C8h
 * 0000000140345BAF: mov     [r10], r8
 * 0000000140345BB2: sub     edx, r11d
 * 0000000140345BB5: mov     ecx, r8d
 * 0000000140345BB8: imul    edx, r11d
 * 0000000140345BBC: not     ecx
 * 0000000140345BBE: add     r10, 8
 * 0000000140345BC2: inc     r11d
 * 0000000140345BC5: add     r14, rsi
 * 0000000140345BC8: mov     edi, 1
 * 0000000140345BCD: ror     rdx, cl
 * 0000000140345BD0: mov     ecx, r8d
 * 0000000140345BD3: xor     r9, rdx
 * 0000000140345BD6: rol     r9, cl
 * 0000000140345BD9: add     r9, rsi
 * 0000000140345BDC: cmp     r11d, 19h
 * 0000000140345BE0: jb      loc_14034566B
 * 0000000140345BE6: mov     r15, [rbp+20F0h+var_20C8]
 * 0000000140345BEA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140345BF1: mov     r12d, 1
 * 0000000140345BF7: mov     rax, [rsi+260h]
 * 0000000140345BFE: lea     rcx, [rsi+7E8h]
 * 0000000140345C05: call    KeGuardDispatchICall
 * 0000000140345C0A: xor     r11d, r11d
 * 0000000140345C0D: mov     r9, 7010008004002001h
 * 0000000140345C17: mov     r13, [rsp+10F0h+arg_0]
 * 0000000140345C1F: test    dword ptr [r13+970h], 10000000h
 * 0000000140345C2A: mov     r14, [r13+7C0h]
 * 0000000140345C31: jz      short loc_140345C68
 * 0000000140345C33: rdtsc
 * 0000000140345C35: shl     rdx, 20h
 * 0000000140345C39: or      rax, rdx
 * 0000000140345C3C: mov     rcx, rax
 * 0000000140345C3F: ror     rax, 3
 * 0000000140345C43: xor     rcx, rax
 * 0000000140345C46: mov     rax, r9
 * 0000000140345C49: mul     rcx
 * 0000000140345C4C: mov     r14, rdx
 * 0000000140345C4F: mov     [rbp+20F0h+var_1898], rdx
 * 0000000140345C56: xor     r14, rax
 * 0000000140345C59: and     r14, 0Fh
 * 0000000140345C5D: shl     r14, 4
 * 0000000140345C61: add     r14, [r13+5C0h]
 * 0000000140345C68: mov     r8d, 28h ; '('
 * 0000000140345C6E: lea     rbx, [r13+8D8h]
 * 0000000140345C75: mov     rcx, rbx
 * 0000000140345C78: lea     rdx, [rbp+20F0h+var_1BB0]
 * 0000000140345C7F: lea     r9d, [r8-23h]
 * 0000000140345C83: mov     rax, [rcx]
 * 0000000140345C86: add     r8d, 0FFFFFFF8h
 * 0000000140345C8A: mov     [rdx], rax
 * 0000000140345C8D: add     rcx, 8
 * 0000000140345C91: add     rdx, 8
 * 0000000140345C95: sub     r9, r12
 * 0000000140345C98: jnz     short loc_140345C83
 * 0000000140345C9A: test    r8d, r8d
 * 0000000140345C9D: jz      short loc_140345CB7
 * 0000000140345C9F: mov     r11d, 0FFFFFFFFh
 * 0000000140345CA5: mov     al, [rcx]
 * 0000000140345CA7: add     rcx, r12
 * 0000000140345CAA: mov     [rdx], al
 * 0000000140345CAC: add     rdx, r12
 * 0000000140345CAF: add     r8d, r11d
 * 0000000140345CB2: jnz     short loc_140345CA5
 * 0000000140345CB4: xor     r11d, r11d
 * 0000000140345CB7: mov     eax, [r13+970h]
 * 0000000140345CBE: mov     ecx, 8000h
 * 0000000140345CC3: test    ecx, eax
 * 0000000140345CC5: jnz     short loc_140345CD0
 * 0000000140345CC7: cmp     [rbx], r11d
 * 0000000140345CCA: jnz     loc_140346329
 * 0000000140345CD0: bt      eax, 1Eh
 * 0000000140345CD4: jb      loc_14034652F
 * 0000000140345CDA: mov     al, [r13+900h]
 * 0000000140345CE1: mov     r8, r15
 * 0000000140345CE4: sub     al, r12b
 * 0000000140345CE7: xor     r8, rsi
 * 0000000140345CEA: movzx   r10d, al
 * 0000000140345CEE: mov     r11d, 3Fh ; '?'
 * 0000000140345CF4: sub     r11d, r10d
 * 0000000140345CF7: rdtsc
 * 0000000140345CF9: shl     rdx, 20h
 * 0000000140345CFD: mov     rsi, 7010008004002001h
 * 0000000140345D07: or      rax, rdx
 * 0000000140345D0A: mov     rcx, rax
 * 0000000140345D0D: ror     rax, 3
 * 0000000140345D11: xor     rcx, rax
 * 0000000140345D14: mov     rax, rsi
 * 0000000140345D17: mul     rcx
 * 0000000140345D1A: mov     [rbp+20F0h+var_1890], rdx
 * 0000000140345D21: xor     rax, rdx
 * 0000000140345D24: xor     edx, edx
 * 0000000140345D26: div     r11
 * 0000000140345D29: lea     r9d, [r10+rdx]
 * 0000000140345D2D: rdtsc
 * 0000000140345D2F: shl     rdx, 20h
 * 0000000140345D33: or      rax, rdx
 * 0000000140345D36: mov     rcx, rax
 * 0000000140345D39: ror     rax, 3
 * 0000000140345D3D: xor     rcx, rax
 * 0000000140345D40: mov     rax, rsi
 * 0000000140345D43: mul     rcx
 * 0000000140345D46: xor     rax, rdx
 * 0000000140345D49: mov     [rbp+20F0h+var_1888], rdx
 * 0000000140345D50: xor     edx, edx
 * 0000000140345D52: div     r11
 * 0000000140345D55: add     edx, r10d
 * 0000000140345D58: cmp     edx, r9d
 * 0000000140345D5B: jz      short loc_140345D2D
 * 0000000140345D5D: mov     rsi, [r13+778h]
 * 0000000140345D64: xor     r11d, r11d
 * 0000000140345D67: mov     r12, [r13+770h]
 * 0000000140345D6E: mov     eax, r9d
 * 0000000140345D71: bts     r8, rax
 * 0000000140345D75: mov     eax, edx
 * 0000000140345D77: btr     r8, rax
 * 0000000140345D7B: cmp     dword ptr [r13+904h], 3
 * 0000000140345D83: jnz     loc_140345F24
 * 0000000140345D89: mov     r13, [rbp+20F0h+var_20F0]
 * 0000000140345D8D: test    r13, r13
 * 0000000140345D90: jz      loc_140345F1C
 * 0000000140345D96: mov     rcx, [rsp+10F0h+arg_0]
 * 0000000140345D9E: lea     edx, [r11+1]
 * 0000000140345DA2: mov     rax, [rcx+368h]
 * 0000000140345DA9: mov     byte ptr [rsi], 13h
 * 0000000140345DAC: mov     [rsi+1], dl
 * 0000000140345DAF: mov     [rsi+2], r11w
 * 0000000140345DB4: mov     [rsi+18h], rax
 * 0000000140345DB8: mov     [rsi+20h], r13
 * 0000000140345DBC: mov     [rsi+38h], r11
 * 0000000140345DC0: mov     [rsi+10h], r11
 * 0000000140345DC4: mov     [rsi+28h], r8
 * 0000000140345DC8: mov     rax, [rcx+358h]
 * 0000000140345DCF: mov     rcx, [r13+8]
 * 0000000140345DD3: mov     r8, [r13+0]
 * 0000000140345DD7: mov     edx, [r13+10h]
 * 0000000140345DDB: call    KeGuardDispatchICall
 * 0000000140345DE0: mov     r9, [r13+0]
 * 0000000140345DE4: mov     rcx, r13
 * 0000000140345DE7: rol     rcx, 11h
 * 0000000140345DEB: mov     rax, 7010008004002001h
 * 0000000140345DF5: xor     rcx, r13
 * 0000000140345DF8: mov     r10d, 4
 * 0000000140345DFE: mul     rcx
 * 0000000140345E01: mov     [rbp+20F0h+var_1880], rdx
 * 0000000140345E08: xor     rdx, rax
 * 0000000140345E0B: lea     rax, [r13+18h]
 * 0000000140345E0F: mov     r8, rdx
 * 0000000140345E12: xor     r11d, r11d
 * 0000000140345E15: lea     r13d, [r10-3]
 * 0000000140345E19: xor     [rax], r8
 * 0000000140345E1C: mov     ecx, r10d
 * 0000000140345E1F: rol     r8, cl
 * 0000000140345E22: lea     rax, [rax-8]
 * 0000000140345E26: sub     r10d, r13d
 * 0000000140345E29: jnz     short loc_140345E19
 * 0000000140345E2B: and     dl, 0Fh
 * 0000000140345E2E: cmp     dl, 7
 * 0000000140345E31: jnb     short loc_140345EA0
 * 0000000140345E33: mov     rcx, r9
 * 0000000140345E36: mov     rax, 7010008004002001h
 * 0000000140345E40: rol     rcx, 11h
 * 0000000140345E44: mov     r10d, 6
 * 0000000140345E4A: xor     rcx, r9
 * 0000000140345E4D: mul     rcx
 * 0000000140345E50: mov     [rbp+20F0h+var_1878], rdx
 * 0000000140345E57: xor     rdx, rax
 * 0000000140345E5A: add     r8, rdx
 * 0000000140345E5D: lea     rax, [r9+28h]
 * 0000000140345E61: movsx   edx, word ptr [r9+8]
 * 0000000140345E66: xor     [rax], r8
 * 0000000140345E69: mov     ecx, r10d
 * 0000000140345E6C: rol     r8, cl
 * 0000000140345E6F: lea     rax, [rax-8]
 * 0000000140345E73: sub     r10d, r13d
 * 0000000140345E76: jnz     short loc_140345E66
 * 0000000140345E78: sub     rdx, 30h ; '0'
 * 0000000140345E7C: shr     rdx, 3
 * 0000000140345E80: test    edx, edx
 * 0000000140345E82: jz      short loc_140345EA0
 * 0000000140345E84: movsxd  r10, edx
 * 0000000140345E87: add     r10, 5
 * 0000000140345E8B: lea     r10, [r9+r10*8]
 * 0000000140345E8F: xor     [r10], r8
 * 0000000140345E92: mov     ecx, edx
 * 0000000140345E94: rol     r8, cl
 * 0000000140345E97: lea     r10, [r10-8]
 * 0000000140345E9B: sub     edx, r13d
 * 0000000140345E9E: jnz     short loc_140345E8F
 * 0000000140345EA0: mov     r13, [rsp+10F0h+arg_0]
 * 0000000140345EA8: mov     r10d, 1
 * 0000000140345EAE: mov     [rsi+40h], r15
 * 0000000140345EB2: test    dword ptr [r13+970h], 100h
 * 0000000140345EBD: jz      loc_140345F4B
 * 0000000140345EC3: lea     r9, [r14-48h]
 * 0000000140345EC7: mov     [r9+40h], rsi
 * 0000000140345ECB: rdtsc
 * 0000000140345ECD: shl     rdx, 20h
 * 0000000140345ED1: mov     r14, 7010008004002001h
 * 0000000140345EDB: or      rax, rdx
 * 0000000140345EDE: mov     r8d, 19h
 * 0000000140345EE4: mov     rcx, rax
 * 0000000140345EE7: ror     rax, 3
 * 0000000140345EEB: xor     rcx, rax
 * 0000000140345EEE: mov     rax, r14
 * 0000000140345EF1: mul     rcx
 * 0000000140345EF4: mov     [rbp+20F0h+var_1870], rdx
 * 0000000140345EFB: xor     rdx, rax
 * 0000000140345EFE: lea     rax, [r9+48h]
 * 0000000140345F02: xor     [rax], rdx
 * 0000000140345F05: lea     rax, [rax+8]
 * 0000000140345F09: sub     r8, r10
 * 0000000140345F0C: jnz     short loc_140345F02
 * 0000000140345F0E: mov     dword ptr [r9+48h], 48513148h
 * 0000000140345F16: mov     [r9+20h], rdx
 * 0000000140345F1A: jmp     short loc_140345F58
 * 0000000140345F1C: mov     r13, [rsp+10F0h+arg_0]
 * 0000000140345F24: mov     byte ptr [rsi], 13h
 * 0000000140345F27: mov     r10d, 1
 * 0000000140345F2D: mov     [rsi+1], r10b
 * 0000000140345F31: mov     [rsi+2], r11w
 * 0000000140345F36: mov     [rsi+18h], r14
 * 0000000140345F3A: mov     [rsi+20h], r8
 * 0000000140345F3E: mov     [rsi+38h], r11
 * 0000000140345F42: mov     [rsi+10h], r11
 * 0000000140345F46: jmp     loc_140345EAE
 * 0000000140345F4B: mov     r9, rsi
 * 0000000140345F4E: mov     r14, 7010008004002001h
 * 0000000140345F58: mov     r8, [r13+0A68h]
 * 0000000140345F5F: test    r8, r8
 * 0000000140345F62: jz      loc_140345FE9
 * 0000000140345F68: mov     r8, [r8+20h]
 * 0000000140345F6C: mov     r15d, 0Fh
 * 0000000140345F72: mov     rcx, r8
 * 0000000140345F75: shr     rcx, 4
 * 0000000140345F79: xor     rcx, r8
 * 0000000140345F7C: shr     rcx, 4
 * 0000000140345F80: xor     rcx, [r13+580h]
 * 0000000140345F87: mov     al, cl
 * 0000000140345F89: mov     r11, rcx
 * 0000000140345F8C: and     al, r15b
 * 0000000140345F8F: movzx   r10d, al
 * 0000000140345F93: lea     eax, [r15-0Eh]
 * 0000000140345F97: cmovz   r10d, eax
 * 0000000140345F9B: xor     eax, eax
 * 0000000140345F9D: mov     edx, eax
 * 0000000140345F9F: test    r10b, r10b
 * 0000000140345FA2: jz      short loc_140345FC7
 * 0000000140345FA4: mov     rdx, rcx
 * 0000000140345FA7: and     rdx, r15
 * 0000000140345FAA: add     rdx, r8
 * 0000000140345FAD: mov     r8, [rdx]
 * 0000000140345FB0: mov     rax, r8
 * 0000000140345FB3: shr     rax, 4
 * 0000000140345FB7: xor     rax, r8
 * 0000000140345FBA: shr     rax, 4
 * 0000000140345FBE: xor     rcx, rax
 * 0000000140345FC1: add     r10b, 0FFh
 * 0000000140345FC5: jnz     short loc_140345FA4
 * 0000000140345FC7: mov     rax, r11
 * 0000000140345FCA: mov     rcx, r9
 * 0000000140345FCD: xor     rcx, r11
 * 0000000140345FD0: and     eax, 1000h
 * 0000000140345FD5: xor     r11d, r11d
 * 0000000140345FD8: test    rax, rax
 * 0000000140345FDB: cmovz   rcx, r9
 * 0000000140345FDF: mov     [rdx], rcx
 * 0000000140345FE2: mov     r9, [r13+0A68h]
 * 0000000140345FE9: lock or [rsp+10F0h+var_10F0], r11d
 * 0000000140345FEE: mov     ecx, [r13+820h]
 * 0000000140345FF5: test    ecx, ecx
 * 0000000140345FF7: jz      loc_140346279
 * 0000000140345FFD: sub     ecx, 1
 * 0000000140346000: jz      loc_140346262
 * 0000000140346006: sub     ecx, 1
 * 0000000140346009: jz      loc_14034624F
 * 000000014034600F: sub     ecx, 1
 * 0000000140346012: jz      loc_140346197
 * 0000000140346018: cmp     ecx, 1
 * 000000014034601B: jz      loc_1403460A2
 * 0000000140346021: mov     r8, [r13+978h]
 * 0000000140346028: mov     [r8+48h], r9
 * 000000014034602C: lock or [rsp+10F0h+var_10F0], r11d
 * 0000000140346031: rdtsc
 * 0000000140346033: shl     rdx, 20h
 * 0000000140346037: or      rax, rdx
 * 000000014034603A: mov     rcx, rax
 * 000000014034603D: mov     rdx, rax
 * 0000000140346040: ror     rcx, 3
 * 0000000140346044: mov     rax, r14
 * 0000000140346047: xor     rdx, rcx
 * 000000014034604A: mul     rdx
 * 000000014034604D: mov     rcx, rdx
 * 0000000140346050: mov     [rbp+20F0h+var_1868], rdx
 * 0000000140346057: xor     rcx, rax
 * 000000014034605A: mov     rax, 0ABCC77118461CEFDh
 * 0000000140346064: mul     rcx
 * 0000000140346067: shr     rdx, 1Ah
 * 000000014034606B: imul    rax, rdx, 5F5E100h
 * 0000000140346072: sub     rcx, rax
 * 0000000140346075: mov     rax, 0D6BF94D5E57A42BDh
 * 000000014034607F: add     rcx, 47868C00h
 * 0000000140346086: imul    rcx
 * 0000000140346089: add     rdx, rcx
 * 000000014034608C: sar     rdx, 17h
 * 0000000140346090: mov     rax, rdx
 * 0000000140346093: shr     rax, 3Fh
 * 0000000140346097: add     rdx, rax
 * 000000014034609A: mov     [r8], edx
 * 000000014034609D: jmp     loc_140346324
 * 00000001403460A2: mov     r8, [r13+9C0h]
 * 00000001403460A9: xor     r9d, r9d
 * 00000001403460AC: mov     rcx, [r13+9D0h]
 * 00000001403460B3: mov     rdx, rsi
 * 00000001403460B6: mov     rax, [r13+9C8h]
 * 00000001403460BD: mov     rdi, [r13+978h]
 * 00000001403460C4: mov     byte ptr [r8], 12h
 * 00000001403460C8: mov     byte ptr [r8+2], 58h ; 'X'
 * 00000001403460CD: mov     [r8+50h], r11b
 * 00000001403460D1: mov     [r8+8], rdi
 * 00000001403460D5: mov     [r8+20h], rax
 * 00000001403460D9: mov     [r8+28h], r11
 * 00000001403460DD: mov     [r8+30h], rcx
 * 00000001403460E1: mov     [r8+51h], r11b
 * 00000001403460E5: mov     [r8+38h], r11
 * 00000001403460E9: mov     [r8+52h], r11b
 * 00000001403460ED: xor     r8d, r8d
 * 00000001403460F0: mov     rax, [r13+2B8h]
 * 00000001403460F7: mov     rcx, [r13+9C0h]
 * 00000001403460FE: call    KeGuardDispatchICall
 * 0000000140346103: xor     r11d, r11d
 * 0000000140346106: test    al, al
 * 0000000140346108: jnz     loc_140346324
 * 000000014034610E: lea     r12d, [r11+1]
 * 0000000140346112: cmp     [rbx], r11d
 * 0000000140346115: jnz     short loc_140346147
 * 0000000140346117: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140346121: add     rax, r13
 * 0000000140346124: mov     [r13+8E0h], rax
 * 000000014034612B: mov     [r13+8E8h], r11
 * 0000000140346132: mov     qword ptr [r13+8F0h], 104h
 * 000000014034613D: mov     [r13+8F8h], rdi
 * 0000000140346144: mov     [rbx], r12d
 * 0000000140346147: mov     edx, 28h ; '('
 * 000000014034614C: lea     rcx, [rbp+20F0h+var_1BB0]
 * 0000000140346153: lea     r13d, [rdx-23h]
 * 0000000140346157: mov     rax, [rbx]
 * 000000014034615A: add     edx, 0FFFFFFF8h
 * 000000014034615D: mov     [rcx], rax
 * 0000000140346160: add     rbx, 8
 * 0000000140346164: add     rcx, 8
 * 0000000140346168: sub     r13, r12
 * 000000014034616B: jnz     short loc_140346157
 * 000000014034616D: mov     r13, [rsp+10F0h+arg_0]
 * 0000000140346175: test    edx, edx
 * 0000000140346177: jz      loc_140346324
 * 000000014034617D: mov     r11d, 0FFFFFFFFh
 * 0000000140346183: mov     al, [rbx]
 * 0000000140346185: add     rbx, r12
 * 0000000140346188: mov     [rcx], al
 * 000000014034618A: add     rcx, r12
 * 000000014034618D: add     edx, r11d
 * 0000000140346190: jnz     short loc_140346183
 * 0000000140346192: jmp     loc_140346321
 * 0000000140346197: mov     rdx, [r13+978h]
 * 000000014034619E: mov     rax, [r13+680h]
 * 00000001403461A5: mov     rcx, [rdx+rax]
 * 00000001403461A9: test    rcx, rcx
 * 00000001403461AC: jz      loc_14034623A
 * 00000001403461B2: mov     r12d, 1
 * 00000001403461B8: cmp     [rbx], r11d
 * 00000001403461BB: jnz     short loc_1403461ED
 * 00000001403461BD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403461C7: add     rax, r13
 * 00000001403461CA: mov     [r13+8E0h], rax
 * 00000001403461D1: mov     [r13+8E8h], r11
 * 00000001403461D8: mov     qword ptr [r13+8F0h], 104h
 * 00000001403461E3: mov     [r13+8F8h], rcx
 * 00000001403461EA: mov     [rbx], r12d
 * 00000001403461ED: mov     r8d, 28h ; '('
 * 00000001403461F3: lea     rcx, [rbp+20F0h+var_1BB0]
 * 00000001403461FA: lea     r13d, [r8-23h]
 * 00000001403461FE: mov     rax, [rbx]
 * 0000000140346201: add     r8d, 0FFFFFFF8h
 * 0000000140346205: mov     [rcx], rax
 * 0000000140346208: add     rbx, 8
 * 000000014034620C: add     rcx, 8
 * 0000000140346210: sub     r13, r12
 * 0000000140346213: jnz     short loc_1403461FE
 * 0000000140346215: mov     r13, [rsp+10F0h+arg_0]
 * 000000014034621D: test    r8d, r8d
 * 0000000140346220: jz      short loc_14034623A
 * 0000000140346222: mov     r11d, 0FFFFFFFFh
 * 0000000140346228: mov     al, [rbx]
 * 000000014034622A: add     rbx, r12
 * 000000014034622D: mov     [rcx], al
 * 000000014034622F: add     rcx, r12
 * 0000000140346232: add     r8d, r11d
 * 0000000140346235: jnz     short loc_140346228
 * 0000000140346237: xor     r11d, r11d
 * 000000014034623A: lock or [rsp+10F0h+var_10F0], r11d
 * 000000014034623F: mov     rax, [r13+680h]
 * 0000000140346246: mov     [rdx+rax], rsi
 * 000000014034624A: jmp     loc_140346324
 * 000000014034624F: mov     rax, [r13+7A8h]
 * 0000000140346256: mov     [rax+80h], r9
 * 000000014034625D: jmp     loc_140346324
 * 0000000140346262: mov     rcx, [r13+7A8h]
 * 0000000140346269: mov     rax, [r13+618h]
 * 0000000140346270: mov     [rcx+rax], r9
 * 0000000140346274: jmp     loc_140346324
 * 0000000140346279: rdtsc
 * 000000014034627B: shl     rdx, 20h
 * 000000014034627F: or      rax, rdx
 * 0000000140346282: mov     rcx, rax
 * 0000000140346285: mov     rdx, rax
 * 0000000140346288: ror     rcx, 3
 * 000000014034628C: mov     rax, r14
 * 000000014034628F: xor     rdx, rcx
 * 0000000140346292: mul     rdx
 * 0000000140346295: mov     r8, rax
 * 0000000140346298: mov     [rbp+20F0h+var_1860], rdx
 * 000000014034629F: xor     r8, rdx
 * 00000001403462A2: mov     rax, 0ABCC77118461CEFDh
 * 00000001403462AC: mul     r8
 * 00000001403462AF: shr     rdx, 1Ah
 * 00000001403462B3: imul    rcx, rdx, 5F5E100h
 * 00000001403462BA: sub     r8, rcx
 * 00000001403462BD: sub     rdi, r8
 * 00000001403462C0: rdtsc
 * 00000001403462C2: shl     rdx, 20h
 * 00000001403462C6: or      rax, rdx
 * 00000001403462C9: mov     [rsp+10F0h+BugCheckParameter4], r9
 * 00000001403462CE: mov     rcx, rax
 * 00000001403462D1: mov     rdx, rax
 * 00000001403462D4: ror     rcx, 3
 * 00000001403462D8: mov     rax, r14
 * 00000001403462DB: xor     rdx, rcx
 * 00000001403462DE: mov     rcx, r12
 * 00000001403462E1: mul     rdx
 * 00000001403462E4: mov     r8, rdx
 * 00000001403462E7: mov     [rbp+20F0h+var_1858], rdx
 * 00000001403462EE: xor     r8, rax
 * 00000001403462F1: mov     rax, 346DC5D63886594Bh
 * 00000001403462FB: mul     r8
 * 00000001403462FE: shr     rdx, 0Bh
 * 0000000140346302: imul    rax, rdx, 2710h
 * 0000000140346309: mov     rdx, rdi
 * 000000014034630C: sub     r8, rax
 * 000000014034630F: mov     rax, [r13+1D0h]
 * 0000000140346316: mov     r9d, r8d
 * 0000000140346319: xor     r8d, r8d
 * 000000014034631C: call    KeGuardDispatchICall
 * 0000000140346321: xor     r11d, r11d
 * 0000000140346324: mov     ecx, 8000h
 * 0000000140346329: cmp     [rbp+20F0h+var_1BB0], r11d
 * 0000000140346330: jz      loc_14034652F
 * 0000000140346336: test    [r13+970h], ecx
 * 000000014034633D: jnz     loc_14034652F
 * 0000000140346343: mov     r13, [rbp+20F0h+var_1B98]
 * 000000014034634A: mov     rbx, [rbp+20F0h+var_1B90]
 * 0000000140346351: mov     rdi, [rbp+20F0h+var_1BA0]
 * 0000000140346358: mov     r14, [rbp+20F0h+var_1BA8]
 * 000000014034635F: mov     rax, [rsp+10F0h+arg_0]
 * 0000000140346367: mov     [rbp+20F0h+var_2038], r13
 * 000000014034636E: mov     [rbp+20F0h+var_20C8], rbx
 * 0000000140346372: mov     [rbp+20F0h+var_2088], rdi
 * 0000000140346376: mov     [rbp+20F0h+var_20F0], r14
 * 000000014034637A: mov     [rbp+20F0h+var_2008], rax
 * 0000000140346381: mov     rax, cr8
 * 0000000140346385: mov     r8d, 2
 * 000000014034638B: cmp     al, r8b
 * 000000014034638E: jnb     short loc_140346398
 * 0000000140346390: mov     rax, cr8
 * 0000000140346394: mov     cr8, r8
 * 0000000140346398: mov     rdx, gs:20h
 * 00000001403463A1: mov     rax, [rbp+20F0h+var_2008]
 * 00000001403463A8: mov     rcx, [rax+620h]
 * 00000001403463AF: mov     rsi, [rdx+rcx]
 * 00000001403463B3: mov     rcx, gs:20h
 * 00000001403463BC: mov     r9, [rbp+20F0h+var_2008]
 * 00000001403463C3: mov     rax, [r9+630h]
 * 00000001403463CA: mov     r15, [rcx+rax]
 * 00000001403463CE: mov     rax, [r9+628h]
 * 00000001403463D5: mov     [rbp+20F0h+var_2070], r15
 * 00000001403463DC: cmp     [rdx+rax], r11b
 * 00000001403463E0: jz      short loc_140346401
 * 00000001403463E2: lea     rax, [rbp+20F0h+var_2008]
 * 00000001403463E9: cmp     rax, rsi
 * 00000001403463EC: ja      short loc_140346401
 * 00000001403463EE: lea     rax, [rsi-6000h]
 * 00000001403463F5: lea     rcx, [rbp+20F0h+var_2008]
 * 00000001403463FC: cmp     rcx, rax
 * 00000001403463FF: jnb     short loc_140346413
 * 0000000140346401: mov     rax, [rbp+20F0h+var_2008]
 * 0000000140346408: mov     rcx, [rax+660h]
 * 000000014034640F: mov     rsi, [r15+rcx]
 * 0000000140346413: mov     r9, [rbp+20F0h+var_2008]
 * 000000014034641A: test    dword ptr [r9+970h], 8000000h
 * 0000000140346425: jnz     loc_140346822
 * 000000014034642B: mov     r12, cr0
 * 000000014034642F: mov     rax, r12
 * 0000000140346432: btr     rax, 10h
 * 0000000140346437: mov     cr0, rax
 * 000000014034643A: mov     eax, [r9+0A70h]
 * 0000000140346441: lea     r14, [r9+0A78h]
 * 0000000140346448: shl     rax, 4
 * 000000014034644C: lea     r10, [r9+0A78h]
 * 0000000140346453: add     r14, rax
 * 0000000140346456: mov     r8d, r11d
 * 0000000140346459: mov     rdx, r14
 * 000000014034645C: cmp     [r9+0A74h], r11d
 * 0000000140346463: jbe     short loc_1403464B4
 * 0000000140346465: mov     r11d, 1
 * 000000014034646B: lea     r13d, [r11+0Fh]
 * 000000014034646F: mov     rcx, [rdx]
 * 0000000140346472: mov     rax, [rdx+8]
 * 0000000140346476: mov     [rcx], rax
 * 0000000140346479: mov     rcx, cr4
 * 000000014034647C: test    rcx, 20080h
 * 0000000140346483: jz      short loc_140346495
 * 0000000140346485: mov     rax, rcx
 * 0000000140346488: btc     rax, 7
 * 000000014034648D: mov     cr4, rax
 * 0000000140346490: mov     cr4, rcx
 * 0000000140346493: jmp     short loc_14034649B
 * 0000000140346495: mov     rax, cr3
 * 0000000140346498: mov     cr3, rax
 * 000000014034649B: add     rdx, r13
 * 000000014034649E: add     r8d, r11d
 * 00000001403464A1: cmp     r8d, [r9+0A74h]
 * 00000001403464A8: jb      short loc_14034646F
 * 00000001403464AA: mov     r13, [rbp+20F0h+var_2038]
 * 00000001403464B1: xor     r11d, r11d
 * 00000001403464B4: cmp     r10, r14
 * 00000001403464B7: jnb     loc_14034680A
 * 00000001403464BD: xor     r13d, r13d
 * 00000001403464C0: mov     r15d, 0FFFFFFFFh
 * 00000001403464C6: mov     edi, [r10+8]
 * 00000001403464CA: mov     rcx, rdx
 * 00000001403464CD: mov     r8, [r10]
 * 00000001403464D0: mov     r11d, edi
 * 00000001403464D3: cmp     edi, 8
 * 00000001403464D6: jb      short loc_1403464FE
 * 00000001403464D8: mov     ebx, edi
 * 00000001403464DA: mov     r13d, 1
 * 00000001403464E0: shr     rbx, 3
 * 00000001403464E4: mov     rax, [rcx]
 * 00000001403464E7: add     r11d, 0FFFFFFF8h
 * 00000001403464EB: mov     [r8], rax
 * 00000001403464EE: add     rcx, 8
 * 00000001403464F2: add     r8, 8
 * 00000001403464F6: sub     rbx, r13
 * 00000001403464F9: jnz     short loc_1403464E4
 * 00000001403464FB: xor     r13d, r13d
 * 00000001403464FE: test    r11d, r11d
 * 0000000140346501: jz      short loc_14034651D
 * 0000000140346503: sub     r8, rcx
 * 0000000140346506: mov     r13d, 1
 * 000000014034650C: mov     al, [rcx]
 * 000000014034650E: mov     [rcx+r8], al
 * 0000000140346512: add     rcx, r13
 * 0000000140346515: add     r11d, r15d
 * 0000000140346518: jnz     short loc_14034650C
 * 000000014034651A: xor     r13d, r13d
 * 000000014034651D: add     rdx, rdi
 * 0000000140346520: add     r10, 10h
 * 0000000140346524: cmp     r10, r14
 * 0000000140346527: jnb     loc_1403467F1
 * 000000014034652D: jmp     short loc_1403464C6
 * 000000014034652F: test    dword ptr [r13+970h], 40000000h
 * 000000014034653A: jnz     short loc_140346586
 * 000000014034653C: cmp     [rbp+20F0h+var_20C0], r11d
 * 0000000140346540: jz      short loc_140346586
 * 0000000140346542: mov     ecx, [r13+904h]
 * 0000000140346549: sub     ecx, 1
 * 000000014034654C: jz      short loc_140346560
 * 000000014034654E: mov     eax, 2
 * 0000000140346553: cmp     ecx, eax
 * 0000000140346555: jnz     short loc_140346586
 * 0000000140346557: mov     rax, [r13+360h]
 * 000000014034655E: jmp     short loc_14034657F
 * 0000000140346560: add     qword ptr [r13+7B0h], 0FFFFFFFFFFFFFFF8h
 * 0000000140346568: mov     rax, [r13+7B0h]
 * 000000014034656F: mov     ecx, [rax]
 * 0000000140346571: mov     [r13+7B8h], ecx
 * 0000000140346578: mov     rax, [r13+220h]
 * 000000014034657F: mov     [r13+0F8h], rax
 * 0000000140346586: mov     rax, r13
 * 0000000140346589: lea     r11, [rsp+10F0h+var_20]
 * 0000000140346591: mov     rbx, [r11+38h]
 * 0000000140346595: mov     rsi, [r11+40h]
 * 0000000140346599: mov     rdi, [r11+48h]
 * 000000014034659D: mov     rsp, r11
 * 00000001403465A0: pop     r15
 * 00000001403465A2: pop     r14
 * 00000001403465A4: pop     r13
 * 00000001403465A6: pop     r12
 * 00000001403465A8: pop     rbp
 * 00000001403465A9: retn
 * 00000001403465AA: xor     r9d, r9d; BugCheckParameter3
 * 00000001403465AD: mov     [rbp+20F0h+var_1EA4], 4F400000h
 * 00000001403465B7: mov     ecx, [rbp+20F0h+var_1EA4]
 * 00000001403465BD: mov     r8, r14; BugCheckParameter2
 * 00000001403465C0: rol     ecx, 0Ah; BugCheckCode
 * 00000001403465C3: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001403465C8: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001403465CC: call    KeBugCheckEx
 * 00000001403465D2: mov     [rbp+20F0h+var_1EA0], 4F400000h
 * 00000001403465DC: mov     r8, r14; BugCheckParameter2
 * 00000001403465DF: mov     ecx, [rbp+20F0h+var_1EA0]
 * 00000001403465E5: mov     edx, 0Ah; BugCheckParameter1
 * 00000001403465EA: rol     ecx, 0Ah; BugCheckCode
 * 00000001403465ED: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001403465F2: call    KeBugCheckEx
 * 00000001403465F8: mov     [rbp+20F0h+var_1E60], 4F400000h
 * 0000000140346602: mov     r8, r14; BugCheckParameter2
 * 0000000140346605: mov     ecx, [rbp+20F0h+var_1E60]
 * 000000014034660B: mov     r9d, edx; BugCheckParameter3
 * 000000014034660E: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140346613: rol     ecx, 0Ah; BugCheckCode
 * 0000000140346616: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014034661B: call    KeBugCheckEx
 * 0000000140346621: mov     [rbp+20F0h+var_1E9C], 4F400000h
 * 000000014034662B: mov     r8, r10; BugCheckParameter2
 * 000000014034662E: mov     ecx, [rbp+20F0h+var_1E9C]
 * 0000000140346634: mov     r9d, edx; BugCheckParameter3
 * 0000000140346637: mov     edx, 0Ah; BugCheckParameter1
 * 000000014034663C: rol     ecx, 0Ah; BugCheckCode
 * 000000014034663F: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140346644: call    KeBugCheckEx
 * 000000014034664A: mov     r9d, 2; BugCheckParameter3
 * 0000000140346650: mov     [rbp+20F0h+var_1E98], 4F400000h
 * 000000014034665A: mov     ecx, [rbp+20F0h+var_1E98]
 * 0000000140346660: mov     r8, r14; BugCheckParameter2
 * 0000000140346663: rol     ecx, 0Ah; BugCheckCode
 * 0000000140346666: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014034666B: lea     edx, [r9+8]; BugCheckParameter1
 * 000000014034666F: call    KeBugCheckEx
 * 0000000140346675: mov     r9d, 3; BugCheckParameter3
 * 000000014034667B: mov     [rbp+20F0h+var_1E94], 4F400000h
 * 0000000140346685: mov     ecx, [rbp+20F0h+var_1E94]
 * 000000014034668B: mov     r8, r14; BugCheckParameter2
 * 000000014034668E: mov     [rsp+10F0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140346693: rol     ecx, 0Ah; BugCheckCode
 * 0000000140346696: lea     edx, [r9+7]; BugCheckParameter1
 * 000000014034669A: call    KeBugCheckEx
 * 00000001403466A0: mov     [rsp+10F0h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001403466A5: mov     r8, r15; BugCheckParameter2
 * 00000001403466A8: mov     r9d, 6; BugCheckParameter3
 * 00000001403466AE: mov     [rbp+20F0h+var_1E90], 4F400000h
 * 00000001403466B8: mov     ecx, [rbp+20F0h+var_1E90]
 * 00000001403466BE: rol     ecx, 0Ah; BugCheckCode
 * 00000001403466C1: lea     edx, [r9+4]; BugCheckParameter1
 * 00000001403466C5: call    KeBugCheckEx
 * 00000001403466CB: xor     r9d, r9d; BugCheckParameter3
 * 00000001403466CE: mov     [rbp+20F0h+var_1E7C], 4F400000h
 * 00000001403466D8: mov     ecx, [rbp+20F0h+var_1E7C]
 * 00000001403466DE: mov     r8, r15; BugCheckParameter2
 * 00000001403466E1: rol     ecx, 0Ah; BugCheckCode
 * 00000001403466E4: mov     [rsp+10F0h+BugCheckParameter4], r12; BugCheckParameter4
 * 00000001403466E9: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001403466ED: call    KeBugCheckEx
 * 00000001403466F3: mov     [rsp+10F0h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001403466F8: mov     r8, r15; BugCheckParameter2
 * 00000001403466FB: mov     r9d, 1; BugCheckParameter3
 * 0000000140346701: mov     [rbp+20F0h+var_1E54], 4F400000h
 * 000000014034670B: mov     ecx, [rbp+20F0h+var_1E54]
 * 0000000140346711: rol     ecx, 0Ah; BugCheckCode
 * 0000000140346714: lea     edx, [r9+9]; BugCheckParameter1
 * 0000000140346718: call    KeBugCheckEx
 * 000000014034671E: xor     eax, eax
 * 0000000140346720: mov     [rbp+20F0h+var_1E64], 4F400000h
 * 000000014034672A: mov     ecx, [rbp+20F0h+var_1E64]
 * 0000000140346730: mov     r8, r15; BugCheckParameter2
 * 0000000140346733: mov     r9d, edx; BugCheckParameter3
 * 0000000140346736: rol     ecx, 0Ah; BugCheckCode
 * 0000000140346739: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 000000014034673C: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140346741: call    KeBugCheckEx
 * 0000000140346747: xor     eax, eax
 * 0000000140346749: mov     [rbp+20F0h+var_1E68], 4F400000h
 * 0000000140346753: mov     ecx, [rbp+20F0h+var_1E68]
 * 0000000140346759: mov     r8, r10; BugCheckParameter2
 * 000000014034675C: mov     r9d, edx; BugCheckParameter3
 * 000000014034675F: rol     ecx, 0Ah; BugCheckCode
 * 0000000140346762: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140346765: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014034676A: call    KeBugCheckEx
 * 0000000140346770: mov     [rsp+10F0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140346775: mov     r8, r15; BugCheckParameter2
 * 0000000140346778: mov     r9d, 2; BugCheckParameter3
 * 000000014034677E: mov     [rbp+20F0h+var_1E6C], 4F400000h
 * 0000000140346788: mov     ecx, [rbp+20F0h+var_1E6C]
 * 000000014034678E: rol     ecx, 0Ah; BugCheckCode
 * 0000000140346791: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140346795: call    KeBugCheckEx
 * 000000014034679B: mov     r9d, 3; BugCheckParameter3
 * 00000001403467A1: mov     [rbp+20F0h+var_1E70], 4F400000h
 * 00000001403467AB: mov     ecx, [rbp+20F0h+var_1E70]
 * 00000001403467B1: mov     r8, r15; BugCheckParameter2
 * 00000001403467B4: rol     ecx, 0Ah; BugCheckCode
 * 00000001403467B7: mov     [rsp+10F0h+BugCheckParameter4], r12; BugCheckParameter4
 * 00000001403467BC: lea     edx, [r9+7]; BugCheckParameter1
 * 00000001403467C0: call    KeBugCheckEx
 * 00000001403467C6: mov     r9d, 6; BugCheckParameter3
 * 00000001403467CC: mov     [rbp+20F0h+var_1E74], 4F400000h
 * 00000001403467D6: mov     ecx, [rbp+20F0h+var_1E74]
 * 00000001403467DC: mov     r8, r11; BugCheckParameter2
 * 00000001403467DF: rol     ecx, 0Ah; BugCheckCode
 * 00000001403467E2: mov     [rsp+10F0h+BugCheckParameter4], r10; BugCheckParameter4
 * 00000001403467E7: lea     edx, [r9+4]; BugCheckParameter1
 * 00000001403467EB: call    KeBugCheckEx
 * 00000001403467F1: mov     r15, [rbp+20F0h+var_2070]
 * 00000001403467F8: xor     r11d, r11d
 * 00000001403467FB: mov     r13, [rbp+20F0h+var_2038]
 * 0000000140346802: mov     rbx, [rbp+20F0h+var_20C8]
 * 0000000140346806: mov     rdi, [rbp+20F0h+var_2088]
 * 000000014034680A: mov     rax, [r9+210h]
 * 0000000140346811: mov     byte ptr [rax], 0C3h
 * 0000000140346814: mov     cr0, r12
 * 0000000140346818: mov     r14, [rbp+20F0h+var_20F0]
 * 000000014034681C: mov     r8d, 2
 * 0000000140346822: mov     r9, [rbp+20F0h+var_2008]
 * 0000000140346829: mov     ecx, [r9+908h]
 * 0000000140346830: test    ecx, ecx
 * 0000000140346832: jz      loc_140346918
 * 0000000140346838: mov     rax, cr8
 * 000000014034683C: cmp     al, r8b
 * 000000014034683F: jnb     short loc_140346850
 * 0000000140346841: mov     rax, cr8
 * 0000000140346845: mov     cr8, r8
 * 0000000140346849: mov     ecx, [r9+908h]
 * 0000000140346850: test    ecx, ecx
 * 0000000140346852: jz      loc_140346918
 * 0000000140346858: sub     ecx, 1
 * 000000014034685B: jz      loc_14034690B
 * 0000000140346861: sub     ecx, 1
 * 0000000140346864: jz      loc_140346902
 * 000000014034686A: sub     ecx, 1
 * 000000014034686D: jz      loc_1403468F9
 * 0000000140346873: sub     ecx, 1
 * 0000000140346876: jz      short loc_1403468BD
 * 0000000140346878: cmp     ecx, 1
 * 000000014034687B: jz      short loc_140346896
 * 000000014034687D: mov     rax, [r9+5A8h]
 * 0000000140346884: mov     ecx, 1
 * 0000000140346889: lock or [rax+340h], rcx
 * 0000000140346891: jmp     loc_140346918
 * 0000000140346896: mov     rcx, gs:20h
 * 000000014034689F: mov     rax, [r9+630h]
 * 00000001403468A6: mov     edx, [r9+970h]
 * 00000001403468AD: shr     edx, 0Ah
 * 00000001403468B0: and     edx, 1Fh
 * 00000001403468B3: mov     rcx, [rax+rcx]
 * 00000001403468B7: lock bts [rcx], edx
 * 00000001403468BB: jmp     short loc_140346918
 * 00000001403468BD: mov     rcx, gs:20h
 * 00000001403468C6: mov     rax, [r9+630h]
 * 00000001403468CD: mov     r8d, [r9+970h]
 * 00000001403468D4: shr     r8d, 0Ah
 * 00000001403468D8: and     r8d, 1Fh
 * 00000001403468DC: mov     rcx, [rax+rcx]
 * 00000001403468E0: add     rcx, [r9+690h]
 * 00000001403468E7: mov     rax, [r9+670h]
 * 00000001403468EE: mov     rdx, [rcx+rax]
 * 00000001403468F2: lock bts [rdx], r8d
 * 00000001403468F7: jmp     short loc_140346918
 * 00000001403468F9: mov     rax, [r9+550h]
 * 0000000140346900: jmp     short loc_140346912
 * 0000000140346902: mov     rax, [r9+548h]
 * 0000000140346909: jmp     short loc_140346912
 * 000000014034690B: mov     rax, [r9+538h]
 * 0000000140346912: lock bts qword ptr [rax], 0
 * 0000000140346918: mov     rax, [rbp+20F0h+var_2008]
 * 000000014034691F: mov     rcx, [rax+678h]
 * 0000000140346926: mov     [r15+rcx], r11
 * 000000014034692A: mov     rax, [rbp+20F0h+var_2008]
 * 0000000140346931: mov     r10, [rax+688h]
 * 0000000140346938: mov     [r15+r10], r11
 * 000000014034693C: mov     rcx, [rbp+20F0h+var_2008]
 * 0000000140346943: mov     rcx, [rcx+150h]; Target
 * 000000014034694A: call    KeGuardCheckICall
 * 000000014034694F: mov     rax, [rbp+20F0h+var_2008]
 * 0000000140346956: mov     r9, rbx
 * 0000000140346959: mov     [rsp+10F0h+var_10C0], rsi
 * 000000014034695E: mov     r8, rdi
 * 0000000140346961: mov     rdx, r14
 * 0000000140346964: mov     ecx, 109h
 * 0000000140346969: mov     r10, [rax+150h]
 * 0000000140346970: mov     [rsp+10F0h+var_10C8], r10
 * 0000000140346975: mov     [rsp+10F0h+BugCheckParameter4], r13
 * 000000014034697A: call    SdbpCheckDll
 */
