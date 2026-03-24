/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140354010
 * Callers:
 *     KiDecodeMcaFault @ 0x1401A9FE0 (KiDecodeMcaFault.c)
 *     sub_1401B8560 @ 0x1401B8560 (sub_1401B8560.c)
 *     FsRtlUninitializeSmallMcb @ 0x14036D0B0 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1401B877C @ 0x1401B877C (sub_1401B877C.c)
 *     sub_1401B885C @ 0x1401B885C (sub_1401B885C.c)
 *     sub_1401B97C8 @ 0x1401B97C8 (sub_1401B97C8.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     sub_140368148 @ 0x140368148 (sub_140368148.c)
 *     sub_14036A0A4 @ 0x14036A0A4 (sub_14036A0A4.c)
 *     sub_14036AB20 @ 0x14036AB20 (sub_14036AB20.c)
 *     sub_14036B3BC @ 0x14036B3BC (sub_14036B3BC.c)
 *     sub_14036B5D8 @ 0x14036B5D8 (sub_14036B5D8.c)
 *     KiGetGdtIdt @ 0x14036CF40 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x14036CF50 (KiGetLdtr.c)
 *     KiGetSs @ 0x14036CF60 (KiGetSs.c)
 *     KiGetTr @ 0x14036CF70 (KiGetTr.c)
 *     KiErrata361Present @ 0x14036CF80 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x14036CFA0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x14036CFB0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x14036D060 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x14036D320 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x14036D510 (RtlInitMinimalBarrier.c)
 *     sub_1409D0FB4 @ 0x1409D0FB4 (sub_1409D0FB4.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140354010
 * Reason: Hex-Rays returned no pseudocode for 0x140354010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140354010: mov     [rsp-8+arg_0], rcx
 * 0000000140354015: push    rbp
 * 0000000140354016: push    rbx
 * 0000000140354017: push    rsi
 * 0000000140354018: push    rdi
 * 0000000140354019: push    r12
 * 000000014035401B: push    r13
 * 000000014035401D: push    r14
 * 000000014035401F: push    r15
 * 0000000140354021: lea     rbp, [rsp-0B38h]
 * 0000000140354029: sub     rsp, 0C38h
 * 0000000140354030: mov     eax, [rcx+990h]
 * 0000000140354036: xor     r9d, r9d
 * 0000000140354039: mov     r12, rcx
 * 000000014035403C: mov     [rbp+0B70h+var_2A8], rcx
 * 0000000140354043: mov     ecx, 110000h
 * 0000000140354048: mov     edi, 0FFFFFFF8h
 * 000000014035404D: and     eax, ecx
 * 000000014035404F: mov     r11d, 0FFFFFFFFh
 * 0000000140354055: lea     esi, [r9+1]
 * 0000000140354059: mov     r10d, 12Fh
 * 000000014035405F: cmp     eax, ecx
 * 0000000140354061: jz      loc_14035411E
 * 0000000140354067: mov     rdx, [r12+8E0h]
 * 000000014035406F: lea     ecx, [r10+1]
 * 0000000140354073: mov     rax, rdx
 * 0000000140354076: lea     r8d, [r9+26h]
 * 000000014035407A: mov     [rax], r9
 * 000000014035407D: add     ecx, edi
 * 000000014035407F: add     rax, 8
 * 0000000140354083: sub     r8, rsi
 * 0000000140354086: jnz     short loc_14035407A
 * 0000000140354088: test    ecx, ecx
 * 000000014035408A: jz      short loc_140354097
 * 000000014035408C: mov     [rax], r9b
 * 000000014035408F: add     rax, rsi
 * 0000000140354092: add     ecx, r11d
 * 0000000140354095: jnz     short loc_14035408C
 * 0000000140354097: movups  xmm0, xmmword ptr [r12+848h]
 * 00000001403540A0: lea     rax, [r12+878h]
 * 00000001403540A8: mov     rcx, rax
 * 00000001403540AB: movdqu  xmmword ptr [rdx+10h], xmm0
 * 00000001403540B0: shr     rcx, 10h
 * 00000001403540B4: movups  xmm1, xmmword ptr [r12+858h]
 * 00000001403540BD: movdqu  xmmword ptr [rdx+20h], xmm1
 * 00000001403540C2: movups  xmm0, xmmword ptr [r12+868h]
 * 00000001403540CB: movdqu  xmmword ptr [rdx+120h], xmm0
 * 00000001403540D3: mov     [rbp+31Ah], rdx
 * 00000001403540DA: mov     word ptr [rbp+0B70h+var_858], r10w
 * 00000001403540E2: mov     [rdx+10h], ax
 * 00000001403540E6: shr     rax, 20h
 * 00000001403540EA: mov     [rdx+16h], cx
 * 00000001403540EE: mov     [rdx+18h], eax
 * 00000001403540F1: cli
 * 00000001403540F2: xor     eax, eax
 * 00000001403540F4: cmp     [r12+990h], eax
 * 00000001403540FC: jge     short loc_140354104
 * 00000001403540FE: mov     dr7, rax
 * 0000000140354101: sti
 * 0000000140354102: jmp     short loc_140354120
 * 0000000140354104: sidt    fword ptr [rbp+0B70h+var_6C0]
 * 000000014035410B: lidt    fword ptr [rbp+0B70h+var_858]
 * 0000000140354112: mov     dr7, rax
 * 0000000140354115: lidt    fword ptr [rbp+0B70h+var_6C0]
 * 000000014035411C: jmp     short loc_140354101
 * 000000014035411E: xor     eax, eax
 * 0000000140354120: test    dword ptr [r12+994h], 100h
 * 000000014035412C: mov     [rbp+0B70h+var_B80], rax
 * 0000000140354130: jz      short loc_140354147
 * 0000000140354132: lea     rcx, [rbp+0B78h]
 * 0000000140354139: mov     rax, [rcx]
 * 000000014035413C: mov     [rbp+0B70h+var_B80], rax
 * 0000000140354140: xor     eax, eax
 * 0000000140354142: mov     [rcx], rax
 * 0000000140354145: jmp     short loc_140354149
 * 0000000140354147: xor     eax, eax
 * 0000000140354149: mov     r13d, 20h ; ' '
 * 000000014035414F: mov     [r12+828h], eax
 * 0000000140354157: test    dword ptr [r12+990h], 40000000h
 * 0000000140354163: mov     r14, 7010008004002001h
 * 000000014035416D: lea     r15d, [r13-1Ch]
 * 0000000140354171: jz      short loc_140354183
 * 0000000140354173: xor     eax, eax
 * 0000000140354175: cmp     [r12+0A78h], rax
 * 000000014035417D: jnz     loc_140354419
 * 0000000140354183: mov     r14, [r12+7B8h]
 * 000000014035418B: lea     rbx, [r12+798h]
 * 0000000140354193: mov     [rbp+0B70h+arg_8], r14
 * 000000014035419A: lea     rdx, [rbp+0B70h+var_B0]
 * 00000001403541A1: mov     rcx, rbx
 * 00000001403541A4: mov     r8d, r13d
 * 00000001403541A7: mov     r9, r15
 * 00000001403541AA: mov     rax, [rcx]
 * 00000001403541AD: add     r8d, edi
 * 00000001403541B0: mov     [rdx], rax
 * 00000001403541B3: add     rcx, 8
 * 00000001403541B7: add     rdx, 8
 * 00000001403541BB: sub     r9, rsi
 * 00000001403541BE: jnz     short loc_1403541AA
 * 00000001403541C0: xor     eax, eax
 * 00000001403541C2: test    r8d, r8d
 * 00000001403541C5: jz      short loc_1403541D8
 * 00000001403541C7: mov     al, [rcx]
 * 00000001403541C9: add     rcx, rsi
 * 00000001403541CC: mov     [rdx], al
 * 00000001403541CE: add     rdx, rsi
 * 00000001403541D1: add     r8d, r11d
 * 00000001403541D4: jnz     short loc_1403541C7
 * 00000001403541D6: xor     eax, eax
 * 00000001403541D8: mov     [r12+7B8h], rax
 * 00000001403541E0: mov     ecx, r13d
 * 00000001403541E3: mov     [r12+828h], eax
 * 00000001403541EB: mov     rdx, r15
 * 00000001403541EE: mov     rax, rbx
 * 00000001403541F1: xor     r8d, r8d
 * 00000001403541F4: mov     [rax], r8
 * 00000001403541F7: add     ecx, edi
 * 00000001403541F9: add     rax, 8
 * 00000001403541FD: sub     rdx, rsi
 * 0000000140354200: jnz     short loc_1403541F4
 * 0000000140354202: test    ecx, ecx
 * 0000000140354204: jz      short loc_140354211
 * 0000000140354206: mov     [rax], r8b
 * 0000000140354209: add     rax, rsi
 * 000000014035420C: add     ecx, r11d
 * 000000014035420F: jnz     short loc_140354206
 * 0000000140354211: mov     eax, [r12+7E4h]
 * 0000000140354219: mov     r9, r12
 * 000000014035421C: add     [r12+828h], eax
 * 0000000140354224: mov     rax, r12
 * 0000000140354227: mov     r10d, [r12+7E4h]
 * 000000014035422F: mov     r11d, [r12+814h]
 * 0000000140354237: mov     rsi, [r12+818h]
 * 000000014035423F: lea     rcx, [r12+r10]
 * 0000000140354243: cmp     r12, rcx
 * 0000000140354246: jnb     short loc_140354258
 * 0000000140354248: mov     edx, 40h ; '@'
 * 000000014035424D: prefetchnta byte ptr [rax]
 * 0000000140354250: add     rax, rdx
 * 0000000140354253: cmp     rax, rcx
 * 0000000140354256: jb      short loc_14035424D
 * 0000000140354258: mov     edi, r10d
 * 000000014035425B: mov     r8, rsi
 * 000000014035425E: shr     edi, 7
 * 0000000140354261: test    edi, edi
 * 0000000140354263: jz      short loc_1403542E0
 * 0000000140354265: mov     r14, 7010008004002001h
 * 000000014035426F: mov     edx, 8
 * 0000000140354274: lea     r12d, [rdx-7]
 * 0000000140354278: mov     rax, [r9]
 * 000000014035427B: mov     ecx, r11d
 * 000000014035427E: xor     rax, r8
 * 0000000140354281: mov     r8, [r9+8]
 * 0000000140354285: rol     rax, cl
 * 0000000140354288: add     r9, 10h
 * 000000014035428C: xor     r8, rax
 * 000000014035428F: rol     r8, cl
 * 0000000140354292: sub     rdx, r12
 * 0000000140354295: jnz     short loc_140354278
 * 0000000140354297: mov     r12, [rbp+0B70h+arg_0]
 * 000000014035429E: mov     rcx, r9
 * 00000001403542A1: sub     rcx, r12
 * 00000001403542A4: xor     rcx, rsi
 * 00000001403542A7: mov     rax, rcx
 * 00000001403542AA: rol     rax, 11h
 * 00000001403542AE: xor     rcx, rax
 * 00000001403542B1: mov     rax, r14
 * 00000001403542B4: mul     rcx
 * 00000001403542B7: xor     eax, edx
 * 00000001403542B9: mov     [rbp+0B70h+var_2B0], rdx
 * 00000001403542C0: xor     r11d, eax
 * 00000001403542C3: mov     eax, 1
 * 00000001403542C8: and     r11d, 3Fh
 * 00000001403542CC: cmovz   r11d, eax
 * 00000001403542D0: mov     eax, 0FFFFFFFFh
 * 00000001403542D5: add     edi, eax
 * 00000001403542D7: jnz     short loc_14035426F
 * 00000001403542D9: mov     r14, [rbp+0B70h+arg_8]
 * 00000001403542E0: and     r10d, 7Fh
 * 00000001403542E4: mov     esi, 1
 * 00000001403542E9: cmp     r10d, 8
 * 00000001403542ED: jb      short loc_14035430C
 * 00000001403542EF: mov     edx, r10d
 * 00000001403542F2: shr     rdx, 3
 * 00000001403542F6: xor     r8, [r9]
 * 00000001403542F9: mov     ecx, r11d
 * 00000001403542FC: rol     r8, cl
 * 00000001403542FF: add     r9, 8
 * 0000000140354303: add     r10d, 0FFFFFFF8h
 * 0000000140354307: sub     rdx, rsi
 * 000000014035430A: jnz     short loc_1403542F6
 * 000000014035430C: test    r10d, r10d
 * 000000014035430F: jz      short loc_140354333
 * 0000000140354311: mov     r12d, 0FFFFFFFFh
 * 0000000140354317: movzx   eax, byte ptr [r9]
 * 000000014035431B: mov     ecx, r11d
 * 000000014035431E: xor     r8, rax
 * 0000000140354321: add     r9, rsi
 * 0000000140354324: rol     r8, cl
 * 0000000140354327: add     r10d, r12d
 * 000000014035432A: jnz     short loc_140354317
 * 000000014035432C: mov     r12, [rbp+0B70h+arg_0]
 * 0000000140354333: mov     [r12+7B8h], r14
 * 000000014035433B: lea     rcx, [rbp+0B70h+var_B0]
 * 0000000140354342: mov     edx, r13d
 * 0000000140354345: mov     r9, r15
 * 0000000140354348: mov     rax, [rcx]
 * 000000014035434B: add     edx, 0FFFFFFF8h
 * 000000014035434E: mov     [rbx], rax
 * 0000000140354351: add     rcx, 8
 * 0000000140354355: add     rbx, 8
 * 0000000140354359: sub     r9, rsi
 * 000000014035435C: jnz     short loc_140354348
 * 000000014035435E: test    edx, edx
 * 0000000140354360: jz      short loc_140354377
 * 0000000140354362: mov     r11d, 0FFFFFFFFh
 * 0000000140354368: mov     al, [rcx]
 * 000000014035436A: add     rcx, rsi
 * 000000014035436D: mov     [rbx], al
 * 000000014035436F: add     rbx, rsi
 * 0000000140354372: add     edx, r11d
 * 0000000140354375: jnz     short loc_140354368
 * 0000000140354377: cmp     [r12+7B8h], r8
 * 000000014035437F: jz      loc_14035440F
 * 0000000140354385: mov     rax, [r12+590h]
 * 000000014035438D: xor     edx, edx
 * 000000014035438F: mov     ecx, [r12+7E4h]
 * 0000000140354397: mov     [rax], r12
 * 000000014035439A: mov     [rax+10h], ecx
 * 000000014035439D: mov     eax, [r12+8F8h]
 * 00000001403543A5: mov     rcx, [r12+7B8h]
 * 00000001403543AD: test    eax, eax
 * 00000001403543AF: jnz     short loc_14035440F
 * 00000001403543B1: mov     rax, [r12+590h]
 * 00000001403543B9: xor     rcx, r8
 * 00000001403543BC: mov     [rax+18h], rcx
 * 00000001403543C0: mov     eax, [r12+8F8h]
 * 00000001403543C8: test    eax, eax
 * 00000001403543CA: jnz     short loc_14035440F
 * 00000001403543CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403543D6: mov     rcx, r12
 * 00000001403543D9: add     rax, r12
 * 00000001403543DC: mov     [r12+900h], rax
 * 00000001403543E4: xor     eax, eax
 * 00000001403543E6: mov     [r12+908h], rax
 * 00000001403543EE: mov     qword ptr [r12+910h], 101h
 * 00000001403543FA: mov     [r12+918h], r8
 * 0000000140354402: mov     [r12+8F8h], esi
 * 000000014035440A: call    sub_14036B3BC
 * 000000014035440F: mov     r14, 7010008004002001h
 * 0000000140354419: or      [r12+990h], r15d
 * 0000000140354421: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140354428: add     [r12+834h], esi
 * 0000000140354430: mov     r8, 0ABCC77118461CEFDh
 * 000000014035443A: mov     eax, [r12+990h]
 * 0000000140354442: test    al, 8
 * 0000000140354444: jz      loc_140354876
 * 000000014035444A: bt      eax, 17h
 * 000000014035444E: jb      loc_140354876
 * 0000000140354454: mov     eax, [r12+994h]
 * 000000014035445C: mov     r10, [r12+0A70h]
 * 0000000140354464: mov     r13d, [r12+7E4h]
 * 000000014035446C: mov     r11, [r12+9F8h]
 * 0000000140354474: mov     r15d, [r12+808h]
 * 000000014035447C: mov     [rbp+0B70h+arg_8], r10
 * 0000000140354483: and     eax, esi
 * 0000000140354485: jz      short loc_14035448F
 * 0000000140354487: mov     r11, [r12+5D8h]
 * 000000014035448F: mov     rbx, [rbp+0B70h+arg_0]
 * 0000000140354496: mov     r12, [r12+160h]
 * 000000014035449E: mov     [rsp+0C70h+var_C20], r12
 * 00000001403544A3: mov     rax, [rbx+2C8h]
 * 00000001403544AA: mov     [rbp+0B70h+var_BF0], rax
 * 00000001403544AE: mov     rax, [rbx+340h]
 * 00000001403544B5: mov     [rsp+0C70h+var_C08], rax
 * 00000001403544BA: rdtsc
 * 00000001403544BC: shl     rdx, 20h
 * 00000001403544C0: mov     r9, rdi
 * 00000001403544C3: or      rax, rdx
 * 00000001403544C6: mov     rcx, rax
 * 00000001403544C9: ror     rax, 3
 * 00000001403544CD: xor     rcx, rax
 * 00000001403544D0: mov     rax, r14
 * 00000001403544D3: mul     rcx
 * 00000001403544D6: mov     rcx, rdx
 * 00000001403544D9: mov     [rbp+0B70h+var_2B8], rdx
 * 00000001403544E0: xor     rcx, rax
 * 00000001403544E3: mov     rax, r8
 * 00000001403544E6: mul     rcx
 * 00000001403544E9: shr     rdx, 1Ah
 * 00000001403544ED: imul    rax, rdx, 5F5E100h
 * 00000001403544F4: sub     rcx, rax
 * 00000001403544F7: sub     r9, rcx
 * 00000001403544FA: mov     [rbp+0B70h+var_A50], r9
 * 0000000140354501: mov     r8d, [rbx+990h]
 * 0000000140354508: bt      r8d, 1Ah
 * 000000014035450D: jnb     loc_1403545B4
 * 0000000140354513: rdtsc
 * 0000000140354515: shl     rdx, 20h
 * 0000000140354519: or      rax, rdx
 * 000000014035451C: mov     rcx, rax
 * 000000014035451F: ror     rax, 3
 * 0000000140354523: xor     rcx, rax
 * 0000000140354526: mov     rax, r14
 * 0000000140354529: mul     rcx
 * 000000014035452C: mov     rcx, rdx
 * 000000014035452F: mov     [rbp+0B70h+var_2C0], rdx
 * 0000000140354536: xor     rcx, rax
 * 0000000140354539: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140354543: mul     rcx
 * 0000000140354546: shr     rdx, 3
 * 000000014035454A: lea     rax, [rdx+rdx*4]
 * 000000014035454E: add     rax, rax
 * 0000000140354551: sub     rcx, rax
 * 0000000140354554: mov     eax, 2
 * 0000000140354559: cmp     rcx, rax
 * 000000014035455C: jnb     short loc_1403545B4
 * 000000014035455E: rdtsc
 * 0000000140354560: shl     rdx, 20h
 * 0000000140354564: or      rax, rdx
 * 0000000140354567: mov     rcx, rax
 * 000000014035456A: ror     rax, 3
 * 000000014035456E: xor     rcx, rax
 * 0000000140354571: mov     rax, r14
 * 0000000140354574: mul     rcx
 * 0000000140354577: mov     rcx, rdx
 * 000000014035457A: mov     [rbp+0B70h+var_2D0], rdx
 * 0000000140354581: xor     rcx, rax
 * 0000000140354584: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014035458E: mul     rcx
 * 0000000140354591: shr     rdx, 3
 * 0000000140354595: lea     rax, [rdx+rdx*4]
 * 0000000140354599: add     rax, rax
 * 000000014035459C: sub     rcx, rax
 * 000000014035459F: add     rcx, rsi
 * 00000001403545A2: imul    rcx, r9
 * 00000001403545A6: mov     [rbp+0B70h+var_A50], rcx
 * 00000001403545AD: mov     r8d, [rbx+990h]
 * 00000001403545B4: xor     eax, eax
 * 00000001403545B6: mov     esi, r15d
 * 00000001403545B9: mov     ebx, eax
 * 00000001403545BB: mov     r14d, eax
 * 00000001403545BE: lea     ecx, [rax+2]
 * 00000001403545C1: test    cl, r8b
 * 00000001403545C4: cmovnz  esi, r13d
 * 00000001403545C8: test    r8b, r8b
 * 00000001403545CB: js      short loc_1403545D5
 * 00000001403545CD: mov     r13d, eax
 * 00000001403545D0: jmp     loc_1403546B5
 * 00000001403545D5: mov     r9d, 1
 * 00000001403545DB: mov     r13d, r9d
 * 00000001403545DE: rdtsc
 * 00000001403545E0: shl     rdx, 20h
 * 00000001403545E4: or      rax, rdx
 * 00000001403545E7: mov     rcx, rax
 * 00000001403545EA: ror     rax, 3
 * 00000001403545EE: xor     rcx, rax
 * 00000001403545F1: mov     rax, 7010008004002001h
 * 00000001403545FB: mul     rcx
 * 00000001403545FE: mov     ecx, 154h
 * 0000000140354603: mov     rbx, rdx
 * 0000000140354606: mov     [rbp+0B70h+var_2D8], rdx
 * 000000014035460D: mov     rdx, [rbp+0B70h+arg_0]
 * 0000000140354614: xor     rbx, rax
 * 0000000140354617: mov     r14, rbx
 * 000000014035461A: mov     r8, rbx
 * 000000014035461D: xor     r14, rdx
 * 0000000140354620: lea     rax, [rdx+0A98h]
 * 0000000140354627: xor     [rax], r8
 * 000000014035462A: lea     rax, [rax-8]
 * 000000014035462E: ror     r8, cl
 * 0000000140354631: sub     ecx, r9d
 * 0000000140354634: jnz     short loc_140354627
 * 0000000140354636: lea     r9, [r15-0AA0h]
 * 000000014035463D: mov     r12, r15
 * 0000000140354640: shr     r9, 3
 * 0000000140354644: test    r9d, r9d
 * 0000000140354647: jz      short loc_140354687
 * 0000000140354649: movsxd  r10, r9d
 * 000000014035464C: mov     rdi, r13
 * 000000014035464F: add     r10, 153h
 * 0000000140354656: lea     r10, [rdx+r10*8]
 * 000000014035465A: mov     rdx, [r10]
 * 000000014035465D: lea     rax, [r14+r14]
 * 0000000140354661: mov     ecx, r9d
 * 0000000140354664: lea     r10, [r10-8]
 * 0000000140354668: ror     rdx, cl
 * 000000014035466B: mov     r14, rdx
 * 000000014035466E: xor     r14, rax
 * 0000000140354671: sub     r9d, edi
 * 0000000140354674: jnz     short loc_14035465A
 * 0000000140354676: mov     r10, [rbp+0B70h+arg_8]
 * 000000014035467D: mov     r12, r15
 * 0000000140354680: mov     rdx, [rbp+0B70h+arg_0]
 * 0000000140354687: mov     ecx, esi
 * 0000000140354689: add     rdx, r12
 * 000000014035468C: sub     ecx, r15d
 * 000000014035468F: shr     ecx, 3
 * 0000000140354692: test    ecx, ecx
 * 0000000140354694: jz      short loc_1403546B0
 * 0000000140354696: lea     rdx, [rdx+rcx*8]
 * 000000014035469A: mov     r9, r13
 * 000000014035469D: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001403546A1: xor     [rdx], r8
 * 00000001403546A4: lea     rdx, [rdx-8]
 * 00000001403546A8: ror     r8, cl
 * 00000001403546AB: sub     ecx, r9d
 * 00000001403546AE: jnz     short loc_1403546A1
 * 00000001403546B0: mov     r12, [rsp+0C70h+var_C20]
 * 00000001403546B5: test    r10, r10
 * 00000001403546B8: jz      short loc_1403546E1
 * 00000001403546BA: mov     rax, [rsp+0C70h+var_C08]
 * 00000001403546BF: lea     r8, [rbp+0B70h+var_A50]
 * 00000001403546C6: mov     r9, r12
 * 00000001403546C9: mov     [rsp+0C70h+BugCheckParameter4], r10
 * 00000001403546CE: mov     r12, [rbp+0B70h+arg_0]
 * 00000001403546D5: mov     edx, esi
 * 00000001403546D7: mov     rcx, r12
 * 00000001403546DA: call    KeGuardDispatchICall
 * 00000001403546DF: jmp     short loc_140354720
 * 00000001403546E1: xor     edx, edx
 * 00000001403546E3: test    r11, r11
 * 00000001403546E6: jnz     short loc_1403546FB
 * 00000001403546E8: lea     r8, [rbp+0B70h+var_A50]
 * 00000001403546EF: xor     ecx, ecx
 * 00000001403546F1: mov     rax, r12
 * 00000001403546F4: call    KeGuardDispatchICall
 * 00000001403546F9: jmp     short loc_140354719
 * 00000001403546FB: lea     rax, [rbp+0B70h+var_A50]
 * 0000000140354702: xor     r9d, r9d
 * 0000000140354705: mov     [rsp+0C70h+BugCheckParameter4], rax
 * 000000014035470A: xor     r8d, r8d
 * 000000014035470D: mov     rax, [rbp+0B70h+var_BF0]
 * 0000000140354711: mov     rcx, r11
 * 0000000140354714: call    KeGuardDispatchICall
 * 0000000140354719: mov     r12, [rbp+0B70h+arg_0]
 * 0000000140354720: xor     eax, eax
 * 0000000140354722: test    r13d, r13d
 * 0000000140354725: jz      loc_14035485C
 * 000000014035472B: mov     r8, rbx
 * 000000014035472E: lea     rax, [r12+0A98h]
 * 0000000140354736: xor     r8, r12
 * 0000000140354739: mov     ecx, 154h
 * 000000014035473E: mov     r13d, 1
 * 0000000140354744: xor     [rax], rbx
 * 0000000140354747: lea     rax, [rax-8]
 * 000000014035474B: ror     rbx, cl
 * 000000014035474E: sub     ecx, r13d
 * 0000000140354751: jnz     short loc_140354744
 * 0000000140354753: lea     r9, [r15-0AA0h]
 * 000000014035475A: mov     r11, r15
 * 000000014035475D: shr     r9, 3
 * 0000000140354761: test    r9d, r9d
 * 0000000140354764: jz      short loc_140354793
 * 0000000140354766: movsxd  r10, r9d
 * 0000000140354769: add     r10, 153h
 * 0000000140354770: lea     r10, [r12+r10*8]
 * 0000000140354774: mov     rdx, [r10]
 * 0000000140354777: lea     rax, [r8+r8]
 * 000000014035477B: mov     ecx, r9d
 * 000000014035477E: lea     r10, [r10-8]
 * 0000000140354782: ror     rdx, cl
 * 0000000140354785: mov     r8, rdx
 * 0000000140354788: xor     r8, rax
 * 000000014035478B: sub     r9d, r13d
 * 000000014035478E: jnz     short loc_140354774
 * 0000000140354790: mov     r11, r15
 * 0000000140354793: sub     esi, r15d
 * 0000000140354796: lea     rcx, [r11+r12]
 * 000000014035479A: shr     esi, 3
 * 000000014035479D: test    esi, esi
 * 000000014035479F: jz      short loc_1403547BB
 * 00000001403547A1: mov     eax, esi
 * 00000001403547A3: dec     rax
 * 00000001403547A6: lea     rdx, [rcx+rax*8]
 * 00000001403547AA: xor     [rdx], rbx
 * 00000001403547AD: mov     ecx, esi
 * 00000001403547AF: ror     rbx, cl
 * 00000001403547B2: lea     rdx, [rdx-8]
 * 00000001403547B6: sub     esi, r13d
 * 00000001403547B9: jnz     short loc_1403547AA
 * 00000001403547BB: cmp     r8, r14
 * 00000001403547BE: jz      loc_14035486C
 * 00000001403547C4: mov     rax, [r12+590h]
 * 00000001403547CC: xor     edx, edx
 * 00000001403547CE: mov     ecx, [r12+7E4h]
 * 00000001403547D6: mov     [rax], r12
 * 00000001403547D9: mov     [rax+10h], ecx
 * 00000001403547DC: mov     eax, [r12+8F8h]
 * 00000001403547E4: test    eax, eax
 * 00000001403547E6: jnz     loc_14035486C
 * 00000001403547EC: mov     rax, [r12+590h]
 * 00000001403547F4: mov     rcx, r8
 * 00000001403547F7: xor     rcx, r14
 * 00000001403547FA: mov     [rax+18h], rcx
 * 00000001403547FE: mov     eax, [r12+8F8h]
 * 0000000140354806: test    eax, eax
 * 0000000140354808: jnz     short loc_14035486C
 * 000000014035480A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140354814: mov     r14, r13
 * 0000000140354817: add     rax, r12
 * 000000014035481A: mov     rcx, r12
 * 000000014035481D: mov     [r12+900h], rax
 * 0000000140354825: xor     eax, eax
 * 0000000140354827: mov     [r12+908h], rax
 * 000000014035482F: mov     qword ptr [r12+910h], 10Eh
 * 000000014035483B: mov     [r12+918h], r8
 * 0000000140354843: mov     [r12+8F8h], r14d
 * 000000014035484B: call    sub_14036B3BC
 * 0000000140354850: mov     r15d, 4
 * 0000000140354856: lea     r13d, [r15+1Ch]
 * 000000014035485A: jmp     short loc_14035487C
 * 000000014035485C: mov     r15d, 4
 * 0000000140354862: lea     r13d, [r15+1Ch]
 * 0000000140354866: lea     r14d, [r15-3]
 * 000000014035486A: jmp     short loc_14035487E
 * 000000014035486C: mov     r13d, 20h ; ' '
 * 0000000140354872: lea     r15d, [r13-1Ch]
 * 0000000140354876: mov     r14d, 1
 * 000000014035487C: xor     eax, eax
 * 000000014035487E: mov     esi, [r12+0C4h]
 * 0000000140354886: lea     rcx, [r12+620h]
 * 000000014035488E: mov     [r12+0C4h], eax
 * 0000000140354896: mov     r9, r12
 * 0000000140354899: add     dword ptr [r12+828h], 620h
 * 00000001403548A5: mov     rax, r12
 * 00000001403548A8: mov     r10d, [r12+814h]
 * 00000001403548B0: mov     r11, [r12+818h]
 * 00000001403548B8: cmp     r12, rcx
 * 00000001403548BB: jnb     short loc_1403548CD
 * 00000001403548BD: mov     edx, 40h ; '@'
 * 00000001403548C2: prefetchnta byte ptr [rax]
 * 00000001403548C5: add     rax, rdx
 * 00000001403548C8: cmp     rax, rcx
 * 00000001403548CB: jb      short loc_1403548C2
 * 00000001403548CD: mov     r8, r11
 * 00000001403548D0: mov     ebx, 0Ch
 * 00000001403548D5: mov     rdi, 7010008004002001h
 * 00000001403548DF: mov     edx, 8
 * 00000001403548E4: mov     rax, [r9]
 * 00000001403548E7: mov     ecx, r10d
 * 00000001403548EA: xor     rax, r8
 * 00000001403548ED: mov     r8, [r9+8]
 * 00000001403548F1: rol     rax, cl
 * 00000001403548F4: add     r9, 10h
 * 00000001403548F8: xor     r8, rax
 * 00000001403548FB: rol     r8, cl
 * 00000001403548FE: sub     rdx, r14
 * 0000000140354901: jnz     short loc_1403548E4
 * 0000000140354903: mov     rcx, r9
 * 0000000140354906: sub     rcx, r12
 * 0000000140354909: xor     rcx, r11
 * 000000014035490C: mov     rax, rcx
 * 000000014035490F: rol     rax, 11h
 * 0000000140354913: xor     rcx, rax
 * 0000000140354916: mov     rax, rdi
 * 0000000140354919: mul     rcx
 * 000000014035491C: mov     [rbp+0B70h+var_2E0], rdx
 * 0000000140354923: xor     edx, eax
 * 0000000140354925: xor     r10d, edx
 * 0000000140354928: mov     eax, 0FFFFFFFFh
 * 000000014035492D: and     r10d, 3Fh
 * 0000000140354931: cmovz   r10d, r14d
 * 0000000140354935: add     ebx, eax
 * 0000000140354937: jnz     short loc_1403548DF
 * 0000000140354939: mov     edx, r13d
 * 000000014035493C: mov     r11, r15
 * 000000014035493F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140354946: xor     r8, [r9]
 * 0000000140354949: mov     ecx, r10d
 * 000000014035494C: rol     r8, cl
 * 000000014035494F: add     r9, 8
 * 0000000140354953: add     edx, 0FFFFFFF8h
 * 0000000140354956: sub     r11, r14
 * 0000000140354959: jnz     short loc_140354946
 * 000000014035495B: mov     r13d, 0FFFFFFFFh
 * 0000000140354961: test    edx, edx
 * 0000000140354963: jz      short loc_14035497A
 * 0000000140354965: movzx   eax, byte ptr [r9]
 * 0000000140354969: mov     ecx, r10d
 * 000000014035496C: xor     r8, rax
 * 000000014035496F: add     r9, r14
 * 0000000140354972: rol     r8, cl
 * 0000000140354975: add     edx, r13d
 * 0000000140354978: jnz     short loc_140354965
 * 000000014035497A: mov     [r12+0C4h], esi
 * 0000000140354982: cmp     [r12+0A20h], r8
 * 000000014035498A: jz      loc_140354A1D
 * 0000000140354990: mov     rax, [r12+590h]
 * 0000000140354998: mov     ecx, [r12+7E4h]
 * 00000001403549A0: mov     [rax], r12
 * 00000001403549A3: mov     [rax+10h], ecx
 * 00000001403549A6: mov     eax, [r12+8F8h]
 * 00000001403549AE: mov     rdx, [r12+0A20h]
 * 00000001403549B6: test    eax, eax
 * 00000001403549B8: jnz     short loc_140354A1D
 * 00000001403549BA: mov     rax, [r12+590h]
 * 00000001403549C2: mov     rcx, r8
 * 00000001403549C5: xor     rcx, rdx
 * 00000001403549C8: mov     [rax+18h], rcx
 * 00000001403549CC: mov     eax, [r12+8F8h]
 * 00000001403549D4: test    eax, eax
 * 00000001403549D6: jnz     short loc_140354A1D
 * 00000001403549D8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403549E2: xor     edx, edx
 * 00000001403549E4: add     rax, r12
 * 00000001403549E7: mov     rcx, r12
 * 00000001403549EA: mov     [r12+900h], rax
 * 00000001403549F2: xor     eax, eax
 * 00000001403549F4: mov     [r12+908h], rax
 * 00000001403549FC: mov     qword ptr [r12+910h], 109h
 * 0000000140354A08: mov     [r12+918h], r8
 * 0000000140354A10: mov     [r12+8F8h], r14d
 * 0000000140354A18: call    sub_14036B3BC
 * 0000000140354A1D: xor     edx, edx
 * 0000000140354A1F: mov     rcx, r12
 * 0000000140354A22: call    sub_14036B3BC
 * 0000000140354A27: mov     ecx, [r12+970h]
 * 0000000140354A2F: xor     eax, eax
 * 0000000140354A31: mov     [rsp+0C70h+var_C10], r12
 * 0000000140354A36: mov     rsi, r12
 * 0000000140354A39: mov     [rbp+0B70h+var_B54], eax
 * 0000000140354A3C: mov     r10, 2E8BA2E8BA2E8BA3h
 * 0000000140354A46: mov     [rbp+0B70h+var_BE8], eax
 * 0000000140354A49: lea     r9d, [rax+5]
 * 0000000140354A4D: lea     r8d, [rax+6]
 * 0000000140354A51: cmp     ecx, r13d
 * 0000000140354A54: jz      loc_140354B53
 * 0000000140354A5A: mov     rax, [r12+278h]
 * 0000000140354A62: call    KeGuardDispatchICall
 * 0000000140354A67: mov     rbx, rax
 * 0000000140354A6A: test    rax, rax
 * 0000000140354A6D: jnz     short loc_140354A8A
 * 0000000140354A6F: mov     rax, [r12+280h]
 * 0000000140354A77: xor     ecx, ecx
 * 0000000140354A79: call    KeGuardDispatchICall
 * 0000000140354A7E: mov     rbx, rax
 * 0000000140354A81: test    rax, rax
 * 0000000140354A84: jz      loc_140354B3F
 * 0000000140354A8A: mov     rax, [r12+290h]
 * 0000000140354A92: lea     rdx, [rbp+0B70h+var_620]
 * 0000000140354A99: mov     rcx, rbx
 * 0000000140354A9C: call    KeGuardDispatchICall
 * 0000000140354AA1: mov     r14d, eax
 * 0000000140354AA4: test    eax, eax
 * 0000000140354AA6: jns     short loc_140354ABC
 * 0000000140354AA8: mov     rax, [r12+288h]
 * 0000000140354AB0: mov     rcx, rbx
 * 0000000140354AB3: call    KeGuardDispatchICall
 * 0000000140354AB8: xor     eax, eax
 * 0000000140354ABA: jmp     short loc_140354B2B
 * 0000000140354ABC: mov     [r12+980h], rbx
 * 0000000140354AC4: mov     rax, [r12+2B8h]
 * 0000000140354ACC: call    KeGuardDispatchICall
 * 0000000140354AD1: mov     rbx, rax
 * 0000000140354AD4: mov     rax, [r12+2D8h]
 * 0000000140354ADC: mov     rcx, rbx
 * 0000000140354ADF: call    KeGuardDispatchICall
 * 0000000140354AE4: mov     rdx, rax
 * 0000000140354AE7: test    rax, rax
 * 0000000140354AEA: jnz     short loc_140354AF1
 * 0000000140354AEC: mov     ecx, r15d
 * 0000000140354AEF: jmp     short loc_140354B05
 * 0000000140354AF1: mov     rax, [r12+2E8h]
 * 0000000140354AF9: mov     rcx, rbx
 * 0000000140354AFC: call    KeGuardDispatchICall
 * 0000000140354B01: xor     eax, eax
 * 0000000140354B03: mov     ecx, eax
 * 0000000140354B05: mov     eax, [r12+994h]
 * 0000000140354B0D: and     eax, 0FFFFFFFBh
 * 0000000140354B10: or      eax, ecx
 * 0000000140354B12: mov     [r12+994h], eax
 * 0000000140354B1A: add     dword ptr [r12+828h], 10000h
 * 0000000140354B26: xor     eax, eax
 * 0000000140354B28: mov     r14d, eax
 * 0000000140354B2B: test    r14d, r14d
 * 0000000140354B2E: js      short loc_140354B3F
 * 0000000140354B30: mov     r13d, 1
 * 0000000140354B36: mov     [rbp+0B70h+var_BE8], r13d
 * 0000000140354B3A: jmp     loc_140354EC3
 * 0000000140354B3F: mov     r9d, 5
 * 0000000140354B45: mov     r10, 2E8BA2E8BA2E8BA3h
 * 0000000140354B4F: lea     r8d, [r9+1]
 * 0000000140354B53: mov     eax, [r12+994h]
 * 0000000140354B5B: test    al, 8
 * 0000000140354B5D: jz      loc_140354EB8
 * 0000000140354B63: bt      eax, 0Ch
 * 0000000140354B67: jb      loc_140354EB8
 * 0000000140354B6D: rdtsc
 * 0000000140354B6F: shl     rdx, 20h
 * 0000000140354B73: mov     rbx, 7010008004002001h
 * 0000000140354B7D: or      rax, rdx
 * 0000000140354B80: mov     rcx, rax
 * 0000000140354B83: ror     rax, 3
 * 0000000140354B87: xor     rcx, rax
 * 0000000140354B8A: mov     rax, rbx
 * 0000000140354B8D: mul     rcx
 * 0000000140354B90: mov     [rbp+0B70h+var_2E8], rdx
 * 0000000140354B97: xor     dl, al
 * 0000000140354B99: test    dl, 3
 * 0000000140354B9C: jnz     loc_140354EB8
 * 0000000140354BA2: rdtsc
 * 0000000140354BA4: shl     rdx, 20h
 * 0000000140354BA8: or      rax, rdx
 * 0000000140354BAB: mov     rcx, rax
 * 0000000140354BAE: ror     rax, 3
 * 0000000140354BB2: xor     rcx, rax
 * 0000000140354BB5: mov     rax, rbx
 * 0000000140354BB8: mul     rcx
 * 0000000140354BBB: mov     rcx, rdx
 * 0000000140354BBE: mov     [rbp+0B70h+var_2F0], rdx
 * 0000000140354BC5: xor     rcx, rax
 * 0000000140354BC8: mov     rax, r10
 * 0000000140354BCB: mul     rcx
 * 0000000140354BCE: shr     rdx, 1
 * 0000000140354BD1: imul    rax, rdx, 0Bh
 * 0000000140354BD5: sub     rcx, rax
 * 0000000140354BD8: cmp     ecx, r9d
 * 0000000140354BDB: ja      loc_140354C99
 * 0000000140354BE1: jz      loc_140354C7F
 * 0000000140354BE7: test    ecx, ecx
 * 0000000140354BE9: jz      short loc_140354C65
 * 0000000140354BEB: sub     ecx, 1
 * 0000000140354BEE: jz      short loc_140354C4C
 * 0000000140354BF0: sub     ecx, 1
 * 0000000140354BF3: jz      short loc_140354C32
 * 0000000140354BF5: cmp     ecx, 1
 * 0000000140354BF8: jz      short loc_140354C14
 * 0000000140354BFA: mov     [rbp+0B70h+var_A20], 67076494h
 * 0000000140354C04: mov     r9d, [rbp+0B70h+var_A20]
 * 0000000140354C0B: rol     r9d, 4
 * 0000000140354C0F: jmp     loc_140354DBE
 * 0000000140354C14: mov     [rbp+0B70h+var_A1C], 0A8223938h
 * 0000000140354C1E: mov     r9d, [rbp+0B70h+var_A1C]
 * 0000000140354C25: xor     r9d, 3
 * 0000000140354C29: ror     r9d, 0Fh
 * 0000000140354C2D: jmp     loc_140354DBE
 * 0000000140354C32: mov     [rbp+0B70h+var_A18], 85B5910Dh
 * 0000000140354C3C: mov     r9d, [rbp+0B70h+var_A18]
 * 0000000140354C43: ror     r9d, 2
 * 0000000140354C47: jmp     loc_140354DBE
 * 0000000140354C4C: mov     [rbp+0B70h+var_A14], 0B2AD31A1h
 * 0000000140354C56: mov     r9d, [rbp+0B70h+var_A14]
 * 0000000140354C5D: rol     r9d, 1
 * 0000000140354C60: jmp     loc_140354DBE
 * 0000000140354C65: mov     [rbp+0B70h+var_A10], 0D098D0D8h
 * 0000000140354C6F: mov     r9d, [rbp+0B70h+var_A10]
 * 0000000140354C76: ror     r9d, 6
 * 0000000140354C7A: jmp     loc_140354DBE
 * 0000000140354C7F: mov     [rbp+0B70h+var_A0C], 288C49EDh
 * 0000000140354C89: mov     r9d, [rbp+0B70h+var_A0C]
 * 0000000140354C90: ror     r9d, 5
 * 0000000140354C94: jmp     loc_140354DBE
 * 0000000140354C99: sub     ecx, r8d
 * 0000000140354C9C: jz      loc_140354DA6
 * 0000000140354CA2: sub     ecx, 1
 * 0000000140354CA5: jz      loc_140354D8F
 * 0000000140354CAB: sub     ecx, 1
 * 0000000140354CAE: jz      loc_140354D78
 * 0000000140354CB4: cmp     ecx, 1
 * 0000000140354CB7: jz      loc_140354D5D
 * 0000000140354CBD: rdtsc
 * 0000000140354CBF: shl     rdx, 20h
 * 0000000140354CC3: or      rax, rdx
 * 0000000140354CC6: mov     rcx, rax
 * 0000000140354CC9: ror     rax, 3
 * 0000000140354CCD: xor     rcx, rax
 * 0000000140354CD0: mov     rax, rbx
 * 0000000140354CD3: mul     rcx
 * 0000000140354CD6: mov     r9, rdx
 * 0000000140354CD9: mov     [rbp+0B70h+var_2F8], rdx
 * 0000000140354CE0: xor     r9d, eax
 * 0000000140354CE3: mov     eax, 4EC4EC4Fh
 * 0000000140354CE8: mul     r9d
 * 0000000140354CEB: mov     ecx, r9d
 * 0000000140354CEE: shr     r9d, 5
 * 0000000140354CF2: shr     edx, 3
 * 0000000140354CF5: mov     r8d, r9d
 * 0000000140354CF8: imul    eax, edx, 1Ah
 * 0000000140354CFB: sub     ecx, eax
 * 0000000140354CFD: mov     eax, 4EC4EC4Fh
 * 0000000140354D02: mul     r9d
 * 0000000140354D05: add     ecx, 61h ; 'a'
 * 0000000140354D08: shr     r9d, 5
 * 0000000140354D0C: shl     ecx, 8
 * 0000000140354D0F: shr     edx, 3
 * 0000000140354D12: imul    eax, edx, 1Ah
 * 0000000140354D15: sub     r8d, eax
 * 0000000140354D18: mov     eax, 4EC4EC4Fh
 * 0000000140354D1D: mul     r9d
 * 0000000140354D20: add     r8d, 41h ; 'A'
 * 0000000140354D24: or      r8d, ecx
 * 0000000140354D27: shr     edx, 3
 * 0000000140354D2A: imul    eax, edx, 1Ah
 * 0000000140354D2D: mov     ecx, r9d
 * 0000000140354D30: shr     r9d, 5
 * 0000000140354D34: shl     r8d, 8
 * 0000000140354D38: sub     ecx, eax
 * 0000000140354D3A: mov     eax, 4EC4EC4Fh
 * 0000000140354D3F: mul     r9d
 * 0000000140354D42: add     ecx, 61h ; 'a'
 * 0000000140354D45: shr     edx, 3
 * 0000000140354D48: or      ecx, r8d
 * 0000000140354D4B: imul    eax, edx, 1Ah
 * 0000000140354D4E: shl     ecx, 8
 * 0000000140354D51: sub     r9d, eax
 * 0000000140354D54: add     r9d, 41h ; 'A'
 * 0000000140354D58: or      r9d, ecx
 * 0000000140354D5B: jmp     short loc_140354DBE
 * 0000000140354D5D: mov     [rbp+0B70h+var_A08], 0B0869E85h
 * 0000000140354D67: mov     r9d, [rbp+0B70h+var_A08]
 * 0000000140354D6E: xor     r9d, 9
 * 0000000140354D72: ror     r9d, 21h
 * 0000000140354D76: jmp     short loc_140354DBE
 * 0000000140354D78: mov     [rbp+0B70h+var_A04], 64664142h
 * 0000000140354D82: mov     r9d, [rbp+0B70h+var_A04]
 * 0000000140354D89: ror     r9d, 8
 * 0000000140354D8D: jmp     short loc_140354DBE
 * 0000000140354D8F: mov     [rbp+0B70h+var_A00], 82C6A6D8h
 * 0000000140354D99: mov     r9d, [rbp+0B70h+var_A00]
 * 0000000140354DA0: rol     r9d, 7
 * 0000000140354DA4: jmp     short loc_140354DBE
 * 0000000140354DA6: mov     [rbp+0B70h+var_9FC], 4E574672h
 * 0000000140354DB0: mov     r9d, [rbp+0B70h+var_9FC]
 * 0000000140354DB7: xor     r9d, r8d
 * 0000000140354DBA: ror     r9d, 18h
 * 0000000140354DBE: mov     rax, [r12+0F8h]
 * 0000000140354DC6: mov     r8d, r9d
 * 0000000140354DC9: mov     rdx, [r12+768h]
 * 0000000140354DD1: mov     ecx, 200h
 * 0000000140354DD6: call    KeGuardDispatchICall
 * 0000000140354DDB: mov     r15, rax
 * 0000000140354DDE: xor     eax, eax
 * 0000000140354DE0: test    r15, r15
 * 0000000140354DE3: jnz     short loc_140354DEE
 * 0000000140354DE5: lea     r15d, [rax+4]
 * 0000000140354DE9: jmp     loc_140354EBA
 * 0000000140354DEE: mov     rcx, [r12+6E8h]
 * 0000000140354DF6: mov     rax, [r12+518h]
 * 0000000140354DFE: mov     r14d, [rcx+rax]
 * 0000000140354E02: test    r14d, r14d
 * 0000000140354E05: jz      short loc_140354E32
 * 0000000140354E07: rdtsc
 * 0000000140354E09: shl     rdx, 20h
 * 0000000140354E0D: or      rax, rdx
 * 0000000140354E10: mov     rcx, rax
 * 0000000140354E13: ror     rax, 3
 * 0000000140354E17: xor     rcx, rax
 * 0000000140354E1A: mov     rax, rbx
 * 0000000140354E1D: mul     rcx
 * 0000000140354E20: mov     [rbp+0B70h+var_300], rdx
 * 0000000140354E27: xor     rax, rdx
 * 0000000140354E2A: xor     edx, edx
 * 0000000140354E2C: div     r14
 * 0000000140354E2F: mov     r14, rdx
 * 0000000140354E32: mov     rax, [r12+3B0h]
 * 0000000140354E3A: xor     ecx, ecx
 * 0000000140354E3C: call    KeGuardDispatchICall
 * 0000000140354E41: mov     rbx, rax
 * 0000000140354E44: test    rax, rax
 * 0000000140354E47: jz      short loc_140354EA2
 * 0000000140354E49: test    r14d, r14d
 * 0000000140354E4C: jz      short loc_140354E69
 * 0000000140354E4E: mov     rax, [r12+3B0h]
 * 0000000140354E56: mov     rcx, rbx
 * 0000000140354E59: add     r14d, r13d
 * 0000000140354E5C: call    KeGuardDispatchICall
 * 0000000140354E61: mov     rbx, rax
 * 0000000140354E64: test    rax, rax
 * 0000000140354E67: jnz     short loc_140354E49
 * 0000000140354E69: mov     rsi, r12
 * 0000000140354E6C: test    rbx, rbx
 * 0000000140354E6F: jz      short loc_140354EA2
 * 0000000140354E71: mov     rax, [r12+3A0h]
 * 0000000140354E79: mov     rcx, rbx
 * 0000000140354E7C: call    KeGuardDispatchICall
 * 0000000140354E81: test    eax, eax
 * 0000000140354E83: jns     short loc_140354E99
 * 0000000140354E85: mov     rax, [r12+3B8h]
 * 0000000140354E8D: mov     rcx, rbx
 * 0000000140354E90: call    KeGuardDispatchICall
 * 0000000140354E95: xor     eax, eax
 * 0000000140354E97: mov     ebx, eax
 * 0000000140354E99: test    rbx, rbx
 * 0000000140354E9C: jnz     loc_140354F67
 * 0000000140354EA2: mov     rax, [r12+100h]
 * 0000000140354EAA: mov     rcx, r15
 * 0000000140354EAD: call    KeGuardDispatchICall
 * 0000000140354EB2: mov     r15d, 4
 * 0000000140354EB8: xor     eax, eax
 * 0000000140354EBA: mov     r13d, 1
 * 0000000140354EC0: mov     [rbp+0B70h+var_B54], eax
 * 0000000140354EC3: mov     [rbp+0B70h+var_AB0], rax
 * 0000000140354ECA: mov     ecx, r15d
 * 0000000140354ECD: lea     rax, [rbp+0B70h+var_AA8]
 * 0000000140354ED4: xor     edx, edx
 * 0000000140354ED6: mov     r9d, 0FFFFFFFFh
 * 0000000140354EDC: mov     [rax], dl
 * 0000000140354EDE: add     rax, r13
 * 0000000140354EE1: add     ecx, r9d
 * 0000000140354EE4: jnz     short loc_140354EDC
 * 0000000140354EE6: mov     ecx, [r12+820h]
 * 0000000140354EEE: mov     r11, 0B3B74BDEE4453415h
 * 0000000140354EF8: mov     rdx, [rbp+0B70h+arg_0]
 * 0000000140354EFF: add     r12, 82Ch
 * 0000000140354F06: mov     [rbp+0B70h+var_BC0], r12
 * 0000000140354F0A: mov     r10d, 19h
 * 0000000140354F10: mov     [rbp+0B70h+var_BAC], 0C000009Ah
 * 0000000140354F17: mov     r14d, 8000h
 * 0000000140354F1D: mov     eax, [r12]
 * 0000000140354F21: cmp     [rdx+828h], eax
 * 0000000140354F27: jge     loc_1403606D7
 * 0000000140354F2D: mov     r14d, [rbp+0B70h+var_7E8]
 * 0000000140354F34: lea     edx, [r10-18h]
 * 0000000140354F38: mov     ebx, [rbp+0B70h+var_7D8]
 * 0000000140354F3E: mov     [rbp+0B70h+var_BB0], r14d
 * 0000000140354F42: mov     [rbp+0B70h+var_B78], ebx
 * 0000000140354F45: mov     eax, [rsi+990h]
 * 0000000140354F4B: mov     r8d, 110000h
 * 0000000140354F51: and     eax, r8d
 * 0000000140354F54: cmp     eax, r8d
 * 0000000140354F57: jz      loc_1403550A7
 * 0000000140354F5D: xor     eax, eax
 * 0000000140354F5F: mov     dr7, rax
 * 0000000140354F62: jmp     loc_1403550A9
 * 0000000140354F67: mov     rax, [r12+438h]
 * 0000000140354F6F: lea     rdx, [rbp+0B70h+var_620]
 * 0000000140354F76: mov     rcx, rbx
 * 0000000140354F79: call    KeGuardDispatchICall
 * 0000000140354F7E: mov     rax, [r12+1C0h]
 * 0000000140354F86: xor     r9d, r9d
 * 0000000140354F89: xor     r8d, r8d
 * 0000000140354F8C: mov     rdx, r15
 * 0000000140354F8F: mov     rcx, rbx
 * 0000000140354F92: call    KeGuardDispatchICall
 * 0000000140354F97: rdtsc
 * 0000000140354F99: shl     rdx, 20h
 * 0000000140354F9D: or      rax, rdx
 * 0000000140354FA0: mov     rcx, rax
 * 0000000140354FA3: ror     rax, 3
 * 0000000140354FA7: xor     rcx, rax
 * 0000000140354FAA: mov     rax, 7010008004002001h
 * 0000000140354FB4: mul     rcx
 * 0000000140354FB7: mov     rcx, r15
 * 0000000140354FBA: mov     rbx, rdx
 * 0000000140354FBD: mov     [rbp+0B70h+var_308], rdx
 * 0000000140354FC4: xor     rbx, rax
 * 0000000140354FC7: mov     rax, [r12+1B8h]
 * 0000000140354FCF: call    KeGuardDispatchICall
 * 0000000140354FD4: mov     ecx, eax
 * 0000000140354FD6: xor     edx, edx
 * 0000000140354FD8: mov     rax, rbx
 * 0000000140354FDB: div     rcx
 * 0000000140354FDE: mov     rbx, rdx
 * 0000000140354FE1: cli
 * 0000000140354FE2: mov     rcx, gs:20h
 * 0000000140354FEB: mov     rax, [r12+648h]
 * 0000000140354FF3: mov     rcx, [rcx+rax]
 * 0000000140354FF7: sti
 * 0000000140354FF8: mov     rax, [r12+1C8h]
 * 0000000140355000: lea     rdx, [rbp+0B70h+var_630]
 * 0000000140355007: call    KeGuardDispatchICall
 * 000000014035500C: mov     rax, [r12+1A8h]
 * 0000000140355014: lea     rcx, [rbp+0B70h+var_1A8]
 * 000000014035501B: mov     rdx, r15
 * 000000014035501E: call    KeGuardDispatchICall
 * 0000000140355023: jmp     short loc_14035502C
 * 0000000140355025: test    ebx, ebx
 * 0000000140355027: jz      short loc_14035504D
 * 0000000140355029: add     ebx, r13d
 * 000000014035502C: mov     rax, [r12+1B0h]
 * 0000000140355034: lea     rdx, [rbp+0B70h+var_1A8]
 * 000000014035503B: lea     rcx, [rbp+0B70h+var_AC0]
 * 0000000140355042: call    KeGuardDispatchICall
 * 0000000140355047: test    eax, eax
 * 0000000140355049: jns     short loc_140355025
 * 000000014035504B: jmp     short loc_140355067
 * 000000014035504D: mov     rax, [r12+1A0h]
 * 0000000140355055: lea     rcx, [rbp+0B70h+var_630]
 * 000000014035505C: mov     edx, [rbp+0B70h+var_AC0]
 * 0000000140355062: call    KeGuardDispatchICall
 * 0000000140355067: mov     rax, [r12+1D0h]
 * 000000014035506F: lea     rdx, [rbp+0B70h+var_1C8]
 * 0000000140355076: lea     rcx, [rbp+0B70h+var_630]
 * 000000014035507D: call    KeGuardDispatchICall
 * 0000000140355082: mov     rax, [r12+100h]
 * 000000014035508A: mov     rcx, r15
 * 000000014035508D: call    KeGuardDispatchICall
 * 0000000140355092: mov     r13d, 1
 * 0000000140355098: xor     eax, eax
 * 000000014035509A: mov     [rbp+0B70h+var_B54], r13d
 * 000000014035509E: lea     r15d, [r13+3]
 * 00000001403550A2: jmp     loc_140354EC3
 * 00000001403550A7: xor     eax, eax
 * 00000001403550A9: cmp     ecx, [rsi+80Ch]
 * 00000001403550AF: jnz     short loc_1403550E7
 * 00000001403550B1: add     [rsi+830h], edx
 * 00000001403550B7: mov     ecx, eax
 * 00000001403550B9: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001403550C0: jnz     short loc_1403550E7
 * 00000001403550C2: mov     eax, [rsi+990h]
 * 00000001403550C8: test    dl, al
 * 00000001403550CA: jnz     short loc_1403550E7
 * 00000001403550CC: cmp     [rsi+970h], r9d
 * 00000001403550D3: jnz     short loc_1403550DF
 * 00000001403550D5: xor     eax, eax
 * 00000001403550D7: mov     [rsi+970h], eax
 * 00000001403550DD: jmp     short loc_1403550E7
 * 00000001403550DF: or      eax, edx
 * 00000001403550E1: mov     [rsi+990h], eax
 * 00000001403550E7: mov     rax, [rsi+0A78h]
 * 00000001403550EE: mov     r9, rsi
 * 00000001403550F1: test    rax, rax
 * 00000001403550F4: mov     [rbp+0B70h+var_BB4], ecx
 * 00000001403550F7: cmovnz  r9, rax
 * 00000001403550FB: xor     eax, eax
 * 00000001403550FD: mov     r8d, eax
 * 0000000140355100: mov     r13d, [r9+808h]
 * 0000000140355107: add     r13, r9
 * 000000014035510A: mov     [rsp+0C70h+var_C18], r13
 * 000000014035510F: cmp     dword ptr [rbp+0B70h+var_AB0], eax
 * 0000000140355115: jz      short loc_140355135
 * 0000000140355117: cmp     dword ptr [rbp+0B70h+var_AB0+4], ecx
 * 000000014035511D: ja      short loc_140355135
 * 000000014035511F: mov     r13d, [rbp+0B70h+var_AA8]
 * 0000000140355126: mov     r8d, dword ptr [rbp+0B70h+var_AB0+4]
 * 000000014035512D: add     r13, r9
 * 0000000140355130: mov     [rsp+0C70h+var_C18], r13
 * 0000000140355135: mov     edx, 1
 * 000000014035513A: cmp     r8d, ecx
 * 000000014035513D: jz      loc_140355277
 * 0000000140355143: sub     ecx, r8d
 * 0000000140355146: lea     esi, [rdx+0Bh]
 * 0000000140355149: mov     r10d, ecx
 * 000000014035514C: lea     r11d, [rdx+1]
 * 0000000140355150: add     r8d, ecx
 * 0000000140355153: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 000000014035515D: mov     ecx, [r13+0]
 * 0000000140355161: cmp     ecx, esi
 * 0000000140355163: jg      short loc_1403551AA
 * 0000000140355165: jz      short loc_1403551C7
 * 0000000140355167: sub     ecx, 1
 * 000000014035516A: jz      short loc_1403551C7
 * 000000014035516C: sub     ecx, 6
 * 000000014035516F: jz      short loc_140355198
 * 0000000140355171: sub     ecx, 1
 * 0000000140355174: jz      short loc_14035518E
 * 0000000140355176: cmp     ecx, r11d
 * 0000000140355179: jnz     loc_14035520B
 * 000000014035517F: mov     eax, [r13+1Ch]
 * 0000000140355183: add     eax, 3
 * 0000000140355186: shl     eax, 4
 * 0000000140355189: jmp     loc_140355243
 * 000000014035518E: movzx   eax, word ptr [r13+20h]
 * 0000000140355193: jmp     loc_14035523D
 * 0000000140355198: mov     eax, [r13+18h]
 * 000000014035519C: add     eax, r11d
 * 000000014035519F: lea     eax, [rax+rax*2]
 * 00000001403551A2: shl     eax, 3
 * 00000001403551A5: jmp     loc_140355243
 * 00000001403551AA: cmp     ecx, 1Ch
 * 00000001403551AD: jz      loc_140355238
 * 00000001403551B3: cmp     ecx, 1Eh
 * 00000001403551B6: jz      short loc_140355212
 * 00000001403551B8: cmp     ecx, 20h ; ' '
 * 00000001403551BB: jle     short loc_14035520B
 * 00000001403551BD: cmp     ecx, 22h ; '"'
 * 00000001403551C0: jle     short loc_1403551E3
 * 00000001403551C2: cmp     ecx, 2Bh ; '+'
 * 00000001403551C5: jnz     short loc_14035520B
 * 00000001403551C7: mov     ecx, [r13+10h]
 * 00000001403551CB: mov     rax, rdi
 * 00000001403551CE: mul     rcx
 * 00000001403551D1: shr     rdx, 3
 * 00000001403551D5: lea     eax, ds:30h[rdx*4]
 * 00000001403551DC: mov     edx, 1
 * 00000001403551E1: jmp     short loc_140355243
 * 00000001403551E3: mov     ecx, [r13+20h]
 * 00000001403551E7: mov     edx, [r13+28h]
 * 00000001403551EB: and     ecx, 0FFFh
 * 00000001403551F1: add     rdx, 0FFFh
 * 00000001403551F8: add     rdx, rcx
 * 00000001403551FB: shr     rdx, 0Ch
 * 00000001403551FF: lea     eax, [rdx+rdx*4]
 * 0000000140355202: lea     eax, ds:30h[rax*4]
 * 0000000140355209: jmp     short loc_1403551DC
 * 000000014035520B: mov     eax, 30h ; '0'
 * 0000000140355210: jmp     short loc_140355243
 * 0000000140355212: mov     ecx, [r13+24h]
 * 0000000140355216: mov     rax, rdi
 * 0000000140355219: sub     ecx, edx
 * 000000014035521B: mul     rcx
 * 000000014035521E: movzx   eax, word ptr [r13+28h]
 * 0000000140355223: shr     rdx, 3
 * 0000000140355227: add     edx, 7
 * 000000014035522A: and     edx, 0FFFFFFF8h
 * 000000014035522D: add     eax, r11d
 * 0000000140355230: lea     eax, [rax+rax*2]
 * 0000000140355233: lea     eax, [rdx+rax*8]
 * 0000000140355236: jmp     short loc_1403551DC
 * 0000000140355238: movzx   eax, word ptr [r13+28h]
 * 000000014035523D: add     eax, 37h ; '7'
 * 0000000140355240: and     eax, 0FFFFFFF8h
 * 0000000140355243: add     r13, rax
 * 0000000140355246: sub     r10, rdx
 * 0000000140355249: jnz     loc_14035515D
 * 000000014035524F: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140355254: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035525B: mov     r12, [rbp+0B70h+var_BC0]
 * 000000014035525F: mov     r10d, 19h
 * 0000000140355265: mov     ebx, [rbp+0B70h+var_B78]
 * 0000000140355268: mov     r11, 0B3B74BDEE4453415h
 * 0000000140355272: mov     [rsp+0C70h+var_C18], r13
 * 0000000140355277: mov     eax, r13d
 * 000000014035527A: mov     dword ptr [rbp+0B70h+var_AB0], edx
 * 0000000140355280: sub     eax, r9d
 * 0000000140355283: mov     dword ptr [rbp+0B70h+var_AB0+4], r8d
 * 000000014035528A: mov     [rbp+0B70h+var_AA8], eax
 * 0000000140355290: mov     r14d, [r13+0]
 * 0000000140355294: mov     dword ptr [rbp+0B70h+arg_8], r14d
 * 000000014035529B: cmp     r14d, 1Ch
 * 000000014035529F: jg      loc_14035AA17
 * 00000001403552A5: jz      loc_140359FEF
 * 00000001403552AB: mov     r8d, 0Ch
 * 00000001403552B1: cmp     r14d, r8d
 * 00000001403552B4: jg      loc_140356858
 * 00000001403552BA: jz      loc_14035E5B0
 * 00000001403552C0: xor     eax, eax
 * 00000001403552C2: mov     ecx, r14d
 * 00000001403552C5: test    r14d, r14d
 * 00000001403552C8: jz      loc_140356630
 * 00000001403552CE: sub     ecx, 1
 * 00000001403552D1: jz      loc_14035E5B2
 * 00000001403552D7: sub     ecx, 3
 * 00000001403552DA: jz      loc_14035639B
 * 00000001403552E0: sub     ecx, 1
 * 00000001403552E3: jz      loc_140356065
 * 00000001403552E9: lea     r8d, [rax+2]
 * 00000001403552ED: sub     ecx, r8d
 * 00000001403552F0: jz      loc_140355EF1
 * 00000001403552F6: sub     ecx, 1
 * 00000001403552F9: jz      loc_140355AA5
 * 00000001403552FF: sub     ecx, r8d
 * 0000000140355302: jz      loc_14035570C
 * 0000000140355308: cmp     ecx, 1
 * 000000014035530B: jnz     loc_14035F7E8
 * 0000000140355311: cmp     [rsi+980h], rax
 * 0000000140355318: jnz     short loc_140355388
 * 000000014035531A: mov     [rsi+824h], eax
 * 0000000140355320: xor     r15d, r15d
 * 0000000140355323: mov     r14d, 8000h
 * 0000000140355329: mov     edx, [rbp+0B70h+var_BB4]
 * 000000014035532C: cmp     dword ptr [rsi+824h], 0
 * 0000000140355333: lea     ecx, [rdx-1]
 * 0000000140355336: cmovz   ecx, edx
 * 0000000140355339: mov     edx, 1
 * 000000014035533E: add     ecx, edx
 * 0000000140355340: cmp     [rsi+8F8h], r15d
 * 0000000140355347: jnz     loc_1403606DC
 * 000000014035534D: lea     r12, [rsi+82Ch]
 * 0000000140355354: mov     eax, [r12]
 * 0000000140355358: mov     [rbp+0B70h+var_BC0], r12
 * 000000014035535C: cmp     [rsi+828h], eax
 * 0000000140355362: jge     loc_1403606DC
 * 0000000140355368: mov     ebx, [rbp+0B70h+var_B78]
 * 000000014035536B: lea     r15d, [rdx+3]
 * 000000014035536F: lea     r10d, [rdx+18h]
 * 0000000140355373: mov     r9d, 0FFFFFFFFh
 * 0000000140355379: mov     r11, 0B3B74BDEE4453415h
 * 0000000140355383: jmp     loc_140354F45
 * 0000000140355388: cmp     [rsi+824h], eax
 * 000000014035538E: jnz     short loc_1403553F0
 * 0000000140355390: mov     eax, [rsi+994h]
 * 0000000140355396: mov     ecx, eax
 * 0000000140355398: shl     ecx, 3
 * 000000014035539B: xor     ecx, eax
 * 000000014035539D: and     ecx, 20h
 * 00000001403553A0: xor     ecx, eax
 * 00000001403553A2: mov     [rsi+994h], ecx
 * 00000001403553A8: test    r15b, cl
 * 00000001403553AB: jz      loc_140355494
 * 00000001403553B1: mov     r14d, [r13+8]
 * 00000001403553B5: mov     ecx, [r13+10h]
 * 00000001403553B9: and     r14d, 0FFFh
 * 00000001403553C0: mov     rbx, [r13+8]
 * 00000001403553C4: add     r14, 0FFFh
 * 00000001403553CB: add     r14, rcx
 * 00000001403553CE: and     rbx, 0FFFFFFFFFFFFF000h
 * 00000001403553D5: shr     r14, 0Ch
 * 00000001403553D9: test    r14, r14
 * 00000001403553DC: jz      loc_140355320
 * 00000001403553E2: xor     edi, edi
 * 00000001403553E4: mov     r15, 0B3B74BDEE4453415h
 * 00000001403553EE: jmp     short loc_14035540E
 * 00000001403553F0: mov     ecx, [rsi+994h]
 * 00000001403553F6: mov     eax, ecx
 * 00000001403553F8: shr     eax, 3
 * 00000001403553FB: xor     eax, ecx
 * 00000001403553FD: test    r15b, al
 * 0000000140355400: jz      short loc_1403553A8
 * 0000000140355402: xor     eax, eax
 * 0000000140355404: jmp     loc_14035531A
 * 0000000140355409: mov     edx, 1
 * 000000014035540E: mov     rax, [rsi+2B0h]
 * 0000000140355415: mov     rcx, rbx
 * 0000000140355418: sub     r14, rdx
 * 000000014035541B: call    KeGuardDispatchICall
 * 0000000140355420: test    al, al
 * 0000000140355422: jz      short loc_140355472
 * 0000000140355424: cmp     [rsi+8F8h], edi
 * 000000014035542A: jnz     short loc_140355472
 * 000000014035542C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140355436: xor     edx, edx
 * 0000000140355438: add     rax, rsi
 * 000000014035543B: mov     rcx, rsi
 * 000000014035543E: mov     [rsi+900h], rax
 * 0000000140355445: lea     rax, [r15+r13]
 * 0000000140355449: mov     [rsi+908h], rax
 * 0000000140355450: movsxd  rax, dword ptr [r13+0]
 * 0000000140355454: mov     [rsi+910h], rax
 * 000000014035545B: mov     eax, 1
 * 0000000140355460: mov     [rsi+918h], rbx
 * 0000000140355467: mov     [rsi+8F8h], eax
 * 000000014035546D: call    sub_14036B3BC
 * 0000000140355472: add     dword ptr [rsi+828h], 100h
 * 000000014035547C: add     rbx, 1000h
 * 0000000140355483: test    r14, r14
 * 0000000140355486: jnz     short loc_140355409
 * 0000000140355488: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035548F: jmp     loc_140355320
 * 0000000140355494: mov     r14, [r13+8]
 * 0000000140355498: mov     r8d, [r13+10h]
 * 000000014035549C: mov     r9, r14
 * 000000014035549F: add     [rsi+828h], r8d
 * 00000001403554A6: mov     rax, r14
 * 00000001403554A9: mov     r11d, [rsi+814h]
 * 00000001403554B0: mov     r15, [rsi+818h]
 * 00000001403554B7: lea     rcx, [r14+r8]
 * 00000001403554BB: cmp     r14, rcx
 * 00000001403554BE: jnb     short loc_1403554D0
 * 00000001403554C0: mov     edx, 40h ; '@'
 * 00000001403554C5: prefetchnta byte ptr [rax]
 * 00000001403554C8: add     rax, rdx
 * 00000001403554CB: cmp     rax, rcx
 * 00000001403554CE: jb      short loc_1403554C5
 * 00000001403554D0: mov     r10d, r8d
 * 00000001403554D3: mov     rbx, r15
 * 00000001403554D6: shr     r10d, 7
 * 00000001403554DA: mov     r12d, 1
 * 00000001403554E0: test    r10d, r10d
 * 00000001403554E3: jz      short loc_140355550
 * 00000001403554E5: mov     rsi, 7010008004002001h
 * 00000001403554EF: mov     edx, 8
 * 00000001403554F4: mov     rax, [r9]
 * 00000001403554F7: mov     ecx, r11d
 * 00000001403554FA: xor     rax, rbx
 * 00000001403554FD: mov     rbx, [r9+8]
 * 0000000140355501: rol     rax, cl
 * 0000000140355504: add     r9, 10h
 * 0000000140355508: xor     rbx, rax
 * 000000014035550B: rol     rbx, cl
 * 000000014035550E: sub     rdx, r12
 * 0000000140355511: jnz     short loc_1403554F4
 * 0000000140355513: mov     rcx, r9
 * 0000000140355516: sub     rcx, r14
 * 0000000140355519: xor     rcx, r15
 * 000000014035551C: mov     rax, rcx
 * 000000014035551F: rol     rax, 11h
 * 0000000140355523: xor     rcx, rax
 * 0000000140355526: mov     rax, rsi
 * 0000000140355529: mul     rcx
 * 000000014035552C: xor     r11d, edx
 * 000000014035552F: mov     [rbp+0B70h+var_310], rdx
 * 0000000140355536: xor     r11d, eax
 * 0000000140355539: mov     eax, 0FFFFFFFFh
 * 000000014035553E: and     r11d, 3Fh
 * 0000000140355542: cmovz   r11d, r12d
 * 0000000140355546: add     r10d, eax
 * 0000000140355549: jnz     short loc_1403554EF
 * 000000014035554B: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140355550: and     r8d, 7Fh
 * 0000000140355554: cmp     r8d, 8
 * 0000000140355558: jb      short loc_140355577
 * 000000014035555A: mov     edx, r8d
 * 000000014035555D: shr     rdx, 3
 * 0000000140355561: xor     rbx, [r9]
 * 0000000140355564: mov     ecx, r11d
 * 0000000140355567: rol     rbx, cl
 * 000000014035556A: add     r9, 8
 * 000000014035556E: add     r8d, 0FFFFFFF8h
 * 0000000140355572: sub     rdx, r12
 * 0000000140355575: jnz     short loc_140355561
 * 0000000140355577: test    r8d, r8d
 * 000000014035557A: jz      short loc_14035559B
 * 000000014035557C: mov     esi, 0FFFFFFFFh
 * 0000000140355581: movzx   eax, byte ptr [r9]
 * 0000000140355585: mov     ecx, r11d
 * 0000000140355588: xor     rbx, rax
 * 000000014035558B: add     r9, r12
 * 000000014035558E: rol     rbx, cl
 * 0000000140355591: add     r8d, esi
 * 0000000140355594: jnz     short loc_140355581
 * 0000000140355596: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035559B: mov     rax, rbx
 * 000000014035559E: shr     rax, 1Fh
 * 00000001403555A2: xor     r15d, r15d
 * 00000001403555A5: jmp     short loc_1403555AD
 * 00000001403555A7: xor     ebx, eax
 * 00000001403555A9: shr     rax, 1Fh
 * 00000001403555AD: test    rax, rax
 * 00000001403555B0: jnz     short loc_1403555A7
 * 00000001403555B2: mov     edx, [r13+14h]
 * 00000001403555B6: btr     ebx, 1Fh
 * 00000001403555BA: cmp     ebx, edx
 * 00000001403555BC: jz      loc_140355323
 * 00000001403555C2: mov     ecx, [r13+10h]
 * 00000001403555C6: mov     r8, [r13+8]
 * 00000001403555CA: test    rcx, rcx
 * 00000001403555CD: jz      loc_140355687
 * 00000001403555D3: mov     eax, [rsi+994h]
 * 00000001403555D9: mov     r9d, 40h ; '@'
 * 00000001403555DF: test    r9b, al
 * 00000001403555E2: jz      loc_140355687
 * 00000001403555E8: mov     r12, cr8
 * 00000001403555EC: lea     eax, [r9-3Eh]
 * 00000001403555F0: mov     cr8, rax
 * 00000001403555F4: mov     r14, r8
 * 00000001403555F7: lea     rax, [rcx-1]
 * 00000001403555FB: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140355602: add     rax, r8
 * 0000000140355605: or      rax, 0FFFh
 * 000000014035560B: mov     [rbp+0B70h+arg_8], rax
 * 0000000140355612: lea     r13, [r14-1]
 * 0000000140355616: movzx   r15d, r12b
 * 000000014035561A: mov     rax, [rsi+468h]
 * 0000000140355621: xor     edx, edx
 * 0000000140355623: mov     rcx, r14
 * 0000000140355626: call    KeGuardDispatchICall
 * 000000014035562B: cmp     eax, 0C000022Dh
 * 0000000140355630: jnz     short loc_140355656
 * 0000000140355632: mov     eax, 1
 * 0000000140355637: cmp     r12b, al
 * 000000014035563A: ja      short loc_14035565A
 * 000000014035563C: movzx   r15d, r12b
 * 0000000140355640: mov     cr8, r15
 * 0000000140355644: mov     al, [r14]
 * 0000000140355647: mov     rax, cr8
 * 000000014035564B: mov     eax, 2
 * 0000000140355650: mov     cr8, rax
 * 0000000140355654: jmp     short loc_14035561A
 * 0000000140355656: test    eax, eax
 * 0000000140355658: js      short loc_14035567A
 * 000000014035565A: add     r14, 1000h
 * 0000000140355661: add     r13, 1000h
 * 0000000140355668: cmp     r13, [rbp+0B70h+arg_8]
 * 000000014035566F: jnz     short loc_140355616
 * 0000000140355671: mov     cr8, r15
 * 0000000140355675: jmp     loc_140355320
 * 000000014035567A: mov     cr8, r15
 * 000000014035567E: mov     r13, [rsp+0C70h+var_C18]
 * 0000000140355683: mov     edx, [r13+14h]
 * 0000000140355687: mov     eax, [rsi+8F8h]
 * 000000014035568D: xor     r15d, r15d
 * 0000000140355690: test    eax, eax
 * 0000000140355692: jnz     short loc_1403556AC
 * 0000000140355694: mov     ecx, edx
 * 0000000140355696: mov     eax, ebx
 * 0000000140355698: xor     rcx, rax
 * 000000014035569B: mov     rax, [rsi+590h]
 * 00000001403556A2: mov     [rax+18h], rcx
 * 00000001403556A6: mov     eax, [rsi+8F8h]
 * 00000001403556AC: mov     rcx, [r13+8]
 * 00000001403556B0: test    eax, eax
 * 00000001403556B2: jnz     loc_140355323
 * 00000001403556B8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403556C2: add     rax, rsi
 * 00000001403556C5: mov     [rsi+900h], rax
 * 00000001403556CC: mov     rax, 0B3B74BDEE4453415h
 * 00000001403556D6: add     rax, r13
 * 00000001403556D9: mov     [rsi+908h], rax
 * 00000001403556E0: movsxd  rax, dword ptr [r13+0]
 * 00000001403556E4: mov     [rsi+910h], rax
 * 00000001403556EB: mov     [rsi+918h], rcx
 * 00000001403556F2: mov     eax, 1
 * 00000001403556F7: mov     [rsi+8F8h], eax
 * 00000001403556FD: xor     edx, edx
 * 00000001403556FF: mov     rcx, rsi
 * 0000000140355702: call    sub_14036B3BC
 * 0000000140355707: jmp     loc_140355323
 * 000000014035570C: cmp     [r13+18h], eax
 * 0000000140355710: jz      short loc_140355753
 * 0000000140355712: cmp     [rsi+980h], rax
 * 0000000140355719: jz      loc_1403558C5
 * 000000014035571F: mov     ecx, [rsi+994h]
 * 0000000140355725: test    r15b, cl
 * 0000000140355728: jnz     loc_1403558C5
 * 000000014035572E: lea     rax, [rsi+824h]
 * 0000000140355735: xor     r15d, r15d
 * 0000000140355738: cmp     [rax], r15d
 * 000000014035573B: jnz     loc_1403558B4
 * 0000000140355741: mov     eax, ecx
 * 0000000140355743: shl     eax, 3
 * 0000000140355746: xor     eax, ecx
 * 0000000140355748: and     eax, 20h
 * 000000014035574B: xor     eax, ecx
 * 000000014035574D: mov     [rsi+994h], eax
 * 0000000140355753: mov     edx, [r13+1Ch]
 * 0000000140355757: lea     rax, [rsi+824h]
 * 000000014035575E: mov     r14d, [rax]
 * 0000000140355761: lea     rcx, [r13+30h]
 * 0000000140355765: shl     r14, 4
 * 0000000140355769: add     r14, rcx
 * 000000014035576C: shl     rdx, 4
 * 0000000140355770: add     rdx, rcx
 * 0000000140355773: mov     [rsp+0C70h+var_C08], rax
 * 0000000140355778: mov     [rbp+0B70h+arg_8], rdx
 * 000000014035577F: mov     [rsp+0C70h+var_C20], r14
 * 0000000140355784: xor     eax, eax
 * 0000000140355786: cmp     [r14], eax
 * 0000000140355789: jl      loc_1403559B0
 * 000000014035578F: mov     rdi, [r14+8]
 * 0000000140355793: mov     r8d, [r14+4]
 * 0000000140355797: mov     r9, rdi
 * 000000014035579A: add     [rsi+828h], r8d
 * 00000001403557A1: mov     rax, rdi
 * 00000001403557A4: mov     r11d, [rsi+814h]
 * 00000001403557AB: mov     r12d, r8d
 * 00000001403557AE: mov     r15, [rsi+818h]
 * 00000001403557B5: lea     rcx, [r8+rdi]
 * 00000001403557B9: cmp     rdi, rcx
 * 00000001403557BC: jnb     short loc_1403557CF
 * 00000001403557BE: mov     r10d, 40h ; '@'
 * 00000001403557C4: prefetchnta byte ptr [rax]
 * 00000001403557C7: add     rax, r10
 * 00000001403557CA: cmp     rax, rcx
 * 00000001403557CD: jb      short loc_1403557C4
 * 00000001403557CF: mov     r10d, r8d
 * 00000001403557D2: mov     rbx, r15
 * 00000001403557D5: shr     r10d, 7
 * 00000001403557D9: test    r10d, r10d
 * 00000001403557DC: jz      short loc_140355857
 * 00000001403557DE: mov     esi, 1
 * 00000001403557E3: mov     r12d, 0FFFFFFFFh
 * 00000001403557E9: mov     r14, 7010008004002001h
 * 00000001403557F3: mov     eax, 8
 * 00000001403557F8: xor     rbx, [r9]
 * 00000001403557FB: mov     ecx, r11d
 * 00000001403557FE: rol     rbx, cl
 * 0000000140355801: xor     rbx, [r9+8]
 * 0000000140355805: add     r9, 10h
 * 0000000140355809: rol     rbx, cl
 * 000000014035580C: sub     rax, rsi
 * 000000014035580F: jnz     short loc_1403557F8
 * 0000000140355811: mov     rcx, r9
 * 0000000140355814: sub     rcx, rdi
 * 0000000140355817: xor     rcx, r15
 * 000000014035581A: mov     rax, rcx
 * 000000014035581D: rol     rax, 11h
 * 0000000140355821: xor     rcx, rax
 * 0000000140355824: mov     rax, r14
 * 0000000140355827: mul     rcx
 * 000000014035582A: mov     [rbp+0B70h+var_318], rdx
 * 0000000140355831: xor     edx, eax
 * 0000000140355833: xor     r11d, edx
 * 0000000140355836: and     r11d, 3Fh
 * 000000014035583A: cmovz   r11d, esi
 * 000000014035583E: add     r10d, r12d
 * 0000000140355841: jnz     short loc_1403557F3
 * 0000000140355843: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140355848: mov     r12, r8
 * 000000014035584B: mov     r14, [rsp+0C70h+var_C20]
 * 0000000140355850: mov     rdx, [rbp+0B70h+arg_8]
 * 0000000140355857: and     r8d, 7Fh
 * 000000014035585B: mov     r10d, 1
 * 0000000140355861: cmp     r8d, 8
 * 0000000140355865: jb      short loc_140355884
 * 0000000140355867: mov     eax, r8d
 * 000000014035586A: shr     rax, 3
 * 000000014035586E: xor     rbx, [r9]
 * 0000000140355871: mov     ecx, r11d
 * 0000000140355874: rol     rbx, cl
 * 0000000140355877: add     r9, 8
 * 000000014035587B: add     r8d, 0FFFFFFF8h
 * 000000014035587F: sub     rax, r10
 * 0000000140355882: jnz     short loc_14035586E
 * 0000000140355884: test    r8d, r8d
 * 0000000140355887: jz      short loc_1403558A8
 * 0000000140355889: mov     esi, 0FFFFFFFFh
 * 000000014035588E: movzx   eax, byte ptr [r9]
 * 0000000140355892: mov     ecx, r11d
 * 0000000140355895: xor     rbx, rax
 * 0000000140355898: add     r9, r10
 * 000000014035589B: rol     rbx, cl
 * 000000014035589E: add     r8d, esi
 * 00000001403558A1: jnz     short loc_14035588E
 * 00000001403558A3: mov     rsi, [rsp+0C70h+var_C10]
 * 00000001403558A8: mov     rax, rbx
 * 00000001403558AB: shr     rax, 1Fh
 * 00000001403558AF: xor     r15d, r15d
 * 00000001403558B2: jmp     short loc_1403558DD
 * 00000001403558B4: test    cl, 20h
 * 00000001403558B7: jz      loc_140355753
 * 00000001403558BD: mov     r14d, r15d
 * 00000001403558C0: jmp     loc_140355A9D
 * 00000001403558C5: mov     r14d, eax
 * 00000001403558C8: xor     r15d, r15d
 * 00000001403558CB: lea     rax, [rsi+824h]
 * 00000001403558D2: jmp     loc_140355A9D
 * 00000001403558D7: xor     ebx, eax
 * 00000001403558D9: shr     rax, 1Fh
 * 00000001403558DD: test    rax, rax
 * 00000001403558E0: jnz     short loc_1403558D7
 * 00000001403558E2: mov     ecx, [r14]
 * 00000001403558E5: btr     ebx, 1Fh
 * 00000001403558E9: mov     eax, ecx
 * 00000001403558EB: btr     eax, 1Fh
 * 00000001403558EF: cmp     ebx, eax
 * 00000001403558F1: jz      loc_140355A7F
 * 00000001403558F7: test    r12, r12
 * 00000001403558FA: jz      loc_1403559FF
 * 0000000140355900: mov     eax, [rsi+994h]
 * 0000000140355906: mov     edx, 40h ; '@'
 * 000000014035590B: test    dl, al
 * 000000014035590D: jz      loc_1403559FF
 * 0000000140355913: mov     r13, cr8
 * 0000000140355917: lea     eax, [rdx-3Eh]
 * 000000014035591A: mov     cr8, rax
 * 000000014035591E: mov     r15, rdi
 * 0000000140355921: lea     rax, [rdi-1]
 * 0000000140355925: and     r15, 0FFFFFFFFFFFFF000h
 * 000000014035592C: add     rax, r12
 * 000000014035592F: or      rax, 0FFFh
 * 0000000140355935: mov     [rbp+0B70h+var_BF0], rax
 * 0000000140355939: lea     rax, [r15-1]
 * 000000014035593D: mov     [rsp+0C70h+var_C20], rax
 * 0000000140355942: movzx   r12d, r13b
 * 0000000140355946: mov     rax, [rsi+468h]
 * 000000014035594D: xor     edx, edx
 * 000000014035594F: mov     rcx, r15
 * 0000000140355952: call    KeGuardDispatchICall
 * 0000000140355957: cmp     eax, 0C000022Dh
 * 000000014035595C: jnz     short loc_140355982
 * 000000014035595E: mov     eax, 1
 * 0000000140355963: cmp     r13b, al
 * 0000000140355966: ja      short loc_140355986
 * 0000000140355968: movzx   r12d, r13b
 * 000000014035596C: mov     cr8, r12
 * 0000000140355970: mov     al, [r15]
 * 0000000140355973: mov     rax, cr8
 * 0000000140355977: mov     eax, 2
 * 000000014035597C: mov     cr8, rax
 * 0000000140355980: jmp     short loc_140355946
 * 0000000140355982: test    eax, eax
 * 0000000140355984: js      short loc_1403559F3
 * 0000000140355986: mov     rax, [rsp+0C70h+var_C20]
 * 000000014035598B: mov     ecx, 1000h
 * 0000000140355990: add     rax, rcx
 * 0000000140355993: add     r15, rcx
 * 0000000140355996: mov     [rsp+0C70h+var_C20], rax
 * 000000014035599B: cmp     rax, [rbp+0B70h+var_BF0]
 * 000000014035599F: jnz     short loc_140355942
 * 00000001403559A1: mov     cr8, r12
 * 00000001403559A5: mov     rdx, [rbp+0B70h+arg_8]
 * 00000001403559AC: mov     r12, [rbp+0B70h+var_BC0]
 * 00000001403559B0: xor     r15d, r15d
 * 00000001403559B3: add     r14, 10h
 * 00000001403559B7: mov     [rsp+0C70h+var_C20], r14
 * 00000001403559BC: cmp     r14, rdx
 * 00000001403559BF: jnb     short loc_1403559D9
 * 00000001403559C1: mov     eax, [r12]
 * 00000001403559C5: mov     r13, [rsp+0C70h+var_C18]
 * 00000001403559CA: cmp     [rsi+828h], eax
 * 00000001403559D0: jl      loc_140355784
 * 00000001403559D6: cmp     r14, rdx
 * 00000001403559D9: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403559E0: jnz     loc_140355A88
 * 00000001403559E6: xor     eax, eax
 * 00000001403559E8: mov     r14d, eax
 * 00000001403559EB: xor     r15d, r15d
 * 00000001403559EE: jmp     loc_140355A98
 * 00000001403559F3: mov     cr8, r12
 * 00000001403559F7: mov     ecx, [r14]
 * 00000001403559FA: mov     r13, [rsp+0C70h+var_C18]
 * 00000001403559FF: mov     eax, ecx
 * 0000000140355A01: xor     edx, edx
 * 0000000140355A03: mov     ecx, [rsi+8F8h]
 * 0000000140355A09: btr     eax, 1Fh
 * 0000000140355A0D: test    ecx, ecx
 * 0000000140355A0F: jnz     short loc_1403559A5
 * 0000000140355A11: mov     ecx, ebx
 * 0000000140355A13: xor     rcx, rax
 * 0000000140355A16: mov     rax, [rsi+590h]
 * 0000000140355A1D: mov     [rax+18h], rcx
 * 0000000140355A21: mov     ecx, [rsi+8F8h]
 * 0000000140355A27: test    ecx, ecx
 * 0000000140355A29: jnz     loc_1403559A5
 * 0000000140355A2F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140355A39: mov     rcx, rsi
 * 0000000140355A3C: add     rax, rsi
 * 0000000140355A3F: mov     [rsi+900h], rax
 * 0000000140355A46: mov     rax, 0B3B74BDEE4453415h
 * 0000000140355A50: add     rax, r13
 * 0000000140355A53: mov     [rsi+908h], rax
 * 0000000140355A5A: movsxd  rax, dword ptr [r13+0]
 * 0000000140355A5E: mov     [rsi+910h], rax
 * 0000000140355A65: lea     eax, [rdx+1]
 * 0000000140355A68: mov     [rsi+918h], rdi
 * 0000000140355A6F: mov     [rsi+8F8h], eax
 * 0000000140355A75: call    sub_14036B3BC
 * 0000000140355A7A: jmp     loc_1403559A5
 * 0000000140355A7F: mov     r12, [rbp+0B70h+var_BC0]
 * 0000000140355A83: jmp     loc_1403559B3
 * 0000000140355A88: mov     rax, [rsp+0C70h+var_C18]
 * 0000000140355A8D: add     rax, 30h ; '0'
 * 0000000140355A91: sub     r14, rax
 * 0000000140355A94: sar     r14, 4
 * 0000000140355A98: mov     rax, [rsp+0C70h+var_C08]
 * 0000000140355A9D: mov     [rax], r14d
 * 0000000140355AA0: jmp     loc_140355323
 * 0000000140355AA5: mov     rbx, [r13+18h]
 * 0000000140355AA9: mov     r12d, 1
 * 0000000140355AAF: mov     rcx, [rsi+6F0h]
 * 0000000140355AB6: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140355AC0: mov     rax, [rsi+720h]
 * 0000000140355AC7: add     rcx, rbx
 * 0000000140355ACA: movzx   edx, word ptr [r13+22h]
 * 0000000140355ACF: cmp     [rcx+rax], dx
 * 0000000140355AD3: jz      short loc_140355B27
 * 0000000140355AD5: xor     eax, eax
 * 0000000140355AD7: cmp     [rsi+8F8h], eax
 * 0000000140355ADD: jnz     short loc_140355B27
 * 0000000140355ADF: lea     rax, [rsi+r14]
 * 0000000140355AE3: xor     edx, edx
 * 0000000140355AE5: mov     [rsi+900h], rax
 * 0000000140355AEC: mov     rcx, rsi
 * 0000000140355AEF: lea     rax, [r11+r13]
 * 0000000140355AF3: mov     [rsi+908h], rax
 * 0000000140355AFA: movsxd  rax, dword ptr [r13+0]
 * 0000000140355AFE: mov     [rsi+910h], rax
 * 0000000140355B05: mov     [rsi+918h], rbx
 * 0000000140355B0C: mov     [rsi+8F8h], r12d
 * 0000000140355B13: call    sub_14036B3BC
 * 0000000140355B18: movzx   edx, word ptr [r13+22h]
 * 0000000140355B1D: mov     r11, 0B3B74BDEE4453415h
 * 0000000140355B27: test    [rsi+728h], dx
 * 0000000140355B2E: jnz     short loc_140355B82
 * 0000000140355B30: mov     rcx, [rsi+6F8h]
 * 0000000140355B37: add     rcx, rbx
 * 0000000140355B3A: cmp     [rcx], rcx
 * 0000000140355B3D: jz      short loc_140355B82
 * 0000000140355B3F: xor     eax, eax
 * 0000000140355B41: cmp     [rsi+8F8h], eax
 * 0000000140355B47: jnz     short loc_140355B82
 * 0000000140355B49: lea     rax, [rsi+r14]
 * 0000000140355B4D: xor     edx, edx
 * 0000000140355B4F: mov     [rsi+900h], rax
 * 0000000140355B56: mov     rcx, rsi
 * 0000000140355B59: lea     rax, [r11+r13]
 * 0000000140355B5D: mov     [rsi+908h], rax
 * 0000000140355B64: movsxd  rax, dword ptr [r13+0]
 * 0000000140355B68: mov     [rsi+910h], rax
 * 0000000140355B6F: mov     [rsi+918h], rbx
 * 0000000140355B76: mov     [rsi+8F8h], r12d
 * 0000000140355B7D: call    sub_14036B3BC
 * 0000000140355B82: mov     r11, [r13+8]
 * 0000000140355B86: mov     r8d, [r13+10h]
 * 0000000140355B8A: mov     r9, r11
 * 0000000140355B8D: add     [rsi+828h], r8d
 * 0000000140355B94: mov     rax, r11
 * 0000000140355B97: mov     r14d, [rsi+814h]
 * 0000000140355B9E: mov     r15, [rsi+818h]
 * 0000000140355BA5: lea     rcx, [r11+r8]
 * 0000000140355BA9: cmp     r11, rcx
 * 0000000140355BAC: jnb     short loc_140355BBE
 * 0000000140355BAE: mov     edx, 40h ; '@'
 * 0000000140355BB3: prefetchnta byte ptr [rax]
 * 0000000140355BB6: add     rax, rdx
 * 0000000140355BB9: cmp     rax, rcx
 * 0000000140355BBC: jb      short loc_140355BB3
 * 0000000140355BBE: mov     r10d, r8d
 * 0000000140355BC1: mov     rbx, r15
 * 0000000140355BC4: shr     r10d, 7
 * 0000000140355BC8: mov     r13d, 0FFFFFFFFh
 * 0000000140355BCE: test    r10d, r10d
 * 0000000140355BD1: jz      short loc_140355C38
 * 0000000140355BD3: mov     rsi, 7010008004002001h
 * 0000000140355BDD: mov     edx, 8
 * 0000000140355BE2: mov     rax, [r9]
 * 0000000140355BE5: mov     ecx, r14d
 * 0000000140355BE8: xor     rax, rbx
 * 0000000140355BEB: mov     rbx, [r9+8]
 * 0000000140355BEF: rol     rax, cl
 * 0000000140355BF2: add     r9, 10h
 * 0000000140355BF6: xor     rbx, rax
 * 0000000140355BF9: rol     rbx, cl
 * 0000000140355BFC: sub     rdx, r12
 * 0000000140355BFF: jnz     short loc_140355BE2
 * 0000000140355C01: mov     rcx, r9
 * 0000000140355C04: sub     rcx, r11
 * 0000000140355C07: xor     rcx, r15
 * 0000000140355C0A: mov     rax, rcx
 * 0000000140355C0D: rol     rax, 11h
 * 0000000140355C11: xor     rcx, rax
 * 0000000140355C14: mov     rax, rsi
 * 0000000140355C17: mul     rcx
 * 0000000140355C1A: mov     [rbp+0B70h+var_320], rdx
 * 0000000140355C21: xor     edx, eax
 * 0000000140355C23: xor     r14d, edx
 * 0000000140355C26: and     r14d, 3Fh
 * 0000000140355C2A: cmovz   r14d, r12d
 * 0000000140355C2E: add     r10d, r13d
 * 0000000140355C31: jnz     short loc_140355BDD
 * 0000000140355C33: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140355C38: and     r8d, 7Fh
 * 0000000140355C3C: cmp     r8d, 8
 * 0000000140355C40: jb      short loc_140355C5F
 * 0000000140355C42: mov     edx, r8d
 * 0000000140355C45: shr     rdx, 3
 * 0000000140355C49: xor     rbx, [r9]
 * 0000000140355C4C: mov     ecx, r14d
 * 0000000140355C4F: rol     rbx, cl
 * 0000000140355C52: add     r9, 8
 * 0000000140355C56: add     r8d, 0FFFFFFF8h
 * 0000000140355C5A: sub     rdx, r12
 * 0000000140355C5D: jnz     short loc_140355C49
 * 0000000140355C5F: test    r8d, r8d
 * 0000000140355C62: jz      short loc_140355C79
 * 0000000140355C64: movzx   eax, byte ptr [r9]
 * 0000000140355C68: mov     ecx, r14d
 * 0000000140355C6B: xor     rbx, rax
 * 0000000140355C6E: add     r9, r12
 * 0000000140355C71: rol     rbx, cl
 * 0000000140355C74: add     r8d, r13d
 * 0000000140355C77: jnz     short loc_140355C64
 * 0000000140355C79: mov     rax, rbx
 * 0000000140355C7C: jmp     short loc_140355C80
 * 0000000140355C7E: xor     ebx, eax
 * 0000000140355C80: shr     rax, 1Fh
 * 0000000140355C84: test    rax, rax
 * 0000000140355C87: jnz     short loc_140355C7E
 * 0000000140355C89: mov     r14, [rsp+0C70h+var_C18]
 * 0000000140355C8E: btr     ebx, 1Fh
 * 0000000140355C92: mov     r13d, eax
 * 0000000140355C95: cmp     ebx, [r14+14h]
 * 0000000140355C99: jz      loc_140355D7D
 * 0000000140355C9F: cmp     [r14], eax
 * 0000000140355CA2: jnz     short loc_140355CAC
 * 0000000140355CA4: cmp     [r14+18h], eax
 * 0000000140355CA8: cmovnz  r13d, r12d
 * 0000000140355CAC: mov     ecx, [r14+10h]
 * 0000000140355CB0: mov     rdx, [r14+8]
 * 0000000140355CB4: test    rcx, rcx
 * 0000000140355CB7: jz      loc_140355E6C
 * 0000000140355CBD: mov     eax, [rsi+994h]
 * 0000000140355CC3: mov     r8d, 40h ; '@'
 * 0000000140355CC9: test    r8b, al
 * 0000000140355CCC: jz      loc_140355E6C
 * 0000000140355CD2: mov     r12, cr8
 * 0000000140355CD6: lea     eax, [r8-3Eh]
 * 0000000140355CDA: mov     cr8, rax
 * 0000000140355CDE: mov     r14, rdx
 * 0000000140355CE1: lea     rax, [rcx-1]
 * 0000000140355CE5: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140355CEC: add     rax, rdx
 * 0000000140355CEF: or      rax, 0FFFh
 * 0000000140355CF5: mov     [rsp+0C70h+var_C20], rax
 * 0000000140355CFA: lea     rax, [r14-1]
 * 0000000140355CFE: mov     [rbp+0B70h+arg_8], rax
 * 0000000140355D05: movzx   r15d, r12b
 * 0000000140355D09: mov     rax, [rsi+468h]
 * 0000000140355D10: xor     edx, edx
 * 0000000140355D12: mov     rcx, r14
 * 0000000140355D15: call    KeGuardDispatchICall
 * 0000000140355D1A: cmp     eax, 0C000022Dh
 * 0000000140355D1F: jnz     short loc_140355D4C
 * 0000000140355D21: test    r13d, r13d
 * 0000000140355D24: jnz     loc_140355E63
 * 0000000140355D2A: lea     eax, [r13+1]
 * 0000000140355D2E: cmp     r12b, al
 * 0000000140355D31: ja      short loc_140355D54
 * 0000000140355D33: movzx   r15d, r12b
 * 0000000140355D37: mov     cr8, r15
 * 0000000140355D3B: mov     al, [r14]
 * 0000000140355D3E: mov     rax, cr8
 * 0000000140355D42: lea     eax, [r13+2]
 * 0000000140355D46: mov     cr8, rax
 * 0000000140355D4A: jmp     short loc_140355D09
 * 0000000140355D4C: test    eax, eax
 * 0000000140355D4E: js      loc_140355E63
 * 0000000140355D54: mov     rax, [rbp+0B70h+arg_8]
 * 0000000140355D5B: mov     ecx, 1000h
 * 0000000140355D60: add     rax, rcx
 * 0000000140355D63: add     r14, rcx
 * 0000000140355D66: mov     [rbp+0B70h+arg_8], rax
 * 0000000140355D6D: cmp     rax, [rsp+0C70h+var_C20]
 * 0000000140355D72: jnz     short loc_140355D05
 * 0000000140355D74: mov     cr8, r15
 * 0000000140355D78: mov     r14, [rsp+0C70h+var_C18]
 * 0000000140355D7D: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140355D87: mov     r12, 0B3B74BDEE4453415h
 * 0000000140355D91: mov     ebx, 1
 * 0000000140355D96: lea     rax, [r14+30h]
 * 0000000140355D9A: xor     r9d, r9d
 * 0000000140355D9D: mov     [rbp+0B70h+var_7F8], rax
 * 0000000140355DA4: lea     rcx, [rbp+0B70h+var_800]
 * 0000000140355DAB: movzx   eax, word ptr [r14+20h]
 * 0000000140355DB0: xor     r8d, r8d
 * 0000000140355DB3: mov     [rbp+0B70h+var_800], ax
 * 0000000140355DBA: xor     edx, edx
 * 0000000140355DBC: mov     [rbp+0B70h+var_7FE], ax
 * 0000000140355DC3: lea     rax, [rbp+0B70h+var_8F0]
 * 0000000140355DCA: mov     [rsp+0C70h+var_C38], rax
 * 0000000140355DCF: xor     eax, eax
 * 0000000140355DD1: mov     [rsp+0C70h+var_C40], rax
 * 0000000140355DD6: mov     byte ptr [rsp+0C70h+var_C48], al
 * 0000000140355DDA: mov     rax, [rsi+508h]
 * 0000000140355DE1: mov     [rsp+0C70h+BugCheckParameter4], rax
 * 0000000140355DE6: mov     rax, [rsi+1E8h]
 * 0000000140355DED: call    KeGuardDispatchICall
 * 0000000140355DF2: xor     r15d, r15d
 * 0000000140355DF5: test    eax, eax
 * 0000000140355DF7: js      loc_140355323
 * 0000000140355DFD: mov     rcx, [rbp+0B70h+var_8F0]
 * 0000000140355E04: cmp     rcx, [r14+18h]
 * 0000000140355E08: jz      short loc_140355E52
 * 0000000140355E0A: xor     eax, eax
 * 0000000140355E0C: cmp     [rsi+8F8h], eax
 * 0000000140355E12: jnz     short loc_140355E52
 * 0000000140355E14: lea     rax, [rsi+r13]
 * 0000000140355E18: xor     edx, edx
 * 0000000140355E1A: mov     [rsi+900h], rax
 * 0000000140355E21: lea     rax, [r14+r12]
 * 0000000140355E25: mov     [rsi+908h], rax
 * 0000000140355E2C: movsxd  rax, dword ptr [r14]
 * 0000000140355E2F: mov     [rsi+910h], rax
 * 0000000140355E36: mov     [rsi+918h], rcx
 * 0000000140355E3D: mov     rcx, rsi
 * 0000000140355E40: mov     [rsi+8F8h], ebx
 * 0000000140355E46: call    sub_14036B3BC
 * 0000000140355E4B: mov     rcx, [rbp+0B70h+var_8F0]
 * 0000000140355E52: mov     rax, [rsi+1E0h]
 * 0000000140355E59: call    KeGuardDispatchICall
 * 0000000140355E5E: jmp     loc_140355323
 * 0000000140355E63: mov     cr8, r15
 * 0000000140355E67: mov     r14, [rsp+0C70h+var_C18]
 * 0000000140355E6C: mov     eax, [rsi+8F8h]
 * 0000000140355E72: xor     edx, edx
 * 0000000140355E74: mov     ecx, [r14+14h]
 * 0000000140355E78: test    eax, eax
 * 0000000140355E7A: jnz     short loc_140355E92
 * 0000000140355E7C: mov     eax, ebx
 * 0000000140355E7E: xor     rcx, rax
 * 0000000140355E81: mov     rax, [rsi+590h]
 * 0000000140355E88: mov     [rax+18h], rcx
 * 0000000140355E8C: mov     eax, [rsi+8F8h]
 * 0000000140355E92: mov     rcx, [r14+8]
 * 0000000140355E96: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140355EA0: mov     r12, 0B3B74BDEE4453415h
 * 0000000140355EAA: mov     ebx, 1
 * 0000000140355EAF: test    eax, eax
 * 0000000140355EB1: jnz     loc_140355D96
 * 0000000140355EB7: lea     rax, [rsi+r13]
 * 0000000140355EBB: mov     [rsi+900h], rax
 * 0000000140355EC2: lea     rax, [r14+r12]
 * 0000000140355EC6: mov     [rsi+908h], rax
 * 0000000140355ECD: movsxd  rax, dword ptr [r14]
 * 0000000140355ED0: mov     [rsi+910h], rax
 * 0000000140355ED7: mov     [rsi+918h], rcx
 * 0000000140355EDE: mov     rcx, rsi
 * 0000000140355EE1: mov     [rsi+8F8h], ebx
 * 0000000140355EE7: call    sub_14036B3BC
 * 0000000140355EEC: jmp     loc_140355D96
 * 0000000140355EF1: mov     rax, [rsi+1A0h]
 * 0000000140355EF8: lea     rcx, [rbp+0B70h+var_298]
 * 0000000140355EFF: mov     edx, [r13+1Ch]
 * 0000000140355F03: call    KeGuardDispatchICall
 * 0000000140355F08: mov     rax, [rsi+1D0h]
 * 0000000140355F0F: lea     rdx, [rbp+0B70h+var_288]
 * 0000000140355F16: lea     rcx, [rbp+0B70h+var_298]
 * 0000000140355F1D: call    KeGuardDispatchICall
 * 0000000140355F22: xor     eax, eax
 * 0000000140355F24: mov     ebx, eax
 * 0000000140355F26: cmp     [r13+18h], eax
 * 0000000140355F2A: jbe     loc_140356040
 * 0000000140355F30: mov     eax, ebx
 * 0000000140355F32: mov     ecx, 2
 * 0000000140355F37: lea     r10, [rax+rax*2]
 * 0000000140355F3B: mov     r9d, [r13+r10*8+40h]
 * 0000000140355F40: test    [rsi+87Bh], cl
 * 0000000140355F46: jz      short loc_140355F6B
 * 0000000140355F48: mov     eax, 0C0000082h
 * 0000000140355F4D: cmp     r9d, eax
 * 0000000140355F50: jnz     short loc_140355F6B
 * 0000000140355F52: mov     eax, gs:1A4h
 * 0000000140355F5A: cmp     eax, [rsi+8F0h]
 * 0000000140355F60: jnz     short loc_140355F6B
 * 0000000140355F62: mov     rdx, [rsi+8E8h]
 * 0000000140355F69: jmp     short loc_140355F77
 * 0000000140355F6B: mov     ecx, r9d
 * 0000000140355F6E: rdmsr
 * 0000000140355F70: shl     rdx, 20h
 * 0000000140355F74: or      rdx, rax
 * 0000000140355F77: mov     r8, [r13+r10*8+30h]
 * 0000000140355F7C: mov     rcx, [r13+r10*8+38h]
 * 0000000140355F81: and     rdx, r8
 * 0000000140355F84: cmp     rdx, rcx
 * 0000000140355F87: jz      loc_14035600F
 * 0000000140355F8D: mov     r8d, [r13+1Ch]
 * 0000000140355F91: mov     eax, [rsi+8F8h]
 * 0000000140355F97: shl     r8, 20h
 * 0000000140355F9B: or      r8, r9
 * 0000000140355F9E: test    eax, eax
 * 0000000140355FA0: jnz     loc_14035602D
 * 0000000140355FA6: mov     rax, [rsi+590h]
 * 0000000140355FAD: xor     rcx, rdx
 * 0000000140355FB0: mov     [rax+18h], rcx
 * 0000000140355FB4: mov     eax, [rsi+8F8h]
 * 0000000140355FBA: test    eax, eax
 * 0000000140355FBC: jnz     short loc_14035602D
 * 0000000140355FBE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140355FC8: xor     edx, edx
 * 0000000140355FCA: add     rax, rsi
 * 0000000140355FCD: mov     rcx, rsi
 * 0000000140355FD0: mov     [rsi+900h], rax
 * 0000000140355FD7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140355FE1: add     rax, r13
 * 0000000140355FE4: mov     [rsi+908h], rax
 * 0000000140355FEB: movsxd  rax, dword ptr [r13+0]
 * 0000000140355FEF: mov     [rsi+910h], rax
 * 0000000140355FF6: mov     eax, 1
 * 0000000140355FFB: mov     [rsi+918h], r8
 * 0000000140356002: mov     [rsi+8F8h], eax
 * 0000000140356008: call    sub_14036B3BC
 * 000000014035600D: jmp     short loc_14035602D
 * 000000014035600F: test    dword ptr [rsi+994h], 200h
 * 0000000140356019: jz      short loc_14035602D
 * 000000014035601B: cmp     r8, 0FFFFFFFFFFFFFFFFh
 * 000000014035601F: jnz     short loc_14035602D
 * 0000000140356021: mov     rax, rdx
 * 0000000140356024: mov     ecx, r9d
 * 0000000140356027: shr     rdx, 20h
 * 000000014035602B: wrmsr
 * 000000014035602D: inc     ebx
 * 000000014035602F: cmp     ebx, [r13+18h]
 * 0000000140356033: jb      loc_140355F30
 * 0000000140356039: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140356040: mov     rax, [rsi+198h]
 * 0000000140356047: lea     rcx, [rbp+0B70h+var_288]
 * 000000014035604E: call    KeGuardDispatchICall
 * 0000000140356053: mov     eax, [r13+18h]
 * 0000000140356057: shl     eax, 0Fh
 * 000000014035605A: add     [rsi+828h], eax
 * 0000000140356060: jmp     loc_140355320
 * 0000000140356065: mov     ecx, [rsi+830h]
 * 000000014035606B: test    dl, cl
 * 000000014035606D: jz      loc_140355320
 * 0000000140356073: mov     r12d, 40000000h
 * 0000000140356079: test    [rsi+990h], r12d
 * 0000000140356080: jnz     short loc_140356098
 * 0000000140356082: mov     r14d, eax
 * 0000000140356085: and     ecx, 3
 * 0000000140356088: cmp     cl, 3
 * 000000014035608B: setz    r14b
 * 000000014035608F: mov     dword ptr [rbp+0B70h+arg_8], r14d
 * 0000000140356096: jmp     short loc_1403560EC
 * 0000000140356098: rdtsc
 * 000000014035609A: shl     rdx, 20h
 * 000000014035609E: or      rax, rdx
 * 00000001403560A1: mov     rcx, rax
 * 00000001403560A4: ror     rax, 3
 * 00000001403560A8: xor     rcx, rax
 * 00000001403560AB: mov     rax, 7010008004002001h
 * 00000001403560B5: mul     rcx
 * 00000001403560B8: mov     rcx, rdx
 * 00000001403560BB: mov     [rbp+0B70h+var_328], rdx
 * 00000001403560C2: xor     rcx, rax
 * 00000001403560C5: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001403560CF: mul     rcx
 * 00000001403560D2: shr     rdx, 1
 * 00000001403560D5: lea     rax, [rdx+rdx*2]
 * 00000001403560D9: cmp     rcx, rax
 * 00000001403560DC: mov     eax, 0
 * 00000001403560E1: setz    al
 * 00000001403560E4: mov     dword ptr [rbp+0B70h+arg_8], eax
 * 00000001403560EA: xor     eax, eax
 * 00000001403560EC: mov     rbx, [rsi+548h]
 * 00000001403560F3: mov     r15d, eax
 * 00000001403560F6: mov     dword ptr [rbp+0B70h+var_BD8], eax
 * 00000001403560F9: mov     rax, [rsi+178h]
 * 0000000140356100: call    KeGuardDispatchICall
 * 0000000140356105: test    [rsi+990h], r12d
 * 000000014035610C: jnz     short loc_140356127
 * 000000014035610E: mov     ecx, [rsi+950h]
 * 0000000140356114: cmp     ecx, 7
 * 0000000140356117: jnb     short loc_140356127
 * 0000000140356119: mov     r12d, 1
 * 000000014035611F: mov     r14d, r12d
 * 0000000140356122: shl     r14b, cl
 * 0000000140356125: jmp     short loc_140356145
 * 0000000140356127: mov     rax, [rsi+128h]
 * 000000014035612E: xor     edx, edx
 * 0000000140356130: mov     rcx, [rsi+0A00h]
 * 0000000140356137: call    KeGuardDispatchICall
 * 000000014035613C: mov     r14b, 80h
 * 000000014035613F: mov     r12d, 1
 * 0000000140356145: mov     rax, [rsi+138h]
 * 000000014035614C: xor     edx, edx
 * 000000014035614E: mov     rcx, rbx
 * 0000000140356151: call    KeGuardDispatchICall
 * 0000000140356156: mov     r8, [rsi+520h]
 * 000000014035615D: mov     rdx, [r8]
 * 0000000140356160: cmp     rdx, r8
 * 0000000140356163: jz      short loc_14035618A
 * 0000000140356165: mov     rax, [rsi+6B8h]
 * 000000014035616C: mov     rcx, rdx
 * 000000014035616F: sub     rcx, [rsi+6D0h]
 * 0000000140356176: lock or [rcx+rax], r14b
 * 000000014035617B: mov     rdx, [rdx]
 * 000000014035617E: add     r15d, r12d
 * 0000000140356181: cmp     rdx, r8
 * 0000000140356184: jnz     short loc_140356165
 * 0000000140356186: mov     dword ptr [rbp+0B70h+var_BD8], r15d
 * 000000014035618A: mov     rax, [rsi+550h]
 * 0000000140356191: mov     r15d, 4
 * 0000000140356197: mov     edi, dword ptr [rbp+0B70h+arg_8]
 * 000000014035619D: mov     r13, [rax]
 * 00000001403561A0: mov     rax, [rsi+730h]
 * 00000001403561A7: mov     ebx, [rax+r13]
 * 00000001403561AB: mov     [rsp+0C70h+var_C20], rbx
 * 00000001403561B0: mov     rax, [rsi+108h]
 * 00000001403561B7: mov     rdx, r15
 * 00000001403561BA: mov     rcx, r13
 * 00000001403561BD: call    KeGuardDispatchICall
 * 00000001403561C2: mov     r12, rax
 * 00000001403561C5: xor     eax, eax
 * 00000001403561C7: test    r12, r12
 * 00000001403561CA: jz      loc_14035633A
 * 00000001403561D0: mov     rbx, [r12]
 * 00000001403561D4: sar     rbx, 10h
 * 00000001403561D8: and     rbx, 0FFFFFFFFFFFFFFF0h
 * 00000001403561DC: mov     al, [rbx]
 * 00000001403561DE: and     al, 7Fh
 * 00000001403561E0: cmp     al, 3
 * 00000001403561E2: jnz     loc_14035627C
 * 00000001403561E8: mov     r8, [rsi+6B8h]
 * 00000001403561EF: mov     rdx, r8
 * 00000001403561F2: test    [rbx+r8], r14b
 * 00000001403561F6: jnz     short loc_14035626E
 * 00000001403561F8: mov     rax, [rsi+6C0h]
 * 00000001403561FF: mov     ecx, [rbx+rax]
 * 0000000140356202: test    [rsi+6D8h], ecx
 * 0000000140356208: jz      short loc_14035626E
 * 000000014035620A: xor     eax, eax
 * 000000014035620C: cmp     [rsi+8F8h], eax
 * 0000000140356212: jnz     short loc_14035626E
 * 0000000140356214: mov     rcx, [rsp+0C70h+var_C18]
 * 0000000140356219: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140356223: add     rax, rsi
 * 0000000140356226: xor     edx, edx
 * 0000000140356228: mov     [rsi+900h], rax
 * 000000014035622F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140356239: add     rax, rcx
 * 000000014035623C: mov     [rsi+908h], rax
 * 0000000140356243: movsxd  rax, dword ptr [rcx]
 * 0000000140356246: mov     rcx, rsi
 * 0000000140356249: mov     [rsi+910h], rax
 * 0000000140356250: mov     eax, 1
 * 0000000140356255: mov     [rsi+918h], rbx
 * 000000014035625C: mov     [rsi+8F8h], eax
 * 0000000140356262: call    sub_14036B3BC
 * 0000000140356267: mov     rdx, [rsi+6B8h]
 * 000000014035626E: mov     al, r14b
 * 0000000140356271: not     al
 * 0000000140356273: lock and [rbx+rdx], al
 * 0000000140356277: jmp     loc_140356323
 * 000000014035627C: cmp     al, 6
 * 000000014035627E: jnz     short loc_1403562C2
 * 0000000140356280: test    edi, edi
 * 0000000140356282: jz      loc_140356323
 * 0000000140356288: mov     rcx, [rsi+680h]
 * 000000014035628F: mov     rax, [rbx+rcx+20h]
 * 0000000140356294: cmp     rax, [rsi+320h]
 * 000000014035629B: jz      short loc_1403562A6
 * 000000014035629D: cmp     rax, [rsi+328h]
 * 00000001403562A4: jnz     short loc_1403562C6
 * 00000001403562A6: mov     rax, [rsi+330h]
 * 00000001403562AD: cmp     [rbx+rcx+30h], rax
 * 00000001403562B2: jnz     short loc_1403562C6
 * 00000001403562B4: mov     rax, [rsi+338h]
 * 00000001403562BB: cmp     [rbx+rcx+28h], rax
 * 00000001403562C0: jmp     short loc_1403562C4
 * 00000001403562C2: test    al, al
 * 00000001403562C4: jz      short loc_140356323
 * 00000001403562C6: xor     eax, eax
 * 00000001403562C8: cmp     [rsi+8F8h], eax
 * 00000001403562CE: jnz     short loc_140356323
 * 00000001403562D0: mov     rcx, [rsp+0C70h+var_C18]
 * 00000001403562D5: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403562DF: add     rax, rsi
 * 00000001403562E2: xor     edx, edx
 * 00000001403562E4: mov     [rsi+900h], rax
 * 00000001403562EB: mov     rax, 0B3B74BDEE4453415h
 * 00000001403562F5: add     rax, rcx
 * 00000001403562F8: mov     [rsi+908h], rax
 * 00000001403562FF: movsxd  rax, dword ptr [rcx]
 * 0000000140356302: mov     rcx, rsi
 * 0000000140356305: mov     [rsi+910h], rax
 * 000000014035630C: mov     eax, 1
 * 0000000140356311: mov     [rsi+918h], rbx
 * 0000000140356318: mov     [rsi+8F8h], eax
 * 000000014035631E: call    sub_14036B3BC
 * 0000000140356323: mov     rax, [rsi+120h]
 * 000000014035632A: mov     rdx, r12
 * 000000014035632D: mov     rcx, r13
 * 0000000140356330: call    KeGuardDispatchICall
 * 0000000140356335: mov     rbx, [rsp+0C70h+var_C20]
 * 000000014035633A: add     r15, 4
 * 000000014035633E: cmp     r15, rbx
 * 0000000140356341: jb      loc_1403561B0
 * 0000000140356347: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035634E: cmp     r14b, 80h
 * 0000000140356352: jnz     short loc_140356369
 * 0000000140356354: mov     rax, [rsi+130h]
 * 000000014035635B: xor     edx, edx
 * 000000014035635D: mov     rcx, [rsi+0A00h]
 * 0000000140356364: call    KeGuardDispatchICall
 * 0000000140356369: mov     rcx, [rsi+548h]
 * 0000000140356370: xor     edx, edx
 * 0000000140356372: mov     rax, [rsi+140h]
 * 0000000140356379: call    KeGuardDispatchICall
 * 000000014035637E: mov     rax, [rsi+180h]
 * 0000000140356385: call    KeGuardDispatchICall
 * 000000014035638A: mov     eax, dword ptr [rbp+0B70h+var_BD8]
 * 000000014035638D: shr     rbx, 2
 * 0000000140356391: add     eax, ebx
 * 0000000140356393: shl     eax, 8
 * 0000000140356396: jmp     loc_14035605A
 * 000000014035639B: mov     eax, [rsi+830h]
 * 00000001403563A1: test    dl, al
 * 00000001403563A3: jnz     loc_140355320
 * 00000001403563A9: mov     rbx, [rsi+548h]
 * 00000001403563B0: xor     eax, eax
 * 00000001403563B2: mov     r13d, eax
 * 00000001403563B5: mov     dword ptr [rbp+0B70h+var_BD8], eax
 * 00000001403563B8: mov     rax, [rsi+178h]
 * 00000001403563BF: call    KeGuardDispatchICall
 * 00000001403563C4: test    dword ptr [rsi+990h], 40000000h
 * 00000001403563CE: jnz     short loc_1403563E6
 * 00000001403563D0: mov     ecx, [rsi+950h]
 * 00000001403563D6: cmp     ecx, 7
 * 00000001403563D9: jnb     short loc_1403563E6
 * 00000001403563DB: mov     r14d, 1
 * 00000001403563E1: shl     r14b, cl
 * 00000001403563E4: jmp     short loc_1403563FE
 * 00000001403563E6: mov     rax, [rsi+128h]
 * 00000001403563ED: xor     edx, edx
 * 00000001403563EF: mov     rcx, [rsi+0A00h]
 * 00000001403563F6: call    KeGuardDispatchICall
 * 00000001403563FB: mov     r14b, 80h
 * 00000001403563FE: mov     rax, [rsi+138h]
 * 0000000140356405: xor     edx, edx
 * 0000000140356407: mov     rcx, rbx
 * 000000014035640A: mov     dword ptr [rbp+0B70h+arg_8], r14d
 * 0000000140356411: call    KeGuardDispatchICall
 * 0000000140356416: mov     r12, [rsi+520h]
 * 000000014035641D: mov     r15, [r12]
 * 0000000140356421: cmp     r15, r12
 * 0000000140356424: jz      loc_1403564E2
 * 000000014035642A: mov     rdi, [rsp+0C70h+var_C18]
 * 000000014035642F: mov     rbx, r15
 * 0000000140356432: sub     rbx, [rsi+6D0h]
 * 0000000140356439: cmp     r14b, 80h
 * 000000014035643D: jz      short loc_1403564BC
 * 000000014035643F: mov     rax, [rsi+6B8h]
 * 0000000140356446: test    [rbx+rax], r14b
 * 000000014035644A: jz      short loc_1403564BC
 * 000000014035644C: mov     rax, [rsi+6C0h]
 * 0000000140356453: mov     ecx, [rbx+rax]
 * 0000000140356456: test    [rsi+6D8h], ecx
 * 000000014035645C: jz      short loc_1403564BC
 * 000000014035645E: xor     eax, eax
 * 0000000140356460: cmp     [rsi+8F8h], eax
 * 0000000140356466: jnz     short loc_1403564BC
 * 0000000140356468: mov     ecx, 1
 * 000000014035646D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140356477: add     rax, rsi
 * 000000014035647A: xor     edx, edx
 * 000000014035647C: mov     [rsi+900h], rax
 * 0000000140356483: mov     rax, 0B3B74BDEE4453415h
 * 000000014035648D: add     rax, rdi
 * 0000000140356490: mov     [rsi+908h], rax
 * 0000000140356497: movsxd  rax, dword ptr [rdi]
 * 000000014035649A: mov     [rsi+910h], rax
 * 00000001403564A1: mov     rax, rbx
 * 00000001403564A4: or      rax, rcx
 * 00000001403564A7: mov     [rsi+918h], rax
 * 00000001403564AE: mov     [rsi+8F8h], ecx
 * 00000001403564B4: mov     rcx, rsi
 * 00000001403564B7: call    sub_14036B3BC
 * 00000001403564BC: mov     rax, [rsi+6B8h]
 * 00000001403564C3: lock or [rbx+rax], r14b
 * 00000001403564C8: mov     r15, [r15]
 * 00000001403564CB: inc     r13d
 * 00000001403564CE: cmp     r15, r12
 * 00000001403564D1: jnz     loc_14035642F
 * 00000001403564D7: mov     dword ptr [rbp+0B70h+var_BD8], r13d
 * 00000001403564DB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403564E2: mov     rcx, [rsi+500h]
 * 00000001403564E9: mov     rax, cr8
 * 00000001403564ED: mov     [rsp+0C70h+var_C20], rax
 * 00000001403564F2: mov     eax, 0Ch
 * 00000001403564F7: mov     cr8, rax
 * 00000001403564FB: mov     rax, [rsi+148h]
 * 0000000140356502: lea     rdx, [rbp+0B70h+var_128]
 * 0000000140356509: call    KeGuardDispatchICall
 * 000000014035650E: mov     r13, [rsi+4F8h]
 * 0000000140356515: mov     r15, [r13+0]
 * 0000000140356519: cmp     r15, r13
 * 000000014035651C: jz      loc_1403565D0
 * 0000000140356522: mov     rdi, [rsp+0C70h+var_C18]
 * 0000000140356527: mov     r12b, r14b
 * 000000014035652A: movzx   edx, r14b
 * 000000014035652E: not     r12b
 * 0000000140356531: mov     [rbp+0B70h+var_B88], edx
 * 0000000140356534: xor     r14d, r14d
 * 0000000140356537: mov     rcx, [rsi+6B8h]
 * 000000014035653E: mov     rbx, r15
 * 0000000140356541: sub     rbx, [rsi+6B0h]
 * 0000000140356548: movsx   eax, byte ptr [rcx+rbx]
 * 000000014035654C: test    edx, eax
 * 000000014035654E: jnz     short loc_1403565B1
 * 0000000140356550: cmp     [rsi+8F8h], r14d
 * 0000000140356557: jnz     short loc_1403565B1
 * 0000000140356559: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140356563: xor     edx, edx
 * 0000000140356565: add     rax, rsi
 * 0000000140356568: mov     rcx, rsi
 * 000000014035656B: mov     [rsi+900h], rax
 * 0000000140356572: mov     rax, 0B3B74BDEE4453415h
 * 000000014035657C: add     rax, rdi
 * 000000014035657F: mov     [rsi+908h], rax
 * 0000000140356586: movsxd  rax, dword ptr [rdi]
 * 0000000140356589: mov     [rsi+910h], rax
 * 0000000140356590: mov     eax, 1
 * 0000000140356595: mov     [rsi+918h], rbx
 * 000000014035659C: mov     [rsi+8F8h], eax
 * 00000001403565A2: call    sub_14036B3BC
 * 00000001403565A7: mov     rcx, [rsi+6B8h]
 * 00000001403565AE: mov     edx, [rbp+0B70h+var_B88]
 * 00000001403565B1: lock and [rcx+rbx], r12b
 * 00000001403565B6: mov     r15, [r15]
 * 00000001403565B9: cmp     r15, r13
 * 00000001403565BC: jnz     loc_140356537
 * 00000001403565C2: mov     r14d, dword ptr [rbp+0B70h+arg_8]
 * 00000001403565C9: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403565D0: mov     rax, [rsi+188h]
 * 00000001403565D7: lea     rcx, [rbp+0B70h+var_128]
 * 00000001403565DE: call    KeGuardDispatchICall
 * 00000001403565E3: movzx   eax, byte ptr [rsp+0C70h+var_C20]
 * 00000001403565E8: mov     cr8, rax
 * 00000001403565EC: cmp     r14b, 80h
 * 00000001403565F0: jnz     short loc_140356607
 * 00000001403565F2: mov     rax, [rsi+130h]
 * 00000001403565F9: xor     edx, edx
 * 00000001403565FB: mov     rcx, [rsi+0A00h]
 * 0000000140356602: call    KeGuardDispatchICall
 * 0000000140356607: mov     rcx, [rsi+548h]
 * 000000014035660E: xor     edx, edx
 * 0000000140356610: mov     rax, [rsi+140h]
 * 0000000140356617: call    KeGuardDispatchICall
 * 000000014035661C: mov     rax, [rsi+180h]
 * 0000000140356623: call    KeGuardDispatchICall
 * 0000000140356628: mov     eax, dword ptr [rbp+0B70h+var_BD8]
 * 000000014035662B: jmp     loc_140356393
 * 0000000140356630: mov     r14, [r13+8]
 * 0000000140356634: mov     r8d, [r13+10h]
 * 0000000140356638: mov     r9, r14
 * 000000014035663B: add     [rsi+828h], r8d
 * 0000000140356642: mov     rax, r14
 * 0000000140356645: mov     r11d, [rsi+814h]
 * 000000014035664C: mov     r15, [rsi+818h]
 * 0000000140356653: lea     rcx, [r14+r8]
 * 0000000140356657: cmp     r14, rcx
 * 000000014035665A: jnb     short loc_14035666C
 * 000000014035665C: mov     edx, 40h ; '@'
 * 0000000140356661: prefetchnta byte ptr [rax]
 * 0000000140356664: add     rax, rdx
 * 0000000140356667: cmp     rax, rcx
 * 000000014035666A: jb      short loc_140356661
 * 000000014035666C: mov     r10d, r8d
 * 000000014035666F: mov     rbx, r15
 * 0000000140356672: shr     r10d, 7
 * 0000000140356676: mov     r12d, 1
 * 000000014035667C: test    r10d, r10d
 * 000000014035667F: jz      short loc_1403566EB
 * 0000000140356681: mov     rsi, 7010008004002001h
 * 000000014035668B: mov     edx, 8
 * 0000000140356690: mov     rax, [r9]
 * 0000000140356693: mov     ecx, r11d
 * 0000000140356696: xor     rax, rbx
 * 0000000140356699: mov     rbx, [r9+8]
 * 000000014035669D: rol     rax, cl
 * 00000001403566A0: add     r9, 10h
 * 00000001403566A4: xor     rbx, rax
 * 00000001403566A7: rol     rbx, cl
 * 00000001403566AA: sub     rdx, r12
 * 00000001403566AD: jnz     short loc_140356690
 * 00000001403566AF: mov     rcx, r9
 * 00000001403566B2: sub     rcx, r14
 * 00000001403566B5: xor     rcx, r15
 * 00000001403566B8: mov     rax, rcx
 * 00000001403566BB: rol     rax, 11h
 * 00000001403566BF: xor     rcx, rax
 * 00000001403566C2: mov     rax, rsi
 * 00000001403566C5: mul     rcx
 * 00000001403566C8: mov     [rbp+0B70h+var_330], rdx
 * 00000001403566CF: xor     edx, eax
 * 00000001403566D1: xor     r11d, edx
 * 00000001403566D4: mov     eax, 0FFFFFFFFh
 * 00000001403566D9: and     r11d, 3Fh
 * 00000001403566DD: cmovz   r11d, r12d
 * 00000001403566E1: add     r10d, eax
 * 00000001403566E4: jnz     short loc_14035668B
 * 00000001403566E6: mov     rsi, [rsp+0C70h+var_C10]
 * 00000001403566EB: and     r8d, 7Fh
 * 00000001403566EF: cmp     r8d, 8
 * 00000001403566F3: jb      short loc_140356712
 * 00000001403566F5: mov     edx, r8d
 * 00000001403566F8: shr     rdx, 3
 * 00000001403566FC: xor     rbx, [r9]
 * 00000001403566FF: mov     ecx, r11d
 * 0000000140356702: rol     rbx, cl
 * 0000000140356705: add     r9, 8
 * 0000000140356709: add     r8d, 0FFFFFFF8h
 * 000000014035670D: sub     rdx, r12
 * 0000000140356710: jnz     short loc_1403566FC
 * 0000000140356712: test    r8d, r8d
 * 0000000140356715: jz      short loc_140356736
 * 0000000140356717: mov     esi, 0FFFFFFFFh
 * 000000014035671C: movzx   eax, byte ptr [r9]
 * 0000000140356720: mov     ecx, r11d
 * 0000000140356723: xor     rbx, rax
 * 0000000140356726: add     r9, r12
 * 0000000140356729: rol     rbx, cl
 * 000000014035672C: add     r8d, esi
 * 000000014035672F: jnz     short loc_14035671C
 * 0000000140356731: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140356736: mov     rax, rbx
 * 0000000140356739: jmp     short loc_14035673D
 * 000000014035673B: xor     ebx, eax
 * 000000014035673D: shr     rax, 1Fh
 * 0000000140356741: test    rax, rax
 * 0000000140356744: jnz     short loc_14035673B
 * 0000000140356746: btr     ebx, 1Fh
 * 000000014035674A: mov     r12d, eax
 * 000000014035674D: cmp     ebx, [r13+14h]
 * 0000000140356751: jz      loc_140355320
 * 0000000140356757: cmp     [r13+0], eax
 * 000000014035675B: jnz     short loc_140356768
 * 000000014035675D: cmp     [r13+18h], eax
 * 0000000140356761: lea     ecx, [rax+1]
 * 0000000140356764: cmovnz  r12d, ecx
 * 0000000140356768: mov     ecx, [r13+10h]
 * 000000014035676C: mov     rdx, [r13+8]
 * 0000000140356770: test    rcx, rcx
 * 0000000140356773: jz      loc_140356839
 * 0000000140356779: mov     eax, [rsi+994h]
 * 000000014035677F: mov     r8d, 40h ; '@'
 * 0000000140356785: test    r8b, al
 * 0000000140356788: jz      loc_140356839
 * 000000014035678E: mov     r13, cr8
 * 0000000140356792: lea     eax, [r8-3Eh]
 * 0000000140356796: mov     cr8, rax
 * 000000014035679A: mov     r14, rdx
 * 000000014035679D: lea     rax, [rcx-1]
 * 00000001403567A1: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001403567A8: add     rax, rdx
 * 00000001403567AB: or      rax, 0FFFh
 * 00000001403567B1: mov     [rsp+0C70h+var_C20], rax
 * 00000001403567B6: lea     rax, [r14-1]
 * 00000001403567BA: mov     [rbp+0B70h+arg_8], rax
 * 00000001403567C1: movzx   r15d, r13b
 * 00000001403567C5: mov     rax, [rsi+468h]
 * 00000001403567CC: xor     edx, edx
 * 00000001403567CE: mov     rcx, r14
 * 00000001403567D1: call    KeGuardDispatchICall
 * 00000001403567D6: cmp     eax, 0C000022Dh
 * 00000001403567DB: jnz     short loc_140356806
 * 00000001403567DD: test    r12d, r12d
 * 00000001403567E0: jnz     short loc_140356830
 * 00000001403567E2: lea     eax, [r12+1]
 * 00000001403567E7: cmp     r13b, al
 * 00000001403567EA: ja      short loc_14035680A
 * 00000001403567EC: movzx   r15d, r13b
 * 00000001403567F0: mov     cr8, r15
 * 00000001403567F4: mov     al, [r14]
 * 00000001403567F7: mov     rax, cr8
 * 00000001403567FB: lea     eax, [r12+2]
 * 0000000140356800: mov     cr8, rax
 * 0000000140356804: jmp     short loc_1403567C5
 * 0000000140356806: test    eax, eax
 * 0000000140356808: js      short loc_140356830
 * 000000014035680A: mov     rax, [rbp+0B70h+arg_8]
 * 0000000140356811: mov     r10d, 1000h
 * 0000000140356817: add     rax, r10
 * 000000014035681A: add     r14, r10
 * 000000014035681D: mov     [rbp+0B70h+arg_8], rax
 * 0000000140356824: cmp     rax, [rsp+0C70h+var_C20]
 * 0000000140356829: jnz     short loc_1403567C1
 * 000000014035682B: jmp     loc_140355671
 * 0000000140356830: mov     cr8, r15
 * 0000000140356834: mov     r13, [rsp+0C70h+var_C18]
 * 0000000140356839: mov     eax, [rsi+8F8h]
 * 000000014035683F: xor     r15d, r15d
 * 0000000140356842: mov     edx, [r13+14h]
 * 0000000140356846: test    eax, eax
 * 0000000140356848: jnz     loc_1403556AC
 * 000000014035684E: mov     ecx, ebx
 * 0000000140356850: xor     rcx, rdx
 * 0000000140356853: jmp     loc_14035569B
 * 0000000140356858: cmp     r14d, 0Eh
 * 000000014035685C: jle     loc_140359B3C
 * 0000000140356862: mov     ebx, 0Fh
 * 0000000140356867: cmp     r14d, ebx
 * 000000014035686A: jz      loc_1403599E8
 * 0000000140356870: cmp     r14d, 15h
 * 0000000140356874: jz      loc_1403598EE
 * 000000014035687A: cmp     r14d, 18h
 * 000000014035687E: jz      loc_1403571D0
 * 0000000140356884: cmp     r14d, r10d
 * 0000000140356887: jz      loc_140356D90
 * 000000014035688D: cmp     r14d, 1Ah
 * 0000000140356891: jz      loc_140356B6A
 * 0000000140356897: cmp     r14d, 1Bh
 * 000000014035689B: jnz     loc_14035F7ED
 * 00000001403568A1: mov     eax, [rsi+830h]
 * 00000001403568A7: test    dl, al
 * 00000001403568A9: jz      loc_140355320
 * 00000001403568AF: mov     r14, [rsi+5A8h]
 * 00000001403568B6: xor     eax, eax
 * 00000001403568B8: mov     r15, [rsi+5B0h]
 * 00000001403568BF: mov     rbx, [rsi+548h]
 * 00000001403568C6: mov     [rsp+0C70h+var_C00], eax
 * 00000001403568CA: mov     rax, [rsi+178h]
 * 00000001403568D1: mov     [rbp+0B70h+var_BF0], r14
 * 00000001403568D5: mov     [rsp+0C70h+var_C20], r15
 * 00000001403568DA: call    KeGuardDispatchICall
 * 00000001403568DF: test    dword ptr [rsi+990h], 40000000h
 * 00000001403568E9: jnz     short loc_140356904
 * 00000001403568EB: mov     ecx, [rsi+950h]
 * 00000001403568F1: cmp     ecx, 7
 * 00000001403568F4: jnb     short loc_140356904
 * 00000001403568F6: mov     r12d, 1
 * 00000001403568FC: mov     r13d, r12d
 * 00000001403568FF: shl     r13b, cl
 * 0000000140356902: jmp     short loc_140356922
 * 0000000140356904: mov     rax, [rsi+128h]
 * 000000014035690B: xor     edx, edx
 * 000000014035690D: mov     rcx, [rsi+0A00h]
 * 0000000140356914: call    KeGuardDispatchICall
 * 0000000140356919: mov     r13b, 80h
 * 000000014035691C: mov     r12d, 1
 * 0000000140356922: mov     rax, [rsi+138h]
 * 0000000140356929: xor     edx, edx
 * 000000014035692B: mov     rcx, rbx
 * 000000014035692E: mov     dword ptr [rbp+0B70h+var_BD8], r13d
 * 0000000140356932: call    KeGuardDispatchICall
 * 0000000140356937: mov     rax, [rsi+138h]
 * 000000014035693E: xor     edx, edx
 * 0000000140356940: mov     rcx, r14
 * 0000000140356943: call    KeGuardDispatchICall
 * 0000000140356948: mov     r9, [rsi+5A0h]
 * 000000014035694F: xor     eax, eax
 * 0000000140356951: mov     r10d, eax
 * 0000000140356954: mov     [rsp+0C70h+var_C08], rax
 * 0000000140356959: mov     r8, [r9]
 * 000000014035695C: cmp     r8, r9
 * 000000014035695F: jz      short loc_1403569B4
 * 0000000140356961: lea     rdx, [r8-18h]
 * 0000000140356965: cmp     rdx, r15
 * 0000000140356968: jz      short loc_1403569A0
 * 000000014035696A: mov     rax, [rsi+738h]
 * 0000000140356971: mov     rdx, [rdx+rax]
 * 0000000140356975: mov     rax, [rsi+6C0h]
 * 000000014035697C: mov     ecx, [rdx+rax]
 * 000000014035697F: test    [rsi+6D8h], ecx
 * 0000000140356985: jnz     short loc_140356994
 * 0000000140356987: test    r10, r10
 * 000000014035698A: mov     rax, rdx
 * 000000014035698D: cmovnz  rax, r12
 * 0000000140356991: mov     r10, rax
 * 0000000140356994: mov     rax, [rsi+6B8h]
 * 000000014035699B: lock or [rdx+rax], r13b
 * 00000001403569A0: mov     r8, [r8]
 * 00000001403569A3: cmp     r8, r9
 * 00000001403569A6: jnz     short loc_140356961
 * 00000001403569A8: mov     [rsp+0C70h+var_C08], r10
 * 00000001403569AD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403569B4: mov     r12, [rsi+520h]
 * 00000001403569BB: mov     r14, [r12]
 * 00000001403569BF: cmp     r14, r12
 * 00000001403569C2: jz      loc_140356AB4
 * 00000001403569C8: mov     rdi, [rsp+0C70h+var_C20]
 * 00000001403569CD: mov     r15b, r13b
 * 00000001403569D0: movzx   r8d, r13b
 * 00000001403569D4: not     r15b
 * 00000001403569D7: mov     r13d, [rsp+0C70h+var_C00]
 * 00000001403569DC: mov     dword ptr [rbp+0B70h+arg_8], r8d
 * 00000001403569E3: mov     rdx, [rsi+6B8h]
 * 00000001403569EA: mov     rbx, r14
 * 00000001403569ED: sub     rbx, [rsi+6D0h]
 * 00000001403569F4: mov     rcx, rdx
 * 00000001403569F7: movsx   eax, byte ptr [rdx+rbx]
 * 00000001403569FB: test    r8d, eax
 * 00000001403569FE: jnz     loc_140356A84
 * 0000000140356A04: mov     rax, [rsi+6C8h]
 * 0000000140356A0B: mov     r8, [rbx+rax]
 * 0000000140356A0F: xor     eax, eax
 * 0000000140356A11: test    r8, r8
 * 0000000140356A14: jz      short loc_140356A7D
 * 0000000140356A16: cmp     r8, rdi
 * 0000000140356A19: jz      short loc_140356A7D
 * 0000000140356A1B: cmp     [rsi+8F8h], eax
 * 0000000140356A21: jnz     short loc_140356A7D
 * 0000000140356A23: mov     rcx, [rsp+0C70h+var_C18]
 * 0000000140356A28: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140356A32: add     rax, rsi
 * 0000000140356A35: xor     edx, edx
 * 0000000140356A37: mov     [rsi+900h], rax
 * 0000000140356A3E: mov     rax, 0B3B74BDEE4453415h
 * 0000000140356A48: add     rax, rcx
 * 0000000140356A4B: mov     [rsi+908h], rax
 * 0000000140356A52: movsxd  rax, dword ptr [rcx]
 * 0000000140356A55: mov     rcx, rsi
 * 0000000140356A58: mov     [rsi+910h], rax
 * 0000000140356A5F: mov     eax, 1
 * 0000000140356A64: mov     [rsi+918h], rbx
 * 0000000140356A6B: mov     [rsi+8F8h], eax
 * 0000000140356A71: call    sub_14036B3BC
 * 0000000140356A76: mov     rcx, [rsi+6B8h]
 * 0000000140356A7D: mov     r8d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140356A84: lock and [rcx+rbx], r15b
 * 0000000140356A89: mov     r14, [r14]
 * 0000000140356A8C: mov     ecx, 1
 * 0000000140356A91: add     r13d, ecx
 * 0000000140356A94: cmp     r14, r12
 * 0000000140356A97: jnz     loc_1403569E3
 * 0000000140356A9D: mov     r15, [rsp+0C70h+var_C20]
 * 0000000140356AA2: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140356AA9: mov     [rsp+0C70h+var_C00], r13d
 * 0000000140356AAE: mov     r13d, dword ptr [rbp+0B70h+var_BD8]
 * 0000000140356AB2: jmp     short loc_140356AB9
 * 0000000140356AB4: mov     ecx, 1
 * 0000000140356AB9: mov     rdx, [rsp+0C70h+var_C08]
 * 0000000140356ABE: test    rdx, rdx
 * 0000000140356AC1: jz      short loc_140356B13
 * 0000000140356AC3: cmp     rdx, rcx
 * 0000000140356AC6: jz      short loc_140356ADA
 * 0000000140356AC8: mov     rax, [rsi+6B8h]
 * 0000000140356ACF: mov     cl, r13b
 * 0000000140356AD2: not     cl
 * 0000000140356AD4: lock and [rdx+rax], cl
 * 0000000140356AD8: jmp     short loc_140356B13
 * 0000000140356ADA: mov     r10, [rsi+5A0h]
 * 0000000140356AE1: mov     r9, [r10]
 * 0000000140356AE4: jmp     short loc_140356B0E
 * 0000000140356AE6: lea     r8, [r9-18h]
 * 0000000140356AEA: cmp     r8, r15
 * 0000000140356AED: jz      short loc_140356B0B
 * 0000000140356AEF: mov     rax, [rsi+738h]
 * 0000000140356AF6: mov     dl, r13b
 * 0000000140356AF9: not     dl
 * 0000000140356AFB: mov     r8, [r8+rax]
 * 0000000140356AFF: mov     rax, [rsi+6B8h]
 * 0000000140356B06: lock and [r8+rax], dl
 * 0000000140356B0B: mov     r9, [r9]
 * 0000000140356B0E: cmp     r9, r10
 * 0000000140356B11: jnz     short loc_140356AE6
 * 0000000140356B13: mov     rax, [rsi+140h]
 * 0000000140356B1A: xor     edx, edx
 * 0000000140356B1C: mov     rcx, [rbp+0B70h+var_BF0]
 * 0000000140356B20: call    KeGuardDispatchICall
 * 0000000140356B25: cmp     r13b, 80h
 * 0000000140356B29: jnz     short loc_140356B40
 * 0000000140356B2B: mov     rax, [rsi+130h]
 * 0000000140356B32: xor     edx, edx
 * 0000000140356B34: mov     rcx, [rsi+0A00h]
 * 0000000140356B3B: call    KeGuardDispatchICall
 * 0000000140356B40: mov     rcx, [rsi+548h]
 * 0000000140356B47: xor     edx, edx
 * 0000000140356B49: mov     rax, [rsi+140h]
 * 0000000140356B50: call    KeGuardDispatchICall
 * 0000000140356B55: mov     rax, [rsi+180h]
 * 0000000140356B5C: call    KeGuardDispatchICall
 * 0000000140356B61: mov     eax, [rsp+0C70h+var_C00]
 * 0000000140356B65: jmp     loc_140356393
 * 0000000140356B6A: mov     eax, [rsi+830h]
 * 0000000140356B70: test    dl, al
 * 0000000140356B72: jnz     loc_140355320
 * 0000000140356B78: mov     r14, [rsi+5A8h]
 * 0000000140356B7F: xor     eax, eax
 * 0000000140356B81: mov     rbx, [rsi+548h]
 * 0000000140356B88: mov     r13d, eax
 * 0000000140356B8B: mov     dword ptr [rbp+0B70h+arg_8], eax
 * 0000000140356B91: mov     rax, [rsi+5B0h]
 * 0000000140356B98: mov     [rsp+0C70h+var_C20], rax
 * 0000000140356B9D: mov     rax, [rsi+178h]
 * 0000000140356BA4: mov     [rsp+0C70h+var_C08], r14
 * 0000000140356BA9: call    KeGuardDispatchICall
 * 0000000140356BAE: test    dword ptr [rsi+990h], 40000000h
 * 0000000140356BB8: jnz     short loc_140356BD3
 * 0000000140356BBA: mov     ecx, [rsi+950h]
 * 0000000140356BC0: cmp     ecx, 7
 * 0000000140356BC3: jnb     short loc_140356BD3
 * 0000000140356BC5: mov     r12d, 1
 * 0000000140356BCB: mov     r15d, r12d
 * 0000000140356BCE: shl     r15b, cl
 * 0000000140356BD1: jmp     short loc_140356BF1
 * 0000000140356BD3: mov     rax, [rsi+128h]
 * 0000000140356BDA: xor     edx, edx
 * 0000000140356BDC: mov     rcx, [rsi+0A00h]
 * 0000000140356BE3: call    KeGuardDispatchICall
 * 0000000140356BE8: mov     r15b, 80h
 * 0000000140356BEB: mov     r12d, 1
 * 0000000140356BF1: mov     rax, [rsi+138h]
 * 0000000140356BF8: xor     edx, edx
 * 0000000140356BFA: mov     rcx, rbx
 * 0000000140356BFD: call    KeGuardDispatchICall
 * 0000000140356C02: mov     r8, [rsi+520h]
 * 0000000140356C09: mov     rdx, [r8]
 * 0000000140356C0C: cmp     rdx, r8
 * 0000000140356C0F: jz      short loc_140356C39
 * 0000000140356C11: mov     rax, [rsi+6B8h]
 * 0000000140356C18: mov     rcx, rdx
 * 0000000140356C1B: sub     rcx, [rsi+6D0h]
 * 0000000140356C22: lock or [rcx+rax], r15b
 * 0000000140356C27: mov     rdx, [rdx]
 * 0000000140356C2A: add     r13d, r12d
 * 0000000140356C2D: cmp     rdx, r8
 * 0000000140356C30: jnz     short loc_140356C11
 * 0000000140356C32: mov     dword ptr [rbp+0B70h+arg_8], r13d
 * 0000000140356C39: mov     rax, [rsi+138h]
 * 0000000140356C40: xor     edx, edx
 * 0000000140356C42: mov     rcx, r14
 * 0000000140356C45: call    KeGuardDispatchICall
 * 0000000140356C4A: mov     r12, [rsi+5A0h]
 * 0000000140356C51: mov     r14, [r12]
 * 0000000140356C55: cmp     r14, r12
 * 0000000140356C58: jz      loc_140356D31
 * 0000000140356C5E: mov     rax, [rsp+0C70h+var_C20]
 * 0000000140356C63: xor     r13d, r13d
 * 0000000140356C66: mov     rdi, [rsp+0C70h+var_C18]
 * 0000000140356C6B: mov     rcx, r14
 * 0000000140356C6E: sub     rcx, [rsi+740h]
 * 0000000140356C75: cmp     rcx, rax
 * 0000000140356C78: jz      loc_140356D17
 * 0000000140356C7E: mov     r8, [rsi+6B8h]
 * 0000000140356C85: mov     rax, [rsi+738h]
 * 0000000140356C8C: mov     rdx, r8
 * 0000000140356C8F: mov     rbx, [rcx+rax]
 * 0000000140356C93: test    [rbx+r8], r15b
 * 0000000140356C97: jnz     short loc_140356D09
 * 0000000140356C99: mov     rax, [rsi+6C0h]
 * 0000000140356CA0: mov     ecx, [rbx+rax]
 * 0000000140356CA3: test    [rsi+6D8h], ecx
 * 0000000140356CA9: jz      short loc_140356D09
 * 0000000140356CAB: cmp     [rsi+8F8h], r13d
 * 0000000140356CB2: jnz     short loc_140356D09
 * 0000000140356CB4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140356CBE: xor     edx, edx
 * 0000000140356CC0: add     rax, rsi
 * 0000000140356CC3: mov     rcx, rsi
 * 0000000140356CC6: mov     [rsi+900h], rax
 * 0000000140356CCD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140356CD7: add     rax, rdi
 * 0000000140356CDA: mov     [rsi+908h], rax
 * 0000000140356CE1: movsxd  rax, dword ptr [rdi]
 * 0000000140356CE4: mov     [rsi+910h], rax
 * 0000000140356CEB: mov     eax, 1
 * 0000000140356CF0: mov     [rsi+918h], rbx
 * 0000000140356CF7: mov     [rsi+8F8h], eax
 * 0000000140356CFD: call    sub_14036B3BC
 * 0000000140356D02: mov     rdx, [rsi+6B8h]
 * 0000000140356D09: mov     al, r15b
 * 0000000140356D0C: not     al
 * 0000000140356D0E: lock and [rbx+rdx], al
 * 0000000140356D12: mov     rax, [rsp+0C70h+var_C20]
 * 0000000140356D17: mov     r14, [r14]
 * 0000000140356D1A: cmp     r14, r12
 * 0000000140356D1D: jnz     loc_140356C6B
 * 0000000140356D23: mov     r13d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140356D2A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140356D31: mov     rax, [rsi+140h]
 * 0000000140356D38: xor     edx, edx
 * 0000000140356D3A: mov     rcx, [rsp+0C70h+var_C08]
 * 0000000140356D3F: call    KeGuardDispatchICall
 * 0000000140356D44: cmp     r15b, 80h
 * 0000000140356D48: jnz     short loc_140356D5F
 * 0000000140356D4A: mov     rax, [rsi+130h]
 * 0000000140356D51: xor     edx, edx
 * 0000000140356D53: mov     rcx, [rsi+0A00h]
 * 0000000140356D5A: call    KeGuardDispatchICall
 * 0000000140356D5F: mov     rcx, [rsi+548h]
 * 0000000140356D66: xor     edx, edx
 * 0000000140356D68: mov     rax, [rsi+140h]
 * 0000000140356D6F: call    KeGuardDispatchICall
 * 0000000140356D74: mov     rax, [rsi+180h]
 * 0000000140356D7B: call    KeGuardDispatchICall
 * 0000000140356D80: shl     r13d, 8
 * 0000000140356D84: add     [rsi+828h], r13d
 * 0000000140356D8B: jmp     loc_140355320
 * 0000000140356D90: mov     r12, [rsi+530h]
 * 0000000140356D97: xor     eax, eax
 * 0000000140356D99: mov     [rsp+0C70h+var_C00], eax
 * 0000000140356D9D: mov     rax, [rsi+378h]
 * 0000000140356DA4: call    KeGuardDispatchICall
 * 0000000140356DA9: mov     [rbp+0B70h+var_BF0], rax
 * 0000000140356DAD: cli
 * 0000000140356DAE: mov     rcx, gs:20h
 * 0000000140356DB7: mov     rax, [rsi+648h]
 * 0000000140356DBE: mov     rcx, [rcx+rax]
 * 0000000140356DC2: sti
 * 0000000140356DC3: mov     rax, [rsi+168h]
 * 0000000140356DCA: call    KeGuardDispatchICall
 * 0000000140356DCF: mov     rcx, [rsi+538h]
 * 0000000140356DD6: mov     ebx, 1
 * 0000000140356DDB: mov     rax, [rsi+0F0h]
 * 0000000140356DE2: mov     dl, bl
 * 0000000140356DE4: call    KeGuardDispatchICall
 * 0000000140356DE9: mov     rax, [rsi+610h]
 * 0000000140356DF0: mov     rcx, [rax]
 * 0000000140356DF3: mov     r13d, [rcx]
 * 0000000140356DF6: lea     rdx, [rcx+10h]
 * 0000000140356DFA: mov     [rsp+0C70h+var_C20], rdx
 * 0000000140356DFF: lea     rax, ds:0[r13*2]
 * 0000000140356E07: add     rax, r13
 * 0000000140356E0A: lea     rax, [rdx+rax*8]
 * 0000000140356E0E: mov     [rsp+0C70h+var_C08], rax
 * 0000000140356E13: xor     eax, eax
 * 0000000140356E15: mov     dword ptr [rbp+0B70h+arg_8], eax
 * 0000000140356E1B: cmp     [rcx+0Ch], al
 * 0000000140356E1E: jz      short loc_140356E34
 * 0000000140356E20: mov     r13d, eax
 * 0000000140356E23: mov     rax, [r12]
 * 0000000140356E27: jmp     short loc_140356E2F
 * 0000000140356E29: mov     rax, [rax]
 * 0000000140356E2C: add     r13d, ebx
 * 0000000140356E2F: cmp     rax, r12
 * 0000000140356E32: jnz     short loc_140356E29
 * 0000000140356E34: mov     r8d, [rsi+810h]
 * 0000000140356E3B: mov     r15d, r13d
 * 0000000140356E3E: shl     r15d, 3
 * 0000000140356E42: rdtsc
 * 0000000140356E44: shl     rdx, 20h
 * 0000000140356E48: mov     r9, 7010008004002001h
 * 0000000140356E52: or      rax, rdx
 * 0000000140356E55: mov     rcx, rax
 * 0000000140356E58: ror     rax, 3
 * 0000000140356E5C: xor     rcx, rax
 * 0000000140356E5F: mov     rax, r9
 * 0000000140356E62: mul     rcx
 * 0000000140356E65: mov     rbx, rdx
 * 0000000140356E68: mov     [rbp+0B70h+var_338], rdx
 * 0000000140356E6F: xor     ebx, eax
 * 0000000140356E71: and     ebx, 7FFh
 * 0000000140356E77: rdtsc
 * 0000000140356E79: shl     rdx, 20h
 * 0000000140356E7D: or      rax, rdx
 * 0000000140356E80: mov     rcx, rax
 * 0000000140356E83: ror     rax, 3
 * 0000000140356E87: xor     rcx, rax
 * 0000000140356E8A: mov     rax, r9
 * 0000000140356E8D: mul     rcx
 * 0000000140356E90: lea     ecx, [rbx+1]
 * 0000000140356E93: xor     rax, rdx
 * 0000000140356E96: mov     [rbp+0B70h+var_340], rdx
 * 0000000140356E9D: xor     edx, edx
 * 0000000140356E9F: div     rcx
 * 0000000140356EA2: mov     rax, [rsi+0F8h]
 * 0000000140356EA9: mov     ecx, 200h
 * 0000000140356EAE: mov     r14, rdx
 * 0000000140356EB1: lea     edx, [rbx+r15]
 * 0000000140356EB5: call    KeGuardDispatchICall
 * 0000000140356EBA: mov     r11, rax
 * 0000000140356EBD: xor     eax, eax
 * 0000000140356EBF: test    r11, r11
 * 0000000140356EC2: jnz     short loc_140356ED2
 * 0000000140356EC4: lea     ecx, [rax+1]
 * 0000000140356EC7: add     [rsi+0A18h], ecx
 * 0000000140356ECD: jmp     loc_140357024
 * 0000000140356ED2: mov     r10d, r14d
 * 0000000140356ED5: mov     r9, r11
 * 0000000140356ED8: cmp     r14d, 8
 * 0000000140356EDC: jb      short loc_140356F33
 * 0000000140356EDE: mov     r8d, r14d
 * 0000000140356EE1: mov     esi, 1
 * 0000000140356EE6: shr     r8, 3
 * 0000000140356EEA: mov     rdi, 7010008004002001h
 * 0000000140356EF4: rdtsc
 * 0000000140356EF6: shl     rdx, 20h
 * 0000000140356EFA: add     r10d, 0FFFFFFF8h
 * 0000000140356EFE: or      rax, rdx
 * 0000000140356F01: mov     rcx, rax
 * 0000000140356F04: ror     rax, 3
 * 0000000140356F08: xor     rcx, rax
 * 0000000140356F0B: mov     rax, rdi
 * 0000000140356F0E: mul     rcx
 * 0000000140356F11: mov     [rbp+0B70h+var_348], rdx
 * 0000000140356F18: xor     rdx, rax
 * 0000000140356F1B: mov     [r9], rdx
 * 0000000140356F1E: add     r9, 8
 * 0000000140356F22: sub     r8, rsi
 * 0000000140356F25: jnz     short loc_140356EF4
 * 0000000140356F27: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140356F2C: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140356F33: test    r10d, r10d
 * 0000000140356F36: jz      short loc_140356F7B
 * 0000000140356F38: rdtsc
 * 0000000140356F3A: shl     rdx, 20h
 * 0000000140356F3E: or      rax, rdx
 * 0000000140356F41: mov     rcx, rax
 * 0000000140356F44: ror     rax, 3
 * 0000000140356F48: xor     rcx, rax
 * 0000000140356F4B: mov     rax, 7010008004002001h
 * 0000000140356F55: mul     rcx
 * 0000000140356F58: mov     ecx, 0FFFFFFFFh
 * 0000000140356F5D: mov     [rbp+0B70h+var_3E8], rdx
 * 0000000140356F64: xor     rdx, rax
 * 0000000140356F67: mov     eax, 1
 * 0000000140356F6C: mov     [r9], dl
 * 0000000140356F6F: add     r9, rax
 * 0000000140356F72: shr     rdx, 8
 * 0000000140356F76: add     r10d, ecx
 * 0000000140356F79: jnz     short loc_140356F6C
 * 0000000140356F7B: mov     r8d, r15d
 * 0000000140356F7E: sub     ebx, r14d
 * 0000000140356F81: add     r8, r11
 * 0000000140356F84: mov     r10d, r14d
 * 0000000140356F87: add     r8, r10
 * 0000000140356F8A: mov     r14d, 1
 * 0000000140356F90: mov     r15, 7010008004002001h
 * 0000000140356F9A: cmp     ebx, 8
 * 0000000140356F9D: jb      short loc_140356FD8
 * 0000000140356F9F: mov     r9d, ebx
 * 0000000140356FA2: shr     r9, 3
 * 0000000140356FA6: rdtsc
 * 0000000140356FA8: shl     rdx, 20h
 * 0000000140356FAC: add     ebx, 0FFFFFFF8h
 * 0000000140356FAF: or      rax, rdx
 * 0000000140356FB2: mov     rcx, rax
 * 0000000140356FB5: ror     rax, 3
 * 0000000140356FB9: xor     rcx, rax
 * 0000000140356FBC: mov     rax, r15
 * 0000000140356FBF: mul     rcx
 * 0000000140356FC2: mov     [rbp+0B70h+var_2C8], rdx
 * 0000000140356FC9: xor     rdx, rax
 * 0000000140356FCC: mov     [r8], rdx
 * 0000000140356FCF: add     r8, 8
 * 0000000140356FD3: sub     r9, r14
 * 0000000140356FD6: jnz     short loc_140356FA6
 * 0000000140356FD8: test    ebx, ebx
 * 0000000140356FDA: jz      short loc_140357012
 * 0000000140356FDC: rdtsc
 * 0000000140356FDE: shl     rdx, 20h
 * 0000000140356FE2: or      rax, rdx
 * 0000000140356FE5: mov     rcx, rax
 * 0000000140356FE8: ror     rax, 3
 * 0000000140356FEC: xor     rcx, rax
 * 0000000140356FEF: mov     rax, r15
 * 0000000140356FF2: mul     rcx
 * 0000000140356FF5: mov     [rbp+0B70h+var_1B8], rdx
 * 0000000140356FFC: xor     rdx, rax
 * 0000000140356FFF: mov     eax, 0FFFFFFFFh
 * 0000000140357004: mov     [r8], dl
 * 0000000140357007: add     r8, r14
 * 000000014035700A: shr     rdx, 8
 * 000000014035700E: add     ebx, eax
 * 0000000140357010: jnz     short loc_140357004
 * 0000000140357012: lea     r15, [r11+r10]
 * 0000000140357016: mov     [rbp+0B70h+var_990], r11
 * 000000014035701D: test    r15, r15
 * 0000000140357020: jnz     short loc_140357030
 * 0000000140357022: xor     eax, eax
 * 0000000140357024: mov     [rbp+0B70h+var_990], rax
 * 000000014035702B: jmp     loc_14035716D
 * 0000000140357030: mov     rbx, [r12]
 * 0000000140357034: cmp     rbx, r12
 * 0000000140357037: jz      short loc_140357086
 * 0000000140357039: mov     edi, dword ptr [rbp+0B70h+arg_8]
 * 000000014035703F: mov     rax, [rsi+750h]
 * 0000000140357046: mov     rcx, rbx
 * 0000000140357049: sub     rcx, [rsi+748h]
 * 0000000140357050: mov     r14, [rcx+rax]
 * 0000000140357054: mov     rax, [rsi+2A8h]
 * 000000014035705B: mov     rcx, r14
 * 000000014035705E: call    KeGuardDispatchICall
 * 0000000140357063: test    eax, eax
 * 0000000140357065: jnz     short loc_140357074
 * 0000000140357067: cmp     edi, r13d
 * 000000014035706A: jnb     short loc_140357074
 * 000000014035706C: mov     eax, edi
 * 000000014035706E: inc     edi
 * 0000000140357070: mov     [r15+rax*8], r14
 * 0000000140357074: mov     rbx, [rbx]
 * 0000000140357077: inc     [rsp+0C70h+var_C00]
 * 000000014035707B: cmp     rbx, r12
 * 000000014035707E: jnz     short loc_14035703F
 * 0000000140357080: mov     dword ptr [rbp+0B70h+arg_8], edi
 * 0000000140357086: mov     r14d, dword ptr [rbp+0B70h+arg_8]
 * 000000014035708D: mov     rcx, r15
 * 0000000140357090: mov     rax, [rsi+398h]
 * 0000000140357097: mov     edx, r14d
 * 000000014035709A: call    KeGuardDispatchICall
 * 000000014035709F: mov     r12, [rsp+0C70h+var_C20]
 * 00000001403570A4: mov     r13, [rsp+0C70h+var_C08]
 * 00000001403570A9: mov     rdi, [rsp+0C70h+var_C18]
 * 00000001403570AE: mov     rbx, [r12+8]
 * 00000001403570B3: mov     rax, [rsi+2A8h]
 * 00000001403570BA: mov     rcx, rbx
 * 00000001403570BD: call    KeGuardDispatchICall
 * 00000001403570C2: test    eax, eax
 * 00000001403570C4: jnz     loc_140357159
 * 00000001403570CA: xor     eax, eax
 * 00000001403570CC: lea     edx, [r14-1]
 * 00000001403570D0: mov     r8d, eax
 * 00000001403570D3: test    edx, edx
 * 00000001403570D5: js      short loc_140357103
 * 00000001403570D7: lea     ecx, [rdx+r8]
 * 00000001403570DB: sar     ecx, 1
 * 00000001403570DD: movsxd  rax, ecx
 * 00000001403570E0: cmp     rbx, [r15+rax*8]
 * 00000001403570E4: jnb     short loc_1403570F1
 * 00000001403570E6: xor     eax, eax
 * 00000001403570E8: test    ecx, ecx
 * 00000001403570EA: jz      short loc_140357103
 * 00000001403570EC: lea     edx, [rcx-1]
 * 00000001403570EF: jmp     short loc_1403570F7
 * 00000001403570F1: jbe     short loc_1403570FC
 * 00000001403570F3: lea     r8d, [rcx+1]
 * 00000001403570F7: cmp     edx, r8d
 * 00000001403570FA: jge     short loc_1403570D7
 * 00000001403570FC: cmp     edx, r8d
 * 00000001403570FF: jge     short loc_140357159
 * 0000000140357101: xor     eax, eax
 * 0000000140357103: cmp     [rsi+8F8h], eax
 * 0000000140357109: jnz     short loc_140357159
 * 000000014035710B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140357115: xor     edx, edx
 * 0000000140357117: add     rax, rsi
 * 000000014035711A: mov     rcx, rsi
 * 000000014035711D: mov     [rsi+900h], rax
 * 0000000140357124: mov     rax, 0B3B74BDEE4453415h
 * 000000014035712E: add     rax, rdi
 * 0000000140357131: mov     [rsi+908h], rax
 * 0000000140357138: movsxd  rax, dword ptr [rdi]
 * 000000014035713B: mov     [rsi+910h], rax
 * 0000000140357142: mov     eax, 1
 * 0000000140357147: mov     [rsi+918h], rbx
 * 000000014035714E: mov     [rsi+8F8h], eax
 * 0000000140357154: call    sub_14036B3BC
 * 0000000140357159: add     r12, 18h
 * 000000014035715D: cmp     r12, r13
 * 0000000140357160: jb      loc_1403570AE
 * 0000000140357166: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035716D: mov     rcx, [rsi+538h]
 * 0000000140357174: mov     rax, [rsi+118h]
 * 000000014035717B: call    KeGuardDispatchICall
 * 0000000140357180: mov     rax, [rsi+170h]
 * 0000000140357187: call    KeGuardDispatchICall
 * 000000014035718C: mov     rax, [rsi+380h]
 * 0000000140357193: mov     rcx, [rbp+0B70h+var_BF0]
 * 0000000140357197: call    KeGuardDispatchICall
 * 000000014035719C: xor     eax, eax
 * 000000014035719E: cmp     [rbp+0B70h+var_990], rax
 * 00000001403571A5: jz      loc_140355320
 * 00000001403571AB: mov     eax, [rsp+0C70h+var_C00]
 * 00000001403571AF: shl     eax, 9
 * 00000001403571B2: add     [rsi+828h], eax
 * 00000001403571B8: mov     rax, [rsi+100h]
 * 00000001403571BF: mov     rcx, [rbp+0B70h+var_990]
 * 00000001403571C6: call    KeGuardDispatchICall
 * 00000001403571CB: jmp     loc_140355320
 * 00000001403571D0: mov     r12d, 40000000h
 * 00000001403571D6: test    [rsi+990h], r12d
 * 00000001403571DD: jz      short loc_14035723B
 * 00000001403571DF: test    dword ptr [rsi+994h], 1000h
 * 00000001403571E9: jnz     short loc_14035723B
 * 00000001403571EB: rdtsc
 * 00000001403571ED: shl     rdx, 20h
 * 00000001403571F1: or      rax, rdx
 * 00000001403571F4: mov     rcx, rax
 * 00000001403571F7: ror     rax, 3
 * 00000001403571FB: xor     rcx, rax
 * 00000001403571FE: mov     rax, 7010008004002001h
 * 0000000140357208: mul     rcx
 * 000000014035720B: mov     rcx, rdx
 * 000000014035720E: mov     [rbp+0B70h+var_1B0], rdx
 * 0000000140357215: xor     rcx, rax
 * 0000000140357218: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140357222: mul     rcx
 * 0000000140357225: shr     rdx, 2
 * 0000000140357229: lea     rax, [rdx+rdx*4]
 * 000000014035722D: mov     edx, 1
 * 0000000140357232: sub     rcx, rax
 * 0000000140357235: mov     [rsi+824h], ecx
 * 000000014035723B: mov     ecx, [rsi+824h]
 * 0000000140357241: xor     eax, eax
 * 0000000140357243: test    ecx, ecx
 * 0000000140357245: jz      loc_14035974F
 * 000000014035724B: sub     ecx, 1
 * 000000014035724E: jz      loc_1403595E5
 * 0000000140357254: sub     ecx, 1
 * 0000000140357257: jz      loc_14035943D
 * 000000014035725D: sub     ecx, 1
 * 0000000140357260: jz      loc_1403575C2
 * 0000000140357266: sub     ecx, 1
 * 0000000140357269: jz      loc_140357417
 * 000000014035726F: cmp     ecx, 1
 * 0000000140357272: jnz     loc_1403598DE
 * 0000000140357278: mov     rbx, r13
 * 000000014035727B: mov     [rbp+0B70h+arg_10], 0FFh
 * 0000000140357282: mov     r13d, eax
 * 0000000140357285: mov     r14d, eax
 * 0000000140357288: mov     r15d, eax
 * 000000014035728B: jmp     short loc_14035728F
 * 000000014035728D: xor     eax, eax
 * 000000014035728F: mov     [rbp+0B70h+var_8D8], rax
 * 0000000140357296: lea     r9, [rbp+0B70h+var_A48]
 * 000000014035729D: mov     rax, [rsi+430h]
 * 00000001403572A4: lea     r8, [rbp+0B70h+arg_10]
 * 00000001403572AB: lea     rdx, [rbp+0B70h+var_8D8]
 * 00000001403572B2: mov     ecx, r14d
 * 00000001403572B5: call    KeGuardDispatchICall
 * 00000001403572BA: test    eax, eax
 * 00000001403572BC: jz      loc_1403573F6
 * 00000001403572C2: mov     r12d, 1
 * 00000001403572C8: mov     rax, [rsi+208h]
 * 00000001403572CF: lea     rdx, [rbp+0B70h+var_190]
 * 00000001403572D6: mov     rcx, [rbp+0B70h+var_A48]
 * 00000001403572DD: add     r13d, r12d
 * 00000001403572E0: call    KeGuardDispatchICall
 * 00000001403572E5: test    rax, rax
 * 00000001403572E8: jnz     loc_1403573CA
 * 00000001403572EE: test    dword ptr [rsi+990h], 40000000h
 * 00000001403572F8: jz      short loc_140357341
 * 00000001403572FA: mov     rcx, [rsi+0A80h]
 * 0000000140357301: lea     edx, [rax+30h]
 * 0000000140357304: lea     r8d, [rax+6]
 * 0000000140357308: mov     rax, [rbx]
 * 000000014035730B: add     edx, 0FFFFFFF8h
 * 000000014035730E: mov     [rcx], rax
 * 0000000140357311: add     rbx, 8
 * 0000000140357315: add     rcx, 8
 * 0000000140357319: sub     r8, r12
 * 000000014035731C: jnz     short loc_140357308
 * 000000014035731E: test    edx, edx
 * 0000000140357320: jz      short loc_14035733A
 * 0000000140357322: mov     esi, 0FFFFFFFFh
 * 0000000140357327: mov     al, [rbx]
 * 0000000140357329: add     rbx, r12
 * 000000014035732C: mov     [rcx], al
 * 000000014035732E: add     rcx, r12
 * 0000000140357331: add     edx, esi
 * 0000000140357333: jnz     short loc_140357327
 * 0000000140357335: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035733A: mov     rbx, [rsi+0A80h]
 * 0000000140357341: mov     rax, [rbp+0B70h+var_A48]
 * 0000000140357348: mov     [rbx+18h], rax
 * 000000014035734C: mov     rax, [rsi+590h]
 * 0000000140357353: mov     [rax], rbx
 * 0000000140357356: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014035735D: mov     rax, [rbp+0B70h+var_A48]
 * 0000000140357364: mov     rcx, [rsi+590h]
 * 000000014035736B: mov     [rcx+8], rax
 * 000000014035736F: xor     eax, eax
 * 0000000140357371: mov     dword ptr [rcx+14h], 1000h
 * 0000000140357378: cmp     [rsi+8F8h], eax
 * 000000014035737E: jnz     short loc_1403573CA
 * 0000000140357380: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035738A: xor     edx, edx
 * 000000014035738C: add     rax, rsi
 * 000000014035738F: mov     rcx, rsi
 * 0000000140357392: mov     [rsi+900h], rax
 * 0000000140357399: mov     rax, 0B3B74BDEE4453415h
 * 00000001403573A3: add     rax, rbx
 * 00000001403573A6: mov     [rsi+908h], rax
 * 00000001403573AD: movsxd  rax, dword ptr [rbx]
 * 00000001403573B0: mov     [rsi+910h], rax
 * 00000001403573B7: mov     [rsi+918h], r15
 * 00000001403573BE: mov     [rsi+8F8h], r12d
 * 00000001403573C5: call    sub_14036B3BC
 * 00000001403573CA: mov     rax, [rsi+430h]
 * 00000001403573D1: lea     r9, [rbp+0B70h+var_A48]
 * 00000001403573D8: lea     r8, [rbp+0B70h+arg_10]
 * 00000001403573DF: mov     ecx, r14d
 * 00000001403573E2: lea     rdx, [rbp+0B70h+var_8D8]
 * 00000001403573E9: call    KeGuardDispatchICall
 * 00000001403573EE: test    eax, eax
 * 00000001403573F0: jnz     loc_1403572C8
 * 00000001403573F6: mov     edx, 1
 * 00000001403573FB: add     r14d, edx
 * 00000001403573FE: add     r15, rdx
 * 0000000140357401: cmp     r14d, 3
 * 0000000140357405: jb      loc_14035728D
 * 000000014035740B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140357412: jmp     loc_14035989B
 * 0000000140357417: mov     r13d, eax
 * 000000014035741A: mov     [rbp+0B70h+var_BB8], eax
 * 000000014035741D: mov     rax, [rsi+318h]
 * 0000000140357424: xor     ecx, ecx
 * 0000000140357426: call    KeGuardDispatchICall
 * 000000014035742B: mov     r15, rax
 * 000000014035742E: xor     eax, eax
 * 0000000140357430: test    r15, r15
 * 0000000140357433: jz      loc_140359896
 * 0000000140357439: mov     rdi, [rsp+0C70h+var_C18]
 * 000000014035743E: mov     [rbp+0B70h+var_8E0], rax
 * 0000000140357445: lea     rdx, [rbp+0B70h+var_8E0]
 * 000000014035744C: mov     rax, [rsi+310h]
 * 0000000140357453: mov     rcx, r15
 * 0000000140357456: mov     rbx, rdi
 * 0000000140357459: mov     r12d, 1
 * 000000014035745F: call    KeGuardDispatchICall
 * 0000000140357464: mov     r14, rax
 * 0000000140357467: test    rax, rax
 * 000000014035746A: jz      loc_140357599
 * 0000000140357470: lea     edi, [r12+5]
 * 0000000140357475: xor     r13d, r13d
 * 0000000140357478: mov     rax, [rsi+208h]
 * 000000014035747F: lea     rdx, [rbp+0B70h+var_188]
 * 0000000140357486: mov     rcx, r14
 * 0000000140357489: inc     r12d
 * 000000014035748C: call    KeGuardDispatchICall
 * 0000000140357491: test    rax, rax
 * 0000000140357494: jnz     loc_14035756E
 * 000000014035749A: test    dword ptr [rsi+990h], 40000000h
 * 00000001403574A4: lea     r9d, [rax+1]
 * 00000001403574A8: jz      short loc_1403574F0
 * 00000001403574AA: mov     rcx, [rsi+0A80h]
 * 00000001403574B1: lea     edx, [rax+30h]
 * 00000001403574B4: mov     r8, rdi
 * 00000001403574B7: mov     rax, [rbx]
 * 00000001403574BA: add     edx, 0FFFFFFF8h
 * 00000001403574BD: mov     [rcx], rax
 * 00000001403574C0: add     rbx, 8
 * 00000001403574C4: add     rcx, 8
 * 00000001403574C8: sub     r8, r9
 * 00000001403574CB: jnz     short loc_1403574B7
 * 00000001403574CD: test    edx, edx
 * 00000001403574CF: jz      short loc_1403574E9
 * 00000001403574D1: mov     r13d, 0FFFFFFFFh
 * 00000001403574D7: mov     al, [rbx]
 * 00000001403574D9: add     rbx, r9
 * 00000001403574DC: mov     [rcx], al
 * 00000001403574DE: add     rcx, r9
 * 00000001403574E1: add     edx, r13d
 * 00000001403574E4: jnz     short loc_1403574D7
 * 00000001403574E6: xor     r13d, r13d
 * 00000001403574E9: mov     rbx, [rsi+0A80h]
 * 00000001403574F0: mov     [rbx+18h], r14
 * 00000001403574F4: mov     [rbx+20h], r15
 * 00000001403574F8: mov     rax, [rsi+590h]
 * 00000001403574FF: mov     [rax], rbx
 * 0000000140357502: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140357509: mov     rax, [rsi+590h]
 * 0000000140357510: mov     [rax+8], r14
 * 0000000140357514: mov     dword ptr [rax+14h], 1000h
 * 000000014035751B: cmp     [rsi+8F8h], r13d
 * 0000000140357522: jnz     short loc_14035756E
 * 0000000140357524: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035752E: xor     edx, edx
 * 0000000140357530: add     rax, rsi
 * 0000000140357533: mov     rcx, rsi
 * 0000000140357536: mov     [rsi+900h], rax
 * 000000014035753D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140357547: add     rax, rbx
 * 000000014035754A: mov     [rsi+908h], rax
 * 0000000140357551: movsxd  rax, dword ptr [rbx]
 * 0000000140357554: mov     [rsi+910h], rax
 * 000000014035755B: mov     [rsi+918h], rdi
 * 0000000140357562: mov     [rsi+8F8h], r9d
 * 0000000140357569: call    sub_14036B3BC
 * 000000014035756E: mov     rax, [rsi+310h]
 * 0000000140357575: lea     rdx, [rbp+0B70h+var_8E0]
 * 000000014035757C: mov     rcx, r15
 * 000000014035757F: call    KeGuardDispatchICall
 * 0000000140357584: mov     r14, rax
 * 0000000140357587: test    rax, rax
 * 000000014035758A: jnz     loc_140357478
 * 0000000140357590: mov     r13d, [rbp+0B70h+var_BB8]
 * 0000000140357594: mov     rdi, [rsp+0C70h+var_C18]
 * 0000000140357599: mov     rax, [rsi+318h]
 * 00000001403575A0: add     r13d, r12d
 * 00000001403575A3: mov     rcx, r15
 * 00000001403575A6: mov     [rbp+0B70h+var_BB8], r13d
 * 00000001403575AA: call    KeGuardDispatchICall
 * 00000001403575AF: mov     r15, rax
 * 00000001403575B2: xor     eax, eax
 * 00000001403575B4: test    r15, r15
 * 00000001403575B7: jnz     loc_14035743E
 * 00000001403575BD: jmp     loc_14035988F
 * 00000001403575C2: mov     r13d, eax
 * 00000001403575C5: mov     rax, [rsi+4F0h]
 * 00000001403575CC: mov     rbx, rsi
 * 00000001403575CF: mov     [rbp+0B70h+var_AE0], rbx
 * 00000001403575D6: mov     r14, [rax]
 * 00000001403575D9: mov     [rbp+0B70h+var_BA0], r14
 * 00000001403575DD: test    [rsi+990h], r12d
 * 00000001403575E4: jz      short loc_1403575ED
 * 00000001403575E6: xor     eax, eax
 * 00000001403575E8: jmp     loc_14035989B
 * 00000001403575ED: mov     rcx, [rsp+0C70h+var_C18]
 * 00000001403575F2: mov     rax, [rcx+28h]
 * 00000001403575F6: test    rax, rax
 * 00000001403575F9: jz      loc_140357691
 * 00000001403575FF: mov     edx, 1
 * 0000000140357604: mov     r13d, edx
 * 0000000140357607: cmp     r14, rax
 * 000000014035760A: jz      loc_14035989B
 * 0000000140357610: mov     [rcx+18h], r14
 * 0000000140357614: mov     rax, [rsi+590h]
 * 000000014035761B: mov     [rax], rcx
 * 000000014035761E: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140357625: mov     rax, [rsi+590h]
 * 000000014035762C: mov     [rax+8], r14
 * 0000000140357630: mov     dword ptr [rax+14h], 1000h
 * 0000000140357637: xor     eax, eax
 * 0000000140357639: cmp     [rsi+8F8h], eax
 * 000000014035763F: jnz     loc_14035989B
 * 0000000140357645: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035764F: add     rax, rsi
 * 0000000140357652: mov     [rsi+900h], rax
 * 0000000140357659: lea     rax, [rcx+r11]
 * 000000014035765D: mov     [rsi+908h], rax
 * 0000000140357664: movsxd  rax, dword ptr [rcx]
 * 0000000140357667: mov     rcx, rsi
 * 000000014035766A: mov     [rsi+910h], rax
 * 0000000140357671: mov     qword ptr [rsi+918h], 5
 * 000000014035767C: mov     [rsi+8F8h], edx
 * 0000000140357682: xor     edx, edx
 * 0000000140357684: call    sub_14036B3BC
 * 0000000140357689: mov     edx, r13d
 * 000000014035768C: jmp     loc_14035989B
 * 0000000140357691: test    r14, r14
 * 0000000140357694: jz      loc_140359896
 * 000000014035769A: mov     eax, 1
 * 000000014035769F: mov     [rbp+0B70h+var_B38], rsi
 * 00000001403576A3: mov     r13d, eax
 * 00000001403576A6: mov     [rbp+0B70h+var_BB8], eax
 * 00000001403576A9: mov     rax, [rsi+200h]
 * 00000001403576B0: lea     r8, [rbp+0B70h+var_B94]
 * 00000001403576B4: lea     rdx, [rbp+0B70h+BugCheckParameter2]
 * 00000001403576B8: mov     rcx, r14
 * 00000001403576BB: call    KeGuardDispatchICall
 * 00000001403576C0: mov     [rbp+0B70h+var_BE0], rax
 * 00000001403576C4: test    rax, rax
 * 00000001403576C7: jnz     short loc_1403576D3
 * 00000001403576C9: mov     ecx, 0C000007Bh
 * 00000001403576CE: jmp     loc_140359401
 * 00000001403576D3: mov     r13d, [rbp+0B70h+var_B94]
 * 00000001403576D7: xor     eax, eax
 * 00000001403576D9: mov     r12, [rbp+0B70h+BugCheckParameter2]
 * 00000001403576DD: xor     edx, edx
 * 00000001403576DF: mov     [rbp+0B70h+var_A70], rax
 * 00000001403576E6: mov     ecx, r15d
 * 00000001403576E9: mov     dword ptr [rbp+0B70h+var_BD8], r13d
 * 00000001403576ED: lea     rax, [rbp+0B70h+var_A68]
 * 00000001403576F4: mov     [rsp+0C70h+var_C08], r12
 * 00000001403576F9: mov     r9d, 0FFFFFFFFh
 * 00000001403576FF: lea     r8d, [rdx+1]
 * 0000000140357703: mov     [rax], dl
 * 0000000140357705: add     rax, r8
 * 0000000140357708: add     ecx, r9d
 * 000000014035770B: jnz     short loc_140357703
 * 000000014035770D: xor     eax, eax
 * 000000014035770F: mov     r15d, eax
 * 0000000140357712: mov     dword ptr [rbp+0B70h+arg_8], eax
 * 0000000140357718: cmp     [rsi+80Ch], eax
 * 000000014035771E: jbe     loc_140357925
 * 0000000140357724: mov     edx, [rbp+0B70h+var_A68]
 * 000000014035772A: mov     r9d, dword ptr [rbp+0B70h+var_A70+4]
 * 0000000140357731: mov     r10d, dword ptr [rbp+0B70h+var_A70]
 * 0000000140357738: mov     rax, [rsi+0A78h]
 * 000000014035773F: mov     r14, rsi
 * 0000000140357742: test    rax, rax
 * 0000000140357745: cmovnz  r14, rax
 * 0000000140357749: xor     eax, eax
 * 000000014035774B: mov     [rsp+0C70h+var_C20], r14
 * 0000000140357750: mov     r11d, eax
 * 0000000140357753: mov     r8d, [r14+808h]
 * 000000014035775A: add     r8, r14
 * 000000014035775D: test    r10d, r10d
 * 0000000140357760: jz      short loc_140357770
 * 0000000140357762: cmp     r9d, r15d
 * 0000000140357765: ja      short loc_140357770
 * 0000000140357767: mov     r8d, edx
 * 000000014035776A: mov     r11d, r9d
 * 000000014035776D: add     r8, r14
 * 0000000140357770: cmp     r11d, r15d
 * 0000000140357773: jz      loc_1403578AE
 * 0000000140357779: mov     eax, r15d
 * 000000014035777C: mov     r13d, 2
 * 0000000140357782: sub     eax, r11d
 * 0000000140357785: mov     r15, 0AAAAAAAAAAAAAAABh
 * 000000014035778F: mov     r9d, eax
 * 0000000140357792: add     r11d, eax
 * 0000000140357795: lea     r14d, [r13+0Ah]
 * 0000000140357799: mov     ecx, [r8]
 * 000000014035779C: cmp     ecx, r14d
 * 000000014035779F: jg      short loc_1403577E6
 * 00000001403577A1: jz      short loc_140357803
 * 00000001403577A3: sub     ecx, 1
 * 00000001403577A6: jz      short loc_140357803
 * 00000001403577A8: sub     ecx, 6
 * 00000001403577AB: jz      short loc_1403577D4
 * 00000001403577AD: sub     ecx, 1
 * 00000001403577B0: jz      short loc_1403577CA
 * 00000001403577B2: cmp     ecx, r13d
 * 00000001403577B5: jnz     loc_140357842
 * 00000001403577BB: mov     eax, [r8+1Ch]
 * 00000001403577BF: add     eax, 3
 * 00000001403577C2: shl     eax, 4
 * 00000001403577C5: jmp     loc_14035787A
 * 00000001403577CA: movzx   eax, word ptr [r8+20h]
 * 00000001403577CF: jmp     loc_140357874
 * 00000001403577D4: mov     eax, [r8+18h]
 * 00000001403577D8: add     eax, r13d
 * 00000001403577DB: lea     eax, [rax+rax*2]
 * 00000001403577DE: shl     eax, 3
 * 00000001403577E1: jmp     loc_14035787A
 * 00000001403577E6: cmp     ecx, 1Ch
 * 00000001403577E9: jz      loc_14035786F
 * 00000001403577EF: cmp     ecx, 1Eh
 * 00000001403577F2: jz      short loc_140357849
 * 00000001403577F4: cmp     ecx, 20h ; ' '
 * 00000001403577F7: jle     short loc_140357842
 * 00000001403577F9: cmp     ecx, 22h ; '"'
 * 00000001403577FC: jle     short loc_14035781A
 * 00000001403577FE: cmp     ecx, 2Bh ; '+'
 * 0000000140357801: jnz     short loc_140357842
 * 0000000140357803: mov     ecx, [r8+10h]
 * 0000000140357807: mov     rax, r15
 * 000000014035780A: mul     rcx
 * 000000014035780D: shr     rdx, 3
 * 0000000140357811: lea     eax, ds:30h[rdx*4]
 * 0000000140357818: jmp     short loc_14035787A
 * 000000014035781A: mov     ecx, [r8+20h]
 * 000000014035781E: mov     edx, [r8+28h]
 * 0000000140357822: and     ecx, 0FFFh
 * 0000000140357828: add     rdx, 0FFFh
 * 000000014035782F: add     rdx, rcx
 * 0000000140357832: shr     rdx, 0Ch
 * 0000000140357836: lea     eax, [rdx+rdx*4]
 * 0000000140357839: lea     eax, ds:30h[rax*4]
 * 0000000140357840: jmp     short loc_14035787A
 * 0000000140357842: mov     eax, 30h ; '0'
 * 0000000140357847: jmp     short loc_14035787A
 * 0000000140357849: mov     ecx, [r8+24h]
 * 000000014035784D: mov     rax, r15
 * 0000000140357850: dec     ecx
 * 0000000140357852: mul     rcx
 * 0000000140357855: movzx   eax, word ptr [r8+28h]
 * 000000014035785A: shr     rdx, 3
 * 000000014035785E: add     edx, 7
 * 0000000140357861: and     edx, 0FFFFFFF8h
 * 0000000140357864: add     eax, r13d
 * 0000000140357867: lea     eax, [rax+rax*2]
 * 000000014035786A: lea     eax, [rdx+rax*8]
 * 000000014035786D: jmp     short loc_14035787A
 * 000000014035786F: movzx   eax, word ptr [r8+28h]
 * 0000000140357874: add     eax, 37h ; '7'
 * 0000000140357877: and     eax, 0FFFFFFF8h
 * 000000014035787A: add     r8, rax
 * 000000014035787D: mov     eax, 1
 * 0000000140357882: sub     r9, rax
 * 0000000140357885: jnz     loc_140357799
 * 000000014035788B: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140357890: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140357897: mov     r14, [rsp+0C70h+var_C20]
 * 000000014035789C: mov     r15d, dword ptr [rbp+0B70h+arg_8]
 * 00000001403578A3: mov     r12, [rsp+0C70h+var_C08]
 * 00000001403578A8: mov     r13d, dword ptr [rbp+0B70h+var_BD8]
 * 00000001403578AC: jmp     short loc_1403578B3
 * 00000001403578AE: mov     eax, 1
 * 00000001403578B3: mov     edx, r8d
 * 00000001403578B6: mov     dword ptr [rbp+0B70h+var_A70], eax
 * 00000001403578BC: sub     edx, r14d
 * 00000001403578BF: mov     dword ptr [rbp+0B70h+var_A70+4], r11d
 * 00000001403578C6: mov     [rbp+0B70h+var_A68], edx
 * 00000001403578CC: mov     r10d, eax
 * 00000001403578CF: movsxd  rcx, dword ptr [r8]
 * 00000001403578D2: mov     r9d, r11d
 * 00000001403578D5: cmp     ecx, 2Bh ; '+'
 * 00000001403578D8: ja      short loc_1403578FA
 * 00000001403578DA: mov     r11, 80000001002h
 * 00000001403578E4: bt      r11, rcx
 * 00000001403578E8: jnb     short loc_1403578FA
 * 00000001403578EA: mov     rax, [rbp+0B70h+var_BE0]
 * 00000001403578EE: cmp     [r8+8], rax
 * 00000001403578F2: jnz     short loc_1403578FA
 * 00000001403578F4: cmp     [r8+10h], r13d
 * 00000001403578F8: jz      short loc_140357928
 * 00000001403578FA: lea     eax, [rcx-21h]
 * 00000001403578FD: mov     ecx, 1
 * 0000000140357902: cmp     eax, ecx
 * 0000000140357904: ja      short loc_14035790C
 * 0000000140357906: cmp     [r8+20h], r12
 * 000000014035790A: jz      short loc_140357928
 * 000000014035790C: add     r15d, ecx
 * 000000014035790F: mov     dword ptr [rbp+0B70h+arg_8], r15d
 * 0000000140357916: cmp     r15d, [rsi+80Ch]
 * 000000014035791D: jb      loc_140357738
 * 0000000140357923: xor     eax, eax
 * 0000000140357925: mov     r8, rax
 * 0000000140357928: mov     r14, [rbp+0B70h+var_BA0]
 * 000000014035792C: mov     [rbp+0B70h+var_AD0], r8
 * 0000000140357933: test    r8, r8
 * 0000000140357936: jz      short loc_140357942
 * 0000000140357938: mov     ecx, 0C000010Eh
 * 000000014035793D: jmp     loc_1403593FD
 * 0000000140357942: mov     rax, [rsi+2A8h]
 * 0000000140357949: mov     rcx, r14
 * 000000014035794C: call    KeGuardDispatchICall
 * 0000000140357951: test    dword ptr [rsi+990h], 40000000h
 * 000000014035795B: mov     r15d, eax
 * 000000014035795E: mov     dword ptr [rbp+0B70h+var_BA8], eax
 * 0000000140357961: mov     eax, [rbp+0B70h+var_B94]
 * 0000000140357964: mov     dword ptr [rbp+0B70h+var_BD8], eax
 * 0000000140357967: jz      short loc_14035798B
 * 0000000140357969: mov     rdx, [rbp+0B70h+BugCheckParameter2]
 * 000000014035796D: lea     rcx, [rbp+0B70h+var_AE0]
 * 0000000140357974: mov     r8d, 9
 * 000000014035797A: call    sub_1409D0FB4
 * 000000014035797F: mov     rbx, [rbp+0B70h+var_AE0]
 * 0000000140357986: jmp     loc_1403593FB
 * 000000014035798B: mov     rcx, [rbp+0B70h+BugCheckParameter2]
 * 000000014035798F: lea     r9, [rbp+0B70h+var_B94]
 * 0000000140357993: xor     eax, eax
 * 0000000140357995: xor     r8d, r8d
 * 0000000140357998: mov     [rbp+0B70h+var_710], rax
 * 000000014035799F: mov     [rbp+0B70h+var_928], eax
 * 00000001403579A5: mov     rax, [rsi+1F0h]
 * 00000001403579AC: lea     r13d, [r8+1]
 * 00000001403579B0: mov     dl, r13b
 * 00000001403579B3: call    KeGuardDispatchICall
 * 00000001403579B8: mov     rdx, rax
 * 00000001403579BB: lea     r8d, [r13+0Bh]
 * 00000001403579BF: neg     rax
 * 00000001403579C2: mov     [rbp+0B70h+var_728], rdx
 * 00000001403579C9: lea     r9, [rbp+0B70h+var_B94]
 * 00000001403579CD: mov     dl, r13b
 * 00000001403579D0: sbb     ecx, ecx
 * 00000001403579D2: and     ecx, [rbp+0B70h+var_B94]
 * 00000001403579D5: mov     [rbp+0B70h+var_B94], ecx
 * 00000001403579D8: mov     rax, [rsi+1F0h]
 * 00000001403579DF: mov     [rbp+0B70h+var_934], ecx
 * 00000001403579E5: mov     rcx, [rbp+0B70h+BugCheckParameter2]
 * 00000001403579E9: call    KeGuardDispatchICall
 * 00000001403579EE: mov     rdx, rax
 * 00000001403579F1: mov     [rbp+0B70h+var_BC0], rax
 * 00000001403579F5: neg     rax
 * 00000001403579F8: mov     [rbp+0B70h+var_720], rdx
 * 00000001403579FF: lea     r8d, [r13+9]
 * 0000000140357A03: mov     dl, r13b
 * 0000000140357A06: sbb     ecx, ecx
 * 0000000140357A08: lea     r9, [rbp+0B70h+var_B94]
 * 0000000140357A0C: and     ecx, [rbp+0B70h+var_B94]
 * 0000000140357A0F: mov     [rbp+0B70h+var_B94], ecx
 * 0000000140357A12: mov     rax, [rsi+1F0h]
 * 0000000140357A19: mov     [rsp+0C70h+var_C00], ecx
 * 0000000140357A1D: mov     [rbp+0B70h+var_930], ecx
 * 0000000140357A23: mov     rcx, [rbp+0B70h+BugCheckParameter2]
 * 0000000140357A27: call    KeGuardDispatchICall
 * 0000000140357A2C: mov     rdx, rax
 * 0000000140357A2F: neg     rax
 * 0000000140357A32: mov     [rbp+0B70h+var_718], rdx
 * 0000000140357A39: sbb     ecx, ecx
 * 0000000140357A3B: and     ecx, [rbp+0B70h+var_B94]
 * 0000000140357A3E: mov     [rbp+0B70h+var_B94], ecx
 * 0000000140357A41: mov     rax, [rsi+1F8h]
 * 0000000140357A48: mov     [rbp+0B70h+var_92C], ecx
 * 0000000140357A4E: mov     rcx, [rbp+0B70h+BugCheckParameter2]
 * 0000000140357A52: call    KeGuardDispatchICall
 * 0000000140357A57: mov     r14, rax
 * 0000000140357A5A: test    rax, rax
 * 0000000140357A5D: jnz     short loc_140357A6D
 * 0000000140357A5F: mov     ecx, 0C000007Bh
 * 0000000140357A64: mov     r14, [rbp+0B70h+var_BA0]
 * 0000000140357A68: jmp     loc_140359401
 * 0000000140357A6D: mov     rax, [rsi+498h]
 * 0000000140357A74: lea     rdx, [rbp+0B70h+var_7C8]
 * 0000000140357A7B: mov     rcx, [rbp+0B70h+BugCheckParameter2]
 * 0000000140357A7F: call    KeGuardDispatchICall
 * 0000000140357A84: mov     r8d, [rsi+924h]
 * 0000000140357A8B: mov     [rbp+0B70h+var_708], rax
 * 0000000140357A92: mov     eax, [rbp+0B70h+var_7C8]
 * 0000000140357A98: mov     [rbp+0B70h+var_924], eax
 * 0000000140357A9E: mov     rax, [rbp+0B70h+BugCheckParameter2]
 * 0000000140357AA2: mov     [rbp+0B70h+var_730], rax
 * 0000000140357AA9: mov     eax, [r14+54h]
 * 0000000140357AAD: mov     [rbp+0B70h+var_938], eax
 * 0000000140357AB3: mov     eax, r15d
 * 0000000140357AB6: mov     r15d, [rsi+7E4h]
 * 0000000140357ABD: neg     eax
 * 0000000140357ABF: sbb     r9d, r9d
 * 0000000140357AC2: and     r9d, 0Bh
 * 0000000140357AC6: lea     eax, [r15+120h]
 * 0000000140357ACD: mov     dword ptr [rbp+0B70h+arg_8], r9d
 * 0000000140357AD4: cmp     eax, [rsi+0A1Ch]
 * 0000000140357ADA: jbe     loc_140357BDE
 * 0000000140357AE0: mov     edx, eax
 * 0000000140357AE2: mov     rcx, rsi
 * 0000000140357AE5: call    sub_14036AB20
 * 0000000140357AEA: mov     r14, rax
 * 0000000140357AED: mov     [rsp+0C70h+var_C20], rax
 * 0000000140357AF2: xor     eax, eax
 * 0000000140357AF4: test    r14, r14
 * 0000000140357AF7: jz      loc_140357BD0
 * 0000000140357AFD: mov     ecx, [rsi+990h]
 * 0000000140357B03: test    cl, 4
 * 0000000140357B06: jnz     loc_140357BBF
 * 0000000140357B0C: mov     eax, [rsi+7E4h]
 * 0000000140357B12: and     ecx, 20000000h
 * 0000000140357B18: mov     r9, [rsi+7C8h]
 * 0000000140357B1F: neg     ecx
 * 0000000140357B21: mov     rcx, rsi
 * 0000000140357B24: sbb     r8d, r8d
 * 0000000140357B27: and     r8d, [rsi+924h]
 * 0000000140357B2E: cmp     eax, 8
 * 0000000140357B31: jb      short loc_140357B4B
 * 0000000140357B33: mov     edx, eax
 * 0000000140357B35: shr     rdx, 3
 * 0000000140357B39: xor     r12d, r12d
 * 0000000140357B3C: mov     [rcx], r12
 * 0000000140357B3F: add     eax, 0FFFFFFF8h
 * 0000000140357B42: add     rcx, 8
 * 0000000140357B46: sub     rdx, r13
 * 0000000140357B49: jnz     short loc_140357B3C
 * 0000000140357B4B: xor     edx, edx
 * 0000000140357B4D: test    eax, eax
 * 0000000140357B4F: jz      short loc_140357B61
 * 0000000140357B51: mov     r10d, 0FFFFFFFFh
 * 0000000140357B57: mov     [rcx], dl
 * 0000000140357B59: add     rcx, r13
 * 0000000140357B5C: add     eax, r10d
 * 0000000140357B5F: jnz     short loc_140357B57
 * 0000000140357B61: mov     ebx, [r14+924h]
 * 0000000140357B68: mov     [r14+924h], r8d
 * 0000000140357B6F: cmp     r8d, 3
 * 0000000140357B73: jz      short loc_140357BA9
 * 0000000140357B75: test    dword ptr [r14+990h], 10000000h
 * 0000000140357B80: mov     rcx, rdx
 * 0000000140357B83: cmovz   ecx, r8d
 * 0000000140357B87: test    ecx, ecx
 * 0000000140357B89: jz      short loc_140357BA0
 * 0000000140357B8B: mov     rax, [r14+228h]
 * 0000000140357B92: lea     rcx, [r9-8]
 * 0000000140357B96: mov     rdx, [rcx]
 * 0000000140357B99: call    KeGuardDispatchICall
 * 0000000140357B9E: jmp     short loc_140357BB8
 * 0000000140357BA0: mov     rax, [r14+100h]
 * 0000000140357BA7: jmp     short loc_140357BB0
 * 0000000140357BA9: mov     rax, [r14+368h]
 * 0000000140357BB0: mov     rcx, r9
 * 0000000140357BB3: call    KeGuardDispatchICall
 * 0000000140357BB8: mov     [r14+924h], ebx
 * 0000000140357BBF: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140357BC7: mov     r9d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140357BCE: jmp     short loc_140357BEC
 * 0000000140357BD0: mov     [rbp+0B70h+var_B38], rax
 * 0000000140357BD4: mov     ecx, 0C000009Ah
 * 0000000140357BD9: jmp     loc_140357A64
 * 0000000140357BDE: mov     r14, rsi
 * 0000000140357BE1: mov     [rsp+0C70h+var_C20], rsi
 * 0000000140357BE6: mov     [rsi+7E4h], eax
 * 0000000140357BEC: mov     eax, 6
 * 0000000140357BF1: lea     r12, [r14+r15]
 * 0000000140357BF5: add     [r14+80Ch], eax
 * 0000000140357BFC: lea     rdi, [rbp+0B70h+var_730]
 * 0000000140357C03: xor     r10d, r10d
 * 0000000140357C06: mov     [rbp+0B70h+var_8E8], r12
 * 0000000140357C0D: mov     [rbp+0B70h+var_AD0], r12
 * 0000000140357C14: lea     rsi, [rbp+0B70h+var_938]
 * 0000000140357C1B: mov     [rsp+0C70h+var_C08], rdi
 * 0000000140357C20: mov     r11, r13
 * 0000000140357C23: mov     [rbp+0B70h+var_BF0], rax
 * 0000000140357C27: mov     r13d, [rsi]
 * 0000000140357C2A: mov     rdx, rax
 * 0000000140357C2D: mov     r15, [rdi]
 * 0000000140357C30: mov     ecx, 30h ; '0'
 * 0000000140357C35: mov     [rbp+0B70h+var_B88], r13d
 * 0000000140357C39: mov     rax, r12
 * 0000000140357C3C: mov     [rax], r10
 * 0000000140357C3F: add     ecx, 0FFFFFFF8h
 * 0000000140357C42: add     rax, 8
 * 0000000140357C46: sub     rdx, r11
 * 0000000140357C49: jnz     short loc_140357C3C
 * 0000000140357C4B: test    ecx, ecx
 * 0000000140357C4D: jz      short loc_140357C5E
 * 0000000140357C4F: mov     edx, 0FFFFFFFFh
 * 0000000140357C54: mov     [rax], r10b
 * 0000000140357C57: add     rax, r11
 * 0000000140357C5A: add     ecx, edx
 * 0000000140357C5C: jnz     short loc_140357C54
 * 0000000140357C5E: mov     [r12], r9d
 * 0000000140357C62: lea     rcx, [r15+r13]
 * 0000000140357C66: mov     [r12+8], r15
 * 0000000140357C6B: mov     r10, r15
 * 0000000140357C6E: mov     [r12+10h], r13d
 * 0000000140357C73: mov     rax, r15
 * 0000000140357C76: add     [r14+828h], r13d
 * 0000000140357C7D: mov     ebx, [r14+814h]
 * 0000000140357C84: mov     r11, [r14+818h]
 * 0000000140357C8B: cmp     r15, rcx
 * 0000000140357C8E: jnb     short loc_140357CA0
 * 0000000140357C90: mov     edx, 40h ; '@'
 * 0000000140357C95: prefetchnta byte ptr [rax]
 * 0000000140357C98: add     rax, rdx
 * 0000000140357C9B: cmp     rax, rcx
 * 0000000140357C9E: jb      short loc_140357C95
 * 0000000140357CA0: mov     r9d, r13d
 * 0000000140357CA3: mov     r8, r11
 * 0000000140357CA6: shr     r9d, 7
 * 0000000140357CAA: test    r9d, r9d
 * 0000000140357CAD: jz      short loc_140357D20
 * 0000000140357CAF: mov     rdi, 7010008004002001h
 * 0000000140357CB9: mov     r14d, 1
 * 0000000140357CBF: mov     r13d, 0FFFFFFFFh
 * 0000000140357CC5: mov     eax, 8
 * 0000000140357CCA: xor     r8, [r10]
 * 0000000140357CCD: mov     ecx, ebx
 * 0000000140357CCF: rol     r8, cl
 * 0000000140357CD2: xor     r8, [r10+8]
 * 0000000140357CD6: add     r10, 10h
 * 0000000140357CDA: rol     r8, cl
 * 0000000140357CDD: sub     rax, r14
 * 0000000140357CE0: jnz     short loc_140357CCA
 * 0000000140357CE2: mov     rcx, r10
 * 0000000140357CE5: sub     rcx, r15
 * 0000000140357CE8: xor     rcx, r11
 * 0000000140357CEB: mov     rax, rcx
 * 0000000140357CEE: rol     rax, 11h
 * 0000000140357CF2: xor     rcx, rax
 * 0000000140357CF5: mov     rax, rdi
 * 0000000140357CF8: mul     rcx
 * 0000000140357CFB: xor     ebx, edx
 * 0000000140357CFD: mov     [rbp+0B70h+var_180], rdx
 * 0000000140357D04: xor     ebx, eax
 * 0000000140357D06: and     ebx, 3Fh
 * 0000000140357D09: cmovz   ebx, r14d
 * 0000000140357D0D: add     r9d, r13d
 * 0000000140357D10: jnz     short loc_140357CC5
 * 0000000140357D12: mov     r14, [rsp+0C70h+var_C20]
 * 0000000140357D17: mov     r13d, [rbp+0B70h+var_B88]
 * 0000000140357D1B: mov     rdi, [rsp+0C70h+var_C08]
 * 0000000140357D20: mov     edx, r13d
 * 0000000140357D23: mov     r11d, 1
 * 0000000140357D29: and     edx, 7Fh
 * 0000000140357D2C: cmp     edx, 8
 * 0000000140357D2F: jb      short loc_140357D4B
 * 0000000140357D31: mov     eax, edx
 * 0000000140357D33: shr     rax, 3
 * 0000000140357D37: xor     r8, [r10]
 * 0000000140357D3A: mov     ecx, ebx
 * 0000000140357D3C: rol     r8, cl
 * 0000000140357D3F: add     r10, 8
 * 0000000140357D43: add     edx, 0FFFFFFF8h
 * 0000000140357D46: sub     rax, r11
 * 0000000140357D49: jnz     short loc_140357D37
 * 0000000140357D4B: test    edx, edx
 * 0000000140357D4D: jz      short loc_140357D6E
 * 0000000140357D4F: mov     r14d, 0FFFFFFFFh
 * 0000000140357D55: movzx   eax, byte ptr [r10]
 * 0000000140357D59: mov     ecx, ebx
 * 0000000140357D5B: xor     r8, rax
 * 0000000140357D5E: add     r10, r11
 * 0000000140357D61: rol     r8, cl
 * 0000000140357D64: add     edx, r14d
 * 0000000140357D67: jnz     short loc_140357D55
 * 0000000140357D69: mov     r14, [rsp+0C70h+var_C20]
 * 0000000140357D6E: mov     rax, r8
 * 0000000140357D71: shr     rax, 1Fh
 * 0000000140357D75: xor     r10d, r10d
 * 0000000140357D78: jmp     short loc_140357D81
 * 0000000140357D7A: xor     r8d, eax
 * 0000000140357D7D: shr     rax, 1Fh
 * 0000000140357D81: test    rax, rax
 * 0000000140357D84: jnz     short loc_140357D7A
 * 0000000140357D86: mov     r9d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140357D8D: btr     r8d, 1Fh
 * 0000000140357D92: mov     [r12+14h], r8d
 * 0000000140357D97: add     rdi, 8
 * 0000000140357D9B: add     [r14+828h], r13d
 * 0000000140357DA2: add     rsi, 4
 * 0000000140357DA6: mov     r12, [rbp+0B70h+var_8E8]
 * 0000000140357DAD: mov     eax, 6
 * 0000000140357DB2: add     r12, 30h ; '0'
 * 0000000140357DB6: mov     [rsp+0C70h+var_C08], rdi
 * 0000000140357DBB: sub     [rbp+0B70h+var_BF0], r11
 * 0000000140357DBF: mov     [rbp+0B70h+var_8E8], r12
 * 0000000140357DC6: jnz     loc_140357C27
 * 0000000140357DCC: mov     rcx, [rbp+0B70h+var_AD0]
 * 0000000140357DD3: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140357DDA: mov     rax, [rbp+0B70h+BugCheckParameter2]
 * 0000000140357DDE: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140357DE3: mov     edx, dword ptr [rbp+0B70h+var_BA8]
 * 0000000140357DE6: mov     dword ptr [rcx], 2Ch ; ','
 * 0000000140357DEC: mov     [rcx+18h], rax
 * 0000000140357DF0: test    dword ptr [r14+990h], 10200000h
 * 0000000140357DFB: jnz     short loc_140357E12
 * 0000000140357DFD: test    edx, edx
 * 0000000140357DFF: jnz     short loc_140357E16
 * 0000000140357E01: test    dword ptr [r14+994h], 8000h
 * 0000000140357E0C: jz      short loc_140357E1E
 * 0000000140357E0E: or      [rcx+20h], r11d
 * 0000000140357E12: test    edx, edx
 * 0000000140357E14: jz      short loc_140357E1E
 * 0000000140357E16: mov     eax, 2
 * 0000000140357E1B: or      [rcx+20h], eax
 * 0000000140357E1E: mov     r9, [rbp+0B70h+BugCheckParameter2]
 * 0000000140357E22: lea     rax, [rbp+0B70h+var_9F8]
 * 0000000140357E29: mov     r8d, dword ptr [rbp+0B70h+var_BD8]
 * 0000000140357E2D: lea     rcx, [rbp+0B70h+var_B38]
 * 0000000140357E31: mov     [rsp+0C70h+var_C38], rax
 * 0000000140357E36: mov     rbx, r14
 * 0000000140357E39: lea     rax, [rbp+0B70h+var_ABC]
 * 0000000140357E40: mov     [rbp+0B70h+var_B38], r14
 * 0000000140357E44: mov     [rsp+0C70h+var_C40], rax
 * 0000000140357E49: mov     dword ptr [rsp+0C70h+var_C48], 9
 * 0000000140357E51: mov     dword ptr [rsp+0C70h+BugCheckParameter4], edx
 * 0000000140357E55: mov     rdx, [rbp+0B70h+var_BE0]
 * 0000000140357E59: mov     [rbp+0B70h+var_AE0], rbx
 * 0000000140357E60: call    sub_14036A0A4
 * 0000000140357E65: mov     ecx, eax
 * 0000000140357E67: test    eax, eax
 * 0000000140357E69: jns     short loc_140357E74
 * 0000000140357E6B: mov     r14, [rbp+0B70h+var_BA0]
 * 0000000140357E6F: jmp     loc_1403593FD
 * 0000000140357E74: mov     rbx, [rbp+0B70h+var_B38]
 * 0000000140357E78: mov     rcx, [rbp+0B70h+var_AD0]
 * 0000000140357E7F: mov     rax, rbx
 * 0000000140357E82: mov     r9d, [rbp+0B70h+var_9F8]
 * 0000000140357E89: sub     rax, r14
 * 0000000140357E8C: mov     r15d, [rbp+0B70h+var_ABC]
 * 0000000140357E93: add     rcx, rax
 * 0000000140357E96: sub     r9d, [rbp+0B70h+var_ABC]
 * 0000000140357E9D: add     r15, [rbp+0B70h+BugCheckParameter2]
 * 0000000140357EA1: mov     [rbp+0B70h+var_AD0], rcx
 * 0000000140357EA8: xor     r8d, r8d
 * 0000000140357EAB: lea     r13, [rcx+0C0h]
 * 0000000140357EB2: mov     [rbp+0B70h+var_AE0], rbx
 * 0000000140357EB9: mov     ecx, 30h ; '0'
 * 0000000140357EBE: mov     rax, r13
 * 0000000140357EC1: lea     edx, [rcx-2Ah]
 * 0000000140357EC4: lea     r10d, [rcx-2Fh]
 * 0000000140357EC8: mov     [rax], r8
 * 0000000140357ECB: add     ecx, 0FFFFFFF8h
 * 0000000140357ECE: add     rax, 8
 * 0000000140357ED2: sub     rdx, r10
 * 0000000140357ED5: jnz     short loc_140357EC8
 * 0000000140357ED7: mov     rdx, r10
 * 0000000140357EDA: test    ecx, ecx
 * 0000000140357EDC: jz      short loc_140357EEF
 * 0000000140357EDE: mov     r10d, 0FFFFFFFFh
 * 0000000140357EE4: mov     [rax], r8b
 * 0000000140357EE7: add     rax, rdx
 * 0000000140357EEA: add     ecx, r10d
 * 0000000140357EED: jnz     short loc_140357EE4
 * 0000000140357EEF: mov     eax, dword ptr [rbp+0B70h+arg_8]
 * 0000000140357EF5: mov     r10, r15
 * 0000000140357EF8: mov     [r13+0], eax
 * 0000000140357EFC: mov     rax, r15
 * 0000000140357EFF: mov     [r13+8], r15
 * 0000000140357F03: mov     [r13+10h], r9d
 * 0000000140357F07: add     [rbx+828h], r9d
 * 0000000140357F0E: mov     r14d, [rbx+814h]
 * 0000000140357F15: mov     r12, [rbx+818h]
 * 0000000140357F1C: mov     ecx, r9d
 * 0000000140357F1F: add     rcx, r15
 * 0000000140357F22: cmp     r15, rcx
 * 0000000140357F25: jnb     short loc_140357F38
 * 0000000140357F27: mov     r8d, 40h ; '@'
 * 0000000140357F2D: prefetchnta byte ptr [rax]
 * 0000000140357F30: add     rax, r8
 * 0000000140357F33: cmp     rax, rcx
 * 0000000140357F36: jb      short loc_140357F2D
 * 0000000140357F38: mov     r11d, r9d
 * 0000000140357F3B: mov     r8, r12
 * 0000000140357F3E: shr     r11d, 7
 * 0000000140357F42: test    r11d, r11d
 * 0000000140357F45: jz      short loc_140357FBF
 * 0000000140357F47: mov     rdi, 7010008004002001h
 * 0000000140357F51: mov     edx, 8
 * 0000000140357F56: lea     esi, [rdx-7]
 * 0000000140357F59: mov     rax, [r10]
 * 0000000140357F5C: mov     ecx, r14d
 * 0000000140357F5F: xor     rax, r8
 * 0000000140357F62: mov     r8, [r10+8]
 * 0000000140357F66: rol     rax, cl
 * 0000000140357F69: add     r10, 10h
 * 0000000140357F6D: xor     r8, rax
 * 0000000140357F70: rol     r8, cl
 * 0000000140357F73: sub     rdx, rsi
 * 0000000140357F76: jnz     short loc_140357F59
 * 0000000140357F78: mov     rcx, r10
 * 0000000140357F7B: sub     rcx, r15
 * 0000000140357F7E: xor     rcx, r12
 * 0000000140357F81: mov     rax, rcx
 * 0000000140357F84: rol     rax, 11h
 * 0000000140357F88: xor     rcx, rax
 * 0000000140357F8B: mov     rax, rdi
 * 0000000140357F8E: mul     rcx
 * 0000000140357F91: xor     r14d, edx
 * 0000000140357F94: mov     [rbp+0B70h+var_178], rdx
 * 0000000140357F9B: xor     r14d, eax
 * 0000000140357F9E: mov     rdx, rsi
 * 0000000140357FA1: and     r14d, 3Fh
 * 0000000140357FA5: mov     eax, 0FFFFFFFFh
 * 0000000140357FAA: cmovz   r14d, edx
 * 0000000140357FAE: add     r11d, eax
 * 0000000140357FB1: jnz     short loc_140357F51
 * 0000000140357FB3: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140357FB8: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140357FBF: and     r9d, 7Fh
 * 0000000140357FC3: cmp     r9d, 8
 * 0000000140357FC7: jb      short loc_140357FF5
 * 0000000140357FC9: mov     edx, r9d
 * 0000000140357FCC: mov     esi, 1
 * 0000000140357FD1: shr     rdx, 3
 * 0000000140357FD5: xor     r8, [r10]
 * 0000000140357FD8: mov     ecx, r14d
 * 0000000140357FDB: rol     r8, cl
 * 0000000140357FDE: add     r10, 8
 * 0000000140357FE2: add     r9d, 0FFFFFFF8h
 * 0000000140357FE6: sub     rdx, rsi
 * 0000000140357FE9: jnz     short loc_140357FD5
 * 0000000140357FEB: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140357FF0: mov     edx, 1
 * 0000000140357FF5: test    r9d, r9d
 * 0000000140357FF8: jz      short loc_140358019
 * 0000000140357FFA: mov     esi, 0FFFFFFFFh
 * 0000000140357FFF: movzx   eax, byte ptr [r10]
 * 0000000140358003: mov     ecx, r14d
 * 0000000140358006: xor     r8, rax
 * 0000000140358009: add     r10, rdx
 * 000000014035800C: rol     r8, cl
 * 000000014035800F: add     r9d, esi
 * 0000000140358012: jnz     short loc_140357FFF
 * 0000000140358014: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140358019: mov     rax, r8
 * 000000014035801C: shr     rax, 1Fh
 * 0000000140358020: xor     ecx, ecx
 * 0000000140358022: jmp     short loc_14035802B
 * 0000000140358024: xor     r8d, eax
 * 0000000140358027: shr     rax, 1Fh
 * 000000014035802B: test    rax, rax
 * 000000014035802E: jnz     short loc_140358024
 * 0000000140358030: btr     r8d, 1Fh
 * 0000000140358035: mov     [r13+14h], r8d
 * 0000000140358039: mov     rdx, [rbp+0B70h+var_AD0]
 * 0000000140358040: mov     r8d, dword ptr [rbp+0B70h+var_BA8]
 * 0000000140358044: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 000000014035804E: cmp     [rdx+100h], eax
 * 0000000140358054: jz      short loc_14035806D
 * 0000000140358056: mov     eax, [rdx+108h]
 * 000000014035805C: test    r8d, r8d
 * 000000014035805F: setnz   cl
 * 0000000140358062: and     eax, 0FFFFFFFEh
 * 0000000140358065: or      ecx, eax
 * 0000000140358067: mov     [rdx+108h], ecx
 * 000000014035806D: mov     rcx, [rbp+0B70h+var_AD0]
 * 0000000140358074: mov     eax, r8d
 * 0000000140358077: add     rcx, 60h ; '`'
 * 000000014035807B: mov     [rbp+0B70h+var_AE0], rbx
 * 0000000140358082: neg     eax
 * 0000000140358084: mov     [rbp+0B70h+var_A40], rcx
 * 000000014035808B: sbb     r12d, r12d
 * 000000014035808E: neg     r12d
 * 0000000140358091: add     r12d, 0Dh
 * 0000000140358095: test    rcx, rcx
 * 0000000140358098: jnz     loc_140358349
 * 000000014035809E: mov     r15d, [rbx+7E4h]
 * 00000001403580A5: mov     r8d, [rbx+924h]
 * 00000001403580AC: lea     eax, [r15+30h]
 * 00000001403580B0: cmp     eax, [rbx+0A1Ch]
 * 00000001403580B6: jbe     loc_1403581AA
 * 00000001403580BC: mov     edx, eax
 * 00000001403580BE: mov     rcx, rbx
 * 00000001403580C1: call    sub_14036AB20
 * 00000001403580C6: mov     r14, rax
 * 00000001403580C9: xor     eax, eax
 * 00000001403580CB: test    r14, r14
 * 00000001403580CE: jz      loc_14035819C
 * 00000001403580D4: mov     ecx, [rbx+990h]
 * 00000001403580DA: test    cl, 4
 * 00000001403580DD: jnz     loc_140358192
 * 00000001403580E3: mov     eax, [rbx+7E4h]
 * 00000001403580E9: and     ecx, 20000000h
 * 00000001403580EF: mov     r8, [rbx+7C8h]
 * 00000001403580F6: neg     ecx
 * 00000001403580F8: mov     r10d, 1
 * 00000001403580FE: sbb     edx, edx
 * 0000000140358100: and     edx, [rbx+924h]
 * 0000000140358106: cmp     eax, 8
 * 0000000140358109: jb      short loc_140358123
 * 000000014035810B: mov     ecx, eax
 * 000000014035810D: shr     rcx, 3
 * 0000000140358111: xor     r9d, r9d
 * 0000000140358114: mov     [rbx], r9
 * 0000000140358117: add     eax, 0FFFFFFF8h
 * 000000014035811A: add     rbx, 8
 * 000000014035811E: sub     rcx, r10
 * 0000000140358121: jnz     short loc_140358114
 * 0000000140358123: xor     ecx, ecx
 * 0000000140358125: test    eax, eax
 * 0000000140358127: jz      short loc_140358139
 * 0000000140358129: mov     r9d, 0FFFFFFFFh
 * 000000014035812F: mov     [rbx], cl
 * 0000000140358131: add     rbx, r10
 * 0000000140358134: add     eax, r9d
 * 0000000140358137: jnz     short loc_14035812F
 * 0000000140358139: mov     ebx, [r14+924h]
 * 0000000140358140: mov     [r14+924h], edx
 * 0000000140358147: cmp     edx, 3
 * 000000014035814A: jz      short loc_14035817C
 * 000000014035814C: test    dword ptr [r14+990h], 10000000h
 * 0000000140358157: cmovz   ecx, edx
 * 000000014035815A: test    ecx, ecx
 * 000000014035815C: jz      short loc_140358173
 * 000000014035815E: mov     rax, [r14+228h]
 * 0000000140358165: lea     rcx, [r8-8]
 * 0000000140358169: mov     rdx, [rcx]
 * 000000014035816C: call    KeGuardDispatchICall
 * 0000000140358171: jmp     short loc_14035818B
 * 0000000140358173: mov     rax, [r14+100h]
 * 000000014035817A: jmp     short loc_140358183
 * 000000014035817C: mov     rax, [r14+368h]
 * 0000000140358183: mov     rcx, r8
 * 0000000140358186: call    KeGuardDispatchICall
 * 000000014035818B: mov     [r14+924h], ebx
 * 0000000140358192: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 000000014035819A: jmp     short loc_1403581B3
 * 000000014035819C: mov     [rbp+0B70h+var_B38], rax
 * 00000001403581A0: mov     ecx, 0C000009Ah
 * 00000001403581A5: jmp     loc_140357E6B
 * 00000001403581AA: mov     r14, rbx
 * 00000001403581AD: mov     [rbx+7E4h], eax
 * 00000001403581B3: add     r15, r14
 * 00000001403581B6: mov     r9d, 1
 * 00000001403581BC: add     [r14+80Ch], r9d
 * 00000001403581C3: mov     rax, r15
 * 00000001403581C6: mov     [rbp+0B70h+var_7C0], r15
 * 00000001403581CD: xor     r8d, r8d
 * 00000001403581D0: lea     ecx, [r9+2Fh]
 * 00000001403581D4: lea     edx, [rcx-2Ah]
 * 00000001403581D7: mov     [rax], r8
 * 00000001403581DA: add     ecx, 0FFFFFFF8h
 * 00000001403581DD: add     rax, 8
 * 00000001403581E1: sub     rdx, r9
 * 00000001403581E4: jnz     short loc_1403581D7
 * 00000001403581E6: test    ecx, ecx
 * 00000001403581E8: jz      short loc_1403581F9
 * 00000001403581EA: mov     edx, 0FFFFFFFFh
 * 00000001403581EF: mov     [rax], r8b
 * 00000001403581F2: add     rax, r9
 * 00000001403581F5: add     ecx, edx
 * 00000001403581F7: jnz     short loc_1403581EF
 * 00000001403581F9: mov     r13, [rbp+0B70h+var_BC0]
 * 00000001403581FD: mov     [r15], r12d
 * 0000000140358200: mov     r9, r13
 * 0000000140358203: mov     r12d, [rsp+0C70h+var_C00]
 * 0000000140358208: mov     [r15+8], r13
 * 000000014035820C: mov     [r15+10h], r12d
 * 0000000140358210: add     [r14+828h], r12d
 * 0000000140358217: mov     r11d, [r14+814h]
 * 000000014035821E: lea     rcx, [r12+r13]
 * 0000000140358222: mov     rbx, [r14+818h]
 * 0000000140358229: cmp     r13, rcx
 * 000000014035822C: jnb     short loc_140358241
 * 000000014035822E: mov     rax, r13
 * 0000000140358231: mov     edx, 40h ; '@'
 * 0000000140358236: prefetchnta byte ptr [rax]
 * 0000000140358239: add     rax, rdx
 * 000000014035823C: cmp     rax, rcx
 * 000000014035823F: jb      short loc_140358236
 * 0000000140358241: mov     r10d, r12d
 * 0000000140358244: mov     r8, rbx
 * 0000000140358247: shr     r10d, 7
 * 000000014035824B: test    r10d, r10d
 * 000000014035824E: jz      short loc_1403582C7
 * 0000000140358250: mov     esi, 1
 * 0000000140358255: mov     rdi, 7010008004002001h
 * 000000014035825F: mov     r12d, 0FFFFFFFFh
 * 0000000140358265: mov     eax, 8
 * 000000014035826A: xor     r8, [r9]
 * 000000014035826D: mov     ecx, r11d
 * 0000000140358270: rol     r8, cl
 * 0000000140358273: xor     r8, [r9+8]
 * 0000000140358277: add     r9, 10h
 * 000000014035827B: rol     r8, cl
 * 000000014035827E: sub     rax, rsi
 * 0000000140358281: jnz     short loc_14035826A
 * 0000000140358283: mov     rcx, r9
 * 0000000140358286: sub     rcx, r13
 * 0000000140358289: xor     rcx, rbx
 * 000000014035828C: mov     rax, rcx
 * 000000014035828F: rol     rax, 11h
 * 0000000140358293: xor     rcx, rax
 * 0000000140358296: mov     rax, rdi
 * 0000000140358299: mul     rcx
 * 000000014035829C: xor     r11d, edx
 * 000000014035829F: mov     [rbp+0B70h+var_170], rdx
 * 00000001403582A6: xor     r11d, eax
 * 00000001403582A9: and     r11d, 3Fh
 * 00000001403582AD: cmovz   r11d, esi
 * 00000001403582B1: add     r10d, r12d
 * 00000001403582B4: jnz     short loc_140358265
 * 00000001403582B6: mov     rsi, [rsp+0C70h+var_C10]
 * 00000001403582BB: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403582C2: mov     r12d, [rsp+0C70h+var_C00]
 * 00000001403582C7: mov     edx, r12d
 * 00000001403582CA: mov     r10d, 1
 * 00000001403582D0: and     edx, 7Fh
 * 00000001403582D3: cmp     edx, 8
 * 00000001403582D6: jb      short loc_1403582F3
 * 00000001403582D8: mov     eax, edx
 * 00000001403582DA: shr     rax, 3
 * 00000001403582DE: xor     r8, [r9]
 * 00000001403582E1: mov     ecx, r11d
 * 00000001403582E4: rol     r8, cl
 * 00000001403582E7: add     r9, 8
 * 00000001403582EB: add     edx, 0FFFFFFF8h
 * 00000001403582EE: sub     rax, r10
 * 00000001403582F1: jnz     short loc_1403582DE
 * 00000001403582F3: test    edx, edx
 * 00000001403582F5: jz      short loc_140358315
 * 00000001403582F7: mov     esi, 0FFFFFFFFh
 * 00000001403582FC: movzx   eax, byte ptr [r9]
 * 0000000140358300: mov     ecx, r11d
 * 0000000140358303: xor     r8, rax
 * 0000000140358306: add     r9, r10
 * 0000000140358309: rol     r8, cl
 * 000000014035830C: add     edx, esi
 * 000000014035830E: jnz     short loc_1403582FC
 * 0000000140358310: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140358315: mov     rax, r8
 * 0000000140358318: jmp     short loc_14035831D
 * 000000014035831A: xor     r8d, eax
 * 000000014035831D: shr     rax, 1Fh
 * 0000000140358321: test    rax, rax
 * 0000000140358324: jnz     short loc_14035831A
 * 0000000140358326: btr     r8d, 1Fh
 * 000000014035832B: mov     rbx, r14
 * 000000014035832E: mov     [r15+14h], r8d
 * 0000000140358332: mov     rax, [rbp+0B70h+var_7C0]
 * 0000000140358339: mov     [rbp+0B70h+var_A40], rax
 * 0000000140358340: add     [r14+828h], r12d
 * 0000000140358347: jmp     short loc_140358355
 * 0000000140358349: mov     r13, [rbp+0B70h+var_BC0]
 * 000000014035834D: mov     [rcx], r12d
 * 0000000140358350: mov     r12d, [rsp+0C70h+var_C00]
 * 0000000140358355: test    dword ptr [rbx+990h], 40000000h
 * 000000014035835F: jz      short loc_14035837F
 * 0000000140358361: test    r12d, r12d
 * 0000000140358364: jz      short loc_14035837F
 * 0000000140358366: mov     r9, [rbp+0B70h+var_A40]
 * 000000014035836D: mov     r8d, r12d
 * 0000000140358370: add     r9, 1Ch
 * 0000000140358374: mov     rdx, r13
 * 0000000140358377: mov     rcx, rbx
 * 000000014035837A: call    sub_1401B877C
 * 000000014035837F: mov     rax, [rbp+0B70h+var_A40]
 * 0000000140358386: xor     ecx, ecx
 * 0000000140358388: mov     [rbp+0B70h+var_AE0], rbx
 * 000000014035838F: mov     [rax+18h], ecx
 * 0000000140358392: lea     r12d, [rcx+1]
 * 0000000140358396: mov     rax, [rbp+0B70h+var_A40]
 * 000000014035839D: or      [rax+18h], r12d
 * 00000001403583A1: xor     eax, eax
 * 00000001403583A3: mov     r14, [rbp+0B70h+var_AD0]
 * 00000001403583AA: cmp     dword ptr [rbp+0B70h+var_BA8], eax
 * 00000001403583AD: mov     r15, [rbp+0B70h+BugCheckParameter2]
 * 00000001403583B1: setnz   cl
 * 00000001403583B4: mov     dword ptr [r14+90h], 23h ; '#'
 * 00000001403583BF: mov     eax, [r14+0B8h]
 * 00000001403583C6: and     eax, 0FFFFFFFEh
 * 00000001403583C9: or      ecx, eax
 * 00000001403583CB: mov     [r14+0B8h], ecx
 * 00000001403583D2: cmp     dword ptr [r14+0A0h], 94h
 * 00000001403583DD: jb      loc_140358465
 * 00000001403583E3: mov     rax, [rbx+1F8h]
 * 00000001403583EA: mov     rcx, r15
 * 00000001403583ED: mov     r13, [r14+98h]
 * 00000001403583F4: call    KeGuardDispatchICall
 * 00000001403583F9: test    rax, rax
 * 00000001403583FC: jnz     short loc_140358413
 * 00000001403583FE: mov     r14, [rbp+0B70h+var_BA0]
 * 0000000140358402: mov     ecx, 0C000009Ah
 * 0000000140358407: mov     [rbp+0B70h+var_B38], rax
 * 000000014035840B: mov     r13d, r12d
 * 000000014035840E: jmp     loc_140359401
 * 0000000140358413: mov     ecx, [rax+50h]
 * 0000000140358416: mov     eax, 2
 * 000000014035841B: or      [r14+0B8h], eax
 * 0000000140358422: add     rcx, r15
 * 0000000140358425: mov     rax, [r13+70h]
 * 0000000140358429: cmp     rax, r15
 * 000000014035842C: jb      short loc_140358445
 * 000000014035842E: cmp     rax, rcx
 * 0000000140358431: jnb     short loc_140358445
 * 0000000140358433: mov     rax, [rax]
 * 0000000140358436: mov     [r14+0A8h], rax
 * 000000014035843D: or      dword ptr [r14+0B8h], 4
 * 0000000140358445: mov     rax, [r13+78h]
 * 0000000140358449: cmp     rax, r15
 * 000000014035844C: jb      short loc_140358465
 * 000000014035844E: cmp     rax, rcx
 * 0000000140358451: jnb     short loc_140358465
 * 0000000140358453: mov     rax, [rax]
 * 0000000140358456: mov     [r14+0B0h], rax
 * 000000014035845D: or      dword ptr [r14+0B8h], 8
 * 0000000140358465: test    dword ptr [rbx+990h], 400000h
 * 000000014035846F: mov     r14, [rbp+0B70h+BugCheckParameter2]
 * 0000000140358473: mov     [rbp+0B70h+var_BC8], r14
 * 0000000140358477: mov     [rbp+0B70h+var_B38], rbx
 * 000000014035847B: jz      loc_1403593EE
 * 0000000140358481: mov     rax, [rbx+1F8h]
 * 0000000140358488: mov     rcx, r14
 * 000000014035848B: call    KeGuardDispatchICall
 * 0000000140358490: mov     [rbp+0B70h+var_B70], rax
 * 0000000140358494: mov     r15, rax
 * 0000000140358497: test    rax, rax
 * 000000014035849A: jnz     short loc_1403584A6
 * 000000014035849C: mov     ecx, 0C000007Bh
 * 00000001403584A1: jmp     loc_140357E6B
 * 00000001403584A6: movzx   r10d, word ptr [r15+6]
 * 00000001403584AB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001403584B5: mov     ecx, dword ptr [rbp+0B70h+var_BD8]
 * 00000001403584B8: mul     rcx
 * 00000001403584BB: xor     eax, eax
 * 00000001403584BD: mov     word ptr [rbp+0B70h+arg_8], r10w
 * 00000001403584C5: mov     r9, rdx
 * 00000001403584C8: shr     r9, 3
 * 00000001403584CC: mov     [rbp+0B70h+var_BF0], r9
 * 00000001403584D0: test    r10w, r10w
 * 00000001403584D4: jnz     short loc_140358533
 * 00000001403584D6: test    dword ptr [rbx+990h], 200000h
 * 00000001403584E0: jz      loc_140367AD0
 * 00000001403584E6: cmp     [rbx+8F8h], eax
 * 00000001403584EC: jnz     short loc_14035849C
 * 00000001403584EE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403584F8: add     rax, rbx
 * 00000001403584FB: mov     [rbx+900h], rax
 * 0000000140358502: xor     eax, eax
 * 0000000140358504: mov     [rbx+908h], rax
 * 000000014035850B: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140358516: mov     [rbx+918h], r14
 * 000000014035851D: mov     [rbx+8F8h], r12d
 * 0000000140358524: xor     edx, edx
 * 0000000140358526: mov     rcx, rbx
 * 0000000140358529: call    sub_14036B3BC
 * 000000014035852E: jmp     loc_14035849C
 * 0000000140358533: mov     rdx, [rbp+0B70h+var_BE0]
 * 0000000140358537: movzx   r11d, word ptr [r15+14h]
 * 000000014035853C: mov     r13, rdx
 * 000000014035853F: mov     eax, r9d
 * 0000000140358542: add     r11, 18h
 * 0000000140358546: add     r11, r15
 * 0000000140358549: mov     [rsp+0C70h+var_C08], r11
 * 000000014035854E: lea     r12, [rax+rax*2]
 * 0000000140358552: shl     r12, 2
 * 0000000140358556: mov     [rsp+0C70h+var_BF8], r12
 * 000000014035855B: lea     rax, [r12+rdx]
 * 000000014035855F: xor     edx, edx
 * 0000000140358561: mov     [rbp+0B70h+var_BC0], rax
 * 0000000140358565: xor     eax, eax
 * 0000000140358567: mov     ecx, eax
 * 0000000140358569: mov     [rsp+0C70h+var_C00], eax
 * 000000014035856D: movzx   eax, r10w
 * 0000000140358571: test    eax, eax
 * 0000000140358573: jz      loc_1403587A9
 * 0000000140358579: mov     r8, r11
 * 000000014035857C: mov     [rsp+0C70h+var_C20], r11
 * 0000000140358581: lea     r15d, [rdx+1]
 * 0000000140358585: mov     edx, [r8+10h]
 * 0000000140358589: mov     eax, [r8+8]
 * 000000014035858D: cmp     edx, eax
 * 000000014035858F: mov     r9d, [r8+0Ch]
 * 0000000140358593: cmovbe  edx, eax
 * 0000000140358596: mov     [rbp+0B70h+var_B88], r9d
 * 000000014035859A: add     edx, r9d
 * 000000014035859D: mov     [rbp+0B70h+var_B58], edx
 * 00000001403585A0: test    ecx, ecx
 * 00000001403585A2: jz      short loc_1403585BA
 * 00000001403585A4: lea     eax, [rcx-1]
 * 00000001403585A7: lea     rax, [rax+rax*4]
 * 00000001403585AB: cmp     edx, [r11+rax*8+0Ch]
 * 00000001403585B0: jb      loc_1403587C7
 * 00000001403585B6: mov     ecx, [rsp+0C70h+var_C00]
 * 00000001403585BA: cmp     r13, [rbp+0B70h+var_BC0]
 * 00000001403585BE: jz      loc_14035877E
 * 00000001403585C4: mov     ecx, [r13+0]
 * 00000001403585C8: mov     eax, [r13+4]
 * 00000001403585CC: cmp     ecx, edx
 * 00000001403585CE: jnb     loc_140358767
 * 00000001403585D4: cmp     eax, r9d
 * 00000001403585D7: jbe     loc_140358767
 * 00000001403585DD: cmp     ecx, r9d
 * 00000001403585E0: jb      loc_140358820
 * 00000001403585E6: cmp     eax, edx
 * 00000001403585E8: ja      loc_140358820
 * 00000001403585EE: mov     eax, [r13+8]
 * 00000001403585F2: mov     ecx, 1
 * 00000001403585F7: mov     [rbp+0B70h+var_168], r13
 * 00000001403585FE: test    cl, al
 * 0000000140358600: jnz     short loc_14035860E
 * 0000000140358602: mov     al, [rax+r14]
 * 0000000140358606: test    al, 20h
 * 0000000140358608: jz      loc_140358759
 * 000000014035860E: mov     eax, [r8+8]
 * 0000000140358612: mov     rdx, r14
 * 0000000140358615: mov     r15d, [r8+10h]
 * 0000000140358619: mov     rcx, r13
 * 000000014035861C: mov     r12d, [r8+0Ch]
 * 0000000140358620: cmp     r15d, eax
 * 0000000140358623: cmovbe  r15d, eax
 * 0000000140358627: mov     rax, [rbx+418h]
 * 000000014035862E: add     r15d, r12d
 * 0000000140358631: call    KeGuardDispatchICall
 * 0000000140358636: mov     r14, rax
 * 0000000140358639: cmp     [rax], r12d
 * 000000014035863C: jb      short loc_140358644
 * 000000014035863E: cmp     [rax+4], r15d
 * 0000000140358642: jbe     short loc_1403586B3
 * 0000000140358644: mov     r8, [rbp+0B70h+var_BC8]; BugCheckParameter2
 * 0000000140358648: mov     eax, 80000000h
 * 000000014035864D: mov     edx, r14d
 * 0000000140358650: sub     edx, r8d
 * 0000000140358653: or      edx, eax
 * 0000000140358655: xor     eax, eax
 * 0000000140358657: test    dword ptr [rbx+990h], 200000h
 * 0000000140358661: jz      loc_140367B5C
 * 0000000140358667: cmp     [rbx+8F8h], eax
 * 000000014035866D: jnz     short loc_1403586B3
 * 000000014035866F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140358679: xor     edx, edx
 * 000000014035867B: add     rax, rbx
 * 000000014035867E: mov     rcx, rbx
 * 0000000140358681: mov     [rbx+900h], rax
 * 0000000140358688: xor     eax, eax
 * 000000014035868A: mov     [rbx+908h], rax
 * 0000000140358691: mov     eax, 1
 * 0000000140358696: mov     qword ptr [rbx+910h], 10Fh
 * 00000001403586A1: mov     [rbx+918h], r8
 * 00000001403586A8: mov     [rbx+8F8h], eax
 * 00000001403586AE: call    sub_14036B3BC
 * 00000001403586B3: mov     r8d, [r14]
 * 00000001403586B6: mov     rcx, r14
 * 00000001403586B9: add     r8, [rbp+0B70h+var_BC8]
 * 00000001403586BD: mov     rax, [rbx+420h]
 * 00000001403586C4: mov     rdx, [rbp+0B70h+var_BC8]
 * 00000001403586C8: call    KeGuardDispatchICall
 * 00000001403586CD: mov     rdx, rax
 * 00000001403586D0: cmp     [rax], r12d
 * 00000001403586D3: jb      short loc_1403586DB
 * 00000001403586D5: cmp     [rax+4], r15d
 * 00000001403586D9: jbe     short loc_140358749
 * 00000001403586DB: mov     r14, [rbp+0B70h+var_BC8]
 * 00000001403586DF: mov     eax, 80000000h
 * 00000001403586E4: sub     edx, r14d
 * 00000001403586E7: or      edx, eax
 * 00000001403586E9: xor     eax, eax
 * 00000001403586EB: test    dword ptr [rbx+990h], 200000h
 * 00000001403586F5: jz      loc_140367B2D
 * 00000001403586FB: cmp     [rbx+8F8h], eax
 * 0000000140358701: jnz     short loc_14035874D
 * 0000000140358703: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035870D: xor     edx, edx
 * 000000014035870F: add     rax, rbx
 * 0000000140358712: mov     rcx, rbx
 * 0000000140358715: mov     [rbx+900h], rax
 * 000000014035871C: xor     eax, eax
 * 000000014035871E: mov     [rbx+908h], rax
 * 0000000140358725: mov     eax, 1
 * 000000014035872A: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140358735: mov     [rbx+918h], r14
 * 000000014035873C: mov     [rbx+8F8h], eax
 * 0000000140358742: call    sub_14036B3BC
 * 0000000140358747: jmp     short loc_14035874D
 * 0000000140358749: mov     r14, [rbp+0B70h+var_BC8]
 * 000000014035874D: mov     edx, [rbp+0B70h+var_B58]
 * 0000000140358750: mov     r8, [rsp+0C70h+var_C20]
 * 0000000140358755: mov     r9d, [rbp+0B70h+var_B88]
 * 0000000140358759: add     r13, 0Ch
 * 000000014035875D: cmp     r13, [rbp+0B70h+var_BC0]
 * 0000000140358761: jnz     loc_1403585C4
 * 0000000140358767: mov     ecx, [rsp+0C70h+var_C00]
 * 000000014035876B: mov     r15d, 1
 * 0000000140358771: movzx   r10d, word ptr [rbp+0B70h+arg_8]
 * 0000000140358779: mov     r11, [rsp+0C70h+var_C08]
 * 000000014035877E: add     ecx, r15d
 * 0000000140358781: movzx   eax, r10w
 * 0000000140358785: add     r8, 28h ; '('
 * 0000000140358789: mov     [rsp+0C70h+var_C00], ecx
 * 000000014035878D: mov     [rsp+0C70h+var_C20], r8
 * 0000000140358792: cmp     ecx, eax
 * 0000000140358794: jb      loc_140358585
 * 000000014035879A: mov     r9, [rbp+0B70h+var_BF0]
 * 000000014035879E: xor     edx, edx
 * 00000001403587A0: mov     r15, [rbp+0B70h+var_B70]
 * 00000001403587A4: mov     r12, [rsp+0C70h+var_BF8]
 * 00000001403587A9: cmp     r13, [rbp+0B70h+var_BC0]
 * 00000001403587AD: jz      loc_14035887D
 * 00000001403587B3: test    dword ptr [rbx+990h], 200000h
 * 00000001403587BD: jz      loc_140367BB9
 * 00000001403587C3: xor     eax, eax
 * 00000001403587C5: jmp     short loc_140358832
 * 00000001403587C7: xor     eax, eax
 * 00000001403587C9: test    dword ptr [rbx+990h], 200000h
 * 00000001403587D3: jz      loc_140367AFE
 * 00000001403587D9: cmp     [rbx+8F8h], eax
 * 00000001403587DF: jnz     loc_14035849C
 * 00000001403587E5: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403587EF: add     rax, rbx
 * 00000001403587F2: mov     [rbx+900h], rax
 * 00000001403587F9: xor     eax, eax
 * 00000001403587FB: mov     [rbx+908h], rax
 * 0000000140358802: mov     qword ptr [rbx+910h], 10Fh
 * 000000014035880D: mov     [rbx+918h], r14
 * 0000000140358814: mov     [rbx+8F8h], r15d
 * 000000014035881B: jmp     loc_140358524
 * 0000000140358820: xor     eax, eax
 * 0000000140358822: test    dword ptr [rbx+990h], 200000h
 * 000000014035882C: jz      loc_140367B88
 * 0000000140358832: cmp     [rbx+8F8h], eax
 * 0000000140358838: jnz     loc_14035849C
 * 000000014035883E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140358848: add     rax, rbx
 * 000000014035884B: mov     [rbx+900h], rax
 * 0000000140358852: xor     eax, eax
 * 0000000140358854: mov     [rbx+908h], rax
 * 000000014035885B: mov     eax, 1
 * 0000000140358860: mov     qword ptr [rbx+910h], 10Fh
 * 000000014035886B: mov     [rbx+918h], r14
 * 0000000140358872: mov     [rbx+8F8h], eax
 * 0000000140358878: jmp     loc_140358524
 * 000000014035887D: mov     r14d, [rbx+7E4h]
 * 0000000140358884: lea     eax, [rax+rax*2]
 * 0000000140358887: mov     r8d, [rbx+924h]
 * 000000014035888E: lea     ecx, [r9+6]
 * 0000000140358892: and     ecx, 0FFFFFFF8h
 * 0000000140358895: lea     edx, [rcx+rax*8]
 * 0000000140358898: lea     eax, [r14+30h]
 * 000000014035889C: add     eax, edx
 * 000000014035889E: cmp     eax, [rbx+0A1Ch]
 * 00000001403588A4: jbe     loc_140358998
 * 00000001403588AA: mov     edx, eax
 * 00000001403588AC: mov     rcx, rbx
 * 00000001403588AF: call    sub_14036AB20
 * 00000001403588B4: mov     [rbp+0B70h+var_B70], rax
 * 00000001403588B8: mov     r13, rax
 * 00000001403588BB: test    rax, rax
 * 00000001403588BE: jz      loc_1403581A0
 * 00000001403588C4: mov     ecx, [rbx+990h]
 * 00000001403588CA: test    cl, 4
 * 00000001403588CD: jnz     loc_140358982
 * 00000001403588D3: mov     eax, [rbx+7E4h]
 * 00000001403588D9: and     ecx, 20000000h
 * 00000001403588DF: mov     r8, [rbx+7C8h]
 * 00000001403588E6: neg     ecx
 * 00000001403588E8: mov     r10d, 1
 * 00000001403588EE: sbb     edx, edx
 * 00000001403588F0: and     edx, [rbx+924h]
 * 00000001403588F6: cmp     eax, 8
 * 00000001403588F9: jb      short loc_140358913
 * 00000001403588FB: mov     ecx, eax
 * 00000001403588FD: shr     rcx, 3
 * 0000000140358901: xor     r9d, r9d
 * 0000000140358904: mov     [rbx], r9
 * 0000000140358907: add     eax, 0FFFFFFF8h
 * 000000014035890A: add     rbx, 8
 * 000000014035890E: sub     rcx, r10
 * 0000000140358911: jnz     short loc_140358904
 * 0000000140358913: xor     ecx, ecx
 * 0000000140358915: test    eax, eax
 * 0000000140358917: jz      short loc_140358929
 * 0000000140358919: mov     r9d, 0FFFFFFFFh
 * 000000014035891F: mov     [rbx], cl
 * 0000000140358921: add     rbx, r10
 * 0000000140358924: add     eax, r9d
 * 0000000140358927: jnz     short loc_14035891F
 * 0000000140358929: mov     ebx, [r13+924h]
 * 0000000140358930: mov     [r13+924h], edx
 * 0000000140358937: cmp     edx, 3
 * 000000014035893A: jz      short loc_14035896C
 * 000000014035893C: test    dword ptr [r13+990h], 10000000h
 * 0000000140358947: cmovz   ecx, edx
 * 000000014035894A: test    ecx, ecx
 * 000000014035894C: jz      short loc_140358963
 * 000000014035894E: mov     rax, [r13+228h]
 * 0000000140358955: lea     rcx, [r8-8]
 * 0000000140358959: mov     rdx, [rcx]
 * 000000014035895C: call    KeGuardDispatchICall
 * 0000000140358961: jmp     short loc_14035897B
 * 0000000140358963: mov     rax, [r13+100h]
 * 000000014035896A: jmp     short loc_140358973
 * 000000014035896C: mov     rax, [r13+368h]
 * 0000000140358973: mov     rcx, r8
 * 0000000140358976: call    KeGuardDispatchICall
 * 000000014035897B: mov     [r13+924h], ebx
 * 0000000140358982: and     dword ptr [r13+990h], 0FFFFFFFBh
 * 000000014035898A: mov     r9, [rbp+0B70h+var_BF0]
 * 000000014035898E: movzx   r10d, word ptr [rbp+0B70h+arg_8]
 * 0000000140358996: jmp     short loc_1403589A5
 * 0000000140358998: mov     r13, rbx
 * 000000014035899B: mov     [rbp+0B70h+var_B70], rbx
 * 000000014035899F: mov     [rbx+7E4h], eax
 * 00000001403589A5: mov     ebx, 1
 * 00000001403589AA: lea     r8, [r14+r13]
 * 00000001403589AE: add     [r13+80Ch], ebx
 * 00000001403589B5: mov     rax, r8
 * 00000001403589B8: mov     [rbp+0B70h+var_7B8], r8
 * 00000001403589BF: xor     r11d, r11d
 * 00000001403589C2: lea     ecx, [rbx+2Fh]
 * 00000001403589C5: lea     edx, [rbx+5]
 * 00000001403589C8: mov     [rax], r11
 * 00000001403589CB: add     ecx, 0FFFFFFF8h
 * 00000001403589CE: add     rax, 8
 * 00000001403589D2: sub     rdx, rbx
 * 00000001403589D5: jnz     short loc_1403589C8
 * 00000001403589D7: test    ecx, ecx
 * 00000001403589D9: jz      short loc_1403589EA
 * 00000001403589DB: mov     edx, 0FFFFFFFFh
 * 00000001403589E0: mov     [rax], r11b
 * 00000001403589E3: add     rax, rbx
 * 00000001403589E6: add     ecx, edx
 * 00000001403589E8: jnz     short loc_1403589E0
 * 00000001403589EA: mov     rax, [rbp+0B70h+var_BE0]
 * 00000001403589EE: mov     dword ptr [r8], 1Eh
 * 00000001403589F5: mov     [r8+8], rax
 * 00000001403589F9: xor     eax, eax
 * 00000001403589FB: mov     [r8+10h], eax
 * 00000001403589FF: mov     rcx, [r13+818h]
 * 0000000140358A06: mov     rax, rcx
 * 0000000140358A09: jmp     short loc_140358A0D
 * 0000000140358A0B: xor     ecx, eax
 * 0000000140358A0D: shr     rax, 1Fh
 * 0000000140358A11: test    rax, rax
 * 0000000140358A14: jnz     short loc_140358A0B
 * 0000000140358A16: mov     r14, [rbp+0B70h+var_BC8]
 * 0000000140358A1A: btr     ecx, 1Fh
 * 0000000140358A1E: mov     [r8+14h], ecx
 * 0000000140358A22: mov     rbx, r13
 * 0000000140358A25: mov     rax, [rbp+0B70h+var_7B8]
 * 0000000140358A2C: mov     r8d, 0FFFEh
 * 0000000140358A32: mov     [rbp+0B70h+var_AA0], rax
 * 0000000140358A39: mov     [rbp+0B70h+var_B38], rbx
 * 0000000140358A3D: mov     [rax+18h], r14
 * 0000000140358A41: mov     ecx, [r15+50h]
 * 0000000140358A45: lea     r15d, [r9-1]
 * 0000000140358A49: mov     rax, [rbp+0B70h+var_AA0]
 * 0000000140358A50: mov     [rax+20h], ecx
 * 0000000140358A53: mov     rax, [rbp+0B70h+var_AA0]
 * 0000000140358A5A: mov     ecx, dword ptr [rbp+0B70h+var_BD8]
 * 0000000140358A5D: mov     [rax+24h], ecx
 * 0000000140358A60: mov     rax, [rbp+0B70h+var_AA0]
 * 0000000140358A67: mov     [rax+28h], r10w
 * 0000000140358A6C: xor     eax, eax
 * 0000000140358A6E: cmp     dword ptr [rbp+0B70h+var_BA8], eax
 * 0000000140358A71: mov     ecx, eax
 * 0000000140358A73: mov     rdx, [rbp+0B70h+var_AA0]
 * 0000000140358A7A: setnz   cl
 * 0000000140358A7D: add     r15, 7
 * 0000000140358A81: and     r15, 0FFFFFFFFFFFFFFF8h
 * 0000000140358A85: movzx   eax, word ptr [rdx+2Ah]
 * 0000000140358A89: and     ax, r8w
 * 0000000140358A8D: or      cx, ax
 * 0000000140358A90: mov     [rdx+2Ah], cx
 * 0000000140358A94: mov     rcx, [rbp+0B70h+var_AA0]
 * 0000000140358A9B: movzx   eax, word ptr [rcx+28h]
 * 0000000140358A9F: lea     rdx, [rcx+30h]
 * 0000000140358AA3: add     r15, rdx
 * 0000000140358AA6: mov     [rbp+0B70h+var_BF0], rdx
 * 0000000140358AAA: test    r9d, r9d
 * 0000000140358AAD: mov     [rsp+0C70h+var_C20], r15
 * 0000000140358AB2: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140358AB6: lea     rcx, [rax+rax*2]
 * 0000000140358ABA: mov     eax, 0Ch
 * 0000000140358ABF: cmovz   rax, r12
 * 0000000140358AC3: lea     r8, [r15+rcx*8]
 * 0000000140358AC7: mov     r12, rax
 * 0000000140358ACA: mov     [rsp+0C70h+var_BF8], r8
 * 0000000140358ACF: add     r12, r9
 * 0000000140358AD2: xor     eax, eax
 * 0000000140358AD4: mov     [rbp+0B70h+var_BA8], r12
 * 0000000140358AD8: cmp     ax, r10w
 * 0000000140358ADC: jnb     short loc_140358B1C
 * 0000000140358ADE: movzx   edx, r10w
 * 0000000140358AE2: lea     rax, [r15+8]
 * 0000000140358AE6: xor     r10d, r10d
 * 0000000140358AE9: mov     esi, 80000000h
 * 0000000140358AEE: lea     r11d, [r10+1]
 * 0000000140358AF2: lea     r12d, [r10+2]
 * 0000000140358AF6: mov     rcx, r12
 * 0000000140358AF9: mov     [rax-8], r10d
 * 0000000140358AFD: mov     [rax-4], r10d
 * 0000000140358B01: mov     [rax], esi
 * 0000000140358B03: add     rax, 0Ch
 * 0000000140358B07: sub     rcx, r11
 * 0000000140358B0A: jnz     short loc_140358AF9
 * 0000000140358B0C: sub     rdx, r11
 * 0000000140358B0F: jnz     short loc_140358AF6
 * 0000000140358B11: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140358B16: xor     eax, eax
 * 0000000140358B18: mov     r12, [rbp+0B70h+var_BA8]
 * 0000000140358B1C: cmp     r15, r8
 * 0000000140358B1F: jz      loc_1403593EE
 * 0000000140358B25: mov     rbx, [rsp+0C70h+var_C08]
 * 0000000140358B2A: jmp     short loc_140358B2E
 * 0000000140358B2C: xor     eax, eax
 * 0000000140358B2E: mov     r11d, eax
 * 0000000140358B31: mov     eax, [rbx+24h]
 * 0000000140358B34: bt      eax, 19h
 * 0000000140358B38: jb      loc_140358CBD
 * 0000000140358B3E: mov     ecx, [rbx]
 * 0000000140358B40: cmp     ecx, 54494E49h
 * 0000000140358B46: jnz     short loc_140358B55
 * 0000000140358B48: cmp     dword ptr [rbx+4], 4742444Bh
 * 0000000140358B4F: jz      loc_140358CBD
 * 0000000140358B55: cmp     ecx, 45474150h
 * 0000000140358B5B: jnz     short loc_140358B8B
 * 0000000140358B5D: movzx   eax, word ptr [rbx+4]
 * 0000000140358B61: mov     edx, 7877h
 * 0000000140358B66: cmp     ax, dx
 * 0000000140358B69: jz      loc_140358CBD
 * 0000000140358B6F: mov     edx, 7277h
 * 0000000140358B74: cmp     ax, dx
 * 0000000140358B77: jz      loc_140358CBD
 * 0000000140358B7D: mov     edx, 7777h
 * 0000000140358B82: cmp     ax, dx
 * 0000000140358B85: jz      loc_140358CBD
 * 0000000140358B8B: cmp     ecx, 41525245h
 * 0000000140358B91: jnz     short loc_140358BA2
 * 0000000140358B93: mov     eax, 4154h
 * 0000000140358B98: cmp     [rbx+4], ax
 * 0000000140358B9C: jz      loc_140358CBD
 * 0000000140358BA2: mov     rax, [r13+938h]
 * 0000000140358BA9: mov     r10d, 7
 * 0000000140358BAF: mov     r8, [r13+930h]
 * 0000000140358BB6: mov     r9, rbx
 * 0000000140358BB9: mov     [rbp+0B70h+var_788], rax
 * 0000000140358BC0: mov     rax, [r13+940h]
 * 0000000140358BC7: mov     [rbp+0B70h+var_780], rax
 * 0000000140358BCE: mov     rax, [r13+948h]
 * 0000000140358BD5: mov     [rbp+0B70h+var_778], rax
 * 0000000140358BDC: mov     [rbp+0B70h+var_790], r8
 * 0000000140358BE3: movzx   edx, byte ptr [r9]
 * 0000000140358BE7: inc     r9
 * 0000000140358BEA: movzx   eax, byte ptr [r8]
 * 0000000140358BEE: inc     r8
 * 0000000140358BF1: cmp     rdx, rax
 * 0000000140358BF4: jnz     short loc_140358C05
 * 0000000140358BF6: mov     eax, 0FFFFFFFFh
 * 0000000140358BFB: add     r10d, eax
 * 0000000140358BFE: jnz     short loc_140358BE3
 * 0000000140358C00: jmp     loc_140358CB2
 * 0000000140358C05: mov     r9, [rbp+0B70h+var_788]
 * 0000000140358C0C: mov     r8d, 8
 * 0000000140358C12: mov     r10, rbx
 * 0000000140358C15: mov     rcx, [r10]
 * 0000000140358C18: add     r10, 8
 * 0000000140358C1C: mov     rax, [r9]
 * 0000000140358C1F: add     r9, 8
 * 0000000140358C23: cmp     rcx, rax
 * 0000000140358C26: jnz     short loc_140358C56
 * 0000000140358C28: add     r8d, 0FFFFFFF8h
 * 0000000140358C2C: cmp     r8d, 8
 * 0000000140358C30: jnb     short loc_140358C15
 * 0000000140358C32: test    r8d, r8d
 * 0000000140358C35: jz      short loc_140358CB2
 * 0000000140358C37: movzx   edx, byte ptr [r10]
 * 0000000140358C3B: inc     r10
 * 0000000140358C3E: movzx   eax, byte ptr [r9]
 * 0000000140358C42: inc     r9
 * 0000000140358C45: cmp     rdx, rax
 * 0000000140358C48: jnz     short loc_140358C56
 * 0000000140358C4A: mov     eax, 0FFFFFFFFh
 * 0000000140358C4F: add     r8d, eax
 * 0000000140358C52: jnz     short loc_140358C37
 * 0000000140358C54: jmp     short loc_140358CB2
 * 0000000140358C56: mov     r8, [rbp+0B70h+var_780]
 * 0000000140358C5D: mov     r10d, 4
 * 0000000140358C63: mov     r9, rbx
 * 0000000140358C66: movzx   edx, byte ptr [r9]
 * 0000000140358C6A: inc     r9
 * 0000000140358C6D: movzx   eax, byte ptr [r8]
 * 0000000140358C71: inc     r8
 * 0000000140358C74: cmp     rdx, rax
 * 0000000140358C77: jnz     short loc_140358C85
 * 0000000140358C79: mov     eax, 0FFFFFFFFh
 * 0000000140358C7E: add     r10d, eax
 * 0000000140358C81: jnz     short loc_140358C66
 * 0000000140358C83: jmp     short loc_140358CB2
 * 0000000140358C85: mov     r8, [rbp+0B70h+var_778]
 * 0000000140358C8C: mov     r10d, 6
 * 0000000140358C92: mov     r9, rbx
 * 0000000140358C95: movzx   edx, byte ptr [r9]
 * 0000000140358C99: inc     r9
 * 0000000140358C9C: movzx   eax, byte ptr [r8]
 * 0000000140358CA0: inc     r8
 * 0000000140358CA3: cmp     rdx, rax
 * 0000000140358CA6: jnz     short loc_140358CC8
 * 0000000140358CA8: mov     eax, 0FFFFFFFFh
 * 0000000140358CAD: add     r10d, eax
 * 0000000140358CB0: jnz     short loc_140358C95
 * 0000000140358CB2: mov     r10d, 1
 * 0000000140358CB8: mov     r11d, r10d
 * 0000000140358CBB: jmp     short loc_140358CCE
 * 0000000140358CBD: mov     r10d, 1
 * 0000000140358CC3: mov     r11d, r10d
 * 0000000140358CC6: jmp     short loc_140358CD2
 * 0000000140358CC8: mov     r10d, 1
 * 0000000140358CCE: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140358CD2: mov     ecx, [rbx+24h]
 * 0000000140358CD5: xor     eax, eax
 * 0000000140358CD7: test    ecx, ecx
 * 0000000140358CD9: cmovs   r11d, r10d
 * 0000000140358CDD: mov     [rsp+0C70h+var_C00], r11d
 * 0000000140358CE2: test    r11d, r11d
 * 0000000140358CE5: jz      short loc_140358D0C
 * 0000000140358CE7: cmp     dword ptr [rbx], 54494E49h
 * 0000000140358CED: jnz     short loc_140358D0C
 * 0000000140358CEF: cmp     dword ptr [rbx+4], 4742444Bh
 * 0000000140358CF6: jnz     short loc_140358D0C
 * 0000000140358CF8: test    dword ptr [r13+994h], 2000h
 * 0000000140358D03: cmovnz  r11d, eax
 * 0000000140358D07: mov     [rsp+0C70h+var_C00], r11d
 * 0000000140358D0C: test    dword ptr [r13+994h], 4000h
 * 0000000140358D17: jz      short loc_140358D39
 * 0000000140358D19: bt      ecx, 1Dh
 * 0000000140358D1D: jnb     short loc_140358D39
 * 0000000140358D1F: cmp     r14, [r13+5E8h]
 * 0000000140358D26: jz      short loc_140358D31
 * 0000000140358D28: cmp     r14, [r13+5F0h]
 * 0000000140358D2F: jnz     short loc_140358D39
 * 0000000140358D31: mov     r11d, r10d
 * 0000000140358D34: mov     [rsp+0C70h+var_C00], r10d
 * 0000000140358D39: mov     rax, [rsp+0C70h+var_C08]
 * 0000000140358D3E: mov     ebx, [rbx+0Ch]
 * 0000000140358D41: mov     r8, [rbp+0B70h+var_BC0]
 * 0000000140358D45: mov     [rbp+0B70h+var_B58], ebx
 * 0000000140358D48: mov     ecx, [rax+10h]
 * 0000000140358D4B: mov     eax, [rax+8]
 * 0000000140358D4E: cmp     ecx, eax
 * 0000000140358D50: cmovbe  ecx, eax
 * 0000000140358D53: add     ecx, ebx
 * 0000000140358D55: mov     dword ptr [rbp+0B70h+arg_8], ecx
 * 0000000140358D5B: cmp     r9, r8
 * 0000000140358D5E: jz      short loc_140358D69
 * 0000000140358D60: mov     r13d, [r9]
 * 0000000140358D63: mov     eax, [r9+4]
 * 0000000140358D67: jmp     short loc_140358D6E
 * 0000000140358D69: xor     eax, eax
 * 0000000140358D6B: mov     r13d, eax
 * 0000000140358D6E: mov     [rbp+0B70h+var_B88], eax
 * 0000000140358D71: mov     dword ptr [rbp+0B70h+var_BD8], ebx
 * 0000000140358D74: cmp     r9, r8
 * 0000000140358D77: jz      loc_140358F4E
 * 0000000140358D7D: cmp     r13d, ebx
 * 0000000140358D80: jbe     loc_140358F4E
 * 0000000140358D86: cmp     eax, ecx
 * 0000000140358D88: ja      loc_140358F4E
 * 0000000140358D8E: test    r11d, r11d
 * 0000000140358D91: jnz     loc_140358F4E
 * 0000000140358D97: mov     [r15], ebx
 * 0000000140358D9A: lea     rdx, [rbp+0B70h+var_938]
 * 0000000140358DA1: mov     [r15+4], r13d
 * 0000000140358DA5: lea     r8, [rbp+0B70h+var_730]
 * 0000000140358DAC: mov     eax, [r15]
 * 0000000140358DAF: mov     r10d, r13d
 * 0000000140358DB2: mov     r14d, eax
 * 0000000140358DB5: mov     dword ptr [rbp+0B70h+var_BD8], r13d
 * 0000000140358DB9: add     r14, [rbp+0B70h+var_BC8]
 * 0000000140358DBD: sub     r10d, eax
 * 0000000140358DC0: mov     r11d, r10d
 * 0000000140358DC3: add     r11, r14
 * 0000000140358DC6: xor     eax, eax
 * 0000000140358DC8: mov     r9d, eax
 * 0000000140358DCB: mov     rcx, [r8]
 * 0000000140358DCE: mov     eax, [rdx]
 * 0000000140358DD0: add     rax, rcx
 * 0000000140358DD3: cmp     r14, rax
 * 0000000140358DD6: jnb     short loc_140358DE1
 * 0000000140358DD8: cmp     r11, rcx
 * 0000000140358DDB: ja      loc_140358F36
 * 0000000140358DE1: inc     r9d
 * 0000000140358DE4: add     r8, 8
 * 0000000140358DE8: add     rdx, 4
 * 0000000140358DEC: cmp     r9d, 6
 * 0000000140358DF0: jb      short loc_140358DCB
 * 0000000140358DF2: mov     r15, [rbp+0B70h+var_B70]
 * 0000000140358DF6: mov     rbx, r14
 * 0000000140358DF9: mov     rax, r14
 * 0000000140358DFC: add     [r15+828h], r10d
 * 0000000140358E03: mov     r12d, [r15+814h]
 * 0000000140358E0A: mov     r15, [r15+818h]
 * 0000000140358E11: cmp     r14, r11
 * 0000000140358E14: jnb     short loc_140358E26
 * 0000000140358E16: mov     ecx, 40h ; '@'
 * 0000000140358E1B: prefetchnta byte ptr [rax]
 * 0000000140358E1E: add     rax, rcx
 * 0000000140358E21: cmp     rax, r11
 * 0000000140358E24: jb      short loc_140358E1B
 * 0000000140358E26: mov     r9d, r10d
 * 0000000140358E29: mov     r8, r15
 * 0000000140358E2C: shr     r9d, 7
 * 0000000140358E30: mov     r11d, 1
 * 0000000140358E36: test    r9d, r9d
 * 0000000140358E39: jz      short loc_140358EA6
 * 0000000140358E3B: mov     rsi, 7010008004002001h
 * 0000000140358E45: mov     edx, 8
 * 0000000140358E4A: mov     rax, [rbx]
 * 0000000140358E4D: mov     ecx, r12d
 * 0000000140358E50: xor     rax, r8
 * 0000000140358E53: mov     r8, [rbx+8]
 * 0000000140358E57: rol     rax, cl
 * 0000000140358E5A: add     rbx, 10h
 * 0000000140358E5E: xor     r8, rax
 * 0000000140358E61: rol     r8, cl
 * 0000000140358E64: sub     rdx, r11
 * 0000000140358E67: jnz     short loc_140358E4A
 * 0000000140358E69: mov     rcx, rbx
 * 0000000140358E6C: sub     rcx, r14
 * 0000000140358E6F: xor     rcx, r15
 * 0000000140358E72: mov     rax, rcx
 * 0000000140358E75: rol     rax, 11h
 * 0000000140358E79: xor     rcx, rax
 * 0000000140358E7C: mov     rax, rsi
 * 0000000140358E7F: mul     rcx
 * 0000000140358E82: xor     r12d, edx
 * 0000000140358E85: mov     [rbp+0B70h+var_160], rdx
 * 0000000140358E8C: xor     r12d, eax
 * 0000000140358E8F: mov     eax, 0FFFFFFFFh
 * 0000000140358E94: and     r12d, 3Fh
 * 0000000140358E98: cmovz   r12d, r11d
 * 0000000140358E9C: add     r9d, eax
 * 0000000140358E9F: jnz     short loc_140358E45
 * 0000000140358EA1: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140358EA6: and     r10d, 7Fh
 * 0000000140358EAA: cmp     r10d, 8
 * 0000000140358EAE: jb      short loc_140358ECD
 * 0000000140358EB0: mov     edx, r10d
 * 0000000140358EB3: shr     rdx, 3
 * 0000000140358EB7: xor     r8, [rbx]
 * 0000000140358EBA: mov     ecx, r12d
 * 0000000140358EBD: rol     r8, cl
 * 0000000140358EC0: add     rbx, 8
 * 0000000140358EC4: add     r10d, 0FFFFFFF8h
 * 0000000140358EC8: sub     rdx, r11
 * 0000000140358ECB: jnz     short loc_140358EB7
 * 0000000140358ECD: test    r10d, r10d
 * 0000000140358ED0: jz      short loc_140358EF0
 * 0000000140358ED2: mov     esi, 0FFFFFFFFh
 * 0000000140358ED7: movzx   eax, byte ptr [rbx]
 * 0000000140358EDA: mov     ecx, r12d
 * 0000000140358EDD: xor     r8, rax
 * 0000000140358EE0: add     rbx, r11
 * 0000000140358EE3: rol     r8, cl
 * 0000000140358EE6: add     r10d, esi
 * 0000000140358EE9: jnz     short loc_140358ED7
 * 0000000140358EEB: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140358EF0: mov     rax, r8
 * 0000000140358EF3: shr     rax, 1Fh
 * 0000000140358EF7: xor     edx, edx
 * 0000000140358EF9: jmp     short loc_140358F02
 * 0000000140358EFB: xor     r8d, eax
 * 0000000140358EFE: shr     rax, 1Fh
 * 0000000140358F02: test    rax, rax
 * 0000000140358F05: jnz     short loc_140358EFB
 * 0000000140358F07: mov     rax, [rsp+0C70h+var_C20]
 * 0000000140358F0C: btr     r8d, 1Fh
 * 0000000140358F11: mov     ecx, dword ptr [rbp+0B70h+arg_8]
 * 0000000140358F17: mov     r10d, 1
 * 0000000140358F1D: mov     ebx, [rbp+0B70h+var_B58]
 * 0000000140358F20: mov     r14, [rbp+0B70h+var_BC8]
 * 0000000140358F24: mov     r12, [rbp+0B70h+var_BA8]
 * 0000000140358F28: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140358F2C: mov     [rax+8], r8d
 * 0000000140358F30: mov     r8, [rbp+0B70h+var_BC0]
 * 0000000140358F34: jmp     short loc_140358F50
 * 0000000140358F36: mov     ecx, dword ptr [rbp+0B70h+arg_8]
 * 0000000140358F3C: mov     r10d, 1
 * 0000000140358F42: mov     r14, [rbp+0B70h+var_BC8]
 * 0000000140358F46: mov     r8, [rbp+0B70h+var_BC0]
 * 0000000140358F4A: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140358F4E: xor     edx, edx
 * 0000000140358F50: cmp     r13d, ebx
 * 0000000140358F53: jb      loc_1403591D6
 * 0000000140358F59: cmp     [rbp+0B70h+var_B88], ecx
 * 0000000140358F5C: ja      loc_1403591D6
 * 0000000140358F62: cmp     r9, r8
 * 0000000140358F65: jz      loc_1403591D6
 * 0000000140358F6B: mov     r13d, [r12+4]
 * 0000000140358F70: cmp     r13d, ecx
 * 0000000140358F73: ja      loc_1403591D6
 * 0000000140358F79: mov     rax, [rbp+0B70h+var_BF0]
 * 0000000140358F7D: jmp     short loc_140358F83
 * 0000000140358F7F: mov     r14, [rbp+0B70h+var_BC8]
 * 0000000140358F83: cmp     r12, r8
 * 0000000140358F86: jz      loc_1403591D6
 * 0000000140358F8C: cmp     [rsp+0C70h+var_C00], edx
 * 0000000140358F90: jz      short loc_140358F9A
 * 0000000140358F92: mov     r8b, 80h
 * 0000000140358F95: jmp     loc_14035919D
 * 0000000140358F9A: mov     r15d, [r12]
 * 0000000140358F9E: mov     ebx, [r9+4]
 * 0000000140358FA2: mov     r11, [rbp+0B70h+var_B70]
 * 0000000140358FA6: mov     dword ptr [rbp+0B70h+var_BD8], r15d
 * 0000000140358FAA: cmp     r15d, ebx
 * 0000000140358FAD: jnb     short loc_14035900F
 * 0000000140358FAF: test    dword ptr [r11+990h], 200000h
 * 0000000140358FBA: jz      loc_140367BEA
 * 0000000140358FC0: xor     eax, eax
 * 0000000140358FC2: cmp     [r11+8F8h], eax
 * 0000000140358FC9: jnz     short loc_14035900F
 * 0000000140358FCB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140358FD5: xor     edx, edx
 * 0000000140358FD7: add     rax, r11
 * 0000000140358FDA: mov     rcx, r11
 * 0000000140358FDD: mov     [r11+900h], rax
 * 0000000140358FE4: xor     eax, eax
 * 0000000140358FE6: mov     [r11+908h], rax
 * 0000000140358FED: mov     qword ptr [r11+910h], 10Fh
 * 0000000140358FF8: mov     [r11+918h], r14
 * 0000000140358FFF: mov     [r11+8F8h], r10d
 * 0000000140359006: call    sub_14036B3BC
 * 000000014035900B: mov     r11, [rbp+0B70h+var_B70]
 * 000000014035900F: mov     r14, rbx
 * 0000000140359012: lea     rdx, [rbp+0B70h+var_938]
 * 0000000140359019: add     r14, [rbp+0B70h+var_BC8]
 * 000000014035901D: lea     r8, [rbp+0B70h+var_730]
 * 0000000140359024: mov     r9d, r15d
 * 0000000140359027: sub     r9d, ebx
 * 000000014035902A: mov     ebx, r9d
 * 000000014035902D: add     rbx, r14
 * 0000000140359030: xor     eax, eax
 * 0000000140359032: mov     r10d, eax
 * 0000000140359035: mov     rcx, [r8]
 * 0000000140359038: mov     eax, [rdx]
 * 000000014035903A: add     rax, rcx
 * 000000014035903D: cmp     r14, rax
 * 0000000140359040: jnb     short loc_14035904B
 * 0000000140359042: cmp     rbx, rcx
 * 0000000140359045: ja      loc_140359184
 * 000000014035904B: mov     eax, 4
 * 0000000140359050: inc     r10d
 * 0000000140359053: add     rdx, rax
 * 0000000140359056: add     r8, 8
 * 000000014035905A: cmp     r10d, 6
 * 000000014035905E: jb      short loc_140359035
 * 0000000140359060: cmp     r9d, eax
 * 0000000140359063: jb      loc_140359184
 * 0000000140359069: add     [r11+828h], r9d
 * 0000000140359070: mov     rax, r14
 * 0000000140359073: mov     r12d, [r11+814h]
 * 000000014035907A: mov     r15, [r11+818h]
 * 0000000140359081: mov     r11, r14
 * 0000000140359084: cmp     r14, rbx
 * 0000000140359087: jnb     short loc_140359099
 * 0000000140359089: mov     ecx, 40h ; '@'
 * 000000014035908E: prefetchnta byte ptr [rax]
 * 0000000140359091: add     rax, rcx
 * 0000000140359094: cmp     rax, rbx
 * 0000000140359097: jb      short loc_14035908E
 * 0000000140359099: mov     r10d, r9d
 * 000000014035909C: mov     r8, r15
 * 000000014035909F: shr     r10d, 7
 * 00000001403590A3: mov     ebx, 1
 * 00000001403590A8: test    r10d, r10d
 * 00000001403590AB: jz      short loc_140359118
 * 00000001403590AD: mov     rsi, 7010008004002001h
 * 00000001403590B7: mov     edx, 8
 * 00000001403590BC: mov     rax, [r11]
 * 00000001403590BF: mov     ecx, r12d
 * 00000001403590C2: xor     rax, r8
 * 00000001403590C5: mov     r8, [r11+8]
 * 00000001403590C9: rol     rax, cl
 * 00000001403590CC: add     r11, 10h
 * 00000001403590D0: xor     r8, rax
 * 00000001403590D3: rol     r8, cl
 * 00000001403590D6: sub     rdx, rbx
 * 00000001403590D9: jnz     short loc_1403590BC
 * 00000001403590DB: mov     rcx, r11
 * 00000001403590DE: sub     rcx, r14
 * 00000001403590E1: xor     rcx, r15
 * 00000001403590E4: mov     rax, rcx
 * 00000001403590E7: rol     rax, 11h
 * 00000001403590EB: xor     rcx, rax
 * 00000001403590EE: mov     rax, rsi
 * 00000001403590F1: mul     rcx
 * 00000001403590F4: xor     r12d, edx
 * 00000001403590F7: mov     [rbp+0B70h+var_2A0], rdx
 * 00000001403590FE: xor     r12d, eax
 * 0000000140359101: mov     eax, 0FFFFFFFFh
 * 0000000140359106: and     r12d, 3Fh
 * 000000014035910A: cmovz   r12d, ebx
 * 000000014035910E: add     r10d, eax
 * 0000000140359111: jnz     short loc_1403590B7
 * 0000000140359113: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140359118: and     r9d, 7Fh
 * 000000014035911C: cmp     r9d, 8
 * 0000000140359120: jb      short loc_14035913F
 * 0000000140359122: mov     edx, r9d
 * 0000000140359125: shr     rdx, 3
 * 0000000140359129: xor     r8, [r11]
 * 000000014035912C: mov     ecx, r12d
 * 000000014035912F: rol     r8, cl
 * 0000000140359132: add     r11, 8
 * 0000000140359136: add     r9d, 0FFFFFFF8h
 * 000000014035913A: sub     rdx, rbx
 * 000000014035913D: jnz     short loc_140359129
 * 000000014035913F: test    r9d, r9d
 * 0000000140359142: jz      short loc_140359163
 * 0000000140359144: mov     esi, 0FFFFFFFFh
 * 0000000140359149: movzx   eax, byte ptr [r11]
 * 000000014035914D: mov     ecx, r12d
 * 0000000140359150: xor     r8, rax
 * 0000000140359153: add     r11, rbx
 * 0000000140359156: rol     r8, cl
 * 0000000140359159: add     r9d, esi
 * 000000014035915C: jnz     short loc_140359149
 * 000000014035915E: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140359163: mov     rax, r8
 * 0000000140359166: shr     rax, 7
 * 000000014035916A: xor     edx, edx
 * 000000014035916C: jmp     short loc_140359175
 * 000000014035916E: xor     r8b, al
 * 0000000140359171: shr     rax, 7
 * 0000000140359175: test    rax, rax
 * 0000000140359178: jnz     short loc_14035916E
 * 000000014035917A: mov     r12, [rbp+0B70h+var_BA8]
 * 000000014035917E: and     r8b, 7Fh
 * 0000000140359182: jmp     short loc_140359189
 * 0000000140359184: xor     edx, edx
 * 0000000140359186: mov     r8b, 80h
 * 0000000140359189: mov     r9, [rbp+0B70h+var_BE0]
 * 000000014035918D: mov     r10d, 1
 * 0000000140359193: mov     ecx, dword ptr [rbp+0B70h+arg_8]
 * 0000000140359199: mov     rax, [rbp+0B70h+var_BF0]
 * 000000014035919D: mov     [rax], r8b
 * 00000001403591A0: mov     r8d, 0Ch
 * 00000001403591A6: mov     rax, [rbp+0B70h+var_BF0]
 * 00000001403591AA: add     r9, r8
 * 00000001403591AD: add     r12, r8
 * 00000001403591B0: mov     [rbp+0B70h+var_BE0], r9
 * 00000001403591B4: mov     r8, [rbp+0B70h+var_BC0]
 * 00000001403591B8: add     rax, r10
 * 00000001403591BB: mov     [rbp+0B70h+var_BF0], rax
 * 00000001403591BF: mov     [rbp+0B70h+var_BA8], r12
 * 00000001403591C3: cmp     r12, r8
 * 00000001403591C6: jz      short loc_1403591CD
 * 00000001403591C8: mov     r13d, [r12+4]
 * 00000001403591CD: cmp     r13d, ecx
 * 00000001403591D0: jbe     loc_140358F7F
 * 00000001403591D6: mov     r15, [rsp+0C70h+var_C20]
 * 00000001403591DB: xor     eax, eax
 * 00000001403591DD: cmp     [rsp+0C70h+var_C00], eax
 * 00000001403591E1: jnz     loc_140359372
 * 00000001403591E7: mov     eax, dword ptr [rbp+0B70h+var_BD8]
 * 00000001403591EA: cmp     eax, ecx
 * 00000001403591EC: jz      loc_140359372
 * 00000001403591F2: mov     [r15+0Ch], eax
 * 00000001403591F6: lea     rdx, [rbp+0B70h+var_938]
 * 00000001403591FD: mov     [r15+10h], ecx
 * 0000000140359201: lea     r8, [rbp+0B70h+var_730]
 * 0000000140359208: mov     eax, [r15+0Ch]
 * 000000014035920C: mov     r9d, ecx
 * 000000014035920F: mov     r14d, eax
 * 0000000140359212: sub     r9d, eax
 * 0000000140359215: add     r14, [rbp+0B70h+var_BC8]
 * 0000000140359219: mov     ebx, r9d
 * 000000014035921C: add     rbx, r14
 * 000000014035921F: xor     eax, eax
 * 0000000140359221: mov     r10d, eax
 * 0000000140359224: mov     rcx, [r8]
 * 0000000140359227: mov     eax, [rdx]
 * 0000000140359229: add     rax, rcx
 * 000000014035922C: cmp     r14, rax
 * 000000014035922F: jnb     short loc_14035923A
 * 0000000140359231: cmp     rbx, rcx
 * 0000000140359234: ja      loc_14035936E
 * 000000014035923A: inc     r10d
 * 000000014035923D: add     r8, 8
 * 0000000140359241: add     rdx, 4
 * 0000000140359245: cmp     r10d, 6
 * 0000000140359249: jb      short loc_140359224
 * 000000014035924B: mov     r13, [rbp+0B70h+var_B70]
 * 000000014035924F: mov     r11, r14
 * 0000000140359252: mov     rax, r14
 * 0000000140359255: add     [r13+828h], r9d
 * 000000014035925C: mov     r12d, [r13+814h]
 * 0000000140359263: mov     r15, [r13+818h]
 * 000000014035926A: cmp     r14, rbx
 * 000000014035926D: jnb     short loc_14035927F
 * 000000014035926F: mov     ecx, 40h ; '@'
 * 0000000140359274: prefetchnta byte ptr [rax]
 * 0000000140359277: add     rax, rcx
 * 000000014035927A: cmp     rax, rbx
 * 000000014035927D: jb      short loc_140359274
 * 000000014035927F: mov     r10d, r9d
 * 0000000140359282: mov     r8, r15
 * 0000000140359285: shr     r10d, 7
 * 0000000140359289: mov     ebx, 1
 * 000000014035928E: test    r10d, r10d
 * 0000000140359291: jz      short loc_1403592FE
 * 0000000140359293: mov     rsi, 7010008004002001h
 * 000000014035929D: mov     edx, 8
 * 00000001403592A2: mov     rax, [r11]
 * 00000001403592A5: mov     ecx, r12d
 * 00000001403592A8: xor     rax, r8
 * 00000001403592AB: mov     r8, [r11+8]
 * 00000001403592AF: rol     rax, cl
 * 00000001403592B2: add     r11, 10h
 * 00000001403592B6: xor     r8, rax
 * 00000001403592B9: rol     r8, cl
 * 00000001403592BC: sub     rdx, rbx
 * 00000001403592BF: jnz     short loc_1403592A2
 * 00000001403592C1: mov     rcx, r11
 * 00000001403592C4: sub     rcx, r14
 * 00000001403592C7: xor     rcx, r15
 * 00000001403592CA: mov     rax, rcx
 * 00000001403592CD: rol     rax, 11h
 * 00000001403592D1: xor     rcx, rax
 * 00000001403592D4: mov     rax, rsi
 * 00000001403592D7: mul     rcx
 * 00000001403592DA: xor     r12d, edx
 * 00000001403592DD: mov     [rbp+0B70h+var_158], rdx
 * 00000001403592E4: xor     r12d, eax
 * 00000001403592E7: mov     eax, 0FFFFFFFFh
 * 00000001403592EC: and     r12d, 3Fh
 * 00000001403592F0: cmovz   r12d, ebx
 * 00000001403592F4: add     r10d, eax
 * 00000001403592F7: jnz     short loc_14035929D
 * 00000001403592F9: mov     rsi, [rsp+0C70h+var_C10]
 * 00000001403592FE: and     r9d, 7Fh
 * 0000000140359302: cmp     r9d, 8
 * 0000000140359306: jb      short loc_140359325
 * 0000000140359308: mov     edx, r9d
 * 000000014035930B: shr     rdx, 3
 * 000000014035930F: xor     r8, [r11]
 * 0000000140359312: mov     ecx, r12d
 * 0000000140359315: rol     r8, cl
 * 0000000140359318: add     r11, 8
 * 000000014035931C: add     r9d, 0FFFFFFF8h
 * 0000000140359320: sub     rdx, rbx
 * 0000000140359323: jnz     short loc_14035930F
 * 0000000140359325: test    r9d, r9d
 * 0000000140359328: jz      short loc_140359349
 * 000000014035932A: mov     esi, 0FFFFFFFFh
 * 000000014035932F: movzx   eax, byte ptr [r11]
 * 0000000140359333: mov     ecx, r12d
 * 0000000140359336: xor     r8, rax
 * 0000000140359339: add     r11, rbx
 * 000000014035933C: rol     r8, cl
 * 000000014035933F: add     r9d, esi
 * 0000000140359342: jnz     short loc_14035932F
 * 0000000140359344: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140359349: mov     rax, r8
 * 000000014035934C: jmp     short loc_140359351
 * 000000014035934E: xor     r8d, eax
 * 0000000140359351: shr     rax, 1Fh
 * 0000000140359355: test    rax, rax
 * 0000000140359358: jnz     short loc_14035934E
 * 000000014035935A: mov     r15, [rsp+0C70h+var_C20]
 * 000000014035935F: btr     r8d, 1Fh
 * 0000000140359364: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140359368: mov     [r15+14h], r8d
 * 000000014035936C: jmp     short loc_140359376
 * 000000014035936E: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140359372: mov     r13, [rbp+0B70h+var_B70]
 * 0000000140359376: mov     rdx, [rbp+0B70h+var_BC0]
 * 000000014035937A: mov     r12, [rbp+0B70h+var_BA8]
 * 000000014035937E: cmp     r9, rdx
 * 0000000140359381: jz      short loc_1403593C4
 * 0000000140359383: mov     eax, [r9]
 * 0000000140359386: mov     ecx, [r9+4]
 * 000000014035938A: cmp     eax, [rbp+0B70h+var_B58]
 * 000000014035938D: jb      short loc_1403593C4
 * 000000014035938F: cmp     ecx, dword ptr [rbp+0B70h+arg_8]
 * 0000000140359395: ja      short loc_1403593C4
 * 0000000140359397: cmp     r12, rdx
 * 000000014035939A: jz      short loc_1403593B8
 * 000000014035939C: mov     rax, [rbp+0B70h+var_BF0]
 * 00000001403593A0: mov     byte ptr [rax], 80h
 * 00000001403593A3: inc     rax
 * 00000001403593A6: mov     [rbp+0B70h+var_BF0], rax
 * 00000001403593AA: mov     eax, 0Ch
 * 00000001403593AF: add     r12, rax
 * 00000001403593B2: mov     [rbp+0B70h+var_BA8], r12
 * 00000001403593B6: jmp     short loc_1403593BD
 * 00000001403593B8: mov     eax, 0Ch
 * 00000001403593BD: add     r9, rax
 * 00000001403593C0: mov     [rbp+0B70h+var_BE0], r9
 * 00000001403593C4: mov     rbx, [rsp+0C70h+var_C08]
 * 00000001403593C9: add     r15, 18h
 * 00000001403593CD: mov     r14, [rbp+0B70h+var_BC8]
 * 00000001403593D1: add     rbx, 28h ; '('
 * 00000001403593D5: mov     [rsp+0C70h+var_C20], r15
 * 00000001403593DA: mov     [rsp+0C70h+var_C08], rbx
 * 00000001403593DF: cmp     r15, [rsp+0C70h+var_BF8]
 * 00000001403593E4: jnz     loc_140358B2C
 * 00000001403593EA: mov     rbx, [rbp+0B70h+var_B38]
 * 00000001403593EE: mov     r14, [rbp+0B70h+var_BA0]
 * 00000001403593F2: xor     eax, eax
 * 00000001403593F4: mov     [rbp+0B70h+var_AE0], rbx
 * 00000001403593FB: mov     ecx, eax
 * 00000001403593FD: mov     r13d, [rbp+0B70h+var_BB8]
 * 0000000140359401: mov     rdx, [rsp+0C70h+var_C18]
 * 0000000140359406: mov     r8d, 80000000h
 * 000000014035940C: sub     rdx, rsi
 * 000000014035940F: mov     [rsp+0C70h+var_C10], rbx
 * 0000000140359414: add     rdx, rbx
 * 0000000140359417: mov     rsi, rbx
 * 000000014035941A: mov     [rsp+0C70h+var_C18], rdx
 * 000000014035941F: lea     eax, [rcx+r8]
 * 0000000140359423: test    r8d, eax
 * 0000000140359426: jnz     short loc_140359434
 * 0000000140359428: cmp     ecx, 0C000010Eh
 * 000000014035942E: jnz     loc_140359896
 * 0000000140359434: mov     [rdx+28h], r14
 * 0000000140359438: jmp     loc_140359896
 * 000000014035943D: mov     rbx, r13
 * 0000000140359440: mov     [rbp+0B70h+var_BB8], eax
 * 0000000140359443: mov     r13, rax
 * 0000000140359446: mov     r15d, eax
 * 0000000140359449: mov     r12d, eax
 * 000000014035944C: jmp     short loc_140359450
 * 000000014035944E: xor     eax, eax
 * 0000000140359450: mov     [rbp+0B70h+var_AB8], eax
 * 0000000140359456: mov     rax, [rsi+2F8h]
 * 000000014035945D: lea     r8, [rbp+0B70h+var_980]
 * 0000000140359464: lea     rdx, [rbp+0B70h+var_AB8]
 * 000000014035946B: mov     ecx, r12d
 * 000000014035946E: call    KeGuardDispatchICall
 * 0000000140359473: test    eax, eax
 * 0000000140359475: jz      loc_1403595BD
 * 000000014035947B: mov     rax, [rsi+2D8h]
 * 0000000140359482: mov     rcx, [rbp+0B70h+var_980]
 * 0000000140359489: call    KeGuardDispatchICall
 * 000000014035948E: mov     r14, rax
 * 0000000140359491: test    rax, rax
 * 0000000140359494: jz      short loc_140359456
 * 0000000140359496: mov     rax, [rsi+2E0h]
 * 000000014035949D: mov     edi, 1
 * 00000001403594A2: add     r15d, edi
 * 00000001403594A5: mov     rcx, r14
 * 00000001403594A8: mov     [rbp+0B70h+var_BB8], r15d
 * 00000001403594AC: call    KeGuardDispatchICall
 * 00000001403594B1: mov     r15, rax
 * 00000001403594B4: lea     rdx, [rbp+0B70h+var_5F0]
 * 00000001403594BB: mov     rax, [rsi+208h]
 * 00000001403594C2: mov     rcx, r15
 * 00000001403594C5: call    KeGuardDispatchICall
 * 00000001403594CA: test    rax, rax
 * 00000001403594CD: jz      short loc_1403594EE
 * 00000001403594CF: mov     rax, [rsi+2E8h]
 * 00000001403594D6: mov     rdx, r14
 * 00000001403594D9: mov     rcx, [rbp+0B70h+var_980]
 * 00000001403594E0: call    KeGuardDispatchICall
 * 00000001403594E5: mov     r15d, [rbp+0B70h+var_BB8]
 * 00000001403594E9: jmp     loc_140359456
 * 00000001403594EE: test    dword ptr [rsi+990h], 40000000h
 * 00000001403594F8: jz      short loc_140359543
 * 00000001403594FA: mov     rcx, [rsi+0A80h]
 * 0000000140359501: mov     edx, 30h ; '0'
 * 0000000140359506: lea     r8d, [rdx-2Ah]
 * 000000014035950A: mov     rax, [rbx]
 * 000000014035950D: add     edx, 0FFFFFFF8h
 * 0000000140359510: mov     [rcx], rax
 * 0000000140359513: add     rbx, 8
 * 0000000140359517: add     rcx, 8
 * 000000014035951B: sub     r8, rdi
 * 000000014035951E: jnz     short loc_14035950A
 * 0000000140359520: test    edx, edx
 * 0000000140359522: jz      short loc_14035953C
 * 0000000140359524: mov     esi, 0FFFFFFFFh
 * 0000000140359529: mov     al, [rbx]
 * 000000014035952B: add     rbx, rdi
 * 000000014035952E: mov     [rcx], al
 * 0000000140359530: add     rcx, rdi
 * 0000000140359533: add     edx, esi
 * 0000000140359535: jnz     short loc_140359529
 * 0000000140359537: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035953C: mov     rbx, [rsi+0A80h]
 * 0000000140359543: mov     [rbx+18h], r15
 * 0000000140359547: mov     rax, [rsi+590h]
 * 000000014035954E: mov     [rax], rbx
 * 0000000140359551: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140359558: mov     rax, [rsi+590h]
 * 000000014035955F: mov     [rax+8], r15
 * 0000000140359563: mov     dword ptr [rax+14h], 1000h
 * 000000014035956A: xor     eax, eax
 * 000000014035956C: cmp     [rsi+8F8h], eax
 * 0000000140359572: jnz     short loc_1403595BD
 * 0000000140359574: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035957E: xor     edx, edx
 * 0000000140359580: add     rax, rsi
 * 0000000140359583: mov     rcx, rsi
 * 0000000140359586: mov     [rsi+900h], rax
 * 000000014035958D: mov     rax, 0B3B74BDEE4453415h
 * 0000000140359597: add     rax, rbx
 * 000000014035959A: mov     [rsi+908h], rax
 * 00000001403595A1: movsxd  rax, dword ptr [rbx]
 * 00000001403595A4: mov     [rsi+910h], rax
 * 00000001403595AB: mov     [rsi+918h], r13
 * 00000001403595B2: mov     [rsi+8F8h], edi
 * 00000001403595B8: call    sub_14036B3BC
 * 00000001403595BD: mov     r15d, [rbp+0B70h+var_BB8]
 * 00000001403595C1: mov     edx, 1
 * 00000001403595C6: add     r12d, edx
 * 00000001403595C9: add     r13, rdx
 * 00000001403595CC: cmp     r12d, 3
 * 00000001403595D0: jb      loc_14035944E
 * 00000001403595D6: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403595DD: mov     r13d, r15d
 * 00000001403595E0: jmp     loc_14035989B
 * 00000001403595E5: mov     rbx, r13
 * 00000001403595E8: mov     [rbp+0B70h+var_8D0], rax
 * 00000001403595EF: mov     r13d, eax
 * 00000001403595F2: mov     r15, cr8
 * 00000001403595F6: mov     [rbp+0B70h+arg_8], r15
 * 00000001403595FD: mov     cr8, r8
 * 0000000140359601: mov     rax, [rsi+308h]
 * 0000000140359608: lea     rcx, [rbp+0B70h+var_8D0]
 * 000000014035960F: call    KeGuardDispatchICall
 * 0000000140359614: mov     r14, rax
 * 0000000140359617: test    rax, rax
 * 000000014035961A: jz      loc_140359742
 * 0000000140359620: mov     edi, 1
 * 0000000140359625: mov     rax, [rsi+208h]
 * 000000014035962C: lea     rdx, [rbp+0B70h+var_5E8]
 * 0000000140359633: mov     rcx, r14
 * 0000000140359636: add     r13d, edi
 * 0000000140359639: call    KeGuardDispatchICall
 * 000000014035963E: test    rax, rax
 * 0000000140359641: jnz     loc_140359715
 * 0000000140359647: test    [rsi+990h], r12d
 * 000000014035964E: jz      short loc_140359697
 * 0000000140359650: mov     rcx, [rsi+0A80h]
 * 0000000140359657: lea     edx, [rax+30h]
 * 000000014035965A: lea     r8d, [rax+6]
 * 000000014035965E: mov     rax, [rbx]
 * 0000000140359661: add     edx, 0FFFFFFF8h
 * 0000000140359664: mov     [rcx], rax
 * 0000000140359667: add     rbx, 8
 * 000000014035966B: add     rcx, 8
 * 000000014035966F: sub     r8, rdi
 * 0000000140359672: jnz     short loc_14035965E
 * 0000000140359674: test    edx, edx
 * 0000000140359676: jz      short loc_140359690
 * 0000000140359678: mov     esi, 0FFFFFFFFh
 * 000000014035967D: mov     al, [rbx]
 * 000000014035967F: add     rbx, rdi
 * 0000000140359682: mov     [rcx], al
 * 0000000140359684: add     rcx, rdi
 * 0000000140359687: add     edx, esi
 * 0000000140359689: jnz     short loc_14035967D
 * 000000014035968B: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140359690: mov     rbx, [rsi+0A80h]
 * 0000000140359697: mov     [rbx+18h], r14
 * 000000014035969B: mov     rax, [rsi+590h]
 * 00000001403596A2: mov     [rax], rbx
 * 00000001403596A5: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001403596AC: mov     rax, [rsi+590h]
 * 00000001403596B3: mov     [rax+8], r14
 * 00000001403596B7: mov     dword ptr [rax+14h], 1000h
 * 00000001403596BE: xor     eax, eax
 * 00000001403596C0: cmp     [rsi+8F8h], eax
 * 00000001403596C6: jnz     short loc_140359715
 * 00000001403596C8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403596D2: xor     edx, edx
 * 00000001403596D4: add     rax, rsi
 * 00000001403596D7: mov     rcx, rsi
 * 00000001403596DA: mov     [rsi+900h], rax
 * 00000001403596E1: mov     rax, 0B3B74BDEE4453415h
 * 00000001403596EB: add     rax, rbx
 * 00000001403596EE: mov     [rsi+908h], rax
 * 00000001403596F5: movsxd  rax, dword ptr [rbx]
 * 00000001403596F8: mov     [rsi+910h], rax
 * 00000001403596FF: mov     qword ptr [rsi+918h], 4
 * 000000014035970A: mov     [rsi+8F8h], edi
 * 0000000140359710: call    sub_14036B3BC
 * 0000000140359715: mov     rax, [rsi+308h]
 * 000000014035971C: lea     rcx, [rbp+0B70h+var_8D0]
 * 0000000140359723: call    KeGuardDispatchICall
 * 0000000140359728: mov     r14, rax
 * 000000014035972B: test    rax, rax
 * 000000014035972E: jnz     loc_140359625
 * 0000000140359734: mov     r15, [rbp+0B70h+arg_8]
 * 000000014035973B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140359742: movzx   eax, r15b
 * 0000000140359746: mov     cr8, rax
 * 000000014035974A: jmp     loc_140359896
 * 000000014035974F: mov     [rbp+0B70h+var_8C8], rax
 * 0000000140359756: lea     rcx, [rbp+0B70h+var_8C8]
 * 000000014035975D: mov     rbx, r13
 * 0000000140359760: mov     r13d, eax
 * 0000000140359763: mov     rax, [rsi+300h]
 * 000000014035976A: call    KeGuardDispatchICall
 * 000000014035976F: mov     r14, rax
 * 0000000140359772: test    rax, rax
 * 0000000140359775: jz      loc_140359896
 * 000000014035977B: mov     edi, 1
 * 0000000140359780: mov     rax, [rsi+208h]
 * 0000000140359787: lea     rdx, [rbp+0B70h+var_5E0]
 * 000000014035978E: mov     rcx, r14
 * 0000000140359791: add     r13d, edi
 * 0000000140359794: call    KeGuardDispatchICall
 * 0000000140359799: test    rax, rax
 * 000000014035979C: jnz     loc_140359870
 * 00000001403597A2: test    [rsi+990h], r12d
 * 00000001403597A9: jz      short loc_1403597F2
 * 00000001403597AB: mov     rcx, [rsi+0A80h]
 * 00000001403597B2: lea     edx, [rax+30h]
 * 00000001403597B5: lea     r8d, [rax+6]
 * 00000001403597B9: mov     rax, [rbx]
 * 00000001403597BC: add     edx, 0FFFFFFF8h
 * 00000001403597BF: mov     [rcx], rax
 * 00000001403597C2: add     rbx, 8
 * 00000001403597C6: add     rcx, 8
 * 00000001403597CA: sub     r8, rdi
 * 00000001403597CD: jnz     short loc_1403597B9
 * 00000001403597CF: test    edx, edx
 * 00000001403597D1: jz      short loc_1403597EB
 * 00000001403597D3: mov     esi, 0FFFFFFFFh
 * 00000001403597D8: mov     al, [rbx]
 * 00000001403597DA: add     rbx, rdi
 * 00000001403597DD: mov     [rcx], al
 * 00000001403597DF: add     rcx, rdi
 * 00000001403597E2: add     edx, esi
 * 00000001403597E4: jnz     short loc_1403597D8
 * 00000001403597E6: mov     rsi, [rsp+0C70h+var_C10]
 * 00000001403597EB: mov     rbx, [rsi+0A80h]
 * 00000001403597F2: mov     [rbx+18h], r14
 * 00000001403597F6: mov     rax, [rsi+590h]
 * 00000001403597FD: mov     [rax], rbx
 * 0000000140359800: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140359807: mov     rax, [rsi+590h]
 * 000000014035980E: mov     [rax+8], r14
 * 0000000140359812: mov     dword ptr [rax+14h], 1000h
 * 0000000140359819: xor     eax, eax
 * 000000014035981B: cmp     [rsi+8F8h], eax
 * 0000000140359821: jnz     short loc_140359870
 * 0000000140359823: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035982D: xor     edx, edx
 * 000000014035982F: add     rax, rsi
 * 0000000140359832: mov     rcx, rsi
 * 0000000140359835: mov     [rsi+900h], rax
 * 000000014035983C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140359846: add     rax, rbx
 * 0000000140359849: mov     [rsi+908h], rax
 * 0000000140359850: movsxd  rax, dword ptr [rbx]
 * 0000000140359853: mov     [rsi+910h], rax
 * 000000014035985A: mov     qword ptr [rsi+918h], 3
 * 0000000140359865: mov     [rsi+8F8h], edi
 * 000000014035986B: call    sub_14036B3BC
 * 0000000140359870: mov     rax, [rsi+300h]
 * 0000000140359877: lea     rcx, [rbp+0B70h+var_8C8]
 * 000000014035987E: call    KeGuardDispatchICall
 * 0000000140359883: mov     r14, rax
 * 0000000140359886: test    rax, rax
 * 0000000140359889: jnz     loc_140359780
 * 000000014035988F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140359896: mov     edx, 1
 * 000000014035989B: shl     r13d, 0Ch
 * 000000014035989F: add     [rsi+828h], r13d
 * 00000001403598A6: add     [rsi+824h], edx
 * 00000001403598AC: mov     eax, [rsi+82Ch]
 * 00000001403598B2: cmp     [rsi+828h], eax
 * 00000001403598B8: jge     short loc_1403598E4
 * 00000001403598BA: mov     r13, [rsp+0C70h+var_C18]
 * 00000001403598BF: mov     r15d, 4
 * 00000001403598C5: mov     r11, 0B3B74BDEE4453415h
 * 00000001403598CF: mov     r12d, 40000000h
 * 00000001403598D5: lea     r8d, [r15+8]
 * 00000001403598D9: jmp     loc_14035723B
 * 00000001403598DE: mov     [rsi+824h], eax
 * 00000001403598E4: mov     [rsp+0C70h+var_C10], rsi
 * 00000001403598E9: jmp     loc_140355320
 * 00000001403598EE: mov     edx, [r13+2Ch]
 * 00000001403598F2: lea     rcx, [rbp+0B70h+var_278]
 * 00000001403598F9: mov     rax, [rsi+1A0h]
 * 0000000140359900: mov     ebx, [r13+28h]
 * 0000000140359904: call    KeGuardDispatchICall
 * 0000000140359909: mov     rax, [rsi+1D0h]
 * 0000000140359910: lea     rdx, [rbp+0B70h+var_268]
 * 0000000140359917: lea     rcx, [rbp+0B70h+var_278]
 * 000000014035991E: call    KeGuardDispatchICall
 * 0000000140359923: cmp     r14d, 26h ; '&'
 * 0000000140359927: jz      short loc_140359937
 * 0000000140359929: test    ebx, ebx
 * 000000014035992B: jz      short loc_140359932
 * 000000014035992D: mov     rbx, cr4
 * 0000000140359930: jmp     short loc_140359946
 * 0000000140359932: mov     rbx, cr0
 * 0000000140359935: jmp     short loc_140359946
 * 0000000140359937: xor     ecx, ecx
 * 0000000140359939: xgetbv
 * 000000014035993C: shl     rdx, 20h
 * 0000000140359940: or      rdx, rax
 * 0000000140359943: mov     rbx, rdx
 * 0000000140359946: mov     rax, [rsi+198h]
 * 000000014035994D: lea     rcx, [rbp+0B70h+var_268]
 * 0000000140359954: call    KeGuardDispatchICall
 * 0000000140359959: mov     r8, [r13+18h]
 * 000000014035995D: xor     r15d, r15d
 * 0000000140359960: mov     rcx, [r13+20h]
 * 0000000140359964: and     r8, rbx
 * 0000000140359967: cmp     r8, rcx
 * 000000014035996A: jz      loc_140355323
 * 0000000140359970: mov     eax, [r13+28h]
 * 0000000140359974: mov     edx, [r13+2Ch]
 * 0000000140359978: shl     rdx, 20h
 * 000000014035997C: or      rdx, rax
 * 000000014035997F: mov     eax, [rsi+8F8h]
 * 0000000140359985: test    eax, eax
 * 0000000140359987: jnz     loc_140355323
 * 000000014035998D: mov     rax, [rsi+590h]
 * 0000000140359994: xor     rcx, r8
 * 0000000140359997: mov     [rax+18h], rcx
 * 000000014035999B: mov     eax, [rsi+8F8h]
 * 00000001403599A1: test    eax, eax
 * 00000001403599A3: jnz     loc_140355323
 * 00000001403599A9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403599B3: add     rax, rsi
 * 00000001403599B6: mov     [rsi+900h], rax
 * 00000001403599BD: mov     rax, 0B3B74BDEE4453415h
 * 00000001403599C7: add     rax, r13
 * 00000001403599CA: mov     [rsi+908h], rax
 * 00000001403599D1: movsxd  rax, dword ptr [r13+0]
 * 00000001403599D5: mov     [rsi+910h], rax
 * 00000001403599DC: mov     [rsi+918h], rdx
 * 00000001403599E3: jmp     loc_1403556F2
 * 00000001403599E8: cmp     dword ptr [rsi+958h], 0Bh
 * 00000001403599EF: jnz     loc_140355320
 * 00000001403599F5: add     dword ptr [rsi+828h], 100h
 * 00000001403599FF: mov     r15, [rsi+588h]
 * 0000000140359A06: mov     rax, [rsi+2D8h]
 * 0000000140359A0D: mov     rcx, r15
 * 0000000140359A10: call    KeGuardDispatchICall
 * 0000000140359A15: mov     r14, rax
 * 0000000140359A18: test    rax, rax
 * 0000000140359A1B: jz      loc_140355320
 * 0000000140359A21: mov     rax, [rsi+2E0h]
 * 0000000140359A28: mov     rcx, r14
 * 0000000140359A2B: call    KeGuardDispatchICall
 * 0000000140359A30: mov     rbx, rax
 * 0000000140359A33: xor     edx, edx
 * 0000000140359A35: mov     rax, [r13+18h]
 * 0000000140359A39: test    rax, rax
 * 0000000140359A3C: jz      short loc_140359AA5
 * 0000000140359A3E: cmp     rax, rbx
 * 0000000140359A41: jz      loc_140359B25
 * 0000000140359A47: xor     eax, eax
 * 0000000140359A49: cmp     [rsi+8F8h], eax
 * 0000000140359A4F: jnz     loc_140359B25
 * 0000000140359A55: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140359A5F: mov     rcx, rsi
 * 0000000140359A62: add     rax, rsi
 * 0000000140359A65: mov     [rsi+900h], rax
 * 0000000140359A6C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140359A76: add     rax, r13
 * 0000000140359A79: mov     [rsi+908h], rax
 * 0000000140359A80: movsxd  rax, dword ptr [r13+0]
 * 0000000140359A84: mov     [rsi+910h], rax
 * 0000000140359A8B: lea     eax, [rdx+1]
 * 0000000140359A8E: mov     [rsi+918h], rbx
 * 0000000140359A95: mov     [rsi+8F8h], eax
 * 0000000140359A9B: call    sub_14036B3BC
 * 0000000140359AA0: jmp     loc_140359B25
 * 0000000140359AA5: mov     eax, [rsi+974h]
 * 0000000140359AAB: mov     rcx, [rsi+978h]
 * 0000000140359AB2: test    rax, rax
 * 0000000140359AB5: jz      short loc_140359AC8
 * 0000000140359AB7: lea     rdx, [rax-1]
 * 0000000140359ABB: add     rdx, rcx
 * 0000000140359ABE: cmp     rbx, rcx
 * 0000000140359AC1: jb      short loc_140359AC8
 * 0000000140359AC3: cmp     rbx, rdx
 * 0000000140359AC6: jbe     short loc_140359B21
 * 0000000140359AC8: xor     eax, eax
 * 0000000140359ACA: cmp     [rsi+8F8h], eax
 * 0000000140359AD0: jnz     short loc_140359B21
 * 0000000140359AD2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140359ADC: xor     edx, edx
 * 0000000140359ADE: add     rax, rsi
 * 0000000140359AE1: mov     rcx, rsi
 * 0000000140359AE4: mov     [rsi+900h], rax
 * 0000000140359AEB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140359AF5: add     rax, r13
 * 0000000140359AF8: mov     [rsi+908h], rax
 * 0000000140359AFF: movsxd  rax, dword ptr [r13+0]
 * 0000000140359B03: mov     [rsi+910h], rax
 * 0000000140359B0A: mov     eax, 1
 * 0000000140359B0F: mov     [rsi+918h], rbx
 * 0000000140359B16: mov     [rsi+8F8h], eax
 * 0000000140359B1C: call    sub_14036B3BC
 * 0000000140359B21: mov     [r13+18h], rbx
 * 0000000140359B25: mov     rax, [rsi+2E8h]
 * 0000000140359B2C: mov     rdx, r14
 * 0000000140359B2F: mov     rcx, r15
 * 0000000140359B32: call    KeGuardDispatchICall
 * 0000000140359B37: jmp     loc_140355320
 * 0000000140359B3C: jnz     short loc_140359B8E
 * 0000000140359B3E: xor     eax, eax
 * 0000000140359B40: cmp     [rsi+980h], rax
 * 0000000140359B47: jz      loc_14035531A
 * 0000000140359B4D: mov     ecx, [rsi+994h]
 * 0000000140359B53: mov     eax, ecx
 * 0000000140359B55: shr     eax, 2
 * 0000000140359B58: and     eax, edx
 * 0000000140359B5A: jnz     loc_140355402
 * 0000000140359B60: xor     edx, edx
 * 0000000140359B62: cmp     [rsi+824h], edx
 * 0000000140359B68: lea     edx, [rax+1]
 * 0000000140359B6B: jnz     short loc_140359B81
 * 0000000140359B6D: mov     eax, ecx
 * 0000000140359B6F: shl     eax, 3
 * 0000000140359B72: xor     eax, ecx
 * 0000000140359B74: and     eax, 20h
 * 0000000140359B77: xor     eax, ecx
 * 0000000140359B79: mov     [rsi+994h], eax
 * 0000000140359B7F: jmp     short loc_140359B8E
 * 0000000140359B81: shr     ecx, 5
 * 0000000140359B84: and     ecx, edx
 * 0000000140359B86: cmp     eax, ecx
 * 0000000140359B88: jnz     loc_140355402
 * 0000000140359B8E: mov     r14, [r13+8]
 * 0000000140359B92: mov     r8d, [r13+10h]
 * 0000000140359B96: mov     r9, r14
 * 0000000140359B99: add     [rsi+828h], r8d
 * 0000000140359BA0: mov     rax, r14
 * 0000000140359BA3: mov     r10d, [rsi+814h]
 * 0000000140359BAA: mov     r15, [rsi+818h]
 * 0000000140359BB1: lea     rcx, [r14+r8]
 * 0000000140359BB5: cmp     r14, rcx
 * 0000000140359BB8: jnb     short loc_140359BCB
 * 0000000140359BBA: mov     r11d, 40h ; '@'
 * 0000000140359BC0: prefetchnta byte ptr [rax]
 * 0000000140359BC3: add     rax, r11
 * 0000000140359BC6: cmp     rax, rcx
 * 0000000140359BC9: jb      short loc_140359BC0
 * 0000000140359BCB: mov     r11d, r8d
 * 0000000140359BCE: mov     rbx, r15
 * 0000000140359BD1: shr     r11d, 7
 * 0000000140359BD5: mov     r12d, 0FFFFFFFFh
 * 0000000140359BDB: test    r11d, r11d
 * 0000000140359BDE: jz      short loc_140359C4C
 * 0000000140359BE0: mov     rdi, 7010008004002001h
 * 0000000140359BEA: mov     eax, 8
 * 0000000140359BEF: xor     rbx, [r9]
 * 0000000140359BF2: mov     ecx, r10d
 * 0000000140359BF5: rol     rbx, cl
 * 0000000140359BF8: xor     rbx, [r9+8]
 * 0000000140359BFC: add     r9, 10h
 * 0000000140359C00: rol     rbx, cl
 * 0000000140359C03: sub     rax, rdx
 * 0000000140359C06: jnz     short loc_140359BEF
 * 0000000140359C08: mov     rcx, r9
 * 0000000140359C0B: sub     rcx, r14
 * 0000000140359C0E: xor     rcx, r15
 * 0000000140359C11: mov     rax, rcx
 * 0000000140359C14: rol     rax, 11h
 * 0000000140359C18: xor     rcx, rax
 * 0000000140359C1B: mov     rax, rdi
 * 0000000140359C1E: mul     rcx
 * 0000000140359C21: xor     r10d, edx
 * 0000000140359C24: mov     [rbp+0B70h+var_5D8], rdx
 * 0000000140359C2B: xor     r10d, eax
 * 0000000140359C2E: mov     edx, 1
 * 0000000140359C33: and     r10d, 3Fh
 * 0000000140359C37: cmovz   r10d, edx
 * 0000000140359C3B: add     r11d, r12d
 * 0000000140359C3E: jnz     short loc_140359BEA
 * 0000000140359C40: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140359C45: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140359C4C: and     r8d, 7Fh
 * 0000000140359C50: cmp     r8d, 8
 * 0000000140359C54: jb      short loc_140359C73
 * 0000000140359C56: mov     eax, r8d
 * 0000000140359C59: shr     rax, 3
 * 0000000140359C5D: xor     rbx, [r9]
 * 0000000140359C60: mov     ecx, r10d
 * 0000000140359C63: rol     rbx, cl
 * 0000000140359C66: add     r9, 8
 * 0000000140359C6A: add     r8d, 0FFFFFFF8h
 * 0000000140359C6E: sub     rax, rdx
 * 0000000140359C71: jnz     short loc_140359C5D
 * 0000000140359C73: test    r8d, r8d
 * 0000000140359C76: jz      short loc_140359C8D
 * 0000000140359C78: movzx   eax, byte ptr [r9]
 * 0000000140359C7C: mov     ecx, r10d
 * 0000000140359C7F: xor     rbx, rax
 * 0000000140359C82: add     r9, rdx
 * 0000000140359C85: rol     rbx, cl
 * 0000000140359C88: add     r8d, r12d
 * 0000000140359C8B: jnz     short loc_140359C78
 * 0000000140359C8D: mov     rax, rbx
 * 0000000140359C90: shr     rax, 1Fh
 * 0000000140359C94: xor     r15d, r15d
 * 0000000140359C97: jmp     short loc_140359C9F
 * 0000000140359C99: xor     ebx, eax
 * 0000000140359C9B: shr     rax, 1Fh
 * 0000000140359C9F: test    rax, rax
 * 0000000140359CA2: jnz     short loc_140359C99
 * 0000000140359CA4: btr     ebx, 1Fh
 * 0000000140359CA8: cmp     ebx, [r13+14h]
 * 0000000140359CAC: jz      loc_140359D8C
 * 0000000140359CB2: lock or [rsp+0C70h+var_C70], eax
 * 0000000140359CB6: mov     eax, [r13+18h]
 * 0000000140359CBA: test    dl, al
 * 0000000140359CBC: jz      short loc_140359CCF
 * 0000000140359CBE: mov     rax, [rsi+580h]
 * 0000000140359CC5: mov     cl, [rax]
 * 0000000140359CC7: test    cl, cl
 * 0000000140359CC9: jnz     loc_140359D8C
 * 0000000140359CCF: mov     ecx, [r13+10h]
 * 0000000140359CD3: mov     rdx, [r13+8]
 * 0000000140359CD7: test    rcx, rcx
 * 0000000140359CDA: jz      loc_140359E2B
 * 0000000140359CE0: mov     eax, [rsi+994h]
 * 0000000140359CE6: mov     r8d, 40h ; '@'
 * 0000000140359CEC: test    r8b, al
 * 0000000140359CEF: jz      loc_140359E2B
 * 0000000140359CF5: mov     r12, cr8
 * 0000000140359CF9: lea     eax, [r8-3Eh]
 * 0000000140359CFD: mov     cr8, rax
 * 0000000140359D01: mov     r14, rdx
 * 0000000140359D04: lea     rax, [rcx-1]
 * 0000000140359D08: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140359D0F: add     rax, rdx
 * 0000000140359D12: or      rax, 0FFFh
 * 0000000140359D18: mov     [rbp+0B70h+arg_8], rax
 * 0000000140359D1F: lea     r13, [r14-1]
 * 0000000140359D23: movzx   r15d, r12b
 * 0000000140359D27: mov     rax, [rsi+468h]
 * 0000000140359D2E: xor     edx, edx
 * 0000000140359D30: mov     rcx, r14
 * 0000000140359D33: call    KeGuardDispatchICall
 * 0000000140359D38: cmp     eax, 0C000022Dh
 * 0000000140359D3D: jnz     short loc_140359D63
 * 0000000140359D3F: mov     eax, 1
 * 0000000140359D44: cmp     r12b, al
 * 0000000140359D47: ja      short loc_140359D6B
 * 0000000140359D49: movzx   r15d, r12b
 * 0000000140359D4D: mov     cr8, r15
 * 0000000140359D51: mov     al, [r14]
 * 0000000140359D54: mov     rax, cr8
 * 0000000140359D58: mov     eax, 2
 * 0000000140359D5D: mov     cr8, rax
 * 0000000140359D61: jmp     short loc_140359D27
 * 0000000140359D63: test    eax, eax
 * 0000000140359D65: js      loc_140359E22
 * 0000000140359D6B: mov     r10d, 1000h
 * 0000000140359D71: add     r14, r10
 * 0000000140359D74: add     r13, r10
 * 0000000140359D77: cmp     r13, [rbp+0B70h+arg_8]
 * 0000000140359D7E: jnz     short loc_140359D23
 * 0000000140359D80: mov     cr8, r15
 * 0000000140359D84: mov     r13, [rsp+0C70h+var_C18]
 * 0000000140359D89: xor     r15d, r15d
 * 0000000140359D8C: mov     ebx, 1
 * 0000000140359D91: test    dword ptr [rsi+990h], 40000000h
 * 0000000140359D9B: jz      loc_140355323
 * 0000000140359DA1: mov     r8d, [r13+10h]
 * 0000000140359DA5: test    r8d, r8d
 * 0000000140359DA8: jz      loc_140355320
 * 0000000140359DAE: mov     rdx, [r13+8]
 * 0000000140359DB2: lea     r9, [rbp+0B70h+var_258]
 * 0000000140359DB9: mov     rcx, rsi
 * 0000000140359DBC: call    sub_1401B877C
 * 0000000140359DC1: mov     r8d, 10h
 * 0000000140359DC7: lea     r9, [r13+1Ch]
 * 0000000140359DCB: lea     r10, [rbp+0B70h+var_258]
 * 0000000140359DD2: mov     rcx, [r10]
 * 0000000140359DD5: add     r10, 8
 * 0000000140359DD9: mov     rax, [r9]
 * 0000000140359DDC: add     r9, 8
 * 0000000140359DE0: cmp     rcx, rax
 * 0000000140359DE3: jnz     loc_140359EB2
 * 0000000140359DE9: add     r8d, 0FFFFFFF8h
 * 0000000140359DED: cmp     r8d, 8
 * 0000000140359DF1: jnb     short loc_140359DD2
 * 0000000140359DF3: test    r8d, r8d
 * 0000000140359DF6: jz      loc_140359FDF
 * 0000000140359DFC: movzx   edx, byte ptr [r10]
 * 0000000140359E00: add     r10, rbx
 * 0000000140359E03: movzx   eax, byte ptr [r9]
 * 0000000140359E07: add     r9, rbx
 * 0000000140359E0A: cmp     rdx, rax
 * 0000000140359E0D: jnz     loc_140359EB2
 * 0000000140359E13: mov     eax, 0FFFFFFFFh
 * 0000000140359E18: add     r8d, eax
 * 0000000140359E1B: jnz     short loc_140359DFC
 * 0000000140359E1D: jmp     loc_140359FDF
 * 0000000140359E22: mov     cr8, r15
 * 0000000140359E26: mov     r13, [rsp+0C70h+var_C18]
 * 0000000140359E2B: mov     eax, [rsi+8F8h]
 * 0000000140359E31: xor     r15d, r15d
 * 0000000140359E34: mov     edx, [r13+14h]
 * 0000000140359E38: test    eax, eax
 * 0000000140359E3A: jnz     short loc_140359E52
 * 0000000140359E3C: mov     rax, [rsi+590h]
 * 0000000140359E43: mov     ecx, ebx
 * 0000000140359E45: xor     rcx, rdx
 * 0000000140359E48: mov     [rax+18h], rcx
 * 0000000140359E4C: mov     eax, [rsi+8F8h]
 * 0000000140359E52: mov     rcx, [r13+8]
 * 0000000140359E56: mov     ebx, 1
 * 0000000140359E5B: test    eax, eax
 * 0000000140359E5D: jnz     loc_140359D91
 * 0000000140359E63: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140359E6D: xor     edx, edx
 * 0000000140359E6F: add     rax, rsi
 * 0000000140359E72: mov     [rsi+900h], rax
 * 0000000140359E79: mov     rax, 0B3B74BDEE4453415h
 * 0000000140359E83: add     rax, r13
 * 0000000140359E86: mov     [rsi+908h], rax
 * 0000000140359E8D: movsxd  rax, dword ptr [r13+0]
 * 0000000140359E91: mov     [rsi+910h], rax
 * 0000000140359E98: mov     [rsi+918h], rcx
 * 0000000140359E9F: mov     rcx, rsi
 * 0000000140359EA2: mov     [rsi+8F8h], ebx
 * 0000000140359EA8: call    sub_14036B3BC
 * 0000000140359EAD: jmp     loc_140359D91
 * 0000000140359EB2: xor     eax, eax
 * 0000000140359EB4: lock or [rsp+0C70h+var_C70], eax
 * 0000000140359EB8: mov     eax, [r13+18h]
 * 0000000140359EBC: test    bl, al
 * 0000000140359EBE: jz      short loc_140359ED1
 * 0000000140359EC0: mov     rax, [rsi+580h]
 * 0000000140359EC7: mov     cl, [rax]
 * 0000000140359EC9: test    cl, cl
 * 0000000140359ECB: jnz     loc_140359FDF
 * 0000000140359ED1: mov     edx, [r13+10h]
 * 0000000140359ED5: mov     rcx, [r13+8]
 * 0000000140359ED9: test    rdx, rdx
 * 0000000140359EDC: jz      loc_140359F8B
 * 0000000140359EE2: mov     eax, [rsi+994h]
 * 0000000140359EE8: mov     r8d, 40h ; '@'
 * 0000000140359EEE: test    r8b, al
 * 0000000140359EF1: jz      loc_140359F8B
 * 0000000140359EF7: mov     r15, cr8
 * 0000000140359EFB: lea     eax, [r8-3Eh]
 * 0000000140359EFF: mov     cr8, rax
 * 0000000140359F03: mov     rbx, rcx
 * 0000000140359F06: lea     r13, [rdx-1]
 * 0000000140359F0A: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140359F11: add     r13, rcx
 * 0000000140359F14: or      r13, 0FFFh
 * 0000000140359F1B: lea     r12, [rbx-1]
 * 0000000140359F1F: movzx   r14d, r15b
 * 0000000140359F23: mov     rax, [rsi+468h]
 * 0000000140359F2A: xor     edx, edx
 * 0000000140359F2C: mov     rcx, rbx
 * 0000000140359F2F: call    KeGuardDispatchICall
 * 0000000140359F34: cmp     eax, 0C000022Dh
 * 0000000140359F39: jnz     short loc_140359F5E
 * 0000000140359F3B: mov     eax, 1
 * 0000000140359F40: cmp     r15b, al
 * 0000000140359F43: ja      short loc_140359F62
 * 0000000140359F45: movzx   r14d, r15b
 * 0000000140359F49: mov     cr8, r14
 * 0000000140359F4D: mov     al, [rbx]
 * 0000000140359F4F: mov     rax, cr8
 * 0000000140359F53: mov     eax, 2
 * 0000000140359F58: mov     cr8, rax
 * 0000000140359F5C: jmp     short loc_140359F23
 * 0000000140359F5E: test    eax, eax
 * 0000000140359F60: js      short loc_140359F79
 * 0000000140359F62: mov     r10d, 1000h
 * 0000000140359F68: add     rbx, r10
 * 0000000140359F6B: add     r12, r10
 * 0000000140359F6E: cmp     r12, r13
 * 0000000140359F71: jnz     short loc_140359F1F
 * 0000000140359F73: mov     cr8, r14
 * 0000000140359F77: jmp     short loc_140359FDF
 * 0000000140359F79: mov     cr8, r14
 * 0000000140359F7D: mov     r13, [rsp+0C70h+var_C18]
 * 0000000140359F82: mov     ebx, 1
 * 0000000140359F87: mov     rcx, [r13+8]
 * 0000000140359F8B: xor     eax, eax
 * 0000000140359F8D: cmp     [rsi+8F8h], eax
 * 0000000140359F93: jnz     short loc_140359FDF
 * 0000000140359F95: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140359F9F: xor     edx, edx
 * 0000000140359FA1: add     rax, rsi
 * 0000000140359FA4: mov     [rsi+900h], rax
 * 0000000140359FAB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140359FB5: add     rax, r13
 * 0000000140359FB8: mov     [rsi+908h], rax
 * 0000000140359FBF: movsxd  rax, dword ptr [r13+0]
 * 0000000140359FC3: mov     [rsi+910h], rax
 * 0000000140359FCA: mov     [rsi+918h], rcx
 * 0000000140359FD1: mov     rcx, rsi
 * 0000000140359FD4: mov     [rsi+8F8h], ebx
 * 0000000140359FDA: call    sub_14036B3BC
 * 0000000140359FDF: mov     rax, [rsp+0C70h+var_C18]
 * 0000000140359FE4: mov     eax, [rax+10h]
 * 0000000140359FE7: shl     eax, 4
 * 0000000140359FEA: jmp     loc_14035605A
 * 0000000140359FEF: mov     r8d, [r13+10h]
 * 0000000140359FF3: test    r8d, r8d
 * 0000000140359FF6: jnz     loc_14035A5C7
 * 0000000140359FFC: lea     rax, [r13+30h]
 * 000000014035A000: xor     r9d, r9d
 * 000000014035A003: mov     [rbp+0B70h+var_808], rax
 * 000000014035A00A: lea     rcx, [rbp+0B70h+var_810]
 * 000000014035A011: movzx   eax, word ptr [r13+28h]
 * 000000014035A016: xor     r8d, r8d
 * 000000014035A019: mov     [rbp+0B70h+var_810], ax
 * 000000014035A020: xor     edx, edx
 * 000000014035A022: mov     [rbp+0B70h+var_80E], ax
 * 000000014035A029: lea     rax, [rbp+0B70h+var_AC8]
 * 000000014035A030: mov     [rsp+0C70h+var_C38], rax
 * 000000014035A035: xor     eax, eax
 * 000000014035A037: mov     [rsp+0C70h+var_C40], rax
 * 000000014035A03C: mov     byte ptr [rsp+0C70h+var_C48], al
 * 000000014035A040: mov     rax, [rsi+510h]
 * 000000014035A047: mov     [rsp+0C70h+BugCheckParameter4], rax
 * 000000014035A04C: mov     rax, [rsi+1E8h]
 * 000000014035A053: call    KeGuardDispatchICall
 * 000000014035A058: xor     r15d, r15d
 * 000000014035A05B: test    eax, eax
 * 000000014035A05D: js      loc_140355323
 * 000000014035A063: mov     rax, [rbp+0B70h+var_AC8]
 * 000000014035A06A: mov     ecx, [rax+10h]
 * 000000014035A06D: lea     eax, [r15+10h]
 * 000000014035A071: test    al, cl
 * 000000014035A073: jnz     short loc_14035A081
 * 000000014035A075: mov     rcx, [rbp+0B70h+var_AC8]
 * 000000014035A07C: jmp     loc_140355E52
 * 000000014035A081: mov     rcx, [rsi+1E8h]
 * 000000014035A088: lea     r8, [rbp+0B70h+var_7DC]
 * 000000014035A08F: mov     rax, [rsi+200h]
 * 000000014035A096: lea     rdx, [rbp+0B70h+var_978]
 * 000000014035A09D: call    KeGuardDispatchICall
 * 000000014035A0A2: test    rax, rax
 * 000000014035A0A5: jz      short loc_14035A0C9
 * 000000014035A0A7: mov     rax, [rsi+1F8h]
 * 000000014035A0AE: mov     rcx, [rbp+0B70h+var_978]
 * 000000014035A0B5: call    KeGuardDispatchICall
 * 000000014035A0BA: test    rax, rax
 * 000000014035A0BD: jz      short loc_14035A0C9
 * 000000014035A0BF: mov     r14d, [rax+50h]
 * 000000014035A0C3: mov     [rbp+0B70h+var_BB0], r14d
 * 000000014035A0C7: jmp     short loc_14035A0CD
 * 000000014035A0C9: mov     r14d, [rbp+0B70h+var_BB0]
 * 000000014035A0CD: mov     rcx, [r13+18h]
 * 000000014035A0D1: lea     r8, [rbp+0B70h+var_7EC]
 * 000000014035A0D8: mov     rax, [rsi+200h]
 * 000000014035A0DF: lea     rdx, [rbp+0B70h+var_970]
 * 000000014035A0E6: call    KeGuardDispatchICall
 * 000000014035A0EB: test    rax, rax
 * 000000014035A0EE: jz      short loc_14035A10E
 * 000000014035A0F0: mov     rax, [rsi+1F8h]
 * 000000014035A0F7: mov     rcx, [rbp+0B70h+var_970]
 * 000000014035A0FE: call    KeGuardDispatchICall
 * 000000014035A103: test    rax, rax
 * 000000014035A106: jz      short loc_14035A10E
 * 000000014035A108: mov     ebx, [rax+50h]
 * 000000014035A10B: mov     [rbp+0B70h+var_B78], ebx
 * 000000014035A10E: test    dword ptr [rsi+990h], 40000000h
 * 000000014035A118: jnz     short loc_14035A131
 * 000000014035A11A: mov     rax, [rbp+0B70h+var_AC8]
 * 000000014035A121: add     rax, 70h ; 'p'
 * 000000014035A125: mov     [r13+8], rax
 * 000000014035A129: mov     dword ptr [r13+10h], 0E0h
 * 000000014035A131: mov     rcx, [rbp+0B70h+var_AC8]
 * 000000014035A138: xor     eax, eax
 * 000000014035A13A: mov     r10, [rbp+0B70h+var_978]
 * 000000014035A141: mov     dl, al
 * 000000014035A143: mov     r11, [rbp+0B70h+var_970]
 * 000000014035A14A: mov     r12d, r14d
 * 000000014035A14D: movzx   eax, dl
 * 000000014035A150: mov     r9, [rcx+rax*8+70h]
 * 000000014035A155: test    r14d, r14d
 * 000000014035A158: jz      short loc_14035A16F
 * 000000014035A15A: lea     rax, [r10-1]
 * 000000014035A15E: add     rax, r12
 * 000000014035A161: cmp     r9, r10
 * 000000014035A164: jb      short loc_14035A16F
 * 000000014035A166: cmp     r9, rax
 * 000000014035A169: jbe     loc_14035A257
 * 000000014035A16F: xor     r15d, r15d
 * 000000014035A172: mov     eax, ebx
 * 000000014035A174: test    ebx, ebx
 * 000000014035A176: jz      short loc_14035A18D
 * 000000014035A178: lea     r8, [r11-1]
 * 000000014035A17C: add     r8, rax
 * 000000014035A17F: cmp     r9, r11
 * 000000014035A182: jb      short loc_14035A18D
 * 000000014035A184: cmp     r9, r8
 * 000000014035A187: jbe     loc_14035A25A
 * 000000014035A18D: test    dword ptr [rsi+990h], 40000000h
 * 000000014035A197: mov     r10d, 1
 * 000000014035A19D: jz      short loc_14035A1EA
 * 000000014035A19F: mov     rcx, [rsi+0A80h]
 * 000000014035A1A6: lea     edx, [r10+2Fh]
 * 000000014035A1AA: lea     r8d, [r10+5]
 * 000000014035A1AE: mov     rax, [r13+0]
 * 000000014035A1B2: add     edx, 0FFFFFFF8h
 * 000000014035A1B5: mov     [rcx], rax
 * 000000014035A1B8: add     r13, 8
 * 000000014035A1BC: add     rcx, 8
 * 000000014035A1C0: sub     r8, r10
 * 000000014035A1C3: jnz     short loc_14035A1AE
 * 000000014035A1C5: test    edx, edx
 * 000000014035A1C7: jz      short loc_14035A1E3
 * 000000014035A1C9: mov     esi, 0FFFFFFFFh
 * 000000014035A1CE: mov     al, [r13+0]
 * 000000014035A1D2: add     r13, r10
 * 000000014035A1D5: mov     [rcx], al
 * 000000014035A1D7: add     rcx, r10
 * 000000014035A1DA: add     edx, esi
 * 000000014035A1DC: jnz     short loc_14035A1CE
 * 000000014035A1DE: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035A1E3: mov     r13, [rsi+0A80h]
 * 000000014035A1EA: mov     [r13+20h], r9
 * 000000014035A1EE: mov     rax, [rsi+590h]
 * 000000014035A1F5: mov     [rax], r13
 * 000000014035A1F8: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014035A1FF: xor     eax, eax
 * 000000014035A201: mov     rcx, [r13+8]
 * 000000014035A205: cmp     [rsi+8F8h], eax
 * 000000014035A20B: jnz     loc_140355323
 * 000000014035A211: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035A21B: add     rax, rsi
 * 000000014035A21E: mov     [rsi+900h], rax
 * 000000014035A225: mov     rax, 0B3B74BDEE4453415h
 * 000000014035A22F: add     rax, r13
 * 000000014035A232: mov     [rsi+908h], rax
 * 000000014035A239: movsxd  rax, dword ptr [r13+0]
 * 000000014035A23D: mov     [rsi+910h], rax
 * 000000014035A244: mov     [rsi+918h], rcx
 * 000000014035A24B: mov     [rsi+8F8h], r10d
 * 000000014035A252: jmp     loc_1403556FD
 * 000000014035A257: xor     r15d, r15d
 * 000000014035A25A: add     dl, 1
 * 000000014035A25D: cmp     dl, 1Ch
 * 000000014035A260: jb      loc_14035A14D
 * 000000014035A266: test    dword ptr [rsi+990h], 40000000h
 * 000000014035A270: jnz     loc_140355E52
 * 000000014035A276: mov     r14, [r13+8]
 * 000000014035A27A: mov     r9d, [r13+10h]
 * 000000014035A27E: mov     r10, r14
 * 000000014035A281: add     [rsi+828h], r9d
 * 000000014035A288: mov     rax, r14
 * 000000014035A28B: mov     ebx, [rsi+814h]
 * 000000014035A291: mov     r15, [rsi+818h]
 * 000000014035A298: lea     rcx, [r14+r9]
 * 000000014035A29C: cmp     r14, rcx
 * 000000014035A29F: jnb     short loc_14035A2B1
 * 000000014035A2A1: mov     edx, 40h ; '@'
 * 000000014035A2A6: prefetchnta byte ptr [rax]
 * 000000014035A2A9: add     rax, rdx
 * 000000014035A2AC: cmp     rax, rcx
 * 000000014035A2AF: jb      short loc_14035A2A6
 * 000000014035A2B1: mov     r11d, r9d
 * 000000014035A2B4: mov     r8, r15
 * 000000014035A2B7: shr     r11d, 7
 * 000000014035A2BB: test    r11d, r11d
 * 000000014035A2BE: jz      short loc_14035A333
 * 000000014035A2C0: mov     rdi, 7010008004002001h
 * 000000014035A2CA: mov     edx, 8
 * 000000014035A2CF: lea     esi, [rdx-7]
 * 000000014035A2D2: mov     rax, [r10]
 * 000000014035A2D5: mov     ecx, ebx
 * 000000014035A2D7: xor     rax, r8
 * 000000014035A2DA: mov     r8, [r10+8]
 * 000000014035A2DE: rol     rax, cl
 * 000000014035A2E1: add     r10, 10h
 * 000000014035A2E5: xor     r8, rax
 * 000000014035A2E8: rol     r8, cl
 * 000000014035A2EB: sub     rdx, rsi
 * 000000014035A2EE: jnz     short loc_14035A2D2
 * 000000014035A2F0: mov     rcx, r10
 * 000000014035A2F3: sub     rcx, r14
 * 000000014035A2F6: xor     rcx, r15
 * 000000014035A2F9: mov     rax, rcx
 * 000000014035A2FC: rol     rax, 11h
 * 000000014035A300: xor     rcx, rax
 * 000000014035A303: mov     rax, rdi
 * 000000014035A306: mul     rcx
 * 000000014035A309: xor     ebx, edx
 * 000000014035A30B: mov     [rbp+0B70h+var_5D0], rdx
 * 000000014035A312: xor     ebx, eax
 * 000000014035A314: mov     rax, rsi
 * 000000014035A317: and     ebx, 3Fh
 * 000000014035A31A: cmovz   ebx, eax
 * 000000014035A31D: mov     eax, 0FFFFFFFFh
 * 000000014035A322: add     r11d, eax
 * 000000014035A325: jnz     short loc_14035A2CA
 * 000000014035A327: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035A32C: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035A333: and     r9d, 7Fh
 * 000000014035A337: mov     r11d, 1
 * 000000014035A33D: cmp     r9d, 8
 * 000000014035A341: jb      short loc_14035A35F
 * 000000014035A343: mov     edx, r9d
 * 000000014035A346: shr     rdx, 3
 * 000000014035A34A: xor     r8, [r10]
 * 000000014035A34D: mov     ecx, ebx
 * 000000014035A34F: rol     r8, cl
 * 000000014035A352: add     r10, 8
 * 000000014035A356: add     r9d, 0FFFFFFF8h
 * 000000014035A35A: sub     rdx, r11
 * 000000014035A35D: jnz     short loc_14035A34A
 * 000000014035A35F: test    r9d, r9d
 * 000000014035A362: jz      short loc_14035A382
 * 000000014035A364: mov     esi, 0FFFFFFFFh
 * 000000014035A369: movzx   eax, byte ptr [r10]
 * 000000014035A36D: mov     ecx, ebx
 * 000000014035A36F: xor     r8, rax
 * 000000014035A372: add     r10, r11
 * 000000014035A375: rol     r8, cl
 * 000000014035A378: add     r9d, esi
 * 000000014035A37B: jnz     short loc_14035A369
 * 000000014035A37D: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035A382: mov     rax, r8
 * 000000014035A385: jmp     short loc_14035A38A
 * 000000014035A387: xor     r8d, eax
 * 000000014035A38A: shr     rax, 1Fh
 * 000000014035A38E: test    rax, rax
 * 000000014035A391: jnz     short loc_14035A387
 * 000000014035A393: btr     r8d, 1Fh
 * 000000014035A398: mov     [r13+14h], r8d
 * 000000014035A39C: mov     rax, [rbp+0B70h+var_AC8]
 * 000000014035A3A3: mov     r14, [rax+50h]
 * 000000014035A3A7: xor     eax, eax
 * 000000014035A3A9: mov     r10d, eax
 * 000000014035A3AC: test    r14, r14
 * 000000014035A3AF: jz      short loc_14035A42C
 * 000000014035A3B1: mov     r10d, [r14]
 * 000000014035A3B4: mov     r8b, al
 * 000000014035A3B7: lea     r9d, [r10-8]
 * 000000014035A3BB: shr     r9d, 3
 * 000000014035A3BF: test    r9d, r9d
 * 000000014035A3C2: jz      short loc_14035A42C
 * 000000014035A3C4: mov     r11, [rbp+0B70h+var_978]
 * 000000014035A3CB: mov     rbx, [rbp+0B70h+var_970]
 * 000000014035A3D2: mov     r15d, [rbp+0B70h+var_B78]
 * 000000014035A3D6: movzx   eax, r8b
 * 000000014035A3DA: mov     rcx, [r14+rax*8+8]
 * 000000014035A3DF: test    rcx, rcx
 * 000000014035A3E2: jz      short loc_14035A41F
 * 000000014035A3E4: test    r12, r12
 * 000000014035A3E7: jz      short loc_14035A3FA
 * 000000014035A3E9: lea     rax, [r11-1]
 * 000000014035A3ED: add     rax, r12
 * 000000014035A3F0: cmp     rcx, r11
 * 000000014035A3F3: jb      short loc_14035A3FA
 * 000000014035A3F5: cmp     rcx, rax
 * 000000014035A3F8: jbe     short loc_14035A41F
 * 000000014035A3FA: mov     rax, r15
 * 000000014035A3FD: test    r15d, r15d
 * 000000014035A400: jz      loc_14035A536
 * 000000014035A406: lea     rdx, [rbx-1]
 * 000000014035A40A: add     rdx, rax
 * 000000014035A40D: cmp     rcx, rbx
 * 000000014035A410: jb      loc_14035A536
 * 000000014035A416: cmp     rcx, rdx
 * 000000014035A419: ja      loc_14035A536
 * 000000014035A41F: add     r8b, 1
 * 000000014035A423: movzx   eax, r8b
 * 000000014035A427: cmp     eax, r9d
 * 000000014035A42A: jb      short loc_14035A3D6
 * 000000014035A42C: add     [rsi+828h], r10d
 * 000000014035A433: mov     r9, r14
 * 000000014035A436: mov     r11d, [rsi+814h]
 * 000000014035A43D: mov     rax, r14
 * 000000014035A440: mov     r15, [rsi+818h]
 * 000000014035A447: mov     ecx, r10d
 * 000000014035A44A: add     rcx, r14
 * 000000014035A44D: cmp     r14, rcx
 * 000000014035A450: jnb     short loc_14035A462
 * 000000014035A452: mov     edx, 40h ; '@'
 * 000000014035A457: prefetchnta byte ptr [rax]
 * 000000014035A45A: add     rax, rdx
 * 000000014035A45D: cmp     rax, rcx
 * 000000014035A460: jb      short loc_14035A457
 * 000000014035A462: mov     ebx, r10d
 * 000000014035A465: mov     r8, r15
 * 000000014035A468: shr     ebx, 7
 * 000000014035A46B: mov     r12d, 1
 * 000000014035A471: test    ebx, ebx
 * 000000014035A473: jz      short loc_14035A4DF
 * 000000014035A475: mov     rsi, 7010008004002001h
 * 000000014035A47F: mov     edx, 8
 * 000000014035A484: mov     rax, [r9]
 * 000000014035A487: mov     ecx, r11d
 * 000000014035A48A: xor     rax, r8
 * 000000014035A48D: mov     r8, [r9+8]
 * 000000014035A491: rol     rax, cl
 * 000000014035A494: add     r9, 10h
 * 000000014035A498: xor     r8, rax
 * 000000014035A49B: rol     r8, cl
 * 000000014035A49E: sub     rdx, r12
 * 000000014035A4A1: jnz     short loc_14035A484
 * 000000014035A4A3: mov     rcx, r9
 * 000000014035A4A6: sub     rcx, r14
 * 000000014035A4A9: xor     rcx, r15
 * 000000014035A4AC: mov     rax, rcx
 * 000000014035A4AF: rol     rax, 11h
 * 000000014035A4B3: xor     rcx, rax
 * 000000014035A4B6: mov     rax, rsi
 * 000000014035A4B9: mul     rcx
 * 000000014035A4BC: xor     r11d, edx
 * 000000014035A4BF: mov     [rbp+0B70h+var_5C8], rdx
 * 000000014035A4C6: xor     r11d, eax
 * 000000014035A4C9: mov     eax, 0FFFFFFFFh
 * 000000014035A4CE: and     r11d, 3Fh
 * 000000014035A4D2: cmovz   r11d, r12d
 * 000000014035A4D6: add     ebx, eax
 * 000000014035A4D8: jnz     short loc_14035A47F
 * 000000014035A4DA: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035A4DF: and     r10d, 7Fh
 * 000000014035A4E3: cmp     r10d, 8
 * 000000014035A4E7: jb      short loc_14035A506
 * 000000014035A4E9: mov     edx, r10d
 * 000000014035A4EC: shr     rdx, 3
 * 000000014035A4F0: xor     r8, [r9]
 * 000000014035A4F3: mov     ecx, r11d
 * 000000014035A4F6: rol     r8, cl
 * 000000014035A4F9: add     r9, 8
 * 000000014035A4FD: add     r10d, 0FFFFFFF8h
 * 000000014035A501: sub     rdx, r12
 * 000000014035A504: jnz     short loc_14035A4F0
 * 000000014035A506: test    r10d, r10d
 * 000000014035A509: jz      short loc_14035A52A
 * 000000014035A50B: mov     esi, 0FFFFFFFFh
 * 000000014035A510: movzx   eax, byte ptr [r9]
 * 000000014035A514: mov     ecx, r11d
 * 000000014035A517: xor     r8, rax
 * 000000014035A51A: add     r9, r12
 * 000000014035A51D: rol     r8, cl
 * 000000014035A520: add     r10d, esi
 * 000000014035A523: jnz     short loc_14035A510
 * 000000014035A525: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035A52A: mov     rax, r8
 * 000000014035A52D: shr     rax, 1Fh
 * 000000014035A531: xor     r15d, r15d
 * 000000014035A534: jmp     short loc_14035A5B4
 * 000000014035A536: mov     [r13+20h], rcx
 * 000000014035A53A: mov     rax, [rsi+590h]
 * 000000014035A541: mov     [rax], r13
 * 000000014035A544: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014035A54B: xor     eax, eax
 * 000000014035A54D: cmp     [rsi+8F8h], eax
 * 000000014035A553: jnz     loc_140355320
 * 000000014035A559: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035A563: add     rax, rsi
 * 000000014035A566: mov     [rsi+900h], rax
 * 000000014035A56D: mov     rax, 0B3B74BDEE4453415h
 * 000000014035A577: add     rax, r13
 * 000000014035A57A: mov     [rsi+908h], rax
 * 000000014035A581: movsxd  rax, dword ptr [r13+0]
 * 000000014035A585: mov     [rsi+910h], rax
 * 000000014035A58C: mov     [rsi+918h], r14
 * 000000014035A593: mov     eax, 1
 * 000000014035A598: mov     [rsi+8F8h], eax
 * 000000014035A59E: xor     edx, edx
 * 000000014035A5A0: mov     rcx, rsi
 * 000000014035A5A3: call    sub_14036B3BC
 * 000000014035A5A8: jmp     loc_140355320
 * 000000014035A5AD: xor     r8d, eax
 * 000000014035A5B0: shr     rax, 1Fh
 * 000000014035A5B4: test    rax, rax
 * 000000014035A5B7: jnz     short loc_14035A5AD
 * 000000014035A5B9: btr     r8d, 1Fh
 * 000000014035A5BE: mov     [r13+2Ch], r8d
 * 000000014035A5C2: jmp     loc_140355323
 * 000000014035A5C7: mov     r14, [r13+8]
 * 000000014035A5CB: add     [rsi+828h], r8d
 * 000000014035A5D2: mov     r9, r14
 * 000000014035A5D5: mov     r11d, [rsi+814h]
 * 000000014035A5DC: mov     rax, r14
 * 000000014035A5DF: mov     r15, [rsi+818h]
 * 000000014035A5E6: lea     rcx, [r14+r8]
 * 000000014035A5EA: cmp     r14, rcx
 * 000000014035A5ED: jnb     short loc_14035A5FF
 * 000000014035A5EF: mov     edx, 40h ; '@'
 * 000000014035A5F4: prefetchnta byte ptr [rax]
 * 000000014035A5F7: add     rax, rdx
 * 000000014035A5FA: cmp     rax, rcx
 * 000000014035A5FD: jb      short loc_14035A5F4
 * 000000014035A5FF: mov     r10d, r8d
 * 000000014035A602: mov     rbx, r15
 * 000000014035A605: shr     r10d, 7
 * 000000014035A609: mov     r12d, 1
 * 000000014035A60F: mov     r13d, 0FFFFFFFFh
 * 000000014035A615: test    r10d, r10d
 * 000000014035A618: jz      short loc_14035A680
 * 000000014035A61A: mov     rsi, 7010008004002001h
 * 000000014035A624: mov     edx, 8
 * 000000014035A629: mov     rax, [r9]
 * 000000014035A62C: mov     ecx, r11d
 * 000000014035A62F: xor     rax, rbx
 * 000000014035A632: mov     rbx, [r9+8]
 * 000000014035A636: rol     rax, cl
 * 000000014035A639: add     r9, 10h
 * 000000014035A63D: xor     rbx, rax
 * 000000014035A640: rol     rbx, cl
 * 000000014035A643: sub     rdx, r12
 * 000000014035A646: jnz     short loc_14035A629
 * 000000014035A648: mov     rcx, r9
 * 000000014035A64B: sub     rcx, r14
 * 000000014035A64E: xor     rcx, r15
 * 000000014035A651: mov     rax, rcx
 * 000000014035A654: rol     rax, 11h
 * 000000014035A658: xor     rcx, rax
 * 000000014035A65B: mov     rax, rsi
 * 000000014035A65E: mul     rcx
 * 000000014035A661: xor     r11d, edx
 * 000000014035A664: mov     [rbp+0B70h+var_5C0], rdx
 * 000000014035A66B: xor     r11d, eax
 * 000000014035A66E: and     r11d, 3Fh
 * 000000014035A672: cmovz   r11d, r12d
 * 000000014035A676: add     r10d, r13d
 * 000000014035A679: jnz     short loc_14035A624
 * 000000014035A67B: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035A680: and     r8d, 7Fh
 * 000000014035A684: cmp     r8d, 8
 * 000000014035A688: jb      short loc_14035A6A7
 * 000000014035A68A: mov     edx, r8d
 * 000000014035A68D: shr     rdx, 3
 * 000000014035A691: xor     rbx, [r9]
 * 000000014035A694: mov     ecx, r11d
 * 000000014035A697: rol     rbx, cl
 * 000000014035A69A: add     r9, 8
 * 000000014035A69E: add     r8d, 0FFFFFFF8h
 * 000000014035A6A2: sub     rdx, r12
 * 000000014035A6A5: jnz     short loc_14035A691
 * 000000014035A6A7: test    r8d, r8d
 * 000000014035A6AA: jz      short loc_14035A6C1
 * 000000014035A6AC: movzx   eax, byte ptr [r9]
 * 000000014035A6B0: mov     ecx, r11d
 * 000000014035A6B3: xor     rbx, rax
 * 000000014035A6B6: add     r9, r12
 * 000000014035A6B9: rol     rbx, cl
 * 000000014035A6BC: add     r8d, r13d
 * 000000014035A6BF: jnz     short loc_14035A6AC
 * 000000014035A6C1: mov     rax, rbx
 * 000000014035A6C4: jmp     short loc_14035A6C8
 * 000000014035A6C6: xor     ebx, eax
 * 000000014035A6C8: shr     rax, 1Fh
 * 000000014035A6CC: test    rax, rax
 * 000000014035A6CF: jnz     short loc_14035A6C6
 * 000000014035A6D1: mov     r12, [rsp+0C70h+var_C18]
 * 000000014035A6D6: btr     ebx, 1Fh
 * 000000014035A6DA: mov     r13d, eax
 * 000000014035A6DD: cmp     ebx, [r12+14h]
 * 000000014035A6E2: jz      loc_14035A7CD
 * 000000014035A6E8: cmp     [r12], eax
 * 000000014035A6EC: jnz     short loc_14035A6FA
 * 000000014035A6EE: cmp     [r12+18h], eax
 * 000000014035A6F3: lea     ecx, [rax+1]
 * 000000014035A6F6: cmovnz  r13d, ecx
 * 000000014035A6FA: mov     ecx, [r12+10h]
 * 000000014035A6FF: mov     rdx, [r12+8]
 * 000000014035A704: test    rcx, rcx
 * 000000014035A707: jz      loc_14035A8FD
 * 000000014035A70D: mov     eax, [rsi+994h]
 * 000000014035A713: mov     r8d, 40h ; '@'
 * 000000014035A719: test    r8b, al
 * 000000014035A71C: jz      loc_14035A8FD
 * 000000014035A722: mov     r12, cr8
 * 000000014035A726: lea     eax, [r8-3Eh]
 * 000000014035A72A: mov     cr8, rax
 * 000000014035A72E: mov     r14, rdx
 * 000000014035A731: lea     rax, [rcx-1]
 * 000000014035A735: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035A73C: add     rax, rdx
 * 000000014035A73F: or      rax, 0FFFh
 * 000000014035A745: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035A74A: lea     rax, [r14-1]
 * 000000014035A74E: mov     [rbp+0B70h+arg_8], rax
 * 000000014035A755: movzx   r15d, r12b
 * 000000014035A759: mov     rax, [rsi+468h]
 * 000000014035A760: xor     edx, edx
 * 000000014035A762: mov     rcx, r14
 * 000000014035A765: call    KeGuardDispatchICall
 * 000000014035A76A: cmp     eax, 0C000022Dh
 * 000000014035A76F: jnz     short loc_14035A79C
 * 000000014035A771: test    r13d, r13d
 * 000000014035A774: jnz     loc_14035A8F4
 * 000000014035A77A: lea     eax, [r13+1]
 * 000000014035A77E: cmp     r12b, al
 * 000000014035A781: ja      short loc_14035A7A4
 * 000000014035A783: movzx   r15d, r12b
 * 000000014035A787: mov     cr8, r15
 * 000000014035A78B: mov     al, [r14]
 * 000000014035A78E: mov     rax, cr8
 * 000000014035A792: lea     eax, [r13+2]
 * 000000014035A796: mov     cr8, rax
 * 000000014035A79A: jmp     short loc_14035A759
 * 000000014035A79C: test    eax, eax
 * 000000014035A79E: js      loc_14035A8F4
 * 000000014035A7A4: mov     rax, [rbp+0B70h+arg_8]
 * 000000014035A7AB: mov     ecx, 1000h
 * 000000014035A7B0: add     rax, rcx
 * 000000014035A7B3: add     r14, rcx
 * 000000014035A7B6: mov     [rbp+0B70h+arg_8], rax
 * 000000014035A7BD: cmp     rax, [rsp+0C70h+var_BF8]
 * 000000014035A7C2: jnz     short loc_14035A755
 * 000000014035A7C4: mov     cr8, r15
 * 000000014035A7C8: mov     r12, [rsp+0C70h+var_C18]
 * 000000014035A7CD: mov     r13d, 1
 * 000000014035A7D3: mov     rax, [r12+8]
 * 000000014035A7D8: sub     rax, 70h ; 'p'
 * 000000014035A7DC: mov     [rbp+0B70h+var_AC8], rax
 * 000000014035A7E3: mov     r15, [rax+50h]
 * 000000014035A7E7: xor     eax, eax
 * 000000014035A7E9: mov     r9d, eax
 * 000000014035A7EC: test    r15, r15
 * 000000014035A7EF: jz      short loc_14035A7F4
 * 000000014035A7F1: mov     r9d, [r15]
 * 000000014035A7F4: add     [rsi+828h], r9d
 * 000000014035A7FB: mov     r10, r15
 * 000000014035A7FE: mov     r11d, [rsi+814h]
 * 000000014035A805: mov     rax, r15
 * 000000014035A808: mov     r14, [rsi+818h]
 * 000000014035A80F: mov     ecx, r9d
 * 000000014035A812: add     rcx, r15
 * 000000014035A815: cmp     r15, rcx
 * 000000014035A818: jnb     short loc_14035A82A
 * 000000014035A81A: mov     edx, 40h ; '@'
 * 000000014035A81F: prefetchnta byte ptr [rax]
 * 000000014035A822: add     rax, rdx
 * 000000014035A825: cmp     rax, rcx
 * 000000014035A828: jb      short loc_14035A81F
 * 000000014035A82A: mov     ebx, r9d
 * 000000014035A82D: mov     r8, r14
 * 000000014035A830: shr     ebx, 7
 * 000000014035A833: test    ebx, ebx
 * 000000014035A835: jz      short loc_14035A8A1
 * 000000014035A837: mov     rsi, 7010008004002001h
 * 000000014035A841: mov     edx, 8
 * 000000014035A846: mov     rax, [r10]
 * 000000014035A849: mov     ecx, r11d
 * 000000014035A84C: xor     rax, r8
 * 000000014035A84F: mov     r8, [r10+8]
 * 000000014035A853: rol     rax, cl
 * 000000014035A856: add     r10, 10h
 * 000000014035A85A: xor     r8, rax
 * 000000014035A85D: rol     r8, cl
 * 000000014035A860: sub     rdx, r13
 * 000000014035A863: jnz     short loc_14035A846
 * 000000014035A865: mov     rcx, r10
 * 000000014035A868: sub     rcx, r15
 * 000000014035A86B: xor     rcx, r14
 * 000000014035A86E: mov     rax, rcx
 * 000000014035A871: rol     rax, 11h
 * 000000014035A875: xor     rcx, rax
 * 000000014035A878: mov     rax, rsi
 * 000000014035A87B: mul     rcx
 * 000000014035A87E: xor     r11d, edx
 * 000000014035A881: mov     [rbp+0B70h+var_5B8], rdx
 * 000000014035A888: xor     r11d, eax
 * 000000014035A88B: mov     eax, 0FFFFFFFFh
 * 000000014035A890: and     r11d, 3Fh
 * 000000014035A894: cmovz   r11d, r13d
 * 000000014035A898: add     ebx, eax
 * 000000014035A89A: jnz     short loc_14035A841
 * 000000014035A89C: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035A8A1: and     r9d, 7Fh
 * 000000014035A8A5: cmp     r9d, 8
 * 000000014035A8A9: jb      short loc_14035A8C8
 * 000000014035A8AB: mov     edx, r9d
 * 000000014035A8AE: shr     rdx, 3
 * 000000014035A8B2: xor     r8, [r10]
 * 000000014035A8B5: mov     ecx, r11d
 * 000000014035A8B8: rol     r8, cl
 * 000000014035A8BB: add     r10, 8
 * 000000014035A8BF: add     r9d, 0FFFFFFF8h
 * 000000014035A8C3: sub     rdx, r13
 * 000000014035A8C6: jnz     short loc_14035A8B2
 * 000000014035A8C8: test    r9d, r9d
 * 000000014035A8CB: jz      short loc_14035A8EC
 * 000000014035A8CD: mov     esi, 0FFFFFFFFh
 * 000000014035A8D2: movzx   eax, byte ptr [r10]
 * 000000014035A8D6: mov     ecx, r11d
 * 000000014035A8D9: xor     r8, rax
 * 000000014035A8DC: add     r10, r13
 * 000000014035A8DF: rol     r8, cl
 * 000000014035A8E2: add     r9d, esi
 * 000000014035A8E5: jnz     short loc_14035A8D2
 * 000000014035A8E7: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035A8EC: mov     rax, r8
 * 000000014035A8EF: jmp     loc_14035A988
 * 000000014035A8F4: mov     cr8, r15
 * 000000014035A8F8: mov     r12, [rsp+0C70h+var_C18]
 * 000000014035A8FD: mov     eax, [rsi+8F8h]
 * 000000014035A903: mov     edx, [r12+14h]
 * 000000014035A908: test    eax, eax
 * 000000014035A90A: jnz     short loc_14035A922
 * 000000014035A90C: mov     rax, [rsi+590h]
 * 000000014035A913: mov     ecx, ebx
 * 000000014035A915: xor     rcx, rdx
 * 000000014035A918: mov     [rax+18h], rcx
 * 000000014035A91C: mov     eax, [rsi+8F8h]
 * 000000014035A922: mov     rcx, [r12+8]
 * 000000014035A927: mov     r13d, 1
 * 000000014035A92D: test    eax, eax
 * 000000014035A92F: jnz     loc_14035A7D3
 * 000000014035A935: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035A93F: xor     edx, edx
 * 000000014035A941: add     rax, rsi
 * 000000014035A944: mov     [rsi+900h], rax
 * 000000014035A94B: mov     rax, 0B3B74BDEE4453415h
 * 000000014035A955: add     rax, r12
 * 000000014035A958: mov     [rsi+908h], rax
 * 000000014035A95F: movsxd  rax, dword ptr [r12]
 * 000000014035A963: mov     [rsi+910h], rax
 * 000000014035A96A: mov     [rsi+918h], rcx
 * 000000014035A971: mov     rcx, rsi
 * 000000014035A974: mov     [rsi+8F8h], r13d
 * 000000014035A97B: call    sub_14036B3BC
 * 000000014035A980: jmp     loc_14035A7D3
 * 000000014035A985: xor     r8d, eax
 * 000000014035A988: shr     rax, 1Fh
 * 000000014035A98C: test    rax, rax
 * 000000014035A98F: jnz     short loc_14035A985
 * 000000014035A991: mov     edx, [r12+2Ch]
 * 000000014035A996: btr     r8d, 1Fh
 * 000000014035A99B: cmp     r8d, edx
 * 000000014035A99E: jz      loc_140355320
 * 000000014035A9A4: mov     eax, [rsi+8F8h]
 * 000000014035A9AA: test    eax, eax
 * 000000014035A9AC: jnz     loc_140355320
 * 000000014035A9B2: mov     rax, [rsi+590h]
 * 000000014035A9B9: mov     ecx, r8d
 * 000000014035A9BC: xor     rcx, rdx
 * 000000014035A9BF: mov     [rax+18h], rcx
 * 000000014035A9C3: mov     eax, [rsi+8F8h]
 * 000000014035A9C9: test    eax, eax
 * 000000014035A9CB: jnz     loc_140355320
 * 000000014035A9D1: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035A9DB: add     rax, rsi
 * 000000014035A9DE: mov     [rsi+900h], rax
 * 000000014035A9E5: mov     rax, 0B3B74BDEE4453415h
 * 000000014035A9EF: add     rax, r12
 * 000000014035A9F2: mov     [rsi+908h], rax
 * 000000014035A9F9: movsxd  rax, dword ptr [r12]
 * 000000014035A9FD: mov     [rsi+910h], rax
 * 000000014035AA04: mov     [rsi+918h], r15
 * 000000014035AA0B: mov     [rsi+8F8h], r13d
 * 000000014035AA12: jmp     loc_14035A59E
 * 000000014035AA17: cmp     r14d, 25h ; '%'
 * 000000014035AA1B: jg      loc_14035D041
 * 000000014035AA21: jz      loc_14035CFCB
 * 000000014035AA27: mov     ecx, r14d
 * 000000014035AA2A: sub     ecx, 1Dh
 * 000000014035AA2D: jz      loc_14035CB7D
 * 000000014035AA33: sub     ecx, 1
 * 000000014035AA36: jz      loc_14035C402
 * 000000014035AA3C: sub     ecx, 1
 * 000000014035AA3F: jz      loc_14035B721
 * 000000014035AA45: sub     ecx, 1
 * 000000014035AA48: jz      loc_14035B711
 * 000000014035AA4E: sub     ecx, 1
 * 000000014035AA51: jz      loc_14035B701
 * 000000014035AA57: sub     ecx, 2
 * 000000014035AA5A: jz      loc_14035AF72
 * 000000014035AA60: cmp     ecx, 1
 * 000000014035AA63: jnz     loc_14035F7E8
 * 000000014035AA69: mov     r14, [r13+8]
 * 000000014035AA6D: mov     r8d, [r13+10h]
 * 000000014035AA71: mov     r9, r14
 * 000000014035AA74: add     [rsi+828h], r8d
 * 000000014035AA7B: mov     rax, r14
 * 000000014035AA7E: mov     r10d, [rsi+814h]
 * 000000014035AA85: mov     r15, [rsi+818h]
 * 000000014035AA8C: lea     rcx, [r14+r8]
 * 000000014035AA90: cmp     r14, rcx
 * 000000014035AA93: jnb     short loc_14035AAA6
 * 000000014035AA95: mov     r11d, 40h ; '@'
 * 000000014035AA9B: prefetchnta byte ptr [rax]
 * 000000014035AA9E: add     rax, r11
 * 000000014035AAA1: cmp     rax, rcx
 * 000000014035AAA4: jb      short loc_14035AA9B
 * 000000014035AAA6: mov     r11d, r8d
 * 000000014035AAA9: mov     rbx, r15
 * 000000014035AAAC: shr     r11d, 7
 * 000000014035AAB0: mov     r12d, 0FFFFFFFFh
 * 000000014035AAB6: test    r11d, r11d
 * 000000014035AAB9: jz      short loc_14035AB27
 * 000000014035AABB: mov     rdi, 7010008004002001h
 * 000000014035AAC5: mov     eax, 8
 * 000000014035AACA: xor     rbx, [r9]
 * 000000014035AACD: mov     ecx, r10d
 * 000000014035AAD0: rol     rbx, cl
 * 000000014035AAD3: xor     rbx, [r9+8]
 * 000000014035AAD7: add     r9, 10h
 * 000000014035AADB: rol     rbx, cl
 * 000000014035AADE: sub     rax, rdx
 * 000000014035AAE1: jnz     short loc_14035AACA
 * 000000014035AAE3: mov     rcx, r9
 * 000000014035AAE6: sub     rcx, r14
 * 000000014035AAE9: xor     rcx, r15
 * 000000014035AAEC: mov     rax, rcx
 * 000000014035AAEF: rol     rax, 11h
 * 000000014035AAF3: xor     rcx, rax
 * 000000014035AAF6: mov     rax, rdi
 * 000000014035AAF9: mul     rcx
 * 000000014035AAFC: xor     r10d, edx
 * 000000014035AAFF: mov     [rbp+0B70h+var_5B0], rdx
 * 000000014035AB06: xor     r10d, eax
 * 000000014035AB09: mov     edx, 1
 * 000000014035AB0E: and     r10d, 3Fh
 * 000000014035AB12: cmovz   r10d, edx
 * 000000014035AB16: add     r11d, r12d
 * 000000014035AB19: jnz     short loc_14035AAC5
 * 000000014035AB1B: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035AB20: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035AB27: and     r8d, 7Fh
 * 000000014035AB2B: cmp     r8d, 8
 * 000000014035AB2F: jb      short loc_14035AB4E
 * 000000014035AB31: mov     eax, r8d
 * 000000014035AB34: shr     rax, 3
 * 000000014035AB38: xor     rbx, [r9]
 * 000000014035AB3B: mov     ecx, r10d
 * 000000014035AB3E: rol     rbx, cl
 * 000000014035AB41: add     r9, 8
 * 000000014035AB45: add     r8d, 0FFFFFFF8h
 * 000000014035AB49: sub     rax, rdx
 * 000000014035AB4C: jnz     short loc_14035AB38
 * 000000014035AB4E: test    r8d, r8d
 * 000000014035AB51: jz      short loc_14035AB68
 * 000000014035AB53: movzx   eax, byte ptr [r9]
 * 000000014035AB57: mov     ecx, r10d
 * 000000014035AB5A: xor     rbx, rax
 * 000000014035AB5D: add     r9, rdx
 * 000000014035AB60: rol     rbx, cl
 * 000000014035AB63: add     r8d, r12d
 * 000000014035AB66: jnz     short loc_14035AB53
 * 000000014035AB68: mov     rax, rbx
 * 000000014035AB6B: jmp     short loc_14035AB6F
 * 000000014035AB6D: xor     ebx, eax
 * 000000014035AB6F: shr     rax, 1Fh
 * 000000014035AB73: test    rax, rax
 * 000000014035AB76: jnz     short loc_14035AB6D
 * 000000014035AB78: btr     ebx, 1Fh
 * 000000014035AB7C: mov     r12d, eax
 * 000000014035AB7F: cmp     ebx, [r13+14h]
 * 000000014035AB83: jz      loc_14035ACE6
 * 000000014035AB89: cmp     [r13+0], eax
 * 000000014035AB8D: jnz     short loc_14035AB97
 * 000000014035AB8F: cmp     [r13+18h], eax
 * 000000014035AB93: cmovnz  r12d, edx
 * 000000014035AB97: mov     ecx, [r13+10h]
 * 000000014035AB9B: mov     rdx, [r13+8]
 * 000000014035AB9F: test    rcx, rcx
 * 000000014035ABA2: jz      loc_14035AC6B
 * 000000014035ABA8: mov     eax, [rsi+994h]
 * 000000014035ABAE: mov     r8d, 40h ; '@'
 * 000000014035ABB4: test    r8b, al
 * 000000014035ABB7: jz      loc_14035AC6B
 * 000000014035ABBD: mov     r13, cr8
 * 000000014035ABC1: lea     eax, [r8-3Eh]
 * 000000014035ABC5: mov     cr8, rax
 * 000000014035ABC9: mov     r14, rdx
 * 000000014035ABCC: lea     rax, [rcx-1]
 * 000000014035ABD0: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035ABD7: add     rax, rdx
 * 000000014035ABDA: or      rax, 0FFFh
 * 000000014035ABE0: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035ABE5: lea     rax, [r14-1]
 * 000000014035ABE9: mov     [rbp+0B70h+arg_8], rax
 * 000000014035ABF0: movzx   r15d, r13b
 * 000000014035ABF4: mov     rax, [rsi+468h]
 * 000000014035ABFB: xor     edx, edx
 * 000000014035ABFD: mov     rcx, r14
 * 000000014035AC00: call    KeGuardDispatchICall
 * 000000014035AC05: cmp     eax, 0C000022Dh
 * 000000014035AC0A: jnz     short loc_14035AC35
 * 000000014035AC0C: test    r12d, r12d
 * 000000014035AC0F: jnz     short loc_14035AC62
 * 000000014035AC11: lea     eax, [r12+1]
 * 000000014035AC16: cmp     r13b, al
 * 000000014035AC19: ja      short loc_14035AC39
 * 000000014035AC1B: movzx   r15d, r13b
 * 000000014035AC1F: mov     cr8, r15
 * 000000014035AC23: mov     al, [r14]
 * 000000014035AC26: mov     rax, cr8
 * 000000014035AC2A: lea     eax, [r12+2]
 * 000000014035AC2F: mov     cr8, rax
 * 000000014035AC33: jmp     short loc_14035ABF4
 * 000000014035AC35: test    eax, eax
 * 000000014035AC37: js      short loc_14035AC62
 * 000000014035AC39: mov     rax, [rbp+0B70h+arg_8]
 * 000000014035AC40: mov     ecx, 1000h
 * 000000014035AC45: add     rax, rcx
 * 000000014035AC48: add     r14, rcx
 * 000000014035AC4B: mov     [rbp+0B70h+arg_8], rax
 * 000000014035AC52: cmp     rax, [rsp+0C70h+var_BF8]
 * 000000014035AC57: jnz     short loc_14035ABF0
 * 000000014035AC59: mov     cr8, r15
 * 000000014035AC5D: jmp     loc_14035ACE6
 * 000000014035AC62: mov     cr8, r15
 * 000000014035AC66: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035AC6B: mov     eax, [rsi+8F8h]
 * 000000014035AC71: xor     edx, edx
 * 000000014035AC73: mov     ecx, [r13+14h]
 * 000000014035AC77: test    eax, eax
 * 000000014035AC79: jnz     short loc_14035AC91
 * 000000014035AC7B: mov     eax, ebx
 * 000000014035AC7D: xor     rcx, rax
 * 000000014035AC80: mov     rax, [rsi+590h]
 * 000000014035AC87: mov     [rax+18h], rcx
 * 000000014035AC8B: mov     eax, [rsi+8F8h]
 * 000000014035AC91: mov     rcx, [r13+8]
 * 000000014035AC95: test    eax, eax
 * 000000014035AC97: jnz     short loc_14035ACE6
 * 000000014035AC99: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035ACA3: add     rax, rsi
 * 000000014035ACA6: mov     [rsi+900h], rax
 * 000000014035ACAD: mov     rax, 0B3B74BDEE4453415h
 * 000000014035ACB7: add     rax, r13
 * 000000014035ACBA: mov     [rsi+908h], rax
 * 000000014035ACC1: movsxd  rax, dword ptr [r13+0]
 * 000000014035ACC5: mov     [rsi+910h], rax
 * 000000014035ACCC: mov     eax, 1
 * 000000014035ACD1: mov     [rsi+918h], rcx
 * 000000014035ACD8: mov     rcx, rsi
 * 000000014035ACDB: mov     [rsi+8F8h], eax
 * 000000014035ACE1: call    sub_14036B3BC
 * 000000014035ACE6: mov     rcx, [rsi+540h]
 * 000000014035ACED: mov     r14, cr8
 * 000000014035ACF1: mov     eax, 0Fh
 * 000000014035ACF6: mov     cr8, rax
 * 000000014035ACFA: mov     rax, [rsi+150h]
 * 000000014035AD01: call    KeGuardDispatchICall
 * 000000014035AD06: mov     rax, [rsi+610h]
 * 000000014035AD0D: mov     r12, [rsp+0C70h+var_C18]
 * 000000014035AD12: mov     rcx, [rax]
 * 000000014035AD15: mov     eax, [rcx]
 * 000000014035AD17: lea     rbx, [rcx+10h]
 * 000000014035AD1B: mov     r15b, [rcx+0Ch]
 * 000000014035AD1F: lea     rcx, [rax+rax*2]
 * 000000014035AD23: lea     r13, [rbx+rcx*8]
 * 000000014035AD27: mov     r8d, 18h
 * 000000014035AD2D: lea     r9, [r12+18h]
 * 000000014035AD32: mov     r10, rbx
 * 000000014035AD35: mov     rcx, [r10]
 * 000000014035AD38: add     r10, 8
 * 000000014035AD3C: mov     rax, [r9]
 * 000000014035AD3F: add     r9, 8
 * 000000014035AD43: cmp     rcx, rax
 * 000000014035AD46: jnz     short loc_14035AD7C
 * 000000014035AD48: add     r8d, 0FFFFFFF8h
 * 000000014035AD4C: cmp     r8d, 8
 * 000000014035AD50: jnb     short loc_14035AD35
 * 000000014035AD52: test    r8d, r8d
 * 000000014035AD55: jz      short loc_14035AD85
 * 000000014035AD57: mov     r11d, 1
 * 000000014035AD5D: movzx   edx, byte ptr [r10]
 * 000000014035AD61: add     r10, r11
 * 000000014035AD64: movzx   eax, byte ptr [r9]
 * 000000014035AD68: add     r9, r11
 * 000000014035AD6B: cmp     rdx, rax
 * 000000014035AD6E: jnz     short loc_14035AD7C
 * 000000014035AD70: mov     eax, 0FFFFFFFFh
 * 000000014035AD75: add     r8d, eax
 * 000000014035AD78: jz      short loc_14035AD85
 * 000000014035AD7A: jmp     short loc_14035AD5D
 * 000000014035AD7C: add     rbx, 18h
 * 000000014035AD80: cmp     rbx, r13
 * 000000014035AD83: jb      short loc_14035AD27
 * 000000014035AD85: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035AD8A: mov     rcx, [rsi+540h]
 * 000000014035AD91: mov     rax, [rsi+190h]
 * 000000014035AD98: call    KeGuardDispatchICall
 * 000000014035AD9D: movzx   eax, r14b
 * 000000014035ADA1: mov     cr8, rax
 * 000000014035ADA5: xor     eax, eax
 * 000000014035ADA7: test    r15b, r15b
 * 000000014035ADAA: jz      short loc_14035AE28
 * 000000014035ADAC: mov     eax, [rsi+994h]
 * 000000014035ADB2: mov     ecx, 10h
 * 000000014035ADB7: test    cl, al
 * 000000014035ADB9: jz      short loc_14035AE18
 * 000000014035ADBB: xor     eax, eax
 * 000000014035ADBD: cmp     [rsi+8F8h], eax
 * 000000014035ADC3: jnz     short loc_14035AE18
 * 000000014035ADC5: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035ADCA: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035ADD4: add     rax, rsi
 * 000000014035ADD7: xor     edx, edx
 * 000000014035ADD9: mov     [rsi+900h], rax
 * 000000014035ADE0: mov     rax, 0B3B74BDEE4453415h
 * 000000014035ADEA: add     rax, rcx
 * 000000014035ADED: mov     [rsi+908h], rax
 * 000000014035ADF4: movsxd  rax, dword ptr [rcx]
 * 000000014035ADF7: mov     rcx, rsi
 * 000000014035ADFA: mov     [rsi+910h], rax
 * 000000014035AE01: mov     eax, 1
 * 000000014035AE06: mov     [rsi+918h], rax
 * 000000014035AE0D: mov     [rsi+8F8h], eax
 * 000000014035AE13: call    sub_14036B3BC
 * 000000014035AE18: mov     ecx, 1
 * 000000014035AE1D: cmp     [r12+18h], rcx
 * 000000014035AE22: jz      short loc_14035AE8C
 * 000000014035AE24: xor     eax, eax
 * 000000014035AE26: jmp     short loc_14035AE2D
 * 000000014035AE28: mov     ecx, 1
 * 000000014035AE2D: cmp     rbx, r13
 * 000000014035AE30: jnz     short loc_14035AE8C
 * 000000014035AE32: mov     r13, 0B3B74BDEE4453415h
 * 000000014035AE3C: mov     r12, [rsp+0C70h+var_C18]
 * 000000014035AE41: cmp     [rsi+8F8h], eax
 * 000000014035AE47: jnz     short loc_14035AE9B
 * 000000014035AE49: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035AE53: xor     edx, edx
 * 000000014035AE55: add     rax, rsi
 * 000000014035AE58: mov     [rsi+900h], rax
 * 000000014035AE5F: lea     rax, [r12+r13]
 * 000000014035AE63: mov     [rsi+908h], rax
 * 000000014035AE6A: movsxd  rax, dword ptr [r12]
 * 000000014035AE6E: mov     [rsi+910h], rax
 * 000000014035AE75: mov     [rsi+918h], rbx
 * 000000014035AE7C: mov     [rsi+8F8h], ecx
 * 000000014035AE82: mov     rcx, rsi
 * 000000014035AE85: call    sub_14036B3BC
 * 000000014035AE8A: jmp     short loc_14035AE9B
 * 000000014035AE8C: mov     r12, [rsp+0C70h+var_C18]
 * 000000014035AE91: mov     r13, 0B3B74BDEE4453415h
 * 000000014035AE9B: mov     rcx, [rsi+540h]
 * 000000014035AEA2: mov     r15, cr8
 * 000000014035AEA6: mov     eax, 0Fh
 * 000000014035AEAB: mov     cr8, rax
 * 000000014035AEAF: mov     rax, [rsi+150h]
 * 000000014035AEB6: call    KeGuardDispatchICall
 * 000000014035AEBB: mov     rax, [rsi+610h]
 * 000000014035AEC2: mov     rcx, [rax]
 * 000000014035AEC5: mov     eax, [rcx]
 * 000000014035AEC7: lea     rbx, [rcx+10h]
 * 000000014035AECB: lea     rcx, [rax+rax*2]
 * 000000014035AECF: xor     eax, eax
 * 000000014035AED1: lea     r14, [rbx+rcx*8]
 * 000000014035AED5: jmp     short loc_14035AEFE
 * 000000014035AED7: mov     rcx, [rbx+8]
 * 000000014035AEDB: cmp     rcx, rdx
 * 000000014035AEDE: jb      short loc_14035AF0A
 * 000000014035AEE0: mov     rax, rcx
 * 000000014035AEE3: and     rax, 0FFFFFFFFFFFFF000h
 * 000000014035AEE9: cmp     rax, rcx
 * 000000014035AEEC: jnz     short loc_14035AF0A
 * 000000014035AEEE: mov     eax, [rbx+10h]
 * 000000014035AEF1: add     rax, rcx
 * 000000014035AEF4: cmp     rax, rcx
 * 000000014035AEF7: jbe     short loc_14035AF0A
 * 000000014035AEF9: cmp     rax, rdx
 * 000000014035AEFC: jz      short loc_14035AF0A
 * 000000014035AEFE: add     rbx, 18h
 * 000000014035AF02: mov     rdx, rax
 * 000000014035AF05: cmp     rbx, r14
 * 000000014035AF08: jb      short loc_14035AED7
 * 000000014035AF0A: mov     rcx, [rsi+540h]
 * 000000014035AF11: mov     rax, [rsi+190h]
 * 000000014035AF18: call    KeGuardDispatchICall
 * 000000014035AF1D: movzx   eax, r15b
 * 000000014035AF21: mov     cr8, rax
 * 000000014035AF25: cmp     rbx, r14
 * 000000014035AF28: jz      loc_140355320
 * 000000014035AF2E: xor     eax, eax
 * 000000014035AF30: cmp     [rsi+8F8h], eax
 * 000000014035AF36: jnz     loc_140355320
 * 000000014035AF3C: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035AF46: add     rax, rsi
 * 000000014035AF49: mov     [rsi+900h], rax
 * 000000014035AF50: lea     rax, [r12+r13]
 * 000000014035AF54: mov     [rsi+908h], rax
 * 000000014035AF5B: movsxd  rax, dword ptr [r12]
 * 000000014035AF5F: mov     [rsi+910h], rax
 * 000000014035AF66: mov     [rsi+918h], rbx
 * 000000014035AF6D: jmp     loc_14035A593
 * 000000014035AF72: mov     ecx, [r13+28h]
 * 000000014035AF76: and     ecx, edx
 * 000000014035AF78: jz      short loc_14035AF98
 * 000000014035AF7A: xor     eax, eax
 * 000000014035AF7C: cmp     [rsi+980h], rax
 * 000000014035AF83: jz      loc_14035531A
 * 000000014035AF89: mov     eax, [rsi+994h]
 * 000000014035AF8F: test    r15b, al
 * 000000014035AF92: jnz     loc_140355402
 * 000000014035AF98: xor     eax, eax
 * 000000014035AF9A: test    ecx, ecx
 * 000000014035AF9C: jz      loc_14035B438
 * 000000014035AFA2: mov     edx, [rsi+994h]
 * 000000014035AFA8: mov     ecx, edx
 * 000000014035AFAA: cmp     [rsi+824h], eax
 * 000000014035AFB0: jnz     short loc_14035AFC4
 * 000000014035AFB2: shl     ecx, 3
 * 000000014035AFB5: xor     ecx, edx
 * 000000014035AFB7: and     ecx, 20h
 * 000000014035AFBA: xor     ecx, edx
 * 000000014035AFBC: mov     [rsi+994h], ecx
 * 000000014035AFC2: jmp     short loc_14035AFD6
 * 000000014035AFC4: mov     eax, edx
 * 000000014035AFC6: shr     eax, 3
 * 000000014035AFC9: xor     eax, edx
 * 000000014035AFCB: test    r15b, al
 * 000000014035AFCE: jnz     loc_140355402
 * 000000014035AFD4: xor     eax, eax
 * 000000014035AFD6: cmp     [rsi+980h], rax
 * 000000014035AFDD: jz      loc_14035B427
 * 000000014035AFE3: mov     edx, ecx
 * 000000014035AFE5: cmp     [rsi+824h], eax
 * 000000014035AFEB: jnz     short loc_14035AFFF
 * 000000014035AFED: shl     edx, 3
 * 000000014035AFF0: xor     edx, ecx
 * 000000014035AFF2: and     edx, 20h
 * 000000014035AFF5: xor     edx, ecx
 * 000000014035AFF7: mov     [rsi+994h], edx
 * 000000014035AFFD: jmp     short loc_14035B00F
 * 000000014035AFFF: mov     eax, ecx
 * 000000014035B001: shr     eax, 3
 * 000000014035B004: xor     eax, ecx
 * 000000014035B006: test    r15b, al
 * 000000014035B009: jnz     loc_14035B425
 * 000000014035B00F: test    r15b, dl
 * 000000014035B012: jz      loc_14035B199
 * 000000014035B018: mov     r14d, [r13+8]
 * 000000014035B01C: mov     r12d, 1
 * 000000014035B022: mov     ecx, [r13+10h]
 * 000000014035B026: and     r14d, 0FFFh
 * 000000014035B02D: mov     rbx, [r13+8]
 * 000000014035B031: add     r14, 0FFFh
 * 000000014035B038: add     r14, rcx
 * 000000014035B03B: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014035B042: shr     r14, 0Ch
 * 000000014035B046: test    r14, r14
 * 000000014035B049: jz      loc_14035B0E1
 * 000000014035B04F: xor     edi, edi
 * 000000014035B051: mov     rax, [rsi+2B0h]
 * 000000014035B058: mov     rcx, rbx
 * 000000014035B05B: sub     r14, r12
 * 000000014035B05E: call    KeGuardDispatchICall
 * 000000014035B063: test    al, al
 * 000000014035B065: jz      short loc_14035B0BA
 * 000000014035B067: cmp     [rsi+8F8h], edi
 * 000000014035B06D: jnz     short loc_14035B0BA
 * 000000014035B06F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035B079: xor     edx, edx
 * 000000014035B07B: add     rax, rsi
 * 000000014035B07E: mov     rcx, rsi
 * 000000014035B081: mov     [rsi+900h], rax
 * 000000014035B088: mov     rax, 0B3B74BDEE4453415h
 * 000000014035B092: add     rax, r13
 * 000000014035B095: mov     [rsi+908h], rax
 * 000000014035B09C: movsxd  rax, dword ptr [r13+0]
 * 000000014035B0A0: mov     [rsi+910h], rax
 * 000000014035B0A7: mov     [rsi+918h], rbx
 * 000000014035B0AE: mov     [rsi+8F8h], r12d
 * 000000014035B0B5: call    sub_14036B3BC
 * 000000014035B0BA: add     dword ptr [rsi+828h], 100h
 * 000000014035B0C4: add     rbx, 1000h
 * 000000014035B0CB: test    r14, r14
 * 000000014035B0CE: jnz     short loc_14035B051
 * 000000014035B0D0: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035B0D7: mov     r11, 0B3B74BDEE4453415h
 * 000000014035B0E1: mov     r14, 0A3A03F5891C8B4E8h
 * 000000014035B0EB: mov     eax, [r13+28h]
 * 000000014035B0EF: mov     ecx, 2
 * 000000014035B0F4: test    cl, al
 * 000000014035B0F6: jz      loc_140355320
 * 000000014035B0FC: mov     rbx, [r13+8]
 * 000000014035B100: test    r15b, al
 * 000000014035B103: jz      loc_14035B666
 * 000000014035B109: mov     rax, [rbx+70h]
 * 000000014035B10D: xor     r15d, r15d
 * 000000014035B110: mov     rdx, [r13+18h]
 * 000000014035B114: mov     rcx, [rax]
 * 000000014035B117: cmp     rcx, rdx
 * 000000014035B11A: jz      loc_14035B669
 * 000000014035B120: mov     rax, [rsi+590h]
 * 000000014035B127: mov     [rax], rcx
 * 000000014035B12A: mov     dword ptr [rax+10h], 100h
 * 000000014035B131: mov     eax, [rsi+8F8h]
 * 000000014035B137: test    eax, eax
 * 000000014035B139: jnz     short loc_14035B14F
 * 000000014035B13B: mov     rax, [rsi+590h]
 * 000000014035B142: xor     rcx, rdx
 * 000000014035B145: mov     [rax+18h], rcx
 * 000000014035B149: mov     eax, [rsi+8F8h]
 * 000000014035B14F: mov     rcx, [rbx+70h]
 * 000000014035B153: test    eax, eax
 * 000000014035B155: jnz     loc_14035B669
 * 000000014035B15B: lea     rax, [rsi+r14]
 * 000000014035B15F: xor     edx, edx
 * 000000014035B161: mov     [rsi+900h], rax
 * 000000014035B168: lea     rax, [r11+r13]
 * 000000014035B16C: mov     [rsi+908h], rax
 * 000000014035B173: movsxd  rax, dword ptr [r13+0]
 * 000000014035B177: mov     [rsi+910h], rax
 * 000000014035B17E: mov     [rsi+918h], rcx
 * 000000014035B185: mov     rcx, rsi
 * 000000014035B188: mov     [rsi+8F8h], r12d
 * 000000014035B18F: call    sub_14036B3BC
 * 000000014035B194: jmp     loc_14035B669
 * 000000014035B199: mov     r14, [r13+8]
 * 000000014035B19D: mov     r8d, [r13+10h]
 * 000000014035B1A1: mov     r9, r14
 * 000000014035B1A4: add     [rsi+828h], r8d
 * 000000014035B1AB: mov     rax, r14
 * 000000014035B1AE: mov     r11d, [rsi+814h]
 * 000000014035B1B5: mov     r15, [rsi+818h]
 * 000000014035B1BC: lea     rcx, [r14+r8]
 * 000000014035B1C0: cmp     r14, rcx
 * 000000014035B1C3: jnb     short loc_14035B1D5
 * 000000014035B1C5: mov     edx, 40h ; '@'
 * 000000014035B1CA: prefetchnta byte ptr [rax]
 * 000000014035B1CD: add     rax, rdx
 * 000000014035B1D0: cmp     rax, rcx
 * 000000014035B1D3: jb      short loc_14035B1CA
 * 000000014035B1D5: mov     r10d, r8d
 * 000000014035B1D8: mov     rbx, r15
 * 000000014035B1DB: shr     r10d, 7
 * 000000014035B1DF: mov     r12d, 1
 * 000000014035B1E5: test    r10d, r10d
 * 000000014035B1E8: jz      short loc_14035B255
 * 000000014035B1EA: mov     rsi, 7010008004002001h
 * 000000014035B1F4: mov     edx, 8
 * 000000014035B1F9: mov     rax, [r9]
 * 000000014035B1FC: mov     ecx, r11d
 * 000000014035B1FF: xor     rax, rbx
 * 000000014035B202: mov     rbx, [r9+8]
 * 000000014035B206: rol     rax, cl
 * 000000014035B209: add     r9, 10h
 * 000000014035B20D: xor     rbx, rax
 * 000000014035B210: rol     rbx, cl
 * 000000014035B213: sub     rdx, r12
 * 000000014035B216: jnz     short loc_14035B1F9
 * 000000014035B218: mov     rcx, r9
 * 000000014035B21B: sub     rcx, r14
 * 000000014035B21E: xor     rcx, r15
 * 000000014035B221: mov     rax, rcx
 * 000000014035B224: rol     rax, 11h
 * 000000014035B228: xor     rcx, rax
 * 000000014035B22B: mov     rax, rsi
 * 000000014035B22E: mul     rcx
 * 000000014035B231: xor     r11d, edx
 * 000000014035B234: mov     [rbp+0B70h+var_5A8], rdx
 * 000000014035B23B: xor     r11d, eax
 * 000000014035B23E: mov     eax, 0FFFFFFFFh
 * 000000014035B243: and     r11d, 3Fh
 * 000000014035B247: cmovz   r11d, r12d
 * 000000014035B24B: add     r10d, eax
 * 000000014035B24E: jnz     short loc_14035B1F4
 * 000000014035B250: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035B255: and     r8d, 7Fh
 * 000000014035B259: cmp     r8d, 8
 * 000000014035B25D: jb      short loc_14035B27C
 * 000000014035B25F: mov     edx, r8d
 * 000000014035B262: shr     rdx, 3
 * 000000014035B266: xor     rbx, [r9]
 * 000000014035B269: mov     ecx, r11d
 * 000000014035B26C: rol     rbx, cl
 * 000000014035B26F: add     r9, 8
 * 000000014035B273: add     r8d, 0FFFFFFF8h
 * 000000014035B277: sub     rdx, r12
 * 000000014035B27A: jnz     short loc_14035B266
 * 000000014035B27C: test    r8d, r8d
 * 000000014035B27F: jz      short loc_14035B2A0
 * 000000014035B281: mov     esi, 0FFFFFFFFh
 * 000000014035B286: movzx   eax, byte ptr [r9]
 * 000000014035B28A: mov     ecx, r11d
 * 000000014035B28D: xor     rbx, rax
 * 000000014035B290: add     r9, r12
 * 000000014035B293: rol     rbx, cl
 * 000000014035B296: add     r8d, esi
 * 000000014035B299: jnz     short loc_14035B286
 * 000000014035B29B: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035B2A0: mov     rax, rbx
 * 000000014035B2A3: jmp     short loc_14035B2A7
 * 000000014035B2A5: xor     ebx, eax
 * 000000014035B2A7: shr     rax, 1Fh
 * 000000014035B2AB: test    rax, rax
 * 000000014035B2AE: jnz     short loc_14035B2A5
 * 000000014035B2B0: mov     r8d, [r13+14h]
 * 000000014035B2B4: btr     ebx, 1Fh
 * 000000014035B2B8: cmp     ebx, r8d
 * 000000014035B2BB: jz      loc_14035B65B
 * 000000014035B2C1: mov     ecx, [r13+10h]
 * 000000014035B2C5: mov     rdx, [r13+8]
 * 000000014035B2C9: test    rcx, rcx
 * 000000014035B2CC: jz      loc_14035B393
 * 000000014035B2D2: mov     eax, [rsi+994h]
 * 000000014035B2D8: mov     r9d, 40h ; '@'
 * 000000014035B2DE: test    r9b, al
 * 000000014035B2E1: jz      loc_14035B393
 * 000000014035B2E7: mov     r12, cr8
 * 000000014035B2EB: lea     eax, [r9-3Eh]
 * 000000014035B2EF: mov     cr8, rax
 * 000000014035B2F3: mov     r14, rdx
 * 000000014035B2F6: lea     rax, [rcx-1]
 * 000000014035B2FA: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035B301: add     rax, rdx
 * 000000014035B304: or      rax, 0FFFh
 * 000000014035B30A: mov     [rbp+0B70h+arg_8], rax
 * 000000014035B311: lea     r13, [r14-1]
 * 000000014035B315: movzx   r15d, r12b
 * 000000014035B319: mov     rax, [rsi+468h]
 * 000000014035B320: xor     edx, edx
 * 000000014035B322: mov     rcx, r14
 * 000000014035B325: call    KeGuardDispatchICall
 * 000000014035B32A: cmp     eax, 0C000022Dh
 * 000000014035B32F: jnz     short loc_14035B355
 * 000000014035B331: mov     eax, 1
 * 000000014035B336: cmp     r12b, al
 * 000000014035B339: ja      short loc_14035B359
 * 000000014035B33B: movzx   r15d, r12b
 * 000000014035B33F: mov     cr8, r15
 * 000000014035B343: mov     al, [r14]
 * 000000014035B346: mov     rax, cr8
 * 000000014035B34A: mov     eax, 2
 * 000000014035B34F: mov     cr8, rax
 * 000000014035B353: jmp     short loc_14035B319
 * 000000014035B355: test    eax, eax
 * 000000014035B357: js      short loc_14035B386
 * 000000014035B359: mov     r10d, 1000h
 * 000000014035B35F: add     r14, r10
 * 000000014035B362: add     r13, r10
 * 000000014035B365: cmp     r13, [rbp+0B70h+arg_8]
 * 000000014035B36C: jnz     short loc_14035B315
 * 000000014035B36E: mov     cr8, r15
 * 000000014035B372: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035B377: mov     r15d, 4
 * 000000014035B37D: lea     r12d, [r15-3]
 * 000000014035B381: jmp     loc_14035B0D7
 * 000000014035B386: mov     cr8, r15
 * 000000014035B38A: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035B38F: mov     r8d, [r13+14h]
 * 000000014035B393: mov     eax, [rsi+8F8h]
 * 000000014035B399: test    eax, eax
 * 000000014035B39B: jnz     short loc_14035B3B8
 * 000000014035B39D: mov     ecx, r8d
 * 000000014035B3A0: mov     eax, ebx
 * 000000014035B3A2: xor     rcx, rax
 * 000000014035B3A5: mov     rax, [rsi+590h]
 * 000000014035B3AC: mov     [rax+18h], rcx
 * 000000014035B3B0: mov     eax, [rsi+8F8h]
 * 000000014035B3B6: test    eax, eax
 * 000000014035B3B8: mov     rcx, [r13+8]
 * 000000014035B3BC: mov     r12d, 1
 * 000000014035B3C2: mov     r14, 0A3A03F5891C8B4E8h
 * 000000014035B3CC: jnz     short loc_14035B410
 * 000000014035B3CE: lea     rax, [rsi+r14]
 * 000000014035B3D2: xor     edx, edx
 * 000000014035B3D4: mov     [rsi+900h], rax
 * 000000014035B3DB: mov     rax, 0B3B74BDEE4453415h
 * 000000014035B3E5: add     rax, r13
 * 000000014035B3E8: mov     [rsi+908h], rax
 * 000000014035B3EF: movsxd  rax, dword ptr [r13+0]
 * 000000014035B3F3: mov     [rsi+910h], rax
 * 000000014035B3FA: mov     [rsi+918h], rcx
 * 000000014035B401: mov     rcx, rsi
 * 000000014035B404: mov     [rsi+8F8h], r12d
 * 000000014035B40B: call    sub_14036B3BC
 * 000000014035B410: mov     r15d, 4
 * 000000014035B416: mov     r11, 0B3B74BDEE4453415h
 * 000000014035B420: jmp     loc_14035B0EB
 * 000000014035B425: xor     eax, eax
 * 000000014035B427: mov     [rsi+824h], eax
 * 000000014035B42D: mov     r12d, 1
 * 000000014035B433: jmp     loc_14035B0E1
 * 000000014035B438: mov     r14, [r13+8]
 * 000000014035B43C: mov     r8d, [r13+10h]
 * 000000014035B440: mov     r9, r14
 * 000000014035B443: add     [rsi+828h], r8d
 * 000000014035B44A: mov     rax, r14
 * 000000014035B44D: mov     r10d, [rsi+814h]
 * 000000014035B454: mov     r15, [rsi+818h]
 * 000000014035B45B: lea     rcx, [r14+r8]
 * 000000014035B45F: cmp     r14, rcx
 * 000000014035B462: jnb     short loc_14035B474
 * 000000014035B464: mov     edx, 40h ; '@'
 * 000000014035B469: prefetchnta byte ptr [rax]
 * 000000014035B46C: add     rax, rdx
 * 000000014035B46F: cmp     rax, rcx
 * 000000014035B472: jb      short loc_14035B469
 * 000000014035B474: mov     r11d, r8d
 * 000000014035B477: mov     rbx, r15
 * 000000014035B47A: shr     r11d, 7
 * 000000014035B47E: mov     r13d, 1
 * 000000014035B484: mov     r12d, 0FFFFFFFFh
 * 000000014035B48A: test    r11d, r11d
 * 000000014035B48D: jz      short loc_14035B4F5
 * 000000014035B48F: mov     rsi, 7010008004002001h
 * 000000014035B499: mov     edx, 8
 * 000000014035B49E: mov     rax, [r9]
 * 000000014035B4A1: mov     ecx, r10d
 * 000000014035B4A4: xor     rax, rbx
 * 000000014035B4A7: mov     rbx, [r9+8]
 * 000000014035B4AB: rol     rax, cl
 * 000000014035B4AE: add     r9, 10h
 * 000000014035B4B2: xor     rbx, rax
 * 000000014035B4B5: rol     rbx, cl
 * 000000014035B4B8: sub     rdx, r13
 * 000000014035B4BB: jnz     short loc_14035B49E
 * 000000014035B4BD: mov     rcx, r9
 * 000000014035B4C0: sub     rcx, r14
 * 000000014035B4C3: xor     rcx, r15
 * 000000014035B4C6: mov     rax, rcx
 * 000000014035B4C9: rol     rax, 11h
 * 000000014035B4CD: xor     rcx, rax
 * 000000014035B4D0: mov     rax, rsi
 * 000000014035B4D3: mul     rcx
 * 000000014035B4D6: xor     r10d, edx
 * 000000014035B4D9: mov     [rbp+0B70h+var_5A0], rdx
 * 000000014035B4E0: xor     r10d, eax
 * 000000014035B4E3: and     r10d, 3Fh
 * 000000014035B4E7: cmovz   r10d, r13d
 * 000000014035B4EB: add     r11d, r12d
 * 000000014035B4EE: jnz     short loc_14035B499
 * 000000014035B4F0: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035B4F5: and     r8d, 7Fh
 * 000000014035B4F9: cmp     r8d, 8
 * 000000014035B4FD: jb      short loc_14035B51C
 * 000000014035B4FF: mov     edx, r8d
 * 000000014035B502: shr     rdx, 3
 * 000000014035B506: xor     rbx, [r9]
 * 000000014035B509: mov     ecx, r10d
 * 000000014035B50C: rol     rbx, cl
 * 000000014035B50F: add     r9, 8
 * 000000014035B513: add     r8d, 0FFFFFFF8h
 * 000000014035B517: sub     rdx, r13
 * 000000014035B51A: jnz     short loc_14035B506
 * 000000014035B51C: test    r8d, r8d
 * 000000014035B51F: jz      short loc_14035B536
 * 000000014035B521: movzx   eax, byte ptr [r9]
 * 000000014035B525: mov     ecx, r10d
 * 000000014035B528: xor     rbx, rax
 * 000000014035B52B: add     r9, r13
 * 000000014035B52E: rol     rbx, cl
 * 000000014035B531: add     r8d, r12d
 * 000000014035B534: jnz     short loc_14035B521
 * 000000014035B536: mov     rax, rbx
 * 000000014035B539: shr     rax, 1Fh
 * 000000014035B53D: xor     ecx, ecx
 * 000000014035B53F: jmp     short loc_14035B547
 * 000000014035B541: xor     ebx, eax
 * 000000014035B543: shr     rax, 1Fh
 * 000000014035B547: test    rax, rax
 * 000000014035B54A: jnz     short loc_14035B541
 * 000000014035B54C: mov     r13d, eax
 * 000000014035B54F: btr     ebx, 1Fh
 * 000000014035B553: mov     rax, [rsp+0C70h+var_C18]
 * 000000014035B558: cmp     ebx, [rax+14h]
 * 000000014035B55B: jz      loc_14035B372
 * 000000014035B561: cmp     [rax], ecx
 * 000000014035B563: jnz     short loc_14035B571
 * 000000014035B565: cmp     [rax+18h], ecx
 * 000000014035B568: mov     ecx, 1
 * 000000014035B56D: cmovnz  r13d, ecx
 * 000000014035B571: mov     ecx, [rax+10h]
 * 000000014035B574: mov     rdx, [rax+8]
 * 000000014035B578: test    rcx, rcx
 * 000000014035B57B: jz      loc_14035B63A
 * 000000014035B581: mov     eax, [rsi+994h]
 * 000000014035B587: mov     r8d, 40h ; '@'
 * 000000014035B58D: test    r8b, al
 * 000000014035B590: jz      loc_14035B63A
 * 000000014035B596: mov     r12, cr8
 * 000000014035B59A: lea     eax, [r8-3Eh]
 * 000000014035B59E: mov     cr8, rax
 * 000000014035B5A2: mov     r14, rdx
 * 000000014035B5A5: lea     rax, [rcx-1]
 * 000000014035B5A9: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035B5B0: add     rax, rdx
 * 000000014035B5B3: or      rax, 0FFFh
 * 000000014035B5B9: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035B5BE: lea     rax, [r14-1]
 * 000000014035B5C2: mov     [rbp+0B70h+arg_8], rax
 * 000000014035B5C9: movzx   r15d, r12b
 * 000000014035B5CD: mov     rax, [rsi+468h]
 * 000000014035B5D4: xor     edx, edx
 * 000000014035B5D6: mov     rcx, r14
 * 000000014035B5D9: call    KeGuardDispatchICall
 * 000000014035B5DE: cmp     eax, 0C000022Dh
 * 000000014035B5E3: jnz     short loc_14035B60C
 * 000000014035B5E5: test    r13d, r13d
 * 000000014035B5E8: jnz     short loc_14035B636
 * 000000014035B5EA: lea     eax, [r13+1]
 * 000000014035B5EE: cmp     r12b, al
 * 000000014035B5F1: ja      short loc_14035B610
 * 000000014035B5F3: movzx   r15d, r12b
 * 000000014035B5F7: mov     cr8, r15
 * 000000014035B5FB: mov     al, [r14]
 * 000000014035B5FE: mov     rax, cr8
 * 000000014035B602: lea     eax, [r13+2]
 * 000000014035B606: mov     cr8, rax
 * 000000014035B60A: jmp     short loc_14035B5CD
 * 000000014035B60C: test    eax, eax
 * 000000014035B60E: js      short loc_14035B636
 * 000000014035B610: mov     rax, [rbp+0B70h+arg_8]
 * 000000014035B617: mov     r10d, 1000h
 * 000000014035B61D: add     rax, r10
 * 000000014035B620: add     r14, r10
 * 000000014035B623: mov     [rbp+0B70h+arg_8], rax
 * 000000014035B62A: cmp     rax, [rsp+0C70h+var_BF8]
 * 000000014035B62F: jnz     short loc_14035B5C9
 * 000000014035B631: jmp     loc_14035B36E
 * 000000014035B636: mov     cr8, r15
 * 000000014035B63A: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035B63F: mov     eax, [rsi+8F8h]
 * 000000014035B645: mov     edx, [r13+14h]
 * 000000014035B649: test    eax, eax
 * 000000014035B64B: jnz     loc_14035B3B8
 * 000000014035B651: mov     ecx, ebx
 * 000000014035B653: xor     rcx, rdx
 * 000000014035B656: jmp     loc_14035B3A5
 * 000000014035B65B: mov     r15d, 4
 * 000000014035B661: jmp     loc_14035B0D7
 * 000000014035B666: xor     r15d, r15d
 * 000000014035B669: mov     eax, [r13+28h]
 * 000000014035B66D: test    al, 8
 * 000000014035B66F: jz      loc_140355323
 * 000000014035B675: mov     rax, [rbx+78h]
 * 000000014035B679: mov     rdx, [r13+20h]
 * 000000014035B67D: mov     rcx, [rax]
 * 000000014035B680: cmp     rcx, rdx
 * 000000014035B683: jz      loc_140355323
 * 000000014035B689: mov     rax, [rsi+590h]
 * 000000014035B690: mov     [rax], rcx
 * 000000014035B693: mov     dword ptr [rax+10h], 100h
 * 000000014035B69A: mov     eax, [rsi+8F8h]
 * 000000014035B6A0: test    eax, eax
 * 000000014035B6A2: jnz     short loc_14035B6B8
 * 000000014035B6A4: mov     rax, [rsi+590h]
 * 000000014035B6AB: xor     rcx, rdx
 * 000000014035B6AE: mov     [rax+18h], rcx
 * 000000014035B6B2: mov     eax, [rsi+8F8h]
 * 000000014035B6B8: mov     rcx, [rbx+78h]
 * 000000014035B6BC: test    eax, eax
 * 000000014035B6BE: jnz     loc_140355323
 * 000000014035B6C4: lea     rax, [rsi+r14]
 * 000000014035B6C8: mov     [rsi+900h], rax
 * 000000014035B6CF: mov     rax, 0B3B74BDEE4453415h
 * 000000014035B6D9: add     rax, r13
 * 000000014035B6DC: mov     [rsi+908h], rax
 * 000000014035B6E3: movsxd  rax, dword ptr [r13+0]
 * 000000014035B6E7: mov     [rsi+910h], rax
 * 000000014035B6EE: mov     [rsi+918h], rcx
 * 000000014035B6F5: mov     [rsi+8F8h], r12d
 * 000000014035B6FC: jmp     loc_1403556FD
 * 000000014035B701: mov     rdx, r13
 * 000000014035B704: mov     rcx, rsi
 * 000000014035B707: call    sub_1401B885C
 * 000000014035B70C: jmp     loc_140355320
 * 000000014035B711: mov     rdx, r13
 * 000000014035B714: mov     rcx, rsi
 * 000000014035B717: call    sub_1401B97C8
 * 000000014035B71C: jmp     loc_140355320
 * 000000014035B721: mov     eax, [rsi+830h]
 * 000000014035B727: test    dl, al
 * 000000014035B729: jz      loc_140355320
 * 000000014035B72F: xor     eax, eax
 * 000000014035B731: cmp     [rsi+980h], rax
 * 000000014035B738: jz      short loc_14035B777
 * 000000014035B73A: mov     eax, [rsi+994h]
 * 000000014035B740: test    r15b, al
 * 000000014035B743: jnz     short loc_14035B775
 * 000000014035B745: mov     rax, [rsi+3D0h]
 * 000000014035B74C: lea     rdx, [rbp+0B70h+var_7B0]
 * 000000014035B753: xor     r9d, r9d
 * 000000014035B756: xor     r8d, r8d
 * 000000014035B759: lea     ecx, [r9+1Ah]
 * 000000014035B75D: call    KeGuardDispatchICall
 * 000000014035B762: mov     rbx, [rbp+0B70h+var_7B0]
 * 000000014035B769: xor     ecx, ecx
 * 000000014035B76B: test    eax, eax
 * 000000014035B76D: mov     eax, ecx
 * 000000014035B76F: cmovs   rbx, rcx
 * 000000014035B773: jmp     short loc_14035B77A
 * 000000014035B775: xor     eax, eax
 * 000000014035B777: mov     rbx, rax
 * 000000014035B77A: mov     r14d, eax
 * 000000014035B77D: mov     [rsp+0C70h+var_C00], eax
 * 000000014035B781: mov     rax, [rsi+3B0h]
 * 000000014035B788: xor     ecx, ecx
 * 000000014035B78A: mov     [rsp+0C70h+var_C20], rbx
 * 000000014035B78F: call    KeGuardDispatchICall
 * 000000014035B794: xor     r15d, r15d
 * 000000014035B797: lea     r12d, [r15+1]
 * 000000014035B79B: test    rax, rax
 * 000000014035B79E: jz      loc_14035BFE9
 * 000000014035B7A4: mov     rdi, rax
 * 000000014035B7A7: mov     rcx, rdi
 * 000000014035B7AA: cmp     rbx, rdi
 * 000000014035B7AD: jnz     loc_14035BBA6
 * 000000014035B7B3: mov     rax, [rsi+3A0h]
 * 000000014035B7BA: mov     r12, r13
 * 000000014035B7BD: call    KeGuardDispatchICall
 * 000000014035B7C2: test    eax, eax
 * 000000014035B7C4: js      loc_14035BFB9
 * 000000014035B7CA: mov     rax, [rsi+3E0h]
 * 000000014035B7D1: mov     rcx, rdi
 * 000000014035B7D4: call    KeGuardDispatchICall
 * 000000014035B7D9: mov     bl, al
 * 000000014035B7DB: mov     [rbp+0B70h+var_AE8], al
 * 000000014035B7E1: mov     rax, [rsi+3E8h]
 * 000000014035B7E8: lea     rdx, [rbp+0B70h+arg_18]
 * 000000014035B7EF: mov     rcx, rdi
 * 000000014035B7F2: call    KeGuardDispatchICall
 * 000000014035B7F7: mov     byte ptr [rbp+0B70h+arg_8], al
 * 000000014035B7FD: mov     rcx, rdi
 * 000000014035B800: mov     rax, [rsi+3F0h]
 * 000000014035B807: call    KeGuardDispatchICall
 * 000000014035B80C: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035B811: cmp     bl, 61h ; 'a'
 * 000000014035B814: jz      short loc_14035B88F
 * 000000014035B816: mov     eax, [rsi+8F8h]
 * 000000014035B81C: test    eax, eax
 * 000000014035B81E: jnz     short loc_14035B88F
 * 000000014035B820: mov     rax, [rsi+590h]
 * 000000014035B827: movzx   ecx, bl
 * 000000014035B82A: xor     rcx, 61h
 * 000000014035B82E: mov     [rax+18h], rcx
 * 000000014035B832: mov     eax, [rsi+8F8h]
 * 000000014035B838: test    eax, eax
 * 000000014035B83A: jnz     short loc_14035B88F
 * 000000014035B83C: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035B846: mov     r15d, 1
 * 000000014035B84C: add     rax, rsi
 * 000000014035B84F: xor     edx, edx
 * 000000014035B851: mov     [rsi+900h], rax
 * 000000014035B858: mov     rcx, rsi
 * 000000014035B85B: mov     rax, 0B3B74BDEE4453415h
 * 000000014035B865: add     rax, r13
 * 000000014035B868: mov     [rsi+908h], rax
 * 000000014035B86F: movsxd  rax, dword ptr [r13+0]
 * 000000014035B873: mov     [rsi+910h], rax
 * 000000014035B87A: mov     [rsi+918h], rdi
 * 000000014035B881: mov     [rsi+8F8h], r15d
 * 000000014035B888: call    sub_14036B3BC
 * 000000014035B88D: jmp     short loc_14035B895
 * 000000014035B88F: mov     r15d, 1
 * 000000014035B895: xor     eax, eax
 * 000000014035B897: movzx   ecx, bl
 * 000000014035B89A: and     ecx, 7
 * 000000014035B89D: mov     r14b, al
 * 000000014035B8A0: mov     r13b, al
 * 000000014035B8A3: sub     ecx, 1
 * 000000014035B8A6: jz      short loc_14035B918
 * 000000014035B8A8: cmp     ecx, 1
 * 000000014035B8AB: jz      short loc_14035B90B
 * 000000014035B8AD: test    bl, 7
 * 000000014035B8B0: jz      short loc_14035B91B
 * 000000014035B8B2: cmp     [rsi+8F8h], eax
 * 000000014035B8B8: jnz     short loc_14035B91B
 * 000000014035B8BA: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035B8C4: xor     edx, edx
 * 000000014035B8C6: add     rax, rsi
 * 000000014035B8C9: mov     rcx, rsi
 * 000000014035B8CC: mov     [rsi+900h], rax
 * 000000014035B8D3: mov     rax, 0B3B74BDEE4453415h
 * 000000014035B8DD: add     rax, r12
 * 000000014035B8E0: mov     [rsi+908h], rax
 * 000000014035B8E7: mov     rax, [rsp+0C70h+var_C18]
 * 000000014035B8EC: movsxd  rax, dword ptr [rax]
 * 000000014035B8EF: mov     [rsi+910h], rax
 * 000000014035B8F6: mov     [rsi+918h], rdi
 * 000000014035B8FD: mov     [rsi+8F8h], r15d
 * 000000014035B904: call    sub_14036B3BC
 * 000000014035B909: jmp     short loc_14035B91B
 * 000000014035B90B: mov     eax, 10h
 * 000000014035B910: mov     r14b, al
 * 000000014035B913: mov     r13b, al
 * 000000014035B916: jmp     short loc_14035B91B
 * 000000014035B918: mov     r14b, 30h ; '0'
 * 000000014035B91B: mov     r15, [rsi+5C8h]
 * 000000014035B922: movzx   ebx, bl
 * 000000014035B925: shr     rbx, 4
 * 000000014035B929: mov     al, [r15+rbx*2]
 * 000000014035B92D: or      al, r14b
 * 000000014035B930: mov     r14, [rsp+0C70h+var_C18]
 * 000000014035B935: cmp     al, byte ptr [rbp+0B70h+arg_8]
 * 000000014035B93B: jz      short loc_14035B995
 * 000000014035B93D: xor     eax, eax
 * 000000014035B93F: cmp     [rsi+8F8h], eax
 * 000000014035B945: jnz     short loc_14035B995
 * 000000014035B947: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035B951: xor     edx, edx
 * 000000014035B953: add     rax, rsi
 * 000000014035B956: mov     rcx, rsi
 * 000000014035B959: mov     [rsi+900h], rax
 * 000000014035B960: mov     rax, 0B3B74BDEE4453415h
 * 000000014035B96A: add     rax, r12
 * 000000014035B96D: mov     [rsi+908h], rax
 * 000000014035B974: movsxd  rax, dword ptr [r14]
 * 000000014035B977: mov     [rsi+910h], rax
 * 000000014035B97E: mov     eax, 1
 * 000000014035B983: mov     [rsi+918h], rdi
 * 000000014035B98A: mov     [rsi+8F8h], eax
 * 000000014035B990: call    sub_14036B3BC
 * 000000014035B995: mov     al, [r15+rbx*2+1]
 * 000000014035B99A: mov     ebx, 1
 * 000000014035B99F: or      al, r13b
 * 000000014035B9A2: cmp     al, [rbp+0B70h+arg_18]
 * 000000014035B9A8: jz      short loc_14035B9FD
 * 000000014035B9AA: xor     eax, eax
 * 000000014035B9AC: cmp     [rsi+8F8h], eax
 * 000000014035B9B2: jnz     short loc_14035B9FF
 * 000000014035B9B4: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035B9BE: xor     edx, edx
 * 000000014035B9C0: add     rax, rsi
 * 000000014035B9C3: mov     rcx, rsi
 * 000000014035B9C6: mov     [rsi+900h], rax
 * 000000014035B9CD: mov     rax, 0B3B74BDEE4453415h
 * 000000014035B9D7: add     rax, r12
 * 000000014035B9DA: mov     [rsi+908h], rax
 * 000000014035B9E1: movsxd  rax, dword ptr [r14]
 * 000000014035B9E4: mov     [rsi+910h], rax
 * 000000014035B9EB: mov     [rsi+918h], rdi
 * 000000014035B9F2: mov     [rsi+8F8h], ebx
 * 000000014035B9F8: call    sub_14036B3BC
 * 000000014035B9FD: xor     eax, eax
 * 000000014035B9FF: cmp     rdi, [rsi+4E0h]
 * 000000014035BA06: jz      short loc_14035BA19
 * 000000014035BA08: mov     rax, [rsi+3D8h]
 * 000000014035BA0F: mov     edx, ebx
 * 000000014035BA11: mov     rcx, rdi
 * 000000014035BA14: call    KeGuardDispatchICall
 * 000000014035BA19: mov     [rsp+0C70h+var_C08], rax
 * 000000014035BA1E: mov     r14, rax
 * 000000014035BA21: test    rax, rax
 * 000000014035BA24: jz      loc_14035BB84
 * 000000014035BA2A: mov     rcx, [rax]
 * 000000014035BA2D: mov     rbx, rax
 * 000000014035BA30: test    rcx, rcx
 * 000000014035BA33: jz      loc_14035BB75
 * 000000014035BA39: mov     r14b, byte ptr [rbp+0B70h+arg_8]
 * 000000014035BA40: mov     r13, [rsp+0C70h+var_BF8]
 * 000000014035BA45: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 000000014035BA49: mov     [rbx], rcx
 * 000000014035BA4C: mov     rax, [rsi+1E0h]
 * 000000014035BA53: call    KeGuardDispatchICall
 * 000000014035BA58: mov     rcx, [rbx+8]
 * 000000014035BA5C: movzx   edx, [rbp+0B70h+arg_18]
 * 000000014035BA63: mov     r15, rcx
 * 000000014035BA66: movzx   eax, r14b
 * 000000014035BA6A: and     r15, 0FFFFFFFFFFFF0000h
 * 000000014035BA71: cmp     r15, r13
 * 000000014035BA74: cmovz   edx, eax
 * 000000014035BA77: mov     rax, [rsi+3F8h]
 * 000000014035BA7E: shr     rcx, 6
 * 000000014035BA82: and     cl, 0Fh
 * 000000014035BA85: call    KeGuardDispatchICall
 * 000000014035BA8A: test    eax, eax
 * 000000014035BA8C: jnz     loc_14035BB60
 * 000000014035BA92: test    dword ptr [rsi+990h], 40000000h
 * 000000014035BA9C: lea     r9d, [rax+1]
 * 000000014035BAA0: jz      short loc_14035BAF0
 * 000000014035BAA2: mov     rcx, [rsi+0A80h]
 * 000000014035BAA9: lea     edx, [rax+30h]
 * 000000014035BAAC: lea     r8d, [rax+6]
 * 000000014035BAB0: mov     rax, [r12]
 * 000000014035BAB4: add     edx, 0FFFFFFF8h
 * 000000014035BAB7: mov     [rcx], rax
 * 000000014035BABA: add     r12, 8
 * 000000014035BABE: add     rcx, 8
 * 000000014035BAC2: sub     r8, r9
 * 000000014035BAC5: jnz     short loc_14035BAB0
 * 000000014035BAC7: test    edx, edx
 * 000000014035BAC9: jz      short loc_14035BAE9
 * 000000014035BACB: mov     r14d, 0FFFFFFFFh
 * 000000014035BAD1: mov     al, [r12]
 * 000000014035BAD5: add     r12, r9
 * 000000014035BAD8: mov     [rcx], al
 * 000000014035BADA: add     rcx, r9
 * 000000014035BADD: add     edx, r14d
 * 000000014035BAE0: jnz     short loc_14035BAD1
 * 000000014035BAE2: mov     r14b, byte ptr [rbp+0B70h+arg_8]
 * 000000014035BAE9: mov     r12, [rsi+0A80h]
 * 000000014035BAF0: mov     [r12+18h], r15
 * 000000014035BAF5: mov     rax, [rbx]
 * 000000014035BAF8: mov     [r12+20h], rax
 * 000000014035BAFD: mov     eax, [rbx+8]
 * 000000014035BB00: shr     rax, 6
 * 000000014035BB04: and     al, 0Fh
 * 000000014035BB06: mov     [r12+28h], al
 * 000000014035BB0B: xor     eax, eax
 * 000000014035BB0D: cmp     [rsi+8F8h], eax
 * 000000014035BB13: jnz     short loc_14035BB60
 * 000000014035BB15: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035BB1F: xor     edx, edx
 * 000000014035BB21: add     rax, rsi
 * 000000014035BB24: mov     rcx, rsi
 * 000000014035BB27: mov     [rsi+900h], rax
 * 000000014035BB2E: mov     rax, 0B3B74BDEE4453415h
 * 000000014035BB38: add     rax, r12
 * 000000014035BB3B: mov     [rsi+908h], rax
 * 000000014035BB42: movsxd  rax, dword ptr [r12]
 * 000000014035BB46: mov     [rsi+910h], rax
 * 000000014035BB4D: mov     [rsi+918h], rdi
 * 000000014035BB54: mov     [rsi+8F8h], r9d
 * 000000014035BB5B: call    sub_14036B3BC
 * 000000014035BB60: add     rbx, 30h ; '0'
 * 000000014035BB64: mov     rcx, [rbx]
 * 000000014035BB67: test    rcx, rcx
 * 000000014035BB6A: jnz     loc_14035BA45
 * 000000014035BB70: mov     r14, [rsp+0C70h+var_C08]
 * 000000014035BB75: mov     rax, [rsi+100h]
 * 000000014035BB7C: mov     rcx, r14
 * 000000014035BB7F: call    KeGuardDispatchICall
 * 000000014035BB84: mov     rax, [rsi+3A8h]
 * 000000014035BB8B: mov     rcx, rdi
 * 000000014035BB8E: call    KeGuardDispatchICall
 * 000000014035BB93: mov     eax, 8000h
 * 000000014035BB98: add     [rsi+828h], eax
 * 000000014035BB9E: xor     r15d, r15d
 * 000000014035BBA1: jmp     loc_14035BFAA
 * 000000014035BBA6: mov     rax, [rsi+3C8h]
 * 000000014035BBAD: call    KeGuardDispatchICall
 * 000000014035BBB2: test    eax, eax
 * 000000014035BBB4: jz      loc_14035BFBF
 * 000000014035BBBA: mov     rax, [rsi+3A0h]
 * 000000014035BBC1: mov     rcx, rdi
 * 000000014035BBC4: mov     r12, r13
 * 000000014035BBC7: call    KeGuardDispatchICall
 * 000000014035BBCC: test    eax, eax
 * 000000014035BBCE: js      loc_14035BFB9
 * 000000014035BBD4: mov     rax, [rsi+3E0h]
 * 000000014035BBDB: mov     rcx, rdi
 * 000000014035BBDE: call    KeGuardDispatchICall
 * 000000014035BBE3: mov     bl, al
 * 000000014035BBE5: mov     [rbp+0B70h+var_AE7], al
 * 000000014035BBEB: mov     rax, [rsi+3E8h]
 * 000000014035BBF2: lea     rdx, [rbp+0B70h+var_B90]
 * 000000014035BBF6: mov     rcx, rdi
 * 000000014035BBF9: call    KeGuardDispatchICall
 * 000000014035BBFE: mov     byte ptr [rbp+0B70h+arg_8], al
 * 000000014035BC04: mov     rcx, rdi
 * 000000014035BC07: mov     rax, [rsi+3F0h]
 * 000000014035BC0E: call    KeGuardDispatchICall
 * 000000014035BC13: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035BC18: cmp     bl, 61h ; 'a'
 * 000000014035BC1B: jz      short loc_14035BC96
 * 000000014035BC1D: mov     eax, [rsi+8F8h]
 * 000000014035BC23: test    eax, eax
 * 000000014035BC25: jnz     short loc_14035BC96
 * 000000014035BC27: mov     rax, [rsi+590h]
 * 000000014035BC2E: movzx   ecx, bl
 * 000000014035BC31: xor     rcx, 61h
 * 000000014035BC35: mov     [rax+18h], rcx
 * 000000014035BC39: mov     eax, [rsi+8F8h]
 * 000000014035BC3F: test    eax, eax
 * 000000014035BC41: jnz     short loc_14035BC96
 * 000000014035BC43: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035BC4D: mov     r15d, 1
 * 000000014035BC53: add     rax, rsi
 * 000000014035BC56: xor     edx, edx
 * 000000014035BC58: mov     [rsi+900h], rax
 * 000000014035BC5F: mov     rcx, rsi
 * 000000014035BC62: mov     rax, 0B3B74BDEE4453415h
 * 000000014035BC6C: add     rax, r13
 * 000000014035BC6F: mov     [rsi+908h], rax
 * 000000014035BC76: movsxd  rax, dword ptr [r13+0]
 * 000000014035BC7A: mov     [rsi+910h], rax
 * 000000014035BC81: mov     [rsi+918h], rdi
 * 000000014035BC88: mov     [rsi+8F8h], r15d
 * 000000014035BC8F: call    sub_14036B3BC
 * 000000014035BC94: jmp     short loc_14035BC9C
 * 000000014035BC96: mov     r15d, 1
 * 000000014035BC9C: xor     eax, eax
 * 000000014035BC9E: movzx   ecx, bl
 * 000000014035BCA1: and     ecx, 7
 * 000000014035BCA4: mov     r14b, al
 * 000000014035BCA7: mov     r13b, al
 * 000000014035BCAA: sub     ecx, 1
 * 000000014035BCAD: jz      short loc_14035BD1F
 * 000000014035BCAF: cmp     ecx, 1
 * 000000014035BCB2: jz      short loc_14035BD12
 * 000000014035BCB4: test    bl, 7
 * 000000014035BCB7: jz      short loc_14035BD22
 * 000000014035BCB9: cmp     [rsi+8F8h], eax
 * 000000014035BCBF: jnz     short loc_14035BD22
 * 000000014035BCC1: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035BCCB: xor     edx, edx
 * 000000014035BCCD: add     rax, rsi
 * 000000014035BCD0: mov     rcx, rsi
 * 000000014035BCD3: mov     [rsi+900h], rax
 * 000000014035BCDA: mov     rax, 0B3B74BDEE4453415h
 * 000000014035BCE4: add     rax, r12
 * 000000014035BCE7: mov     [rsi+908h], rax
 * 000000014035BCEE: mov     rax, [rsp+0C70h+var_C18]
 * 000000014035BCF3: movsxd  rax, dword ptr [rax]
 * 000000014035BCF6: mov     [rsi+910h], rax
 * 000000014035BCFD: mov     [rsi+918h], rdi
 * 000000014035BD04: mov     [rsi+8F8h], r15d
 * 000000014035BD0B: call    sub_14036B3BC
 * 000000014035BD10: jmp     short loc_14035BD22
 * 000000014035BD12: mov     eax, 10h
 * 000000014035BD17: mov     r14b, al
 * 000000014035BD1A: mov     r13b, al
 * 000000014035BD1D: jmp     short loc_14035BD22
 * 000000014035BD1F: mov     r14b, 30h ; '0'
 * 000000014035BD22: mov     r15, [rsi+5C8h]
 * 000000014035BD29: movzx   ebx, bl
 * 000000014035BD2C: shr     rbx, 4
 * 000000014035BD30: mov     al, [r15+rbx*2]
 * 000000014035BD34: or      al, r14b
 * 000000014035BD37: mov     r14, [rsp+0C70h+var_C18]
 * 000000014035BD3C: cmp     al, byte ptr [rbp+0B70h+arg_8]
 * 000000014035BD42: jz      short loc_14035BD9C
 * 000000014035BD44: xor     eax, eax
 * 000000014035BD46: cmp     [rsi+8F8h], eax
 * 000000014035BD4C: jnz     short loc_14035BD9C
 * 000000014035BD4E: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035BD58: xor     edx, edx
 * 000000014035BD5A: add     rax, rsi
 * 000000014035BD5D: mov     rcx, rsi
 * 000000014035BD60: mov     [rsi+900h], rax
 * 000000014035BD67: mov     rax, 0B3B74BDEE4453415h
 * 000000014035BD71: add     rax, r12
 * 000000014035BD74: mov     [rsi+908h], rax
 * 000000014035BD7B: movsxd  rax, dword ptr [r14]
 * 000000014035BD7E: mov     [rsi+910h], rax
 * 000000014035BD85: mov     eax, 1
 * 000000014035BD8A: mov     [rsi+918h], rdi
 * 000000014035BD91: mov     [rsi+8F8h], eax
 * 000000014035BD97: call    sub_14036B3BC
 * 000000014035BD9C: mov     al, [r15+rbx*2+1]
 * 000000014035BDA1: xor     r15d, r15d
 * 000000014035BDA4: or      al, r13b
 * 000000014035BDA7: lea     ebx, [r15+1]
 * 000000014035BDAB: cmp     al, [rbp+0B70h+var_B90]
 * 000000014035BDAE: jz      short loc_14035BE02
 * 000000014035BDB0: cmp     [rsi+8F8h], r15d
 * 000000014035BDB7: jnz     short loc_14035BE02
 * 000000014035BDB9: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035BDC3: xor     edx, edx
 * 000000014035BDC5: add     rax, rsi
 * 000000014035BDC8: mov     rcx, rsi
 * 000000014035BDCB: mov     [rsi+900h], rax
 * 000000014035BDD2: mov     rax, 0B3B74BDEE4453415h
 * 000000014035BDDC: add     rax, r12
 * 000000014035BDDF: mov     [rsi+908h], rax
 * 000000014035BDE6: movsxd  rax, dword ptr [r14]
 * 000000014035BDE9: mov     [rsi+910h], rax
 * 000000014035BDF0: mov     [rsi+918h], rdi
 * 000000014035BDF7: mov     [rsi+8F8h], ebx
 * 000000014035BDFD: call    sub_14036B3BC
 * 000000014035BE02: cmp     rdi, [rsi+4E0h]
 * 000000014035BE09: jz      short loc_14035BE21
 * 000000014035BE0B: mov     rax, [rsi+3D8h]
 * 000000014035BE12: mov     edx, ebx
 * 000000014035BE14: mov     rcx, rdi
 * 000000014035BE17: call    KeGuardDispatchICall
 * 000000014035BE1C: mov     r14, rax
 * 000000014035BE1F: jmp     short loc_14035BE24
 * 000000014035BE21: mov     r14, r15
 * 000000014035BE24: mov     [rsp+0C70h+var_C08], r14
 * 000000014035BE29: test    r14, r14
 * 000000014035BE2C: jz      loc_14035BF90
 * 000000014035BE32: mov     rcx, [r14]
 * 000000014035BE35: mov     rbx, r14
 * 000000014035BE38: test    rcx, rcx
 * 000000014035BE3B: jz      loc_14035BF81
 * 000000014035BE41: mov     r14b, byte ptr [rbp+0B70h+arg_8]
 * 000000014035BE48: mov     r13, [rsp+0C70h+var_BF8]
 * 000000014035BE4D: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 000000014035BE51: mov     [rbx], rcx
 * 000000014035BE54: mov     rax, [rsi+1E0h]
 * 000000014035BE5B: call    KeGuardDispatchICall
 * 000000014035BE60: mov     rcx, [rbx+8]
 * 000000014035BE64: movzx   edx, [rbp+0B70h+var_B90]
 * 000000014035BE68: mov     r15, rcx
 * 000000014035BE6B: movzx   eax, r14b
 * 000000014035BE6F: and     r15, 0FFFFFFFFFFFF0000h
 * 000000014035BE76: cmp     r15, r13
 * 000000014035BE79: cmovz   edx, eax
 * 000000014035BE7C: mov     rax, [rsi+3F8h]
 * 000000014035BE83: shr     rcx, 6
 * 000000014035BE87: and     cl, 0Fh
 * 000000014035BE8A: call    KeGuardDispatchICall
 * 000000014035BE8F: test    eax, eax
 * 000000014035BE91: jnz     loc_14035BF69
 * 000000014035BE97: test    dword ptr [rsi+990h], 40000000h
 * 000000014035BEA1: lea     r10d, [rax+1]
 * 000000014035BEA5: jz      short loc_14035BEF5
 * 000000014035BEA7: mov     rcx, [rsi+0A80h]
 * 000000014035BEAE: lea     edx, [rax+30h]
 * 000000014035BEB1: lea     r8d, [rax+6]
 * 000000014035BEB5: mov     rax, [r12]
 * 000000014035BEB9: add     edx, 0FFFFFFF8h
 * 000000014035BEBC: mov     [rcx], rax
 * 000000014035BEBF: add     r12, 8
 * 000000014035BEC3: add     rcx, 8
 * 000000014035BEC7: sub     r8, r10
 * 000000014035BECA: jnz     short loc_14035BEB5
 * 000000014035BECC: test    edx, edx
 * 000000014035BECE: jz      short loc_14035BEEE
 * 000000014035BED0: mov     r14d, 0FFFFFFFFh
 * 000000014035BED6: mov     al, [r12]
 * 000000014035BEDA: add     r12, r10
 * 000000014035BEDD: mov     [rcx], al
 * 000000014035BEDF: add     rcx, r10
 * 000000014035BEE2: add     edx, r14d
 * 000000014035BEE5: jnz     short loc_14035BED6
 * 000000014035BEE7: mov     r14b, byte ptr [rbp+0B70h+arg_8]
 * 000000014035BEEE: mov     r12, [rsi+0A80h]
 * 000000014035BEF5: mov     [r12+18h], r15
 * 000000014035BEFA: xor     r15d, r15d
 * 000000014035BEFD: mov     rax, [rbx]
 * 000000014035BF00: mov     [r12+20h], rax
 * 000000014035BF05: mov     eax, [rbx+8]
 * 000000014035BF08: shr     rax, 6
 * 000000014035BF0C: and     al, 0Fh
 * 000000014035BF0E: mov     [r12+28h], al
 * 000000014035BF13: cmp     [rsi+8F8h], r15d
 * 000000014035BF1A: jnz     short loc_14035BF6C
 * 000000014035BF1C: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035BF26: xor     edx, edx
 * 000000014035BF28: add     rax, rsi
 * 000000014035BF2B: mov     rcx, rsi
 * 000000014035BF2E: mov     [rsi+900h], rax
 * 000000014035BF35: mov     rax, 0B3B74BDEE4453415h
 * 000000014035BF3F: add     rax, r12
 * 000000014035BF42: mov     [rsi+908h], rax
 * 000000014035BF49: movsxd  rax, dword ptr [r12]
 * 000000014035BF4D: mov     [rsi+910h], rax
 * 000000014035BF54: mov     [rsi+918h], rdi
 * 000000014035BF5B: mov     [rsi+8F8h], r10d
 * 000000014035BF62: call    sub_14036B3BC
 * 000000014035BF67: jmp     short loc_14035BF6C
 * 000000014035BF69: xor     r15d, r15d
 * 000000014035BF6C: add     rbx, 30h ; '0'
 * 000000014035BF70: mov     rcx, [rbx]
 * 000000014035BF73: test    rcx, rcx
 * 000000014035BF76: jnz     loc_14035BE4D
 * 000000014035BF7C: mov     r14, [rsp+0C70h+var_C08]
 * 000000014035BF81: mov     rax, [rsi+100h]
 * 000000014035BF88: mov     rcx, r14
 * 000000014035BF8B: call    KeGuardDispatchICall
 * 000000014035BF90: mov     rax, [rsi+3A8h]
 * 000000014035BF97: mov     rcx, rdi
 * 000000014035BF9A: call    KeGuardDispatchICall
 * 000000014035BF9F: mov     eax, 8000h
 * 000000014035BFA4: add     [rsi+828h], eax
 * 000000014035BFAA: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035BFAF: mov     r14d, [rsp+0C70h+var_C00]
 * 000000014035BFB4: mov     rbx, [rsp+0C70h+var_C20]
 * 000000014035BFB9: mov     r12d, 1
 * 000000014035BFBF: mov     rax, [rsi+3B0h]
 * 000000014035BFC6: add     r14d, r12d
 * 000000014035BFC9: mov     rcx, rdi
 * 000000014035BFCC: mov     [rsp+0C70h+var_C00], r14d
 * 000000014035BFD1: call    KeGuardDispatchICall
 * 000000014035BFD6: mov     rdi, rax
 * 000000014035BFD9: test    rax, rax
 * 000000014035BFDC: jnz     loc_14035B7A7
 * 000000014035BFE2: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035BFE9: mov     r13, [rsi+4E0h]
 * 000000014035BFF0: mov     rax, [rsi+3A0h]
 * 000000014035BFF7: mov     rcx, r13
 * 000000014035BFFA: call    KeGuardDispatchICall
 * 000000014035BFFF: test    eax, eax
 * 000000014035C001: js      loc_14035C3DC
 * 000000014035C007: mov     rax, [rsi+3E0h]
 * 000000014035C00E: mov     rcx, r13
 * 000000014035C011: call    KeGuardDispatchICall
 * 000000014035C016: mov     bl, al
 * 000000014035C018: mov     [rbp+0B70h+var_AE6], al
 * 000000014035C01E: mov     rax, [rsi+3E8h]
 * 000000014035C025: lea     rdx, [rbp+0B70h+var_B98]
 * 000000014035C029: mov     rcx, r13
 * 000000014035C02C: call    KeGuardDispatchICall
 * 000000014035C031: mov     byte ptr [rbp+0B70h+arg_8], al
 * 000000014035C037: mov     rcx, r13
 * 000000014035C03A: mov     rax, [rsi+3F0h]
 * 000000014035C041: call    KeGuardDispatchICall
 * 000000014035C046: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035C04B: cmp     bl, 72h ; 'r'
 * 000000014035C04E: jz      short loc_14035C0C7
 * 000000014035C050: mov     eax, [rsi+8F8h]
 * 000000014035C056: test    eax, eax
 * 000000014035C058: jnz     short loc_14035C0C7
 * 000000014035C05A: mov     rax, [rsi+590h]
 * 000000014035C061: movzx   ecx, bl
 * 000000014035C064: xor     rcx, 72h
 * 000000014035C068: mov     [rax+18h], rcx
 * 000000014035C06C: mov     eax, [rsi+8F8h]
 * 000000014035C072: test    eax, eax
 * 000000014035C074: jnz     short loc_14035C0C7
 * 000000014035C076: mov     r15, [rsp+0C70h+var_C18]
 * 000000014035C07B: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035C085: add     rax, rsi
 * 000000014035C088: xor     edx, edx
 * 000000014035C08A: mov     [rsi+900h], rax
 * 000000014035C091: mov     rcx, rsi
 * 000000014035C094: mov     rax, 0B3B74BDEE4453415h
 * 000000014035C09E: add     rax, r15
 * 000000014035C0A1: mov     [rsi+908h], rax
 * 000000014035C0A8: movsxd  rax, dword ptr [r15]
 * 000000014035C0AB: mov     [rsi+910h], rax
 * 000000014035C0B2: mov     [rsi+918h], r13
 * 000000014035C0B9: mov     [rsi+8F8h], r12d
 * 000000014035C0C0: call    sub_14036B3BC
 * 000000014035C0C5: jmp     short loc_14035C0CC
 * 000000014035C0C7: mov     r15, [rsp+0C70h+var_C18]
 * 000000014035C0CC: xor     edx, edx
 * 000000014035C0CE: movzx   ecx, bl
 * 000000014035C0D1: and     ecx, 7
 * 000000014035C0D4: mov     r14b, dl
 * 000000014035C0D7: mov     r12b, dl
 * 000000014035C0DA: sub     ecx, 1
 * 000000014035C0DD: jz      short loc_14035C14C
 * 000000014035C0DF: cmp     ecx, 1
 * 000000014035C0E2: jz      short loc_14035C13F
 * 000000014035C0E4: test    bl, 7
 * 000000014035C0E7: jz      short loc_14035C14F
 * 000000014035C0E9: cmp     [rsi+8F8h], edx
 * 000000014035C0EF: jnz     short loc_14035C14F
 * 000000014035C0F1: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035C0FB: mov     rcx, rsi
 * 000000014035C0FE: add     rax, rsi
 * 000000014035C101: mov     [rsi+900h], rax
 * 000000014035C108: mov     rax, 0B3B74BDEE4453415h
 * 000000014035C112: add     rax, r15
 * 000000014035C115: mov     [rsi+908h], rax
 * 000000014035C11C: movsxd  rax, dword ptr [r15]
 * 000000014035C11F: mov     [rsi+910h], rax
 * 000000014035C126: lea     eax, [rdx+1]
 * 000000014035C129: mov     [rsi+918h], r13
 * 000000014035C130: mov     [rsi+8F8h], eax
 * 000000014035C136: call    sub_14036B3BC
 * 000000014035C13B: xor     edx, edx
 * 000000014035C13D: jmp     short loc_14035C14F
 * 000000014035C13F: mov     eax, 10h
 * 000000014035C144: mov     r14b, al
 * 000000014035C147: mov     r12b, al
 * 000000014035C14A: jmp     short loc_14035C14F
 * 000000014035C14C: mov     r14b, 30h ; '0'
 * 000000014035C14F: mov     r15, [rsi+5C8h]
 * 000000014035C156: movzx   ebx, bl
 * 000000014035C159: shr     rbx, 4
 * 000000014035C15D: or      r14b, [r15+rbx*2]
 * 000000014035C161: cmp     r14b, byte ptr [rbp+0B70h+arg_8]
 * 000000014035C168: mov     r14, [rsp+0C70h+var_C18]
 * 000000014035C16D: jz      short loc_14035C1C5
 * 000000014035C16F: cmp     [rsi+8F8h], edx
 * 000000014035C175: jnz     short loc_14035C1C5
 * 000000014035C177: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035C181: xor     edx, edx
 * 000000014035C183: add     rax, rsi
 * 000000014035C186: mov     rcx, rsi
 * 000000014035C189: mov     [rsi+900h], rax
 * 000000014035C190: mov     rax, 0B3B74BDEE4453415h
 * 000000014035C19A: add     rax, r14
 * 000000014035C19D: mov     [rsi+908h], rax
 * 000000014035C1A4: movsxd  rax, dword ptr [r14]
 * 000000014035C1A7: mov     [rsi+910h], rax
 * 000000014035C1AE: mov     eax, 1
 * 000000014035C1B3: mov     [rsi+918h], r13
 * 000000014035C1BA: mov     [rsi+8F8h], eax
 * 000000014035C1C0: call    sub_14036B3BC
 * 000000014035C1C5: mov     al, [r15+rbx*2+1]
 * 000000014035C1CA: xor     r15d, r15d
 * 000000014035C1CD: or      al, r12b
 * 000000014035C1D0: lea     ebx, [r15+1]
 * 000000014035C1D4: cmp     al, [rbp+0B70h+var_B98]
 * 000000014035C1D7: jz      short loc_14035C22B
 * 000000014035C1D9: cmp     [rsi+8F8h], r15d
 * 000000014035C1E0: jnz     short loc_14035C22B
 * 000000014035C1E2: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035C1EC: xor     edx, edx
 * 000000014035C1EE: add     rax, rsi
 * 000000014035C1F1: mov     rcx, rsi
 * 000000014035C1F4: mov     [rsi+900h], rax
 * 000000014035C1FB: mov     rax, 0B3B74BDEE4453415h
 * 000000014035C205: add     rax, r14
 * 000000014035C208: mov     [rsi+908h], rax
 * 000000014035C20F: movsxd  rax, dword ptr [r14]
 * 000000014035C212: mov     [rsi+910h], rax
 * 000000014035C219: mov     [rsi+918h], r13
 * 000000014035C220: mov     [rsi+8F8h], ebx
 * 000000014035C226: call    sub_14036B3BC
 * 000000014035C22B: cmp     r13, [rsi+4E0h]
 * 000000014035C232: jz      short loc_14035C24A
 * 000000014035C234: mov     rax, [rsi+3D8h]
 * 000000014035C23B: mov     edx, ebx
 * 000000014035C23D: mov     rcx, r13
 * 000000014035C240: call    KeGuardDispatchICall
 * 000000014035C245: mov     r14, rax
 * 000000014035C248: jmp     short loc_14035C24D
 * 000000014035C24A: mov     r14, r15
 * 000000014035C24D: mov     [rsp+0C70h+var_C08], r14
 * 000000014035C252: test    r14, r14
 * 000000014035C255: jz      loc_14035C3BD
 * 000000014035C25B: mov     rcx, [r14]
 * 000000014035C25E: mov     rbx, r14
 * 000000014035C261: test    rcx, rcx
 * 000000014035C264: jz      loc_14035C3AE
 * 000000014035C26A: mov     dil, byte ptr [rbp+0B70h+arg_8]
 * 000000014035C271: mov     r12, [rsp+0C70h+var_BF8]
 * 000000014035C276: mov     r14, [rsp+0C70h+var_C18]
 * 000000014035C27B: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 000000014035C27F: mov     [rbx], rcx
 * 000000014035C282: mov     rax, [rsi+1E0h]
 * 000000014035C289: call    KeGuardDispatchICall
 * 000000014035C28E: mov     rcx, [rbx+8]
 * 000000014035C292: movzx   edx, [rbp+0B70h+var_B98]
 * 000000014035C296: mov     r15, rcx
 * 000000014035C299: movzx   eax, dil
 * 000000014035C29D: and     r15, 0FFFFFFFFFFFF0000h
 * 000000014035C2A4: cmp     r15, r12
 * 000000014035C2A7: cmovz   edx, eax
 * 000000014035C2AA: mov     rax, [rsi+3F8h]
 * 000000014035C2B1: shr     rcx, 6
 * 000000014035C2B5: and     cl, 0Fh
 * 000000014035C2B8: call    KeGuardDispatchICall
 * 000000014035C2BD: test    eax, eax
 * 000000014035C2BF: jnz     loc_14035C38F
 * 000000014035C2C5: test    dword ptr [rsi+990h], 40000000h
 * 000000014035C2CF: lea     r10d, [rax+1]
 * 000000014035C2D3: jz      short loc_14035C31F
 * 000000014035C2D5: mov     rcx, [rsi+0A80h]
 * 000000014035C2DC: lea     edx, [rax+30h]
 * 000000014035C2DF: lea     r8d, [rax+6]
 * 000000014035C2E3: mov     rax, [r14]
 * 000000014035C2E6: add     edx, 0FFFFFFF8h
 * 000000014035C2E9: mov     [rcx], rax
 * 000000014035C2EC: add     r14, 8
 * 000000014035C2F0: add     rcx, 8
 * 000000014035C2F4: sub     r8, r10
 * 000000014035C2F7: jnz     short loc_14035C2E3
 * 000000014035C2F9: test    edx, edx
 * 000000014035C2FB: jz      short loc_14035C318
 * 000000014035C2FD: mov     edi, 0FFFFFFFFh
 * 000000014035C302: mov     al, [r14]
 * 000000014035C305: add     r14, r10
 * 000000014035C308: mov     [rcx], al
 * 000000014035C30A: add     rcx, r10
 * 000000014035C30D: add     edx, edi
 * 000000014035C30F: jnz     short loc_14035C302
 * 000000014035C311: mov     dil, byte ptr [rbp+0B70h+arg_8]
 * 000000014035C318: mov     r14, [rsi+0A80h]
 * 000000014035C31F: mov     [r14+18h], r15
 * 000000014035C323: xor     r15d, r15d
 * 000000014035C326: mov     rax, [rbx]
 * 000000014035C329: mov     [r14+20h], rax
 * 000000014035C32D: mov     eax, [rbx+8]
 * 000000014035C330: shr     rax, 6
 * 000000014035C334: and     al, 0Fh
 * 000000014035C336: mov     [r14+28h], al
 * 000000014035C33A: cmp     [rsi+8F8h], r15d
 * 000000014035C341: jnz     short loc_14035C392
 * 000000014035C343: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035C34D: xor     edx, edx
 * 000000014035C34F: add     rax, rsi
 * 000000014035C352: mov     rcx, rsi
 * 000000014035C355: mov     [rsi+900h], rax
 * 000000014035C35C: mov     rax, 0B3B74BDEE4453415h
 * 000000014035C366: add     rax, r14
 * 000000014035C369: mov     [rsi+908h], rax
 * 000000014035C370: movsxd  rax, dword ptr [r14]
 * 000000014035C373: mov     [rsi+910h], rax
 * 000000014035C37A: mov     [rsi+918h], r13
 * 000000014035C381: mov     [rsi+8F8h], r10d
 * 000000014035C388: call    sub_14036B3BC
 * 000000014035C38D: jmp     short loc_14035C392
 * 000000014035C38F: xor     r15d, r15d
 * 000000014035C392: add     rbx, 30h ; '0'
 * 000000014035C396: mov     rcx, [rbx]
 * 000000014035C399: test    rcx, rcx
 * 000000014035C39C: jnz     loc_14035C27B
 * 000000014035C3A2: mov     r14, [rsp+0C70h+var_C08]
 * 000000014035C3A7: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035C3AE: mov     rax, [rsi+100h]
 * 000000014035C3B5: mov     rcx, r14
 * 000000014035C3B8: call    KeGuardDispatchICall
 * 000000014035C3BD: mov     rax, [rsi+3A8h]
 * 000000014035C3C4: mov     rcx, r13
 * 000000014035C3C7: call    KeGuardDispatchICall
 * 000000014035C3CC: mov     r14d, [rsp+0C70h+var_C00]
 * 000000014035C3D1: mov     eax, 8000h
 * 000000014035C3D6: add     [rsi+828h], eax
 * 000000014035C3DC: mov     rcx, [rsp+0C70h+var_C20]
 * 000000014035C3E1: test    rcx, rcx
 * 000000014035C3E4: jz      short loc_14035C3F2
 * 000000014035C3E6: mov     rax, [rsi+1E0h]
 * 000000014035C3ED: call    KeGuardDispatchICall
 * 000000014035C3F2: shl     r14d, 8
 * 000000014035C3F6: add     [rsi+828h], r14d
 * 000000014035C3FD: jmp     loc_140355323
 * 000000014035C402: test    [r13+2Ah], dl
 * 000000014035C406: jz      short loc_14035C448
 * 000000014035C408: xor     eax, eax
 * 000000014035C40A: cmp     [rsi+980h], rax
 * 000000014035C411: jz      loc_14035C630
 * 000000014035C417: mov     ecx, [rsi+994h]
 * 000000014035C41D: test    r15b, cl
 * 000000014035C420: jnz     loc_14035C630
 * 000000014035C426: xor     r15d, r15d
 * 000000014035C429: cmp     [rsi+824h], r15d
 * 000000014035C430: jnz     loc_14035C61B
 * 000000014035C436: mov     eax, ecx
 * 000000014035C438: shl     eax, 3
 * 000000014035C43B: xor     eax, ecx
 * 000000014035C43D: and     eax, 20h
 * 000000014035C440: xor     eax, ecx
 * 000000014035C442: mov     [rsi+994h], eax
 * 000000014035C448: mov     r11, [r13+8]
 * 000000014035C44C: mov     r8d, [rsi+824h]
 * 000000014035C453: mov     [rbp+0B70h+var_BA0], r11
 * 000000014035C457: lea     rax, [r8+r8*2]
 * 000000014035C45B: lea     rcx, [r11+rax*4]
 * 000000014035C45F: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014035C469: lea     r9, [rcx+0Ch]
 * 000000014035C46D: mov     [rbp+0B70h+arg_8], rcx
 * 000000014035C474: mov     ecx, [r13+24h]
 * 000000014035C478: mul     rcx
 * 000000014035C47B: mov     [rsp+0C70h+var_C08], r9
 * 000000014035C480: mov     r10, rdx
 * 000000014035C483: shr     r10, 3
 * 000000014035C487: mov     eax, r10d
 * 000000014035C48A: mov     [rbp+0B70h+var_BC8], r10
 * 000000014035C48E: lea     rcx, [rax+rax*2]
 * 000000014035C492: lea     rax, [r11+rcx*4]
 * 000000014035C496: lea     r11d, [r10-1]
 * 000000014035C49A: mov     [rbp+0B70h+var_BF0], rax
 * 000000014035C49E: lea     rax, [r13+30h]
 * 000000014035C4A2: mov     edx, r11d
 * 000000014035C4A5: add     rdx, 7
 * 000000014035C4A9: mov     dword ptr [rbp+0B70h+var_BD8], r11d
 * 000000014035C4AD: lea     r15, [rax+r8]
 * 000000014035C4B1: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 000000014035C4B5: add     rdx, rax
 * 000000014035C4B8: mov     [rsp+0C70h+var_C20], r15
 * 000000014035C4BD: movzx   eax, word ptr [r13+28h]
 * 000000014035C4C2: mov     [rbp+0B70h+var_B70], rdx
 * 000000014035C4C6: lea     rcx, [rax+rax*2]
 * 000000014035C4CA: lea     rax, [rdx+rcx*8]
 * 000000014035C4CE: mov     ecx, 1
 * 000000014035C4D3: mov     [rbp+0B70h+var_BE0], rax
 * 000000014035C4D7: cmp     r8d, r11d
 * 000000014035C4DA: jnb     loc_14035C822
 * 000000014035C4E0: mov     rdi, [rbp+0B70h+arg_8]
 * 000000014035C4E7: xor     edx, edx
 * 000000014035C4E9: cmp     [r15], dl
 * 000000014035C4EC: jl      loc_14035C7B1
 * 000000014035C4F2: mov     eax, [rdi+4]
 * 000000014035C4F5: mov     r9d, [r9]
 * 000000014035C4F8: mov     r13d, eax
 * 000000014035C4FB: sub     r9d, eax
 * 000000014035C4FE: mov     rax, [rsp+0C70h+var_C18]
 * 000000014035C503: mov     r12d, r9d
 * 000000014035C506: mov     [rbp+0B70h+arg_8], r12
 * 000000014035C50D: add     r13, [rax+18h]
 * 000000014035C511: add     [rsi+828h], r9d
 * 000000014035C518: mov     r10, r13
 * 000000014035C51B: mov     ebx, [rsi+814h]
 * 000000014035C521: mov     rax, r13
 * 000000014035C524: mov     r14, [rsi+818h]
 * 000000014035C52B: lea     rcx, [r9+r13]
 * 000000014035C52F: mov     [rsp+0C70h+var_BF8], r13
 * 000000014035C534: cmp     r13, rcx
 * 000000014035C537: jnb     short loc_14035C54A
 * 000000014035C539: mov     r8d, 40h ; '@'
 * 000000014035C53F: prefetchnta byte ptr [rax]
 * 000000014035C542: add     rax, r8
 * 000000014035C545: cmp     rax, rcx
 * 000000014035C548: jb      short loc_14035C53F
 * 000000014035C54A: mov     r11d, r9d
 * 000000014035C54D: mov     r8, r14
 * 000000014035C550: shr     r11d, 7
 * 000000014035C554: test    r11d, r11d
 * 000000014035C557: jz      short loc_14035C5CC
 * 000000014035C559: mov     esi, 0FFFFFFFFh
 * 000000014035C55E: mov     r15d, 1
 * 000000014035C564: mov     r12, 7010008004002001h
 * 000000014035C56E: mov     eax, 8
 * 000000014035C573: xor     r8, [r10]
 * 000000014035C576: mov     ecx, ebx
 * 000000014035C578: rol     r8, cl
 * 000000014035C57B: xor     r8, [r10+8]
 * 000000014035C57F: add     r10, 10h
 * 000000014035C583: rol     r8, cl
 * 000000014035C586: sub     rax, r15
 * 000000014035C589: jnz     short loc_14035C573
 * 000000014035C58B: mov     rcx, r10
 * 000000014035C58E: sub     rcx, r13
 * 000000014035C591: xor     rcx, r14
 * 000000014035C594: mov     rax, rcx
 * 000000014035C597: rol     rax, 11h
 * 000000014035C59B: xor     rcx, rax
 * 000000014035C59E: mov     rax, r12
 * 000000014035C5A1: mul     rcx
 * 000000014035C5A4: xor     ebx, edx
 * 000000014035C5A6: mov     [rbp+0B70h+var_598], rdx
 * 000000014035C5AD: xor     ebx, eax
 * 000000014035C5AF: and     ebx, 3Fh
 * 000000014035C5B2: cmovz   ebx, r15d
 * 000000014035C5B6: add     r11d, esi
 * 000000014035C5B9: jnz     short loc_14035C56E
 * 000000014035C5BB: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035C5C0: mov     r12, [rbp+0B70h+arg_8]
 * 000000014035C5C7: mov     r15, [rsp+0C70h+var_C20]
 * 000000014035C5CC: and     r9d, 7Fh
 * 000000014035C5D0: mov     r11d, 1
 * 000000014035C5D6: cmp     r9d, 8
 * 000000014035C5DA: jb      short loc_14035C5F8
 * 000000014035C5DC: mov     eax, r9d
 * 000000014035C5DF: shr     rax, 3
 * 000000014035C5E3: xor     r8, [r10]
 * 000000014035C5E6: mov     ecx, ebx
 * 000000014035C5E8: rol     r8, cl
 * 000000014035C5EB: add     r10, 8
 * 000000014035C5EF: add     r9d, 0FFFFFFF8h
 * 000000014035C5F3: sub     rax, r11
 * 000000014035C5F6: jnz     short loc_14035C5E3
 * 000000014035C5F8: test    r9d, r9d
 * 000000014035C5FB: jz      short loc_14035C616
 * 000000014035C5FD: mov     edx, 0FFFFFFFFh
 * 000000014035C602: movzx   eax, byte ptr [r10]
 * 000000014035C606: mov     ecx, ebx
 * 000000014035C608: xor     r8, rax
 * 000000014035C60B: add     r10, r11
 * 000000014035C60E: rol     r8, cl
 * 000000014035C611: add     r9d, edx
 * 000000014035C614: jnz     short loc_14035C602
 * 000000014035C616: mov     rax, r8
 * 000000014035C619: jmp     short loc_14035C638
 * 000000014035C61B: test    cl, 20h
 * 000000014035C61E: jz      loc_14035C448
 * 000000014035C624: mov     [rsi+824h], r15d
 * 000000014035C62B: jmp     loc_140355323
 * 000000014035C630: xor     r15d, r15d
 * 000000014035C633: jmp     short loc_14035C624
 * 000000014035C635: xor     r8b, al
 * 000000014035C638: shr     rax, 7
 * 000000014035C63C: test    rax, rax
 * 000000014035C63F: jnz     short loc_14035C635
 * 000000014035C641: movzx   ecx, byte ptr [r15]
 * 000000014035C645: mov     eax, ecx
 * 000000014035C647: movzx   edx, r8b
 * 000000014035C64B: and     edx, 7Fh
 * 000000014035C64E: and     eax, 7Fh
 * 000000014035C651: mov     dword ptr [rbp+0B70h+arg_8], edx
 * 000000014035C657: cmp     edx, eax
 * 000000014035C659: jz      loc_14035C793
 * 000000014035C65F: test    r12, r12
 * 000000014035C662: jz      loc_14035C718
 * 000000014035C668: mov     eax, [rsi+994h]
 * 000000014035C66E: mov     r8d, 40h ; '@'
 * 000000014035C674: test    r8b, al
 * 000000014035C677: jz      loc_14035C718
 * 000000014035C67D: mov     r15, cr8
 * 000000014035C681: lea     eax, [r8-3Eh]
 * 000000014035C685: mov     cr8, rax
 * 000000014035C689: mov     rbx, r13
 * 000000014035C68C: dec     r12
 * 000000014035C68F: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014035C696: add     r13, r12
 * 000000014035C699: or      r13, 0FFFh
 * 000000014035C6A0: lea     r12, [rbx-1]
 * 000000014035C6A4: movzx   r14d, r15b
 * 000000014035C6A8: mov     rax, [rsi+468h]
 * 000000014035C6AF: xor     edx, edx
 * 000000014035C6B1: mov     rcx, rbx
 * 000000014035C6B4: call    KeGuardDispatchICall
 * 000000014035C6B9: cmp     eax, 0C000022Dh
 * 000000014035C6BE: jnz     short loc_14035C6E3
 * 000000014035C6C0: mov     eax, 1
 * 000000014035C6C5: cmp     r15b, al
 * 000000014035C6C8: ja      short loc_14035C6E9
 * 000000014035C6CA: movzx   r14d, r15b
 * 000000014035C6CE: mov     cr8, r14
 * 000000014035C6D2: mov     al, [rbx]
 * 000000014035C6D4: mov     rax, cr8
 * 000000014035C6D8: mov     eax, 2
 * 000000014035C6DD: mov     cr8, rax
 * 000000014035C6E1: jmp     short loc_14035C6A8
 * 000000014035C6E3: xor     ecx, ecx
 * 000000014035C6E5: test    eax, eax
 * 000000014035C6E7: js      short loc_14035C702
 * 000000014035C6E9: mov     eax, 1000h
 * 000000014035C6EE: add     rbx, rax
 * 000000014035C6F1: add     r12, rax
 * 000000014035C6F4: cmp     r12, r13
 * 000000014035C6F7: jnz     short loc_14035C6A4
 * 000000014035C6F9: mov     cr8, r14
 * 000000014035C6FD: jmp     loc_14035C793
 * 000000014035C702: mov     cr8, r14
 * 000000014035C706: mov     rax, [rsp+0C70h+var_C20]
 * 000000014035C70B: mov     edx, dword ptr [rbp+0B70h+arg_8]
 * 000000014035C711: mov     r13, [rsp+0C70h+var_BF8]
 * 000000014035C716: mov     cl, [rax]
 * 000000014035C718: movzx   eax, cl
 * 000000014035C71B: mov     ecx, [rsi+8F8h]
 * 000000014035C721: and     eax, 7Fh
 * 000000014035C724: test    ecx, ecx
 * 000000014035C726: jnz     short loc_14035C73E
 * 000000014035C728: mov     ecx, edx
 * 000000014035C72A: xor     rcx, rax
 * 000000014035C72D: mov     rax, [rsi+590h]
 * 000000014035C734: mov     [rax+18h], rcx
 * 000000014035C738: mov     ecx, [rsi+8F8h]
 * 000000014035C73E: xor     edx, edx
 * 000000014035C740: test    ecx, ecx
 * 000000014035C742: jnz     short loc_14035C795
 * 000000014035C744: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035C749: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035C753: add     rax, rsi
 * 000000014035C756: mov     [rsi+900h], rax
 * 000000014035C75D: mov     rax, 0B3B74BDEE4453415h
 * 000000014035C767: add     rax, rcx
 * 000000014035C76A: mov     [rsi+908h], rax
 * 000000014035C771: movsxd  rax, dword ptr [rcx]
 * 000000014035C774: mov     rcx, rsi
 * 000000014035C777: mov     [rsi+910h], rax
 * 000000014035C77E: lea     eax, [rdx+1]
 * 000000014035C781: mov     [rsi+918h], r13
 * 000000014035C788: mov     [rsi+8F8h], eax
 * 000000014035C78E: call    sub_14036B3BC
 * 000000014035C793: xor     edx, edx
 * 000000014035C795: mov     r15, [rsp+0C70h+var_C20]
 * 000000014035C79A: mov     eax, 40h ; '@'
 * 000000014035C79F: add     [rsi+828h], eax
 * 000000014035C7A5: mov     r9, [rsp+0C70h+var_C08]
 * 000000014035C7AA: mov     r12, [rbp+0B70h+var_BC0]
 * 000000014035C7AE: lea     ecx, [rax-3Fh]
 * 000000014035C7B1: mov     eax, 0Ch
 * 000000014035C7B6: add     r15, rcx
 * 000000014035C7B9: add     r9, rax
 * 000000014035C7BC: mov     [rsp+0C70h+var_C20], r15
 * 000000014035C7C1: add     rdi, rax
 * 000000014035C7C4: mov     [rsp+0C70h+var_C08], r9
 * 000000014035C7C9: cmp     r9, [rbp+0B70h+var_BF0]
 * 000000014035C7CD: jnb     short loc_14035C7DF
 * 000000014035C7CF: mov     eax, [r12]
 * 000000014035C7D3: cmp     [rsi+828h], eax
 * 000000014035C7D9: jl      loc_14035C4E9
 * 000000014035C7DF: sub     rdi, [rbp+0B70h+var_BA0]
 * 000000014035C7E3: mov     rax, 2AAAAAAAAAAAAAABh
 * 000000014035C7ED: mov     r11d, dword ptr [rbp+0B70h+var_BD8]
 * 000000014035C7F1: mov     r10, [rbp+0B70h+var_BC8]
 * 000000014035C7F5: imul    rdi
 * 000000014035C7F8: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035C7FF: sar     rdx, 1
 * 000000014035C802: mov     rax, rdx
 * 000000014035C805: shr     rax, 3Fh
 * 000000014035C809: add     rdx, rax
 * 000000014035C80C: mov     r8d, edx
 * 000000014035C80F: mov     [rsi+824h], edx
 * 000000014035C815: mov     rdx, [rbp+0B70h+var_B70]
 * 000000014035C819: cmp     r8d, r11d
 * 000000014035C81C: jb      loc_140355320
 * 000000014035C822: mov     eax, [rsi+82Ch]
 * 000000014035C828: cmp     [rsi+828h], eax
 * 000000014035C82E: jge     loc_140355320
 * 000000014035C834: sub     r8d, r10d
 * 000000014035C837: add     r8d, ecx
 * 000000014035C83A: lea     rcx, [r8+r8*2]
 * 000000014035C83E: lea     rcx, [rdx+rcx*8]
 * 000000014035C842: mov     [rsp+0C70h+var_C08], rcx
 * 000000014035C847: mov     rdi, [rsp+0C70h+var_C18]
 * 000000014035C84C: lea     rdx, [rcx+8]
 * 000000014035C850: mov     eax, 2
 * 000000014035C855: mov     [rbp+0B70h+arg_8], rdx
 * 000000014035C85C: mov     r12d, eax
 * 000000014035C85F: mov     [rsp+0C70h+var_C20], rax
 * 000000014035C864: xor     r15d, r15d
 * 000000014035C867: lea     eax, [r12-1]
 * 000000014035C86C: lea     ecx, [rax+0Bh]
 * 000000014035C86F: cmp     [rdx], r15d
 * 000000014035C872: jl      loc_14035CA86
 * 000000014035C878: mov     eax, [rdx-8]
 * 000000014035C87B: mov     r8d, [rdx-4]
 * 000000014035C87F: mov     r13d, eax
 * 000000014035C882: add     r13, [rdi+18h]
 * 000000014035C886: sub     r8d, eax
 * 000000014035C889: add     [rsi+828h], r8d
 * 000000014035C890: mov     r9, r13
 * 000000014035C893: mov     r11d, [rsi+814h]
 * 000000014035C89A: mov     rax, r13
 * 000000014035C89D: mov     r14, [rsi+818h]
 * 000000014035C8A4: lea     rcx, [r8+r13]
 * 000000014035C8A8: mov     r15d, r8d
 * 000000014035C8AB: mov     [rbp+0B70h+var_BF0], r13
 * 000000014035C8AF: mov     [rsp+0C70h+var_BF8], r15
 * 000000014035C8B4: cmp     r13, rcx
 * 000000014035C8B7: jnb     short loc_14035C8CA
 * 000000014035C8B9: mov     r10d, 40h ; '@'
 * 000000014035C8BF: prefetchnta byte ptr [rax]
 * 000000014035C8C2: add     rax, r10
 * 000000014035C8C5: cmp     rax, rcx
 * 000000014035C8C8: jb      short loc_14035C8BF
 * 000000014035C8CA: mov     r10d, r8d
 * 000000014035C8CD: mov     rbx, r14
 * 000000014035C8D0: shr     r10d, 7
 * 000000014035C8D4: test    r10d, r10d
 * 000000014035C8D7: jz      short loc_14035C955
 * 000000014035C8D9: mov     esi, 0FFFFFFFFh
 * 000000014035C8DE: mov     r12d, 1
 * 000000014035C8E4: mov     r15, 7010008004002001h
 * 000000014035C8EE: mov     eax, 8
 * 000000014035C8F3: xor     rbx, [r9]
 * 000000014035C8F6: mov     ecx, r11d
 * 000000014035C8F9: rol     rbx, cl
 * 000000014035C8FC: xor     rbx, [r9+8]
 * 000000014035C900: add     r9, 10h
 * 000000014035C904: rol     rbx, cl
 * 000000014035C907: sub     rax, r12
 * 000000014035C90A: jnz     short loc_14035C8F3
 * 000000014035C90C: mov     rcx, r9
 * 000000014035C90F: sub     rcx, r13
 * 000000014035C912: xor     rcx, r14
 * 000000014035C915: mov     rax, rcx
 * 000000014035C918: rol     rax, 11h
 * 000000014035C91C: xor     rcx, rax
 * 000000014035C91F: mov     rax, r15
 * 000000014035C922: mul     rcx
 * 000000014035C925: xor     r11d, edx
 * 000000014035C928: mov     [rbp+0B70h+var_590], rdx
 * 000000014035C92F: xor     r11d, eax
 * 000000014035C932: and     r11d, 3Fh
 * 000000014035C936: cmovz   r11d, r12d
 * 000000014035C93A: add     r10d, esi
 * 000000014035C93D: jnz     short loc_14035C8EE
 * 000000014035C93F: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035C944: mov     r15, [rsp+0C70h+var_BF8]
 * 000000014035C949: mov     rdx, [rbp+0B70h+arg_8]
 * 000000014035C950: mov     r12, [rsp+0C70h+var_C20]
 * 000000014035C955: and     r8d, 7Fh
 * 000000014035C959: mov     r14d, 1
 * 000000014035C95F: cmp     r8d, 8
 * 000000014035C963: jb      short loc_14035C982
 * 000000014035C965: mov     eax, r8d
 * 000000014035C968: shr     rax, 3
 * 000000014035C96C: xor     rbx, [r9]
 * 000000014035C96F: mov     ecx, r11d
 * 000000014035C972: rol     rbx, cl
 * 000000014035C975: add     r9, 8
 * 000000014035C979: add     r8d, 0FFFFFFF8h
 * 000000014035C97D: sub     rax, r14
 * 000000014035C980: jnz     short loc_14035C96C
 * 000000014035C982: test    r8d, r8d
 * 000000014035C985: jz      short loc_14035C9A2
 * 000000014035C987: mov     r10d, 0FFFFFFFFh
 * 000000014035C98D: movzx   eax, byte ptr [r9]
 * 000000014035C991: mov     ecx, r11d
 * 000000014035C994: xor     rbx, rax
 * 000000014035C997: add     r9, r14
 * 000000014035C99A: rol     rbx, cl
 * 000000014035C99D: add     r8d, r10d
 * 000000014035C9A0: jnz     short loc_14035C98D
 * 000000014035C9A2: mov     rax, rbx
 * 000000014035C9A5: jmp     short loc_14035C9A9
 * 000000014035C9A7: xor     ebx, eax
 * 000000014035C9A9: shr     rax, 1Fh
 * 000000014035C9AD: test    rax, rax
 * 000000014035C9B0: jnz     short loc_14035C9A7
 * 000000014035C9B2: mov     ecx, [rdx]
 * 000000014035C9B4: btr     ebx, 1Fh
 * 000000014035C9B8: mov     eax, ecx
 * 000000014035C9BA: btr     eax, 1Fh
 * 000000014035C9BE: cmp     ebx, eax
 * 000000014035C9C0: jz      loc_14035CA7B
 * 000000014035C9C6: test    r15, r15
 * 000000014035C9C9: jz      loc_14035CAF0
 * 000000014035C9CF: mov     eax, [rsi+994h]
 * 000000014035C9D5: mov     r8d, 40h ; '@'
 * 000000014035C9DB: test    r8b, al
 * 000000014035C9DE: jz      loc_14035CAF0
 * 000000014035C9E4: mov     r12, cr8
 * 000000014035C9E8: lea     eax, [r8-3Eh]
 * 000000014035C9EC: mov     cr8, rax
 * 000000014035C9F0: mov     r14, r13
 * 000000014035C9F3: lea     rax, [r13-1]
 * 000000014035C9F7: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035C9FE: add     rax, r15
 * 000000014035CA01: or      rax, 0FFFh
 * 000000014035CA07: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035CA0C: lea     r13, [r14-1]
 * 000000014035CA10: movzx   r15d, r12b
 * 000000014035CA14: mov     rax, [rsi+468h]
 * 000000014035CA1B: xor     edx, edx
 * 000000014035CA1D: mov     rcx, r14
 * 000000014035CA20: call    KeGuardDispatchICall
 * 000000014035CA25: cmp     eax, 0C000022Dh
 * 000000014035CA2A: jnz     short loc_14035CA50
 * 000000014035CA2C: mov     eax, 1
 * 000000014035CA31: cmp     r12b, al
 * 000000014035CA34: ja      short loc_14035CA58
 * 000000014035CA36: movzx   r15d, r12b
 * 000000014035CA3A: mov     cr8, r15
 * 000000014035CA3E: mov     al, [r14]
 * 000000014035CA41: mov     rax, cr8
 * 000000014035CA45: mov     eax, 2
 * 000000014035CA4A: mov     cr8, rax
 * 000000014035CA4E: jmp     short loc_14035CA14
 * 000000014035CA50: test    eax, eax
 * 000000014035CA52: js      loc_14035CADA
 * 000000014035CA58: mov     r10d, 1000h
 * 000000014035CA5E: add     r14, r10
 * 000000014035CA61: add     r13, r10
 * 000000014035CA64: cmp     r13, [rsp+0C70h+var_BF8]
 * 000000014035CA69: jnz     short loc_14035CA10
 * 000000014035CA6B: mov     cr8, r15
 * 000000014035CA6F: mov     rdx, [rbp+0B70h+arg_8]
 * 000000014035CA76: mov     r12, [rsp+0C70h+var_C20]
 * 000000014035CA7B: xor     r15d, r15d
 * 000000014035CA7E: mov     ecx, 0Ch
 * 000000014035CA83: lea     eax, [rcx-0Bh]
 * 000000014035CA86: add     rdx, rcx
 * 000000014035CA89: sub     r12, rax
 * 000000014035CA8C: mov     [rbp+0B70h+arg_8], rdx
 * 000000014035CA93: mov     [rsp+0C70h+var_C20], r12
 * 000000014035CA98: jnz     loc_14035C86F
 * 000000014035CA9E: mov     rcx, [rsp+0C70h+var_C08]
 * 000000014035CAA3: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035CAAA: add     [rsi+824h], eax
 * 000000014035CAB0: add     rcx, 18h
 * 000000014035CAB4: mov     [rsp+0C70h+var_C08], rcx
 * 000000014035CAB9: cmp     rcx, [rbp+0B70h+var_BE0]
 * 000000014035CABD: jz      loc_14035C624
 * 000000014035CAC3: mov     eax, [rsi+82Ch]
 * 000000014035CAC9: cmp     [rsi+828h], eax
 * 000000014035CACF: jl      loc_14035C847
 * 000000014035CAD5: jmp     loc_140355323
 * 000000014035CADA: mov     cr8, r15
 * 000000014035CADE: mov     rdx, [rbp+0B70h+arg_8]
 * 000000014035CAE5: mov     r13, [rbp+0B70h+var_BF0]
 * 000000014035CAE9: mov     r12, [rsp+0C70h+var_C20]
 * 000000014035CAEE: mov     ecx, [rdx]
 * 000000014035CAF0: mov     eax, ecx
 * 000000014035CAF2: xor     r15d, r15d
 * 000000014035CAF5: mov     ecx, [rsi+8F8h]
 * 000000014035CAFB: btr     eax, 1Fh
 * 000000014035CAFF: test    ecx, ecx
 * 000000014035CB01: jnz     loc_14035CA7E
 * 000000014035CB07: mov     ecx, ebx
 * 000000014035CB09: xor     rcx, rax
 * 000000014035CB0C: mov     rax, [rsi+590h]
 * 000000014035CB13: mov     [rax+18h], rcx
 * 000000014035CB17: mov     ecx, [rsi+8F8h]
 * 000000014035CB1D: test    ecx, ecx
 * 000000014035CB1F: jnz     loc_14035CA7E
 * 000000014035CB25: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035CB2F: xor     edx, edx
 * 000000014035CB31: add     rax, rsi
 * 000000014035CB34: mov     [rsi+900h], rax
 * 000000014035CB3B: mov     rax, 0B3B74BDEE4453415h
 * 000000014035CB45: add     rax, rdi
 * 000000014035CB48: mov     [rsi+908h], rax
 * 000000014035CB4F: movsxd  rax, dword ptr [rdi]
 * 000000014035CB52: mov     [rsi+910h], rax
 * 000000014035CB59: lea     eax, [rcx+1]
 * 000000014035CB5C: mov     [rsi+918h], r13
 * 000000014035CB63: mov     rcx, rsi
 * 000000014035CB66: mov     [rsi+8F8h], eax
 * 000000014035CB6C: call    sub_14036B3BC
 * 000000014035CB71: mov     rdx, [rbp+0B70h+arg_8]
 * 000000014035CB78: jmp     loc_14035CA7E
 * 000000014035CB7D: mov     r14, [r13+8]
 * 000000014035CB81: mov     r8d, [r13+10h]
 * 000000014035CB85: mov     r9, r14
 * 000000014035CB88: add     [rsi+828h], r8d
 * 000000014035CB8F: mov     rax, r14
 * 000000014035CB92: mov     r10d, [rsi+814h]
 * 000000014035CB99: mov     r15, [rsi+818h]
 * 000000014035CBA0: lea     rcx, [r14+r8]
 * 000000014035CBA4: cmp     r14, rcx
 * 000000014035CBA7: jnb     short loc_14035CBBA
 * 000000014035CBA9: mov     r11d, 40h ; '@'
 * 000000014035CBAF: prefetchnta byte ptr [rax]
 * 000000014035CBB2: add     rax, r11
 * 000000014035CBB5: cmp     rax, rcx
 * 000000014035CBB8: jb      short loc_14035CBAF
 * 000000014035CBBA: mov     r11d, r8d
 * 000000014035CBBD: mov     rbx, r15
 * 000000014035CBC0: shr     r11d, 7
 * 000000014035CBC4: mov     r12d, 0FFFFFFFFh
 * 000000014035CBCA: test    r11d, r11d
 * 000000014035CBCD: jz      short loc_14035CC3B
 * 000000014035CBCF: mov     rdi, 7010008004002001h
 * 000000014035CBD9: mov     eax, 8
 * 000000014035CBDE: xor     rbx, [r9]
 * 000000014035CBE1: mov     ecx, r10d
 * 000000014035CBE4: rol     rbx, cl
 * 000000014035CBE7: xor     rbx, [r9+8]
 * 000000014035CBEB: add     r9, 10h
 * 000000014035CBEF: rol     rbx, cl
 * 000000014035CBF2: sub     rax, rdx
 * 000000014035CBF5: jnz     short loc_14035CBDE
 * 000000014035CBF7: mov     rcx, r9
 * 000000014035CBFA: sub     rcx, r14
 * 000000014035CBFD: xor     rcx, r15
 * 000000014035CC00: mov     rax, rcx
 * 000000014035CC03: rol     rax, 11h
 * 000000014035CC07: xor     rcx, rax
 * 000000014035CC0A: mov     rax, rdi
 * 000000014035CC0D: mul     rcx
 * 000000014035CC10: xor     r10d, edx
 * 000000014035CC13: mov     [rbp+0B70h+var_588], rdx
 * 000000014035CC1A: xor     r10d, eax
 * 000000014035CC1D: mov     edx, 1
 * 000000014035CC22: and     r10d, 3Fh
 * 000000014035CC26: cmovz   r10d, edx
 * 000000014035CC2A: add     r11d, r12d
 * 000000014035CC2D: jnz     short loc_14035CBD9
 * 000000014035CC2F: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035CC34: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035CC3B: and     r8d, 7Fh
 * 000000014035CC3F: cmp     r8d, 8
 * 000000014035CC43: jb      short loc_14035CC62
 * 000000014035CC45: mov     eax, r8d
 * 000000014035CC48: shr     rax, 3
 * 000000014035CC4C: xor     rbx, [r9]
 * 000000014035CC4F: mov     ecx, r10d
 * 000000014035CC52: rol     rbx, cl
 * 000000014035CC55: add     r9, 8
 * 000000014035CC59: add     r8d, 0FFFFFFF8h
 * 000000014035CC5D: sub     rax, rdx
 * 000000014035CC60: jnz     short loc_14035CC4C
 * 000000014035CC62: xor     r15d, r15d
 * 000000014035CC65: test    r8d, r8d
 * 000000014035CC68: jz      short loc_14035CC7F
 * 000000014035CC6A: movzx   eax, byte ptr [r9]
 * 000000014035CC6E: mov     ecx, r10d
 * 000000014035CC71: xor     rbx, rax
 * 000000014035CC74: add     r9, rdx
 * 000000014035CC77: rol     rbx, cl
 * 000000014035CC7A: add     r8d, r12d
 * 000000014035CC7D: jnz     short loc_14035CC6A
 * 000000014035CC7F: mov     rax, rbx
 * 000000014035CC82: jmp     short loc_14035CC86
 * 000000014035CC84: xor     ebx, eax
 * 000000014035CC86: shr     rax, 1Fh
 * 000000014035CC8A: test    rax, rax
 * 000000014035CC8D: jnz     short loc_14035CC84
 * 000000014035CC8F: btr     ebx, 1Fh
 * 000000014035CC93: mov     r12d, r15d
 * 000000014035CC96: cmp     ebx, [r13+14h]
 * 000000014035CC9A: jz      loc_14035CD85
 * 000000014035CCA0: cmp     [r13+0], r15d
 * 000000014035CCA4: jnz     short loc_14035CCAE
 * 000000014035CCA6: cmp     [r13+18h], r15d
 * 000000014035CCAA: cmovnz  r12d, edx
 * 000000014035CCAE: mov     ecx, [r13+10h]
 * 000000014035CCB2: mov     rdx, [r13+8]
 * 000000014035CCB6: test    rcx, rcx
 * 000000014035CCB9: jz      loc_14035CF45
 * 000000014035CCBF: mov     eax, [rsi+994h]
 * 000000014035CCC5: mov     r8d, 40h ; '@'
 * 000000014035CCCB: test    r8b, al
 * 000000014035CCCE: jz      loc_14035CF45
 * 000000014035CCD4: mov     r13, cr8
 * 000000014035CCD8: lea     eax, [r8-3Eh]
 * 000000014035CCDC: mov     cr8, rax
 * 000000014035CCE0: mov     r14, rdx
 * 000000014035CCE3: lea     rax, [rcx-1]
 * 000000014035CCE7: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035CCEE: add     rax, rdx
 * 000000014035CCF1: or      rax, 0FFFh
 * 000000014035CCF7: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035CCFC: lea     rax, [r14-1]
 * 000000014035CD00: mov     [rbp+0B70h+arg_8], rax
 * 000000014035CD07: movzx   r15d, r13b
 * 000000014035CD0B: mov     rax, [rsi+468h]
 * 000000014035CD12: xor     edx, edx
 * 000000014035CD14: mov     rcx, r14
 * 000000014035CD17: call    KeGuardDispatchICall
 * 000000014035CD1C: cmp     eax, 0C000022Dh
 * 000000014035CD21: jnz     short loc_14035CD50
 * 000000014035CD23: test    r12d, r12d
 * 000000014035CD26: jnz     loc_14035CF39
 * 000000014035CD2C: lea     eax, [r12+1]
 * 000000014035CD31: cmp     r13b, al
 * 000000014035CD34: ja      short loc_14035CD58
 * 000000014035CD36: movzx   r15d, r13b
 * 000000014035CD3A: mov     cr8, r15
 * 000000014035CD3E: mov     al, [r14]
 * 000000014035CD41: mov     rax, cr8
 * 000000014035CD45: lea     eax, [r12+2]
 * 000000014035CD4A: mov     cr8, rax
 * 000000014035CD4E: jmp     short loc_14035CD0B
 * 000000014035CD50: test    eax, eax
 * 000000014035CD52: js      loc_14035CF39
 * 000000014035CD58: mov     rax, [rbp+0B70h+arg_8]
 * 000000014035CD5F: mov     r10d, 1000h
 * 000000014035CD65: add     rax, r10
 * 000000014035CD68: add     r14, r10
 * 000000014035CD6B: mov     [rbp+0B70h+arg_8], rax
 * 000000014035CD72: cmp     rax, [rsp+0C70h+var_BF8]
 * 000000014035CD77: jnz     short loc_14035CD07
 * 000000014035CD79: mov     cr8, r15
 * 000000014035CD7D: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035CD82: xor     r15d, r15d
 * 000000014035CD85: mov     r14d, 1
 * 000000014035CD8B: mov     eax, [r13+10h]
 * 000000014035CD8F: mov     r12, [r13+8]
 * 000000014035CD93: shr     eax, 4
 * 000000014035CD96: mov     [rbp+0B70h+arg_8], r12
 * 000000014035CD9D: test    eax, eax
 * 000000014035CD9F: jz      loc_140355323
 * 000000014035CDA5: mov     edi, eax
 * 000000014035CDA7: mov     [rsp+0C70h+var_C20], rdi
 * 000000014035CDAC: mov     rax, [r12]
 * 000000014035CDB0: lea     rdx, [rbp+0B70h+var_8C0]
 * 000000014035CDB7: mov     rbx, r13
 * 000000014035CDBA: mov     r13d, r14d
 * 000000014035CDBD: mov     r15, [rax]
 * 000000014035CDC0: xor     eax, eax
 * 000000014035CDC2: mov     [rbp+0B70h+var_8C0], rax
 * 000000014035CDC9: mov     rcx, r15
 * 000000014035CDCC: mov     rax, [rsi+310h]
 * 000000014035CDD3: call    KeGuardDispatchICall
 * 000000014035CDD8: mov     r14, rax
 * 000000014035CDDB: test    rax, rax
 * 000000014035CDDE: jz      loc_14035CF10
 * 000000014035CDE4: mov     edi, 6
 * 000000014035CDE9: xor     r12d, r12d
 * 000000014035CDEC: mov     rax, [rsi+208h]
 * 000000014035CDF3: lea     rdx, [rbp+0B70h+var_580]
 * 000000014035CDFA: mov     rcx, r14
 * 000000014035CDFD: inc     r13d
 * 000000014035CE00: call    KeGuardDispatchICall
 * 000000014035CE05: test    rax, rax
 * 000000014035CE08: jnz     loc_14035CEE2
 * 000000014035CE0E: test    dword ptr [rsi+990h], 40000000h
 * 000000014035CE18: lea     r9d, [rax+1]
 * 000000014035CE1C: jz      short loc_14035CE64
 * 000000014035CE1E: mov     rcx, [rsi+0A80h]
 * 000000014035CE25: lea     edx, [rax+30h]
 * 000000014035CE28: mov     r8, rdi
 * 000000014035CE2B: mov     rax, [rbx]
 * 000000014035CE2E: add     edx, 0FFFFFFF8h
 * 000000014035CE31: mov     [rcx], rax
 * 000000014035CE34: add     rbx, 8
 * 000000014035CE38: add     rcx, 8
 * 000000014035CE3C: sub     r8, r9
 * 000000014035CE3F: jnz     short loc_14035CE2B
 * 000000014035CE41: test    edx, edx
 * 000000014035CE43: jz      short loc_14035CE5D
 * 000000014035CE45: mov     r12d, 0FFFFFFFFh
 * 000000014035CE4B: mov     al, [rbx]
 * 000000014035CE4D: add     rbx, r9
 * 000000014035CE50: mov     [rcx], al
 * 000000014035CE52: add     rcx, r9
 * 000000014035CE55: add     edx, r12d
 * 000000014035CE58: jnz     short loc_14035CE4B
 * 000000014035CE5A: xor     r12d, r12d
 * 000000014035CE5D: mov     rbx, [rsi+0A80h]
 * 000000014035CE64: mov     [rbx+18h], r14
 * 000000014035CE68: mov     [rbx+20h], r15
 * 000000014035CE6C: mov     rax, [rsi+590h]
 * 000000014035CE73: mov     [rax], rbx
 * 000000014035CE76: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014035CE7D: mov     rax, [rsi+590h]
 * 000000014035CE84: mov     [rax+8], r14
 * 000000014035CE88: mov     dword ptr [rax+14h], 1000h
 * 000000014035CE8F: cmp     [rsi+8F8h], r12d
 * 000000014035CE96: jnz     short loc_14035CEE2
 * 000000014035CE98: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035CEA2: xor     edx, edx
 * 000000014035CEA4: add     rax, rsi
 * 000000014035CEA7: mov     rcx, rsi
 * 000000014035CEAA: mov     [rsi+900h], rax
 * 000000014035CEB1: mov     rax, 0B3B74BDEE4453415h
 * 000000014035CEBB: add     rax, rbx
 * 000000014035CEBE: mov     [rsi+908h], rax
 * 000000014035CEC5: movsxd  rax, dword ptr [rbx]
 * 000000014035CEC8: mov     [rsi+910h], rax
 * 000000014035CECF: mov     [rsi+918h], rdi
 * 000000014035CED6: mov     [rsi+8F8h], r9d
 * 000000014035CEDD: call    sub_14036B3BC
 * 000000014035CEE2: mov     rax, [rsi+310h]
 * 000000014035CEE9: lea     rdx, [rbp+0B70h+var_8C0]
 * 000000014035CEF0: mov     rcx, r15
 * 000000014035CEF3: call    KeGuardDispatchICall
 * 000000014035CEF8: mov     r14, rax
 * 000000014035CEFB: test    rax, rax
 * 000000014035CEFE: jnz     loc_14035CDEC
 * 000000014035CF04: mov     r12, [rbp+0B70h+arg_8]
 * 000000014035CF0B: mov     rdi, [rsp+0C70h+var_C20]
 * 000000014035CF10: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035CF15: add     r12, 10h
 * 000000014035CF19: mov     r14d, 1
 * 000000014035CF1F: mov     [rbp+0B70h+arg_8], r12
 * 000000014035CF26: sub     rdi, r14
 * 000000014035CF29: mov     [rsp+0C70h+var_C20], rdi
 * 000000014035CF2E: jnz     loc_14035CDAC
 * 000000014035CF34: jmp     loc_140355488
 * 000000014035CF39: mov     cr8, r15
 * 000000014035CF3D: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035CF42: xor     r15d, r15d
 * 000000014035CF45: mov     eax, [rsi+8F8h]
 * 000000014035CF4B: mov     edx, [r13+14h]
 * 000000014035CF4F: test    eax, eax
 * 000000014035CF51: jnz     short loc_14035CF69
 * 000000014035CF53: mov     rax, [rsi+590h]
 * 000000014035CF5A: mov     ecx, ebx
 * 000000014035CF5C: xor     rcx, rdx
 * 000000014035CF5F: mov     [rax+18h], rcx
 * 000000014035CF63: mov     eax, [rsi+8F8h]
 * 000000014035CF69: mov     rcx, [r13+8]
 * 000000014035CF6D: mov     r14d, 1
 * 000000014035CF73: test    eax, eax
 * 000000014035CF75: jnz     loc_14035CD8B
 * 000000014035CF7B: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035CF85: xor     edx, edx
 * 000000014035CF87: add     rax, rsi
 * 000000014035CF8A: mov     [rsi+900h], rax
 * 000000014035CF91: mov     rax, 0B3B74BDEE4453415h
 * 000000014035CF9B: add     rax, r13
 * 000000014035CF9E: mov     [rsi+908h], rax
 * 000000014035CFA5: movsxd  rax, dword ptr [r13+0]
 * 000000014035CFA9: mov     [rsi+910h], rax
 * 000000014035CFB0: mov     [rsi+918h], rcx
 * 000000014035CFB7: mov     rcx, rsi
 * 000000014035CFBA: mov     [rsi+8F8h], r14d
 * 000000014035CFC1: call    sub_14036B3BC
 * 000000014035CFC6: jmp     loc_14035CD8B
 * 000000014035CFCB: mov     eax, [rsi+994h]
 * 000000014035CFD1: mov     ecx, 2
 * 000000014035CFD6: test    cl, al
 * 000000014035CFD8: jnz     loc_140355320
 * 000000014035CFDE: mov     rax, [rsi+428h]
 * 000000014035CFE5: call    KeGuardDispatchICall
 * 000000014035CFEA: xor     r15d, r15d
 * 000000014035CFED: test    al, al
 * 000000014035CFEF: jz      loc_140355323
 * 000000014035CFF5: cmp     [rsi+8F8h], r15d
 * 000000014035CFFC: jnz     loc_140355323
 * 000000014035D002: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035D00C: add     rax, rsi
 * 000000014035D00F: mov     [rsi+900h], rax
 * 000000014035D016: mov     rax, 0B3B74BDEE4453415h
 * 000000014035D020: add     rax, r13
 * 000000014035D023: mov     [rsi+908h], rax
 * 000000014035D02A: movsxd  rax, dword ptr [r13+0]
 * 000000014035D02E: mov     [rsi+910h], rax
 * 000000014035D035: mov     [rsi+918h], r15
 * 000000014035D03C: jmp     loc_1403556F2
 * 000000014035D041: cmp     r14d, 26h ; '&'
 * 000000014035D045: jz      loc_140360637
 * 000000014035D04B: jle     loc_14035F7E8
 * 000000014035D051: cmp     r14d, 2Ah ; '*'
 * 000000014035D055: jle     loc_14035F6A7
 * 000000014035D05B: cmp     r14d, 2Bh ; '+'
 * 000000014035D05F: jz      loc_14035E5AA
 * 000000014035D065: cmp     r14d, 2Ch ; ','
 * 000000014035D069: jz      loc_14035D9EA
 * 000000014035D06F: cmp     r14d, 2Eh ; '.'
 * 000000014035D073: jz      loc_14035D8F4
 * 000000014035D079: cmp     r14d, 2Fh ; '/'
 * 000000014035D07D: jz      loc_14035D6FC
 * 000000014035D083: cmp     r14d, 30h ; '0'
 * 000000014035D087: jnz     loc_14035F7E8
 * 000000014035D08D: xor     r12d, r12d
 * 000000014035D090: cmp     [r13+10h], r12d
 * 000000014035D094: jz      loc_140355320
 * 000000014035D09A: test    dword ptr [rsi+994h], 4000h
 * 000000014035D0A4: jz      short loc_14035D0C5
 * 000000014035D0A6: mov     rcx, [rsi+4E0h]
 * 000000014035D0AD: cli
 * 000000014035D0AE: mov     eax, [rsi+990h]
 * 000000014035D0B4: shr     eax, 0Ah
 * 000000014035D0B7: and     eax, 1Fh
 * 000000014035D0BA: lock bts [rcx], eax
 * 000000014035D0BE: jnb     short loc_14035D0C5
 * 000000014035D0C0: sti
 * 000000014035D0C1: pause
 * 000000014035D0C3: jmp     short loc_14035D0AD
 * 000000014035D0C5: mov     eax, [r13+18h]
 * 000000014035D0C9: test    dl, al
 * 000000014035D0CB: jnz     loc_14035D364
 * 000000014035D0D1: mov     r14, [r13+8]
 * 000000014035D0D5: mov     r8d, [r13+10h]
 * 000000014035D0D9: mov     r9, r14
 * 000000014035D0DC: add     [rsi+828h], r8d
 * 000000014035D0E3: mov     rax, r14
 * 000000014035D0E6: mov     r10d, [rsi+814h]
 * 000000014035D0ED: mov     r15, [rsi+818h]
 * 000000014035D0F4: lea     rcx, [r14+r8]
 * 000000014035D0F8: cmp     r14, rcx
 * 000000014035D0FB: jnb     short loc_14035D10E
 * 000000014035D0FD: mov     r11d, 40h ; '@'
 * 000000014035D103: prefetchnta byte ptr [rax]
 * 000000014035D106: add     rax, r11
 * 000000014035D109: cmp     rax, rcx
 * 000000014035D10C: jb      short loc_14035D103
 * 000000014035D10E: mov     r11d, r8d
 * 000000014035D111: mov     rbx, r15
 * 000000014035D114: shr     r11d, 7
 * 000000014035D118: mov     r12d, 0FFFFFFFFh
 * 000000014035D11E: test    r11d, r11d
 * 000000014035D121: jz      short loc_14035D18F
 * 000000014035D123: mov     rdi, 7010008004002001h
 * 000000014035D12D: mov     eax, 8
 * 000000014035D132: xor     rbx, [r9]
 * 000000014035D135: mov     ecx, r10d
 * 000000014035D138: rol     rbx, cl
 * 000000014035D13B: xor     rbx, [r9+8]
 * 000000014035D13F: add     r9, 10h
 * 000000014035D143: rol     rbx, cl
 * 000000014035D146: sub     rax, rdx
 * 000000014035D149: jnz     short loc_14035D132
 * 000000014035D14B: mov     rcx, r9
 * 000000014035D14E: sub     rcx, r14
 * 000000014035D151: xor     rcx, r15
 * 000000014035D154: mov     rax, rcx
 * 000000014035D157: rol     rax, 11h
 * 000000014035D15B: xor     rcx, rax
 * 000000014035D15E: mov     rax, rdi
 * 000000014035D161: mul     rcx
 * 000000014035D164: xor     r10d, edx
 * 000000014035D167: mov     [rbp+0B70h+var_578], rdx
 * 000000014035D16E: xor     r10d, eax
 * 000000014035D171: mov     edx, 1
 * 000000014035D176: and     r10d, 3Fh
 * 000000014035D17A: cmovz   r10d, edx
 * 000000014035D17E: add     r11d, r12d
 * 000000014035D181: jnz     short loc_14035D12D
 * 000000014035D183: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035D188: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035D18F: and     r8d, 7Fh
 * 000000014035D193: cmp     r8d, 8
 * 000000014035D197: jb      short loc_14035D1B6
 * 000000014035D199: mov     eax, r8d
 * 000000014035D19C: shr     rax, 3
 * 000000014035D1A0: xor     rbx, [r9]
 * 000000014035D1A3: mov     ecx, r10d
 * 000000014035D1A6: rol     rbx, cl
 * 000000014035D1A9: add     r9, 8
 * 000000014035D1AD: add     r8d, 0FFFFFFF8h
 * 000000014035D1B1: sub     rax, rdx
 * 000000014035D1B4: jnz     short loc_14035D1A0
 * 000000014035D1B6: xor     r15d, r15d
 * 000000014035D1B9: test    r8d, r8d
 * 000000014035D1BC: jz      short loc_14035D1D3
 * 000000014035D1BE: movzx   eax, byte ptr [r9]
 * 000000014035D1C2: mov     ecx, r10d
 * 000000014035D1C5: xor     rbx, rax
 * 000000014035D1C8: add     r9, rdx
 * 000000014035D1CB: rol     rbx, cl
 * 000000014035D1CE: add     r8d, r12d
 * 000000014035D1D1: jnz     short loc_14035D1BE
 * 000000014035D1D3: mov     rax, rbx
 * 000000014035D1D6: jmp     short loc_14035D1DA
 * 000000014035D1D8: xor     ebx, eax
 * 000000014035D1DA: shr     rax, 1Fh
 * 000000014035D1DE: test    rax, rax
 * 000000014035D1E1: jnz     short loc_14035D1D8
 * 000000014035D1E3: mov     r8, [rsp+0C70h+var_C18]
 * 000000014035D1E8: btr     ebx, 1Fh
 * 000000014035D1EC: mov     r13d, r15d
 * 000000014035D1EF: cmp     ebx, [r8+14h]
 * 000000014035D1F3: jz      loc_14035D6C2
 * 000000014035D1F9: cmp     [r8], r15d
 * 000000014035D1FC: jnz     short loc_14035D206
 * 000000014035D1FE: cmp     [r8+18h], r15d
 * 000000014035D202: cmovnz  r13d, edx
 * 000000014035D206: mov     ecx, [r8+10h]
 * 000000014035D20A: mov     rdx, [r8+8]
 * 000000014035D20E: test    rcx, rcx
 * 000000014035D211: jz      loc_14035D2DF
 * 000000014035D217: mov     eax, [rsi+994h]
 * 000000014035D21D: mov     r9d, 40h ; '@'
 * 000000014035D223: test    r9b, al
 * 000000014035D226: jz      loc_14035D2DF
 * 000000014035D22C: mov     r12, cr8
 * 000000014035D230: lea     eax, [r9-3Eh]
 * 000000014035D234: mov     cr8, rax
 * 000000014035D238: mov     r14, rdx
 * 000000014035D23B: lea     rax, [rcx-1]
 * 000000014035D23F: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035D246: add     rax, rdx
 * 000000014035D249: or      rax, 0FFFh
 * 000000014035D24F: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035D254: lea     rax, [r14-1]
 * 000000014035D258: mov     [rbp+0B70h+arg_8], rax
 * 000000014035D25F: movzx   r15d, r12b
 * 000000014035D263: mov     rax, [rsi+468h]
 * 000000014035D26A: xor     edx, edx
 * 000000014035D26C: mov     rcx, r14
 * 000000014035D26F: call    KeGuardDispatchICall
 * 000000014035D274: cmp     eax, 0C000022Dh
 * 000000014035D279: jnz     short loc_14035D2A2
 * 000000014035D27B: test    r13d, r13d
 * 000000014035D27E: jnz     short loc_14035D2D3
 * 000000014035D280: lea     eax, [r13+1]
 * 000000014035D284: cmp     r12b, al
 * 000000014035D287: ja      short loc_14035D2A6
 * 000000014035D289: movzx   r15d, r12b
 * 000000014035D28D: mov     cr8, r15
 * 000000014035D291: mov     al, [r14]
 * 000000014035D294: mov     rax, cr8
 * 000000014035D298: lea     eax, [r13+2]
 * 000000014035D29C: mov     cr8, rax
 * 000000014035D2A0: jmp     short loc_14035D263
 * 000000014035D2A2: test    eax, eax
 * 000000014035D2A4: js      short loc_14035D2D3
 * 000000014035D2A6: mov     rax, [rbp+0B70h+arg_8]
 * 000000014035D2AD: mov     r10d, 1000h
 * 000000014035D2B3: add     rax, r10
 * 000000014035D2B6: add     r14, r10
 * 000000014035D2B9: mov     [rbp+0B70h+arg_8], rax
 * 000000014035D2C0: cmp     rax, [rsp+0C70h+var_BF8]
 * 000000014035D2C5: jnz     short loc_14035D25F
 * 000000014035D2C7: mov     cr8, r15
 * 000000014035D2CB: xor     r15d, r15d
 * 000000014035D2CE: jmp     loc_14035D6C2
 * 000000014035D2D3: mov     cr8, r15
 * 000000014035D2D7: mov     r8, [rsp+0C70h+var_C18]
 * 000000014035D2DC: xor     r15d, r15d
 * 000000014035D2DF: mov     eax, [rsi+8F8h]
 * 000000014035D2E5: mov     edx, [r8+14h]
 * 000000014035D2E9: test    eax, eax
 * 000000014035D2EB: jnz     short loc_14035D303
 * 000000014035D2ED: mov     rax, [rsi+590h]
 * 000000014035D2F4: mov     ecx, ebx
 * 000000014035D2F6: xor     rcx, rdx
 * 000000014035D2F9: mov     [rax+18h], rcx
 * 000000014035D2FD: mov     eax, [rsi+8F8h]
 * 000000014035D303: mov     rcx, [r8+8]
 * 000000014035D307: test    eax, eax
 * 000000014035D309: jnz     loc_14035D6C2
 * 000000014035D30F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035D319: add     rax, rsi
 * 000000014035D31C: mov     [rsi+900h], rax
 * 000000014035D323: mov     rax, 0B3B74BDEE4453415h
 * 000000014035D32D: add     rax, r8
 * 000000014035D330: mov     [rsi+908h], rax
 * 000000014035D337: movsxd  rax, dword ptr [r8]
 * 000000014035D33A: mov     [rsi+910h], rax
 * 000000014035D341: mov     r12d, 1
 * 000000014035D347: mov     [rsi+918h], rcx
 * 000000014035D34E: xor     edx, edx
 * 000000014035D350: mov     rcx, rsi
 * 000000014035D353: mov     [rsi+8F8h], r12d
 * 000000014035D35A: call    sub_14036B3BC
 * 000000014035D35F: jmp     loc_14035D6C8
 * 000000014035D364: cmp     [rsi+980h], r12
 * 000000014035D36B: jz      loc_14035D6B8
 * 000000014035D371: mov     edx, [rsi+994h]
 * 000000014035D377: mov     ecx, edx
 * 000000014035D379: cmp     [rsi+824h], r12d
 * 000000014035D380: jnz     short loc_14035D394
 * 000000014035D382: shl     ecx, 3
 * 000000014035D385: xor     ecx, edx
 * 000000014035D387: and     ecx, 20h
 * 000000014035D38A: xor     ecx, edx
 * 000000014035D38C: mov     [rsi+994h], ecx
 * 000000014035D392: jmp     short loc_14035D3A4
 * 000000014035D394: mov     eax, edx
 * 000000014035D396: shr     eax, 3
 * 000000014035D399: xor     eax, edx
 * 000000014035D39B: test    r15b, al
 * 000000014035D39E: jnz     loc_14035D6B8
 * 000000014035D3A4: test    r15b, cl
 * 000000014035D3A7: jz      loc_14035D471
 * 000000014035D3AD: mov     ecx, [r13+8]
 * 000000014035D3B1: xor     r15d, r15d
 * 000000014035D3B4: mov     r14d, [r13+10h]
 * 000000014035D3B8: and     ecx, 0FFFh
 * 000000014035D3BE: mov     rbx, [r13+8]
 * 000000014035D3C2: add     r14, 0FFFh
 * 000000014035D3C9: add     r14, rcx
 * 000000014035D3CC: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014035D3D3: shr     r14, 0Ch
 * 000000014035D3D7: test    r14, r14
 * 000000014035D3DA: jz      loc_14035D6C2
 * 000000014035D3E0: mov     rdi, 0B3B74BDEE4453415h
 * 000000014035D3EA: lea     r12d, [r15+1]
 * 000000014035D3EE: mov     rax, [rsi+2B0h]
 * 000000014035D3F5: mov     rcx, rbx
 * 000000014035D3F8: sub     r14, r12
 * 000000014035D3FB: call    KeGuardDispatchICall
 * 000000014035D400: test    al, al
 * 000000014035D402: jz      short loc_14035D44F
 * 000000014035D404: cmp     [rsi+8F8h], r15d
 * 000000014035D40B: jnz     short loc_14035D44F
 * 000000014035D40D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035D417: xor     edx, edx
 * 000000014035D419: add     rax, rsi
 * 000000014035D41C: mov     rcx, rsi
 * 000000014035D41F: mov     [rsi+900h], rax
 * 000000014035D426: lea     rax, [rdi+r13]
 * 000000014035D42A: mov     [rsi+908h], rax
 * 000000014035D431: movsxd  rax, dword ptr [r13+0]
 * 000000014035D435: mov     [rsi+910h], rax
 * 000000014035D43C: mov     [rsi+918h], rbx
 * 000000014035D443: mov     [rsi+8F8h], r12d
 * 000000014035D44A: call    sub_14036B3BC
 * 000000014035D44F: add     dword ptr [rsi+828h], 100h
 * 000000014035D459: add     rbx, 1000h
 * 000000014035D460: test    r14, r14
 * 000000014035D463: jnz     short loc_14035D3EE
 * 000000014035D465: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035D46C: jmp     loc_14035D6C8
 * 000000014035D471: mov     r14, [r13+8]
 * 000000014035D475: mov     r8d, [r13+10h]
 * 000000014035D479: mov     r9, r14
 * 000000014035D47C: add     [rsi+828h], r8d
 * 000000014035D483: mov     rax, r14
 * 000000014035D486: mov     r10d, [rsi+814h]
 * 000000014035D48D: mov     r15, [rsi+818h]
 * 000000014035D494: lea     rcx, [r14+r8]
 * 000000014035D498: cmp     r14, rcx
 * 000000014035D49B: jnb     short loc_14035D4AD
 * 000000014035D49D: mov     edx, 40h ; '@'
 * 000000014035D4A2: prefetchnta byte ptr [rax]
 * 000000014035D4A5: add     rax, rdx
 * 000000014035D4A8: cmp     rax, rcx
 * 000000014035D4AB: jb      short loc_14035D4A2
 * 000000014035D4AD: mov     r11d, r8d
 * 000000014035D4B0: mov     rbx, r15
 * 000000014035D4B3: shr     r11d, 7
 * 000000014035D4B7: mov     r12d, 1
 * 000000014035D4BD: test    r11d, r11d
 * 000000014035D4C0: jz      short loc_14035D530
 * 000000014035D4C2: mov     rdi, 7010008004002001h
 * 000000014035D4CC: mov     eax, 8
 * 000000014035D4D1: xor     rbx, [r9]
 * 000000014035D4D4: mov     ecx, r10d
 * 000000014035D4D7: rol     rbx, cl
 * 000000014035D4DA: xor     rbx, [r9+8]
 * 000000014035D4DE: add     r9, 10h
 * 000000014035D4E2: rol     rbx, cl
 * 000000014035D4E5: sub     rax, r12
 * 000000014035D4E8: jnz     short loc_14035D4D1
 * 000000014035D4EA: mov     rcx, r9
 * 000000014035D4ED: sub     rcx, r14
 * 000000014035D4F0: xor     rcx, r15
 * 000000014035D4F3: mov     rax, rcx
 * 000000014035D4F6: rol     rax, 11h
 * 000000014035D4FA: xor     rcx, rax
 * 000000014035D4FD: mov     rax, rdi
 * 000000014035D500: mul     rcx
 * 000000014035D503: xor     r10d, edx
 * 000000014035D506: mov     [rbp+0B70h+var_570], rdx
 * 000000014035D50D: xor     r10d, eax
 * 000000014035D510: mov     edx, 0FFFFFFFFh
 * 000000014035D515: and     r10d, 3Fh
 * 000000014035D519: cmovz   r10d, r12d
 * 000000014035D51D: add     r11d, edx
 * 000000014035D520: jnz     short loc_14035D4CC
 * 000000014035D522: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035D527: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035D52E: jmp     short loc_14035D535
 * 000000014035D530: mov     edx, 0FFFFFFFFh
 * 000000014035D535: and     r8d, 7Fh
 * 000000014035D539: cmp     r8d, 8
 * 000000014035D53D: jb      short loc_14035D55C
 * 000000014035D53F: mov     eax, r8d
 * 000000014035D542: shr     rax, 3
 * 000000014035D546: xor     rbx, [r9]
 * 000000014035D549: mov     ecx, r10d
 * 000000014035D54C: rol     rbx, cl
 * 000000014035D54F: add     r9, 8
 * 000000014035D553: add     r8d, 0FFFFFFF8h
 * 000000014035D557: sub     rax, r12
 * 000000014035D55A: jnz     short loc_14035D546
 * 000000014035D55C: xor     r15d, r15d
 * 000000014035D55F: test    r8d, r8d
 * 000000014035D562: jz      short loc_14035D579
 * 000000014035D564: movzx   eax, byte ptr [r9]
 * 000000014035D568: mov     ecx, r10d
 * 000000014035D56B: xor     rbx, rax
 * 000000014035D56E: add     r9, r12
 * 000000014035D571: rol     rbx, cl
 * 000000014035D574: add     r8d, edx
 * 000000014035D577: jnz     short loc_14035D564
 * 000000014035D579: mov     rax, rbx
 * 000000014035D57C: jmp     short loc_14035D580
 * 000000014035D57E: xor     ebx, eax
 * 000000014035D580: shr     rax, 1Fh
 * 000000014035D584: test    rax, rax
 * 000000014035D587: jnz     short loc_14035D57E
 * 000000014035D589: mov     r8d, [r13+14h]
 * 000000014035D58D: btr     ebx, 1Fh
 * 000000014035D591: cmp     ebx, r8d
 * 000000014035D594: jz      loc_14035D6C2
 * 000000014035D59A: mov     ecx, [r13+10h]
 * 000000014035D59E: mov     rdx, [r13+8]
 * 000000014035D5A2: test    rcx, rcx
 * 000000014035D5A5: jz      loc_14035D65C
 * 000000014035D5AB: mov     eax, [rsi+994h]
 * 000000014035D5B1: mov     r9d, 40h ; '@'
 * 000000014035D5B7: test    r9b, al
 * 000000014035D5BA: jz      loc_14035D65C
 * 000000014035D5C0: mov     r12, cr8
 * 000000014035D5C4: lea     eax, [r9-3Eh]
 * 000000014035D5C8: mov     cr8, rax
 * 000000014035D5CC: mov     r14, rdx
 * 000000014035D5CF: lea     rax, [rcx-1]
 * 000000014035D5D3: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035D5DA: add     rax, rdx
 * 000000014035D5DD: or      rax, 0FFFh
 * 000000014035D5E3: mov     [rbp+0B70h+arg_8], rax
 * 000000014035D5EA: lea     r13, [r14-1]
 * 000000014035D5EE: movzx   r15d, r12b
 * 000000014035D5F2: mov     rax, [rsi+468h]
 * 000000014035D5F9: xor     edx, edx
 * 000000014035D5FB: mov     rcx, r14
 * 000000014035D5FE: call    KeGuardDispatchICall
 * 000000014035D603: cmp     eax, 0C000022Dh
 * 000000014035D608: jnz     short loc_14035D62E
 * 000000014035D60A: mov     eax, 1
 * 000000014035D60F: cmp     r12b, al
 * 000000014035D612: ja      short loc_14035D632
 * 000000014035D614: movzx   r15d, r12b
 * 000000014035D618: mov     cr8, r15
 * 000000014035D61C: mov     al, [r14]
 * 000000014035D61F: mov     rax, cr8
 * 000000014035D623: mov     eax, 2
 * 000000014035D628: mov     cr8, rax
 * 000000014035D62C: jmp     short loc_14035D5F2
 * 000000014035D62E: test    eax, eax
 * 000000014035D630: js      short loc_14035D64C
 * 000000014035D632: mov     r10d, 1000h
 * 000000014035D638: add     r14, r10
 * 000000014035D63B: add     r13, r10
 * 000000014035D63E: cmp     r13, [rbp+0B70h+arg_8]
 * 000000014035D645: jnz     short loc_14035D5EE
 * 000000014035D647: jmp     loc_14035D2C7
 * 000000014035D64C: mov     cr8, r15
 * 000000014035D650: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035D655: xor     r15d, r15d
 * 000000014035D658: mov     r8d, [r13+14h]
 * 000000014035D65C: mov     eax, [rsi+8F8h]
 * 000000014035D662: test    eax, eax
 * 000000014035D664: jnz     short loc_14035D67F
 * 000000014035D666: mov     eax, r8d
 * 000000014035D669: mov     ecx, ebx
 * 000000014035D66B: xor     rcx, rax
 * 000000014035D66E: mov     rax, [rsi+590h]
 * 000000014035D675: mov     [rax+18h], rcx
 * 000000014035D679: mov     eax, [rsi+8F8h]
 * 000000014035D67F: mov     rcx, [r13+8]
 * 000000014035D683: test    eax, eax
 * 000000014035D685: jnz     short loc_14035D6C2
 * 000000014035D687: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035D691: add     rax, rsi
 * 000000014035D694: mov     [rsi+900h], rax
 * 000000014035D69B: mov     rax, 0B3B74BDEE4453415h
 * 000000014035D6A5: add     rax, r13
 * 000000014035D6A8: mov     [rsi+908h], rax
 * 000000014035D6AF: movsxd  rax, dword ptr [r13+0]
 * 000000014035D6B3: jmp     loc_14035D33A
 * 000000014035D6B8: xor     r15d, r15d
 * 000000014035D6BB: mov     [rsi+824h], r15d
 * 000000014035D6C2: mov     r12d, 1
 * 000000014035D6C8: test    dword ptr [rsi+994h], 4000h
 * 000000014035D6D2: jz      loc_140355323
 * 000000014035D6D8: mov     ecx, [rsi+990h]
 * 000000014035D6DE: mov     edx, r12d
 * 000000014035D6E1: mov     r8, [rsi+4E0h]
 * 000000014035D6E8: shr     ecx, 0Ah
 * 000000014035D6EB: and     ecx, 1Fh
 * 000000014035D6EE: shl     edx, cl
 * 000000014035D6F0: not     edx
 * 000000014035D6F2: lock and [r8], edx
 * 000000014035D6F6: sti
 * 000000014035D6F7: jmp     loc_140355323
 * 000000014035D6FC: mov     rcx, gs:20h
 * 000000014035D705: mov     rax, [rsi+648h]
 * 000000014035D70C: mov     rcx, [rax+rcx]
 * 000000014035D710: mov     rax, [rsi+688h]
 * 000000014035D717: add     rcx, [rsi+6A8h]
 * 000000014035D71E: mov     rcx, [rcx+rax]
 * 000000014035D722: mov     [rbp+0B70h+var_B60], rcx
 * 000000014035D726: mov     rax, [rsi+490h]
 * 000000014035D72D: call    KeGuardDispatchICall
 * 000000014035D732: mov     r9d, 0FFFFFFFFh
 * 000000014035D738: xor     r15d, r15d
 * 000000014035D73B: mov     r14, rax
 * 000000014035D73E: cmp     rax, r9
 * 000000014035D741: jnz     loc_14035D878
 * 000000014035D747: mov     [rbp+0B70h+var_B60], r15
 * 000000014035D74B: mov     rcx, [rsi+988h]
 * 000000014035D752: test    rcx, rcx
 * 000000014035D755: jz      short loc_14035D77A
 * 000000014035D757: mov     rax, [rsi+480h]
 * 000000014035D75E: lea     rdx, [rbp+0B70h+var_B60]
 * 000000014035D762: call    KeGuardDispatchICall
 * 000000014035D767: mov     rcx, [rbp+0B70h+var_B60]
 * 000000014035D76B: test    eax, eax
 * 000000014035D76D: cmovs   rcx, r15
 * 000000014035D771: mov     [rbp+0B70h+var_B60], rcx
 * 000000014035D775: test    rcx, rcx
 * 000000014035D778: jnz     short loc_14035D78C
 * 000000014035D77A: mov     rax, [rsi+3C0h]
 * 000000014035D781: xor     ecx, ecx
 * 000000014035D783: call    KeGuardDispatchICall
 * 000000014035D788: mov     [rbp+0B70h+var_B60], rax
 * 000000014035D78C: mov     [rsi+988h], r15
 * 000000014035D793: mov     ebx, r15d
 * 000000014035D796: mov     rcx, [rbp+0B70h+var_B60]
 * 000000014035D79A: test    rcx, rcx
 * 000000014035D79D: jz      loc_14035D86A
 * 000000014035D7A3: mov     r12d, 1
 * 000000014035D7A9: mov     rax, [rsi+3A0h]
 * 000000014035D7B0: add     ebx, r12d
 * 000000014035D7B3: call    KeGuardDispatchICall
 * 000000014035D7B8: test    eax, eax
 * 000000014035D7BA: js      short loc_14035D817
 * 000000014035D7BC: mov     rax, [rsi+438h]
 * 000000014035D7C3: lea     rdx, [rbp+0B70h+var_70]
 * 000000014035D7CA: mov     rcx, [rbp+0B70h+var_B60]
 * 000000014035D7CE: call    KeGuardDispatchICall
 * 000000014035D7D3: mov     rax, [rsi+490h]
 * 000000014035D7DA: call    KeGuardDispatchICall
 * 000000014035D7DF: mov     r14, rax
 * 000000014035D7E2: lea     rcx, [rbp+0B70h+var_70]
 * 000000014035D7E9: mov     rax, [rsi+440h]
 * 000000014035D7F0: call    KeGuardDispatchICall
 * 000000014035D7F5: mov     rax, [rsi+3A8h]
 * 000000014035D7FC: mov     rcx, [rbp+0B70h+var_B60]
 * 000000014035D800: call    KeGuardDispatchICall
 * 000000014035D805: mov     eax, 0FFFFFFFFh
 * 000000014035D80A: cmp     r14, rax
 * 000000014035D80D: jnz     short loc_14035D838
 * 000000014035D80F: cmp     ebx, 100h
 * 000000014035D815: ja      short loc_14035D838
 * 000000014035D817: mov     rax, [rsi+3C0h]
 * 000000014035D81E: mov     rcx, [rbp+0B70h+var_B60]
 * 000000014035D822: call    KeGuardDispatchICall
 * 000000014035D827: mov     [rbp+0B70h+var_B60], rax
 * 000000014035D82B: mov     rcx, rax
 * 000000014035D82E: test    rax, rax
 * 000000014035D831: jz      short loc_14035D86A
 * 000000014035D833: jmp     loc_14035D7A9
 * 000000014035D838: mov     rax, [rsi+488h]
 * 000000014035D83F: mov     rcx, [rbp+0B70h+var_B60]
 * 000000014035D843: call    KeGuardDispatchICall
 * 000000014035D848: mov     [rsi+988h], rax
 * 000000014035D84F: mov     rax, [rsi+1E0h]
 * 000000014035D856: mov     rcx, [rbp+0B70h+var_B60]
 * 000000014035D85A: call    KeGuardDispatchICall
 * 000000014035D85F: mov     r9d, 0FFFFFFFFh
 * 000000014035D865: cmp     r14, r9
 * 000000014035D868: jnz     short loc_14035D87E
 * 000000014035D86A: shl     ebx, 0Ch
 * 000000014035D86D: add     [rsi+828h], ebx
 * 000000014035D873: jmp     loc_140355323
 * 000000014035D878: mov     r12d, 1
 * 000000014035D87E: test    dword ptr [rsi+990h], 40000000h
 * 000000014035D888: jz      short loc_14035D8CD
 * 000000014035D88A: mov     rcx, [rsi+0A80h]
 * 000000014035D891: mov     edx, 30h ; '0'
 * 000000014035D896: lea     r8d, [rdx-2Ah]
 * 000000014035D89A: mov     rax, [r13+0]
 * 000000014035D89E: add     edx, 0FFFFFFF8h
 * 000000014035D8A1: mov     [rcx], rax
 * 000000014035D8A4: add     r13, 8
 * 000000014035D8A8: add     rcx, 8
 * 000000014035D8AC: sub     r8, r12
 * 000000014035D8AF: jnz     short loc_14035D89A
 * 000000014035D8B1: test    edx, edx
 * 000000014035D8B3: jz      short loc_14035D8C6
 * 000000014035D8B5: mov     al, [r13+0]
 * 000000014035D8B9: add     r13, r12
 * 000000014035D8BC: mov     [rcx], al
 * 000000014035D8BE: add     rcx, r12
 * 000000014035D8C1: add     edx, r9d
 * 000000014035D8C4: jnz     short loc_14035D8B5
 * 000000014035D8C6: mov     r13, [rsi+0A80h]
 * 000000014035D8CD: mov     [r13+18h], r14
 * 000000014035D8D1: mov     rcx, [rbp+0B70h+var_B60]
 * 000000014035D8D5: cmp     [rsi+8F8h], r15d
 * 000000014035D8DC: jnz     loc_140355323
 * 000000014035D8E2: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035D8EC: add     rax, rsi
 * 000000014035D8EF: jmp     loc_14035B6C8
 * 000000014035D8F4: mov     eax, [rsi+830h]
 * 000000014035D8FA: test    dl, al
 * 000000014035D8FC: jnz     loc_140355320
 * 000000014035D902: mov     r15, [rsi+548h]
 * 000000014035D909: xor     eax, eax
 * 000000014035D90B: mov     r14d, eax
 * 000000014035D90E: mov     rax, [rsi+178h]
 * 000000014035D915: call    KeGuardDispatchICall
 * 000000014035D91A: test    dword ptr [rsi+990h], 40000000h
 * 000000014035D924: jnz     short loc_14035D93E
 * 000000014035D926: mov     ecx, [rsi+950h]
 * 000000014035D92C: cmp     ecx, 7
 * 000000014035D92F: jnb     short loc_14035D93E
 * 000000014035D931: mov     r12d, 1
 * 000000014035D937: mov     ebx, r12d
 * 000000014035D93A: shl     bl, cl
 * 000000014035D93C: jmp     short loc_14035D95B
 * 000000014035D93E: mov     rax, [rsi+128h]
 * 000000014035D945: xor     edx, edx
 * 000000014035D947: mov     rcx, [rsi+0A00h]
 * 000000014035D94E: call    KeGuardDispatchICall
 * 000000014035D953: mov     bl, 80h
 * 000000014035D955: mov     r12d, 1
 * 000000014035D95B: mov     rax, [rsi+138h]
 * 000000014035D962: xor     edx, edx
 * 000000014035D964: mov     rcx, r15
 * 000000014035D967: call    KeGuardDispatchICall
 * 000000014035D96C: cmp     bl, 80h
 * 000000014035D96F: jz      short loc_14035D9A4
 * 000000014035D971: mov     r8, [rsi+520h]
 * 000000014035D978: mov     rdx, [r8]
 * 000000014035D97B: cmp     rdx, r8
 * 000000014035D97E: jz      short loc_14035D9B9
 * 000000014035D980: not     bl
 * 000000014035D982: mov     rax, [rsi+6B8h]
 * 000000014035D989: mov     rcx, rdx
 * 000000014035D98C: sub     rcx, [rsi+6D0h]
 * 000000014035D993: lock and [rcx+rax], bl
 * 000000014035D997: mov     rdx, [rdx]
 * 000000014035D99A: add     r14d, r12d
 * 000000014035D99D: cmp     rdx, r8
 * 000000014035D9A0: jnz     short loc_14035D982
 * 000000014035D9A2: jmp     short loc_14035D9B9
 * 000000014035D9A4: mov     rax, [rsi+130h]
 * 000000014035D9AB: xor     edx, edx
 * 000000014035D9AD: mov     rcx, [rsi+0A00h]
 * 000000014035D9B4: call    KeGuardDispatchICall
 * 000000014035D9B9: mov     rcx, [rsi+548h]
 * 000000014035D9C0: xor     edx, edx
 * 000000014035D9C2: mov     rax, [rsi+140h]
 * 000000014035D9C9: call    KeGuardDispatchICall
 * 000000014035D9CE: mov     rax, [rsi+180h]
 * 000000014035D9D5: call    KeGuardDispatchICall
 * 000000014035D9DA: shl     r14d, 7
 * 000000014035D9DE: add     [rsi+828h], r14d
 * 000000014035D9E5: jmp     loc_140355320
 * 000000014035D9EA: mov     ecx, [r13+20h]
 * 000000014035D9EE: mov     edx, 2
 * 000000014035D9F3: xor     r12d, r12d
 * 000000014035D9F6: mov     [rbp+0B70h+var_BE0], rsi
 * 000000014035D9FA: test    dl, cl
 * 000000014035D9FC: jz      loc_14035DE83
 * 000000014035DA02: cmp     [rsi+980h], r12
 * 000000014035DA09: jz      loc_14035C630
 * 000000014035DA0F: mov     eax, [rsi+994h]
 * 000000014035DA15: test    r15b, al
 * 000000014035DA18: jnz     loc_14035C630
 * 000000014035DA1E: test    dl, cl
 * 000000014035DA20: jz      loc_14035DE83
 * 000000014035DA26: mov     edx, eax
 * 000000014035DA28: mov     ecx, eax
 * 000000014035DA2A: cmp     [rsi+824h], r12d
 * 000000014035DA31: jnz     short loc_14035DA45
 * 000000014035DA33: shl     ecx, 3
 * 000000014035DA36: xor     ecx, eax
 * 000000014035DA38: and     ecx, 20h
 * 000000014035DA3B: xor     ecx, eax
 * 000000014035DA3D: mov     [rsi+994h], ecx
 * 000000014035DA43: jmp     short loc_14035DA55
 * 000000014035DA45: mov     eax, edx
 * 000000014035DA47: shr     eax, 3
 * 000000014035DA4A: xor     eax, edx
 * 000000014035DA4C: test    r15b, al
 * 000000014035DA4F: jnz     loc_14035C630
 * 000000014035DA55: cmp     [rsi+980h], r12
 * 000000014035DA5C: jz      loc_14035DE74
 * 000000014035DA62: mov     edx, ecx
 * 000000014035DA64: cmp     [rsi+824h], r12d
 * 000000014035DA6B: jnz     short loc_14035DA7F
 * 000000014035DA6D: shl     edx, 3
 * 000000014035DA70: xor     edx, ecx
 * 000000014035DA72: and     edx, 20h
 * 000000014035DA75: xor     edx, ecx
 * 000000014035DA77: mov     [rsi+994h], edx
 * 000000014035DA7D: jmp     short loc_14035DA8F
 * 000000014035DA7F: mov     eax, ecx
 * 000000014035DA81: shr     eax, 3
 * 000000014035DA84: xor     eax, ecx
 * 000000014035DA86: test    r15b, al
 * 000000014035DA89: jnz     loc_14035DE74
 * 000000014035DA8F: test    r15b, dl
 * 000000014035DA92: jz      loc_14035DB5D
 * 000000014035DA98: mov     r14d, [r13+8]
 * 000000014035DA9C: xor     r15d, r15d
 * 000000014035DA9F: mov     ecx, [r13+10h]
 * 000000014035DAA3: and     r14d, 0FFFh
 * 000000014035DAAA: mov     rbx, [r13+8]
 * 000000014035DAAE: add     r14, 0FFFh
 * 000000014035DAB5: add     r14, rcx
 * 000000014035DAB8: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014035DABF: shr     r14, 0Ch
 * 000000014035DAC3: test    r14, r14
 * 000000014035DAC6: jz      loc_14035DD4A
 * 000000014035DACC: mov     rdi, 0B3B74BDEE4453415h
 * 000000014035DAD6: lea     r12d, [r15+1]
 * 000000014035DADA: mov     rax, [rsi+2B0h]
 * 000000014035DAE1: mov     rcx, rbx
 * 000000014035DAE4: sub     r14, r12
 * 000000014035DAE7: call    KeGuardDispatchICall
 * 000000014035DAEC: test    al, al
 * 000000014035DAEE: jz      short loc_14035DB3B
 * 000000014035DAF0: cmp     [rsi+8F8h], r15d
 * 000000014035DAF7: jnz     short loc_14035DB3B
 * 000000014035DAF9: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035DB03: xor     edx, edx
 * 000000014035DB05: add     rax, rsi
 * 000000014035DB08: mov     rcx, rsi
 * 000000014035DB0B: mov     [rsi+900h], rax
 * 000000014035DB12: lea     rax, [rdi+r13]
 * 000000014035DB16: mov     [rsi+908h], rax
 * 000000014035DB1D: movsxd  rax, dword ptr [r13+0]
 * 000000014035DB21: mov     [rsi+910h], rax
 * 000000014035DB28: mov     [rsi+918h], rbx
 * 000000014035DB2F: mov     [rsi+8F8h], r12d
 * 000000014035DB36: call    sub_14036B3BC
 * 000000014035DB3B: add     dword ptr [rsi+828h], 100h
 * 000000014035DB45: add     rbx, 1000h
 * 000000014035DB4C: test    r14, r14
 * 000000014035DB4F: jnz     short loc_14035DADA
 * 000000014035DB51: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035DB58: jmp     loc_14035DD4A
 * 000000014035DB5D: mov     r14, [r13+8]
 * 000000014035DB61: mov     r8d, [r13+10h]
 * 000000014035DB65: mov     r9, r14
 * 000000014035DB68: add     [rsi+828h], r8d
 * 000000014035DB6F: mov     rax, r14
 * 000000014035DB72: mov     r10d, [rsi+814h]
 * 000000014035DB79: mov     r15, [rsi+818h]
 * 000000014035DB80: lea     rcx, [r14+r8]
 * 000000014035DB84: cmp     r14, rcx
 * 000000014035DB87: jnb     short loc_14035DB99
 * 000000014035DB89: mov     edx, 40h ; '@'
 * 000000014035DB8E: prefetchnta byte ptr [rax]
 * 000000014035DB91: add     rax, rdx
 * 000000014035DB94: cmp     rax, rcx
 * 000000014035DB97: jb      short loc_14035DB8E
 * 000000014035DB99: mov     r11d, r8d
 * 000000014035DB9C: mov     rbx, r15
 * 000000014035DB9F: shr     r11d, 7
 * 000000014035DBA3: test    r11d, r11d
 * 000000014035DBA6: jz      short loc_14035DC19
 * 000000014035DBA8: mov     rsi, 7010008004002001h
 * 000000014035DBB2: mov     r12d, 1
 * 000000014035DBB8: mov     edx, 8
 * 000000014035DBBD: mov     rax, [r9]
 * 000000014035DBC0: mov     ecx, r10d
 * 000000014035DBC3: xor     rax, rbx
 * 000000014035DBC6: mov     rbx, [r9+8]
 * 000000014035DBCA: rol     rax, cl
 * 000000014035DBCD: add     r9, 10h
 * 000000014035DBD1: xor     rbx, rax
 * 000000014035DBD4: rol     rbx, cl
 * 000000014035DBD7: sub     rdx, r12
 * 000000014035DBDA: jnz     short loc_14035DBBD
 * 000000014035DBDC: mov     rcx, r9
 * 000000014035DBDF: sub     rcx, r14
 * 000000014035DBE2: xor     rcx, r15
 * 000000014035DBE5: mov     rax, rcx
 * 000000014035DBE8: rol     rax, 11h
 * 000000014035DBEC: xor     rcx, rax
 * 000000014035DBEF: mov     rax, rsi
 * 000000014035DBF2: mul     rcx
 * 000000014035DBF5: xor     r10d, eax
 * 000000014035DBF8: mov     [rbp+0B70h+var_568], rdx
 * 000000014035DBFF: xor     r10d, edx
 * 000000014035DC02: mov     eax, 0FFFFFFFFh
 * 000000014035DC07: and     r10d, 3Fh
 * 000000014035DC0B: cmovz   r10d, r12d
 * 000000014035DC0F: add     r11d, eax
 * 000000014035DC12: jnz     short loc_14035DBB8
 * 000000014035DC14: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035DC19: and     r8d, 7Fh
 * 000000014035DC1D: mov     r11d, 1
 * 000000014035DC23: cmp     r8d, 8
 * 000000014035DC27: jb      short loc_14035DC46
 * 000000014035DC29: mov     edx, r8d
 * 000000014035DC2C: shr     rdx, 3
 * 000000014035DC30: xor     rbx, [r9]
 * 000000014035DC33: mov     ecx, r10d
 * 000000014035DC36: rol     rbx, cl
 * 000000014035DC39: add     r9, 8
 * 000000014035DC3D: add     r8d, 0FFFFFFF8h
 * 000000014035DC41: sub     rdx, r11
 * 000000014035DC44: jnz     short loc_14035DC30
 * 000000014035DC46: xor     r15d, r15d
 * 000000014035DC49: test    r8d, r8d
 * 000000014035DC4C: jz      short loc_14035DC6C
 * 000000014035DC4E: mov     r15d, 0FFFFFFFFh
 * 000000014035DC54: movzx   eax, byte ptr [r9]
 * 000000014035DC58: mov     ecx, r10d
 * 000000014035DC5B: xor     rbx, rax
 * 000000014035DC5E: add     r9, r11
 * 000000014035DC61: rol     rbx, cl
 * 000000014035DC64: add     r8d, r15d
 * 000000014035DC67: jnz     short loc_14035DC54
 * 000000014035DC69: xor     r15d, r15d
 * 000000014035DC6C: mov     rax, rbx
 * 000000014035DC6F: jmp     short loc_14035DC73
 * 000000014035DC71: xor     ebx, eax
 * 000000014035DC73: shr     rax, 1Fh
 * 000000014035DC77: test    rax, rax
 * 000000014035DC7A: jnz     short loc_14035DC71
 * 000000014035DC7C: mov     r8d, [r13+14h]
 * 000000014035DC80: btr     ebx, 1Fh
 * 000000014035DC84: cmp     ebx, r8d
 * 000000014035DC87: jz      loc_14035DD4A
 * 000000014035DC8D: mov     ecx, [r13+10h]
 * 000000014035DC91: mov     rdx, [r13+8]
 * 000000014035DC95: test    rcx, rcx
 * 000000014035DC98: jz      loc_14035DDF1
 * 000000014035DC9E: mov     eax, [rsi+994h]
 * 000000014035DCA4: mov     r9d, 40h ; '@'
 * 000000014035DCAA: test    r9b, al
 * 000000014035DCAD: jz      loc_14035DDF1
 * 000000014035DCB3: mov     r12, cr8
 * 000000014035DCB7: lea     eax, [r9-3Eh]
 * 000000014035DCBB: mov     cr8, rax
 * 000000014035DCBF: mov     r14, rdx
 * 000000014035DCC2: lea     rax, [rcx-1]
 * 000000014035DCC6: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035DCCD: add     rax, rdx
 * 000000014035DCD0: or      rax, 0FFFh
 * 000000014035DCD6: mov     [rbp+0B70h+arg_8], rax
 * 000000014035DCDD: lea     r13, [r14-1]
 * 000000014035DCE1: movzx   r15d, r12b
 * 000000014035DCE5: mov     rax, [rsi+468h]
 * 000000014035DCEC: xor     edx, edx
 * 000000014035DCEE: mov     rcx, r14
 * 000000014035DCF1: call    KeGuardDispatchICall
 * 000000014035DCF6: cmp     eax, 0C000022Dh
 * 000000014035DCFB: jnz     short loc_14035DD21
 * 000000014035DCFD: mov     eax, 1
 * 000000014035DD02: cmp     r12b, al
 * 000000014035DD05: ja      short loc_14035DD29
 * 000000014035DD07: movzx   r15d, r12b
 * 000000014035DD0B: mov     cr8, r15
 * 000000014035DD0F: mov     al, [r14]
 * 000000014035DD12: mov     rax, cr8
 * 000000014035DD16: mov     eax, 2
 * 000000014035DD1B: mov     cr8, rax
 * 000000014035DD1F: jmp     short loc_14035DCE5
 * 000000014035DD21: test    eax, eax
 * 000000014035DD23: js      loc_14035DDE1
 * 000000014035DD29: mov     r10d, 1000h
 * 000000014035DD2F: add     r14, r10
 * 000000014035DD32: add     r13, r10
 * 000000014035DD35: cmp     r13, [rbp+0B70h+arg_8]
 * 000000014035DD3C: jnz     short loc_14035DCE1
 * 000000014035DD3E: mov     cr8, r15
 * 000000014035DD42: xor     r15d, r15d
 * 000000014035DD45: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035DD4A: mov     eax, [r13+20h]
 * 000000014035DD4E: mov     r14d, 1
 * 000000014035DD54: test    r14b, al
 * 000000014035DD57: jz      loc_140355323
 * 000000014035DD5D: mov     rbx, [r13+18h]
 * 000000014035DD61: mov     rax, [rsi+1F8h]
 * 000000014035DD68: mov     rcx, rbx
 * 000000014035DD6B: mov     [rsp+0C70h+var_C20], rbx
 * 000000014035DD70: call    KeGuardDispatchICall
 * 000000014035DD75: movzx   r12d, word ptr [rax+14h]
 * 000000014035DD7A: add     r12, 18h
 * 000000014035DD7E: add     r12, rax
 * 000000014035DD81: movzx   eax, word ptr [rax+6]
 * 000000014035DD85: lea     rcx, [rax+rax*4]
 * 000000014035DD89: lea     rax, [r12+rcx*8]
 * 000000014035DD8D: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035DD92: cmp     r12, rax
 * 000000014035DD95: jz      loc_140355323
 * 000000014035DD9B: mov     r15d, [rsi+824h]
 * 000000014035DDA2: xor     edx, edx
 * 000000014035DDA4: test    r15d, r15d
 * 000000014035DDA7: jnz     short loc_14035DDB9
 * 000000014035DDA9: mov     dword ptr [rsi+824h], 1000h
 * 000000014035DDB3: mov     r15d, 1000h
 * 000000014035DDB9: mov     eax, r15d
 * 000000014035DDBC: cmp     rbx, [rsi+5E8h]
 * 000000014035DDC3: jz      loc_14035E0A3
 * 000000014035DDC9: cmp     rbx, [rsi+5F0h]
 * 000000014035DDD0: jz      loc_14035E0A3
 * 000000014035DDD6: mov     dword ptr [rbp+0B70h+arg_8], edx
 * 000000014035DDDC: jmp     loc_14035E0AD
 * 000000014035DDE1: mov     cr8, r15
 * 000000014035DDE5: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035DDEA: xor     r15d, r15d
 * 000000014035DDED: mov     r8d, [r13+14h]
 * 000000014035DDF1: mov     eax, [rsi+8F8h]
 * 000000014035DDF7: test    eax, eax
 * 000000014035DDF9: jnz     short loc_14035DE14
 * 000000014035DDFB: mov     ecx, r8d
 * 000000014035DDFE: mov     eax, ebx
 * 000000014035DE00: xor     rcx, rax
 * 000000014035DE03: mov     rax, [rsi+590h]
 * 000000014035DE0A: mov     [rax+18h], rcx
 * 000000014035DE0E: mov     eax, [rsi+8F8h]
 * 000000014035DE14: mov     rcx, [r13+8]
 * 000000014035DE18: test    eax, eax
 * 000000014035DE1A: jnz     loc_14035DD4A
 * 000000014035DE20: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035DE2A: xor     edx, edx
 * 000000014035DE2C: add     rax, rsi
 * 000000014035DE2F: mov     [rsi+900h], rax
 * 000000014035DE36: mov     rax, 0B3B74BDEE4453415h
 * 000000014035DE40: add     rax, r13
 * 000000014035DE43: mov     [rsi+908h], rax
 * 000000014035DE4A: movsxd  rax, dword ptr [r13+0]
 * 000000014035DE4E: mov     [rsi+910h], rax
 * 000000014035DE55: mov     eax, 1
 * 000000014035DE5A: mov     [rsi+918h], rcx
 * 000000014035DE61: mov     rcx, rsi
 * 000000014035DE64: mov     [rsi+8F8h], eax
 * 000000014035DE6A: call    sub_14036B3BC
 * 000000014035DE6F: jmp     loc_14035DD4A
 * 000000014035DE74: xor     r15d, r15d
 * 000000014035DE77: mov     [rsi+824h], r15d
 * 000000014035DE7E: jmp     loc_14035DD4A
 * 000000014035DE83: mov     r14, [r13+8]
 * 000000014035DE87: mov     r8d, [r13+10h]
 * 000000014035DE8B: mov     r9, r14
 * 000000014035DE8E: add     [rsi+828h], r8d
 * 000000014035DE95: mov     rax, r14
 * 000000014035DE98: mov     r10d, [rsi+814h]
 * 000000014035DE9F: mov     r15, [rsi+818h]
 * 000000014035DEA6: lea     rcx, [r14+r8]
 * 000000014035DEAA: cmp     r14, rcx
 * 000000014035DEAD: jnb     short loc_14035DEBF
 * 000000014035DEAF: mov     edx, 40h ; '@'
 * 000000014035DEB4: prefetchnta byte ptr [rax]
 * 000000014035DEB7: add     rax, rdx
 * 000000014035DEBA: cmp     rax, rcx
 * 000000014035DEBD: jb      short loc_14035DEB4
 * 000000014035DEBF: mov     r11d, r8d
 * 000000014035DEC2: mov     rbx, r15
 * 000000014035DEC5: shr     r11d, 7
 * 000000014035DEC9: mov     r13d, 1
 * 000000014035DECF: mov     r12d, 0FFFFFFFFh
 * 000000014035DED5: test    r11d, r11d
 * 000000014035DED8: jz      short loc_14035DF40
 * 000000014035DEDA: mov     rsi, 7010008004002001h
 * 000000014035DEE4: mov     edx, 8
 * 000000014035DEE9: mov     rax, [r9]
 * 000000014035DEEC: mov     ecx, r10d
 * 000000014035DEEF: xor     rax, rbx
 * 000000014035DEF2: mov     rbx, [r9+8]
 * 000000014035DEF6: rol     rax, cl
 * 000000014035DEF9: add     r9, 10h
 * 000000014035DEFD: xor     rbx, rax
 * 000000014035DF00: rol     rbx, cl
 * 000000014035DF03: sub     rdx, r13
 * 000000014035DF06: jnz     short loc_14035DEE9
 * 000000014035DF08: mov     rcx, r9
 * 000000014035DF0B: sub     rcx, r14
 * 000000014035DF0E: xor     rcx, r15
 * 000000014035DF11: mov     rax, rcx
 * 000000014035DF14: rol     rax, 11h
 * 000000014035DF18: xor     rcx, rax
 * 000000014035DF1B: mov     rax, rsi
 * 000000014035DF1E: mul     rcx
 * 000000014035DF21: xor     r10d, eax
 * 000000014035DF24: mov     [rbp+0B70h+var_560], rdx
 * 000000014035DF2B: xor     r10d, edx
 * 000000014035DF2E: and     r10d, 3Fh
 * 000000014035DF32: cmovz   r10d, r13d
 * 000000014035DF36: add     r11d, r12d
 * 000000014035DF39: jnz     short loc_14035DEE4
 * 000000014035DF3B: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035DF40: and     r8d, 7Fh
 * 000000014035DF44: cmp     r8d, 8
 * 000000014035DF48: jb      short loc_14035DF67
 * 000000014035DF4A: mov     edx, r8d
 * 000000014035DF4D: shr     rdx, 3
 * 000000014035DF51: xor     rbx, [r9]
 * 000000014035DF54: mov     ecx, r10d
 * 000000014035DF57: rol     rbx, cl
 * 000000014035DF5A: add     r9, 8
 * 000000014035DF5E: add     r8d, 0FFFFFFF8h
 * 000000014035DF62: sub     rdx, r13
 * 000000014035DF65: jnz     short loc_14035DF51
 * 000000014035DF67: xor     r15d, r15d
 * 000000014035DF6A: test    r8d, r8d
 * 000000014035DF6D: jz      short loc_14035DF84
 * 000000014035DF6F: movzx   eax, byte ptr [r9]
 * 000000014035DF73: mov     ecx, r10d
 * 000000014035DF76: xor     rbx, rax
 * 000000014035DF79: add     r9, r13
 * 000000014035DF7C: rol     rbx, cl
 * 000000014035DF7F: add     r8d, r12d
 * 000000014035DF82: jnz     short loc_14035DF6F
 * 000000014035DF84: mov     rax, rbx
 * 000000014035DF87: jmp     short loc_14035DF8B
 * 000000014035DF89: xor     ebx, eax
 * 000000014035DF8B: shr     rax, 1Fh
 * 000000014035DF8F: test    rax, rax
 * 000000014035DF92: jnz     short loc_14035DF89
 * 000000014035DF94: mov     rax, [rsp+0C70h+var_C18]
 * 000000014035DF99: btr     ebx, 1Fh
 * 000000014035DF9D: mov     r13d, r15d
 * 000000014035DFA0: cmp     ebx, [rax+14h]
 * 000000014035DFA3: jz      loc_14035DD45
 * 000000014035DFA9: cmp     [rax], r15d
 * 000000014035DFAC: jnz     short loc_14035DFBB
 * 000000014035DFAE: cmp     [rax+18h], r15d
 * 000000014035DFB2: mov     ecx, 1
 * 000000014035DFB7: cmovnz  r13d, ecx
 * 000000014035DFBB: mov     ecx, [rax+10h]
 * 000000014035DFBE: mov     rdx, [rax+8]
 * 000000014035DFC2: test    rcx, rcx
 * 000000014035DFC5: jz      loc_14035E087
 * 000000014035DFCB: mov     eax, [rsi+994h]
 * 000000014035DFD1: mov     r8d, 40h ; '@'
 * 000000014035DFD7: test    r8b, al
 * 000000014035DFDA: jz      loc_14035E087
 * 000000014035DFE0: mov     r12, cr8
 * 000000014035DFE4: lea     eax, [r8-3Eh]
 * 000000014035DFE8: mov     cr8, rax
 * 000000014035DFEC: mov     r14, rdx
 * 000000014035DFEF: lea     rax, [rcx-1]
 * 000000014035DFF3: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035DFFA: add     rax, rdx
 * 000000014035DFFD: or      rax, 0FFFh
 * 000000014035E003: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035E008: lea     rax, [r14-1]
 * 000000014035E00C: mov     [rbp+0B70h+arg_8], rax
 * 000000014035E013: movzx   r15d, r12b
 * 000000014035E017: mov     rax, [rsi+468h]
 * 000000014035E01E: xor     edx, edx
 * 000000014035E020: mov     rcx, r14
 * 000000014035E023: call    KeGuardDispatchICall
 * 000000014035E028: cmp     eax, 0C000022Dh
 * 000000014035E02D: jnz     short loc_14035E056
 * 000000014035E02F: test    r13d, r13d
 * 000000014035E032: jnz     short loc_14035E080
 * 000000014035E034: lea     eax, [r13+1]
 * 000000014035E038: cmp     r12b, al
 * 000000014035E03B: ja      short loc_14035E05A
 * 000000014035E03D: movzx   r15d, r12b
 * 000000014035E041: mov     cr8, r15
 * 000000014035E045: mov     al, [r14]
 * 000000014035E048: mov     rax, cr8
 * 000000014035E04C: lea     eax, [r13+2]
 * 000000014035E050: mov     cr8, rax
 * 000000014035E054: jmp     short loc_14035E017
 * 000000014035E056: test    eax, eax
 * 000000014035E058: js      short loc_14035E080
 * 000000014035E05A: mov     rax, [rbp+0B70h+arg_8]
 * 000000014035E061: mov     r10d, 1000h
 * 000000014035E067: add     rax, r10
 * 000000014035E06A: add     r14, r10
 * 000000014035E06D: mov     [rbp+0B70h+arg_8], rax
 * 000000014035E074: cmp     rax, [rsp+0C70h+var_BF8]
 * 000000014035E079: jnz     short loc_14035E013
 * 000000014035E07B: jmp     loc_14035DD3E
 * 000000014035E080: mov     cr8, r15
 * 000000014035E084: xor     r15d, r15d
 * 000000014035E087: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035E08C: mov     eax, [rsi+8F8h]
 * 000000014035E092: mov     ecx, [r13+14h]
 * 000000014035E096: test    eax, eax
 * 000000014035E098: jnz     loc_14035DE14
 * 000000014035E09E: jmp     loc_14035DDFE
 * 000000014035E0A3: mov     dword ptr [rbp+0B70h+arg_8], r14d
 * 000000014035E0AA: mov     r15d, eax
 * 000000014035E0AD: mov     esi, dword ptr [rbp+0B70h+arg_8]
 * 000000014035E0B3: mov     rdi, [rsp+0C70h+var_BF8]
 * 000000014035E0B8: mov     ecx, [r12+10h]
 * 000000014035E0BD: mov     eax, [r12+8]
 * 000000014035E0C2: cmp     ecx, eax
 * 000000014035E0C4: mov     r11d, [r12+0Ch]
 * 000000014035E0C9: cmovbe  ecx, eax
 * 000000014035E0CC: lea     r13d, [r11+0FFFh]
 * 000000014035E0D3: add     r13d, ecx
 * 000000014035E0D6: and     r13d, 0FFFFF000h
 * 000000014035E0DD: cmp     r15d, r13d
 * 000000014035E0E0: jnb     loc_14035E1F9
 * 000000014035E0E6: mov     eax, [r12+24h]
 * 000000014035E0EB: bt      eax, 19h
 * 000000014035E0EF: jb      loc_14035E1F6
 * 000000014035E0F5: mov     ecx, [r12]
 * 000000014035E0F9: cmp     ecx, 54494E49h
 * 000000014035E0FF: jnz     short loc_14035E110
 * 000000014035E101: cmp     dword ptr [r12+4], 4742444Bh
 * 000000014035E10A: jz      loc_14035E1F6
 * 000000014035E110: cmp     ecx, 45474150h
 * 000000014035E116: jnz     short loc_14035E14E
 * 000000014035E118: movzx   eax, word ptr [r12+4]
 * 000000014035E11E: mov     r8d, 7877h
 * 000000014035E124: cmp     ax, r8w
 * 000000014035E128: jz      loc_14035E1F6
 * 000000014035E12E: mov     r8d, 7277h
 * 000000014035E134: cmp     ax, r8w
 * 000000014035E138: jz      loc_14035E1F6
 * 000000014035E13E: mov     r8d, 7777h
 * 000000014035E144: cmp     ax, r8w
 * 000000014035E148: jz      loc_14035E1F6
 * 000000014035E14E: cmp     ecx, 41525245h
 * 000000014035E154: jnz     short loc_14035E167
 * 000000014035E156: mov     eax, 4154h
 * 000000014035E15B: cmp     [r12+4], ax
 * 000000014035E161: jz      loc_14035E1F6
 * 000000014035E167: mov     rcx, [rbp+0B70h+var_BE0]
 * 000000014035E16B: test    rcx, rcx
 * 000000014035E16E: jz      short loc_14035E1AA
 * 000000014035E170: mov     rax, [rcx+938h]
 * 000000014035E177: mov     r8, [rcx+930h]
 * 000000014035E17E: mov     qword ptr [rbp+0B70h+var_8B8+8], rax
 * 000000014035E185: mov     rax, [rcx+940h]
 * 000000014035E18C: mov     qword ptr [rbp+0B70h+var_8A8], rax
 * 000000014035E193: mov     rax, [rcx+948h]
 * 000000014035E19A: mov     qword ptr [rbp+0B70h+var_8A8+8], rax
 * 000000014035E1A1: mov     qword ptr [rbp+0B70h+var_8B8], r8
 * 000000014035E1A8: jmp     short loc_14035E1CD
 * 000000014035E1AA: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 000000014035E1B1: movups  xmm1, xmmword ptr cs:off_140428020; "INIT"
 * 000000014035E1B8: movups  [rbp+0B70h+var_8B8], xmm0
 * 000000014035E1BF: mov     r8, qword ptr [rbp+0B70h+var_8B8]
 * 000000014035E1C6: movups  [rbp+0B70h+var_8A8], xmm1
 * 000000014035E1CD: mov     r10d, 7
 * 000000014035E1D3: mov     r9, r12
 * 000000014035E1D6: mov     r14d, 0FFFFFFFFh
 * 000000014035E1DC: movzx   edx, byte ptr [r9]
 * 000000014035E1E0: inc     r9
 * 000000014035E1E3: movzx   eax, byte ptr [r8]
 * 000000014035E1E7: inc     r8
 * 000000014035E1EA: cmp     rdx, rax
 * 000000014035E1ED: jnz     short loc_14035E237
 * 000000014035E1EF: add     r10d, r14d
 * 000000014035E1F2: jnz     short loc_14035E1DC
 * 000000014035E1F4: xor     edx, edx
 * 000000014035E1F6: mov     r15d, r13d
 * 000000014035E1F9: mov     r8, [rbp+0B70h+var_BE0]
 * 000000014035E1FD: add     r12, 28h ; '('
 * 000000014035E201: cmp     r12, rdi
 * 000000014035E204: jnz     loc_14035E0B8
 * 000000014035E20A: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035E20F: cmp     r12, rdi
 * 000000014035E212: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035E219: jnz     loc_14035E59E
 * 000000014035E21F: cmp     r15d, r13d
 * 000000014035E222: jb      loc_14035E59E
 * 000000014035E228: xor     r15d, r15d
 * 000000014035E22B: mov     [r8+824h], r15d
 * 000000014035E232: jmp     loc_140355323
 * 000000014035E237: mov     r9, qword ptr [rbp+0B70h+var_8B8+8]
 * 000000014035E23E: mov     r8d, 8
 * 000000014035E244: mov     r10, r12
 * 000000014035E247: mov     rcx, [r10]
 * 000000014035E24A: add     r10, 8
 * 000000014035E24E: mov     rax, [r9]
 * 000000014035E251: add     r9, 8
 * 000000014035E255: cmp     rcx, rax
 * 000000014035E258: jnz     short loc_14035E288
 * 000000014035E25A: add     r8d, 0FFFFFFF8h
 * 000000014035E25E: cmp     r8d, 8
 * 000000014035E262: jnb     short loc_14035E247
 * 000000014035E264: xor     edx, edx
 * 000000014035E266: test    r8d, r8d
 * 000000014035E269: jz      short loc_14035E1F6
 * 000000014035E26B: movzx   edx, byte ptr [r10]
 * 000000014035E26F: inc     r10
 * 000000014035E272: movzx   eax, byte ptr [r9]
 * 000000014035E276: inc     r9
 * 000000014035E279: cmp     rdx, rax
 * 000000014035E27C: jnz     short loc_14035E288
 * 000000014035E27E: add     r8d, r14d
 * 000000014035E281: jnz     short loc_14035E26B
 * 000000014035E283: jmp     loc_14035E1F4
 * 000000014035E288: mov     r8, qword ptr [rbp+0B70h+var_8A8]
 * 000000014035E28F: mov     r10d, 4
 * 000000014035E295: mov     r9, r12
 * 000000014035E298: movzx   edx, byte ptr [r9]
 * 000000014035E29C: inc     r9
 * 000000014035E29F: movzx   eax, byte ptr [r8]
 * 000000014035E2A3: inc     r8
 * 000000014035E2A6: cmp     rdx, rax
 * 000000014035E2A9: jnz     short loc_14035E2B5
 * 000000014035E2AB: add     r10d, r14d
 * 000000014035E2AE: jnz     short loc_14035E298
 * 000000014035E2B0: jmp     loc_14035E1F4
 * 000000014035E2B5: mov     r8, qword ptr [rbp+0B70h+var_8A8+8]
 * 000000014035E2BC: mov     r10d, 6
 * 000000014035E2C2: mov     r9, r12
 * 000000014035E2C5: movzx   edx, byte ptr [r9]
 * 000000014035E2C9: inc     r9
 * 000000014035E2CC: movzx   eax, byte ptr [r8]
 * 000000014035E2D0: inc     r8
 * 000000014035E2D3: cmp     rdx, rax
 * 000000014035E2D6: jnz     short loc_14035E2E2
 * 000000014035E2D8: add     r10d, r14d
 * 000000014035E2DB: jnz     short loc_14035E2C5
 * 000000014035E2DD: jmp     loc_14035E1F4
 * 000000014035E2E2: mov     eax, [r12+24h]
 * 000000014035E2E7: xor     edx, edx
 * 000000014035E2E9: test    eax, eax
 * 000000014035E2EB: js      loc_14035E1F6
 * 000000014035E2F1: bt      eax, 1Dh
 * 000000014035E2F5: jnb     loc_14035E1F6
 * 000000014035E2FB: lea     r9d, [rdx+1]
 * 000000014035E2FF: mov     r14d, r9d
 * 000000014035E302: test    esi, esi
 * 000000014035E304: jz      short loc_14035E31A
 * 000000014035E306: mov     eax, [r12]
 * 000000014035E30A: cmp     eax, 2E656461h
 * 000000014035E30F: jz      short loc_14035E31A
 * 000000014035E311: cmp     eax, 45474150h
 * 000000014035E316: cmovnz  r14d, edx
 * 000000014035E31A: mov     r8, [rbp+0B70h+var_BE0]
 * 000000014035E31E: cmp     r15d, r11d
 * 000000014035E321: cmovnb  r11d, r15d
 * 000000014035E325: mov     r15d, r11d
 * 000000014035E328: mov     eax, r15d
 * 000000014035E32B: add     rbx, rax
 * 000000014035E32E: test    byte ptr [r8+87Bh], 4
 * 000000014035E336: jz      short loc_14035E39D
 * 000000014035E338: mov     ecx, 0FFFFFFFFh
 * 000000014035E33D: mov     eax, ecx
 * 000000014035E33F: xbegin  $+6
 * 000000014035E345: cmp     eax, ecx
 * 000000014035E347: jnz     short loc_14035E350
 * 000000014035E349: mov     al, [rbx]
 * 000000014035E34B: xend
 * 000000014035E34E: jmp     short loc_14035E384
 * 000000014035E350: rdtsc
 * 000000014035E352: shl     rdx, 20h
 * 000000014035E356: or      rax, rdx
 * 000000014035E359: mov     rcx, rax
 * 000000014035E35C: ror     rax, 3
 * 000000014035E360: xor     rcx, rax
 * 000000014035E363: mov     rax, 7010008004002001h
 * 000000014035E36D: mul     rcx
 * 000000014035E370: mov     [rbp+0B70h+var_558], rdx
 * 000000014035E377: xor     dl, al
 * 000000014035E379: mov     eax, 0Fh
 * 000000014035E37E: test    al, dl
 * 000000014035E380: jz      short loc_14035E39B
 * 000000014035E382: xor     edx, edx
 * 000000014035E384: add     [r8+83Ch], r9d
 * 000000014035E38B: add     dword ptr [r8+828h], 100h
 * 000000014035E396: jmp     loc_14035E562
 * 000000014035E39B: xor     edx, edx
 * 000000014035E39D: test    r14d, r14d
 * 000000014035E3A0: jz      loc_14035E43D
 * 000000014035E3A6: mov     rax, [r8+450h]
 * 000000014035E3AD: lea     rcx, [rbp+0B70h+var_668]
 * 000000014035E3B4: mov     rdx, rbx
 * 000000014035E3B7: call    KeGuardDispatchICall
 * 000000014035E3BC: xor     edx, edx
 * 000000014035E3BE: test    eax, eax
 * 000000014035E3C0: jns     loc_14035E4B6
 * 000000014035E3C6: mov     r8, [rbp+0B70h+var_BE0]
 * 000000014035E3CA: cmp     eax, 0C0000005h
 * 000000014035E3CF: jnz     loc_14035E55C
 * 000000014035E3D5: cmp     [r8+8F8h], edx
 * 000000014035E3DC: jnz     loc_14035E55C
 * 000000014035E3E2: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035E3E7: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035E3F1: add     rax, r8
 * 000000014035E3F4: mov     [r8+900h], rax
 * 000000014035E3FB: mov     rax, 0B3B74BDEE4453415h
 * 000000014035E405: add     rax, rcx
 * 000000014035E408: mov     [r8+908h], rax
 * 000000014035E40F: movsxd  rax, dword ptr [rcx]
 * 000000014035E412: mov     rcx, r8
 * 000000014035E415: mov     [r8+910h], rax
 * 000000014035E41C: lea     eax, [rdx+1]
 * 000000014035E41F: mov     [r8+918h], rbx
 * 000000014035E426: mov     [r8+8F8h], eax
 * 000000014035E42D: call    sub_14036B3BC
 * 000000014035E432: mov     r8, [rbp+0B70h+var_BE0]
 * 000000014035E436: xor     edx, edx
 * 000000014035E438: jmp     loc_14035E55C
 * 000000014035E43D: mov     r9d, 0FFFh
 * 000000014035E443: mov     [rbp+0B70h+var_668], rdx
 * 000000014035E44A: mov     [rbp+0B70h+var_65E], dx
 * 000000014035E451: mov     rax, rbx
 * 000000014035E454: and     rax, r9
 * 000000014035E457: mov     [rbp+0B70h+var_640], 1000h
 * 000000014035E461: add     rax, 1FFFh
 * 000000014035E467: mov     rcx, rbx
 * 000000014035E46A: shr     rax, 0Ch
 * 000000014035E46E: add     ax, 6
 * 000000014035E472: shl     ax, 3
 * 000000014035E476: mov     [rbp+0B70h+var_660], ax
 * 000000014035E47D: mov     rax, rbx
 * 000000014035E480: and     rax, 0FFFFFFFFFFFFF000h
 * 000000014035E486: mov     [rbp+0B70h+var_648], rax
 * 000000014035E48D: mov     eax, ebx
 * 000000014035E48F: and     eax, r9d
 * 000000014035E492: mov     [rbp+0B70h+var_63C], eax
 * 000000014035E498: mov     rax, [r8+458h]
 * 000000014035E49F: call    KeGuardDispatchICall
 * 000000014035E4A4: mov     [rbp+0B70h+var_550], rax
 * 000000014035E4AB: shr     rax, 0Ch
 * 000000014035E4AF: mov     [rbp+0B70h+var_638], rax
 * 000000014035E4B6: mov     rcx, [rbp+0B70h+var_BE0]
 * 000000014035E4BA: mov     eax, 1
 * 000000014035E4BF: add     [rcx+840h], eax
 * 000000014035E4C5: mov     eax, [rbp+0B70h+var_63C]
 * 000000014035E4CB: add     rax, [rbp+0B70h+var_648]
 * 000000014035E4D2: mov     [rcx+0A68h], rax
 * 000000014035E4D9: mov     rax, [rsp+0C70h+var_C18]
 * 000000014035E4DE: mov     [rcx+0A60h], rax
 * 000000014035E4E5: mov     rbx, cr8
 * 000000014035E4E9: mov     eax, 2
 * 000000014035E4EE: mov     cr8, rax
 * 000000014035E4F2: mov     rax, [rcx+5F8h]
 * 000000014035E4F9: xor     r8d, r8d
 * 000000014035E4FC: add     rcx, 0A40h
 * 000000014035E503: mov     edx, [rax]
 * 000000014035E505: call    RtlInitMinimalBarrier
 * 000000014035E50A: mov     rdx, [rbp+0B70h+var_BE0]
 * 000000014035E50E: mov     ecx, [rdx+7F4h]
 * 000000014035E514: mov     rax, [rdx+448h]
 * 000000014035E51B: add     rcx, rdx
 * 000000014035E51E: call    KeGuardDispatchICall
 * 000000014035E523: mov     r8, rax
 * 000000014035E526: mov     [rbp+0B70h+var_BE0], rax
 * 000000014035E52A: movzx   eax, bl
 * 000000014035E52D: mov     cr8, rax
 * 000000014035E531: xor     edx, edx
 * 000000014035E533: test    r14d, r14d
 * 000000014035E536: jz      short loc_14035E551
 * 000000014035E538: mov     rax, [r8+460h]
 * 000000014035E53F: lea     rcx, [rbp+0B70h+var_668]
 * 000000014035E546: call    KeGuardDispatchICall
 * 000000014035E54B: mov     r8, [rbp+0B70h+var_BE0]
 * 000000014035E54F: xor     edx, edx
 * 000000014035E551: add     dword ptr [r8+828h], 14000h
 * 000000014035E55C: mov     r9d, 1
 * 000000014035E562: mov     eax, [r8+828h]
 * 000000014035E569: add     r15d, 1000h
 * 000000014035E570: cmp     r15d, r13d
 * 000000014035E573: jnb     short loc_14035E587
 * 000000014035E575: mov     rbx, [rsp+0C70h+var_C20]
 * 000000014035E57A: cmp     eax, [r8+82Ch]
 * 000000014035E581: jl      loc_14035E328
 * 000000014035E587: cmp     eax, [r8+82Ch]
 * 000000014035E58E: jge     loc_14035E20A
 * 000000014035E594: mov     rbx, [rsp+0C70h+var_C20]
 * 000000014035E599: jmp     loc_14035E1FD
 * 000000014035E59E: mov     [r8+824h], r15d
 * 000000014035E5A5: jmp     loc_140355320
 * 000000014035E5AA: mov     r8d, 0Ch
 * 000000014035E5B0: xor     eax, eax
 * 000000014035E5B2: cmp     r14d, r8d
 * 000000014035E5B5: jnz     loc_14035E8E0
 * 000000014035E5BB: cmp     [rsi+980h], rax
 * 000000014035E5C2: jz      loc_14035531A
 * 000000014035E5C8: mov     edx, [rsi+994h]
 * 000000014035E5CE: mov     ecx, edx
 * 000000014035E5D0: cmp     [rsi+824h], eax
 * 000000014035E5D6: jnz     short loc_14035E5EA
 * 000000014035E5D8: shl     ecx, 3
 * 000000014035E5DB: xor     ecx, edx
 * 000000014035E5DD: and     ecx, 20h
 * 000000014035E5E0: xor     ecx, edx
 * 000000014035E5E2: mov     [rsi+994h], ecx
 * 000000014035E5E8: jmp     short loc_14035E5FC
 * 000000014035E5EA: mov     eax, edx
 * 000000014035E5EC: shr     eax, 3
 * 000000014035E5EF: xor     eax, edx
 * 000000014035E5F1: test    r15b, al
 * 000000014035E5F4: jnz     loc_140355402
 * 000000014035E5FA: xor     eax, eax
 * 000000014035E5FC: test    r15b, cl
 * 000000014035E5FF: jz      loc_14035E8DB
 * 000000014035E605: mov     r15, [r13+20h]
 * 000000014035E609: mov     eax, [r13+28h]
 * 000000014035E60D: test    r15, r15
 * 000000014035E610: jz      short loc_14035E63A
 * 000000014035E612: mov     ebx, [rsi+824h]
 * 000000014035E618: sub     eax, ebx
 * 000000014035E61A: mov     r14d, eax
 * 000000014035E61D: add     r14, 0FFFh
 * 000000014035E624: lea     ecx, [r15+rbx]
 * 000000014035E628: and     ecx, 0FFFh
 * 000000014035E62E: add     r14, rcx
 * 000000014035E631: shr     r14, 0Ch
 * 000000014035E635: add     rbx, r15
 * 000000014035E638: jmp     short loc_14035E65B
 * 000000014035E63A: mov     r14d, [r13+8]
 * 000000014035E63E: mov     ecx, [r13+10h]
 * 000000014035E642: and     r14d, 0FFFh
 * 000000014035E649: mov     rbx, [r13+8]
 * 000000014035E64D: add     r14, 0FFFh
 * 000000014035E654: add     r14, rcx
 * 000000014035E657: shr     r14, 0Ch
 * 000000014035E65B: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014035E662: test    r14, r14
 * 000000014035E665: jz      loc_14035E716
 * 000000014035E66B: xor     edi, edi
 * 000000014035E66D: mov     rax, [rsi+2B0h]
 * 000000014035E674: mov     rcx, rbx
 * 000000014035E677: dec     r14
 * 000000014035E67A: call    KeGuardDispatchICall
 * 000000014035E67F: test    al, al
 * 000000014035E681: jz      short loc_14035E6DA
 * 000000014035E683: cmp     [rsi+8F8h], edi
 * 000000014035E689: jnz     short loc_14035E6DA
 * 000000014035E68B: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035E695: xor     edx, edx
 * 000000014035E697: add     rax, rsi
 * 000000014035E69A: mov     rcx, rsi
 * 000000014035E69D: mov     [rsi+900h], rax
 * 000000014035E6A4: mov     rax, 0B3B74BDEE4453415h
 * 000000014035E6AE: add     rax, r13
 * 000000014035E6B1: mov     [rsi+908h], rax
 * 000000014035E6B8: movsxd  rax, dword ptr [r13+0]
 * 000000014035E6BC: mov     [rsi+910h], rax
 * 000000014035E6C3: mov     eax, 1
 * 000000014035E6C8: mov     [rsi+918h], rbx
 * 000000014035E6CF: mov     [rsi+8F8h], eax
 * 000000014035E6D5: call    sub_14036B3BC
 * 000000014035E6DA: add     dword ptr [rsi+828h], 100h
 * 000000014035E6E4: add     rbx, 1000h
 * 000000014035E6EB: test    r15, r15
 * 000000014035E6EE: jz      short loc_14035E706
 * 000000014035E6F0: add     dword ptr [rsi+824h], 1000h
 * 000000014035E6FA: mov     eax, [r12]
 * 000000014035E6FE: cmp     [rsi+828h], eax
 * 000000014035E704: jge     short loc_14035E70F
 * 000000014035E706: test    r14, r14
 * 000000014035E709: jnz     loc_14035E66D
 * 000000014035E70F: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035E716: test    r15, r15
 * 000000014035E719: jz      short loc_14035E72A
 * 000000014035E71B: xor     r15d, r15d
 * 000000014035E71E: test    r14, r14
 * 000000014035E721: jnz     short loc_14035E72A
 * 000000014035E723: mov     [rsi+824h], r15d
 * 000000014035E72A: cmp     [rsi+824h], r15d
 * 000000014035E731: jnz     loc_140355323
 * 000000014035E737: mov     rcx, [rsi+540h]
 * 000000014035E73E: mov     r15, cr8
 * 000000014035E742: mov     eax, 0Fh
 * 000000014035E747: mov     cr8, rax
 * 000000014035E74B: mov     rax, [rsi+150h]
 * 000000014035E752: call    KeGuardDispatchICall
 * 000000014035E757: mov     rax, [rsi+610h]
 * 000000014035E75E: mov     r14, [rsp+0C70h+var_C18]
 * 000000014035E763: mov     rcx, [rax]
 * 000000014035E766: mov     eax, [rcx]
 * 000000014035E768: lea     rbx, [rcx+10h]
 * 000000014035E76C: mov     r12b, [rcx+0Ch]
 * 000000014035E770: lea     rcx, [rax+rax*2]
 * 000000014035E774: lea     r13, [rbx+rcx*8]
 * 000000014035E778: mov     r8d, 18h
 * 000000014035E77E: lea     r9, [r14+18h]
 * 000000014035E782: mov     r10, rbx
 * 000000014035E785: mov     rcx, [r10]
 * 000000014035E788: add     r10, 8
 * 000000014035E78C: mov     rax, [r9]
 * 000000014035E78F: add     r9, 8
 * 000000014035E793: cmp     rcx, rax
 * 000000014035E796: jnz     short loc_14035E7CC
 * 000000014035E798: add     r8d, 0FFFFFFF8h
 * 000000014035E79C: cmp     r8d, 8
 * 000000014035E7A0: jnb     short loc_14035E785
 * 000000014035E7A2: test    r8d, r8d
 * 000000014035E7A5: jz      short loc_14035E7D5
 * 000000014035E7A7: mov     r11d, 1
 * 000000014035E7AD: movzx   edx, byte ptr [r10]
 * 000000014035E7B1: add     r10, r11
 * 000000014035E7B4: movzx   eax, byte ptr [r9]
 * 000000014035E7B8: add     r9, r11
 * 000000014035E7BB: cmp     rdx, rax
 * 000000014035E7BE: jnz     short loc_14035E7CC
 * 000000014035E7C0: mov     eax, 0FFFFFFFFh
 * 000000014035E7C5: add     r8d, eax
 * 000000014035E7C8: jz      short loc_14035E7D5
 * 000000014035E7CA: jmp     short loc_14035E7AD
 * 000000014035E7CC: add     rbx, 18h
 * 000000014035E7D0: cmp     rbx, r13
 * 000000014035E7D3: jb      short loc_14035E778
 * 000000014035E7D5: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035E7DA: mov     rcx, [rsi+540h]
 * 000000014035E7E1: mov     rax, [rsi+190h]
 * 000000014035E7E8: call    KeGuardDispatchICall
 * 000000014035E7ED: movzx   eax, r15b
 * 000000014035E7F1: mov     cr8, rax
 * 000000014035E7F5: xor     r15d, r15d
 * 000000014035E7F8: test    r12b, r12b
 * 000000014035E7FB: jz      short loc_14035E877
 * 000000014035E7FD: mov     eax, [rsi+994h]
 * 000000014035E803: lea     ecx, [r15+10h]
 * 000000014035E807: test    cl, al
 * 000000014035E809: jz      short loc_14035E866
 * 000000014035E80B: cmp     [rsi+8F8h], r15d
 * 000000014035E812: jnz     short loc_14035E866
 * 000000014035E814: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035E819: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035E823: add     rax, rsi
 * 000000014035E826: xor     edx, edx
 * 000000014035E828: mov     [rsi+900h], rax
 * 000000014035E82F: mov     rax, 0B3B74BDEE4453415h
 * 000000014035E839: add     rax, rcx
 * 000000014035E83C: mov     [rsi+908h], rax
 * 000000014035E843: movsxd  rax, dword ptr [rcx]
 * 000000014035E846: mov     rcx, rsi
 * 000000014035E849: mov     [rsi+910h], rax
 * 000000014035E850: lea     eax, [r15+1]
 * 000000014035E854: mov     [rsi+918h], rax
 * 000000014035E85B: mov     [rsi+8F8h], eax
 * 000000014035E861: call    sub_14036B3BC
 * 000000014035E866: mov     edx, 1
 * 000000014035E86B: cmp     [r14+18h], rdx
 * 000000014035E86F: jz      loc_140355323
 * 000000014035E875: jmp     short loc_14035E87C
 * 000000014035E877: mov     edx, 1
 * 000000014035E87C: cmp     rbx, r13
 * 000000014035E87F: jnz     loc_140355323
 * 000000014035E885: cmp     [rsi+8F8h], r15d
 * 000000014035E88C: jnz     loc_140355323
 * 000000014035E892: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035E897: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035E8A1: add     rax, rsi
 * 000000014035E8A4: mov     [rsi+900h], rax
 * 000000014035E8AB: mov     rax, 0B3B74BDEE4453415h
 * 000000014035E8B5: add     rax, rcx
 * 000000014035E8B8: mov     [rsi+908h], rax
 * 000000014035E8BF: movsxd  rax, dword ptr [rcx]
 * 000000014035E8C2: mov     [rsi+910h], rax
 * 000000014035E8C9: mov     [rsi+918h], rbx
 * 000000014035E8D0: mov     [rsi+8F8h], edx
 * 000000014035E8D6: jmp     loc_1403556FD
 * 000000014035E8DB: mov     edx, 1
 * 000000014035E8E0: cmp     [rsi+824h], eax
 * 000000014035E8E6: jnz     short loc_14035E904
 * 000000014035E8E8: cmp     r14d, r8d
 * 000000014035E8EB: jnz     loc_14035EE26
 * 000000014035E8F1: cmp     [rsi+980h], rax
 * 000000014035E8F8: jnz     loc_14035EAB0
 * 000000014035E8FE: mov     [rsi+824h], eax
 * 000000014035E904: xor     r11d, r11d
 * 000000014035E907: mov     r8d, [rsi+824h]
 * 000000014035E90E: mov     r9, [r13+8]
 * 000000014035E912: mov     ecx, [r13+10h]
 * 000000014035E916: mov     edi, dword ptr [rbp+0B70h+arg_8]
 * 000000014035E91C: lea     rax, [r8+r8*2]
 * 000000014035E920: mov     [rbp+0B70h+var_BA0], r9
 * 000000014035E924: lea     r14, [r9+rax*4]
 * 000000014035E928: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014035E932: mul     rcx
 * 000000014035E935: lea     r12, ds:30h[r8*4]
 * 000000014035E93D: mov     [rsp+0C70h+var_C08], r14
 * 000000014035E942: shr     rdx, 3
 * 000000014035E946: add     r12, r13
 * 000000014035E949: mov     [rsp+0C70h+var_C20], r12
 * 000000014035E94E: lea     rax, [rdx+rdx*2]
 * 000000014035E952: lea     rcx, [r9+rax*4]
 * 000000014035E956: mov     [rbp+0B70h+var_BF0], rcx
 * 000000014035E95A: mov     r8, rcx
 * 000000014035E95D: cmp     [r12], r11d
 * 000000014035E961: jl      loc_14035F46E
 * 000000014035E967: mov     eax, [r14]
 * 000000014035E96A: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035E96F: mov     r13d, eax
 * 000000014035E972: mov     r15d, [r14+4]
 * 000000014035E976: sub     r15d, eax
 * 000000014035E979: add     r13, [rcx+20h]
 * 000000014035E97D: mov     [rsp+0C70h+var_BF8], r13
 * 000000014035E982: cmp     edi, 2Bh ; '+'
 * 000000014035E985: jz      loc_14035F077
 * 000000014035E98B: add     [rsi+828h], r15d
 * 000000014035E992: mov     r9, r13
 * 000000014035E995: mov     r10d, [rsi+814h]
 * 000000014035E99C: mov     rax, r13
 * 000000014035E99F: mov     r11, [rsi+818h]
 * 000000014035E9A6: mov     ecx, r15d
 * 000000014035E9A9: add     rcx, r13
 * 000000014035E9AC: cmp     r13, rcx
 * 000000014035E9AF: jnb     short loc_14035E9C1
 * 000000014035E9B1: mov     edx, 40h ; '@'
 * 000000014035E9B6: prefetchnta byte ptr [rax]
 * 000000014035E9B9: add     rax, rdx
 * 000000014035E9BC: cmp     rax, rcx
 * 000000014035E9BF: jb      short loc_14035E9B6
 * 000000014035E9C1: mov     r8d, r15d
 * 000000014035E9C4: mov     rbx, r11
 * 000000014035E9C7: shr     r8d, 7
 * 000000014035E9CB: test    r8d, r8d
 * 000000014035E9CE: jz      short loc_14035EA46
 * 000000014035E9D0: mov     r12, 7010008004002001h
 * 000000014035E9DA: mov     edx, 8
 * 000000014035E9DF: lea     esi, [rdx-7]
 * 000000014035E9E2: mov     rax, [r9]
 * 000000014035E9E5: mov     ecx, r10d
 * 000000014035E9E8: xor     rax, rbx
 * 000000014035E9EB: mov     rbx, [r9+8]
 * 000000014035E9EF: rol     rax, cl
 * 000000014035E9F2: add     r9, 10h
 * 000000014035E9F6: xor     rbx, rax
 * 000000014035E9F9: rol     rbx, cl
 * 000000014035E9FC: sub     rdx, rsi
 * 000000014035E9FF: jnz     short loc_14035E9E2
 * 000000014035EA01: mov     rcx, r9
 * 000000014035EA04: sub     rcx, r13
 * 000000014035EA07: xor     rcx, r11
 * 000000014035EA0A: mov     rax, rcx
 * 000000014035EA0D: rol     rax, 11h
 * 000000014035EA11: xor     rcx, rax
 * 000000014035EA14: mov     rax, r12
 * 000000014035EA17: mul     rcx
 * 000000014035EA1A: xor     r10d, eax
 * 000000014035EA1D: mov     [rbp+0B70h+var_538], rdx
 * 000000014035EA24: xor     r10d, edx
 * 000000014035EA27: mov     rax, rsi
 * 000000014035EA2A: and     r10d, 3Fh
 * 000000014035EA2E: cmovz   r10d, eax
 * 000000014035EA32: mov     eax, 0FFFFFFFFh
 * 000000014035EA37: add     r8d, eax
 * 000000014035EA3A: jnz     short loc_14035E9DA
 * 000000014035EA3C: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035EA41: mov     r12, [rsp+0C70h+var_C20]
 * 000000014035EA46: mov     edx, r15d
 * 000000014035EA49: and     edx, 7Fh
 * 000000014035EA4C: cmp     edx, 8
 * 000000014035EA4F: jb      short loc_14035EA78
 * 000000014035EA51: mov     r8d, edx
 * 000000014035EA54: mov     r12d, 1
 * 000000014035EA5A: shr     r8, 3
 * 000000014035EA5E: xor     rbx, [r9]
 * 000000014035EA61: mov     ecx, r10d
 * 000000014035EA64: rol     rbx, cl
 * 000000014035EA67: add     r9, 8
 * 000000014035EA6B: add     edx, 0FFFFFFF8h
 * 000000014035EA6E: sub     r8, r12
 * 000000014035EA71: jnz     short loc_14035EA5E
 * 000000014035EA73: mov     r12, [rsp+0C70h+var_C20]
 * 000000014035EA78: xor     r11d, r11d
 * 000000014035EA7B: test    edx, edx
 * 000000014035EA7D: jz      short loc_14035EAA8
 * 000000014035EA7F: mov     r11d, 1
 * 000000014035EA85: mov     r12d, 0FFFFFFFFh
 * 000000014035EA8B: movzx   eax, byte ptr [r9]
 * 000000014035EA8F: mov     ecx, r10d
 * 000000014035EA92: xor     rbx, rax
 * 000000014035EA95: add     r9, r11
 * 000000014035EA98: rol     rbx, cl
 * 000000014035EA9B: add     edx, r12d
 * 000000014035EA9E: jnz     short loc_14035EA8B
 * 000000014035EAA0: mov     r12, [rsp+0C70h+var_C20]
 * 000000014035EAA5: xor     r11d, r11d
 * 000000014035EAA8: mov     rax, rbx
 * 000000014035EAAB: jmp     loc_14035F05E
 * 000000014035EAB0: mov     eax, [rsi+994h]
 * 000000014035EAB6: mov     ecx, eax
 * 000000014035EAB8: shl     ecx, 3
 * 000000014035EABB: xor     ecx, eax
 * 000000014035EABD: and     ecx, 20h
 * 000000014035EAC0: xor     ecx, eax
 * 000000014035EAC2: mov     [rsi+994h], ecx
 * 000000014035EAC8: test    r15b, cl
 * 000000014035EACB: jz      loc_14035EB9E
 * 000000014035EAD1: mov     r14d, [r13+8]
 * 000000014035EAD5: xor     r11d, r11d
 * 000000014035EAD8: mov     ecx, [r13+10h]
 * 000000014035EADC: and     r14d, 0FFFh
 * 000000014035EAE3: mov     rbx, [r13+8]
 * 000000014035EAE7: add     r14, 0FFFh
 * 000000014035EAEE: add     r14, rcx
 * 000000014035EAF1: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014035EAF8: shr     r14, 0Ch
 * 000000014035EAFC: test    r14, r14
 * 000000014035EAFF: jz      loc_14035E907
 * 000000014035EB05: jmp     short loc_14035EB0C
 * 000000014035EB07: mov     edx, 1
 * 000000014035EB0C: mov     rax, [rsi+2B0h]
 * 000000014035EB13: mov     rcx, rbx
 * 000000014035EB16: sub     r14, rdx
 * 000000014035EB19: call    KeGuardDispatchICall
 * 000000014035EB1E: xor     r11d, r11d
 * 000000014035EB21: test    al, al
 * 000000014035EB23: jz      short loc_14035EB7F
 * 000000014035EB25: cmp     [rsi+8F8h], r11d
 * 000000014035EB2C: jnz     short loc_14035EB7F
 * 000000014035EB2E: lea     edi, [r11+1]
 * 000000014035EB32: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035EB3C: add     rax, rsi
 * 000000014035EB3F: xor     edx, edx
 * 000000014035EB41: mov     [rsi+900h], rax
 * 000000014035EB48: mov     rcx, rsi
 * 000000014035EB4B: mov     rax, 0B3B74BDEE4453415h
 * 000000014035EB55: add     rax, r13
 * 000000014035EB58: mov     [rsi+908h], rax
 * 000000014035EB5F: movsxd  rax, dword ptr [r13+0]
 * 000000014035EB63: mov     [rsi+910h], rax
 * 000000014035EB6A: mov     [rsi+918h], rbx
 * 000000014035EB71: mov     [rsi+8F8h], edi
 * 000000014035EB77: call    sub_14036B3BC
 * 000000014035EB7C: xor     r11d, r11d
 * 000000014035EB7F: add     dword ptr [rsi+828h], 100h
 * 000000014035EB89: add     rbx, 1000h
 * 000000014035EB90: test    r14, r14
 * 000000014035EB93: jnz     loc_14035EB07
 * 000000014035EB99: jmp     loc_14035E907
 * 000000014035EB9E: mov     r14, [r13+8]
 * 000000014035EBA2: mov     r8d, [r13+10h]
 * 000000014035EBA6: mov     r9, r14
 * 000000014035EBA9: add     [rsi+828h], r8d
 * 000000014035EBB0: mov     rax, r14
 * 000000014035EBB3: mov     r10d, [rsi+814h]
 * 000000014035EBBA: mov     r15, [rsi+818h]
 * 000000014035EBC1: lea     rcx, [r14+r8]
 * 000000014035EBC5: cmp     r14, rcx
 * 000000014035EBC8: jnb     short loc_14035EBDB
 * 000000014035EBCA: mov     r11d, 40h ; '@'
 * 000000014035EBD0: prefetchnta byte ptr [rax]
 * 000000014035EBD3: add     rax, r11
 * 000000014035EBD6: cmp     rax, rcx
 * 000000014035EBD9: jb      short loc_14035EBD0
 * 000000014035EBDB: mov     r11d, r8d
 * 000000014035EBDE: mov     rbx, r15
 * 000000014035EBE1: shr     r11d, 7
 * 000000014035EBE5: mov     r12d, 0FFFFFFFFh
 * 000000014035EBEB: test    r11d, r11d
 * 000000014035EBEE: jz      short loc_14035EC5C
 * 000000014035EBF0: mov     rdi, 7010008004002001h
 * 000000014035EBFA: mov     edx, 8
 * 000000014035EBFF: lea     esi, [rdx-7]
 * 000000014035EC02: mov     rax, [r9]
 * 000000014035EC05: mov     ecx, r10d
 * 000000014035EC08: xor     rax, rbx
 * 000000014035EC0B: mov     rbx, [r9+8]
 * 000000014035EC0F: rol     rax, cl
 * 000000014035EC12: add     r9, 10h
 * 000000014035EC16: xor     rbx, rax
 * 000000014035EC19: rol     rbx, cl
 * 000000014035EC1C: sub     rdx, rsi
 * 000000014035EC1F: jnz     short loc_14035EC02
 * 000000014035EC21: mov     rcx, r9
 * 000000014035EC24: sub     rcx, r14
 * 000000014035EC27: xor     rcx, r15
 * 000000014035EC2A: mov     rax, rcx
 * 000000014035EC2D: rol     rax, 11h
 * 000000014035EC31: xor     rcx, rax
 * 000000014035EC34: mov     rax, rdi
 * 000000014035EC37: mul     rcx
 * 000000014035EC3A: xor     r10d, eax
 * 000000014035EC3D: mov     [rbp+0B70h+var_548], rdx
 * 000000014035EC44: xor     r10d, edx
 * 000000014035EC47: mov     rdx, rsi
 * 000000014035EC4A: and     r10d, 3Fh
 * 000000014035EC4E: cmovz   r10d, edx
 * 000000014035EC52: add     r11d, r12d
 * 000000014035EC55: jnz     short loc_14035EBFA
 * 000000014035EC57: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035EC5C: and     r8d, 7Fh
 * 000000014035EC60: cmp     r8d, 8
 * 000000014035EC64: jb      short loc_14035EC92
 * 000000014035EC66: mov     edx, r8d
 * 000000014035EC69: mov     esi, 1
 * 000000014035EC6E: shr     rdx, 3
 * 000000014035EC72: xor     rbx, [r9]
 * 000000014035EC75: mov     ecx, r10d
 * 000000014035EC78: rol     rbx, cl
 * 000000014035EC7B: add     r9, 8
 * 000000014035EC7F: add     r8d, 0FFFFFFF8h
 * 000000014035EC83: sub     rdx, rsi
 * 000000014035EC86: jnz     short loc_14035EC72
 * 000000014035EC88: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035EC8D: mov     edx, 1
 * 000000014035EC92: xor     r11d, r11d
 * 000000014035EC95: test    r8d, r8d
 * 000000014035EC98: jz      short loc_14035ECAF
 * 000000014035EC9A: movzx   eax, byte ptr [r9]
 * 000000014035EC9E: mov     ecx, r10d
 * 000000014035ECA1: xor     rbx, rax
 * 000000014035ECA4: add     r9, rdx
 * 000000014035ECA7: rol     rbx, cl
 * 000000014035ECAA: add     r8d, r12d
 * 000000014035ECAD: jnz     short loc_14035EC9A
 * 000000014035ECAF: mov     rax, rbx
 * 000000014035ECB2: jmp     short loc_14035ECB6
 * 000000014035ECB4: xor     ebx, eax
 * 000000014035ECB6: shr     rax, 1Fh
 * 000000014035ECBA: test    rax, rax
 * 000000014035ECBD: jnz     short loc_14035ECB4
 * 000000014035ECBF: mov     r8d, [r13+14h]
 * 000000014035ECC3: btr     ebx, 1Fh
 * 000000014035ECC7: cmp     ebx, r8d
 * 000000014035ECCA: jz      loc_14035F02F
 * 000000014035ECD0: mov     ecx, [r13+10h]
 * 000000014035ECD4: mov     rdx, [r13+8]
 * 000000014035ECD8: test    rcx, rcx
 * 000000014035ECDB: jz      loc_14035ED7E
 * 000000014035ECE1: mov     eax, [rsi+994h]
 * 000000014035ECE7: mov     r9d, 40h ; '@'
 * 000000014035ECED: test    r9b, al
 * 000000014035ECF0: jz      loc_14035ED7E
 * 000000014035ECF6: mov     r12, cr8
 * 000000014035ECFA: lea     eax, [r9-3Eh]
 * 000000014035ECFE: mov     cr8, rax
 * 000000014035ED02: mov     r14, rdx
 * 000000014035ED05: lea     rax, [rcx-1]
 * 000000014035ED09: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035ED10: add     rax, rdx
 * 000000014035ED13: or      rax, 0FFFh
 * 000000014035ED19: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035ED1E: lea     r13, [r14-1]
 * 000000014035ED22: movzx   r15d, r12b
 * 000000014035ED26: mov     rax, [rsi+468h]
 * 000000014035ED2D: xor     edx, edx
 * 000000014035ED2F: mov     rcx, r14
 * 000000014035ED32: call    KeGuardDispatchICall
 * 000000014035ED37: cmp     eax, 0C000022Dh
 * 000000014035ED3C: jnz     short loc_14035ED66
 * 000000014035ED3E: mov     eax, 1
 * 000000014035ED43: cmp     r12b, al
 * 000000014035ED46: ja      loc_14035EE07
 * 000000014035ED4C: movzx   r15d, r12b
 * 000000014035ED50: mov     cr8, r15
 * 000000014035ED54: mov     al, [r14]
 * 000000014035ED57: mov     rax, cr8
 * 000000014035ED5B: mov     eax, 2
 * 000000014035ED60: mov     cr8, rax
 * 000000014035ED64: jmp     short loc_14035ED26
 * 000000014035ED66: xor     r11d, r11d
 * 000000014035ED69: test    eax, eax
 * 000000014035ED6B: jns     loc_14035EE0A
 * 000000014035ED71: mov     cr8, r15
 * 000000014035ED75: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035ED7A: mov     r8d, [r13+14h]
 * 000000014035ED7E: mov     eax, [rsi+8F8h]
 * 000000014035ED84: test    eax, eax
 * 000000014035ED86: jnz     short loc_14035EDA3
 * 000000014035ED88: mov     ecx, ebx
 * 000000014035ED8A: mov     eax, r8d
 * 000000014035ED8D: xor     rcx, rax
 * 000000014035ED90: mov     rax, [rsi+590h]
 * 000000014035ED97: mov     [rax+18h], rcx
 * 000000014035ED9B: mov     eax, [rsi+8F8h]
 * 000000014035EDA1: test    eax, eax
 * 000000014035EDA3: mov     rcx, [r13+8]
 * 000000014035EDA7: jnz     loc_14035F02F
 * 000000014035EDAD: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035EDB7: xor     edx, edx
 * 000000014035EDB9: add     rax, rsi
 * 000000014035EDBC: mov     [rsi+900h], rax
 * 000000014035EDC3: mov     rax, 0B3B74BDEE4453415h
 * 000000014035EDCD: add     rax, r13
 * 000000014035EDD0: mov     [rsi+908h], rax
 * 000000014035EDD7: movsxd  rax, dword ptr [r13+0]
 * 000000014035EDDB: mov     [rsi+910h], rax
 * 000000014035EDE2: mov     eax, 1
 * 000000014035EDE7: mov     [rsi+918h], rcx
 * 000000014035EDEE: mov     rcx, rsi
 * 000000014035EDF1: mov     [rsi+8F8h], eax
 * 000000014035EDF7: call    sub_14036B3BC
 * 000000014035EDFC: mov     r15d, 4
 * 000000014035EE02: jmp     loc_14035E904
 * 000000014035EE07: xor     r11d, r11d
 * 000000014035EE0A: mov     r10d, 1000h
 * 000000014035EE10: add     r14, r10
 * 000000014035EE13: add     r13, r10
 * 000000014035EE16: cmp     r13, [rsp+0C70h+var_BF8]
 * 000000014035EE1B: jnz     loc_14035ED22
 * 000000014035EE21: jmp     loc_14035F026
 * 000000014035EE26: mov     r14, [r13+8]
 * 000000014035EE2A: mov     r8d, [r13+10h]
 * 000000014035EE2E: mov     r9, r14
 * 000000014035EE31: add     [rsi+828h], r8d
 * 000000014035EE38: mov     rax, r14
 * 000000014035EE3B: mov     r10d, [rsi+814h]
 * 000000014035EE42: mov     r15, [rsi+818h]
 * 000000014035EE49: lea     rcx, [r14+r8]
 * 000000014035EE4D: cmp     r14, rcx
 * 000000014035EE50: jnb     short loc_14035EE63
 * 000000014035EE52: mov     r11d, 40h ; '@'
 * 000000014035EE58: prefetchnta byte ptr [rax]
 * 000000014035EE5B: add     rax, r11
 * 000000014035EE5E: cmp     rax, rcx
 * 000000014035EE61: jb      short loc_14035EE58
 * 000000014035EE63: mov     r11d, r8d
 * 000000014035EE66: mov     rbx, r15
 * 000000014035EE69: shr     r11d, 7
 * 000000014035EE6D: mov     r12d, 0FFFFFFFFh
 * 000000014035EE73: test    r11d, r11d
 * 000000014035EE76: jz      short loc_14035EEE4
 * 000000014035EE78: mov     rdi, 7010008004002001h
 * 000000014035EE82: mov     edx, 8
 * 000000014035EE87: lea     esi, [rdx-7]
 * 000000014035EE8A: mov     rax, [r9]
 * 000000014035EE8D: mov     ecx, r10d
 * 000000014035EE90: xor     rax, rbx
 * 000000014035EE93: mov     rbx, [r9+8]
 * 000000014035EE97: rol     rax, cl
 * 000000014035EE9A: add     r9, 10h
 * 000000014035EE9E: xor     rbx, rax
 * 000000014035EEA1: rol     rbx, cl
 * 000000014035EEA4: sub     rdx, rsi
 * 000000014035EEA7: jnz     short loc_14035EE8A
 * 000000014035EEA9: mov     rcx, r9
 * 000000014035EEAC: sub     rcx, r14
 * 000000014035EEAF: xor     rcx, r15
 * 000000014035EEB2: mov     rax, rcx
 * 000000014035EEB5: rol     rax, 11h
 * 000000014035EEB9: xor     rcx, rax
 * 000000014035EEBC: mov     rax, rdi
 * 000000014035EEBF: mul     rcx
 * 000000014035EEC2: xor     r10d, eax
 * 000000014035EEC5: mov     [rbp+0B70h+var_540], rdx
 * 000000014035EECC: xor     r10d, edx
 * 000000014035EECF: mov     rdx, rsi
 * 000000014035EED2: and     r10d, 3Fh
 * 000000014035EED6: cmovz   r10d, edx
 * 000000014035EEDA: add     r11d, r12d
 * 000000014035EEDD: jnz     short loc_14035EE82
 * 000000014035EEDF: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035EEE4: and     r8d, 7Fh
 * 000000014035EEE8: cmp     r8d, 8
 * 000000014035EEEC: jb      short loc_14035EF1A
 * 000000014035EEEE: mov     edx, r8d
 * 000000014035EEF1: mov     esi, 1
 * 000000014035EEF6: shr     rdx, 3
 * 000000014035EEFA: xor     rbx, [r9]
 * 000000014035EEFD: mov     ecx, r10d
 * 000000014035EF00: rol     rbx, cl
 * 000000014035EF03: add     r9, 8
 * 000000014035EF07: add     r8d, 0FFFFFFF8h
 * 000000014035EF0B: sub     rdx, rsi
 * 000000014035EF0E: jnz     short loc_14035EEFA
 * 000000014035EF10: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035EF15: mov     edx, 1
 * 000000014035EF1A: xor     r11d, r11d
 * 000000014035EF1D: test    r8d, r8d
 * 000000014035EF20: jz      short loc_14035EF37
 * 000000014035EF22: movzx   eax, byte ptr [r9]
 * 000000014035EF26: mov     ecx, r10d
 * 000000014035EF29: xor     rbx, rax
 * 000000014035EF2C: add     r9, rdx
 * 000000014035EF2F: rol     rbx, cl
 * 000000014035EF32: add     r8d, r12d
 * 000000014035EF35: jnz     short loc_14035EF22
 * 000000014035EF37: mov     rax, rbx
 * 000000014035EF3A: jmp     short loc_14035EF3E
 * 000000014035EF3C: xor     ebx, eax
 * 000000014035EF3E: shr     rax, 1Fh
 * 000000014035EF42: test    rax, rax
 * 000000014035EF45: jnz     short loc_14035EF3C
 * 000000014035EF47: mov     rax, [rsp+0C70h+var_C18]
 * 000000014035EF4C: btr     ebx, 1Fh
 * 000000014035EF50: mov     r13d, r11d
 * 000000014035EF53: cmp     ebx, [rax+14h]
 * 000000014035EF56: jz      loc_14035F02A
 * 000000014035EF5C: cmp     [rax], r11d
 * 000000014035EF5F: jnz     short loc_14035EF69
 * 000000014035EF61: cmp     [rax+18h], r11d
 * 000000014035EF65: cmovnz  r13d, edx
 * 000000014035EF69: mov     ecx, [rax+10h]
 * 000000014035EF6C: mov     rdx, [rax+8]
 * 000000014035EF70: test    rcx, rcx
 * 000000014035EF73: jz      loc_14035F03E
 * 000000014035EF79: mov     eax, [rsi+994h]
 * 000000014035EF7F: mov     r8d, 40h ; '@'
 * 000000014035EF85: test    r8b, al
 * 000000014035EF88: jz      loc_14035F03E
 * 000000014035EF8E: mov     r12, cr8
 * 000000014035EF92: lea     eax, [r8-3Eh]
 * 000000014035EF96: mov     cr8, rax
 * 000000014035EF9A: mov     r14, rdx
 * 000000014035EF9D: lea     rax, [rcx-1]
 * 000000014035EFA1: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014035EFA8: add     rax, rdx
 * 000000014035EFAB: or      rax, 0FFFh
 * 000000014035EFB1: mov     [rsp+0C70h+var_BF8], rax
 * 000000014035EFB6: lea     rax, [r14-1]
 * 000000014035EFBA: mov     [rsp+0C70h+var_C20], rax
 * 000000014035EFBF: movzx   r15d, r12b
 * 000000014035EFC3: mov     rax, [rsi+468h]
 * 000000014035EFCA: xor     edx, edx
 * 000000014035EFCC: mov     rcx, r14
 * 000000014035EFCF: call    KeGuardDispatchICall
 * 000000014035EFD4: xor     r11d, r11d
 * 000000014035EFD7: cmp     eax, 0C000022Dh
 * 000000014035EFDC: jnz     short loc_14035F005
 * 000000014035EFDE: test    r13d, r13d
 * 000000014035EFE1: jnz     short loc_14035F03A
 * 000000014035EFE3: lea     eax, [r11+1]
 * 000000014035EFE7: cmp     r12b, al
 * 000000014035EFEA: ja      short loc_14035F009
 * 000000014035EFEC: movzx   r15d, r12b
 * 000000014035EFF0: mov     cr8, r15
 * 000000014035EFF4: mov     al, [r14]
 * 000000014035EFF7: mov     rax, cr8
 * 000000014035EFFB: lea     eax, [r11+2]
 * 000000014035EFFF: mov     cr8, rax
 * 000000014035F003: jmp     short loc_14035EFC3
 * 000000014035F005: test    eax, eax
 * 000000014035F007: js      short loc_14035F03A
 * 000000014035F009: mov     rax, [rsp+0C70h+var_C20]
 * 000000014035F00E: mov     r10d, 1000h
 * 000000014035F014: add     rax, r10
 * 000000014035F017: add     r14, r10
 * 000000014035F01A: mov     [rsp+0C70h+var_C20], rax
 * 000000014035F01F: cmp     rax, [rsp+0C70h+var_BF8]
 * 000000014035F024: jnz     short loc_14035EFBF
 * 000000014035F026: mov     cr8, r15
 * 000000014035F02A: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035F02F: mov     r15d, 4
 * 000000014035F035: jmp     loc_14035E907
 * 000000014035F03A: mov     cr8, r15
 * 000000014035F03E: mov     r13, [rsp+0C70h+var_C18]
 * 000000014035F043: mov     eax, [rsi+8F8h]
 * 000000014035F049: mov     ecx, [r13+14h]
 * 000000014035F04D: test    eax, eax
 * 000000014035F04F: jnz     loc_14035EDA3
 * 000000014035F055: mov     eax, ebx
 * 000000014035F057: jmp     loc_14035ED8D
 * 000000014035F05C: xor     ebx, eax
 * 000000014035F05E: shr     rax, 1Fh
 * 000000014035F062: test    rax, rax
 * 000000014035F065: jnz     short loc_14035F05C
 * 000000014035F067: btr     ebx, 1Fh
 * 000000014035F06B: mov     [rbp+0B70h+arg_8], rbx
 * 000000014035F072: jmp     loc_14035F31E
 * 000000014035F077: mov     r8d, r15d
 * 000000014035F07A: mov     rdx, r13
 * 000000014035F07D: mov     rcx, rsi
 * 000000014035F080: call    sub_14036B5D8
 * 000000014035F085: mov     ebx, eax
 * 000000014035F087: xor     r11d, r11d
 * 000000014035F08A: mov     eax, r15d
 * 000000014035F08D: mov     [rbp+0B70h+arg_8], rbx
 * 000000014035F094: shl     eax, 3
 * 000000014035F097: add     [rsi+828h], eax
 * 000000014035F09D: mov     eax, [rsi+994h]
 * 000000014035F0A3: bt      eax, 0Bh
 * 000000014035F0A7: jnb     loc_14035F31E
 * 000000014035F0AD: lea     rbx, [r13-6]
 * 000000014035F0B1: lea     r14, [rbx+5]
 * 000000014035F0B5: mov     al, [r14]
 * 000000014035F0B8: cmp     byte ptr [rbx], 4Ch ; 'L'
 * 000000014035F0BB: jnz     loc_14035F2B3
 * 000000014035F0C1: cmp     byte ptr [rbx+1], 87h
 * 000000014035F0C5: jnz     loc_14035F2B3
 * 000000014035F0CB: cmp     [rbx+2], r11b
 * 000000014035F0CF: jnz     loc_14035F2B3
 * 000000014035F0D5: cmp     byte ptr [rbx+3], 98h
 * 000000014035F0D9: jnz     loc_14035F2B3
 * 000000014035F0DF: cmp     byte ptr [rbx+4], 0C3h
 * 000000014035F0E3: jnz     loc_14035F2B3
 * 000000014035F0E9: cmp     al, 90h
 * 000000014035F0EB: jz      short loc_14035F0F5
 * 000000014035F0ED: cmp     al, 0F1h
 * 000000014035F0EF: jnz     loc_14035F2B3
 * 000000014035F0F5: mov     rcx, [rsi+4E0h]
 * 000000014035F0FC: cli
 * 000000014035F0FD: mov     eax, [rsi+990h]
 * 000000014035F103: shr     eax, 0Ah
 * 000000014035F106: and     eax, 1Fh
 * 000000014035F109: lock bts [rcx], eax
 * 000000014035F10D: jnb     short loc_14035F114
 * 000000014035F10F: sti
 * 000000014035F110: pause
 * 000000014035F112: jmp     short loc_14035F0FC
 * 000000014035F114: mov     rdx, [rsi+8E0h]
 * 000000014035F11B: mov     r8d, 26h ; '&'
 * 000000014035F121: mov     ecx, 130h
 * 000000014035F126: mov     rax, rdx
 * 000000014035F129: lea     r9d, [r8-25h]
 * 000000014035F12D: mov     [rax], r11
 * 000000014035F130: add     ecx, 0FFFFFFF8h
 * 000000014035F133: add     rax, 8
 * 000000014035F137: sub     r8, r9
 * 000000014035F13A: jnz     short loc_14035F12D
 * 000000014035F13C: test    ecx, ecx
 * 000000014035F13E: jz      short loc_14035F151
 * 000000014035F140: mov     r8d, 0FFFFFFFFh
 * 000000014035F146: mov     [rax], r11b
 * 000000014035F149: add     rax, r9
 * 000000014035F14C: add     ecx, r8d
 * 000000014035F14F: jnz     short loc_14035F146
 * 000000014035F151: movups  xmm0, xmmword ptr [rsi+848h]
 * 000000014035F158: mov     eax, 12Fh
 * 000000014035F15D: movdqu  xmmword ptr [rdx+10h], xmm0
 * 000000014035F162: movups  xmm1, xmmword ptr [rsi+858h]
 * 000000014035F169: movdqu  xmmword ptr [rdx+20h], xmm1
 * 000000014035F16E: movups  xmm0, xmmword ptr [rsi+868h]
 * 000000014035F175: movdqu  xmmword ptr [rdx+120h], xmm0
 * 000000014035F17D: mov     word ptr [rbp+0B70h+var_898], ax
 * 000000014035F184: lea     rax, [rsi+88Ch]
 * 000000014035F18B: mov     [rbp+2DAh], rdx
 * 000000014035F192: mov     rcx, rax
 * 000000014035F195: mov     [rdx+10h], ax
 * 000000014035F199: shr     rcx, 10h
 * 000000014035F19D: mov     [rbp+0B70h+var_530], rax
 * 000000014035F1A4: shr     rax, 20h
 * 000000014035F1A8: mov     [rdx+16h], cx
 * 000000014035F1AC: mov     [rdx+18h], eax
 * 000000014035F1AF: sidt    fword ptr [rbp+0B70h+var_6D0]
 * 000000014035F1B6: lidt    fword ptr [rbp+0B70h+var_898]
 * 000000014035F1BD: mov     byte ptr [r14], 0F1h
 * 000000014035F1C1: mov     al, [r14]
 * 000000014035F1C4: cmp     al, 0F1h
 * 000000014035F1C6: jnz     loc_14035F26E
 * 000000014035F1CC: test    dword ptr [rsi+994h], 20000h
 * 000000014035F1D6: jnz     short loc_14035F21E
 * 000000014035F1D8: mov     rdx, gs:20h
 * 000000014035F1E1: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014035F1EB: mov     rax, [rsi+4C0h]
 * 000000014035F1F2: add     rcx, rsi
 * 000000014035F1F5: mov     [rax], rcx
 * 000000014035F1F8: lea     rcx, [rbx+6]
 * 000000014035F1FC: mov     rax, [rsi+4C8h]
 * 000000014035F203: mov     [rax], rdx
 * 000000014035F206: mov     rax, [rsi+4D0h]
 * 000000014035F20D: mov     [rax], rcx
 * 000000014035F210: mov     rax, [rsi+4D8h]
 * 000000014035F217: mov     qword ptr [rax], 113h
 * 000000014035F21E: mov     rax, r14
 * 000000014035F221: call    KeGuardDispatchICall
 * 000000014035F226: xor     r11d, r11d
 * 000000014035F229: test    dword ptr [rsi+994h], 20000h
 * 000000014035F233: jnz     short loc_14035F267
 * 000000014035F235: mov     rax, [rsi+4C0h]
 * 000000014035F23C: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014035F246: mov     [rax], rcx
 * 000000014035F249: mov     rax, [rsi+4C8h]
 * 000000014035F250: mov     [rax], r11
 * 000000014035F253: mov     rax, [rsi+4D0h]
 * 000000014035F25A: mov     [rax], r11
 * 000000014035F25D: mov     rax, [rsi+4D8h]
 * 000000014035F264: mov     [rax], r11
 * 000000014035F267: mov     al, [r14]
 * 000000014035F26A: cmp     al, 0F1h
 * 000000014035F26C: jz      short loc_14035F273
 * 000000014035F26E: mov     r9d, r11d
 * 000000014035F271: jmp     short loc_14035F286
 * 000000014035F273: mov     byte ptr [r14], 90h
 * 000000014035F277: mov     r9d, 1
 * 000000014035F27D: mov     al, [r14]
 * 000000014035F280: cmp     al, 90h
 * 000000014035F282: cmovnz  r9d, r11d
 * 000000014035F286: lidt    fword ptr [rbp+0B70h+var_6D0]
 * 000000014035F28D: mov     ecx, [rsi+990h]
 * 000000014035F293: mov     edx, 1
 * 000000014035F298: mov     r8, [rsi+4E0h]
 * 000000014035F29F: shr     ecx, 0Ah
 * 000000014035F2A2: and     ecx, 1Fh
 * 000000014035F2A5: shl     edx, cl
 * 000000014035F2A7: not     edx
 * 000000014035F2A9: lock and [r8], edx
 * 000000014035F2AD: sti
 * 000000014035F2AE: test    r9d, r9d
 * 000000014035F2B1: jnz     short loc_14035F312
 * 000000014035F2B3: cmp     [rsi+8F8h], r11d
 * 000000014035F2BA: jnz     short loc_14035F312
 * 000000014035F2BC: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035F2C1: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035F2CB: add     rax, rsi
 * 000000014035F2CE: xor     edx, edx
 * 000000014035F2D0: mov     [rsi+900h], rax
 * 000000014035F2D7: mov     rax, 0B3B74BDEE4453415h
 * 000000014035F2E1: add     rax, rcx
 * 000000014035F2E4: mov     [rsi+908h], rax
 * 000000014035F2EB: movsxd  rax, dword ptr [rcx]
 * 000000014035F2EE: mov     rcx, rsi
 * 000000014035F2F1: mov     [rsi+910h], rax
 * 000000014035F2F8: mov     eax, 1
 * 000000014035F2FD: mov     [rsi+918h], rbx
 * 000000014035F304: mov     [rsi+8F8h], eax
 * 000000014035F30A: call    sub_14036B3BC
 * 000000014035F30F: xor     r11d, r11d
 * 000000014035F312: mov     rbx, [rbp+0B70h+arg_8]
 * 000000014035F319: mov     r14, [rsp+0C70h+var_C08]
 * 000000014035F31E: mov     ecx, [r12]
 * 000000014035F322: mov     eax, ecx
 * 000000014035F324: btr     eax, 1Fh
 * 000000014035F328: cmp     ebx, eax
 * 000000014035F32A: jz      loc_14035F464
 * 000000014035F330: mov     edx, r15d
 * 000000014035F333: test    r15d, r15d
 * 000000014035F336: jz      loc_14035F3DF
 * 000000014035F33C: mov     eax, [rsi+994h]
 * 000000014035F342: mov     r8d, 40h ; '@'
 * 000000014035F348: test    r8b, al
 * 000000014035F34B: jz      loc_14035F3DF
 * 000000014035F351: mov     r15, cr8
 * 000000014035F355: lea     eax, [r8-3Eh]
 * 000000014035F359: mov     cr8, rax
 * 000000014035F35D: mov     rbx, r13
 * 000000014035F360: dec     r13
 * 000000014035F363: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014035F36A: add     r13, rdx
 * 000000014035F36D: or      r13, 0FFFh
 * 000000014035F374: lea     r12, [rbx-1]
 * 000000014035F378: movzx   r14d, r15b
 * 000000014035F37C: mov     rax, [rsi+468h]
 * 000000014035F383: xor     edx, edx
 * 000000014035F385: mov     rcx, rbx
 * 000000014035F388: call    KeGuardDispatchICall
 * 000000014035F38D: cmp     eax, 0C000022Dh
 * 000000014035F392: jnz     short loc_14035F3BB
 * 000000014035F394: mov     eax, 1
 * 000000014035F399: cmp     r15b, al
 * 000000014035F39C: ja      loc_14035F53C
 * 000000014035F3A2: movzx   r14d, r15b
 * 000000014035F3A6: mov     cr8, r14
 * 000000014035F3AA: mov     al, [rbx]
 * 000000014035F3AC: mov     rax, cr8
 * 000000014035F3B0: mov     eax, 2
 * 000000014035F3B5: mov     cr8, rax
 * 000000014035F3B9: jmp     short loc_14035F37C
 * 000000014035F3BB: xor     r11d, r11d
 * 000000014035F3BE: test    eax, eax
 * 000000014035F3C0: jns     loc_14035F53F
 * 000000014035F3C6: mov     cr8, r14
 * 000000014035F3CA: mov     r12, [rsp+0C70h+var_C20]
 * 000000014035F3CF: mov     rbx, [rbp+0B70h+arg_8]
 * 000000014035F3D6: mov     r13, [rsp+0C70h+var_BF8]
 * 000000014035F3DB: mov     ecx, [r12]
 * 000000014035F3DF: mov     eax, ecx
 * 000000014035F3E1: mov     ecx, [rsi+8F8h]
 * 000000014035F3E7: btr     eax, 1Fh
 * 000000014035F3EB: test    ecx, ecx
 * 000000014035F3ED: jnz     short loc_14035F45F
 * 000000014035F3EF: mov     ecx, ebx
 * 000000014035F3F1: xor     rcx, rax
 * 000000014035F3F4: mov     rax, [rsi+590h]
 * 000000014035F3FB: mov     [rax+18h], rcx
 * 000000014035F3FF: mov     ecx, [rsi+8F8h]
 * 000000014035F405: test    ecx, ecx
 * 000000014035F407: jnz     short loc_14035F45F
 * 000000014035F409: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035F40E: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035F418: add     rax, rsi
 * 000000014035F41B: xor     edx, edx
 * 000000014035F41D: mov     [rsi+900h], rax
 * 000000014035F424: mov     rax, 0B3B74BDEE4453415h
 * 000000014035F42E: add     rax, rcx
 * 000000014035F431: mov     [rsi+908h], rax
 * 000000014035F438: movsxd  rax, dword ptr [rcx]
 * 000000014035F43B: mov     rcx, rsi
 * 000000014035F43E: mov     [rsi+910h], rax
 * 000000014035F445: mov     eax, 1
 * 000000014035F44A: mov     [rsi+918h], r13
 * 000000014035F451: mov     [rsi+8F8h], eax
 * 000000014035F457: call    sub_14036B3BC
 * 000000014035F45C: xor     r11d, r11d
 * 000000014035F45F: mov     r14, [rsp+0C70h+var_C08]
 * 000000014035F464: mov     r8, [rbp+0B70h+var_BF0]
 * 000000014035F468: mov     r15d, 4
 * 000000014035F46E: add     r12, r15
 * 000000014035F471: add     r14, 0Ch
 * 000000014035F475: mov     [rsp+0C70h+var_C20], r12
 * 000000014035F47A: mov     [rsp+0C70h+var_C08], r14
 * 000000014035F47F: cmp     r14, r8
 * 000000014035F482: jnb     short loc_14035F499
 * 000000014035F484: mov     rax, [rbp+0B70h+var_BC0]
 * 000000014035F488: mov     eax, [rax]
 * 000000014035F48A: cmp     [rsi+828h], eax
 * 000000014035F490: jl      loc_14035E95D
 * 000000014035F496: cmp     r14, r8
 * 000000014035F499: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035F4A0: jnz     loc_14035F67E
 * 000000014035F4A6: mov     rcx, [rsi+540h]
 * 000000014035F4AD: mov     r14, cr8
 * 000000014035F4B1: mov     eax, 0Fh
 * 000000014035F4B6: mov     cr8, rax
 * 000000014035F4BA: mov     rax, [rsi+150h]
 * 000000014035F4C1: call    KeGuardDispatchICall
 * 000000014035F4C6: mov     rax, [rsi+610h]
 * 000000014035F4CD: mov     r12, [rsp+0C70h+var_C18]
 * 000000014035F4D2: mov     rcx, [rax]
 * 000000014035F4D5: mov     eax, [rcx]
 * 000000014035F4D7: lea     rbx, [rcx+10h]
 * 000000014035F4DB: mov     r15b, [rcx+0Ch]
 * 000000014035F4DF: lea     rcx, [rax+rax*2]
 * 000000014035F4E3: lea     r13, [rbx+rcx*8]
 * 000000014035F4E7: mov     r8d, 18h
 * 000000014035F4ED: lea     r9, [r12+18h]
 * 000000014035F4F2: mov     r10, rbx
 * 000000014035F4F5: mov     rcx, [r10]
 * 000000014035F4F8: add     r10, 8
 * 000000014035F4FC: mov     rax, [r9]
 * 000000014035F4FF: add     r9, 8
 * 000000014035F503: cmp     rcx, rax
 * 000000014035F506: jnz     short loc_14035F561
 * 000000014035F508: add     r8d, 0FFFFFFF8h
 * 000000014035F50C: cmp     r8d, 8
 * 000000014035F510: jnb     short loc_14035F4F5
 * 000000014035F512: test    r8d, r8d
 * 000000014035F515: jz      short loc_14035F56E
 * 000000014035F517: mov     r11d, 1
 * 000000014035F51D: movzx   edx, byte ptr [r10]
 * 000000014035F521: add     r10, r11
 * 000000014035F524: movzx   eax, byte ptr [r9]
 * 000000014035F528: add     r9, r11
 * 000000014035F52B: cmp     rdx, rax
 * 000000014035F52E: jnz     short loc_14035F561
 * 000000014035F530: mov     eax, 0FFFFFFFFh
 * 000000014035F535: add     r8d, eax
 * 000000014035F538: jz      short loc_14035F56E
 * 000000014035F53A: jmp     short loc_14035F51D
 * 000000014035F53C: xor     r11d, r11d
 * 000000014035F53F: mov     eax, 1000h
 * 000000014035F544: add     rbx, rax
 * 000000014035F547: add     r12, rax
 * 000000014035F54A: cmp     r12, r13
 * 000000014035F54D: jnz     loc_14035F378
 * 000000014035F553: mov     cr8, r14
 * 000000014035F557: mov     r12, [rsp+0C70h+var_C20]
 * 000000014035F55C: jmp     loc_14035F45F
 * 000000014035F561: add     rbx, 18h
 * 000000014035F565: cmp     rbx, r13
 * 000000014035F568: jb      loc_14035F4E7
 * 000000014035F56E: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035F573: mov     rcx, [rsi+540h]
 * 000000014035F57A: mov     rax, [rsi+190h]
 * 000000014035F581: call    KeGuardDispatchICall
 * 000000014035F586: movzx   eax, r14b
 * 000000014035F58A: mov     cr8, rax
 * 000000014035F58E: xor     ecx, ecx
 * 000000014035F590: test    r15b, r15b
 * 000000014035F593: jz      short loc_14035F60D
 * 000000014035F595: mov     eax, [rsi+994h]
 * 000000014035F59B: lea     edx, [rcx+10h]
 * 000000014035F59E: test    dl, al
 * 000000014035F5A0: jz      short loc_14035F5FB
 * 000000014035F5A2: cmp     [rsi+8F8h], ecx
 * 000000014035F5A8: jnz     short loc_14035F5FB
 * 000000014035F5AA: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035F5AF: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035F5B9: add     rax, rsi
 * 000000014035F5BC: mov     [rsi+900h], rax
 * 000000014035F5C3: mov     rax, 0B3B74BDEE4453415h
 * 000000014035F5CD: add     rax, rcx
 * 000000014035F5D0: mov     [rsi+908h], rax
 * 000000014035F5D7: movsxd  rax, dword ptr [rcx]
 * 000000014035F5DA: mov     rcx, rsi
 * 000000014035F5DD: mov     [rsi+910h], rax
 * 000000014035F5E4: lea     eax, [rdx-0Fh]
 * 000000014035F5E7: mov     [rsi+918h], rax
 * 000000014035F5EE: xor     edx, edx
 * 000000014035F5F0: mov     [rsi+8F8h], eax
 * 000000014035F5F6: call    sub_14036B3BC
 * 000000014035F5FB: mov     edx, 1
 * 000000014035F600: cmp     [r12+18h], rdx
 * 000000014035F605: jz      loc_14035C630
 * 000000014035F60B: jmp     short loc_14035F612
 * 000000014035F60D: mov     edx, 1
 * 000000014035F612: xor     r15d, r15d
 * 000000014035F615: cmp     rbx, r13
 * 000000014035F618: jnz     loc_14035C624
 * 000000014035F61E: cmp     [rsi+8F8h], r15d
 * 000000014035F625: jnz     loc_14035C624
 * 000000014035F62B: mov     rcx, [rsp+0C70h+var_C18]
 * 000000014035F630: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035F63A: add     rax, rsi
 * 000000014035F63D: mov     [rsi+900h], rax
 * 000000014035F644: mov     rax, 0B3B74BDEE4453415h
 * 000000014035F64E: add     rax, rcx
 * 000000014035F651: mov     [rsi+908h], rax
 * 000000014035F658: movsxd  rax, dword ptr [rcx]
 * 000000014035F65B: mov     rcx, rsi
 * 000000014035F65E: mov     [rsi+910h], rax
 * 000000014035F665: mov     [rsi+918h], rbx
 * 000000014035F66C: mov     [rsi+8F8h], edx
 * 000000014035F672: xor     edx, edx
 * 000000014035F674: call    sub_14036B3BC
 * 000000014035F679: jmp     loc_14035C624
 * 000000014035F67E: sub     r14, [rbp+0B70h+var_BA0]
 * 000000014035F682: mov     rax, 2AAAAAAAAAAAAAABh
 * 000000014035F68C: imul    r14
 * 000000014035F68F: sar     rdx, 1
 * 000000014035F692: mov     rax, rdx
 * 000000014035F695: shr     rax, 3Fh
 * 000000014035F699: add     rdx, rax
 * 000000014035F69C: mov     [rsi+824h], edx
 * 000000014035F6A2: jmp     loc_140355320
 * 000000014035F6A7: mov     eax, [r13+24h]
 * 000000014035F6AB: add     [rsi+828h], eax
 * 000000014035F6B1: mov     r11d, [r13+20h]
 * 000000014035F6B5: mov     r9d, [r13+24h]
 * 000000014035F6B9: add     r11, rsi
 * 000000014035F6BC: mov     ebx, [rsi+814h]
 * 000000014035F6C2: mov     r10, r11
 * 000000014035F6C5: mov     r15, [rsi+818h]
 * 000000014035F6CC: mov     rax, r11
 * 000000014035F6CF: lea     rcx, [r11+r9]
 * 000000014035F6D3: cmp     r11, rcx
 * 000000014035F6D6: jnb     short loc_14035F6E8
 * 000000014035F6D8: mov     edx, 40h ; '@'
 * 000000014035F6DD: prefetchnta byte ptr [rax]
 * 000000014035F6E0: add     rax, rdx
 * 000000014035F6E3: cmp     rax, rcx
 * 000000014035F6E6: jb      short loc_14035F6DD
 * 000000014035F6E8: mov     r14d, r9d
 * 000000014035F6EB: mov     r8, r15
 * 000000014035F6EE: shr     r14d, 7
 * 000000014035F6F2: mov     r12d, 1
 * 000000014035F6F8: test    r14d, r14d
 * 000000014035F6FB: jz      short loc_14035F764
 * 000000014035F6FD: mov     rsi, 7010008004002001h
 * 000000014035F707: mov     edx, 8
 * 000000014035F70C: mov     rax, [r10]
 * 000000014035F70F: mov     ecx, ebx
 * 000000014035F711: xor     rax, r8
 * 000000014035F714: mov     r8, [r10+8]
 * 000000014035F718: rol     rax, cl
 * 000000014035F71B: add     r10, 10h
 * 000000014035F71F: xor     r8, rax
 * 000000014035F722: rol     r8, cl
 * 000000014035F725: sub     rdx, r12
 * 000000014035F728: jnz     short loc_14035F70C
 * 000000014035F72A: mov     rcx, r10
 * 000000014035F72D: sub     rcx, r11
 * 000000014035F730: xor     rcx, r15
 * 000000014035F733: mov     rax, rcx
 * 000000014035F736: rol     rax, 11h
 * 000000014035F73A: xor     rcx, rax
 * 000000014035F73D: mov     rax, rsi
 * 000000014035F740: mul     rcx
 * 000000014035F743: xor     ebx, eax
 * 000000014035F745: mov     [rbp+0B70h+var_528], rdx
 * 000000014035F74C: xor     ebx, edx
 * 000000014035F74E: mov     eax, 0FFFFFFFFh
 * 000000014035F753: and     ebx, 3Fh
 * 000000014035F756: cmovz   ebx, r12d
 * 000000014035F75A: add     r14d, eax
 * 000000014035F75D: jnz     short loc_14035F707
 * 000000014035F75F: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035F764: and     r9d, 7Fh
 * 000000014035F768: cmp     r9d, 8
 * 000000014035F76C: jb      short loc_14035F78A
 * 000000014035F76E: mov     edx, r9d
 * 000000014035F771: shr     rdx, 3
 * 000000014035F775: xor     r8, [r10]
 * 000000014035F778: mov     ecx, ebx
 * 000000014035F77A: rol     r8, cl
 * 000000014035F77D: add     r10, 8
 * 000000014035F781: add     r9d, 0FFFFFFF8h
 * 000000014035F785: sub     rdx, r12
 * 000000014035F788: jnz     short loc_14035F775
 * 000000014035F78A: xor     r15d, r15d
 * 000000014035F78D: test    r9d, r9d
 * 000000014035F790: jz      short loc_14035F7AF
 * 000000014035F792: mov     r15d, 0FFFFFFFFh
 * 000000014035F798: movzx   eax, byte ptr [r10]
 * 000000014035F79C: mov     ecx, ebx
 * 000000014035F79E: xor     r8, rax
 * 000000014035F7A1: add     r10, r12
 * 000000014035F7A4: rol     r8, cl
 * 000000014035F7A7: add     r9d, r15d
 * 000000014035F7AA: jnz     short loc_14035F798
 * 000000014035F7AC: xor     r15d, r15d
 * 000000014035F7AF: mov     rcx, [r13+18h]
 * 000000014035F7B3: cmp     r8, rcx
 * 000000014035F7B6: jz      loc_140355323
 * 000000014035F7BC: mov     eax, [rsi+8F8h]
 * 000000014035F7C2: test    eax, eax
 * 000000014035F7C4: jnz     short loc_14035F7DA
 * 000000014035F7C6: mov     rax, [rsi+590h]
 * 000000014035F7CD: xor     rcx, r8
 * 000000014035F7D0: mov     [rax+18h], rcx
 * 000000014035F7D4: mov     eax, [rsi+8F8h]
 * 000000014035F7DA: mov     ecx, [r13+20h]
 * 000000014035F7DE: add     rcx, rsi
 * 000000014035F7E1: test    eax, eax
 * 000000014035F7E3: jmp     loc_14035D8DC
 * 000000014035F7E8: mov     ebx, 0Fh
 * 000000014035F7ED: sub     r14d, 2
 * 000000014035F7F1: jz      loc_14035FFC5
 * 000000014035F7F7: sub     r14d, 1
 * 000000014035F7FB: jz      loc_14035FBB0
 * 000000014035F801: cmp     r14d, 14h
 * 000000014035F805: jz      short loc_14035F84D
 * 000000014035F807: xor     r15d, r15d
 * 000000014035F80A: cmp     [rsi+8F8h], r15d
 * 000000014035F811: jnz     loc_140355323
 * 000000014035F817: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035F821: add     rax, rsi
 * 000000014035F824: mov     [rsi+900h], rax
 * 000000014035F82B: lea     rax, [r11+r13]
 * 000000014035F82F: mov     [rsi+908h], rax
 * 000000014035F836: mov     qword ptr [rsi+910h], 101h
 * 000000014035F841: mov     [rsi+918h], r15
 * 000000014035F848: jmp     loc_14035E8D0
 * 000000014035F84D: mov     edx, [r13+28h]
 * 000000014035F851: lea     rcx, [rbp+0B70h+var_248]
 * 000000014035F858: mov     rax, [rsi+1A0h]
 * 000000014035F85F: call    KeGuardDispatchICall
 * 000000014035F864: mov     rax, [rsi+1D0h]
 * 000000014035F86B: lea     rdx, [rbp+0B70h+var_238]
 * 000000014035F872: lea     rcx, [rbp+0B70h+var_248]
 * 000000014035F879: call    KeGuardDispatchICall
 * 000000014035F87E: mov     r8, [rsi+0A10h]
 * 000000014035F885: xor     r15d, r15d
 * 000000014035F888: test    r8, r8
 * 000000014035F88B: jz      short loc_14035F89D
 * 000000014035F88D: mov     ebx, [r8+320h]
 * 000000014035F894: mov     r8, [rsi+0A10h]
 * 000000014035F89B: jmp     short loc_14035F8AE
 * 000000014035F89D: mov     ecx, 832h
 * 000000014035F8A2: rdmsr
 * 000000014035F8A4: shl     rdx, 20h
 * 000000014035F8A8: or      rax, rdx
 * 000000014035F8AB: mov     rbx, rax
 * 000000014035F8AE: test    r8, r8
 * 000000014035F8B1: jz      short loc_14035F8BC
 * 000000014035F8B3: mov     r14d, [r8+340h]
 * 000000014035F8BA: jmp     short loc_14035F8CD
 * 000000014035F8BC: mov     ecx, 834h
 * 000000014035F8C1: rdmsr
 * 000000014035F8C3: shl     rdx, 20h
 * 000000014035F8C7: or      rax, rdx
 * 000000014035F8CA: mov     r14, rax
 * 000000014035F8CD: mov     rax, [rsi+198h]
 * 000000014035F8D4: lea     rcx, [rbp+0B70h+var_238]
 * 000000014035F8DB: call    KeGuardDispatchICall
 * 000000014035F8E0: mov     ecx, 10h
 * 000000014035F8E5: test    [rsi+87Bh], cl
 * 000000014035F8EB: jz      loc_14035FA36
 * 000000014035F8F1: cli
 * 000000014035F8F2: mov     rdx, [rsi+8E0h]
 * 000000014035F8F9: mov     r8d, 26h ; '&'
 * 000000014035F8FF: mov     ecx, 130h
 * 000000014035F904: mov     rax, rdx
 * 000000014035F907: lea     r12d, [r8-25h]
 * 000000014035F90B: mov     [rax], r15
 * 000000014035F90E: add     ecx, 0FFFFFFF8h
 * 000000014035F911: add     rax, 8
 * 000000014035F915: sub     r8, r12
 * 000000014035F918: jnz     short loc_14035F90B
 * 000000014035F91A: test    ecx, ecx
 * 000000014035F91C: jz      short loc_14035F92F
 * 000000014035F91E: mov     r8d, 0FFFFFFFFh
 * 000000014035F924: mov     [rax], r15b
 * 000000014035F927: add     rax, r12
 * 000000014035F92A: add     ecx, r8d
 * 000000014035F92D: jnz     short loc_14035F924
 * 000000014035F92F: movups  xmm0, xmmword ptr [rsi+848h]
 * 000000014035F936: mov     eax, 12Fh
 * 000000014035F93B: movdqu  xmmword ptr [rdx+10h], xmm0
 * 000000014035F940: movups  xmm1, xmmword ptr [rsi+858h]
 * 000000014035F947: movdqu  xmmword ptr [rdx+20h], xmm1
 * 000000014035F94C: movups  xmm0, xmmword ptr [rsi+868h]
 * 000000014035F953: movdqu  xmmword ptr [rdx+120h], xmm0
 * 000000014035F95B: mov     word ptr [rbp+0B70h+var_868], ax
 * 000000014035F962: lea     rax, [rsi+878h]
 * 000000014035F969: mov     [rbp+30Ah], rdx
 * 000000014035F970: mov     rcx, rax
 * 000000014035F973: mov     [rdx+10h], ax
 * 000000014035F977: shr     rcx, 10h
 * 000000014035F97B: mov     [rbp+0B70h+var_520], rax
 * 000000014035F982: shr     rax, 20h
 * 000000014035F986: mov     [rdx+16h], cx
 * 000000014035F98A: mov     [rdx+18h], eax
 * 000000014035F98D: sidt    fword ptr [rbp+0B70h+var_6A0]
 * 000000014035F994: lidt    fword ptr [rbp+0B70h+var_868]
 * 000000014035F99B: test    dword ptr [rsi+994h], 20000h
 * 000000014035F9A5: jnz     short loc_14035F9E9
 * 000000014035F9A7: mov     rdx, gs:20h
 * 000000014035F9B0: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014035F9BA: mov     rax, [rsi+4C0h]
 * 000000014035F9C1: add     rcx, rsi
 * 000000014035F9C4: mov     [rax], rcx
 * 000000014035F9C7: mov     rax, [rsi+4C8h]
 * 000000014035F9CE: mov     [rax], rdx
 * 000000014035F9D1: mov     rax, [rsi+4D0h]
 * 000000014035F9D8: mov     [rax], r15
 * 000000014035F9DB: mov     rax, [rsi+4D8h]
 * 000000014035F9E2: mov     qword ptr [rax], 115h
 * 000000014035F9E9: call    KiErrata361Present
 * 000000014035F9EE: test    dword ptr [rsi+994h], 20000h
 * 000000014035F9F8: jnz     short loc_14035FA2C
 * 000000014035F9FA: mov     rax, [rsi+4C0h]
 * 000000014035FA01: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014035FA0B: mov     [rax], rcx
 * 000000014035FA0E: mov     rax, [rsi+4C8h]
 * 000000014035FA15: mov     [rax], r15
 * 000000014035FA18: mov     rax, [rsi+4D0h]
 * 000000014035FA1F: mov     [rax], r15
 * 000000014035FA22: mov     rax, [rsi+4D8h]
 * 000000014035FA29: mov     [rax], r15
 * 000000014035FA2C: lidt    fword ptr [rbp+0B70h+var_6A0]
 * 000000014035FA33: sti
 * 000000014035FA34: jmp     short loc_14035FA3C
 * 000000014035FA36: mov     r12d, 1
 * 000000014035FA3C: mov     eax, [r13+1Ch]
 * 000000014035FA40: mov     ecx, [r13+18h]
 * 000000014035FA44: and     eax, ebx
 * 000000014035FA46: cmp     eax, ecx
 * 000000014035FA48: jnz     short loc_14035FA69
 * 000000014035FA4A: bt      ebx, 10h
 * 000000014035FA4E: jb      loc_14035FAF3
 * 000000014035FA54: cmp     bl, 0D1h
 * 000000014035FA57: jz      loc_14035FAF3
 * 000000014035FA5D: lea     eax, [rbx+3]
 * 000000014035FA60: cmp     al, r12b
 * 000000014035FA63: jbe     loc_14035FAF3
 * 000000014035FA69: mov     edx, [r13+28h]
 * 000000014035FA6D: mov     rax, 32000000000h
 * 000000014035FA77: shl     rdx, 30h
 * 000000014035FA7B: or      rdx, rcx
 * 000000014035FA7E: or      rdx, rax
 * 000000014035FA81: mov     eax, [rsi+8F8h]
 * 000000014035FA87: test    eax, eax
 * 000000014035FA89: jnz     short loc_14035FAF3
 * 000000014035FA8B: mov     eax, ebx
 * 000000014035FA8D: xor     rcx, rax
 * 000000014035FA90: mov     rax, [rsi+590h]
 * 000000014035FA97: mov     [rax+18h], rcx
 * 000000014035FA9B: mov     eax, [rsi+8F8h]
 * 000000014035FAA1: test    eax, eax
 * 000000014035FAA3: jnz     short loc_14035FAF3
 * 000000014035FAA5: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035FAAF: mov     rbx, 0B3B74BDEE4453415h
 * 000000014035FAB9: add     rax, rsi
 * 000000014035FABC: mov     rcx, rsi
 * 000000014035FABF: mov     [rsi+900h], rax
 * 000000014035FAC6: lea     rax, [rbx+r13]
 * 000000014035FACA: mov     [rsi+908h], rax
 * 000000014035FAD1: movsxd  rax, dword ptr [r13+0]
 * 000000014035FAD5: mov     [rsi+910h], rax
 * 000000014035FADC: mov     [rsi+918h], rdx
 * 000000014035FAE3: xor     edx, edx
 * 000000014035FAE5: mov     [rsi+8F8h], r12d
 * 000000014035FAEC: call    sub_14036B3BC
 * 000000014035FAF1: jmp     short loc_14035FAFD
 * 000000014035FAF3: mov     rbx, 0B3B74BDEE4453415h
 * 000000014035FAFD: mov     eax, [r13+24h]
 * 000000014035FB01: mov     ecx, [r13+20h]
 * 000000014035FB05: and     eax, r14d
 * 000000014035FB08: cmp     eax, ecx
 * 000000014035FB0A: jnz     short loc_14035FB2E
 * 000000014035FB0C: bt      r14d, 10h
 * 000000014035FB11: jb      loc_14035FFB3
 * 000000014035FB17: cmp     r14b, 0D1h
 * 000000014035FB1B: jz      loc_14035FFB3
 * 000000014035FB21: lea     eax, [r14+3]
 * 000000014035FB25: cmp     al, r12b
 * 000000014035FB28: jbe     loc_14035FFB3
 * 000000014035FB2E: mov     edx, [r13+28h]
 * 000000014035FB32: mov     rax, 34000000000h
 * 000000014035FB3C: shl     rdx, 30h
 * 000000014035FB40: or      rdx, rcx
 * 000000014035FB43: or      rdx, rax
 * 000000014035FB46: mov     eax, [rsi+8F8h]
 * 000000014035FB4C: test    eax, eax
 * 000000014035FB4E: jnz     loc_14035FFB3
 * 000000014035FB54: mov     eax, r14d
 * 000000014035FB57: xor     rcx, rax
 * 000000014035FB5A: mov     rax, [rsi+590h]
 * 000000014035FB61: mov     [rax+18h], rcx
 * 000000014035FB65: mov     eax, [rsi+8F8h]
 * 000000014035FB6B: test    eax, eax
 * 000000014035FB6D: jnz     loc_14035FFB3
 * 000000014035FB73: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035FB7D: add     rax, rsi
 * 000000014035FB80: mov     [rsi+900h], rax
 * 000000014035FB87: lea     rax, [rbx+r13]
 * 000000014035FB8B: mov     [rsi+908h], rax
 * 000000014035FB92: movsxd  rax, dword ptr [r13+0]
 * 000000014035FB96: mov     [rsi+910h], rax
 * 000000014035FB9D: mov     [rsi+918h], rdx
 * 000000014035FBA4: mov     [rsi+8F8h], r12d
 * 000000014035FBAB: jmp     loc_14035FFA9
 * 000000014035FBB0: mov     edx, [r13+28h]
 * 000000014035FBB4: lea     rcx, [rbp+0B70h+var_228]
 * 000000014035FBBB: mov     rax, [rsi+1A0h]
 * 000000014035FBC2: call    KeGuardDispatchICall
 * 000000014035FBC7: mov     rax, [rsi+1D0h]
 * 000000014035FBCE: lea     rdx, [rbp+0B70h+var_218]
 * 000000014035FBD5: lea     rcx, [rbp+0B70h+var_228]
 * 000000014035FBDC: call    KeGuardDispatchICall
 * 000000014035FBE1: lea     rdx, [rbp+0B70h+var_148]
 * 000000014035FBE8: lea     rcx, [rbp+0B70h+var_908]
 * 000000014035FBEF: call    KiGetGdtIdt
 * 000000014035FBF4: mov     r15, [rbp+0B70h+var_906]
 * 000000014035FBFB: mov     ecx, 2
 * 000000014035FC00: mov     r14d, [r13+10h]
 * 000000014035FC04: test    [rsi+87Bh], cl
 * 000000014035FC0A: jz      loc_14035FD3C
 * 000000014035FC10: mov     rdx, [rsi+8E0h]
 * 000000014035FC17: mov     r8d, 26h ; '&'
 * 000000014035FC1D: mov     ecx, 130h
 * 000000014035FC22: mov     rax, rdx
 * 000000014035FC25: xor     r12d, r12d
 * 000000014035FC28: lea     r9d, [r8-25h]
 * 000000014035FC2C: mov     [rax], r12
 * 000000014035FC2F: add     ecx, 0FFFFFFF8h
 * 000000014035FC32: add     rax, 8
 * 000000014035FC36: sub     r8, r9
 * 000000014035FC39: jnz     short loc_14035FC2C
 * 000000014035FC3B: test    ecx, ecx
 * 000000014035FC3D: jz      short loc_14035FC50
 * 000000014035FC3F: mov     r8d, 0FFFFFFFFh
 * 000000014035FC45: mov     [rax], r12b
 * 000000014035FC48: add     rax, r9
 * 000000014035FC4B: add     ecx, r8d
 * 000000014035FC4E: jnz     short loc_14035FC45
 * 000000014035FC50: movups  xmm0, xmmword ptr [rsi+848h]
 * 000000014035FC57: mov     eax, 12Fh
 * 000000014035FC5C: movdqu  xmmword ptr [rdx+10h], xmm0
 * 000000014035FC61: movups  xmm1, xmmword ptr [rsi+858h]
 * 000000014035FC68: movdqu  xmmword ptr [rdx+20h], xmm1
 * 000000014035FC6D: movups  xmm0, xmmword ptr [rsi+868h]
 * 000000014035FC74: movdqu  xmmword ptr [rdx+120h], xmm0
 * 000000014035FC7C: mov     word ptr [rbp+0B70h+var_878], ax
 * 000000014035FC83: lea     rax, [rsi+878h]
 * 000000014035FC8A: mov     [rbp+2FAh], rdx
 * 000000014035FC91: mov     rcx, rax
 * 000000014035FC94: mov     [rdx+10h], ax
 * 000000014035FC98: shr     rcx, 10h
 * 000000014035FC9C: mov     [rbp+0B70h+var_518], rax
 * 000000014035FCA3: shr     rax, 20h
 * 000000014035FCA7: mov     [rdx+16h], cx
 * 000000014035FCAB: mov     [rdx+18h], eax
 * 000000014035FCAE: cli
 * 000000014035FCAF: sidt    fword ptr [rbp+0B70h+var_6B0]
 * 000000014035FCB6: lidt    fword ptr [rbp+0B70h+var_878]
 * 000000014035FCBD: mov     dr7, r12
 * 000000014035FCC1: lea     rax, [rsi+87Eh]
 * 000000014035FCC8: mov     [rdx+10h], ax
 * 000000014035FCCC: mov     rcx, rax
 * 000000014035FCCF: shr     rcx, 10h
 * 000000014035FCD3: shr     rax, 20h
 * 000000014035FCD7: mov     [rdx+16h], cx
 * 000000014035FCDB: mov     [rdx+18h], eax
 * 000000014035FCDE: test    byte ptr [rsi+87Bh], 20h
 * 000000014035FCE5: jnz     short loc_14035FCF5
 * 000000014035FCE7: call    KiErrata704Present
 * 000000014035FCEC: mov     [rsi+8E8h], rax
 * 000000014035FCF3: jmp     short loc_14035FD26
 * 000000014035FCF5: lea     rbx, [rsi+8AAh]
 * 000000014035FCFC: call    KiGetSs
 * 000000014035FD01: mov     [rbx], ax
 * 000000014035FD04: mov     dr0, rbx
 * 000000014035FD07: mov     eax, 70001h
 * 000000014035FD0C: mov     dr7, rax
 * 000000014035FD0F: mov     rcx, rbx
 * 000000014035FD12: call    KiErrataSkx55Present
 * 000000014035FD17: mov     [rsi+8E8h], rax
 * 000000014035FD1E: mov     dr7, r12
 * 000000014035FD22: mov     dr0, r12
 * 000000014035FD26: mov     eax, gs:1A4h
 * 000000014035FD2E: mov     [rsi+8F0h], eax
 * 000000014035FD34: lidt    fword ptr [rbp+0B70h+var_6B0]
 * 000000014035FD3B: sti
 * 000000014035FD3C: call    KiGetLdtr
 * 000000014035FD41: movzx   r12d, ax
 * 000000014035FD45: call    KiGetTr
 * 000000014035FD4A: add     [rsi+828h], r14d
 * 000000014035FD51: lea     rcx, [r15+r14]
 * 000000014035FD55: mov     r9d, [rsi+814h]
 * 000000014035FD5C: movzx   r13d, ax
 * 000000014035FD60: mov     r11, [rsi+818h]
 * 000000014035FD67: mov     r8, r15
 * 000000014035FD6A: mov     word ptr [rbp+0B70h+arg_8], ax
 * 000000014035FD71: mov     rax, r15
 * 000000014035FD74: cmp     r15, rcx
 * 000000014035FD77: jnb     short loc_14035FD89
 * 000000014035FD79: mov     edx, 40h ; '@'
 * 000000014035FD7E: prefetchnta byte ptr [rax]
 * 000000014035FD81: add     rax, rdx
 * 000000014035FD84: cmp     rax, rcx
 * 000000014035FD87: jb      short loc_14035FD7E
 * 000000014035FD89: mov     r10d, r14d
 * 000000014035FD8C: mov     rbx, r11
 * 000000014035FD8F: shr     r10d, 7
 * 000000014035FD93: mov     edx, 1
 * 000000014035FD98: test    r10d, r10d
 * 000000014035FD9B: jz      short loc_14035FE16
 * 000000014035FD9D: mov     edi, 0FFFFFFFFh
 * 000000014035FDA2: mov     r13, 7010008004002001h
 * 000000014035FDAC: mov     eax, 8
 * 000000014035FDB1: xor     rbx, [r8]
 * 000000014035FDB4: mov     ecx, r9d
 * 000000014035FDB7: rol     rbx, cl
 * 000000014035FDBA: xor     rbx, [r8+8]
 * 000000014035FDBE: add     r8, 10h
 * 000000014035FDC2: rol     rbx, cl
 * 000000014035FDC5: sub     rax, rdx
 * 000000014035FDC8: jnz     short loc_14035FDB1
 * 000000014035FDCA: mov     rcx, r8
 * 000000014035FDCD: sub     rcx, r15
 * 000000014035FDD0: xor     rcx, r11
 * 000000014035FDD3: mov     rax, rcx
 * 000000014035FDD6: rol     rax, 11h
 * 000000014035FDDA: xor     rcx, rax
 * 000000014035FDDD: mov     rax, r13
 * 000000014035FDE0: mul     rcx
 * 000000014035FDE3: xor     r9d, eax
 * 000000014035FDE6: mov     [rbp+0B70h+var_510], rdx
 * 000000014035FDED: xor     r9d, edx
 * 000000014035FDF0: mov     edx, 1
 * 000000014035FDF5: and     r9d, 3Fh
 * 000000014035FDF9: cmovz   r9d, edx
 * 000000014035FDFD: add     r10d, edi
 * 000000014035FE00: jnz     short loc_14035FDAC
 * 000000014035FE02: mov     rsi, [rsp+0C70h+var_C10]
 * 000000014035FE07: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014035FE0E: movzx   r13d, word ptr [rbp+0B70h+arg_8]
 * 000000014035FE16: and     r14d, 7Fh
 * 000000014035FE1A: cmp     r14d, 8
 * 000000014035FE1E: jb      short loc_14035FE3D
 * 000000014035FE20: mov     eax, r14d
 * 000000014035FE23: shr     rax, 3
 * 000000014035FE27: xor     rbx, [r8]
 * 000000014035FE2A: mov     ecx, r9d
 * 000000014035FE2D: rol     rbx, cl
 * 000000014035FE30: add     r8, 8
 * 000000014035FE34: add     r14d, 0FFFFFFF8h
 * 000000014035FE38: sub     rax, rdx
 * 000000014035FE3B: jnz     short loc_14035FE27
 * 000000014035FE3D: xor     r15d, r15d
 * 000000014035FE40: test    r14d, r14d
 * 000000014035FE43: jz      short loc_14035FE63
 * 000000014035FE45: mov     r15d, 0FFFFFFFFh
 * 000000014035FE4B: movzx   eax, byte ptr [r8]
 * 000000014035FE4F: mov     ecx, r9d
 * 000000014035FE52: xor     rbx, rax
 * 000000014035FE55: add     r8, rdx
 * 000000014035FE58: rol     rbx, cl
 * 000000014035FE5B: add     r14d, r15d
 * 000000014035FE5E: jnz     short loc_14035FE4B
 * 000000014035FE60: xor     r15d, r15d
 * 000000014035FE63: mov     rax, rbx
 * 000000014035FE66: jmp     short loc_14035FE6A
 * 000000014035FE68: xor     ebx, eax
 * 000000014035FE6A: shr     rax, 1Fh
 * 000000014035FE6E: test    rax, rax
 * 000000014035FE71: jnz     short loc_14035FE68
 * 000000014035FE73: mov     rax, [rsi+198h]
 * 000000014035FE7A: lea     rcx, [rbp+0B70h+var_218]
 * 000000014035FE81: btr     ebx, 1Fh
 * 000000014035FE85: call    KeGuardDispatchICall
 * 000000014035FE8A: mov     r9, [rsp+0C70h+var_C18]
 * 000000014035FE8F: mov     r11d, 40h ; '@'
 * 000000014035FE95: cmp     ebx, [r9+14h]
 * 000000014035FE99: jnz     short loc_14035FEB9
 * 000000014035FE9B: movzx   eax, word ptr [r9+2Ch]
 * 000000014035FEA0: cmp     [rbp+0B70h+var_908], ax
 * 000000014035FEA7: jnz     short loc_14035FEB9
 * 000000014035FEA9: test    r12w, r12w
 * 000000014035FEAD: jnz     short loc_14035FEB9
 * 000000014035FEAF: cmp     r13w, r11w
 * 000000014035FEB3: jz      loc_14035FFB3
 * 000000014035FEB9: test    dword ptr [rsi+990h], 40000000h
 * 000000014035FEC3: mov     r10d, 1
 * 000000014035FEC9: jz      short loc_14035FF14
 * 000000014035FECB: mov     rcx, [rsi+0A80h]
 * 000000014035FED2: lea     edx, [r10+2Fh]
 * 000000014035FED6: lea     r8d, [r10+5]
 * 000000014035FEDA: mov     rax, [r9]
 * 000000014035FEDD: add     edx, 0FFFFFFF8h
 * 000000014035FEE0: mov     [rcx], rax
 * 000000014035FEE3: add     r9, 8
 * 000000014035FEE7: add     rcx, 8
 * 000000014035FEEB: sub     r8, r10
 * 000000014035FEEE: jnz     short loc_14035FEDA
 * 000000014035FEF0: test    edx, edx
 * 000000014035FEF2: jz      short loc_14035FF0D
 * 000000014035FEF4: mov     r15d, 0FFFFFFFFh
 * 000000014035FEFA: mov     al, [r9]
 * 000000014035FEFD: add     r9, r10
 * 000000014035FF00: mov     [rcx], al
 * 000000014035FF02: add     rcx, r10
 * 000000014035FF05: add     edx, r15d
 * 000000014035FF08: jnz     short loc_14035FEFA
 * 000000014035FF0A: xor     r15d, r15d
 * 000000014035FF0D: mov     r9, [rsi+0A80h]
 * 000000014035FF14: mov     rax, [rbp+0B70h+var_906]
 * 000000014035FF1B: mov     ecx, ebx
 * 000000014035FF1D: mov     [r9+18h], rax
 * 000000014035FF21: mov     [r9+20h], rcx
 * 000000014035FF25: test    r12w, r12w
 * 000000014035FF29: jz      short loc_14035FF31
 * 000000014035FF2B: movzx   eax, r12w
 * 000000014035FF2F: jmp     short loc_14035FF3B
 * 000000014035FF31: cmp     r13w, r11w
 * 000000014035FF35: jz      short loc_14035FF3F
 * 000000014035FF37: movzx   eax, r13w
 * 000000014035FF3B: mov     [r9+18h], rax
 * 000000014035FF3F: mov     eax, [rsi+8F8h]
 * 000000014035FF45: mov     edx, [r9+14h]
 * 000000014035FF49: test    eax, eax
 * 000000014035FF4B: jnz     short loc_14035FF61
 * 000000014035FF4D: mov     rax, [rsi+590h]
 * 000000014035FF54: xor     rcx, rdx
 * 000000014035FF57: mov     [rax+18h], rcx
 * 000000014035FF5B: mov     eax, [rsi+8F8h]
 * 000000014035FF61: mov     rcx, [r9+8]
 * 000000014035FF65: test    eax, eax
 * 000000014035FF67: jnz     short loc_14035FFB3
 * 000000014035FF69: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014035FF73: add     rax, rsi
 * 000000014035FF76: mov     [rsi+900h], rax
 * 000000014035FF7D: mov     rax, 0B3B74BDEE4453415h
 * 000000014035FF87: add     rax, r9
 * 000000014035FF8A: mov     [rsi+908h], rax
 * 000000014035FF91: movsxd  rax, dword ptr [r9]
 * 000000014035FF94: mov     [rsi+910h], rax
 * 000000014035FF9B: mov     [rsi+918h], rcx
 * 000000014035FFA2: mov     [rsi+8F8h], r10d
 * 000000014035FFA9: xor     edx, edx
 * 000000014035FFAB: mov     rcx, rsi
 * 000000014035FFAE: call    sub_14036B3BC
 * 000000014035FFB3: mov     r14d, 8000h
 * 000000014035FFB9: add     [rsi+828h], r14d
 * 000000014035FFC0: jmp     loc_140355329
 * 000000014035FFC5: mov     edx, [r13+28h]
 * 000000014035FFC9: lea     rcx, [rbp+0B70h+var_208]
 * 000000014035FFD0: mov     rax, [rsi+1A0h]
 * 000000014035FFD7: xor     r15d, r15d
 * 000000014035FFDA: mov     dword ptr [rbp+0B70h+var_BA8], r15d
 * 000000014035FFDE: call    KeGuardDispatchICall
 * 000000014035FFE3: mov     rax, [rsi+1D0h]
 * 000000014035FFEA: lea     rdx, [rbp+0B70h+var_1F8]
 * 000000014035FFF1: lea     rcx, [rbp+0B70h+var_208]
 * 000000014035FFF8: call    KeGuardDispatchICall
 * 000000014035FFFD: lea     rdx, [rbp+0B70h+var_888]
 * 0000000140360004: lea     rcx, [rbp+0B70h+var_138]
 * 000000014036000B: call    KiGetGdtIdt
 * 0000000140360010: mov     rcx, [rbp+0B70h+var_886]
 * 0000000140360017: mov     edi, r15d
 * 000000014036001A: mov     [rsp+0C70h+var_BF8], rcx
 * 000000014036001F: add     rcx, 4
 * 0000000140360023: mov     [rsp+0C70h+var_C20], rcx
 * 0000000140360028: mov     rax, [rsi+8C8h]
 * 000000014036002F: mov     r10, r15
 * 0000000140360032: mov     [rbp+0B70h+var_A98], rax
 * 0000000140360039: mov     r14, r15
 * 000000014036003C: mov     r8, [rsi+8D0h]
 * 0000000140360043: mov     r12d, [rsi+8ACh]
 * 000000014036004A: mov     r13d, [rsi+8B0h]
 * 0000000140360051: mov     [rsp+0C70h+var_C08], r8
 * 0000000140360056: mov     [rbp+0B70h+var_BD8], r15
 * 000000014036005A: mov     [rbp+0B70h+var_BF0], r15
 * 000000014036005E: mov     r15, cr8
 * 0000000140360062: mov     cr8, rbx
 * 0000000140360066: movzx   eax, word ptr [rcx-4]
 * 000000014036006A: movzx   r9d, word ptr [rcx]
 * 000000014036006E: mov     word ptr [rbp+0B70h+var_BD0], ax
 * 0000000140360072: movzx   eax, word ptr [rcx+2]
 * 0000000140360076: mov     word ptr [rbp+0B70h+var_BD0+2], ax
 * 000000014036007A: mov     eax, [rcx+4]
 * 000000014036007D: mov     rcx, [rsi+618h]
 * 0000000140360084: mov     dword ptr [rbp+0B70h+var_BD0+4], eax
 * 0000000140360087: mov     rbx, [rbp+0B70h+var_BD0]
 * 000000014036008B: mov     eax, edi
 * 000000014036008D: mov     word ptr [rbp+0B70h+arg_8], r9w
 * 0000000140360095: lea     rdx, [rcx+rax*8]
 * 0000000140360099: cmp     rbx, rdx
 * 000000014036009C: jnz     short loc_140360107
 * 000000014036009E: mov     eax, 6000h
 * 00000001403600A3: test    ax, r9w
 * 00000001403600A7: jz      short loc_1403600B9
 * 00000001403600A9: movzx   eax, r15b
 * 00000001403600AD: mov     cr8, rax
 * 00000001403600B1: xor     r15d, r15d
 * 00000001403600B4: jmp     loc_14036027C
 * 00000001403600B9: mov     rax, [rsi+470h]
 * 00000001403600C0: mov     ecx, edi
 * 00000001403600C2: call    KeGuardDispatchICall
 * 00000001403600C7: mov     r14, [rax]
 * 00000001403600CA: test    r14, r14
 * 00000001403600CD: jz      short loc_1403600F8
 * 00000001403600CF: mov     r12, [r12+r14]
 * 00000001403600D3: mov     [rbp+0B70h+var_BD8], r12
 * 00000001403600D7: cmp     edi, 30h ; '0'
 * 00000001403600DA: jnb     short loc_1403600EC
 * 00000001403600DC: movzx   eax, r15b
 * 00000001403600E0: mov     cr8, rax
 * 00000001403600E4: xor     r15d, r15d
 * 00000001403600E7: jmp     loc_140360278
 * 00000001403600EC: mov     r13, [r13+r14+0]
 * 00000001403600F1: mov     r8, [rsp+0C70h+var_C08]
 * 00000001403600F6: jmp     short loc_14036010E
 * 00000001403600F8: mov     r8, [rsp+0C70h+var_C08]
 * 00000001403600FD: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140360101: mov     r13, [rbp+0B70h+var_BF0]
 * 0000000140360105: jmp     short loc_14036010A
 * 0000000140360107: mov     r13, r10
 * 000000014036010A: mov     r12, [rbp+0B70h+var_BD8]
 * 000000014036010E: movzx   eax, r15b
 * 0000000140360112: mov     cr8, rax
 * 0000000140360116: xor     r15d, r15d
 * 0000000140360119: test    r14, r14
 * 000000014036011C: jnz     short loc_140360167
 * 000000014036011E: mov     rdx, [rbp+0B70h+var_A98]
 * 0000000140360125: cmp     rbx, rdx
 * 0000000140360128: jb      loc_140360278
 * 000000014036012E: cmp     rbx, r8
 * 0000000140360131: ja      loc_140360278
 * 0000000140360137: mov     r8d, dword ptr [rbp+0B70h+var_BD0]
 * 000000014036013B: mov     rcx, [rsi+8D8h]
 * 0000000140360142: sub     r8d, edx
 * 0000000140360145: mov     rax, [rsi+210h]
 * 000000014036014C: call    KeGuardDispatchICall
 * 0000000140360151: test    rax, rax
 * 0000000140360154: jz      loc_140360278
 * 000000014036015A: mov     eax, [rax+24h]
 * 000000014036015D: bt      eax, 19h
 * 0000000140360161: jb      loc_140360278
 * 0000000140360167: mov     rax, [rsp+0C70h+var_C20]
 * 000000014036016C: mov     ecx, 10h
 * 0000000140360171: cmp     [rax-2], cx
 * 0000000140360175: jnz     loc_140360278
 * 000000014036017B: movzx   ecx, word ptr [rax]
 * 000000014036017E: mov     edx, 1F00h
 * 0000000140360183: movzx   eax, cx
 * 0000000140360186: and     ax, dx
 * 0000000140360189: mov     edx, 0E00h
 * 000000014036018E: cmp     ax, dx
 * 0000000140360191: jnz     loc_140360278
 * 0000000140360197: mov     eax, 8000h
 * 000000014036019C: test    ax, cx
 * 000000014036019F: jz      loc_140360278
 * 00000001403601A5: mov     rax, [rsi+260h]
 * 00000001403601AC: lea     rdx, [rbp+0B70h+var_A98]
 * 00000001403601B3: xor     r8d, r8d
 * 00000001403601B6: mov     rcx, rbx
 * 00000001403601B9: call    KeGuardDispatchICall
 * 00000001403601BE: test    rax, rax
 * 00000001403601C1: jz      short loc_1403601E7
 * 00000001403601C3: mov     eax, [rax]
 * 00000001403601C5: mov     rcx, [rbp+0B70h+var_A98]
 * 00000001403601CC: add     rax, rcx
 * 00000001403601CF: cmp     rax, rbx
 * 00000001403601D2: jnz     short loc_1403601E7
 * 00000001403601D4: cmp     rcx, [rsi+8C8h]
 * 00000001403601DB: jnz     short loc_1403601E7
 * 00000001403601DD: test    r14, r14
 * 00000001403601E0: jnz     short loc_1403601F0
 * 00000001403601E2: jmp     loc_1403602AB
 * 00000001403601E7: test    r14, r14
 * 00000001403601EA: jz      loc_140360278
 * 00000001403601F0: mov     eax, 6000h
 * 00000001403601F5: test    word ptr [rbp+0B70h+arg_8], ax
 * 00000001403601FC: jnz     short loc_140360278
 * 00000001403601FE: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140360202: jz      loc_1403602AB
 * 0000000140360208: mov     rax, [rsi+260h]
 * 000000014036020F: lea     rdx, [rbp+0B70h+var_A98]
 * 0000000140360216: xor     r8d, r8d
 * 0000000140360219: mov     rcx, r12
 * 000000014036021C: call    KeGuardDispatchICall
 * 0000000140360221: test    rax, rax
 * 0000000140360224: jz      short loc_140360278
 * 0000000140360226: mov     eax, [rax]
 * 0000000140360228: mov     rdx, [rbp+0B70h+var_A98]
 * 000000014036022F: add     rax, rdx
 * 0000000140360232: cmp     rax, r12
 * 0000000140360235: jnz     short loc_140360278
 * 0000000140360237: cmp     rdx, [rsi+8C8h]
 * 000000014036023E: jnz     short loc_140360278
 * 0000000140360240: mov     rcx, [rsi+8D8h]
 * 0000000140360247: mov     r8d, r12d
 * 000000014036024A: mov     rax, [rsi+210h]
 * 0000000140360251: sub     r8d, edx
 * 0000000140360254: call    KeGuardDispatchICall
 * 0000000140360259: test    rax, rax
 * 000000014036025C: jz      short loc_140360278
 * 000000014036025E: mov     eax, [rax+24h]
 * 0000000140360261: bt      eax, 19h
 * 0000000140360265: jb      short loc_140360278
 * 0000000140360267: cmp     edi, 0FEh
 * 000000014036026D: jnz     short loc_1403602AB
 * 000000014036026F: cmp     r13, [rsi+8B8h]
 * 0000000140360276: jz      short loc_1403602AB
 * 0000000140360278: mov     r10, [rbp+0B70h+var_BD8]
 * 000000014036027C: mov     rax, [rsi+590h]
 * 0000000140360283: mov     [rax], rbx
 * 0000000140360286: mov     dword ptr [rax+10h], 80h
 * 000000014036028D: test    r10, r10
 * 0000000140360290: jz      short loc_1403602A4
 * 0000000140360292: mov     rax, [rsi+590h]
 * 0000000140360299: mov     [rax+8], r10
 * 000000014036029D: mov     dword ptr [rax+14h], 80h
 * 00000001403602A4: mov     dword ptr [rbp+0B70h+var_BA8], 1
 * 00000001403602AB: mov     rcx, [rsp+0C70h+var_C20]
 * 00000001403602B0: inc     edi
 * 00000001403602B2: add     rcx, 10h
 * 00000001403602B6: mov     ebx, 0Fh
 * 00000001403602BB: mov     [rsp+0C70h+var_C20], rcx
 * 00000001403602C0: cmp     edi, 0FFh
 * 00000001403602C6: jbe     loc_140360028
 * 00000001403602CC: lea     ecx, [rbx-0Eh]
 * 00000001403602CF: test    [rsi+87Bh], cl
 * 00000001403602D5: jz      loc_1403603A9
 * 00000001403602DB: cli
 * 00000001403602DC: mov     r14d, 0C0000082h
 * 00000001403602E2: mov     ecx, r14d
 * 00000001403602E5: rdmsr
 * 00000001403602E7: shl     rdx, 20h
 * 00000001403602EB: or      rax, rdx
 * 00000001403602EE: lea     rdx, [rsi+87Ah]
 * 00000001403602F5: mov     rbx, rax
 * 00000001403602F8: mov     rax, rdx
 * 00000001403602FB: shr     rdx, 20h
 * 00000001403602FF: wrmsr
 * 0000000140360301: mov     r13d, 20000h
 * 0000000140360307: test    [rsi+994h], r13d
 * 000000014036030E: jnz     short loc_140360352
 * 0000000140360310: mov     rdx, gs:20h
 * 0000000140360319: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140360323: mov     rax, [rsi+4C0h]
 * 000000014036032A: add     rcx, rsi
 * 000000014036032D: mov     [rax], rcx
 * 0000000140360330: mov     rax, [rsi+4C8h]
 * 0000000140360337: mov     [rax], rdx
 * 000000014036033A: mov     rax, [rsi+4D0h]
 * 0000000140360341: mov     [rax], r14
 * 0000000140360344: mov     rax, [rsi+4D8h]
 * 000000014036034B: mov     qword ptr [rax], 112h
 * 0000000140360352: lea     rax, [rsi+87Ch]
 * 0000000140360359: call    KeGuardDispatchICall
 * 000000014036035E: test    [rsi+994h], r13d
 * 0000000140360365: jnz     short loc_140360399
 * 0000000140360367: mov     rax, [rsi+4C0h]
 * 000000014036036E: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140360378: mov     [rax], rcx
 * 000000014036037B: mov     rax, [rsi+4C8h]
 * 0000000140360382: mov     [rax], r15
 * 0000000140360385: mov     rax, [rsi+4D0h]
 * 000000014036038C: mov     [rax], r15
 * 000000014036038F: mov     rax, [rsi+4D8h]
 * 0000000140360396: mov     [rax], r15
 * 0000000140360399: mov     rdx, rbx
 * 000000014036039C: mov     rax, rbx
 * 000000014036039F: shr     rdx, 20h
 * 00000001403603A3: mov     ecx, r14d
 * 00000001403603A6: wrmsr
 * 00000001403603A8: sti
 * 00000001403603A9: mov     r15, [rsp+0C70h+var_BF8]
 * 00000001403603AE: add     dword ptr [rsi+828h], 350h
 * 00000001403603B8: mov     r8, r15
 * 00000001403603BB: mov     ebx, [rsi+828h]
 * 00000001403603C1: mov     rax, r15
 * 00000001403603C4: mov     r9d, [rsi+814h]
 * 00000001403603CB: mov     r11, [rsi+818h]
 * 00000001403603D2: lea     rcx, [r15+350h]
 * 00000001403603D9: cmp     r15, rcx
 * 00000001403603DC: jnb     short loc_1403603EE
 * 00000001403603DE: mov     edx, 40h ; '@'
 * 00000001403603E3: prefetchnta byte ptr [rax]
 * 00000001403603E6: add     rax, rdx
 * 00000001403603E9: cmp     rax, rcx
 * 00000001403603EC: jb      short loc_1403603E3
 * 00000001403603EE: mov     r10d, 6
 * 00000001403603F4: mov     r14, r11
 * 00000001403603F7: mov     esi, 0FFFFFFFFh
 * 00000001403603FC: mov     rdi, 7010008004002001h
 * 0000000140360406: lea     r12d, [r10-5]
 * 000000014036040A: lea     r13d, [r10+2]
 * 000000014036040E: mov     rax, r13
 * 0000000140360411: xor     r14, [r8]
 * 0000000140360414: mov     ecx, r9d
 * 0000000140360417: add     r8, r13
 * 000000014036041A: rol     r14, cl
 * 000000014036041D: xor     r14, [r8]
 * 0000000140360420: add     r8, r13
 * 0000000140360423: rol     r14, cl
 * 0000000140360426: sub     rax, r12
 * 0000000140360429: jnz     short loc_140360411
 * 000000014036042B: mov     rcx, r8
 * 000000014036042E: sub     rcx, r15
 * 0000000140360431: xor     rcx, r11
 * 0000000140360434: mov     rax, rcx
 * 0000000140360437: rol     rax, 11h
 * 000000014036043B: xor     rcx, rax
 * 000000014036043E: mov     rax, rdi
 * 0000000140360441: mul     rcx
 * 0000000140360444: xor     r9d, eax
 * 0000000140360447: mov     [rbp+0B70h+var_508], rdx
 * 000000014036044E: xor     r9d, edx
 * 0000000140360451: and     r9d, 3Fh
 * 0000000140360455: cmovz   r9d, r12d
 * 0000000140360459: add     r10d, esi
 * 000000014036045C: jnz     short loc_14036040E
 * 000000014036045E: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140360463: lea     edx, [r10+50h]
 * 0000000140360467: mov     r12d, dword ptr [rbp+0B70h+var_BA8]
 * 000000014036046B: lea     eax, [rdx-46h]
 * 000000014036046E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140360475: lea     r11d, [r10+1]
 * 0000000140360479: xor     r14, [r8]
 * 000000014036047C: mov     ecx, r9d
 * 000000014036047F: rol     r14, cl
 * 0000000140360482: add     r8, r13
 * 0000000140360485: add     edx, 0FFFFFFF8h
 * 0000000140360488: sub     rax, r11
 * 000000014036048B: jnz     short loc_140360479
 * 000000014036048D: test    edx, edx
 * 000000014036048F: jz      short loc_1403604AC
 * 0000000140360491: mov     r10d, 0FFFFFFFFh
 * 0000000140360497: movzx   eax, byte ptr [r8]
 * 000000014036049B: mov     ecx, r9d
 * 000000014036049E: xor     r14, rax
 * 00000001403604A1: add     r8, r11
 * 00000001403604A4: rol     r14, cl
 * 00000001403604A7: add     edx, r10d
 * 00000001403604AA: jnz     short loc_140360497
 * 00000001403604AC: mov     rax, r14
 * 00000001403604AF: jmp     short loc_1403604B4
 * 00000001403604B1: xor     r14d, eax
 * 00000001403604B4: shr     rax, 1Fh
 * 00000001403604B8: test    rax, rax
 * 00000001403604BB: jnz     short loc_1403604B1
 * 00000001403604BD: lea     eax, [rbx+10h]
 * 00000001403604C0: btr     r14d, 1Fh
 * 00000001403604C5: mov     [rsi+828h], eax
 * 00000001403604CB: lea     rdx, [r15+0E10h]
 * 00000001403604D2: mov     r10d, [rsi+814h]
 * 00000001403604D9: lea     rcx, [r15+0E20h]
 * 00000001403604E0: mov     rbx, [rsi+818h]
 * 00000001403604E7: mov     rax, rdx
 * 00000001403604EA: cmp     rdx, rcx
 * 00000001403604ED: jnb     short loc_140360500
 * 00000001403604EF: mov     r8d, 40h ; '@'
 * 00000001403604F5: prefetchnta byte ptr [rax]
 * 00000001403604F8: add     rax, r8
 * 00000001403604FB: cmp     rax, rcx
 * 00000001403604FE: jb      short loc_1403604F5
 * 0000000140360500: mov     r8d, 10h
 * 0000000140360506: lea     r9d, [r8-0Eh]
 * 000000014036050A: xor     rbx, [rdx]
 * 000000014036050D: mov     ecx, r10d
 * 0000000140360510: rol     rbx, cl
 * 0000000140360513: add     rdx, r13
 * 0000000140360516: add     r8d, 0FFFFFFF8h
 * 000000014036051A: sub     r9, r11
 * 000000014036051D: jnz     short loc_14036050A
 * 000000014036051F: xor     r15d, r15d
 * 0000000140360522: test    r8d, r8d
 * 0000000140360525: jz      short loc_140360544
 * 0000000140360527: mov     r15d, 0FFFFFFFFh
 * 000000014036052D: movzx   eax, byte ptr [rdx]
 * 0000000140360530: mov     ecx, r10d
 * 0000000140360533: xor     rbx, rax
 * 0000000140360536: add     rdx, r11
 * 0000000140360539: rol     rbx, cl
 * 000000014036053C: add     r8d, r15d
 * 000000014036053F: jnz     short loc_14036052D
 * 0000000140360541: xor     r15d, r15d
 * 0000000140360544: mov     rax, rbx
 * 0000000140360547: jmp     short loc_14036054B
 * 0000000140360549: xor     ebx, eax
 * 000000014036054B: shr     rax, 1Fh
 * 000000014036054F: test    rax, rax
 * 0000000140360552: jnz     short loc_140360549
 * 0000000140360554: mov     rax, [rsi+198h]
 * 000000014036055B: lea     rcx, [rbp+0B70h+var_1F8]
 * 0000000140360562: btr     ebx, 1Fh
 * 0000000140360566: call    KeGuardDispatchICall
 * 000000014036056B: mov     rdx, [rsp+0C70h+var_C18]
 * 0000000140360570: mov     ecx, [rdx+14h]
 * 0000000140360573: cmp     r14d, ecx
 * 0000000140360576: jnz     short loc_140360596
 * 0000000140360578: mov     eax, ebx
 * 000000014036057A: cmp     rax, [rdx+18h]
 * 000000014036057E: jnz     short loc_140360596
 * 0000000140360580: movzx   eax, word ptr [rdx+2Ch]
 * 0000000140360584: cmp     [rbp+0B70h+var_888], ax
 * 000000014036058B: jnz     short loc_140360596
 * 000000014036058D: test    r12d, r12d
 * 0000000140360590: jz      loc_140360628
 * 0000000140360596: test    r12d, r12d
 * 0000000140360599: jnz     short loc_1403605CD
 * 000000014036059B: mov     eax, ebx
 * 000000014036059D: cmp     rax, [rdx+18h]
 * 00000001403605A1: jnz     short loc_1403605B1
 * 00000001403605A3: cmp     [rsi+8F8h], r15d
 * 00000001403605AA: jnz     short loc_1403605CD
 * 00000001403605AC: mov     eax, r14d
 * 00000001403605AF: jmp     short loc_1403605BF
 * 00000001403605B1: mov     eax, [rdx+18h]
 * 00000001403605B4: cmp     [rsi+8F8h], r15d
 * 00000001403605BB: jnz     short loc_1403605CD
 * 00000001403605BD: mov     ecx, ebx
 * 00000001403605BF: xor     rcx, rax
 * 00000001403605C2: mov     rax, [rsi+590h]
 * 00000001403605C9: mov     [rax+18h], rcx
 * 00000001403605CD: mov     rcx, [rdx+8]
 * 00000001403605D1: cmp     [rsi+8F8h], r15d
 * 00000001403605D8: jnz     short loc_140360628
 * 00000001403605DA: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403605E4: add     rax, rsi
 * 00000001403605E7: mov     [rsi+900h], rax
 * 00000001403605EE: mov     rax, 0B3B74BDEE4453415h
 * 00000001403605F8: add     rax, rdx
 * 00000001403605FB: mov     [rsi+908h], rax
 * 0000000140360602: movsxd  rax, dword ptr [rdx]
 * 0000000140360605: xor     edx, edx
 * 0000000140360607: mov     [rsi+910h], rax
 * 000000014036060E: mov     eax, 1
 * 0000000140360613: mov     [rsi+918h], rcx
 * 000000014036061A: mov     rcx, rsi
 * 000000014036061D: mov     [rsi+8F8h], eax
 * 0000000140360623: call    sub_14036B3BC
 * 0000000140360628: add     dword ptr [rsi+828h], 10000h
 * 0000000140360632: jmp     loc_140355323
 * 0000000140360637: mov     edx, [r13+2Ch]
 * 000000014036063B: lea     rcx, [rbp+0B70h+var_1E8]
 * 0000000140360642: mov     rax, [rsi+1A0h]
 * 0000000140360649: call    KeGuardDispatchICall
 * 000000014036064E: mov     rax, [rsi+1D0h]
 * 0000000140360655: lea     rdx, [rbp+0B70h+var_1D8]
 * 000000014036065C: lea     rcx, [rbp+0B70h+var_1E8]
 * 0000000140360663: call    KeGuardDispatchICall
 * 0000000140360668: xor     ecx, ecx
 * 000000014036066A: xgetbv
 * 000000014036066D: shl     rdx, 20h
 * 0000000140360671: lea     rcx, [rbp+0B70h+var_1D8]
 * 0000000140360678: or      rdx, rax
 * 000000014036067B: mov     rax, [rsi+198h]
 * 0000000140360682: mov     rbx, rdx
 * 0000000140360685: call    KeGuardDispatchICall
 * 000000014036068A: mov     r8, [r13+18h]
 * 000000014036068E: xor     r15d, r15d
 * 0000000140360691: mov     rdx, [r13+20h]
 * 0000000140360695: and     r8, rbx
 * 0000000140360698: cmp     r8, rdx
 * 000000014036069B: jz      loc_140355323
 * 00000001403606A1: mov     eax, [r13+28h]
 * 00000001403606A5: mov     ecx, [r13+2Ch]
 * 00000001403606A9: shl     rcx, 20h
 * 00000001403606AD: or      rcx, rax
 * 00000001403606B0: mov     eax, [rsi+8F8h]
 * 00000001403606B6: test    eax, eax
 * 00000001403606B8: jnz     loc_140355323
 * 00000001403606BE: mov     rax, [rsi+590h]
 * 00000001403606C5: xor     rdx, r8
 * 00000001403606C8: mov     [rax+18h], rdx
 * 00000001403606CC: mov     eax, [rsi+8F8h]
 * 00000001403606D2: jmp     loc_1403556B0
 * 00000001403606D7: xor     r15d, r15d
 * 00000001403606DA: jmp     short loc_1403606DF
 * 00000001403606DC: mov     r13, rdx
 * 00000001403606DF: mov     [rsi+820h], ecx
 * 00000001403606E5: cmp     [rbp+0B70h+var_B54], r15d
 * 00000001403606E9: jz      short loc_140360755
 * 00000001403606EB: mov     rcx, gs:20h
 * 00000001403606F4: mov     rax, [rsi+648h]
 * 00000001403606FB: mov     rdx, [rax+rcx]
 * 00000001403606FF: lea     rcx, [rbp+0B70h+var_1C8]
 * 0000000140360706: mov     rax, [rsi+688h]
 * 000000014036070D: add     rdx, [rsi+6A8h]
 * 0000000140360714: mov     rbx, [rdx+rax]
 * 0000000140360718: mov     rax, [rsi+198h]
 * 000000014036071F: call    KeGuardDispatchICall
 * 0000000140360724: mov     rax, [rsi+440h]
 * 000000014036072B: lea     rcx, [rbp+0B70h+var_620]
 * 0000000140360732: call    KeGuardDispatchICall
 * 0000000140360737: mov     rax, [rsi+3A8h]
 * 000000014036073E: mov     rcx, rbx
 * 0000000140360741: call    KeGuardDispatchICall
 * 0000000140360746: mov     rax, [rsi+3B8h]
 * 000000014036074D: mov     rcx, rbx
 * 0000000140360750: call    KeGuardDispatchICall
 * 0000000140360755: cmp     [rbp+0B70h+var_BE8], r15d
 * 0000000140360759: jz      loc_1403607F0
 * 000000014036075F: test    [rsi+990h], r14d
 * 0000000140360766: jnz     short loc_140360771
 * 0000000140360768: cmp     [rsi+8F8h], r15d
 * 000000014036076F: jnz     short loc_1403607F0
 * 0000000140360771: mov     rbx, [rsi+980h]
 * 0000000140360778: lea     rdx, [rbp+0B70h+var_620]
 * 000000014036077F: mov     [rsi+980h], r15
 * 0000000140360786: mov     rcx, rbx
 * 0000000140360789: mov     rax, [rsi+298h]
 * 0000000140360790: call    KeGuardDispatchICall
 * 0000000140360795: mov     eax, [rsi+990h]
 * 000000014036079B: test    r13b, al
 * 000000014036079E: jz      short loc_1403607DC
 * 00000001403607A0: and     eax, 0FFFFFFFEh
 * 00000001403607A3: mov     rcx, rbx
 * 00000001403607A6: mov     [rsi+990h], eax
 * 00000001403607AC: mov     rax, [rsi+280h]
 * 00000001403607B3: call    KeGuardDispatchICall
 * 00000001403607B8: mov     rbx, rax
 * 00000001403607BB: test    rax, rax
 * 00000001403607BE: jz      short loc_1403607D1
 * 00000001403607C0: mov     rax, [rsi+2A0h]
 * 00000001403607C7: mov     rcx, rbx
 * 00000001403607CA: call    KeGuardDispatchICall
 * 00000001403607CF: jmp     short loc_1403607D6
 * 00000001403607D1: mov     eax, 0FFFFFFFFh
 * 00000001403607D6: mov     [rsi+970h], eax
 * 00000001403607DC: test    rbx, rbx
 * 00000001403607DF: jz      short loc_1403607F0
 * 00000001403607E1: mov     rax, [rsi+288h]
 * 00000001403607E8: mov     rcx, rbx
 * 00000001403607EB: call    KeGuardDispatchICall
 * 00000001403607F0: mov     eax, [rsi+990h]
 * 00000001403607F6: mov     ecx, 800008h
 * 00000001403607FB: and     eax, ecx
 * 00000001403607FD: cmp     eax, ecx
 * 00000001403607FF: jnz     loc_140360BEE
 * 0000000140360805: mov     eax, [rsi+994h]
 * 000000014036080B: mov     r11d, [rsi+808h]
 * 0000000140360812: and     eax, r13d
 * 0000000140360815: mov     rax, [rsi+0A70h]
 * 000000014036081C: mov     r10d, [rsi+7E4h]
 * 0000000140360823: mov     r12, [rsi+9F8h]
 * 000000014036082A: mov     [rsp+0C70h+var_BF8], rax
 * 000000014036082F: mov     dword ptr [rbp+0B70h+arg_8], r11d
 * 0000000140360836: jz      short loc_14036083F
 * 0000000140360838: mov     r12, [rsi+5D8h]
 * 000000014036083F: mov     rax, [rsi+160h]
 * 0000000140360846: mov     [rbp+0B70h+var_BD0], rax
 * 000000014036084A: mov     rax, [rsi+2C8h]
 * 0000000140360851: mov     [rsp+0C70h+var_C08], rax
 * 0000000140360856: mov     rax, [rsi+340h]
 * 000000014036085D: mov     [rsp+0C70h+var_C20], rax
 * 0000000140360862: rdtsc
 * 0000000140360864: shl     rdx, 20h
 * 0000000140360868: mov     rbx, 7010008004002001h
 * 0000000140360872: or      rax, rdx
 * 0000000140360875: mov     r9, rdi
 * 0000000140360878: mov     rcx, rax
 * 000000014036087B: ror     rax, 3
 * 000000014036087F: xor     rcx, rax
 * 0000000140360882: mov     rax, rbx
 * 0000000140360885: mul     rcx
 * 0000000140360888: mov     rcx, rdx
 * 000000014036088B: mov     [rbp+0B70h+var_500], rdx
 * 0000000140360892: xor     rcx, rax
 * 0000000140360895: mov     rax, 0ABCC77118461CEFDh
 * 000000014036089F: mul     rcx
 * 00000001403608A2: shr     rdx, 1Ah
 * 00000001403608A6: imul    rax, rdx, 5F5E100h
 * 00000001403608AD: sub     rcx, rax
 * 00000001403608B0: sub     r9, rcx
 * 00000001403608B3: mov     [rbp+0B70h+var_A38], r9
 * 00000001403608BA: mov     r8d, [rsi+990h]
 * 00000001403608C1: bt      r8d, 1Ah
 * 00000001403608C6: jnb     loc_140360969
 * 00000001403608CC: rdtsc
 * 00000001403608CE: shl     rdx, 20h
 * 00000001403608D2: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 00000001403608DC: or      rax, rdx
 * 00000001403608DF: mov     rcx, rax
 * 00000001403608E2: ror     rax, 3
 * 00000001403608E6: xor     rcx, rax
 * 00000001403608E9: mov     rax, rbx
 * 00000001403608EC: mul     rcx
 * 00000001403608EF: mov     rcx, rdx
 * 00000001403608F2: mov     [rbp+0B70h+var_4F8], rdx
 * 00000001403608F9: xor     rcx, rax
 * 00000001403608FC: mov     rax, r14
 * 00000001403608FF: mul     rcx
 * 0000000140360902: shr     rdx, 3
 * 0000000140360906: lea     rax, [rdx+rdx*4]
 * 000000014036090A: add     rax, rax
 * 000000014036090D: sub     rcx, rax
 * 0000000140360910: mov     eax, 2
 * 0000000140360915: cmp     rcx, rax
 * 0000000140360918: jnb     short loc_140360969
 * 000000014036091A: rdtsc
 * 000000014036091C: shl     rdx, 20h
 * 0000000140360920: or      rax, rdx
 * 0000000140360923: mov     rcx, rax
 * 0000000140360926: ror     rax, 3
 * 000000014036092A: xor     rcx, rax
 * 000000014036092D: mov     rax, rbx
 * 0000000140360930: mul     rcx
 * 0000000140360933: mov     rcx, rdx
 * 0000000140360936: mov     [rbp+0B70h+var_4F0], rdx
 * 000000014036093D: xor     rcx, rax
 * 0000000140360940: mov     rax, r14
 * 0000000140360943: mul     rcx
 * 0000000140360946: shr     rdx, 3
 * 000000014036094A: lea     rax, [rdx+rdx*4]
 * 000000014036094E: add     rax, rax
 * 0000000140360951: sub     rcx, rax
 * 0000000140360954: add     rcx, r13
 * 0000000140360957: imul    rcx, r9
 * 000000014036095B: mov     [rbp+0B70h+var_A38], rcx
 * 0000000140360962: mov     r8d, [rsi+990h]
 * 0000000140360969: mov     ecx, 2
 * 000000014036096E: mov     r14d, r11d
 * 0000000140360971: test    cl, r8b
 * 0000000140360974: mov     rbx, r15
 * 0000000140360977: cmovnz  r14d, r10d
 * 000000014036097B: test    r8b, r8b
 * 000000014036097E: js      short loc_14036098B
 * 0000000140360980: xor     r9d, r9d
 * 0000000140360983: mov     r13d, r9d
 * 0000000140360986: jmp     loc_140360A55
 * 000000014036098B: rdtsc
 * 000000014036098D: shl     rdx, 20h
 * 0000000140360991: or      rax, rdx
 * 0000000140360994: mov     rcx, rax
 * 0000000140360997: ror     rax, 3
 * 000000014036099B: xor     rcx, rax
 * 000000014036099E: mov     rax, 7010008004002001h
 * 00000001403609A8: mul     rcx
 * 00000001403609AB: mov     ecx, 154h
 * 00000001403609B0: mov     rbx, rdx
 * 00000001403609B3: mov     [rbp+0B70h+var_4E8], rdx
 * 00000001403609BA: xor     rbx, rax
 * 00000001403609BD: mov     edx, 1
 * 00000001403609C2: mov     r15, rbx
 * 00000001403609C5: lea     rax, [rsi+0A98h]
 * 00000001403609CC: xor     r15, rsi
 * 00000001403609CF: mov     r10, rbx
 * 00000001403609D2: xor     [rax], r10
 * 00000001403609D5: lea     rax, [rax-8]
 * 00000001403609D9: ror     r10, cl
 * 00000001403609DC: sub     ecx, edx
 * 00000001403609DE: jnz     short loc_1403609D2
 * 00000001403609E0: lea     r8, [r11-0AA0h]
 * 00000001403609E7: shr     r8, 3
 * 00000001403609EB: test    r8d, r8d
 * 00000001403609EE: jz      short loc_140360A29
 * 00000001403609F0: movsxd  r9, r8d
 * 00000001403609F3: add     rsi, 0A98h
 * 00000001403609FA: mov     rdi, rdx
 * 00000001403609FD: lea     r9, [rsi+r9*8]
 * 0000000140360A01: mov     rdx, [r9]
 * 0000000140360A04: lea     rax, [r15+r15]
 * 0000000140360A08: mov     ecx, r8d
 * 0000000140360A0B: lea     r9, [r9-8]
 * 0000000140360A0F: ror     rdx, cl
 * 0000000140360A12: mov     r15, rdx
 * 0000000140360A15: xor     r15, rax
 * 0000000140360A18: sub     r8d, edi
 * 0000000140360A1B: jnz     short loc_140360A01
 * 0000000140360A1D: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140360A22: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140360A29: mov     ecx, r14d
 * 0000000140360A2C: lea     rdx, [rsi+r11]
 * 0000000140360A30: sub     ecx, r11d
 * 0000000140360A33: shr     ecx, 3
 * 0000000140360A36: test    ecx, ecx
 * 0000000140360A38: jz      short loc_140360A55
 * 0000000140360A3A: lea     rdx, [rdx+rcx*8]
 * 0000000140360A3E: mov     eax, 1
 * 0000000140360A43: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140360A47: xor     [rdx], r10
 * 0000000140360A4A: lea     rdx, [rdx-8]
 * 0000000140360A4E: ror     r10, cl
 * 0000000140360A51: sub     ecx, eax
 * 0000000140360A53: jnz     short loc_140360A47
 * 0000000140360A55: mov     rax, [rsp+0C70h+var_BF8]
 * 0000000140360A5A: test    rax, rax
 * 0000000140360A5D: jz      short loc_140360A81
 * 0000000140360A5F: mov     r9, [rbp+0B70h+var_BD0]
 * 0000000140360A63: lea     r8, [rbp+0B70h+var_A38]
 * 0000000140360A6A: mov     [rsp+0C70h+BugCheckParameter4], rax
 * 0000000140360A6F: mov     edx, r14d
 * 0000000140360A72: mov     rax, [rsp+0C70h+var_C20]
 * 0000000140360A77: mov     rcx, rsi
 * 0000000140360A7A: call    KeGuardDispatchICall
 * 0000000140360A7F: jmp     short loc_140360ABB
 * 0000000140360A81: xor     edx, edx
 * 0000000140360A83: test    r12, r12
 * 0000000140360A86: jnz     short loc_140360A9C
 * 0000000140360A88: mov     rax, [rbp+0B70h+var_BD0]
 * 0000000140360A8C: lea     r8, [rbp+0B70h+var_A38]
 * 0000000140360A93: xor     ecx, ecx
 * 0000000140360A95: call    KeGuardDispatchICall
 * 0000000140360A9A: jmp     short loc_140360ABB
 * 0000000140360A9C: lea     rax, [rbp+0B70h+var_A38]
 * 0000000140360AA3: xor     r9d, r9d
 * 0000000140360AA6: mov     [rsp+0C70h+BugCheckParameter4], rax
 * 0000000140360AAB: xor     r8d, r8d
 * 0000000140360AAE: mov     rax, [rsp+0C70h+var_C08]
 * 0000000140360AB3: mov     rcx, r12
 * 0000000140360AB6: call    KeGuardDispatchICall
 * 0000000140360ABB: test    r13d, r13d
 * 0000000140360ABE: jz      loc_140360BEB
 * 0000000140360AC4: mov     r9, rbx
 * 0000000140360AC7: lea     rax, [rsi+0A98h]
 * 0000000140360ACE: xor     r9, rsi
 * 0000000140360AD1: mov     ecx, 154h
 * 0000000140360AD6: mov     r10d, 1
 * 0000000140360ADC: xor     [rax], rbx
 * 0000000140360ADF: lea     rax, [rax-8]
 * 0000000140360AE3: ror     rbx, cl
 * 0000000140360AE6: sub     ecx, r10d
 * 0000000140360AE9: jnz     short loc_140360ADC
 * 0000000140360AEB: mov     r12d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140360AF2: mov     r11d, r12d
 * 0000000140360AF5: lea     r8, [r12-0AA0h]
 * 0000000140360AFD: shr     r8, 3
 * 0000000140360B01: test    r8d, r8d
 * 0000000140360B04: jz      short loc_140360B3B
 * 0000000140360B06: movsxd  r10, r8d
 * 0000000140360B09: lea     r11d, [rcx+1]
 * 0000000140360B0D: add     r10, 153h
 * 0000000140360B14: lea     r10, [rsi+r10*8]
 * 0000000140360B18: mov     rdx, [r10]
 * 0000000140360B1B: lea     rax, [r9+r9]
 * 0000000140360B1F: mov     ecx, r8d
 * 0000000140360B22: lea     r10, [r10-8]
 * 0000000140360B26: ror     rdx, cl
 * 0000000140360B29: mov     r9, rdx
 * 0000000140360B2C: xor     r9, rax
 * 0000000140360B2F: sub     r8d, r11d
 * 0000000140360B32: jnz     short loc_140360B18
 * 0000000140360B34: mov     r11, r12
 * 0000000140360B37: lea     r10d, [r8+1]
 * 0000000140360B3B: sub     r14d, r12d
 * 0000000140360B3E: lea     rcx, [rsi+r11]
 * 0000000140360B42: shr     r14d, 3
 * 0000000140360B46: test    r14d, r14d
 * 0000000140360B49: jz      short loc_140360B67
 * 0000000140360B4B: mov     edx, r14d
 * 0000000140360B4E: dec     rdx
 * 0000000140360B51: lea     rdx, [rcx+rdx*8]
 * 0000000140360B55: xor     [rdx], rbx
 * 0000000140360B58: mov     ecx, r14d
 * 0000000140360B5B: ror     rbx, cl
 * 0000000140360B5E: lea     rdx, [rdx-8]
 * 0000000140360B62: sub     r14d, r10d
 * 0000000140360B65: jnz     short loc_140360B55
 * 0000000140360B67: cmp     r9, r15
 * 0000000140360B6A: jz      short loc_140360BEB
 * 0000000140360B6C: mov     rax, [rsi+590h]
 * 0000000140360B73: mov     ecx, [rsi+7E4h]
 * 0000000140360B79: mov     [rax], rsi
 * 0000000140360B7C: mov     [rax+10h], ecx
 * 0000000140360B7F: mov     eax, [rsi+8F8h]
 * 0000000140360B85: test    eax, eax
 * 0000000140360B87: jnz     short loc_140360BA0
 * 0000000140360B89: mov     rax, [rsi+590h]
 * 0000000140360B90: mov     rcx, r9
 * 0000000140360B93: xor     rcx, r15
 * 0000000140360B96: mov     [rax+18h], rcx
 * 0000000140360B9A: mov     eax, [rsi+8F8h]
 * 0000000140360BA0: xor     r15d, r15d
 * 0000000140360BA3: lea     r13d, [r15+1]
 * 0000000140360BA7: test    eax, eax
 * 0000000140360BA9: jnz     short loc_140360BF4
 * 0000000140360BAB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140360BB5: xor     edx, edx
 * 0000000140360BB7: add     rax, rsi
 * 0000000140360BBA: mov     rcx, rsi
 * 0000000140360BBD: mov     [rsi+900h], rax
 * 0000000140360BC4: mov     [rsi+908h], r15
 * 0000000140360BCB: mov     qword ptr [rsi+910h], 10Eh
 * 0000000140360BD6: mov     [rsi+918h], r9
 * 0000000140360BDD: mov     [rsi+8F8h], r13d
 * 0000000140360BE4: call    sub_14036B3BC
 * 0000000140360BE9: jmp     short loc_140360BF4
 * 0000000140360BEB: xor     r15d, r15d
 * 0000000140360BEE: mov     r13d, 1
 * 0000000140360BF4: mov     eax, [rsi+958h]
 * 0000000140360BFA: cmp     eax, 0Bh
 * 0000000140360BFD: jz      loc_1403655C0
 * 0000000140360C03: cmp     eax, r13d
 * 0000000140360C06: jz      loc_1403655C0
 * 0000000140360C0C: cmp     [rsi+8F8h], r15d
 * 0000000140360C13: jnz     loc_1403655C5
 * 0000000140360C19: mov     rax, [rsi+960h]
 * 0000000140360C20: mov     rcx, [rax]
 * 0000000140360C23: cmp     rcx, [rsi+968h]
 * 0000000140360C2A: jz      loc_14036537E
 * 0000000140360C30: mov     ecx, [rsi+970h]
 * 0000000140360C36: mov     r12d, 0FFFFFFFFh
 * 0000000140360C3C: mov     rbx, rsi
 * 0000000140360C3F: mov     [rbp+0B70h+var_BF0], rbx
 * 0000000140360C43: cmp     ecx, r12d
 * 0000000140360C46: jz      short loc_140360C59
 * 0000000140360C48: mov     rax, [rsi+278h]
 * 0000000140360C4F: call    KeGuardDispatchICall
 * 0000000140360C54: mov     r14, rax
 * 0000000140360C57: jmp     short loc_140360C5C
 * 0000000140360C59: mov     r14, r15
 * 0000000140360C5C: test    r14, r14
 * 0000000140360C5F: jnz     short loc_140360C7B
 * 0000000140360C61: mov     rax, [rsi+280h]
 * 0000000140360C68: xor     ecx, ecx
 * 0000000140360C6A: call    KeGuardDispatchICall
 * 0000000140360C6F: mov     r14, rax
 * 0000000140360C72: test    rax, rax
 * 0000000140360C75: jz      loc_1403655C0
 * 0000000140360C7B: mov     rax, [rsi+290h]
 * 0000000140360C82: lea     rdx, [rbp+0B70h+var_620]
 * 0000000140360C89: mov     rcx, r14
 * 0000000140360C8C: call    KeGuardDispatchICall
 * 0000000140360C91: xor     r12d, r12d
 * 0000000140360C94: mov     r15d, eax
 * 0000000140360C97: test    eax, eax
 * 0000000140360C99: jns     short loc_140360CAC
 * 0000000140360C9B: mov     rax, [rsi+288h]
 * 0000000140360CA2: mov     rcx, r14
 * 0000000140360CA5: call    KeGuardDispatchICall
 * 0000000140360CAA: jmp     short loc_140360D0E
 * 0000000140360CAC: mov     [rsi+980h], r14
 * 0000000140360CB3: mov     rax, [rsi+2B8h]
 * 0000000140360CBA: call    KeGuardDispatchICall
 * 0000000140360CBF: mov     r14, rax
 * 0000000140360CC2: mov     rax, [rsi+2D8h]
 * 0000000140360CC9: mov     rcx, r14
 * 0000000140360CCC: call    KeGuardDispatchICall
 * 0000000140360CD1: mov     rdx, rax
 * 0000000140360CD4: test    rax, rax
 * 0000000140360CD7: jnz     short loc_140360CDE
 * 0000000140360CD9: lea     ecx, [rax+4]
 * 0000000140360CDC: jmp     short loc_140360CF0
 * 0000000140360CDE: mov     rax, [rsi+2E8h]
 * 0000000140360CE5: mov     rcx, r14
 * 0000000140360CE8: call    KeGuardDispatchICall
 * 0000000140360CED: mov     ecx, r12d
 * 0000000140360CF0: mov     eax, [rsi+994h]
 * 0000000140360CF6: mov     r15d, r12d
 * 0000000140360CF9: and     eax, 0FFFFFFFBh
 * 0000000140360CFC: or      eax, ecx
 * 0000000140360CFE: mov     [rsi+994h], eax
 * 0000000140360D04: add     dword ptr [rsi+828h], 10000h
 * 0000000140360D0E: test    r15d, r15d
 * 0000000140360D11: js      loc_1403655BD
 * 0000000140360D17: mov     rax, [rsi+2A0h]
 * 0000000140360D1E: mov     rcx, [rsi+980h]
 * 0000000140360D25: call    KeGuardDispatchICall
 * 0000000140360D2A: xor     r15d, r15d
 * 0000000140360D2D: test    eax, eax
 * 0000000140360D2F: jnz     loc_140364EC9
 * 0000000140360D35: mov     rax, [rsi+578h]
 * 0000000140360D3C: lea     ecx, [r15+20h]
 * 0000000140360D40: mov     rdx, [rsi+968h]
 * 0000000140360D47: lea     rbx, [rbp+0B70h+var_820]
 * 0000000140360D4E: add     rax, rcx
 * 0000000140360D51: mov     [rbp+0B70h+var_BC0], rdx
 * 0000000140360D55: mov     [rbp+0B70h+var_820], rax
 * 0000000140360D5C: mov     r14d, r15d
 * 0000000140360D5F: mov     rax, [rsi+570h]
 * 0000000140360D66: add     rax, rcx
 * 0000000140360D69: mov     [rbp+0B70h+var_BD0], rbx
 * 0000000140360D6D: mov     [rbp+0B70h+var_818], rax
 * 0000000140360D74: mov     rax, [rsi+960h]
 * 0000000140360D7B: mov     [rbp+0B70h+arg_8], rax
 * 0000000140360D82: mov     rsi, rax
 * 0000000140360D85: mov     [rsp+0C70h+var_C08], 2
 * 0000000140360D8E: mov     r12, [rbx]
 * 0000000140360D91: xor     r14, rsi
 * 0000000140360D94: mov     r9d, r14d
 * 0000000140360D97: mov     [rsp+0C70h+var_BF8], r12
 * 0000000140360D9C: and     r9d, 3Fh
 * 0000000140360DA0: mov     [rsp+0C70h+var_C20], r14
 * 0000000140360DA5: mov     rdi, [r12]
 * 0000000140360DA9: mov     r15d, [r12+10h]
 * 0000000140360DAE: mov     r10, rdi
 * 0000000140360DB1: mov     r11d, r15d
 * 0000000140360DB4: mov     [rbp+0B70h+var_BA0], rdi
 * 0000000140360DB8: shl     r11d, 2
 * 0000000140360DBC: mov     rax, rdi
 * 0000000140360DBF: mov     ecx, r11d
 * 0000000140360DC2: add     rcx, rdi
 * 0000000140360DC5: cmp     rdi, rcx
 * 0000000140360DC8: jnb     short loc_140360DDB
 * 0000000140360DCA: mov     r8d, 40h ; '@'
 * 0000000140360DD0: prefetchnta byte ptr [rax]
 * 0000000140360DD3: add     rax, r8
 * 0000000140360DD6: cmp     rax, rcx
 * 0000000140360DD9: jb      short loc_140360DD0
 * 0000000140360DDB: mov     r8, r14
 * 0000000140360DDE: mov     r14d, r11d
 * 0000000140360DE1: shr     r14d, 7
 * 0000000140360DE5: test    r14d, r14d
 * 0000000140360DE8: jz      short loc_140360E69
 * 0000000140360DEA: mov     r13, [rsp+0C70h+var_C20]
 * 0000000140360DEF: mov     esi, 1
 * 0000000140360DF4: mov     rbx, 7010008004002001h
 * 0000000140360DFE: mov     r12d, 0FFFFFFFFh
 * 0000000140360E04: mov     eax, 8
 * 0000000140360E09: xor     r8, [r10]
 * 0000000140360E0C: mov     ecx, r9d
 * 0000000140360E0F: rol     r8, cl
 * 0000000140360E12: xor     r8, [r10+8]
 * 0000000140360E16: add     r10, 10h
 * 0000000140360E1A: rol     r8, cl
 * 0000000140360E1D: sub     rax, rsi
 * 0000000140360E20: jnz     short loc_140360E09
 * 0000000140360E22: mov     rcx, r10
 * 0000000140360E25: sub     rcx, rdi
 * 0000000140360E28: xor     rcx, r13
 * 0000000140360E2B: mov     rax, rcx
 * 0000000140360E2E: rol     rax, 11h
 * 0000000140360E32: xor     rcx, rax
 * 0000000140360E35: mov     rax, rbx
 * 0000000140360E38: mul     rcx
 * 0000000140360E3B: xor     r9d, eax
 * 0000000140360E3E: mov     [rbp+0B70h+var_4E0], rdx
 * 0000000140360E45: xor     r9d, edx
 * 0000000140360E48: and     r9d, 3Fh
 * 0000000140360E4C: cmovz   r9d, esi
 * 0000000140360E50: add     r14d, r12d
 * 0000000140360E53: jnz     short loc_140360E04
 * 0000000140360E55: mov     r12, [rsp+0C70h+var_BF8]
 * 0000000140360E5A: mov     rbx, [rbp+0B70h+var_BD0]
 * 0000000140360E5E: mov     rsi, [rbp+0B70h+arg_8]
 * 0000000140360E65: mov     rdx, [rbp+0B70h+var_BC0]
 * 0000000140360E69: and     r11d, 7Fh
 * 0000000140360E6D: mov     r14d, 1
 * 0000000140360E73: cmp     r11d, 8
 * 0000000140360E77: jb      short loc_140360E96
 * 0000000140360E79: mov     eax, r11d
 * 0000000140360E7C: shr     rax, 3
 * 0000000140360E80: xor     r8, [r10]
 * 0000000140360E83: mov     ecx, r9d
 * 0000000140360E86: rol     r8, cl
 * 0000000140360E89: add     r10, 8
 * 0000000140360E8D: add     r11d, 0FFFFFFF8h
 * 0000000140360E91: sub     rax, r14
 * 0000000140360E94: jnz     short loc_140360E80
 * 0000000140360E96: test    r11d, r11d
 * 0000000140360E99: jz      short loc_140360EBC
 * 0000000140360E9B: mov     esi, 0FFFFFFFFh
 * 0000000140360EA0: movzx   eax, byte ptr [r10]
 * 0000000140360EA4: mov     ecx, r9d
 * 0000000140360EA7: xor     r8, rax
 * 0000000140360EAA: add     r10, r14
 * 0000000140360EAD: rol     r8, cl
 * 0000000140360EB0: add     r11d, esi
 * 0000000140360EB3: jnz     short loc_140360EA0
 * 0000000140360EB5: mov     rsi, [rbp+0B70h+arg_8]
 * 0000000140360EBC: mov     r12, [r12+18h]
 * 0000000140360EC1: xor     r8, rdx
 * 0000000140360EC4: mov     r11d, r8d
 * 0000000140360EC7: mov     r10, r12
 * 0000000140360ECA: and     r11d, 3Fh
 * 0000000140360ECE: mov     rax, r12
 * 0000000140360ED1: mov     r13, r15
 * 0000000140360ED4: lea     rcx, [r12+r15]
 * 0000000140360ED8: cmp     r12, rcx
 * 0000000140360EDB: jnb     short loc_140360EED
 * 0000000140360EDD: mov     edx, 40h ; '@'
 * 0000000140360EE2: prefetchnta byte ptr [rax]
 * 0000000140360EE5: add     rax, rdx
 * 0000000140360EE8: cmp     rax, rcx
 * 0000000140360EEB: jb      short loc_140360EE2
 * 0000000140360EED: mov     r14d, r15d
 * 0000000140360EF0: mov     r9, r8
 * 0000000140360EF3: shr     r14d, 7
 * 0000000140360EF7: test    r14d, r14d
 * 0000000140360EFA: jz      short loc_140360F73
 * 0000000140360EFC: mov     rdi, 7010008004002001h
 * 0000000140360F06: mov     edx, 8
 * 0000000140360F0B: lea     esi, [rdx-7]
 * 0000000140360F0E: mov     rax, [r10]
 * 0000000140360F11: mov     ecx, r11d
 * 0000000140360F14: xor     rax, r9
 * 0000000140360F17: mov     r9, [r10+8]
 * 0000000140360F1B: rol     rax, cl
 * 0000000140360F1E: add     r10, 10h
 * 0000000140360F22: xor     r9, rax
 * 0000000140360F25: rol     r9, cl
 * 0000000140360F28: sub     rdx, rsi
 * 0000000140360F2B: jnz     short loc_140360F0E
 * 0000000140360F2D: mov     rcx, r10
 * 0000000140360F30: sub     rcx, r12
 * 0000000140360F33: xor     rcx, r8
 * 0000000140360F36: mov     rax, rcx
 * 0000000140360F39: rol     rax, 11h
 * 0000000140360F3D: xor     rcx, rax
 * 0000000140360F40: mov     rax, rdi
 * 0000000140360F43: mul     rcx
 * 0000000140360F46: xor     r11d, eax
 * 0000000140360F49: mov     [rbp+0B70h+var_4D8], rdx
 * 0000000140360F50: xor     r11d, edx
 * 0000000140360F53: mov     rax, rsi
 * 0000000140360F56: and     r11d, 3Fh
 * 0000000140360F5A: cmovz   r11d, eax
 * 0000000140360F5E: mov     eax, 0FFFFFFFFh
 * 0000000140360F63: add     r14d, eax
 * 0000000140360F66: jnz     short loc_140360F06
 * 0000000140360F68: mov     rdi, [rbp+0B70h+var_BA0]
 * 0000000140360F6C: mov     rsi, [rbp+0B70h+arg_8]
 * 0000000140360F73: and     r15d, 7Fh
 * 0000000140360F77: mov     r8d, 1
 * 0000000140360F7D: cmp     r15d, 8
 * 0000000140360F81: jb      short loc_140360FA0
 * 0000000140360F83: mov     edx, r15d
 * 0000000140360F86: shr     rdx, 3
 * 0000000140360F8A: xor     r9, [r10]
 * 0000000140360F8D: mov     ecx, r11d
 * 0000000140360F90: rol     r9, cl
 * 0000000140360F93: add     r10, 8
 * 0000000140360F97: add     r15d, 0FFFFFFF8h
 * 0000000140360F9B: sub     rdx, r8
 * 0000000140360F9E: jnz     short loc_140360F8A
 * 0000000140360FA0: test    r15d, r15d
 * 0000000140360FA3: jz      short loc_140360FC6
 * 0000000140360FA5: mov     esi, 0FFFFFFFFh
 * 0000000140360FAA: movzx   eax, byte ptr [r10]
 * 0000000140360FAE: mov     ecx, r11d
 * 0000000140360FB1: xor     r9, rax
 * 0000000140360FB4: add     r10, r8
 * 0000000140360FB7: rol     r9, cl
 * 0000000140360FBA: add     r15d, esi
 * 0000000140360FBD: jnz     short loc_140360FAA
 * 0000000140360FBF: mov     rsi, [rbp+0B70h+arg_8]
 * 0000000140360FC6: mov     rdx, [rbp+0B70h+var_BC0]
 * 0000000140360FCA: add     rbx, 8
 * 0000000140360FCE: mov     r14, rdi
 * 0000000140360FD1: mov     [rbp+0B70h+var_BD0], rbx
 * 0000000140360FD5: xor     r14, r13
 * 0000000140360FD8: mov     r13d, 1
 * 0000000140360FDE: xor     r14, r9
 * 0000000140360FE1: sub     [rsp+0C70h+var_C08], r13
 * 0000000140360FE6: mov     [rsp+0C70h+var_C20], r14
 * 0000000140360FEB: jnz     loc_140360D8E
 * 0000000140360FF1: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140360FF6: lea     r8, [rbp+0B70h+var_7E0]
 * 0000000140360FFD: lea     rdx, [rbp+0B70h+var_7A8]
 * 0000000140361004: mov     rcx, rdi
 * 0000000140361007: mov     rax, [rsi+200h]
 * 000000014036100E: call    KeGuardDispatchICall
 * 0000000140361013: mov     rbx, [rbp+0B70h+var_BF0]
 * 0000000140361017: xor     r15d, r15d
 * 000000014036101A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140361021: test    rax, rax
 * 0000000140361024: jz      loc_1403617CF
 * 000000014036102A: rdtsc
 * 000000014036102C: shl     rdx, 20h
 * 0000000140361030: mov     r8, 7010008004002001h
 * 000000014036103A: or      rax, rdx
 * 000000014036103D: mov     rcx, rax
 * 0000000140361040: ror     rax, 3
 * 0000000140361044: xor     rcx, rax
 * 0000000140361047: mov     rax, r8
 * 000000014036104A: mul     rcx
 * 000000014036104D: mov     rcx, rdx
 * 0000000140361050: mov     [rbp+0B70h+var_4D0], rdx
 * 0000000140361057: xor     rcx, rax
 * 000000014036105A: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140361064: mul     rcx
 * 0000000140361067: shr     rdx, 1
 * 000000014036106A: imul    rax, rdx, 0Bh
 * 000000014036106E: sub     rcx, rax
 * 0000000140361071: lea     eax, [r13+4]
 * 0000000140361075: cmp     ecx, eax
 * 0000000140361077: ja      loc_140361135
 * 000000014036107D: jz      loc_14036111B
 * 0000000140361083: test    ecx, ecx
 * 0000000140361085: jz      short loc_140361101
 * 0000000140361087: sub     ecx, r13d
 * 000000014036108A: jz      short loc_1403610E8
 * 000000014036108C: sub     ecx, r13d
 * 000000014036108F: jz      short loc_1403610CE
 * 0000000140361091: cmp     ecx, r13d
 * 0000000140361094: jz      short loc_1403610B0
 * 0000000140361096: mov     [rbp+0B70h+var_9DC], 67076494h
 * 00000001403610A0: mov     r9d, [rbp+0B70h+var_9DC]
 * 00000001403610A7: rol     r9d, 4
 * 00000001403610AB: jmp     loc_140361259
 * 00000001403610B0: mov     [rbp+0B70h+var_9D8], 0A8223938h
 * 00000001403610BA: mov     r9d, [rbp+0B70h+var_9D8]
 * 00000001403610C1: xor     r9d, 3
 * 00000001403610C5: ror     r9d, 0Fh
 * 00000001403610C9: jmp     loc_140361259
 * 00000001403610CE: mov     [rbp+0B70h+var_9D4], 85B5910Dh
 * 00000001403610D8: mov     r9d, [rbp+0B70h+var_9D4]
 * 00000001403610DF: ror     r9d, 2
 * 00000001403610E3: jmp     loc_140361259
 * 00000001403610E8: mov     [rbp+0B70h+var_9D0], 0B2AD31A1h
 * 00000001403610F2: mov     r9d, [rbp+0B70h+var_9D0]
 * 00000001403610F9: rol     r9d, 1
 * 00000001403610FC: jmp     loc_140361259
 * 0000000140361101: mov     [rbp+0B70h+var_9CC], 0D098D0D8h
 * 000000014036110B: mov     r9d, [rbp+0B70h+var_9CC]
 * 0000000140361112: ror     r9d, 6
 * 0000000140361116: jmp     loc_140361259
 * 000000014036111B: mov     [rbp+0B70h+var_9C8], 288C49EDh
 * 0000000140361125: mov     r9d, [rbp+0B70h+var_9C8]
 * 000000014036112C: ror     r9d, 5
 * 0000000140361130: jmp     loc_140361259
 * 0000000140361135: sub     ecx, 6
 * 0000000140361138: jz      loc_140361240
 * 000000014036113E: sub     ecx, r13d
 * 0000000140361141: jz      loc_140361229
 * 0000000140361147: sub     ecx, r13d
 * 000000014036114A: jz      loc_140361212
 * 0000000140361150: cmp     ecx, r13d
 * 0000000140361153: jz      loc_1403611F7
 * 0000000140361159: rdtsc
 * 000000014036115B: shl     rdx, 20h
 * 000000014036115F: mov     r10d, 4EC4EC4Fh
 * 0000000140361165: or      rax, rdx
 * 0000000140361168: mov     rcx, rax
 * 000000014036116B: ror     rax, 3
 * 000000014036116F: xor     rcx, rax
 * 0000000140361172: mov     rax, r8
 * 0000000140361175: mul     rcx
 * 0000000140361178: mov     r9, rdx
 * 000000014036117B: mov     [rbp+0B70h+var_4C8], rdx
 * 0000000140361182: xor     r9d, eax
 * 0000000140361185: mov     eax, r10d
 * 0000000140361188: mul     r9d
 * 000000014036118B: mov     ecx, r9d
 * 000000014036118E: shr     r9d, 5
 * 0000000140361192: shr     edx, 3
 * 0000000140361195: mov     r8d, r9d
 * 0000000140361198: imul    eax, edx, 1Ah
 * 000000014036119B: sub     ecx, eax
 * 000000014036119D: mov     eax, r10d
 * 00000001403611A0: mul     r9d
 * 00000001403611A3: add     ecx, 61h ; 'a'
 * 00000001403611A6: shr     r9d, 5
 * 00000001403611AA: shl     ecx, 8
 * 00000001403611AD: shr     edx, 3
 * 00000001403611B0: imul    eax, edx, 1Ah
 * 00000001403611B3: sub     r8d, eax
 * 00000001403611B6: mov     eax, r10d
 * 00000001403611B9: mul     r9d
 * 00000001403611BC: add     r8d, 41h ; 'A'
 * 00000001403611C0: or      r8d, ecx
 * 00000001403611C3: shr     edx, 3
 * 00000001403611C6: imul    eax, edx, 1Ah
 * 00000001403611C9: mov     ecx, r9d
 * 00000001403611CC: shr     r9d, 5
 * 00000001403611D0: shl     r8d, 8
 * 00000001403611D4: sub     ecx, eax
 * 00000001403611D6: mov     eax, r10d
 * 00000001403611D9: mul     r9d
 * 00000001403611DC: add     ecx, 61h ; 'a'
 * 00000001403611DF: shr     edx, 3
 * 00000001403611E2: or      ecx, r8d
 * 00000001403611E5: imul    eax, edx, 1Ah
 * 00000001403611E8: shl     ecx, 8
 * 00000001403611EB: sub     r9d, eax
 * 00000001403611EE: add     r9d, 41h ; 'A'
 * 00000001403611F2: or      r9d, ecx
 * 00000001403611F5: jmp     short loc_140361259
 * 00000001403611F7: mov     [rbp+0B70h+var_9C4], 0B0869E85h
 * 0000000140361201: mov     r9d, [rbp+0B70h+var_9C4]
 * 0000000140361208: xor     r9d, 9
 * 000000014036120C: ror     r9d, 21h
 * 0000000140361210: jmp     short loc_140361259
 * 0000000140361212: mov     [rbp+0B70h+var_9C0], 64664142h
 * 000000014036121C: mov     r9d, [rbp+0B70h+var_9C0]
 * 0000000140361223: ror     r9d, 8
 * 0000000140361227: jmp     short loc_140361259
 * 0000000140361229: mov     [rbp+0B70h+var_9BC], 82C6A6D8h
 * 0000000140361233: mov     r9d, [rbp+0B70h+var_9BC]
 * 000000014036123A: rol     r9d, 7
 * 000000014036123E: jmp     short loc_140361259
 * 0000000140361240: mov     [rbp+0B70h+var_9B8], 4E574672h
 * 000000014036124A: mov     r9d, [rbp+0B70h+var_9B8]
 * 0000000140361251: xor     r9d, 6
 * 0000000140361255: ror     r9d, 18h
 * 0000000140361259: mov     rax, [rsi+0F8h]
 * 0000000140361260: mov     r8d, r9d
 * 0000000140361263: mov     edx, 80h
 * 0000000140361268: mov     ecx, 200h
 * 000000014036126D: call    KeGuardDispatchICall
 * 0000000140361272: mov     [rsp+0C70h+var_C08], rax
 * 0000000140361277: mov     r12, rax
 * 000000014036127A: test    rax, rax
 * 000000014036127D: jz      loc_140364EC9
 * 0000000140361283: mov     ecx, 80h
 * 0000000140361288: lea     edx, [rcx-70h]
 * 000000014036128B: mov     [rax], r15
 * 000000014036128E: add     ecx, 0FFFFFFF8h
 * 0000000140361291: add     rax, 8
 * 0000000140361295: sub     rdx, r13
 * 0000000140361298: jnz     short loc_14036128B
 * 000000014036129A: test    ecx, ecx
 * 000000014036129C: jz      short loc_1403612AD
 * 000000014036129E: mov     edx, 0FFFFFFFFh
 * 00000001403612A3: mov     [rax], r15b
 * 00000001403612A6: add     rax, r13
 * 00000001403612A9: add     ecx, edx
 * 00000001403612AB: jnz     short loc_1403612A3
 * 00000001403612AD: mov     rax, [rbp+0B70h+var_7A8]
 * 00000001403612B4: mov     [rbp+0B70h+var_A90], rax
 * 00000001403612BB: mov     [r12], rax
 * 00000001403612BF: mov     rax, r15
 * 00000001403612C2: mov     [rbp+0B70h+var_BA0], rax
 * 00000001403612C6: mov     [rbp+0B70h+var_BD0], r14
 * 00000001403612CA: mov     dword ptr [rbp+0B70h+arg_8], r15d
 * 00000001403612D1: mov     rcx, [r12+rax*8]
 * 00000001403612D5: mov     [rbp+0B70h+var_A90], rcx
 * 00000001403612DC: test    rcx, rcx
 * 00000001403612DF: jz      loc_1403616EC
 * 00000001403612E5: mov     rax, [rsi+1F8h]
 * 00000001403612EC: mov     r13d, r14d
 * 00000001403612EF: and     r13d, 3Fh
 * 00000001403612F3: call    KeGuardDispatchICall
 * 00000001403612F8: mov     [rsp+0C70h+var_BF8], rax
 * 00000001403612FD: test    rax, rax
 * 0000000140361300: jz      loc_14036174F
 * 0000000140361306: movzx   r14d, word ptr [rax+14h]
 * 000000014036130B: mov     rbx, [rbp+0B70h+var_BD0]
 * 000000014036130F: add     r14, 18h
 * 0000000140361313: add     r14, rax
 * 0000000140361316: movzx   eax, word ptr [rax+6]
 * 000000014036131A: lea     rcx, [rax+rax*4]
 * 000000014036131E: lea     rax, [r14+rcx*8]
 * 0000000140361322: mov     [rbp+0B70h+var_BC0], rax
 * 0000000140361326: mov     rdi, rax
 * 0000000140361329: mov     eax, [r14+24h]
 * 000000014036132D: mov     r11d, r15d
 * 0000000140361330: bt      eax, 19h
 * 0000000140361334: jb      loc_1403614BF
 * 000000014036133A: mov     ecx, [r14]
 * 000000014036133D: cmp     ecx, 54494E49h
 * 0000000140361343: jnz     short loc_140361353
 * 0000000140361345: cmp     dword ptr [r14+4], 4742444Bh
 * 000000014036134D: jz      loc_1403614BF
 * 0000000140361353: cmp     ecx, 45474150h
 * 0000000140361359: jnz     short loc_14036138A
 * 000000014036135B: movzx   eax, word ptr [r14+4]
 * 0000000140361360: mov     edx, 7877h
 * 0000000140361365: cmp     ax, dx
 * 0000000140361368: jz      loc_1403614BF
 * 000000014036136E: mov     edx, 7277h
 * 0000000140361373: cmp     ax, dx
 * 0000000140361376: jz      loc_1403614BF
 * 000000014036137C: mov     edx, 7777h
 * 0000000140361381: cmp     ax, dx
 * 0000000140361384: jz      loc_1403614BF
 * 000000014036138A: cmp     ecx, 41525245h
 * 0000000140361390: jnz     short loc_1403613A2
 * 0000000140361392: mov     eax, 4154h
 * 0000000140361397: cmp     [r14+4], ax
 * 000000014036139C: jz      loc_1403614BF
 * 00000001403613A2: mov     rax, [rsi+938h]
 * 00000001403613A9: mov     r10d, 7
 * 00000001403613AF: mov     r8, [rsi+930h]
 * 00000001403613B6: mov     r9, r14
 * 00000001403613B9: mov     [rbp+0B70h+var_768], rax
 * 00000001403613C0: sub     r9, r8
 * 00000001403613C3: mov     rax, [rsi+940h]
 * 00000001403613CA: mov     [rbp+0B70h+var_760], rax
 * 00000001403613D1: lea     r12d, [r10-6]
 * 00000001403613D5: mov     rax, [rsi+948h]
 * 00000001403613DC: mov     [rbp+0B70h+var_758], rax
 * 00000001403613E3: mov     [rbp+0B70h+var_770], r8
 * 00000001403613EA: movzx   edx, byte ptr [r9+r8]
 * 00000001403613EF: movzx   eax, byte ptr [r8]
 * 00000001403613F3: add     r8, r12
 * 00000001403613F6: cmp     rdx, rax
 * 00000001403613F9: jnz     short loc_14036140A
 * 00000001403613FB: mov     eax, 0FFFFFFFFh
 * 0000000140361400: add     r10d, eax
 * 0000000140361403: jnz     short loc_1403613EA
 * 0000000140361405: jmp     loc_1403614C5
 * 000000014036140A: mov     r9, [rbp+0B70h+var_768]
 * 0000000140361411: mov     r8d, 8
 * 0000000140361417: mov     r10, r14
 * 000000014036141A: mov     rcx, [r10]
 * 000000014036141D: add     r10, 8
 * 0000000140361421: mov     rax, [r9]
 * 0000000140361424: add     r9, 8
 * 0000000140361428: cmp     rcx, rax
 * 000000014036142B: jnz     short loc_14036145F
 * 000000014036142D: add     r8d, 0FFFFFFF8h
 * 0000000140361431: cmp     r8d, 8
 * 0000000140361435: jnb     short loc_14036141A
 * 0000000140361437: test    r8d, r8d
 * 000000014036143A: jz      loc_1403614C5
 * 0000000140361440: movzx   edx, byte ptr [r10]
 * 0000000140361444: add     r10, r12
 * 0000000140361447: movzx   eax, byte ptr [r9]
 * 000000014036144B: add     r9, r12
 * 000000014036144E: cmp     rdx, rax
 * 0000000140361451: jnz     short loc_14036145F
 * 0000000140361453: mov     eax, 0FFFFFFFFh
 * 0000000140361458: add     r8d, eax
 * 000000014036145B: jnz     short loc_140361440
 * 000000014036145D: jmp     short loc_1403614C5
 * 000000014036145F: mov     r8, [rbp+0B70h+var_760]
 * 0000000140361466: mov     r9, r14
 * 0000000140361469: sub     r9, r8
 * 000000014036146C: mov     r10d, 4
 * 0000000140361472: movzx   edx, byte ptr [r9+r8]
 * 0000000140361477: movzx   eax, byte ptr [r8]
 * 000000014036147B: add     r8, r12
 * 000000014036147E: cmp     rdx, rax
 * 0000000140361481: jnz     short loc_14036148F
 * 0000000140361483: mov     eax, 0FFFFFFFFh
 * 0000000140361488: add     r10d, eax
 * 000000014036148B: jnz     short loc_140361472
 * 000000014036148D: jmp     short loc_1403614C5
 * 000000014036148F: mov     r8, [rbp+0B70h+var_758]
 * 0000000140361496: mov     r9, r14
 * 0000000140361499: sub     r9, r8
 * 000000014036149C: mov     r10d, 6
 * 00000001403614A2: movzx   edx, byte ptr [r9+r8]
 * 00000001403614A7: movzx   eax, byte ptr [r8]
 * 00000001403614AB: add     r8, r12
 * 00000001403614AE: cmp     rdx, rax
 * 00000001403614B1: jnz     short loc_1403614C8
 * 00000001403614B3: mov     eax, 0FFFFFFFFh
 * 00000001403614B8: add     r10d, eax
 * 00000001403614BB: jnz     short loc_1403614A2
 * 00000001403614BD: jmp     short loc_1403614C5
 * 00000001403614BF: mov     r12d, 1
 * 00000001403614C5: mov     r11d, r12d
 * 00000001403614C8: cmp     [r14+24h], r15d
 * 00000001403614CC: mov     eax, [r14+8]
 * 00000001403614D0: mov     r9d, [r14+10h]
 * 00000001403614D4: cmovl   r11d, r12d
 * 00000001403614D8: cmp     r9d, eax
 * 00000001403614DB: cmovbe  r9d, eax
 * 00000001403614DF: mov     eax, [r14+0Ch]
 * 00000001403614E3: test    r11d, r11d
 * 00000001403614E6: jnz     loc_1403615EB
 * 00000001403614EC: mov     r15d, eax
 * 00000001403614EF: mov     ecx, r9d
 * 00000001403614F2: add     r15, [rbp+0B70h+var_A90]
 * 00000001403614F9: mov     r11d, r13d
 * 00000001403614FC: add     rcx, r15
 * 00000001403614FF: mov     r10, r15
 * 0000000140361502: mov     rax, r15
 * 0000000140361505: cmp     r15, rcx
 * 0000000140361508: jnb     short loc_14036151A
 * 000000014036150A: mov     edx, 40h ; '@'
 * 000000014036150F: prefetchnta byte ptr [rax]
 * 0000000140361512: add     rax, rdx
 * 0000000140361515: cmp     rax, rcx
 * 0000000140361518: jb      short loc_14036150F
 * 000000014036151A: mov     r12d, r9d
 * 000000014036151D: mov     r8, rbx
 * 0000000140361520: shr     r12d, 7
 * 0000000140361524: test    r12d, r12d
 * 0000000140361527: jz      short loc_140361599
 * 0000000140361529: mov     edi, 1
 * 000000014036152E: mov     rsi, 7010008004002001h
 * 0000000140361538: mov     eax, 8
 * 000000014036153D: xor     r8, [r10]
 * 0000000140361540: mov     ecx, r11d
 * 0000000140361543: rol     r8, cl
 * 0000000140361546: xor     r8, [r10+8]
 * 000000014036154A: add     r10, 10h
 * 000000014036154E: rol     r8, cl
 * 0000000140361551: sub     rax, rdi
 * 0000000140361554: jnz     short loc_14036153D
 * 0000000140361556: mov     rcx, r10
 * 0000000140361559: sub     rcx, r15
 * 000000014036155C: xor     rcx, rbx
 * 000000014036155F: mov     rax, rcx
 * 0000000140361562: rol     rax, 11h
 * 0000000140361566: xor     rcx, rax
 * 0000000140361569: mov     rax, rsi
 * 000000014036156C: mul     rcx
 * 000000014036156F: xor     r11d, edx
 * 0000000140361572: mov     [rbp+0B70h+var_4C0], rdx
 * 0000000140361579: xor     r11d, eax
 * 000000014036157C: mov     edx, 0FFFFFFFFh
 * 0000000140361581: and     r11d, 3Fh
 * 0000000140361585: cmovz   r11d, edi
 * 0000000140361589: add     r12d, edx
 * 000000014036158C: jnz     short loc_140361538
 * 000000014036158E: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140361593: mov     rdi, [rbp+0B70h+var_BC0]
 * 0000000140361597: jmp     short loc_14036159E
 * 0000000140361599: mov     edx, 0FFFFFFFFh
 * 000000014036159E: and     r9d, 7Fh
 * 00000001403615A2: mov     r12d, 1
 * 00000001403615A8: cmp     r9d, 8
 * 00000001403615AC: jb      short loc_1403615CB
 * 00000001403615AE: mov     eax, r9d
 * 00000001403615B1: shr     rax, 3
 * 00000001403615B5: xor     r8, [r10]
 * 00000001403615B8: mov     ecx, r11d
 * 00000001403615BB: rol     r8, cl
 * 00000001403615BE: add     r10, 8
 * 00000001403615C2: add     r9d, 0FFFFFFF8h
 * 00000001403615C6: sub     rax, r12
 * 00000001403615C9: jnz     short loc_1403615B5
 * 00000001403615CB: xor     r15d, r15d
 * 00000001403615CE: test    r9d, r9d
 * 00000001403615D1: jz      short loc_1403615E8
 * 00000001403615D3: movzx   eax, byte ptr [r10]
 * 00000001403615D7: mov     ecx, r11d
 * 00000001403615DA: xor     r8, rax
 * 00000001403615DD: add     r10, r12
 * 00000001403615E0: rol     r8, cl
 * 00000001403615E3: add     r9d, edx
 * 00000001403615E6: jnz     short loc_1403615D3
 * 00000001403615E8: mov     rbx, r8
 * 00000001403615EB: add     r14, 28h ; '('
 * 00000001403615EF: cmp     r14, rdi
 * 00000001403615F2: jnz     loc_140361329
 * 00000001403615F8: mov     edx, dword ptr [rbp+0B70h+arg_8]
 * 00000001403615FE: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140361605: mov     [rbp+0B70h+var_BD0], rbx
 * 0000000140361609: test    edx, edx
 * 000000014036160B: jnz     loc_14036171B
 * 0000000140361611: mov     rax, [rsp+0C70h+var_BF8]
 * 0000000140361616: mov     r13, [rbp+0B70h+var_A90]
 * 000000014036161D: mov     ecx, [rax+94h]
 * 0000000140361623: cmp     ecx, 14h
 * 0000000140361626: jb      loc_14036171B
 * 000000014036162C: mov     eax, [rax+90h]
 * 0000000140361632: lea     r15, [rcx+r13]
 * 0000000140361636: add     r15, rax
 * 0000000140361639: lea     r14, [rax+r13]
 * 000000014036163D: cmp     r14, r15
 * 0000000140361640: jz      loc_140361718
 * 0000000140361646: xor     r9d, r9d
 * 0000000140361649: cmp     [r14+0Ch], r9d
 * 000000014036164D: jz      loc_140361712
 * 0000000140361653: mov     eax, [r14+10h]
 * 0000000140361657: test    eax, eax
 * 0000000140361659: jz      loc_140361712
 * 000000014036165F: mov     r12, [rax+r13]
 * 0000000140361663: test    r12, r12
 * 0000000140361666: jz      loc_1403616F4
 * 000000014036166C: mov     rax, [rsi+2A8h]
 * 0000000140361673: mov     rcx, r12
 * 0000000140361676: call    KeGuardDispatchICall
 * 000000014036167B: xor     r9d, r9d
 * 000000014036167E: test    eax, eax
 * 0000000140361680: jz      short loc_1403616F4
 * 0000000140361682: mov     rax, [rsi+200h]
 * 0000000140361689: lea     r8, [rbp+0B70h+var_7D0]
 * 0000000140361690: lea     rdx, [rbp+0B70h+var_A90]
 * 0000000140361697: mov     rcx, r12
 * 000000014036169A: call    KeGuardDispatchICall
 * 000000014036169F: xor     r9d, r9d
 * 00000001403616A2: lea     r10d, [r9+10h]
 * 00000001403616A6: test    rax, rax
 * 00000001403616A9: jz      short loc_1403616FA
 * 00000001403616AB: mov     r12, [rsp+0C70h+var_C08]
 * 00000001403616B0: mov     ecx, r9d
 * 00000001403616B3: mov     r8, [rbp+0B70h+var_A90]
 * 00000001403616BA: mov     rax, r12
 * 00000001403616BD: mov     rdx, [rax]
 * 00000001403616C0: cmp     rdx, r8
 * 00000001403616C3: jz      short loc_1403616DD
 * 00000001403616C5: test    rdx, rdx
 * 00000001403616C8: jz      short loc_1403616D7
 * 00000001403616CA: inc     ecx
 * 00000001403616CC: add     rax, 8
 * 00000001403616D0: cmp     ecx, r10d
 * 00000001403616D3: jb      short loc_1403616BD
 * 00000001403616D5: jmp     short loc_1403616DD
 * 00000001403616D7: mov     eax, ecx
 * 00000001403616D9: mov     [r12+rax*8], r8
 * 00000001403616DD: cmp     ecx, r10d
 * 00000001403616E0: jnz     short loc_1403616FA
 * 00000001403616E2: mov     r14, [rbp+0B70h+var_BD0]
 * 00000001403616E6: mov     r13d, 1
 * 00000001403616EC: xor     r15d, r15d
 * 00000001403616EF: jmp     loc_1403617A5
 * 00000001403616F4: mov     r10d, 10h
 * 00000001403616FA: add     r14, 14h
 * 00000001403616FE: cmp     r14, r15
 * 0000000140361701: jnz     loc_140361649
 * 0000000140361707: mov     edx, dword ptr [rbp+0B70h+arg_8]
 * 000000014036170D: xor     r15d, r15d
 * 0000000140361710: jmp     short loc_140361721
 * 0000000140361712: mov     edx, dword ptr [rbp+0B70h+arg_8]
 * 0000000140361718: xor     r15d, r15d
 * 000000014036171B: mov     r10d, 10h
 * 0000000140361721: mov     rax, [rbp+0B70h+var_BA0]
 * 0000000140361725: mov     r13d, 1
 * 000000014036172B: mov     r14, [rbp+0B70h+var_BD0]
 * 000000014036172F: add     edx, r13d
 * 0000000140361732: mov     r12, [rsp+0C70h+var_C08]
 * 0000000140361737: add     rax, r13
 * 000000014036173A: mov     dword ptr [rbp+0B70h+arg_8], edx
 * 0000000140361740: mov     [rbp+0B70h+var_BA0], rax
 * 0000000140361744: cmp     edx, r10d
 * 0000000140361747: jb      loc_1403612D1
 * 000000014036174D: jmp     short loc_1403616EC
 * 000000014036174F: mov     r13d, 1
 * 0000000140361755: cmp     [rsi+8F8h], r15d
 * 000000014036175C: jnz     short loc_1403617A0
 * 000000014036175E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140361768: xor     edx, edx
 * 000000014036176A: add     rax, rsi
 * 000000014036176D: mov     rcx, rsi
 * 0000000140361770: mov     [rsi+900h], rax
 * 0000000140361777: mov     [rsi+908h], r15
 * 000000014036177E: mov     qword ptr [rsi+910h], 102h
 * 0000000140361789: mov     qword ptr [rsi+918h], 0FFFFFFFFC000007Bh
 * 0000000140361794: mov     [rsi+8F8h], r13d
 * 000000014036179B: call    sub_14036B3BC
 * 00000001403617A0: mov     r14, [rsp+0C70h+var_C20]
 * 00000001403617A5: cmp     r14, [rsi+968h]
 * 00000001403617AC: jz      short loc_1403617B3
 * 00000001403617AE: test    r14, r14
 * 00000001403617B1: jnz     short loc_1403617C0
 * 00000001403617B3: mov     rax, 95EA5DE843D5D824h
 * 00000001403617BD: xor     r14, rax
 * 00000001403617C0: mov     rax, [rsi+100h]
 * 00000001403617C7: mov     rcx, r12
 * 00000001403617CA: call    KeGuardDispatchICall
 * 00000001403617CF: mov     rax, [rsi+960h]
 * 00000001403617D6: mov     rcx, [rax]
 * 00000001403617D9: cmp     r14, rcx
 * 00000001403617DC: jz      short loc_14036185A
 * 00000001403617DE: mov     eax, [rsi+994h]
 * 00000001403617E4: mov     ecx, 40h ; '@'
 * 00000001403617E9: test    cl, al
 * 00000001403617EB: jnz     short loc_14036185A
 * 00000001403617ED: mov     rax, [rsi+960h]
 * 00000001403617F4: mov     rdx, [rax]
 * 00000001403617F7: mov     eax, [rsi+8F8h]
 * 00000001403617FD: test    eax, eax
 * 00000001403617FF: jnz     short loc_14036185A
 * 0000000140361801: mov     rax, [rsi+590h]
 * 0000000140361808: mov     rcx, r14
 * 000000014036180B: xor     rcx, rdx
 * 000000014036180E: mov     [rax+18h], rcx
 * 0000000140361812: mov     eax, [rsi+8F8h]
 * 0000000140361818: test    eax, eax
 * 000000014036181A: jnz     short loc_14036185A
 * 000000014036181C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140361826: xor     edx, edx
 * 0000000140361828: add     rax, rsi
 * 000000014036182B: mov     rcx, rsi
 * 000000014036182E: mov     [rsi+900h], rax
 * 0000000140361835: mov     [rsi+908h], r15
 * 000000014036183C: mov     qword ptr [rsi+910h], 102h
 * 0000000140361847: mov     [rsi+918h], r14
 * 000000014036184E: mov     [rsi+8F8h], r13d
 * 0000000140361855: call    sub_14036B3BC
 * 000000014036185A: mov     r10d, r15d
 * 000000014036185D: mov     r12d, 2
 * 0000000140361863: lea     r15, [rbp+0B70h+var_818]
 * 000000014036186A: xor     ebx, ebx
 * 000000014036186C: mov     r14d, 0FFFFFFFFh
 * 0000000140361872: mov     rax, [r15]
 * 0000000140361875: mov     r9d, ebx
 * 0000000140361878: mov     r11, [rax]
 * 000000014036187B: lea     r8d, [r10+rax]
 * 000000014036187F: mov     r13d, [rax+10h]
 * 0000000140361883: add     r8d, r11d
 * 0000000140361886: test    r13d, r13d
 * 0000000140361889: jz      short loc_1403618B7
 * 000000014036188B: mov     r14, r11
 * 000000014036188E: movsxd  rdx, dword ptr [r14]
 * 0000000140361891: inc     r9d
 * 0000000140361894: mov     rax, rdx
 * 0000000140361897: lea     r14, [r14+4]
 * 000000014036189B: sar     rax, 4
 * 000000014036189F: mov     ecx, [rax+r11]
 * 00000001403618A3: add     ecx, edx
 * 00000001403618A5: xor     r8d, ecx
 * 00000001403618A8: imul    r8d, r9d
 * 00000001403618AC: cmp     r9d, r13d
 * 00000001403618AF: jb      short loc_14036188E
 * 00000001403618B1: mov     r14d, 0FFFFFFFFh
 * 00000001403618B7: lea     r10d, [r10+r8*2]
 * 00000001403618BB: sub     r15, 8
 * 00000001403618BF: add     r8d, r8d
 * 00000001403618C2: add     r12d, r14d
 * 00000001403618C5: jnz     short loc_140361872
 * 00000001403618C7: mov     rax, [rsi+598h]
 * 00000001403618CE: mov     rbx, [rbp+0B70h+var_BF0]
 * 00000001403618D2: mov     r9d, [rax]
 * 00000001403618D5: cmp     r10d, r9d
 * 00000001403618D8: jz      short loc_140361955
 * 00000001403618DA: xor     r15d, r15d
 * 00000001403618DD: test    dword ptr [rsi+990h], 20000h
 * 00000001403618E7: jz      short loc_140361958
 * 00000001403618E9: mov     eax, [rsi+8F8h]
 * 00000001403618EF: test    eax, eax
 * 00000001403618F1: jnz     short loc_14036190A
 * 00000001403618F3: mov     rdx, [rsi+590h]
 * 00000001403618FA: mov     ecx, r8d
 * 00000001403618FD: xor     rcx, r9
 * 0000000140361900: mov     [rdx+18h], rcx
 * 0000000140361904: mov     eax, [rsi+8F8h]
 * 000000014036190A: mov     ecx, r8d
 * 000000014036190D: test    eax, eax
 * 000000014036190F: jnz     short loc_140361958
 * 0000000140361911: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014036191B: xor     edx, edx
 * 000000014036191D: add     rax, rsi
 * 0000000140361920: mov     [rsi+900h], rax
 * 0000000140361927: mov     eax, 1
 * 000000014036192C: mov     [rsi+908h], r15
 * 0000000140361933: mov     qword ptr [rsi+910h], 107h
 * 000000014036193E: mov     [rsi+918h], rcx
 * 0000000140361945: mov     rcx, rsi
 * 0000000140361948: mov     [rsi+8F8h], eax
 * 000000014036194E: call    sub_14036B3BC
 * 0000000140361953: jmp     short loc_140361958
 * 0000000140361955: xor     r15d, r15d
 * 0000000140361958: mov     eax, [rsi+958h]
 * 000000014036195E: cmp     eax, 7
 * 0000000140361961: jl      loc_140361B4A
 * 0000000140361967: jz      loc_140362D4B
 * 000000014036196D: cmp     eax, 8
 * 0000000140361970: jz      loc_140364D78
 * 0000000140361976: cmp     eax, 9
 * 0000000140361979: jnz     loc_1403652FE
 * 000000014036197F: xor     r10d, r10d
 * 0000000140361982: mov     r15, [rbx+600h]
 * 0000000140361989: test    r15, r15
 * 000000014036198C: jz      loc_1403652FB
 * 0000000140361992: mov     r15, [r15]
 * 0000000140361995: test    r15, r15
 * 0000000140361998: jz      loc_1403652FB
 * 000000014036199E: lock or [rsp+0C70h+var_C70], r10d
 * 00000001403619A3: mov     r12d, [r15+7E4h]
 * 00000001403619AA: mov     r9, r15
 * 00000001403619AD: mov     r10d, [r15+814h]
 * 00000001403619B4: mov     rax, r15
 * 00000001403619B7: mov     r14, [r15+818h]
 * 00000001403619BE: mov     dword ptr [rbp+0B70h+arg_8], r12d
 * 00000001403619C5: lea     rcx, [r15+r12]
 * 00000001403619C9: cmp     r15, rcx
 * 00000001403619CC: jnb     short loc_1403619DE
 * 00000001403619CE: mov     edx, 40h ; '@'
 * 00000001403619D3: prefetchnta byte ptr [rax]
 * 00000001403619D6: add     rax, rdx
 * 00000001403619D9: cmp     rax, rcx
 * 00000001403619DC: jb      short loc_1403619D3
 * 00000001403619DE: mov     r11d, r12d
 * 00000001403619E1: mov     r8, r14
 * 00000001403619E4: shr     r11d, 7
 * 00000001403619E8: mov     r13d, 1
 * 00000001403619EE: test    r11d, r11d
 * 00000001403619F1: jz      short loc_140361A67
 * 00000001403619F3: mov     rsi, 7010008004002001h
 * 00000001403619FD: mov     r12d, 0FFFFFFFFh
 * 0000000140361A03: mov     eax, 8
 * 0000000140361A08: xor     r8, [r9]
 * 0000000140361A0B: mov     ecx, r10d
 * 0000000140361A0E: rol     r8, cl
 * 0000000140361A11: xor     r8, [r9+8]
 * 0000000140361A15: add     r9, 10h
 * 0000000140361A19: rol     r8, cl
 * 0000000140361A1C: sub     rax, r13
 * 0000000140361A1F: jnz     short loc_140361A08
 * 0000000140361A21: mov     rcx, r9
 * 0000000140361A24: sub     rcx, r15
 * 0000000140361A27: xor     rcx, r14
 * 0000000140361A2A: mov     rax, rcx
 * 0000000140361A2D: rol     rax, 11h
 * 0000000140361A31: xor     rcx, rax
 * 0000000140361A34: mov     rax, rsi
 * 0000000140361A37: mul     rcx
 * 0000000140361A3A: xor     r10d, edx
 * 0000000140361A3D: mov     [rbp+0B70h+var_450], rdx
 * 0000000140361A44: xor     r10d, eax
 * 0000000140361A47: and     r10d, 3Fh
 * 0000000140361A4B: cmovz   r10d, r13d
 * 0000000140361A4F: add     r11d, r12d
 * 0000000140361A52: jnz     short loc_140361A03
 * 0000000140361A54: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140361A59: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140361A60: mov     r12d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140361A67: mov     edx, r12d
 * 0000000140361A6A: and     edx, 7Fh
 * 0000000140361A6D: cmp     edx, 8
 * 0000000140361A70: jb      short loc_140361A8D
 * 0000000140361A72: mov     eax, edx
 * 0000000140361A74: shr     rax, 3
 * 0000000140361A78: xor     r8, [r9]
 * 0000000140361A7B: mov     ecx, r10d
 * 0000000140361A7E: rol     r8, cl
 * 0000000140361A81: add     r9, 8
 * 0000000140361A85: add     edx, 0FFFFFFF8h
 * 0000000140361A88: sub     rax, r13
 * 0000000140361A8B: jnz     short loc_140361A78
 * 0000000140361A8D: xor     r11d, r11d
 * 0000000140361A90: test    edx, edx
 * 0000000140361A92: jz      short loc_140361AB2
 * 0000000140361A94: mov     r11d, 0FFFFFFFFh
 * 0000000140361A9A: movzx   eax, byte ptr [r9]
 * 0000000140361A9E: mov     ecx, r10d
 * 0000000140361AA1: xor     r8, rax
 * 0000000140361AA4: add     r9, r13
 * 0000000140361AA7: rol     r8, cl
 * 0000000140361AAA: add     edx, r11d
 * 0000000140361AAD: jnz     short loc_140361A9A
 * 0000000140361AAF: xor     r11d, r11d
 * 0000000140361AB2: mov     rax, [rbx+608h]
 * 0000000140361AB9: cmp     r8, [rax]
 * 0000000140361ABC: jz      loc_14036503C
 * 0000000140361AC2: mov     rax, [rbx+590h]
 * 0000000140361AC9: mov     [rax], r15
 * 0000000140361ACC: xor     r15d, r15d
 * 0000000140361ACF: mov     [rax+10h], r12d
 * 0000000140361AD3: mov     rax, [rbx+608h]
 * 0000000140361ADA: mov     rcx, [rax]
 * 0000000140361ADD: mov     eax, [rbx+8F8h]
 * 0000000140361AE3: test    eax, eax
 * 0000000140361AE5: jnz     loc_140364EC9
 * 0000000140361AEB: mov     rax, [rbx+590h]
 * 0000000140361AF2: xor     rcx, r8
 * 0000000140361AF5: mov     [rax+18h], rcx
 * 0000000140361AF9: mov     eax, [rbx+8F8h]
 * 0000000140361AFF: test    eax, eax
 * 0000000140361B01: jnz     loc_140364EC9
 * 0000000140361B07: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140361B11: add     rax, rbx
 * 0000000140361B14: mov     [rbx+900h], rax
 * 0000000140361B1B: mov     [rbx+908h], r15
 * 0000000140361B22: mov     qword ptr [rbx+910h], 111h
 * 0000000140361B2D: mov     [rbx+918h], r8
 * 0000000140361B34: xor     edx, edx
 * 0000000140361B36: mov     [rbx+8F8h], r13d
 * 0000000140361B3D: mov     rcx, rbx
 * 0000000140361B40: call    sub_14036B3BC
 * 0000000140361B45: jmp     loc_140364EC9
 * 0000000140361B4A: mov     rdx, [rsi+578h]
 * 0000000140361B51: mov     rcx, [rsi+570h]
 * 0000000140361B58: mov     [rbp+0B70h+arg_8], rdx
 * 0000000140361B5F: add     rdx, 20h ; ' '
 * 0000000140361B63: mov     [rsp+0C70h+var_C20], rdx
 * 0000000140361B68: mov     edx, 2
 * 0000000140361B6D: mov     [rbp+0B70h+var_BD0], rcx
 * 0000000140361B71: lea     r13, [rcx+20h]
 * 0000000140361B75: mov     [rsp+0C70h+var_BF8], r13
 * 0000000140361B7A: cmp     eax, edx
 * 0000000140361B7C: jge     loc_140361E21
 * 0000000140361B82: mov     r12, [r13+0]
 * 0000000140361B86: mov     r13d, [rsi+7E4h]
 * 0000000140361B8D: mov     r15d, [rcx+30h]
 * 0000000140361B91: mov     r8d, [rsi+924h]
 * 0000000140361B98: shl     r15d, 2
 * 0000000140361B9C: lea     eax, [r13+30h]
 * 0000000140361BA0: cmp     eax, [rsi+0A1Ch]
 * 0000000140361BA6: jbe     loc_140361C88
 * 0000000140361BAC: mov     edx, eax
 * 0000000140361BAE: mov     rcx, rsi
 * 0000000140361BB1: call    sub_14036AB20
 * 0000000140361BB6: xor     r9d, r9d
 * 0000000140361BB9: mov     r14, rax
 * 0000000140361BBC: test    rax, rax
 * 0000000140361BBF: jz      loc_140362E7E
 * 0000000140361BC5: mov     ecx, [rsi+990h]
 * 0000000140361BCB: test    cl, 4
 * 0000000140361BCE: jnz     loc_140361C7E
 * 0000000140361BD4: mov     eax, [rsi+7E4h]
 * 0000000140361BDA: lea     r10d, [r9+1]
 * 0000000140361BDE: mov     r8, [rsi+7C8h]
 * 0000000140361BE5: and     ecx, 20000000h
 * 0000000140361BEB: neg     ecx
 * 0000000140361BED: sbb     edx, edx
 * 0000000140361BEF: and     edx, [rsi+924h]
 * 0000000140361BF5: cmp     eax, 8
 * 0000000140361BF8: jb      short loc_140361C0F
 * 0000000140361BFA: mov     ecx, eax
 * 0000000140361BFC: shr     rcx, 3
 * 0000000140361C00: mov     [rsi], r9
 * 0000000140361C03: add     eax, 0FFFFFFF8h
 * 0000000140361C06: add     rsi, 8
 * 0000000140361C0A: sub     rcx, r10
 * 0000000140361C0D: jnz     short loc_140361C00
 * 0000000140361C0F: test    eax, eax
 * 0000000140361C11: jz      short loc_140361C22
 * 0000000140361C13: mov     ecx, 0FFFFFFFFh
 * 0000000140361C18: mov     [rsi], r9b
 * 0000000140361C1B: add     rsi, r10
 * 0000000140361C1E: add     eax, ecx
 * 0000000140361C20: jnz     short loc_140361C18
 * 0000000140361C22: mov     ebx, [r14+924h]
 * 0000000140361C29: mov     [r14+924h], edx
 * 0000000140361C30: cmp     edx, 3
 * 0000000140361C33: jz      short loc_140361C68
 * 0000000140361C35: test    dword ptr [r14+990h], 10000000h
 * 0000000140361C40: mov     ecx, r9d
 * 0000000140361C43: cmovz   ecx, edx
 * 0000000140361C46: test    ecx, ecx
 * 0000000140361C48: jz      short loc_140361C5F
 * 0000000140361C4A: mov     rax, [r14+228h]
 * 0000000140361C51: lea     rcx, [r8-8]
 * 0000000140361C55: mov     rdx, [rcx]
 * 0000000140361C58: call    KeGuardDispatchICall
 * 0000000140361C5D: jmp     short loc_140361C77
 * 0000000140361C5F: mov     rax, [r14+100h]
 * 0000000140361C66: jmp     short loc_140361C6F
 * 0000000140361C68: mov     rax, [r14+368h]
 * 0000000140361C6F: mov     rcx, r8
 * 0000000140361C72: call    KeGuardDispatchICall
 * 0000000140361C77: mov     [r14+924h], ebx
 * 0000000140361C7E: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140361C86: jmp     short loc_140361C91
 * 0000000140361C88: mov     r14, rsi
 * 0000000140361C8B: mov     [rsi+7E4h], eax
 * 0000000140361C91: lea     rbx, [r14+r13]
 * 0000000140361C95: mov     r8d, 1
 * 0000000140361C9B: add     [r14+80Ch], r8d
 * 0000000140361CA2: mov     rax, rbx
 * 0000000140361CA5: mov     [rbp+0B70h+var_4B8], rbx
 * 0000000140361CAC: xor     r13d, r13d
 * 0000000140361CAF: lea     ecx, [r8+2Fh]
 * 0000000140361CB3: lea     edx, [rcx-2Ah]
 * 0000000140361CB6: mov     [rax], r13
 * 0000000140361CB9: add     ecx, 0FFFFFFF8h
 * 0000000140361CBC: add     rax, 8
 * 0000000140361CC0: sub     rdx, r8
 * 0000000140361CC3: jnz     short loc_140361CB6
 * 0000000140361CC5: test    ecx, ecx
 * 0000000140361CC7: jz      short loc_140361CD8
 * 0000000140361CC9: mov     edx, 0FFFFFFFFh
 * 0000000140361CCE: mov     [rax], r13b
 * 0000000140361CD1: add     rax, r8
 * 0000000140361CD4: add     ecx, edx
 * 0000000140361CD6: jnz     short loc_140361CCE
 * 0000000140361CD8: mov     dword ptr [rbx], 0Bh
 * 0000000140361CDE: mov     r9, r12
 * 0000000140361CE1: mov     [rbx+8], r12
 * 0000000140361CE5: mov     rax, r12
 * 0000000140361CE8: mov     [rbx+10h], r15d
 * 0000000140361CEC: add     [r14+828h], r15d
 * 0000000140361CF3: mov     r10d, [r14+814h]
 * 0000000140361CFA: mov     rsi, [r14+818h]
 * 0000000140361D01: mov     ecx, r15d
 * 0000000140361D04: add     rcx, r12
 * 0000000140361D07: cmp     r12, rcx
 * 0000000140361D0A: jnb     short loc_140361D1C
 * 0000000140361D0C: mov     edx, 40h ; '@'
 * 0000000140361D11: prefetchnta byte ptr [rax]
 * 0000000140361D14: add     rax, rdx
 * 0000000140361D17: cmp     rax, rcx
 * 0000000140361D1A: jb      short loc_140361D11
 * 0000000140361D1C: mov     r11d, r15d
 * 0000000140361D1F: mov     r8, rsi
 * 0000000140361D22: shr     r11d, 7
 * 0000000140361D26: mov     r13d, 1
 * 0000000140361D2C: test    r11d, r11d
 * 0000000140361D2F: jz      short loc_140361D9E
 * 0000000140361D31: mov     rdi, 7010008004002001h
 * 0000000140361D3B: mov     edx, 8
 * 0000000140361D40: mov     rax, [r9]
 * 0000000140361D43: mov     ecx, r10d
 * 0000000140361D46: xor     rax, r8
 * 0000000140361D49: mov     r8, [r9+8]
 * 0000000140361D4D: rol     rax, cl
 * 0000000140361D50: add     r9, 10h
 * 0000000140361D54: xor     r8, rax
 * 0000000140361D57: rol     r8, cl
 * 0000000140361D5A: sub     rdx, r13
 * 0000000140361D5D: jnz     short loc_140361D40
 * 0000000140361D5F: mov     rcx, r9
 * 0000000140361D62: sub     rcx, r12
 * 0000000140361D65: xor     rcx, rsi
 * 0000000140361D68: mov     rax, rcx
 * 0000000140361D6B: rol     rax, 11h
 * 0000000140361D6F: xor     rcx, rax
 * 0000000140361D72: mov     rax, rdi
 * 0000000140361D75: mul     rcx
 * 0000000140361D78: xor     r10d, edx
 * 0000000140361D7B: mov     [rbp+0B70h+var_4B0], rdx
 * 0000000140361D82: xor     r10d, eax
 * 0000000140361D85: mov     eax, 0FFFFFFFFh
 * 0000000140361D8A: and     r10d, 3Fh
 * 0000000140361D8E: cmovz   r10d, r13d
 * 0000000140361D92: add     r11d, eax
 * 0000000140361D95: jnz     short loc_140361D3B
 * 0000000140361D97: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140361D9E: mov     edx, r15d
 * 0000000140361DA1: and     edx, 7Fh
 * 0000000140361DA4: cmp     edx, 8
 * 0000000140361DA7: jb      short loc_140361DC5
 * 0000000140361DA9: mov     r11d, edx
 * 0000000140361DAC: shr     r11, 3
 * 0000000140361DB0: xor     r8, [r9]
 * 0000000140361DB3: mov     ecx, r10d
 * 0000000140361DB6: rol     r8, cl
 * 0000000140361DB9: add     r9, 8
 * 0000000140361DBD: add     edx, 0FFFFFFF8h
 * 0000000140361DC0: sub     r11, r13
 * 0000000140361DC3: jnz     short loc_140361DB0
 * 0000000140361DC5: xor     r11d, r11d
 * 0000000140361DC8: test    edx, edx
 * 0000000140361DCA: jz      short loc_140361DEA
 * 0000000140361DCC: mov     r11d, 0FFFFFFFFh
 * 0000000140361DD2: movzx   eax, byte ptr [r9]
 * 0000000140361DD6: mov     ecx, r10d
 * 0000000140361DD9: xor     r8, rax
 * 0000000140361DDC: add     r9, r13
 * 0000000140361DDF: rol     r8, cl
 * 0000000140361DE2: add     edx, r11d
 * 0000000140361DE5: jnz     short loc_140361DD2
 * 0000000140361DE7: xor     r11d, r11d
 * 0000000140361DEA: mov     rax, r8
 * 0000000140361DED: jmp     short loc_140361DF2
 * 0000000140361DEF: xor     r8d, eax
 * 0000000140361DF2: shr     rax, 1Fh
 * 0000000140361DF6: test    rax, rax
 * 0000000140361DF9: jnz     short loc_140361DEF
 * 0000000140361DFB: mov     r13, [rsp+0C70h+var_BF8]
 * 0000000140361E00: btr     r8d, 1Fh
 * 0000000140361E05: mov     [rbx+14h], r8d
 * 0000000140361E09: mov     eax, 2
 * 0000000140361E0E: add     [r14+828h], r15d
 * 0000000140361E15: mov     rbx, r14
 * 0000000140361E18: mov     [r14+958h], eax
 * 0000000140361E1F: jmp     short loc_140361E24
 * 0000000140361E21: xor     r11d, r11d
 * 0000000140361E24: cmp     dword ptr [rbx+958h], 3
 * 0000000140361E2B: jge     loc_140362068
 * 0000000140361E31: mov     r14d, [rbx+7E4h]
 * 0000000140361E38: mov     r15d, 20h ; ' '
 * 0000000140361E3E: mov     r12d, [rbx+838h]
 * 0000000140361E45: cmp     r12d, 7
 * 0000000140361E49: mov     r8d, [rbx+924h]
 * 0000000140361E50: cmovnz  r15d, r11d
 * 0000000140361E54: lea     eax, [r14+30h]
 * 0000000140361E58: cmp     eax, [rbx+0A1Ch]
 * 0000000140361E5E: jbe     loc_140361F3E
 * 0000000140361E64: mov     edx, eax
 * 0000000140361E66: mov     rcx, rbx
 * 0000000140361E69: call    sub_14036AB20
 * 0000000140361E6E: xor     r11d, r11d
 * 0000000140361E71: mov     rsi, rax
 * 0000000140361E74: test    rax, rax
 * 0000000140361E77: jz      loc_140362E7E
 * 0000000140361E7D: mov     ecx, [rbx+990h]
 * 0000000140361E83: test    cl, 4
 * 0000000140361E86: jnz     loc_140361F35
 * 0000000140361E8C: mov     eax, [rbx+7E4h]
 * 0000000140361E92: lea     r9d, [r11+1]
 * 0000000140361E96: mov     r8, [rbx+7C8h]
 * 0000000140361E9D: and     ecx, 20000000h
 * 0000000140361EA3: neg     ecx
 * 0000000140361EA5: sbb     edx, edx
 * 0000000140361EA7: and     edx, [rbx+924h]
 * 0000000140361EAD: cmp     eax, 8
 * 0000000140361EB0: jb      short loc_140361EC7
 * 0000000140361EB2: mov     ecx, eax
 * 0000000140361EB4: shr     rcx, 3
 * 0000000140361EB8: mov     [rbx], r11
 * 0000000140361EBB: add     eax, 0FFFFFFF8h
 * 0000000140361EBE: add     rbx, 8
 * 0000000140361EC2: sub     rcx, r9
 * 0000000140361EC5: jnz     short loc_140361EB8
 * 0000000140361EC7: test    eax, eax
 * 0000000140361EC9: jz      short loc_140361EDA
 * 0000000140361ECB: mov     ecx, 0FFFFFFFFh
 * 0000000140361ED0: mov     [rbx], r11b
 * 0000000140361ED3: add     rbx, r9
 * 0000000140361ED6: add     eax, ecx
 * 0000000140361ED8: jnz     short loc_140361ED0
 * 0000000140361EDA: mov     ebx, [rsi+924h]
 * 0000000140361EE0: mov     [rsi+924h], edx
 * 0000000140361EE6: cmp     edx, 3
 * 0000000140361EE9: jz      short loc_140361F1D
 * 0000000140361EEB: test    dword ptr [rsi+990h], 10000000h
 * 0000000140361EF5: mov     ecx, r11d
 * 0000000140361EF8: cmovz   ecx, edx
 * 0000000140361EFB: test    ecx, ecx
 * 0000000140361EFD: jz      short loc_140361F14
 * 0000000140361EFF: mov     rax, [rsi+228h]
 * 0000000140361F06: lea     rcx, [r8-8]
 * 0000000140361F0A: mov     rdx, [rcx]
 * 0000000140361F0D: call    KeGuardDispatchICall
 * 0000000140361F12: jmp     short loc_140361F2C
 * 0000000140361F14: mov     rax, [rsi+100h]
 * 0000000140361F1B: jmp     short loc_140361F24
 * 0000000140361F1D: mov     rax, [rsi+368h]
 * 0000000140361F24: mov     rcx, r8
 * 0000000140361F27: call    KeGuardDispatchICall
 * 0000000140361F2C: mov     [rsi+924h], ebx
 * 0000000140361F32: xor     r11d, r11d
 * 0000000140361F35: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140361F3C: jmp     short loc_140361F47
 * 0000000140361F3E: mov     rsi, rbx
 * 0000000140361F41: mov     [rbx+7E4h], eax
 * 0000000140361F47: mov     r8d, 1
 * 0000000140361F4D: lea     rbx, [rsi+r14]
 * 0000000140361F51: add     [rsi+80Ch], r8d
 * 0000000140361F58: mov     rax, rbx
 * 0000000140361F5B: mov     [rbp+0B70h+var_4A8], rbx
 * 0000000140361F62: lea     ecx, [r8+2Fh]
 * 0000000140361F66: lea     edx, [rcx-2Ah]
 * 0000000140361F69: mov     [rax], r11
 * 0000000140361F6C: add     ecx, 0FFFFFFF8h
 * 0000000140361F6F: add     rax, 8
 * 0000000140361F73: sub     rdx, r8
 * 0000000140361F76: jnz     short loc_140361F69
 * 0000000140361F78: test    ecx, ecx
 * 0000000140361F7A: jz      short loc_140361F8B
 * 0000000140361F7C: mov     edx, 0FFFFFFFFh
 * 0000000140361F81: mov     [rax], r11b
 * 0000000140361F84: add     rax, r8
 * 0000000140361F87: add     ecx, edx
 * 0000000140361F89: jnz     short loc_140361F81
 * 0000000140361F8B: mov     [rbx], r15d
 * 0000000140361F8E: mov     r14d, 20h ; ' '
 * 0000000140361F94: mov     [rbx+8], r13
 * 0000000140361F98: cmp     r12d, 7
 * 0000000140361F9C: jnz     short loc_140361FB0
 * 0000000140361F9E: lea     r9, [rbx+18h]
 * 0000000140361FA2: mov     r8d, r14d
 * 0000000140361FA5: mov     rdx, r13
 * 0000000140361FA8: mov     rcx, rsi
 * 0000000140361FAB: call    sub_1401B877C
 * 0000000140361FB0: mov     rcx, [rbp+0B70h+var_BD0]
 * 0000000140361FB4: mov     r8, r13
 * 0000000140361FB7: mov     [rbx+10h], r14d
 * 0000000140361FBB: add     rcx, 40h ; '@'
 * 0000000140361FBF: add     [rsi+828h], r14d
 * 0000000140361FC6: mov     rax, r13
 * 0000000140361FC9: mov     r11d, [rsi+814h]
 * 0000000140361FD0: mov     rdx, [rsi+818h]
 * 0000000140361FD7: cmp     r13, rcx
 * 0000000140361FDA: jnb     short loc_140361FED
 * 0000000140361FDC: mov     r9d, 40h ; '@'
 * 0000000140361FE2: prefetchnta byte ptr [rax]
 * 0000000140361FE5: add     rax, r9
 * 0000000140361FE8: cmp     rax, rcx
 * 0000000140361FEB: jb      short loc_140361FE2
 * 0000000140361FED: mov     r10d, 4
 * 0000000140361FF3: mov     r9d, r14d
 * 0000000140361FF6: lea     r15d, [r10-3]
 * 0000000140361FFA: xor     rdx, [r8]
 * 0000000140361FFD: mov     ecx, r11d
 * 0000000140362000: rol     rdx, cl
 * 0000000140362003: add     r8, 8
 * 0000000140362007: add     r9d, 0FFFFFFF8h
 * 000000014036200B: sub     r10, r15
 * 000000014036200E: jnz     short loc_140361FFA
 * 0000000140362010: test    r9d, r9d
 * 0000000140362013: jz      short loc_140362036
 * 0000000140362015: mov     edi, 0FFFFFFFFh
 * 000000014036201A: movzx   eax, byte ptr [r8]
 * 000000014036201E: mov     ecx, r11d
 * 0000000140362021: xor     rdx, rax
 * 0000000140362024: add     r8, r15
 * 0000000140362027: rol     rdx, cl
 * 000000014036202A: add     r9d, edi
 * 000000014036202D: jnz     short loc_14036201A
 * 000000014036202F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140362036: mov     rax, rdx
 * 0000000140362039: shr     rax, 1Fh
 * 000000014036203D: xor     r11d, r11d
 * 0000000140362040: jmp     short loc_140362048
 * 0000000140362042: xor     edx, eax
 * 0000000140362044: shr     rax, 1Fh
 * 0000000140362048: test    rax, rax
 * 000000014036204B: jnz     short loc_140362042
 * 000000014036204D: btr     edx, 1Fh
 * 0000000140362051: mov     [rbx+14h], edx
 * 0000000140362054: mov     rbx, rsi
 * 0000000140362057: add     [rsi+828h], r14d
 * 000000014036205E: mov     dword ptr [rsi+958h], 3
 * 0000000140362068: cmp     dword ptr [rbx+958h], 4
 * 000000014036206F: mov     r13, [rsp+0C70h+var_C20]
 * 0000000140362074: jge     loc_14036231D
 * 000000014036207A: mov     rax, [rbp+0B70h+arg_8]
 * 0000000140362081: mov     r14d, [rbx+7E4h]
 * 0000000140362088: mov     r12, [r13+0]
 * 000000014036208C: mov     r8d, [rbx+924h]
 * 0000000140362093: mov     r15d, [rax+30h]
 * 0000000140362097: shl     r15d, 2
 * 000000014036209B: lea     eax, [r14+30h]
 * 000000014036209F: cmp     eax, [rbx+0A1Ch]
 * 00000001403620A5: jbe     loc_140362185
 * 00000001403620AB: mov     edx, eax
 * 00000001403620AD: mov     rcx, rbx
 * 00000001403620B0: call    sub_14036AB20
 * 00000001403620B5: xor     r11d, r11d
 * 00000001403620B8: mov     rsi, rax
 * 00000001403620BB: test    rax, rax
 * 00000001403620BE: jz      loc_140362E7E
 * 00000001403620C4: mov     ecx, [rbx+990h]
 * 00000001403620CA: test    cl, 4
 * 00000001403620CD: jnz     loc_14036217C
 * 00000001403620D3: mov     eax, [rbx+7E4h]
 * 00000001403620D9: lea     r9d, [r11+1]
 * 00000001403620DD: mov     r8, [rbx+7C8h]
 * 00000001403620E4: and     ecx, 20000000h
 * 00000001403620EA: neg     ecx
 * 00000001403620EC: sbb     edx, edx
 * 00000001403620EE: and     edx, [rbx+924h]
 * 00000001403620F4: cmp     eax, 8
 * 00000001403620F7: jb      short loc_14036210E
 * 00000001403620F9: mov     ecx, eax
 * 00000001403620FB: shr     rcx, 3
 * 00000001403620FF: mov     [rbx], r11
 * 0000000140362102: add     eax, 0FFFFFFF8h
 * 0000000140362105: add     rbx, 8
 * 0000000140362109: sub     rcx, r9
 * 000000014036210C: jnz     short loc_1403620FF
 * 000000014036210E: test    eax, eax
 * 0000000140362110: jz      short loc_140362121
 * 0000000140362112: mov     ecx, 0FFFFFFFFh
 * 0000000140362117: mov     [rbx], r11b
 * 000000014036211A: add     rbx, r9
 * 000000014036211D: add     eax, ecx
 * 000000014036211F: jnz     short loc_140362117
 * 0000000140362121: mov     ebx, [rsi+924h]
 * 0000000140362127: mov     [rsi+924h], edx
 * 000000014036212D: cmp     edx, 3
 * 0000000140362130: jz      short loc_140362164
 * 0000000140362132: test    dword ptr [rsi+990h], 10000000h
 * 000000014036213C: mov     ecx, r11d
 * 000000014036213F: cmovz   ecx, edx
 * 0000000140362142: test    ecx, ecx
 * 0000000140362144: jz      short loc_14036215B
 * 0000000140362146: mov     rax, [rsi+228h]
 * 000000014036214D: lea     rcx, [r8-8]
 * 0000000140362151: mov     rdx, [rcx]
 * 0000000140362154: call    KeGuardDispatchICall
 * 0000000140362159: jmp     short loc_140362173
 * 000000014036215B: mov     rax, [rsi+100h]
 * 0000000140362162: jmp     short loc_14036216B
 * 0000000140362164: mov     rax, [rsi+368h]
 * 000000014036216B: mov     rcx, r8
 * 000000014036216E: call    KeGuardDispatchICall
 * 0000000140362173: mov     [rsi+924h], ebx
 * 0000000140362179: xor     r11d, r11d
 * 000000014036217C: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140362183: jmp     short loc_14036218E
 * 0000000140362185: mov     rsi, rbx
 * 0000000140362188: mov     [rbx+7E4h], eax
 * 000000014036218E: mov     r8d, 1
 * 0000000140362194: lea     rbx, [rsi+r14]
 * 0000000140362198: add     [rsi+80Ch], r8d
 * 000000014036219F: mov     rax, rbx
 * 00000001403621A2: mov     [rbp+0B70h+var_4A0], rbx
 * 00000001403621A9: lea     ecx, [r8+2Fh]
 * 00000001403621AD: lea     edx, [rcx-2Ah]
 * 00000001403621B0: mov     [rax], r11
 * 00000001403621B3: add     ecx, 0FFFFFFF8h
 * 00000001403621B6: add     rax, 8
 * 00000001403621BA: sub     rdx, r8
 * 00000001403621BD: jnz     short loc_1403621B0
 * 00000001403621BF: test    ecx, ecx
 * 00000001403621C1: jz      short loc_1403621D2
 * 00000001403621C3: mov     edx, 0FFFFFFFFh
 * 00000001403621C8: mov     [rax], r11b
 * 00000001403621CB: add     rax, r8
 * 00000001403621CE: add     ecx, edx
 * 00000001403621D0: jnz     short loc_1403621C8
 * 00000001403621D2: mov     dword ptr [rbx], 0Bh
 * 00000001403621D8: mov     r9, r12
 * 00000001403621DB: mov     [rbx+8], r12
 * 00000001403621DF: mov     rax, r12
 * 00000001403621E2: mov     [rbx+10h], r15d
 * 00000001403621E6: add     [rsi+828h], r15d
 * 00000001403621ED: mov     r10d, [rsi+814h]
 * 00000001403621F4: mov     r14, [rsi+818h]
 * 00000001403621FB: mov     ecx, r15d
 * 00000001403621FE: add     rcx, r12
 * 0000000140362201: cmp     r12, rcx
 * 0000000140362204: jnb     short loc_140362216
 * 0000000140362206: mov     edx, 40h ; '@'
 * 000000014036220B: prefetchnta byte ptr [rax]
 * 000000014036220E: add     rax, rdx
 * 0000000140362211: cmp     rax, rcx
 * 0000000140362214: jb      short loc_14036220B
 * 0000000140362216: mov     r11d, r15d
 * 0000000140362219: mov     r8, r14
 * 000000014036221C: shr     r11d, 7
 * 0000000140362220: test    r11d, r11d
 * 0000000140362223: jz      short loc_14036229D
 * 0000000140362225: mov     rdi, 7010008004002001h
 * 000000014036222F: mov     edx, 8
 * 0000000140362234: lea     r13d, [rdx-7]
 * 0000000140362238: mov     rax, [r9]
 * 000000014036223B: mov     ecx, r10d
 * 000000014036223E: xor     rax, r8
 * 0000000140362241: mov     r8, [r9+8]
 * 0000000140362245: rol     rax, cl
 * 0000000140362248: add     r9, 10h
 * 000000014036224C: xor     r8, rax
 * 000000014036224F: rol     r8, cl
 * 0000000140362252: sub     rdx, r13
 * 0000000140362255: jnz     short loc_140362238
 * 0000000140362257: mov     rcx, r9
 * 000000014036225A: sub     rcx, r12
 * 000000014036225D: xor     rcx, r14
 * 0000000140362260: mov     rax, rcx
 * 0000000140362263: rol     rax, 11h
 * 0000000140362267: xor     rcx, rax
 * 000000014036226A: mov     rax, rdi
 * 000000014036226D: mul     rcx
 * 0000000140362270: mov     [rbp+0B70h+var_498], rdx
 * 0000000140362277: xor     edx, eax
 * 0000000140362279: xor     r10d, edx
 * 000000014036227C: mov     rax, r13
 * 000000014036227F: and     r10d, 3Fh
 * 0000000140362283: cmovz   r10d, eax
 * 0000000140362287: mov     eax, 0FFFFFFFFh
 * 000000014036228C: add     r11d, eax
 * 000000014036228F: jnz     short loc_14036222F
 * 0000000140362291: mov     r13, [rsp+0C70h+var_C20]
 * 0000000140362296: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014036229D: mov     edx, r15d
 * 00000001403622A0: mov     r14d, 1
 * 00000001403622A6: and     edx, 7Fh
 * 00000001403622A9: cmp     edx, 8
 * 00000001403622AC: jb      short loc_1403622CA
 * 00000001403622AE: mov     r11d, edx
 * 00000001403622B1: shr     r11, 3
 * 00000001403622B5: xor     r8, [r9]
 * 00000001403622B8: mov     ecx, r10d
 * 00000001403622BB: rol     r8, cl
 * 00000001403622BE: add     r9, 8
 * 00000001403622C2: add     edx, 0FFFFFFF8h
 * 00000001403622C5: sub     r11, r14
 * 00000001403622C8: jnz     short loc_1403622B5
 * 00000001403622CA: xor     r11d, r11d
 * 00000001403622CD: test    edx, edx
 * 00000001403622CF: jz      short loc_1403622EF
 * 00000001403622D1: mov     r11d, 0FFFFFFFFh
 * 00000001403622D7: movzx   eax, byte ptr [r9]
 * 00000001403622DB: mov     ecx, r10d
 * 00000001403622DE: xor     r8, rax
 * 00000001403622E1: add     r9, r14
 * 00000001403622E4: rol     r8, cl
 * 00000001403622E7: add     edx, r11d
 * 00000001403622EA: jnz     short loc_1403622D7
 * 00000001403622EC: xor     r11d, r11d
 * 00000001403622EF: mov     rax, r8
 * 00000001403622F2: jmp     short loc_1403622F7
 * 00000001403622F4: xor     r8d, eax
 * 00000001403622F7: shr     rax, 1Fh
 * 00000001403622FB: test    rax, rax
 * 00000001403622FE: jnz     short loc_1403622F4
 * 0000000140362300: btr     r8d, 1Fh
 * 0000000140362305: mov     [rbx+14h], r8d
 * 0000000140362309: mov     rbx, rsi
 * 000000014036230C: add     [rsi+828h], r15d
 * 0000000140362313: mov     dword ptr [rsi+958h], 4
 * 000000014036231D: cmp     dword ptr [rbx+958h], 5
 * 0000000140362324: jge     loc_14036255F
 * 000000014036232A: mov     r14d, [rbx+7E4h]
 * 0000000140362331: mov     r15d, 20h ; ' '
 * 0000000140362337: mov     r12d, [rbx+838h]
 * 000000014036233E: cmp     r12d, 7
 * 0000000140362342: mov     r8d, [rbx+924h]
 * 0000000140362349: cmovnz  r15d, r11d
 * 000000014036234D: lea     eax, [r14+30h]
 * 0000000140362351: cmp     eax, [rbx+0A1Ch]
 * 0000000140362357: jbe     loc_140362437
 * 000000014036235D: mov     edx, eax
 * 000000014036235F: mov     rcx, rbx
 * 0000000140362362: call    sub_14036AB20
 * 0000000140362367: xor     r11d, r11d
 * 000000014036236A: mov     rsi, rax
 * 000000014036236D: test    rax, rax
 * 0000000140362370: jz      loc_140362E7E
 * 0000000140362376: mov     ecx, [rbx+990h]
 * 000000014036237C: test    cl, 4
 * 000000014036237F: jnz     loc_14036242E
 * 0000000140362385: mov     eax, [rbx+7E4h]
 * 000000014036238B: lea     r9d, [r11+1]
 * 000000014036238F: mov     r8, [rbx+7C8h]
 * 0000000140362396: and     ecx, 20000000h
 * 000000014036239C: neg     ecx
 * 000000014036239E: sbb     edx, edx
 * 00000001403623A0: and     edx, [rbx+924h]
 * 00000001403623A6: cmp     eax, 8
 * 00000001403623A9: jb      short loc_1403623C0
 * 00000001403623AB: mov     ecx, eax
 * 00000001403623AD: shr     rcx, 3
 * 00000001403623B1: mov     [rbx], r11
 * 00000001403623B4: add     eax, 0FFFFFFF8h
 * 00000001403623B7: add     rbx, 8
 * 00000001403623BB: sub     rcx, r9
 * 00000001403623BE: jnz     short loc_1403623B1
 * 00000001403623C0: test    eax, eax
 * 00000001403623C2: jz      short loc_1403623D3
 * 00000001403623C4: mov     ecx, 0FFFFFFFFh
 * 00000001403623C9: mov     [rbx], r11b
 * 00000001403623CC: add     rbx, r9
 * 00000001403623CF: add     eax, ecx
 * 00000001403623D1: jnz     short loc_1403623C9
 * 00000001403623D3: mov     ebx, [rsi+924h]
 * 00000001403623D9: mov     [rsi+924h], edx
 * 00000001403623DF: cmp     edx, 3
 * 00000001403623E2: jz      short loc_140362416
 * 00000001403623E4: test    dword ptr [rsi+990h], 10000000h
 * 00000001403623EE: mov     ecx, r11d
 * 00000001403623F1: cmovz   ecx, edx
 * 00000001403623F4: test    ecx, ecx
 * 00000001403623F6: jz      short loc_14036240D
 * 00000001403623F8: mov     rax, [rsi+228h]
 * 00000001403623FF: lea     rcx, [r8-8]
 * 0000000140362403: mov     rdx, [rcx]
 * 0000000140362406: call    KeGuardDispatchICall
 * 000000014036240B: jmp     short loc_140362425
 * 000000014036240D: mov     rax, [rsi+100h]
 * 0000000140362414: jmp     short loc_14036241D
 * 0000000140362416: mov     rax, [rsi+368h]
 * 000000014036241D: mov     rcx, r8
 * 0000000140362420: call    KeGuardDispatchICall
 * 0000000140362425: mov     [rsi+924h], ebx
 * 000000014036242B: xor     r11d, r11d
 * 000000014036242E: and     dword ptr [rsi+990h], 0FFFFFFFBh
 * 0000000140362435: jmp     short loc_140362440
 * 0000000140362437: mov     rsi, rbx
 * 000000014036243A: mov     [rbx+7E4h], eax
 * 0000000140362440: mov     r8d, 1
 * 0000000140362446: lea     rbx, [rsi+r14]
 * 000000014036244A: add     [rsi+80Ch], r8d
 * 0000000140362451: mov     rax, rbx
 * 0000000140362454: mov     [rbp+0B70h+var_490], rbx
 * 000000014036245B: lea     ecx, [r8+2Fh]
 * 000000014036245F: lea     edx, [rcx-2Ah]
 * 0000000140362462: mov     [rax], r11
 * 0000000140362465: add     ecx, 0FFFFFFF8h
 * 0000000140362468: add     rax, 8
 * 000000014036246C: sub     rdx, r8
 * 000000014036246F: jnz     short loc_140362462
 * 0000000140362471: test    ecx, ecx
 * 0000000140362473: jz      short loc_140362484
 * 0000000140362475: mov     edx, 0FFFFFFFFh
 * 000000014036247A: mov     [rax], r11b
 * 000000014036247D: add     rax, r8
 * 0000000140362480: add     ecx, edx
 * 0000000140362482: jnz     short loc_14036247A
 * 0000000140362484: mov     [rbx], r15d
 * 0000000140362487: mov     r14d, 20h ; ' '
 * 000000014036248D: mov     [rbx+8], r13
 * 0000000140362491: cmp     r12d, 7
 * 0000000140362495: jnz     short loc_1403624A9
 * 0000000140362497: lea     r9, [rbx+18h]
 * 000000014036249B: mov     r8d, r14d
 * 000000014036249E: mov     rdx, r13
 * 00000001403624A1: mov     rcx, rsi
 * 00000001403624A4: call    sub_1401B877C
 * 00000001403624A9: mov     rcx, [rbp+0B70h+arg_8]
 * 00000001403624B0: mov     r8, r13
 * 00000001403624B3: mov     [rbx+10h], r14d
 * 00000001403624B7: add     rcx, 40h ; '@'
 * 00000001403624BB: add     [rsi+828h], r14d
 * 00000001403624C2: mov     rax, r13
 * 00000001403624C5: mov     r11d, [rsi+814h]
 * 00000001403624CC: mov     rdx, [rsi+818h]
 * 00000001403624D3: cmp     r13, rcx
 * 00000001403624D6: jnb     short loc_1403624E9
 * 00000001403624D8: mov     r9d, 40h ; '@'
 * 00000001403624DE: prefetchnta byte ptr [rax]
 * 00000001403624E1: add     rax, r9
 * 00000001403624E4: cmp     rax, rcx
 * 00000001403624E7: jb      short loc_1403624DE
 * 00000001403624E9: mov     r10d, 4
 * 00000001403624EF: mov     r9d, r14d
 * 00000001403624F2: lea     r12d, [r10-3]
 * 00000001403624F6: xor     rdx, [r8]
 * 00000001403624F9: mov     ecx, r11d
 * 00000001403624FC: rol     rdx, cl
 * 00000001403624FF: add     r8, 8
 * 0000000140362503: add     r9d, 0FFFFFFF8h
 * 0000000140362507: sub     r10, r12
 * 000000014036250A: jnz     short loc_1403624F6
 * 000000014036250C: xor     r15d, r15d
 * 000000014036250F: test    r9d, r9d
 * 0000000140362512: jz      short loc_140362532
 * 0000000140362514: mov     r15d, 0FFFFFFFFh
 * 000000014036251A: movzx   eax, byte ptr [r8]
 * 000000014036251E: mov     ecx, r11d
 * 0000000140362521: xor     rdx, rax
 * 0000000140362524: add     r8, r12
 * 0000000140362527: rol     rdx, cl
 * 000000014036252A: add     r9d, r15d
 * 000000014036252D: jnz     short loc_14036251A
 * 000000014036252F: xor     r15d, r15d
 * 0000000140362532: mov     rax, rdx
 * 0000000140362535: jmp     short loc_140362539
 * 0000000140362537: xor     edx, eax
 * 0000000140362539: shr     rax, 1Fh
 * 000000014036253D: test    rax, rax
 * 0000000140362540: jnz     short loc_140362537
 * 0000000140362542: btr     edx, 1Fh
 * 0000000140362546: mov     [rbx+14h], edx
 * 0000000140362549: mov     rbx, rsi
 * 000000014036254C: add     [rsi+828h], r14d
 * 0000000140362553: mov     dword ptr [rsi+958h], 5
 * 000000014036255D: jmp     short loc_140362562
 * 000000014036255F: xor     r15d, r15d
 * 0000000140362562: mov     eax, [rbx+958h]
 * 0000000140362568: mov     r12d, 6
 * 000000014036256E: mov     rsi, rbx
 * 0000000140362571: mov     r14, rbx
 * 0000000140362574: cmp     eax, r12d
 * 0000000140362577: jge     loc_140362954
 * 000000014036257D: test    dword ptr [rbx+990h], 40000000h
 * 0000000140362587: mov     r13d, r15d
 * 000000014036258A: mov     r15, [rbp+0B70h+var_BD0]
 * 000000014036258E: mov     rax, [r15+20h]
 * 0000000140362592: mov     [rsp+0C70h+var_C08], rax
 * 0000000140362597: jnz     loc_140362939
 * 000000014036259D: xor     eax, eax
 * 000000014036259F: mov     ebx, eax
 * 00000001403625A1: cmp     [r15+30h], eax
 * 00000001403625A5: jbe     loc_140362939
 * 00000001403625AB: mov     rdi, [rsp+0C70h+var_C08]
 * 00000001403625B0: mov     eax, ebx
 * 00000001403625B2: lea     rdx, [rbp+0B70h+var_848]
 * 00000001403625B9: xor     r8d, r8d
 * 00000001403625BC: movsxd  rcx, dword ptr [rdi+rax*4]
 * 00000001403625C0: mov     rax, [rsi+260h]
 * 00000001403625C7: sar     rcx, 4
 * 00000001403625CB: add     rcx, rdi
 * 00000001403625CE: call    KeGuardDispatchICall
 * 00000001403625D3: mov     r9d, 1
 * 00000001403625D9: test    rax, rax
 * 00000001403625DC: jnz     short loc_1403625E1
 * 00000001403625DE: add     r13d, r9d
 * 00000001403625E1: add     ebx, r9d
 * 00000001403625E4: cmp     ebx, [r15+30h]
 * 00000001403625E8: jb      short loc_1403625B0
 * 00000001403625EA: xor     r15d, r15d
 * 00000001403625ED: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403625F4: test    r13d, r13d
 * 00000001403625F7: jz      loc_14036293C
 * 00000001403625FD: mov     r14d, [rsi+7E4h]
 * 0000000140362604: mov     ecx, r13d
 * 0000000140362607: mov     r8d, [rsi+924h]
 * 000000014036260E: shl     ecx, 4
 * 0000000140362611: add     ecx, 30h ; '0'
 * 0000000140362614: add     ecx, r14d
 * 0000000140362617: cmp     ecx, [rsi+0A1Ch]
 * 000000014036261D: jbe     loc_14036270A
 * 0000000140362623: mov     edx, ecx
 * 0000000140362625: mov     rcx, rsi
 * 0000000140362628: call    sub_14036AB20
 * 000000014036262D: mov     rbx, rax
 * 0000000140362630: test    rax, rax
 * 0000000140362633: jz      loc_1403626FD
 * 0000000140362639: mov     ecx, [rsi+990h]
 * 000000014036263F: test    cl, 4
 * 0000000140362642: jnz     loc_1403626EE
 * 0000000140362648: mov     eax, [rsi+7E4h]
 * 000000014036264E: lea     r9d, [r15+1]
 * 0000000140362652: mov     r8, [rsi+7C8h]
 * 0000000140362659: and     ecx, 20000000h
 * 000000014036265F: neg     ecx
 * 0000000140362661: sbb     edx, edx
 * 0000000140362663: and     edx, [rsi+924h]
 * 0000000140362669: cmp     eax, 8
 * 000000014036266C: jb      short loc_140362683
 * 000000014036266E: mov     ecx, eax
 * 0000000140362670: shr     rcx, 3
 * 0000000140362674: mov     [rsi], r15
 * 0000000140362677: add     eax, 0FFFFFFF8h
 * 000000014036267A: add     rsi, 8
 * 000000014036267E: sub     rcx, r9
 * 0000000140362681: jnz     short loc_140362674
 * 0000000140362683: test    eax, eax
 * 0000000140362685: jz      short loc_140362696
 * 0000000140362687: mov     ecx, 0FFFFFFFFh
 * 000000014036268C: mov     [rsi], r15b
 * 000000014036268F: add     rsi, r9
 * 0000000140362692: add     eax, ecx
 * 0000000140362694: jnz     short loc_14036268C
 * 0000000140362696: mov     esi, [rbx+924h]
 * 000000014036269C: mov     [rbx+924h], edx
 * 00000001403626A2: cmp     edx, 3
 * 00000001403626A5: jz      short loc_1403626D9
 * 00000001403626A7: test    dword ptr [rbx+990h], 10000000h
 * 00000001403626B1: mov     ecx, r15d
 * 00000001403626B4: cmovz   ecx, edx
 * 00000001403626B7: test    ecx, ecx
 * 00000001403626B9: jz      short loc_1403626D0
 * 00000001403626BB: mov     rax, [rbx+228h]
 * 00000001403626C2: lea     rcx, [r8-8]
 * 00000001403626C6: mov     rdx, [rcx]
 * 00000001403626C9: call    KeGuardDispatchICall
 * 00000001403626CE: jmp     short loc_1403626E8
 * 00000001403626D0: mov     rax, [rbx+100h]
 * 00000001403626D7: jmp     short loc_1403626E0
 * 00000001403626D9: mov     rax, [rbx+368h]
 * 00000001403626E0: mov     rcx, r8
 * 00000001403626E3: call    KeGuardDispatchICall
 * 00000001403626E8: mov     [rbx+924h], esi
 * 00000001403626EE: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 00000001403626F5: mov     r9d, 1
 * 00000001403626FB: jmp     short loc_140362713
 * 00000001403626FD: mov     eax, 0C000022Dh
 * 0000000140362702: mov     r14, rsi
 * 0000000140362705: jmp     loc_14036293F
 * 000000014036270A: mov     rbx, rsi
 * 000000014036270D: mov     [rsi+7E4h], ecx
 * 0000000140362713: add     [rbx+80Ch], r9d
 * 000000014036271A: lea     rcx, [rbx+r14]
 * 000000014036271E: mov     [rbp+0B70h+var_7A0], rcx
 * 0000000140362725: mov     rax, rcx
 * 0000000140362728: mov     edx, 30h ; '0'
 * 000000014036272D: mov     r8, r12
 * 0000000140362730: mov     [rax], r15
 * 0000000140362733: add     edx, 0FFFFFFF8h
 * 0000000140362736: add     rax, 8
 * 000000014036273A: sub     r8, r9
 * 000000014036273D: jnz     short loc_140362730
 * 000000014036273F: test    edx, edx
 * 0000000140362741: jz      short loc_140362754
 * 0000000140362743: mov     r8d, 0FFFFFFFFh
 * 0000000140362749: mov     [rax], r15b
 * 000000014036274C: add     rax, r9
 * 000000014036274F: add     edx, r8d
 * 0000000140362752: jnz     short loc_140362749
 * 0000000140362754: mov     dword ptr [rcx], 0Ah
 * 000000014036275A: mov     [rcx+8], r15
 * 000000014036275E: mov     [rcx+10h], r15d
 * 0000000140362762: mov     rdx, [rbx+818h]
 * 0000000140362769: mov     rax, rdx
 * 000000014036276C: jmp     short loc_140362770
 * 000000014036276E: xor     edx, eax
 * 0000000140362770: shr     rax, 1Fh
 * 0000000140362774: test    rax, rax
 * 0000000140362777: jnz     short loc_14036276E
 * 0000000140362779: btr     edx, 1Fh
 * 000000014036277D: mov     r14, rbx
 * 0000000140362780: mov     [rcx+14h], edx
 * 0000000140362783: mov     rax, [rbp+0B70h+var_7A0]
 * 000000014036278A: mov     [rbp+0B70h+var_968], rax
 * 0000000140362791: mov     [rax+18h], r9d
 * 0000000140362795: mov     rax, [rbp+0B70h+var_968]
 * 000000014036279C: mov     r9, [rbp+0B70h+var_BD0]
 * 00000001403627A0: mov     [rax+1Ch], r13d
 * 00000001403627A4: xor     eax, eax
 * 00000001403627A6: mov     r12d, eax
 * 00000001403627A9: mov     rcx, [rbp+0B70h+var_968]
 * 00000001403627B0: lea     r15, [rcx+30h]
 * 00000001403627B4: cmp     [r9+30h], eax
 * 00000001403627B8: jbe     loc_1403628B1
 * 00000001403627BE: mov     rcx, [rsp+0C70h+var_C08]
 * 00000001403627C3: lea     rdx, [rbp+0B70h+var_848]
 * 00000001403627CA: mov     eax, r12d
 * 00000001403627CD: xor     r8d, r8d
 * 00000001403627D0: movsxd  rsi, dword ptr [rcx+rax*4]
 * 00000001403627D4: mov     rax, [rbx+260h]
 * 00000001403627DB: sar     rsi, 4
 * 00000001403627DF: add     rsi, rcx
 * 00000001403627E2: mov     rcx, rsi
 * 00000001403627E5: mov     [rsp+0C70h+var_BF8], rsi
 * 00000001403627EA: call    KeGuardDispatchICall
 * 00000001403627EF: test    rax, rax
 * 00000001403627F2: jnz     loc_140362891
 * 00000001403627F8: lea     r11d, [rax+4]
 * 00000001403627FC: mov     r8, rsi
 * 00000001403627FF: add     [rbx+828h], r11d
 * 0000000140362806: lea     rcx, [rsi+4]
 * 000000014036280A: mov     r10d, [rbx+814h]
 * 0000000140362811: mov     rax, rsi
 * 0000000140362814: mov     rdx, [rbx+818h]
 * 000000014036281B: cmp     rsi, rcx
 * 000000014036281E: jnb     short loc_14036282F
 * 0000000140362820: lea     r9d, [r11+3Ch]
 * 0000000140362824: prefetchnta byte ptr [rax]
 * 0000000140362827: add     rax, r9
 * 000000014036282A: cmp     rax, rcx
 * 000000014036282D: jb      short loc_140362824
 * 000000014036282F: mov     r9d, r11d
 * 0000000140362832: mov     edi, 1
 * 0000000140362837: mov     esi, 0FFFFFFFFh
 * 000000014036283C: movzx   eax, byte ptr [r8]
 * 0000000140362840: mov     ecx, r10d
 * 0000000140362843: xor     rdx, rax
 * 0000000140362846: add     r8, rdi
 * 0000000140362849: rol     rdx, cl
 * 000000014036284C: add     r9d, esi
 * 000000014036284F: jnz     short loc_14036283C
 * 0000000140362851: mov     rsi, [rsp+0C70h+var_BF8]
 * 0000000140362856: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014036285D: mov     rax, rdx
 * 0000000140362860: jmp     short loc_140362864
 * 0000000140362862: xor     edx, eax
 * 0000000140362864: shr     rax, 1Fh
 * 0000000140362868: test    rax, rax
 * 000000014036286B: jnz     short loc_140362862
 * 000000014036286D: xor     edx, [r15]
 * 0000000140362870: mov     eax, 0FFFFFFFFh
 * 0000000140362875: btr     edx, 1Fh
 * 0000000140362879: xor     [r15], edx
 * 000000014036287C: mov     [r15+4], r11d
 * 0000000140362880: mov     [r15+8], rsi
 * 0000000140362884: add     r15, 10h
 * 0000000140362888: add     r13d, eax
 * 000000014036288B: jz      loc_140362933
 * 0000000140362891: mov     rax, [rbp+0B70h+var_BD0]
 * 0000000140362895: mov     r9d, 1
 * 000000014036289B: add     r12d, r9d
 * 000000014036289E: cmp     r12d, [rax+30h]
 * 00000001403628A2: jb      loc_1403627BE
 * 00000001403628A8: mov     rcx, [rbp+0B70h+var_968]
 * 00000001403628AF: jmp     short loc_1403628B7
 * 00000001403628B1: mov     r9d, 1
 * 00000001403628B7: xor     r15d, r15d
 * 00000001403628BA: test    r13d, r13d
 * 00000001403628BD: jz      loc_140362AB7
 * 00000001403628C3: cmp     [rbx+8F8h], r15d
 * 00000001403628CA: jnz     loc_140362E81
 * 00000001403628D0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403628DA: add     rax, rbx
 * 00000001403628DD: mov     [rbx+900h], rax
 * 00000001403628E4: test    rcx, rcx
 * 00000001403628E7: jz      short loc_1403628F8
 * 00000001403628E9: mov     rax, 0B3B74BDEE4453415h
 * 00000001403628F3: add     rax, rcx
 * 00000001403628F6: jmp     short loc_1403628FB
 * 00000001403628F8: mov     rax, r15
 * 00000001403628FB: mov     [rbx+908h], rax
 * 0000000140362902: test    rcx, rcx
 * 0000000140362905: jz      short loc_14036290C
 * 0000000140362907: movsxd  rax, dword ptr [rcx]
 * 000000014036290A: jmp     short loc_14036290F
 * 000000014036290C: mov     rax, r15
 * 000000014036290F: mov     [rbx+910h], rax
 * 0000000140362916: mov     [rbx+918h], r15
 * 000000014036291D: mov     [rbx+8F8h], r9d
 * 0000000140362924: xor     edx, edx
 * 0000000140362926: mov     rcx, rbx
 * 0000000140362929: call    sub_14036B3BC
 * 000000014036292E: jmp     loc_140362E81
 * 0000000140362933: mov     r12d, 6
 * 0000000140362939: xor     r15d, r15d
 * 000000014036293C: mov     eax, r15d
 * 000000014036293F: mov     rbx, r14
 * 0000000140362942: test    eax, eax
 * 0000000140362944: js      loc_140362E81
 * 000000014036294A: mov     [r14+958h], r12d
 * 0000000140362951: mov     eax, r12d
 * 0000000140362954: cmp     eax, 7
 * 0000000140362957: jge     loc_140362D37
 * 000000014036295D: test    dword ptr [r14+990h], 40000000h
 * 0000000140362968: mov     r13d, r15d
 * 000000014036296B: mov     rdx, [rsp+0C70h+var_C20]
 * 0000000140362970: mov     rsi, [rdx]
 * 0000000140362973: mov     [rbp+0B70h+var_BD0], rsi
 * 0000000140362977: jnz     loc_140362D1E
 * 000000014036297D: mov     rax, [rbp+0B70h+arg_8]
 * 0000000140362984: mov     ebx, r15d
 * 0000000140362987: cmp     [rax+30h], r15d
 * 000000014036298B: jbe     loc_140362D1E
 * 0000000140362991: mov     rdi, rax
 * 0000000140362994: mov     eax, ebx
 * 0000000140362996: lea     rdx, [rbp+0B70h+var_838]
 * 000000014036299D: xor     r8d, r8d
 * 00000001403629A0: movsxd  rcx, dword ptr [rsi+rax*4]
 * 00000001403629A4: mov     rax, [r14+260h]
 * 00000001403629AB: sar     rcx, 4
 * 00000001403629AF: add     rcx, rsi
 * 00000001403629B2: call    KeGuardDispatchICall
 * 00000001403629B7: mov     r10d, 1
 * 00000001403629BD: test    rax, rax
 * 00000001403629C0: jnz     short loc_1403629C5
 * 00000001403629C2: add     r13d, r10d
 * 00000001403629C5: add     ebx, r10d
 * 00000001403629C8: cmp     ebx, [rdi+30h]
 * 00000001403629CB: jb      short loc_140362994
 * 00000001403629CD: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403629D4: test    r13d, r13d
 * 00000001403629D7: jz      loc_140362D1E
 * 00000001403629DD: mov     r15d, [r14+7E4h]
 * 00000001403629E4: mov     ecx, r13d
 * 00000001403629E7: mov     r8d, [r14+924h]
 * 00000001403629EE: shl     ecx, 4
 * 00000001403629F1: add     ecx, 30h ; '0'
 * 00000001403629F4: add     ecx, r15d
 * 00000001403629F7: cmp     ecx, [r14+0A1Ch]
 * 00000001403629FE: jbe     loc_140362B00
 * 0000000140362A04: mov     edx, ecx
 * 0000000140362A06: mov     rcx, r14
 * 0000000140362A09: call    sub_14036AB20
 * 0000000140362A0E: xor     r9d, r9d
 * 0000000140362A11: mov     rbx, rax
 * 0000000140362A14: test    rax, rax
 * 0000000140362A17: jz      loc_140362AF3
 * 0000000140362A1D: mov     ecx, [r14+990h]
 * 0000000140362A24: test    cl, 4
 * 0000000140362A27: jnz     loc_140362AE4
 * 0000000140362A2D: mov     eax, [r14+7E4h]
 * 0000000140362A34: lea     r10d, [r9+1]
 * 0000000140362A38: mov     r8, [r14+7C8h]
 * 0000000140362A3F: and     ecx, 20000000h
 * 0000000140362A45: neg     ecx
 * 0000000140362A47: sbb     edx, edx
 * 0000000140362A49: and     edx, [r14+924h]
 * 0000000140362A50: cmp     eax, 8
 * 0000000140362A53: jb      short loc_140362A6A
 * 0000000140362A55: mov     ecx, eax
 * 0000000140362A57: shr     rcx, 3
 * 0000000140362A5B: mov     [r14], r9
 * 0000000140362A5E: add     eax, 0FFFFFFF8h
 * 0000000140362A61: add     r14, 8
 * 0000000140362A65: sub     rcx, r10
 * 0000000140362A68: jnz     short loc_140362A5B
 * 0000000140362A6A: test    eax, eax
 * 0000000140362A6C: jz      short loc_140362A7D
 * 0000000140362A6E: mov     ecx, 0FFFFFFFFh
 * 0000000140362A73: mov     [r14], r9b
 * 0000000140362A76: add     r14, r10
 * 0000000140362A79: add     eax, ecx
 * 0000000140362A7B: jnz     short loc_140362A73
 * 0000000140362A7D: mov     esi, [rbx+924h]
 * 0000000140362A83: mov     [rbx+924h], edx
 * 0000000140362A89: cmp     edx, 3
 * 0000000140362A8C: jz      short loc_140362ACB
 * 0000000140362A8E: test    dword ptr [rbx+990h], 10000000h
 * 0000000140362A98: mov     ecx, r9d
 * 0000000140362A9B: cmovz   ecx, edx
 * 0000000140362A9E: test    ecx, ecx
 * 0000000140362AA0: jz      short loc_140362AC2
 * 0000000140362AA2: mov     rax, [rbx+228h]
 * 0000000140362AA9: lea     rcx, [r8-8]
 * 0000000140362AAD: mov     rdx, [rcx]
 * 0000000140362AB0: call    KeGuardDispatchICall
 * 0000000140362AB5: jmp     short loc_140362ADA
 * 0000000140362AB7: mov     r12d, 6
 * 0000000140362ABD: jmp     loc_14036293C
 * 0000000140362AC2: mov     rax, [rbx+100h]
 * 0000000140362AC9: jmp     short loc_140362AD2
 * 0000000140362ACB: mov     rax, [rbx+368h]
 * 0000000140362AD2: mov     rcx, r8
 * 0000000140362AD5: call    KeGuardDispatchICall
 * 0000000140362ADA: mov     [rbx+924h], esi
 * 0000000140362AE0: mov     rsi, [rbp+0B70h+var_BD0]
 * 0000000140362AE4: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140362AEB: mov     r10d, 1
 * 0000000140362AF1: jmp     short loc_140362B0A
 * 0000000140362AF3: mov     eax, 0C000022Dh
 * 0000000140362AF8: xor     r15d, r15d
 * 0000000140362AFB: jmp     loc_140362D21
 * 0000000140362B00: mov     rbx, r14
 * 0000000140362B03: mov     [r14+7E4h], ecx
 * 0000000140362B0A: add     [rbx+80Ch], r10d
 * 0000000140362B11: lea     rcx, [rbx+r15]
 * 0000000140362B15: mov     [rbp+0B70h+var_840], rcx
 * 0000000140362B1C: mov     rax, rcx
 * 0000000140362B1F: xor     r9d, r9d
 * 0000000140362B22: mov     edx, 30h ; '0'
 * 0000000140362B27: mov     r8, r12
 * 0000000140362B2A: mov     [rax], r9
 * 0000000140362B2D: add     edx, 0FFFFFFF8h
 * 0000000140362B30: add     rax, 8
 * 0000000140362B34: sub     r8, r10
 * 0000000140362B37: jnz     short loc_140362B2A
 * 0000000140362B39: test    edx, edx
 * 0000000140362B3B: jz      short loc_140362B4E
 * 0000000140362B3D: mov     r8d, 0FFFFFFFFh
 * 0000000140362B43: mov     [rax], r9b
 * 0000000140362B46: add     rax, r10
 * 0000000140362B49: add     edx, r8d
 * 0000000140362B4C: jnz     short loc_140362B43
 * 0000000140362B4E: mov     dword ptr [rcx], 0Ah
 * 0000000140362B54: mov     [rcx+8], r9
 * 0000000140362B58: mov     [rcx+10h], r9d
 * 0000000140362B5C: mov     rdx, [rbx+818h]
 * 0000000140362B63: mov     rax, rdx
 * 0000000140362B66: jmp     short loc_140362B6A
 * 0000000140362B68: xor     edx, eax
 * 0000000140362B6A: shr     rax, 1Fh
 * 0000000140362B6E: test    rax, rax
 * 0000000140362B71: jnz     short loc_140362B68
 * 0000000140362B73: btr     edx, 1Fh
 * 0000000140362B77: mov     r14, rbx
 * 0000000140362B7A: mov     [rcx+14h], edx
 * 0000000140362B7D: mov     r12d, r9d
 * 0000000140362B80: mov     rax, [rbp+0B70h+var_840]
 * 0000000140362B87: mov     [rbp+0B70h+var_960], rax
 * 0000000140362B8E: mov     [rax+18h], r10d
 * 0000000140362B92: mov     rax, [rbp+0B70h+var_960]
 * 0000000140362B99: mov     [rax+1Ch], r13d
 * 0000000140362B9D: mov     rax, [rbp+0B70h+arg_8]
 * 0000000140362BA4: mov     rcx, [rbp+0B70h+var_960]
 * 0000000140362BAB: lea     r15, [rcx+30h]
 * 0000000140362BAF: cmp     [rax+30h], r9d
 * 0000000140362BB3: jbe     loc_140362CAD
 * 0000000140362BB9: mov     eax, r12d
 * 0000000140362BBC: lea     rdx, [rbp+0B70h+var_838]
 * 0000000140362BC3: xor     r8d, r8d
 * 0000000140362BC6: movsxd  rsi, dword ptr [rsi+rax*4]
 * 0000000140362BCA: mov     rax, [rbx+260h]
 * 0000000140362BD1: sar     rsi, 4
 * 0000000140362BD5: add     rsi, [rbp+0B70h+var_BD0]
 * 0000000140362BD9: mov     rcx, rsi
 * 0000000140362BDC: mov     [rsp+0C70h+var_BF8], rsi
 * 0000000140362BE1: call    KeGuardDispatchICall
 * 0000000140362BE6: test    rax, rax
 * 0000000140362BE9: jnz     loc_140362C88
 * 0000000140362BEF: lea     r11d, [rax+4]
 * 0000000140362BF3: mov     r8, rsi
 * 0000000140362BF6: add     [rbx+828h], r11d
 * 0000000140362BFD: lea     rcx, [rsi+4]
 * 0000000140362C01: mov     r10d, [rbx+814h]
 * 0000000140362C08: mov     rax, rsi
 * 0000000140362C0B: mov     rdx, [rbx+818h]
 * 0000000140362C12: cmp     rsi, rcx
 * 0000000140362C15: jnb     short loc_140362C26
 * 0000000140362C17: lea     r9d, [r11+3Ch]
 * 0000000140362C1B: prefetchnta byte ptr [rax]
 * 0000000140362C1E: add     rax, r9
 * 0000000140362C21: cmp     rax, rcx
 * 0000000140362C24: jb      short loc_140362C1B
 * 0000000140362C26: mov     r9d, r11d
 * 0000000140362C29: mov     edi, 1
 * 0000000140362C2E: mov     esi, 0FFFFFFFFh
 * 0000000140362C33: movzx   eax, byte ptr [r8]
 * 0000000140362C37: mov     ecx, r10d
 * 0000000140362C3A: xor     rdx, rax
 * 0000000140362C3D: add     r8, rdi
 * 0000000140362C40: rol     rdx, cl
 * 0000000140362C43: add     r9d, esi
 * 0000000140362C46: jnz     short loc_140362C33
 * 0000000140362C48: mov     rsi, [rsp+0C70h+var_BF8]
 * 0000000140362C4D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140362C54: mov     rax, rdx
 * 0000000140362C57: jmp     short loc_140362C5B
 * 0000000140362C59: xor     edx, eax
 * 0000000140362C5B: shr     rax, 1Fh
 * 0000000140362C5F: test    rax, rax
 * 0000000140362C62: jnz     short loc_140362C59
 * 0000000140362C64: xor     edx, [r15]
 * 0000000140362C67: mov     eax, 0FFFFFFFFh
 * 0000000140362C6C: btr     edx, 1Fh
 * 0000000140362C70: xor     [r15], edx
 * 0000000140362C73: mov     [r15+4], r11d
 * 0000000140362C77: mov     [r15+8], rsi
 * 0000000140362C7B: add     r15, 10h
 * 0000000140362C7F: add     r13d, eax
 * 0000000140362C82: jz      loc_140362D1B
 * 0000000140362C88: mov     rax, [rbp+0B70h+arg_8]
 * 0000000140362C8F: mov     r10d, 1
 * 0000000140362C95: mov     rsi, [rbp+0B70h+var_BD0]
 * 0000000140362C99: add     r12d, r10d
 * 0000000140362C9C: cmp     r12d, [rax+30h]
 * 0000000140362CA0: jb      loc_140362BB9
 * 0000000140362CA6: mov     rcx, [rbp+0B70h+var_960]
 * 0000000140362CAD: xor     r15d, r15d
 * 0000000140362CB0: test    r13d, r13d
 * 0000000140362CB3: jz      short loc_140362D1E
 * 0000000140362CB5: cmp     [rbx+8F8h], r15d
 * 0000000140362CBC: jnz     loc_140362E81
 * 0000000140362CC2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140362CCC: add     rax, rbx
 * 0000000140362CCF: mov     [rbx+900h], rax
 * 0000000140362CD6: test    rcx, rcx
 * 0000000140362CD9: jz      short loc_140362CEA
 * 0000000140362CDB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140362CE5: add     rax, rcx
 * 0000000140362CE8: jmp     short loc_140362CED
 * 0000000140362CEA: mov     rax, r15
 * 0000000140362CED: mov     [rbx+908h], rax
 * 0000000140362CF4: test    rcx, rcx
 * 0000000140362CF7: jz      short loc_140362CFE
 * 0000000140362CF9: movsxd  rax, dword ptr [rcx]
 * 0000000140362CFC: jmp     short loc_140362D01
 * 0000000140362CFE: mov     rax, r15
 * 0000000140362D01: mov     [rbx+910h], rax
 * 0000000140362D08: mov     [rbx+918h], r15
 * 0000000140362D0F: mov     [rbx+8F8h], r10d
 * 0000000140362D16: jmp     loc_140362924
 * 0000000140362D1B: xor     r15d, r15d
 * 0000000140362D1E: mov     eax, r15d
 * 0000000140362D21: mov     rbx, r14
 * 0000000140362D24: test    eax, eax
 * 0000000140362D26: js      loc_140362E81
 * 0000000140362D2C: mov     dword ptr [r14+958h], 7
 * 0000000140362D37: mov     eax, r15d
 * 0000000140362D3A: mov     rsi, rbx
 * 0000000140362D3D: test    eax, eax
 * 0000000140362D3F: js      loc_140364EC3
 * 0000000140362D45: mov     r14d, 0FFFFFFFFh
 * 0000000140362D4B: mov     rax, [rbx+570h]
 * 0000000140362D52: lea     r8, [rbp+0B70h+var_9B4]
 * 0000000140362D59: lea     rdx, [rbp+0B70h+var_A28]
 * 0000000140362D60: mov     [rsp+0C70h+var_C10], rbx
 * 0000000140362D65: mov     rsi, rbx
 * 0000000140362D68: mov     [rbp+0B70h+var_B30], rbx
 * 0000000140362D6C: mov     rcx, [rax+20h]
 * 0000000140362D70: mov     rax, [rbx+200h]
 * 0000000140362D77: mov     [rbp+0B70h+var_BD0], rcx
 * 0000000140362D7B: call    KeGuardDispatchICall
 * 0000000140362D80: mov     [rsp+0C70h+var_C20], rax
 * 0000000140362D85: mov     r12, rax
 * 0000000140362D88: test    rax, rax
 * 0000000140362D8B: jz      loc_140364EC3
 * 0000000140362D91: mov     eax, [rbp+0B70h+var_9B4]
 * 0000000140362D97: mov     ecx, 4
 * 0000000140362D9C: mov     r13, [rbp+0B70h+var_A28]
 * 0000000140362DA3: mov     [rbp+0B70h+var_BB4], eax
 * 0000000140362DA6: lea     rax, [rbp+0B70h+var_A58]
 * 0000000140362DAD: mov     [rsp+0C70h+var_C08], r13
 * 0000000140362DB2: lea     edx, [rcx-3]
 * 0000000140362DB5: mov     [rbp+0B70h+var_A60], r15
 * 0000000140362DBC: mov     [rax], r15b
 * 0000000140362DBF: add     rax, rdx
 * 0000000140362DC2: add     ecx, r14d
 * 0000000140362DC5: jnz     short loc_140362DBC
 * 0000000140362DC7: xor     edx, edx
 * 0000000140362DC9: mov     dword ptr [rbp+0B70h+arg_8], r15d
 * 0000000140362DD0: cmp     [rbx+80Ch], edx
 * 0000000140362DD6: jbe     loc_140362FE6
 * 0000000140362DDC: mov     ecx, [rbp+0B70h+var_A58]
 * 0000000140362DE2: mov     r9d, dword ptr [rbp+0B70h+var_A60+4]
 * 0000000140362DE9: mov     r11d, dword ptr [rbp+0B70h+var_A60]
 * 0000000140362DF0: mov     rax, [rbx+0A78h]
 * 0000000140362DF7: mov     r14, rbx
 * 0000000140362DFA: test    rax, rax
 * 0000000140362DFD: mov     r10d, edx
 * 0000000140362E00: cmovnz  r14, rax
 * 0000000140362E04: mov     [rsp+0C70h+var_BF8], r14
 * 0000000140362E09: mov     r8d, [r14+808h]
 * 0000000140362E10: add     r8, r14
 * 0000000140362E13: test    r11d, r11d
 * 0000000140362E16: jz      short loc_140362E26
 * 0000000140362E18: cmp     r9d, r15d
 * 0000000140362E1B: ja      short loc_140362E26
 * 0000000140362E1D: mov     r8d, ecx
 * 0000000140362E20: mov     r10d, r9d
 * 0000000140362E23: add     r8, r14
 * 0000000140362E26: cmp     r10d, r15d
 * 0000000140362E29: jz      loc_140362F6A
 * 0000000140362E2F: mov     eax, r15d
 * 0000000140362E32: mov     esi, 2
 * 0000000140362E37: sub     eax, r10d
 * 0000000140362E3A: mov     r15, 0AAAAAAAAAAAAAAABh
 * 0000000140362E44: mov     r9d, eax
 * 0000000140362E47: add     r10d, eax
 * 0000000140362E4A: lea     r14d, [rsi+0Ah]
 * 0000000140362E4E: mov     ecx, [r8]
 * 0000000140362E51: cmp     ecx, r14d
 * 0000000140362E54: jg      short loc_140362EA6
 * 0000000140362E56: jz      short loc_140362EBF
 * 0000000140362E58: sub     ecx, 1
 * 0000000140362E5B: jz      short loc_140362EBF
 * 0000000140362E5D: sub     ecx, 6
 * 0000000140362E60: jz      short loc_140362E95
 * 0000000140362E62: sub     ecx, 1
 * 0000000140362E65: jz      short loc_140362E8B
 * 0000000140362E67: cmp     ecx, esi
 * 0000000140362E69: jnz     loc_140362EFE
 * 0000000140362E6F: mov     eax, [r8+1Ch]
 * 0000000140362E73: add     eax, 3
 * 0000000140362E76: shl     eax, 4
 * 0000000140362E79: jmp     loc_140362F35
 * 0000000140362E7E: xor     r15d, r15d
 * 0000000140362E81: mov     eax, 0C000022Dh
 * 0000000140362E86: jmp     loc_140362D3A
 * 0000000140362E8B: movzx   eax, word ptr [r8+20h]
 * 0000000140362E90: jmp     loc_140362F2F
 * 0000000140362E95: mov     eax, [r8+18h]
 * 0000000140362E99: add     eax, esi
 * 0000000140362E9B: lea     eax, [rax+rax*2]
 * 0000000140362E9E: shl     eax, 3
 * 0000000140362EA1: jmp     loc_140362F35
 * 0000000140362EA6: cmp     ecx, 1Ch
 * 0000000140362EA9: jz      short loc_140362F2A
 * 0000000140362EAB: cmp     ecx, 1Eh
 * 0000000140362EAE: jz      short loc_140362F05
 * 0000000140362EB0: cmp     ecx, 20h ; ' '
 * 0000000140362EB3: jle     short loc_140362EFE
 * 0000000140362EB5: cmp     ecx, 22h ; '"'
 * 0000000140362EB8: jle     short loc_140362ED6
 * 0000000140362EBA: cmp     ecx, 2Bh ; '+'
 * 0000000140362EBD: jnz     short loc_140362EFE
 * 0000000140362EBF: mov     ecx, [r8+10h]
 * 0000000140362EC3: mov     rax, r15
 * 0000000140362EC6: mul     rcx
 * 0000000140362EC9: shr     rdx, 3
 * 0000000140362ECD: lea     eax, ds:30h[rdx*4]
 * 0000000140362ED4: jmp     short loc_140362F35
 * 0000000140362ED6: mov     ecx, [r8+20h]
 * 0000000140362EDA: mov     edx, [r8+28h]
 * 0000000140362EDE: and     ecx, 0FFFh
 * 0000000140362EE4: add     rdx, 0FFFh
 * 0000000140362EEB: add     rdx, rcx
 * 0000000140362EEE: shr     rdx, 0Ch
 * 0000000140362EF2: lea     eax, [rdx+rdx*4]
 * 0000000140362EF5: lea     eax, ds:30h[rax*4]
 * 0000000140362EFC: jmp     short loc_140362F35
 * 0000000140362EFE: mov     eax, 30h ; '0'
 * 0000000140362F03: jmp     short loc_140362F35
 * 0000000140362F05: mov     ecx, [r8+24h]
 * 0000000140362F09: mov     rax, r15
 * 0000000140362F0C: dec     ecx
 * 0000000140362F0E: mul     rcx
 * 0000000140362F11: movzx   eax, word ptr [r8+28h]
 * 0000000140362F16: shr     rdx, 3
 * 0000000140362F1A: add     edx, 7
 * 0000000140362F1D: and     edx, 0FFFFFFF8h
 * 0000000140362F20: add     eax, esi
 * 0000000140362F22: lea     eax, [rax+rax*2]
 * 0000000140362F25: lea     eax, [rdx+rax*8]
 * 0000000140362F28: jmp     short loc_140362F35
 * 0000000140362F2A: movzx   eax, word ptr [r8+28h]
 * 0000000140362F2F: add     eax, 37h ; '7'
 * 0000000140362F32: and     eax, 0FFFFFFF8h
 * 0000000140362F35: add     r8, rax
 * 0000000140362F38: mov     eax, 1
 * 0000000140362F3D: sub     r9, rax
 * 0000000140362F40: jnz     loc_140362E4E
 * 0000000140362F46: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140362F4B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140362F52: mov     r14, [rsp+0C70h+var_BF8]
 * 0000000140362F57: mov     r15d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140362F5E: mov     r12, [rsp+0C70h+var_C20]
 * 0000000140362F63: mov     r13, [rsp+0C70h+var_C08]
 * 0000000140362F68: jmp     short loc_140362F6F
 * 0000000140362F6A: mov     eax, 1
 * 0000000140362F6F: mov     ecx, r8d
 * 0000000140362F72: mov     dword ptr [rbp+0B70h+var_A60], eax
 * 0000000140362F78: sub     ecx, r14d
 * 0000000140362F7B: mov     dword ptr [rbp+0B70h+var_A60+4], r10d
 * 0000000140362F82: mov     [rbp+0B70h+var_A58], ecx
 * 0000000140362F88: mov     r11d, eax
 * 0000000140362F8B: movsxd  rdx, dword ptr [r8]
 * 0000000140362F8E: mov     r9d, r10d
 * 0000000140362F91: cmp     edx, 2Bh ; '+'
 * 0000000140362F94: ja      short loc_140362FB5
 * 0000000140362F96: mov     r10, 80000001002h
 * 0000000140362FA0: bt      r10, rdx
 * 0000000140362FA4: jnb     short loc_140362FB5
 * 0000000140362FA6: cmp     [r8+8], r12
 * 0000000140362FAA: jnz     short loc_140362FB5
 * 0000000140362FAC: mov     eax, [rbp+0B70h+var_BB4]
 * 0000000140362FAF: cmp     [r8+10h], eax
 * 0000000140362FB3: jz      short loc_140362FE1
 * 0000000140362FB5: lea     eax, [rdx-21h]
 * 0000000140362FB8: mov     edx, 1
 * 0000000140362FBD: cmp     eax, edx
 * 0000000140362FBF: ja      short loc_140362FC7
 * 0000000140362FC1: cmp     [r8+20h], r13
 * 0000000140362FC5: jz      short loc_140362FE1
 * 0000000140362FC7: add     r15d, edx
 * 0000000140362FCA: mov     dword ptr [rbp+0B70h+arg_8], r15d
 * 0000000140362FD1: cmp     r15d, [rbx+80Ch]
 * 0000000140362FD8: jnb     short loc_140362FE6
 * 0000000140362FDA: xor     edx, edx
 * 0000000140362FDC: jmp     loc_140362DF0
 * 0000000140362FE1: xor     r15d, r15d
 * 0000000140362FE4: jmp     short loc_140362FEC
 * 0000000140362FE6: xor     r15d, r15d
 * 0000000140362FE9: mov     r8d, r15d
 * 0000000140362FEC: test    r8, r8
 * 0000000140362FEF: jz      short loc_140362FFE
 * 0000000140362FF1: mov     rsi, rbx
 * 0000000140362FF4: mov     [rsp+0C70h+var_C10], rbx
 * 0000000140362FF9: jmp     loc_140364D1C
 * 0000000140362FFE: mov     rax, [rbx+200h]
 * 0000000140363005: lea     r8, [rbp+0B70h+var_B8C]
 * 0000000140363009: mov     rcx, [rbp+0B70h+var_BD0]
 * 000000014036300D: lea     rdx, [rbp+0B70h+var_B68]
 * 0000000140363011: mov     [rbp+0B70h+var_B40], rbx
 * 0000000140363015: call    KeGuardDispatchICall
 * 000000014036301A: mov     [rbp+0B70h+var_BE0], rax
 * 000000014036301E: test    rax, rax
 * 0000000140363021: jnz     short loc_140363035
 * 0000000140363023: mov     [rbp+0B70h+var_BAC], 0C000007Bh
 * 000000014036302A: mov     r12d, 80000000h
 * 0000000140363030: jmp     loc_140364C56
 * 0000000140363035: mov     r12, [rbp+0B70h+var_B68]
 * 0000000140363039: lea     rax, [rbp+0B70h+var_A78]
 * 0000000140363040: mov     r13d, [rbp+0B70h+var_B8C]
 * 0000000140363044: mov     ecx, 4
 * 0000000140363049: mov     [rbp+0B70h+var_BB4], r13d
 * 000000014036304D: mov     r8d, 0FFFFFFFFh
 * 0000000140363053: mov     [rsp+0C70h+var_C20], r12
 * 0000000140363058: mov     [rbp+0B70h+var_A80], r15
 * 000000014036305F: lea     edx, [rcx-3]
 * 0000000140363062: mov     [rax], r15b
 * 0000000140363065: add     rax, rdx
 * 0000000140363068: add     ecx, r8d
 * 000000014036306B: jnz     short loc_140363062
 * 000000014036306D: xor     edx, edx
 * 000000014036306F: mov     dword ptr [rbp+0B70h+arg_8], r15d
 * 0000000140363076: cmp     [rbx+80Ch], edx
 * 000000014036307C: jbe     loc_14036327F
 * 0000000140363082: mov     ecx, [rbp+0B70h+var_A78]
 * 0000000140363088: mov     r9d, dword ptr [rbp+0B70h+var_A80+4]
 * 000000014036308F: mov     r11d, dword ptr [rbp+0B70h+var_A80]
 * 0000000140363096: mov     rax, [rbx+0A78h]
 * 000000014036309D: mov     r14, rbx
 * 00000001403630A0: test    rax, rax
 * 00000001403630A3: mov     r10d, edx
 * 00000001403630A6: cmovnz  r14, rax
 * 00000001403630AA: mov     [rsp+0C70h+var_BF8], r14
 * 00000001403630AF: mov     r8d, [r14+808h]
 * 00000001403630B6: add     r8, r14
 * 00000001403630B9: test    r11d, r11d
 * 00000001403630BC: jz      short loc_1403630CC
 * 00000001403630BE: cmp     r9d, r15d
 * 00000001403630C1: ja      short loc_1403630CC
 * 00000001403630C3: mov     r8d, ecx
 * 00000001403630C6: mov     r10d, r9d
 * 00000001403630C9: add     r8, r14
 * 00000001403630CC: cmp     r10d, r15d
 * 00000001403630CF: jz      loc_140363202
 * 00000001403630D5: mov     eax, r15d
 * 00000001403630D8: mov     esi, 2
 * 00000001403630DD: sub     eax, r10d
 * 00000001403630E0: mov     r15, 0AAAAAAAAAAAAAAABh
 * 00000001403630EA: mov     r9d, eax
 * 00000001403630ED: add     r10d, eax
 * 00000001403630F0: lea     r14d, [rsi+0Ah]
 * 00000001403630F4: mov     ecx, [r8]
 * 00000001403630F7: cmp     ecx, r14d
 * 00000001403630FA: jg      short loc_14036313F
 * 00000001403630FC: jz      short loc_140363158
 * 00000001403630FE: sub     ecx, 1
 * 0000000140363101: jz      short loc_140363158
 * 0000000140363103: sub     ecx, 6
 * 0000000140363106: jz      short loc_14036312E
 * 0000000140363108: sub     ecx, 1
 * 000000014036310B: jz      short loc_140363124
 * 000000014036310D: cmp     ecx, esi
 * 000000014036310F: jnz     loc_140363197
 * 0000000140363115: mov     eax, [r8+1Ch]
 * 0000000140363119: add     eax, 3
 * 000000014036311C: shl     eax, 4
 * 000000014036311F: jmp     loc_1403631CE
 * 0000000140363124: movzx   eax, word ptr [r8+20h]
 * 0000000140363129: jmp     loc_1403631C8
 * 000000014036312E: mov     eax, [r8+18h]
 * 0000000140363132: add     eax, esi
 * 0000000140363134: lea     eax, [rax+rax*2]
 * 0000000140363137: shl     eax, 3
 * 000000014036313A: jmp     loc_1403631CE
 * 000000014036313F: cmp     ecx, 1Ch
 * 0000000140363142: jz      short loc_1403631C3
 * 0000000140363144: cmp     ecx, 1Eh
 * 0000000140363147: jz      short loc_14036319E
 * 0000000140363149: cmp     ecx, 20h ; ' '
 * 000000014036314C: jle     short loc_140363197
 * 000000014036314E: cmp     ecx, 22h ; '"'
 * 0000000140363151: jle     short loc_14036316F
 * 0000000140363153: cmp     ecx, 2Bh ; '+'
 * 0000000140363156: jnz     short loc_140363197
 * 0000000140363158: mov     ecx, [r8+10h]
 * 000000014036315C: mov     rax, r15
 * 000000014036315F: mul     rcx
 * 0000000140363162: shr     rdx, 3
 * 0000000140363166: lea     eax, ds:30h[rdx*4]
 * 000000014036316D: jmp     short loc_1403631CE
 * 000000014036316F: mov     ecx, [r8+20h]
 * 0000000140363173: mov     edx, [r8+28h]
 * 0000000140363177: and     ecx, 0FFFh
 * 000000014036317D: add     rdx, 0FFFh
 * 0000000140363184: add     rdx, rcx
 * 0000000140363187: shr     rdx, 0Ch
 * 000000014036318B: lea     eax, [rdx+rdx*4]
 * 000000014036318E: lea     eax, ds:30h[rax*4]
 * 0000000140363195: jmp     short loc_1403631CE
 * 0000000140363197: mov     eax, 30h ; '0'
 * 000000014036319C: jmp     short loc_1403631CE
 * 000000014036319E: mov     ecx, [r8+24h]
 * 00000001403631A2: mov     rax, r15
 * 00000001403631A5: dec     ecx
 * 00000001403631A7: mul     rcx
 * 00000001403631AA: movzx   eax, word ptr [r8+28h]
 * 00000001403631AF: shr     rdx, 3
 * 00000001403631B3: add     edx, 7
 * 00000001403631B6: and     edx, 0FFFFFFF8h
 * 00000001403631B9: add     eax, esi
 * 00000001403631BB: lea     eax, [rax+rax*2]
 * 00000001403631BE: lea     eax, [rdx+rax*8]
 * 00000001403631C1: jmp     short loc_1403631CE
 * 00000001403631C3: movzx   eax, word ptr [r8+28h]
 * 00000001403631C8: add     eax, 37h ; '7'
 * 00000001403631CB: and     eax, 0FFFFFFF8h
 * 00000001403631CE: add     r8, rax
 * 00000001403631D1: mov     eax, 1
 * 00000001403631D6: sub     r9, rax
 * 00000001403631D9: jnz     loc_1403630F4
 * 00000001403631DF: mov     rsi, [rsp+0C70h+var_C10]
 * 00000001403631E4: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403631EB: mov     r14, [rsp+0C70h+var_BF8]
 * 00000001403631F0: mov     r15d, dword ptr [rbp+0B70h+arg_8]
 * 00000001403631F7: mov     r12, [rsp+0C70h+var_C20]
 * 00000001403631FC: mov     r13d, [rbp+0B70h+var_BB4]
 * 0000000140363200: jmp     short loc_140363207
 * 0000000140363202: mov     eax, 1
 * 0000000140363207: mov     ecx, r8d
 * 000000014036320A: mov     dword ptr [rbp+0B70h+var_A80], eax
 * 0000000140363210: sub     ecx, r14d
 * 0000000140363213: mov     dword ptr [rbp+0B70h+var_A80+4], r10d
 * 000000014036321A: mov     [rbp+0B70h+var_A78], ecx
 * 0000000140363220: mov     r11d, eax
 * 0000000140363223: movsxd  rdx, dword ptr [r8]
 * 0000000140363226: mov     r9d, r10d
 * 0000000140363229: cmp     edx, 2Bh ; '+'
 * 000000014036322C: ja      short loc_14036324E
 * 000000014036322E: mov     r10, 80000001002h
 * 0000000140363238: bt      r10, rdx
 * 000000014036323C: jnb     short loc_14036324E
 * 000000014036323E: mov     rax, [rbp+0B70h+var_BE0]
 * 0000000140363242: cmp     [r8+8], rax
 * 0000000140363246: jnz     short loc_14036324E
 * 0000000140363248: cmp     [r8+10h], r13d
 * 000000014036324C: jz      short loc_14036327A
 * 000000014036324E: lea     eax, [rdx-21h]
 * 0000000140363251: mov     edx, 1
 * 0000000140363256: cmp     eax, edx
 * 0000000140363258: ja      short loc_140363260
 * 000000014036325A: cmp     [r8+20h], r12
 * 000000014036325E: jz      short loc_14036327A
 * 0000000140363260: add     r15d, edx
 * 0000000140363263: mov     dword ptr [rbp+0B70h+arg_8], r15d
 * 000000014036326A: cmp     r15d, [rbx+80Ch]
 * 0000000140363271: jnb     short loc_14036327F
 * 0000000140363273: xor     edx, edx
 * 0000000140363275: jmp     loc_140363096
 * 000000014036327A: xor     r15d, r15d
 * 000000014036327D: jmp     short loc_140363285
 * 000000014036327F: xor     r15d, r15d
 * 0000000140363282: mov     r8d, r15d
 * 0000000140363285: mov     [rbp+0B70h+var_AD8], r8
 * 000000014036328C: test    r8, r8
 * 000000014036328F: jnz     loc_140364C5E
 * 0000000140363295: mov     rax, [rbx+2A8h]
 * 000000014036329C: mov     rcx, [rbp+0B70h+var_BD0]
 * 00000001403632A0: call    KeGuardDispatchICall
 * 00000001403632A5: mov     ecx, [rbp+0B70h+var_B8C]
 * 00000001403632A8: mov     dword ptr [rbp+0B70h+var_BD8], ecx
 * 00000001403632AB: mov     [rbp+0B70h+var_BE8], eax
 * 00000001403632AE: test    eax, eax
 * 00000001403632B0: jz      loc_140364C5E
 * 00000001403632B6: test    dword ptr [rbx+990h], 40000000h
 * 00000001403632C0: jz      short loc_1403632E3
 * 00000001403632C2: mov     rdx, [rbp+0B70h+var_B68]
 * 00000001403632C6: lea     rcx, [rbp+0B70h+var_B30]
 * 00000001403632CA: mov     r8d, 0Fh
 * 00000001403632D0: call    sub_1409D0FB4
 * 00000001403632D5: mov     rsi, [rbp+0B70h+var_B30]
 * 00000001403632D9: mov     ecx, eax
 * 00000001403632DB: mov     [rbp+0B70h+var_BAC], eax
 * 00000001403632DE: jmp     loc_140364C37
 * 00000001403632E3: mov     rax, [rbx+1F0h]
 * 00000001403632EA: lea     r9, [rbp+0B70h+var_B8C]
 * 00000001403632EE: mov     rcx, [rbp+0B70h+var_B68]
 * 00000001403632F2: xor     r8d, r8d
 * 00000001403632F5: mov     [rbp+0B70h+var_6E0], r15
 * 00000001403632FC: mov     [rbp+0B70h+var_910], r15d
 * 0000000140363303: lea     r12d, [r8+1]
 * 0000000140363307: mov     dl, r12b
 * 000000014036330A: call    KeGuardDispatchICall
 * 000000014036330F: mov     rdx, rax
 * 0000000140363312: lea     r8d, [r12+0Bh]
 * 0000000140363317: neg     rax
 * 000000014036331A: mov     [rbp+0B70h+var_6F8], rdx
 * 0000000140363321: lea     r9, [rbp+0B70h+var_B8C]
 * 0000000140363325: mov     dl, r12b
 * 0000000140363328: sbb     ecx, ecx
 * 000000014036332A: and     ecx, [rbp+0B70h+var_B8C]
 * 000000014036332D: mov     [rbp+0B70h+var_B8C], ecx
 * 0000000140363330: mov     rax, [rbx+1F0h]
 * 0000000140363337: mov     [rbp+0B70h+var_91C], ecx
 * 000000014036333D: mov     rcx, [rbp+0B70h+var_B68]
 * 0000000140363341: call    KeGuardDispatchICall
 * 0000000140363346: mov     rdx, rax
 * 0000000140363349: mov     [rsp+0C70h+var_C08], rax
 * 000000014036334E: neg     rax
 * 0000000140363351: mov     [rbp+0B70h+var_6F0], rdx
 * 0000000140363358: lea     r8d, [r12+9]
 * 000000014036335D: mov     dl, r12b
 * 0000000140363360: sbb     ecx, ecx
 * 0000000140363362: lea     r9, [rbp+0B70h+var_B8C]
 * 0000000140363366: and     ecx, [rbp+0B70h+var_B8C]
 * 0000000140363369: mov     [rbp+0B70h+var_B8C], ecx
 * 000000014036336C: mov     rax, [rbx+1F0h]
 * 0000000140363373: mov     dword ptr [rbp+0B70h+arg_8], ecx
 * 0000000140363379: mov     [rbp+0B70h+var_918], ecx
 * 000000014036337F: mov     rcx, [rbp+0B70h+var_B68]
 * 0000000140363383: call    KeGuardDispatchICall
 * 0000000140363388: mov     rdx, rax
 * 000000014036338B: neg     rax
 * 000000014036338E: mov     [rbp+0B70h+var_6E8], rdx
 * 0000000140363395: sbb     ecx, ecx
 * 0000000140363397: and     ecx, [rbp+0B70h+var_B8C]
 * 000000014036339A: mov     [rbp+0B70h+var_B8C], ecx
 * 000000014036339D: mov     rax, [rbx+1F8h]
 * 00000001403633A4: mov     [rbp+0B70h+var_914], ecx
 * 00000001403633AA: mov     rcx, [rbp+0B70h+var_B68]
 * 00000001403633AE: call    KeGuardDispatchICall
 * 00000001403633B3: mov     r14, rax
 * 00000001403633B6: test    rax, rax
 * 00000001403633B9: jz      loc_140363023
 * 00000001403633BF: mov     rax, [rbx+498h]
 * 00000001403633C6: lea     rdx, [rbp+0B70h+var_830]
 * 00000001403633CD: mov     rcx, [rbp+0B70h+var_B68]
 * 00000001403633D1: call    KeGuardDispatchICall
 * 00000001403633D6: mov     r15d, [rbx+7E4h]
 * 00000001403633DD: mov     r8d, [rbx+924h]
 * 00000001403633E4: mov     [rbp+0B70h+var_6D8], rax
 * 00000001403633EB: mov     eax, [rbp+0B70h+var_830]
 * 00000001403633F1: mov     [rbp+0B70h+var_90C], eax
 * 00000001403633F7: mov     rax, [rbp+0B70h+var_B68]
 * 00000001403633FB: mov     [rbp+0B70h+var_700], rax
 * 0000000140363402: mov     eax, [r14+54h]
 * 0000000140363406: mov     [rbp+0B70h+var_920], eax
 * 000000014036340C: lea     eax, [r15+120h]
 * 0000000140363413: cmp     eax, [rbx+0A1Ch]
 * 0000000140363419: jbe     loc_14036350C
 * 000000014036341F: mov     edx, eax
 * 0000000140363421: mov     rcx, rbx
 * 0000000140363424: call    sub_14036AB20
 * 0000000140363429: xor     r12d, r12d
 * 000000014036342C: mov     [rbp+0B70h+var_BD0], rax
 * 0000000140363430: mov     r14, rax
 * 0000000140363433: test    rax, rax
 * 0000000140363436: jz      loc_140363500
 * 000000014036343C: mov     ecx, [rbx+990h]
 * 0000000140363442: test    cl, 4
 * 0000000140363445: jnz     loc_1403634F6
 * 000000014036344B: mov     eax, [rbx+7E4h]
 * 0000000140363451: lea     r9d, [r12+1]
 * 0000000140363456: mov     r8, [rbx+7C8h]
 * 000000014036345D: and     ecx, 20000000h
 * 0000000140363463: neg     ecx
 * 0000000140363465: sbb     edx, edx
 * 0000000140363467: and     edx, [rbx+924h]
 * 000000014036346D: cmp     eax, 8
 * 0000000140363470: jb      short loc_140363487
 * 0000000140363472: mov     ecx, eax
 * 0000000140363474: shr     rcx, 3
 * 0000000140363478: mov     [rbx], r12
 * 000000014036347B: add     eax, 0FFFFFFF8h
 * 000000014036347E: add     rbx, 8
 * 0000000140363482: sub     rcx, r9
 * 0000000140363485: jnz     short loc_140363478
 * 0000000140363487: test    eax, eax
 * 0000000140363489: jz      short loc_14036349A
 * 000000014036348B: mov     ecx, 0FFFFFFFFh
 * 0000000140363490: mov     [rbx], r12b
 * 0000000140363493: add     rbx, r9
 * 0000000140363496: add     eax, ecx
 * 0000000140363498: jnz     short loc_140363490
 * 000000014036349A: mov     ebx, [r14+924h]
 * 00000001403634A1: mov     [r14+924h], edx
 * 00000001403634A8: cmp     edx, 3
 * 00000001403634AB: jz      short loc_1403634E0
 * 00000001403634AD: test    dword ptr [r14+990h], 10000000h
 * 00000001403634B8: mov     ecx, r12d
 * 00000001403634BB: cmovz   ecx, edx
 * 00000001403634BE: test    ecx, ecx
 * 00000001403634C0: jz      short loc_1403634D7
 * 00000001403634C2: mov     rax, [r14+228h]
 * 00000001403634C9: lea     rcx, [r8-8]
 * 00000001403634CD: mov     rdx, [rcx]
 * 00000001403634D0: call    KeGuardDispatchICall
 * 00000001403634D5: jmp     short loc_1403634EF
 * 00000001403634D7: mov     rax, [r14+100h]
 * 00000001403634DE: jmp     short loc_1403634E7
 * 00000001403634E0: mov     rax, [r14+368h]
 * 00000001403634E7: mov     rcx, r8
 * 00000001403634EA: call    KeGuardDispatchICall
 * 00000001403634EF: mov     [r14+924h], ebx
 * 00000001403634F6: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 00000001403634FE: jmp     short loc_14036351C
 * 0000000140363500: xor     r15d, r15d
 * 0000000140363503: mov     [rbp+0B70h+var_B40], r15
 * 0000000140363507: jmp     loc_14036302A
 * 000000014036350C: mov     r14, rbx
 * 000000014036350F: mov     [rbp+0B70h+var_BD0], rbx
 * 0000000140363513: mov     [rbx+7E4h], eax
 * 0000000140363519: xor     r12d, r12d
 * 000000014036351C: mov     eax, 6
 * 0000000140363521: lea     r10, [r14+r15]
 * 0000000140363525: add     [r14+80Ch], eax
 * 000000014036352C: lea     r13, [rbp+0B70h+var_700]
 * 0000000140363533: mov     [rbp+0B70h+var_8F8], r10
 * 000000014036353A: lea     rdi, [rbp+0B70h+var_920]
 * 0000000140363541: mov     [rbp+0B70h+var_AD8], r10
 * 0000000140363548: lea     ebx, [rax-5]
 * 000000014036354B: mov     [rsp+0C70h+var_C20], rax
 * 0000000140363550: mov     r15d, [rdi]
 * 0000000140363553: mov     rdx, rax
 * 0000000140363556: mov     rsi, [r13+0]
 * 000000014036355A: mov     ecx, 30h ; '0'
 * 000000014036355F: mov     [rbp+0B70h+var_BB4], r15d
 * 0000000140363563: mov     rax, r10
 * 0000000140363566: mov     [rax], r12
 * 0000000140363569: add     ecx, 0FFFFFFF8h
 * 000000014036356C: add     rax, 8
 * 0000000140363570: sub     rdx, rbx
 * 0000000140363573: jnz     short loc_140363566
 * 0000000140363575: test    ecx, ecx
 * 0000000140363577: jz      short loc_140363588
 * 0000000140363579: mov     edx, 0FFFFFFFFh
 * 000000014036357E: mov     [rax], r12b
 * 0000000140363581: add     rax, rbx
 * 0000000140363584: add     ecx, edx
 * 0000000140363586: jnz     short loc_14036357E
 * 0000000140363588: mov     dword ptr [r10], 0Bh
 * 000000014036358F: lea     rcx, [rsi+r15]
 * 0000000140363593: mov     [r10+8], rsi
 * 0000000140363597: mov     r9, rsi
 * 000000014036359A: mov     [r10+10h], r15d
 * 000000014036359E: mov     rax, rsi
 * 00000001403635A1: add     [r14+828h], r15d
 * 00000001403635A8: mov     r11d, [r14+814h]
 * 00000001403635AF: mov     r12, [r14+818h]
 * 00000001403635B6: cmp     rsi, rcx
 * 00000001403635B9: jnb     short loc_1403635CB
 * 00000001403635BB: mov     edx, 40h ; '@'
 * 00000001403635C0: prefetchnta byte ptr [rax]
 * 00000001403635C3: add     rax, rdx
 * 00000001403635C6: cmp     rax, rcx
 * 00000001403635C9: jb      short loc_1403635C0
 * 00000001403635CB: mov     ebx, r15d
 * 00000001403635CE: mov     r8, r12
 * 00000001403635D1: shr     ebx, 7
 * 00000001403635D4: test    ebx, ebx
 * 00000001403635D6: jz      short loc_14036364B
 * 00000001403635D8: mov     r15, 7010008004002001h
 * 00000001403635E2: mov     edx, 8
 * 00000001403635E7: lea     r14d, [rdx-7]
 * 00000001403635EB: mov     rax, [r9]
 * 00000001403635EE: mov     ecx, r11d
 * 00000001403635F1: xor     rax, r8
 * 00000001403635F4: mov     r8, [r9+8]
 * 00000001403635F8: rol     rax, cl
 * 00000001403635FB: add     r9, 10h
 * 00000001403635FF: xor     r8, rax
 * 0000000140363602: rol     r8, cl
 * 0000000140363605: sub     rdx, r14
 * 0000000140363608: jnz     short loc_1403635EB
 * 000000014036360A: mov     rcx, r9
 * 000000014036360D: sub     rcx, rsi
 * 0000000140363610: xor     rcx, r12
 * 0000000140363613: mov     rax, rcx
 * 0000000140363616: rol     rax, 11h
 * 000000014036361A: xor     rcx, rax
 * 000000014036361D: mov     rax, r15
 * 0000000140363620: mul     rcx
 * 0000000140363623: mov     [rbp+0B70h+var_488], rdx
 * 000000014036362A: xor     edx, eax
 * 000000014036362C: xor     r11d, edx
 * 000000014036362F: mov     rax, r14
 * 0000000140363632: and     r11d, 3Fh
 * 0000000140363636: cmovz   r11d, eax
 * 000000014036363A: mov     eax, 0FFFFFFFFh
 * 000000014036363F: add     ebx, eax
 * 0000000140363641: jnz     short loc_1403635E2
 * 0000000140363643: mov     r14, [rbp+0B70h+var_BD0]
 * 0000000140363647: mov     r15d, [rbp+0B70h+var_BB4]
 * 000000014036364B: mov     edx, r15d
 * 000000014036364E: and     edx, 7Fh
 * 0000000140363651: cmp     edx, 8
 * 0000000140363654: jb      short loc_14036367B
 * 0000000140363656: mov     ebx, edx
 * 0000000140363658: mov     r14d, 1
 * 000000014036365E: shr     rbx, 3
 * 0000000140363662: xor     r8, [r9]
 * 0000000140363665: mov     ecx, r11d
 * 0000000140363668: rol     r8, cl
 * 000000014036366B: add     r9, 8
 * 000000014036366F: add     edx, 0FFFFFFF8h
 * 0000000140363672: sub     rbx, r14
 * 0000000140363675: jnz     short loc_140363662
 * 0000000140363677: mov     r14, [rbp+0B70h+var_BD0]
 * 000000014036367B: xor     r12d, r12d
 * 000000014036367E: lea     ebx, [r12+1]
 * 0000000140363683: test    edx, edx
 * 0000000140363685: jz      short loc_1403636A5
 * 0000000140363687: mov     r12d, 0FFFFFFFFh
 * 000000014036368D: movzx   eax, byte ptr [r9]
 * 0000000140363691: mov     ecx, r11d
 * 0000000140363694: xor     r8, rax
 * 0000000140363697: add     r9, rbx
 * 000000014036369A: rol     r8, cl
 * 000000014036369D: add     edx, r12d
 * 00000001403636A0: jnz     short loc_14036368D
 * 00000001403636A2: xor     r12d, r12d
 * 00000001403636A5: mov     rax, r8
 * 00000001403636A8: jmp     short loc_1403636AD
 * 00000001403636AA: xor     r8d, eax
 * 00000001403636AD: shr     rax, 1Fh
 * 00000001403636B1: test    rax, rax
 * 00000001403636B4: jnz     short loc_1403636AA
 * 00000001403636B6: btr     r8d, 1Fh
 * 00000001403636BB: add     rdi, 4
 * 00000001403636BF: mov     [r10+14h], r8d
 * 00000001403636C3: add     r13, 8
 * 00000001403636C7: add     [r14+828h], r15d
 * 00000001403636CE: mov     eax, 6
 * 00000001403636D3: mov     r10, [rbp+0B70h+var_8F8]
 * 00000001403636DA: add     r10, 30h ; '0'
 * 00000001403636DE: sub     [rsp+0C70h+var_C20], rbx
 * 00000001403636E3: mov     [rbp+0B70h+var_8F8], r10
 * 00000001403636EA: jnz     loc_140363550
 * 00000001403636F0: mov     rcx, [rbp+0B70h+var_AD8]
 * 00000001403636F7: mov     rsi, r14
 * 00000001403636FA: mov     rax, [rbp+0B70h+var_B68]
 * 00000001403636FE: mov     r8d, dword ptr [rbp+0B70h+var_BD8]
 * 0000000140363702: mov     rdx, [rbp+0B70h+var_BE0]
 * 0000000140363706: mov     dword ptr [rcx], 2Ch ; ','
 * 000000014036370C: mov     [rcx+18h], rax
 * 0000000140363710: mov     eax, 2
 * 0000000140363715: or      [rcx+20h], eax
 * 0000000140363718: lea     rax, [rbp+0B70h+var_9B0]
 * 000000014036371F: mov     r9, [rbp+0B70h+var_B68]
 * 0000000140363723: lea     rcx, [rbp+0B70h+var_B40]
 * 0000000140363727: mov     [rsp+0C70h+var_C38], rax
 * 000000014036372C: lea     rax, [rbp+0B70h+var_AB4]
 * 0000000140363733: mov     [rsp+0C70h+var_C40], rax
 * 0000000140363738: mov     eax, 0Fh
 * 000000014036373D: mov     dword ptr [rsp+0C70h+var_C48], eax
 * 0000000140363741: mov     eax, [rbp+0B70h+var_BE8]
 * 0000000140363744: mov     dword ptr [rsp+0C70h+BugCheckParameter4], eax
 * 0000000140363748: mov     [rbp+0B70h+var_B40], r14
 * 000000014036374C: mov     [rsp+0C70h+var_C10], r14
 * 0000000140363751: mov     [rbp+0B70h+var_B30], r14
 * 0000000140363755: call    sub_14036A0A4
 * 000000014036375A: xor     r15d, r15d
 * 000000014036375D: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140363764: test    eax, eax
 * 0000000140363766: jns     short loc_140363772
 * 0000000140363768: mov     ecx, eax
 * 000000014036376A: mov     [rbp+0B70h+var_BAC], eax
 * 000000014036376D: jmp     loc_140364C3C
 * 0000000140363772: mov     rsi, [rbp+0B70h+var_B40]
 * 0000000140363776: mov     rcx, [rbp+0B70h+var_AD8]
 * 000000014036377D: mov     rax, rsi
 * 0000000140363780: mov     r9d, [rbp+0B70h+var_9B0]
 * 0000000140363787: sub     rax, r14
 * 000000014036378A: sub     r9d, [rbp+0B70h+var_AB4]
 * 0000000140363791: add     rcx, rax
 * 0000000140363794: mov     ebx, [rbp+0B70h+var_AB4]
 * 000000014036379A: add     rbx, [rbp+0B70h+var_B68]
 * 000000014036379E: mov     [rbp+0B70h+var_AD8], rcx
 * 00000001403637A5: lea     r12, [rcx+0C0h]
 * 00000001403637AC: mov     [rsp+0C70h+var_C10], rsi
 * 00000001403637B1: mov     ecx, 30h ; '0'
 * 00000001403637B6: mov     [rbp+0B70h+var_B30], rsi
 * 00000001403637BA: mov     [rsp+0C70h+var_BF8], r12
 * 00000001403637BF: mov     rax, r12
 * 00000001403637C2: lea     r13d, [rcx-2Ah]
 * 00000001403637C6: mov     edx, r13d
 * 00000001403637C9: lea     r8d, [rcx-2Fh]
 * 00000001403637CD: mov     [rax], r15
 * 00000001403637D0: add     ecx, 0FFFFFFF8h
 * 00000001403637D3: add     rax, 8
 * 00000001403637D7: sub     rdx, r8
 * 00000001403637DA: jnz     short loc_1403637CD
 * 00000001403637DC: mov     rdx, r8
 * 00000001403637DF: test    ecx, ecx
 * 00000001403637E1: jz      short loc_1403637F4
 * 00000001403637E3: mov     r8d, 0FFFFFFFFh
 * 00000001403637E9: mov     [rax], r15b
 * 00000001403637EC: add     rax, rdx
 * 00000001403637EF: add     ecx, r8d
 * 00000001403637F2: jnz     short loc_1403637E9
 * 00000001403637F4: mov     dword ptr [r12], 0Bh
 * 00000001403637FC: mov     r10, rbx
 * 00000001403637FF: mov     [r12+8], rbx
 * 0000000140363804: mov     rax, rbx
 * 0000000140363807: mov     [r12+10h], r9d
 * 000000014036380C: add     [rsi+828h], r9d
 * 0000000140363813: mov     r11d, [rsi+814h]
 * 000000014036381A: mov     r15, [rsi+818h]
 * 0000000140363821: mov     ecx, r9d
 * 0000000140363824: add     rcx, rbx
 * 0000000140363827: cmp     rbx, rcx
 * 000000014036382A: jnb     short loc_14036383D
 * 000000014036382C: mov     r8d, 40h ; '@'
 * 0000000140363832: prefetchnta byte ptr [rax]
 * 0000000140363835: add     rax, r8
 * 0000000140363838: cmp     rax, rcx
 * 000000014036383B: jb      short loc_140363832
 * 000000014036383D: mov     r14d, r9d
 * 0000000140363840: mov     r8, r15
 * 0000000140363843: shr     r14d, 7
 * 0000000140363847: test    r14d, r14d
 * 000000014036384A: jz      short loc_1403638C2
 * 000000014036384C: mov     rsi, 7010008004002001h
 * 0000000140363856: mov     edx, 8
 * 000000014036385B: lea     r12d, [rdx-7]
 * 000000014036385F: mov     rax, [r10]
 * 0000000140363862: mov     ecx, r11d
 * 0000000140363865: xor     rax, r8
 * 0000000140363868: mov     r8, [r10+8]
 * 000000014036386C: rol     rax, cl
 * 000000014036386F: add     r10, 10h
 * 0000000140363873: xor     r8, rax
 * 0000000140363876: rol     r8, cl
 * 0000000140363879: sub     rdx, r12
 * 000000014036387C: jnz     short loc_14036385F
 * 000000014036387E: mov     rcx, r10
 * 0000000140363881: sub     rcx, rbx
 * 0000000140363884: xor     rcx, r15
 * 0000000140363887: mov     rax, rcx
 * 000000014036388A: rol     rax, 11h
 * 000000014036388E: xor     rcx, rax
 * 0000000140363891: mov     rax, rsi
 * 0000000140363894: mul     rcx
 * 0000000140363897: mov     [rbp+0B70h+var_480], rdx
 * 000000014036389E: xor     edx, eax
 * 00000001403638A0: xor     r11d, edx
 * 00000001403638A3: mov     eax, 0FFFFFFFFh
 * 00000001403638A8: and     r11d, 3Fh
 * 00000001403638AC: mov     rdx, r12
 * 00000001403638AF: cmovz   r11d, edx
 * 00000001403638B3: add     r14d, eax
 * 00000001403638B6: jnz     short loc_140363856
 * 00000001403638B8: mov     rsi, [rsp+0C70h+var_C10]
 * 00000001403638BD: mov     r12, [rsp+0C70h+var_BF8]
 * 00000001403638C2: and     r9d, 7Fh
 * 00000001403638C6: cmp     r9d, 8
 * 00000001403638CA: jb      short loc_1403638FA
 * 00000001403638CC: mov     edx, r9d
 * 00000001403638CF: mov     edi, 1
 * 00000001403638D4: shr     rdx, 3
 * 00000001403638D8: xor     r8, [r10]
 * 00000001403638DB: mov     ecx, r11d
 * 00000001403638DE: rol     r8, cl
 * 00000001403638E1: add     r10, 8
 * 00000001403638E5: add     r9d, 0FFFFFFF8h
 * 00000001403638E9: sub     rdx, rdi
 * 00000001403638EC: jnz     short loc_1403638D8
 * 00000001403638EE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403638F5: mov     edx, 1
 * 00000001403638FA: xor     r15d, r15d
 * 00000001403638FD: test    r9d, r9d
 * 0000000140363900: jz      short loc_140363920
 * 0000000140363902: mov     r15d, 0FFFFFFFFh
 * 0000000140363908: movzx   eax, byte ptr [r10]
 * 000000014036390C: mov     ecx, r11d
 * 000000014036390F: xor     r8, rax
 * 0000000140363912: add     r10, rdx
 * 0000000140363915: rol     r8, cl
 * 0000000140363918: add     r9d, r15d
 * 000000014036391B: jnz     short loc_140363908
 * 000000014036391D: xor     r15d, r15d
 * 0000000140363920: mov     rax, r8
 * 0000000140363923: jmp     short loc_140363928
 * 0000000140363925: xor     r8d, eax
 * 0000000140363928: shr     rax, 1Fh
 * 000000014036392C: test    rax, rax
 * 000000014036392F: jnz     short loc_140363925
 * 0000000140363931: btr     r8d, 1Fh
 * 0000000140363936: mov     [r12+14h], r8d
 * 000000014036393B: mov     r12d, 1
 * 0000000140363941: mov     rax, [rbp+0B70h+var_AD8]
 * 0000000140363948: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140363952: cmp     [rax+100h], r15d
 * 0000000140363959: jz      short loc_140363962
 * 000000014036395B: or      [rax+108h], r12d
 * 0000000140363962: mov     rax, [rbp+0B70h+var_AD8]
 * 0000000140363969: add     rax, 60h ; '`'
 * 000000014036396D: mov     [rbp+0B70h+var_B30], rsi
 * 0000000140363971: mov     [rbp+0B70h+var_A30], rax
 * 0000000140363978: jnz     loc_140363C11
 * 000000014036397E: mov     r14d, [rsi+7E4h]
 * 0000000140363985: mov     r8d, [rsi+924h]
 * 000000014036398C: lea     eax, [r14+30h]
 * 0000000140363990: cmp     eax, [rsi+0A1Ch]
 * 0000000140363996: jbe     loc_140363A6C
 * 000000014036399C: mov     edx, eax
 * 000000014036399E: mov     rcx, rsi
 * 00000001403639A1: call    sub_14036AB20
 * 00000001403639A6: mov     rbx, rax
 * 00000001403639A9: test    rax, rax
 * 00000001403639AC: jz      loc_140363CBF
 * 00000001403639B2: mov     ecx, [rsi+990h]
 * 00000001403639B8: test    cl, 4
 * 00000001403639BB: jnz     loc_140363A63
 * 00000001403639C1: mov     eax, [rsi+7E4h]
 * 00000001403639C7: and     ecx, 20000000h
 * 00000001403639CD: mov     r8, [rsi+7C8h]
 * 00000001403639D4: neg     ecx
 * 00000001403639D6: sbb     edx, edx
 * 00000001403639D8: and     edx, [rsi+924h]
 * 00000001403639DE: cmp     eax, 8
 * 00000001403639E1: jb      short loc_1403639F8
 * 00000001403639E3: mov     ecx, eax
 * 00000001403639E5: shr     rcx, 3
 * 00000001403639E9: mov     [rsi], r15
 * 00000001403639EC: add     eax, 0FFFFFFF8h
 * 00000001403639EF: add     rsi, 8
 * 00000001403639F3: sub     rcx, r12
 * 00000001403639F6: jnz     short loc_1403639E9
 * 00000001403639F8: test    eax, eax
 * 00000001403639FA: jz      short loc_140363A0B
 * 00000001403639FC: mov     ecx, 0FFFFFFFFh
 * 0000000140363A01: mov     [rsi], r15b
 * 0000000140363A04: add     rsi, r12
 * 0000000140363A07: add     eax, ecx
 * 0000000140363A09: jnz     short loc_140363A01
 * 0000000140363A0B: mov     esi, [rbx+924h]
 * 0000000140363A11: mov     [rbx+924h], edx
 * 0000000140363A17: cmp     edx, 3
 * 0000000140363A1A: jz      short loc_140363A4E
 * 0000000140363A1C: test    dword ptr [rbx+990h], 10000000h
 * 0000000140363A26: mov     ecx, r15d
 * 0000000140363A29: cmovz   ecx, edx
 * 0000000140363A2C: test    ecx, ecx
 * 0000000140363A2E: jz      short loc_140363A45
 * 0000000140363A30: mov     rax, [rbx+228h]
 * 0000000140363A37: lea     rcx, [r8-8]
 * 0000000140363A3B: mov     rdx, [rcx]
 * 0000000140363A3E: call    KeGuardDispatchICall
 * 0000000140363A43: jmp     short loc_140363A5D
 * 0000000140363A45: mov     rax, [rbx+100h]
 * 0000000140363A4C: jmp     short loc_140363A55
 * 0000000140363A4E: mov     rax, [rbx+368h]
 * 0000000140363A55: mov     rcx, r8
 * 0000000140363A58: call    KeGuardDispatchICall
 * 0000000140363A5D: mov     [rbx+924h], esi
 * 0000000140363A63: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140363A6A: jmp     short loc_140363A75
 * 0000000140363A6C: mov     rbx, rsi
 * 0000000140363A6F: mov     [rsi+7E4h], eax
 * 0000000140363A75: add     [rbx+80Ch], r12d
 * 0000000140363A7C: lea     rsi, [rbx+r14]
 * 0000000140363A80: mov     [rbp+0B70h+var_798], rsi
 * 0000000140363A87: mov     rax, rsi
 * 0000000140363A8A: mov     ecx, 30h ; '0'
 * 0000000140363A8F: mov     rdx, r13
 * 0000000140363A92: mov     [rax], r15
 * 0000000140363A95: add     ecx, 0FFFFFFF8h
 * 0000000140363A98: add     rax, 8
 * 0000000140363A9C: sub     rdx, r12
 * 0000000140363A9F: jnz     short loc_140363A92
 * 0000000140363AA1: test    ecx, ecx
 * 0000000140363AA3: jz      short loc_140363AB4
 * 0000000140363AA5: mov     edx, 0FFFFFFFFh
 * 0000000140363AAA: mov     [rax], r15b
 * 0000000140363AAD: add     rax, r12
 * 0000000140363AB0: add     ecx, edx
 * 0000000140363AB2: jnz     short loc_140363AAA
 * 0000000140363AB4: mov     r12, [rsp+0C70h+var_C08]
 * 0000000140363AB9: mov     r15d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140363AC0: mov     r9, r12
 * 0000000140363AC3: mov     dword ptr [rsi], 0Eh
 * 0000000140363AC9: mov     [rsi+8], r12
 * 0000000140363ACD: mov     [rsi+10h], r15d
 * 0000000140363AD1: add     [rbx+828h], r15d
 * 0000000140363AD8: lea     rcx, [r12+r15]
 * 0000000140363ADC: mov     r10d, [rbx+814h]
 * 0000000140363AE3: mov     r14, [rbx+818h]
 * 0000000140363AEA: cmp     r12, rcx
 * 0000000140363AED: jnb     short loc_140363B02
 * 0000000140363AEF: mov     rax, r12
 * 0000000140363AF2: mov     edx, 40h ; '@'
 * 0000000140363AF7: prefetchnta byte ptr [rax]
 * 0000000140363AFA: add     rax, rdx
 * 0000000140363AFD: cmp     rax, rcx
 * 0000000140363B00: jb      short loc_140363AF7
 * 0000000140363B02: mov     r11d, r15d
 * 0000000140363B05: xor     r13d, r13d
 * 0000000140363B08: shr     r11d, 7
 * 0000000140363B0C: mov     r8, r14
 * 0000000140363B0F: test    r11d, r11d
 * 0000000140363B12: jz      short loc_140363B8A
 * 0000000140363B14: lea     r15d, [r13+1]
 * 0000000140363B18: mov     rdi, 7010008004002001h
 * 0000000140363B22: mov     r13d, 0FFFFFFFFh
 * 0000000140363B28: mov     eax, 8
 * 0000000140363B2D: xor     r8, [r9]
 * 0000000140363B30: mov     ecx, r10d
 * 0000000140363B33: rol     r8, cl
 * 0000000140363B36: xor     r8, [r9+8]
 * 0000000140363B3A: add     r9, 10h
 * 0000000140363B3E: rol     r8, cl
 * 0000000140363B41: sub     rax, r15
 * 0000000140363B44: jnz     short loc_140363B2D
 * 0000000140363B46: mov     rcx, r9
 * 0000000140363B49: sub     rcx, r12
 * 0000000140363B4C: xor     rcx, r14
 * 0000000140363B4F: mov     rax, rcx
 * 0000000140363B52: rol     rax, 11h
 * 0000000140363B56: xor     rcx, rax
 * 0000000140363B59: mov     rax, rdi
 * 0000000140363B5C: mul     rcx
 * 0000000140363B5F: xor     r10d, edx
 * 0000000140363B62: mov     [rbp+0B70h+var_478], rdx
 * 0000000140363B69: xor     r10d, eax
 * 0000000140363B6C: and     r10d, 3Fh
 * 0000000140363B70: cmovz   r10d, r15d
 * 0000000140363B74: add     r11d, r13d
 * 0000000140363B77: jnz     short loc_140363B28
 * 0000000140363B79: mov     r15d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140363B80: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140363B87: xor     r13d, r13d
 * 0000000140363B8A: mov     edx, r15d
 * 0000000140363B8D: mov     r11d, 1
 * 0000000140363B93: and     edx, 7Fh
 * 0000000140363B96: cmp     edx, 8
 * 0000000140363B99: jb      short loc_140363BB6
 * 0000000140363B9B: mov     eax, edx
 * 0000000140363B9D: shr     rax, 3
 * 0000000140363BA1: xor     r8, [r9]
 * 0000000140363BA4: mov     ecx, r10d
 * 0000000140363BA7: rol     r8, cl
 * 0000000140363BAA: add     r9, 8
 * 0000000140363BAE: add     edx, 0FFFFFFF8h
 * 0000000140363BB1: sub     rax, r11
 * 0000000140363BB4: jnz     short loc_140363BA1
 * 0000000140363BB6: test    edx, edx
 * 0000000140363BB8: jz      short loc_140363BD8
 * 0000000140363BBA: mov     r13d, 0FFFFFFFFh
 * 0000000140363BC0: movzx   eax, byte ptr [r9]
 * 0000000140363BC4: mov     ecx, r10d
 * 0000000140363BC7: xor     r8, rax
 * 0000000140363BCA: add     r9, r11
 * 0000000140363BCD: rol     r8, cl
 * 0000000140363BD0: add     edx, r13d
 * 0000000140363BD3: jnz     short loc_140363BC0
 * 0000000140363BD5: xor     r13d, r13d
 * 0000000140363BD8: mov     rax, r8
 * 0000000140363BDB: jmp     short loc_140363BE0
 * 0000000140363BDD: xor     r8d, eax
 * 0000000140363BE0: shr     rax, 1Fh
 * 0000000140363BE4: test    rax, rax
 * 0000000140363BE7: jnz     short loc_140363BDD
 * 0000000140363BE9: btr     r8d, 1Fh
 * 0000000140363BEE: mov     [rsp+0C70h+var_C10], rbx
 * 0000000140363BF3: mov     [rsi+14h], r8d
 * 0000000140363BF7: mov     rsi, rbx
 * 0000000140363BFA: mov     rax, [rbp+0B70h+var_798]
 * 0000000140363C01: mov     [rbp+0B70h+var_A30], rax
 * 0000000140363C08: add     [rbx+828h], r15d
 * 0000000140363C0F: jmp     short loc_140363C2B
 * 0000000140363C11: mov     r15d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140363C18: xor     r13d, r13d
 * 0000000140363C1B: mov     r12, [rsp+0C70h+var_C08]
 * 0000000140363C20: mov     [rsp+0C70h+var_C10], rsi
 * 0000000140363C25: mov     dword ptr [rax], 0Eh
 * 0000000140363C2B: test    dword ptr [rsi+990h], 40000000h
 * 0000000140363C35: jz      short loc_140363C55
 * 0000000140363C37: test    r15d, r15d
 * 0000000140363C3A: jz      short loc_140363C55
 * 0000000140363C3C: mov     r9, [rbp+0B70h+var_A30]
 * 0000000140363C43: mov     r8d, r15d
 * 0000000140363C46: add     r9, 1Ch
 * 0000000140363C4A: mov     rdx, r12
 * 0000000140363C4D: mov     rcx, rsi
 * 0000000140363C50: call    sub_1401B877C
 * 0000000140363C55: mov     rax, [rbp+0B70h+var_A30]
 * 0000000140363C5C: mov     r12d, 1
 * 0000000140363C62: mov     [rbp+0B70h+var_B30], rsi
 * 0000000140363C66: mov     [rax+18h], r13d
 * 0000000140363C6A: mov     rax, [rbp+0B70h+var_A30]
 * 0000000140363C71: or      [rax+18h], r12d
 * 0000000140363C75: mov     rbx, [rbp+0B70h+var_AD8]
 * 0000000140363C7C: mov     r14, [rbp+0B70h+var_B68]
 * 0000000140363C80: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140363C8A: or      [rbx+0B8h], r12d
 * 0000000140363C91: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140363C9B: jb      loc_140363D21
 * 0000000140363CA1: mov     rax, [rsi+1F8h]
 * 0000000140363CA8: mov     rcx, r14
 * 0000000140363CAB: mov     r15, [rbx+98h]
 * 0000000140363CB2: call    KeGuardDispatchICall
 * 0000000140363CB7: test    rax, rax
 * 0000000140363CBA: jnz     short loc_140363CD2
 * 0000000140363CBC: xor     r15d, r15d
 * 0000000140363CBF: mov     [rbp+0B70h+var_B40], r15
 * 0000000140363CC3: mov     rbx, rsi
 * 0000000140363CC6: mov     [rbp+0B70h+var_BAC], 0C000009Ah
 * 0000000140363CCD: jmp     loc_14036302A
 * 0000000140363CD2: mov     ecx, [rax+50h]
 * 0000000140363CD5: mov     eax, 2
 * 0000000140363CDA: or      [rbx+0B8h], eax
 * 0000000140363CE0: add     rcx, r14
 * 0000000140363CE3: mov     rax, [r15+70h]
 * 0000000140363CE7: cmp     rax, r14
 * 0000000140363CEA: jb      short loc_140363D02
 * 0000000140363CEC: cmp     rax, rcx
 * 0000000140363CEF: jnb     short loc_140363D02
 * 0000000140363CF1: mov     rax, [rax]
 * 0000000140363CF4: mov     [rbx+0A8h], rax
 * 0000000140363CFB: or      dword ptr [rbx+0B8h], 4
 * 0000000140363D02: mov     rax, [r15+78h]
 * 0000000140363D06: cmp     rax, r14
 * 0000000140363D09: jb      short loc_140363D21
 * 0000000140363D0B: cmp     rax, rcx
 * 0000000140363D0E: jnb     short loc_140363D21
 * 0000000140363D10: mov     rax, [rax]
 * 0000000140363D13: mov     [rbx+0B0h], rax
 * 0000000140363D1A: or      dword ptr [rbx+0B8h], 8
 * 0000000140363D21: test    dword ptr [rsi+990h], 400000h
 * 0000000140363D2B: mov     r13, [rbp+0B70h+var_B68]
 * 0000000140363D2F: mov     [rbp+0B70h+var_BC0], r13
 * 0000000140363D33: mov     [rbp+0B70h+var_B40], rsi
 * 0000000140363D37: jz      loc_140364C2A
 * 0000000140363D3D: mov     rax, [rsi+1F8h]
 * 0000000140363D44: mov     rcx, r13
 * 0000000140363D47: call    KeGuardDispatchICall
 * 0000000140363D4C: xor     r14d, r14d
 * 0000000140363D4F: mov     [rsp+0C70h+var_BF8], rax
 * 0000000140363D54: mov     r15, rax
 * 0000000140363D57: test    rax, rax
 * 0000000140363D5A: jnz     short loc_140363D66
 * 0000000140363D5C: mov     ecx, 0C000007Bh
 * 0000000140363D61: jmp     loc_140364247
 * 0000000140363D66: movzx   r10d, word ptr [r15+6]
 * 0000000140363D6B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140363D75: mov     ecx, dword ptr [rbp+0B70h+var_BD8]
 * 0000000140363D78: mul     rcx
 * 0000000140363D7B: mov     word ptr [rbp+0B70h+arg_8], r10w
 * 0000000140363D83: mov     r9, rdx
 * 0000000140363D86: shr     r9, 3
 * 0000000140363D8A: mov     [rbp+0B70h+var_BD0], r9
 * 0000000140363D8E: test    r10w, r10w
 * 0000000140363D92: jnz     short loc_140363DFB
 * 0000000140363D94: test    dword ptr [rsi+990h], 200000h
 * 0000000140363D9E: jz      loc_140367C1B
 * 0000000140363DA4: xor     r15d, r15d
 * 0000000140363DA7: cmp     [rsi+8F8h], r15d
 * 0000000140363DAE: jnz     short loc_140363DEE
 * 0000000140363DB0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140363DBA: add     rax, rsi
 * 0000000140363DBD: mov     [rsi+900h], rax
 * 0000000140363DC4: mov     [rsi+908h], r15
 * 0000000140363DCB: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140363DD6: mov     [rsi+918h], r13
 * 0000000140363DDD: mov     [rsi+8F8h], r12d
 * 0000000140363DE4: xor     edx, edx
 * 0000000140363DE6: mov     rcx, rsi
 * 0000000140363DE9: call    sub_14036B3BC
 * 0000000140363DEE: mov     ecx, 0C000007Bh
 * 0000000140363DF3: mov     [rbp+0B70h+var_BAC], ecx
 * 0000000140363DF6: jmp     loc_140364C3C
 * 0000000140363DFB: mov     rdx, [rbp+0B70h+var_BE0]
 * 0000000140363DFF: lea     r8, [r15+18h]
 * 0000000140363E03: mov     eax, r9d
 * 0000000140363E06: mov     ecx, r14d
 * 0000000140363E09: mov     rbx, rdx
 * 0000000140363E0C: mov     [rsp+0C70h+var_C00], ecx
 * 0000000140363E10: lea     r12, [rax+rax*2]
 * 0000000140363E14: shl     r12, 2
 * 0000000140363E18: mov     [rsp+0C70h+var_C08], r12
 * 0000000140363E1D: lea     rax, [rdx+r12]
 * 0000000140363E21: mov     [rbp+0B70h+var_BC8], rax
 * 0000000140363E25: movzx   eax, word ptr [r15+14h]
 * 0000000140363E2A: mov     r11, [rbp+0B70h+var_BC8]
 * 0000000140363E2E: add     r8, rax
 * 0000000140363E31: movzx   eax, r10w
 * 0000000140363E35: mov     [rsp+0C70h+var_C20], r8
 * 0000000140363E3A: test    eax, eax
 * 0000000140363E3C: jz      loc_140364062
 * 0000000140363E42: lea     r12, [r8+8]
 * 0000000140363E46: mov     r9d, 1; BugCheckParameter3
 * 0000000140363E4C: mov     r15d, [r12+8]
 * 0000000140363E51: mov     eax, [r12]
 * 0000000140363E55: cmp     r15d, eax
 * 0000000140363E58: mov     edx, [r12+4]
 * 0000000140363E5D: cmovbe  r15d, eax
 * 0000000140363E61: mov     [rbp+0B70h+var_BB0], edx
 * 0000000140363E64: add     r15d, edx
 * 0000000140363E67: test    ecx, ecx
 * 0000000140363E69: jz      short loc_140363E81
 * 0000000140363E6B: lea     eax, [rcx-1]
 * 0000000140363E6E: lea     rax, [rax+rax*4]
 * 0000000140363E72: cmp     r15d, [r8+rax*8+0Ch]
 * 0000000140363E77: jb      loc_14036407D
 * 0000000140363E7D: mov     ecx, [rsp+0C70h+var_C00]
 * 0000000140363E81: cmp     rbx, r11
 * 0000000140363E84: jz      loc_14036403D
 * 0000000140363E8A: mov     ecx, [rbx]
 * 0000000140363E8C: mov     eax, [rbx+4]
 * 0000000140363E8F: cmp     ecx, r15d
 * 0000000140363E92: jnb     loc_140364022
 * 0000000140363E98: cmp     eax, edx
 * 0000000140363E9A: jbe     loc_140364022
 * 0000000140363EA0: cmp     ecx, edx
 * 0000000140363EA2: jb      loc_1403640D6
 * 0000000140363EA8: cmp     eax, r15d
 * 0000000140363EAB: ja      loc_1403640D6
 * 0000000140363EB1: mov     eax, [rbx+8]
 * 0000000140363EB4: mov     ecx, 1
 * 0000000140363EB9: test    cl, al
 * 0000000140363EBB: jnz     short loc_140363EC9
 * 0000000140363EBD: mov     al, [rax+r13]
 * 0000000140363EC1: test    al, 20h
 * 0000000140363EC3: jz      loc_140364014
 * 0000000140363EC9: mov     eax, [r12]
 * 0000000140363ECD: mov     rdx, r13
 * 0000000140363ED0: mov     ecx, [r12+4]
 * 0000000140363ED5: mov     r14d, [r12+8]
 * 0000000140363EDA: cmp     r14d, eax
 * 0000000140363EDD: mov     [rbp+0B70h+var_BE8], ecx
 * 0000000140363EE0: cmovbe  r14d, eax
 * 0000000140363EE4: mov     rax, [rsi+418h]
 * 0000000140363EEB: add     r14d, ecx
 * 0000000140363EEE: mov     rcx, rbx
 * 0000000140363EF1: call    KeGuardDispatchICall
 * 0000000140363EF6: mov     r13, rax
 * 0000000140363EF9: mov     eax, [rbp+0B70h+var_BE8]
 * 0000000140363EFC: cmp     [r13+0], eax
 * 0000000140363F00: jb      short loc_140363F08
 * 0000000140363F02: cmp     [r13+4], r14d
 * 0000000140363F06: jbe     short loc_140363F73
 * 0000000140363F08: mov     r8, [rbp+0B70h+var_BC0]; BugCheckParameter2
 * 0000000140363F0C: mov     edx, r13d
 * 0000000140363F0F: sub     edx, r8d
 * 0000000140363F12: mov     eax, 80000000h
 * 0000000140363F17: or      edx, eax
 * 0000000140363F19: test    dword ptr [rsi+990h], 200000h
 * 0000000140363F23: jz      loc_140367CD5
 * 0000000140363F29: xor     ecx, ecx
 * 0000000140363F2B: cmp     [rsi+8F8h], ecx
 * 0000000140363F31: jnz     short loc_140363F73
 * 0000000140363F33: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140363F3D: xor     edx, edx
 * 0000000140363F3F: add     rax, rsi
 * 0000000140363F42: mov     [rsi+900h], rax
 * 0000000140363F49: lea     eax, [rcx+1]
 * 0000000140363F4C: mov     [rsi+908h], rcx
 * 0000000140363F53: mov     rcx, rsi
 * 0000000140363F56: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140363F61: mov     [rsi+918h], r8
 * 0000000140363F68: mov     [rsi+8F8h], eax
 * 0000000140363F6E: call    sub_14036B3BC
 * 0000000140363F73: mov     r8d, [r13+0]
 * 0000000140363F77: mov     rcx, r13
 * 0000000140363F7A: mov     rdx, [rbp+0B70h+var_BC0]
 * 0000000140363F7E: mov     rax, [rsi+420h]
 * 0000000140363F85: add     r8, rdx
 * 0000000140363F88: call    KeGuardDispatchICall
 * 0000000140363F8D: mov     rdx, rax
 * 0000000140363F90: mov     eax, [rbp+0B70h+var_BE8]
 * 0000000140363F93: cmp     [rdx], eax
 * 0000000140363F95: jb      short loc_140363F9D
 * 0000000140363F97: cmp     [rdx+4], r14d
 * 0000000140363F9B: jbe     short loc_14036400A
 * 0000000140363F9D: mov     r13, [rbp+0B70h+var_BC0]
 * 0000000140363FA1: mov     eax, 80000000h
 * 0000000140363FA6: sub     edx, r13d
 * 0000000140363FA9: or      edx, eax
 * 0000000140363FAB: test    dword ptr [rsi+990h], 200000h
 * 0000000140363FB5: jz      loc_140367CA6
 * 0000000140363FBB: xor     r14d, r14d
 * 0000000140363FBE: cmp     [rsi+8F8h], r14d
 * 0000000140363FC5: jnz     short loc_140364011
 * 0000000140363FC7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140363FD1: xor     edx, edx
 * 0000000140363FD3: add     rax, rsi
 * 0000000140363FD6: mov     rcx, rsi
 * 0000000140363FD9: mov     [rsi+900h], rax
 * 0000000140363FE0: lea     eax, [r14+1]
 * 0000000140363FE4: mov     [rsi+908h], r14
 * 0000000140363FEB: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140363FF6: mov     [rsi+918h], r13
 * 0000000140363FFD: mov     [rsi+8F8h], eax
 * 0000000140364003: call    sub_14036B3BC
 * 0000000140364008: jmp     short loc_140364011
 * 000000014036400A: mov     r13, [rbp+0B70h+var_BC0]
 * 000000014036400E: xor     r14d, r14d
 * 0000000140364011: mov     edx, [rbp+0B70h+var_BB0]
 * 0000000140364014: add     rbx, 0Ch
 * 0000000140364018: cmp     rbx, [rbp+0B70h+var_BC8]
 * 000000014036401C: jnz     loc_140363E8A
 * 0000000140364022: mov     ecx, [rsp+0C70h+var_C00]
 * 0000000140364026: mov     r9d, 1
 * 000000014036402C: movzx   r10d, word ptr [rbp+0B70h+arg_8]
 * 0000000140364034: mov     r8, [rsp+0C70h+var_C20]
 * 0000000140364039: mov     r11, [rbp+0B70h+var_BC8]
 * 000000014036403D: add     ecx, r9d
 * 0000000140364040: movzx   eax, r10w
 * 0000000140364044: add     r12, 28h ; '('
 * 0000000140364048: mov     [rsp+0C70h+var_C00], ecx
 * 000000014036404C: cmp     ecx, eax
 * 000000014036404E: jb      loc_140363E4C
 * 0000000140364054: mov     r9, [rbp+0B70h+var_BD0]
 * 0000000140364058: mov     r15, [rsp+0C70h+var_BF8]
 * 000000014036405D: mov     r12, [rsp+0C70h+var_C08]
 * 0000000140364062: cmp     rbx, r11
 * 0000000140364065: jz      loc_140364132
 * 000000014036406B: test    dword ptr [rsi+990h], 200000h
 * 0000000140364075: jz      loc_140367C49
 * 000000014036407B: jmp     short loc_1403640E6
 * 000000014036407D: test    dword ptr [rsi+990h], 200000h
 * 0000000140364087: jz      loc_140367C7A
 * 000000014036408D: xor     r15d, r15d
 * 0000000140364090: cmp     [rsi+8F8h], r15d
 * 0000000140364097: jnz     loc_140363DEE
 * 000000014036409D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403640A7: add     rax, rsi
 * 00000001403640AA: mov     [rsi+900h], rax
 * 00000001403640B1: mov     [rsi+908h], r15
 * 00000001403640B8: mov     qword ptr [rsi+910h], 10Fh
 * 00000001403640C3: mov     [rsi+918h], r13
 * 00000001403640CA: mov     [rsi+8F8h], r9d
 * 00000001403640D1: jmp     loc_140363DE4
 * 00000001403640D6: test    dword ptr [rsi+990h], 200000h
 * 00000001403640E0: jz      loc_140367D01
 * 00000001403640E6: xor     r15d, r15d
 * 00000001403640E9: cmp     [rsi+8F8h], r15d
 * 00000001403640F0: jnz     loc_140363DEE
 * 00000001403640F6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140364100: add     rax, rsi
 * 0000000140364103: mov     [rsi+900h], rax
 * 000000014036410A: lea     eax, [r15+1]
 * 000000014036410E: mov     [rsi+908h], r15
 * 0000000140364115: mov     qword ptr [rsi+910h], 10Fh
 * 0000000140364120: mov     [rsi+918h], r13
 * 0000000140364127: mov     [rsi+8F8h], eax
 * 000000014036412D: jmp     loc_140363DE4
 * 0000000140364132: mov     r14d, [rsi+7E4h]
 * 0000000140364139: lea     eax, [rax+rax*2]
 * 000000014036413C: mov     r8d, [rsi+924h]
 * 0000000140364143: lea     eax, [rax+6]
 * 0000000140364146: lea     ecx, [r9+6]
 * 000000014036414A: and     ecx, 0FFFFFFF8h
 * 000000014036414D: lea     eax, [rcx+rax*8]
 * 0000000140364150: add     eax, r14d
 * 0000000140364153: cmp     eax, [rsi+0A1Ch]
 * 0000000140364159: jbe     loc_140364252
 * 000000014036415F: mov     edx, eax
 * 0000000140364161: mov     rcx, rsi
 * 0000000140364164: call    sub_14036AB20
 * 0000000140364169: xor     r9d, r9d
 * 000000014036416C: mov     rbx, rax
 * 000000014036416F: test    rax, rax
 * 0000000140364172: jz      loc_140364242
 * 0000000140364178: mov     ecx, [rsi+990h]
 * 000000014036417E: test    cl, 4
 * 0000000140364181: jnz     loc_14036422D
 * 0000000140364187: mov     eax, [rsi+7E4h]
 * 000000014036418D: lea     r10d, [r9+1]
 * 0000000140364191: mov     r8, [rsi+7C8h]
 * 0000000140364198: and     ecx, 20000000h
 * 000000014036419E: neg     ecx
 * 00000001403641A0: sbb     edx, edx
 * 00000001403641A2: and     edx, [rsi+924h]
 * 00000001403641A8: cmp     eax, 8
 * 00000001403641AB: jb      short loc_1403641C2
 * 00000001403641AD: mov     ecx, eax
 * 00000001403641AF: shr     rcx, 3
 * 00000001403641B3: mov     [rsi], r9
 * 00000001403641B6: add     eax, 0FFFFFFF8h
 * 00000001403641B9: add     rsi, 8
 * 00000001403641BD: sub     rcx, r10
 * 00000001403641C0: jnz     short loc_1403641B3
 * 00000001403641C2: test    eax, eax
 * 00000001403641C4: jz      short loc_1403641D5
 * 00000001403641C6: mov     ecx, 0FFFFFFFFh
 * 00000001403641CB: mov     [rsi], r9b
 * 00000001403641CE: add     rsi, r10
 * 00000001403641D1: add     eax, ecx
 * 00000001403641D3: jnz     short loc_1403641CB
 * 00000001403641D5: mov     esi, [rbx+924h]
 * 00000001403641DB: mov     [rbx+924h], edx
 * 00000001403641E1: cmp     edx, 3
 * 00000001403641E4: jz      short loc_140364218
 * 00000001403641E6: test    dword ptr [rbx+990h], 10000000h
 * 00000001403641F0: mov     ecx, r9d
 * 00000001403641F3: cmovz   ecx, edx
 * 00000001403641F6: test    ecx, ecx
 * 00000001403641F8: jz      short loc_14036420F
 * 00000001403641FA: mov     rax, [rbx+228h]
 * 0000000140364201: lea     rcx, [r8-8]
 * 0000000140364205: mov     rdx, [rcx]
 * 0000000140364208: call    KeGuardDispatchICall
 * 000000014036420D: jmp     short loc_140364227
 * 000000014036420F: mov     rax, [rbx+100h]
 * 0000000140364216: jmp     short loc_14036421F
 * 0000000140364218: mov     rax, [rbx+368h]
 * 000000014036421F: mov     rcx, r8
 * 0000000140364222: call    KeGuardDispatchICall
 * 0000000140364227: mov     [rbx+924h], esi
 * 000000014036422D: and     dword ptr [rbx+990h], 0FFFFFFFBh
 * 0000000140364234: mov     r9, [rbp+0B70h+var_BD0]
 * 0000000140364238: movzx   r10d, word ptr [rbp+0B70h+arg_8]
 * 0000000140364240: jmp     short loc_14036425B
 * 0000000140364242: mov     ecx, 0C000009Ah
 * 0000000140364247: mov     [rbp+0B70h+var_BAC], ecx
 * 000000014036424A: xor     r15d, r15d
 * 000000014036424D: jmp     loc_140364C3C
 * 0000000140364252: mov     rbx, rsi
 * 0000000140364255: mov     [rsi+7E4h], eax
 * 000000014036425B: mov     esi, 1
 * 0000000140364260: lea     rcx, [rbx+r14]
 * 0000000140364264: add     [rbx+80Ch], esi
 * 000000014036426A: mov     rax, rcx
 * 000000014036426D: mov     [rbp+0B70h+var_828], rcx
 * 0000000140364274: xor     r11d, r11d
 * 0000000140364277: lea     edx, [rsi+2Fh]
 * 000000014036427A: lea     r8d, [rsi+5]
 * 000000014036427E: mov     [rax], r11
 * 0000000140364281: add     edx, 0FFFFFFF8h
 * 0000000140364284: add     rax, 8
 * 0000000140364288: sub     r8, rsi
 * 000000014036428B: jnz     short loc_14036427E
 * 000000014036428D: test    edx, edx
 * 000000014036428F: jz      short loc_1403642A2
 * 0000000140364291: mov     r8d, 0FFFFFFFFh
 * 0000000140364297: mov     [rax], r11b
 * 000000014036429A: add     rax, rsi
 * 000000014036429D: add     edx, r8d
 * 00000001403642A0: jnz     short loc_140364297
 * 00000001403642A2: mov     rax, [rbp+0B70h+var_BE0]
 * 00000001403642A6: mov     dword ptr [rcx], 1Eh
 * 00000001403642AC: mov     [rcx+8], rax
 * 00000001403642B0: mov     [rcx+10h], r11d
 * 00000001403642B4: mov     rdx, [rbx+818h]
 * 00000001403642BB: mov     rax, rdx
 * 00000001403642BE: jmp     short loc_1403642C2
 * 00000001403642C0: xor     edx, eax
 * 00000001403642C2: shr     rax, 1Fh
 * 00000001403642C6: test    rax, rax
 * 00000001403642C9: jnz     short loc_1403642C0
 * 00000001403642CB: btr     edx, 1Fh
 * 00000001403642CF: mov     [rbp+0B70h+var_B40], rbx
 * 00000001403642D3: mov     [rcx+14h], edx
 * 00000001403642D6: lea     r14d, [r9-1]
 * 00000001403642DA: mov     rax, [rbp+0B70h+var_828]
 * 00000001403642E1: add     r14, 7
 * 00000001403642E5: mov     [rbp+0B70h+var_A88], rax
 * 00000001403642EC: and     r14, 0FFFFFFFFFFFFFFF8h
 * 00000001403642F0: mov     r11d, 0Ch
 * 00000001403642F6: mov     rsi, rbx
 * 00000001403642F9: mov     [rax+18h], r13
 * 00000001403642FD: mov     ecx, [r15+50h]
 * 0000000140364301: xor     r15d, r15d
 * 0000000140364304: mov     rax, [rbp+0B70h+var_A88]
 * 000000014036430B: mov     [rax+20h], ecx
 * 000000014036430E: mov     rax, [rbp+0B70h+var_A88]
 * 0000000140364315: mov     ecx, dword ptr [rbp+0B70h+var_BD8]
 * 0000000140364318: mov     [rax+24h], ecx
 * 000000014036431B: mov     ecx, 1
 * 0000000140364320: mov     rax, [rbp+0B70h+var_A88]
 * 0000000140364327: mov     [rax+28h], r10w
 * 000000014036432C: mov     rax, [rbp+0B70h+var_A88]
 * 0000000140364333: or      [rax+2Ah], cx
 * 0000000140364337: mov     rcx, [rbp+0B70h+var_A88]
 * 000000014036433E: movzx   eax, word ptr [rcx+28h]
 * 0000000140364342: lea     rdx, [rcx+30h]
 * 0000000140364346: add     r14, rdx
 * 0000000140364349: mov     [rsp+0C70h+var_C08], rdx
 * 000000014036434E: test    r9d, r9d
 * 0000000140364351: mov     [rbp+0B70h+var_BF0], r14
 * 0000000140364355: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140364359: lea     rcx, [rax+rax*2]
 * 000000014036435D: lea     r8, [r14+rcx*8]
 * 0000000140364361: mov     ecx, r11d
 * 0000000140364364: cmovz   rcx, r12
 * 0000000140364368: mov     [rsp+0C70h+var_BF8], r8
 * 000000014036436D: add     rcx, r9
 * 0000000140364370: lea     r12d, [r11-0Bh]
 * 0000000140364374: mov     [rbp+0B70h+var_BA0], rcx
 * 0000000140364378: cmp     r15w, r10w
 * 000000014036437C: jnb     short loc_1403643AF
 * 000000014036437E: movzx   edx, r10w
 * 0000000140364382: lea     rax, [r14+8]
 * 0000000140364386: mov     r10d, 80000000h
 * 000000014036438C: lea     r13d, [r11-0Ah]
 * 0000000140364390: mov     rcx, r13
 * 0000000140364393: mov     [rax-8], r15d
 * 0000000140364397: mov     [rax-4], r15d
 * 000000014036439B: mov     [rax], r10d
 * 000000014036439E: add     rax, r11
 * 00000001403643A1: sub     rcx, r12
 * 00000001403643A4: jnz     short loc_140364393
 * 00000001403643A6: sub     rdx, r12
 * 00000001403643A9: jnz     short loc_140364390
 * 00000001403643AB: mov     r13, [rbp+0B70h+var_BC0]
 * 00000001403643AF: cmp     r14, r8
 * 00000001403643B2: jz      loc_140364C2D
 * 00000001403643B8: mov     rsi, [rsp+0C70h+var_C20]
 * 00000001403643BD: mov     eax, [rsi+24h]
 * 00000001403643C0: mov     r11d, r15d
 * 00000001403643C3: bt      eax, 19h
 * 00000001403643C7: jb      loc_1403645DC
 * 00000001403643CD: mov     ecx, [rsi]
 * 00000001403643CF: cmp     ecx, 54494E49h
 * 00000001403643D5: jnz     short loc_1403643E4
 * 00000001403643D7: cmp     dword ptr [rsi+4], 4742444Bh
 * 00000001403643DE: jz      loc_1403645DC
 * 00000001403643E4: cmp     ecx, 45474150h
 * 00000001403643EA: jnz     short loc_14036441A
 * 00000001403643EC: movzx   eax, word ptr [rsi+4]
 * 00000001403643F0: mov     edx, 7877h
 * 00000001403643F5: cmp     ax, dx
 * 00000001403643F8: jz      loc_1403645DC
 * 00000001403643FE: mov     edx, 7277h
 * 0000000140364403: cmp     ax, dx
 * 0000000140364406: jz      loc_1403645DC
 * 000000014036440C: mov     edx, 7777h
 * 0000000140364411: cmp     ax, dx
 * 0000000140364414: jz      loc_1403645DC
 * 000000014036441A: cmp     ecx, 41525245h
 * 0000000140364420: jnz     short loc_140364431
 * 0000000140364422: mov     eax, 4154h
 * 0000000140364427: cmp     [rsi+4], ax
 * 000000014036442B: jz      loc_1403645DC
 * 0000000140364431: mov     rax, [rbx+938h]
 * 0000000140364438: mov     r9, rsi
 * 000000014036443B: mov     r8, [rbx+930h]
 * 0000000140364442: mov     r10d, 7
 * 0000000140364448: mov     [rbp+0B70h+var_748], rax
 * 000000014036444F: sub     r9, r8
 * 0000000140364452: mov     rax, [rbx+940h]
 * 0000000140364459: mov     [rbp+0B70h+var_740], rax
 * 0000000140364460: mov     rax, [rbx+948h]
 * 0000000140364467: mov     [rbp+0B70h+var_738], rax
 * 000000014036446E: mov     [rbp+0B70h+var_750], r8
 * 0000000140364475: movzx   edx, byte ptr [r8+r9]
 * 000000014036447A: movzx   eax, byte ptr [r8]
 * 000000014036447E: add     r8, r12
 * 0000000140364481: cmp     rdx, rax
 * 0000000140364484: jnz     short loc_140364495
 * 0000000140364486: mov     eax, 0FFFFFFFFh
 * 000000014036448B: add     r10d, eax
 * 000000014036448E: jnz     short loc_140364475
 * 0000000140364490: jmp     loc_140364544
 * 0000000140364495: mov     r9, [rbp+0B70h+var_748]
 * 000000014036449C: mov     r8d, 8
 * 00000001403644A2: mov     r10, rsi
 * 00000001403644A5: mov     rcx, [r10]
 * 00000001403644A8: add     r10, 8
 * 00000001403644AC: mov     rax, [r9]
 * 00000001403644AF: add     r9, 8
 * 00000001403644B3: cmp     rcx, rax
 * 00000001403644B6: jnz     short loc_1403644E6
 * 00000001403644B8: add     r8d, 0FFFFFFF8h
 * 00000001403644BC: cmp     r8d, 8
 * 00000001403644C0: jnb     short loc_1403644A5
 * 00000001403644C2: test    r8d, r8d
 * 00000001403644C5: jz      short loc_140364544
 * 00000001403644C7: movzx   edx, byte ptr [r10]
 * 00000001403644CB: add     r10, r12
 * 00000001403644CE: movzx   eax, byte ptr [r9]
 * 00000001403644D2: add     r9, r12
 * 00000001403644D5: cmp     rdx, rax
 * 00000001403644D8: jnz     short loc_1403644E6
 * 00000001403644DA: mov     eax, 0FFFFFFFFh
 * 00000001403644DF: add     r8d, eax
 * 00000001403644E2: jnz     short loc_1403644C7
 * 00000001403644E4: jmp     short loc_140364544
 * 00000001403644E6: mov     r8, [rbp+0B70h+var_740]
 * 00000001403644ED: mov     r9, rsi
 * 00000001403644F0: sub     r9, r8
 * 00000001403644F3: mov     r10d, 4
 * 00000001403644F9: movzx   edx, byte ptr [r9+r8]
 * 00000001403644FE: movzx   eax, byte ptr [r8]
 * 0000000140364502: add     r8, r12
 * 0000000140364505: cmp     rdx, rax
 * 0000000140364508: jnz     short loc_140364516
 * 000000014036450A: mov     eax, 0FFFFFFFFh
 * 000000014036450F: add     r10d, eax
 * 0000000140364512: jnz     short loc_1403644F9
 * 0000000140364514: jmp     short loc_140364544
 * 0000000140364516: mov     r8, [rbp+0B70h+var_738]
 * 000000014036451D: mov     r9, rsi
 * 0000000140364520: sub     r9, r8
 * 0000000140364523: mov     r10d, 6
 * 0000000140364529: movzx   edx, byte ptr [r9+r8]
 * 000000014036452E: movzx   eax, byte ptr [r8]
 * 0000000140364532: add     r8, r12
 * 0000000140364535: cmp     rdx, rax
 * 0000000140364538: jnz     short loc_140364547
 * 000000014036453A: mov     eax, 0FFFFFFFFh
 * 000000014036453F: add     r10d, eax
 * 0000000140364542: jnz     short loc_140364529
 * 0000000140364544: mov     r11d, r12d
 * 0000000140364547: mov     r9, [rbp+0B70h+var_BE0]
 * 000000014036454B: mov     ecx, [rsi+24h]
 * 000000014036454E: test    ecx, ecx
 * 0000000140364550: cmovs   r11d, r12d
 * 0000000140364554: mov     [rbp+0B70h+var_B78], r11d
 * 0000000140364558: test    r11d, r11d
 * 000000014036455B: jz      short loc_140364580
 * 000000014036455D: cmp     dword ptr [rsi], 54494E49h
 * 0000000140364563: jnz     short loc_140364580
 * 0000000140364565: cmp     dword ptr [rsi+4], 4742444Bh
 * 000000014036456C: jnz     short loc_140364580
 * 000000014036456E: test    dword ptr [rbx+994h], 2000h
 * 0000000140364578: cmovnz  r11d, r15d
 * 000000014036457C: mov     [rbp+0B70h+var_B78], r11d
 * 0000000140364580: test    dword ptr [rbx+994h], 4000h
 * 000000014036458A: jz      short loc_1403645AB
 * 000000014036458C: bt      ecx, 1Dh
 * 0000000140364590: jnb     short loc_1403645AB
 * 0000000140364592: cmp     r13, [rbx+5E8h]
 * 0000000140364599: jz      short loc_1403645A4
 * 000000014036459B: cmp     r13, [rbx+5F0h]
 * 00000001403645A2: jnz     short loc_1403645AB
 * 00000001403645A4: mov     r11d, r12d
 * 00000001403645A7: mov     [rbp+0B70h+var_B78], r12d
 * 00000001403645AB: mov     ecx, [rsi+10h]
 * 00000001403645AE: mov     eax, [rsi+8]
 * 00000001403645B1: cmp     ecx, eax
 * 00000001403645B3: mov     r12d, [rsi+0Ch]
 * 00000001403645B7: mov     r8, [rbp+0B70h+var_BC8]
 * 00000001403645BB: cmovbe  ecx, eax
 * 00000001403645BE: add     ecx, r12d
 * 00000001403645C1: mov     dword ptr [rbp+0B70h+arg_8], r12d
 * 00000001403645C8: xor     edx, edx
 * 00000001403645CA: mov     [rsp+0C70h+var_C00], ecx
 * 00000001403645CE: cmp     r9, r8
 * 00000001403645D1: jz      short loc_1403645E4
 * 00000001403645D3: mov     r15d, [r9]
 * 00000001403645D6: mov     eax, [r9+4]
 * 00000001403645DA: jmp     short loc_1403645E6
 * 00000001403645DC: mov     r11d, r12d
 * 00000001403645DF: jmp     loc_14036454B
 * 00000001403645E4: mov     eax, edx
 * 00000001403645E6: mov     [rbp+0B70h+var_BE8], eax
 * 00000001403645E9: mov     [rbp+0B70h+var_BB0], r12d
 * 00000001403645ED: cmp     r9, r8
 * 00000001403645F0: jz      loc_1403647AA
 * 00000001403645F6: cmp     r15d, r12d
 * 00000001403645F9: jbe     loc_1403647AA
 * 00000001403645FF: cmp     eax, ecx
 * 0000000140364601: ja      loc_1403647AA
 * 0000000140364607: test    r11d, r11d
 * 000000014036460A: jnz     loc_1403647AA
 * 0000000140364610: mov     [r14], r12d
 * 0000000140364613: lea     rcx, [rbp+0B70h+var_920]
 * 000000014036461A: mov     [r14+4], r15d
 * 000000014036461E: mov     r9d, r15d
 * 0000000140364621: mov     eax, [r14]
 * 0000000140364624: mov     r8d, edx
 * 0000000140364627: sub     r9d, eax
 * 000000014036462A: mov     [rbp+0B70h+var_BB0], r15d
 * 000000014036462E: mov     r14d, r9d
 * 0000000140364631: lea     rdx, [rbp+0B70h+var_700]
 * 0000000140364638: lea     rsi, [rax+r13]
 * 000000014036463C: add     r14, rsi
 * 000000014036463F: mov     r10, [rdx]
 * 0000000140364642: mov     eax, [rcx]
 * 0000000140364644: add     rax, r10
 * 0000000140364647: cmp     rsi, rax
 * 000000014036464A: jnb     short loc_140364655
 * 000000014036464C: cmp     r14, r10
 * 000000014036464F: ja      loc_14036479E
 * 0000000140364655: inc     r8d
 * 0000000140364658: add     rdx, 8
 * 000000014036465C: add     rcx, 4
 * 0000000140364660: cmp     r8d, 6
 * 0000000140364664: jb      short loc_14036463F
 * 0000000140364666: add     [rbx+828h], r9d
 * 000000014036466D: mov     r10, rsi
 * 0000000140364670: mov     r11d, [rbx+814h]
 * 0000000140364677: mov     rax, rsi
 * 000000014036467A: mov     r12, [rbx+818h]
 * 0000000140364681: cmp     rsi, r14
 * 0000000140364684: jnb     short loc_140364696
 * 0000000140364686: mov     ecx, 40h ; '@'
 * 000000014036468B: prefetchnta byte ptr [rax]
 * 000000014036468E: add     rax, rcx
 * 0000000140364691: cmp     rax, r14
 * 0000000140364694: jb      short loc_14036468B
 * 0000000140364696: mov     r14d, r9d
 * 0000000140364699: mov     r8, r12
 * 000000014036469C: shr     r14d, 7
 * 00000001403646A0: test    r14d, r14d
 * 00000001403646A3: jz      short loc_14036471C
 * 00000001403646A5: mov     rdi, 7010008004002001h
 * 00000001403646AF: mov     edx, 8
 * 00000001403646B4: lea     r13d, [rdx-7]
 * 00000001403646B8: mov     rax, [r10]
 * 00000001403646BB: mov     ecx, r11d
 * 00000001403646BE: xor     rax, r8
 * 00000001403646C1: mov     r8, [r10+8]
 * 00000001403646C5: rol     rax, cl
 * 00000001403646C8: add     r10, 10h
 * 00000001403646CC: xor     r8, rax
 * 00000001403646CF: rol     r8, cl
 * 00000001403646D2: sub     rdx, r13
 * 00000001403646D5: jnz     short loc_1403646B8
 * 00000001403646D7: mov     rcx, r10
 * 00000001403646DA: sub     rcx, rsi
 * 00000001403646DD: xor     rcx, r12
 * 00000001403646E0: mov     rax, rcx
 * 00000001403646E3: rol     rax, 11h
 * 00000001403646E7: xor     rcx, rax
 * 00000001403646EA: mov     rax, rdi
 * 00000001403646ED: mul     rcx
 * 00000001403646F0: mov     [rbp+0B70h+var_470], rdx
 * 00000001403646F7: xor     edx, eax
 * 00000001403646F9: xor     r11d, edx
 * 00000001403646FC: mov     rax, r13
 * 00000001403646FF: and     r11d, 3Fh
 * 0000000140364703: cmovz   r11d, eax
 * 0000000140364707: mov     eax, 0FFFFFFFFh
 * 000000014036470C: add     r14d, eax
 * 000000014036470F: jnz     short loc_1403646AF
 * 0000000140364711: mov     r13, [rbp+0B70h+var_BC0]
 * 0000000140364715: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014036471C: and     r9d, 7Fh
 * 0000000140364720: mov     esi, 1
 * 0000000140364725: cmp     r9d, 8
 * 0000000140364729: jb      short loc_140364748
 * 000000014036472B: mov     edx, r9d
 * 000000014036472E: shr     rdx, 3
 * 0000000140364732: xor     r8, [r10]
 * 0000000140364735: mov     ecx, r11d
 * 0000000140364738: rol     r8, cl
 * 000000014036473B: add     r10, 8
 * 000000014036473F: add     r9d, 0FFFFFFF8h
 * 0000000140364743: sub     rdx, rsi
 * 0000000140364746: jnz     short loc_140364732
 * 0000000140364748: xor     edx, edx
 * 000000014036474A: test    r9d, r9d
 * 000000014036474D: jz      short loc_14036476B
 * 000000014036474F: mov     edx, 0FFFFFFFFh
 * 0000000140364754: movzx   eax, byte ptr [r10]
 * 0000000140364758: mov     ecx, r11d
 * 000000014036475B: xor     r8, rax
 * 000000014036475E: add     r10, rsi
 * 0000000140364761: rol     r8, cl
 * 0000000140364764: add     r9d, edx
 * 0000000140364767: jnz     short loc_140364754
 * 0000000140364769: xor     edx, edx
 * 000000014036476B: mov     rax, r8
 * 000000014036476E: jmp     short loc_140364773
 * 0000000140364770: xor     r8d, eax
 * 0000000140364773: shr     rax, 1Fh
 * 0000000140364777: test    rax, rax
 * 000000014036477A: jnz     short loc_140364770
 * 000000014036477C: mov     rax, [rbp+0B70h+var_BF0]
 * 0000000140364780: btr     r8d, 1Fh
 * 0000000140364785: mov     ecx, [rsp+0C70h+var_C00]
 * 0000000140364789: mov     r12d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140364790: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140364794: mov     [rax+8], r8d
 * 0000000140364798: mov     r8, [rbp+0B70h+var_BC8]
 * 000000014036479C: jmp     short loc_1403647AC
 * 000000014036479E: mov     ecx, [rsp+0C70h+var_C00]
 * 00000001403647A2: mov     r8, [rbp+0B70h+var_BC8]
 * 00000001403647A6: mov     r9, [rbp+0B70h+var_BE0]
 * 00000001403647AA: xor     edx, edx
 * 00000001403647AC: cmp     r15d, r12d
 * 00000001403647AF: jb      loc_140364A16
 * 00000001403647B5: cmp     [rbp+0B70h+var_BE8], ecx
 * 00000001403647B8: ja      loc_140364A16
 * 00000001403647BE: cmp     r9, r8
 * 00000001403647C1: jz      loc_140364A16
 * 00000001403647C7: mov     rax, [rbp+0B70h+var_BA0]
 * 00000001403647CB: mov     r12d, [rax+4]
 * 00000001403647CF: cmp     r12d, ecx
 * 00000001403647D2: ja      loc_140364A0F
 * 00000001403647D8: cmp     rax, r8
 * 00000001403647DB: jz      loc_140364A0F
 * 00000001403647E1: cmp     [rbp+0B70h+var_B78], edx
 * 00000001403647E4: jz      short loc_1403647EE
 * 00000001403647E6: mov     r8b, 80h
 * 00000001403647E9: jmp     loc_1403649D8
 * 00000001403647EE: mov     r15d, [rax]
 * 00000001403647F1: mov     r14d, [r9+4]
 * 00000001403647F5: mov     [rbp+0B70h+var_BB0], r15d
 * 00000001403647F9: cmp     r15d, r14d
 * 00000001403647FC: jnb     short loc_14036485A
 * 00000001403647FE: test    dword ptr [rbx+990h], 200000h
 * 0000000140364808: jz      loc_140367D32
 * 000000014036480E: cmp     [rbx+8F8h], edx
 * 0000000140364814: jnz     short loc_14036485A
 * 0000000140364816: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140364820: mov     rcx, rbx
 * 0000000140364823: add     rax, rbx
 * 0000000140364826: mov     [rbx+900h], rax
 * 000000014036482D: mov     eax, 1
 * 0000000140364832: mov     [rbx+908h], rdx
 * 0000000140364839: xor     edx, edx
 * 000000014036483B: mov     qword ptr [rbx+910h], 10Fh
 * 0000000140364846: mov     [rbx+918h], r13
 * 000000014036484D: mov     [rbx+8F8h], eax
 * 0000000140364853: call    sub_14036B3BC
 * 0000000140364858: xor     edx, edx
 * 000000014036485A: lea     rsi, [r14+r13]
 * 000000014036485E: mov     r9d, r15d
 * 0000000140364861: sub     r9d, r14d
 * 0000000140364864: lea     rcx, [rbp+0B70h+var_920]
 * 000000014036486B: mov     r14d, r9d
 * 000000014036486E: mov     r8d, edx
 * 0000000140364871: add     r14, rsi
 * 0000000140364874: lea     rdx, [rbp+0B70h+var_700]
 * 000000014036487B: mov     r10, [rdx]
 * 000000014036487E: mov     eax, [rcx]
 * 0000000140364880: add     rax, r10
 * 0000000140364883: cmp     rsi, rax
 * 0000000140364886: jnb     short loc_140364891
 * 0000000140364888: cmp     r14, r10
 * 000000014036488B: ja      loc_1403649CB
 * 0000000140364891: mov     eax, 4
 * 0000000140364896: inc     r8d
 * 0000000140364899: add     rcx, rax
 * 000000014036489C: add     rdx, 8
 * 00000001403648A0: cmp     r8d, 6
 * 00000001403648A4: jb      short loc_14036487B
 * 00000001403648A6: cmp     r9d, eax
 * 00000001403648A9: jb      loc_1403649CB
 * 00000001403648AF: add     [rbx+828h], r9d
 * 00000001403648B6: mov     r10, rsi
 * 00000001403648B9: mov     r11d, [rbx+814h]
 * 00000001403648C0: mov     rax, rsi
 * 00000001403648C3: mov     r15, [rbx+818h]
 * 00000001403648CA: cmp     rsi, r14
 * 00000001403648CD: jnb     short loc_1403648DF
 * 00000001403648CF: mov     ecx, 40h ; '@'
 * 00000001403648D4: prefetchnta byte ptr [rax]
 * 00000001403648D7: add     rax, rcx
 * 00000001403648DA: cmp     rax, r14
 * 00000001403648DD: jb      short loc_1403648D4
 * 00000001403648DF: mov     r14d, r9d
 * 00000001403648E2: mov     r8, r15
 * 00000001403648E5: shr     r14d, 7
 * 00000001403648E9: test    r14d, r14d
 * 00000001403648EC: jz      short loc_140364965
 * 00000001403648EE: mov     rdi, 7010008004002001h
 * 00000001403648F8: mov     edx, 8
 * 00000001403648FD: lea     r13d, [rdx-7]
 * 0000000140364901: mov     rax, [r10]
 * 0000000140364904: mov     ecx, r11d
 * 0000000140364907: xor     rax, r8
 * 000000014036490A: mov     r8, [r10+8]
 * 000000014036490E: rol     rax, cl
 * 0000000140364911: add     r10, 10h
 * 0000000140364915: xor     r8, rax
 * 0000000140364918: rol     r8, cl
 * 000000014036491B: sub     rdx, r13
 * 000000014036491E: jnz     short loc_140364901
 * 0000000140364920: mov     rcx, r10
 * 0000000140364923: sub     rcx, rsi
 * 0000000140364926: xor     rcx, r15
 * 0000000140364929: mov     rax, rcx
 * 000000014036492C: rol     rax, 11h
 * 0000000140364930: xor     rcx, rax
 * 0000000140364933: mov     rax, rdi
 * 0000000140364936: mul     rcx
 * 0000000140364939: mov     [rbp+0B70h+var_468], rdx
 * 0000000140364940: xor     edx, eax
 * 0000000140364942: xor     r11d, edx
 * 0000000140364945: mov     rax, r13
 * 0000000140364948: and     r11d, 3Fh
 * 000000014036494C: cmovz   r11d, eax
 * 0000000140364950: mov     eax, 0FFFFFFFFh
 * 0000000140364955: add     r14d, eax
 * 0000000140364958: jnz     short loc_1403648F8
 * 000000014036495A: mov     r13, [rbp+0B70h+var_BC0]
 * 000000014036495E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140364965: and     r9d, 7Fh
 * 0000000140364969: mov     esi, 1
 * 000000014036496E: cmp     r9d, 8
 * 0000000140364972: jb      short loc_140364991
 * 0000000140364974: mov     edx, r9d
 * 0000000140364977: shr     rdx, 3
 * 000000014036497B: xor     r8, [r10]
 * 000000014036497E: mov     ecx, r11d
 * 0000000140364981: rol     r8, cl
 * 0000000140364984: add     r10, 8
 * 0000000140364988: add     r9d, 0FFFFFFF8h
 * 000000014036498C: sub     rdx, rsi
 * 000000014036498F: jnz     short loc_14036497B
 * 0000000140364991: xor     edx, edx
 * 0000000140364993: test    r9d, r9d
 * 0000000140364996: jz      short loc_1403649B4
 * 0000000140364998: mov     edx, 0FFFFFFFFh
 * 000000014036499D: movzx   eax, byte ptr [r10]
 * 00000001403649A1: mov     ecx, r11d
 * 00000001403649A4: xor     r8, rax
 * 00000001403649A7: add     r10, rsi
 * 00000001403649AA: rol     r8, cl
 * 00000001403649AD: add     r9d, edx
 * 00000001403649B0: jnz     short loc_14036499D
 * 00000001403649B2: xor     edx, edx
 * 00000001403649B4: mov     rax, r8
 * 00000001403649B7: jmp     short loc_1403649BC
 * 00000001403649B9: xor     r8b, al
 * 00000001403649BC: shr     rax, 7
 * 00000001403649C0: test    rax, rax
 * 00000001403649C3: jnz     short loc_1403649B9
 * 00000001403649C5: and     r8b, 7Fh
 * 00000001403649C9: jmp     short loc_1403649D0
 * 00000001403649CB: xor     edx, edx
 * 00000001403649CD: mov     r8b, 80h
 * 00000001403649D0: mov     r9, [rbp+0B70h+var_BE0]
 * 00000001403649D4: mov     ecx, [rsp+0C70h+var_C00]
 * 00000001403649D8: mov     rax, [rsp+0C70h+var_C08]
 * 00000001403649DD: mov     [rax], r8b
 * 00000001403649E0: mov     r8d, 0Ch
 * 00000001403649E6: mov     rax, [rbp+0B70h+var_BA0]
 * 00000001403649EA: add     r9, r8
 * 00000001403649ED: inc     [rsp+0C70h+var_C08]
 * 00000001403649F2: add     rax, r8
 * 00000001403649F5: mov     r8, [rbp+0B70h+var_BC8]
 * 00000001403649F9: mov     [rbp+0B70h+var_BE0], r9
 * 00000001403649FD: mov     [rbp+0B70h+var_BA0], rax
 * 0000000140364A01: cmp     rax, r8
 * 0000000140364A04: jz      loc_1403647CF
 * 0000000140364A0A: jmp     loc_1403647CB
 * 0000000140364A0F: mov     r12d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140364A16: xor     r15d, r15d
 * 0000000140364A19: cmp     [rbp+0B70h+var_B78], r15d
 * 0000000140364A1D: jnz     loc_140364BB3
 * 0000000140364A23: mov     eax, [rbp+0B70h+var_BB0]
 * 0000000140364A26: cmp     eax, ecx
 * 0000000140364A28: jz      loc_140364BB3
 * 0000000140364A2E: mov     rdx, [rbp+0B70h+var_BF0]
 * 0000000140364A32: mov     r9d, ecx
 * 0000000140364A35: mov     r8d, r15d
 * 0000000140364A38: mov     [rdx+0Ch], eax
 * 0000000140364A3B: mov     [rdx+10h], ecx
 * 0000000140364A3E: lea     rcx, [rbp+0B70h+var_920]
 * 0000000140364A45: mov     eax, [rdx+0Ch]
 * 0000000140364A48: lea     rdx, [rbp+0B70h+var_700]
 * 0000000140364A4F: sub     r9d, eax
 * 0000000140364A52: mov     r14d, r9d
 * 0000000140364A55: lea     rsi, [rax+r13]
 * 0000000140364A59: add     r14, rsi
 * 0000000140364A5C: mov     r10, [rdx]
 * 0000000140364A5F: mov     eax, [rcx]
 * 0000000140364A61: add     rax, r10
 * 0000000140364A64: cmp     rsi, rax
 * 0000000140364A67: jnb     short loc_140364A72
 * 0000000140364A69: cmp     r14, r10
 * 0000000140364A6C: ja      loc_140364BAF
 * 0000000140364A72: inc     r8d
 * 0000000140364A75: add     rdx, 8
 * 0000000140364A79: add     rcx, 4
 * 0000000140364A7D: cmp     r8d, 6
 * 0000000140364A81: jb      short loc_140364A5C
 * 0000000140364A83: add     [rbx+828h], r9d
 * 0000000140364A8A: mov     r10, rsi
 * 0000000140364A8D: mov     r11d, [rbx+814h]
 * 0000000140364A94: mov     rax, rsi
 * 0000000140364A97: mov     r15, [rbx+818h]
 * 0000000140364A9E: cmp     rsi, r14
 * 0000000140364AA1: jnb     short loc_140364AB3
 * 0000000140364AA3: mov     ecx, 40h ; '@'
 * 0000000140364AA8: prefetchnta byte ptr [rax]
 * 0000000140364AAB: add     rax, rcx
 * 0000000140364AAE: cmp     rax, r14
 * 0000000140364AB1: jb      short loc_140364AA8
 * 0000000140364AB3: mov     r14d, r9d
 * 0000000140364AB6: mov     r8, r15
 * 0000000140364AB9: shr     r14d, 7
 * 0000000140364ABD: test    r14d, r14d
 * 0000000140364AC0: jz      short loc_140364B39
 * 0000000140364AC2: mov     r12, 7010008004002001h
 * 0000000140364ACC: mov     edx, 8
 * 0000000140364AD1: lea     r13d, [rdx-7]
 * 0000000140364AD5: mov     rax, [r10]
 * 0000000140364AD8: mov     ecx, r11d
 * 0000000140364ADB: xor     rax, r8
 * 0000000140364ADE: mov     r8, [r10+8]
 * 0000000140364AE2: rol     rax, cl
 * 0000000140364AE5: add     r10, 10h
 * 0000000140364AE9: xor     r8, rax
 * 0000000140364AEC: rol     r8, cl
 * 0000000140364AEF: sub     rdx, r13
 * 0000000140364AF2: jnz     short loc_140364AD5
 * 0000000140364AF4: mov     rcx, r10
 * 0000000140364AF7: sub     rcx, rsi
 * 0000000140364AFA: xor     rcx, r15
 * 0000000140364AFD: mov     rax, rcx
 * 0000000140364B00: rol     rax, 11h
 * 0000000140364B04: xor     rcx, rax
 * 0000000140364B07: mov     rax, r12
 * 0000000140364B0A: mul     rcx
 * 0000000140364B0D: mov     [rbp+0B70h+var_460], rdx
 * 0000000140364B14: xor     edx, eax
 * 0000000140364B16: xor     r11d, edx
 * 0000000140364B19: mov     rax, r13
 * 0000000140364B1C: and     r11d, 3Fh
 * 0000000140364B20: cmovz   r11d, eax
 * 0000000140364B24: mov     eax, 0FFFFFFFFh
 * 0000000140364B29: add     r14d, eax
 * 0000000140364B2C: jnz     short loc_140364ACC
 * 0000000140364B2E: mov     r13, [rbp+0B70h+var_BC0]
 * 0000000140364B32: mov     r12d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140364B39: and     r9d, 7Fh
 * 0000000140364B3D: mov     esi, 1
 * 0000000140364B42: cmp     r9d, 8
 * 0000000140364B46: jb      short loc_140364B65
 * 0000000140364B48: mov     edx, r9d
 * 0000000140364B4B: shr     rdx, 3
 * 0000000140364B4F: xor     r8, [r10]
 * 0000000140364B52: mov     ecx, r11d
 * 0000000140364B55: rol     r8, cl
 * 0000000140364B58: add     r10, 8
 * 0000000140364B5C: add     r9d, 0FFFFFFF8h
 * 0000000140364B60: sub     rdx, rsi
 * 0000000140364B63: jnz     short loc_140364B4F
 * 0000000140364B65: xor     r15d, r15d
 * 0000000140364B68: test    r9d, r9d
 * 0000000140364B6B: jz      short loc_140364B8B
 * 0000000140364B6D: mov     r15d, 0FFFFFFFFh
 * 0000000140364B73: movzx   eax, byte ptr [r10]
 * 0000000140364B77: mov     ecx, r11d
 * 0000000140364B7A: xor     r8, rax
 * 0000000140364B7D: add     r10, rsi
 * 0000000140364B80: rol     r8, cl
 * 0000000140364B83: add     r9d, r15d
 * 0000000140364B86: jnz     short loc_140364B73
 * 0000000140364B88: xor     r15d, r15d
 * 0000000140364B8B: mov     rax, r8
 * 0000000140364B8E: jmp     short loc_140364B93
 * 0000000140364B90: xor     r8d, eax
 * 0000000140364B93: shr     rax, 1Fh
 * 0000000140364B97: test    rax, rax
 * 0000000140364B9A: jnz     short loc_140364B90
 * 0000000140364B9C: mov     r14, [rbp+0B70h+var_BF0]
 * 0000000140364BA0: btr     r8d, 1Fh
 * 0000000140364BA5: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140364BA9: mov     [r14+14h], r8d
 * 0000000140364BAD: jmp     short loc_140364BB7
 * 0000000140364BAF: mov     r9, [rbp+0B70h+var_BE0]
 * 0000000140364BB3: mov     r14, [rbp+0B70h+var_BF0]
 * 0000000140364BB7: mov     rdx, [rbp+0B70h+var_BC8]
 * 0000000140364BBB: cmp     r9, rdx
 * 0000000140364BBE: jz      short loc_140364BFC
 * 0000000140364BC0: mov     ecx, [r9+4]
 * 0000000140364BC4: cmp     [r9], r12d
 * 0000000140364BC7: jb      short loc_140364BFC
 * 0000000140364BC9: cmp     ecx, [rsp+0C70h+var_C00]
 * 0000000140364BCD: ja      short loc_140364BFC
 * 0000000140364BCF: mov     rcx, [rbp+0B70h+var_BA0]
 * 0000000140364BD3: mov     r11d, 0Ch
 * 0000000140364BD9: cmp     rcx, rdx
 * 0000000140364BDC: jz      short loc_140364BF5
 * 0000000140364BDE: mov     rax, [rsp+0C70h+var_C08]
 * 0000000140364BE3: mov     byte ptr [rax], 80h
 * 0000000140364BE6: inc     rax
 * 0000000140364BE9: add     rcx, r11
 * 0000000140364BEC: mov     [rsp+0C70h+var_C08], rax
 * 0000000140364BF1: mov     [rbp+0B70h+var_BA0], rcx
 * 0000000140364BF5: add     r9, r11
 * 0000000140364BF8: mov     [rbp+0B70h+var_BE0], r9
 * 0000000140364BFC: mov     rsi, [rsp+0C70h+var_C20]
 * 0000000140364C01: add     r14, 18h
 * 0000000140364C05: add     rsi, 28h ; '('
 * 0000000140364C09: mov     [rbp+0B70h+var_BF0], r14
 * 0000000140364C0D: mov     [rsp+0C70h+var_C20], rsi
 * 0000000140364C12: cmp     r14, [rsp+0C70h+var_BF8]
 * 0000000140364C17: jz      short loc_140364C24
 * 0000000140364C19: mov     r12d, 1
 * 0000000140364C1F: jmp     loc_1403643BD
 * 0000000140364C24: mov     rsi, [rbp+0B70h+var_B40]
 * 0000000140364C28: jmp     short loc_140364C2D
 * 0000000140364C2A: xor     r15d, r15d
 * 0000000140364C2D: mov     ecx, r15d
 * 0000000140364C30: mov     [rbp+0B70h+var_B30], rsi
 * 0000000140364C34: mov     [rbp+0B70h+var_BAC], ecx
 * 0000000140364C37: mov     [rsp+0C70h+var_C10], rsi
 * 0000000140364C3C: mov     r12d, 80000000h
 * 0000000140364C42: mov     rbx, rsi
 * 0000000140364C45: lea     eax, [rcx+r12]
 * 0000000140364C49: test    r12d, eax
 * 0000000140364C4C: jnz     short loc_140364C64
 * 0000000140364C4E: cmp     ecx, 0C000010Eh
 * 0000000140364C54: jz      short loc_140364C64
 * 0000000140364C56: mov     ecx, [rbp+0B70h+var_BAC]
 * 0000000140364C59: jmp     loc_140364D07
 * 0000000140364C5E: mov     r12d, 80000000h
 * 0000000140364C64: mov     rax, [rsi+1F8h]
 * 0000000140364C6B: mov     rcx, [rbp+0B70h+var_A28]
 * 0000000140364C72: call    KeGuardDispatchICall
 * 0000000140364C77: mov     ecx, [rax+94h]
 * 0000000140364C7D: cmp     ecx, 14h
 * 0000000140364C80: jb      loc_140362FF1
 * 0000000140364C86: mov     eax, [rax+90h]
 * 0000000140364C8C: lea     r15, [rax+rcx]
 * 0000000140364C90: mov     rcx, [rbp+0B70h+var_A28]
 * 0000000140364C97: add     r15, rcx
 * 0000000140364C9A: lea     r14, [rax+rcx]
 * 0000000140364C9E: cmp     r14, r15
 * 0000000140364CA1: jz      short loc_140364D01
 * 0000000140364CA3: xor     r8d, r8d
 * 0000000140364CA6: cmp     [r14+0Ch], r8d
 * 0000000140364CAA: jz      short loc_140364D01
 * 0000000140364CAC: mov     eax, [r14+10h]
 * 0000000140364CB0: test    eax, eax
 * 0000000140364CB2: jz      short loc_140364D01
 * 0000000140364CB4: mov     rdx, [rax+rcx]
 * 0000000140364CB8: test    rdx, rdx
 * 0000000140364CBB: jz      short loc_140364CF8
 * 0000000140364CBD: mov     r8d, 8000000Fh
 * 0000000140364CC3: lea     rcx, [rbp+0B70h+var_B30]
 * 0000000140364CC7: call    sub_140368148
 * 0000000140364CCC: mov     rsi, [rbp+0B70h+var_B30]
 * 0000000140364CD0: mov     ecx, eax
 * 0000000140364CD2: add     eax, r12d
 * 0000000140364CD5: mov     [rsp+0C70h+var_C10], rsi
 * 0000000140364CDA: mov     rbx, rsi
 * 0000000140364CDD: test    r12d, eax
 * 0000000140364CE0: jnz     short loc_140364CEE
 * 0000000140364CE2: cmp     ecx, 0C000010Eh
 * 0000000140364CE8: jnz     loc_140364E7F
 * 0000000140364CEE: mov     rcx, [rbp+0B70h+var_A28]
 * 0000000140364CF5: xor     r8d, r8d
 * 0000000140364CF8: add     r14, 14h
 * 0000000140364CFC: cmp     r14, r15
 * 0000000140364CFF: jnz     short loc_140364CA6
 * 0000000140364D01: xor     r15d, r15d
 * 0000000140364D04: mov     ecx, r15d
 * 0000000140364D07: lea     eax, [rcx+r12]
 * 0000000140364D0B: test    r12d, eax
 * 0000000140364D0E: jnz     short loc_140364D1C
 * 0000000140364D10: cmp     ecx, 0C000010Eh
 * 0000000140364D16: jnz     loc_140364EC3
 * 0000000140364D1C: mov     rax, [rbx+570h]
 * 0000000140364D23: lea     r14, [rbx+978h]
 * 0000000140364D2A: lea     r8, [rbp+0B70h+var_7D4]
 * 0000000140364D31: mov     rdx, r14
 * 0000000140364D34: mov     rcx, [rax+20h]
 * 0000000140364D38: mov     rax, [rbx+200h]
 * 0000000140364D3F: call    KeGuardDispatchICall
 * 0000000140364D44: test    rax, rax
 * 0000000140364D47: jz      loc_14036530D
 * 0000000140364D4D: mov     rax, [rbx+1F8h]
 * 0000000140364D54: mov     rcx, [r14]
 * 0000000140364D57: call    KeGuardDispatchICall
 * 0000000140364D5C: test    rax, rax
 * 0000000140364D5F: jz      loc_14036530D
 * 0000000140364D65: mov     eax, [rax+50h]
 * 0000000140364D68: mov     [rbx+974h], eax
 * 0000000140364D6E: mov     dword ptr [rbx+958h], 8
 * 0000000140364D78: mov     r15, [rbx+600h]
 * 0000000140364D7F: xor     r10d, r10d
 * 0000000140364D82: test    r15, r15
 * 0000000140364D85: jz      loc_14036502D
 * 0000000140364D8B: cmp     [r15], r10
 * 0000000140364D8E: jz      loc_14036502D
 * 0000000140364D94: mov     r9d, [rbx+838h]
 * 0000000140364D9B: lea     r12d, [r10+20h]
 * 0000000140364D9F: mov     r13d, [rbx+7E4h]
 * 0000000140364DA6: cmp     r9d, 7
 * 0000000140364DAA: mov     r8d, [rbx+924h]
 * 0000000140364DB1: cmovnz  r12d, r10d
 * 0000000140364DB5: mov     dword ptr [rbp+0B70h+arg_8], r9d
 * 0000000140364DBC: lea     eax, [r13+30h]
 * 0000000140364DC0: cmp     eax, [rbx+0A1Ch]
 * 0000000140364DC6: jbe     loc_140364F4E
 * 0000000140364DCC: mov     edx, eax
 * 0000000140364DCE: mov     rcx, rbx
 * 0000000140364DD1: call    sub_14036AB20
 * 0000000140364DD6: xor     r10d, r10d
 * 0000000140364DD9: mov     r14, rax
 * 0000000140364DDC: test    rax, rax
 * 0000000140364DDF: jz      loc_140364EBD
 * 0000000140364DE5: mov     ecx, [rbx+990h]
 * 0000000140364DEB: test    cl, 4
 * 0000000140364DEE: jnz     loc_140364EA9
 * 0000000140364DF4: mov     eax, [rbx+7E4h]
 * 0000000140364DFA: lea     r9d, [r10+1]
 * 0000000140364DFE: mov     r8, [rbx+7C8h]
 * 0000000140364E05: and     ecx, 20000000h
 * 0000000140364E0B: neg     ecx
 * 0000000140364E0D: sbb     edx, edx
 * 0000000140364E0F: and     edx, [rbx+924h]
 * 0000000140364E15: cmp     eax, 8
 * 0000000140364E18: jb      short loc_140364E2F
 * 0000000140364E1A: mov     ecx, eax
 * 0000000140364E1C: shr     rcx, 3
 * 0000000140364E20: mov     [rbx], r10
 * 0000000140364E23: add     eax, 0FFFFFFF8h
 * 0000000140364E26: add     rbx, 8
 * 0000000140364E2A: sub     rcx, r9
 * 0000000140364E2D: jnz     short loc_140364E20
 * 0000000140364E2F: test    eax, eax
 * 0000000140364E31: jz      short loc_140364E42
 * 0000000140364E33: mov     ecx, 0FFFFFFFFh
 * 0000000140364E38: mov     [rbx], r10b
 * 0000000140364E3B: add     rbx, r9
 * 0000000140364E3E: add     eax, ecx
 * 0000000140364E40: jnz     short loc_140364E38
 * 0000000140364E42: mov     ebx, [r14+924h]
 * 0000000140364E49: mov     [r14+924h], edx
 * 0000000140364E50: cmp     edx, 3
 * 0000000140364E53: jz      short loc_140364E90
 * 0000000140364E55: test    dword ptr [r14+990h], 10000000h
 * 0000000140364E60: mov     ecx, r10d
 * 0000000140364E63: cmovz   ecx, edx
 * 0000000140364E66: test    ecx, ecx
 * 0000000140364E68: jz      short loc_140364E87
 * 0000000140364E6A: mov     rax, [r14+228h]
 * 0000000140364E71: lea     rcx, [r8-8]
 * 0000000140364E75: mov     rdx, [rcx]
 * 0000000140364E78: call    KeGuardDispatchICall
 * 0000000140364E7D: jmp     short loc_140364E9F
 * 0000000140364E7F: xor     r15d, r15d
 * 0000000140364E82: jmp     loc_140364D07
 * 0000000140364E87: mov     rax, [r14+100h]
 * 0000000140364E8E: jmp     short loc_140364E97
 * 0000000140364E90: mov     rax, [r14+368h]
 * 0000000140364E97: mov     rcx, r8
 * 0000000140364E9A: call    KeGuardDispatchICall
 * 0000000140364E9F: mov     [r14+924h], ebx
 * 0000000140364EA6: xor     r10d, r10d
 * 0000000140364EA9: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140364EB1: mov     r9d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140364EB8: jmp     loc_140364F57
 * 0000000140364EBD: mov     rbx, rsi
 * 0000000140364EC0: xor     r15d, r15d
 * 0000000140364EC3: mov     r13d, 1
 * 0000000140364EC9: mov     ecx, 8000h
 * 0000000140364ECE: test    [rbx+990h], ecx
 * 0000000140364ED4: jnz     short loc_140364EE3
 * 0000000140364ED6: cmp     [rbx+8F8h], r15d
 * 0000000140364EDD: jnz     loc_1403655C0
 * 0000000140364EE3: mov     r14, [rbx+980h]
 * 0000000140364EEA: lea     rdx, [rbp+0B70h+var_620]
 * 0000000140364EF1: mov     [rbx+980h], r15
 * 0000000140364EF8: mov     rcx, r14
 * 0000000140364EFB: mov     rax, [rbx+298h]
 * 0000000140364F02: call    KeGuardDispatchICall
 * 0000000140364F07: mov     eax, [rbx+990h]
 * 0000000140364F0D: test    r13b, al
 * 0000000140364F10: jz      loc_140365361
 * 0000000140364F16: and     eax, 0FFFFFFFEh
 * 0000000140364F19: mov     rcx, r14
 * 0000000140364F1C: mov     [rbx+990h], eax
 * 0000000140364F22: mov     rax, [rbx+280h]
 * 0000000140364F29: call    KeGuardDispatchICall
 * 0000000140364F2E: mov     r14, rax
 * 0000000140364F31: test    rax, rax
 * 0000000140364F34: jz      loc_140365356
 * 0000000140364F3A: mov     rax, [rbx+2A0h]
 * 0000000140364F41: mov     rcx, r14
 * 0000000140364F44: call    KeGuardDispatchICall
 * 0000000140364F49: jmp     loc_14036535B
 * 0000000140364F4E: mov     r14, rbx
 * 0000000140364F51: mov     [rbx+7E4h], eax
 * 0000000140364F57: mov     r8d, 1
 * 0000000140364F5D: lea     rbx, [r14+r13]
 * 0000000140364F61: add     [r14+80Ch], r8d
 * 0000000140364F68: mov     rax, rbx
 * 0000000140364F6B: mov     [rbp+0B70h+var_458], rbx
 * 0000000140364F72: lea     ecx, [r8+2Fh]
 * 0000000140364F76: lea     edx, [rcx-2Ah]
 * 0000000140364F79: mov     [rax], r10
 * 0000000140364F7C: add     ecx, 0FFFFFFF8h
 * 0000000140364F7F: add     rax, 8
 * 0000000140364F83: sub     rdx, r8
 * 0000000140364F86: jnz     short loc_140364F79
 * 0000000140364F88: test    ecx, ecx
 * 0000000140364F8A: jz      short loc_140364F9B
 * 0000000140364F8C: mov     edx, 0FFFFFFFFh
 * 0000000140364F91: mov     [rax], r10b
 * 0000000140364F94: add     rax, r8
 * 0000000140364F97: add     ecx, edx
 * 0000000140364F99: jnz     short loc_140364F91
 * 0000000140364F9B: mov     [rbx], r12d
 * 0000000140364F9E: mov     [rbx+8], r15
 * 0000000140364FA2: cmp     r9d, 7
 * 0000000140364FA6: jnz     short loc_140364FC0
 * 0000000140364FA8: lea     r9, [rbx+18h]
 * 0000000140364FAC: mov     r8d, 8
 * 0000000140364FB2: mov     rdx, r15
 * 0000000140364FB5: mov     rcx, r14
 * 0000000140364FB8: call    sub_1401B877C
 * 0000000140364FBD: xor     r10d, r10d
 * 0000000140364FC0: mov     dword ptr [rbx+10h], 8
 * 0000000140364FC7: lea     rdx, [r15+8]
 * 0000000140364FCB: add     dword ptr [r14+828h], 8
 * 0000000140364FD3: mov     rax, r15
 * 0000000140364FD6: mov     ecx, [r14+814h]
 * 0000000140364FDD: mov     r8, [r14+818h]
 * 0000000140364FE4: cmp     r15, rdx
 * 0000000140364FE7: jnb     short loc_140364FFA
 * 0000000140364FE9: mov     r9d, 40h ; '@'
 * 0000000140364FEF: prefetchnta byte ptr [rax]
 * 0000000140364FF2: add     rax, r9
 * 0000000140364FF5: cmp     rax, rdx
 * 0000000140364FF8: jb      short loc_140364FEF
 * 0000000140364FFA: mov     rax, [r15]
 * 0000000140364FFD: xor     rax, r8
 * 0000000140365000: rol     rax, cl
 * 0000000140365003: mov     rcx, rax
 * 0000000140365006: jmp     short loc_14036500A
 * 0000000140365008: xor     eax, ecx
 * 000000014036500A: shr     rcx, 1Fh
 * 000000014036500E: test    rcx, rcx
 * 0000000140365011: jnz     short loc_140365008
 * 0000000140365013: btr     eax, 1Fh
 * 0000000140365017: mov     [rsp+0C70h+var_C10], r14
 * 000000014036501C: mov     [rbx+14h], eax
 * 000000014036501F: mov     rsi, r14
 * 0000000140365022: add     dword ptr [r14+828h], 8
 * 000000014036502A: mov     rbx, r14
 * 000000014036502D: mov     dword ptr [rbx+958h], 9
 * 0000000140365037: jmp     loc_140361982
 * 000000014036503C: mov     r9d, [rbx+838h]
 * 0000000140365043: mov     r13d, 20h ; ' '
 * 0000000140365049: mov     eax, [rbx+7E4h]
 * 000000014036504F: cmp     r9d, 7
 * 0000000140365053: mov     r8d, [rbx+924h]
 * 000000014036505A: cmovnz  r13d, r11d
 * 000000014036505E: mov     [rbp+0B70h+var_BE8], eax
 * 0000000140365061: add     eax, 30h ; '0'
 * 0000000140365064: mov     [rbp+0B70h+var_BB4], r9d
 * 0000000140365068: cmp     eax, [rbx+0A1Ch]
 * 000000014036506E: jbe     loc_140365157
 * 0000000140365074: mov     edx, eax
 * 0000000140365076: mov     rcx, rbx
 * 0000000140365079: call    sub_14036AB20
 * 000000014036507E: xor     r11d, r11d
 * 0000000140365081: mov     r14, rax
 * 0000000140365084: test    rax, rax
 * 0000000140365087: jz      loc_140364EBD
 * 000000014036508D: mov     ecx, [rbx+990h]
 * 0000000140365093: test    cl, 4
 * 0000000140365096: jnz     loc_140365149
 * 000000014036509C: mov     eax, [rbx+7E4h]
 * 00000001403650A2: lea     r9d, [r11+1]
 * 00000001403650A6: mov     r8, [rbx+7C8h]
 * 00000001403650AD: and     ecx, 20000000h
 * 00000001403650B3: neg     ecx
 * 00000001403650B5: sbb     edx, edx
 * 00000001403650B7: and     edx, [rbx+924h]
 * 00000001403650BD: cmp     eax, 8
 * 00000001403650C0: jb      short loc_1403650D7
 * 00000001403650C2: mov     ecx, eax
 * 00000001403650C4: shr     rcx, 3
 * 00000001403650C8: mov     [rbx], r11
 * 00000001403650CB: add     eax, 0FFFFFFF8h
 * 00000001403650CE: add     rbx, 8
 * 00000001403650D2: sub     rcx, r9
 * 00000001403650D5: jnz     short loc_1403650C8
 * 00000001403650D7: test    eax, eax
 * 00000001403650D9: jz      short loc_1403650EA
 * 00000001403650DB: mov     ecx, 0FFFFFFFFh
 * 00000001403650E0: mov     [rbx], r11b
 * 00000001403650E3: add     rbx, r9
 * 00000001403650E6: add     eax, ecx
 * 00000001403650E8: jnz     short loc_1403650E0
 * 00000001403650EA: mov     ebx, [r14+924h]
 * 00000001403650F1: mov     [r14+924h], edx
 * 00000001403650F8: cmp     edx, 3
 * 00000001403650FB: jz      short loc_140365130
 * 00000001403650FD: test    dword ptr [r14+990h], 10000000h
 * 0000000140365108: mov     ecx, r11d
 * 000000014036510B: cmovz   ecx, edx
 * 000000014036510E: test    ecx, ecx
 * 0000000140365110: jz      short loc_140365127
 * 0000000140365112: mov     rax, [r14+228h]
 * 0000000140365119: lea     rcx, [r8-8]
 * 000000014036511D: mov     rdx, [rcx]
 * 0000000140365120: call    KeGuardDispatchICall
 * 0000000140365125: jmp     short loc_14036513F
 * 0000000140365127: mov     rax, [r14+100h]
 * 000000014036512E: jmp     short loc_140365137
 * 0000000140365130: mov     rax, [r14+368h]
 * 0000000140365137: mov     rcx, r8
 * 000000014036513A: call    KeGuardDispatchICall
 * 000000014036513F: mov     [r14+924h], ebx
 * 0000000140365146: xor     r11d, r11d
 * 0000000140365149: and     dword ptr [r14+990h], 0FFFFFFFBh
 * 0000000140365151: mov     r9d, [rbp+0B70h+var_BB4]
 * 0000000140365155: jmp     short loc_140365160
 * 0000000140365157: mov     r14, rbx
 * 000000014036515A: mov     [rbx+7E4h], eax
 * 0000000140365160: mov     ebx, [rbp+0B70h+var_BE8]
 * 0000000140365163: mov     r8d, 1
 * 0000000140365169: add     [r14+80Ch], r8d
 * 0000000140365170: add     rbx, r14
 * 0000000140365173: mov     [rbp+0B70h+var_448], rbx
 * 000000014036517A: mov     rax, rbx
 * 000000014036517D: lea     ecx, [r8+2Fh]
 * 0000000140365181: lea     edx, [rcx-2Ah]
 * 0000000140365184: mov     [rax], r11
 * 0000000140365187: add     ecx, 0FFFFFFF8h
 * 000000014036518A: add     rax, 8
 * 000000014036518E: sub     rdx, r8
 * 0000000140365191: jnz     short loc_140365184
 * 0000000140365193: test    ecx, ecx
 * 0000000140365195: jz      short loc_1403651A6
 * 0000000140365197: mov     edx, 0FFFFFFFFh
 * 000000014036519C: mov     [rax], r11b
 * 000000014036519F: add     rax, r8
 * 00000001403651A2: add     ecx, edx
 * 00000001403651A4: jnz     short loc_14036519C
 * 00000001403651A6: mov     [rbx], r13d
 * 00000001403651A9: mov     [rbx+8], r15
 * 00000001403651AD: cmp     r9d, 7
 * 00000001403651B1: jnz     short loc_1403651CA
 * 00000001403651B3: test    r12d, r12d
 * 00000001403651B6: jz      short loc_1403651CA
 * 00000001403651B8: lea     r9, [rbx+18h]
 * 00000001403651BC: mov     r8d, r12d
 * 00000001403651BF: mov     rdx, r15
 * 00000001403651C2: mov     rcx, r14
 * 00000001403651C5: call    sub_1401B877C
 * 00000001403651CA: mov     [rbx+10h], r12d
 * 00000001403651CE: mov     r9, r15
 * 00000001403651D1: add     [r14+828h], r12d
 * 00000001403651D8: mov     rax, r15
 * 00000001403651DB: mov     r10d, [r14+814h]
 * 00000001403651E2: mov     rsi, [r14+818h]
 * 00000001403651E9: mov     ecx, r12d
 * 00000001403651EC: add     rcx, r15
 * 00000001403651EF: cmp     r15, rcx
 * 00000001403651F2: jnb     short loc_140365204
 * 00000001403651F4: mov     edx, 40h ; '@'
 * 00000001403651F9: prefetchnta byte ptr [rax]
 * 00000001403651FC: add     rax, rdx
 * 00000001403651FF: cmp     rax, rcx
 * 0000000140365202: jb      short loc_1403651F9
 * 0000000140365204: mov     r11d, r12d
 * 0000000140365207: mov     r8, rsi
 * 000000014036520A: shr     r11d, 7
 * 000000014036520E: mov     r13d, 1
 * 0000000140365214: test    r11d, r11d
 * 0000000140365217: jz      short loc_140365286
 * 0000000140365219: mov     r12, 7010008004002001h
 * 0000000140365223: mov     edx, 8
 * 0000000140365228: mov     rax, [r9]
 * 000000014036522B: mov     ecx, r10d
 * 000000014036522E: xor     rax, r8
 * 0000000140365231: mov     r8, [r9+8]
 * 0000000140365235: rol     rax, cl
 * 0000000140365238: add     r9, 10h
 * 000000014036523C: xor     r8, rax
 * 000000014036523F: rol     r8, cl
 * 0000000140365242: sub     rdx, r13
 * 0000000140365245: jnz     short loc_140365228
 * 0000000140365247: mov     rcx, r9
 * 000000014036524A: sub     rcx, r15
 * 000000014036524D: xor     rcx, rsi
 * 0000000140365250: mov     rax, rcx
 * 0000000140365253: rol     rax, 11h
 * 0000000140365257: xor     rcx, rax
 * 000000014036525A: mov     rax, r12
 * 000000014036525D: mul     rcx
 * 0000000140365260: xor     r10d, edx
 * 0000000140365263: mov     [rbp+0B70h+var_440], rdx
 * 000000014036526A: xor     r10d, eax
 * 000000014036526D: mov     eax, 0FFFFFFFFh
 * 0000000140365272: and     r10d, 3Fh
 * 0000000140365276: cmovz   r10d, r13d
 * 000000014036527A: add     r11d, eax
 * 000000014036527D: jnz     short loc_140365223
 * 000000014036527F: mov     r12d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140365286: mov     edx, r12d
 * 0000000140365289: and     edx, 7Fh
 * 000000014036528C: cmp     edx, 8
 * 000000014036528F: jb      short loc_1403652AD
 * 0000000140365291: mov     r11d, edx
 * 0000000140365294: shr     r11, 3
 * 0000000140365298: xor     r8, [r9]
 * 000000014036529B: mov     ecx, r10d
 * 000000014036529E: rol     r8, cl
 * 00000001403652A1: add     r9, 8
 * 00000001403652A5: add     edx, 0FFFFFFF8h
 * 00000001403652A8: sub     r11, r13
 * 00000001403652AB: jnz     short loc_140365298
 * 00000001403652AD: xor     r15d, r15d
 * 00000001403652B0: test    edx, edx
 * 00000001403652B2: jz      short loc_1403652D2
 * 00000001403652B4: mov     r15d, 0FFFFFFFFh
 * 00000001403652BA: movzx   eax, byte ptr [r9]
 * 00000001403652BE: mov     ecx, r10d
 * 00000001403652C1: xor     r8, rax
 * 00000001403652C4: add     r9, r13
 * 00000001403652C7: rol     r8, cl
 * 00000001403652CA: add     edx, r15d
 * 00000001403652CD: jnz     short loc_1403652BA
 * 00000001403652CF: xor     r15d, r15d
 * 00000001403652D2: mov     rax, r8
 * 00000001403652D5: jmp     short loc_1403652DA
 * 00000001403652D7: xor     r8d, eax
 * 00000001403652DA: shr     rax, 1Fh
 * 00000001403652DE: test    rax, rax
 * 00000001403652E1: jnz     short loc_1403652D7
 * 00000001403652E3: btr     r8d, 1Fh
 * 00000001403652E8: mov     rsi, r14
 * 00000001403652EB: mov     [rbx+14h], r8d
 * 00000001403652EF: mov     rbx, r14
 * 00000001403652F2: add     [r14+828h], r12d
 * 00000001403652F9: jmp     short loc_1403652FE
 * 00000001403652FB: xor     r15d, r15d
 * 00000001403652FE: mov     dword ptr [rbx+958h], 0Bh
 * 0000000140365308: jmp     loc_140364EC3
 * 000000014036530D: mov     r13d, 1
 * 0000000140365313: cmp     [rbx+8F8h], r15d
 * 000000014036531A: jnz     loc_140364EC9
 * 0000000140365320: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014036532A: add     rax, rbx
 * 000000014036532D: mov     [rbx+900h], rax
 * 0000000140365334: mov     [rbx+908h], r15
 * 000000014036533B: mov     qword ptr [rbx+910h], 105h
 * 0000000140365346: mov     qword ptr [rbx+918h], 0FFFFFFFFC000007Bh
 * 0000000140365351: jmp     loc_140361B34
 * 0000000140365356: mov     eax, 0FFFFFFFFh
 * 000000014036535B: mov     [rbx+970h], eax
 * 0000000140365361: test    r14, r14
 * 0000000140365364: jz      loc_1403655C0
 * 000000014036536A: mov     rax, [rbx+288h]
 * 0000000140365371: mov     rcx, r14
 * 0000000140365374: call    KeGuardDispatchICall
 * 0000000140365379: jmp     loc_1403655C0
 * 000000014036537E: mov     eax, [rsi+830h]
 * 0000000140365384: test    r13b, al
 * 0000000140365387: jz      loc_1403655C0
 * 000000014036538D: mov     ecx, [rsi+970h]
 * 0000000140365393: mov     r12d, 0FFFFFFFFh
 * 0000000140365399: cmp     ecx, r12d
 * 000000014036539C: jz      short loc_1403653AF
 * 000000014036539E: mov     rax, [rsi+278h]
 * 00000001403653A5: call    KeGuardDispatchICall
 * 00000001403653AA: mov     rbx, rax
 * 00000001403653AD: jmp     short loc_1403653B2
 * 00000001403653AF: mov     rbx, r15
 * 00000001403653B2: test    rbx, rbx
 * 00000001403653B5: jnz     short loc_1403653D1
 * 00000001403653B7: mov     rax, [rsi+280h]
 * 00000001403653BE: xor     ecx, ecx
 * 00000001403653C0: call    KeGuardDispatchICall
 * 00000001403653C5: mov     rbx, rax
 * 00000001403653C8: test    rax, rax
 * 00000001403653CB: jz      loc_1403655C0
 * 00000001403653D1: mov     rax, [rsi+290h]
 * 00000001403653D8: lea     rdx, [rbp+0B70h+var_620]
 * 00000001403653DF: mov     rcx, rbx
 * 00000001403653E2: call    KeGuardDispatchICall
 * 00000001403653E7: mov     r14d, eax
 * 00000001403653EA: test    eax, eax
 * 00000001403653EC: jns     short loc_1403653FF
 * 00000001403653EE: mov     rax, [rsi+288h]
 * 00000001403653F5: mov     rcx, rbx
 * 00000001403653F8: call    KeGuardDispatchICall
 * 00000001403653FD: jmp     short loc_140365461
 * 00000001403653FF: mov     [rsi+980h], rbx
 * 0000000140365406: mov     rax, [rsi+2B8h]
 * 000000014036540D: call    KeGuardDispatchICall
 * 0000000140365412: mov     rbx, rax
 * 0000000140365415: mov     rax, [rsi+2D8h]
 * 000000014036541C: mov     rcx, rbx
 * 000000014036541F: call    KeGuardDispatchICall
 * 0000000140365424: mov     rdx, rax
 * 0000000140365427: test    rax, rax
 * 000000014036542A: jnz     short loc_140365431
 * 000000014036542C: lea     ecx, [rax+4]
 * 000000014036542F: jmp     short loc_140365443
 * 0000000140365431: mov     rax, [rsi+2E8h]
 * 0000000140365438: mov     rcx, rbx
 * 000000014036543B: call    KeGuardDispatchICall
 * 0000000140365440: mov     ecx, r15d
 * 0000000140365443: mov     eax, [rsi+994h]
 * 0000000140365449: mov     r14d, r15d
 * 000000014036544C: and     eax, 0FFFFFFFBh
 * 000000014036544F: or      eax, ecx
 * 0000000140365451: mov     [rsi+994h], eax
 * 0000000140365457: add     dword ptr [rsi+828h], 10000h
 * 0000000140365461: test    r14d, r14d
 * 0000000140365464: js      loc_1403655C0
 * 000000014036546A: mov     rax, [rsi+960h]
 * 0000000140365471: mov     rcx, [rax]
 * 0000000140365474: cmp     rcx, [rsi+968h]
 * 000000014036547B: jnz     loc_140365522
 * 0000000140365481: mov     rax, [rsi+570h]
 * 0000000140365488: cmp     [rax+30h], r15d
 * 000000014036548C: jz      loc_140365522
 * 0000000140365492: lock or [rsp+0C70h+var_C70], r15d
 * 0000000140365497: mov     rax, [rsi+960h]
 * 000000014036549E: mov     rcx, [rax]
 * 00000001403654A1: cmp     rcx, [rsi+968h]
 * 00000001403654A8: jnz     short loc_140365522
 * 00000001403654AA: mov     rax, [rsi+960h]
 * 00000001403654B1: mov     rdx, [rax]
 * 00000001403654B4: mov     eax, [rsi+8F8h]
 * 00000001403654BA: mov     rcx, [rsi+968h]
 * 00000001403654C1: test    eax, eax
 * 00000001403654C3: jnz     short loc_140365522
 * 00000001403654C5: mov     rax, [rsi+590h]
 * 00000001403654CC: xor     rcx, rdx
 * 00000001403654CF: mov     [rax+18h], rcx
 * 00000001403654D3: mov     eax, [rsi+8F8h]
 * 00000001403654D9: mov     rcx, [rsi+968h]
 * 00000001403654E0: test    eax, eax
 * 00000001403654E2: jnz     short loc_140365522
 * 00000001403654E4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403654EE: xor     edx, edx
 * 00000001403654F0: add     rax, rsi
 * 00000001403654F3: mov     [rsi+900h], rax
 * 00000001403654FA: mov     [rsi+908h], r15
 * 0000000140365501: mov     qword ptr [rsi+910h], 103h
 * 000000014036550C: mov     [rsi+918h], rcx
 * 0000000140365513: mov     rcx, rsi
 * 0000000140365516: mov     [rsi+8F8h], r13d
 * 000000014036551D: call    sub_14036B3BC
 * 0000000140365522: mov     ecx, 8000h
 * 0000000140365527: test    [rsi+990h], ecx
 * 000000014036552D: jnz     short loc_14036553C
 * 000000014036552F: cmp     [rsi+8F8h], r15d
 * 0000000140365536: jnz     loc_1403655C0
 * 000000014036553C: mov     rbx, [rsi+980h]
 * 0000000140365543: lea     rdx, [rbp+0B70h+var_620]
 * 000000014036554A: mov     [rsi+980h], r15
 * 0000000140365551: mov     rcx, rbx
 * 0000000140365554: mov     rax, [rsi+298h]
 * 000000014036555B: call    KeGuardDispatchICall
 * 0000000140365560: mov     eax, [rsi+990h]
 * 0000000140365566: test    r13b, al
 * 0000000140365569: jz      short loc_1403655A9
 * 000000014036556B: and     eax, 0FFFFFFFEh
 * 000000014036556E: mov     rcx, rbx
 * 0000000140365571: mov     [rsi+990h], eax
 * 0000000140365577: mov     rax, [rsi+280h]
 * 000000014036557E: call    KeGuardDispatchICall
 * 0000000140365583: mov     rbx, rax
 * 0000000140365586: test    rax, rax
 * 0000000140365589: jz      short loc_1403655A2
 * 000000014036558B: mov     rax, [rsi+2A0h]
 * 0000000140365592: mov     rcx, rbx
 * 0000000140365595: call    KeGuardDispatchICall
 * 000000014036559A: mov     [rsi+970h], eax
 * 00000001403655A0: jmp     short loc_1403655A9
 * 00000001403655A2: mov     [rsi+970h], r12d
 * 00000001403655A9: test    rbx, rbx
 * 00000001403655AC: jz      short loc_1403655C0
 * 00000001403655AE: mov     rax, [rsi+288h]
 * 00000001403655B5: mov     rcx, rbx
 * 00000001403655B8: jmp     loc_140365374
 * 00000001403655BD: xor     r15d, r15d
 * 00000001403655C0: mov     [rsp+0C70h+var_C10], rsi
 * 00000001403655C5: test    dword ptr [rsi+990h], 2000000h
 * 00000001403655CF: jz      short loc_14036564E
 * 00000001403655D1: mov     rbx, [rsi+998h]
 * 00000001403655D8: mov     rax, [rsi+390h]
 * 00000001403655DF: mov     rcx, rbx
 * 00000001403655E2: call    KeGuardDispatchICall
 * 00000001403655E7: test    eax, eax
 * 00000001403655E9: jz      short loc_140365632
 * 00000001403655EB: cmp     [rsi+8F8h], r15d
 * 00000001403655F2: jnz     short loc_140365632
 * 00000001403655F4: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403655FE: xor     edx, edx
 * 0000000140365600: add     rax, rsi
 * 0000000140365603: mov     rcx, rsi
 * 0000000140365606: mov     [rsi+900h], rax
 * 000000014036560D: mov     [rsi+908h], r15
 * 0000000140365614: mov     qword ptr [rsi+910h], 110h
 * 000000014036561F: mov     [rsi+918h], r15
 * 0000000140365626: mov     [rsi+8F8h], r13d
 * 000000014036562D: call    sub_14036B3BC
 * 0000000140365632: mov     rax, [rsi+388h]
 * 0000000140365639: lea     rdx, sub_14036CED0
 * 0000000140365640: xor     r9d, r9d
 * 0000000140365643: mov     r8, rsi
 * 0000000140365646: mov     rcx, rbx
 * 0000000140365649: call    KeGuardDispatchICall
 * 000000014036564E: mov     edx, r13d
 * 0000000140365651: mov     rcx, rsi
 * 0000000140365654: call    sub_14036B3BC
 * 0000000140365659: test    dword ptr [rsi+994h], 100h
 * 0000000140365663: jz      short loc_140365670
 * 0000000140365665: mov     rax, [rbp+0B70h+var_B80]
 * 0000000140365669: mov     [rbp+0B78h], rax
 * 0000000140365670: mov     r9d, [rsi+990h]
 * 0000000140365677: mov     r8d, r9d
 * 000000014036567A: bt      r9d, 12h
 * 000000014036567F: jnb     loc_140365725
 * 0000000140365685: rdtsc
 * 0000000140365687: shl     rdx, 20h
 * 000000014036568B: or      rax, rdx
 * 000000014036568E: mov     rcx, rax
 * 0000000140365691: ror     rax, 3
 * 0000000140365695: xor     rcx, rax
 * 0000000140365698: mov     rax, 7010008004002001h
 * 00000001403656A2: mul     rcx
 * 00000001403656A5: mov     rcx, rdx
 * 00000001403656A8: mov     [rbp+0B70h+var_438], rdx
 * 00000001403656AF: xor     rcx, rax
 * 00000001403656B2: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001403656BC: mul     rcx
 * 00000001403656BF: shr     rdx, 3
 * 00000001403656C3: lea     rax, [rdx+rdx*4]
 * 00000001403656C7: add     rax, rax
 * 00000001403656CA: sub     rcx, rax
 * 00000001403656CD: mov     eax, 2
 * 00000001403656D2: cmp     rcx, rax
 * 00000001403656D5: jnb     short loc_140365725
 * 00000001403656D7: cmp     [rsi+8F8h], r15d
 * 00000001403656DE: jnz     short loc_140365725
 * 00000001403656E0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403656EA: xor     edx, edx
 * 00000001403656EC: add     rax, rsi
 * 00000001403656EF: mov     rcx, rsi
 * 00000001403656F2: mov     [rsi+900h], rax
 * 00000001403656F9: mov     [rsi+908h], r15
 * 0000000140365700: mov     qword ptr [rsi+910h], 108h
 * 000000014036570B: mov     [rsi+918h], r15
 * 0000000140365712: mov     [rsi+8F8h], r13d
 * 0000000140365719: call    sub_14036B3BC
 * 000000014036571E: mov     r8d, [rsi+990h]
 * 0000000140365725: mov     r10d, 8000h
 * 000000014036572B: bt      r8d, 1Eh
 * 0000000140365730: jb      short loc_1403657A1
 * 0000000140365732: test    r10d, r8d
 * 0000000140365735: jnz     short loc_140365740
 * 0000000140365737: cmp     [rsi+8F8h], r15d
 * 000000014036573E: jnz     short loc_1403657A1
 * 0000000140365740: mov     rcx, [rbp+0B70h+arg_0]
 * 0000000140365747: test    [rcx+990h], r10d
 * 000000014036574E: jnz     short loc_1403657A1
 * 0000000140365750: add     rcx, 8F8h
 * 0000000140365757: cmp     [rcx], r15d
 * 000000014036575A: jz      short loc_1403657A1
 * 000000014036575C: mov     r8d, 28h ; '('
 * 0000000140365762: lea     rdx, [rsi+8F8h]
 * 0000000140365769: lea     r9d, [r8-23h]
 * 000000014036576D: mov     rax, [rdx]
 * 0000000140365770: add     r8d, 0FFFFFFF8h
 * 0000000140365774: mov     [rcx], rax
 * 0000000140365777: add     rdx, 8
 * 000000014036577B: add     rcx, 8
 * 000000014036577F: sub     r9, r13
 * 0000000140365782: jnz     short loc_14036576D
 * 0000000140365784: test    r8d, r8d
 * 0000000140365787: jz      short loc_1403657A1
 * 0000000140365789: mov     r15d, 0FFFFFFFFh
 * 000000014036578F: mov     al, [rdx]
 * 0000000140365791: add     rdx, r13
 * 0000000140365794: mov     [rcx], al
 * 0000000140365796: add     rcx, r13
 * 0000000140365799: add     r8d, r15d
 * 000000014036579C: jnz     short loc_14036578F
 * 000000014036579E: xor     r15d, r15d
 * 00000001403657A1: test    [rsi+990h], r10d
 * 00000001403657A8: jnz     short loc_1403657B7
 * 00000001403657AA: cmp     [rsi+8F8h], r15d
 * 00000001403657B1: jnz     loc_1403666E0
 * 00000001403657B7: mov     eax, [rsi+0A28h]
 * 00000001403657BD: test    eax, eax
 * 00000001403657BF: jz      loc_1403666E0
 * 00000001403657C5: lea     r14, [rsi+rax]
 * 00000001403657C9: mov     r11, [r14+8]
 * 00000001403657CD: mov     [rbp+0B70h+var_BC8], r14
 * 00000001403657D1: test    r11, r11
 * 00000001403657D4: jz      loc_140365A92
 * 00000001403657DA: mov     r9d, [r14+10h]
 * 00000001403657DE: mov     r8, r11
 * 00000001403657E1: add     [rsi+828h], r9d
 * 00000001403657E8: mov     rax, r11
 * 00000001403657EB: mov     r10d, [rsi+814h]
 * 00000001403657F2: mov     r12, [rsi+818h]
 * 00000001403657F9: lea     rcx, [r11+r9]
 * 00000001403657FD: cmp     r11, rcx
 * 0000000140365800: jnb     short loc_140365812
 * 0000000140365802: mov     edx, 40h ; '@'
 * 0000000140365807: prefetchnta byte ptr [rax]
 * 000000014036580A: add     rax, rdx
 * 000000014036580D: cmp     rax, rcx
 * 0000000140365810: jb      short loc_140365807
 * 0000000140365812: mov     r15d, r9d
 * 0000000140365815: mov     rbx, r12
 * 0000000140365818: shr     r15d, 7
 * 000000014036581C: test    r15d, r15d
 * 000000014036581F: jz      short loc_14036588A
 * 0000000140365821: mov     rdi, 7010008004002001h
 * 000000014036582B: mov     eax, 8
 * 0000000140365830: xor     rbx, [r8]
 * 0000000140365833: mov     ecx, r10d
 * 0000000140365836: rol     rbx, cl
 * 0000000140365839: xor     rbx, [r8+8]
 * 000000014036583D: add     r8, 10h
 * 0000000140365841: rol     rbx, cl
 * 0000000140365844: sub     rax, r13
 * 0000000140365847: jnz     short loc_140365830
 * 0000000140365849: mov     rcx, r8
 * 000000014036584C: sub     rcx, r11
 * 000000014036584F: xor     rcx, r12
 * 0000000140365852: mov     rax, rcx
 * 0000000140365855: rol     rax, 11h
 * 0000000140365859: xor     rcx, rax
 * 000000014036585C: mov     rax, rdi
 * 000000014036585F: mul     rcx
 * 0000000140365862: xor     r10d, edx
 * 0000000140365865: mov     [rbp+0B70h+var_430], rdx
 * 000000014036586C: xor     r10d, eax
 * 000000014036586F: mov     edx, 0FFFFFFFFh
 * 0000000140365874: and     r10d, 3Fh
 * 0000000140365878: cmovz   r10d, r13d
 * 000000014036587C: add     r15d, edx
 * 000000014036587F: jnz     short loc_14036582B
 * 0000000140365881: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140365888: jmp     short loc_14036588F
 * 000000014036588A: mov     edx, 0FFFFFFFFh
 * 000000014036588F: and     r9d, 7Fh
 * 0000000140365893: cmp     r9d, 8
 * 0000000140365897: jb      short loc_1403658B6
 * 0000000140365899: mov     eax, r9d
 * 000000014036589C: shr     rax, 3
 * 00000001403658A0: xor     rbx, [r8]
 * 00000001403658A3: mov     ecx, r10d
 * 00000001403658A6: rol     rbx, cl
 * 00000001403658A9: add     r8, 8
 * 00000001403658AD: add     r9d, 0FFFFFFF8h
 * 00000001403658B1: sub     rax, r13
 * 00000001403658B4: jnz     short loc_1403658A0
 * 00000001403658B6: xor     r15d, r15d
 * 00000001403658B9: test    r9d, r9d
 * 00000001403658BC: jz      short loc_1403658D3
 * 00000001403658BE: movzx   eax, byte ptr [r8]
 * 00000001403658C2: mov     ecx, r10d
 * 00000001403658C5: xor     rbx, rax
 * 00000001403658C8: add     r8, r13
 * 00000001403658CB: rol     rbx, cl
 * 00000001403658CE: add     r9d, edx
 * 00000001403658D1: jnz     short loc_1403658BE
 * 00000001403658D3: mov     rax, rbx
 * 00000001403658D6: jmp     short loc_1403658DA
 * 00000001403658D8: xor     ebx, eax
 * 00000001403658DA: shr     rax, 1Fh
 * 00000001403658DE: test    rax, rax
 * 00000001403658E1: jnz     short loc_1403658D8
 * 00000001403658E3: btr     ebx, 1Fh
 * 00000001403658E7: mov     r12d, r15d
 * 00000001403658EA: cmp     ebx, [r14+14h]
 * 00000001403658EE: jz      loc_140365A5B
 * 00000001403658F4: cmp     [r14], r15d
 * 00000001403658F7: jnz     short loc_140365901
 * 00000001403658F9: cmp     [r14+18h], r15d
 * 00000001403658FD: cmovnz  r12d, r13d
 * 0000000140365901: mov     ecx, [r14+10h]
 * 0000000140365905: mov     rdx, [r14+8]
 * 0000000140365909: test    rcx, rcx
 * 000000014036590C: jz      loc_1403659E5
 * 0000000140365912: mov     eax, [rsi+994h]
 * 0000000140365918: mov     r8d, 40h ; '@'
 * 000000014036591E: test    r8b, al
 * 0000000140365921: jz      loc_1403659E5
 * 0000000140365927: mov     rax, cr8
 * 000000014036592B: mov     [rbp+0B70h+arg_8], rax
 * 0000000140365932: mov     r8d, 2
 * 0000000140365938: mov     cr8, r8
 * 000000014036593C: dec     rcx
 * 000000014036593F: mov     r15, rdx
 * 0000000140365942: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140365949: add     rcx, rdx
 * 000000014036594C: or      rcx, 0FFFh
 * 0000000140365953: mov     [rsp+0C70h+var_BF8], rcx
 * 0000000140365958: lea     rcx, [r15-1]
 * 000000014036595C: mov     [rbp+0B70h+var_B80], rcx
 * 0000000140365960: movzx   r13d, al
 * 0000000140365964: mov     rax, [rsi+468h]
 * 000000014036596B: xor     edx, edx
 * 000000014036596D: mov     rcx, r15
 * 0000000140365970: call    KeGuardDispatchICall
 * 0000000140365975: cmp     eax, 0C000022Dh
 * 000000014036597A: jnz     short loc_1403659A9
 * 000000014036597C: test    r12d, r12d
 * 000000014036597F: jnz     short loc_1403659DA
 * 0000000140365981: mov     rax, [rbp+0B70h+arg_8]
 * 0000000140365988: lea     ecx, [r12+1]
 * 000000014036598D: cmp     al, cl
 * 000000014036598F: ja      short loc_1403659B4
 * 0000000140365991: movzx   r13d, al
 * 0000000140365995: mov     cr8, r13
 * 0000000140365999: mov     al, [r15]
 * 000000014036599C: mov     rax, cr8
 * 00000001403659A0: lea     eax, [rcx+1]
 * 00000001403659A3: mov     cr8, rax
 * 00000001403659A7: jmp     short loc_140365964
 * 00000001403659A9: test    eax, eax
 * 00000001403659AB: js      short loc_1403659DA
 * 00000001403659AD: mov     rax, [rbp+0B70h+arg_8]
 * 00000001403659B4: mov     rcx, [rbp+0B70h+var_B80]
 * 00000001403659B8: mov     edx, 1000h
 * 00000001403659BD: add     rcx, rdx
 * 00000001403659C0: add     r15, rdx
 * 00000001403659C3: mov     [rbp+0B70h+var_B80], rcx
 * 00000001403659C7: cmp     rcx, [rsp+0C70h+var_BF8]
 * 00000001403659CC: jnz     short loc_140365960
 * 00000001403659CE: mov     cr8, r13
 * 00000001403659D2: xor     r15d, r15d
 * 00000001403659D5: jmp     loc_140365A5B
 * 00000001403659DA: mov     cr8, r13
 * 00000001403659DE: xor     r15d, r15d
 * 00000001403659E1: lea     r13d, [r15+1]
 * 00000001403659E5: mov     eax, [rsi+8F8h]
 * 00000001403659EB: mov     edx, [r14+14h]
 * 00000001403659EF: test    eax, eax
 * 00000001403659F1: jnz     short loc_140365A09
 * 00000001403659F3: mov     rax, [rsi+590h]
 * 00000001403659FA: mov     ecx, ebx
 * 00000001403659FC: xor     rcx, rdx
 * 00000001403659FF: mov     [rax+18h], rcx
 * 0000000140365A03: mov     eax, [rsi+8F8h]
 * 0000000140365A09: mov     rcx, [r14+8]
 * 0000000140365A0D: test    eax, eax
 * 0000000140365A0F: jnz     short loc_140365A5B
 * 0000000140365A11: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140365A1B: xor     edx, edx
 * 0000000140365A1D: add     rax, rsi
 * 0000000140365A20: mov     [rsi+900h], rax
 * 0000000140365A27: mov     rax, 0B3B74BDEE4453415h
 * 0000000140365A31: add     rax, r14
 * 0000000140365A34: mov     [rsi+908h], rax
 * 0000000140365A3B: movsxd  rax, dword ptr [r14]
 * 0000000140365A3E: mov     [rsi+910h], rax
 * 0000000140365A45: mov     [rsi+918h], rcx
 * 0000000140365A4C: mov     rcx, rsi
 * 0000000140365A4F: mov     [rsi+8F8h], r13d
 * 0000000140365A56: call    sub_14036B3BC
 * 0000000140365A5B: mov     rcx, [r14+18h]
 * 0000000140365A5F: mov     rax, [rsi+100h]
 * 0000000140365A66: call    KeGuardDispatchICall
 * 0000000140365A6B: mov     [r14+8], r15
 * 0000000140365A6F: mov     [r14+10h], r15d
 * 0000000140365A73: mov     rcx, [rsi+818h]
 * 0000000140365A7A: mov     rax, rcx
 * 0000000140365A7D: jmp     short loc_140365A81
 * 0000000140365A7F: xor     ecx, eax
 * 0000000140365A81: shr     rax, 1Fh
 * 0000000140365A85: test    rax, rax
 * 0000000140365A88: jnz     short loc_140365A7F
 * 0000000140365A8A: btr     ecx, 1Fh
 * 0000000140365A8E: mov     [r14+14h], ecx
 * 0000000140365A92: rdtsc
 * 0000000140365A94: shl     rdx, 20h
 * 0000000140365A98: mov     r9, 7010008004002001h
 * 0000000140365AA2: or      rax, rdx
 * 0000000140365AA5: mov     rcx, rax
 * 0000000140365AA8: ror     rax, 3
 * 0000000140365AAC: xor     rcx, rax
 * 0000000140365AAF: mov     rax, r9
 * 0000000140365AB2: mul     rcx
 * 0000000140365AB5: mov     rcx, rdx
 * 0000000140365AB8: mov     [rbp+0B70h+var_428], rdx
 * 0000000140365ABF: xor     rcx, rax
 * 0000000140365AC2: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140365ACC: mul     rcx
 * 0000000140365ACF: shr     rdx, 1
 * 0000000140365AD2: lea     rax, [rdx+rdx*2]
 * 0000000140365AD6: cmp     rcx, rax
 * 0000000140365AD9: jnz     loc_1403666EC
 * 0000000140365ADF: mov     r8d, [rsi+810h]
 * 0000000140365AE6: lea     r12, [r14+18h]
 * 0000000140365AEA: rdtsc
 * 0000000140365AEC: shl     rdx, 20h
 * 0000000140365AF0: or      rax, rdx
 * 0000000140365AF3: mov     rcx, rax
 * 0000000140365AF6: ror     rax, 3
 * 0000000140365AFA: xor     rcx, rax
 * 0000000140365AFD: mov     rax, r9
 * 0000000140365B00: mul     rcx
 * 0000000140365B03: mov     rbx, rdx
 * 0000000140365B06: mov     [rbp+0B70h+var_420], rdx
 * 0000000140365B0D: xor     ebx, eax
 * 0000000140365B0F: and     ebx, 7FFh
 * 0000000140365B15: rdtsc
 * 0000000140365B17: shl     rdx, 20h
 * 0000000140365B1B: or      rax, rdx
 * 0000000140365B1E: mov     rcx, rax
 * 0000000140365B21: ror     rax, 3
 * 0000000140365B25: xor     rcx, rax
 * 0000000140365B28: mov     rax, r9
 * 0000000140365B2B: mul     rcx
 * 0000000140365B2E: mov     ecx, [rsi+990h]
 * 0000000140365B34: lea     r9d, [rbx+1]
 * 0000000140365B38: xor     rax, rdx
 * 0000000140365B3B: mov     [rbp+0B70h+var_418], rdx
 * 0000000140365B42: xor     edx, edx
 * 0000000140365B44: shr     ecx, 13h
 * 0000000140365B47: div     r9
 * 0000000140365B4A: mov     rax, [rsi+0F8h]
 * 0000000140365B51: and     ecx, 200h
 * 0000000140365B57: mov     r15, rdx
 * 0000000140365B5A: lea     edx, [rbx+0AA0h]
 * 0000000140365B60: call    KeGuardDispatchICall
 * 0000000140365B65: mov     r11, rax
 * 0000000140365B68: test    rax, rax
 * 0000000140365B6B: jnz     loc_140365F06
 * 0000000140365B71: lea     r15d, [rax+1]
 * 0000000140365B75: add     [rsi+0A18h], r15d
 * 0000000140365B7C: mov     r9, 7010008004002001h
 * 0000000140365B86: mov     r13d, [rsi+990h]
 * 0000000140365B8D: mov     [rbp+0B70h+var_BE8], r11d
 * 0000000140365B91: mov     [rsp+0C70h+var_C20], r11
 * 0000000140365B96: mov     dword ptr [rbp+0B70h+arg_8], r13d
 * 0000000140365B9D: bt      r13d, 1Eh
 * 0000000140365BA2: jb      loc_140366B09
 * 0000000140365BA8: mov     r14, [rbp+0B70h+arg_0]
 * 0000000140365BAF: cmp     rsi, r14
 * 0000000140365BB2: jnz     loc_140366C24
 * 0000000140365BB8: mov     eax, 8000h
 * 0000000140365BBD: test    eax, r13d
 * 0000000140365BC0: jnz     short loc_140365BCF
 * 0000000140365BC2: cmp     [rsi+8F8h], r11d
 * 0000000140365BC9: jnz     loc_1403668C7
 * 0000000140365BCF: mov     r8d, [r14+924h]
 * 0000000140365BD6: mov     rcx, r14
 * 0000000140365BD9: mov     edx, [r14+7E4h]
 * 0000000140365BE0: call    sub_14036AB20
 * 0000000140365BE5: mov     rsi, rax
 * 0000000140365BE8: test    rax, rax
 * 0000000140365BEB: jz      loc_1403668C7
 * 0000000140365BF1: mov     ecx, [rsi+954h]
 * 0000000140365BF7: mov     r15, 7010008004002001h
 * 0000000140365C01: mov     r12d, [rsi+0A2Ch]
 * 0000000140365C08: mov     rax, [rax+7C8h]
 * 0000000140365C0F: add     r12d, 0FFFFFF38h
 * 0000000140365C16: mov     [rbp+0B70h+var_BB0], ecx
 * 0000000140365C19: mov     ecx, [rsi+990h]
 * 0000000140365C1F: mov     [rbp+0B70h+var_BE8], ecx
 * 0000000140365C22: mov     rcx, [rsi+4E8h]
 * 0000000140365C29: shr     r12d, 3
 * 0000000140365C2D: mov     [rsp+0C70h+var_C08], rcx
 * 0000000140365C32: mov     rcx, [rsi+5C0h]
 * 0000000140365C39: mov     [rbp+0B70h+var_B80], rcx
 * 0000000140365C3D: mov     [rsp+0C70h+var_C20], rax
 * 0000000140365C42: mov     dword ptr [rbp+0B70h+arg_8], r12d
 * 0000000140365C49: mov     [rsi+0C4h], r12d
 * 0000000140365C50: rdtsc
 * 0000000140365C52: shl     rdx, 20h
 * 0000000140365C56: or      rax, rdx
 * 0000000140365C59: mov     rcx, rax
 * 0000000140365C5C: ror     rax, 3
 * 0000000140365C60: xor     rcx, rax
 * 0000000140365C63: mov     rax, r15
 * 0000000140365C66: mul     rcx
 * 0000000140365C69: mov     r11, rdx
 * 0000000140365C6C: mov     [rbp+0B70h+var_3D0], rdx
 * 0000000140365C73: xor     r11, rax
 * 0000000140365C76: jz      short loc_140365C50
 * 0000000140365C78: mov     rax, [rsi+7B8h]
 * 0000000140365C7F: lea     r14, [rsi+798h]
 * 0000000140365C86: mov     ebx, 20h ; ' '
 * 0000000140365C8B: mov     [rsp+0C70h+var_BF8], rax
 * 0000000140365C90: mov     eax, [rsi+828h]
 * 0000000140365C96: lea     rdx, [rbp+0B70h+var_110]
 * 0000000140365C9D: mov     [rbp+0B70h+var_BB4], eax
 * 0000000140365CA0: mov     r8d, ebx
 * 0000000140365CA3: mov     rcx, r14
 * 0000000140365CA6: xor     r15d, r15d
 * 0000000140365CA9: lea     r10d, [rbx-1Ch]
 * 0000000140365CAD: mov     r9d, r10d
 * 0000000140365CB0: lea     r13d, [rbx-1Fh]
 * 0000000140365CB4: mov     rax, [rcx]
 * 0000000140365CB7: add     r8d, 0FFFFFFF8h
 * 0000000140365CBB: mov     [rdx], rax
 * 0000000140365CBE: add     rcx, 8
 * 0000000140365CC2: add     rdx, 8
 * 0000000140365CC6: sub     r9, r13
 * 0000000140365CC9: jnz     short loc_140365CB4
 * 0000000140365CCB: mov     r9d, 0FFFFFFFFh
 * 0000000140365CD1: test    r8d, r8d
 * 0000000140365CD4: jz      short loc_140365CE5
 * 0000000140365CD6: mov     al, [rcx]
 * 0000000140365CD8: add     rcx, r13
 * 0000000140365CDB: mov     [rdx], al
 * 0000000140365CDD: add     rdx, r13
 * 0000000140365CE0: add     r8d, r9d
 * 0000000140365CE3: jnz     short loc_140365CD6
 * 0000000140365CE5: mov     [rsi+7B8h], r15
 * 0000000140365CEC: mov     ecx, ebx
 * 0000000140365CEE: mov     [rsi+828h], r15d
 * 0000000140365CF5: mov     rax, r14
 * 0000000140365CF8: mov     rdx, r10
 * 0000000140365CFB: mov     [rax], r15
 * 0000000140365CFE: add     ecx, 0FFFFFFF8h
 * 0000000140365D01: add     rax, 8
 * 0000000140365D05: sub     rdx, r13
 * 0000000140365D08: jnz     short loc_140365CFB
 * 0000000140365D0A: test    ecx, ecx
 * 0000000140365D0C: jz      short loc_140365D19
 * 0000000140365D0E: mov     [rax], r15b
 * 0000000140365D11: add     rax, r13
 * 0000000140365D14: add     ecx, r9d
 * 0000000140365D17: jnz     short loc_140365D0E
 * 0000000140365D19: mov     eax, [rsi+7E4h]
 * 0000000140365D1F: mov     r9, rsi
 * 0000000140365D22: add     [rsi+828h], eax
 * 0000000140365D28: mov     rax, rsi
 * 0000000140365D2B: mov     r10d, [rsi+7E4h]
 * 0000000140365D32: mov     ebx, [rsi+814h]
 * 0000000140365D38: mov     r13, [rsi+818h]
 * 0000000140365D3F: lea     rcx, [rsi+r10]
 * 0000000140365D43: cmp     rsi, rcx
 * 0000000140365D46: jnb     short loc_140365D58
 * 0000000140365D48: mov     edx, 40h ; '@'
 * 0000000140365D4D: prefetchnta byte ptr [rax]
 * 0000000140365D50: add     rax, rdx
 * 0000000140365D53: cmp     rax, rcx
 * 0000000140365D56: jb      short loc_140365D4D
 * 0000000140365D58: mov     r15d, r10d
 * 0000000140365D5B: mov     r8, r13
 * 0000000140365D5E: shr     r15d, 7
 * 0000000140365D62: mov     edx, 1
 * 0000000140365D67: test    r15d, r15d
 * 0000000140365D6A: jz      short loc_140365DE2
 * 0000000140365D6C: mov     r12d, 0FFFFFFFFh
 * 0000000140365D72: mov     r14, 7010008004002001h
 * 0000000140365D7C: mov     eax, 8
 * 0000000140365D81: xor     r8, [r9]
 * 0000000140365D84: mov     ecx, ebx
 * 0000000140365D86: rol     r8, cl
 * 0000000140365D89: xor     r8, [r9+8]
 * 0000000140365D8D: add     r9, 10h
 * 0000000140365D91: rol     r8, cl
 * 0000000140365D94: sub     rax, rdx
 * 0000000140365D97: jnz     short loc_140365D81
 * 0000000140365D99: mov     rcx, r9
 * 0000000140365D9C: sub     rcx, rsi
 * 0000000140365D9F: xor     rcx, r13
 * 0000000140365DA2: mov     rax, rcx
 * 0000000140365DA5: rol     rax, 11h
 * 0000000140365DA9: xor     rcx, rax
 * 0000000140365DAC: mov     rax, r14
 * 0000000140365DAF: mul     rcx
 * 0000000140365DB2: xor     ebx, edx
 * 0000000140365DB4: mov     [rbp+0B70h+var_3C8], rdx
 * 0000000140365DBB: xor     ebx, eax
 * 0000000140365DBD: mov     edx, 1
 * 0000000140365DC2: and     ebx, 3Fh
 * 0000000140365DC5: cmovz   ebx, edx
 * 0000000140365DC8: add     r15d, r12d
 * 0000000140365DCB: jnz     short loc_140365D7C
 * 0000000140365DCD: mov     r12d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140365DD4: lea     r14, [rsi+798h]
 * 0000000140365DDB: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140365DE2: and     r10d, 7Fh
 * 0000000140365DE6: cmp     r10d, 8
 * 0000000140365DEA: jb      short loc_140365E08
 * 0000000140365DEC: mov     eax, r10d
 * 0000000140365DEF: shr     rax, 3
 * 0000000140365DF3: xor     r8, [r9]
 * 0000000140365DF6: mov     ecx, ebx
 * 0000000140365DF8: rol     r8, cl
 * 0000000140365DFB: add     r9, 8
 * 0000000140365DFF: add     r10d, 0FFFFFFF8h
 * 0000000140365E03: sub     rax, rdx
 * 0000000140365E06: jnz     short loc_140365DF3
 * 0000000140365E08: xor     r15d, r15d
 * 0000000140365E0B: mov     r13d, 0FFFFFFFFh
 * 0000000140365E11: test    r10d, r10d
 * 0000000140365E14: jz      short loc_140365E2A
 * 0000000140365E16: movzx   eax, byte ptr [r9]
 * 0000000140365E1A: mov     ecx, ebx
 * 0000000140365E1C: xor     r8, rax
 * 0000000140365E1F: add     r9, rdx
 * 0000000140365E22: rol     r8, cl
 * 0000000140365E25: add     r10d, r13d
 * 0000000140365E28: jnz     short loc_140365E16
 * 0000000140365E2A: mov     rax, [rsp+0C70h+var_BF8]
 * 0000000140365E2F: lea     rcx, [rbp+0B70h+var_110]
 * 0000000140365E36: mov     r9d, 4
 * 0000000140365E3C: mov     [rsi+7B8h], rax
 * 0000000140365E43: mov     eax, [rbp+0B70h+var_BB4]
 * 0000000140365E46: mov     edx, r9d
 * 0000000140365E49: add     [rsi+828h], eax
 * 0000000140365E4F: lea     ebx, [r9-3]
 * 0000000140365E53: lea     r10d, [r9+1Ch]
 * 0000000140365E57: mov     rax, [rcx]
 * 0000000140365E5A: add     r10d, 0FFFFFFF8h
 * 0000000140365E5E: mov     [r14], rax
 * 0000000140365E61: add     rcx, 8
 * 0000000140365E65: add     r14, 8
 * 0000000140365E69: sub     rdx, rbx
 * 0000000140365E6C: jnz     short loc_140365E57
 * 0000000140365E6E: test    r10d, r10d
 * 0000000140365E71: jz      short loc_140365E83
 * 0000000140365E73: mov     al, [rcx]
 * 0000000140365E75: add     rcx, rbx
 * 0000000140365E78: mov     [r14], al
 * 0000000140365E7B: add     r14, rbx
 * 0000000140365E7E: add     r10d, r13d
 * 0000000140365E81: jnz     short loc_140365E73
 * 0000000140365E83: mov     [rsi+7B8h], r8
 * 0000000140365E8A: test    dword ptr [rsi+990h], 40000000h
 * 0000000140365E94: jnz     loc_140366749
 * 0000000140365E9A: mov     rcx, rsi
 * 0000000140365E9D: mov     eax, r15d
 * 0000000140365EA0: mov     r14d, 19h
 * 0000000140365EA6: xor     [rcx], r11
 * 0000000140365EA9: add     eax, ebx
 * 0000000140365EAB: lea     rcx, [rcx+8]
 * 0000000140365EAF: cmp     eax, r14d
 * 0000000140365EB2: jb      short loc_140365EA6
 * 0000000140365EB4: mov     [rbp+0B70h+var_950], r11
 * 0000000140365EBB: mov     r8d, r12d
 * 0000000140365EBE: test    r12d, r12d
 * 0000000140365EC1: jz      loc_1403666F8
 * 0000000140365EC7: mov     edx, r12d
 * 0000000140365ECA: dec     rdx
 * 0000000140365ECD: lea     rdx, [rcx+rdx*8]
 * 0000000140365ED1: xor     [rdx], r11
 * 0000000140365ED4: lea     rax, [rbp+0B70h+var_950]
 * 0000000140365EDB: mov     ecx, r8d
 * 0000000140365EDE: lea     rdx, [rdx-8]
 * 0000000140365EE2: ror     r11, cl
 * 0000000140365EE5: mov     [rbp+0B70h+var_950], r11
 * 0000000140365EEC: and     r11d, 3Fh
 * 0000000140365EF0: btc     [rax], r11
 * 0000000140365EF4: sub     r8d, ebx
 * 0000000140365EF7: jz      loc_1403666F8
 * 0000000140365EFD: mov     r11, [rbp+0B70h+var_950]
 * 0000000140365F04: jmp     short loc_140365ED1
 * 0000000140365F06: mov     r9d, r15d
 * 0000000140365F09: mov     r8, r11
 * 0000000140365F0C: cmp     r15d, 8
 * 0000000140365F10: jb      short loc_140365F60
 * 0000000140365F12: mov     r10d, r15d
 * 0000000140365F15: mov     r13d, 1
 * 0000000140365F1B: shr     r10, 3
 * 0000000140365F1F: mov     r14, 7010008004002001h
 * 0000000140365F29: rdtsc
 * 0000000140365F2B: shl     rdx, 20h
 * 0000000140365F2F: add     r9d, 0FFFFFFF8h
 * 0000000140365F33: or      rax, rdx
 * 0000000140365F36: mov     rcx, rax
 * 0000000140365F39: ror     rax, 3
 * 0000000140365F3D: xor     rcx, rax
 * 0000000140365F40: mov     rax, r14
 * 0000000140365F43: mul     rcx
 * 0000000140365F46: mov     [rbp+0B70h+var_410], rdx
 * 0000000140365F4D: xor     rdx, rax
 * 0000000140365F50: mov     [r8], rdx
 * 0000000140365F53: add     r8, 8
 * 0000000140365F57: sub     r10, r13
 * 0000000140365F5A: jnz     short loc_140365F29
 * 0000000140365F5C: mov     r14, [rbp+0B70h+var_BC8]
 * 0000000140365F60: test    r9d, r9d
 * 0000000140365F63: jz      short loc_140365FA8
 * 0000000140365F65: rdtsc
 * 0000000140365F67: shl     rdx, 20h
 * 0000000140365F6B: or      rax, rdx
 * 0000000140365F6E: mov     rcx, rax
 * 0000000140365F71: ror     rax, 3
 * 0000000140365F75: xor     rcx, rax
 * 0000000140365F78: mov     rax, 7010008004002001h
 * 0000000140365F82: mul     rcx
 * 0000000140365F85: mov     ecx, 0FFFFFFFFh
 * 0000000140365F8A: mov     [rbp+0B70h+var_408], rdx
 * 0000000140365F91: xor     rdx, rax
 * 0000000140365F94: mov     eax, 1
 * 0000000140365F99: mov     [r8], dl
 * 0000000140365F9C: add     r8, rax
 * 0000000140365F9F: shr     rdx, 8
 * 0000000140365FA3: add     r9d, ecx
 * 0000000140365FA6: jnz     short loc_140365F99
 * 0000000140365FA8: mov     r9d, r15d
 * 0000000140365FAB: sub     ebx, r15d
 * 0000000140365FAE: add     r9, r11
 * 0000000140365FB1: mov     r15d, 1
 * 0000000140365FB7: lea     r8, [r9+0AA0h]
 * 0000000140365FBE: cmp     ebx, 8
 * 0000000140365FC1: jb      short loc_140366006
 * 0000000140365FC3: mov     r10d, ebx
 * 0000000140365FC6: mov     r13, 7010008004002001h
 * 0000000140365FD0: shr     r10, 3
 * 0000000140365FD4: rdtsc
 * 0000000140365FD6: shl     rdx, 20h
 * 0000000140365FDA: add     ebx, 0FFFFFFF8h
 * 0000000140365FDD: or      rax, rdx
 * 0000000140365FE0: mov     rcx, rax
 * 0000000140365FE3: ror     rax, 3
 * 0000000140365FE7: xor     rcx, rax
 * 0000000140365FEA: mov     rax, r13
 * 0000000140365FED: mul     rcx
 * 0000000140365FF0: mov     [rbp+0B70h+var_400], rdx
 * 0000000140365FF7: xor     rdx, rax
 * 0000000140365FFA: mov     [r8], rdx
 * 0000000140365FFD: add     r8, 8
 * 0000000140366001: sub     r10, r15
 * 0000000140366004: jnz     short loc_140365FD4
 * 0000000140366006: test    ebx, ebx
 * 0000000140366008: jz      short loc_140366047
 * 000000014036600A: rdtsc
 * 000000014036600C: shl     rdx, 20h
 * 0000000140366010: or      rax, rdx
 * 0000000140366013: mov     rcx, rax
 * 0000000140366016: ror     rax, 3
 * 000000014036601A: xor     rcx, rax
 * 000000014036601D: mov     rax, 7010008004002001h
 * 0000000140366027: mul     rcx
 * 000000014036602A: mov     [rbp+0B70h+var_3F8], rdx
 * 0000000140366031: xor     rdx, rax
 * 0000000140366034: mov     eax, 0FFFFFFFFh
 * 0000000140366039: mov     [r8], dl
 * 000000014036603C: add     r8, r15
 * 000000014036603F: shr     rdx, 8
 * 0000000140366043: add     ebx, eax
 * 0000000140366045: jnz     short loc_140366039
 * 0000000140366047: test    r12, r12
 * 000000014036604A: jz      short loc_140366050
 * 000000014036604C: mov     [r12], r11
 * 0000000140366050: xor     r11d, r11d
 * 0000000140366053: test    r9, r9
 * 0000000140366056: jz      loc_140365B7C
 * 000000014036605C: mov     r10d, 0AA0h
 * 0000000140366062: mov     [r14+8], r9
 * 0000000140366066: mov     [r14+10h], r10d
 * 000000014036606A: mov     r8d, r10d
 * 000000014036606D: mov     r14d, 154h
 * 0000000140366073: mov     rcx, rsi
 * 0000000140366076: mov     rdx, r9
 * 0000000140366079: mov     rax, [rcx]
 * 000000014036607C: add     r8d, 0FFFFFFF8h
 * 0000000140366080: mov     [rdx], rax
 * 0000000140366083: add     rcx, 8
 * 0000000140366087: add     rdx, 8
 * 000000014036608B: sub     r14, r15
 * 000000014036608E: jnz     short loc_140366079
 * 0000000140366090: test    r8d, r8d
 * 0000000140366093: jz      short loc_1403660B0
 * 0000000140366095: mov     r10d, 0FFFFFFFFh
 * 000000014036609B: mov     al, [rcx]
 * 000000014036609D: add     rcx, r15
 * 00000001403660A0: mov     [rdx], al
 * 00000001403660A2: add     rdx, r15
 * 00000001403660A5: add     r8d, r10d
 * 00000001403660A8: jnz     short loc_14036609B
 * 00000001403660AA: mov     r10d, 0AA0h
 * 00000001403660B0: bts     dword ptr [r9+990h], 13h
 * 00000001403660B9: mov     r14, 7010008004002001h
 * 00000001403660C3: mov     [r9+7E4h], r10d
 * 00000001403660CA: mov     [r9+808h], r10d
 * 00000001403660D1: and     dword ptr [r9+990h], 0FFFFFFFDh
 * 00000001403660D9: mov     eax, [r9+7E4h]
 * 00000001403660E0: mov     [r9+0A2Ch], eax
 * 00000001403660E7: add     eax, 0FFFFFF38h
 * 00000001403660EC: mov     ecx, [r9+954h]
 * 00000001403660F3: mov     dword ptr [rbp+0B70h+var_BD8], ecx
 * 00000001403660F6: mov     ecx, [r9+990h]
 * 00000001403660FD: mov     dword ptr [rbp+0B70h+arg_8], ecx
 * 0000000140366103: mov     rcx, [r9+4E8h]
 * 000000014036610A: shr     eax, 3
 * 000000014036610D: mov     [rsp+0C70h+var_C20], rcx
 * 0000000140366112: mov     rcx, [r9+5C0h]
 * 0000000140366119: mov     [rbp+0B70h+var_BD0], rcx
 * 000000014036611D: mov     [rbp+0B70h+var_BE8], eax
 * 0000000140366120: mov     [r9+0C4h], eax
 * 0000000140366127: rdtsc
 * 0000000140366129: shl     rdx, 20h
 * 000000014036612D: or      rax, rdx
 * 0000000140366130: mov     rcx, rax
 * 0000000140366133: ror     rax, 3
 * 0000000140366137: xor     rcx, rax
 * 000000014036613A: mov     rax, r14
 * 000000014036613D: mul     rcx
 * 0000000140366140: mov     r15, rdx
 * 0000000140366143: mov     [rbp+0B70h+var_3F0], rdx
 * 000000014036614A: xor     r15, rax
 * 000000014036614D: jz      short loc_140366127
 * 000000014036614F: mov     rax, [r9+7B8h]
 * 0000000140366156: lea     r12, [r9+798h]
 * 000000014036615D: mov     r14, [rbp+0B70h+var_BC8]
 * 0000000140366161: lea     rdx, [rbp+0B70h+var_90]
 * 0000000140366168: mov     ebx, 20h ; ' '
 * 000000014036616D: mov     [rbp+0B70h+var_B80], rax
 * 0000000140366171: mov     eax, [r9+828h]
 * 0000000140366178: mov     r8d, ebx
 * 000000014036617B: mov     [rbp+0B70h+var_BB0], eax
 * 000000014036617E: mov     rcx, r12
 * 0000000140366181: lea     r11d, [rbx-1Ch]
 * 0000000140366185: mov     r10d, r11d
 * 0000000140366188: lea     r13d, [rbx-1Fh]
 * 000000014036618C: mov     rax, [rcx]
 * 000000014036618F: add     r8d, 0FFFFFFF8h
 * 0000000140366193: mov     [rdx], rax
 * 0000000140366196: add     rcx, 8
 * 000000014036619A: add     rdx, 8
 * 000000014036619E: sub     r10, r13
 * 00000001403661A1: jnz     short loc_14036618C
 * 00000001403661A3: test    r8d, r8d
 * 00000001403661A6: jz      short loc_1403661C0
 * 00000001403661A8: mov     r10d, 0FFFFFFFFh
 * 00000001403661AE: mov     al, [rcx]
 * 00000001403661B0: add     rcx, r13
 * 00000001403661B3: mov     [rdx], al
 * 00000001403661B5: add     rdx, r13
 * 00000001403661B8: add     r8d, r10d
 * 00000001403661BB: jnz     short loc_1403661AE
 * 00000001403661BD: xor     r10d, r10d
 * 00000001403661C0: mov     [r9+7B8h], r10
 * 00000001403661C7: mov     ecx, ebx
 * 00000001403661C9: mov     [r9+828h], r10d
 * 00000001403661D0: mov     rax, r12
 * 00000001403661D3: mov     rdx, r11
 * 00000001403661D6: mov     [rax], r10
 * 00000001403661D9: add     ecx, 0FFFFFFF8h
 * 00000001403661DC: add     rax, 8
 * 00000001403661E0: sub     rdx, r13
 * 00000001403661E3: jnz     short loc_1403661D6
 * 00000001403661E5: test    ecx, ecx
 * 00000001403661E7: jz      short loc_1403661F8
 * 00000001403661E9: mov     edx, 0FFFFFFFFh
 * 00000001403661EE: mov     [rax], r10b
 * 00000001403661F1: add     rax, r13
 * 00000001403661F4: add     ecx, edx
 * 00000001403661F6: jnz     short loc_1403661EE
 * 00000001403661F8: mov     eax, [r9+7E4h]
 * 00000001403661FF: mov     r10, r9
 * 0000000140366202: add     [r9+828h], eax
 * 0000000140366209: mov     rax, r9
 * 000000014036620C: mov     r11d, [r9+7E4h]
 * 0000000140366213: mov     ebx, [r9+814h]
 * 000000014036621A: mov     r8, [r9+818h]
 * 0000000140366221: mov     [rbp+0B70h+var_BB4], r11d
 * 0000000140366225: lea     rcx, [r9+r11]
 * 0000000140366229: cmp     r9, rcx
 * 000000014036622C: jnb     short loc_14036623E
 * 000000014036622E: mov     edx, 40h ; '@'
 * 0000000140366233: prefetchnta byte ptr [rax]
 * 0000000140366236: add     rax, rdx
 * 0000000140366239: cmp     rax, rcx
 * 000000014036623C: jb      short loc_140366233
 * 000000014036623E: mov     r13d, r11d
 * 0000000140366241: shr     r13d, 7
 * 0000000140366245: test    r13d, r13d
 * 0000000140366248: jz      short loc_1403662C6
 * 000000014036624A: mov     rdi, r8
 * 000000014036624D: mov     r14d, 1
 * 0000000140366253: mov     r12d, 0FFFFFFFFh
 * 0000000140366259: mov     r11, 7010008004002001h
 * 0000000140366263: mov     eax, 8
 * 0000000140366268: xor     r8, [r10]
 * 000000014036626B: mov     ecx, ebx
 * 000000014036626D: rol     r8, cl
 * 0000000140366270: xor     r8, [r10+8]
 * 0000000140366274: add     r10, 10h
 * 0000000140366278: rol     r8, cl
 * 000000014036627B: sub     rax, r14
 * 000000014036627E: jnz     short loc_140366268
 * 0000000140366280: mov     rcx, r10
 * 0000000140366283: sub     rcx, r9
 * 0000000140366286: xor     rcx, rdi
 * 0000000140366289: mov     rax, rcx
 * 000000014036628C: rol     rax, 11h
 * 0000000140366290: xor     rcx, rax
 * 0000000140366293: mov     rax, r11
 * 0000000140366296: mul     rcx
 * 0000000140366299: xor     ebx, edx
 * 000000014036629B: mov     [rbp+0B70h+var_150], rdx
 * 00000001403662A2: xor     ebx, eax
 * 00000001403662A4: and     ebx, 3Fh
 * 00000001403662A7: cmovz   ebx, r14d
 * 00000001403662AB: add     r13d, r12d
 * 00000001403662AE: jnz     short loc_140366263
 * 00000001403662B0: mov     r14, [rbp+0B70h+var_BC8]
 * 00000001403662B4: lea     r12, [r9+798h]
 * 00000001403662BB: mov     r11d, [rbp+0B70h+var_BB4]
 * 00000001403662BF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403662C6: and     r11d, 7Fh
 * 00000001403662CA: mov     r13d, 1
 * 00000001403662D0: cmp     r11d, 8
 * 00000001403662D4: jb      short loc_1403662F2
 * 00000001403662D6: mov     eax, r11d
 * 00000001403662D9: shr     rax, 3
 * 00000001403662DD: xor     r8, [r10]
 * 00000001403662E0: mov     ecx, ebx
 * 00000001403662E2: rol     r8, cl
 * 00000001403662E5: add     r10, 8
 * 00000001403662E9: add     r11d, 0FFFFFFF8h
 * 00000001403662ED: sub     rax, r13
 * 00000001403662F0: jnz     short loc_1403662DD
 * 00000001403662F2: test    r11d, r11d
 * 00000001403662F5: jz      short loc_140366315
 * 00000001403662F7: mov     r14d, 0FFFFFFFFh
 * 00000001403662FD: movzx   eax, byte ptr [r10]
 * 0000000140366301: mov     ecx, ebx
 * 0000000140366303: xor     r8, rax
 * 0000000140366306: add     r10, r13
 * 0000000140366309: rol     r8, cl
 * 000000014036630C: add     r11d, r14d
 * 000000014036630F: jnz     short loc_1403662FD
 * 0000000140366311: mov     r14, [rbp+0B70h+var_BC8]
 * 0000000140366315: mov     rax, [rbp+0B70h+var_B80]
 * 0000000140366319: lea     rcx, [rbp+0B70h+var_90]
 * 0000000140366320: mov     [r9+7B8h], rax
 * 0000000140366327: mov     edx, 20h ; ' '
 * 000000014036632C: mov     eax, [rbp+0B70h+var_BB0]
 * 000000014036632F: add     [r9+828h], eax
 * 0000000140366336: lea     r11d, [rdx-1Ch]
 * 000000014036633A: mov     r10d, r11d
 * 000000014036633D: mov     rax, [rcx]
 * 0000000140366340: add     edx, 0FFFFFFF8h
 * 0000000140366343: mov     [r12], rax
 * 0000000140366347: add     rcx, 8
 * 000000014036634B: add     r12, 8
 * 000000014036634F: sub     r10, r13
 * 0000000140366352: jnz     short loc_14036633D
 * 0000000140366354: test    edx, edx
 * 0000000140366356: jz      short loc_140366372
 * 0000000140366358: mov     r10d, 0FFFFFFFFh
 * 000000014036635E: mov     al, [rcx]
 * 0000000140366360: add     rcx, r13
 * 0000000140366363: mov     [r12], al
 * 0000000140366367: add     r12, r13
 * 000000014036636A: add     edx, r10d
 * 000000014036636D: jnz     short loc_14036635E
 * 000000014036636F: xor     r10d, r10d
 * 0000000140366372: mov     [r9+7B8h], r8
 * 0000000140366379: test    dword ptr [r9+990h], 40000000h
 * 0000000140366384: jnz     loc_1403665A8
 * 000000014036638A: mov     rcx, r9
 * 000000014036638D: mov     eax, r10d
 * 0000000140366390: mov     ebx, 19h
 * 0000000140366395: xor     [rcx], r15
 * 0000000140366398: add     eax, r13d
 * 000000014036639B: lea     rcx, [rcx+8]
 * 000000014036639F: cmp     eax, ebx
 * 00000001403663A1: jb      short loc_140366395
 * 00000001403663A3: mov     r13d, [rbp+0B70h+var_BE8]
 * 00000001403663A7: mov     [rbp+0B70h+var_958], r15
 * 00000001403663AE: mov     r8d, r13d
 * 00000001403663B1: test    r13d, r13d
 * 00000001403663B4: jz      short loc_1403663F9
 * 00000001403663B6: lea     rdx, [r13-1]
 * 00000001403663BA: mov     r14d, 1
 * 00000001403663C0: lea     rdx, [rcx+rdx*8]
 * 00000001403663C4: xor     [rdx], r15
 * 00000001403663C7: lea     rax, [rbp+0B70h+var_958]
 * 00000001403663CE: mov     ecx, r8d
 * 00000001403663D1: lea     rdx, [rdx-8]
 * 00000001403663D5: ror     r15, cl
 * 00000001403663D8: mov     [rbp+0B70h+var_958], r15
 * 00000001403663DF: and     r15d, 3Fh
 * 00000001403663E3: btc     [rax], r15
 * 00000001403663E7: sub     r8d, r14d
 * 00000001403663EA: jz      short loc_1403663F5
 * 00000001403663EC: mov     r15, [rbp+0B70h+var_958]
 * 00000001403663F3: jmp     short loc_1403663C4
 * 00000001403663F5: mov     r14, [rbp+0B70h+var_BC8]
 * 00000001403663F9: mov     eax, dword ptr [rbp+0B70h+arg_8]
 * 00000001403663FF: bt      eax, 13h
 * 0000000140366403: jnb     short loc_140366450
 * 0000000140366405: rdtsc
 * 0000000140366407: shl     rdx, 20h
 * 000000014036640B: or      rax, rdx
 * 000000014036640E: mov     rcx, rax
 * 0000000140366411: ror     rax, 3
 * 0000000140366415: xor     rcx, rax
 * 0000000140366418: mov     rax, 7010008004002001h
 * 0000000140366422: mul     rcx
 * 0000000140366425: mov     rcx, rdx
 * 0000000140366428: mov     [rbp+0B70h+var_3E0], rdx
 * 000000014036642F: xor     rcx, rax
 * 0000000140366432: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014036643C: mul     rcx
 * 000000014036643F: shr     rdx, 1
 * 0000000140366442: lea     rax, [rdx+rdx*2]
 * 0000000140366446: cmp     rcx, rax
 * 0000000140366449: jz      short loc_14036645A
 * 000000014036644B: jmp     loc_1403665A2
 * 0000000140366450: bt      eax, 8
 * 0000000140366454: jb      loc_1403665A2
 * 000000014036645A: mov     r14d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140366461: mov     eax, 1
 * 0000000140366466: mov     rsi, [rbp+0B70h+var_BD0]
 * 000000014036646A: mov     ecx, r9d
 * 000000014036646D: mov     [rbp+0B70h+var_B15], al
 * 0000000140366470: mov     r12d, ebx
 * 0000000140366473: mov     eax, 2
 * 0000000140366478: mov     [rbp+0B70h+var_B18], r10b
 * 000000014036647C: mov     [rbp+0B70h+var_B13], al
 * 000000014036647F: mov     r10, r9
 * 0000000140366482: mov     eax, 0Ch
 * 0000000140366487: ror     r10, cl
 * 000000014036648A: mov     [rbp+0B70h+var_B17], al
 * 000000014036648D: xor     ecx, ecx
 * 000000014036648F: mov     eax, 0Fh
 * 0000000140366494: mov     [rbp+0B70h+var_B12], r11b
 * 0000000140366498: mov     [rbp+0B70h+var_B16], al
 * 000000014036649B: mov     r11, r9
 * 000000014036649E: mov     [rbp+0B70h+var_B10], 3
 * 00000001403664A2: mov     ebx, ecx
 * 00000001403664A4: mov     [rbp+0B70h+var_B0F], 5
 * 00000001403664A8: lea     r15d, [rax+1]
 * 00000001403664AC: mov     [rbp+0B70h+var_B0C], 6
 * 00000001403664B0: mov     eax, dword ptr [rbp+0B70h+var_BD8]
 * 00000001403664B3: mov     [rbp+0B70h+var_B80], rax
 * 00000001403664B7: mov     edi, eax
 * 00000001403664B9: mov     [rbp+0B70h+var_B11], 7
 * 00000001403664BD: mov     [rbp+0B70h+var_B0B], 8
 * 00000001403664C1: mov     [rbp+0B70h+var_B0E], 9
 * 00000001403664C5: mov     [rbp+0B70h+var_B0A], 0Ah
 * 00000001403664C9: mov     [rbp+0B70h+var_B14], 0Bh
 * 00000001403664CD: mov     [rbp+0B70h+var_B09], 0Dh
 * 00000001403664D1: mov     [rbp+0B70h+var_B0D], 0Eh
 * 00000001403664D5: test    r15d, r15d
 * 00000001403664D8: jz      short loc_140366510
 * 00000001403664DA: mov     rdx, [r11]
 * 00000001403664DD: mov     edi, 0Fh
 * 00000001403664E2: mov     r8d, r15d
 * 00000001403664E5: lea     r13d, [rdi-0Eh]
 * 00000001403664E9: movzx   eax, byte ptr [r11]
 * 00000001403664ED: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001403664F1: and     rax, rdi
 * 00000001403664F4: movzx   ecx, [rbp+rax+0B70h+var_B18]
 * 00000001403664F9: or      rdx, rcx
 * 00000001403664FC: ror     rdx, 4
 * 0000000140366500: mov     [r11], rdx
 * 0000000140366503: sub     r8, r13
 * 0000000140366506: jnz     short loc_1403664E9
 * 0000000140366508: mov     r13d, [rbp+0B70h+var_BE8]
 * 000000014036650C: mov     rdi, [rbp+0B70h+var_B80]
 * 0000000140366510: mov     rdx, [r11]
 * 0000000140366513: mov     eax, ebx
 * 0000000140366515: sub     rdx, rax
 * 0000000140366518: sub     rdx, r9
 * 000000014036651B: bt      r14d, 9
 * 0000000140366520: jb      short loc_140366537
 * 0000000140366522: xor     rdx, [rsp+0C70h+var_C20]
 * 0000000140366527: mov     ecx, esi
 * 0000000140366529: bswap   rdx
 * 000000014036652C: xor     rdx, r10
 * 000000014036652F: ror     rdx, cl
 * 0000000140366532: xor     rdx, rsi
 * 0000000140366535: jmp     short loc_14036653A
 * 0000000140366537: xor     rdx, r10
 * 000000014036653A: mov     [r11], rdx
 * 000000014036653D: mov     ecx, edx
 * 000000014036653F: mov     r8d, edx
 * 0000000140366542: mov     eax, ebx
 * 0000000140366544: xor     r8d, 0EFFh
 * 000000014036654B: mov     edx, 0C8h
 * 0000000140366550: sub     edx, ebx
 * 0000000140366552: not     ecx
 * 0000000140366554: xor     rdx, rax
 * 0000000140366557: add     r11, 8
 * 000000014036655B: ror     rdx, cl
 * 000000014036655E: mov     cl, r8b
 * 0000000140366561: xor     r10, rdx
 * 0000000140366564: rol     r10, cl
 * 0000000140366567: add     r10, r9
 * 000000014036656A: xor     r10, rdi
 * 000000014036656D: inc     ebx
 * 000000014036656F: cmp     ebx, 19h
 * 0000000140366572: jnz     short loc_140366589
 * 0000000140366574: bt      r14d, 13h
 * 0000000140366579: lea     ecx, [rbx-19h]
 * 000000014036657C: mov     eax, ecx
 * 000000014036657E: lea     r15d, [rbx-18h]
 * 0000000140366582: cmovnb  eax, r13d
 * 0000000140366586: add     r12d, eax
 * 0000000140366589: cmp     ebx, r12d
 * 000000014036658C: jb      loc_1403664D5
 * 0000000140366592: mov     rsi, [rsp+0C70h+var_C10]
 * 0000000140366597: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014036659E: mov     r14, [rbp+0B70h+var_BC8]
 * 00000001403665A2: mov     r13d, 1
 * 00000001403665A8: mov     r15, [r14+8]
 * 00000001403665AC: mov     r10d, [r14+10h]
 * 00000001403665B0: mov     r9, r15
 * 00000001403665B3: add     [rsi+828h], r10d
 * 00000001403665BA: mov     rax, r15
 * 00000001403665BD: mov     r11d, [rsi+814h]
 * 00000001403665C4: mov     r12, [rsi+818h]
 * 00000001403665CB: lea     rcx, [r15+r10]
 * 00000001403665CF: mov     dword ptr [rbp+0B70h+arg_8], r10d
 * 00000001403665D6: cmp     r15, rcx
 * 00000001403665D9: jnb     short loc_1403665EB
 * 00000001403665DB: mov     edx, 40h ; '@'
 * 00000001403665E0: prefetchnta byte ptr [rax]
 * 00000001403665E3: add     rax, rdx
 * 00000001403665E6: cmp     rax, rcx
 * 00000001403665E9: jb      short loc_1403665E0
 * 00000001403665EB: mov     ebx, r10d
 * 00000001403665EE: mov     r8, r12
 * 00000001403665F1: shr     ebx, 7
 * 00000001403665F4: test    ebx, ebx
 * 00000001403665F6: jz      short loc_140366669
 * 00000001403665F8: mov     edi, 0FFFFFFFFh
 * 00000001403665FD: mov     r10, 7010008004002001h
 * 0000000140366607: mov     eax, 8
 * 000000014036660C: xor     r8, [r9]
 * 000000014036660F: mov     ecx, r11d
 * 0000000140366612: rol     r8, cl
 * 0000000140366615: xor     r8, [r9+8]
 * 0000000140366619: add     r9, 10h
 * 000000014036661D: rol     r8, cl
 * 0000000140366620: sub     rax, r13
 * 0000000140366623: jnz     short loc_14036660C
 * 0000000140366625: mov     rcx, r9
 * 0000000140366628: sub     rcx, r15
 * 000000014036662B: xor     rcx, r12
 * 000000014036662E: mov     rax, rcx
 * 0000000140366631: rol     rax, 11h
 * 0000000140366635: xor     rcx, rax
 * 0000000140366638: mov     rax, r10
 * 000000014036663B: mul     rcx
 * 000000014036663E: xor     r11d, edx
 * 0000000140366641: mov     [rbp+0B70h+var_3D8], rdx
 * 0000000140366648: xor     r11d, eax
 * 000000014036664B: and     r11d, 3Fh
 * 000000014036664F: cmovz   r11d, r13d
 * 0000000140366653: add     ebx, edi
 * 0000000140366655: jnz     short loc_140366607
 * 0000000140366657: mov     r10d, dword ptr [rbp+0B70h+arg_8]
 * 000000014036665E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140366665: mov     r14, [rbp+0B70h+var_BC8]
 * 0000000140366669: and     r10d, 7Fh
 * 000000014036666D: mov     r15d, 1
 * 0000000140366673: cmp     r10d, 8
 * 0000000140366677: jb      short loc_140366696
 * 0000000140366679: mov     eax, r10d
 * 000000014036667C: shr     rax, 3
 * 0000000140366680: xor     r8, [r9]
 * 0000000140366683: mov     ecx, r11d
 * 0000000140366686: rol     r8, cl
 * 0000000140366689: add     r9, 8
 * 000000014036668D: add     r10d, 0FFFFFFF8h
 * 0000000140366691: sub     rax, r15
 * 0000000140366694: jnz     short loc_140366680
 * 0000000140366696: test    r10d, r10d
 * 0000000140366699: jz      short loc_1403666BA
 * 000000014036669B: mov     r14d, 0FFFFFFFFh
 * 00000001403666A1: movzx   eax, byte ptr [r9]
 * 00000001403666A5: mov     ecx, r11d
 * 00000001403666A8: xor     r8, rax
 * 00000001403666AB: add     r9, r15
 * 00000001403666AE: rol     r8, cl
 * 00000001403666B1: add     r10d, r14d
 * 00000001403666B4: jnz     short loc_1403666A1
 * 00000001403666B6: mov     r14, [rbp+0B70h+var_BC8]
 * 00000001403666BA: mov     rax, r8
 * 00000001403666BD: shr     rax, 1Fh
 * 00000001403666C1: xor     r11d, r11d
 * 00000001403666C4: jmp     short loc_1403666CD
 * 00000001403666C6: xor     r8d, eax
 * 00000001403666C9: shr     rax, 1Fh
 * 00000001403666CD: test    rax, rax
 * 00000001403666D0: jnz     short loc_1403666C6
 * 00000001403666D2: btr     r8d, 1Fh
 * 00000001403666D7: mov     [r14+14h], r8d
 * 00000001403666DB: jmp     loc_140365B7C
 * 00000001403666E0: xor     r11d, r11d
 * 00000001403666E3: lea     r15d, [r11+1]
 * 00000001403666E7: jmp     loc_140365B7C
 * 00000001403666EC: xor     r11d, r11d
 * 00000001403666EF: lea     r15d, [r11+1]
 * 00000001403666F3: jmp     loc_140365B86
 * 00000001403666F8: mov     r13d, [rbp+0B70h+var_BE8]
 * 00000001403666FC: bt      r13d, 13h
 * 0000000140366701: jnb     short loc_140366751
 * 0000000140366703: rdtsc
 * 0000000140366705: shl     rdx, 20h
 * 0000000140366709: or      rax, rdx
 * 000000014036670C: mov     rcx, rax
 * 000000014036670F: ror     rax, 3
 * 0000000140366713: xor     rcx, rax
 * 0000000140366716: mov     rax, 7010008004002001h
 * 0000000140366720: mul     rcx
 * 0000000140366723: mov     rcx, rdx
 * 0000000140366726: mov     [rbp+0B70h+var_3C0], rdx
 * 000000014036672D: xor     rcx, rax
 * 0000000140366730: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014036673A: mul     rcx
 * 000000014036673D: shr     rdx, 1
 * 0000000140366740: lea     rax, [rdx+rdx*2]
 * 0000000140366744: cmp     rcx, rax
 * 0000000140366747: jz      short loc_140366758
 * 0000000140366749: xor     r11d, r11d
 * 000000014036674C: jmp     loc_14036688F
 * 0000000140366751: bt      r13d, 8
 * 0000000140366756: jb      short loc_140366749
 * 0000000140366758: mov     rdi, [rbp+0B70h+var_B80]
 * 000000014036675C: mov     eax, 2
 * 0000000140366761: mov     [rbp+0B70h+var_B03], al
 * 0000000140366764: mov     ecx, esi
 * 0000000140366766: mov     eax, 0Ch
 * 000000014036676B: mov     [rbp+0B70h+var_B02], r9b
 * 000000014036676F: mov     [rbp+0B70h+var_B07], al
 * 0000000140366772: mov     r9, rsi
 * 0000000140366775: mov     eax, 0Fh
 * 000000014036677A: mov     [rbp+0B70h+var_B08], r15b
 * 000000014036677E: mov     [rbp+0B70h+var_B05], bl
 * 0000000140366781: mov     r11d, r15d
 * 0000000140366784: mov     r15d, [rbp+0B70h+var_BB0]
 * 0000000140366788: mov     r10, rsi
 * 000000014036678B: mov     [rbp+0B70h+var_B00], 3
 * 000000014036678F: lea     ebx, [rax+1]
 * 0000000140366792: mov     [rbp+0B70h+var_AFF], 5
 * 0000000140366796: mov     [rbp+0B70h+var_AFC], 6
 * 000000014036679A: mov     [rbp+0B70h+var_B01], 7
 * 000000014036679E: mov     [rbp+0B70h+var_AFB], 8
 * 00000001403667A2: mov     [rbp+0B70h+var_AFE], 9
 * 00000001403667A6: mov     [rbp+0B70h+var_AFA], 0Ah
 * 00000001403667AA: mov     [rbp+0B70h+var_B04], 0Bh
 * 00000001403667AE: mov     [rbp+0B70h+var_AF9], 0Dh
 * 00000001403667B2: mov     [rbp+0B70h+var_AFD], 0Eh
 * 00000001403667B6: mov     [rbp+0B70h+var_B06], al
 * 00000001403667B9: ror     r9, cl
 * 00000001403667BC: test    ebx, ebx
 * 00000001403667BE: jz      short loc_1403667FA
 * 00000001403667C0: mov     rdx, [r10]
 * 00000001403667C3: mov     r13d, 1
 * 00000001403667C9: mov     r8d, ebx
 * 00000001403667CC: lea     r12d, [r13+0Eh]
 * 00000001403667D0: movzx   eax, byte ptr [r10]
 * 00000001403667D4: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 00000001403667D8: and     rax, r12
 * 00000001403667DB: movzx   ecx, [rbp+rax+0B70h+var_B08]
 * 00000001403667E0: or      rdx, rcx
 * 00000001403667E3: ror     rdx, 4
 * 00000001403667E7: mov     [r10], rdx
 * 00000001403667EA: sub     r8, r13
 * 00000001403667ED: jnz     short loc_1403667D0
 * 00000001403667EF: mov     r12d, dword ptr [rbp+0B70h+arg_8]
 * 00000001403667F6: mov     r13d, [rbp+0B70h+var_BE8]
 * 00000001403667FA: mov     rdx, [r10]
 * 00000001403667FD: mov     eax, r11d
 * 0000000140366800: sub     rdx, rax
 * 0000000140366803: sub     rdx, rsi
 * 0000000140366806: bt      r13d, 9
 * 000000014036680B: jb      short loc_140366822
 * 000000014036680D: xor     rdx, [rsp+0C70h+var_C08]
 * 0000000140366812: mov     ecx, edi
 * 0000000140366814: bswap   rdx
 * 0000000140366817: xor     rdx, r9
 * 000000014036681A: ror     rdx, cl
 * 000000014036681D: xor     rdx, rdi
 * 0000000140366820: jmp     short loc_140366825
 * 0000000140366822: xor     rdx, r9
 * 0000000140366825: mov     [r10], rdx
 * 0000000140366828: mov     ecx, edx
 * 000000014036682A: mov     r8d, edx
 * 000000014036682D: mov     eax, r11d
 * 0000000140366830: xor     r8d, 0EFFh
 * 0000000140366837: mov     edx, 0C8h
 * 000000014036683C: sub     edx, r11d
 * 000000014036683F: not     ecx
 * 0000000140366841: xor     rdx, rax
 * 0000000140366844: add     r10, 8
 * 0000000140366848: ror     rdx, cl
 * 000000014036684B: mov     cl, r8b
 * 000000014036684E: xor     r9, rdx
 * 0000000140366851: rol     r9, cl
 * 0000000140366854: add     r9, rsi
 * 0000000140366857: xor     r9, r15
 * 000000014036685A: inc     r11d
 * 000000014036685D: cmp     r11d, 19h
 * 0000000140366861: jnz     short loc_140366877
 * 0000000140366863: bt      r13d, 13h
 * 0000000140366868: lea     eax, [r11-19h]
 * 000000014036686C: lea     ebx, [r11-18h]
 * 0000000140366870: cmovnb  eax, r12d
 * 0000000140366874: add     r14d, eax
 * 0000000140366877: cmp     r11d, r14d
 * 000000014036687A: jb      loc_1403667BC
 * 0000000140366880: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140366887: xor     r11d, r11d
 * 000000014036688A: mov     ebx, 1
 * 000000014036688F: rdtsc
 * 0000000140366891: shl     rdx, 20h
 * 0000000140366895: mov     r14, 7010008004002001h
 * 000000014036689F: or      rax, rdx
 * 00000001403668A2: mov     [rbp+0B70h+var_BE8], ebx
 * 00000001403668A5: mov     rcx, rax
 * 00000001403668A8: ror     rax, 3
 * 00000001403668AC: xor     rcx, rax
 * 00000001403668AF: mov     rax, r14
 * 00000001403668B2: mul     rcx
 * 00000001403668B5: mov     r12, rax
 * 00000001403668B8: mov     [rbp+0B70h+var_398], rdx
 * 00000001403668BF: xor     r12, rdx
 * 00000001403668C2: jmp     loc_140367150
 * 00000001403668C7: mov     r15d, 1
 * 00000001403668CD: lea     rbx, [r14+798h]
 * 00000001403668D4: mov     [r14+0C4h], r15d
 * 00000001403668DB: lea     rdx, [rbp+0B70h+var_F0]
 * 00000001403668E2: mov     r12, [r14+7B8h]
 * 00000001403668E9: mov     rsi, r14
 * 00000001403668EC: mov     r13d, [r14+828h]
 * 00000001403668F3: mov     rcx, rbx
 * 00000001403668F6: lea     r11d, [r15+1Fh]
 * 00000001403668FA: mov     [rbp+0B70h+var_B80], r12
 * 00000001403668FE: lea     r10d, [r15+3]
 * 0000000140366902: mov     dword ptr [rbp+0B70h+arg_8], r13d
 * 0000000140366909: mov     r8d, r11d
 * 000000014036690C: mov     [rsp+0C70h+var_BF8], rbx
 * 0000000140366911: mov     r9d, r10d
 * 0000000140366914: mov     rax, [rcx]
 * 0000000140366917: add     r8d, 0FFFFFFF8h
 * 000000014036691B: mov     [rdx], rax
 * 000000014036691E: add     rcx, 8
 * 0000000140366922: add     rdx, 8
 * 0000000140366926: sub     r9, r15
 * 0000000140366929: jnz     short loc_140366914
 * 000000014036692B: xor     r15d, r15d
 * 000000014036692E: lea     r9d, [r15+1]
 * 0000000140366932: test    r8d, r8d
 * 0000000140366935: jz      short loc_14036694F
 * 0000000140366937: mov     r15d, 0FFFFFFFFh
 * 000000014036693D: mov     al, [rcx]
 * 000000014036693F: add     rcx, r9
 * 0000000140366942: mov     [rdx], al
 * 0000000140366944: add     rdx, r9
 * 0000000140366947: add     r8d, r15d
 * 000000014036694A: jnz     short loc_14036693D
 * 000000014036694C: xor     r15d, r15d
 * 000000014036694F: mov     [r14+7B8h], r15
 * 0000000140366956: mov     ecx, r11d
 * 0000000140366959: mov     [r14+828h], r15d
 * 0000000140366960: mov     rax, rbx
 * 0000000140366963: mov     rdx, r10
 * 0000000140366966: mov     [rax], r15
 * 0000000140366969: add     ecx, 0FFFFFFF8h
 * 000000014036696C: add     rax, 8
 * 0000000140366970: sub     rdx, r9
 * 0000000140366973: jnz     short loc_140366966
 * 0000000140366975: test    ecx, ecx
 * 0000000140366977: jz      short loc_140366988
 * 0000000140366979: mov     edx, 0FFFFFFFFh
 * 000000014036697E: mov     [rax], r15b
 * 0000000140366981: add     rax, r9
 * 0000000140366984: add     ecx, edx
 * 0000000140366986: jnz     short loc_14036697E
 * 0000000140366988: mov     eax, [r14+7E4h]
 * 000000014036698F: mov     r9, r14
 * 0000000140366992: add     [r14+828h], eax
 * 0000000140366999: mov     rax, r14
 * 000000014036699C: mov     r10d, [r14+7E4h]
 * 00000001403669A3: mov     r11d, [r14+814h]
 * 00000001403669AA: mov     r15, [r14+818h]
 * 00000001403669B1: lea     rcx, [r14+r10]
 * 00000001403669B5: cmp     r14, rcx
 * 00000001403669B8: jnb     short loc_1403669CA
 * 00000001403669BA: mov     edx, 40h ; '@'
 * 00000001403669BF: prefetchnta byte ptr [rax]
 * 00000001403669C2: add     rax, rdx
 * 00000001403669C5: cmp     rax, rcx
 * 00000001403669C8: jb      short loc_1403669BF
 * 00000001403669CA: mov     r14d, r10d
 * 00000001403669CD: mov     r8, r15
 * 00000001403669D0: shr     r14d, 7
 * 00000001403669D4: test    r14d, r14d
 * 00000001403669D7: jz      loc_140366A62
 * 00000001403669DD: mov     rdi, [rbp+0B70h+arg_0]
 * 00000001403669E4: mov     rbx, 7010008004002001h
 * 00000001403669EE: mov     r12d, 1
 * 00000001403669F4: mov     r13d, 0FFFFFFFFh
 * 00000001403669FA: mov     eax, 8
 * 00000001403669FF: xor     r8, [r9]
 * 0000000140366A02: mov     ecx, r11d
 * 0000000140366A05: rol     r8, cl
 * 0000000140366A08: xor     r8, [r9+8]
 * 0000000140366A0C: add     r9, 10h
 * 0000000140366A10: rol     r8, cl
 * 0000000140366A13: sub     rax, r12
 * 0000000140366A16: jnz     short loc_1403669FF
 * 0000000140366A18: mov     rcx, r9
 * 0000000140366A1B: sub     rcx, rdi
 * 0000000140366A1E: xor     rcx, r15
 * 0000000140366A21: mov     rax, rcx
 * 0000000140366A24: rol     rax, 11h
 * 0000000140366A28: xor     rcx, rax
 * 0000000140366A2B: mov     rax, rbx
 * 0000000140366A2E: mul     rcx
 * 0000000140366A31: xor     r11d, edx
 * 0000000140366A34: mov     [rbp+0B70h+var_3B8], rdx
 * 0000000140366A3B: xor     r11d, eax
 * 0000000140366A3E: and     r11d, 3Fh
 * 0000000140366A42: cmovz   r11d, r12d
 * 0000000140366A46: add     r14d, r13d
 * 0000000140366A49: jnz     short loc_1403669FA
 * 0000000140366A4B: mov     rbx, [rsp+0C70h+var_BF8]
 * 0000000140366A50: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140366A57: mov     r12, [rbp+0B70h+var_B80]
 * 0000000140366A5B: mov     r13d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140366A62: and     r10d, 7Fh
 * 0000000140366A66: mov     r15d, 1
 * 0000000140366A6C: cmp     r10d, 8
 * 0000000140366A70: jb      short loc_140366A8F
 * 0000000140366A72: mov     eax, r10d
 * 0000000140366A75: shr     rax, 3
 * 0000000140366A79: xor     r8, [r9]
 * 0000000140366A7C: mov     ecx, r11d
 * 0000000140366A7F: rol     r8, cl
 * 0000000140366A82: add     r9, 8
 * 0000000140366A86: add     r10d, 0FFFFFFF8h
 * 0000000140366A8A: sub     rax, r15
 * 0000000140366A8D: jnz     short loc_140366A79
 * 0000000140366A8F: mov     r14d, 0FFFFFFFFh
 * 0000000140366A95: test    r10d, r10d
 * 0000000140366A98: jz      short loc_140366AAF
 * 0000000140366A9A: movzx   eax, byte ptr [r9]
 * 0000000140366A9E: mov     ecx, r11d
 * 0000000140366AA1: xor     r8, rax
 * 0000000140366AA4: add     r9, r15
 * 0000000140366AA7: rol     r8, cl
 * 0000000140366AAA: add     r10d, r14d
 * 0000000140366AAD: jnz     short loc_140366A9A
 * 0000000140366AAF: mov     r9, [rbp+0B70h+arg_0]
 * 0000000140366AB6: lea     rcx, [rbp+0B70h+var_F0]
 * 0000000140366ABD: mov     edx, 4
 * 0000000140366AC2: mov     [r9+7B8h], r12
 * 0000000140366AC9: add     [r9+828h], r13d
 * 0000000140366AD0: lea     r10d, [rdx+1Ch]
 * 0000000140366AD4: mov     rax, [rcx]
 * 0000000140366AD7: add     r10d, 0FFFFFFF8h
 * 0000000140366ADB: mov     [rbx], rax
 * 0000000140366ADE: add     rcx, 8
 * 0000000140366AE2: add     rbx, 8
 * 0000000140366AE6: sub     rdx, r15
 * 0000000140366AE9: jnz     short loc_140366AD4
 * 0000000140366AEB: xor     r11d, r11d
 * 0000000140366AEE: test    r10d, r10d
 * 0000000140366AF1: jz      short loc_140366B02
 * 0000000140366AF3: mov     al, [rcx]
 * 0000000140366AF5: add     rcx, r15
 * 0000000140366AF8: mov     [rbx], al
 * 0000000140366AFA: add     rbx, r15
 * 0000000140366AFD: add     r10d, r14d
 * 0000000140366B00: jnz     short loc_140366AF3
 * 0000000140366B02: mov     [r9+7B8h], r8
 * 0000000140366B09: mov     r14d, [rsi+990h]
 * 0000000140366B10: mov     r12, r11
 * 0000000140366B13: mov     [rsp+0C70h+var_BF8], r11
 * 0000000140366B18: bt      r14d, 1Eh
 * 0000000140366B1D: jb      loc_140367141
 * 0000000140366B23: bt      r14d, 8
 * 0000000140366B28: jb      loc_14036712B
 * 0000000140366B2E: mov     eax, [rsi+954h]
 * 0000000140366B34: mov     ecx, 1
 * 0000000140366B39: mov     r15, [rsi+5C0h]
 * 0000000140366B40: mov     r9, rsi
 * 0000000140366B43: mov     r13, [rsi+4E8h]
 * 0000000140366B4A: mov     r10, rsi
 * 0000000140366B4D: mov     [rbp+0B70h+var_AF5], cl
 * 0000000140366B50: mov     ecx, 2
 * 0000000140366B55: mov     [rbp+0B70h+var_AF3], cl
 * 0000000140366B58: mov     ecx, 0Ch
 * 0000000140366B5D: mov     [rbp+0B70h+var_AF7], cl
 * 0000000140366B60: mov     [rbp+0B70h+var_AF8], r11b
 * 0000000140366B64: mov     [rbp+0B70h+var_AF0], 3
 * 0000000140366B6B: lea     r12d, [rcx+3]
 * 0000000140366B6F: mov     [rbp+0B70h+var_AF2], 4
 * 0000000140366B73: mov     ecx, esi
 * 0000000140366B75: mov     [rbp+0B70h+var_AEF], 5
 * 0000000140366B7C: ror     r9, cl
 * 0000000140366B7F: lea     ebx, [r12+1]
 * 0000000140366B84: xor     edi, edi
 * 0000000140366B86: mov     [rbp+0B70h+var_AEC], 6
 * 0000000140366B8D: mov     [rbp+0B70h+var_AF1], 7
 * 0000000140366B91: mov     [rbp+0B70h+var_AEB], 8
 * 0000000140366B98: mov     [rbp+0B70h+var_AEE], 9
 * 0000000140366B9F: mov     [rbp+0B70h+var_AEA], 0Ah
 * 0000000140366BA6: mov     [rbp+0B70h+var_AF4], 0Bh
 * 0000000140366BAA: mov     [rbp+0B70h+var_AE9], 0Dh
 * 0000000140366BB1: mov     [rbp+0B70h+var_AED], 0Eh
 * 0000000140366BB8: mov     [rbp+0B70h+var_AF6], r12b
 * 0000000140366BBC: mov     [rbp+0B70h+arg_8], rax
 * 0000000140366BC3: test    ebx, ebx
 * 0000000140366BC5: jz      short loc_140366BF3
 * 0000000140366BC7: mov     rdx, [r10]
 * 0000000140366BCA: mov     edi, 1
 * 0000000140366BCF: mov     r8d, ebx
 * 0000000140366BD2: movzx   eax, byte ptr [r10]
 * 0000000140366BD6: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140366BDA: and     rax, r12
 * 0000000140366BDD: movzx   ecx, [rbp+rax+0B70h+var_AF8]
 * 0000000140366BE2: or      rdx, rcx
 * 0000000140366BE5: ror     rdx, 4
 * 0000000140366BE9: mov     [r10], rdx
 * 0000000140366BEC: sub     r8, rdi
 * 0000000140366BEF: jnz     short loc_140366BD2
 * 0000000140366BF1: xor     edi, edi
 * 0000000140366BF3: mov     rcx, [r10]
 * 0000000140366BF6: mov     eax, r11d
 * 0000000140366BF9: sub     rcx, rax
 * 0000000140366BFC: sub     rcx, rsi
 * 0000000140366BFF: bt      r14d, 9
 * 0000000140366C04: jb      loc_1403670C9
 * 0000000140366C0A: mov     rax, r13
 * 0000000140366C0D: xor     rax, rcx
 * 0000000140366C10: mov     ecx, r15d
 * 0000000140366C13: bswap   rax
 * 0000000140366C16: xor     rax, r9
 * 0000000140366C19: ror     rax, cl
 * 0000000140366C1C: xor     rax, r15
 * 0000000140366C1F: jmp     loc_1403670CF
 * 0000000140366C24: mov     ecx, [rsi+954h]
 * 0000000140366C2A: mov     r12d, [rsi+0A2Ch]
 * 0000000140366C31: mov     rax, [rsi+7C8h]
 * 0000000140366C38: add     r12d, 0FFFFFF38h
 * 0000000140366C3F: mov     [rbp+0B70h+var_BE8], ecx
 * 0000000140366C42: mov     rcx, [rsi+4E8h]
 * 0000000140366C49: mov     [rsp+0C70h+var_C08], rcx
 * 0000000140366C4E: mov     rcx, [rsi+5C0h]
 * 0000000140366C55: shr     r12d, 3
 * 0000000140366C59: mov     [rbp+0B70h+var_B80], rcx
 * 0000000140366C5D: mov     [rsp+0C70h+var_C20], rax
 * 0000000140366C62: mov     [rsi+0C4h], r12d
 * 0000000140366C69: rdtsc
 * 0000000140366C6B: shl     rdx, 20h
 * 0000000140366C6F: or      rax, rdx
 * 0000000140366C72: mov     rcx, rax
 * 0000000140366C75: ror     rax, 3
 * 0000000140366C79: xor     rcx, rax
 * 0000000140366C7C: mov     rax, r9
 * 0000000140366C7F: mul     rcx
 * 0000000140366C82: mov     rbx, rdx
 * 0000000140366C85: mov     [rbp+0B70h+var_3B0], rdx
 * 0000000140366C8C: xor     rbx, rax
 * 0000000140366C8F: jz      short loc_140366C69
 * 0000000140366C91: mov     rax, [rsi+7B8h]
 * 0000000140366C98: lea     r14, [rsi+798h]
 * 0000000140366C9F: mov     r11d, 20h ; ' '
 * 0000000140366CA5: mov     [rbp+0B70h+var_BD0], rax
 * 0000000140366CA9: mov     eax, [rsi+828h]
 * 0000000140366CAF: lea     rdx, [rbp+0B70h+var_D0]
 * 0000000140366CB6: mov     [rbp+0B70h+var_BB4], eax
 * 0000000140366CB9: mov     r8d, r11d
 * 0000000140366CBC: mov     rcx, r14
 * 0000000140366CBF: lea     r10d, [r11-1Ch]
 * 0000000140366CC3: mov     r9d, r10d
 * 0000000140366CC6: mov     rax, [rcx]
 * 0000000140366CC9: add     r8d, 0FFFFFFF8h
 * 0000000140366CCD: mov     [rdx], rax
 * 0000000140366CD0: add     rcx, 8
 * 0000000140366CD4: add     rdx, 8
 * 0000000140366CD8: sub     r9, r15
 * 0000000140366CDB: jnz     short loc_140366CC6
 * 0000000140366CDD: test    r8d, r8d
 * 0000000140366CE0: jz      short loc_140366CFA
 * 0000000140366CE2: mov     r9d, 0FFFFFFFFh
 * 0000000140366CE8: mov     al, [rcx]
 * 0000000140366CEA: add     rcx, r15
 * 0000000140366CED: mov     [rdx], al
 * 0000000140366CEF: add     rdx, r15
 * 0000000140366CF2: add     r8d, r9d
 * 0000000140366CF5: jnz     short loc_140366CE8
 * 0000000140366CF7: xor     r9d, r9d
 * 0000000140366CFA: mov     [rsi+7B8h], r9
 * 0000000140366D01: mov     ecx, r11d
 * 0000000140366D04: mov     [rsi+828h], r9d
 * 0000000140366D0B: mov     rax, r14
 * 0000000140366D0E: mov     rdx, r10
 * 0000000140366D11: mov     [rax], r9
 * 0000000140366D14: add     ecx, 0FFFFFFF8h
 * 0000000140366D17: add     rax, 8
 * 0000000140366D1B: sub     rdx, r15
 * 0000000140366D1E: jnz     short loc_140366D11
 * 0000000140366D20: test    ecx, ecx
 * 0000000140366D22: jz      short loc_140366D33
 * 0000000140366D24: mov     edx, 0FFFFFFFFh
 * 0000000140366D29: mov     [rax], r9b
 * 0000000140366D2C: add     rax, r15
 * 0000000140366D2F: add     ecx, edx
 * 0000000140366D31: jnz     short loc_140366D29
 * 0000000140366D33: mov     eax, [rsi+7E4h]
 * 0000000140366D39: mov     r8, rsi
 * 0000000140366D3C: add     [rsi+828h], eax
 * 0000000140366D42: mov     r11d, [rsi+7E4h]
 * 0000000140366D49: mov     rdx, [rsi+818h]
 * 0000000140366D50: mov     r10d, [rsi+814h]
 * 0000000140366D57: mov     [rsp+0C70h+var_BF8], rdx
 * 0000000140366D5C: lea     rcx, [rsi+r11]
 * 0000000140366D60: cmp     rsi, rcx
 * 0000000140366D63: jnb     short loc_140366D79
 * 0000000140366D65: mov     rax, rsi
 * 0000000140366D68: mov     r9d, 40h ; '@'
 * 0000000140366D6E: prefetchnta byte ptr [rax]
 * 0000000140366D71: add     rax, r9
 * 0000000140366D74: cmp     rax, rcx
 * 0000000140366D77: jb      short loc_140366D6E
 * 0000000140366D79: mov     r15d, r11d
 * 0000000140366D7C: mov     r9, rdx
 * 0000000140366D7F: shr     r15d, 7
 * 0000000140366D83: test    r15d, r15d
 * 0000000140366D86: jz      short loc_140366E04
 * 0000000140366D88: mov     r13, 7010008004002001h
 * 0000000140366D92: mov     edx, 8
 * 0000000140366D97: lea     edi, [rdx-7]
 * 0000000140366D9A: mov     rax, [r8]
 * 0000000140366D9D: mov     ecx, r10d
 * 0000000140366DA0: xor     rax, r9
 * 0000000140366DA3: mov     r9, [r8+8]
 * 0000000140366DA7: rol     rax, cl
 * 0000000140366DAA: add     r8, 10h
 * 0000000140366DAE: xor     r9, rax
 * 0000000140366DB1: rol     r9, cl
 * 0000000140366DB4: sub     rdx, rdi
 * 0000000140366DB7: jnz     short loc_140366D9A
 * 0000000140366DB9: mov     rcx, r8
 * 0000000140366DBC: sub     rcx, rsi
 * 0000000140366DBF: xor     rcx, [rsp+0C70h+var_BF8]
 * 0000000140366DC4: mov     rax, rcx
 * 0000000140366DC7: rol     rax, 11h
 * 0000000140366DCB: xor     rcx, rax
 * 0000000140366DCE: mov     rax, r13
 * 0000000140366DD1: mul     rcx
 * 0000000140366DD4: xor     r10d, edx
 * 0000000140366DD7: mov     [rbp+0B70h+var_3A8], rdx
 * 0000000140366DDE: xor     r10d, eax
 * 0000000140366DE1: mov     rax, rdi
 * 0000000140366DE4: and     r10d, 3Fh
 * 0000000140366DE8: cmovz   r10d, eax
 * 0000000140366DEC: mov     eax, 0FFFFFFFFh
 * 0000000140366DF1: add     r15d, eax
 * 0000000140366DF4: jnz     short loc_140366D92
 * 0000000140366DF6: mov     r13d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140366DFD: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140366E04: and     r11d, 7Fh
 * 0000000140366E08: mov     r15d, 1
 * 0000000140366E0E: cmp     r11d, 8
 * 0000000140366E12: jb      short loc_140366E31
 * 0000000140366E14: mov     edx, r11d
 * 0000000140366E17: shr     rdx, 3
 * 0000000140366E1B: xor     r9, [r8]
 * 0000000140366E1E: mov     ecx, r10d
 * 0000000140366E21: rol     r9, cl
 * 0000000140366E24: add     r8, 8
 * 0000000140366E28: add     r11d, 0FFFFFFF8h
 * 0000000140366E2C: sub     rdx, r15
 * 0000000140366E2F: jnz     short loc_140366E1B
 * 0000000140366E31: test    r11d, r11d
 * 0000000140366E34: jz      short loc_140366E58
 * 0000000140366E36: mov     r13d, 0FFFFFFFFh
 * 0000000140366E3C: movzx   eax, byte ptr [r8]
 * 0000000140366E40: mov     ecx, r10d
 * 0000000140366E43: xor     r9, rax
 * 0000000140366E46: add     r8, r15
 * 0000000140366E49: rol     r9, cl
 * 0000000140366E4C: add     r11d, r13d
 * 0000000140366E4F: jnz     short loc_140366E3C
 * 0000000140366E51: mov     r13d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140366E58: mov     rax, [rbp+0B70h+var_BD0]
 * 0000000140366E5C: lea     rcx, [rbp+0B70h+var_D0]
 * 0000000140366E63: mov     r10d, 4
 * 0000000140366E69: mov     [rsi+7B8h], rax
 * 0000000140366E70: mov     eax, [rbp+0B70h+var_BB4]
 * 0000000140366E73: mov     edx, r10d
 * 0000000140366E76: add     [rsi+828h], eax
 * 0000000140366E7C: lea     r8d, [r10+1Ch]
 * 0000000140366E80: mov     rax, [rcx]
 * 0000000140366E83: add     r8d, 0FFFFFFF8h
 * 0000000140366E87: mov     [r14], rax
 * 0000000140366E8A: add     rcx, 8
 * 0000000140366E8E: add     r14, 8
 * 0000000140366E92: sub     rdx, r15
 * 0000000140366E95: jnz     short loc_140366E80
 * 0000000140366E97: xor     r11d, r11d
 * 0000000140366E9A: test    r8d, r8d
 * 0000000140366E9D: jz      short loc_140366EB8
 * 0000000140366E9F: mov     r11d, 0FFFFFFFFh
 * 0000000140366EA5: mov     al, [rcx]
 * 0000000140366EA7: add     rcx, r15
 * 0000000140366EAA: mov     [r14], al
 * 0000000140366EAD: add     r14, r15
 * 0000000140366EB0: add     r8d, r11d
 * 0000000140366EB3: jnz     short loc_140366EA5
 * 0000000140366EB5: xor     r11d, r11d
 * 0000000140366EB8: mov     [rsi+7B8h], r9
 * 0000000140366EBF: test    dword ptr [rsi+990h], 40000000h
 * 0000000140366EC9: jnz     loc_14036688A
 * 0000000140366ECF: mov     rcx, rsi
 * 0000000140366ED2: mov     eax, r11d
 * 0000000140366ED5: mov     r14d, 19h
 * 0000000140366EDB: xor     [rcx], rbx
 * 0000000140366EDE: add     eax, r15d
 * 0000000140366EE1: lea     rcx, [rcx+8]
 * 0000000140366EE5: cmp     eax, r14d
 * 0000000140366EE8: jb      short loc_140366EDB
 * 0000000140366EEA: mov     [rbp+0B70h+var_948], rbx
 * 0000000140366EF1: mov     r8d, r12d
 * 0000000140366EF4: test    r12d, r12d
 * 0000000140366EF7: jz      short loc_140366F38
 * 0000000140366EF9: mov     edx, r12d
 * 0000000140366EFC: dec     rdx
 * 0000000140366EFF: lea     rdx, [rcx+rdx*8]
 * 0000000140366F03: xor     [rdx], rbx
 * 0000000140366F06: lea     rax, [rbp+0B70h+var_948]
 * 0000000140366F0D: mov     ecx, r8d
 * 0000000140366F10: lea     rdx, [rdx-8]
 * 0000000140366F14: ror     rbx, cl
 * 0000000140366F17: mov     [rbp+0B70h+var_948], rbx
 * 0000000140366F1E: and     ebx, 3Fh
 * 0000000140366F21: btc     [rax], rbx
 * 0000000140366F25: mov     ebx, 1
 * 0000000140366F2A: sub     r8d, ebx
 * 0000000140366F2D: jz      short loc_140366F3D
 * 0000000140366F2F: mov     rbx, [rbp+0B70h+var_948]
 * 0000000140366F36: jmp     short loc_140366F03
 * 0000000140366F38: mov     ebx, 1
 * 0000000140366F3D: bt      r13d, 13h
 * 0000000140366F42: jnb     short loc_140366F8F
 * 0000000140366F44: rdtsc
 * 0000000140366F46: shl     rdx, 20h
 * 0000000140366F4A: or      rax, rdx
 * 0000000140366F4D: mov     rcx, rax
 * 0000000140366F50: ror     rax, 3
 * 0000000140366F54: xor     rcx, rax
 * 0000000140366F57: mov     rax, 7010008004002001h
 * 0000000140366F61: mul     rcx
 * 0000000140366F64: mov     rcx, rdx
 * 0000000140366F67: mov     [rbp+0B70h+var_3A0], rdx
 * 0000000140366F6E: xor     rcx, rax
 * 0000000140366F71: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140366F7B: mul     rcx
 * 0000000140366F7E: shr     rdx, 1
 * 0000000140366F81: lea     rax, [rdx+rdx*2]
 * 0000000140366F85: cmp     rcx, rax
 * 0000000140366F88: jz      short loc_140366F9A
 * 0000000140366F8A: jmp     loc_14036688F
 * 0000000140366F8F: bt      r13d, 8
 * 0000000140366F94: jb      loc_14036688F
 * 0000000140366F9A: mov     r15d, [rbp+0B70h+var_BE8]
 * 0000000140366F9E: mov     eax, 2
 * 0000000140366FA3: mov     rdi, [rbp+0B70h+var_B80]
 * 0000000140366FA7: mov     ecx, esi
 * 0000000140366FA9: mov     [rbp+0B70h+var_B23], al
 * 0000000140366FAC: mov     r9, rsi
 * 0000000140366FAF: mov     eax, 0Ch
 * 0000000140366FB4: mov     [rbp+0B70h+var_B25], bl
 * 0000000140366FB7: mov     [rbp+0B70h+var_B27], al
 * 0000000140366FBA: mov     eax, 0Fh
 * 0000000140366FBF: mov     [rbp+0B70h+var_B22], r10b
 * 0000000140366FC3: mov     r10, rsi
 * 0000000140366FC6: mov     [rbp+0B70h+var_B28], r11b
 * 0000000140366FCA: mov     [rbp+0B70h+var_B20], 3
 * 0000000140366FCE: lea     ebx, [rax+1]
 * 0000000140366FD1: mov     [rbp+0B70h+var_B1F], 5
 * 0000000140366FD5: mov     [rbp+0B70h+var_B1C], 6
 * 0000000140366FD9: mov     [rbp+0B70h+var_B21], 7
 * 0000000140366FDD: mov     [rbp+0B70h+var_B1B], 8
 * 0000000140366FE1: mov     [rbp+0B70h+var_B1E], 9
 * 0000000140366FE5: mov     [rbp+0B70h+var_B1A], 0Ah
 * 0000000140366FE9: mov     [rbp+0B70h+var_B24], 0Bh
 * 0000000140366FED: mov     [rbp+0B70h+var_B19], 0Dh
 * 0000000140366FF1: mov     [rbp+0B70h+var_B1D], 0Eh
 * 0000000140366FF5: mov     [rbp+0B70h+var_B26], al
 * 0000000140366FF8: ror     r9, cl
 * 0000000140366FFB: test    ebx, ebx
 * 0000000140366FFD: jz      short loc_140367038
 * 0000000140366FFF: mov     rdx, [r10]
 * 0000000140367002: mov     edi, 1
 * 0000000140367007: mov     r8d, ebx
 * 000000014036700A: lea     r13d, [rdi+0Eh]
 * 000000014036700E: movzx   eax, byte ptr [r10]
 * 0000000140367012: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140367016: and     rax, r13
 * 0000000140367019: movzx   ecx, [rbp+rax+0B70h+var_B28]
 * 000000014036701E: or      rdx, rcx
 * 0000000140367021: ror     rdx, 4
 * 0000000140367025: mov     [r10], rdx
 * 0000000140367028: sub     r8, rdi
 * 000000014036702B: jnz     short loc_14036700E
 * 000000014036702D: mov     r13d, dword ptr [rbp+0B70h+arg_8]
 * 0000000140367034: mov     rdi, [rbp+0B70h+var_B80]
 * 0000000140367038: mov     rcx, [r10]
 * 000000014036703B: mov     eax, r11d
 * 000000014036703E: sub     rcx, rax
 * 0000000140367041: sub     rcx, rsi
 * 0000000140367044: bt      r13d, 9
 * 0000000140367049: jb      short loc_140367063
 * 000000014036704B: mov     rax, [rsp+0C70h+var_C08]
 * 0000000140367050: xor     rax, rcx
 * 0000000140367053: mov     ecx, edi
 * 0000000140367055: bswap   rax
 * 0000000140367058: xor     rax, r9
 * 000000014036705B: ror     rax, cl
 * 000000014036705E: xor     rax, rdi
 * 0000000140367061: jmp     short loc_140367069
 * 0000000140367063: mov     rax, r9
 * 0000000140367066: xor     rax, rcx
 * 0000000140367069: mov     edx, 0C8h
 * 000000014036706E: mov     [r10], rax
 * 0000000140367071: sub     edx, r11d
 * 0000000140367074: mov     ecx, eax
 * 0000000140367076: mov     r8d, eax
 * 0000000140367079: not     ecx
 * 000000014036707B: xor     r8d, 0EFFh
 * 0000000140367082: mov     eax, r11d
 * 0000000140367085: xor     rdx, rax
 * 0000000140367088: add     r10, 8
 * 000000014036708C: ror     rdx, cl
 * 000000014036708F: mov     cl, r8b
 * 0000000140367092: xor     r9, rdx
 * 0000000140367095: rol     r9, cl
 * 0000000140367098: add     r9, rsi
 * 000000014036709B: xor     r9, r15
 * 000000014036709E: inc     r11d
 * 00000001403670A1: cmp     r11d, 19h
 * 00000001403670A5: jnz     short loc_1403670BB
 * 00000001403670A7: bt      r13d, 13h
 * 00000001403670AC: lea     eax, [r11-19h]
 * 00000001403670B0: lea     ebx, [r11-18h]
 * 00000001403670B4: cmovnb  eax, r12d
 * 00000001403670B8: add     r14d, eax
 * 00000001403670BB: cmp     r11d, r14d
 * 00000001403670BE: jb      loc_140366FFB
 * 00000001403670C4: jmp     loc_140366880
 * 00000001403670C9: mov     rax, r9
 * 00000001403670CC: xor     rax, rcx
 * 00000001403670CF: mov     [r10], rax
 * 00000001403670D2: mov     ecx, eax
 * 00000001403670D4: mov     r8d, eax
 * 00000001403670D7: not     ecx
 * 00000001403670D9: mov     eax, r11d
 * 00000001403670DC: xor     r8d, 0EFFh
 * 00000001403670E3: mov     edx, 0C8h
 * 00000001403670E8: add     r10, 8
 * 00000001403670EC: sub     edx, r11d
 * 00000001403670EF: xor     rdx, rax
 * 00000001403670F2: mov     eax, 19h
 * 00000001403670F7: ror     rdx, cl
 * 00000001403670FA: mov     cl, r8b
 * 00000001403670FD: xor     r9, rdx
 * 0000000140367100: rol     r9, cl
 * 0000000140367103: add     r9, rsi
 * 0000000140367106: lea     ecx, [rax-18h]
 * 0000000140367109: xor     r9, [rbp+0B70h+arg_8]
 * 0000000140367110: inc     r11d
 * 0000000140367113: cmp     r11d, eax
 * 0000000140367116: cmovz   ebx, ecx
 * 0000000140367119: jb      loc_140366BC3
 * 000000014036711F: mov     r12, [rsp+0C70h+var_BF8]
 * 0000000140367124: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014036712B: mov     rax, [rsi+268h]
 * 0000000140367132: lea     rcx, [rsi+800h]
 * 0000000140367139: call    KeGuardDispatchICall
 * 000000014036713E: xor     r11d, r11d
 * 0000000140367141: mov     r14, 7010008004002001h
 * 000000014036714B: mov     ebx, 1
 * 0000000140367150: mov     r13, [rbp+0B70h+arg_0]
 * 0000000140367157: test    dword ptr [r13+990h], 10000000h
 * 0000000140367162: mov     r15, [r13+7D8h]
 * 0000000140367169: jz      short loc_1403671A0
 * 000000014036716B: rdtsc
 * 000000014036716D: shl     rdx, 20h
 * 0000000140367171: or      rax, rdx
 * 0000000140367174: mov     rcx, rax
 * 0000000140367177: ror     rax, 3
 * 000000014036717B: xor     rcx, rax
 * 000000014036717E: mov     rax, r14
 * 0000000140367181: mul     rcx
 * 0000000140367184: mov     r15, rdx
 * 0000000140367187: mov     [rbp+0B70h+var_390], rdx
 * 000000014036718E: xor     r15, rax
 * 0000000140367191: and     r15, 0Fh
 * 0000000140367195: shl     r15, 4
 * 0000000140367199: add     r15, [r13+5D0h]
 * 00000001403671A0: mov     r8d, 28h ; '('
 * 00000001403671A6: lea     r14, [r13+8F8h]
 * 00000001403671AD: mov     rcx, r14
 * 00000001403671B0: lea     rdx, [rbp+0B70h+var_690]
 * 00000001403671B7: lea     r9d, [r8-23h]
 * 00000001403671BB: mov     rax, [rcx]
 * 00000001403671BE: add     r8d, 0FFFFFFF8h
 * 00000001403671C2: mov     [rdx], rax
 * 00000001403671C5: add     rcx, 8
 * 00000001403671C9: add     rdx, 8
 * 00000001403671CD: sub     r9, rbx
 * 00000001403671D0: jnz     short loc_1403671BB
 * 00000001403671D2: test    r8d, r8d
 * 00000001403671D5: jz      short loc_1403671EF
 * 00000001403671D7: mov     r11d, 0FFFFFFFFh
 * 00000001403671DD: mov     al, [rcx]
 * 00000001403671DF: add     rcx, rbx
 * 00000001403671E2: mov     [rdx], al
 * 00000001403671E4: add     rdx, rbx
 * 00000001403671E7: add     r8d, r11d
 * 00000001403671EA: jnz     short loc_1403671DD
 * 00000001403671EC: xor     r11d, r11d
 * 00000001403671EF: mov     eax, [r13+990h]
 * 00000001403671F6: mov     ecx, 8000h
 * 00000001403671FB: test    ecx, eax
 * 00000001403671FD: jnz     short loc_140367208
 * 00000001403671FF: cmp     [r14], r11d
 * 0000000140367202: jnz     loc_140367871
 * 0000000140367208: bt      eax, 1Eh
 * 000000014036720C: jb      loc_140367A62
 * 0000000140367212: mov     al, [r13+920h]
 * 0000000140367219: mov     r8, r12
 * 000000014036721C: sub     al, bl
 * 000000014036721E: xor     r8, rsi
 * 0000000140367221: movzx   r10d, al
 * 0000000140367225: mov     r11d, 3Fh ; '?'
 * 000000014036722B: sub     r11d, r10d
 * 000000014036722E: rdtsc
 * 0000000140367230: shl     rdx, 20h
 * 0000000140367234: mov     rbx, 7010008004002001h
 * 000000014036723E: or      rax, rdx
 * 0000000140367241: mov     rcx, rax
 * 0000000140367244: ror     rax, 3
 * 0000000140367248: xor     rcx, rax
 * 000000014036724B: mov     rax, rbx
 * 000000014036724E: mul     rcx
 * 0000000140367251: mov     [rbp+0B70h+var_388], rdx
 * 0000000140367258: xor     rax, rdx
 * 000000014036725B: xor     edx, edx
 * 000000014036725D: div     r11
 * 0000000140367260: lea     r9d, [r10+rdx]
 * 0000000140367264: rdtsc
 * 0000000140367266: shl     rdx, 20h
 * 000000014036726A: or      rax, rdx
 * 000000014036726D: mov     rcx, rax
 * 0000000140367270: ror     rax, 3
 * 0000000140367274: xor     rcx, rax
 * 0000000140367277: mov     rax, rbx
 * 000000014036727A: mul     rcx
 * 000000014036727D: xor     rax, rdx
 * 0000000140367280: mov     [rbp+0B70h+var_380], rdx
 * 0000000140367287: xor     edx, edx
 * 0000000140367289: div     r11
 * 000000014036728C: add     edx, r10d
 * 000000014036728F: cmp     edx, r9d
 * 0000000140367292: jz      short loc_140367264
 * 0000000140367294: mov     rbx, [r13+790h]
 * 000000014036729B: xor     r11d, r11d
 * 000000014036729E: mov     rsi, [r13+788h]
 * 00000001403672A5: mov     eax, r9d
 * 00000001403672A8: bts     r8, rax
 * 00000001403672AC: mov     eax, edx
 * 00000001403672AE: btr     r8, rax
 * 00000001403672B2: cmp     dword ptr [r13+924h], 3
 * 00000001403672BA: jnz     loc_140367453
 * 00000001403672C0: mov     r13, [rsp+0C70h+var_C20]
 * 00000001403672C5: test    r13, r13
 * 00000001403672C8: jz      loc_14036744C
 * 00000001403672CE: mov     rcx, [rbp+0B70h+arg_0]
 * 00000001403672D5: lea     edx, [r11+1]
 * 00000001403672D9: mov     rax, [rcx+370h]
 * 00000001403672E0: mov     byte ptr [rbx], 13h
 * 00000001403672E3: mov     [rbx+1], dl
 * 00000001403672E6: mov     [rbx+2], r11w
 * 00000001403672EB: mov     [rbx+18h], rax
 * 00000001403672EF: mov     [rbx+20h], r13
 * 00000001403672F3: mov     [rbx+38h], r11
 * 00000001403672F7: mov     [rbx+10h], r11
 * 00000001403672FB: mov     [rbx+28h], r8
 * 00000001403672FF: mov     rax, [rcx+360h]
 * 0000000140367306: mov     rcx, [r13+8]
 * 000000014036730A: mov     r8, [r13+0]
 * 000000014036730E: mov     edx, [r13+10h]
 * 0000000140367312: call    KeGuardDispatchICall
 * 0000000140367317: mov     r9, [r13+0]
 * 000000014036731B: mov     rcx, r13
 * 000000014036731E: rol     rcx, 11h
 * 0000000140367322: mov     rax, 7010008004002001h
 * 000000014036732C: xor     rcx, r13
 * 000000014036732F: mov     r10d, 4
 * 0000000140367335: mul     rcx
 * 0000000140367338: mov     [rbp+0B70h+var_378], rdx
 * 000000014036733F: xor     rdx, rax
 * 0000000140367342: lea     rax, [r13+18h]
 * 0000000140367346: mov     r8, rdx
 * 0000000140367349: xor     r11d, r11d
 * 000000014036734C: lea     r13d, [r10-3]
 * 0000000140367350: xor     [rax], r8
 * 0000000140367353: mov     ecx, r10d
 * 0000000140367356: rol     r8, cl
 * 0000000140367359: lea     rax, [rax-8]
 * 000000014036735D: sub     r10d, r13d
 * 0000000140367360: jnz     short loc_140367350
 * 0000000140367362: and     dl, 0Fh
 * 0000000140367365: cmp     dl, 7
 * 0000000140367368: jnb     short loc_1403673D7
 * 000000014036736A: mov     rcx, r9
 * 000000014036736D: mov     rax, 7010008004002001h
 * 0000000140367377: rol     rcx, 11h
 * 000000014036737B: mov     r10d, 6
 * 0000000140367381: xor     rcx, r9
 * 0000000140367384: mul     rcx
 * 0000000140367387: mov     [rbp+0B70h+var_370], rdx
 * 000000014036738E: xor     rdx, rax
 * 0000000140367391: add     r8, rdx
 * 0000000140367394: lea     rax, [r9+28h]
 * 0000000140367398: movsx   edx, word ptr [r9+8]
 * 000000014036739D: xor     [rax], r8
 * 00000001403673A0: mov     ecx, r10d
 * 00000001403673A3: rol     r8, cl
 * 00000001403673A6: lea     rax, [rax-8]
 * 00000001403673AA: sub     r10d, r13d
 * 00000001403673AD: jnz     short loc_14036739D
 * 00000001403673AF: sub     rdx, 30h ; '0'
 * 00000001403673B3: shr     rdx, 3
 * 00000001403673B7: test    edx, edx
 * 00000001403673B9: jz      short loc_1403673D7
 * 00000001403673BB: movsxd  r10, edx
 * 00000001403673BE: add     r10, 5
 * 00000001403673C2: lea     r10, [r9+r10*8]
 * 00000001403673C6: xor     [r10], r8
 * 00000001403673C9: mov     ecx, edx
 * 00000001403673CB: rol     r8, cl
 * 00000001403673CE: lea     r10, [r10-8]
 * 00000001403673D2: sub     edx, r13d
 * 00000001403673D5: jnz     short loc_1403673C6
 * 00000001403673D7: mov     r13, [rbp+0B70h+arg_0]
 * 00000001403673DE: mov     [rbx+40h], r12
 * 00000001403673E2: mov     r12, 7010008004002001h
 * 00000001403673EC: test    dword ptr [r13+990h], 100h
 * 00000001403673F7: jz      short loc_140367478
 * 00000001403673F9: lea     r9, [r15-48h]
 * 00000001403673FD: mov     [r9+40h], rbx
 * 0000000140367401: rdtsc
 * 0000000140367403: shl     rdx, 20h
 * 0000000140367407: mov     r8d, 19h
 * 000000014036740D: or      rax, rdx
 * 0000000140367410: mov     rcx, rax
 * 0000000140367413: ror     rax, 3
 * 0000000140367417: xor     rcx, rax
 * 000000014036741A: mov     rax, r12
 * 000000014036741D: mul     rcx
 * 0000000140367420: lea     r15d, [r8-18h]
 * 0000000140367424: mov     [rbp+0B70h+var_368], rdx
 * 000000014036742B: xor     rdx, rax
 * 000000014036742E: lea     rax, [r9+48h]
 * 0000000140367432: xor     [rax], rdx
 * 0000000140367435: lea     rax, [rax+8]
 * 0000000140367439: sub     r8, r15
 * 000000014036743C: jnz     short loc_140367432
 * 000000014036743E: mov     dword ptr [r9+48h], 48513148h
 * 0000000140367446: mov     [r9+20h], rdx
 * 000000014036744A: jmp     short loc_140367481
 * 000000014036744C: mov     r13, [rbp+0B70h+arg_0]
 * 0000000140367453: mov     byte ptr [rbx], 13h
 * 0000000140367456: mov     eax, 1
 * 000000014036745B: mov     [rbx+1], al
 * 000000014036745E: mov     [rbx+2], r11w
 * 0000000140367463: mov     [rbx+18h], r15
 * 0000000140367467: mov     [rbx+20h], r8
 * 000000014036746B: mov     [rbx+38h], r11
 * 000000014036746F: mov     [rbx+10h], r11
 * 0000000140367473: jmp     loc_1403673DE
 * 0000000140367478: mov     r9, rbx
 * 000000014036747B: mov     r15d, 1
 * 0000000140367481: mov     r10, [r13+0A98h]
 * 0000000140367488: test    r10, r10
 * 000000014036748B: jz      loc_140367520
 * 0000000140367491: mov     r10, [r10+20h]
 * 0000000140367495: mov     eax, 0E0E20100h
 * 000000014036749A: mov     rcx, r10
 * 000000014036749D: xor     rcx, rax
 * 00000001403674A0: shr     rcx, 4
 * 00000001403674A4: xor     rcx, r10
 * 00000001403674A7: shr     rcx, 4
 * 00000001403674AB: xor     rcx, [r13+590h]
 * 00000001403674B2: mov     al, cl
 * 00000001403674B4: mov     r8, rcx
 * 00000001403674B7: and     al, 0Fh
 * 00000001403674B9: movzx   r11d, al
 * 00000001403674BD: cmovz   r11d, r15d
 * 00000001403674C1: xor     eax, eax
 * 00000001403674C3: mov     edx, eax
 * 00000001403674C5: test    r11b, r11b
 * 00000001403674C8: jz      short loc_140367501
 * 00000001403674CA: lea     r12d, [rax+0Fh]
 * 00000001403674CE: mov     rdx, rcx
 * 00000001403674D1: and     rdx, r12
 * 00000001403674D4: add     rdx, r10
 * 00000001403674D7: mov     r10, [rdx]
 * 00000001403674DA: mov     rax, r10
 * 00000001403674DD: xor     rax, 1DFE00h
 * 00000001403674E3: shr     rax, 4
 * 00000001403674E7: xor     rax, r10
 * 00000001403674EA: shr     rax, 4
 * 00000001403674EE: xor     rcx, rax
 * 00000001403674F1: add     r11b, 0FFh
 * 00000001403674F5: jnz     short loc_1403674CE
 * 00000001403674F7: mov     r12, 7010008004002001h
 * 0000000140367501: mov     rax, r8
 * 0000000140367504: xor     r11d, r11d
 * 0000000140367507: xor     r8, r9
 * 000000014036750A: and     eax, 1000h
 * 000000014036750F: test    rax, rax
 * 0000000140367512: cmovz   r8, r9
 * 0000000140367516: mov     [rdx], r8
 * 0000000140367519: mov     r9, [r13+0A98h]
 * 0000000140367520: lock or [rsp+0C70h+var_C70], r11d
 * 0000000140367525: mov     ecx, [r13+838h]
 * 000000014036752C: test    ecx, ecx
 * 000000014036752E: jz      loc_1403677C1
 * 0000000140367534: sub     ecx, 1
 * 0000000140367537: jz      loc_1403677AA
 * 000000014036753D: sub     ecx, 1
 * 0000000140367540: jz      loc_140367797
 * 0000000140367546: sub     ecx, 1
 * 0000000140367549: jz      loc_1403676DB
 * 000000014036754F: cmp     ecx, 1
 * 0000000140367552: jz      loc_1403675D9
 * 0000000140367558: mov     r8, [r13+998h]
 * 000000014036755F: mov     [r8+48h], r9
 * 0000000140367563: lock or [rsp+0C70h+var_C70], r11d
 * 0000000140367568: rdtsc
 * 000000014036756A: shl     rdx, 20h
 * 000000014036756E: or      rax, rdx
 * 0000000140367571: mov     rcx, rax
 * 0000000140367574: mov     rdx, rax
 * 0000000140367577: ror     rcx, 3
 * 000000014036757B: mov     rax, r12
 * 000000014036757E: xor     rdx, rcx
 * 0000000140367581: mul     rdx
 * 0000000140367584: mov     rcx, rdx
 * 0000000140367587: mov     [rbp+0B70h+var_360], rdx
 * 000000014036758E: xor     rcx, rax
 * 0000000140367591: mov     rax, 0ABCC77118461CEFDh
 * 000000014036759B: mul     rcx
 * 000000014036759E: shr     rdx, 1Ah
 * 00000001403675A2: imul    rax, rdx, 5F5E100h
 * 00000001403675A9: sub     rcx, rax
 * 00000001403675AC: mov     rax, 0D6BF94D5E57A42BDh
 * 00000001403675B6: add     rcx, 47868C00h
 * 00000001403675BD: imul    rcx
 * 00000001403675C0: add     rdx, rcx
 * 00000001403675C3: sar     rdx, 17h
 * 00000001403675C7: mov     rax, rdx
 * 00000001403675CA: shr     rax, 3Fh
 * 00000001403675CE: add     rdx, rax
 * 00000001403675D1: mov     [r8], edx
 * 00000001403675D4: jmp     loc_14036786C
 * 00000001403675D9: mov     r8, [r13+9E0h]
 * 00000001403675E0: xor     r9d, r9d
 * 00000001403675E3: mov     rcx, [r13+9F0h]
 * 00000001403675EA: mov     rdx, rbx
 * 00000001403675ED: mov     rax, [r13+9E8h]
 * 00000001403675F4: mov     rdi, [r13+998h]
 * 00000001403675FB: mov     byte ptr [r8], 12h
 * 00000001403675FF: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140367604: mov     [r8+50h], r11b
 * 0000000140367608: mov     [r8+8], rdi
 * 000000014036760C: mov     [r8+20h], rax
 * 0000000140367610: mov     [r8+28h], r11
 * 0000000140367614: mov     [r8+30h], rcx
 * 0000000140367618: mov     [r8+51h], r11b
 * 000000014036761C: mov     [r8+38h], r11
 * 0000000140367620: mov     [r8+52h], r11b
 * 0000000140367624: xor     r8d, r8d
 * 0000000140367627: mov     rax, [r13+2C0h]
 * 000000014036762E: mov     rcx, [r13+9E0h]
 * 0000000140367635: call    KeGuardDispatchICall
 * 000000014036763A: xor     r11d, r11d
 * 000000014036763D: test    al, al
 * 000000014036763F: jnz     loc_14036786C
 * 0000000140367645: lea     ebx, [r11+1]
 * 0000000140367649: cmp     [r14], r11d
 * 000000014036764C: jnz     short loc_14036768B
 * 000000014036764E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140367658: xor     edx, edx
 * 000000014036765A: add     rax, r13
 * 000000014036765D: mov     rcx, r13
 * 0000000140367660: mov     [r13+900h], rax
 * 0000000140367667: mov     [r13+908h], r11
 * 000000014036766E: mov     qword ptr [r13+910h], 104h
 * 0000000140367679: mov     [r13+918h], rdi
 * 0000000140367680: mov     [r14], ebx
 * 0000000140367683: call    sub_14036B3BC
 * 0000000140367688: xor     r11d, r11d
 * 000000014036768B: mov     edx, 28h ; '('
 * 0000000140367690: lea     rcx, [rbp+0B70h+var_690]
 * 0000000140367697: lea     r13d, [rdx-23h]
 * 000000014036769B: mov     rax, [r14]
 * 000000014036769E: add     edx, 0FFFFFFF8h
 * 00000001403676A1: mov     [rcx], rax
 * 00000001403676A4: add     r14, 8
 * 00000001403676A8: add     rcx, 8
 * 00000001403676AC: sub     r13, rbx
 * 00000001403676AF: jnz     short loc_14036769B
 * 00000001403676B1: mov     r13, [rbp+0B70h+arg_0]
 * 00000001403676B8: test    edx, edx
 * 00000001403676BA: jz      loc_14036786C
 * 00000001403676C0: mov     r11d, 0FFFFFFFFh
 * 00000001403676C6: mov     al, [r14]
 * 00000001403676C9: add     r14, rbx
 * 00000001403676CC: mov     [rcx], al
 * 00000001403676CE: add     rcx, rbx
 * 00000001403676D1: add     edx, r11d
 * 00000001403676D4: jnz     short loc_1403676C6
 * 00000001403676D6: jmp     loc_140367869
 * 00000001403676DB: mov     rdi, [r13+998h]
 * 00000001403676E2: mov     rax, [r13+698h]
 * 00000001403676E9: mov     rcx, [rdi+rax]
 * 00000001403676ED: test    rcx, rcx
 * 00000001403676F0: jz      loc_140367782
 * 00000001403676F6: cmp     [r14], r11d
 * 00000001403676F9: jnz     short loc_140367738
 * 00000001403676FB: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140367705: xor     edx, edx
 * 0000000140367707: add     rax, r13
 * 000000014036770A: mov     [r13+900h], rax
 * 0000000140367711: mov     [r13+908h], r11
 * 0000000140367718: mov     qword ptr [r13+910h], 104h
 * 0000000140367723: mov     [r13+918h], rcx
 * 000000014036772A: mov     rcx, r13
 * 000000014036772D: mov     [r14], r15d
 * 0000000140367730: call    sub_14036B3BC
 * 0000000140367735: xor     r11d, r11d
 * 0000000140367738: mov     edx, 28h ; '('
 * 000000014036773D: lea     rcx, [rbp+0B70h+var_690]
 * 0000000140367744: lea     r13d, [rdx-23h]
 * 0000000140367748: mov     rax, [r14]
 * 000000014036774B: add     edx, 0FFFFFFF8h
 * 000000014036774E: mov     [rcx], rax
 * 0000000140367751: add     r14, 8
 * 0000000140367755: add     rcx, 8
 * 0000000140367759: sub     r13, r15
 * 000000014036775C: jnz     short loc_140367748
 * 000000014036775E: mov     r13, [rbp+0B70h+arg_0]
 * 0000000140367765: test    edx, edx
 * 0000000140367767: jz      short loc_140367782
 * 0000000140367769: mov     r11d, 0FFFFFFFFh
 * 000000014036776F: mov     al, [r14]
 * 0000000140367772: add     r14, r15
 * 0000000140367775: mov     [rcx], al
 * 0000000140367777: add     rcx, r15
 * 000000014036777A: add     edx, r11d
 * 000000014036777D: jnz     short loc_14036776F
 * 000000014036777F: xor     r11d, r11d
 * 0000000140367782: lock or [rsp+0C70h+var_C70], r11d
 * 0000000140367787: mov     rax, [r13+698h]
 * 000000014036778E: mov     [rdi+rax], rbx
 * 0000000140367792: jmp     loc_14036786C
 * 0000000140367797: mov     rax, [r13+7C0h]
 * 000000014036779E: mov     [rax+80h], r9
 * 00000001403677A5: jmp     loc_14036786C
 * 00000001403677AA: mov     rcx, [r13+7C0h]
 * 00000001403677B1: mov     rax, [r13+630h]
 * 00000001403677B8: mov     [rcx+rax], r9
 * 00000001403677BC: jmp     loc_14036786C
 * 00000001403677C1: rdtsc
 * 00000001403677C3: shl     rdx, 20h
 * 00000001403677C7: or      rax, rdx
 * 00000001403677CA: mov     rcx, rax
 * 00000001403677CD: mov     rdx, rax
 * 00000001403677D0: ror     rcx, 3
 * 00000001403677D4: mov     rax, r12
 * 00000001403677D7: xor     rdx, rcx
 * 00000001403677DA: mul     rdx
 * 00000001403677DD: mov     rcx, rdx
 * 00000001403677E0: mov     [rbp+0B70h+var_358], rdx
 * 00000001403677E7: xor     rcx, rax
 * 00000001403677EA: mov     rax, 0ABCC77118461CEFDh
 * 00000001403677F4: mul     rcx
 * 00000001403677F7: shr     rdx, 1Ah
 * 00000001403677FB: imul    rax, rdx, 5F5E100h
 * 0000000140367802: sub     rcx, rax
 * 0000000140367805: sub     rdi, rcx
 * 0000000140367808: rdtsc
 * 000000014036780A: shl     rdx, 20h
 * 000000014036780E: or      rax, rdx
 * 0000000140367811: mov     [rsp+0C70h+BugCheckParameter4], r9
 * 0000000140367816: mov     rcx, rax
 * 0000000140367819: mov     rdx, rax
 * 000000014036781C: ror     rcx, 3
 * 0000000140367820: mov     rax, r12
 * 0000000140367823: xor     rdx, rcx
 * 0000000140367826: mov     rcx, rsi
 * 0000000140367829: mul     rdx
 * 000000014036782C: mov     r8, rdx
 * 000000014036782F: mov     [rbp+0B70h+var_350], rdx
 * 0000000140367836: xor     r8, rax
 * 0000000140367839: mov     rax, 346DC5D63886594Bh
 * 0000000140367843: mul     r8
 * 0000000140367846: shr     rdx, 0Bh
 * 000000014036784A: imul    rax, rdx, 2710h
 * 0000000140367851: mov     rdx, rdi
 * 0000000140367854: sub     r8, rax
 * 0000000140367857: mov     rax, [r13+1D8h]
 * 000000014036785E: mov     r9d, r8d
 * 0000000140367861: xor     r8d, r8d
 * 0000000140367864: call    KeGuardDispatchICall
 * 0000000140367869: xor     r11d, r11d
 * 000000014036786C: mov     ecx, 8000h
 * 0000000140367871: cmp     [rbp+0B70h+var_690], r11d
 * 0000000140367878: jz      loc_140367A62
 * 000000014036787E: test    [r13+990h], ecx
 * 0000000140367885: jnz     loc_140367A62
 * 000000014036788B: mov     r13, [rbp+0B70h+var_678]
 * 0000000140367892: mov     rbx, [rbp+0B70h+var_670]
 * 0000000140367899: mov     rdi, [rbp+0B70h+var_680]
 * 00000001403678A0: mov     r14, [rbp+0B70h+var_688]
 * 00000001403678A7: mov     rax, [rbp+0B70h+arg_0]
 * 00000001403678AE: mov     [rbp+0B70h+arg_8], r13
 * 00000001403678B5: mov     [rsp+0C70h+var_BF8], rbx
 * 00000001403678BA: mov     [rbp+0B70h+var_B80], rdi
 * 00000001403678BE: mov     [rbp+0B70h+var_BD0], r14
 * 00000001403678C2: mov     [rbp+0B70h+var_B48], rax
 * 00000001403678C6: mov     rax, cr8
 * 00000001403678CA: mov     r8d, 2
 * 00000001403678D0: cmp     al, r8b
 * 00000001403678D3: jnb     short loc_1403678DD
 * 00000001403678D5: mov     rax, cr8
 * 00000001403678D9: mov     cr8, r8
 * 00000001403678DD: mov     rdx, gs:20h
 * 00000001403678E6: mov     rax, [rbp+0B70h+var_B48]
 * 00000001403678EA: mov     rcx, [rax+638h]
 * 00000001403678F1: mov     rsi, [rdx+rcx]
 * 00000001403678F5: mov     rcx, gs:20h
 * 00000001403678FE: mov     r9, [rbp+0B70h+var_B48]
 * 0000000140367902: mov     rax, [r9+648h]
 * 0000000140367909: mov     r15, [rcx+rax]
 * 000000014036790D: mov     rax, [r9+640h]
 * 0000000140367914: mov     [rbp+0B70h+arg_0], r15
 * 000000014036791B: cmp     [rdx+rax], r11b
 * 000000014036791F: jz      short loc_14036793A
 * 0000000140367921: lea     rax, [rbp+0B70h+var_B48]
 * 0000000140367925: cmp     rax, rsi
 * 0000000140367928: ja      short loc_14036793A
 * 000000014036792A: lea     rax, [rsi-6000h]
 * 0000000140367931: lea     rcx, [rbp+0B70h+var_B48]
 * 0000000140367935: cmp     rcx, rax
 * 0000000140367938: jnb     short loc_140367949
 * 000000014036793A: mov     rax, [rbp+0B70h+var_B48]
 * 000000014036793E: mov     rcx, [rax+678h]
 * 0000000140367945: mov     rsi, [r15+rcx]
 * 0000000140367949: mov     r9, [rbp+0B70h+var_B48]
 * 000000014036794D: test    dword ptr [r9+990h], 8000000h
 * 0000000140367958: jnz     loc_140367D95
 * 000000014036795E: mov     r12, cr0
 * 0000000140367962: mov     rax, r12
 * 0000000140367965: btr     rax, 10h
 * 000000014036796A: mov     cr0, rax
 * 000000014036796D: mov     eax, [r9+0AA0h]
 * 0000000140367974: lea     r14, [r9+0AA8h]
 * 000000014036797B: shl     rax, 4
 * 000000014036797F: lea     r10, [r9+0AA8h]
 * 0000000140367986: add     r14, rax
 * 0000000140367989: mov     r8d, r11d
 * 000000014036798C: mov     rdx, r14
 * 000000014036798F: cmp     [r9+0AA4h], r11d
 * 0000000140367996: jbe     short loc_1403679E7
 * 0000000140367998: mov     r11d, 1
 * 000000014036799E: lea     r13d, [r11+0Fh]
 * 00000001403679A2: mov     rcx, [rdx]
 * 00000001403679A5: mov     rax, [rdx+8]
 * 00000001403679A9: mov     [rcx], rax
 * 00000001403679AC: mov     rcx, cr4
 * 00000001403679AF: test    rcx, 20080h
 * 00000001403679B6: jz      short loc_1403679C8
 * 00000001403679B8: mov     rax, rcx
 * 00000001403679BB: btc     rax, 7
 * 00000001403679C0: mov     cr4, rax
 * 00000001403679C3: mov     cr4, rcx
 * 00000001403679C6: jmp     short loc_1403679CE
 * 00000001403679C8: mov     rax, cr3
 * 00000001403679CB: mov     cr3, rax
 * 00000001403679CE: add     rdx, r13
 * 00000001403679D1: add     r8d, r11d
 * 00000001403679D4: cmp     r8d, [r9+0AA4h]
 * 00000001403679DB: jb      short loc_1403679A2
 * 00000001403679DD: mov     r13, [rbp+0B70h+arg_8]
 * 00000001403679E4: xor     r11d, r11d
 * 00000001403679E7: cmp     r10, r14
 * 00000001403679EA: jnb     loc_140367D7D
 * 00000001403679F0: xor     r13d, r13d
 * 00000001403679F3: mov     r15d, 0FFFFFFFFh
 * 00000001403679F9: mov     edi, [r10+8]
 * 00000001403679FD: mov     rcx, rdx
 * 0000000140367A00: mov     r8, [r10]
 * 0000000140367A03: mov     r11d, edi
 * 0000000140367A06: cmp     edi, 8
 * 0000000140367A09: jb      short loc_140367A31
 * 0000000140367A0B: mov     ebx, edi
 * 0000000140367A0D: mov     r13d, 1
 * 0000000140367A13: shr     rbx, 3
 * 0000000140367A17: mov     rax, [rcx]
 * 0000000140367A1A: add     r11d, 0FFFFFFF8h
 * 0000000140367A1E: mov     [r8], rax
 * 0000000140367A21: add     rcx, 8
 * 0000000140367A25: add     r8, 8
 * 0000000140367A29: sub     rbx, r13
 * 0000000140367A2C: jnz     short loc_140367A17
 * 0000000140367A2E: xor     r13d, r13d
 * 0000000140367A31: test    r11d, r11d
 * 0000000140367A34: jz      short loc_140367A50
 * 0000000140367A36: sub     r8, rcx
 * 0000000140367A39: mov     r13d, 1
 * 0000000140367A3F: mov     al, [rcx]
 * 0000000140367A41: mov     [r8+rcx], al
 * 0000000140367A45: add     rcx, r13
 * 0000000140367A48: add     r11d, r15d
 * 0000000140367A4B: jnz     short loc_140367A3F
 * 0000000140367A4D: xor     r13d, r13d
 * 0000000140367A50: add     rdx, rdi
 * 0000000140367A53: add     r10, 10h
 * 0000000140367A57: cmp     r10, r14
 * 0000000140367A5A: jnb     loc_140367D63
 * 0000000140367A60: jmp     short loc_1403679F9
 * 0000000140367A62: test    dword ptr [r13+990h], 40000000h
 * 0000000140367A6D: jnz     short loc_140367AB9
 * 0000000140367A6F: cmp     [rbp+0B70h+var_BE8], r11d
 * 0000000140367A73: jz      short loc_140367AB9
 * 0000000140367A75: mov     ecx, [r13+924h]
 * 0000000140367A7C: sub     ecx, 1
 * 0000000140367A7F: jz      short loc_140367A93
 * 0000000140367A81: mov     eax, 2
 * 0000000140367A86: cmp     ecx, eax
 * 0000000140367A88: jnz     short loc_140367AB9
 * 0000000140367A8A: mov     rax, [r13+368h]
 * 0000000140367A91: jmp     short loc_140367AB2
 * 0000000140367A93: add     qword ptr [r13+7C8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140367A9B: mov     rax, [r13+7C8h]
 * 0000000140367AA2: mov     ecx, [rax]
 * 0000000140367AA4: mov     [r13+7D0h], ecx
 * 0000000140367AAB: mov     rax, [r13+228h]
 * 0000000140367AB2: mov     [r13+100h], rax
 * 0000000140367AB9: mov     rax, r13
 * 0000000140367ABC: add     rsp, 0C38h
 * 0000000140367AC3: pop     r15
 * 0000000140367AC5: pop     r14
 * 0000000140367AC7: pop     r13
 * 0000000140367AC9: pop     r12
 * 0000000140367ACB: pop     rdi
 * 0000000140367ACC: pop     rsi
 * 0000000140367ACD: pop     rbx
 * 0000000140367ACE: pop     rbp
 * 0000000140367ACF: retn
 * 0000000140367AD0: mov     [rbp+0B70h+var_9F4], 40002D07h
 * 0000000140367ADA: xor     r9d, r9d; BugCheckParameter3
 * 0000000140367ADD: mov     ecx, [rbp+0B70h+var_9F4]
 * 0000000140367AE3: mov     r8, r14; BugCheckParameter2
 * 0000000140367AE6: xor     ecx, 2D48h
 * 0000000140367AEC: mov     [rsp+0C70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140367AF1: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367AF4: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140367AF8: call    KeBugCheckEx
 * 0000000140367AFE: mov     [rbp+0B70h+var_9F0], 40002D07h
 * 0000000140367B08: mov     r9, r15; BugCheckParameter3
 * 0000000140367B0B: mov     ecx, [rbp+0B70h+var_9F0]
 * 0000000140367B11: mov     r8, r14; BugCheckParameter2
 * 0000000140367B14: xor     ecx, 2D48h
 * 0000000140367B1A: mov     [rsp+0C70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140367B1F: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367B22: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140367B27: call    KeBugCheckEx
 * 0000000140367B2D: mov     [rbp+0B70h+var_9EC], 40002D07h
 * 0000000140367B37: mov     r8, r14; BugCheckParameter2
 * 0000000140367B3A: mov     ecx, [rbp+0B70h+var_9EC]
 * 0000000140367B40: xor     ecx, 2D48h
 * 0000000140367B46: mov     r9d, edx; BugCheckParameter3
 * 0000000140367B49: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367B4C: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140367B51: mov     [rsp+0C70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140367B56: call    KeBugCheckEx
 * 0000000140367B5C: mov     [rbp+0B70h+var_9E8], 40002D07h
 * 0000000140367B66: mov     ecx, [rbp+0B70h+var_9E8]
 * 0000000140367B6C: xor     ecx, 2D48h
 * 0000000140367B72: mov     r9d, edx; BugCheckParameter3
 * 0000000140367B75: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367B78: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140367B7D: mov     [rsp+0C70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140367B82: call    KeBugCheckEx
 * 0000000140367B88: mov     [rbp+0B70h+var_998], 40002D07h
 * 0000000140367B92: mov     r9d, 2; BugCheckParameter3
 * 0000000140367B98: mov     ecx, [rbp+0B70h+var_998]
 * 0000000140367B9E: mov     r8, r14; BugCheckParameter2
 * 0000000140367BA1: xor     ecx, 2D48h
 * 0000000140367BA7: mov     [rsp+0C70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140367BAC: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367BAF: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140367BB3: call    KeBugCheckEx
 * 0000000140367BB9: mov     [rbp+0B70h+var_9E4], 40002D07h
 * 0000000140367BC3: mov     r9d, 3; BugCheckParameter3
 * 0000000140367BC9: mov     ecx, [rbp+0B70h+var_9E4]
 * 0000000140367BCF: mov     r8, r14; BugCheckParameter2
 * 0000000140367BD2: xor     ecx, 2D48h
 * 0000000140367BD8: mov     [rsp+0C70h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140367BDD: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367BE0: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140367BE4: call    KeBugCheckEx
 * 0000000140367BEA: mov     [rbp+0B70h+var_9E0], 40002D07h
 * 0000000140367BF4: mov     r9d, 6; BugCheckParameter3
 * 0000000140367BFA: mov     ecx, [rbp+0B70h+var_9E0]
 * 0000000140367C00: mov     r8, r14; BugCheckParameter2
 * 0000000140367C03: xor     ecx, 2D48h
 * 0000000140367C09: mov     [rsp+0C70h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140367C0E: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367C11: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140367C15: call    KeBugCheckEx
 * 0000000140367C1B: mov     [rbp+0B70h+var_9AC], 40002D07h
 * 0000000140367C25: xor     r9d, r9d; BugCheckParameter3
 * 0000000140367C28: mov     ecx, [rbp+0B70h+var_9AC]
 * 0000000140367C2E: mov     r8, r13; BugCheckParameter2
 * 0000000140367C31: xor     ecx, 2D48h
 * 0000000140367C37: mov     [rsp+0C70h+BugCheckParameter4], r14; BugCheckParameter4
 * 0000000140367C3C: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367C3F: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140367C43: call    KeBugCheckEx
 * 0000000140367C49: mov     [rbp+0B70h+var_9A8], 40002D07h
 * 0000000140367C53: mov     r9d, 3; BugCheckParameter3
 * 0000000140367C59: mov     ecx, [rbp+0B70h+var_9A8]
 * 0000000140367C5F: mov     r8, r13; BugCheckParameter2
 * 0000000140367C62: xor     ecx, 2D48h
 * 0000000140367C68: mov     [rsp+0C70h+BugCheckParameter4], r14; BugCheckParameter4
 * 0000000140367C6D: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367C70: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140367C74: call    KeBugCheckEx
 * 0000000140367C7A: mov     [rbp+0B70h+var_988], 40002D07h
 * 0000000140367C84: mov     r8, r13; BugCheckParameter2
 * 0000000140367C87: mov     ecx, [rbp+0B70h+var_988]
 * 0000000140367C8D: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140367C92: xor     ecx, 2D48h
 * 0000000140367C98: mov     [rsp+0C70h+BugCheckParameter4], r14; BugCheckParameter4
 * 0000000140367C9D: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367CA0: call    KeBugCheckEx
 * 0000000140367CA6: xor     eax, eax
 * 0000000140367CA8: mov     [rbp+0B70h+var_99C], 40002D07h
 * 0000000140367CB2: mov     ecx, [rbp+0B70h+var_99C]
 * 0000000140367CB8: mov     r8, r13; BugCheckParameter2
 * 0000000140367CBB: xor     ecx, 2D48h
 * 0000000140367CC1: mov     r9d, edx; BugCheckParameter3
 * 0000000140367CC4: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367CC7: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140367CCA: mov     [rsp+0C70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140367CCF: call    KeBugCheckEx
 * 0000000140367CD5: xor     eax, eax
 * 0000000140367CD7: mov     [rbp+0B70h+var_9A0], 40002D07h
 * 0000000140367CE1: mov     ecx, [rbp+0B70h+var_9A0]
 * 0000000140367CE7: xor     ecx, 2D48h
 * 0000000140367CED: mov     r9d, edx; BugCheckParameter3
 * 0000000140367CF0: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367CF3: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140367CF6: mov     [rsp+0C70h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140367CFB: call    KeBugCheckEx
 * 0000000140367D01: mov     [rbp+0B70h+var_9A4], 40002D07h
 * 0000000140367D0B: mov     r9d, 2; BugCheckParameter3
 * 0000000140367D11: mov     ecx, [rbp+0B70h+var_9A4]
 * 0000000140367D17: mov     r8, r13; BugCheckParameter2
 * 0000000140367D1A: xor     ecx, 2D48h
 * 0000000140367D20: mov     [rsp+0C70h+BugCheckParameter4], r14; BugCheckParameter4
 * 0000000140367D25: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367D28: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140367D2C: call    KeBugCheckEx
 * 0000000140367D32: mov     [rbp+0B70h+var_940], 40002D07h
 * 0000000140367D3C: mov     r9d, 6; BugCheckParameter3
 * 0000000140367D42: mov     ecx, [rbp+0B70h+var_940]
 * 0000000140367D48: mov     r8, r13; BugCheckParameter2
 * 0000000140367D4B: xor     ecx, 2D48h
 * 0000000140367D51: mov     [rsp+0C70h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140367D56: ror     ecx, 0DEh; BugCheckCode
 * 0000000140367D59: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140367D5D: call    KeBugCheckEx
 * 0000000140367D63: mov     r15, [rbp+0B70h+arg_0]
 * 0000000140367D6A: xor     r11d, r11d
 * 0000000140367D6D: mov     r13, [rbp+0B70h+arg_8]
 * 0000000140367D74: mov     rbx, [rsp+0C70h+var_BF8]
 * 0000000140367D79: mov     rdi, [rbp+0B70h+var_B80]
 * 0000000140367D7D: mov     rax, [r9+218h]
 * 0000000140367D84: mov     byte ptr [rax], 0C3h
 * 0000000140367D87: mov     cr0, r12
 * 0000000140367D8B: mov     r14, [rbp+0B70h+var_BD0]
 * 0000000140367D8F: mov     r8d, 2
 * 0000000140367D95: mov     r9, [rbp+0B70h+var_B48]
 * 0000000140367D99: mov     ecx, [r9+928h]
 * 0000000140367DA0: test    ecx, ecx
 * 0000000140367DA2: jz      loc_140367E88
 * 0000000140367DA8: mov     rax, cr8
 * 0000000140367DAC: cmp     al, r8b
 * 0000000140367DAF: jnb     short loc_140367DC0
 * 0000000140367DB1: mov     rax, cr8
 * 0000000140367DB5: mov     cr8, r8
 * 0000000140367DB9: mov     ecx, [r9+928h]
 * 0000000140367DC0: test    ecx, ecx
 * 0000000140367DC2: jz      loc_140367E88
 * 0000000140367DC8: sub     ecx, 1
 * 0000000140367DCB: jz      loc_140367E7B
 * 0000000140367DD1: sub     ecx, 1
 * 0000000140367DD4: jz      loc_140367E72
 * 0000000140367DDA: sub     ecx, 1
 * 0000000140367DDD: jz      loc_140367E69
 * 0000000140367DE3: sub     ecx, 1
 * 0000000140367DE6: jz      short loc_140367E2D
 * 0000000140367DE8: cmp     ecx, 1
 * 0000000140367DEB: jz      short loc_140367E06
 * 0000000140367DED: mov     rax, [r9+5B8h]
 * 0000000140367DF4: mov     ecx, 1
 * 0000000140367DF9: lock or [rax+340h], rcx
 * 0000000140367E01: jmp     loc_140367E88
 * 0000000140367E06: mov     rcx, gs:20h
 * 0000000140367E0F: mov     rax, [r9+648h]
 * 0000000140367E16: mov     edx, [r9+990h]
 * 0000000140367E1D: shr     edx, 0Ah
 * 0000000140367E20: and     edx, 1Fh
 * 0000000140367E23: mov     rcx, [rax+rcx]
 * 0000000140367E27: lock bts [rcx], edx
 * 0000000140367E2B: jmp     short loc_140367E88
 * 0000000140367E2D: mov     rcx, gs:20h
 * 0000000140367E36: mov     rax, [r9+648h]
 * 0000000140367E3D: mov     r8d, [r9+990h]
 * 0000000140367E44: shr     r8d, 0Ah
 * 0000000140367E48: and     r8d, 1Fh
 * 0000000140367E4C: mov     rcx, [rax+rcx]
 * 0000000140367E50: add     rcx, [r9+6A8h]
 * 0000000140367E57: mov     rax, [r9+688h]
 * 0000000140367E5E: mov     rdx, [rcx+rax]
 * 0000000140367E62: lock bts [rdx], r8d
 * 0000000140367E67: jmp     short loc_140367E88
 * 0000000140367E69: mov     rax, [r9+560h]
 * 0000000140367E70: jmp     short loc_140367E82
 * 0000000140367E72: mov     rax, [r9+558h]
 * 0000000140367E79: jmp     short loc_140367E82
 * 0000000140367E7B: mov     rax, [r9+548h]
 * 0000000140367E82: lock bts qword ptr [rax], 0
 * 0000000140367E88: mov     rax, [rbp+0B70h+var_B48]
 * 0000000140367E8C: mov     rcx, [rax+690h]
 * 0000000140367E93: mov     [r15+rcx], r11
 * 0000000140367E97: mov     rax, [rbp+0B70h+var_B48]
 * 0000000140367E9B: mov     r10, [rax+6A0h]
 * 0000000140367EA2: mov     [r15+r10], r11
 * 0000000140367EA6: mov     rcx, [rbp+0B70h+var_B48]
 * 0000000140367EAA: mov     rcx, [rcx+158h]; Target
 * 0000000140367EB1: call    KeGuardCheckICall
 * 0000000140367EB6: mov     rax, [rbp+0B70h+var_B48]
 * 0000000140367EBA: mov     r9, rbx
 * 0000000140367EBD: mov     [rsp+0C70h+var_C40], rsi
 * 0000000140367EC2: mov     r8, rdi
 * 0000000140367EC5: mov     rdx, r14
 * 0000000140367EC8: mov     ecx, 109h
 * 0000000140367ECD: mov     r10, [rax+158h]
 * 0000000140367ED4: mov     [rsp+0C70h+var_C48], r10
 * 0000000140367ED9: mov     [rsp+0C70h+BugCheckParameter4], r13
 * 0000000140367EDE: call    SdbpCheckDll
 */
