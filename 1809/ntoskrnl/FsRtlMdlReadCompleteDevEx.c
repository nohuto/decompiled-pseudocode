/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140332010
 * Callers:
 *     KiDecodeMcaFault @ 0x14019F6E0 (KiDecodeMcaFault.c)
 *     sub_1401AD6E0 @ 0x1401AD6E0 (sub_1401AD6E0.c)
 *     FsRtlUninitializeSmallMcb @ 0x14034A8E0 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     sub_1401AD8FC @ 0x1401AD8FC (sub_1401AD8FC.c)
 *     sub_1401AD9DC @ 0x1401AD9DC (sub_1401AD9DC.c)
 *     sub_1401AE904 @ 0x1401AE904 (sub_1401AE904.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     sub_140345BE8 @ 0x140345BE8 (sub_140345BE8.c)
 *     sub_140347B4C @ 0x140347B4C (sub_140347B4C.c)
 *     sub_1403485B4 @ 0x1403485B4 (sub_1403485B4.c)
 *     sub_140348E50 @ 0x140348E50 (sub_140348E50.c)
 *     KiGetGdtIdt @ 0x14034A7B0 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x14034A7C0 (KiGetLdtr.c)
 *     KiGetTr @ 0x14034A7D0 (KiGetTr.c)
 *     KiErrata704Present @ 0x14034A7E0 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x14034A890 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x14034AB40 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x14034AB50 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x14034ACEC (RtlInitMinimalBarrier.c)
 *     sub_14098EFA4 @ 0x14098EFA4 (sub_14098EFA4.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140332010
 * Reason: Hex-Rays returned no pseudocode for 0x140332010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140332010: mov     rax, rsp
 * 0000000140332013: mov     [rax+10h], rbx
 * 0000000140332017: mov     [rax+18h], rsi
 * 000000014033201B: mov     [rax+20h], rdi
 * 000000014033201F: mov     [rax+8], rcx
 * 0000000140332023: push    rbp
 * 0000000140332024: push    r12
 * 0000000140332026: push    r13
 * 0000000140332028: push    r14
 * 000000014033202A: push    r15
 * 000000014033202C: sub     rsp, 10D0h
 * 0000000140332033: lea     rbp, [rax-1028h]
 * 000000014033203A: and     rbp, 0FFFFFFFFFFFFFF80h
 * 000000014033203E: mov     eax, [rcx+970h]
 * 0000000140332044: xor     r8d, r8d
 * 0000000140332047: mov     r12, rcx
 * 000000014033204A: mov     [rbp+20F0h+var_1900], rcx
 * 0000000140332051: mov     ecx, 110000h
 * 0000000140332056: mov     r9d, 130h
 * 000000014033205C: and     eax, ecx
 * 000000014033205E: mov     r11d, 0FFFFFFF8h
 * 0000000140332064: lea     esi, [r8+1]
 * 0000000140332068: mov     r10d, 0FFFFFFFFh
 * 000000014033206E: cmp     eax, ecx
 * 0000000140332070: jz      loc_14033213E
 * 0000000140332076: mov     ecx, r9d
 * 0000000140332079: lea     rax, [rbp+20F0h+var_13F0]
 * 0000000140332080: lea     edx, [rsi+25h]
 * 0000000140332083: mov     [rax], r8
 * 0000000140332086: add     ecx, r11d
 * 0000000140332089: add     rax, 8
 * 000000014033208D: sub     rdx, rsi
 * 0000000140332090: jnz     short loc_140332083
 * 0000000140332092: test    ecx, ecx
 * 0000000140332094: jz      short loc_1403320A1
 * 0000000140332096: mov     [rax], r8b
 * 0000000140332099: add     rax, rsi
 * 000000014033209C: add     ecx, r10d
 * 000000014033209F: jnz     short loc_140332096
 * 00000001403320A1: movups  xmm0, xmmword ptr [r12+830h]
 * 00000001403320AA: lea     rax, [rbp+20F0h+var_13F0]
 * 00000001403320B1: movdqu  [rbp+20F0h+var_13E0], xmm0
 * 00000001403320B9: movups  xmm1, xmmword ptr [r12+840h]
 * 00000001403320C2: movdqu  [rbp+20F0h+var_13D0], xmm1
 * 00000001403320CA: movups  xmm0, xmmword ptr [r12+850h]
 * 00000001403320D3: mov     [rbp+20F0h+var_1D4E], rax
 * 00000001403320DA: lea     rax, [r12+860h]
 * 00000001403320E2: mov     rcx, rax
 * 00000001403320E5: mov     word ptr [rbp+20F0h+var_13E0], ax
 * 00000001403320EC: shr     rcx, 10h
 * 00000001403320F0: shr     rax, 20h
 * 00000001403320F4: mov     dword ptr [rbp+20F0h+var_13E0+8], eax
 * 00000001403320FA: movdqu  [rbp+20F0h+var_12D0], xmm0
 * 0000000140332102: mov     word ptr [rbp+20F0h+var_1D50], r9w
 * 000000014033210A: mov     word ptr [rbp+20F0h+var_13E0+6], cx
 * 0000000140332111: cli
 * 0000000140332112: xor     eax, eax
 * 0000000140332114: cmp     [r12+970h], eax
 * 000000014033211C: jge     short loc_140332124
 * 000000014033211E: mov     dr7, rax
 * 0000000140332121: sti
 * 0000000140332122: jmp     short loc_140332140
 * 0000000140332124: sidt    fword ptr [rbp+20F0h+var_1BC0]
 * 000000014033212B: lidt    fword ptr [rbp+20F0h+var_1D50]
 * 0000000140332132: mov     dr7, rax
 * 0000000140332135: lidt    fword ptr [rbp+20F0h+var_1BC0]
 * 000000014033213C: jmp     short loc_140332121
 * 000000014033213E: xor     eax, eax
 * 0000000140332140: test    dword ptr [r12+974h], 100h
 * 000000014033214C: mov     [rbp+20F0h+var_2038], rax
 * 0000000140332153: jz      short loc_14033216E
 * 0000000140332155: lea     rcx, [rsp+10F8h]
 * 000000014033215D: mov     rax, [rcx]
 * 0000000140332160: mov     [rbp+20F0h+var_2038], rax
 * 0000000140332167: xor     eax, eax
 * 0000000140332169: mov     [rcx], rax
 * 000000014033216C: jmp     short loc_140332170
 * 000000014033216E: xor     eax, eax
 * 0000000140332170: mov     edi, 40h ; '@'
 * 0000000140332175: mov     [r12+810h], eax
 * 000000014033217D: test    dword ptr [r12+970h], 40000000h
 * 0000000140332189: mov     r14, 7010008004002001h
 * 0000000140332193: lea     r13d, [rdi-20h]
 * 0000000140332197: lea     r15d, [rdi-3Ch]
 * 000000014033219B: jz      short loc_1403321AD
 * 000000014033219D: xor     eax, eax
 * 000000014033219F: cmp     [r12+0A48h], rax
 * 00000001403321A7: jnz     loc_140332437
 * 00000001403321AD: mov     r14, [r12+7A0h]
 * 00000001403321B5: lea     rbx, [r12+780h]
 * 00000001403321BD: mov     [rbp+20F0h+var_20F0], r14
 * 00000001403321C1: lea     rdx, [rbp+20F0h+var_15E0]
 * 00000001403321C8: mov     rcx, rbx
 * 00000001403321CB: mov     r8d, r13d
 * 00000001403321CE: mov     r9, r15
 * 00000001403321D1: mov     rax, [rcx]
 * 00000001403321D4: add     r8d, r11d
 * 00000001403321D7: mov     [rdx], rax
 * 00000001403321DA: add     rcx, 8
 * 00000001403321DE: add     rdx, 8
 * 00000001403321E2: sub     r9, rsi
 * 00000001403321E5: jnz     short loc_1403321D1
 * 00000001403321E7: xor     eax, eax
 * 00000001403321E9: test    r8d, r8d
 * 00000001403321EC: jz      short loc_1403321FF
 * 00000001403321EE: mov     al, [rcx]
 * 00000001403321F0: add     rcx, rsi
 * 00000001403321F3: mov     [rdx], al
 * 00000001403321F5: add     rdx, rsi
 * 00000001403321F8: add     r8d, r10d
 * 00000001403321FB: jnz     short loc_1403321EE
 * 00000001403321FD: xor     eax, eax
 * 00000001403321FF: mov     [r12+7A0h], rax
 * 0000000140332207: mov     ecx, r13d
 * 000000014033220A: mov     [r12+810h], eax
 * 0000000140332212: mov     rdx, r15
 * 0000000140332215: mov     rax, rbx
 * 0000000140332218: xor     r8d, r8d
 * 000000014033221B: mov     [rax], r8
 * 000000014033221E: add     ecx, r11d
 * 0000000140332221: add     rax, 8
 * 0000000140332225: sub     rdx, rsi
 * 0000000140332228: jnz     short loc_14033221B
 * 000000014033222A: test    ecx, ecx
 * 000000014033222C: jz      short loc_140332239
 * 000000014033222E: mov     [rax], r8b
 * 0000000140332231: add     rax, rsi
 * 0000000140332234: add     ecx, r10d
 * 0000000140332237: jnz     short loc_14033222E
 * 0000000140332239: mov     eax, [r12+7CCh]
 * 0000000140332241: mov     r9, r12
 * 0000000140332244: add     [r12+810h], eax
 * 000000014033224C: mov     rax, r12
 * 000000014033224F: mov     r10d, [r12+7CCh]
 * 0000000140332257: mov     r11d, [r12+7FCh]
 * 000000014033225F: mov     rsi, [r12+800h]
 * 0000000140332267: lea     rcx, [r12+r10]
 * 000000014033226B: cmp     r12, rcx
 * 000000014033226E: jnb     short loc_14033227B
 * 0000000140332270: prefetchnta byte ptr [rax]
 * 0000000140332273: add     rax, rdi
 * 0000000140332276: cmp     rax, rcx
 * 0000000140332279: jb      short loc_140332270
 * 000000014033227B: mov     edi, r10d
 * 000000014033227E: mov     r8, rsi
 * 0000000140332281: shr     edi, 7
 * 0000000140332284: test    edi, edi
 * 0000000140332286: jz      short loc_140332301
 * 0000000140332288: mov     r14, 7010008004002001h
 * 0000000140332292: mov     edx, 8
 * 0000000140332297: lea     r12d, [rdx-7]
 * 000000014033229B: mov     rax, [r9]
 * 000000014033229E: mov     ecx, r11d
 * 00000001403322A1: xor     rax, r8
 * 00000001403322A4: mov     r8, [r9+8]
 * 00000001403322A8: rol     rax, cl
 * 00000001403322AB: add     r9, 10h
 * 00000001403322AF: xor     r8, rax
 * 00000001403322B2: rol     r8, cl
 * 00000001403322B5: sub     rdx, r12
 * 00000001403322B8: jnz     short loc_14033229B
 * 00000001403322BA: mov     r12, [rsp+10F0h+arg_0]
 * 00000001403322C2: mov     rcx, r9
 * 00000001403322C5: sub     rcx, r12
 * 00000001403322C8: xor     rcx, rsi
 * 00000001403322CB: mov     rax, rcx
 * 00000001403322CE: rol     rax, 11h
 * 00000001403322D2: xor     rcx, rax
 * 00000001403322D5: mov     rax, r14
 * 00000001403322D8: mul     rcx
 * 00000001403322DB: xor     eax, edx
 * 00000001403322DD: mov     [rbp+20F0h+var_1850], rdx
 * 00000001403322E4: xor     r11d, eax
 * 00000001403322E7: mov     eax, 1
 * 00000001403322EC: and     r11d, 3Fh
 * 00000001403322F0: cmovz   r11d, eax
 * 00000001403322F4: mov     eax, 0FFFFFFFFh
 * 00000001403322F9: add     edi, eax
 * 00000001403322FB: jnz     short loc_140332292
 * 00000001403322FD: mov     r14, [rbp+20F0h+var_20F0]
 * 0000000140332301: and     r10d, 7Fh
 * 0000000140332305: mov     esi, 1
 * 000000014033230A: cmp     r10d, 8
 * 000000014033230E: jb      short loc_14033232D
 * 0000000140332310: mov     edx, r10d
 * 0000000140332313: shr     rdx, 3
 * 0000000140332317: xor     r8, [r9]
 * 000000014033231A: mov     ecx, r11d
 * 000000014033231D: rol     r8, cl
 * 0000000140332320: add     r9, 8
 * 0000000140332324: add     r10d, 0FFFFFFF8h
 * 0000000140332328: sub     rdx, rsi
 * 000000014033232B: jnz     short loc_140332317
 * 000000014033232D: test    r10d, r10d
 * 0000000140332330: jz      short loc_140332355
 * 0000000140332332: mov     r12d, 0FFFFFFFFh
 * 0000000140332338: movzx   eax, byte ptr [r9]
 * 000000014033233C: mov     ecx, r11d
 * 000000014033233F: xor     r8, rax
 * 0000000140332342: add     r9, rsi
 * 0000000140332345: rol     r8, cl
 * 0000000140332348: add     r10d, r12d
 * 000000014033234B: jnz     short loc_140332338
 * 000000014033234D: mov     r12, [rsp+10F0h+arg_0]
 * 0000000140332355: mov     [r12+7A0h], r14
 * 000000014033235D: lea     rcx, [rbp+20F0h+var_15E0]
 * 0000000140332364: mov     edx, r13d
 * 0000000140332367: mov     r9, r15
 * 000000014033236A: mov     r11d, 0FFFFFFF8h
 * 0000000140332370: mov     rax, [rcx]
 * 0000000140332373: add     edx, r11d
 * 0000000140332376: mov     [rbx], rax
 * 0000000140332379: add     rcx, 8
 * 000000014033237D: add     rbx, 8
 * 0000000140332381: sub     r9, rsi
 * 0000000140332384: jnz     short loc_140332370
 * 0000000140332386: test    edx, edx
 * 0000000140332388: jz      short loc_14033239F
 * 000000014033238A: mov     r10d, 0FFFFFFFFh
 * 0000000140332390: mov     al, [rcx]
 * 0000000140332392: add     rcx, rsi
 * 0000000140332395: mov     [rbx], al
 * 0000000140332397: add     rbx, rsi
 * 000000014033239A: add     edx, r10d
 * 000000014033239D: jnz     short loc_140332390
 * 000000014033239F: cmp     [r12+7A0h], r8
 * 00000001403323A7: jz      loc_14033242D
 * 00000001403323AD: mov     rax, [r12+580h]
 * 00000001403323B5: mov     ecx, [r12+7CCh]
 * 00000001403323BD: mov     [rax], r12
 * 00000001403323C0: mov     [rax+10h], ecx
 * 00000001403323C3: mov     eax, [r12+8D8h]
 * 00000001403323CB: mov     rcx, [r12+7A0h]
 * 00000001403323D3: test    eax, eax
 * 00000001403323D5: jnz     short loc_14033242D
 * 00000001403323D7: mov     rax, [r12+580h]
 * 00000001403323DF: xor     rcx, r8
 * 00000001403323E2: mov     [rax+18h], rcx
 * 00000001403323E6: mov     eax, [r12+8D8h]
 * 00000001403323EE: test    eax, eax
 * 00000001403323F0: jnz     short loc_14033242D
 * 00000001403323F2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403323FC: add     rax, r12
 * 00000001403323FF: mov     [r12+8E0h], rax
 * 0000000140332407: xor     eax, eax
 * 0000000140332409: mov     [r12+8E8h], rax
 * 0000000140332411: mov     qword ptr [r12+8F0h], 101h
 * 000000014033241D: mov     [r12+8F8h], r8
 * 0000000140332425: mov     [r12+8D8h], esi
 * 000000014033242D: mov     r14, 7010008004002001h
 * 0000000140332437: or      [r12+970h], r15d
 * 000000014033243F: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140332446: add     [r12+81Ch], esi
 * 000000014033244E: mov     r8, 0ABCC77118461CEFDh
 * 0000000140332458: mov     eax, [r12+970h]
 * 0000000140332460: test    al, 8
 * 0000000140332462: jz      loc_140332878
 * 0000000140332468: bt      eax, 17h
 * 000000014033246C: jb      loc_140332878
 * 0000000140332472: mov     eax, [r12+974h]
 * 000000014033247A: mov     r10, [r12+0A40h]
 * 0000000140332482: mov     r13d, [r12+7CCh]
 * 000000014033248A: mov     r11, [r12+9D8h]
 * 0000000140332492: mov     r15d, [r12+7F0h]
 * 000000014033249A: mov     [rbp+20F0h+var_20F0], r10
 * 000000014033249E: and     eax, esi
 * 00000001403324A0: jz      short loc_1403324AA
 * 00000001403324A2: mov     r11, [r12+5C8h]
 * 00000001403324AA: mov     rbx, [rsp+10F0h+arg_0]
 * 00000001403324B2: mov     r12, [r12+158h]
 * 00000001403324BA: mov     [rbp+20F0h+var_20D8], r12
 * 00000001403324BE: mov     rax, [rbx+2C0h]
 * 00000001403324C5: mov     [rbp+20F0h+var_2080], rax
 * 00000001403324C9: mov     rax, [rbx+338h]
 * 00000001403324D0: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403324D4: rdtsc
 * 00000001403324D6: shl     rdx, 20h
 * 00000001403324DA: mov     r9, rdi
 * 00000001403324DD: or      rax, rdx
 * 00000001403324E0: mov     rcx, rax
 * 00000001403324E3: ror     rax, 3
 * 00000001403324E7: xor     rcx, rax
 * 00000001403324EA: mov     rax, r14
 * 00000001403324ED: mul     rcx
 * 00000001403324F0: mov     rcx, rdx
 * 00000001403324F3: mov     [rbp+20F0h+var_1848], rdx
 * 00000001403324FA: xor     rcx, rax
 * 00000001403324FD: mov     rax, r8
 * 0000000140332500: mul     rcx
 * 0000000140332503: shr     rdx, 1Ah
 * 0000000140332507: imul    rax, rdx, 5F5E100h
 * 000000014033250E: sub     rcx, rax
 * 0000000140332511: sub     r9, rcx
 * 0000000140332514: mov     [rbp+20F0h+var_1EF0], r9
 * 000000014033251B: mov     r8d, [rbx+970h]
 * 0000000140332522: bt      r8d, 1Ah
 * 0000000140332527: jnb     loc_1403325CE
 * 000000014033252D: rdtsc
 * 000000014033252F: shl     rdx, 20h
 * 0000000140332533: or      rax, rdx
 * 0000000140332536: mov     rcx, rax
 * 0000000140332539: ror     rax, 3
 * 000000014033253D: xor     rcx, rax
 * 0000000140332540: mov     rax, r14
 * 0000000140332543: mul     rcx
 * 0000000140332546: mov     rcx, rdx
 * 0000000140332549: mov     [rbp+20F0h+var_1840], rdx
 * 0000000140332550: xor     rcx, rax
 * 0000000140332553: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014033255D: mul     rcx
 * 0000000140332560: shr     rdx, 3
 * 0000000140332564: lea     rax, [rdx+rdx*4]
 * 0000000140332568: add     rax, rax
 * 000000014033256B: sub     rcx, rax
 * 000000014033256E: mov     eax, 2
 * 0000000140332573: cmp     rcx, rax
 * 0000000140332576: jnb     short loc_1403325CE
 * 0000000140332578: rdtsc
 * 000000014033257A: shl     rdx, 20h
 * 000000014033257E: or      rax, rdx
 * 0000000140332581: mov     rcx, rax
 * 0000000140332584: ror     rax, 3
 * 0000000140332588: xor     rcx, rax
 * 000000014033258B: mov     rax, r14
 * 000000014033258E: mul     rcx
 * 0000000140332591: mov     rcx, rdx
 * 0000000140332594: mov     [rbp+20F0h+var_1838], rdx
 * 000000014033259B: xor     rcx, rax
 * 000000014033259E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001403325A8: mul     rcx
 * 00000001403325AB: shr     rdx, 3
 * 00000001403325AF: lea     rax, [rdx+rdx*4]
 * 00000001403325B3: add     rax, rax
 * 00000001403325B6: sub     rcx, rax
 * 00000001403325B9: add     rcx, rsi
 * 00000001403325BC: imul    rcx, r9
 * 00000001403325C0: mov     [rbp+20F0h+var_1EF0], rcx
 * 00000001403325C7: mov     r8d, [rbx+970h]
 * 00000001403325CE: xor     eax, eax
 * 00000001403325D0: mov     esi, r15d
 * 00000001403325D3: mov     ebx, eax
 * 00000001403325D5: mov     r14d, eax
 * 00000001403325D8: lea     ecx, [rax+2]
 * 00000001403325DB: test    cl, r8b
 * 00000001403325DE: cmovnz  esi, r13d
 * 00000001403325E2: test    r8b, r8b
 * 00000001403325E5: js      short loc_1403325EF
 * 00000001403325E7: mov     r13d, eax
 * 00000001403325EA: jmp     loc_1403326CD
 * 00000001403325EF: mov     r9d, 1
 * 00000001403325F5: mov     r13d, r9d
 * 00000001403325F8: rdtsc
 * 00000001403325FA: shl     rdx, 20h
 * 00000001403325FE: or      rax, rdx
 * 0000000140332601: mov     rcx, rax
 * 0000000140332604: ror     rax, 3
 * 0000000140332608: xor     rcx, rax
 * 000000014033260B: mov     rax, 7010008004002001h
 * 0000000140332615: mul     rcx
 * 0000000140332618: mov     ecx, 14Eh
 * 000000014033261D: mov     rbx, rdx
 * 0000000140332620: mov     [rbp+20F0h+var_1830], rdx
 * 0000000140332627: mov     rdx, [rsp+10F0h+arg_0]
 * 000000014033262F: xor     rbx, rax
 * 0000000140332632: mov     r14, rbx
 * 0000000140332635: mov     r8, rbx
 * 0000000140332638: xor     r14, rdx
 * 000000014033263B: lea     rax, [rdx+0A68h]
 * 0000000140332642: xor     [rax], r8
 * 0000000140332645: lea     rax, [rax-8]
 * 0000000140332649: ror     r8, cl
 * 000000014033264C: sub     ecx, r9d
 * 000000014033264F: jnz     short loc_140332642
 * 0000000140332651: lea     r9, [r15-0A70h]
 * 0000000140332658: mov     r12, r15
 * 000000014033265B: shr     r9, 3
 * 000000014033265F: test    r9d, r9d
 * 0000000140332662: jz      short loc_1403326A0
 * 0000000140332664: movsxd  r10, r9d
 * 0000000140332667: mov     rdi, r13
 * 000000014033266A: add     r10, 14Dh
 * 0000000140332671: lea     r10, [rdx+r10*8]
 * 0000000140332675: mov     rdx, [r10]
 * 0000000140332678: lea     rax, [r14+r14]
 * 000000014033267C: mov     ecx, r9d
 * 000000014033267F: lea     r10, [r10-8]
 * 0000000140332683: ror     rdx, cl
 * 0000000140332686: mov     r14, rdx
 * 0000000140332689: xor     r14, rax
 * 000000014033268C: sub     r9d, edi
 * 000000014033268F: jnz     short loc_140332675
 * 0000000140332691: mov     r10, [rbp+20F0h+var_20F0]
 * 0000000140332695: mov     r12, r15
 * 0000000140332698: mov     rdx, [rsp+10F0h+arg_0]
 * 00000001403326A0: mov     ecx, esi
 * 00000001403326A2: add     rdx, r12
 * 00000001403326A5: sub     ecx, r15d
 * 00000001403326A8: shr     ecx, 3
 * 00000001403326AB: test    ecx, ecx
 * 00000001403326AD: jz      short loc_1403326C9
 * 00000001403326AF: lea     rdx, [rdx+rcx*8]
 * 00000001403326B3: mov     r9, r13
 * 00000001403326B6: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 00000001403326BA: xor     [rdx], r8
 * 00000001403326BD: lea     rdx, [rdx-8]
 * 00000001403326C1: ror     r8, cl
 * 00000001403326C4: sub     ecx, r9d
 * 00000001403326C7: jnz     short loc_1403326BA
 * 00000001403326C9: mov     r12, [rbp+20F0h+var_20D8]
 * 00000001403326CD: test    r10, r10
 * 00000001403326D0: jz      short loc_1403326F9
 * 00000001403326D2: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403326D6: lea     r8, [rbp+20F0h+var_1EF0]
 * 00000001403326DD: mov     r9, r12
 * 00000001403326E0: mov     [rsp+10F0h+BugCheckParameter4], r10
 * 00000001403326E5: mov     r12, [rsp+10F0h+arg_0]
 * 00000001403326ED: mov     edx, esi
 * 00000001403326EF: mov     rcx, r12
 * 00000001403326F2: call    KeGuardDispatchICall
 * 00000001403326F7: jmp     short loc_140332739
 * 00000001403326F9: xor     edx, edx
 * 00000001403326FB: test    r11, r11
 * 00000001403326FE: jnz     short loc_140332713
 * 0000000140332700: lea     r8, [rbp+20F0h+var_1EF0]
 * 0000000140332707: xor     ecx, ecx
 * 0000000140332709: mov     rax, r12
 * 000000014033270C: call    KeGuardDispatchICall
 * 0000000140332711: jmp     short loc_140332731
 * 0000000140332713: lea     rax, [rbp+20F0h+var_1EF0]
 * 000000014033271A: xor     r9d, r9d
 * 000000014033271D: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 0000000140332722: xor     r8d, r8d
 * 0000000140332725: mov     rax, [rbp+20F0h+var_2080]
 * 0000000140332729: mov     rcx, r11
 * 000000014033272C: call    KeGuardDispatchICall
 * 0000000140332731: mov     r12, [rsp+10F0h+arg_0]
 * 0000000140332739: xor     eax, eax
 * 000000014033273B: test    r13d, r13d
 * 000000014033273E: jz      loc_14033286C
 * 0000000140332744: mov     r8, rbx
 * 0000000140332747: lea     rax, [r12+0A68h]
 * 000000014033274F: xor     r8, r12
 * 0000000140332752: mov     ecx, 14Eh
 * 0000000140332757: mov     r13d, 1
 * 000000014033275D: xor     [rax], rbx
 * 0000000140332760: lea     rax, [rax-8]
 * 0000000140332764: ror     rbx, cl
 * 0000000140332767: sub     ecx, r13d
 * 000000014033276A: jnz     short loc_14033275D
 * 000000014033276C: lea     r9, [r15-0A70h]
 * 0000000140332773: mov     r11, r15
 * 0000000140332776: shr     r9, 3
 * 000000014033277A: test    r9d, r9d
 * 000000014033277D: jz      short loc_1403327AC
 * 000000014033277F: movsxd  r10, r9d
 * 0000000140332782: add     r10, 14Dh
 * 0000000140332789: lea     r10, [r12+r10*8]
 * 000000014033278D: mov     rdx, [r10]
 * 0000000140332790: lea     rax, [r8+r8]
 * 0000000140332794: mov     ecx, r9d
 * 0000000140332797: lea     r10, [r10-8]
 * 000000014033279B: ror     rdx, cl
 * 000000014033279E: mov     r8, rdx
 * 00000001403327A1: xor     r8, rax
 * 00000001403327A4: sub     r9d, r13d
 * 00000001403327A7: jnz     short loc_14033278D
 * 00000001403327A9: mov     r11, r15
 * 00000001403327AC: sub     esi, r15d
 * 00000001403327AF: lea     rcx, [r11+r12]
 * 00000001403327B3: shr     esi, 3
 * 00000001403327B6: test    esi, esi
 * 00000001403327B8: jz      short loc_1403327D4
 * 00000001403327BA: mov     eax, esi
 * 00000001403327BC: dec     rax
 * 00000001403327BF: lea     rdx, [rcx+rax*8]
 * 00000001403327C3: xor     [rdx], rbx
 * 00000001403327C6: mov     ecx, esi
 * 00000001403327C8: ror     rbx, cl
 * 00000001403327CB: lea     rdx, [rdx-8]
 * 00000001403327CF: sub     esi, r13d
 * 00000001403327D2: jnz     short loc_1403327C3
 * 00000001403327D4: cmp     r8, r14
 * 00000001403327D7: jz      loc_140332861
 * 00000001403327DD: mov     rax, [r12+580h]
 * 00000001403327E5: mov     ecx, [r12+7CCh]
 * 00000001403327ED: mov     [rax], r12
 * 00000001403327F0: mov     [rax+10h], ecx
 * 00000001403327F3: mov     eax, [r12+8D8h]
 * 00000001403327FB: test    eax, eax
 * 00000001403327FD: jnz     short loc_140332861
 * 00000001403327FF: mov     rax, [r12+580h]
 * 0000000140332807: mov     rcx, r8
 * 000000014033280A: xor     rcx, r14
 * 000000014033280D: mov     [rax+18h], rcx
 * 0000000140332811: mov     eax, [r12+8D8h]
 * 0000000140332819: test    eax, eax
 * 000000014033281B: jnz     short loc_140332861
 * 000000014033281D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140332827: mov     r14, r13
 * 000000014033282A: add     rax, r12
 * 000000014033282D: mov     [r12+8E0h], rax
 * 0000000140332835: xor     eax, eax
 * 0000000140332837: mov     [r12+8E8h], rax
 * 000000014033283F: mov     qword ptr [r12+8F0h], 10Eh
 * 000000014033284B: mov     [r12+8F8h], r8
 * 0000000140332853: mov     [r12+8D8h], r14d
 * 000000014033285B: lea     r15d, [rax+4]
 * 000000014033285F: jmp     short loc_140332880
 * 0000000140332861: mov     r15d, 4
 * 0000000140332867: mov     r14, r13
 * 000000014033286A: jmp     short loc_14033287E
 * 000000014033286C: mov     r15d, 4
 * 0000000140332872: lea     r14d, [r15-3]
 * 0000000140332876: jmp     short loc_140332880
 * 0000000140332878: mov     r14d, 1
 * 000000014033287E: xor     eax, eax
 * 0000000140332880: mov     esi, [r12+0C4h]
 * 0000000140332888: lea     rcx, [r12+610h]
 * 0000000140332890: mov     [r12+0C4h], eax
 * 0000000140332898: mov     r9, r12
 * 000000014033289B: add     dword ptr [r12+810h], 610h
 * 00000001403328A7: mov     rax, r12
 * 00000001403328AA: mov     r10d, [r12+7FCh]
 * 00000001403328B2: mov     r11, [r12+800h]
 * 00000001403328BA: cmp     r12, rcx
 * 00000001403328BD: jnb     short loc_1403328CF
 * 00000001403328BF: mov     edx, 40h ; '@'
 * 00000001403328C4: prefetchnta byte ptr [rax]
 * 00000001403328C7: add     rax, rdx
 * 00000001403328CA: cmp     rax, rcx
 * 00000001403328CD: jb      short loc_1403328C4
 * 00000001403328CF: mov     r8, r11
 * 00000001403328D2: mov     ebx, 0Ch
 * 00000001403328D7: mov     rdi, 7010008004002001h
 * 00000001403328E1: mov     r13d, 0FFFFFFFFh
 * 00000001403328E7: mov     edx, 8
 * 00000001403328EC: mov     rax, [r9]
 * 00000001403328EF: mov     ecx, r10d
 * 00000001403328F2: xor     rax, r8
 * 00000001403328F5: mov     r8, [r9+8]
 * 00000001403328F9: rol     rax, cl
 * 00000001403328FC: add     r9, 10h
 * 0000000140332900: xor     r8, rax
 * 0000000140332903: rol     r8, cl
 * 0000000140332906: sub     rdx, r14
 * 0000000140332909: jnz     short loc_1403328EC
 * 000000014033290B: mov     rcx, r9
 * 000000014033290E: sub     rcx, r12
 * 0000000140332911: xor     rcx, r11
 * 0000000140332914: mov     rax, rcx
 * 0000000140332917: rol     rax, 11h
 * 000000014033291B: xor     rcx, rax
 * 000000014033291E: mov     rax, rdi
 * 0000000140332921: mul     rcx
 * 0000000140332924: xor     r10d, eax
 * 0000000140332927: mov     [rbp+20F0h+var_1828], rdx
 * 000000014033292E: xor     r10d, edx
 * 0000000140332931: and     r10d, 3Fh
 * 0000000140332935: cmovz   r10d, r14d
 * 0000000140332939: add     ebx, r13d
 * 000000014033293C: jnz     short loc_1403328E7
 * 000000014033293E: lea     edx, [rbx+10h]
 * 0000000140332941: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140332948: lea     r11d, [rbx+2]
 * 000000014033294C: xor     r8, [r9]
 * 000000014033294F: mov     ecx, r10d
 * 0000000140332952: rol     r8, cl
 * 0000000140332955: add     r9, 8
 * 0000000140332959: add     edx, 0FFFFFFF8h
 * 000000014033295C: sub     r11, r14
 * 000000014033295F: jnz     short loc_14033294C
 * 0000000140332961: test    edx, edx
 * 0000000140332963: jz      short loc_14033297A
 * 0000000140332965: movzx   eax, byte ptr [r9]
 * 0000000140332969: mov     ecx, r10d
 * 000000014033296C: xor     r8, rax
 * 000000014033296F: add     r9, r14
 * 0000000140332972: rol     r8, cl
 * 0000000140332975: add     edx, r13d
 * 0000000140332978: jnz     short loc_140332965
 * 000000014033297A: mov     [r12+0C4h], esi
 * 0000000140332982: cmp     [r12+0A00h], r8
 * 000000014033298A: jz      loc_140332A15
 * 0000000140332990: mov     rax, [r12+580h]
 * 0000000140332998: mov     ecx, [r12+7CCh]
 * 00000001403329A0: mov     [rax], r12
 * 00000001403329A3: mov     [rax+10h], ecx
 * 00000001403329A6: mov     eax, [r12+8D8h]
 * 00000001403329AE: mov     rdx, [r12+0A00h]
 * 00000001403329B6: test    eax, eax
 * 00000001403329B8: jnz     short loc_140332A15
 * 00000001403329BA: mov     rax, [r12+580h]
 * 00000001403329C2: mov     rcx, r8
 * 00000001403329C5: xor     rcx, rdx
 * 00000001403329C8: mov     [rax+18h], rcx
 * 00000001403329CC: mov     eax, [r12+8D8h]
 * 00000001403329D4: test    eax, eax
 * 00000001403329D6: jnz     short loc_140332A15
 * 00000001403329D8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403329E2: add     rax, r12
 * 00000001403329E5: mov     [r12+8E0h], rax
 * 00000001403329ED: xor     eax, eax
 * 00000001403329EF: mov     [r12+8E8h], rax
 * 00000001403329F7: mov     qword ptr [r12+8F0h], 109h
 * 0000000140332A03: mov     [r12+8F8h], r8
 * 0000000140332A0B: mov     [r12+8D8h], r14d
 * 0000000140332A13: jmp     short loc_140332A17
 * 0000000140332A15: xor     eax, eax
 * 0000000140332A17: mov     ecx, [r12+950h]
 * 0000000140332A1F: mov     r9d, 5
 * 0000000140332A25: mov     [rbp+20F0h+var_20E0], r12
 * 0000000140332A29: mov     rsi, r12
 * 0000000140332A2C: mov     [rbp+20F0h+var_2018], eax
 * 0000000140332A32: mov     r10, 2E8BA2E8BA2E8BA3h
 * 0000000140332A3C: mov     [rbp+20F0h+var_20C0], eax
 * 0000000140332A3F: lea     r8d, [r9+1]
 * 0000000140332A43: cmp     ecx, r13d
 * 0000000140332A46: jz      loc_140332B45
 * 0000000140332A4C: mov     rax, [r12+270h]
 * 0000000140332A54: call    KeGuardDispatchICall
 * 0000000140332A59: mov     rbx, rax
 * 0000000140332A5C: test    rax, rax
 * 0000000140332A5F: jnz     short loc_140332A7C
 * 0000000140332A61: mov     rax, [r12+278h]
 * 0000000140332A69: xor     ecx, ecx
 * 0000000140332A6B: call    KeGuardDispatchICall
 * 0000000140332A70: mov     rbx, rax
 * 0000000140332A73: test    rax, rax
 * 0000000140332A76: jz      loc_140332B31
 * 0000000140332A7C: mov     rax, [r12+288h]
 * 0000000140332A84: lea     rdx, [rbp+20F0h+var_1B40]
 * 0000000140332A8B: mov     rcx, rbx
 * 0000000140332A8E: call    KeGuardDispatchICall
 * 0000000140332A93: mov     r14d, eax
 * 0000000140332A96: test    eax, eax
 * 0000000140332A98: jns     short loc_140332AAE
 * 0000000140332A9A: mov     rax, [r12+280h]
 * 0000000140332AA2: mov     rcx, rbx
 * 0000000140332AA5: call    KeGuardDispatchICall
 * 0000000140332AAA: xor     eax, eax
 * 0000000140332AAC: jmp     short loc_140332B1D
 * 0000000140332AAE: mov     [r12+960h], rbx
 * 0000000140332AB6: mov     rax, [r12+2B0h]
 * 0000000140332ABE: call    KeGuardDispatchICall
 * 0000000140332AC3: mov     rbx, rax
 * 0000000140332AC6: mov     rax, [r12+2D0h]
 * 0000000140332ACE: mov     rcx, rbx
 * 0000000140332AD1: call    KeGuardDispatchICall
 * 0000000140332AD6: mov     rdx, rax
 * 0000000140332AD9: test    rax, rax
 * 0000000140332ADC: jnz     short loc_140332AE3
 * 0000000140332ADE: mov     ecx, r15d
 * 0000000140332AE1: jmp     short loc_140332AF7
 * 0000000140332AE3: mov     rax, [r12+2E0h]
 * 0000000140332AEB: mov     rcx, rbx
 * 0000000140332AEE: call    KeGuardDispatchICall
 * 0000000140332AF3: xor     eax, eax
 * 0000000140332AF5: mov     ecx, eax
 * 0000000140332AF7: mov     eax, [r12+974h]
 * 0000000140332AFF: and     eax, 0FFFFFFFBh
 * 0000000140332B02: or      eax, ecx
 * 0000000140332B04: mov     [r12+974h], eax
 * 0000000140332B0C: add     dword ptr [r12+810h], 10000h
 * 0000000140332B18: xor     eax, eax
 * 0000000140332B1A: mov     r14d, eax
 * 0000000140332B1D: test    r14d, r14d
 * 0000000140332B20: js      short loc_140332B31
 * 0000000140332B22: mov     r13d, 1
 * 0000000140332B28: mov     [rbp+20F0h+var_20C0], r13d
 * 0000000140332B2C: jmp     loc_140332EAD
 * 0000000140332B31: mov     r9d, 5
 * 0000000140332B37: mov     r10, 2E8BA2E8BA2E8BA3h
 * 0000000140332B41: lea     r8d, [r9+1]
 * 0000000140332B45: mov     eax, [r12+974h]
 * 0000000140332B4D: test    al, 8
 * 0000000140332B4F: jz      loc_140332E9F
 * 0000000140332B55: bt      eax, 0Ch
 * 0000000140332B59: jb      loc_140332E9F
 * 0000000140332B5F: rdtsc
 * 0000000140332B61: shl     rdx, 20h
 * 0000000140332B65: mov     rbx, 7010008004002001h
 * 0000000140332B6F: or      rax, rdx
 * 0000000140332B72: mov     rcx, rax
 * 0000000140332B75: ror     rax, 3
 * 0000000140332B79: xor     rcx, rax
 * 0000000140332B7C: mov     rax, rbx
 * 0000000140332B7F: mul     rcx
 * 0000000140332B82: mov     [rbp+20F0h+var_1820], rdx
 * 0000000140332B89: xor     dl, al
 * 0000000140332B8B: test    dl, 3
 * 0000000140332B8E: jnz     loc_140332E9F
 * 0000000140332B94: rdtsc
 * 0000000140332B96: shl     rdx, 20h
 * 0000000140332B9A: or      rax, rdx
 * 0000000140332B9D: mov     rcx, rax
 * 0000000140332BA0: ror     rax, 3
 * 0000000140332BA4: xor     rcx, rax
 * 0000000140332BA7: mov     rax, rbx
 * 0000000140332BAA: mul     rcx
 * 0000000140332BAD: mov     rcx, rdx
 * 0000000140332BB0: mov     [rbp+20F0h+var_1818], rdx
 * 0000000140332BB7: xor     rcx, rax
 * 0000000140332BBA: mov     rax, r10
 * 0000000140332BBD: mul     rcx
 * 0000000140332BC0: shr     rdx, 1
 * 0000000140332BC3: imul    rax, rdx, 0Bh
 * 0000000140332BC7: sub     rcx, rax
 * 0000000140332BCA: cmp     ecx, r9d
 * 0000000140332BCD: ja      loc_140332C8B
 * 0000000140332BD3: jz      loc_140332C71
 * 0000000140332BD9: test    ecx, ecx
 * 0000000140332BDB: jz      short loc_140332C57
 * 0000000140332BDD: sub     ecx, 1
 * 0000000140332BE0: jz      short loc_140332C3E
 * 0000000140332BE2: sub     ecx, 1
 * 0000000140332BE5: jz      short loc_140332C24
 * 0000000140332BE7: cmp     ecx, 1
 * 0000000140332BEA: jz      short loc_140332C06
 * 0000000140332BEC: mov     [rbp+20F0h+var_1ED0], 67076494h
 * 0000000140332BF6: mov     r9d, [rbp+20F0h+var_1ED0]
 * 0000000140332BFD: rol     r9d, 4
 * 0000000140332C01: jmp     loc_140332DB0
 * 0000000140332C06: mov     [rbp+20F0h+var_1ECC], 0A8223938h
 * 0000000140332C10: mov     r9d, [rbp+20F0h+var_1ECC]
 * 0000000140332C17: xor     r9d, 3
 * 0000000140332C1B: ror     r9d, 0Fh
 * 0000000140332C1F: jmp     loc_140332DB0
 * 0000000140332C24: mov     [rbp+20F0h+var_1EC8], 85B5910Dh
 * 0000000140332C2E: mov     r9d, [rbp+20F0h+var_1EC8]
 * 0000000140332C35: ror     r9d, 2
 * 0000000140332C39: jmp     loc_140332DB0
 * 0000000140332C3E: mov     [rbp+20F0h+var_1EC4], 0B2AD31A1h
 * 0000000140332C48: mov     r9d, [rbp+20F0h+var_1EC4]
 * 0000000140332C4F: rol     r9d, 1
 * 0000000140332C52: jmp     loc_140332DB0
 * 0000000140332C57: mov     [rbp+20F0h+var_1EC0], 0D098D0D8h
 * 0000000140332C61: mov     r9d, [rbp+20F0h+var_1EC0]
 * 0000000140332C68: ror     r9d, 6
 * 0000000140332C6C: jmp     loc_140332DB0
 * 0000000140332C71: mov     [rbp+20F0h+var_1EBC], 288C49EDh
 * 0000000140332C7B: mov     r9d, [rbp+20F0h+var_1EBC]
 * 0000000140332C82: ror     r9d, 5
 * 0000000140332C86: jmp     loc_140332DB0
 * 0000000140332C8B: sub     ecx, r8d
 * 0000000140332C8E: jz      loc_140332D98
 * 0000000140332C94: sub     ecx, 1
 * 0000000140332C97: jz      loc_140332D81
 * 0000000140332C9D: sub     ecx, 1
 * 0000000140332CA0: jz      loc_140332D6A
 * 0000000140332CA6: cmp     ecx, 1
 * 0000000140332CA9: jz      loc_140332D4F
 * 0000000140332CAF: rdtsc
 * 0000000140332CB1: shl     rdx, 20h
 * 0000000140332CB5: or      rax, rdx
 * 0000000140332CB8: mov     rcx, rax
 * 0000000140332CBB: ror     rax, 3
 * 0000000140332CBF: xor     rcx, rax
 * 0000000140332CC2: mov     rax, rbx
 * 0000000140332CC5: mul     rcx
 * 0000000140332CC8: mov     r9, rdx
 * 0000000140332CCB: mov     [rbp+20F0h+var_1810], rdx
 * 0000000140332CD2: xor     r9d, eax
 * 0000000140332CD5: mov     eax, 4EC4EC4Fh
 * 0000000140332CDA: mul     r9d
 * 0000000140332CDD: mov     ecx, r9d
 * 0000000140332CE0: shr     r9d, 5
 * 0000000140332CE4: shr     edx, 3
 * 0000000140332CE7: mov     r8d, r9d
 * 0000000140332CEA: imul    eax, edx, 1Ah
 * 0000000140332CED: sub     ecx, eax
 * 0000000140332CEF: mov     eax, 4EC4EC4Fh
 * 0000000140332CF4: mul     r9d
 * 0000000140332CF7: add     ecx, 61h ; 'a'
 * 0000000140332CFA: shr     r9d, 5
 * 0000000140332CFE: shl     ecx, 8
 * 0000000140332D01: shr     edx, 3
 * 0000000140332D04: imul    eax, edx, 1Ah
 * 0000000140332D07: sub     r8d, eax
 * 0000000140332D0A: mov     eax, 4EC4EC4Fh
 * 0000000140332D0F: mul     r9d
 * 0000000140332D12: add     r8d, 41h ; 'A'
 * 0000000140332D16: or      r8d, ecx
 * 0000000140332D19: shr     edx, 3
 * 0000000140332D1C: imul    eax, edx, 1Ah
 * 0000000140332D1F: mov     ecx, r9d
 * 0000000140332D22: shr     r9d, 5
 * 0000000140332D26: shl     r8d, 8
 * 0000000140332D2A: sub     ecx, eax
 * 0000000140332D2C: mov     eax, 4EC4EC4Fh
 * 0000000140332D31: mul     r9d
 * 0000000140332D34: add     ecx, 61h ; 'a'
 * 0000000140332D37: shr     edx, 3
 * 0000000140332D3A: or      ecx, r8d
 * 0000000140332D3D: imul    eax, edx, 1Ah
 * 0000000140332D40: shl     ecx, 8
 * 0000000140332D43: sub     r9d, eax
 * 0000000140332D46: add     r9d, 41h ; 'A'
 * 0000000140332D4A: or      r9d, ecx
 * 0000000140332D4D: jmp     short loc_140332DB0
 * 0000000140332D4F: mov     [rbp+20F0h+var_1EB8], 0B0869E85h
 * 0000000140332D59: mov     r9d, [rbp+20F0h+var_1EB8]
 * 0000000140332D60: xor     r9d, 9
 * 0000000140332D64: ror     r9d, 21h
 * 0000000140332D68: jmp     short loc_140332DB0
 * 0000000140332D6A: mov     [rbp+20F0h+var_1EB4], 64664142h
 * 0000000140332D74: mov     r9d, [rbp+20F0h+var_1EB4]
 * 0000000140332D7B: ror     r9d, 8
 * 0000000140332D7F: jmp     short loc_140332DB0
 * 0000000140332D81: mov     [rbp+20F0h+var_1EB0], 82C6A6D8h
 * 0000000140332D8B: mov     r9d, [rbp+20F0h+var_1EB0]
 * 0000000140332D92: rol     r9d, 7
 * 0000000140332D96: jmp     short loc_140332DB0
 * 0000000140332D98: mov     [rbp+20F0h+var_1EAC], 4E574672h
 * 0000000140332DA2: mov     r9d, [rbp+20F0h+var_1EAC]
 * 0000000140332DA9: xor     r9d, r8d
 * 0000000140332DAC: ror     r9d, 18h
 * 0000000140332DB0: mov     rax, [r12+0F0h]
 * 0000000140332DB8: mov     r8d, r9d
 * 0000000140332DBB: mov     rdx, [r12+750h]
 * 0000000140332DC3: mov     ecx, 200h
 * 0000000140332DC8: call    KeGuardDispatchICall
 * 0000000140332DCD: mov     r15, rax
 * 0000000140332DD0: xor     eax, eax
 * 0000000140332DD2: test    r15, r15
 * 0000000140332DD5: jz      loc_140332EA1
 * 0000000140332DDB: mov     rcx, [r12+6D0h]
 * 0000000140332DE3: mov     rax, [r12+508h]
 * 0000000140332DEB: mov     r14d, [rcx+rax]
 * 0000000140332DEF: test    r14d, r14d
 * 0000000140332DF2: jz      short loc_140332E1F
 * 0000000140332DF4: rdtsc
 * 0000000140332DF6: shl     rdx, 20h
 * 0000000140332DFA: or      rax, rdx
 * 0000000140332DFD: mov     rcx, rax
 * 0000000140332E00: ror     rax, 3
 * 0000000140332E04: xor     rcx, rax
 * 0000000140332E07: mov     rax, rbx
 * 0000000140332E0A: mul     rcx
 * 0000000140332E0D: mov     [rbp+20F0h+var_1808], rdx
 * 0000000140332E14: xor     rax, rdx
 * 0000000140332E17: xor     edx, edx
 * 0000000140332E19: div     r14
 * 0000000140332E1C: mov     r14, rdx
 * 0000000140332E1F: mov     rax, [r12+3A8h]
 * 0000000140332E27: xor     ecx, ecx
 * 0000000140332E29: call    KeGuardDispatchICall
 * 0000000140332E2E: mov     rbx, rax
 * 0000000140332E31: test    rax, rax
 * 0000000140332E34: jz      short loc_140332E8F
 * 0000000140332E36: test    r14d, r14d
 * 0000000140332E39: jz      short loc_140332E56
 * 0000000140332E3B: mov     rax, [r12+3A8h]
 * 0000000140332E43: mov     rcx, rbx
 * 0000000140332E46: add     r14d, r13d
 * 0000000140332E49: call    KeGuardDispatchICall
 * 0000000140332E4E: mov     rbx, rax
 * 0000000140332E51: test    rax, rax
 * 0000000140332E54: jnz     short loc_140332E36
 * 0000000140332E56: mov     rsi, r12
 * 0000000140332E59: test    rbx, rbx
 * 0000000140332E5C: jz      short loc_140332E8F
 * 0000000140332E5E: mov     rax, [r12+398h]
 * 0000000140332E66: mov     rcx, rbx
 * 0000000140332E69: call    KeGuardDispatchICall
 * 0000000140332E6E: test    eax, eax
 * 0000000140332E70: jns     short loc_140332E86
 * 0000000140332E72: mov     rax, [r12+3B0h]
 * 0000000140332E7A: mov     rcx, rbx
 * 0000000140332E7D: call    KeGuardDispatchICall
 * 0000000140332E82: xor     eax, eax
 * 0000000140332E84: mov     ebx, eax
 * 0000000140332E86: test    rbx, rbx
 * 0000000140332E89: jnz     loc_140332F60
 * 0000000140332E8F: mov     rax, [r12+0F8h]
 * 0000000140332E97: mov     rcx, r15
 * 0000000140332E9A: call    KeGuardDispatchICall
 * 0000000140332E9F: xor     eax, eax
 * 0000000140332EA1: mov     r13d, 1
 * 0000000140332EA7: mov     [rbp+20F0h+var_2018], eax
 * 0000000140332EAD: mov     [rbp+20F0h+var_1F68], rax
 * 0000000140332EB4: mov     ecx, 4
 * 0000000140332EB9: lea     rax, [rbp+20F0h+var_1F60]
 * 0000000140332EC0: xor     edx, edx
 * 0000000140332EC2: mov     r9d, 0FFFFFFFFh
 * 0000000140332EC8: mov     [rax], dl
 * 0000000140332ECA: add     rax, r13
 * 0000000140332ECD: add     ecx, r9d
 * 0000000140332ED0: jnz     short loc_140332EC8
 * 0000000140332ED2: mov     ecx, [r12+808h]
 * 0000000140332EDA: mov     r11, 0B3B74BDEE4453415h
 * 0000000140332EE4: mov     rdx, [rsp+10F0h+arg_0]
 * 0000000140332EEC: add     r12, 814h
 * 0000000140332EF3: mov     [rbp+20F0h+var_2068], r12
 * 0000000140332EFA: mov     r10d, 19h
 * 0000000140332F00: mov     [rbp+20F0h+var_2098], 0C000009Ah
 * 0000000140332F07: mov     r14d, 8000h
 * 0000000140332F0D: mov     eax, [r12]
 * 0000000140332F11: cmp     [rdx+810h], eax
 * 0000000140332F17: jge     loc_14033E288
 * 0000000140332F1D: mov     r14d, [rbp+20F0h+var_1CB8]
 * 0000000140332F24: lea     edx, [r10-18h]
 * 0000000140332F28: mov     ebx, [rbp+20F0h+var_1CC8]
 * 0000000140332F2E: mov     [rbp+20F0h+var_20A8], r14d
 * 0000000140332F32: mov     [rbp+20F0h+var_2040], ebx
 * 0000000140332F38: mov     eax, [rsi+970h]
 * 0000000140332F3E: mov     r8d, 110000h
 * 0000000140332F44: and     eax, r8d
 * 0000000140332F47: mov     r15d, 0C0000082h
 * 0000000140332F4D: cmp     eax, r8d
 * 0000000140332F50: jz      loc_14033309F
 * 0000000140332F56: xor     eax, eax
 * 0000000140332F58: mov     dr7, rax
 * 0000000140332F5B: jmp     loc_1403330A1
 * 0000000140332F60: mov     rax, [r12+430h]
 * 0000000140332F68: lea     rdx, [rbp+20F0h+var_1B40]
 * 0000000140332F6F: mov     rcx, rbx
 * 0000000140332F72: call    KeGuardDispatchICall
 * 0000000140332F77: mov     rax, [r12+1B8h]
 * 0000000140332F7F: xor     r9d, r9d
 * 0000000140332F82: xor     r8d, r8d
 * 0000000140332F85: mov     rdx, r15
 * 0000000140332F88: mov     rcx, rbx
 * 0000000140332F8B: call    KeGuardDispatchICall
 * 0000000140332F90: rdtsc
 * 0000000140332F92: shl     rdx, 20h
 * 0000000140332F96: or      rax, rdx
 * 0000000140332F99: mov     rcx, rax
 * 0000000140332F9C: ror     rax, 3
 * 0000000140332FA0: xor     rcx, rax
 * 0000000140332FA3: mov     rax, 7010008004002001h
 * 0000000140332FAD: mul     rcx
 * 0000000140332FB0: mov     rcx, r15
 * 0000000140332FB3: mov     rbx, rdx
 * 0000000140332FB6: mov     [rbp+20F0h+var_1800], rdx
 * 0000000140332FBD: xor     rbx, rax
 * 0000000140332FC0: mov     rax, [r12+1B0h]
 * 0000000140332FC8: call    KeGuardDispatchICall
 * 0000000140332FCD: mov     ecx, eax
 * 0000000140332FCF: xor     edx, edx
 * 0000000140332FD1: mov     rax, rbx
 * 0000000140332FD4: div     rcx
 * 0000000140332FD7: mov     rbx, rdx
 * 0000000140332FDA: cli
 * 0000000140332FDB: mov     rcx, gs:20h
 * 0000000140332FE4: mov     rax, [r12+630h]
 * 0000000140332FEC: mov     rcx, [rcx+rax]
 * 0000000140332FF0: sti
 * 0000000140332FF1: mov     rax, [r12+1C0h]
 * 0000000140332FF9: lea     rdx, [rbp+20F0h+var_1B50]
 * 0000000140333000: call    KeGuardDispatchICall
 * 0000000140333005: mov     rax, [r12+1A0h]
 * 000000014033300D: lea     rcx, [rbp+20F0h+var_16C0]
 * 0000000140333014: mov     rdx, r15
 * 0000000140333017: call    KeGuardDispatchICall
 * 000000014033301C: jmp     short loc_140333025
 * 000000014033301E: test    ebx, ebx
 * 0000000140333020: jz      short loc_140333046
 * 0000000140333022: add     ebx, r13d
 * 0000000140333025: mov     rax, [r12+1A8h]
 * 000000014033302D: lea     rdx, [rbp+20F0h+var_16C0]
 * 0000000140333034: lea     rcx, [rbp+20F0h+var_1F70]
 * 000000014033303B: call    KeGuardDispatchICall
 * 0000000140333040: test    eax, eax
 * 0000000140333042: jns     short loc_14033301E
 * 0000000140333044: jmp     short loc_140333060
 * 0000000140333046: mov     rax, [r12+198h]
 * 000000014033304E: lea     rcx, [rbp+20F0h+var_1B50]
 * 0000000140333055: mov     edx, [rbp+20F0h+var_1F70]
 * 000000014033305B: call    KeGuardDispatchICall
 * 0000000140333060: mov     rax, [r12+1C8h]
 * 0000000140333068: lea     rdx, [rbp+20F0h+var_16E0]
 * 000000014033306F: lea     rcx, [rbp+20F0h+var_1B50]
 * 0000000140333076: call    KeGuardDispatchICall
 * 000000014033307B: mov     rax, [r12+0F8h]
 * 0000000140333083: mov     rcx, r15
 * 0000000140333086: call    KeGuardDispatchICall
 * 000000014033308B: mov     r13d, 1
 * 0000000140333091: xor     eax, eax
 * 0000000140333093: mov     [rbp+20F0h+var_2018], r13d
 * 000000014033309A: jmp     loc_140332EAD
 * 000000014033309F: xor     eax, eax
 * 00000001403330A1: cmp     ecx, [rsi+7F4h]
 * 00000001403330A7: jnz     short loc_1403330DF
 * 00000001403330A9: add     [rsi+818h], edx
 * 00000001403330AF: mov     ecx, eax
 * 00000001403330B1: cmp     dword ptr [rsi+934h], 0Bh
 * 00000001403330B8: jnz     short loc_1403330DF
 * 00000001403330BA: mov     eax, [rsi+970h]
 * 00000001403330C0: test    dl, al
 * 00000001403330C2: jnz     short loc_1403330DF
 * 00000001403330C4: cmp     [rsi+950h], r9d
 * 00000001403330CB: jnz     short loc_1403330D7
 * 00000001403330CD: xor     eax, eax
 * 00000001403330CF: mov     [rsi+950h], eax
 * 00000001403330D5: jmp     short loc_1403330DF
 * 00000001403330D7: or      eax, edx
 * 00000001403330D9: mov     [rsi+970h], eax
 * 00000001403330DF: mov     rax, [rsi+0A48h]
 * 00000001403330E6: mov     r9, rsi
 * 00000001403330E9: test    rax, rax
 * 00000001403330EC: mov     [rbp+20F0h+var_2094], ecx
 * 00000001403330EF: cmovnz  r9, rax
 * 00000001403330F3: xor     eax, eax
 * 00000001403330F5: mov     r8d, eax
 * 00000001403330F8: mov     r13d, [r9+7F0h]
 * 00000001403330FF: add     r13, r9
 * 0000000140333102: mov     [rbp+20F0h+var_20D0], r13
 * 0000000140333106: cmp     dword ptr [rbp+20F0h+var_1F68], eax
 * 000000014033310C: jz      short loc_14033312B
 * 000000014033310E: cmp     dword ptr [rbp+20F0h+var_1F68+4], ecx
 * 0000000140333114: ja      short loc_14033312B
 * 0000000140333116: mov     r13d, [rbp+20F0h+var_1F60]
 * 000000014033311D: mov     r8d, dword ptr [rbp+20F0h+var_1F68+4]
 * 0000000140333124: add     r13, r9
 * 0000000140333127: mov     [rbp+20F0h+var_20D0], r13
 * 000000014033312B: mov     edx, 1
 * 0000000140333130: cmp     r8d, ecx
 * 0000000140333133: jz      loc_140333272
 * 0000000140333139: sub     ecx, r8d
 * 000000014033313C: lea     esi, [rdx+0Bh]
 * 000000014033313F: mov     r10d, ecx
 * 0000000140333142: lea     r11d, [rdx+1]
 * 0000000140333146: add     r8d, ecx
 * 0000000140333149: mov     rdi, 0AAAAAAAAAAAAAAABh
 * 0000000140333153: mov     r15d, 0FFFh
 * 0000000140333159: mov     ecx, [r13+0]
 * 000000014033315D: cmp     ecx, esi
 * 000000014033315F: jg      short loc_1403331A6
 * 0000000140333161: jz      short loc_1403331BF
 * 0000000140333163: sub     ecx, 1
 * 0000000140333166: jz      short loc_1403331BF
 * 0000000140333168: sub     ecx, 6
 * 000000014033316B: jz      short loc_140333194
 * 000000014033316D: sub     ecx, 1
 * 0000000140333170: jz      short loc_14033318A
 * 0000000140333172: cmp     ecx, r11d
 * 0000000140333175: jnz     loc_1403331FC
 * 000000014033317B: mov     eax, [r13+1Ch]
 * 000000014033317F: add     eax, 3
 * 0000000140333182: shl     eax, 4
 * 0000000140333185: jmp     loc_140333234
 * 000000014033318A: movzx   eax, word ptr [r13+20h]
 * 000000014033318F: jmp     loc_14033322E
 * 0000000140333194: mov     eax, [r13+18h]
 * 0000000140333198: add     eax, r11d
 * 000000014033319B: lea     eax, [rax+rax*2]
 * 000000014033319E: shl     eax, 3
 * 00000001403331A1: jmp     loc_140333234
 * 00000001403331A6: cmp     ecx, 1Ch
 * 00000001403331A9: jz      short loc_140333229
 * 00000001403331AB: cmp     ecx, 1Eh
 * 00000001403331AE: jz      short loc_140333203
 * 00000001403331B0: cmp     ecx, 20h ; ' '
 * 00000001403331B3: jle     short loc_1403331FC
 * 00000001403331B5: cmp     ecx, 22h ; '"'
 * 00000001403331B8: jle     short loc_1403331DB
 * 00000001403331BA: cmp     ecx, 2Bh ; '+'
 * 00000001403331BD: jnz     short loc_1403331FC
 * 00000001403331BF: mov     ecx, [r13+10h]
 * 00000001403331C3: mov     rax, rdi
 * 00000001403331C6: mul     rcx
 * 00000001403331C9: shr     rdx, 3
 * 00000001403331CD: lea     eax, ds:30h[rdx*4]
 * 00000001403331D4: mov     edx, 1
 * 00000001403331D9: jmp     short loc_140333234
 * 00000001403331DB: mov     ecx, [r13+20h]
 * 00000001403331DF: mov     edx, [r13+28h]
 * 00000001403331E3: and     rcx, r15
 * 00000001403331E6: add     rdx, r15
 * 00000001403331E9: add     rdx, rcx
 * 00000001403331EC: shr     rdx, 0Ch
 * 00000001403331F0: lea     eax, [rdx+rdx*4]
 * 00000001403331F3: lea     eax, ds:30h[rax*4]
 * 00000001403331FA: jmp     short loc_1403331D4
 * 00000001403331FC: mov     eax, 30h ; '0'
 * 0000000140333201: jmp     short loc_140333234
 * 0000000140333203: mov     ecx, [r13+24h]
 * 0000000140333207: mov     rax, rdi
 * 000000014033320A: sub     ecx, edx
 * 000000014033320C: mul     rcx
 * 000000014033320F: movzx   eax, word ptr [r13+28h]
 * 0000000140333214: shr     rdx, 3
 * 0000000140333218: add     edx, 7
 * 000000014033321B: and     edx, 0FFFFFFF8h
 * 000000014033321E: add     eax, r11d
 * 0000000140333221: lea     eax, [rax+rax*2]
 * 0000000140333224: lea     eax, [rdx+rax*8]
 * 0000000140333227: jmp     short loc_1403331D4
 * 0000000140333229: movzx   eax, word ptr [r13+28h]
 * 000000014033322E: add     eax, 37h ; '7'
 * 0000000140333231: and     eax, 0FFFFFFF8h
 * 0000000140333234: add     r13, rax
 * 0000000140333237: sub     r10, rdx
 * 000000014033323A: jnz     loc_140333159
 * 0000000140333240: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140333244: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033324B: mov     r12, [rbp+20F0h+var_2068]
 * 0000000140333252: mov     r10d, 19h
 * 0000000140333258: mov     ebx, [rbp+20F0h+var_2040]
 * 000000014033325E: mov     r15d, 0C0000082h
 * 0000000140333264: mov     [rbp+20F0h+var_20D0], r13
 * 0000000140333268: mov     r11, 0B3B74BDEE4453415h
 * 0000000140333272: mov     eax, r13d
 * 0000000140333275: mov     dword ptr [rbp+20F0h+var_1F68], edx
 * 000000014033327B: sub     eax, r9d
 * 000000014033327E: mov     dword ptr [rbp+20F0h+var_1F68+4], r8d
 * 0000000140333285: mov     [rbp+20F0h+var_1F60], eax
 * 000000014033328B: mov     r14d, [r13+0]
 * 000000014033328F: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 0000000140333293: cmp     r14d, 1Ch
 * 0000000140333297: jg      loc_1403388E4
 * 000000014033329D: jz      loc_140337ED6
 * 00000001403332A3: mov     r8d, 0Ch
 * 00000001403332A9: cmp     r14d, r8d
 * 00000001403332AC: jg      loc_1403347AE
 * 00000001403332B2: jz      loc_14033C2B1
 * 00000001403332B8: xor     eax, eax
 * 00000001403332BA: mov     ecx, r14d
 * 00000001403332BD: test    r14d, r14d
 * 00000001403332C0: jz      loc_140334520
 * 00000001403332C6: sub     ecx, 1
 * 00000001403332C9: jz      loc_14033C2B3
 * 00000001403332CF: sub     ecx, 3
 * 00000001403332D2: jz      loc_1403342BB
 * 00000001403332D8: sub     ecx, 1
 * 00000001403332DB: jz      loc_140333F9E
 * 00000001403332E1: lea     r8d, [rax+2]
 * 00000001403332E5: sub     ecx, r8d
 * 00000001403332E8: jz      loc_140333E3F
 * 00000001403332EE: sub     ecx, 1
 * 00000001403332F1: jz      loc_140333A2F
 * 00000001403332F7: sub     ecx, r8d
 * 00000001403332FA: jz      loc_14033368C
 * 0000000140333300: cmp     ecx, 1
 * 0000000140333303: jnz     loc_14033D4C6
 * 0000000140333309: cmp     [rsi+960h], rax
 * 0000000140333310: jnz     short loc_140333320
 * 0000000140333312: mov     [rsi+80Ch], eax
 * 0000000140333318: xor     r10d, r10d
 * 000000014033331B: jmp     loc_14033362F
 * 0000000140333320: cmp     [rsi+80Ch], eax
 * 0000000140333326: jnz     loc_140333408
 * 000000014033332C: mov     eax, [rsi+974h]
 * 0000000140333332: mov     ecx, eax
 * 0000000140333334: shl     ecx, 3
 * 0000000140333337: xor     ecx, eax
 * 0000000140333339: and     ecx, 20h
 * 000000014033333C: xor     ecx, eax
 * 000000014033333E: mov     [rsi+974h], ecx
 * 0000000140333344: test    cl, 4
 * 0000000140333347: jz      loc_140333424
 * 000000014033334D: mov     rcx, [r13+8]
 * 0000000140333351: mov     r14d, 0FFFh
 * 0000000140333357: mov     eax, [r13+10h]
 * 000000014033335B: and     r14, rcx
 * 000000014033335E: add     rax, 0FFFh
 * 0000000140333364: mov     rbx, rcx
 * 0000000140333367: add     r14, rax
 * 000000014033336A: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140333371: shr     r14, 0Ch
 * 0000000140333375: test    r14, r14
 * 0000000140333378: jz      short loc_140333318
 * 000000014033337A: xor     edi, edi
 * 000000014033337C: mov     r12, 0B3B74BDEE4453415h
 * 0000000140333386: mov     rax, [rsi+2A8h]
 * 000000014033338D: mov     rcx, rbx
 * 0000000140333390: sub     r14, rdx
 * 0000000140333393: call    KeGuardDispatchICall
 * 0000000140333398: mov     edx, 1
 * 000000014033339D: test    al, al
 * 000000014033339F: jz      short loc_1403333E0
 * 00000001403333A1: cmp     [rsi+8D8h], edi
 * 00000001403333A7: jnz     short loc_1403333E0
 * 00000001403333A9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403333B3: add     rax, rsi
 * 00000001403333B6: mov     [rsi+8E0h], rax
 * 00000001403333BD: lea     rax, [r12+r13]
 * 00000001403333C1: mov     [rsi+8E8h], rax
 * 00000001403333C8: movsxd  rax, dword ptr [r13+0]
 * 00000001403333CC: mov     [rsi+8F0h], rax
 * 00000001403333D3: mov     [rsi+8F8h], rbx
 * 00000001403333DA: mov     [rsi+8D8h], edx
 * 00000001403333E0: add     dword ptr [rsi+810h], 100h
 * 00000001403333EA: add     rbx, 1000h
 * 00000001403333F1: test    r14, r14
 * 00000001403333F4: jnz     short loc_140333386
 * 00000001403333F6: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403333FD: xor     r10d, r10d
 * 0000000140333400: mov     r11, r12
 * 0000000140333403: jmp     loc_14033362F
 * 0000000140333408: mov     ecx, [rsi+974h]
 * 000000014033340E: mov     eax, ecx
 * 0000000140333410: shr     eax, 3
 * 0000000140333413: xor     eax, ecx
 * 0000000140333415: test    al, 4
 * 0000000140333417: jz      loc_140333344
 * 000000014033341D: xor     eax, eax
 * 000000014033341F: jmp     loc_140333312
 * 0000000140333424: mov     r11, [r13+8]
 * 0000000140333428: mov     r8d, [r13+10h]
 * 000000014033342C: mov     r9, r11
 * 000000014033342F: add     [rsi+810h], r8d
 * 0000000140333436: mov     rax, r11
 * 0000000140333439: mov     r14d, [rsi+7FCh]
 * 0000000140333440: mov     r15, [rsi+800h]
 * 0000000140333447: lea     rcx, [r11+r8]
 * 000000014033344B: cmp     r11, rcx
 * 000000014033344E: jnb     short loc_140333460
 * 0000000140333450: mov     edx, 40h ; '@'
 * 0000000140333455: prefetchnta byte ptr [rax]
 * 0000000140333458: add     rax, rdx
 * 000000014033345B: cmp     rax, rcx
 * 000000014033345E: jb      short loc_140333455
 * 0000000140333460: mov     r10d, r8d
 * 0000000140333463: mov     rbx, r15
 * 0000000140333466: shr     r10d, 7
 * 000000014033346A: mov     r12d, 1
 * 0000000140333470: test    r10d, r10d
 * 0000000140333473: jz      short loc_1403334DE
 * 0000000140333475: mov     rsi, 7010008004002001h
 * 000000014033347F: mov     edx, 8
 * 0000000140333484: mov     rax, [r9]
 * 0000000140333487: mov     ecx, r14d
 * 000000014033348A: xor     rax, rbx
 * 000000014033348D: mov     rbx, [r9+8]
 * 0000000140333491: rol     rax, cl
 * 0000000140333494: add     r9, 10h
 * 0000000140333498: xor     rbx, rax
 * 000000014033349B: rol     rbx, cl
 * 000000014033349E: sub     rdx, r12
 * 00000001403334A1: jnz     short loc_140333484
 * 00000001403334A3: mov     rcx, r9
 * 00000001403334A6: sub     rcx, r11
 * 00000001403334A9: xor     rcx, r15
 * 00000001403334AC: mov     rax, rcx
 * 00000001403334AF: rol     rax, 11h
 * 00000001403334B3: xor     rcx, rax
 * 00000001403334B6: mov     rax, rsi
 * 00000001403334B9: mul     rcx
 * 00000001403334BC: mov     [rbp+20F0h+var_17F8], rdx
 * 00000001403334C3: xor     edx, eax
 * 00000001403334C5: xor     r14d, edx
 * 00000001403334C8: mov     eax, 0FFFFFFFFh
 * 00000001403334CD: and     r14d, 3Fh
 * 00000001403334D1: cmovz   r14d, r12d
 * 00000001403334D5: add     r10d, eax
 * 00000001403334D8: jnz     short loc_14033347F
 * 00000001403334DA: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403334DE: and     r8d, 7Fh
 * 00000001403334E2: cmp     r8d, 8
 * 00000001403334E6: jb      short loc_140333505
 * 00000001403334E8: mov     edx, r8d
 * 00000001403334EB: shr     rdx, 3
 * 00000001403334EF: xor     rbx, [r9]
 * 00000001403334F2: mov     ecx, r14d
 * 00000001403334F5: rol     rbx, cl
 * 00000001403334F8: add     r9, 8
 * 00000001403334FC: add     r8d, 0FFFFFFF8h
 * 0000000140333500: sub     rdx, r12
 * 0000000140333503: jnz     short loc_1403334EF
 * 0000000140333505: test    r8d, r8d
 * 0000000140333508: jz      short loc_140333528
 * 000000014033350A: mov     esi, 0FFFFFFFFh
 * 000000014033350F: movzx   eax, byte ptr [r9]
 * 0000000140333513: mov     ecx, r14d
 * 0000000140333516: xor     rbx, rax
 * 0000000140333519: add     r9, r12
 * 000000014033351C: rol     rbx, cl
 * 000000014033351F: add     r8d, esi
 * 0000000140333522: jnz     short loc_14033350F
 * 0000000140333524: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140333528: mov     rax, rbx
 * 000000014033352B: shr     rax, 1Fh
 * 000000014033352F: xor     r10d, r10d
 * 0000000140333532: jmp     short loc_14033353A
 * 0000000140333534: xor     ebx, eax
 * 0000000140333536: shr     rax, 1Fh
 * 000000014033353A: test    rax, rax
 * 000000014033353D: jnz     short loc_140333534
 * 000000014033353F: mov     edx, [r13+14h]
 * 0000000140333543: btr     ebx, 1Fh
 * 0000000140333547: cmp     ebx, edx
 * 0000000140333549: jz      loc_140333625
 * 000000014033354F: mov     ecx, [r13+10h]
 * 0000000140333553: mov     r8, [r13+8]
 * 0000000140333557: test    rcx, rcx
 * 000000014033355A: jz      loc_1403335F5
 * 0000000140333560: mov     eax, [rsi+974h]
 * 0000000140333566: mov     r9d, 40h ; '@'
 * 000000014033356C: test    r9b, al
 * 000000014033356F: jz      loc_1403335F5
 * 0000000140333575: mov     r12, cr8
 * 0000000140333579: lea     eax, [r9-3Eh]
 * 000000014033357D: mov     cr8, rax
 * 0000000140333581: lea     rax, [rcx-1]
 * 0000000140333585: mov     r14, r8
 * 0000000140333588: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033358F: add     rax, r8
 * 0000000140333592: mov     ecx, 0FFFh
 * 0000000140333597: or      rax, rcx
 * 000000014033359A: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033359E: lea     r13, [r14-1]
 * 00000001403335A2: movzx   r15d, r12b
 * 00000001403335A6: mov     rax, [rsi+460h]
 * 00000001403335AD: xor     edx, edx
 * 00000001403335AF: mov     rcx, r14
 * 00000001403335B2: call    KeGuardDispatchICall
 * 00000001403335B7: cmp     eax, 0C000022Dh
 * 00000001403335BC: jnz     short loc_1403335E2
 * 00000001403335BE: mov     eax, 1
 * 00000001403335C3: cmp     r12b, al
 * 00000001403335C6: ja      short loc_14033360C
 * 00000001403335C8: movzx   r15d, r12b
 * 00000001403335CC: mov     cr8, r15
 * 00000001403335D0: mov     al, [r14]
 * 00000001403335D3: mov     rax, cr8
 * 00000001403335D7: mov     eax, 2
 * 00000001403335DC: mov     cr8, rax
 * 00000001403335E0: jmp     short loc_1403335A6
 * 00000001403335E2: xor     r10d, r10d
 * 00000001403335E5: test    eax, eax
 * 00000001403335E7: jns     short loc_14033360F
 * 00000001403335E9: mov     cr8, r15
 * 00000001403335ED: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403335F1: mov     edx, [r13+14h]
 * 00000001403335F5: mov     eax, [rsi+8D8h]
 * 00000001403335FB: test    eax, eax
 * 00000001403335FD: jnz     loc_140334751
 * 0000000140333603: mov     ecx, ebx
 * 0000000140333605: mov     eax, edx
 * 0000000140333607: jmp     loc_14033473D
 * 000000014033360C: xor     r10d, r10d
 * 000000014033360F: mov     r8d, 1000h
 * 0000000140333615: add     r14, r8
 * 0000000140333618: add     r13, r8
 * 000000014033361B: cmp     r13, [rbp+20F0h+var_20F0]
 * 000000014033361F: jnz     short loc_1403335A2
 * 0000000140333621: mov     cr8, r15
 * 0000000140333625: mov     r11, 0B3B74BDEE4453415h
 * 000000014033362F: mov     r14d, 8000h
 * 0000000140333635: mov     edx, [rbp+20F0h+var_2094]
 * 0000000140333638: cmp     dword ptr [rsi+80Ch], 0
 * 000000014033363F: lea     ecx, [rdx-1]
 * 0000000140333642: cmovz   ecx, edx
 * 0000000140333645: mov     edx, 1
 * 000000014033364A: add     ecx, edx
 * 000000014033364C: cmp     [rsi+8D8h], r10d
 * 0000000140333653: jnz     loc_14033E28D
 * 0000000140333659: lea     r12, [rsi+814h]
 * 0000000140333660: mov     eax, [r12]
 * 0000000140333664: mov     [rbp+20F0h+var_2068], r12
 * 000000014033366B: cmp     [rsi+810h], eax
 * 0000000140333671: jge     loc_14033E28D
 * 0000000140333677: mov     ebx, [rbp+20F0h+var_2040]
 * 000000014033367D: lea     r10d, [rdx+18h]
 * 0000000140333681: mov     r9d, 0FFFFFFFFh
 * 0000000140333687: jmp     loc_140332F38
 * 000000014033368C: cmp     [r13+18h], eax
 * 0000000140333690: jz      short loc_1403336D3
 * 0000000140333692: cmp     [rsi+960h], rax
 * 0000000140333699: jz      loc_14033383A
 * 000000014033369F: mov     ecx, [rsi+974h]
 * 00000001403336A5: test    cl, 4
 * 00000001403336A8: jnz     loc_14033383A
 * 00000001403336AE: lea     rax, [rsi+80Ch]
 * 00000001403336B5: xor     r10d, r10d
 * 00000001403336B8: cmp     [rax], r10d
 * 00000001403336BB: jnz     loc_140333829
 * 00000001403336C1: mov     eax, ecx
 * 00000001403336C3: shl     eax, 3
 * 00000001403336C6: xor     eax, ecx
 * 00000001403336C8: and     eax, 20h
 * 00000001403336CB: xor     eax, ecx
 * 00000001403336CD: mov     [rsi+974h], eax
 * 00000001403336D3: mov     edx, [r13+1Ch]
 * 00000001403336D7: lea     rax, [rsi+80Ch]
 * 00000001403336DE: mov     r14d, [rax]
 * 00000001403336E1: lea     rcx, [r13+30h]
 * 00000001403336E5: shl     r14, 4
 * 00000001403336E9: add     r14, rcx
 * 00000001403336EC: shl     rdx, 4
 * 00000001403336F0: add     rdx, rcx
 * 00000001403336F3: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403336F7: mov     [rbp+20F0h+var_20F0], rdx
 * 00000001403336FB: mov     [rbp+20F0h+var_20D8], r14
 * 00000001403336FF: xor     eax, eax
 * 0000000140333701: cmp     [r14], eax
 * 0000000140333704: jl      loc_1403339DA
 * 000000014033370A: mov     rdi, [r14+8]
 * 000000014033370E: mov     r8d, [r14+4]
 * 0000000140333712: mov     r9, rdi
 * 0000000140333715: add     [rsi+810h], r8d
 * 000000014033371C: mov     rax, rdi
 * 000000014033371F: mov     r11d, [rsi+7FCh]
 * 0000000140333726: mov     r12d, r8d
 * 0000000140333729: mov     r15, [rsi+800h]
 * 0000000140333730: lea     rcx, [r8+rdi]
 * 0000000140333734: cmp     rdi, rcx
 * 0000000140333737: jnb     short loc_14033374A
 * 0000000140333739: mov     r10d, 40h ; '@'
 * 000000014033373F: prefetchnta byte ptr [rax]
 * 0000000140333742: add     rax, r10
 * 0000000140333745: cmp     rax, rcx
 * 0000000140333748: jb      short loc_14033373F
 * 000000014033374A: mov     r10d, r8d
 * 000000014033374D: mov     rbx, r15
 * 0000000140333750: shr     r10d, 7
 * 0000000140333754: test    r10d, r10d
 * 0000000140333757: jz      short loc_1403337CD
 * 0000000140333759: mov     esi, 1
 * 000000014033375E: mov     r12d, 0FFFFFFFFh
 * 0000000140333764: mov     r14, 7010008004002001h
 * 000000014033376E: mov     eax, 8
 * 0000000140333773: xor     rbx, [r9]
 * 0000000140333776: mov     ecx, r11d
 * 0000000140333779: rol     rbx, cl
 * 000000014033377C: xor     rbx, [r9+8]
 * 0000000140333780: add     r9, 10h
 * 0000000140333784: rol     rbx, cl
 * 0000000140333787: sub     rax, rsi
 * 000000014033378A: jnz     short loc_140333773
 * 000000014033378C: mov     rcx, r9
 * 000000014033378F: sub     rcx, rdi
 * 0000000140333792: xor     rcx, r15
 * 0000000140333795: mov     rax, rcx
 * 0000000140333798: rol     rax, 11h
 * 000000014033379C: xor     rcx, rax
 * 000000014033379F: mov     rax, r14
 * 00000001403337A2: mul     rcx
 * 00000001403337A5: mov     [rbp+20F0h+var_17F0], rdx
 * 00000001403337AC: xor     edx, eax
 * 00000001403337AE: xor     r11d, edx
 * 00000001403337B1: and     r11d, 3Fh
 * 00000001403337B5: cmovz   r11d, esi
 * 00000001403337B9: add     r10d, r12d
 * 00000001403337BC: jnz     short loc_14033376E
 * 00000001403337BE: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403337C2: mov     r12, r8
 * 00000001403337C5: mov     r14, [rbp+20F0h+var_20D8]
 * 00000001403337C9: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403337CD: and     r8d, 7Fh
 * 00000001403337D1: mov     r10d, 1
 * 00000001403337D7: cmp     r8d, 8
 * 00000001403337DB: jb      short loc_1403337FA
 * 00000001403337DD: mov     eax, r8d
 * 00000001403337E0: shr     rax, 3
 * 00000001403337E4: xor     rbx, [r9]
 * 00000001403337E7: mov     ecx, r11d
 * 00000001403337EA: rol     rbx, cl
 * 00000001403337ED: add     r9, 8
 * 00000001403337F1: add     r8d, 0FFFFFFF8h
 * 00000001403337F5: sub     rax, r10
 * 00000001403337F8: jnz     short loc_1403337E4
 * 00000001403337FA: test    r8d, r8d
 * 00000001403337FD: jz      short loc_14033381D
 * 00000001403337FF: mov     esi, 0FFFFFFFFh
 * 0000000140333804: movzx   eax, byte ptr [r9]
 * 0000000140333808: mov     ecx, r11d
 * 000000014033380B: xor     rbx, rax
 * 000000014033380E: add     r9, r10
 * 0000000140333811: rol     rbx, cl
 * 0000000140333814: add     r8d, esi
 * 0000000140333817: jnz     short loc_140333804
 * 0000000140333819: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033381D: mov     rax, rbx
 * 0000000140333820: shr     rax, 1Fh
 * 0000000140333824: xor     r10d, r10d
 * 0000000140333827: jmp     short loc_140333852
 * 0000000140333829: test    cl, 20h
 * 000000014033382C: jz      loc_1403336D3
 * 0000000140333832: mov     r14d, r10d
 * 0000000140333835: jmp     loc_140333A27
 * 000000014033383A: mov     r14d, eax
 * 000000014033383D: xor     r10d, r10d
 * 0000000140333840: lea     rax, [rsi+80Ch]
 * 0000000140333847: jmp     loc_140333A27
 * 000000014033384C: xor     ebx, eax
 * 000000014033384E: shr     rax, 1Fh
 * 0000000140333852: test    rax, rax
 * 0000000140333855: jnz     short loc_14033384C
 * 0000000140333857: mov     ecx, [r14]
 * 000000014033385A: btr     ebx, 1Fh
 * 000000014033385E: mov     eax, ecx
 * 0000000140333860: btr     eax, 1Fh
 * 0000000140333864: cmp     ebx, eax
 * 0000000140333866: jz      loc_1403339B2
 * 000000014033386C: test    r12, r12
 * 000000014033386F: jz      loc_140333912
 * 0000000140333875: mov     eax, [rsi+974h]
 * 000000014033387B: mov     edx, 40h ; '@'
 * 0000000140333880: test    dl, al
 * 0000000140333882: jz      loc_140333912
 * 0000000140333888: mov     r13, cr8
 * 000000014033388C: lea     eax, [rdx-3Eh]
 * 000000014033388F: mov     cr8, rax
 * 0000000140333893: mov     r15, rdi
 * 0000000140333896: lea     rax, [rdi-1]
 * 000000014033389A: and     r15, 0FFFFFFFFFFFFF000h
 * 00000001403338A1: add     rax, r12
 * 00000001403338A4: mov     ecx, 0FFFh
 * 00000001403338A9: or      rax, rcx
 * 00000001403338AC: mov     [rbp+20F0h+var_2080], rax
 * 00000001403338B0: lea     rax, [r15-1]
 * 00000001403338B4: mov     [rbp+20F0h+var_20D8], rax
 * 00000001403338B8: movzx   r12d, r13b
 * 00000001403338BC: mov     rax, [rsi+460h]
 * 00000001403338C3: xor     edx, edx
 * 00000001403338C5: mov     rcx, r15
 * 00000001403338C8: call    KeGuardDispatchICall
 * 00000001403338CD: cmp     eax, 0C000022Dh
 * 00000001403338D2: jnz     short loc_1403338FC
 * 00000001403338D4: mov     eax, 1
 * 00000001403338D9: cmp     r13b, al
 * 00000001403338DC: ja      loc_14033398A
 * 00000001403338E2: movzx   r12d, r13b
 * 00000001403338E6: mov     cr8, r12
 * 00000001403338EA: mov     al, [r15]
 * 00000001403338ED: mov     rax, cr8
 * 00000001403338F1: mov     eax, 2
 * 00000001403338F6: mov     cr8, rax
 * 00000001403338FA: jmp     short loc_1403338BC
 * 00000001403338FC: xor     r10d, r10d
 * 00000001403338FF: test    eax, eax
 * 0000000140333901: jns     loc_14033398D
 * 0000000140333907: mov     cr8, r12
 * 000000014033390B: mov     ecx, [r14]
 * 000000014033390E: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140333912: mov     eax, ecx
 * 0000000140333914: mov     ecx, [rsi+8D8h]
 * 000000014033391A: btr     eax, 1Fh
 * 000000014033391E: test    ecx, ecx
 * 0000000140333920: jnz     loc_1403339C5
 * 0000000140333926: mov     ecx, ebx
 * 0000000140333928: xor     rcx, rax
 * 000000014033392B: mov     rax, [rsi+580h]
 * 0000000140333932: mov     [rax+18h], rcx
 * 0000000140333936: mov     ecx, [rsi+8D8h]
 * 000000014033393C: test    ecx, ecx
 * 000000014033393E: jnz     loc_1403339C5
 * 0000000140333944: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033394E: mov     r11, 0B3B74BDEE4453415h
 * 0000000140333958: add     rax, rsi
 * 000000014033395B: mov     [rsi+8E0h], rax
 * 0000000140333962: lea     rax, [r11+r13]
 * 0000000140333966: mov     [rsi+8E8h], rax
 * 000000014033396D: movsxd  rax, dword ptr [r13+0]
 * 0000000140333971: mov     [rsi+8F0h], rax
 * 0000000140333978: lea     eax, [rcx+1]
 * 000000014033397B: mov     [rsi+8F8h], rdi
 * 0000000140333982: mov     [rsi+8D8h], eax
 * 0000000140333988: jmp     short loc_1403339CF
 * 000000014033398A: xor     r10d, r10d
 * 000000014033398D: mov     rax, [rbp+20F0h+var_20D8]
 * 0000000140333991: mov     ecx, 1000h
 * 0000000140333996: add     rax, rcx
 * 0000000140333999: add     r15, rcx
 * 000000014033399C: mov     [rbp+20F0h+var_20D8], rax
 * 00000001403339A0: cmp     rax, [rbp+20F0h+var_2080]
 * 00000001403339A4: jnz     loc_1403338B8
 * 00000001403339AA: mov     cr8, r12
 * 00000001403339AE: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403339B2: mov     r12, [rbp+20F0h+var_2068]
 * 00000001403339B9: mov     r11, 0B3B74BDEE4453415h
 * 00000001403339C3: jmp     short loc_1403339DD
 * 00000001403339C5: mov     r11, 0B3B74BDEE4453415h
 * 00000001403339CF: mov     r12, [rbp+20F0h+var_2068]
 * 00000001403339D6: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403339DA: xor     r10d, r10d
 * 00000001403339DD: add     r14, 10h
 * 00000001403339E1: mov     [rbp+20F0h+var_20D8], r14
 * 00000001403339E5: cmp     r14, rdx
 * 00000001403339E8: jnb     short loc_140333A01
 * 00000001403339EA: mov     eax, [r12]
 * 00000001403339EE: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403339F2: cmp     [rsi+810h], eax
 * 00000001403339F8: jl      loc_1403336FF
 * 00000001403339FE: cmp     r14, rdx
 * 0000000140333A01: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140333A08: jnz     short loc_140333A14
 * 0000000140333A0A: xor     eax, eax
 * 0000000140333A0C: mov     r14d, eax
 * 0000000140333A0F: xor     r10d, r10d
 * 0000000140333A12: jmp     short loc_140333A23
 * 0000000140333A14: mov     rax, [rbp+20F0h+var_20D0]
 * 0000000140333A18: add     rax, 30h ; '0'
 * 0000000140333A1C: sub     r14, rax
 * 0000000140333A1F: sar     r14, 4
 * 0000000140333A23: mov     rax, [rbp+20F0h+var_20A0]
 * 0000000140333A27: mov     [rax], r14d
 * 0000000140333A2A: jmp     loc_14033362F
 * 0000000140333A2F: mov     r8, [r13+18h]
 * 0000000140333A33: mov     r12d, 1
 * 0000000140333A39: mov     rcx, [rsi+6D8h]
 * 0000000140333A40: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140333A4A: mov     rax, [rsi+708h]
 * 0000000140333A51: add     rcx, r8
 * 0000000140333A54: movzx   edx, word ptr [r13+22h]
 * 0000000140333A59: cmp     [rcx+rax], dx
 * 0000000140333A5D: jz      short loc_140333A9D
 * 0000000140333A5F: xor     eax, eax
 * 0000000140333A61: cmp     [rsi+8D8h], eax
 * 0000000140333A67: jnz     short loc_140333A9D
 * 0000000140333A69: lea     rax, [rsi+r9]
 * 0000000140333A6D: mov     [rsi+8E0h], rax
 * 0000000140333A74: lea     rax, [r11+r13]
 * 0000000140333A78: mov     [rsi+8E8h], rax
 * 0000000140333A7F: movsxd  rax, dword ptr [r13+0]
 * 0000000140333A83: mov     [rsi+8F0h], rax
 * 0000000140333A8A: mov     [rsi+8F8h], r8
 * 0000000140333A91: mov     [rsi+8D8h], r12d
 * 0000000140333A98: movzx   edx, word ptr [r13+22h]
 * 0000000140333A9D: test    [rsi+710h], dx
 * 0000000140333AA4: jnz     short loc_140333AEE
 * 0000000140333AA6: mov     rcx, [rsi+6E0h]
 * 0000000140333AAD: add     rcx, r8
 * 0000000140333AB0: cmp     [rcx], rcx
 * 0000000140333AB3: jz      short loc_140333AEE
 * 0000000140333AB5: xor     eax, eax
 * 0000000140333AB7: cmp     [rsi+8D8h], eax
 * 0000000140333ABD: jnz     short loc_140333AEE
 * 0000000140333ABF: lea     rax, [rsi+r9]
 * 0000000140333AC3: mov     [rsi+8E0h], rax
 * 0000000140333ACA: lea     rax, [r11+r13]
 * 0000000140333ACE: mov     [rsi+8E8h], rax
 * 0000000140333AD5: movsxd  rax, dword ptr [r13+0]
 * 0000000140333AD9: mov     [rsi+8F0h], rax
 * 0000000140333AE0: mov     [rsi+8F8h], r8
 * 0000000140333AE7: mov     [rsi+8D8h], r12d
 * 0000000140333AEE: mov     r11, [r13+8]
 * 0000000140333AF2: mov     r8d, [r13+10h]
 * 0000000140333AF6: mov     r9, r11
 * 0000000140333AF9: add     [rsi+810h], r8d
 * 0000000140333B00: mov     rax, r11
 * 0000000140333B03: mov     r14d, [rsi+7FCh]
 * 0000000140333B0A: mov     r15, [rsi+800h]
 * 0000000140333B11: lea     rcx, [r11+r8]
 * 0000000140333B15: cmp     r11, rcx
 * 0000000140333B18: jnb     short loc_140333B2A
 * 0000000140333B1A: mov     edx, 40h ; '@'
 * 0000000140333B1F: prefetchnta byte ptr [rax]
 * 0000000140333B22: add     rax, rdx
 * 0000000140333B25: cmp     rax, rcx
 * 0000000140333B28: jb      short loc_140333B1F
 * 0000000140333B2A: mov     r10d, r8d
 * 0000000140333B2D: mov     rbx, r15
 * 0000000140333B30: shr     r10d, 7
 * 0000000140333B34: mov     r13d, 0FFFFFFFFh
 * 0000000140333B3A: test    r10d, r10d
 * 0000000140333B3D: jz      short loc_140333BA3
 * 0000000140333B3F: mov     rsi, 7010008004002001h
 * 0000000140333B49: mov     edx, 8
 * 0000000140333B4E: mov     rax, [r9]
 * 0000000140333B51: mov     ecx, r14d
 * 0000000140333B54: xor     rax, rbx
 * 0000000140333B57: mov     rbx, [r9+8]
 * 0000000140333B5B: rol     rax, cl
 * 0000000140333B5E: add     r9, 10h
 * 0000000140333B62: xor     rbx, rax
 * 0000000140333B65: rol     rbx, cl
 * 0000000140333B68: sub     rdx, r12
 * 0000000140333B6B: jnz     short loc_140333B4E
 * 0000000140333B6D: mov     rcx, r9
 * 0000000140333B70: sub     rcx, r11
 * 0000000140333B73: xor     rcx, r15
 * 0000000140333B76: mov     rax, rcx
 * 0000000140333B79: rol     rax, 11h
 * 0000000140333B7D: xor     rcx, rax
 * 0000000140333B80: mov     rax, rsi
 * 0000000140333B83: mul     rcx
 * 0000000140333B86: mov     [rbp+20F0h+var_17E8], rdx
 * 0000000140333B8D: xor     edx, eax
 * 0000000140333B8F: xor     r14d, edx
 * 0000000140333B92: and     r14d, 3Fh
 * 0000000140333B96: cmovz   r14d, r12d
 * 0000000140333B9A: add     r10d, r13d
 * 0000000140333B9D: jnz     short loc_140333B49
 * 0000000140333B9F: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140333BA3: and     r8d, 7Fh
 * 0000000140333BA7: cmp     r8d, 8
 * 0000000140333BAB: jb      short loc_140333BCA
 * 0000000140333BAD: mov     edx, r8d
 * 0000000140333BB0: shr     rdx, 3
 * 0000000140333BB4: xor     rbx, [r9]
 * 0000000140333BB7: mov     ecx, r14d
 * 0000000140333BBA: rol     rbx, cl
 * 0000000140333BBD: add     r9, 8
 * 0000000140333BC1: add     r8d, 0FFFFFFF8h
 * 0000000140333BC5: sub     rdx, r12
 * 0000000140333BC8: jnz     short loc_140333BB4
 * 0000000140333BCA: test    r8d, r8d
 * 0000000140333BCD: jz      short loc_140333BE4
 * 0000000140333BCF: movzx   eax, byte ptr [r9]
 * 0000000140333BD3: mov     ecx, r14d
 * 0000000140333BD6: xor     rbx, rax
 * 0000000140333BD9: add     r9, r12
 * 0000000140333BDC: rol     rbx, cl
 * 0000000140333BDF: add     r8d, r13d
 * 0000000140333BE2: jnz     short loc_140333BCF
 * 0000000140333BE4: mov     rax, rbx
 * 0000000140333BE7: jmp     short loc_140333BEB
 * 0000000140333BE9: xor     ebx, eax
 * 0000000140333BEB: shr     rax, 1Fh
 * 0000000140333BEF: test    rax, rax
 * 0000000140333BF2: jnz     short loc_140333BE9
 * 0000000140333BF4: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140333BF8: btr     ebx, 1Fh
 * 0000000140333BFC: mov     r13d, eax
 * 0000000140333BFF: cmp     ebx, [r14+14h]
 * 0000000140333C03: jz      loc_140333CDD
 * 0000000140333C09: cmp     [r14], eax
 * 0000000140333C0C: jnz     short loc_140333C16
 * 0000000140333C0E: cmp     [r14+18h], eax
 * 0000000140333C12: cmovnz  r13d, r12d
 * 0000000140333C16: mov     ecx, [r14+10h]
 * 0000000140333C1A: mov     rdx, [r14+8]
 * 0000000140333C1E: test    rcx, rcx
 * 0000000140333C21: jz      loc_140333DC4
 * 0000000140333C27: mov     eax, [rsi+974h]
 * 0000000140333C2D: mov     r8d, 40h ; '@'
 * 0000000140333C33: test    r8b, al
 * 0000000140333C36: jz      loc_140333DC4
 * 0000000140333C3C: mov     r12, cr8
 * 0000000140333C40: lea     eax, [r8-3Eh]
 * 0000000140333C44: mov     cr8, rax
 * 0000000140333C48: lea     rax, [rcx-1]
 * 0000000140333C4C: mov     r14, rdx
 * 0000000140333C4F: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140333C56: add     rax, rdx
 * 0000000140333C59: mov     ecx, 0FFFh
 * 0000000140333C5E: or      rax, rcx
 * 0000000140333C61: mov     [rbp+20F0h+var_20D8], rax
 * 0000000140333C65: lea     rax, [r14-1]
 * 0000000140333C69: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140333C6D: movzx   r15d, r12b
 * 0000000140333C71: mov     rax, [rsi+460h]
 * 0000000140333C78: xor     edx, edx
 * 0000000140333C7A: mov     rcx, r14
 * 0000000140333C7D: call    KeGuardDispatchICall
 * 0000000140333C82: cmp     eax, 0C000022Dh
 * 0000000140333C87: jnz     short loc_140333CB4
 * 0000000140333C89: test    r13d, r13d
 * 0000000140333C8C: jnz     loc_140333DBC
 * 0000000140333C92: lea     eax, [r13+1]
 * 0000000140333C96: cmp     r12b, al
 * 0000000140333C99: ja      short loc_140333CBC
 * 0000000140333C9B: movzx   r15d, r12b
 * 0000000140333C9F: mov     cr8, r15
 * 0000000140333CA3: mov     al, [r14]
 * 0000000140333CA6: mov     rax, cr8
 * 0000000140333CAA: lea     eax, [r13+2]
 * 0000000140333CAE: mov     cr8, rax
 * 0000000140333CB2: jmp     short loc_140333C71
 * 0000000140333CB4: test    eax, eax
 * 0000000140333CB6: js      loc_140333DBC
 * 0000000140333CBC: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140333CC0: mov     ecx, 1000h
 * 0000000140333CC5: add     rax, rcx
 * 0000000140333CC8: add     r14, rcx
 * 0000000140333CCB: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140333CCF: cmp     rax, [rbp+20F0h+var_20D8]
 * 0000000140333CD3: jnz     short loc_140333C6D
 * 0000000140333CD5: mov     cr8, r15
 * 0000000140333CD9: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140333CDD: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140333CE7: mov     r15, 0B3B74BDEE4453415h
 * 0000000140333CF1: mov     ebx, 1
 * 0000000140333CF6: lea     rax, [r14+30h]
 * 0000000140333CFA: xor     r9d, r9d
 * 0000000140333CFD: mov     [rbp+20F0h+var_1C80], rax
 * 0000000140333D04: lea     rcx, [rbp+20F0h+var_1C88]
 * 0000000140333D0B: movzx   eax, word ptr [r14+20h]
 * 0000000140333D10: xor     r8d, r8d
 * 0000000140333D13: mov     [rbp+20F0h+var_1C88], ax
 * 0000000140333D1A: xor     edx, edx
 * 0000000140333D1C: mov     [rbp+20F0h+var_1C86], ax
 * 0000000140333D23: lea     rax, [rbp+20F0h+var_1DA8]
 * 0000000140333D2A: mov     [rsp+10F0h+var_10B8], rax
 * 0000000140333D2F: xor     eax, eax
 * 0000000140333D31: mov     [rsp+10F0h+var_10C0], rax
 * 0000000140333D36: mov     byte ptr [rsp+10F0h+var_10C8], al
 * 0000000140333D3A: mov     rax, [rsi+4F8h]
 * 0000000140333D41: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 0000000140333D46: mov     rax, [rsi+1E0h]
 * 0000000140333D4D: call    KeGuardDispatchICall
 * 0000000140333D52: xor     r10d, r10d
 * 0000000140333D55: test    eax, eax
 * 0000000140333D57: js      loc_140333625
 * 0000000140333D5D: mov     rcx, [rbp+20F0h+var_1DA8]
 * 0000000140333D64: cmp     rcx, [r14+18h]
 * 0000000140333D68: jz      short loc_140333DA8
 * 0000000140333D6A: xor     eax, eax
 * 0000000140333D6C: cmp     [rsi+8D8h], eax
 * 0000000140333D72: jnz     short loc_140333DA8
 * 0000000140333D74: lea     rax, [rsi+r12]
 * 0000000140333D78: mov     [rsi+8E0h], rax
 * 0000000140333D7F: lea     rax, [r14+r15]
 * 0000000140333D83: mov     [rsi+8E8h], rax
 * 0000000140333D8A: movsxd  rax, dword ptr [r14]
 * 0000000140333D8D: mov     [rsi+8F0h], rax
 * 0000000140333D94: mov     [rsi+8F8h], rcx
 * 0000000140333D9B: mov     [rsi+8D8h], ebx
 * 0000000140333DA1: mov     rcx, [rbp+20F0h+var_1DA8]
 * 0000000140333DA8: mov     rax, [rsi+1D8h]
 * 0000000140333DAF: call    KeGuardDispatchICall
 * 0000000140333DB4: xor     r10d, r10d
 * 0000000140333DB7: jmp     loc_140333625
 * 0000000140333DBC: mov     cr8, r15
 * 0000000140333DC0: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140333DC4: mov     eax, [rsi+8D8h]
 * 0000000140333DCA: mov     edx, [r14+14h]
 * 0000000140333DCE: test    eax, eax
 * 0000000140333DD0: jnz     short loc_140333DE8
 * 0000000140333DD2: mov     rax, [rsi+580h]
 * 0000000140333DD9: mov     ecx, ebx
 * 0000000140333DDB: xor     rcx, rdx
 * 0000000140333DDE: mov     [rax+18h], rcx
 * 0000000140333DE2: mov     eax, [rsi+8D8h]
 * 0000000140333DE8: mov     rcx, [r14+8]
 * 0000000140333DEC: mov     r12, 0A3A03F5891C8B4E8h
 * 0000000140333DF6: mov     r15, 0B3B74BDEE4453415h
 * 0000000140333E00: mov     ebx, 1
 * 0000000140333E05: test    eax, eax
 * 0000000140333E07: jnz     loc_140333CF6
 * 0000000140333E0D: lea     rax, [rsi+r12]
 * 0000000140333E11: mov     [rsi+8E0h], rax
 * 0000000140333E18: lea     rax, [r14+r15]
 * 0000000140333E1C: mov     [rsi+8E8h], rax
 * 0000000140333E23: movsxd  rax, dword ptr [r14]
 * 0000000140333E26: mov     [rsi+8F0h], rax
 * 0000000140333E2D: mov     [rsi+8F8h], rcx
 * 0000000140333E34: mov     [rsi+8D8h], ebx
 * 0000000140333E3A: jmp     loc_140333CF6
 * 0000000140333E3F: mov     rax, [rsi+198h]
 * 0000000140333E46: lea     rcx, [rbp+20F0h+var_17B0]
 * 0000000140333E4D: mov     edx, [r13+1Ch]
 * 0000000140333E51: call    KeGuardDispatchICall
 * 0000000140333E56: mov     rax, [rsi+1C8h]
 * 0000000140333E5D: lea     rdx, [rbp+20F0h+var_17A0]
 * 0000000140333E64: lea     rcx, [rbp+20F0h+var_17B0]
 * 0000000140333E6B: call    KeGuardDispatchICall
 * 0000000140333E70: xor     eax, eax
 * 0000000140333E72: mov     r11d, eax
 * 0000000140333E75: cmp     [r13+18h], eax
 * 0000000140333E79: jbe     loc_140333F79
 * 0000000140333E7F: lea     ebx, [rax+1]
 * 0000000140333E82: mov     r12, 0B3B74BDEE4453415h
 * 0000000140333E8C: mov     eax, r11d
 * 0000000140333E8F: mov     ecx, 2
 * 0000000140333E94: lea     r10, [rax+rax*2]
 * 0000000140333E98: mov     r9d, [r13+r10*8+40h]
 * 0000000140333E9D: test    [rsi+863h], cl
 * 0000000140333EA3: jz      short loc_140333EC3
 * 0000000140333EA5: cmp     r9d, r15d
 * 0000000140333EA8: jnz     short loc_140333EC3
 * 0000000140333EAA: mov     eax, gs:1A4h
 * 0000000140333EB2: cmp     eax, [rsi+8D0h]
 * 0000000140333EB8: jnz     short loc_140333EC3
 * 0000000140333EBA: mov     rdx, [rsi+8C8h]
 * 0000000140333EC1: jmp     short loc_140333ECF
 * 0000000140333EC3: mov     ecx, r9d
 * 0000000140333EC6: rdmsr
 * 0000000140333EC8: shl     rdx, 20h
 * 0000000140333ECC: or      rdx, rax
 * 0000000140333ECF: mov     r8, [r13+r10*8+30h]
 * 0000000140333ED4: mov     rcx, [r13+r10*8+38h]
 * 0000000140333ED9: and     rdx, r8
 * 0000000140333EDC: cmp     rdx, rcx
 * 0000000140333EDF: jz      short loc_140333F47
 * 0000000140333EE1: mov     r8d, [r13+1Ch]
 * 0000000140333EE5: mov     eax, [rsi+8D8h]
 * 0000000140333EEB: shl     r8, 20h
 * 0000000140333EEF: or      r8, r9
 * 0000000140333EF2: test    eax, eax
 * 0000000140333EF4: jnz     short loc_140333F65
 * 0000000140333EF6: mov     rax, [rsi+580h]
 * 0000000140333EFD: xor     rcx, rdx
 * 0000000140333F00: mov     [rax+18h], rcx
 * 0000000140333F04: mov     eax, [rsi+8D8h]
 * 0000000140333F0A: test    eax, eax
 * 0000000140333F0C: jnz     short loc_140333F65
 * 0000000140333F0E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140333F18: add     rax, rsi
 * 0000000140333F1B: mov     [rsi+8E0h], rax
 * 0000000140333F22: lea     rax, [r12+r13]
 * 0000000140333F26: mov     [rsi+8E8h], rax
 * 0000000140333F2D: movsxd  rax, dword ptr [r13+0]
 * 0000000140333F31: mov     [rsi+8F0h], rax
 * 0000000140333F38: mov     [rsi+8F8h], r8
 * 0000000140333F3F: mov     [rsi+8D8h], ebx
 * 0000000140333F45: jmp     short loc_140333F65
 * 0000000140333F47: test    dword ptr [rsi+974h], 200h
 * 0000000140333F51: jz      short loc_140333F65
 * 0000000140333F53: cmp     r8, 0FFFFFFFFFFFFFFFFh
 * 0000000140333F57: jnz     short loc_140333F65
 * 0000000140333F59: mov     rax, rdx
 * 0000000140333F5C: mov     ecx, r9d
 * 0000000140333F5F: shr     rdx, 20h
 * 0000000140333F63: wrmsr
 * 0000000140333F65: add     r11d, ebx
 * 0000000140333F68: cmp     r11d, [r13+18h]
 * 0000000140333F6C: jb      loc_140333E8C
 * 0000000140333F72: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140333F79: mov     rax, [rsi+190h]
 * 0000000140333F80: lea     rcx, [rbp+20F0h+var_17A0]
 * 0000000140333F87: call    KeGuardDispatchICall
 * 0000000140333F8C: mov     eax, [r13+18h]
 * 0000000140333F90: shl     eax, 0Fh
 * 0000000140333F93: add     [rsi+810h], eax
 * 0000000140333F99: jmp     loc_140333DB4
 * 0000000140333F9E: mov     ecx, [rsi+818h]
 * 0000000140333FA4: test    dl, cl
 * 0000000140333FA6: jz      loc_140333318
 * 0000000140333FAC: mov     r15d, 40000000h
 * 0000000140333FB2: test    [rsi+970h], r15d
 * 0000000140333FB9: jnz     short loc_140333FCE
 * 0000000140333FBB: mov     r14d, eax
 * 0000000140333FBE: and     ecx, 3
 * 0000000140333FC1: cmp     cl, 3
 * 0000000140333FC4: setz    r14b
 * 0000000140333FC8: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 0000000140333FCC: jmp     short loc_14033401F
 * 0000000140333FCE: rdtsc
 * 0000000140333FD0: shl     rdx, 20h
 * 0000000140333FD4: or      rax, rdx
 * 0000000140333FD7: mov     rcx, rax
 * 0000000140333FDA: ror     rax, 3
 * 0000000140333FDE: xor     rcx, rax
 * 0000000140333FE1: mov     rax, 7010008004002001h
 * 0000000140333FEB: mul     rcx
 * 0000000140333FEE: mov     rcx, rdx
 * 0000000140333FF1: mov     [rbp+20F0h+var_17D8], rdx
 * 0000000140333FF8: xor     rcx, rax
 * 0000000140333FFB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140334005: mul     rcx
 * 0000000140334008: shr     rdx, 1
 * 000000014033400B: lea     rax, [rdx+rdx*2]
 * 000000014033400F: cmp     rcx, rax
 * 0000000140334012: mov     eax, 0
 * 0000000140334017: setz    al
 * 000000014033401A: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 000000014033401D: xor     eax, eax
 * 000000014033401F: mov     rbx, [rsi+538h]
 * 0000000140334026: mov     r13d, eax
 * 0000000140334029: mov     [rbp+20F0h+var_205C], eax
 * 000000014033402F: mov     rax, [rsi+170h]
 * 0000000140334036: call    KeGuardDispatchICall
 * 000000014033403B: test    [rsi+970h], r15d
 * 0000000140334042: jnz     short loc_14033405D
 * 0000000140334044: mov     ecx, [rsi+930h]
 * 000000014033404A: cmp     ecx, 7
 * 000000014033404D: jnb     short loc_14033405D
 * 000000014033404F: mov     r15d, 1
 * 0000000140334055: mov     r14d, r15d
 * 0000000140334058: shl     r14b, cl
 * 000000014033405B: jmp     short loc_14033407B
 * 000000014033405D: mov     rax, [rsi+120h]
 * 0000000140334064: xor     edx, edx
 * 0000000140334066: mov     rcx, [rsi+9E0h]
 * 000000014033406D: call    KeGuardDispatchICall
 * 0000000140334072: mov     r14b, 80h
 * 0000000140334075: mov     r15d, 1
 * 000000014033407B: mov     rax, [rsi+130h]
 * 0000000140334082: xor     edx, edx
 * 0000000140334084: mov     rcx, rbx
 * 0000000140334087: call    KeGuardDispatchICall
 * 000000014033408C: mov     r8, [rsi+510h]
 * 0000000140334093: mov     rdx, [r8]
 * 0000000140334096: cmp     rdx, r8
 * 0000000140334099: jz      short loc_1403340C3
 * 000000014033409B: mov     rax, [rsi+6A0h]
 * 00000001403340A2: mov     rcx, rdx
 * 00000001403340A5: sub     rcx, [rsi+6B8h]
 * 00000001403340AC: lock or [rcx+rax], r14b
 * 00000001403340B1: mov     rdx, [rdx]
 * 00000001403340B4: add     r13d, r15d
 * 00000001403340B7: cmp     rdx, r8
 * 00000001403340BA: jnz     short loc_14033409B
 * 00000001403340BC: mov     [rbp+20F0h+var_205C], r13d
 * 00000001403340C3: mov     rax, [rsi+540h]
 * 00000001403340CA: mov     ebx, 4
 * 00000001403340CF: mov     edi, dword ptr [rbp+20F0h+var_20B8]
 * 00000001403340D2: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403340D6: mov     r15, [rax]
 * 00000001403340D9: mov     rax, [rsi+718h]
 * 00000001403340E0: mov     r12d, [rax+r15]
 * 00000001403340E4: mov     rax, [rsi+100h]
 * 00000001403340EB: mov     rdx, rbx
 * 00000001403340EE: mov     rcx, r15
 * 00000001403340F1: call    KeGuardDispatchICall
 * 00000001403340F6: mov     r10, rax
 * 00000001403340F9: xor     eax, eax
 * 00000001403340FB: test    r10, r10
 * 00000001403340FE: jz      loc_14033424D
 * 0000000140334104: mov     rdx, [r10]
 * 0000000140334107: sar     rdx, 10h
 * 000000014033410B: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014033410F: mov     al, [rdx]
 * 0000000140334111: and     al, 7Fh
 * 0000000140334113: cmp     al, 3
 * 0000000140334115: jnz     loc_1403341A2
 * 000000014033411B: mov     r9, [rsi+6A0h]
 * 0000000140334122: mov     r8, r9
 * 0000000140334125: test    [rdx+r9], r14b
 * 0000000140334129: jnz     short loc_140334193
 * 000000014033412B: mov     rax, [rsi+6A8h]
 * 0000000140334132: mov     ecx, [rdx+rax]
 * 0000000140334135: test    [rsi+6C0h], ecx
 * 000000014033413B: jz      short loc_140334193
 * 000000014033413D: xor     eax, eax
 * 000000014033413F: cmp     [rsi+8D8h], eax
 * 0000000140334145: jnz     short loc_140334193
 * 0000000140334147: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140334151: add     rax, rsi
 * 0000000140334154: mov     [rsi+8E0h], rax
 * 000000014033415B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140334165: add     rax, r13
 * 0000000140334168: mov     [rsi+8E8h], rax
 * 000000014033416F: movsxd  rax, dword ptr [r13+0]
 * 0000000140334173: mov     [rsi+8F0h], rax
 * 000000014033417A: mov     eax, 1
 * 000000014033417F: mov     [rsi+8F8h], rdx
 * 0000000140334186: mov     [rsi+8D8h], eax
 * 000000014033418C: mov     r8, [rsi+6A0h]
 * 0000000140334193: mov     al, r14b
 * 0000000140334196: not     al
 * 0000000140334198: lock and [rdx+r8], al
 * 000000014033419D: jmp     loc_14033423B
 * 00000001403341A2: cmp     al, 6
 * 00000001403341A4: jnz     short loc_1403341E8
 * 00000001403341A6: test    edi, edi
 * 00000001403341A8: jz      loc_14033423B
 * 00000001403341AE: mov     rcx, [rsi+668h]
 * 00000001403341B5: mov     rax, [rdx+rcx+20h]
 * 00000001403341BA: cmp     rax, [rsi+318h]
 * 00000001403341C1: jz      short loc_1403341CC
 * 00000001403341C3: cmp     rax, [rsi+320h]
 * 00000001403341CA: jnz     short loc_1403341EC
 * 00000001403341CC: mov     rax, [rsi+328h]
 * 00000001403341D3: cmp     [rdx+rcx+30h], rax
 * 00000001403341D8: jnz     short loc_1403341EC
 * 00000001403341DA: mov     rax, [rsi+330h]
 * 00000001403341E1: cmp     [rdx+rcx+28h], rax
 * 00000001403341E6: jmp     short loc_1403341EA
 * 00000001403341E8: test    al, al
 * 00000001403341EA: jz      short loc_14033423B
 * 00000001403341EC: xor     eax, eax
 * 00000001403341EE: cmp     [rsi+8D8h], eax
 * 00000001403341F4: jnz     short loc_14033423B
 * 00000001403341F6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140334200: add     rax, rsi
 * 0000000140334203: mov     [rsi+8E0h], rax
 * 000000014033420A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140334214: add     rax, r13
 * 0000000140334217: mov     [rsi+8E8h], rax
 * 000000014033421E: movsxd  rax, dword ptr [r13+0]
 * 0000000140334222: mov     [rsi+8F0h], rax
 * 0000000140334229: mov     eax, 1
 * 000000014033422E: mov     [rsi+8F8h], rdx
 * 0000000140334235: mov     [rsi+8D8h], eax
 * 000000014033423B: mov     rax, [rsi+118h]
 * 0000000140334242: mov     rdx, r10
 * 0000000140334245: mov     rcx, r15
 * 0000000140334248: call    KeGuardDispatchICall
 * 000000014033424D: add     rbx, 4
 * 0000000140334251: cmp     rbx, r12
 * 0000000140334254: jb      loc_1403340E4
 * 000000014033425A: mov     r13d, [rbp+20F0h+var_205C]
 * 0000000140334261: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140334268: cmp     r14b, 80h
 * 000000014033426C: jnz     short loc_140334283
 * 000000014033426E: mov     rax, [rsi+128h]
 * 0000000140334275: xor     edx, edx
 * 0000000140334277: mov     rcx, [rsi+9E0h]
 * 000000014033427E: call    KeGuardDispatchICall
 * 0000000140334283: mov     rcx, [rsi+538h]
 * 000000014033428A: xor     edx, edx
 * 000000014033428C: mov     rax, [rsi+138h]
 * 0000000140334293: call    KeGuardDispatchICall
 * 0000000140334298: mov     rax, [rsi+178h]
 * 000000014033429F: call    KeGuardDispatchICall
 * 00000001403342A4: shr     r12, 2
 * 00000001403342A8: add     r13d, r12d
 * 00000001403342AB: shl     r13d, 8
 * 00000001403342AF: add     [rsi+810h], r13d
 * 00000001403342B6: jmp     loc_140333DB4
 * 00000001403342BB: mov     eax, [rsi+818h]
 * 00000001403342C1: test    dl, al
 * 00000001403342C3: jnz     loc_140333318
 * 00000001403342C9: mov     r14, [rsi+538h]
 * 00000001403342D0: xor     eax, eax
 * 00000001403342D2: mov     r15d, eax
 * 00000001403342D5: mov     rax, [rsi+170h]
 * 00000001403342DC: call    KeGuardDispatchICall
 * 00000001403342E1: test    dword ptr [rsi+970h], 40000000h
 * 00000001403342EB: jnz     short loc_140334305
 * 00000001403342ED: mov     ecx, [rsi+930h]
 * 00000001403342F3: cmp     ecx, 7
 * 00000001403342F6: jnb     short loc_140334305
 * 00000001403342F8: mov     r12d, 1
 * 00000001403342FE: mov     ebx, r12d
 * 0000000140334301: shl     bl, cl
 * 0000000140334303: jmp     short loc_140334322
 * 0000000140334305: mov     rax, [rsi+120h]
 * 000000014033430C: xor     edx, edx
 * 000000014033430E: mov     rcx, [rsi+9E0h]
 * 0000000140334315: call    KeGuardDispatchICall
 * 000000014033431A: mov     bl, 80h
 * 000000014033431C: mov     r12d, 1
 * 0000000140334322: mov     rax, [rsi+130h]
 * 0000000140334329: xor     edx, edx
 * 000000014033432B: mov     rcx, r14
 * 000000014033432E: mov     dword ptr [rbp+20F0h+var_20B8], ebx
 * 0000000140334331: call    KeGuardDispatchICall
 * 0000000140334336: mov     r9, [rsi+510h]
 * 000000014033433D: mov     r8, [r9]
 * 0000000140334340: cmp     r8, r9
 * 0000000140334343: jz      loc_1403343E8
 * 0000000140334349: xor     edi, edi
 * 000000014033434B: mov     rdx, r8
 * 000000014033434E: sub     rdx, [rsi+6B8h]
 * 0000000140334355: cmp     bl, 80h
 * 0000000140334358: jz      short loc_1403343C7
 * 000000014033435A: mov     rax, [rsi+6A0h]
 * 0000000140334361: test    [rdx+rax], bl
 * 0000000140334364: jz      short loc_1403343C7
 * 0000000140334366: mov     rax, [rsi+6A8h]
 * 000000014033436D: mov     ecx, [rdx+rax]
 * 0000000140334370: test    [rsi+6C0h], ecx
 * 0000000140334376: jz      short loc_1403343C7
 * 0000000140334378: cmp     [rsi+8D8h], edi
 * 000000014033437E: jnz     short loc_1403343C7
 * 0000000140334380: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033438A: add     rax, rsi
 * 000000014033438D: mov     [rsi+8E0h], rax
 * 0000000140334394: mov     rax, 0B3B74BDEE4453415h
 * 000000014033439E: add     rax, r13
 * 00000001403343A1: mov     [rsi+8E8h], rax
 * 00000001403343A8: movsxd  rax, dword ptr [r13+0]
 * 00000001403343AC: mov     [rsi+8F0h], rax
 * 00000001403343B3: mov     rax, rdx
 * 00000001403343B6: or      rax, r12
 * 00000001403343B9: mov     [rsi+8F8h], rax
 * 00000001403343C0: mov     [rsi+8D8h], r12d
 * 00000001403343C7: mov     rax, [rsi+6A0h]
 * 00000001403343CE: lock or [rdx+rax], bl
 * 00000001403343D2: mov     r8, [r8]
 * 00000001403343D5: add     r15d, r12d
 * 00000001403343D8: cmp     r8, r9
 * 00000001403343DB: jnz     loc_14033434B
 * 00000001403343E1: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403343E8: mov     rcx, [rsi+4F0h]
 * 00000001403343EF: mov     r14, cr8
 * 00000001403343F3: mov     [rbp+20F0h+var_20F0], r14
 * 00000001403343F7: mov     r10d, 0Ch
 * 00000001403343FD: mov     cr8, r10
 * 0000000140334401: mov     rax, [rsi+140h]
 * 0000000140334408: lea     rdx, [rbp+20F0h+var_1658]
 * 000000014033440F: call    KeGuardDispatchICall
 * 0000000140334414: mov     r10, [rsi+4E8h]
 * 000000014033441B: mov     r8, [r10]
 * 000000014033441E: cmp     r8, r10
 * 0000000140334421: jz      loc_1403344BA
 * 0000000140334427: mov     r9b, bl
 * 000000014033442A: movzx   r11d, bl
 * 000000014033442E: not     r9b
 * 0000000140334431: xor     edi, edi
 * 0000000140334433: mov     rbx, 0A3A03F5891C8B4E8h
 * 000000014033443D: mov     r14, 0B3B74BDEE4453415h
 * 0000000140334447: mov     rcx, [rsi+6A0h]
 * 000000014033444E: mov     rdx, r8
 * 0000000140334451: sub     rdx, [rsi+698h]
 * 0000000140334458: movsx   eax, byte ptr [rdx+rcx]
 * 000000014033445C: test    r11d, eax
 * 000000014033445F: jnz     short loc_14033449F
 * 0000000140334461: cmp     [rsi+8D8h], edi
 * 0000000140334467: jnz     short loc_14033449F
 * 0000000140334469: lea     rax, [rsi+rbx]
 * 000000014033446D: mov     [rsi+8E0h], rax
 * 0000000140334474: lea     rax, [r14+r13]
 * 0000000140334478: mov     [rsi+8E8h], rax
 * 000000014033447F: movsxd  rax, dword ptr [r13+0]
 * 0000000140334483: mov     [rsi+8F0h], rax
 * 000000014033448A: mov     [rsi+8F8h], rdx
 * 0000000140334491: mov     [rsi+8D8h], r12d
 * 0000000140334498: mov     rcx, [rsi+6A0h]
 * 000000014033449F: lock and [rdx+rcx], r9b
 * 00000001403344A4: mov     r8, [r8]
 * 00000001403344A7: cmp     r8, r10
 * 00000001403344AA: jnz     short loc_140334447
 * 00000001403344AC: mov     ebx, dword ptr [rbp+20F0h+var_20B8]
 * 00000001403344AF: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403344B6: mov     r14, [rbp+20F0h+var_20F0]
 * 00000001403344BA: mov     rax, [rsi+180h]
 * 00000001403344C1: lea     rcx, [rbp+20F0h+var_1658]
 * 00000001403344C8: call    KeGuardDispatchICall
 * 00000001403344CD: movzx   eax, r14b
 * 00000001403344D1: mov     cr8, rax
 * 00000001403344D5: cmp     bl, 80h
 * 00000001403344D8: jnz     short loc_1403344EF
 * 00000001403344DA: mov     rax, [rsi+128h]
 * 00000001403344E1: xor     edx, edx
 * 00000001403344E3: mov     rcx, [rsi+9E0h]
 * 00000001403344EA: call    KeGuardDispatchICall
 * 00000001403344EF: mov     rcx, [rsi+538h]
 * 00000001403344F6: xor     edx, edx
 * 00000001403344F8: mov     rax, [rsi+138h]
 * 00000001403344FF: call    KeGuardDispatchICall
 * 0000000140334504: mov     rax, [rsi+178h]
 * 000000014033450B: call    KeGuardDispatchICall
 * 0000000140334510: shl     r15d, 8
 * 0000000140334514: add     [rsi+810h], r15d
 * 000000014033451B: jmp     loc_140333DB4
 * 0000000140334520: mov     r14, [r13+8]
 * 0000000140334524: mov     r8d, [r13+10h]
 * 0000000140334528: mov     r9, r14
 * 000000014033452B: add     [rsi+810h], r8d
 * 0000000140334532: mov     rax, r14
 * 0000000140334535: mov     r11d, [rsi+7FCh]
 * 000000014033453C: mov     r15, [rsi+800h]
 * 0000000140334543: lea     rcx, [r14+r8]
 * 0000000140334547: cmp     r14, rcx
 * 000000014033454A: jnb     short loc_14033455C
 * 000000014033454C: mov     edx, 40h ; '@'
 * 0000000140334551: prefetchnta byte ptr [rax]
 * 0000000140334554: add     rax, rdx
 * 0000000140334557: cmp     rax, rcx
 * 000000014033455A: jb      short loc_140334551
 * 000000014033455C: mov     r10d, r8d
 * 000000014033455F: mov     rbx, r15
 * 0000000140334562: shr     r10d, 7
 * 0000000140334566: mov     r12d, 1
 * 000000014033456C: test    r10d, r10d
 * 000000014033456F: jz      short loc_1403345DA
 * 0000000140334571: mov     rsi, 7010008004002001h
 * 000000014033457B: mov     edx, 8
 * 0000000140334580: mov     rax, [r9]
 * 0000000140334583: mov     ecx, r11d
 * 0000000140334586: xor     rax, rbx
 * 0000000140334589: mov     rbx, [r9+8]
 * 000000014033458D: rol     rax, cl
 * 0000000140334590: add     r9, 10h
 * 0000000140334594: xor     rbx, rax
 * 0000000140334597: rol     rbx, cl
 * 000000014033459A: sub     rdx, r12
 * 000000014033459D: jnz     short loc_140334580
 * 000000014033459F: mov     rcx, r9
 * 00000001403345A2: sub     rcx, r14
 * 00000001403345A5: xor     rcx, r15
 * 00000001403345A8: mov     rax, rcx
 * 00000001403345AB: rol     rax, 11h
 * 00000001403345AF: xor     rcx, rax
 * 00000001403345B2: mov     rax, rsi
 * 00000001403345B5: mul     rcx
 * 00000001403345B8: mov     [rbp+20F0h+var_17D0], rdx
 * 00000001403345BF: xor     edx, eax
 * 00000001403345C1: xor     r11d, edx
 * 00000001403345C4: mov     eax, 0FFFFFFFFh
 * 00000001403345C9: and     r11d, 3Fh
 * 00000001403345CD: cmovz   r11d, r12d
 * 00000001403345D1: add     r10d, eax
 * 00000001403345D4: jnz     short loc_14033457B
 * 00000001403345D6: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403345DA: and     r8d, 7Fh
 * 00000001403345DE: cmp     r8d, 8
 * 00000001403345E2: jb      short loc_140334601
 * 00000001403345E4: mov     edx, r8d
 * 00000001403345E7: shr     rdx, 3
 * 00000001403345EB: xor     rbx, [r9]
 * 00000001403345EE: mov     ecx, r11d
 * 00000001403345F1: rol     rbx, cl
 * 00000001403345F4: add     r9, 8
 * 00000001403345F8: add     r8d, 0FFFFFFF8h
 * 00000001403345FC: sub     rdx, r12
 * 00000001403345FF: jnz     short loc_1403345EB
 * 0000000140334601: test    r8d, r8d
 * 0000000140334604: jz      short loc_140334624
 * 0000000140334606: mov     esi, 0FFFFFFFFh
 * 000000014033460B: movzx   eax, byte ptr [r9]
 * 000000014033460F: mov     ecx, r11d
 * 0000000140334612: xor     rbx, rax
 * 0000000140334615: add     r9, r12
 * 0000000140334618: rol     rbx, cl
 * 000000014033461B: add     r8d, esi
 * 000000014033461E: jnz     short loc_14033460B
 * 0000000140334620: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140334624: mov     rax, rbx
 * 0000000140334627: jmp     short loc_14033462B
 * 0000000140334629: xor     ebx, eax
 * 000000014033462B: shr     rax, 1Fh
 * 000000014033462F: test    rax, rax
 * 0000000140334632: jnz     short loc_140334629
 * 0000000140334634: btr     ebx, 1Fh
 * 0000000140334638: mov     r12d, eax
 * 000000014033463B: cmp     ebx, [r13+14h]
 * 000000014033463F: jz      loc_140333DB4
 * 0000000140334645: cmp     [r13+0], eax
 * 0000000140334649: jnz     short loc_140334656
 * 000000014033464B: cmp     [r13+18h], eax
 * 000000014033464F: lea     ecx, [rax+1]
 * 0000000140334652: cmovnz  r12d, ecx
 * 0000000140334656: mov     ecx, [r13+10h]
 * 000000014033465A: mov     rdx, [r13+8]
 * 000000014033465E: test    rcx, rcx
 * 0000000140334661: jz      loc_14033472A
 * 0000000140334667: mov     eax, [rsi+974h]
 * 000000014033466D: mov     r8d, 40h ; '@'
 * 0000000140334673: test    r8b, al
 * 0000000140334676: jz      loc_14033472A
 * 000000014033467C: mov     r13, cr8
 * 0000000140334680: lea     eax, [r8-3Eh]
 * 0000000140334684: mov     cr8, rax
 * 0000000140334688: lea     rax, [rcx-1]
 * 000000014033468C: mov     r14, rdx
 * 000000014033468F: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140334696: add     rax, rdx
 * 0000000140334699: mov     ecx, 0FFFh
 * 000000014033469E: or      rax, rcx
 * 00000001403346A1: mov     [rbp+20F0h+var_20D8], rax
 * 00000001403346A5: lea     rax, [r14-1]
 * 00000001403346A9: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403346AD: movzx   r15d, r13b
 * 00000001403346B1: mov     rax, [rsi+460h]
 * 00000001403346B8: xor     edx, edx
 * 00000001403346BA: mov     rcx, r14
 * 00000001403346BD: call    KeGuardDispatchICall
 * 00000001403346C2: cmp     eax, 0C000022Dh
 * 00000001403346C7: jnz     short loc_1403346F2
 * 00000001403346C9: test    r12d, r12d
 * 00000001403346CC: jnz     short loc_14033471D
 * 00000001403346CE: lea     eax, [r12+1]
 * 00000001403346D3: cmp     r13b, al
 * 00000001403346D6: ja      short loc_1403346FB
 * 00000001403346D8: movzx   r15d, r13b
 * 00000001403346DC: mov     cr8, r15
 * 00000001403346E0: mov     al, [r14]
 * 00000001403346E3: mov     rax, cr8
 * 00000001403346E7: lea     eax, [r12+2]
 * 00000001403346EC: mov     cr8, rax
 * 00000001403346F0: jmp     short loc_1403346B1
 * 00000001403346F2: xor     r10d, r10d
 * 00000001403346F5: test    eax, eax
 * 00000001403346F7: js      short loc_140334720
 * 00000001403346F9: jmp     short loc_1403346FE
 * 00000001403346FB: xor     r10d, r10d
 * 00000001403346FE: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140334702: mov     r8d, 1000h
 * 0000000140334708: add     rax, r8
 * 000000014033470B: add     r14, r8
 * 000000014033470E: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140334712: cmp     rax, [rbp+20F0h+var_20D8]
 * 0000000140334716: jnz     short loc_1403346AD
 * 0000000140334718: jmp     loc_140333621
 * 000000014033471D: xor     r10d, r10d
 * 0000000140334720: mov     cr8, r15
 * 0000000140334724: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140334728: jmp     short loc_14033472D
 * 000000014033472A: xor     r10d, r10d
 * 000000014033472D: mov     eax, [rsi+8D8h]
 * 0000000140334733: mov     ecx, [r13+14h]
 * 0000000140334737: test    eax, eax
 * 0000000140334739: jnz     short loc_140334751
 * 000000014033473B: mov     eax, ebx
 * 000000014033473D: xor     rcx, rax
 * 0000000140334740: mov     rax, [rsi+580h]
 * 0000000140334747: mov     [rax+18h], rcx
 * 000000014033474B: mov     eax, [rsi+8D8h]
 * 0000000140334751: mov     rcx, [r13+8]
 * 0000000140334755: mov     r11, 0B3B74BDEE4453415h
 * 000000014033475F: mov     r14d, 8000h
 * 0000000140334765: test    eax, eax
 * 0000000140334767: jnz     loc_140333635
 * 000000014033476D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140334777: add     rax, rsi
 * 000000014033477A: mov     [rsi+8E0h], rax
 * 0000000140334781: lea     rax, [r11+r13]
 * 0000000140334785: mov     [rsi+8E8h], rax
 * 000000014033478C: movsxd  rax, dword ptr [r13+0]
 * 0000000140334790: mov     [rsi+8F0h], rax
 * 0000000140334797: mov     [rsi+8F8h], rcx
 * 000000014033479E: mov     eax, 1
 * 00000001403347A3: mov     [rsi+8D8h], eax
 * 00000001403347A9: jmp     loc_140333635
 * 00000001403347AE: cmp     r14d, 0Eh
 * 00000001403347B2: jle     loc_140337A2C
 * 00000001403347B8: mov     ebx, 0Fh
 * 00000001403347BD: cmp     r14d, ebx
 * 00000001403347C0: jz      loc_1403378ED
 * 00000001403347C6: cmp     r14d, 15h
 * 00000001403347CA: jz      loc_1403377E7
 * 00000001403347D0: cmp     r14d, 18h
 * 00000001403347D4: jz      loc_140335075
 * 00000001403347DA: cmp     r14d, r10d
 * 00000001403347DD: jz      loc_140334C4A
 * 00000001403347E3: cmp     r14d, 1Ah
 * 00000001403347E7: jz      loc_140334A9B
 * 00000001403347ED: cmp     r14d, 1Bh
 * 00000001403347F1: jnz     loc_14033D4CB
 * 00000001403347F7: mov     eax, [rsi+818h]
 * 00000001403347FD: test    dl, al
 * 00000001403347FF: jz      loc_140333318
 * 0000000140334805: mov     r15, [rsi+598h]
 * 000000014033480C: xor     eax, eax
 * 000000014033480E: mov     r13, [rsi+5A0h]
 * 0000000140334815: mov     r12d, eax
 * 0000000140334818: mov     rbx, [rsi+538h]
 * 000000014033481F: mov     [rbp+20F0h+var_20E8], eax
 * 0000000140334822: mov     rax, [rsi+170h]
 * 0000000140334829: mov     [rbp+20F0h+var_20D8], r15
 * 000000014033482D: call    KeGuardDispatchICall
 * 0000000140334832: test    dword ptr [rsi+970h], 40000000h
 * 000000014033483C: jnz     short loc_140334854
 * 000000014033483E: mov     ecx, [rsi+930h]
 * 0000000140334844: cmp     ecx, 7
 * 0000000140334847: jnb     short loc_140334854
 * 0000000140334849: mov     r14d, 1
 * 000000014033484F: shl     r14b, cl
 * 0000000140334852: jmp     short loc_14033486C
 * 0000000140334854: mov     rax, [rsi+120h]
 * 000000014033485B: xor     edx, edx
 * 000000014033485D: mov     rcx, [rsi+9E0h]
 * 0000000140334864: call    KeGuardDispatchICall
 * 0000000140334869: mov     r14b, 80h
 * 000000014033486C: mov     rax, [rsi+130h]
 * 0000000140334873: xor     edx, edx
 * 0000000140334875: mov     rcx, rbx
 * 0000000140334878: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 000000014033487C: call    KeGuardDispatchICall
 * 0000000140334881: mov     rax, [rsi+130h]
 * 0000000140334888: xor     edx, edx
 * 000000014033488A: mov     rcx, r15
 * 000000014033488D: call    KeGuardDispatchICall
 * 0000000140334892: mov     r9, [rsi+590h]
 * 0000000140334899: xor     eax, eax
 * 000000014033489B: mov     r15d, eax
 * 000000014033489E: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403348A2: mov     r8, [r9]
 * 00000001403348A5: cmp     r8, r9
 * 00000001403348A8: jz      short loc_140334904
 * 00000001403348AA: lea     r12d, [rax+1]
 * 00000001403348AE: lea     rdx, [r8-18h]
 * 00000001403348B2: cmp     rdx, r13
 * 00000001403348B5: jz      short loc_1403348ED
 * 00000001403348B7: mov     rax, [rsi+720h]
 * 00000001403348BE: mov     rdx, [rdx+rax]
 * 00000001403348C2: mov     rax, [rsi+6A8h]
 * 00000001403348C9: mov     ecx, [rdx+rax]
 * 00000001403348CC: test    [rsi+6C0h], ecx
 * 00000001403348D2: jnz     short loc_1403348E1
 * 00000001403348D4: test    r15, r15
 * 00000001403348D7: mov     rax, rdx
 * 00000001403348DA: cmovnz  rax, r12
 * 00000001403348DE: mov     r15, rax
 * 00000001403348E1: mov     rax, [rsi+6A0h]
 * 00000001403348E8: lock or [rdx+rax], r14b
 * 00000001403348ED: mov     r8, [r8]
 * 00000001403348F0: cmp     r8, r9
 * 00000001403348F3: jnz     short loc_1403348AE
 * 00000001403348F5: mov     r12d, [rbp+20F0h+var_20E8]
 * 00000001403348F9: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140334900: mov     [rbp+20F0h+var_20F0], r15
 * 0000000140334904: mov     rbx, [rsi+510h]
 * 000000014033490B: mov     r10, [rbx]
 * 000000014033490E: cmp     r10, rbx
 * 0000000140334911: jz      loc_1403349E2
 * 0000000140334917: mov     edi, [rbp+20F0h+var_20E8]
 * 000000014033491A: mov     r11b, r14b
 * 000000014033491D: movzx   r12d, r14b
 * 0000000140334921: not     r11b
 * 0000000140334924: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140334928: xor     r15d, r15d
 * 000000014033492B: mov     r8, [rsi+6A0h]
 * 0000000140334932: mov     rdx, r10
 * 0000000140334935: sub     rdx, [rsi+6B8h]
 * 000000014033493C: mov     rcx, r8
 * 000000014033493F: movsx   eax, byte ptr [r8+rdx]
 * 0000000140334944: test    r12d, eax
 * 0000000140334947: jnz     short loc_1403349B2
 * 0000000140334949: mov     rax, [rsi+6B0h]
 * 0000000140334950: mov     r9, [rdx+rax]
 * 0000000140334954: test    r9, r9
 * 0000000140334957: jz      short loc_1403349B2
 * 0000000140334959: cmp     r9, r13
 * 000000014033495C: jz      short loc_1403349B2
 * 000000014033495E: cmp     [rsi+8D8h], r15d
 * 0000000140334965: jnz     short loc_1403349B2
 * 0000000140334967: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140334971: add     rax, rsi
 * 0000000140334974: mov     [rsi+8E0h], rax
 * 000000014033497B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140334985: add     rax, r14
 * 0000000140334988: mov     [rsi+8E8h], rax
 * 000000014033498F: movsxd  rax, dword ptr [r14]
 * 0000000140334992: mov     [rsi+8F0h], rax
 * 0000000140334999: mov     eax, 1
 * 000000014033499E: mov     [rsi+8F8h], rdx
 * 00000001403349A5: mov     [rsi+8D8h], eax
 * 00000001403349AB: mov     rcx, [rsi+6A0h]
 * 00000001403349B2: lock and [rcx+rdx], r11b
 * 00000001403349B7: mov     r10, [r10]
 * 00000001403349BA: mov     ecx, 1
 * 00000001403349BF: add     edi, ecx
 * 00000001403349C1: cmp     r10, rbx
 * 00000001403349C4: jnz     loc_14033492B
 * 00000001403349CA: mov     r14d, dword ptr [rbp+20F0h+var_20B8]
 * 00000001403349CE: mov     r15, [rbp+20F0h+var_20F0]
 * 00000001403349D2: mov     [rbp+20F0h+var_20E8], edi
 * 00000001403349D5: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403349DC: mov     r12d, [rbp+20F0h+var_20E8]
 * 00000001403349E0: jmp     short loc_1403349E7
 * 00000001403349E2: mov     ecx, 1
 * 00000001403349E7: test    r15, r15
 * 00000001403349EA: jz      short loc_140334A3D
 * 00000001403349EC: cmp     r15, rcx
 * 00000001403349EF: jz      short loc_140334A04
 * 00000001403349F1: mov     rax, [rsi+6A0h]
 * 00000001403349F8: mov     cl, r14b
 * 00000001403349FB: not     cl
 * 00000001403349FD: lock and [r15+rax], cl
 * 0000000140334A02: jmp     short loc_140334A3D
 * 0000000140334A04: mov     r10, [rsi+590h]
 * 0000000140334A0B: mov     r9, [r10]
 * 0000000140334A0E: jmp     short loc_140334A38
 * 0000000140334A10: lea     r8, [r9-18h]
 * 0000000140334A14: cmp     r8, r13
 * 0000000140334A17: jz      short loc_140334A35
 * 0000000140334A19: mov     rax, [rsi+720h]
 * 0000000140334A20: mov     dl, r14b
 * 0000000140334A23: not     dl
 * 0000000140334A25: mov     r8, [r8+rax]
 * 0000000140334A29: mov     rax, [rsi+6A0h]
 * 0000000140334A30: lock and [r8+rax], dl
 * 0000000140334A35: mov     r9, [r9]
 * 0000000140334A38: cmp     r9, r10
 * 0000000140334A3B: jnz     short loc_140334A10
 * 0000000140334A3D: mov     rax, [rsi+138h]
 * 0000000140334A44: xor     edx, edx
 * 0000000140334A46: mov     rcx, [rbp+20F0h+var_20D8]
 * 0000000140334A4A: call    KeGuardDispatchICall
 * 0000000140334A4F: cmp     r14b, 80h
 * 0000000140334A53: jnz     short loc_140334A6A
 * 0000000140334A55: mov     rax, [rsi+128h]
 * 0000000140334A5C: xor     edx, edx
 * 0000000140334A5E: mov     rcx, [rsi+9E0h]
 * 0000000140334A65: call    KeGuardDispatchICall
 * 0000000140334A6A: mov     rcx, [rsi+538h]
 * 0000000140334A71: xor     edx, edx
 * 0000000140334A73: mov     rax, [rsi+138h]
 * 0000000140334A7A: call    KeGuardDispatchICall
 * 0000000140334A7F: mov     rax, [rsi+178h]
 * 0000000140334A86: call    KeGuardDispatchICall
 * 0000000140334A8B: shl     r12d, 8
 * 0000000140334A8F: add     [rsi+810h], r12d
 * 0000000140334A96: jmp     loc_140333DB4
 * 0000000140334A9B: mov     eax, [rsi+818h]
 * 0000000140334AA1: test    dl, al
 * 0000000140334AA3: jnz     loc_140333318
 * 0000000140334AA9: mov     r12, [rsi+598h]
 * 0000000140334AB0: xor     eax, eax
 * 0000000140334AB2: mov     r13, [rsi+5A0h]
 * 0000000140334AB9: mov     r15d, eax
 * 0000000140334ABC: mov     r14, [rsi+538h]
 * 0000000140334AC3: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 0000000140334AC6: mov     rax, [rsi+170h]
 * 0000000140334ACD: mov     [rbp+20F0h+var_20F0], r12
 * 0000000140334AD1: call    KeGuardDispatchICall
 * 0000000140334AD6: test    dword ptr [rsi+970h], 40000000h
 * 0000000140334AE0: jnz     short loc_140334AF6
 * 0000000140334AE2: mov     ecx, [rsi+930h]
 * 0000000140334AE8: cmp     ecx, 7
 * 0000000140334AEB: jnb     short loc_140334AF6
 * 0000000140334AED: mov     ebx, 1
 * 0000000140334AF2: shl     bl, cl
 * 0000000140334AF4: jmp     short loc_140334B0D
 * 0000000140334AF6: mov     rax, [rsi+120h]
 * 0000000140334AFD: xor     edx, edx
 * 0000000140334AFF: mov     rcx, [rsi+9E0h]
 * 0000000140334B06: call    KeGuardDispatchICall
 * 0000000140334B0B: mov     bl, 80h
 * 0000000140334B0D: mov     rax, [rsi+130h]
 * 0000000140334B14: xor     edx, edx
 * 0000000140334B16: mov     rcx, r14
 * 0000000140334B19: call    KeGuardDispatchICall
 * 0000000140334B1E: mov     r8, [rsi+510h]
 * 0000000140334B25: mov     r14d, 1
 * 0000000140334B2B: mov     rdx, [r8]
 * 0000000140334B2E: cmp     rdx, r8
 * 0000000140334B31: jz      short loc_140334B57
 * 0000000140334B33: mov     rax, [rsi+6A0h]
 * 0000000140334B3A: mov     rcx, rdx
 * 0000000140334B3D: sub     rcx, [rsi+6B8h]
 * 0000000140334B44: lock or [rcx+rax], bl
 * 0000000140334B48: mov     rdx, [rdx]
 * 0000000140334B4B: add     r15d, r14d
 * 0000000140334B4E: cmp     rdx, r8
 * 0000000140334B51: jnz     short loc_140334B33
 * 0000000140334B53: mov     dword ptr [rbp+20F0h+var_20B8], r15d
 * 0000000140334B57: mov     rax, [rsi+130h]
 * 0000000140334B5E: xor     edx, edx
 * 0000000140334B60: mov     rcx, r12
 * 0000000140334B63: call    KeGuardDispatchICall
 * 0000000140334B68: mov     r11, [rsi+590h]
 * 0000000140334B6F: mov     r10, [r11]
 * 0000000140334B72: cmp     r10, r11
 * 0000000140334B75: jz      loc_140334C34
 * 0000000140334B7B: mov     rdi, [rbp+20F0h+var_20D0]
 * 0000000140334B7F: xor     r12d, r12d
 * 0000000140334B82: mov     r15, 0B3B74BDEE4453415h
 * 0000000140334B8C: mov     rcx, r10
 * 0000000140334B8F: sub     rcx, [rsi+728h]
 * 0000000140334B96: cmp     rcx, r13
 * 0000000140334B99: jz      short loc_140334C19
 * 0000000140334B9B: mov     r9, [rsi+6A0h]
 * 0000000140334BA2: mov     rax, [rsi+720h]
 * 0000000140334BA9: mov     rdx, r9
 * 0000000140334BAC: mov     r8, [rcx+rax]
 * 0000000140334BB0: test    [r8+r9], bl
 * 0000000140334BB4: jnz     short loc_140334C10
 * 0000000140334BB6: mov     rax, [rsi+6A8h]
 * 0000000140334BBD: mov     ecx, [r8+rax]
 * 0000000140334BC1: test    [rsi+6C0h], ecx
 * 0000000140334BC7: jz      short loc_140334C10
 * 0000000140334BC9: cmp     [rsi+8D8h], r12d
 * 0000000140334BD0: jnz     short loc_140334C10
 * 0000000140334BD2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140334BDC: add     rax, rsi
 * 0000000140334BDF: mov     [rsi+8E0h], rax
 * 0000000140334BE6: lea     rax, [rdi+r15]
 * 0000000140334BEA: mov     [rsi+8E8h], rax
 * 0000000140334BF1: movsxd  rax, dword ptr [rdi]
 * 0000000140334BF4: mov     [rsi+8F0h], rax
 * 0000000140334BFB: mov     [rsi+8F8h], r8
 * 0000000140334C02: mov     [rsi+8D8h], r14d
 * 0000000140334C09: mov     rdx, [rsi+6A0h]
 * 0000000140334C10: mov     al, bl
 * 0000000140334C12: not     al
 * 0000000140334C14: lock and [r8+rdx], al
 * 0000000140334C19: mov     r10, [r10]
 * 0000000140334C1C: cmp     r10, r11
 * 0000000140334C1F: jnz     loc_140334B8C
 * 0000000140334C25: mov     r15d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140334C29: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140334C30: mov     r12, [rbp+20F0h+var_20F0]
 * 0000000140334C34: mov     rax, [rsi+138h]
 * 0000000140334C3B: xor     edx, edx
 * 0000000140334C3D: mov     rcx, r12
 * 0000000140334C40: call    KeGuardDispatchICall
 * 0000000140334C45: jmp     loc_1403344D5
 * 0000000140334C4A: mov     r12, [rsi+520h]
 * 0000000140334C51: xor     eax, eax
 * 0000000140334C53: mov     [rbp+20F0h+var_2090], eax
 * 0000000140334C56: mov     rax, [rsi+370h]
 * 0000000140334C5D: call    KeGuardDispatchICall
 * 0000000140334C62: mov     [rbp+20F0h+var_20A0], rax
 * 0000000140334C66: cli
 * 0000000140334C67: mov     rcx, gs:20h
 * 0000000140334C70: mov     rax, [rsi+630h]
 * 0000000140334C77: mov     rcx, [rcx+rax]
 * 0000000140334C7B: sti
 * 0000000140334C7C: mov     rax, [rsi+160h]
 * 0000000140334C83: call    KeGuardDispatchICall
 * 0000000140334C88: mov     rcx, [rsi+528h]
 * 0000000140334C8F: mov     ebx, 1
 * 0000000140334C94: mov     rax, [rsi+0E8h]
 * 0000000140334C9B: mov     dl, bl
 * 0000000140334C9D: call    KeGuardDispatchICall
 * 0000000140334CA2: mov     rax, [rsi+600h]
 * 0000000140334CA9: mov     rcx, [rax]
 * 0000000140334CAC: mov     r13d, [rcx]
 * 0000000140334CAF: lea     rdx, [rcx+10h]
 * 0000000140334CB3: mov     [rbp+20F0h+var_20F0], rdx
 * 0000000140334CB7: lea     rax, ds:0[r13*2]
 * 0000000140334CBF: add     rax, r13
 * 0000000140334CC2: lea     rax, [rdx+rax*8]
 * 0000000140334CC6: mov     [rbp+20F0h+var_20D8], rax
 * 0000000140334CCA: xor     eax, eax
 * 0000000140334CCC: mov     [rbp+20F0h+var_20E8], eax
 * 0000000140334CCF: cmp     [rcx+0Ch], al
 * 0000000140334CD2: jz      short loc_140334CE8
 * 0000000140334CD4: mov     r13d, eax
 * 0000000140334CD7: mov     rax, [r12]
 * 0000000140334CDB: jmp     short loc_140334CE3
 * 0000000140334CDD: mov     rax, [rax]
 * 0000000140334CE0: add     r13d, ebx
 * 0000000140334CE3: cmp     rax, r12
 * 0000000140334CE6: jnz     short loc_140334CDD
 * 0000000140334CE8: mov     r8d, [rsi+7F8h]
 * 0000000140334CEF: mov     r15d, r13d
 * 0000000140334CF2: shl     r15d, 3
 * 0000000140334CF6: rdtsc
 * 0000000140334CF8: shl     rdx, 20h
 * 0000000140334CFC: mov     r9, 7010008004002001h
 * 0000000140334D06: or      rax, rdx
 * 0000000140334D09: mov     rcx, rax
 * 0000000140334D0C: ror     rax, 3
 * 0000000140334D10: xor     rcx, rax
 * 0000000140334D13: mov     rax, r9
 * 0000000140334D16: mul     rcx
 * 0000000140334D19: mov     rbx, rax
 * 0000000140334D1C: mov     [rbp+20F0h+var_17C8], rdx
 * 0000000140334D23: xor     ebx, edx
 * 0000000140334D25: and     ebx, 7FFh
 * 0000000140334D2B: rdtsc
 * 0000000140334D2D: shl     rdx, 20h
 * 0000000140334D31: or      rax, rdx
 * 0000000140334D34: mov     rcx, rax
 * 0000000140334D37: ror     rax, 3
 * 0000000140334D3B: xor     rcx, rax
 * 0000000140334D3E: mov     rax, r9
 * 0000000140334D41: mul     rcx
 * 0000000140334D44: lea     ecx, [rbx+1]
 * 0000000140334D47: xor     rax, rdx
 * 0000000140334D4A: mov     [rbp+20F0h+var_17C0], rdx
 * 0000000140334D51: xor     edx, edx
 * 0000000140334D53: div     rcx
 * 0000000140334D56: mov     rax, [rsi+0F0h]
 * 0000000140334D5D: mov     ecx, 200h
 * 0000000140334D62: mov     r14, rdx
 * 0000000140334D65: lea     edx, [rbx+r15]
 * 0000000140334D69: call    KeGuardDispatchICall
 * 0000000140334D6E: mov     r11, rax
 * 0000000140334D71: xor     eax, eax
 * 0000000140334D73: test    r11, r11
 * 0000000140334D76: jnz     short loc_140334D86
 * 0000000140334D78: lea     ecx, [rax+1]
 * 0000000140334D7B: add     [rsi+9F8h], ecx
 * 0000000140334D81: jmp     loc_140334ED7
 * 0000000140334D86: mov     r10d, r14d
 * 0000000140334D89: mov     r9, r11
 * 0000000140334D8C: cmp     r14d, 8
 * 0000000140334D90: jb      short loc_140334DE6
 * 0000000140334D92: mov     r8d, r14d
 * 0000000140334D95: mov     esi, 1
 * 0000000140334D9A: shr     r8, 3
 * 0000000140334D9E: mov     rdi, 7010008004002001h
 * 0000000140334DA8: rdtsc
 * 0000000140334DAA: shl     rdx, 20h
 * 0000000140334DAE: add     r10d, 0FFFFFFF8h
 * 0000000140334DB2: or      rax, rdx
 * 0000000140334DB5: mov     rcx, rax
 * 0000000140334DB8: ror     rax, 3
 * 0000000140334DBC: xor     rcx, rax
 * 0000000140334DBF: mov     rax, rdi
 * 0000000140334DC2: mul     rcx
 * 0000000140334DC5: mov     [rbp+20F0h+var_17B8], rdx
 * 0000000140334DCC: xor     rdx, rax
 * 0000000140334DCF: mov     [r9], rdx
 * 0000000140334DD2: add     r9, 8
 * 0000000140334DD6: sub     r8, rsi
 * 0000000140334DD9: jnz     short loc_140334DA8
 * 0000000140334DDB: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140334DDF: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140334DE6: test    r10d, r10d
 * 0000000140334DE9: jz      short loc_140334E2E
 * 0000000140334DEB: rdtsc
 * 0000000140334DED: shl     rdx, 20h
 * 0000000140334DF1: or      rax, rdx
 * 0000000140334DF4: mov     rcx, rax
 * 0000000140334DF7: ror     rax, 3
 * 0000000140334DFB: xor     rcx, rax
 * 0000000140334DFE: mov     rax, 7010008004002001h
 * 0000000140334E08: mul     rcx
 * 0000000140334E0B: mov     ecx, 0FFFFFFFFh
 * 0000000140334E10: mov     [rbp+20F0h+var_16D0], rdx
 * 0000000140334E17: xor     rdx, rax
 * 0000000140334E1A: mov     eax, 1
 * 0000000140334E1F: mov     [r9], dl
 * 0000000140334E22: add     r9, rax
 * 0000000140334E25: shr     rdx, 8
 * 0000000140334E29: add     r10d, ecx
 * 0000000140334E2C: jnz     short loc_140334E1F
 * 0000000140334E2E: mov     r10d, r14d
 * 0000000140334E31: sub     ebx, r14d
 * 0000000140334E34: mov     r8d, r15d
 * 0000000140334E37: mov     r14d, 1
 * 0000000140334E3D: add     r8, r10
 * 0000000140334E40: mov     r15, 7010008004002001h
 * 0000000140334E4A: add     r8, r11
 * 0000000140334E4D: cmp     ebx, 8
 * 0000000140334E50: jb      short loc_140334E8B
 * 0000000140334E52: mov     r9d, ebx
 * 0000000140334E55: shr     r9, 3
 * 0000000140334E59: rdtsc
 * 0000000140334E5B: shl     rdx, 20h
 * 0000000140334E5F: add     ebx, 0FFFFFFF8h
 * 0000000140334E62: or      rax, rdx
 * 0000000140334E65: mov     rcx, rax
 * 0000000140334E68: ror     rax, 3
 * 0000000140334E6C: xor     rcx, rax
 * 0000000140334E6F: mov     rax, r15
 * 0000000140334E72: mul     rcx
 * 0000000140334E75: mov     [rbp+20F0h+var_16C8], rdx
 * 0000000140334E7C: xor     rdx, rax
 * 0000000140334E7F: mov     [r8], rdx
 * 0000000140334E82: add     r8, 8
 * 0000000140334E86: sub     r9, r14
 * 0000000140334E89: jnz     short loc_140334E59
 * 0000000140334E8B: test    ebx, ebx
 * 0000000140334E8D: jz      short loc_140334EC5
 * 0000000140334E8F: rdtsc
 * 0000000140334E91: shl     rdx, 20h
 * 0000000140334E95: or      rax, rdx
 * 0000000140334E98: mov     rcx, rax
 * 0000000140334E9B: ror     rax, 3
 * 0000000140334E9F: xor     rcx, rax
 * 0000000140334EA2: mov     rax, r15
 * 0000000140334EA5: mul     rcx
 * 0000000140334EA8: mov     [rbp+20F0h+var_16A8], rdx
 * 0000000140334EAF: xor     rdx, rax
 * 0000000140334EB2: mov     eax, 0FFFFFFFFh
 * 0000000140334EB7: mov     [r8], dl
 * 0000000140334EBA: add     r8, r14
 * 0000000140334EBD: shr     rdx, 8
 * 0000000140334EC1: add     ebx, eax
 * 0000000140334EC3: jnz     short loc_140334EB7
 * 0000000140334EC5: lea     r15, [r10+r11]
 * 0000000140334EC9: mov     [rbp+20F0h+var_1E40], r11
 * 0000000140334ED0: test    r15, r15
 * 0000000140334ED3: jnz     short loc_140334EE3
 * 0000000140334ED5: xor     eax, eax
 * 0000000140334ED7: mov     [rbp+20F0h+var_1E40], rax
 * 0000000140334EDE: jmp     loc_140335018
 * 0000000140334EE3: mov     rbx, [r12]
 * 0000000140334EE7: cmp     rbx, r12
 * 0000000140334EEA: jz      short loc_140334F3E
 * 0000000140334EEC: mov     edi, [rbp+20F0h+var_20E8]
 * 0000000140334EEF: mov     rax, [rsi+738h]
 * 0000000140334EF6: mov     rcx, rbx
 * 0000000140334EF9: sub     rcx, [rsi+730h]
 * 0000000140334F00: mov     r14, [rcx+rax]
 * 0000000140334F04: mov     rax, [rsi+2A0h]
 * 0000000140334F0B: mov     rcx, r14
 * 0000000140334F0E: call    KeGuardDispatchICall
 * 0000000140334F13: test    eax, eax
 * 0000000140334F15: jnz     short loc_140334F2B
 * 0000000140334F17: cmp     edi, r13d
 * 0000000140334F1A: jnb     short loc_140334F2B
 * 0000000140334F1C: mov     eax, edi
 * 0000000140334F1E: mov     [r15+rax*8], r14
 * 0000000140334F22: mov     eax, 1
 * 0000000140334F27: add     edi, eax
 * 0000000140334F29: jmp     short loc_140334F30
 * 0000000140334F2B: mov     eax, 1
 * 0000000140334F30: mov     rbx, [rbx]
 * 0000000140334F33: add     [rbp+20F0h+var_2090], eax
 * 0000000140334F36: cmp     rbx, r12
 * 0000000140334F39: jnz     short loc_140334EEF
 * 0000000140334F3B: mov     [rbp+20F0h+var_20E8], edi
 * 0000000140334F3E: mov     r14d, [rbp+20F0h+var_20E8]
 * 0000000140334F42: mov     rcx, r15
 * 0000000140334F45: mov     rax, [rsi+390h]
 * 0000000140334F4C: mov     edx, r14d
 * 0000000140334F4F: call    KeGuardDispatchICall
 * 0000000140334F54: mov     r12, [rbp+20F0h+var_20F0]
 * 0000000140334F58: mov     r13, [rbp+20F0h+var_20D8]
 * 0000000140334F5C: mov     rdi, [rbp+20F0h+var_20D0]
 * 0000000140334F60: mov     rbx, [r12+8]
 * 0000000140334F65: mov     rax, [rsi+2A0h]
 * 0000000140334F6C: mov     rcx, rbx
 * 0000000140334F6F: call    KeGuardDispatchICall
 * 0000000140334F74: test    eax, eax
 * 0000000140334F76: jnz     loc_140335004
 * 0000000140334F7C: xor     eax, eax
 * 0000000140334F7E: lea     edx, [r14-1]
 * 0000000140334F82: mov     r8d, eax
 * 0000000140334F85: test    edx, edx
 * 0000000140334F87: js      short loc_140334FB8
 * 0000000140334F89: lea     ecx, [rdx+r8]
 * 0000000140334F8D: sar     ecx, 1
 * 0000000140334F8F: movsxd  rax, ecx
 * 0000000140334F92: mov     r9, [r15+rax*8]
 * 0000000140334F96: cmp     rbx, r9
 * 0000000140334F99: jnb     short loc_140334FA6
 * 0000000140334F9B: xor     eax, eax
 * 0000000140334F9D: test    ecx, ecx
 * 0000000140334F9F: jz      short loc_140334FB8
 * 0000000140334FA1: lea     edx, [rcx-1]
 * 0000000140334FA4: jmp     short loc_140334FAC
 * 0000000140334FA6: jbe     short loc_140334FB1
 * 0000000140334FA8: lea     r8d, [rcx+1]
 * 0000000140334FAC: cmp     edx, r8d
 * 0000000140334FAF: jge     short loc_140334F89
 * 0000000140334FB1: cmp     edx, r8d
 * 0000000140334FB4: jge     short loc_140335004
 * 0000000140334FB6: xor     eax, eax
 * 0000000140334FB8: cmp     [rsi+8D8h], eax
 * 0000000140334FBE: jnz     short loc_140335004
 * 0000000140334FC0: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140334FCA: add     rax, rsi
 * 0000000140334FCD: mov     [rsi+8E0h], rax
 * 0000000140334FD4: mov     rax, 0B3B74BDEE4453415h
 * 0000000140334FDE: add     rax, rdi
 * 0000000140334FE1: mov     [rsi+8E8h], rax
 * 0000000140334FE8: movsxd  rax, dword ptr [rdi]
 * 0000000140334FEB: mov     [rsi+8F0h], rax
 * 0000000140334FF2: mov     eax, 1
 * 0000000140334FF7: mov     [rsi+8F8h], rbx
 * 0000000140334FFE: mov     [rsi+8D8h], eax
 * 0000000140335004: add     r12, 18h
 * 0000000140335008: cmp     r12, r13
 * 000000014033500B: jb      loc_140334F60
 * 0000000140335011: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140335018: mov     rcx, [rsi+528h]
 * 000000014033501F: mov     rax, [rsi+110h]
 * 0000000140335026: call    KeGuardDispatchICall
 * 000000014033502B: mov     rax, [rsi+168h]
 * 0000000140335032: call    KeGuardDispatchICall
 * 0000000140335037: mov     rax, [rsi+378h]
 * 000000014033503E: mov     rcx, [rbp+20F0h+var_20A0]
 * 0000000140335042: call    KeGuardDispatchICall
 * 0000000140335047: xor     eax, eax
 * 0000000140335049: cmp     [rbp+20F0h+var_1E40], rax
 * 0000000140335050: jz      loc_140333DB4
 * 0000000140335056: mov     eax, [rbp+20F0h+var_2090]
 * 0000000140335059: shl     eax, 9
 * 000000014033505C: add     [rsi+810h], eax
 * 0000000140335062: mov     rax, [rsi+0F8h]
 * 0000000140335069: mov     rcx, [rbp+20F0h+var_1E40]
 * 0000000140335070: jmp     loc_140333DAF
 * 0000000140335075: mov     r15d, 40000000h
 * 000000014033507B: test    [rsi+970h], r15d
 * 0000000140335082: jz      short loc_1403350E0
 * 0000000140335084: test    dword ptr [rsi+974h], 1000h
 * 000000014033508E: jnz     short loc_1403350E0
 * 0000000140335090: rdtsc
 * 0000000140335092: shl     rdx, 20h
 * 0000000140335096: or      rax, rdx
 * 0000000140335099: mov     rcx, rax
 * 000000014033509C: ror     rax, 3
 * 00000001403350A0: xor     rcx, rax
 * 00000001403350A3: mov     rax, 7010008004002001h
 * 00000001403350AD: mul     rcx
 * 00000001403350B0: mov     rcx, rdx
 * 00000001403350B3: mov     [rbp+20F0h+var_16A0], rdx
 * 00000001403350BA: xor     rcx, rax
 * 00000001403350BD: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001403350C7: mul     rcx
 * 00000001403350CA: shr     rdx, 2
 * 00000001403350CE: lea     rax, [rdx+rdx*4]
 * 00000001403350D2: mov     edx, 1
 * 00000001403350D7: sub     rcx, rax
 * 00000001403350DA: mov     [rsi+80Ch], ecx
 * 00000001403350E0: mov     ecx, [rsi+80Ch]
 * 00000001403350E6: xor     eax, eax
 * 00000001403350E8: test    ecx, ecx
 * 00000001403350EA: jz      loc_140337659
 * 00000001403350F0: sub     ecx, 1
 * 00000001403350F3: jz      loc_1403374FD
 * 00000001403350F9: sub     ecx, 1
 * 00000001403350FC: jz      loc_14033735B
 * 0000000140335102: sub     ecx, 1
 * 0000000140335105: jz      loc_140335456
 * 000000014033510B: sub     ecx, 1
 * 000000014033510E: jz      loc_1403352B1
 * 0000000140335114: cmp     ecx, 1
 * 0000000140335117: jnz     loc_1403377D8
 * 000000014033511D: mov     rbx, r13
 * 0000000140335120: mov     [rbp+20F0h+var_204D], 0FFh
 * 0000000140335127: mov     r12d, eax
 * 000000014033512A: mov     r14d, eax
 * 000000014033512D: mov     r15d, eax
 * 0000000140335130: jmp     short loc_140335134
 * 0000000140335132: xor     eax, eax
 * 0000000140335134: mov     [rbp+20F0h+var_1DA0], rax
 * 000000014033513B: lea     r9, [rbp+20F0h+var_1EE8]
 * 0000000140335142: mov     rax, [rsi+428h]
 * 0000000140335149: lea     r8, [rbp+20F0h+var_204D]
 * 0000000140335150: lea     rdx, [rbp+20F0h+var_1DA0]
 * 0000000140335157: mov     ecx, r14d
 * 000000014033515A: call    KeGuardDispatchICall
 * 000000014033515F: test    eax, eax
 * 0000000140335161: jz      loc_140335290
 * 0000000140335167: mov     r13d, 1
 * 000000014033516D: mov     rax, [rsi+200h]
 * 0000000140335174: lea     rdx, [rbp+20F0h+var_1698]
 * 000000014033517B: mov     rcx, [rbp+20F0h+var_1EE8]
 * 0000000140335182: add     r12d, r13d
 * 0000000140335185: call    KeGuardDispatchICall
 * 000000014033518A: test    rax, rax
 * 000000014033518D: jnz     loc_140335264
 * 0000000140335193: test    dword ptr [rsi+970h], 40000000h
 * 000000014033519D: jz      short loc_1403351E5
 * 000000014033519F: mov     rcx, [rsi+0A50h]
 * 00000001403351A6: lea     edx, [rax+30h]
 * 00000001403351A9: lea     r8d, [rax+6]
 * 00000001403351AD: mov     rax, [rbx]
 * 00000001403351B0: add     edx, 0FFFFFFF8h
 * 00000001403351B3: mov     [rcx], rax
 * 00000001403351B6: add     rbx, 8
 * 00000001403351BA: add     rcx, 8
 * 00000001403351BE: sub     r8, r13
 * 00000001403351C1: jnz     short loc_1403351AD
 * 00000001403351C3: test    edx, edx
 * 00000001403351C5: jz      short loc_1403351DE
 * 00000001403351C7: mov     esi, 0FFFFFFFFh
 * 00000001403351CC: mov     al, [rbx]
 * 00000001403351CE: add     rbx, r13
 * 00000001403351D1: mov     [rcx], al
 * 00000001403351D3: add     rcx, r13
 * 00000001403351D6: add     edx, esi
 * 00000001403351D8: jnz     short loc_1403351CC
 * 00000001403351DA: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403351DE: mov     rbx, [rsi+0A50h]
 * 00000001403351E5: mov     rax, [rbp+20F0h+var_1EE8]
 * 00000001403351EC: mov     [rbx+18h], rax
 * 00000001403351F0: mov     rax, [rsi+580h]
 * 00000001403351F7: mov     [rax], rbx
 * 00000001403351FA: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140335201: mov     rax, [rbp+20F0h+var_1EE8]
 * 0000000140335208: mov     rcx, [rsi+580h]
 * 000000014033520F: mov     [rcx+8], rax
 * 0000000140335213: xor     eax, eax
 * 0000000140335215: mov     dword ptr [rcx+14h], 1000h
 * 000000014033521C: cmp     [rsi+8D8h], eax
 * 0000000140335222: jnz     short loc_140335264
 * 0000000140335224: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033522E: add     rax, rsi
 * 0000000140335231: mov     [rsi+8E0h], rax
 * 0000000140335238: mov     rax, 0B3B74BDEE4453415h
 * 0000000140335242: add     rax, rbx
 * 0000000140335245: mov     [rsi+8E8h], rax
 * 000000014033524C: movsxd  rax, dword ptr [rbx]
 * 000000014033524F: mov     [rsi+8F0h], rax
 * 0000000140335256: mov     [rsi+8F8h], r15
 * 000000014033525D: mov     [rsi+8D8h], r13d
 * 0000000140335264: mov     rax, [rsi+428h]
 * 000000014033526B: lea     r9, [rbp+20F0h+var_1EE8]
 * 0000000140335272: lea     r8, [rbp+20F0h+var_204D]
 * 0000000140335279: mov     ecx, r14d
 * 000000014033527C: lea     rdx, [rbp+20F0h+var_1DA0]
 * 0000000140335283: call    KeGuardDispatchICall
 * 0000000140335288: test    eax, eax
 * 000000014033528A: jnz     loc_14033516D
 * 0000000140335290: mov     edx, 1
 * 0000000140335295: add     r14d, edx
 * 0000000140335298: add     r15, rdx
 * 000000014033529B: cmp     r14d, 3
 * 000000014033529F: jb      loc_140335132
 * 00000001403352A5: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403352AC: jmp     loc_14033779A
 * 00000001403352B1: mov     r12d, eax
 * 00000001403352B4: mov     [rbp+20F0h+var_2078], eax
 * 00000001403352B7: mov     rax, [rsi+310h]
 * 00000001403352BE: xor     ecx, ecx
 * 00000001403352C0: call    KeGuardDispatchICall
 * 00000001403352C5: mov     r15, rax
 * 00000001403352C8: xor     eax, eax
 * 00000001403352CA: test    r15, r15
 * 00000001403352CD: jz      loc_140337795
 * 00000001403352D3: mov     rdi, [rbp+20F0h+var_20D0]
 * 00000001403352D7: mov     r13d, eax
 * 00000001403352DA: mov     [rbp+20F0h+var_1D98], rax
 * 00000001403352E1: lea     rdx, [rbp+20F0h+var_1D98]
 * 00000001403352E8: mov     rax, [rsi+308h]
 * 00000001403352EF: mov     rcx, r15
 * 00000001403352F2: mov     rbx, rdi
 * 00000001403352F5: mov     r12d, 1
 * 00000001403352FB: call    KeGuardDispatchICall
 * 0000000140335300: mov     r14, rax
 * 0000000140335303: test    rax, rax
 * 0000000140335306: jz      loc_14033542A
 * 000000014033530C: lea     edi, [r12+5]
 * 0000000140335311: xor     r13d, r13d
 * 0000000140335314: mov     rax, [rsi+200h]
 * 000000014033531B: lea     rdx, [rbp+20F0h+var_1690]
 * 0000000140335322: mov     rcx, r14
 * 0000000140335325: inc     r12d
 * 0000000140335328: call    KeGuardDispatchICall
 * 000000014033532D: test    rax, rax
 * 0000000140335330: jnz     loc_140335400
 * 0000000140335336: test    dword ptr [rsi+970h], 40000000h
 * 0000000140335340: lea     r9d, [rax+1]
 * 0000000140335344: jz      short loc_14033538C
 * 0000000140335346: mov     rcx, [rsi+0A50h]
 * 000000014033534D: lea     edx, [rax+30h]
 * 0000000140335350: mov     r8, rdi
 * 0000000140335353: mov     rax, [rbx]
 * 0000000140335356: add     edx, 0FFFFFFF8h
 * 0000000140335359: mov     [rcx], rax
 * 000000014033535C: add     rbx, 8
 * 0000000140335360: add     rcx, 8
 * 0000000140335364: sub     r8, r9
 * 0000000140335367: jnz     short loc_140335353
 * 0000000140335369: test    edx, edx
 * 000000014033536B: jz      short loc_140335385
 * 000000014033536D: mov     r13d, 0FFFFFFFFh
 * 0000000140335373: mov     al, [rbx]
 * 0000000140335375: add     rbx, r9
 * 0000000140335378: mov     [rcx], al
 * 000000014033537A: add     rcx, r9
 * 000000014033537D: add     edx, r13d
 * 0000000140335380: jnz     short loc_140335373
 * 0000000140335382: xor     r13d, r13d
 * 0000000140335385: mov     rbx, [rsi+0A50h]
 * 000000014033538C: mov     [rbx+18h], r14
 * 0000000140335390: mov     [rbx+20h], r15
 * 0000000140335394: mov     rax, [rsi+580h]
 * 000000014033539B: mov     [rax], rbx
 * 000000014033539E: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001403353A5: mov     rax, [rsi+580h]
 * 00000001403353AC: mov     [rax+8], r14
 * 00000001403353B0: mov     dword ptr [rax+14h], 1000h
 * 00000001403353B7: cmp     [rsi+8D8h], r13d
 * 00000001403353BE: jnz     short loc_140335400
 * 00000001403353C0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403353CA: add     rax, rsi
 * 00000001403353CD: mov     [rsi+8E0h], rax
 * 00000001403353D4: mov     rax, 0B3B74BDEE4453415h
 * 00000001403353DE: add     rax, rbx
 * 00000001403353E1: mov     [rsi+8E8h], rax
 * 00000001403353E8: movsxd  rax, dword ptr [rbx]
 * 00000001403353EB: mov     [rsi+8F0h], rax
 * 00000001403353F2: mov     [rsi+8F8h], rdi
 * 00000001403353F9: mov     [rsi+8D8h], r9d
 * 0000000140335400: mov     rax, [rsi+308h]
 * 0000000140335407: lea     rdx, [rbp+20F0h+var_1D98]
 * 000000014033540E: mov     rcx, r15
 * 0000000140335411: call    KeGuardDispatchICall
 * 0000000140335416: mov     r14, rax
 * 0000000140335419: test    rax, rax
 * 000000014033541C: jnz     loc_140335314
 * 0000000140335422: mov     r13d, [rbp+20F0h+var_2078]
 * 0000000140335426: mov     rdi, [rbp+20F0h+var_20D0]
 * 000000014033542A: mov     rax, [rsi+310h]
 * 0000000140335431: add     r13d, r12d
 * 0000000140335434: mov     rcx, r15
 * 0000000140335437: mov     [rbp+20F0h+var_2078], r13d
 * 000000014033543B: call    KeGuardDispatchICall
 * 0000000140335440: mov     r15, rax
 * 0000000140335443: xor     eax, eax
 * 0000000140335445: test    r15, r15
 * 0000000140335448: jnz     loc_1403352DA
 * 000000014033544E: mov     r12d, r13d
 * 0000000140335451: jmp     loc_14033778E
 * 0000000140335456: mov     r12d, eax
 * 0000000140335459: mov     rax, [rsi+4E0h]
 * 0000000140335460: mov     r13, rsi
 * 0000000140335463: mov     [rbp+20F0h+var_1FE0], rsi
 * 000000014033546A: mov     rbx, [rax]
 * 000000014033546D: mov     [rbp+20F0h+var_2000], rbx
 * 0000000140335474: test    [rsi+970h], r15d
 * 000000014033547B: jz      short loc_140335484
 * 000000014033547D: xor     eax, eax
 * 000000014033547F: jmp     loc_14033779A
 * 0000000140335484: mov     rcx, [rbp+20F0h+var_20D0]
 * 0000000140335488: mov     rax, [rcx+28h]
 * 000000014033548C: test    rax, rax
 * 000000014033548F: jz      loc_14033551A
 * 0000000140335495: mov     edx, 1
 * 000000014033549A: mov     r12d, edx
 * 000000014033549D: cmp     rbx, rax
 * 00000001403354A0: jz      loc_14033779A
 * 00000001403354A6: mov     [rcx+18h], rbx
 * 00000001403354AA: mov     rax, [rsi+580h]
 * 00000001403354B1: mov     [rax], rcx
 * 00000001403354B4: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001403354BB: mov     rax, [rsi+580h]
 * 00000001403354C2: mov     [rax+8], rbx
 * 00000001403354C6: mov     dword ptr [rax+14h], 1000h
 * 00000001403354CD: xor     eax, eax
 * 00000001403354CF: cmp     [rsi+8D8h], eax
 * 00000001403354D5: jnz     loc_14033779A
 * 00000001403354DB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403354E5: add     rax, rsi
 * 00000001403354E8: mov     [rsi+8E0h], rax
 * 00000001403354EF: lea     rax, [rcx+r11]
 * 00000001403354F3: mov     [rsi+8E8h], rax
 * 00000001403354FA: movsxd  rax, dword ptr [rcx]
 * 00000001403354FD: mov     [rsi+8F0h], rax
 * 0000000140335504: mov     qword ptr [rsi+8F8h], 5
 * 000000014033550F: mov     [rsi+8D8h], edx
 * 0000000140335515: jmp     loc_14033779A
 * 000000014033551A: test    rbx, rbx
 * 000000014033551D: jz      loc_140337795
 * 0000000140335523: mov     rax, [rsi+1F8h]
 * 000000014033552A: lea     r8, [rbp+20F0h+var_204C]
 * 0000000140335531: mov     r14d, 1
 * 0000000140335537: mov     [rbp+20F0h+var_1FF0], rsi
 * 000000014033553E: lea     rdx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335545: mov     [rbp+20F0h+var_2078], r14d
 * 0000000140335549: mov     rcx, rbx
 * 000000014033554C: mov     r12d, r14d
 * 000000014033554F: call    KeGuardDispatchICall
 * 0000000140335554: mov     [rbp+20F0h+var_20B0], rax
 * 0000000140335558: test    rax, rax
 * 000000014033555B: jnz     short loc_140335567
 * 000000014033555D: mov     ecx, 0C000007Bh
 * 0000000140335562: jmp     loc_14033731F
 * 0000000140335567: mov     r12d, [rbp+20F0h+var_204C]
 * 000000014033556E: xor     eax, eax
 * 0000000140335570: mov     r15, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335577: mov     ecx, 4
 * 000000014033557C: mov     [rbp+20F0h+var_1F20], rax
 * 0000000140335583: xor     edx, edx
 * 0000000140335585: lea     rax, [rbp+20F0h+var_1F18]
 * 000000014033558C: mov     [rbp+20F0h+var_20E8], r12d
 * 0000000140335590: mov     [rbp+20F0h+var_20D8], r15
 * 0000000140335594: mov     r8d, 0FFFFFFFFh
 * 000000014033559A: mov     [rax], dl
 * 000000014033559C: add     rax, r14
 * 000000014033559F: add     ecx, r8d
 * 00000001403355A2: jnz     short loc_14033559A
 * 00000001403355A4: xor     eax, eax
 * 00000001403355A6: mov     r14d, eax
 * 00000001403355A9: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 00000001403355AC: cmp     [rsi+7F4h], eax
 * 00000001403355B2: jbe     loc_1403357B3
 * 00000001403355B8: mov     edx, [rbp+20F0h+var_1F18]
 * 00000001403355BE: mov     r9d, dword ptr [rbp+20F0h+var_1F20+4]
 * 00000001403355C5: mov     r10d, dword ptr [rbp+20F0h+var_1F20]
 * 00000001403355CC: mov     rax, [rsi+0A48h]
 * 00000001403355D3: mov     rbx, rsi
 * 00000001403355D6: test    rax, rax
 * 00000001403355D9: cmovnz  rbx, rax
 * 00000001403355DD: xor     eax, eax
 * 00000001403355DF: mov     [rbp+20F0h+var_20F0], rbx
 * 00000001403355E3: mov     r11d, eax
 * 00000001403355E6: mov     r8d, [rbx+7F0h]
 * 00000001403355ED: add     r8, rbx
 * 00000001403355F0: test    r10d, r10d
 * 00000001403355F3: jz      short loc_140335603
 * 00000001403355F5: cmp     r9d, r14d
 * 00000001403355F8: ja      short loc_140335603
 * 00000001403355FA: mov     r8d, edx
 * 00000001403355FD: mov     r11d, r9d
 * 0000000140335600: add     r8, rbx
 * 0000000140335603: cmp     r11d, r14d
 * 0000000140335606: jz      loc_140335740
 * 000000014033560C: mov     eax, r14d
 * 000000014033560F: mov     r12d, 2
 * 0000000140335615: sub     eax, r11d
 * 0000000140335618: mov     ebx, 0FFFh
 * 000000014033561D: add     r11d, eax
 * 0000000140335620: mov     r9d, eax
 * 0000000140335623: mov     [rbp+20F0h+var_205C], r11d
 * 000000014033562A: mov     r11, 0AAAAAAAAAAAAAAABh
 * 0000000140335634: lea     r14d, [r12+0Ah]
 * 0000000140335639: mov     ecx, [r8]
 * 000000014033563C: cmp     ecx, r14d
 * 000000014033563F: jg      short loc_140335682
 * 0000000140335641: jz      short loc_14033569B
 * 0000000140335643: sub     ecx, 1
 * 0000000140335646: jz      short loc_14033569B
 * 0000000140335648: sub     ecx, 6
 * 000000014033564B: jz      short loc_140335670
 * 000000014033564D: sub     ecx, 1
 * 0000000140335650: jz      short loc_140335666
 * 0000000140335652: cmp     ecx, r12d
 * 0000000140335655: jnz     short loc_1403356D3
 * 0000000140335657: mov     eax, [r8+1Ch]
 * 000000014033565B: add     eax, 3
 * 000000014033565E: shl     eax, 4
 * 0000000140335661: jmp     loc_14033570B
 * 0000000140335666: movzx   eax, word ptr [r8+20h]
 * 000000014033566B: jmp     loc_140335705
 * 0000000140335670: mov     eax, [r8+18h]
 * 0000000140335674: add     eax, r12d
 * 0000000140335677: lea     eax, [rax+rax*2]
 * 000000014033567A: shl     eax, 3
 * 000000014033567D: jmp     loc_14033570B
 * 0000000140335682: cmp     ecx, 1Ch
 * 0000000140335685: jz      short loc_140335700
 * 0000000140335687: cmp     ecx, 1Eh
 * 000000014033568A: jz      short loc_1403356DA
 * 000000014033568C: cmp     ecx, 20h ; ' '
 * 000000014033568F: jle     short loc_1403356D3
 * 0000000140335691: cmp     ecx, 22h ; '"'
 * 0000000140335694: jle     short loc_1403356B2
 * 0000000140335696: cmp     ecx, 2Bh ; '+'
 * 0000000140335699: jnz     short loc_1403356D3
 * 000000014033569B: mov     ecx, [r8+10h]
 * 000000014033569F: mov     rax, r11
 * 00000001403356A2: mul     rcx
 * 00000001403356A5: shr     rdx, 3
 * 00000001403356A9: lea     eax, ds:30h[rdx*4]
 * 00000001403356B0: jmp     short loc_14033570B
 * 00000001403356B2: mov     ecx, [r8+20h]
 * 00000001403356B6: mov     edx, [r8+28h]
 * 00000001403356BA: and     rcx, rbx
 * 00000001403356BD: add     rdx, rbx
 * 00000001403356C0: add     rdx, rcx
 * 00000001403356C3: shr     rdx, 0Ch
 * 00000001403356C7: lea     eax, [rdx+rdx*4]
 * 00000001403356CA: lea     eax, ds:30h[rax*4]
 * 00000001403356D1: jmp     short loc_14033570B
 * 00000001403356D3: mov     eax, 30h ; '0'
 * 00000001403356D8: jmp     short loc_14033570B
 * 00000001403356DA: mov     ecx, [r8+24h]
 * 00000001403356DE: mov     rax, r11
 * 00000001403356E1: dec     ecx
 * 00000001403356E3: mul     rcx
 * 00000001403356E6: movzx   eax, word ptr [r8+28h]
 * 00000001403356EB: shr     rdx, 3
 * 00000001403356EF: add     edx, 7
 * 00000001403356F2: and     edx, 0FFFFFFF8h
 * 00000001403356F5: add     eax, r12d
 * 00000001403356F8: lea     eax, [rax+rax*2]
 * 00000001403356FB: lea     eax, [rdx+rax*8]
 * 00000001403356FE: jmp     short loc_14033570B
 * 0000000140335700: movzx   eax, word ptr [r8+28h]
 * 0000000140335705: add     eax, 37h ; '7'
 * 0000000140335708: and     eax, 0FFFFFFF8h
 * 000000014033570B: add     r8, rax
 * 000000014033570E: mov     eax, 1
 * 0000000140335713: sub     r9, rax
 * 0000000140335716: jnz     loc_140335639
 * 000000014033571C: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140335720: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140335727: mov     r11d, [rbp+20F0h+var_205C]
 * 000000014033572E: mov     rbx, [rbp+20F0h+var_20F0]
 * 0000000140335732: mov     r14d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140335736: mov     r15, [rbp+20F0h+var_20D8]
 * 000000014033573A: mov     r12d, [rbp+20F0h+var_20E8]
 * 000000014033573E: jmp     short loc_140335745
 * 0000000140335740: mov     eax, 1
 * 0000000140335745: mov     edx, r8d
 * 0000000140335748: mov     dword ptr [rbp+20F0h+var_1F20], eax
 * 000000014033574E: sub     edx, ebx
 * 0000000140335750: mov     dword ptr [rbp+20F0h+var_1F20+4], r11d
 * 0000000140335757: mov     [rbp+20F0h+var_1F18], edx
 * 000000014033575D: mov     r10d, eax
 * 0000000140335760: movsxd  rcx, dword ptr [r8]
 * 0000000140335763: mov     r9d, r11d
 * 0000000140335766: cmp     ecx, 2Bh ; '+'
 * 0000000140335769: ja      short loc_14033578B
 * 000000014033576B: mov     r11, 80000001002h
 * 0000000140335775: bt      r11, rcx
 * 0000000140335779: jnb     short loc_14033578B
 * 000000014033577B: mov     rax, [rbp+20F0h+var_20B0]
 * 000000014033577F: cmp     [r8+8], rax
 * 0000000140335783: jnz     short loc_14033578B
 * 0000000140335785: cmp     [r8+10h], r12d
 * 0000000140335789: jz      short loc_1403357B6
 * 000000014033578B: lea     eax, [rcx-21h]
 * 000000014033578E: mov     ecx, 1
 * 0000000140335793: cmp     eax, ecx
 * 0000000140335795: ja      short loc_14033579D
 * 0000000140335797: cmp     [r8+20h], r15
 * 000000014033579B: jz      short loc_1403357B6
 * 000000014033579D: add     r14d, ecx
 * 00000001403357A0: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 00000001403357A4: cmp     r14d, [rsi+7F4h]
 * 00000001403357AB: jb      loc_1403355CC
 * 00000001403357B1: xor     eax, eax
 * 00000001403357B3: mov     r8, rax
 * 00000001403357B6: mov     rbx, [rbp+20F0h+var_2000]
 * 00000001403357BD: mov     [rbp+20F0h+var_1F98], r8
 * 00000001403357C4: test    r8, r8
 * 00000001403357C7: jz      short loc_1403357D3
 * 00000001403357C9: mov     ecx, 0C000010Eh
 * 00000001403357CE: jmp     loc_14033731B
 * 00000001403357D3: mov     rax, [rsi+2A0h]
 * 00000001403357DA: mov     rcx, rbx
 * 00000001403357DD: call    KeGuardDispatchICall
 * 00000001403357E2: test    dword ptr [rsi+970h], 40000000h
 * 00000001403357EC: mov     r14d, eax
 * 00000001403357EF: mov     [rbp+20F0h+var_2090], eax
 * 00000001403357F2: mov     eax, [rbp+20F0h+var_204C]
 * 00000001403357F8: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 00000001403357FB: jz      short loc_140335822
 * 00000001403357FD: mov     rdx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335804: lea     rcx, [rbp+20F0h+var_1FE0]
 * 000000014033580B: mov     r8d, 9
 * 0000000140335811: call    sub_14098EFA4
 * 0000000140335816: mov     r13, [rbp+20F0h+var_1FE0]
 * 000000014033581D: jmp     loc_140337319
 * 0000000140335822: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335829: lea     r9, [rbp+20F0h+var_204C]
 * 0000000140335830: xor     eax, eax
 * 0000000140335832: xor     r8d, r8d
 * 0000000140335835: mov     [rbp+20F0h+var_1C20], rax
 * 000000014033583C: mov     [rbp+20F0h+var_1DC8], eax
 * 0000000140335842: mov     rax, [rsi+1E8h]
 * 0000000140335849: lea     r12d, [r8+1]
 * 000000014033584D: mov     dl, r12b
 * 0000000140335850: call    KeGuardDispatchICall
 * 0000000140335855: mov     rdx, rax
 * 0000000140335858: lea     r8d, [r12+0Bh]
 * 000000014033585D: neg     rax
 * 0000000140335860: mov     [rbp+20F0h+var_1C38], rdx
 * 0000000140335867: lea     r9, [rbp+20F0h+var_204C]
 * 000000014033586E: mov     dl, r12b
 * 0000000140335871: sbb     ecx, ecx
 * 0000000140335873: and     ecx, [rbp+20F0h+var_204C]
 * 0000000140335879: mov     [rbp+20F0h+var_204C], ecx
 * 000000014033587F: mov     rax, [rsi+1E8h]
 * 0000000140335886: mov     [rbp+20F0h+var_1DD4], ecx
 * 000000014033588C: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335893: call    KeGuardDispatchICall
 * 0000000140335898: mov     rdx, rax
 * 000000014033589B: mov     [rbp+20F0h+var_2080], rax
 * 000000014033589F: neg     rax
 * 00000001403358A2: mov     [rbp+20F0h+var_1C30], rdx
 * 00000001403358A9: lea     r8d, [r12+9]
 * 00000001403358AE: mov     dl, r12b
 * 00000001403358B1: sbb     ecx, ecx
 * 00000001403358B3: lea     r9, [rbp+20F0h+var_204C]
 * 00000001403358BA: and     ecx, [rbp+20F0h+var_204C]
 * 00000001403358C0: mov     [rbp+20F0h+var_204C], ecx
 * 00000001403358C6: mov     rax, [rsi+1E8h]
 * 00000001403358CD: mov     [rbp+20F0h+var_2060], ecx
 * 00000001403358D3: mov     [rbp+20F0h+var_1DD0], ecx
 * 00000001403358D9: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 00000001403358E0: call    KeGuardDispatchICall
 * 00000001403358E5: mov     rdx, rax
 * 00000001403358E8: neg     rax
 * 00000001403358EB: mov     [rbp+20F0h+var_1C28], rdx
 * 00000001403358F2: sbb     ecx, ecx
 * 00000001403358F4: and     ecx, [rbp+20F0h+var_204C]
 * 00000001403358FA: mov     [rbp+20F0h+var_204C], ecx
 * 0000000140335900: mov     rax, [rsi+1F0h]
 * 0000000140335907: mov     [rbp+20F0h+var_1DCC], ecx
 * 000000014033590D: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335914: call    KeGuardDispatchICall
 * 0000000140335919: mov     rbx, rax
 * 000000014033591C: test    rax, rax
 * 000000014033591F: jnz     short loc_140335932
 * 0000000140335921: mov     ecx, 0C000007Bh
 * 0000000140335926: mov     rbx, [rbp+20F0h+var_2000]
 * 000000014033592D: jmp     loc_14033731F
 * 0000000140335932: mov     rax, [rsi+490h]
 * 0000000140335939: lea     rdx, [rbp+20F0h+var_1CB0]
 * 0000000140335940: mov     rcx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335947: call    KeGuardDispatchICall
 * 000000014033594C: mov     r15d, [rsi+7CCh]
 * 0000000140335953: mov     r8d, [rsi+904h]
 * 000000014033595A: mov     [rbp+20F0h+var_1C18], rax
 * 0000000140335961: mov     eax, [rbp+20F0h+var_1CB0]
 * 0000000140335967: mov     [rbp+20F0h+var_1DC4], eax
 * 000000014033596D: mov     rax, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335974: mov     [rbp+20F0h+var_1C40], rax
 * 000000014033597B: mov     eax, [rbx+54h]
 * 000000014033597E: mov     [rbp+20F0h+var_1DD8], eax
 * 0000000140335984: mov     eax, r14d
 * 0000000140335987: neg     eax
 * 0000000140335989: lea     eax, [r15+120h]
 * 0000000140335990: sbb     r9d, r9d
 * 0000000140335993: and     r9d, 0Bh
 * 0000000140335997: mov     [rbp+20F0h+var_20E8], r9d
 * 000000014033599B: cmp     eax, [rsi+9FCh]
 * 00000001403359A1: jbe     loc_140335AAD
 * 00000001403359A7: mov     edx, eax
 * 00000001403359A9: mov     rcx, rsi
 * 00000001403359AC: call    sub_1403485B4
 * 00000001403359B1: mov     r14, rax
 * 00000001403359B4: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403359B8: xor     eax, eax
 * 00000001403359BA: test    r14, r14
 * 00000001403359BD: jz      loc_140335A9C
 * 00000001403359C3: mov     ecx, [rsi+970h]
 * 00000001403359C9: test    cl, 4
 * 00000001403359CC: jnz     loc_140335A8E
 * 00000001403359D2: mov     eax, [rsi+7CCh]
 * 00000001403359D8: and     ecx, 20000000h
 * 00000001403359DE: mov     r9, [rsi+7B0h]
 * 00000001403359E5: neg     ecx
 * 00000001403359E7: mov     rcx, rsi
 * 00000001403359EA: sbb     r8d, r8d
 * 00000001403359ED: and     r8d, [rsi+904h]
 * 00000001403359F4: cmp     eax, 8
 * 00000001403359F7: jb      short loc_140335A1A
 * 00000001403359F9: mov     edx, eax
 * 00000001403359FB: shr     rdx, 3
 * 00000001403359FF: xor     r12d, r12d
 * 0000000140335A02: lea     r10d, [r12+1]
 * 0000000140335A07: mov     [rcx], r12
 * 0000000140335A0A: add     eax, 0FFFFFFF8h
 * 0000000140335A0D: add     rcx, 8
 * 0000000140335A11: sub     rdx, r10
 * 0000000140335A14: jnz     short loc_140335A07
 * 0000000140335A16: lea     r12d, [rdx+1]
 * 0000000140335A1A: xor     edx, edx
 * 0000000140335A1C: test    eax, eax
 * 0000000140335A1E: jz      short loc_140335A30
 * 0000000140335A20: mov     r11d, 0FFFFFFFFh
 * 0000000140335A26: mov     [rcx], dl
 * 0000000140335A28: add     rcx, r12
 * 0000000140335A2B: add     eax, r11d
 * 0000000140335A2E: jnz     short loc_140335A26
 * 0000000140335A30: mov     ebx, [r14+904h]
 * 0000000140335A37: mov     [r14+904h], r8d
 * 0000000140335A3E: cmp     r8d, 3
 * 0000000140335A42: jz      short loc_140335A78
 * 0000000140335A44: test    dword ptr [r14+970h], 10000000h
 * 0000000140335A4F: mov     rcx, rdx
 * 0000000140335A52: cmovz   ecx, r8d
 * 0000000140335A56: test    ecx, ecx
 * 0000000140335A58: jz      short loc_140335A6F
 * 0000000140335A5A: mov     rax, [r14+220h]
 * 0000000140335A61: lea     rcx, [r9-8]
 * 0000000140335A65: mov     rdx, [rcx]
 * 0000000140335A68: call    KeGuardDispatchICall
 * 0000000140335A6D: jmp     short loc_140335A87
 * 0000000140335A6F: mov     rax, [r14+0F8h]
 * 0000000140335A76: jmp     short loc_140335A7F
 * 0000000140335A78: mov     rax, [r14+360h]
 * 0000000140335A7F: mov     rcx, r9
 * 0000000140335A82: call    KeGuardDispatchICall
 * 0000000140335A87: mov     [r14+904h], ebx
 * 0000000140335A8E: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140335A96: mov     r9d, [rbp+20F0h+var_20E8]
 * 0000000140335A9A: jmp     short loc_140335ABA
 * 0000000140335A9C: mov     [rbp+20F0h+var_1FF0], rax
 * 0000000140335AA3: mov     ecx, 0C000009Ah
 * 0000000140335AA8: jmp     loc_140335926
 * 0000000140335AAD: mov     r14, rsi
 * 0000000140335AB0: mov     [rbp+20F0h+var_20F0], rsi
 * 0000000140335AB4: mov     [rsi+7CCh], eax
 * 0000000140335ABA: mov     eax, 6
 * 0000000140335ABF: lea     r12, [r14+r15]
 * 0000000140335AC3: add     [r14+7F4h], eax
 * 0000000140335ACA: lea     rdi, [rbp+20F0h+var_1C40]
 * 0000000140335AD1: xor     r10d, r10d
 * 0000000140335AD4: mov     [rbp+20F0h+var_1DB0], r12
 * 0000000140335ADB: mov     [rbp+20F0h+var_1F98], r12
 * 0000000140335AE2: lea     rsi, [rbp+20F0h+var_1DD8]
 * 0000000140335AE9: mov     [rbp+20F0h+var_20D8], rdi
 * 0000000140335AED: mov     [rbp+20F0h+var_20A0], rax
 * 0000000140335AF1: mov     r13d, [rsi]
 * 0000000140335AF4: mov     ecx, 30h ; '0'
 * 0000000140335AF9: mov     r15, [rdi]
 * 0000000140335AFC: mov     rdx, rax
 * 0000000140335AFF: mov     [rbp+20F0h+var_205C], r13d
 * 0000000140335B06: mov     rax, r12
 * 0000000140335B09: lea     r8d, [rcx-2Fh]
 * 0000000140335B0D: mov     [rax], r10
 * 0000000140335B10: add     ecx, 0FFFFFFF8h
 * 0000000140335B13: add     rax, 8
 * 0000000140335B17: sub     rdx, r8
 * 0000000140335B1A: jnz     short loc_140335B0D
 * 0000000140335B1C: mov     rdx, r8
 * 0000000140335B1F: test    ecx, ecx
 * 0000000140335B21: jz      short loc_140335B34
 * 0000000140335B23: mov     r8d, 0FFFFFFFFh
 * 0000000140335B29: mov     [rax], r10b
 * 0000000140335B2C: add     rax, rdx
 * 0000000140335B2F: add     ecx, r8d
 * 0000000140335B32: jnz     short loc_140335B29
 * 0000000140335B34: mov     [r12], r9d
 * 0000000140335B38: lea     rcx, [r15+r13]
 * 0000000140335B3C: mov     [r12+8], r15
 * 0000000140335B41: mov     r10, r15
 * 0000000140335B44: mov     [r12+10h], r13d
 * 0000000140335B49: mov     rax, r15
 * 0000000140335B4C: add     [r14+810h], r13d
 * 0000000140335B53: mov     ebx, [r14+7FCh]
 * 0000000140335B5A: mov     r11, [r14+800h]
 * 0000000140335B61: cmp     r15, rcx
 * 0000000140335B64: jnb     short loc_140335B77
 * 0000000140335B66: mov     r8d, 40h ; '@'
 * 0000000140335B6C: prefetchnta byte ptr [rax]
 * 0000000140335B6F: add     rax, r8
 * 0000000140335B72: cmp     rax, rcx
 * 0000000140335B75: jb      short loc_140335B6C
 * 0000000140335B77: mov     r9d, r13d
 * 0000000140335B7A: mov     r8, r11
 * 0000000140335B7D: shr     r9d, 7
 * 0000000140335B81: test    r9d, r9d
 * 0000000140335B84: jz      short loc_140335BF6
 * 0000000140335B86: mov     rdi, 7010008004002001h
 * 0000000140335B90: mov     r13d, 0FFFFFFFFh
 * 0000000140335B96: mov     eax, 8
 * 0000000140335B9B: xor     r8, [r10]
 * 0000000140335B9E: mov     ecx, ebx
 * 0000000140335BA0: rol     r8, cl
 * 0000000140335BA3: xor     r8, [r10+8]
 * 0000000140335BA7: add     r10, 10h
 * 0000000140335BAB: rol     r8, cl
 * 0000000140335BAE: sub     rax, rdx
 * 0000000140335BB1: jnz     short loc_140335B9B
 * 0000000140335BB3: mov     rcx, r10
 * 0000000140335BB6: sub     rcx, r15
 * 0000000140335BB9: xor     rcx, r11
 * 0000000140335BBC: mov     rax, rcx
 * 0000000140335BBF: rol     rax, 11h
 * 0000000140335BC3: xor     rcx, rax
 * 0000000140335BC6: mov     rax, rdi
 * 0000000140335BC9: mul     rcx
 * 0000000140335BCC: xor     eax, edx
 * 0000000140335BCE: mov     [rbp+20F0h+var_1688], rdx
 * 0000000140335BD5: xor     ebx, eax
 * 0000000140335BD7: mov     edx, 1
 * 0000000140335BDC: and     ebx, 3Fh
 * 0000000140335BDF: cmovz   ebx, edx
 * 0000000140335BE2: add     r9d, r13d
 * 0000000140335BE5: jnz     short loc_140335B96
 * 0000000140335BE7: mov     r14, [rbp+20F0h+var_20F0]
 * 0000000140335BEB: mov     r13d, [rbp+20F0h+var_205C]
 * 0000000140335BF2: mov     rdi, [rbp+20F0h+var_20D8]
 * 0000000140335BF6: mov     edx, r13d
 * 0000000140335BF9: mov     r15d, 1
 * 0000000140335BFF: and     edx, 7Fh
 * 0000000140335C02: cmp     edx, 8
 * 0000000140335C05: jb      short loc_140335C21
 * 0000000140335C07: mov     eax, edx
 * 0000000140335C09: shr     rax, 3
 * 0000000140335C0D: xor     r8, [r10]
 * 0000000140335C10: mov     ecx, ebx
 * 0000000140335C12: rol     r8, cl
 * 0000000140335C15: add     r10, 8
 * 0000000140335C19: add     edx, 0FFFFFFF8h
 * 0000000140335C1C: sub     rax, r15
 * 0000000140335C1F: jnz     short loc_140335C0D
 * 0000000140335C21: test    edx, edx
 * 0000000140335C23: jz      short loc_140335C43
 * 0000000140335C25: mov     r14d, 0FFFFFFFFh
 * 0000000140335C2B: movzx   eax, byte ptr [r10]
 * 0000000140335C2F: mov     ecx, ebx
 * 0000000140335C31: xor     r8, rax
 * 0000000140335C34: add     r10, r15
 * 0000000140335C37: rol     r8, cl
 * 0000000140335C3A: add     edx, r14d
 * 0000000140335C3D: jnz     short loc_140335C2B
 * 0000000140335C3F: mov     r14, [rbp+20F0h+var_20F0]
 * 0000000140335C43: mov     rax, r8
 * 0000000140335C46: shr     rax, 1Fh
 * 0000000140335C4A: xor     r10d, r10d
 * 0000000140335C4D: jmp     short loc_140335C56
 * 0000000140335C4F: xor     r8d, eax
 * 0000000140335C52: shr     rax, 1Fh
 * 0000000140335C56: test    rax, rax
 * 0000000140335C59: jnz     short loc_140335C4F
 * 0000000140335C5B: mov     r9d, [rbp+20F0h+var_20E8]
 * 0000000140335C5F: btr     r8d, 1Fh
 * 0000000140335C64: mov     [r12+14h], r8d
 * 0000000140335C69: add     rdi, 8
 * 0000000140335C6D: add     [r14+810h], r13d
 * 0000000140335C74: add     rsi, 4
 * 0000000140335C78: mov     r12, [rbp+20F0h+var_1DB0]
 * 0000000140335C7F: mov     eax, 6
 * 0000000140335C84: add     r12, 30h ; '0'
 * 0000000140335C88: mov     [rbp+20F0h+var_20D8], rdi
 * 0000000140335C8C: sub     [rbp+20F0h+var_20A0], r15
 * 0000000140335C90: mov     [rbp+20F0h+var_1DB0], r12
 * 0000000140335C97: jnz     loc_140335AF1
 * 0000000140335C9D: mov     rcx, [rbp+20F0h+var_1F98]
 * 0000000140335CA4: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140335CAB: mov     rax, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335CB2: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140335CB6: mov     edx, [rbp+20F0h+var_2090]
 * 0000000140335CB9: mov     dword ptr [rcx], 2Ch ; ','
 * 0000000140335CBF: mov     [rcx+18h], rax
 * 0000000140335CC3: test    dword ptr [r14+970h], 10200000h
 * 0000000140335CCE: jnz     short loc_140335CE5
 * 0000000140335CD0: test    edx, edx
 * 0000000140335CD2: jnz     short loc_140335CE9
 * 0000000140335CD4: test    dword ptr [r14+974h], 8000h
 * 0000000140335CDF: jz      short loc_140335CF1
 * 0000000140335CE1: or      [rcx+20h], r15d
 * 0000000140335CE5: test    edx, edx
 * 0000000140335CE7: jz      short loc_140335CF1
 * 0000000140335CE9: mov     eax, 2
 * 0000000140335CEE: or      [rcx+20h], eax
 * 0000000140335CF1: mov     r9, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335CF8: lea     rax, [rbp+20F0h+var_1EA8]
 * 0000000140335CFF: mov     r8d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140335D03: lea     rcx, [rbp+20F0h+var_1FF0]
 * 0000000140335D0A: mov     [rsp+10F0h+var_10B8], rax
 * 0000000140335D0F: mov     r13, r14
 * 0000000140335D12: lea     rax, [rbp+20F0h+var_1F74]
 * 0000000140335D19: mov     [rbp+20F0h+var_1FF0], r14
 * 0000000140335D20: mov     [rsp+10F0h+var_10C0], rax
 * 0000000140335D25: mov     dword ptr [rsp+10F0h+var_10C8], 9
 * 0000000140335D2D: mov     dword ptr [rsp+10F0h+BugCheckParameter4], edx
 * 0000000140335D31: mov     rdx, [rbp+20F0h+var_20B0]
 * 0000000140335D35: mov     [rbp+20F0h+var_1FE0], r14
 * 0000000140335D3C: call    sub_140347B4C
 * 0000000140335D41: mov     ecx, eax
 * 0000000140335D43: test    eax, eax
 * 0000000140335D45: jns     short loc_140335D53
 * 0000000140335D47: mov     rbx, [rbp+20F0h+var_2000]
 * 0000000140335D4E: jmp     loc_14033731B
 * 0000000140335D53: mov     r13, [rbp+20F0h+var_1FF0]
 * 0000000140335D5A: mov     rcx, [rbp+20F0h+var_1F98]
 * 0000000140335D61: mov     rax, r13
 * 0000000140335D64: mov     r9d, [rbp+20F0h+var_1EA8]
 * 0000000140335D6B: sub     rax, r14
 * 0000000140335D6E: mov     ebx, [rbp+20F0h+var_1F74]
 * 0000000140335D74: add     rcx, rax
 * 0000000140335D77: sub     r9d, [rbp+20F0h+var_1F74]
 * 0000000140335D7E: add     rbx, [rbp+20F0h+BugCheckParameter2]
 * 0000000140335D85: mov     [rbp+20F0h+var_1F98], rcx
 * 0000000140335D8C: xor     r8d, r8d
 * 0000000140335D8F: lea     r12, [rcx+0C0h]
 * 0000000140335D96: mov     [rbp+20F0h+var_1FE0], r13
 * 0000000140335D9D: mov     ecx, 30h ; '0'
 * 0000000140335DA2: mov     rax, r12
 * 0000000140335DA5: lea     edx, [rcx-2Ah]
 * 0000000140335DA8: mov     [rax], r8
 * 0000000140335DAB: add     ecx, 0FFFFFFF8h
 * 0000000140335DAE: add     rax, 8
 * 0000000140335DB2: sub     rdx, r15
 * 0000000140335DB5: jnz     short loc_140335DA8
 * 0000000140335DB7: mov     edx, 0FFFFFFFFh
 * 0000000140335DBC: test    ecx, ecx
 * 0000000140335DBE: jz      short loc_140335DCA
 * 0000000140335DC0: mov     [rax], r8b
 * 0000000140335DC3: add     rax, r15
 * 0000000140335DC6: add     ecx, edx
 * 0000000140335DC8: jnz     short loc_140335DC0
 * 0000000140335DCA: mov     eax, [rbp+20F0h+var_20E8]
 * 0000000140335DCD: mov     r10, rbx
 * 0000000140335DD0: mov     [r12], eax
 * 0000000140335DD4: mov     rax, rbx
 * 0000000140335DD7: mov     [r12+8], rbx
 * 0000000140335DDC: mov     [r12+10h], r9d
 * 0000000140335DE1: add     [r13+810h], r9d
 * 0000000140335DE8: mov     r14d, [r13+7FCh]
 * 0000000140335DEF: mov     r15, [r13+800h]
 * 0000000140335DF6: mov     ecx, r9d
 * 0000000140335DF9: add     rcx, rbx
 * 0000000140335DFC: cmp     rbx, rcx
 * 0000000140335DFF: jnb     short loc_140335E12
 * 0000000140335E01: mov     r8d, 40h ; '@'
 * 0000000140335E07: prefetchnta byte ptr [rax]
 * 0000000140335E0A: add     rax, r8
 * 0000000140335E0D: cmp     rax, rcx
 * 0000000140335E10: jb      short loc_140335E07
 * 0000000140335E12: mov     r11d, r9d
 * 0000000140335E15: mov     r8, r15
 * 0000000140335E18: shr     r11d, 7
 * 0000000140335E1C: test    r11d, r11d
 * 0000000140335E1F: jz      short loc_140335E97
 * 0000000140335E21: mov     rdi, 7010008004002001h
 * 0000000140335E2B: mov     edx, 8
 * 0000000140335E30: lea     esi, [rdx-7]
 * 0000000140335E33: mov     rax, [r10]
 * 0000000140335E36: mov     ecx, r14d
 * 0000000140335E39: xor     rax, r8
 * 0000000140335E3C: mov     r8, [r10+8]
 * 0000000140335E40: rol     rax, cl
 * 0000000140335E43: add     r10, 10h
 * 0000000140335E47: xor     r8, rax
 * 0000000140335E4A: rol     r8, cl
 * 0000000140335E4D: sub     rdx, rsi
 * 0000000140335E50: jnz     short loc_140335E33
 * 0000000140335E52: mov     rcx, r10
 * 0000000140335E55: sub     rcx, rbx
 * 0000000140335E58: xor     rcx, r15
 * 0000000140335E5B: mov     rax, rcx
 * 0000000140335E5E: rol     rax, 11h
 * 0000000140335E62: xor     rcx, rax
 * 0000000140335E65: mov     rax, rdi
 * 0000000140335E68: mul     rcx
 * 0000000140335E6B: xor     eax, edx
 * 0000000140335E6D: mov     [rbp+20F0h+var_1680], rdx
 * 0000000140335E74: xor     r14d, eax
 * 0000000140335E77: mov     edx, 0FFFFFFFFh
 * 0000000140335E7C: and     r14d, 3Fh
 * 0000000140335E80: mov     rax, rsi
 * 0000000140335E83: cmovz   r14d, eax
 * 0000000140335E87: add     r11d, edx
 * 0000000140335E8A: jnz     short loc_140335E2B
 * 0000000140335E8C: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140335E90: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140335E97: and     r9d, 7Fh
 * 0000000140335E9B: mov     r11d, 1
 * 0000000140335EA1: cmp     r9d, 8
 * 0000000140335EA5: jb      short loc_140335EC9
 * 0000000140335EA7: mov     edx, r9d
 * 0000000140335EAA: shr     rdx, 3
 * 0000000140335EAE: xor     r8, [r10]
 * 0000000140335EB1: mov     ecx, r14d
 * 0000000140335EB4: rol     r8, cl
 * 0000000140335EB7: add     r10, 8
 * 0000000140335EBB: add     r9d, 0FFFFFFF8h
 * 0000000140335EBF: sub     rdx, r11
 * 0000000140335EC2: jnz     short loc_140335EAE
 * 0000000140335EC4: mov     edx, 0FFFFFFFFh
 * 0000000140335EC9: test    r9d, r9d
 * 0000000140335ECC: jz      short loc_140335EE3
 * 0000000140335ECE: movzx   eax, byte ptr [r10]
 * 0000000140335ED2: mov     ecx, r14d
 * 0000000140335ED5: xor     r8, rax
 * 0000000140335ED8: add     r10, r11
 * 0000000140335EDB: rol     r8, cl
 * 0000000140335EDE: add     r9d, edx
 * 0000000140335EE1: jnz     short loc_140335ECE
 * 0000000140335EE3: mov     rax, r8
 * 0000000140335EE6: shr     rax, 1Fh
 * 0000000140335EEA: xor     ecx, ecx
 * 0000000140335EEC: jmp     short loc_140335EF5
 * 0000000140335EEE: xor     r8d, eax
 * 0000000140335EF1: shr     rax, 1Fh
 * 0000000140335EF5: test    rax, rax
 * 0000000140335EF8: jnz     short loc_140335EEE
 * 0000000140335EFA: btr     r8d, 1Fh
 * 0000000140335EFF: mov     [r12+14h], r8d
 * 0000000140335F04: mov     rdx, [rbp+20F0h+var_1F98]
 * 0000000140335F0B: mov     r8d, [rbp+20F0h+var_2090]
 * 0000000140335F0F: mov     dword ptr [rdx+0F0h], 30h ; '0'
 * 0000000140335F19: cmp     [rdx+100h], eax
 * 0000000140335F1F: jz      short loc_140335F38
 * 0000000140335F21: mov     eax, [rdx+108h]
 * 0000000140335F27: test    r8d, r8d
 * 0000000140335F2A: setnz   cl
 * 0000000140335F2D: and     eax, 0FFFFFFFEh
 * 0000000140335F30: or      ecx, eax
 * 0000000140335F32: mov     [rdx+108h], ecx
 * 0000000140335F38: mov     rcx, [rbp+20F0h+var_1F98]
 * 0000000140335F3F: mov     eax, r8d
 * 0000000140335F42: add     rcx, 60h ; '`'
 * 0000000140335F46: mov     [rbp+20F0h+var_1FE0], r13
 * 0000000140335F4D: neg     eax
 * 0000000140335F4F: mov     [rbp+20F0h+var_1EE0], rcx
 * 0000000140335F56: sbb     r12d, r12d
 * 0000000140335F59: neg     r12d
 * 0000000140335F5C: add     r12d, 0Dh
 * 0000000140335F60: test    rcx, rcx
 * 0000000140335F63: jnz     loc_14033621A
 * 0000000140335F69: mov     r15d, [r13+7CCh]
 * 0000000140335F70: mov     r8d, [r13+904h]
 * 0000000140335F77: lea     eax, [r15+30h]
 * 0000000140335F7B: cmp     eax, [r13+9FCh]
 * 0000000140335F82: jbe     loc_14033607C
 * 0000000140335F88: mov     edx, eax
 * 0000000140335F8A: mov     rcx, r13
 * 0000000140335F8D: call    sub_1403485B4
 * 0000000140335F92: mov     rbx, rax
 * 0000000140335F95: xor     eax, eax
 * 0000000140335F97: test    rbx, rbx
 * 0000000140335F9A: jz      loc_14033606B
 * 0000000140335FA0: mov     ecx, [r13+970h]
 * 0000000140335FA7: test    cl, 4
 * 0000000140335FAA: jnz     loc_140336062
 * 0000000140335FB0: mov     eax, [r13+7CCh]
 * 0000000140335FB7: and     ecx, 20000000h
 * 0000000140335FBD: mov     r8, [r13+7B0h]
 * 0000000140335FC4: neg     ecx
 * 0000000140335FC6: mov     r10d, 1
 * 0000000140335FCC: sbb     edx, edx
 * 0000000140335FCE: and     edx, [r13+904h]
 * 0000000140335FD5: cmp     eax, 8
 * 0000000140335FD8: jb      short loc_140335FF3
 * 0000000140335FDA: mov     ecx, eax
 * 0000000140335FDC: shr     rcx, 3
 * 0000000140335FE0: xor     r9d, r9d
 * 0000000140335FE3: mov     [r13+0], r9
 * 0000000140335FE7: add     eax, 0FFFFFFF8h
 * 0000000140335FEA: add     r13, 8
 * 0000000140335FEE: sub     rcx, r10
 * 0000000140335FF1: jnz     short loc_140335FE3
 * 0000000140335FF3: xor     ecx, ecx
 * 0000000140335FF5: test    eax, eax
 * 0000000140335FF7: jz      short loc_14033600B
 * 0000000140335FF9: mov     r11d, 0FFFFFFFFh
 * 0000000140335FFF: mov     [r13+0], cl
 * 0000000140336003: add     r13, r10
 * 0000000140336006: add     eax, r11d
 * 0000000140336009: jnz     short loc_140335FFF
 * 000000014033600B: mov     r14d, [rbx+904h]
 * 0000000140336012: mov     [rbx+904h], edx
 * 0000000140336018: cmp     edx, 3
 * 000000014033601B: jz      short loc_14033604C
 * 000000014033601D: test    dword ptr [rbx+970h], 10000000h
 * 0000000140336027: cmovz   ecx, edx
 * 000000014033602A: test    ecx, ecx
 * 000000014033602C: jz      short loc_140336043
 * 000000014033602E: mov     rax, [rbx+220h]
 * 0000000140336035: lea     rcx, [r8-8]
 * 0000000140336039: mov     rdx, [rcx]
 * 000000014033603C: call    KeGuardDispatchICall
 * 0000000140336041: jmp     short loc_14033605B
 * 0000000140336043: mov     rax, [rbx+0F8h]
 * 000000014033604A: jmp     short loc_140336053
 * 000000014033604C: mov     rax, [rbx+360h]
 * 0000000140336053: mov     rcx, r8
 * 0000000140336056: call    KeGuardDispatchICall
 * 000000014033605B: mov     [rbx+904h], r14d
 * 0000000140336062: and     dword ptr [rbx+970h], 0FFFFFFFBh
 * 0000000140336069: jmp     short loc_140336086
 * 000000014033606B: mov     [rbp+20F0h+var_1FF0], rax
 * 0000000140336072: mov     ecx, 0C000009Ah
 * 0000000140336077: jmp     loc_140335D47
 * 000000014033607C: mov     rbx, r13
 * 000000014033607F: mov     [r13+7CCh], eax
 * 0000000140336086: add     r15, rbx
 * 0000000140336089: mov     r9d, 1
 * 000000014033608F: add     [rbx+7F4h], r9d
 * 0000000140336096: mov     rax, r15
 * 0000000140336099: mov     [rbp+20F0h+var_1CA8], r15
 * 00000001403360A0: xor     r8d, r8d
 * 00000001403360A3: lea     ecx, [r9+2Fh]
 * 00000001403360A7: lea     edx, [rcx-2Ah]
 * 00000001403360AA: mov     [rax], r8
 * 00000001403360AD: add     ecx, 0FFFFFFF8h
 * 00000001403360B0: add     rax, 8
 * 00000001403360B4: sub     rdx, r9
 * 00000001403360B7: jnz     short loc_1403360AA
 * 00000001403360B9: test    ecx, ecx
 * 00000001403360BB: jz      short loc_1403360CC
 * 00000001403360BD: mov     edx, 0FFFFFFFFh
 * 00000001403360C2: mov     [rax], r8b
 * 00000001403360C5: add     rax, r9
 * 00000001403360C8: add     ecx, edx
 * 00000001403360CA: jnz     short loc_1403360C2
 * 00000001403360CC: mov     r13, [rbp+20F0h+var_2080]
 * 00000001403360D0: mov     [r15], r12d
 * 00000001403360D3: mov     r9, r13
 * 00000001403360D6: mov     r12d, [rbp+20F0h+var_2060]
 * 00000001403360DD: mov     [r15+8], r13
 * 00000001403360E1: mov     [r15+10h], r12d
 * 00000001403360E5: add     [rbx+810h], r12d
 * 00000001403360EC: mov     r11d, [rbx+7FCh]
 * 00000001403360F3: lea     rcx, [r12+r13]
 * 00000001403360F7: mov     r14, [rbx+800h]
 * 00000001403360FE: cmp     r13, rcx
 * 0000000140336101: jnb     short loc_140336116
 * 0000000140336103: mov     rax, r13
 * 0000000140336106: mov     edx, 40h ; '@'
 * 000000014033610B: prefetchnta byte ptr [rax]
 * 000000014033610E: add     rax, rdx
 * 0000000140336111: cmp     rax, rcx
 * 0000000140336114: jb      short loc_14033610B
 * 0000000140336116: mov     r10d, r12d
 * 0000000140336119: mov     r8, r14
 * 000000014033611C: shr     r10d, 7
 * 0000000140336120: test    r10d, r10d
 * 0000000140336123: jz      short loc_14033619C
 * 0000000140336125: mov     esi, 1
 * 000000014033612A: mov     rdi, 7010008004002001h
 * 0000000140336134: mov     r12d, 0FFFFFFFFh
 * 000000014033613A: mov     eax, 8
 * 000000014033613F: xor     r8, [r9]
 * 0000000140336142: mov     ecx, r11d
 * 0000000140336145: rol     r8, cl
 * 0000000140336148: xor     r8, [r9+8]
 * 000000014033614C: add     r9, 10h
 * 0000000140336150: rol     r8, cl
 * 0000000140336153: sub     rax, rsi
 * 0000000140336156: jnz     short loc_14033613F
 * 0000000140336158: mov     rcx, r9
 * 000000014033615B: sub     rcx, r13
 * 000000014033615E: xor     rcx, r14
 * 0000000140336161: mov     rax, rcx
 * 0000000140336164: rol     rax, 11h
 * 0000000140336168: xor     rcx, rax
 * 000000014033616B: mov     rax, rdi
 * 000000014033616E: mul     rcx
 * 0000000140336171: xor     eax, edx
 * 0000000140336173: mov     [rbp+20F0h+var_1B10], rdx
 * 000000014033617A: xor     r11d, eax
 * 000000014033617D: and     r11d, 3Fh
 * 0000000140336181: cmovz   r11d, esi
 * 0000000140336185: add     r10d, r12d
 * 0000000140336188: jnz     short loc_14033613A
 * 000000014033618A: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033618E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140336195: mov     r12d, [rbp+20F0h+var_2060]
 * 000000014033619C: mov     edx, r12d
 * 000000014033619F: mov     r10d, 1
 * 00000001403361A5: and     edx, 7Fh
 * 00000001403361A8: cmp     edx, 8
 * 00000001403361AB: jb      short loc_1403361C8
 * 00000001403361AD: mov     eax, edx
 * 00000001403361AF: shr     rax, 3
 * 00000001403361B3: xor     r8, [r9]
 * 00000001403361B6: mov     ecx, r11d
 * 00000001403361B9: rol     r8, cl
 * 00000001403361BC: add     r9, 8
 * 00000001403361C0: add     edx, 0FFFFFFF8h
 * 00000001403361C3: sub     rax, r10
 * 00000001403361C6: jnz     short loc_1403361B3
 * 00000001403361C8: test    edx, edx
 * 00000001403361CA: jz      short loc_1403361E9
 * 00000001403361CC: mov     esi, 0FFFFFFFFh
 * 00000001403361D1: movzx   eax, byte ptr [r9]
 * 00000001403361D5: mov     ecx, r11d
 * 00000001403361D8: xor     r8, rax
 * 00000001403361DB: add     r9, r10
 * 00000001403361DE: rol     r8, cl
 * 00000001403361E1: add     edx, esi
 * 00000001403361E3: jnz     short loc_1403361D1
 * 00000001403361E5: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403361E9: mov     rax, r8
 * 00000001403361EC: jmp     short loc_1403361F1
 * 00000001403361EE: xor     r8d, eax
 * 00000001403361F1: shr     rax, 1Fh
 * 00000001403361F5: test    rax, rax
 * 00000001403361F8: jnz     short loc_1403361EE
 * 00000001403361FA: btr     r8d, 1Fh
 * 00000001403361FF: mov     [r15+14h], r8d
 * 0000000140336203: mov     rax, [rbp+20F0h+var_1CA8]
 * 000000014033620A: mov     [rbp+20F0h+var_1EE0], rax
 * 0000000140336211: add     [rbx+810h], r12d
 * 0000000140336218: jmp     short loc_14033622B
 * 000000014033621A: mov     rbx, r13
 * 000000014033621D: mov     [rcx], r12d
 * 0000000140336220: mov     r12d, [rbp+20F0h+var_2060]
 * 0000000140336227: mov     r13, [rbp+20F0h+var_2080]
 * 000000014033622B: test    dword ptr [rbx+970h], 40000000h
 * 0000000140336235: jz      short loc_140336255
 * 0000000140336237: test    r12d, r12d
 * 000000014033623A: jz      short loc_140336255
 * 000000014033623C: mov     r9, [rbp+20F0h+var_1EE0]
 * 0000000140336243: mov     r8d, r12d
 * 0000000140336246: add     r9, 1Ch
 * 000000014033624A: mov     rdx, r13
 * 000000014033624D: mov     rcx, rbx
 * 0000000140336250: call    sub_1401AD8FC
 * 0000000140336255: mov     rax, [rbp+20F0h+var_1EE0]
 * 000000014033625C: xor     ecx, ecx
 * 000000014033625E: mov     [rbp+20F0h+var_1FE0], rbx
 * 0000000140336265: mov     [rax+18h], ecx
 * 0000000140336268: lea     r12d, [rcx+1]
 * 000000014033626C: mov     rax, [rbp+20F0h+var_1EE0]
 * 0000000140336273: or      [rax+18h], r12d
 * 0000000140336277: xor     eax, eax
 * 0000000140336279: mov     r14, [rbp+20F0h+var_1F98]
 * 0000000140336280: cmp     [rbp+20F0h+var_2090], eax
 * 0000000140336283: mov     r15, [rbp+20F0h+BugCheckParameter2]
 * 000000014033628A: setnz   cl
 * 000000014033628D: mov     dword ptr [r14+90h], 23h ; '#'
 * 0000000140336298: mov     eax, [r14+0B8h]
 * 000000014033629F: and     eax, 0FFFFFFFEh
 * 00000001403362A2: or      ecx, eax
 * 00000001403362A4: mov     [r14+0B8h], ecx
 * 00000001403362AB: cmp     dword ptr [r14+0A0h], 94h
 * 00000001403362B6: jb      loc_14033633D
 * 00000001403362BC: mov     rax, [rbx+1F0h]
 * 00000001403362C3: mov     rcx, r15
 * 00000001403362C6: mov     r13, [r14+98h]
 * 00000001403362CD: call    KeGuardDispatchICall
 * 00000001403362D2: test    rax, rax
 * 00000001403362D5: jnz     short loc_1403362EB
 * 00000001403362D7: mov     [rbp+20F0h+var_1FF0], rax
 * 00000001403362DE: mov     ecx, 0C000009Ah
 * 00000001403362E3: mov     r13, rbx
 * 00000001403362E6: jmp     loc_140335926
 * 00000001403362EB: mov     ecx, [rax+50h]
 * 00000001403362EE: mov     eax, 2
 * 00000001403362F3: or      [r14+0B8h], eax
 * 00000001403362FA: add     rcx, r15
 * 00000001403362FD: mov     rax, [r13+70h]
 * 0000000140336301: cmp     rax, r15
 * 0000000140336304: jb      short loc_14033631D
 * 0000000140336306: cmp     rax, rcx
 * 0000000140336309: jnb     short loc_14033631D
 * 000000014033630B: mov     rax, [rax]
 * 000000014033630E: mov     [r14+0A8h], rax
 * 0000000140336315: or      dword ptr [r14+0B8h], 4
 * 000000014033631D: mov     rax, [r13+78h]
 * 0000000140336321: cmp     rax, r15
 * 0000000140336324: jb      short loc_14033633D
 * 0000000140336326: cmp     rax, rcx
 * 0000000140336329: jnb     short loc_14033633D
 * 000000014033632B: mov     rax, [rax]
 * 000000014033632E: mov     [r14+0B0h], rax
 * 0000000140336335: or      dword ptr [r14+0B8h], 8
 * 000000014033633D: test    dword ptr [rbx+970h], 400000h
 * 0000000140336347: mov     r13, rbx
 * 000000014033634A: mov     r14, [rbp+20F0h+BugCheckParameter2]
 * 0000000140336351: mov     [rbp+20F0h+var_2058], r14
 * 0000000140336358: mov     [rbp+20F0h+var_1FF0], rbx
 * 000000014033635F: mov     [rbp+20F0h+var_1FE0], rbx
 * 0000000140336366: jz      loc_140337306
 * 000000014033636C: mov     rax, [rbx+1F0h]
 * 0000000140336373: mov     rcx, r14
 * 0000000140336376: call    KeGuardDispatchICall
 * 000000014033637B: mov     [rbp+20F0h+var_20A0], rax
 * 000000014033637F: mov     r15, rax
 * 0000000140336382: test    rax, rax
 * 0000000140336385: jnz     short loc_140336391
 * 0000000140336387: mov     ecx, 0C000007Bh
 * 000000014033638C: jmp     loc_140335D47
 * 0000000140336391: movzx   r10d, word ptr [r15+6]
 * 0000000140336396: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001403363A0: mov     ecx, dword ptr [rbp+20F0h+var_20B8]
 * 00000001403363A3: mul     rcx
 * 00000001403363A6: xor     eax, eax
 * 00000001403363A8: mov     word ptr [rbp+20F0h+var_2060], r10w
 * 00000001403363B0: mov     r9, rdx
 * 00000001403363B3: shr     r9, 3
 * 00000001403363B7: mov     [rbp+20F0h+var_2068], r9
 * 00000001403363BE: test    r10w, r10w
 * 00000001403363C2: jnz     short loc_140336417
 * 00000001403363C4: test    dword ptr [rbx+970h], 200000h
 * 00000001403363CE: jz      loc_1403455AA
 * 00000001403363D4: cmp     [rbx+8D8h], eax
 * 00000001403363DA: jnz     short loc_140336387
 * 00000001403363DC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403363E6: add     rax, rbx
 * 00000001403363E9: mov     [rbx+8E0h], rax
 * 00000001403363F0: xor     eax, eax
 * 00000001403363F2: mov     [rbx+8E8h], rax
 * 00000001403363F9: mov     qword ptr [rbx+8F0h], 10Fh
 * 0000000140336404: mov     [rbx+8F8h], r14
 * 000000014033640B: mov     [rbx+8D8h], r12d
 * 0000000140336412: jmp     loc_140336387
 * 0000000140336417: mov     rdx, [rbp+20F0h+var_20B0]
 * 000000014033641B: movzx   r11d, word ptr [r15+14h]
 * 0000000140336420: mov     r12, rdx
 * 0000000140336423: mov     eax, r9d
 * 0000000140336426: add     r11, 18h
 * 000000014033642A: add     r11, r15
 * 000000014033642D: mov     [rbp+20F0h+var_20D8], r11
 * 0000000140336431: lea     r13, [rax+rax*2]
 * 0000000140336435: shl     r13, 2
 * 0000000140336439: mov     [rbp+20F0h+var_20C8], r13
 * 000000014033643D: lea     rax, [rdx+r13]
 * 0000000140336441: xor     edx, edx
 * 0000000140336443: mov     [rbp+20F0h+var_2030], rax
 * 000000014033644A: xor     eax, eax
 * 000000014033644C: mov     ecx, eax
 * 000000014033644E: mov     [rbp+20F0h+var_20E8], eax
 * 0000000140336451: movzx   eax, r10w
 * 0000000140336455: test    eax, eax
 * 0000000140336457: jz      loc_14033669B
 * 000000014033645D: mov     rdx, r11
 * 0000000140336460: mov     r9d, 1; BugCheckParameter3
 * 0000000140336466: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014033646A: mov     r13d, [rdx+10h]
 * 000000014033646E: mov     eax, [rdx+8]
 * 0000000140336471: cmp     r13d, eax
 * 0000000140336474: mov     r8d, [rdx+0Ch]
 * 0000000140336478: cmovbe  r13d, eax
 * 000000014033647C: mov     [rbp+20F0h+var_205C], r8d
 * 0000000140336483: add     r13d, r8d
 * 0000000140336486: test    ecx, ecx
 * 0000000140336488: jz      short loc_14033649F
 * 000000014033648A: lea     eax, [rcx-1]
 * 000000014033648D: lea     rax, [rax+rax*4]
 * 0000000140336491: cmp     r13d, [r11+rax*8+0Ch]
 * 0000000140336496: jb      loc_1403366BC
 * 000000014033649C: mov     ecx, [rbp+20F0h+var_20E8]
 * 000000014033649F: cmp     r12, [rbp+20F0h+var_2030]
 * 00000001403364A6: jz      loc_140336670
 * 00000001403364AC: mov     ecx, [r12]
 * 00000001403364B0: mov     eax, [r12+4]
 * 00000001403364B5: cmp     ecx, r13d
 * 00000001403364B8: jnb     loc_14033665B
 * 00000001403364BE: cmp     eax, r8d
 * 00000001403364C1: jbe     loc_14033665B
 * 00000001403364C7: cmp     ecx, r8d
 * 00000001403364CA: jb      loc_140336716
 * 00000001403364D0: cmp     eax, r13d
 * 00000001403364D3: ja      loc_140336716
 * 00000001403364D9: mov     eax, [r12+8]
 * 00000001403364DE: mov     ecx, 1
 * 00000001403364E3: mov     [rbp+20F0h+var_1B08], r12
 * 00000001403364EA: test    cl, al
 * 00000001403364EC: jnz     short loc_1403364FA
 * 00000001403364EE: mov     al, [rax+r14]
 * 00000001403364F2: test    al, 20h
 * 00000001403364F4: jz      loc_14033664A
 * 00000001403364FA: mov     eax, [rdx+8]
 * 00000001403364FD: mov     rcx, r12
 * 0000000140336500: mov     r14d, [rdx+10h]
 * 0000000140336504: cmp     r14d, eax
 * 0000000140336507: mov     r15d, [rdx+0Ch]
 * 000000014033650B: mov     rdx, [rbp+20F0h+var_2058]
 * 0000000140336512: cmovbe  r14d, eax
 * 0000000140336516: mov     rax, [rbx+410h]
 * 000000014033651D: add     r14d, r15d
 * 0000000140336520: call    KeGuardDispatchICall
 * 0000000140336525: mov     rcx, rax
 * 0000000140336528: cmp     [rax], r15d
 * 000000014033652B: jb      short loc_140336533
 * 000000014033652D: cmp     [rax+4], r14d
 * 0000000140336531: jbe     short loc_14033659C
 * 0000000140336533: mov     r10, [rbp+20F0h+var_2058]
 * 000000014033653A: mov     eax, 80000000h
 * 000000014033653F: mov     edx, ecx
 * 0000000140336541: sub     edx, r10d
 * 0000000140336544: or      edx, eax
 * 0000000140336546: xor     eax, eax
 * 0000000140336548: test    dword ptr [rbx+970h], 200000h
 * 0000000140336552: jz      loc_140345621
 * 0000000140336558: cmp     [rbx+8D8h], eax
 * 000000014033655E: jnz     short loc_1403365A3
 * 0000000140336560: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033656A: add     rax, rbx
 * 000000014033656D: mov     [rbx+8E0h], rax
 * 0000000140336574: xor     eax, eax
 * 0000000140336576: mov     [rbx+8E8h], rax
 * 000000014033657D: mov     eax, 1
 * 0000000140336582: mov     qword ptr [rbx+8F0h], 10Fh
 * 000000014033658D: mov     [rbx+8F8h], r10
 * 0000000140336594: mov     [rbx+8D8h], eax
 * 000000014033659A: jmp     short loc_1403365A3
 * 000000014033659C: mov     r10, [rbp+20F0h+var_2058]
 * 00000001403365A3: mov     r8d, [rcx]
 * 00000001403365A6: mov     rdx, r10
 * 00000001403365A9: mov     rax, [rbx+418h]
 * 00000001403365B0: add     r8, r10
 * 00000001403365B3: call    KeGuardDispatchICall
 * 00000001403365B8: mov     rdx, rax
 * 00000001403365BB: cmp     [rax], r15d
 * 00000001403365BE: jb      short loc_1403365C6
 * 00000001403365C0: cmp     [rax+4], r14d
 * 00000001403365C4: jbe     short loc_140336638
 * 00000001403365C6: mov     r14, [rbp+20F0h+var_2058]
 * 00000001403365CD: mov     eax, 80000000h
 * 00000001403365D2: sub     edx, r14d
 * 00000001403365D5: or      edx, eax
 * 00000001403365D7: xor     eax, eax
 * 00000001403365D9: test    dword ptr [rbx+970h], 200000h
 * 00000001403365E3: jz      loc_1403455F8
 * 00000001403365E9: mov     rdx, [rbp+20F0h+var_20F0]
 * 00000001403365ED: mov     r8d, [rbp+20F0h+var_205C]
 * 00000001403365F4: cmp     [rbx+8D8h], eax
 * 00000001403365FA: jnz     short loc_14033664A
 * 00000001403365FC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140336606: add     rax, rbx
 * 0000000140336609: mov     [rbx+8E0h], rax
 * 0000000140336610: xor     eax, eax
 * 0000000140336612: mov     [rbx+8E8h], rax
 * 0000000140336619: mov     eax, 1
 * 000000014033661E: mov     qword ptr [rbx+8F0h], 10Fh
 * 0000000140336629: mov     [rbx+8F8h], r14
 * 0000000140336630: mov     [rbx+8D8h], eax
 * 0000000140336636: jmp     short loc_14033664A
 * 0000000140336638: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033663C: mov     r8d, [rbp+20F0h+var_205C]
 * 0000000140336643: mov     r14, [rbp+20F0h+var_2058]
 * 000000014033664A: add     r12, 0Ch
 * 000000014033664E: cmp     r12, [rbp+20F0h+var_2030]
 * 0000000140336655: jnz     loc_1403364AC
 * 000000014033665B: mov     ecx, [rbp+20F0h+var_20E8]
 * 000000014033665E: mov     r9d, 1
 * 0000000140336664: movzx   r10d, word ptr [rbp+20F0h+var_2060]
 * 000000014033666C: mov     r11, [rbp+20F0h+var_20D8]
 * 0000000140336670: add     ecx, r9d
 * 0000000140336673: movzx   eax, r10w
 * 0000000140336677: add     rdx, 28h ; '('
 * 000000014033667B: mov     [rbp+20F0h+var_20E8], ecx
 * 000000014033667E: mov     [rbp+20F0h+var_20F0], rdx
 * 0000000140336682: cmp     ecx, eax
 * 0000000140336684: jb      loc_14033646A
 * 000000014033668A: mov     r9, [rbp+20F0h+var_2068]
 * 0000000140336691: xor     edx, edx
 * 0000000140336693: mov     r15, [rbp+20F0h+var_20A0]
 * 0000000140336697: mov     r13, [rbp+20F0h+var_20C8]
 * 000000014033669B: cmp     r12, [rbp+20F0h+var_2030]
 * 00000001403366A2: jz      loc_14033676C
 * 00000001403366A8: test    dword ptr [rbx+970h], 200000h
 * 00000001403366B2: jz      loc_140345675
 * 00000001403366B8: xor     eax, eax
 * 00000001403366BA: jmp     short loc_140336728
 * 00000001403366BC: xor     eax, eax
 * 00000001403366BE: test    dword ptr [rbx+970h], 200000h
 * 00000001403366C8: jz      loc_1403455D2
 * 00000001403366CE: cmp     [rbx+8D8h], eax
 * 00000001403366D4: jnz     short loc_14033670C
 * 00000001403366D6: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403366E0: add     rax, rbx
 * 00000001403366E3: mov     [rbx+8E0h], rax
 * 00000001403366EA: xor     eax, eax
 * 00000001403366EC: mov     [rbx+8E8h], rax
 * 00000001403366F3: mov     qword ptr [rbx+8F0h], 10Fh
 * 00000001403366FE: mov     [rbx+8F8h], r14
 * 0000000140336705: mov     [rbx+8D8h], r9d
 * 000000014033670C: mov     ecx, 0C000007Bh
 * 0000000140336711: jmp     loc_140336897
 * 0000000140336716: xor     eax, eax
 * 0000000140336718: test    dword ptr [rbx+970h], 200000h
 * 0000000140336722: jz      loc_14034564A
 * 0000000140336728: cmp     [rbx+8D8h], eax
 * 000000014033672E: jnz     short loc_14033670C
 * 0000000140336730: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033673A: add     rax, rbx
 * 000000014033673D: mov     [rbx+8E0h], rax
 * 0000000140336744: xor     eax, eax
 * 0000000140336746: mov     [rbx+8E8h], rax
 * 000000014033674D: mov     eax, 1
 * 0000000140336752: mov     qword ptr [rbx+8F0h], 10Fh
 * 000000014033675D: mov     [rbx+8F8h], r14
 * 0000000140336764: mov     [rbx+8D8h], eax
 * 000000014033676A: jmp     short loc_14033670C
 * 000000014033676C: mov     r14d, [rbx+7CCh]
 * 0000000140336773: lea     eax, [rax+rax*2]
 * 0000000140336776: mov     r8d, [rbx+904h]
 * 000000014033677D: lea     eax, [rax+6]
 * 0000000140336780: lea     ecx, [r9+6]
 * 0000000140336784: and     ecx, 0FFFFFFF8h
 * 0000000140336787: lea     eax, [rcx+rax*8]
 * 000000014033678A: add     eax, r14d
 * 000000014033678D: cmp     eax, [rbx+9FCh]
 * 0000000140336793: jbe     loc_14033689F
 * 0000000140336799: mov     edx, eax
 * 000000014033679B: mov     rcx, rbx
 * 000000014033679E: call    sub_1403485B4
 * 00000001403367A3: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403367A7: mov     r12, rax
 * 00000001403367AA: test    rax, rax
 * 00000001403367AD: jz      loc_140336892
 * 00000001403367B3: mov     ecx, [rbx+970h]
 * 00000001403367B9: test    cl, 4
 * 00000001403367BC: jnz     loc_140336878
 * 00000001403367C2: mov     eax, [rbx+7CCh]
 * 00000001403367C8: and     ecx, 20000000h
 * 00000001403367CE: mov     r8, [rbx+7B0h]
 * 00000001403367D5: neg     ecx
 * 00000001403367D7: mov     r10d, 1
 * 00000001403367DD: sbb     edx, edx
 * 00000001403367DF: and     edx, [rbx+904h]
 * 00000001403367E5: cmp     eax, 8
 * 00000001403367E8: jb      short loc_140336802
 * 00000001403367EA: mov     ecx, eax
 * 00000001403367EC: shr     rcx, 3
 * 00000001403367F0: xor     r9d, r9d
 * 00000001403367F3: mov     [rbx], r9
 * 00000001403367F6: add     eax, 0FFFFFFF8h
 * 00000001403367F9: add     rbx, 8
 * 00000001403367FD: sub     rcx, r10
 * 0000000140336800: jnz     short loc_1403367F3
 * 0000000140336802: xor     ecx, ecx
 * 0000000140336804: test    eax, eax
 * 0000000140336806: jz      short loc_140336818
 * 0000000140336808: mov     r9d, 0FFFFFFFFh
 * 000000014033680E: mov     [rbx], cl
 * 0000000140336810: add     rbx, r10
 * 0000000140336813: add     eax, r9d
 * 0000000140336816: jnz     short loc_14033680E
 * 0000000140336818: mov     ebx, [r12+904h]
 * 0000000140336820: mov     [r12+904h], edx
 * 0000000140336828: cmp     edx, 3
 * 000000014033682B: jz      short loc_140336860
 * 000000014033682D: test    dword ptr [r12+970h], 10000000h
 * 0000000140336839: cmovz   ecx, edx
 * 000000014033683C: test    ecx, ecx
 * 000000014033683E: jz      short loc_140336856
 * 0000000140336840: mov     rax, [r12+220h]
 * 0000000140336848: lea     rcx, [r8-8]
 * 000000014033684C: mov     rdx, [rcx]
 * 000000014033684F: call    KeGuardDispatchICall
 * 0000000140336854: jmp     short loc_140336870
 * 0000000140336856: mov     rax, [r12+0F8h]
 * 000000014033685E: jmp     short loc_140336868
 * 0000000140336860: mov     rax, [r12+360h]
 * 0000000140336868: mov     rcx, r8
 * 000000014033686B: call    KeGuardDispatchICall
 * 0000000140336870: mov     [r12+904h], ebx
 * 0000000140336878: and     dword ptr [r12+970h], 0FFFFFFFBh
 * 0000000140336881: mov     r9, [rbp+20F0h+var_2068]
 * 0000000140336888: movzx   r10d, word ptr [rbp+20F0h+var_2060]
 * 0000000140336890: jmp     short loc_1403368AC
 * 0000000140336892: mov     ecx, 0C000009Ah
 * 0000000140336897: mov     r13, rbx
 * 000000014033689A: jmp     loc_140335D47
 * 000000014033689F: mov     r12, rbx
 * 00000001403368A2: mov     [rbp+20F0h+var_20A0], rbx
 * 00000001403368A6: mov     [rbx+7CCh], eax
 * 00000001403368AC: mov     ebx, 1
 * 00000001403368B1: lea     r8, [r12+r14]
 * 00000001403368B5: add     [r12+7F4h], ebx
 * 00000001403368BD: mov     rax, r8
 * 00000001403368C0: mov     [rbp+20F0h+var_1C98], r8
 * 00000001403368C7: xor     r11d, r11d
 * 00000001403368CA: lea     ecx, [rbx+2Fh]
 * 00000001403368CD: lea     edx, [rbx+5]
 * 00000001403368D0: mov     [rax], r11
 * 00000001403368D3: add     ecx, 0FFFFFFF8h
 * 00000001403368D6: add     rax, 8
 * 00000001403368DA: sub     rdx, rbx
 * 00000001403368DD: jnz     short loc_1403368D0
 * 00000001403368DF: test    ecx, ecx
 * 00000001403368E1: jz      short loc_1403368F2
 * 00000001403368E3: mov     edx, 0FFFFFFFFh
 * 00000001403368E8: mov     [rax], r11b
 * 00000001403368EB: add     rax, rbx
 * 00000001403368EE: add     ecx, edx
 * 00000001403368F0: jnz     short loc_1403368E8
 * 00000001403368F2: mov     r14, [rbp+20F0h+var_20B0]
 * 00000001403368F6: xor     eax, eax
 * 00000001403368F8: mov     dword ptr [r8], 1Eh
 * 00000001403368FF: mov     [r8+8], r14
 * 0000000140336903: mov     [r8+10h], eax
 * 0000000140336907: mov     rcx, [r12+800h]
 * 000000014033690F: mov     rax, rcx
 * 0000000140336912: jmp     short loc_140336916
 * 0000000140336914: xor     ecx, eax
 * 0000000140336916: shr     rax, 1Fh
 * 000000014033691A: test    rax, rax
 * 000000014033691D: jnz     short loc_140336914
 * 000000014033691F: btr     ecx, 1Fh
 * 0000000140336923: lea     r11d, [r9-1]
 * 0000000140336927: mov     [r8+14h], ecx
 * 000000014033692B: mov     rbx, r12
 * 000000014033692E: mov     rax, [rbp+20F0h+var_1C98]
 * 0000000140336935: mov     r8d, 0FFFEh
 * 000000014033693B: mov     rcx, [rbp+20F0h+var_2058]
 * 0000000140336942: mov     [rbp+20F0h+var_1F38], rax
 * 0000000140336949: mov     [rbp+20F0h+var_1FF0], rbx
 * 0000000140336950: mov     [rax+18h], rcx
 * 0000000140336954: mov     ecx, [r15+50h]
 * 0000000140336958: mov     r15d, 0Ch
 * 000000014033695E: mov     rax, [rbp+20F0h+var_1F38]
 * 0000000140336965: mov     [rax+20h], ecx
 * 0000000140336968: mov     rax, [rbp+20F0h+var_1F38]
 * 000000014033696F: mov     ecx, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140336972: mov     [rax+24h], ecx
 * 0000000140336975: mov     rax, [rbp+20F0h+var_1F38]
 * 000000014033697C: mov     [rax+28h], r10w
 * 0000000140336981: xor     eax, eax
 * 0000000140336983: cmp     [rbp+20F0h+var_2090], eax
 * 0000000140336986: mov     ecx, eax
 * 0000000140336988: mov     rdx, [rbp+20F0h+var_1F38]
 * 000000014033698F: setnz   cl
 * 0000000140336992: add     r11, 7
 * 0000000140336996: and     r11, 0FFFFFFFFFFFFFFF8h
 * 000000014033699A: movzx   eax, word ptr [rdx+2Ah]
 * 000000014033699E: and     ax, r8w
 * 00000001403369A2: or      cx, ax
 * 00000001403369A5: mov     [rdx+2Ah], cx
 * 00000001403369A9: mov     rcx, [rbp+20F0h+var_1F38]
 * 00000001403369B0: movzx   eax, word ptr [rcx+28h]
 * 00000001403369B4: lea     rdx, [rcx+30h]
 * 00000001403369B8: add     r11, rdx
 * 00000001403369BB: mov     [rbp+20F0h+var_2080], rdx
 * 00000001403369BF: mov     [rbp+20F0h+var_2068], r11
 * 00000001403369C6: lea     rcx, [rax+rax*2]
 * 00000001403369CA: xor     eax, eax
 * 00000001403369CC: lea     r8, [r11+rcx*8]
 * 00000001403369D0: test    r9d, r9d
 * 00000001403369D3: mov     ecx, r15d
 * 00000001403369D6: mov     [rbp+20F0h+var_20C8], r8
 * 00000001403369DA: cmovz   rcx, r13
 * 00000001403369DE: add     rcx, r14
 * 00000001403369E1: mov     [rbp+20F0h+var_20F0], rcx
 * 00000001403369E5: cmp     ax, r10w
 * 00000001403369E9: jnb     short loc_140336A27
 * 00000001403369EB: movzx   edx, r10w
 * 00000001403369EF: lea     rax, [r11+8]
 * 00000001403369F3: lea     r10d, [r15-0Bh]
 * 00000001403369F7: xor     r9d, r9d
 * 00000001403369FA: lea     esi, [r15-0Ah]
 * 00000001403369FE: mov     r13d, 80000000h
 * 0000000140336A04: mov     rcx, rsi
 * 0000000140336A07: mov     [rax-8], r9d
 * 0000000140336A0B: mov     [rax-4], r9d
 * 0000000140336A0F: mov     [rax], r13d
 * 0000000140336A12: add     rax, r15
 * 0000000140336A15: sub     rcx, r10
 * 0000000140336A18: jnz     short loc_140336A07
 * 0000000140336A1A: sub     rdx, r10
 * 0000000140336A1D: jnz     short loc_140336A04
 * 0000000140336A1F: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140336A23: xor     eax, eax
 * 0000000140336A25: jmp     short loc_140336A2D
 * 0000000140336A27: mov     r10d, 1
 * 0000000140336A2D: cmp     r11, r8
 * 0000000140336A30: jz      loc_140337306
 * 0000000140336A36: mov     r13, [rbp+20F0h+var_20D8]
 * 0000000140336A3A: jmp     short loc_140336A3E
 * 0000000140336A3C: xor     eax, eax
 * 0000000140336A3E: mov     r15d, eax
 * 0000000140336A41: mov     eax, [r13+24h]
 * 0000000140336A45: bt      eax, 19h
 * 0000000140336A49: jb      loc_140336C73
 * 0000000140336A4F: mov     ecx, [r13+0]
 * 0000000140336A53: cmp     ecx, 54494E49h
 * 0000000140336A59: jnz     short loc_140336A69
 * 0000000140336A5B: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140336A63: jz      loc_140336C73
 * 0000000140336A69: cmp     ecx, 45474150h
 * 0000000140336A6F: jnz     short loc_140336AA0
 * 0000000140336A71: movzx   eax, word ptr [r13+4]
 * 0000000140336A76: mov     edx, 7877h
 * 0000000140336A7B: cmp     ax, dx
 * 0000000140336A7E: jz      loc_140336C73
 * 0000000140336A84: mov     edx, 7277h
 * 0000000140336A89: cmp     ax, dx
 * 0000000140336A8C: jz      loc_140336C73
 * 0000000140336A92: mov     edx, 7777h
 * 0000000140336A97: cmp     ax, dx
 * 0000000140336A9A: jz      loc_140336C73
 * 0000000140336AA0: cmp     ecx, 41525245h
 * 0000000140336AA6: jnz     short loc_140336AB8
 * 0000000140336AA8: mov     eax, 4154h
 * 0000000140336AAD: cmp     [r13+4], ax
 * 0000000140336AB2: jz      loc_140336C73
 * 0000000140336AB8: mov     r8, [r12+910h]
 * 0000000140336AC0: mov     r10d, 7
 * 0000000140336AC6: mov     r11, [r12+918h]
 * 0000000140336ACE: mov     r9, r13
 * 0000000140336AD1: mov     rbx, [r12+920h]
 * 0000000140336AD9: mov     r14, [r12+928h]
 * 0000000140336AE1: movzx   edx, byte ptr [r9]
 * 0000000140336AE5: inc     r9
 * 0000000140336AE8: movzx   eax, byte ptr [r8]
 * 0000000140336AEC: inc     r8
 * 0000000140336AEF: cmp     rdx, rax
 * 0000000140336AF2: jnz     loc_140336BC1
 * 0000000140336AF8: mov     eax, 0FFFFFFFFh
 * 0000000140336AFD: add     r10d, eax
 * 0000000140336B00: jnz     short loc_140336AE1
 * 0000000140336B02: mov     r10d, 1
 * 0000000140336B08: mov     r15d, r10d
 * 0000000140336B0B: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140336B0F: mov     r11, [rbp+20F0h+var_2068]
 * 0000000140336B16: mov     ecx, [r13+24h]
 * 0000000140336B1A: xor     eax, eax
 * 0000000140336B1C: test    ecx, ecx
 * 0000000140336B1E: cmovs   r15d, r10d
 * 0000000140336B22: mov     [rbp+20F0h+var_2090], r15d
 * 0000000140336B26: test    r15d, r15d
 * 0000000140336B29: jz      short loc_140336B53
 * 0000000140336B2B: cmp     dword ptr [r13+0], 54494E49h
 * 0000000140336B33: jnz     short loc_140336B53
 * 0000000140336B35: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140336B3D: jnz     short loc_140336B53
 * 0000000140336B3F: test    dword ptr [r12+974h], 2000h
 * 0000000140336B4B: cmovnz  r15d, eax
 * 0000000140336B4F: mov     [rbp+20F0h+var_2090], r15d
 * 0000000140336B53: test    dword ptr [r12+974h], 4000h
 * 0000000140336B5F: jz      short loc_140336B89
 * 0000000140336B61: bt      ecx, 1Dh
 * 0000000140336B65: jnb     short loc_140336B89
 * 0000000140336B67: mov     rax, [rbp+20F0h+var_2058]
 * 0000000140336B6E: cmp     rax, [r12+5D8h]
 * 0000000140336B76: jz      short loc_140336B82
 * 0000000140336B78: cmp     rax, [r12+5E0h]
 * 0000000140336B80: jnz     short loc_140336B89
 * 0000000140336B82: mov     r15d, r10d
 * 0000000140336B85: mov     [rbp+20F0h+var_2090], r10d
 * 0000000140336B89: mov     ecx, [r13+10h]
 * 0000000140336B8D: mov     eax, [r13+8]
 * 0000000140336B91: cmp     ecx, eax
 * 0000000140336B93: mov     ebx, [r13+0Ch]
 * 0000000140336B97: mov     r8, [rbp+20F0h+var_2030]
 * 0000000140336B9E: cmovbe  ecx, eax
 * 0000000140336BA1: add     ecx, ebx
 * 0000000140336BA3: mov     [rbp+20F0h+var_2060], ebx
 * 0000000140336BA9: mov     [rbp+20F0h+var_20E8], ecx
 * 0000000140336BAC: cmp     r14, r8
 * 0000000140336BAF: jz      loc_140336C7B
 * 0000000140336BB5: mov     r13d, [r14]
 * 0000000140336BB8: mov     eax, [r14+4]
 * 0000000140336BBC: jmp     loc_140336C80
 * 0000000140336BC1: mov     r8d, 8
 * 0000000140336BC7: mov     r9, r13
 * 0000000140336BCA: mov     rcx, [r9]
 * 0000000140336BCD: add     r9, 8
 * 0000000140336BD1: mov     rax, [r11]
 * 0000000140336BD4: add     r11, 8
 * 0000000140336BD8: cmp     rcx, rax
 * 0000000140336BDB: jnz     short loc_140336C18
 * 0000000140336BDD: add     r8d, 0FFFFFFF8h
 * 0000000140336BE1: cmp     r8d, 8
 * 0000000140336BE5: jnb     short loc_140336BCA
 * 0000000140336BE7: test    r8d, r8d
 * 0000000140336BEA: jz      loc_140336B02
 * 0000000140336BF0: mov     r10d, 1
 * 0000000140336BF6: movzx   edx, byte ptr [r9]
 * 0000000140336BFA: add     r9, r10
 * 0000000140336BFD: movzx   eax, byte ptr [r11]
 * 0000000140336C01: add     r11, r10
 * 0000000140336C04: cmp     rdx, rax
 * 0000000140336C07: jnz     short loc_140336C1E
 * 0000000140336C09: mov     eax, 0FFFFFFFFh
 * 0000000140336C0E: add     r8d, eax
 * 0000000140336C11: jnz     short loc_140336BF6
 * 0000000140336C13: jmp     loc_140336B08
 * 0000000140336C18: mov     r10d, 1
 * 0000000140336C1E: mov     r9d, 4
 * 0000000140336C24: mov     r8, r13
 * 0000000140336C27: mov     r11d, 0FFFFFFFFh
 * 0000000140336C2D: movzx   edx, byte ptr [r8]
 * 0000000140336C31: add     r8, r10
 * 0000000140336C34: movzx   eax, byte ptr [rbx]
 * 0000000140336C37: add     rbx, r10
 * 0000000140336C3A: cmp     rdx, rax
 * 0000000140336C3D: jnz     short loc_140336C49
 * 0000000140336C3F: add     r9d, r11d
 * 0000000140336C42: jnz     short loc_140336C2D
 * 0000000140336C44: jmp     loc_140336B08
 * 0000000140336C49: mov     r9d, 6
 * 0000000140336C4F: mov     r8, r13
 * 0000000140336C52: movzx   edx, byte ptr [r8]
 * 0000000140336C56: add     r8, r10
 * 0000000140336C59: movzx   eax, byte ptr [r14]
 * 0000000140336C5D: add     r14, r10
 * 0000000140336C60: cmp     rdx, rax
 * 0000000140336C63: jnz     loc_140336B0B
 * 0000000140336C69: add     r9d, r11d
 * 0000000140336C6C: jnz     short loc_140336C52
 * 0000000140336C6E: jmp     loc_140336B08
 * 0000000140336C73: mov     r15d, r10d
 * 0000000140336C76: jmp     loc_140336B16
 * 0000000140336C7B: xor     eax, eax
 * 0000000140336C7D: mov     r13d, eax
 * 0000000140336C80: mov     [rbp+20F0h+var_205C], eax
 * 0000000140336C86: mov     dword ptr [rbp+20F0h+var_20B8], ebx
 * 0000000140336C89: cmp     r14, r8
 * 0000000140336C8C: jz      loc_140336E6D
 * 0000000140336C92: cmp     r13d, ebx
 * 0000000140336C95: jbe     loc_140336E6D
 * 0000000140336C9B: cmp     eax, ecx
 * 0000000140336C9D: ja      loc_140336E6D
 * 0000000140336CA3: test    r15d, r15d
 * 0000000140336CA6: mov     r15, [rbp+20F0h+var_2058]
 * 0000000140336CAD: jnz     loc_140336E74
 * 0000000140336CB3: mov     [r11], ebx
 * 0000000140336CB6: lea     rdx, [rbp+20F0h+var_1DD8]
 * 0000000140336CBD: mov     [r11+4], r13d
 * 0000000140336CC1: lea     r8, [rbp+20F0h+var_1C40]
 * 0000000140336CC8: mov     eax, [r11]
 * 0000000140336CCB: mov     r10d, r13d
 * 0000000140336CCE: sub     r10d, eax
 * 0000000140336CD1: mov     dword ptr [rbp+20F0h+var_20B8], r13d
 * 0000000140336CD5: mov     r11d, r10d
 * 0000000140336CD8: lea     r14, [r15+rax]
 * 0000000140336CDC: add     r11, r14
 * 0000000140336CDF: xor     eax, eax
 * 0000000140336CE1: mov     r9d, eax
 * 0000000140336CE4: mov     rcx, [r8]
 * 0000000140336CE7: mov     eax, [rdx]
 * 0000000140336CE9: add     rax, rcx
 * 0000000140336CEC: cmp     r14, rax
 * 0000000140336CEF: jnb     short loc_140336CFA
 * 0000000140336CF1: cmp     r11, rcx
 * 0000000140336CF4: ja      loc_140336E57
 * 0000000140336CFA: inc     r9d
 * 0000000140336CFD: add     r8, 8
 * 0000000140336D01: add     rdx, 4
 * 0000000140336D05: cmp     r9d, 6
 * 0000000140336D09: jb      short loc_140336CE4
 * 0000000140336D0B: add     [r12+810h], r10d
 * 0000000140336D13: mov     rbx, r14
 * 0000000140336D16: mov     r15, [rbp+20F0h+var_20A0]
 * 0000000140336D1A: mov     rax, r14
 * 0000000140336D1D: mov     r12d, [r12+7FCh]
 * 0000000140336D25: mov     r15, [r15+800h]
 * 0000000140336D2C: cmp     r14, r11
 * 0000000140336D2F: jnb     short loc_140336D41
 * 0000000140336D31: mov     ecx, 40h ; '@'
 * 0000000140336D36: prefetchnta byte ptr [rax]
 * 0000000140336D39: add     rax, rcx
 * 0000000140336D3C: cmp     rax, r11
 * 0000000140336D3F: jb      short loc_140336D36
 * 0000000140336D41: mov     r9d, r10d
 * 0000000140336D44: mov     r8, r15
 * 0000000140336D47: shr     r9d, 7
 * 0000000140336D4B: mov     r11d, 1
 * 0000000140336D51: test    r9d, r9d
 * 0000000140336D54: jz      short loc_140336DBF
 * 0000000140336D56: mov     rsi, 7010008004002001h
 * 0000000140336D60: mov     edx, 8
 * 0000000140336D65: mov     rax, [rbx]
 * 0000000140336D68: mov     ecx, r12d
 * 0000000140336D6B: xor     rax, r8
 * 0000000140336D6E: mov     r8, [rbx+8]
 * 0000000140336D72: rol     rax, cl
 * 0000000140336D75: add     rbx, 10h
 * 0000000140336D79: xor     r8, rax
 * 0000000140336D7C: rol     r8, cl
 * 0000000140336D7F: sub     rdx, r11
 * 0000000140336D82: jnz     short loc_140336D65
 * 0000000140336D84: mov     rcx, rbx
 * 0000000140336D87: sub     rcx, r14
 * 0000000140336D8A: xor     rcx, r15
 * 0000000140336D8D: mov     rax, rcx
 * 0000000140336D90: rol     rax, 11h
 * 0000000140336D94: xor     rcx, rax
 * 0000000140336D97: mov     rax, rsi
 * 0000000140336D9A: mul     rcx
 * 0000000140336D9D: xor     eax, edx
 * 0000000140336D9F: mov     [rbp+20F0h+var_1B00], rdx
 * 0000000140336DA6: xor     r12d, eax
 * 0000000140336DA9: mov     eax, 0FFFFFFFFh
 * 0000000140336DAE: and     r12d, 3Fh
 * 0000000140336DB2: cmovz   r12d, r11d
 * 0000000140336DB6: add     r9d, eax
 * 0000000140336DB9: jnz     short loc_140336D60
 * 0000000140336DBB: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140336DBF: and     r10d, 7Fh
 * 0000000140336DC3: cmp     r10d, 8
 * 0000000140336DC7: jb      short loc_140336DE6
 * 0000000140336DC9: mov     edx, r10d
 * 0000000140336DCC: shr     rdx, 3
 * 0000000140336DD0: xor     r8, [rbx]
 * 0000000140336DD3: mov     ecx, r12d
 * 0000000140336DD6: rol     r8, cl
 * 0000000140336DD9: add     rbx, 8
 * 0000000140336DDD: add     r10d, 0FFFFFFF8h
 * 0000000140336DE1: sub     rdx, r11
 * 0000000140336DE4: jnz     short loc_140336DD0
 * 0000000140336DE6: test    r10d, r10d
 * 0000000140336DE9: jz      short loc_140336E08
 * 0000000140336DEB: mov     esi, 0FFFFFFFFh
 * 0000000140336DF0: movzx   eax, byte ptr [rbx]
 * 0000000140336DF3: mov     ecx, r12d
 * 0000000140336DF6: xor     r8, rax
 * 0000000140336DF9: add     rbx, r11
 * 0000000140336DFC: rol     r8, cl
 * 0000000140336DFF: add     r10d, esi
 * 0000000140336E02: jnz     short loc_140336DF0
 * 0000000140336E04: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140336E08: mov     rax, r8
 * 0000000140336E0B: shr     rax, 1Fh
 * 0000000140336E0F: xor     r9d, r9d
 * 0000000140336E12: jmp     short loc_140336E1B
 * 0000000140336E14: xor     r8d, eax
 * 0000000140336E17: shr     rax, 1Fh
 * 0000000140336E1B: test    rax, rax
 * 0000000140336E1E: jnz     short loc_140336E14
 * 0000000140336E20: mov     rax, [rbp+20F0h+var_2068]
 * 0000000140336E27: btr     r8d, 1Fh
 * 0000000140336E2C: mov     ecx, [rbp+20F0h+var_20E8]
 * 0000000140336E2F: mov     r10d, 1
 * 0000000140336E35: mov     ebx, [rbp+20F0h+var_2060]
 * 0000000140336E3B: mov     r12, [rbp+20F0h+var_20A0]
 * 0000000140336E3F: mov     r15, [rbp+20F0h+var_2058]
 * 0000000140336E46: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140336E4A: mov     [rax+8], r8d
 * 0000000140336E4E: mov     r8, [rbp+20F0h+var_2030]
 * 0000000140336E55: jmp     short loc_140336E77
 * 0000000140336E57: mov     ecx, [rbp+20F0h+var_20E8]
 * 0000000140336E5A: mov     r10d, 1
 * 0000000140336E60: mov     r8, [rbp+20F0h+var_2030]
 * 0000000140336E67: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140336E6B: jmp     short loc_140336E74
 * 0000000140336E6D: mov     r15, [rbp+20F0h+var_2058]
 * 0000000140336E74: xor     r9d, r9d
 * 0000000140336E77: cmp     r13d, ebx
 * 0000000140336E7A: jb      loc_140337100
 * 0000000140336E80: cmp     [rbp+20F0h+var_205C], ecx
 * 0000000140336E86: ja      loc_140337100
 * 0000000140336E8C: cmp     r14, r8
 * 0000000140336E8F: jz      loc_140337100
 * 0000000140336E95: mov     r11, [rbp+20F0h+var_20F0]
 * 0000000140336E99: mov     r13d, [r11+4]
 * 0000000140336E9D: cmp     r13d, ecx
 * 0000000140336EA0: ja      loc_140337100
 * 0000000140336EA6: mov     rax, [rbp+20F0h+var_2080]
 * 0000000140336EAA: mov     edx, 0Ch
 * 0000000140336EAF: jmp     short loc_140336EB5
 * 0000000140336EB1: mov     r12, [rbp+20F0h+var_20A0]
 * 0000000140336EB5: cmp     r11, r8
 * 0000000140336EB8: jz      loc_140337100
 * 0000000140336EBE: cmp     [rbp+20F0h+var_2090], r9d
 * 0000000140336EC2: jz      short loc_140336ECC
 * 0000000140336EC4: mov     r8b, 80h
 * 0000000140336EC7: jmp     loc_1403370CB
 * 0000000140336ECC: mov     edx, [r11]
 * 0000000140336ECF: mov     ecx, [r14+4]
 * 0000000140336ED3: mov     dword ptr [rbp+20F0h+var_20B8], edx
 * 0000000140336ED6: cmp     edx, ecx
 * 0000000140336ED8: jnb     short loc_140336F33
 * 0000000140336EDA: test    dword ptr [r12+970h], 200000h
 * 0000000140336EE6: jz      loc_1403456A0
 * 0000000140336EEC: xor     eax, eax
 * 0000000140336EEE: cmp     [r12+8D8h], eax
 * 0000000140336EF6: jnz     short loc_140336F33
 * 0000000140336EF8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140336F02: add     rax, r12
 * 0000000140336F05: mov     [r12+8E0h], rax
 * 0000000140336F0D: xor     eax, eax
 * 0000000140336F0F: mov     [r12+8E8h], rax
 * 0000000140336F17: mov     qword ptr [r12+8F0h], 10Fh
 * 0000000140336F23: mov     [r12+8F8h], r15
 * 0000000140336F2B: mov     [r12+8D8h], r10d
 * 0000000140336F33: mov     r9d, edx
 * 0000000140336F36: lea     r14, [r15+rcx]
 * 0000000140336F3A: sub     r9d, ecx
 * 0000000140336F3D: lea     rdx, [rbp+20F0h+var_1DD8]
 * 0000000140336F44: mov     ebx, r9d
 * 0000000140336F47: lea     r8, [rbp+20F0h+var_1C40]
 * 0000000140336F4E: add     rbx, r14
 * 0000000140336F51: xor     eax, eax
 * 0000000140336F53: mov     r10d, eax
 * 0000000140336F56: mov     rcx, [r8]
 * 0000000140336F59: mov     eax, [rdx]
 * 0000000140336F5B: add     rax, rcx
 * 0000000140336F5E: cmp     r14, rax
 * 0000000140336F61: jnb     short loc_140336F6C
 * 0000000140336F63: cmp     rbx, rcx
 * 0000000140336F66: ja      loc_1403370B0
 * 0000000140336F6C: mov     eax, 4
 * 0000000140336F71: inc     r10d
 * 0000000140336F74: add     rdx, rax
 * 0000000140336F77: add     r8, 8
 * 0000000140336F7B: cmp     r10d, 6
 * 0000000140336F7F: jb      short loc_140336F56
 * 0000000140336F81: cmp     r9d, eax
 * 0000000140336F84: jb      loc_1403370B0
 * 0000000140336F8A: add     [r12+810h], r9d
 * 0000000140336F92: mov     r11, r14
 * 0000000140336F95: mov     r15, [rbp+20F0h+var_20A0]
 * 0000000140336F99: mov     rax, r14
 * 0000000140336F9C: mov     r12d, [r12+7FCh]
 * 0000000140336FA4: mov     r15, [r15+800h]
 * 0000000140336FAB: cmp     r14, rbx
 * 0000000140336FAE: jnb     short loc_140336FC0
 * 0000000140336FB0: mov     ecx, 40h ; '@'
 * 0000000140336FB5: prefetchnta byte ptr [rax]
 * 0000000140336FB8: add     rax, rcx
 * 0000000140336FBB: cmp     rax, rbx
 * 0000000140336FBE: jb      short loc_140336FB5
 * 0000000140336FC0: mov     r10d, r9d
 * 0000000140336FC3: mov     r8, r15
 * 0000000140336FC6: shr     r10d, 7
 * 0000000140336FCA: mov     ebx, 1
 * 0000000140336FCF: test    r10d, r10d
 * 0000000140336FD2: jz      short loc_14033703D
 * 0000000140336FD4: mov     rsi, 7010008004002001h
 * 0000000140336FDE: mov     edx, 8
 * 0000000140336FE3: mov     rax, [r11]
 * 0000000140336FE6: mov     ecx, r12d
 * 0000000140336FE9: xor     rax, r8
 * 0000000140336FEC: mov     r8, [r11+8]
 * 0000000140336FF0: rol     rax, cl
 * 0000000140336FF3: add     r11, 10h
 * 0000000140336FF7: xor     r8, rax
 * 0000000140336FFA: rol     r8, cl
 * 0000000140336FFD: sub     rdx, rbx
 * 0000000140337000: jnz     short loc_140336FE3
 * 0000000140337002: mov     rcx, r11
 * 0000000140337005: sub     rcx, r14
 * 0000000140337008: xor     rcx, r15
 * 000000014033700B: mov     rax, rcx
 * 000000014033700E: rol     rax, 11h
 * 0000000140337012: xor     rcx, rax
 * 0000000140337015: mov     rax, rsi
 * 0000000140337018: mul     rcx
 * 000000014033701B: xor     eax, edx
 * 000000014033701D: mov     [rbp+20F0h+var_1AF8], rdx
 * 0000000140337024: xor     r12d, eax
 * 0000000140337027: mov     eax, 0FFFFFFFFh
 * 000000014033702C: and     r12d, 3Fh
 * 0000000140337030: cmovz   r12d, ebx
 * 0000000140337034: add     r10d, eax
 * 0000000140337037: jnz     short loc_140336FDE
 * 0000000140337039: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033703D: and     r9d, 7Fh
 * 0000000140337041: cmp     r9d, 8
 * 0000000140337045: jb      short loc_140337064
 * 0000000140337047: mov     edx, r9d
 * 000000014033704A: shr     rdx, 3
 * 000000014033704E: xor     r8, [r11]
 * 0000000140337051: mov     ecx, r12d
 * 0000000140337054: rol     r8, cl
 * 0000000140337057: add     r11, 8
 * 000000014033705B: add     r9d, 0FFFFFFF8h
 * 000000014033705F: sub     rdx, rbx
 * 0000000140337062: jnz     short loc_14033704E
 * 0000000140337064: test    r9d, r9d
 * 0000000140337067: jz      short loc_140337087
 * 0000000140337069: mov     esi, 0FFFFFFFFh
 * 000000014033706E: movzx   eax, byte ptr [r11]
 * 0000000140337072: mov     ecx, r12d
 * 0000000140337075: xor     r8, rax
 * 0000000140337078: add     r11, rbx
 * 000000014033707B: rol     r8, cl
 * 000000014033707E: add     r9d, esi
 * 0000000140337081: jnz     short loc_14033706E
 * 0000000140337083: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140337087: mov     rax, r8
 * 000000014033708A: shr     rax, 7
 * 000000014033708E: xor     r9d, r9d
 * 0000000140337091: jmp     short loc_14033709A
 * 0000000140337093: xor     r8b, al
 * 0000000140337096: shr     rax, 7
 * 000000014033709A: test    rax, rax
 * 000000014033709D: jnz     short loc_140337093
 * 000000014033709F: mov     r15, [rbp+20F0h+var_2058]
 * 00000001403370A6: and     r8b, 7Fh
 * 00000001403370AA: mov     r11, [rbp+20F0h+var_20F0]
 * 00000001403370AE: jmp     short loc_1403370B6
 * 00000001403370B0: xor     r9d, r9d
 * 00000001403370B3: mov     r8b, 80h
 * 00000001403370B6: mov     r14, [rbp+20F0h+var_20B0]
 * 00000001403370BA: mov     r10d, 1
 * 00000001403370C0: mov     ecx, [rbp+20F0h+var_20E8]
 * 00000001403370C3: mov     rax, [rbp+20F0h+var_2080]
 * 00000001403370C7: lea     edx, [r10+0Bh]
 * 00000001403370CB: mov     [rax], r8b
 * 00000001403370CE: add     r14, rdx
 * 00000001403370D1: mov     rax, [rbp+20F0h+var_2080]
 * 00000001403370D5: add     r11, rdx
 * 00000001403370D8: mov     r8, [rbp+20F0h+var_2030]
 * 00000001403370DF: add     rax, r10
 * 00000001403370E2: mov     [rbp+20F0h+var_20B0], r14
 * 00000001403370E6: mov     [rbp+20F0h+var_2080], rax
 * 00000001403370EA: mov     [rbp+20F0h+var_20F0], r11
 * 00000001403370EE: cmp     r11, r8
 * 00000001403370F1: jz      short loc_1403370F7
 * 00000001403370F3: mov     r13d, [r11+4]
 * 00000001403370F7: cmp     r13d, ecx
 * 00000001403370FA: jbe     loc_140336EB1
 * 0000000140337100: mov     r11, [rbp+20F0h+var_2068]
 * 0000000140337107: xor     eax, eax
 * 0000000140337109: cmp     [rbp+20F0h+var_2090], eax
 * 000000014033710C: jnz     loc_140337289
 * 0000000140337112: mov     eax, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140337115: cmp     eax, ecx
 * 0000000140337117: jz      loc_140337289
 * 000000014033711D: mov     [r11+0Ch], eax
 * 0000000140337121: lea     rdx, [rbp+20F0h+var_1DD8]
 * 0000000140337128: mov     [r11+10h], ecx
 * 000000014033712C: lea     r8, [rbp+20F0h+var_1C40]
 * 0000000140337133: mov     eax, [r11+0Ch]
 * 0000000140337137: mov     r9d, ecx
 * 000000014033713A: sub     r9d, eax
 * 000000014033713D: mov     ebx, r9d
 * 0000000140337140: lea     r14, [r15+rax]
 * 0000000140337144: add     rbx, r14
 * 0000000140337147: xor     eax, eax
 * 0000000140337149: mov     r10d, eax
 * 000000014033714C: lea     r13d, [rax+1]
 * 0000000140337150: mov     rcx, [r8]
 * 0000000140337153: mov     eax, [rdx]
 * 0000000140337155: add     rax, rcx
 * 0000000140337158: cmp     r14, rax
 * 000000014033715B: jnb     short loc_140337166
 * 000000014033715D: cmp     rbx, rcx
 * 0000000140337160: ja      loc_140337285
 * 0000000140337166: add     r10d, r13d
 * 0000000140337169: add     r8, 8
 * 000000014033716D: add     rdx, 4
 * 0000000140337171: cmp     r10d, 6
 * 0000000140337175: jb      short loc_140337150
 * 0000000140337177: mov     rax, [rbp+20F0h+var_20A0]
 * 000000014033717B: mov     r11, r14
 * 000000014033717E: add     [rax+810h], r9d
 * 0000000140337185: mov     r12d, [rax+7FCh]
 * 000000014033718C: mov     r15, [rax+800h]
 * 0000000140337193: mov     rax, r14
 * 0000000140337196: cmp     r14, rbx
 * 0000000140337199: jnb     short loc_1403371AB
 * 000000014033719B: mov     ecx, 40h ; '@'
 * 00000001403371A0: prefetchnta byte ptr [rax]
 * 00000001403371A3: add     rax, rcx
 * 00000001403371A6: cmp     rax, rbx
 * 00000001403371A9: jb      short loc_1403371A0
 * 00000001403371AB: mov     r10d, r9d
 * 00000001403371AE: mov     r8, r15
 * 00000001403371B1: shr     r10d, 7
 * 00000001403371B5: mov     ebx, 0FFFFFFFFh
 * 00000001403371BA: test    r10d, r10d
 * 00000001403371BD: jz      short loc_140337223
 * 00000001403371BF: mov     rsi, 7010008004002001h
 * 00000001403371C9: mov     edx, 8
 * 00000001403371CE: mov     rax, [r11]
 * 00000001403371D1: mov     ecx, r12d
 * 00000001403371D4: xor     rax, r8
 * 00000001403371D7: mov     r8, [r11+8]
 * 00000001403371DB: rol     rax, cl
 * 00000001403371DE: add     r11, 10h
 * 00000001403371E2: xor     r8, rax
 * 00000001403371E5: rol     r8, cl
 * 00000001403371E8: sub     rdx, r13
 * 00000001403371EB: jnz     short loc_1403371CE
 * 00000001403371ED: mov     rcx, r11
 * 00000001403371F0: sub     rcx, r14
 * 00000001403371F3: xor     rcx, r15
 * 00000001403371F6: mov     rax, rcx
 * 00000001403371F9: rol     rax, 11h
 * 00000001403371FD: xor     rcx, rax
 * 0000000140337200: mov     rax, rsi
 * 0000000140337203: mul     rcx
 * 0000000140337206: xor     eax, edx
 * 0000000140337208: mov     [rbp+20F0h+var_1AF0], rdx
 * 000000014033720F: xor     r12d, eax
 * 0000000140337212: and     r12d, 3Fh
 * 0000000140337216: cmovz   r12d, r13d
 * 000000014033721A: add     r10d, ebx
 * 000000014033721D: jnz     short loc_1403371C9
 * 000000014033721F: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140337223: and     r9d, 7Fh
 * 0000000140337227: cmp     r9d, 8
 * 000000014033722B: jb      short loc_14033724A
 * 000000014033722D: mov     edx, r9d
 * 0000000140337230: shr     rdx, 3
 * 0000000140337234: xor     r8, [r11]
 * 0000000140337237: mov     ecx, r12d
 * 000000014033723A: rol     r8, cl
 * 000000014033723D: add     r11, 8
 * 0000000140337241: add     r9d, 0FFFFFFF8h
 * 0000000140337245: sub     rdx, r13
 * 0000000140337248: jnz     short loc_140337234
 * 000000014033724A: test    r9d, r9d
 * 000000014033724D: jz      short loc_140337264
 * 000000014033724F: movzx   eax, byte ptr [r11]
 * 0000000140337253: mov     ecx, r12d
 * 0000000140337256: xor     r8, rax
 * 0000000140337259: add     r11, r13
 * 000000014033725C: rol     r8, cl
 * 000000014033725F: add     r9d, ebx
 * 0000000140337262: jnz     short loc_14033724F
 * 0000000140337264: mov     rax, r8
 * 0000000140337267: jmp     short loc_14033726C
 * 0000000140337269: xor     r8d, eax
 * 000000014033726C: shr     rax, 1Fh
 * 0000000140337270: test    rax, rax
 * 0000000140337273: jnz     short loc_140337269
 * 0000000140337275: mov     r11, [rbp+20F0h+var_2068]
 * 000000014033727C: btr     r8d, 1Fh
 * 0000000140337281: mov     [r11+14h], r8d
 * 0000000140337285: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140337289: mov     rdx, [rbp+20F0h+var_2030]
 * 0000000140337290: cmp     r14, rdx
 * 0000000140337293: jz      short loc_1403372D4
 * 0000000140337295: mov     eax, [r14]
 * 0000000140337298: mov     ecx, [r14+4]
 * 000000014033729C: cmp     eax, [rbp+20F0h+var_2060]
 * 00000001403372A2: jb      short loc_1403372D4
 * 00000001403372A4: cmp     ecx, [rbp+20F0h+var_20E8]
 * 00000001403372A7: ja      short loc_1403372D4
 * 00000001403372A9: mov     rcx, [rbp+20F0h+var_20F0]
 * 00000001403372AD: mov     r15d, 0Ch
 * 00000001403372B3: cmp     rcx, rdx
 * 00000001403372B6: jz      short loc_1403372CD
 * 00000001403372B8: mov     rax, [rbp+20F0h+var_2080]
 * 00000001403372BC: mov     byte ptr [rax], 80h
 * 00000001403372BF: inc     rax
 * 00000001403372C2: add     rcx, r15
 * 00000001403372C5: mov     [rbp+20F0h+var_2080], rax
 * 00000001403372C9: mov     [rbp+20F0h+var_20F0], rcx
 * 00000001403372CD: add     r14, r15
 * 00000001403372D0: mov     [rbp+20F0h+var_20B0], r14
 * 00000001403372D4: mov     r13, [rbp+20F0h+var_20D8]
 * 00000001403372D8: add     r11, 18h
 * 00000001403372DC: mov     r12, [rbp+20F0h+var_20A0]
 * 00000001403372E0: add     r13, 28h ; '('
 * 00000001403372E4: mov     r10d, 1
 * 00000001403372EA: mov     [rbp+20F0h+var_2068], r11
 * 00000001403372F1: mov     [rbp+20F0h+var_20D8], r13
 * 00000001403372F5: cmp     r11, [rbp+20F0h+var_20C8]
 * 00000001403372F9: jnz     loc_140336A3C
 * 00000001403372FF: mov     rbx, [rbp+20F0h+var_1FF0]
 * 0000000140337306: mov     r13, rbx
 * 0000000140337309: mov     [rbp+20F0h+var_1FE0], rbx
 * 0000000140337310: mov     rbx, [rbp+20F0h+var_2000]
 * 0000000140337317: xor     eax, eax
 * 0000000140337319: mov     ecx, eax
 * 000000014033731B: mov     r12d, [rbp+20F0h+var_2078]
 * 000000014033731F: mov     rdx, [rbp+20F0h+var_20D0]
 * 0000000140337323: mov     r8d, 80000000h
 * 0000000140337329: mov     rax, r13
 * 000000014033732C: mov     [rbp+20F0h+var_20E0], r13
 * 0000000140337330: sub     rax, rsi
 * 0000000140337333: mov     rsi, r13
 * 0000000140337336: add     rdx, rax
 * 0000000140337339: lea     eax, [rcx+r8]
 * 000000014033733D: mov     [rbp+20F0h+var_20D0], rdx
 * 0000000140337341: test    r8d, eax
 * 0000000140337344: jnz     short loc_140337352
 * 0000000140337346: cmp     ecx, 0C000010Eh
 * 000000014033734C: jnz     loc_140337795
 * 0000000140337352: mov     [rdx+28h], rbx
 * 0000000140337356: jmp     loc_140337795
 * 000000014033735B: mov     rbx, r13
 * 000000014033735E: mov     [rbp+20F0h+var_2078], eax
 * 0000000140337361: mov     r13, rax
 * 0000000140337364: mov     r15d, eax
 * 0000000140337367: mov     r12d, eax
 * 000000014033736A: jmp     short loc_14033736E
 * 000000014033736C: xor     eax, eax
 * 000000014033736E: mov     [rbp+20F0h+var_1F78], eax
 * 0000000140337374: mov     rax, [rsi+2F0h]
 * 000000014033737B: lea     r8, [rbp+20F0h+var_1E38]
 * 0000000140337382: lea     rdx, [rbp+20F0h+var_1F78]
 * 0000000140337389: mov     ecx, r12d
 * 000000014033738C: call    KeGuardDispatchICall
 * 0000000140337391: test    eax, eax
 * 0000000140337393: jz      loc_1403374D5
 * 0000000140337399: mov     rax, [rsi+2D0h]
 * 00000001403373A0: mov     rcx, [rbp+20F0h+var_1E38]
 * 00000001403373A7: call    KeGuardDispatchICall
 * 00000001403373AC: mov     r14, rax
 * 00000001403373AF: test    rax, rax
 * 00000001403373B2: jz      short loc_140337374
 * 00000001403373B4: mov     rax, [rsi+2D8h]
 * 00000001403373BB: mov     edi, 1
 * 00000001403373C0: add     r15d, edi
 * 00000001403373C3: mov     rcx, r14
 * 00000001403373C6: mov     [rbp+20F0h+var_2078], r15d
 * 00000001403373CA: call    KeGuardDispatchICall
 * 00000001403373CF: mov     r15, rax
 * 00000001403373D2: lea     rdx, [rbp+20F0h+var_1AE8]
 * 00000001403373D9: mov     rax, [rsi+200h]
 * 00000001403373E0: mov     rcx, r15
 * 00000001403373E3: call    KeGuardDispatchICall
 * 00000001403373E8: test    rax, rax
 * 00000001403373EB: jz      short loc_14033740C
 * 00000001403373ED: mov     rax, [rsi+2E0h]
 * 00000001403373F4: mov     rdx, r14
 * 00000001403373F7: mov     rcx, [rbp+20F0h+var_1E38]
 * 00000001403373FE: call    KeGuardDispatchICall
 * 0000000140337403: mov     r15d, [rbp+20F0h+var_2078]
 * 0000000140337407: jmp     loc_140337374
 * 000000014033740C: test    dword ptr [rsi+970h], 40000000h
 * 0000000140337416: jz      short loc_140337460
 * 0000000140337418: mov     rcx, [rsi+0A50h]
 * 000000014033741F: mov     edx, 30h ; '0'
 * 0000000140337424: lea     r8d, [rdx-2Ah]
 * 0000000140337428: mov     rax, [rbx]
 * 000000014033742B: add     edx, 0FFFFFFF8h
 * 000000014033742E: mov     [rcx], rax
 * 0000000140337431: add     rbx, 8
 * 0000000140337435: add     rcx, 8
 * 0000000140337439: sub     r8, rdi
 * 000000014033743C: jnz     short loc_140337428
 * 000000014033743E: test    edx, edx
 * 0000000140337440: jz      short loc_140337459
 * 0000000140337442: mov     esi, 0FFFFFFFFh
 * 0000000140337447: mov     al, [rbx]
 * 0000000140337449: add     rbx, rdi
 * 000000014033744C: mov     [rcx], al
 * 000000014033744E: add     rcx, rdi
 * 0000000140337451: add     edx, esi
 * 0000000140337453: jnz     short loc_140337447
 * 0000000140337455: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140337459: mov     rbx, [rsi+0A50h]
 * 0000000140337460: mov     [rbx+18h], r15
 * 0000000140337464: mov     rdx, rdi
 * 0000000140337467: mov     rax, [rsi+580h]
 * 000000014033746E: mov     [rax], rbx
 * 0000000140337471: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140337478: mov     rax, [rsi+580h]
 * 000000014033747F: mov     [rax+8], r15
 * 0000000140337483: mov     dword ptr [rax+14h], 1000h
 * 000000014033748A: xor     eax, eax
 * 000000014033748C: cmp     [rsi+8D8h], eax
 * 0000000140337492: jnz     short loc_1403374DA
 * 0000000140337494: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033749E: add     rax, rsi
 * 00000001403374A1: mov     [rsi+8E0h], rax
 * 00000001403374A8: mov     rax, 0B3B74BDEE4453415h
 * 00000001403374B2: add     rax, rbx
 * 00000001403374B5: mov     [rsi+8E8h], rax
 * 00000001403374BC: movsxd  rax, dword ptr [rbx]
 * 00000001403374BF: mov     [rsi+8F0h], rax
 * 00000001403374C6: mov     [rsi+8F8h], r13
 * 00000001403374CD: mov     [rsi+8D8h], edx
 * 00000001403374D3: jmp     short loc_1403374DA
 * 00000001403374D5: mov     edx, 1
 * 00000001403374DA: mov     r15d, [rbp+20F0h+var_2078]
 * 00000001403374DE: add     r12d, edx
 * 00000001403374E1: add     r13, rdx
 * 00000001403374E4: cmp     r12d, 3
 * 00000001403374E8: jb      loc_14033736C
 * 00000001403374EE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403374F5: mov     r12d, r15d
 * 00000001403374F8: jmp     loc_14033779A
 * 00000001403374FD: mov     rbx, r13
 * 0000000140337500: mov     [rbp+20F0h+var_1D80], rax
 * 0000000140337507: mov     r12d, eax
 * 000000014033750A: mov     r15, cr8
 * 000000014033750E: mov     [rbp+20F0h+var_20C8], r15
 * 0000000140337512: mov     cr8, r8
 * 0000000140337516: mov     rax, [rsi+300h]
 * 000000014033751D: lea     rcx, [rbp+20F0h+var_1D80]
 * 0000000140337524: call    KeGuardDispatchICall
 * 0000000140337529: mov     r14, rax
 * 000000014033752C: test    rax, rax
 * 000000014033752F: jz      loc_14033764C
 * 0000000140337535: mov     edi, 1
 * 000000014033753A: mov     rax, [rsi+200h]
 * 0000000140337541: lea     rdx, [rbp+20F0h+var_1AE0]
 * 0000000140337548: mov     rcx, r14
 * 000000014033754B: add     r12d, edi
 * 000000014033754E: call    KeGuardDispatchICall
 * 0000000140337553: test    rax, rax
 * 0000000140337556: jnz     loc_140337622
 * 000000014033755C: test    dword ptr [rsi+970h], 40000000h
 * 0000000140337566: jz      short loc_1403375AE
 * 0000000140337568: mov     rcx, [rsi+0A50h]
 * 000000014033756F: lea     edx, [rax+30h]
 * 0000000140337572: lea     r8d, [rax+6]
 * 0000000140337576: mov     rax, [rbx]
 * 0000000140337579: add     edx, 0FFFFFFF8h
 * 000000014033757C: mov     [rcx], rax
 * 000000014033757F: add     rbx, 8
 * 0000000140337583: add     rcx, 8
 * 0000000140337587: sub     r8, rdi
 * 000000014033758A: jnz     short loc_140337576
 * 000000014033758C: test    edx, edx
 * 000000014033758E: jz      short loc_1403375A7
 * 0000000140337590: mov     esi, 0FFFFFFFFh
 * 0000000140337595: mov     al, [rbx]
 * 0000000140337597: add     rbx, rdi
 * 000000014033759A: mov     [rcx], al
 * 000000014033759C: add     rcx, rdi
 * 000000014033759F: add     edx, esi
 * 00000001403375A1: jnz     short loc_140337595
 * 00000001403375A3: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403375A7: mov     rbx, [rsi+0A50h]
 * 00000001403375AE: mov     [rbx+18h], r14
 * 00000001403375B2: mov     rax, [rsi+580h]
 * 00000001403375B9: mov     [rax], rbx
 * 00000001403375BC: mov     dword ptr [rax+10h], 30h ; '0'
 * 00000001403375C3: mov     rax, [rsi+580h]
 * 00000001403375CA: mov     [rax+8], r14
 * 00000001403375CE: mov     dword ptr [rax+14h], 1000h
 * 00000001403375D5: xor     eax, eax
 * 00000001403375D7: cmp     [rsi+8D8h], eax
 * 00000001403375DD: jnz     short loc_140337622
 * 00000001403375DF: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403375E9: add     rax, rsi
 * 00000001403375EC: mov     [rsi+8E0h], rax
 * 00000001403375F3: mov     rax, 0B3B74BDEE4453415h
 * 00000001403375FD: add     rax, rbx
 * 0000000140337600: mov     [rsi+8E8h], rax
 * 0000000140337607: movsxd  rax, dword ptr [rbx]
 * 000000014033760A: mov     [rsi+8F0h], rax
 * 0000000140337611: mov     qword ptr [rsi+8F8h], 4
 * 000000014033761C: mov     [rsi+8D8h], edi
 * 0000000140337622: mov     rax, [rsi+300h]
 * 0000000140337629: lea     rcx, [rbp+20F0h+var_1D80]
 * 0000000140337630: call    KeGuardDispatchICall
 * 0000000140337635: mov     r14, rax
 * 0000000140337638: test    rax, rax
 * 000000014033763B: jnz     loc_14033753A
 * 0000000140337641: mov     r15, [rbp+20F0h+var_20C8]
 * 0000000140337645: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033764C: movzx   eax, r15b
 * 0000000140337650: mov     cr8, rax
 * 0000000140337654: jmp     loc_140337795
 * 0000000140337659: mov     [rbp+20F0h+var_1D78], rax
 * 0000000140337660: lea     rcx, [rbp+20F0h+var_1D78]
 * 0000000140337667: mov     r12d, eax
 * 000000014033766A: mov     rbx, r13
 * 000000014033766D: mov     rax, [rsi+2F8h]
 * 0000000140337674: call    KeGuardDispatchICall
 * 0000000140337679: mov     r14, rax
 * 000000014033767C: test    rax, rax
 * 000000014033767F: jz      loc_140337795
 * 0000000140337685: mov     edi, 1
 * 000000014033768A: mov     rax, [rsi+200h]
 * 0000000140337691: lea     rdx, [rbp+20F0h+var_1AD8]
 * 0000000140337698: mov     rcx, r14
 * 000000014033769B: add     r12d, edi
 * 000000014033769E: call    KeGuardDispatchICall
 * 00000001403376A3: test    rax, rax
 * 00000001403376A6: jnz     loc_14033776F
 * 00000001403376AC: test    [rsi+970h], r15d
 * 00000001403376B3: jz      short loc_1403376FB
 * 00000001403376B5: mov     rcx, [rsi+0A50h]
 * 00000001403376BC: lea     edx, [rax+30h]
 * 00000001403376BF: lea     r8d, [rax+6]
 * 00000001403376C3: mov     rax, [rbx]
 * 00000001403376C6: add     edx, 0FFFFFFF8h
 * 00000001403376C9: mov     [rcx], rax
 * 00000001403376CC: add     rbx, 8
 * 00000001403376D0: add     rcx, 8
 * 00000001403376D4: sub     r8, rdi
 * 00000001403376D7: jnz     short loc_1403376C3
 * 00000001403376D9: test    edx, edx
 * 00000001403376DB: jz      short loc_1403376F4
 * 00000001403376DD: mov     esi, 0FFFFFFFFh
 * 00000001403376E2: mov     al, [rbx]
 * 00000001403376E4: add     rbx, rdi
 * 00000001403376E7: mov     [rcx], al
 * 00000001403376E9: add     rcx, rdi
 * 00000001403376EC: add     edx, esi
 * 00000001403376EE: jnz     short loc_1403376E2
 * 00000001403376F0: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403376F4: mov     rbx, [rsi+0A50h]
 * 00000001403376FB: mov     [rbx+18h], r14
 * 00000001403376FF: mov     rax, [rsi+580h]
 * 0000000140337706: mov     [rax], rbx
 * 0000000140337709: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140337710: mov     rax, [rsi+580h]
 * 0000000140337717: mov     [rax+8], r14
 * 000000014033771B: mov     dword ptr [rax+14h], 1000h
 * 0000000140337722: xor     eax, eax
 * 0000000140337724: cmp     [rsi+8D8h], eax
 * 000000014033772A: jnz     short loc_14033776F
 * 000000014033772C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140337736: add     rax, rsi
 * 0000000140337739: mov     [rsi+8E0h], rax
 * 0000000140337740: mov     rax, 0B3B74BDEE4453415h
 * 000000014033774A: add     rax, rbx
 * 000000014033774D: mov     [rsi+8E8h], rax
 * 0000000140337754: movsxd  rax, dword ptr [rbx]
 * 0000000140337757: mov     [rsi+8F0h], rax
 * 000000014033775E: mov     qword ptr [rsi+8F8h], 3
 * 0000000140337769: mov     [rsi+8D8h], edi
 * 000000014033776F: mov     rax, [rsi+2F8h]
 * 0000000140337776: lea     rcx, [rbp+20F0h+var_1D78]
 * 000000014033777D: call    KeGuardDispatchICall
 * 0000000140337782: mov     r14, rax
 * 0000000140337785: test    rax, rax
 * 0000000140337788: jnz     loc_14033768A
 * 000000014033778E: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140337795: mov     edx, 1
 * 000000014033779A: shl     r12d, 0Ch
 * 000000014033779E: mov     r11, 0B3B74BDEE4453415h
 * 00000001403377A8: add     [rsi+810h], r12d
 * 00000001403377AF: add     [rsi+80Ch], edx
 * 00000001403377B5: mov     eax, [rsi+814h]
 * 00000001403377BB: cmp     [rsi+810h], eax
 * 00000001403377C1: jge     short loc_1403377DE
 * 00000001403377C3: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403377C7: mov     r8d, 0Ch
 * 00000001403377CD: mov     r15d, 40000000h
 * 00000001403377D3: jmp     loc_1403350E0
 * 00000001403377D8: mov     [rsi+80Ch], eax
 * 00000001403377DE: mov     [rbp+20F0h+var_20E0], rsi
 * 00000001403377E2: jmp     loc_140333318
 * 00000001403377E7: mov     edx, [r13+2Ch]
 * 00000001403377EB: lea     rcx, [rbp+20F0h+var_1790]
 * 00000001403377F2: mov     rax, [rsi+198h]
 * 00000001403377F9: mov     ebx, [r13+28h]
 * 00000001403377FD: call    KeGuardDispatchICall
 * 0000000140337802: mov     rax, [rsi+1C8h]
 * 0000000140337809: lea     rdx, [rbp+20F0h+var_1780]
 * 0000000140337810: lea     rcx, [rbp+20F0h+var_1790]
 * 0000000140337817: call    KeGuardDispatchICall
 * 000000014033781C: cmp     r14d, 26h ; '&'
 * 0000000140337820: jz      short loc_140337830
 * 0000000140337822: test    ebx, ebx
 * 0000000140337824: jz      short loc_14033782B
 * 0000000140337826: mov     rbx, cr4
 * 0000000140337829: jmp     short loc_14033783F
 * 000000014033782B: mov     rbx, cr0
 * 000000014033782E: jmp     short loc_14033783F
 * 0000000140337830: xor     ecx, ecx
 * 0000000140337832: xgetbv
 * 0000000140337835: shl     rdx, 20h
 * 0000000140337839: or      rdx, rax
 * 000000014033783C: mov     rbx, rdx
 * 000000014033783F: mov     rax, [rsi+190h]
 * 0000000140337846: lea     rcx, [rbp+20F0h+var_1780]
 * 000000014033784D: call    KeGuardDispatchICall
 * 0000000140337852: mov     r8, [r13+18h]
 * 0000000140337856: xor     r10d, r10d
 * 0000000140337859: mov     rcx, [r13+20h]
 * 000000014033785D: and     r8, rbx
 * 0000000140337860: cmp     r8, rcx
 * 0000000140337863: jz      loc_140333625
 * 0000000140337869: mov     eax, [r13+28h]
 * 000000014033786D: mov     edx, [r13+2Ch]
 * 0000000140337871: shl     rdx, 20h
 * 0000000140337875: or      rdx, rax
 * 0000000140337878: mov     eax, [rsi+8D8h]
 * 000000014033787E: test    eax, eax
 * 0000000140337880: jnz     loc_140333625
 * 0000000140337886: mov     rax, [rsi+580h]
 * 000000014033788D: xor     rcx, r8
 * 0000000140337890: mov     [rax+18h], rcx
 * 0000000140337894: mov     eax, [rsi+8D8h]
 * 000000014033789A: test    eax, eax
 * 000000014033789C: jnz     loc_140333625
 * 00000001403378A2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403378AC: mov     r11, 0B3B74BDEE4453415h
 * 00000001403378B6: add     rax, rsi
 * 00000001403378B9: mov     [rsi+8E0h], rax
 * 00000001403378C0: lea     rax, [r11+r13]
 * 00000001403378C4: mov     [rsi+8E8h], rax
 * 00000001403378CB: movsxd  rax, dword ptr [r13+0]
 * 00000001403378CF: mov     [rsi+8F0h], rax
 * 00000001403378D6: mov     [rsi+8F8h], rdx
 * 00000001403378DD: mov     eax, 1
 * 00000001403378E2: mov     [rsi+8D8h], eax
 * 00000001403378E8: jmp     loc_14033362F
 * 00000001403378ED: cmp     dword ptr [rsi+934h], 0Bh
 * 00000001403378F4: jnz     loc_140333318
 * 00000001403378FA: add     dword ptr [rsi+810h], 100h
 * 0000000140337904: mov     r14, [rsi+578h]
 * 000000014033790B: mov     rax, [rsi+2D0h]
 * 0000000140337912: mov     rcx, r14
 * 0000000140337915: call    KeGuardDispatchICall
 * 000000014033791A: mov     rbx, rax
 * 000000014033791D: test    rax, rax
 * 0000000140337920: jz      loc_140333DB4
 * 0000000140337926: mov     rax, [rsi+2D8h]
 * 000000014033792D: mov     rcx, rbx
 * 0000000140337930: call    KeGuardDispatchICall
 * 0000000140337935: mov     rcx, rax
 * 0000000140337938: mov     rax, [r13+18h]
 * 000000014033793C: test    rax, rax
 * 000000014033793F: jz      short loc_14033799F
 * 0000000140337941: cmp     rax, rcx
 * 0000000140337944: jz      loc_140337A15
 * 000000014033794A: xor     eax, eax
 * 000000014033794C: cmp     [rsi+8D8h], eax
 * 0000000140337952: jnz     loc_140337A15
 * 0000000140337958: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140337962: add     rax, rsi
 * 0000000140337965: mov     [rsi+8E0h], rax
 * 000000014033796C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140337976: add     rax, r13
 * 0000000140337979: mov     [rsi+8E8h], rax
 * 0000000140337980: movsxd  rax, dword ptr [r13+0]
 * 0000000140337984: mov     [rsi+8F0h], rax
 * 000000014033798B: mov     eax, 1
 * 0000000140337990: mov     [rsi+8F8h], rcx
 * 0000000140337997: mov     [rsi+8D8h], eax
 * 000000014033799D: jmp     short loc_140337A15
 * 000000014033799F: mov     eax, [rsi+954h]
 * 00000001403379A5: mov     rdx, [rsi+958h]
 * 00000001403379AC: test    rax, rax
 * 00000001403379AF: jz      short loc_1403379C2
 * 00000001403379B1: lea     r8, [rax-1]
 * 00000001403379B5: add     r8, rdx
 * 00000001403379B8: cmp     rcx, rdx
 * 00000001403379BB: jb      short loc_1403379C2
 * 00000001403379BD: cmp     rcx, r8
 * 00000001403379C0: jbe     short loc_140337A11
 * 00000001403379C2: xor     eax, eax
 * 00000001403379C4: cmp     [rsi+8D8h], eax
 * 00000001403379CA: jnz     short loc_140337A11
 * 00000001403379CC: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403379D6: add     rax, rsi
 * 00000001403379D9: mov     [rsi+8E0h], rax
 * 00000001403379E0: mov     rax, 0B3B74BDEE4453415h
 * 00000001403379EA: add     rax, r13
 * 00000001403379ED: mov     [rsi+8E8h], rax
 * 00000001403379F4: movsxd  rax, dword ptr [r13+0]
 * 00000001403379F8: mov     [rsi+8F0h], rax
 * 00000001403379FF: mov     eax, 1
 * 0000000140337A04: mov     [rsi+8F8h], rcx
 * 0000000140337A0B: mov     [rsi+8D8h], eax
 * 0000000140337A11: mov     [r13+18h], rcx
 * 0000000140337A15: mov     rax, [rsi+2E0h]
 * 0000000140337A1C: mov     rdx, rbx
 * 0000000140337A1F: mov     rcx, r14
 * 0000000140337A22: call    KeGuardDispatchICall
 * 0000000140337A27: jmp     loc_140333DB4
 * 0000000140337A2C: jnz     short loc_140337A7E
 * 0000000140337A2E: xor     eax, eax
 * 0000000140337A30: cmp     [rsi+960h], rax
 * 0000000140337A37: jz      loc_140333312
 * 0000000140337A3D: mov     ecx, [rsi+974h]
 * 0000000140337A43: mov     eax, ecx
 * 0000000140337A45: shr     eax, 2
 * 0000000140337A48: and     eax, edx
 * 0000000140337A4A: jnz     loc_14033341D
 * 0000000140337A50: xor     edx, edx
 * 0000000140337A52: cmp     [rsi+80Ch], edx
 * 0000000140337A58: lea     edx, [rax+1]
 * 0000000140337A5B: jnz     short loc_140337A71
 * 0000000140337A5D: mov     eax, ecx
 * 0000000140337A5F: shl     eax, 3
 * 0000000140337A62: xor     eax, ecx
 * 0000000140337A64: and     eax, 20h
 * 0000000140337A67: xor     eax, ecx
 * 0000000140337A69: mov     [rsi+974h], eax
 * 0000000140337A6F: jmp     short loc_140337A7E
 * 0000000140337A71: shr     ecx, 5
 * 0000000140337A74: and     ecx, edx
 * 0000000140337A76: cmp     eax, ecx
 * 0000000140337A78: jnz     loc_14033341D
 * 0000000140337A7E: mov     r14, [r13+8]
 * 0000000140337A82: mov     r8d, [r13+10h]
 * 0000000140337A86: mov     r9, r14
 * 0000000140337A89: add     [rsi+810h], r8d
 * 0000000140337A90: mov     rax, r14
 * 0000000140337A93: mov     r11d, [rsi+7FCh]
 * 0000000140337A9A: mov     r15, [rsi+800h]
 * 0000000140337AA1: lea     rcx, [r14+r8]
 * 0000000140337AA5: cmp     r14, rcx
 * 0000000140337AA8: jnb     short loc_140337ABB
 * 0000000140337AAA: mov     r10d, 40h ; '@'
 * 0000000140337AB0: prefetchnta byte ptr [rax]
 * 0000000140337AB3: add     rax, r10
 * 0000000140337AB6: cmp     rax, rcx
 * 0000000140337AB9: jb      short loc_140337AB0
 * 0000000140337ABB: mov     r10d, r8d
 * 0000000140337ABE: mov     rbx, r15
 * 0000000140337AC1: shr     r10d, 7
 * 0000000140337AC5: mov     r12d, 0FFFFFFFFh
 * 0000000140337ACB: test    r10d, r10d
 * 0000000140337ACE: jz      short loc_140337B3B
 * 0000000140337AD0: mov     rdi, 7010008004002001h
 * 0000000140337ADA: mov     eax, 8
 * 0000000140337ADF: xor     rbx, [r9]
 * 0000000140337AE2: mov     ecx, r11d
 * 0000000140337AE5: rol     rbx, cl
 * 0000000140337AE8: xor     rbx, [r9+8]
 * 0000000140337AEC: add     r9, 10h
 * 0000000140337AF0: rol     rbx, cl
 * 0000000140337AF3: sub     rax, rdx
 * 0000000140337AF6: jnz     short loc_140337ADF
 * 0000000140337AF8: mov     rcx, r9
 * 0000000140337AFB: sub     rcx, r14
 * 0000000140337AFE: xor     rcx, r15
 * 0000000140337B01: mov     rax, rcx
 * 0000000140337B04: rol     rax, 11h
 * 0000000140337B08: xor     rcx, rax
 * 0000000140337B0B: mov     rax, rdi
 * 0000000140337B0E: mul     rcx
 * 0000000140337B11: xor     r11d, eax
 * 0000000140337B14: mov     [rbp+20F0h+var_1AD0], rdx
 * 0000000140337B1B: xor     r11d, edx
 * 0000000140337B1E: mov     edx, 1
 * 0000000140337B23: and     r11d, 3Fh
 * 0000000140337B27: cmovz   r11d, edx
 * 0000000140337B2B: add     r10d, r12d
 * 0000000140337B2E: jnz     short loc_140337ADA
 * 0000000140337B30: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140337B34: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140337B3B: and     r8d, 7Fh
 * 0000000140337B3F: cmp     r8d, 8
 * 0000000140337B43: jb      short loc_140337B62
 * 0000000140337B45: mov     eax, r8d
 * 0000000140337B48: shr     rax, 3
 * 0000000140337B4C: xor     rbx, [r9]
 * 0000000140337B4F: mov     ecx, r11d
 * 0000000140337B52: rol     rbx, cl
 * 0000000140337B55: add     r9, 8
 * 0000000140337B59: add     r8d, 0FFFFFFF8h
 * 0000000140337B5D: sub     rax, rdx
 * 0000000140337B60: jnz     short loc_140337B4C
 * 0000000140337B62: test    r8d, r8d
 * 0000000140337B65: jz      short loc_140337B7C
 * 0000000140337B67: movzx   eax, byte ptr [r9]
 * 0000000140337B6B: mov     ecx, r11d
 * 0000000140337B6E: xor     rbx, rax
 * 0000000140337B71: add     r9, rdx
 * 0000000140337B74: rol     rbx, cl
 * 0000000140337B77: add     r8d, r12d
 * 0000000140337B7A: jnz     short loc_140337B67
 * 0000000140337B7C: mov     rax, rbx
 * 0000000140337B7F: shr     rax, 1Fh
 * 0000000140337B83: xor     r10d, r10d
 * 0000000140337B86: jmp     short loc_140337B8E
 * 0000000140337B88: xor     ebx, eax
 * 0000000140337B8A: shr     rax, 1Fh
 * 0000000140337B8E: test    rax, rax
 * 0000000140337B91: jnz     short loc_140337B88
 * 0000000140337B93: btr     ebx, 1Fh
 * 0000000140337B97: cmp     ebx, [r13+14h]
 * 0000000140337B9B: jz      loc_140337CF9
 * 0000000140337BA1: lock or [rsp+10F0h+var_10F0], eax
 * 0000000140337BA5: mov     eax, [r13+18h]
 * 0000000140337BA9: test    dl, al
 * 0000000140337BAB: jz      short loc_140337BBE
 * 0000000140337BAD: mov     rax, [rsi+570h]
 * 0000000140337BB4: mov     cl, [rax]
 * 0000000140337BB6: test    cl, cl
 * 0000000140337BB8: jnz     loc_140337CF9
 * 0000000140337BBE: mov     ecx, [r13+10h]
 * 0000000140337BC2: mov     rdx, [r13+8]
 * 0000000140337BC6: test    rcx, rcx
 * 0000000140337BC9: jz      loc_140337C64
 * 0000000140337BCF: mov     eax, [rsi+974h]
 * 0000000140337BD5: mov     r8d, 40h ; '@'
 * 0000000140337BDB: test    r8b, al
 * 0000000140337BDE: jz      loc_140337C64
 * 0000000140337BE4: mov     r12, cr8
 * 0000000140337BE8: lea     eax, [r8-3Eh]
 * 0000000140337BEC: mov     cr8, rax
 * 0000000140337BF0: lea     rax, [rcx-1]
 * 0000000140337BF4: mov     r14, rdx
 * 0000000140337BF7: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140337BFE: add     rax, rdx
 * 0000000140337C01: mov     ecx, 0FFFh
 * 0000000140337C06: or      rax, rcx
 * 0000000140337C09: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140337C0D: lea     r13, [r14-1]
 * 0000000140337C11: movzx   r15d, r12b
 * 0000000140337C15: mov     rax, [rsi+460h]
 * 0000000140337C1C: xor     edx, edx
 * 0000000140337C1E: mov     rcx, r14
 * 0000000140337C21: call    KeGuardDispatchICall
 * 0000000140337C26: cmp     eax, 0C000022Dh
 * 0000000140337C2B: jnz     short loc_140337C55
 * 0000000140337C2D: mov     eax, 1
 * 0000000140337C32: cmp     r12b, al
 * 0000000140337C35: ja      loc_140337CD8
 * 0000000140337C3B: movzx   r15d, r12b
 * 0000000140337C3F: mov     cr8, r15
 * 0000000140337C43: mov     al, [r14]
 * 0000000140337C46: mov     rax, cr8
 * 0000000140337C4A: mov     eax, 2
 * 0000000140337C4F: mov     cr8, rax
 * 0000000140337C53: jmp     short loc_140337C15
 * 0000000140337C55: xor     r10d, r10d
 * 0000000140337C58: test    eax, eax
 * 0000000140337C5A: jns     short loc_140337CDB
 * 0000000140337C5C: mov     cr8, r15
 * 0000000140337C60: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140337C64: mov     eax, [rsi+8D8h]
 * 0000000140337C6A: mov     ecx, [r13+14h]
 * 0000000140337C6E: test    eax, eax
 * 0000000140337C70: jnz     short loc_140337C88
 * 0000000140337C72: mov     eax, ebx
 * 0000000140337C74: xor     rcx, rax
 * 0000000140337C77: mov     rax, [rsi+580h]
 * 0000000140337C7E: mov     [rax+18h], rcx
 * 0000000140337C82: mov     eax, [rsi+8D8h]
 * 0000000140337C88: mov     rcx, [r13+8]
 * 0000000140337C8C: mov     r11, 0B3B74BDEE4453415h
 * 0000000140337C96: mov     ebx, 1
 * 0000000140337C9B: test    eax, eax
 * 0000000140337C9D: jnz     short loc_140337D08
 * 0000000140337C9F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140337CA9: add     rax, rsi
 * 0000000140337CAC: mov     [rsi+8E0h], rax
 * 0000000140337CB3: lea     rax, [r11+r13]
 * 0000000140337CB7: mov     [rsi+8E8h], rax
 * 0000000140337CBE: movsxd  rax, dword ptr [r13+0]
 * 0000000140337CC2: mov     [rsi+8F0h], rax
 * 0000000140337CC9: mov     [rsi+8F8h], rcx
 * 0000000140337CD0: mov     [rsi+8D8h], ebx
 * 0000000140337CD6: jmp     short loc_140337D08
 * 0000000140337CD8: xor     r10d, r10d
 * 0000000140337CDB: mov     r8d, 1000h
 * 0000000140337CE1: add     r14, r8
 * 0000000140337CE4: add     r13, r8
 * 0000000140337CE7: cmp     r13, [rbp+20F0h+var_20C8]
 * 0000000140337CEB: jnz     loc_140337C11
 * 0000000140337CF1: mov     cr8, r15
 * 0000000140337CF5: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140337CF9: mov     ebx, 1
 * 0000000140337CFE: mov     r11, 0B3B74BDEE4453415h
 * 0000000140337D08: mov     r15d, 40000000h
 * 0000000140337D0E: test    [rsi+970h], r15d
 * 0000000140337D15: jz      loc_14033362F
 * 0000000140337D1B: mov     r8d, [r13+10h]
 * 0000000140337D1F: test    r8d, r8d
 * 0000000140337D22: jz      loc_140333318
 * 0000000140337D28: mov     rdx, [r13+8]
 * 0000000140337D2C: lea     r9, [rbp+20F0h+var_1770]
 * 0000000140337D33: mov     rcx, rsi
 * 0000000140337D36: call    sub_1401AD8FC
 * 0000000140337D3B: mov     r8d, 10h
 * 0000000140337D41: lea     r9, [r13+1Ch]
 * 0000000140337D45: lea     r10, [rbp+20F0h+var_1770]
 * 0000000140337D4C: mov     rcx, [r10]
 * 0000000140337D4F: add     r10, 8
 * 0000000140337D53: mov     rax, [r9]
 * 0000000140337D56: add     r9, 8
 * 0000000140337D5A: cmp     rcx, rax
 * 0000000140337D5D: jnz     short loc_140337DAA
 * 0000000140337D5F: add     r8d, 0FFFFFFF8h
 * 0000000140337D63: cmp     r8d, 8
 * 0000000140337D67: jnb     short loc_140337D4C
 * 0000000140337D69: test    r8d, r8d
 * 0000000140337D6C: jz      short loc_140337D8B
 * 0000000140337D6E: movzx   edx, byte ptr [r10]
 * 0000000140337D72: add     r10, rbx
 * 0000000140337D75: movzx   eax, byte ptr [r9]
 * 0000000140337D79: add     r9, rbx
 * 0000000140337D7C: cmp     rdx, rax
 * 0000000140337D7F: jnz     short loc_140337DAA
 * 0000000140337D81: mov     eax, 0FFFFFFFFh
 * 0000000140337D86: add     r8d, eax
 * 0000000140337D89: jnz     short loc_140337D6E
 * 0000000140337D8B: mov     r11, 0B3B74BDEE4453415h
 * 0000000140337D95: mov     rax, [rbp+20F0h+var_20D0]
 * 0000000140337D99: mov     eax, [rax+10h]
 * 0000000140337D9C: shl     eax, 4
 * 0000000140337D9F: add     [rsi+810h], eax
 * 0000000140337DA5: jmp     loc_140333318
 * 0000000140337DAA: xor     eax, eax
 * 0000000140337DAC: lock or [rsp+10F0h+var_10F0], eax
 * 0000000140337DB0: mov     eax, [r13+18h]
 * 0000000140337DB4: test    bl, al
 * 0000000140337DB6: jz      short loc_140337DC5
 * 0000000140337DB8: mov     rax, [rsi+570h]
 * 0000000140337DBF: mov     cl, [rax]
 * 0000000140337DC1: test    cl, cl
 * 0000000140337DC3: jnz     short loc_140337D8B
 * 0000000140337DC5: mov     edx, [r13+10h]
 * 0000000140337DC9: mov     rcx, [r13+8]
 * 0000000140337DCD: test    rdx, rdx
 * 0000000140337DD0: jz      loc_140337E82
 * 0000000140337DD6: mov     eax, [rsi+974h]
 * 0000000140337DDC: mov     r8d, 40h ; '@'
 * 0000000140337DE2: test    r8b, al
 * 0000000140337DE5: jz      loc_140337E82
 * 0000000140337DEB: mov     r15, cr8
 * 0000000140337DEF: lea     eax, [r8-3Eh]
 * 0000000140337DF3: mov     cr8, rax
 * 0000000140337DF7: mov     rbx, rcx
 * 0000000140337DFA: lea     r13, [rdx-1]
 * 0000000140337DFE: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140337E05: add     r13, rcx
 * 0000000140337E08: mov     eax, 0FFFh
 * 0000000140337E0D: or      r13, rax
 * 0000000140337E10: lea     r12, [rbx-1]
 * 0000000140337E14: movzx   r14d, r15b
 * 0000000140337E18: mov     rax, [rsi+460h]
 * 0000000140337E1F: xor     edx, edx
 * 0000000140337E21: mov     rcx, rbx
 * 0000000140337E24: call    KeGuardDispatchICall
 * 0000000140337E29: cmp     eax, 0C000022Dh
 * 0000000140337E2E: jnz     short loc_140337E53
 * 0000000140337E30: mov     eax, 1
 * 0000000140337E35: cmp     r15b, al
 * 0000000140337E38: ja      short loc_140337E57
 * 0000000140337E3A: movzx   r14d, r15b
 * 0000000140337E3E: mov     cr8, r14
 * 0000000140337E42: mov     al, [rbx]
 * 0000000140337E44: mov     rax, cr8
 * 0000000140337E48: mov     eax, 2
 * 0000000140337E4D: mov     cr8, rax
 * 0000000140337E51: jmp     short loc_140337E18
 * 0000000140337E53: test    eax, eax
 * 0000000140337E55: js      short loc_140337E71
 * 0000000140337E57: mov     r8d, 1000h
 * 0000000140337E5D: add     rbx, r8
 * 0000000140337E60: add     r12, r8
 * 0000000140337E63: cmp     r12, r13
 * 0000000140337E66: jnz     short loc_140337E14
 * 0000000140337E68: mov     cr8, r14
 * 0000000140337E6C: jmp     loc_140337D8B
 * 0000000140337E71: mov     cr8, r14
 * 0000000140337E75: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140337E79: mov     ebx, 1
 * 0000000140337E7E: mov     rcx, [r13+8]
 * 0000000140337E82: xor     eax, eax
 * 0000000140337E84: mov     r11, 0B3B74BDEE4453415h
 * 0000000140337E8E: cmp     [rsi+8D8h], eax
 * 0000000140337E94: jnz     loc_140337D95
 * 0000000140337E9A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140337EA4: add     rax, rsi
 * 0000000140337EA7: mov     [rsi+8E0h], rax
 * 0000000140337EAE: lea     rax, [r11+r13]
 * 0000000140337EB2: mov     [rsi+8E8h], rax
 * 0000000140337EB9: movsxd  rax, dword ptr [r13+0]
 * 0000000140337EBD: mov     [rsi+8F0h], rax
 * 0000000140337EC4: mov     [rsi+8F8h], rcx
 * 0000000140337ECB: mov     [rsi+8D8h], ebx
 * 0000000140337ED1: jmp     loc_140337D95
 * 0000000140337ED6: mov     r8d, [r13+10h]
 * 0000000140337EDA: test    r8d, r8d
 * 0000000140337EDD: jnz     loc_1403384A6
 * 0000000140337EE3: lea     rax, [r13+30h]
 * 0000000140337EE7: xor     r9d, r9d
 * 0000000140337EEA: mov     [rbp+20F0h+var_1C70], rax
 * 0000000140337EF1: lea     rcx, [rbp+20F0h+var_1C78]
 * 0000000140337EF8: movzx   eax, word ptr [r13+28h]
 * 0000000140337EFD: xor     r8d, r8d
 * 0000000140337F00: mov     [rbp+20F0h+var_1C78], ax
 * 0000000140337F07: xor     edx, edx
 * 0000000140337F09: mov     [rbp+20F0h+var_1C76], ax
 * 0000000140337F10: lea     rax, [rbp+20F0h+var_1F80]
 * 0000000140337F17: mov     [rsp+10F0h+var_10B8], rax
 * 0000000140337F1C: xor     eax, eax
 * 0000000140337F1E: mov     [rsp+10F0h+var_10C0], rax
 * 0000000140337F23: mov     byte ptr [rsp+10F0h+var_10C8], al
 * 0000000140337F27: mov     rax, [rsi+500h]
 * 0000000140337F2E: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 0000000140337F33: mov     rax, [rsi+1E0h]
 * 0000000140337F3A: call    KeGuardDispatchICall
 * 0000000140337F3F: xor     r10d, r10d
 * 0000000140337F42: test    eax, eax
 * 0000000140337F44: js      loc_140333625
 * 0000000140337F4A: mov     rax, [rbp+20F0h+var_1F80]
 * 0000000140337F51: mov     ecx, [rax+10h]
 * 0000000140337F54: lea     eax, [r10+10h]
 * 0000000140337F58: test    al, cl
 * 0000000140337F5A: jnz     short loc_140337F68
 * 0000000140337F5C: mov     rcx, [rbp+20F0h+var_1F80]
 * 0000000140337F63: jmp     loc_140333DA8
 * 0000000140337F68: mov     rcx, [rsi+1E0h]
 * 0000000140337F6F: lea     r8, [rbp+20F0h+var_1CCC]
 * 0000000140337F76: mov     rax, [rsi+1F8h]
 * 0000000140337F7D: lea     rdx, [rbp+20F0h+var_1E30]
 * 0000000140337F84: call    KeGuardDispatchICall
 * 0000000140337F89: test    rax, rax
 * 0000000140337F8C: jz      short loc_140337FB0
 * 0000000140337F8E: mov     rax, [rsi+1F0h]
 * 0000000140337F95: mov     rcx, [rbp+20F0h+var_1E30]
 * 0000000140337F9C: call    KeGuardDispatchICall
 * 0000000140337FA1: test    rax, rax
 * 0000000140337FA4: jz      short loc_140337FB0
 * 0000000140337FA6: mov     r14d, [rax+50h]
 * 0000000140337FAA: mov     [rbp+20F0h+var_20A8], r14d
 * 0000000140337FAE: jmp     short loc_140337FB4
 * 0000000140337FB0: mov     r14d, [rbp+20F0h+var_20A8]
 * 0000000140337FB4: mov     rcx, [r13+18h]
 * 0000000140337FB8: lea     r8, [rbp+20F0h+var_1CD0]
 * 0000000140337FBF: mov     rax, [rsi+1F8h]
 * 0000000140337FC6: lea     rdx, [rbp+20F0h+var_1E28]
 * 0000000140337FCD: call    KeGuardDispatchICall
 * 0000000140337FD2: test    rax, rax
 * 0000000140337FD5: jz      short loc_140337FF8
 * 0000000140337FD7: mov     rax, [rsi+1F0h]
 * 0000000140337FDE: mov     rcx, [rbp+20F0h+var_1E28]
 * 0000000140337FE5: call    KeGuardDispatchICall
 * 0000000140337FEA: test    rax, rax
 * 0000000140337FED: jz      short loc_140337FF8
 * 0000000140337FEF: mov     ebx, [rax+50h]
 * 0000000140337FF2: mov     [rbp+20F0h+var_2040], ebx
 * 0000000140337FF8: mov     r15d, 40000000h
 * 0000000140337FFE: test    [rsi+970h], r15d
 * 0000000140338005: jnz     short loc_14033801E
 * 0000000140338007: mov     rax, [rbp+20F0h+var_1F80]
 * 000000014033800E: add     rax, 70h ; 'p'
 * 0000000140338012: mov     [r13+8], rax
 * 0000000140338016: mov     dword ptr [r13+10h], 0E0h
 * 000000014033801E: mov     rcx, [rbp+20F0h+var_1F80]
 * 0000000140338025: xor     eax, eax
 * 0000000140338027: mov     r10, [rbp+20F0h+var_1E30]
 * 000000014033802E: mov     dl, al
 * 0000000140338030: mov     r11, [rbp+20F0h+var_1E28]
 * 0000000140338037: mov     r12d, r14d
 * 000000014033803A: movzx   eax, dl
 * 000000014033803D: mov     r9, [rcx+rax*8+70h]
 * 0000000140338042: test    r14d, r14d
 * 0000000140338045: jz      short loc_140338058
 * 0000000140338047: lea     rax, [r10-1]
 * 000000014033804B: add     rax, r12
 * 000000014033804E: cmp     r9, r10
 * 0000000140338051: jb      short loc_140338058
 * 0000000140338053: cmp     r9, rax
 * 0000000140338056: jbe     short loc_14033807B
 * 0000000140338058: mov     eax, ebx
 * 000000014033805A: test    ebx, ebx
 * 000000014033805C: jz      loc_1403383DA
 * 0000000140338062: lea     r8, [r11-1]
 * 0000000140338066: add     r8, rax
 * 0000000140338069: cmp     r9, r11
 * 000000014033806C: jb      loc_1403383DA
 * 0000000140338072: cmp     r9, r8
 * 0000000140338075: ja      loc_1403383DA
 * 000000014033807B: add     dl, 1
 * 000000014033807E: cmp     dl, 1Ch
 * 0000000140338081: jb      short loc_14033803A
 * 0000000140338083: test    [rsi+970h], r15d
 * 000000014033808A: jnz     loc_140333DA8
 * 0000000140338090: mov     rbx, [r13+8]
 * 0000000140338094: mov     r9d, [r13+10h]
 * 0000000140338098: mov     r10, rbx
 * 000000014033809B: add     [rsi+810h], r9d
 * 00000001403380A2: mov     rax, rbx
 * 00000001403380A5: mov     r14d, [rsi+7FCh]
 * 00000001403380AC: mov     r15, [rsi+800h]
 * 00000001403380B3: lea     rcx, [rbx+r9]
 * 00000001403380B7: cmp     rbx, rcx
 * 00000001403380BA: jnb     short loc_1403380CC
 * 00000001403380BC: mov     edx, 40h ; '@'
 * 00000001403380C1: prefetchnta byte ptr [rax]
 * 00000001403380C4: add     rax, rdx
 * 00000001403380C7: cmp     rax, rcx
 * 00000001403380CA: jb      short loc_1403380C1
 * 00000001403380CC: mov     r11d, r9d
 * 00000001403380CF: mov     r8, r15
 * 00000001403380D2: shr     r11d, 7
 * 00000001403380D6: test    r11d, r11d
 * 00000001403380D9: jz      short loc_140338151
 * 00000001403380DB: mov     rdi, 7010008004002001h
 * 00000001403380E5: mov     edx, 8
 * 00000001403380EA: lea     esi, [rdx-7]
 * 00000001403380ED: mov     rax, [r10]
 * 00000001403380F0: mov     ecx, r14d
 * 00000001403380F3: xor     rax, r8
 * 00000001403380F6: mov     r8, [r10+8]
 * 00000001403380FA: rol     rax, cl
 * 00000001403380FD: add     r10, 10h
 * 0000000140338101: xor     r8, rax
 * 0000000140338104: rol     r8, cl
 * 0000000140338107: sub     rdx, rsi
 * 000000014033810A: jnz     short loc_1403380ED
 * 000000014033810C: mov     rcx, r10
 * 000000014033810F: sub     rcx, rbx
 * 0000000140338112: xor     rcx, r15
 * 0000000140338115: mov     rax, rcx
 * 0000000140338118: rol     rax, 11h
 * 000000014033811C: xor     rcx, rax
 * 000000014033811F: mov     rax, rdi
 * 0000000140338122: mul     rcx
 * 0000000140338125: xor     eax, edx
 * 0000000140338127: mov     [rbp+20F0h+var_1AC8], rdx
 * 000000014033812E: xor     r14d, eax
 * 0000000140338131: mov     rax, rsi
 * 0000000140338134: and     r14d, 3Fh
 * 0000000140338138: cmovz   r14d, eax
 * 000000014033813C: mov     eax, 0FFFFFFFFh
 * 0000000140338141: add     r11d, eax
 * 0000000140338144: jnz     short loc_1403380E5
 * 0000000140338146: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033814A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140338151: and     r9d, 7Fh
 * 0000000140338155: mov     r11d, 1
 * 000000014033815B: cmp     r9d, 8
 * 000000014033815F: jb      short loc_14033817E
 * 0000000140338161: mov     edx, r9d
 * 0000000140338164: shr     rdx, 3
 * 0000000140338168: xor     r8, [r10]
 * 000000014033816B: mov     ecx, r14d
 * 000000014033816E: rol     r8, cl
 * 0000000140338171: add     r10, 8
 * 0000000140338175: add     r9d, 0FFFFFFF8h
 * 0000000140338179: sub     rdx, r11
 * 000000014033817C: jnz     short loc_140338168
 * 000000014033817E: test    r9d, r9d
 * 0000000140338181: jz      short loc_1403381A1
 * 0000000140338183: mov     esi, 0FFFFFFFFh
 * 0000000140338188: movzx   eax, byte ptr [r10]
 * 000000014033818C: mov     ecx, r14d
 * 000000014033818F: xor     r8, rax
 * 0000000140338192: add     r10, r11
 * 0000000140338195: rol     r8, cl
 * 0000000140338198: add     r9d, esi
 * 000000014033819B: jnz     short loc_140338188
 * 000000014033819D: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403381A1: mov     rax, r8
 * 00000001403381A4: jmp     short loc_1403381A9
 * 00000001403381A6: xor     r8d, eax
 * 00000001403381A9: shr     rax, 1Fh
 * 00000001403381AD: test    rax, rax
 * 00000001403381B0: jnz     short loc_1403381A6
 * 00000001403381B2: btr     r8d, 1Fh
 * 00000001403381B7: mov     [r13+14h], r8d
 * 00000001403381BB: mov     rax, [rbp+20F0h+var_1F80]
 * 00000001403381C2: mov     r14, [rax+50h]
 * 00000001403381C6: xor     eax, eax
 * 00000001403381C8: mov     r10d, eax
 * 00000001403381CB: test    r14, r14
 * 00000001403381CE: jz      short loc_14033824E
 * 00000001403381D0: mov     r10d, [r14]
 * 00000001403381D3: mov     r8b, al
 * 00000001403381D6: lea     r9d, [r10-8]
 * 00000001403381DA: shr     r9d, 3
 * 00000001403381DE: test    r9d, r9d
 * 00000001403381E1: jz      short loc_14033824E
 * 00000001403381E3: mov     r11, [rbp+20F0h+var_1E30]
 * 00000001403381EA: mov     rbx, [rbp+20F0h+var_1E28]
 * 00000001403381F1: mov     r15d, [rbp+20F0h+var_2040]
 * 00000001403381F8: movzx   eax, r8b
 * 00000001403381FC: mov     rcx, [r14+rax*8+8]
 * 0000000140338201: test    rcx, rcx
 * 0000000140338204: jz      short loc_140338241
 * 0000000140338206: test    r12, r12
 * 0000000140338209: jz      short loc_14033821C
 * 000000014033820B: lea     rax, [r11-1]
 * 000000014033820F: add     rax, r12
 * 0000000140338212: cmp     rcx, r11
 * 0000000140338215: jb      short loc_14033821C
 * 0000000140338217: cmp     rcx, rax
 * 000000014033821A: jbe     short loc_140338241
 * 000000014033821C: mov     rax, r15
 * 000000014033821F: test    r15d, r15d
 * 0000000140338222: jz      loc_140338352
 * 0000000140338228: lea     rdx, [rbx-1]
 * 000000014033822C: add     rdx, rax
 * 000000014033822F: cmp     rcx, rbx
 * 0000000140338232: jb      loc_140338352
 * 0000000140338238: cmp     rcx, rdx
 * 000000014033823B: ja      loc_140338352
 * 0000000140338241: add     r8b, 1
 * 0000000140338245: movzx   eax, r8b
 * 0000000140338249: cmp     eax, r9d
 * 000000014033824C: jb      short loc_1403381F8
 * 000000014033824E: add     [rsi+810h], r10d
 * 0000000140338255: mov     r9, r14
 * 0000000140338258: mov     ebx, [rsi+7FCh]
 * 000000014033825E: mov     rax, r14
 * 0000000140338261: mov     r15, [rsi+800h]
 * 0000000140338268: mov     ecx, r10d
 * 000000014033826B: add     rcx, r14
 * 000000014033826E: cmp     r14, rcx
 * 0000000140338271: jnb     short loc_140338283
 * 0000000140338273: mov     edx, 40h ; '@'
 * 0000000140338278: prefetchnta byte ptr [rax]
 * 000000014033827B: add     rax, rdx
 * 000000014033827E: cmp     rax, rcx
 * 0000000140338281: jb      short loc_140338278
 * 0000000140338283: mov     r11d, r10d
 * 0000000140338286: mov     r8, r15
 * 0000000140338289: shr     r11d, 7
 * 000000014033828D: mov     r12d, 1
 * 0000000140338293: test    r11d, r11d
 * 0000000140338296: jz      short loc_1403382FE
 * 0000000140338298: mov     rsi, 7010008004002001h
 * 00000001403382A2: mov     edx, 8
 * 00000001403382A7: mov     rax, [r9]
 * 00000001403382AA: mov     ecx, ebx
 * 00000001403382AC: xor     rax, r8
 * 00000001403382AF: mov     r8, [r9+8]
 * 00000001403382B3: rol     rax, cl
 * 00000001403382B6: add     r9, 10h
 * 00000001403382BA: xor     r8, rax
 * 00000001403382BD: rol     r8, cl
 * 00000001403382C0: sub     rdx, r12
 * 00000001403382C3: jnz     short loc_1403382A7
 * 00000001403382C5: mov     rcx, r9
 * 00000001403382C8: sub     rcx, r14
 * 00000001403382CB: xor     rcx, r15
 * 00000001403382CE: mov     rax, rcx
 * 00000001403382D1: rol     rax, 11h
 * 00000001403382D5: xor     rcx, rax
 * 00000001403382D8: mov     rax, rsi
 * 00000001403382DB: mul     rcx
 * 00000001403382DE: xor     eax, edx
 * 00000001403382E0: mov     [rbp+20F0h+var_1AC0], rdx
 * 00000001403382E7: xor     ebx, eax
 * 00000001403382E9: mov     eax, 0FFFFFFFFh
 * 00000001403382EE: and     ebx, 3Fh
 * 00000001403382F1: cmovz   ebx, r12d
 * 00000001403382F5: add     r11d, eax
 * 00000001403382F8: jnz     short loc_1403382A2
 * 00000001403382FA: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403382FE: and     r10d, 7Fh
 * 0000000140338302: cmp     r10d, 8
 * 0000000140338306: jb      short loc_140338324
 * 0000000140338308: mov     edx, r10d
 * 000000014033830B: shr     rdx, 3
 * 000000014033830F: xor     r8, [r9]
 * 0000000140338312: mov     ecx, ebx
 * 0000000140338314: rol     r8, cl
 * 0000000140338317: add     r9, 8
 * 000000014033831B: add     r10d, 0FFFFFFF8h
 * 000000014033831F: sub     rdx, r12
 * 0000000140338322: jnz     short loc_14033830F
 * 0000000140338324: test    r10d, r10d
 * 0000000140338327: jz      short loc_140338346
 * 0000000140338329: mov     esi, 0FFFFFFFFh
 * 000000014033832E: movzx   eax, byte ptr [r9]
 * 0000000140338332: mov     ecx, ebx
 * 0000000140338334: xor     r8, rax
 * 0000000140338337: add     r9, r12
 * 000000014033833A: rol     r8, cl
 * 000000014033833D: add     r10d, esi
 * 0000000140338340: jnz     short loc_14033832E
 * 0000000140338342: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140338346: mov     rax, r8
 * 0000000140338349: shr     rax, 1Fh
 * 000000014033834D: xor     r10d, r10d
 * 0000000140338350: jmp     short loc_1403383C7
 * 0000000140338352: mov     [r13+20h], rcx
 * 0000000140338356: mov     r11, 0B3B74BDEE4453415h
 * 0000000140338360: mov     rax, [rsi+580h]
 * 0000000140338367: mov     [rax], r13
 * 000000014033836A: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140338371: xor     eax, eax
 * 0000000140338373: cmp     [rsi+8D8h], eax
 * 0000000140338379: jnz     loc_140333318
 * 000000014033837F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338389: add     rax, rsi
 * 000000014033838C: mov     [rsi+8E0h], rax
 * 0000000140338393: lea     rax, [r11+r13]
 * 0000000140338397: mov     [rsi+8E8h], rax
 * 000000014033839E: movsxd  rax, dword ptr [r13+0]
 * 00000001403383A2: mov     [rsi+8F0h], rax
 * 00000001403383A9: mov     eax, 1
 * 00000001403383AE: mov     [rsi+8F8h], r14
 * 00000001403383B5: mov     [rsi+8D8h], eax
 * 00000001403383BB: jmp     loc_140333318
 * 00000001403383C0: xor     r8d, eax
 * 00000001403383C3: shr     rax, 1Fh
 * 00000001403383C7: test    rax, rax
 * 00000001403383CA: jnz     short loc_1403383C0
 * 00000001403383CC: btr     r8d, 1Fh
 * 00000001403383D1: mov     [r13+2Ch], r8d
 * 00000001403383D5: jmp     loc_140333625
 * 00000001403383DA: mov     r10d, 1
 * 00000001403383E0: test    [rsi+970h], r15d
 * 00000001403383E7: jz      short loc_140338433
 * 00000001403383E9: mov     rcx, [rsi+0A50h]
 * 00000001403383F0: lea     edx, [r10+2Fh]
 * 00000001403383F4: lea     r8d, [r10+5]
 * 00000001403383F8: mov     rax, [r13+0]
 * 00000001403383FC: add     edx, 0FFFFFFF8h
 * 00000001403383FF: mov     [rcx], rax
 * 0000000140338402: add     r13, 8
 * 0000000140338406: add     rcx, 8
 * 000000014033840A: sub     r8, r10
 * 000000014033840D: jnz     short loc_1403383F8
 * 000000014033840F: test    edx, edx
 * 0000000140338411: jz      short loc_14033842C
 * 0000000140338413: mov     esi, 0FFFFFFFFh
 * 0000000140338418: mov     al, [r13+0]
 * 000000014033841C: add     r13, r10
 * 000000014033841F: mov     [rcx], al
 * 0000000140338421: add     rcx, r10
 * 0000000140338424: add     edx, esi
 * 0000000140338426: jnz     short loc_140338418
 * 0000000140338428: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033842C: mov     r13, [rsi+0A50h]
 * 0000000140338433: mov     [r13+20h], r9
 * 0000000140338437: mov     r11, 0B3B74BDEE4453415h
 * 0000000140338441: mov     rax, [rsi+580h]
 * 0000000140338448: mov     r14d, 8000h
 * 000000014033844E: mov     [rax], r13
 * 0000000140338451: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140338458: xor     eax, eax
 * 000000014033845A: mov     rcx, [r13+8]
 * 000000014033845E: cmp     [rsi+8D8h], eax
 * 0000000140338464: jnz     short loc_14033849E
 * 0000000140338466: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338470: add     rax, rsi
 * 0000000140338473: mov     [rsi+8E0h], rax
 * 000000014033847A: lea     rax, [r11+r13]
 * 000000014033847E: mov     [rsi+8E8h], rax
 * 0000000140338485: movsxd  rax, dword ptr [r13+0]
 * 0000000140338489: mov     [rsi+8F0h], rax
 * 0000000140338490: mov     [rsi+8F8h], rcx
 * 0000000140338497: mov     [rsi+8D8h], r10d
 * 000000014033849E: xor     r10d, r10d
 * 00000001403384A1: jmp     loc_140333635
 * 00000001403384A6: mov     r11, [r13+8]
 * 00000001403384AA: add     [rsi+810h], r8d
 * 00000001403384B1: mov     r9, r11
 * 00000001403384B4: mov     r14d, [rsi+7FCh]
 * 00000001403384BB: mov     rax, r11
 * 00000001403384BE: mov     r15, [rsi+800h]
 * 00000001403384C5: lea     rcx, [r11+r8]
 * 00000001403384C9: cmp     r11, rcx
 * 00000001403384CC: jnb     short loc_1403384DE
 * 00000001403384CE: mov     edx, 40h ; '@'
 * 00000001403384D3: prefetchnta byte ptr [rax]
 * 00000001403384D6: add     rax, rdx
 * 00000001403384D9: cmp     rax, rcx
 * 00000001403384DC: jb      short loc_1403384D3
 * 00000001403384DE: mov     r10d, r8d
 * 00000001403384E1: mov     rbx, r15
 * 00000001403384E4: shr     r10d, 7
 * 00000001403384E8: mov     r12d, 1
 * 00000001403384EE: mov     r13d, 0FFFFFFFFh
 * 00000001403384F4: test    r10d, r10d
 * 00000001403384F7: jz      short loc_14033855D
 * 00000001403384F9: mov     rsi, 7010008004002001h
 * 0000000140338503: mov     edx, 8
 * 0000000140338508: mov     rax, [r9]
 * 000000014033850B: mov     ecx, r14d
 * 000000014033850E: xor     rax, rbx
 * 0000000140338511: mov     rbx, [r9+8]
 * 0000000140338515: rol     rax, cl
 * 0000000140338518: add     r9, 10h
 * 000000014033851C: xor     rbx, rax
 * 000000014033851F: rol     rbx, cl
 * 0000000140338522: sub     rdx, r12
 * 0000000140338525: jnz     short loc_140338508
 * 0000000140338527: mov     rcx, r9
 * 000000014033852A: sub     rcx, r11
 * 000000014033852D: xor     rcx, r15
 * 0000000140338530: mov     rax, rcx
 * 0000000140338533: rol     rax, 11h
 * 0000000140338537: xor     rcx, rax
 * 000000014033853A: mov     rax, rsi
 * 000000014033853D: mul     rcx
 * 0000000140338540: xor     eax, edx
 * 0000000140338542: mov     [rbp+20F0h+var_1AB8], rdx
 * 0000000140338549: xor     r14d, eax
 * 000000014033854C: and     r14d, 3Fh
 * 0000000140338550: cmovz   r14d, r12d
 * 0000000140338554: add     r10d, r13d
 * 0000000140338557: jnz     short loc_140338503
 * 0000000140338559: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033855D: and     r8d, 7Fh
 * 0000000140338561: cmp     r8d, 8
 * 0000000140338565: jb      short loc_140338584
 * 0000000140338567: mov     edx, r8d
 * 000000014033856A: shr     rdx, 3
 * 000000014033856E: xor     rbx, [r9]
 * 0000000140338571: mov     ecx, r14d
 * 0000000140338574: rol     rbx, cl
 * 0000000140338577: add     r9, 8
 * 000000014033857B: add     r8d, 0FFFFFFF8h
 * 000000014033857F: sub     rdx, r12
 * 0000000140338582: jnz     short loc_14033856E
 * 0000000140338584: test    r8d, r8d
 * 0000000140338587: jz      short loc_14033859E
 * 0000000140338589: movzx   eax, byte ptr [r9]
 * 000000014033858D: mov     ecx, r14d
 * 0000000140338590: xor     rbx, rax
 * 0000000140338593: add     r9, r12
 * 0000000140338596: rol     rbx, cl
 * 0000000140338599: add     r8d, r13d
 * 000000014033859C: jnz     short loc_140338589
 * 000000014033859E: mov     rax, rbx
 * 00000001403385A1: jmp     short loc_1403385A5
 * 00000001403385A3: xor     ebx, eax
 * 00000001403385A5: shr     rax, 1Fh
 * 00000001403385A9: test    rax, rax
 * 00000001403385AC: jnz     short loc_1403385A3
 * 00000001403385AE: mov     r12, [rbp+20F0h+var_20D0]
 * 00000001403385B2: btr     ebx, 1Fh
 * 00000001403385B6: mov     r13d, eax
 * 00000001403385B9: cmp     ebx, [r12+14h]
 * 00000001403385BE: jz      loc_14033869F
 * 00000001403385C4: cmp     [r12], eax
 * 00000001403385C8: jnz     short loc_1403385D6
 * 00000001403385CA: cmp     [r12+18h], eax
 * 00000001403385CF: lea     ecx, [rax+1]
 * 00000001403385D2: cmovnz  r13d, ecx
 * 00000001403385D6: mov     ecx, [r12+10h]
 * 00000001403385DB: mov     rdx, [r12+8]
 * 00000001403385E0: test    rcx, rcx
 * 00000001403385E3: jz      loc_1403387D3
 * 00000001403385E9: mov     eax, [rsi+974h]
 * 00000001403385EF: mov     r8d, 40h ; '@'
 * 00000001403385F5: test    r8b, al
 * 00000001403385F8: jz      loc_1403387D3
 * 00000001403385FE: mov     r12, cr8
 * 0000000140338602: lea     eax, [r8-3Eh]
 * 0000000140338606: mov     cr8, rax
 * 000000014033860A: lea     rax, [rcx-1]
 * 000000014033860E: mov     r14, rdx
 * 0000000140338611: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140338618: add     rax, rdx
 * 000000014033861B: mov     ecx, 0FFFh
 * 0000000140338620: or      rax, rcx
 * 0000000140338623: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140338627: lea     rax, [r14-1]
 * 000000014033862B: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033862F: movzx   r15d, r12b
 * 0000000140338633: mov     rax, [rsi+460h]
 * 000000014033863A: xor     edx, edx
 * 000000014033863C: mov     rcx, r14
 * 000000014033863F: call    KeGuardDispatchICall
 * 0000000140338644: cmp     eax, 0C000022Dh
 * 0000000140338649: jnz     short loc_140338676
 * 000000014033864B: test    r13d, r13d
 * 000000014033864E: jnz     loc_1403387CB
 * 0000000140338654: lea     eax, [r13+1]
 * 0000000140338658: cmp     r12b, al
 * 000000014033865B: ja      short loc_14033867E
 * 000000014033865D: movzx   r15d, r12b
 * 0000000140338661: mov     cr8, r15
 * 0000000140338665: mov     al, [r14]
 * 0000000140338668: mov     rax, cr8
 * 000000014033866C: lea     eax, [r13+2]
 * 0000000140338670: mov     cr8, rax
 * 0000000140338674: jmp     short loc_140338633
 * 0000000140338676: test    eax, eax
 * 0000000140338678: js      loc_1403387CB
 * 000000014033867E: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140338682: mov     ecx, 1000h
 * 0000000140338687: add     rax, rcx
 * 000000014033868A: add     r14, rcx
 * 000000014033868D: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140338691: cmp     rax, [rbp+20F0h+var_20C8]
 * 0000000140338695: jnz     short loc_14033862F
 * 0000000140338697: mov     cr8, r15
 * 000000014033869B: mov     r12, [rbp+20F0h+var_20D0]
 * 000000014033869F: mov     r13d, 1
 * 00000001403386A5: mov     rax, [r12+8]
 * 00000001403386AA: sub     rax, 70h ; 'p'
 * 00000001403386AE: mov     [rbp+20F0h+var_1F80], rax
 * 00000001403386B5: mov     r15, [rax+50h]
 * 00000001403386B9: xor     eax, eax
 * 00000001403386BB: mov     r9d, eax
 * 00000001403386BE: test    r15, r15
 * 00000001403386C1: jz      short loc_1403386C6
 * 00000001403386C3: mov     r9d, [r15]
 * 00000001403386C6: add     [rsi+810h], r9d
 * 00000001403386CD: mov     r10, r15
 * 00000001403386D0: mov     r11d, [rsi+7FCh]
 * 00000001403386D7: mov     rax, r15
 * 00000001403386DA: mov     r14, [rsi+800h]
 * 00000001403386E1: mov     ecx, r9d
 * 00000001403386E4: add     rcx, r15
 * 00000001403386E7: cmp     r15, rcx
 * 00000001403386EA: jnb     short loc_1403386FC
 * 00000001403386EC: mov     edx, 40h ; '@'
 * 00000001403386F1: prefetchnta byte ptr [rax]
 * 00000001403386F4: add     rax, rdx
 * 00000001403386F7: cmp     rax, rcx
 * 00000001403386FA: jb      short loc_1403386F1
 * 00000001403386FC: mov     ebx, r9d
 * 00000001403386FF: mov     r8, r14
 * 0000000140338702: shr     ebx, 7
 * 0000000140338705: test    ebx, ebx
 * 0000000140338707: jz      short loc_140338772
 * 0000000140338709: mov     rsi, 7010008004002001h
 * 0000000140338713: mov     edx, 8
 * 0000000140338718: mov     rax, [r10]
 * 000000014033871B: mov     ecx, r11d
 * 000000014033871E: xor     rax, r8
 * 0000000140338721: mov     r8, [r10+8]
 * 0000000140338725: rol     rax, cl
 * 0000000140338728: add     r10, 10h
 * 000000014033872C: xor     r8, rax
 * 000000014033872F: rol     r8, cl
 * 0000000140338732: sub     rdx, r13
 * 0000000140338735: jnz     short loc_140338718
 * 0000000140338737: mov     rcx, r10
 * 000000014033873A: sub     rcx, r15
 * 000000014033873D: xor     rcx, r14
 * 0000000140338740: mov     rax, rcx
 * 0000000140338743: rol     rax, 11h
 * 0000000140338747: xor     rcx, rax
 * 000000014033874A: mov     rax, rsi
 * 000000014033874D: mul     rcx
 * 0000000140338750: xor     r11d, eax
 * 0000000140338753: mov     [rbp+20F0h+var_1AB0], rdx
 * 000000014033875A: xor     r11d, edx
 * 000000014033875D: mov     eax, 0FFFFFFFFh
 * 0000000140338762: and     r11d, 3Fh
 * 0000000140338766: cmovz   r11d, r13d
 * 000000014033876A: add     ebx, eax
 * 000000014033876C: jnz     short loc_140338713
 * 000000014033876E: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140338772: and     r9d, 7Fh
 * 0000000140338776: cmp     r9d, 8
 * 000000014033877A: jb      short loc_140338799
 * 000000014033877C: mov     edx, r9d
 * 000000014033877F: shr     rdx, 3
 * 0000000140338783: xor     r8, [r10]
 * 0000000140338786: mov     ecx, r11d
 * 0000000140338789: rol     r8, cl
 * 000000014033878C: add     r10, 8
 * 0000000140338790: add     r9d, 0FFFFFFF8h
 * 0000000140338794: sub     rdx, r13
 * 0000000140338797: jnz     short loc_140338783
 * 0000000140338799: test    r9d, r9d
 * 000000014033879C: jz      short loc_1403387BC
 * 000000014033879E: mov     esi, 0FFFFFFFFh
 * 00000001403387A3: movzx   eax, byte ptr [r10]
 * 00000001403387A7: mov     ecx, r11d
 * 00000001403387AA: xor     r8, rax
 * 00000001403387AD: add     r10, r13
 * 00000001403387B0: rol     r8, cl
 * 00000001403387B3: add     r9d, esi
 * 00000001403387B6: jnz     short loc_1403387A3
 * 00000001403387B8: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403387BC: mov     rax, r8
 * 00000001403387BF: shr     rax, 1Fh
 * 00000001403387C3: xor     r10d, r10d
 * 00000001403387C6: jmp     loc_140338858
 * 00000001403387CB: mov     cr8, r15
 * 00000001403387CF: mov     r12, [rbp+20F0h+var_20D0]
 * 00000001403387D3: mov     eax, [rsi+8D8h]
 * 00000001403387D9: mov     ecx, [r12+14h]
 * 00000001403387DE: test    eax, eax
 * 00000001403387E0: jnz     short loc_1403387F8
 * 00000001403387E2: mov     eax, ebx
 * 00000001403387E4: xor     rcx, rax
 * 00000001403387E7: mov     rax, [rsi+580h]
 * 00000001403387EE: mov     [rax+18h], rcx
 * 00000001403387F2: mov     eax, [rsi+8D8h]
 * 00000001403387F8: mov     rcx, [r12+8]
 * 00000001403387FD: mov     r13d, 1
 * 0000000140338803: test    eax, eax
 * 0000000140338805: jnz     loc_1403386A5
 * 000000014033880B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338815: add     rax, rsi
 * 0000000140338818: mov     [rsi+8E0h], rax
 * 000000014033881F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140338829: add     rax, r12
 * 000000014033882C: mov     [rsi+8E8h], rax
 * 0000000140338833: movsxd  rax, dword ptr [r12]
 * 0000000140338837: mov     [rsi+8F0h], rax
 * 000000014033883E: mov     [rsi+8F8h], rcx
 * 0000000140338845: mov     [rsi+8D8h], r13d
 * 000000014033884C: jmp     loc_1403386A5
 * 0000000140338851: xor     r8d, eax
 * 0000000140338854: shr     rax, 1Fh
 * 0000000140338858: test    rax, rax
 * 000000014033885B: jnz     short loc_140338851
 * 000000014033885D: mov     ecx, [r12+2Ch]
 * 0000000140338862: btr     r8d, 1Fh
 * 0000000140338867: cmp     r8d, ecx
 * 000000014033886A: jz      loc_140333625
 * 0000000140338870: mov     eax, [rsi+8D8h]
 * 0000000140338876: test    eax, eax
 * 0000000140338878: jnz     loc_140333625
 * 000000014033887E: mov     eax, r8d
 * 0000000140338881: xor     rcx, rax
 * 0000000140338884: mov     rax, [rsi+580h]
 * 000000014033888B: mov     [rax+18h], rcx
 * 000000014033888F: mov     eax, [rsi+8D8h]
 * 0000000140338895: test    eax, eax
 * 0000000140338897: jnz     loc_140333625
 * 000000014033889D: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403388A7: mov     r11, 0B3B74BDEE4453415h
 * 00000001403388B1: add     rax, rsi
 * 00000001403388B4: mov     [rsi+8E0h], rax
 * 00000001403388BB: lea     rax, [r12+r11]
 * 00000001403388BF: mov     [rsi+8E8h], rax
 * 00000001403388C6: movsxd  rax, dword ptr [r12]
 * 00000001403388CA: mov     [rsi+8F0h], rax
 * 00000001403388D1: mov     [rsi+8F8h], r15
 * 00000001403388D8: mov     [rsi+8D8h], r13d
 * 00000001403388DF: jmp     loc_14033362F
 * 00000001403388E4: cmp     r14d, 25h ; '%'
 * 00000001403388E8: jg      loc_14033ACFD
 * 00000001403388EE: jz      loc_14033AC80
 * 00000001403388F4: mov     ecx, r14d
 * 00000001403388F7: sub     ecx, 1Dh
 * 00000001403388FA: jz      loc_14033A852
 * 0000000140338900: sub     ecx, 1
 * 0000000140338903: jz      loc_14033A0F2
 * 0000000140338909: sub     ecx, 1
 * 000000014033890C: jz      loc_140339583
 * 0000000140338912: sub     ecx, 1
 * 0000000140338915: jz      loc_140339573
 * 000000014033891B: sub     ecx, 1
 * 000000014033891E: jz      loc_140339563
 * 0000000140338924: sub     ecx, 2
 * 0000000140338927: jz      loc_140338E24
 * 000000014033892D: cmp     ecx, 1
 * 0000000140338930: jnz     loc_14033D4C6
 * 0000000140338936: mov     r14, [r13+8]
 * 000000014033893A: mov     r8d, [r13+10h]
 * 000000014033893E: mov     r9, r14
 * 0000000140338941: add     [rsi+810h], r8d
 * 0000000140338948: mov     rax, r14
 * 000000014033894B: mov     r10d, [rsi+7FCh]
 * 0000000140338952: mov     r15, [rsi+800h]
 * 0000000140338959: lea     rcx, [r14+r8]
 * 000000014033895D: cmp     r14, rcx
 * 0000000140338960: jnb     short loc_140338972
 * 0000000140338962: mov     edx, 40h ; '@'
 * 0000000140338967: prefetchnta byte ptr [rax]
 * 000000014033896A: add     rax, rdx
 * 000000014033896D: cmp     rax, rcx
 * 0000000140338970: jb      short loc_140338967
 * 0000000140338972: mov     r11d, r8d
 * 0000000140338975: mov     rbx, r15
 * 0000000140338978: shr     r11d, 7
 * 000000014033897C: mov     r12d, 1
 * 0000000140338982: test    r11d, r11d
 * 0000000140338985: jz      short loc_1403389F1
 * 0000000140338987: mov     rsi, 7010008004002001h
 * 0000000140338991: mov     edx, 8
 * 0000000140338996: mov     rax, [r9]
 * 0000000140338999: mov     ecx, r10d
 * 000000014033899C: xor     rax, rbx
 * 000000014033899F: mov     rbx, [r9+8]
 * 00000001403389A3: rol     rax, cl
 * 00000001403389A6: add     r9, 10h
 * 00000001403389AA: xor     rbx, rax
 * 00000001403389AD: rol     rbx, cl
 * 00000001403389B0: sub     rdx, r12
 * 00000001403389B3: jnz     short loc_140338996
 * 00000001403389B5: mov     rcx, r9
 * 00000001403389B8: sub     rcx, r14
 * 00000001403389BB: xor     rcx, r15
 * 00000001403389BE: mov     rax, rcx
 * 00000001403389C1: rol     rax, 11h
 * 00000001403389C5: xor     rcx, rax
 * 00000001403389C8: mov     rax, rsi
 * 00000001403389CB: mul     rcx
 * 00000001403389CE: xor     r10d, eax
 * 00000001403389D1: mov     [rbp+20F0h+var_1AA8], rdx
 * 00000001403389D8: xor     r10d, edx
 * 00000001403389DB: mov     eax, 0FFFFFFFFh
 * 00000001403389E0: and     r10d, 3Fh
 * 00000001403389E4: cmovz   r10d, r12d
 * 00000001403389E8: add     r11d, eax
 * 00000001403389EB: jnz     short loc_140338991
 * 00000001403389ED: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403389F1: and     r8d, 7Fh
 * 00000001403389F5: cmp     r8d, 8
 * 00000001403389F9: jb      short loc_140338A18
 * 00000001403389FB: mov     edx, r8d
 * 00000001403389FE: shr     rdx, 3
 * 0000000140338A02: xor     rbx, [r9]
 * 0000000140338A05: mov     ecx, r10d
 * 0000000140338A08: rol     rbx, cl
 * 0000000140338A0B: add     r9, 8
 * 0000000140338A0F: add     r8d, 0FFFFFFF8h
 * 0000000140338A13: sub     rdx, r12
 * 0000000140338A16: jnz     short loc_140338A02
 * 0000000140338A18: test    r8d, r8d
 * 0000000140338A1B: jz      short loc_140338A3B
 * 0000000140338A1D: mov     esi, 0FFFFFFFFh
 * 0000000140338A22: movzx   eax, byte ptr [r9]
 * 0000000140338A26: mov     ecx, r10d
 * 0000000140338A29: xor     rbx, rax
 * 0000000140338A2C: add     r9, r12
 * 0000000140338A2F: rol     rbx, cl
 * 0000000140338A32: add     r8d, esi
 * 0000000140338A35: jnz     short loc_140338A22
 * 0000000140338A37: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140338A3B: mov     rax, rbx
 * 0000000140338A3E: jmp     short loc_140338A42
 * 0000000140338A40: xor     ebx, eax
 * 0000000140338A42: shr     rax, 1Fh
 * 0000000140338A46: test    rax, rax
 * 0000000140338A49: jnz     short loc_140338A40
 * 0000000140338A4B: btr     ebx, 1Fh
 * 0000000140338A4F: mov     r12d, eax
 * 0000000140338A52: cmp     ebx, [r13+14h]
 * 0000000140338A56: jz      loc_140338BA5
 * 0000000140338A5C: cmp     [r13+0], eax
 * 0000000140338A60: jnz     short loc_140338A6D
 * 0000000140338A62: cmp     [r13+18h], eax
 * 0000000140338A66: lea     ecx, [rax+1]
 * 0000000140338A69: cmovnz  r12d, ecx
 * 0000000140338A6D: mov     ecx, [r13+10h]
 * 0000000140338A71: mov     rdx, [r13+8]
 * 0000000140338A75: test    rcx, rcx
 * 0000000140338A78: jz      loc_140338B34
 * 0000000140338A7E: mov     eax, [rsi+974h]
 * 0000000140338A84: mov     r8d, 40h ; '@'
 * 0000000140338A8A: test    r8b, al
 * 0000000140338A8D: jz      loc_140338B34
 * 0000000140338A93: mov     r13, cr8
 * 0000000140338A97: lea     eax, [r8-3Eh]
 * 0000000140338A9B: mov     cr8, rax
 * 0000000140338A9F: lea     rax, [rcx-1]
 * 0000000140338AA3: mov     r14, rdx
 * 0000000140338AA6: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140338AAD: add     rax, rdx
 * 0000000140338AB0: mov     ecx, 0FFFh
 * 0000000140338AB5: or      rax, rcx
 * 0000000140338AB8: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140338ABC: lea     rax, [r14-1]
 * 0000000140338AC0: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140338AC4: movzx   r15d, r13b
 * 0000000140338AC8: mov     rax, [rsi+460h]
 * 0000000140338ACF: xor     edx, edx
 * 0000000140338AD1: mov     rcx, r14
 * 0000000140338AD4: call    KeGuardDispatchICall
 * 0000000140338AD9: cmp     eax, 0C000022Dh
 * 0000000140338ADE: jnz     short loc_140338B09
 * 0000000140338AE0: test    r12d, r12d
 * 0000000140338AE3: jnz     short loc_140338B2C
 * 0000000140338AE5: lea     eax, [r12+1]
 * 0000000140338AEA: cmp     r13b, al
 * 0000000140338AED: ja      short loc_140338B0D
 * 0000000140338AEF: movzx   r15d, r13b
 * 0000000140338AF3: mov     cr8, r15
 * 0000000140338AF7: mov     al, [r14]
 * 0000000140338AFA: mov     rax, cr8
 * 0000000140338AFE: lea     eax, [r12+2]
 * 0000000140338B03: mov     cr8, rax
 * 0000000140338B07: jmp     short loc_140338AC8
 * 0000000140338B09: test    eax, eax
 * 0000000140338B0B: js      short loc_140338B2C
 * 0000000140338B0D: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140338B11: mov     ecx, 1000h
 * 0000000140338B16: add     rax, rcx
 * 0000000140338B19: add     r14, rcx
 * 0000000140338B1C: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140338B20: cmp     rax, [rbp+20F0h+var_20C8]
 * 0000000140338B24: jnz     short loc_140338AC4
 * 0000000140338B26: mov     cr8, r15
 * 0000000140338B2A: jmp     short loc_140338BA5
 * 0000000140338B2C: mov     cr8, r15
 * 0000000140338B30: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140338B34: mov     eax, [rsi+8D8h]
 * 0000000140338B3A: mov     edx, [r13+14h]
 * 0000000140338B3E: test    eax, eax
 * 0000000140338B40: jnz     short loc_140338B58
 * 0000000140338B42: mov     rax, [rsi+580h]
 * 0000000140338B49: mov     ecx, ebx
 * 0000000140338B4B: xor     rcx, rdx
 * 0000000140338B4E: mov     [rax+18h], rcx
 * 0000000140338B52: mov     eax, [rsi+8D8h]
 * 0000000140338B58: mov     rcx, [r13+8]
 * 0000000140338B5C: test    eax, eax
 * 0000000140338B5E: jnz     short loc_140338BA5
 * 0000000140338B60: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338B6A: add     rax, rsi
 * 0000000140338B6D: mov     [rsi+8E0h], rax
 * 0000000140338B74: mov     rax, 0B3B74BDEE4453415h
 * 0000000140338B7E: add     rax, r13
 * 0000000140338B81: mov     [rsi+8E8h], rax
 * 0000000140338B88: movsxd  rax, dword ptr [r13+0]
 * 0000000140338B8C: mov     [rsi+8F0h], rax
 * 0000000140338B93: mov     eax, 1
 * 0000000140338B98: mov     [rsi+8F8h], rcx
 * 0000000140338B9F: mov     [rsi+8D8h], eax
 * 0000000140338BA5: mov     rcx, [rsi+530h]
 * 0000000140338BAC: mov     r14, cr8
 * 0000000140338BB0: mov     eax, 0Fh
 * 0000000140338BB5: mov     cr8, rax
 * 0000000140338BB9: mov     rax, [rsi+148h]
 * 0000000140338BC0: call    KeGuardDispatchICall
 * 0000000140338BC5: mov     rax, [rsi+600h]
 * 0000000140338BCC: mov     r12, [rbp+20F0h+var_20D0]
 * 0000000140338BD0: mov     rcx, [rax]
 * 0000000140338BD3: mov     eax, [rcx]
 * 0000000140338BD5: lea     rbx, [rcx+10h]
 * 0000000140338BD9: mov     r15b, [rcx+0Ch]
 * 0000000140338BDD: lea     rcx, [rax+rax*2]
 * 0000000140338BE1: lea     r13, [rbx+rcx*8]
 * 0000000140338BE5: mov     r8d, 18h
 * 0000000140338BEB: lea     r9, [r12+18h]
 * 0000000140338BF0: mov     r10, rbx
 * 0000000140338BF3: mov     rcx, [r10]
 * 0000000140338BF6: add     r10, 8
 * 0000000140338BFA: mov     rax, [r9]
 * 0000000140338BFD: add     r9, 8
 * 0000000140338C01: cmp     rcx, rax
 * 0000000140338C04: jnz     short loc_140338C3A
 * 0000000140338C06: add     r8d, 0FFFFFFF8h
 * 0000000140338C0A: cmp     r8d, 8
 * 0000000140338C0E: jnb     short loc_140338BF3
 * 0000000140338C10: test    r8d, r8d
 * 0000000140338C13: jz      short loc_140338C43
 * 0000000140338C15: mov     r11d, 1
 * 0000000140338C1B: movzx   edx, byte ptr [r10]
 * 0000000140338C1F: add     r10, r11
 * 0000000140338C22: movzx   eax, byte ptr [r9]
 * 0000000140338C26: add     r9, r11
 * 0000000140338C29: cmp     rdx, rax
 * 0000000140338C2C: jnz     short loc_140338C3A
 * 0000000140338C2E: mov     eax, 0FFFFFFFFh
 * 0000000140338C33: add     r8d, eax
 * 0000000140338C36: jz      short loc_140338C43
 * 0000000140338C38: jmp     short loc_140338C1B
 * 0000000140338C3A: add     rbx, 18h
 * 0000000140338C3E: cmp     rbx, r13
 * 0000000140338C41: jb      short loc_140338BE5
 * 0000000140338C43: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140338C47: mov     rcx, [rsi+530h]
 * 0000000140338C4E: mov     rax, [rsi+188h]
 * 0000000140338C55: call    KeGuardDispatchICall
 * 0000000140338C5A: movzx   eax, r14b
 * 0000000140338C5E: mov     cr8, rax
 * 0000000140338C62: xor     eax, eax
 * 0000000140338C64: test    r15b, r15b
 * 0000000140338C67: jz      short loc_140338CDC
 * 0000000140338C69: mov     eax, [rsi+974h]
 * 0000000140338C6F: mov     ecx, 10h
 * 0000000140338C74: test    cl, al
 * 0000000140338C76: jz      short loc_140338CCC
 * 0000000140338C78: xor     eax, eax
 * 0000000140338C7A: cmp     [rsi+8D8h], eax
 * 0000000140338C80: jnz     short loc_140338CCC
 * 0000000140338C82: mov     rcx, [rbp+20F0h+var_20D0]
 * 0000000140338C86: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338C90: add     rax, rsi
 * 0000000140338C93: mov     [rsi+8E0h], rax
 * 0000000140338C9A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140338CA4: add     rax, rcx
 * 0000000140338CA7: mov     [rsi+8E8h], rax
 * 0000000140338CAE: movsxd  rax, dword ptr [rcx]
 * 0000000140338CB1: mov     ecx, 1
 * 0000000140338CB6: mov     [rsi+8F0h], rax
 * 0000000140338CBD: mov     [rsi+8F8h], rcx
 * 0000000140338CC4: mov     [rsi+8D8h], ecx
 * 0000000140338CCA: jmp     short loc_140338CD1
 * 0000000140338CCC: mov     ecx, 1
 * 0000000140338CD1: cmp     [r12+18h], rcx
 * 0000000140338CD6: jz      short loc_140338D35
 * 0000000140338CD8: xor     eax, eax
 * 0000000140338CDA: jmp     short loc_140338CE1
 * 0000000140338CDC: mov     ecx, 1
 * 0000000140338CE1: mov     r12, [rbp+20F0h+var_20D0]
 * 0000000140338CE5: cmp     rbx, r13
 * 0000000140338CE8: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140338CF2: jnz     short loc_140338D43
 * 0000000140338CF4: cmp     [rsi+8D8h], eax
 * 0000000140338CFA: jnz     short loc_140338D43
 * 0000000140338CFC: lea     rax, [rsi+r13]
 * 0000000140338D00: mov     [rsi+8E0h], rax
 * 0000000140338D07: mov     rax, 0B3B74BDEE4453415h
 * 0000000140338D11: add     rax, r12
 * 0000000140338D14: mov     [rsi+8E8h], rax
 * 0000000140338D1B: movsxd  rax, dword ptr [r12]
 * 0000000140338D1F: mov     [rsi+8F0h], rax
 * 0000000140338D26: mov     [rsi+8F8h], rbx
 * 0000000140338D2D: mov     [rsi+8D8h], ecx
 * 0000000140338D33: jmp     short loc_140338D43
 * 0000000140338D35: mov     r12, [rbp+20F0h+var_20D0]
 * 0000000140338D39: mov     r13, 0A3A03F5891C8B4E8h
 * 0000000140338D43: mov     rcx, [rsi+530h]
 * 0000000140338D4A: mov     r15, cr8
 * 0000000140338D4E: mov     eax, 0Fh
 * 0000000140338D53: mov     cr8, rax
 * 0000000140338D57: mov     rax, [rsi+148h]
 * 0000000140338D5E: call    KeGuardDispatchICall
 * 0000000140338D63: mov     rax, [rsi+600h]
 * 0000000140338D6A: mov     rcx, [rax]
 * 0000000140338D6D: mov     eax, [rcx]
 * 0000000140338D6F: lea     rbx, [rcx+10h]
 * 0000000140338D73: lea     rcx, [rax+rax*2]
 * 0000000140338D77: xor     eax, eax
 * 0000000140338D79: lea     r14, [rbx+rcx*8]
 * 0000000140338D7D: jmp     short loc_140338DA6
 * 0000000140338D7F: mov     rcx, [rbx+8]
 * 0000000140338D83: cmp     rcx, rdx
 * 0000000140338D86: jb      short loc_140338DB2
 * 0000000140338D88: mov     rax, rcx
 * 0000000140338D8B: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140338D91: cmp     rax, rcx
 * 0000000140338D94: jnz     short loc_140338DB2
 * 0000000140338D96: mov     eax, [rbx+10h]
 * 0000000140338D99: add     rax, rcx
 * 0000000140338D9C: cmp     rax, rcx
 * 0000000140338D9F: jbe     short loc_140338DB2
 * 0000000140338DA1: cmp     rax, rdx
 * 0000000140338DA4: jz      short loc_140338DB2
 * 0000000140338DA6: add     rbx, 18h
 * 0000000140338DAA: mov     rdx, rax
 * 0000000140338DAD: cmp     rbx, r14
 * 0000000140338DB0: jb      short loc_140338D7F
 * 0000000140338DB2: mov     rcx, [rsi+530h]
 * 0000000140338DB9: mov     rax, [rsi+188h]
 * 0000000140338DC0: call    KeGuardDispatchICall
 * 0000000140338DC5: movzx   eax, r15b
 * 0000000140338DC9: mov     cr8, rax
 * 0000000140338DCD: cmp     rbx, r14
 * 0000000140338DD0: jz      loc_140333DB4
 * 0000000140338DD6: xor     eax, eax
 * 0000000140338DD8: xor     r10d, r10d
 * 0000000140338DDB: mov     r11, 0B3B74BDEE4453415h
 * 0000000140338DE5: mov     r14d, 8000h
 * 0000000140338DEB: cmp     [rsi+8D8h], eax
 * 0000000140338DF1: jnz     loc_140333635
 * 0000000140338DF7: lea     rax, [rsi+r13]
 * 0000000140338DFB: mov     [rsi+8E0h], rax
 * 0000000140338E02: lea     rax, [r12+r11]
 * 0000000140338E06: mov     [rsi+8E8h], rax
 * 0000000140338E0D: movsxd  rax, dword ptr [r12]
 * 0000000140338E11: mov     [rsi+8F0h], rax
 * 0000000140338E18: mov     [rsi+8F8h], rbx
 * 0000000140338E1F: jmp     loc_14033479E
 * 0000000140338E24: mov     ecx, [r13+28h]
 * 0000000140338E28: and     ecx, edx
 * 0000000140338E2A: jz      short loc_140338E49
 * 0000000140338E2C: xor     eax, eax
 * 0000000140338E2E: cmp     [rsi+960h], rax
 * 0000000140338E35: jz      loc_140333312
 * 0000000140338E3B: mov     eax, [rsi+974h]
 * 0000000140338E41: test    al, 4
 * 0000000140338E43: jnz     loc_14033341D
 * 0000000140338E49: xor     eax, eax
 * 0000000140338E4B: test    ecx, ecx
 * 0000000140338E4D: jz      loc_14033933E
 * 0000000140338E53: mov     edx, [rsi+974h]
 * 0000000140338E59: mov     ecx, edx
 * 0000000140338E5B: cmp     [rsi+80Ch], eax
 * 0000000140338E61: jnz     short loc_140338E75
 * 0000000140338E63: shl     ecx, 3
 * 0000000140338E66: xor     ecx, edx
 * 0000000140338E68: and     ecx, 20h
 * 0000000140338E6B: xor     ecx, edx
 * 0000000140338E6D: mov     [rsi+974h], ecx
 * 0000000140338E73: jmp     short loc_140338E86
 * 0000000140338E75: mov     eax, edx
 * 0000000140338E77: shr     eax, 3
 * 0000000140338E7A: xor     eax, edx
 * 0000000140338E7C: test    al, 4
 * 0000000140338E7E: jnz     loc_14033341D
 * 0000000140338E84: xor     eax, eax
 * 0000000140338E86: cmp     [rsi+960h], rax
 * 0000000140338E8D: jz      loc_14033932C
 * 0000000140338E93: mov     edx, ecx
 * 0000000140338E95: cmp     [rsi+80Ch], eax
 * 0000000140338E9B: jnz     short loc_140338EAF
 * 0000000140338E9D: shl     edx, 3
 * 0000000140338EA0: xor     edx, ecx
 * 0000000140338EA2: and     edx, 20h
 * 0000000140338EA5: xor     edx, ecx
 * 0000000140338EA7: mov     [rsi+974h], edx
 * 0000000140338EAD: jmp     short loc_140338EBE
 * 0000000140338EAF: mov     eax, ecx
 * 0000000140338EB1: shr     eax, 3
 * 0000000140338EB4: xor     eax, ecx
 * 0000000140338EB6: test    al, 4
 * 0000000140338EB8: jnz     loc_14033932A
 * 0000000140338EBE: test    dl, 4
 * 0000000140338EC1: jz      loc_140338F81
 * 0000000140338EC7: mov     rcx, [r13+8]
 * 0000000140338ECB: mov     r14d, 0FFFh
 * 0000000140338ED1: mov     eax, [r13+10h]
 * 0000000140338ED5: and     r14, rcx
 * 0000000140338ED8: add     rax, 0FFFh
 * 0000000140338EDE: mov     rbx, rcx
 * 0000000140338EE1: add     r14, rax
 * 0000000140338EE4: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140338EEB: shr     r14, 0Ch
 * 0000000140338EEF: mov     r12d, 1
 * 0000000140338EF5: test    r14, r14
 * 0000000140338EF8: jz      short loc_140338F79
 * 0000000140338EFA: xor     edi, edi
 * 0000000140338EFC: mov     rax, [rsi+2A8h]
 * 0000000140338F03: mov     rcx, rbx
 * 0000000140338F06: sub     r14, r12
 * 0000000140338F09: call    KeGuardDispatchICall
 * 0000000140338F0E: mov     r11, 0B3B74BDEE4453415h
 * 0000000140338F18: test    al, al
 * 0000000140338F1A: jz      short loc_140338F5C
 * 0000000140338F1C: cmp     [rsi+8D8h], edi
 * 0000000140338F22: jnz     short loc_140338F5C
 * 0000000140338F24: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140338F2E: add     rax, rsi
 * 0000000140338F31: mov     [rsi+8E0h], rax
 * 0000000140338F38: lea     rax, [r11+r13]
 * 0000000140338F3C: mov     [rsi+8E8h], rax
 * 0000000140338F43: movsxd  rax, dword ptr [r13+0]
 * 0000000140338F47: mov     [rsi+8F0h], rax
 * 0000000140338F4E: mov     [rsi+8F8h], rbx
 * 0000000140338F55: mov     [rsi+8D8h], r12d
 * 0000000140338F5C: add     dword ptr [rsi+810h], 100h
 * 0000000140338F66: add     rbx, 1000h
 * 0000000140338F6D: test    r14, r14
 * 0000000140338F70: jnz     short loc_140338EFC
 * 0000000140338F72: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140338F79: xor     r10d, r10d
 * 0000000140338F7C: jmp     loc_140339202
 * 0000000140338F81: mov     r11, [r13+8]
 * 0000000140338F85: mov     r8d, [r13+10h]
 * 0000000140338F89: mov     r9, r11
 * 0000000140338F8C: add     [rsi+810h], r8d
 * 0000000140338F93: mov     rax, r11
 * 0000000140338F96: mov     r14d, [rsi+7FCh]
 * 0000000140338F9D: mov     r15, [rsi+800h]
 * 0000000140338FA4: lea     rcx, [r11+r8]
 * 0000000140338FA8: cmp     r11, rcx
 * 0000000140338FAB: jnb     short loc_140338FBD
 * 0000000140338FAD: mov     edx, 40h ; '@'
 * 0000000140338FB2: prefetchnta byte ptr [rax]
 * 0000000140338FB5: add     rax, rdx
 * 0000000140338FB8: cmp     rax, rcx
 * 0000000140338FBB: jb      short loc_140338FB2
 * 0000000140338FBD: mov     r10d, r8d
 * 0000000140338FC0: mov     rbx, r15
 * 0000000140338FC3: shr     r10d, 7
 * 0000000140338FC7: mov     r12d, 1
 * 0000000140338FCD: test    r10d, r10d
 * 0000000140338FD0: jz      short loc_14033903B
 * 0000000140338FD2: mov     rsi, 7010008004002001h
 * 0000000140338FDC: mov     edx, 8
 * 0000000140338FE1: mov     rax, [r9]
 * 0000000140338FE4: mov     ecx, r14d
 * 0000000140338FE7: xor     rax, rbx
 * 0000000140338FEA: mov     rbx, [r9+8]
 * 0000000140338FEE: rol     rax, cl
 * 0000000140338FF1: add     r9, 10h
 * 0000000140338FF5: xor     rbx, rax
 * 0000000140338FF8: rol     rbx, cl
 * 0000000140338FFB: sub     rdx, r12
 * 0000000140338FFE: jnz     short loc_140338FE1
 * 0000000140339000: mov     rcx, r9
 * 0000000140339003: sub     rcx, r11
 * 0000000140339006: xor     rcx, r15
 * 0000000140339009: mov     rax, rcx
 * 000000014033900C: rol     rax, 11h
 * 0000000140339010: xor     rcx, rax
 * 0000000140339013: mov     rax, rsi
 * 0000000140339016: mul     rcx
 * 0000000140339019: xor     eax, edx
 * 000000014033901B: mov     [rbp+20F0h+var_1AA0], rdx
 * 0000000140339022: xor     r14d, eax
 * 0000000140339025: mov     eax, 0FFFFFFFFh
 * 000000014033902A: and     r14d, 3Fh
 * 000000014033902E: cmovz   r14d, r12d
 * 0000000140339032: add     r10d, eax
 * 0000000140339035: jnz     short loc_140338FDC
 * 0000000140339037: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033903B: and     r8d, 7Fh
 * 000000014033903F: cmp     r8d, 8
 * 0000000140339043: jb      short loc_140339062
 * 0000000140339045: mov     edx, r8d
 * 0000000140339048: shr     rdx, 3
 * 000000014033904C: xor     rbx, [r9]
 * 000000014033904F: mov     ecx, r14d
 * 0000000140339052: rol     rbx, cl
 * 0000000140339055: add     r9, 8
 * 0000000140339059: add     r8d, 0FFFFFFF8h
 * 000000014033905D: sub     rdx, r12
 * 0000000140339060: jnz     short loc_14033904C
 * 0000000140339062: test    r8d, r8d
 * 0000000140339065: jz      short loc_140339085
 * 0000000140339067: mov     esi, 0FFFFFFFFh
 * 000000014033906C: movzx   eax, byte ptr [r9]
 * 0000000140339070: mov     ecx, r14d
 * 0000000140339073: xor     rbx, rax
 * 0000000140339076: add     r9, r12
 * 0000000140339079: rol     rbx, cl
 * 000000014033907C: add     r8d, esi
 * 000000014033907F: jnz     short loc_14033906C
 * 0000000140339081: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140339085: mov     rax, rbx
 * 0000000140339088: shr     rax, 1Fh
 * 000000014033908C: xor     r10d, r10d
 * 000000014033908F: jmp     short loc_140339097
 * 0000000140339091: xor     ebx, eax
 * 0000000140339093: shr     rax, 1Fh
 * 0000000140339097: test    rax, rax
 * 000000014033909A: jnz     short loc_140339091
 * 000000014033909C: mov     r8d, [r13+14h]
 * 00000001403390A0: btr     ebx, 1Fh
 * 00000001403390A4: cmp     ebx, r8d
 * 00000001403390A7: jz      loc_1403391F8
 * 00000001403390AD: mov     ecx, [r13+10h]
 * 00000001403390B1: mov     rdx, [r13+8]
 * 00000001403390B5: test    rcx, rcx
 * 00000001403390B8: jz      loc_14033915B
 * 00000001403390BE: mov     eax, [rsi+974h]
 * 00000001403390C4: mov     r9d, 40h ; '@'
 * 00000001403390CA: test    r9b, al
 * 00000001403390CD: jz      loc_14033915B
 * 00000001403390D3: mov     r12, cr8
 * 00000001403390D7: lea     eax, [r9-3Eh]
 * 00000001403390DB: mov     cr8, rax
 * 00000001403390DF: lea     rax, [rcx-1]
 * 00000001403390E3: mov     r14, rdx
 * 00000001403390E6: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001403390ED: add     rax, rdx
 * 00000001403390F0: mov     ecx, 0FFFh
 * 00000001403390F5: or      rax, rcx
 * 00000001403390F8: mov     [rbp+20F0h+var_20C8], rax
 * 00000001403390FC: lea     r13, [r14-1]
 * 0000000140339100: movzx   r15d, r12b
 * 0000000140339104: mov     rax, [rsi+460h]
 * 000000014033910B: xor     edx, edx
 * 000000014033910D: mov     rcx, r14
 * 0000000140339110: call    KeGuardDispatchICall
 * 0000000140339115: cmp     eax, 0C000022Dh
 * 000000014033911A: jnz     short loc_140339144
 * 000000014033911C: mov     eax, 1
 * 0000000140339121: cmp     r12b, al
 * 0000000140339124: ja      loc_1403391D1
 * 000000014033912A: movzx   r15d, r12b
 * 000000014033912E: mov     cr8, r15
 * 0000000140339132: mov     al, [r14]
 * 0000000140339135: mov     rax, cr8
 * 0000000140339139: mov     eax, 2
 * 000000014033913E: mov     cr8, rax
 * 0000000140339142: jmp     short loc_140339104
 * 0000000140339144: xor     r10d, r10d
 * 0000000140339147: test    eax, eax
 * 0000000140339149: jns     loc_1403391D4
 * 000000014033914F: mov     cr8, r15
 * 0000000140339153: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140339157: mov     r8d, [r13+14h]
 * 000000014033915B: mov     eax, [rsi+8D8h]
 * 0000000140339161: test    eax, eax
 * 0000000140339163: jnz     short loc_14033917E
 * 0000000140339165: mov     ecx, ebx
 * 0000000140339167: mov     eax, r8d
 * 000000014033916A: xor     rcx, rax
 * 000000014033916D: mov     rax, [rsi+580h]
 * 0000000140339174: mov     [rax+18h], rcx
 * 0000000140339178: mov     eax, [rsi+8D8h]
 * 000000014033917E: mov     rcx, [r13+8]
 * 0000000140339182: mov     r9, 0A3A03F5891C8B4E8h
 * 000000014033918C: mov     r11, 0B3B74BDEE4453415h
 * 0000000140339196: mov     r12d, 1
 * 000000014033919C: test    eax, eax
 * 000000014033919E: jnz     short loc_14033920C
 * 00000001403391A0: lea     rax, [rsi+r9]
 * 00000001403391A4: mov     [rsi+8E0h], rax
 * 00000001403391AB: lea     rax, [r11+r13]
 * 00000001403391AF: mov     [rsi+8E8h], rax
 * 00000001403391B6: movsxd  rax, dword ptr [r13+0]
 * 00000001403391BA: mov     [rsi+8F0h], rax
 * 00000001403391C1: mov     [rsi+8F8h], rcx
 * 00000001403391C8: mov     [rsi+8D8h], r12d
 * 00000001403391CF: jmp     short loc_14033920C
 * 00000001403391D1: xor     r10d, r10d
 * 00000001403391D4: mov     r8d, 1000h
 * 00000001403391DA: add     r14, r8
 * 00000001403391DD: add     r13, r8
 * 00000001403391E0: cmp     r13, [rbp+20F0h+var_20C8]
 * 00000001403391E4: jnz     loc_140339100
 * 00000001403391EA: mov     cr8, r15
 * 00000001403391EE: mov     r13, [rbp+20F0h+var_20D0]
 * 00000001403391F2: mov     r12d, 1
 * 00000001403391F8: mov     r11, 0B3B74BDEE4453415h
 * 0000000140339202: mov     r9, 0A3A03F5891C8B4E8h
 * 000000014033920C: mov     eax, [r13+28h]
 * 0000000140339210: mov     ecx, 2
 * 0000000140339215: test    cl, al
 * 0000000140339217: jz      loc_14033362F
 * 000000014033921D: mov     r8, [r13+8]
 * 0000000140339221: test    al, 4
 * 0000000140339223: jz      short loc_14033929B
 * 0000000140339225: mov     rax, [r8+70h]
 * 0000000140339229: mov     rdx, [r13+18h]
 * 000000014033922D: mov     rcx, [rax]
 * 0000000140339230: cmp     rcx, rdx
 * 0000000140339233: jz      short loc_14033929B
 * 0000000140339235: mov     rax, [rsi+580h]
 * 000000014033923C: mov     [rax], rcx
 * 000000014033923F: mov     dword ptr [rax+10h], 100h
 * 0000000140339246: mov     eax, [rsi+8D8h]
 * 000000014033924C: test    eax, eax
 * 000000014033924E: jnz     short loc_140339264
 * 0000000140339250: mov     rax, [rsi+580h]
 * 0000000140339257: xor     rcx, rdx
 * 000000014033925A: mov     [rax+18h], rcx
 * 000000014033925E: mov     eax, [rsi+8D8h]
 * 0000000140339264: mov     rcx, [r8+70h]
 * 0000000140339268: test    eax, eax
 * 000000014033926A: jnz     short loc_14033929B
 * 000000014033926C: lea     rax, [rsi+r9]
 * 0000000140339270: mov     [rsi+8E0h], rax
 * 0000000140339277: lea     rax, [r11+r13]
 * 000000014033927B: mov     [rsi+8E8h], rax
 * 0000000140339282: movsxd  rax, dword ptr [r13+0]
 * 0000000140339286: mov     [rsi+8F0h], rax
 * 000000014033928D: mov     [rsi+8F8h], rcx
 * 0000000140339294: mov     [rsi+8D8h], r12d
 * 000000014033929B: mov     eax, [r13+28h]
 * 000000014033929F: test    al, 8
 * 00000001403392A1: jz      loc_14033362F
 * 00000001403392A7: mov     rax, [r8+78h]
 * 00000001403392AB: mov     rdx, [r13+20h]
 * 00000001403392AF: mov     rcx, [rax]
 * 00000001403392B2: cmp     rcx, rdx
 * 00000001403392B5: jz      loc_14033362F
 * 00000001403392BB: mov     rax, [rsi+580h]
 * 00000001403392C2: mov     [rax], rcx
 * 00000001403392C5: mov     dword ptr [rax+10h], 100h
 * 00000001403392CC: mov     eax, [rsi+8D8h]
 * 00000001403392D2: test    eax, eax
 * 00000001403392D4: jnz     short loc_1403392EA
 * 00000001403392D6: mov     rax, [rsi+580h]
 * 00000001403392DD: xor     rcx, rdx
 * 00000001403392E0: mov     [rax+18h], rcx
 * 00000001403392E4: mov     eax, [rsi+8D8h]
 * 00000001403392EA: mov     rcx, [r8+78h]
 * 00000001403392EE: test    eax, eax
 * 00000001403392F0: jnz     loc_14033362F
 * 00000001403392F6: lea     rax, [rsi+r9]
 * 00000001403392FA: mov     [rsi+8E0h], rax
 * 0000000140339301: lea     rax, [r11+r13]
 * 0000000140339305: mov     [rsi+8E8h], rax
 * 000000014033930C: movsxd  rax, dword ptr [r13+0]
 * 0000000140339310: mov     [rsi+8F0h], rax
 * 0000000140339317: mov     [rsi+8F8h], rcx
 * 000000014033931E: mov     [rsi+8D8h], r12d
 * 0000000140339325: jmp     loc_14033362F
 * 000000014033932A: xor     eax, eax
 * 000000014033932C: xor     r10d, r10d
 * 000000014033932F: mov     [rsi+80Ch], eax
 * 0000000140339335: lea     r12d, [r10+1]
 * 0000000140339339: jmp     loc_140339202
 * 000000014033933E: mov     r14, [r13+8]
 * 0000000140339342: mov     r8d, [r13+10h]
 * 0000000140339346: mov     r9, r14
 * 0000000140339349: add     [rsi+810h], r8d
 * 0000000140339350: mov     rax, r14
 * 0000000140339353: mov     r11d, [rsi+7FCh]
 * 000000014033935A: mov     r15, [rsi+800h]
 * 0000000140339361: lea     rcx, [r14+r8]
 * 0000000140339365: cmp     r14, rcx
 * 0000000140339368: jnb     short loc_14033937A
 * 000000014033936A: mov     edx, 40h ; '@'
 * 000000014033936F: prefetchnta byte ptr [rax]
 * 0000000140339372: add     rax, rdx
 * 0000000140339375: cmp     rax, rcx
 * 0000000140339378: jb      short loc_14033936F
 * 000000014033937A: mov     r10d, r8d
 * 000000014033937D: mov     rbx, r15
 * 0000000140339380: shr     r10d, 7
 * 0000000140339384: mov     r13d, 1
 * 000000014033938A: mov     r12d, 0FFFFFFFFh
 * 0000000140339390: test    r10d, r10d
 * 0000000140339393: jz      short loc_1403393FA
 * 0000000140339395: mov     rsi, 7010008004002001h
 * 000000014033939F: mov     edx, 8
 * 00000001403393A4: mov     rax, [r9]
 * 00000001403393A7: mov     ecx, r11d
 * 00000001403393AA: xor     rax, rbx
 * 00000001403393AD: mov     rbx, [r9+8]
 * 00000001403393B1: rol     rax, cl
 * 00000001403393B4: add     r9, 10h
 * 00000001403393B8: xor     rbx, rax
 * 00000001403393BB: rol     rbx, cl
 * 00000001403393BE: sub     rdx, r13
 * 00000001403393C1: jnz     short loc_1403393A4
 * 00000001403393C3: mov     rcx, r9
 * 00000001403393C6: sub     rcx, r14
 * 00000001403393C9: xor     rcx, r15
 * 00000001403393CC: mov     rax, rcx
 * 00000001403393CF: rol     rax, 11h
 * 00000001403393D3: xor     rcx, rax
 * 00000001403393D6: mov     rax, rsi
 * 00000001403393D9: mul     rcx
 * 00000001403393DC: xor     r11d, eax
 * 00000001403393DF: mov     [rbp+20F0h+var_1A98], rdx
 * 00000001403393E6: xor     r11d, edx
 * 00000001403393E9: and     r11d, 3Fh
 * 00000001403393ED: cmovz   r11d, r13d
 * 00000001403393F1: add     r10d, r12d
 * 00000001403393F4: jnz     short loc_14033939F
 * 00000001403393F6: mov     rsi, [rbp+20F0h+var_20E0]
 * 00000001403393FA: and     r8d, 7Fh
 * 00000001403393FE: cmp     r8d, 8
 * 0000000140339402: jb      short loc_140339421
 * 0000000140339404: mov     edx, r8d
 * 0000000140339407: shr     rdx, 3
 * 000000014033940B: xor     rbx, [r9]
 * 000000014033940E: mov     ecx, r11d
 * 0000000140339411: rol     rbx, cl
 * 0000000140339414: add     r9, 8
 * 0000000140339418: add     r8d, 0FFFFFFF8h
 * 000000014033941C: sub     rdx, r13
 * 000000014033941F: jnz     short loc_14033940B
 * 0000000140339421: test    r8d, r8d
 * 0000000140339424: jz      short loc_14033943B
 * 0000000140339426: movzx   eax, byte ptr [r9]
 * 000000014033942A: mov     ecx, r11d
 * 000000014033942D: xor     rbx, rax
 * 0000000140339430: add     r9, r13
 * 0000000140339433: rol     rbx, cl
 * 0000000140339436: add     r8d, r12d
 * 0000000140339439: jnz     short loc_140339426
 * 000000014033943B: mov     rax, rbx
 * 000000014033943E: shr     rax, 1Fh
 * 0000000140339442: xor     r10d, r10d
 * 0000000140339445: jmp     short loc_14033944D
 * 0000000140339447: xor     ebx, eax
 * 0000000140339449: shr     rax, 1Fh
 * 000000014033944D: test    rax, rax
 * 0000000140339450: jnz     short loc_140339447
 * 0000000140339452: mov     rax, [rbp+20F0h+var_20D0]
 * 0000000140339456: btr     ebx, 1Fh
 * 000000014033945A: mov     r13d, r10d
 * 000000014033945D: cmp     ebx, [rax+14h]
 * 0000000140339460: jz      loc_1403391EE
 * 0000000140339466: cmp     [rax], r10d
 * 0000000140339469: jnz     short loc_140339478
 * 000000014033946B: cmp     [rax+18h], r10d
 * 000000014033946F: mov     ecx, 1
 * 0000000140339474: cmovnz  r13d, ecx
 * 0000000140339478: mov     ecx, [rax+10h]
 * 000000014033947B: mov     rdx, [rax+8]
 * 000000014033947F: test    rcx, rcx
 * 0000000140339482: jz      loc_140339543
 * 0000000140339488: mov     eax, [rsi+974h]
 * 000000014033948E: mov     r8d, 40h ; '@'
 * 0000000140339494: test    r8b, al
 * 0000000140339497: jz      loc_140339543
 * 000000014033949D: mov     r12, cr8
 * 00000001403394A1: lea     eax, [r8-3Eh]
 * 00000001403394A5: mov     cr8, rax
 * 00000001403394A9: lea     rax, [rcx-1]
 * 00000001403394AD: mov     r14, rdx
 * 00000001403394B0: and     r14, 0FFFFFFFFFFFFF000h
 * 00000001403394B7: add     rax, rdx
 * 00000001403394BA: mov     ecx, 0FFFh
 * 00000001403394BF: or      rax, rcx
 * 00000001403394C2: mov     [rbp+20F0h+var_20C8], rax
 * 00000001403394C6: lea     rax, [r14-1]
 * 00000001403394CA: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403394CE: movzx   r15d, r12b
 * 00000001403394D2: mov     rax, [rsi+460h]
 * 00000001403394D9: xor     edx, edx
 * 00000001403394DB: mov     rcx, r14
 * 00000001403394DE: call    KeGuardDispatchICall
 * 00000001403394E3: cmp     eax, 0C000022Dh
 * 00000001403394E8: jnz     short loc_140339511
 * 00000001403394EA: test    r13d, r13d
 * 00000001403394ED: jnz     short loc_14033953C
 * 00000001403394EF: lea     eax, [r13+1]
 * 00000001403394F3: cmp     r12b, al
 * 00000001403394F6: ja      short loc_14033951A
 * 00000001403394F8: movzx   r15d, r12b
 * 00000001403394FC: mov     cr8, r15
 * 0000000140339500: mov     al, [r14]
 * 0000000140339503: mov     rax, cr8
 * 0000000140339507: lea     eax, [r13+2]
 * 000000014033950B: mov     cr8, rax
 * 000000014033950F: jmp     short loc_1403394D2
 * 0000000140339511: xor     r10d, r10d
 * 0000000140339514: test    eax, eax
 * 0000000140339516: js      short loc_14033953F
 * 0000000140339518: jmp     short loc_14033951D
 * 000000014033951A: xor     r10d, r10d
 * 000000014033951D: mov     rax, [rbp+20F0h+var_20F0]
 * 0000000140339521: mov     r8d, 1000h
 * 0000000140339527: add     rax, r8
 * 000000014033952A: add     r14, r8
 * 000000014033952D: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140339531: cmp     rax, [rbp+20F0h+var_20C8]
 * 0000000140339535: jnz     short loc_1403394CE
 * 0000000140339537: jmp     loc_1403391EA
 * 000000014033953C: xor     r10d, r10d
 * 000000014033953F: mov     cr8, r15
 * 0000000140339543: mov     r13, [rbp+20F0h+var_20D0]
 * 0000000140339547: mov     eax, [rsi+8D8h]
 * 000000014033954D: mov     edx, [r13+14h]
 * 0000000140339551: test    eax, eax
 * 0000000140339553: jnz     loc_14033917E
 * 0000000140339559: mov     ecx, ebx
 * 000000014033955B: xor     rcx, rdx
 * 000000014033955E: jmp     loc_14033916D
 * 0000000140339563: mov     rdx, r13
 * 0000000140339566: mov     rcx, rsi
 * 0000000140339569: call    sub_1401AD9DC
 * 000000014033956E: jmp     loc_140333DB4
 * 0000000140339573: mov     rdx, r13
 * 0000000140339576: mov     rcx, rsi
 * 0000000140339579: call    sub_1401AE904
 * 000000014033957E: jmp     loc_140333DB4
 * 0000000140339583: mov     eax, [rsi+818h]
 * 0000000140339589: test    dl, al
 * 000000014033958B: jz      loc_140333318
 * 0000000140339591: xor     eax, eax
 * 0000000140339593: cmp     [rsi+960h], rax
 * 000000014033959A: jz      short loc_1403395D8
 * 000000014033959C: mov     eax, [rsi+974h]
 * 00000001403395A2: test    al, 4
 * 00000001403395A4: jnz     short loc_1403395D6
 * 00000001403395A6: mov     rax, [rsi+3C8h]
 * 00000001403395AD: lea     rdx, [rbp+20F0h+var_1C50]
 * 00000001403395B4: xor     r9d, r9d
 * 00000001403395B7: xor     r8d, r8d
 * 00000001403395BA: lea     ecx, [r9+1Ah]
 * 00000001403395BE: call    KeGuardDispatchICall
 * 00000001403395C3: mov     rbx, [rbp+20F0h+var_1C50]
 * 00000001403395CA: xor     ecx, ecx
 * 00000001403395CC: test    eax, eax
 * 00000001403395CE: cmovs   rbx, rcx
 * 00000001403395D2: xor     eax, eax
 * 00000001403395D4: jmp     short loc_1403395DB
 * 00000001403395D6: xor     eax, eax
 * 00000001403395D8: mov     rbx, rax
 * 00000001403395DB: mov     r15d, eax
 * 00000001403395DE: mov     [rbp+20F0h+var_20E8], eax
 * 00000001403395E1: mov     rax, [rsi+3A8h]
 * 00000001403395E8: xor     ecx, ecx
 * 00000001403395EA: mov     [rbp+20F0h+var_20F0], rbx
 * 00000001403395EE: call    KeGuardDispatchICall
 * 00000001403395F3: mov     r13, rax
 * 00000001403395F6: mov     r14d, 1
 * 00000001403395FC: test    rax, rax
 * 00000001403395FF: jz      loc_140339D32
 * 0000000140339605: mov     rcx, r13
 * 0000000140339608: cmp     rbx, r13
 * 000000014033960B: jnz     loc_140339964
 * 0000000140339611: mov     rdi, [rbp+20F0h+var_20D0]
 * 0000000140339615: mov     rax, [rsi+398h]
 * 000000014033961C: mov     r14, rdi
 * 000000014033961F: call    KeGuardDispatchICall
 * 0000000140339624: test    eax, eax
 * 0000000140339626: js      loc_140339D03
 * 000000014033962C: mov     rax, [rsi+3D8h]
 * 0000000140339633: mov     rcx, r13
 * 0000000140339636: call    KeGuardDispatchICall
 * 000000014033963B: mov     bl, al
 * 000000014033963D: mov     [rbp+20F0h+var_1F8F], al
 * 0000000140339643: mov     rax, [rsi+3E0h]
 * 000000014033964A: lea     rdx, [rbp+20F0h+var_2050]
 * 0000000140339651: mov     rcx, r13
 * 0000000140339654: call    KeGuardDispatchICall
 * 0000000140339659: mov     r15b, al
 * 000000014033965C: mov     byte ptr [rbp+20F0h+var_2060], al
 * 0000000140339662: mov     rax, [rsi+3E8h]
 * 0000000140339669: mov     rcx, r13
 * 000000014033966C: call    KeGuardDispatchICall
 * 0000000140339671: xor     r8d, r8d
 * 0000000140339674: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140339678: cmp     bl, 61h ; 'a'
 * 000000014033967B: jz      short loc_1403396EB
 * 000000014033967D: mov     eax, [rsi+8D8h]
 * 0000000140339683: test    eax, eax
 * 0000000140339685: jnz     short loc_1403396EB
 * 0000000140339687: mov     rax, [rsi+580h]
 * 000000014033968E: movzx   ecx, bl
 * 0000000140339691: xor     rcx, 61h
 * 0000000140339695: mov     [rax+18h], rcx
 * 0000000140339699: mov     eax, [rsi+8D8h]
 * 000000014033969F: test    eax, eax
 * 00000001403396A1: jnz     short loc_1403396EB
 * 00000001403396A3: mov     r12, 0A3A03F5891C8B4E8h
 * 00000001403396AD: lea     r10d, [r8+1]
 * 00000001403396B1: mov     r11, 0B3B74BDEE4453415h
 * 00000001403396BB: lea     rax, [rsi+r12]
 * 00000001403396BF: mov     [rsi+8E0h], rax
 * 00000001403396C6: lea     rax, [rdi+r11]
 * 00000001403396CA: mov     [rsi+8E8h], rax
 * 00000001403396D1: movsxd  rax, dword ptr [rdi]
 * 00000001403396D4: mov     [rsi+8F0h], rax
 * 00000001403396DB: mov     [rsi+8F8h], r13
 * 00000001403396E2: mov     [rsi+8D8h], r10d
 * 00000001403396E9: jmp     short loc_140339705
 * 00000001403396EB: mov     r12, 0A3A03F5891C8B4E8h
 * 00000001403396F5: mov     r11, 0B3B74BDEE4453415h
 * 00000001403396FF: mov     r10d, 1
 * 0000000140339705: movzx   ecx, bl
 * 0000000140339708: mov     dl, r8b
 * 000000014033970B: and     ecx, 7
 * 000000014033970E: mov     r9b, r8b
 * 0000000140339711: sub     ecx, 1
 * 0000000140339714: jz      short loc_140339766
 * 0000000140339716: cmp     ecx, 1
 * 0000000140339719: jz      short loc_14033975A
 * 000000014033971B: xor     eax, eax
 * 000000014033971D: test    bl, 7
 * 0000000140339720: jz      short loc_14033976A
 * 0000000140339722: cmp     [rsi+8D8h], eax
 * 0000000140339728: jnz     short loc_14033976A
 * 000000014033972A: lea     rax, [rsi+r12]
 * 000000014033972E: mov     [rsi+8E0h], rax
 * 0000000140339735: lea     rax, [rdi+r11]
 * 0000000140339739: mov     [rsi+8E8h], rax
 * 0000000140339740: movsxd  rax, dword ptr [rdi]
 * 0000000140339743: mov     [rsi+8F0h], rax
 * 000000014033974A: mov     [rsi+8F8h], r13
 * 0000000140339751: mov     [rsi+8D8h], r10d
 * 0000000140339758: jmp     short loc_140339768
 * 000000014033975A: mov     eax, 10h
 * 000000014033975F: mov     dl, al
 * 0000000140339761: mov     r9b, al
 * 0000000140339764: jmp     short loc_140339768
 * 0000000140339766: mov     dl, 30h ; '0'
 * 0000000140339768: xor     eax, eax
 * 000000014033976A: mov     r8, [rsi+5B8h]
 * 0000000140339771: movzx   ecx, bl
 * 0000000140339774: shr     rcx, 4
 * 0000000140339778: or      dl, [r8+rcx*2]
 * 000000014033977C: cmp     dl, r15b
 * 000000014033977F: jz      short loc_1403397B7
 * 0000000140339781: cmp     [rsi+8D8h], eax
 * 0000000140339787: jnz     short loc_1403397B7
 * 0000000140339789: lea     rax, [rsi+r12]
 * 000000014033978D: mov     [rsi+8E0h], rax
 * 0000000140339794: lea     rax, [rdi+r11]
 * 0000000140339798: mov     [rsi+8E8h], rax
 * 000000014033979F: movsxd  rax, dword ptr [rdi]
 * 00000001403397A2: mov     [rsi+8F0h], rax
 * 00000001403397A9: mov     [rsi+8F8h], r13
 * 00000001403397B0: mov     [rsi+8D8h], r10d
 * 00000001403397B7: mov     al, [r8+rcx*2+1]
 * 00000001403397BC: or      al, r9b
 * 00000001403397BF: cmp     al, [rbp+20F0h+var_2050]
 * 00000001403397C5: jz      short loc_1403397FF
 * 00000001403397C7: xor     eax, eax
 * 00000001403397C9: cmp     [rsi+8D8h], eax
 * 00000001403397CF: jnz     short loc_140339801
 * 00000001403397D1: lea     rax, [rsi+r12]
 * 00000001403397D5: mov     [rsi+8E0h], rax
 * 00000001403397DC: lea     rax, [rdi+r11]
 * 00000001403397E0: mov     [rsi+8E8h], rax
 * 00000001403397E7: movsxd  rax, dword ptr [rdi]
 * 00000001403397EA: mov     [rsi+8F0h], rax
 * 00000001403397F1: mov     [rsi+8F8h], r13
 * 00000001403397F8: mov     [rsi+8D8h], r10d
 * 00000001403397FF: xor     eax, eax
 * 0000000140339801: cmp     r13, [rsi+4D0h]
 * 0000000140339808: jz      short loc_14033981C
 * 000000014033980A: mov     rax, [rsi+3D0h]
 * 0000000140339811: mov     edx, r10d
 * 0000000140339814: mov     rcx, r13
 * 0000000140339817: call    KeGuardDispatchICall
 * 000000014033981C: mov     [rbp+20F0h+var_20D8], rax
 * 0000000140339820: mov     r15, rax
 * 0000000140339823: test    rax, rax
 * 0000000140339826: jz      loc_140339CE1
 * 000000014033982C: mov     rcx, [rax]
 * 000000014033982F: mov     rbx, rax
 * 0000000140339832: test    rcx, rcx
 * 0000000140339835: jz      loc_140339CD2
 * 000000014033983B: mov     dil, byte ptr [rbp+20F0h+var_2060]
 * 0000000140339842: mov     r15, [rbp+20F0h+var_20C8]
 * 0000000140339846: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 000000014033984A: mov     [rbx], rcx
 * 000000014033984D: mov     rax, [rsi+1D8h]
 * 0000000140339854: call    KeGuardDispatchICall
 * 0000000140339859: mov     rcx, [rbx+8]
 * 000000014033985D: movzx   edx, [rbp+20F0h+var_2050]
 * 0000000140339864: mov     r12, rcx
 * 0000000140339867: movzx   eax, dil
 * 000000014033986B: and     r12, 0FFFFFFFFFFFF0000h
 * 0000000140339872: cmp     r12, r15
 * 0000000140339875: cmovz   edx, eax
 * 0000000140339878: mov     rax, [rsi+3F0h]
 * 000000014033987F: shr     rcx, 6
 * 0000000140339883: and     cl, 0Fh
 * 0000000140339886: call    KeGuardDispatchICall
 * 000000014033988B: xor     r9d, r9d
 * 000000014033988E: test    eax, eax
 * 0000000140339890: jnz     loc_14033994F
 * 0000000140339896: test    dword ptr [rsi+970h], 40000000h
 * 00000001403398A0: lea     r10d, [r9+1]
 * 00000001403398A4: jz      short loc_1403398EE
 * 00000001403398A6: mov     rcx, [rsi+0A50h]
 * 00000001403398AD: lea     edx, [rax+30h]
 * 00000001403398B0: lea     r8d, [r9+6]
 * 00000001403398B4: mov     rax, [r14]
 * 00000001403398B7: add     edx, 0FFFFFFF8h
 * 00000001403398BA: mov     [rcx], rax
 * 00000001403398BD: add     r14, 8
 * 00000001403398C1: add     rcx, 8
 * 00000001403398C5: sub     r8, r10
 * 00000001403398C8: jnz     short loc_1403398B4
 * 00000001403398CA: test    edx, edx
 * 00000001403398CC: jz      short loc_1403398E7
 * 00000001403398CE: mov     r9d, 0FFFFFFFFh
 * 00000001403398D4: mov     al, [r14]
 * 00000001403398D7: add     r14, r10
 * 00000001403398DA: mov     [rcx], al
 * 00000001403398DC: add     rcx, r10
 * 00000001403398DF: add     edx, r9d
 * 00000001403398E2: jnz     short loc_1403398D4
 * 00000001403398E4: xor     r9d, r9d
 * 00000001403398E7: mov     r14, [rsi+0A50h]
 * 00000001403398EE: mov     [r14+18h], r12
 * 00000001403398F2: mov     rax, [rbx]
 * 00000001403398F5: mov     [r14+20h], rax
 * 00000001403398F9: mov     eax, [rbx+8]
 * 00000001403398FC: shr     rax, 6
 * 0000000140339900: and     al, 0Fh
 * 0000000140339902: mov     [r14+28h], al
 * 0000000140339906: cmp     [rsi+8D8h], r9d
 * 000000014033990D: jnz     short loc_14033994F
 * 000000014033990F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339919: add     rax, rsi
 * 000000014033991C: mov     [rsi+8E0h], rax
 * 0000000140339923: mov     rax, 0B3B74BDEE4453415h
 * 000000014033992D: add     rax, r14
 * 0000000140339930: mov     [rsi+8E8h], rax
 * 0000000140339937: movsxd  rax, dword ptr [r14]
 * 000000014033993A: mov     [rsi+8F0h], rax
 * 0000000140339941: mov     [rsi+8F8h], r13
 * 0000000140339948: mov     [rsi+8D8h], r10d
 * 000000014033994F: add     rbx, 30h ; '0'
 * 0000000140339953: mov     rcx, [rbx]
 * 0000000140339956: test    rcx, rcx
 * 0000000140339959: jnz     loc_140339846
 * 000000014033995F: jmp     loc_140339CCE
 * 0000000140339964: mov     rax, [rsi+3C0h]
 * 000000014033996B: call    KeGuardDispatchICall
 * 0000000140339970: xor     edi, edi
 * 0000000140339972: test    eax, eax
 * 0000000140339974: jz      loc_140339D09
 * 000000014033997A: mov     r12, [rbp+20F0h+var_20D0]
 * 000000014033997E: mov     rcx, r13
 * 0000000140339981: mov     rax, [rsi+398h]
 * 0000000140339988: mov     r14, r12
 * 000000014033998B: call    KeGuardDispatchICall
 * 0000000140339990: test    eax, eax
 * 0000000140339992: js      loc_140339D03
 * 0000000140339998: mov     rax, [rsi+3D8h]
 * 000000014033999F: mov     rcx, r13
 * 00000001403399A2: call    KeGuardDispatchICall
 * 00000001403399A7: mov     bl, al
 * 00000001403399A9: mov     [rbp+20F0h+var_1F90], al
 * 00000001403399AF: mov     rax, [rsi+3E0h]
 * 00000001403399B6: lea     rdx, [rbp+20F0h+var_204F]
 * 00000001403399BD: mov     rcx, r13
 * 00000001403399C0: call    KeGuardDispatchICall
 * 00000001403399C5: mov     dil, al
 * 00000001403399C8: mov     rcx, r13
 * 00000001403399CB: mov     rax, [rsi+3E8h]
 * 00000001403399D2: call    KeGuardDispatchICall
 * 00000001403399D7: xor     r10d, r10d
 * 00000001403399DA: mov     [rbp+20F0h+var_20C8], rax
 * 00000001403399DE: cmp     bl, 61h ; 'a'
 * 00000001403399E1: jz      short loc_140339A52
 * 00000001403399E3: mov     eax, [rsi+8D8h]
 * 00000001403399E9: test    eax, eax
 * 00000001403399EB: jnz     short loc_140339A52
 * 00000001403399ED: mov     rax, [rsi+580h]
 * 00000001403399F4: movzx   ecx, bl
 * 00000001403399F7: xor     rcx, 61h
 * 00000001403399FB: mov     [rax+18h], rcx
 * 00000001403399FF: mov     eax, [rsi+8D8h]
 * 0000000140339A05: test    eax, eax
 * 0000000140339A07: jnz     short loc_140339A52
 * 0000000140339A09: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140339A13: lea     r11d, [r10+1]
 * 0000000140339A17: mov     r15, 0B3B74BDEE4453415h
 * 0000000140339A21: lea     rax, [rsi+r8]
 * 0000000140339A25: mov     [rsi+8E0h], rax
 * 0000000140339A2C: lea     rax, [r12+r15]
 * 0000000140339A30: mov     [rsi+8E8h], rax
 * 0000000140339A37: movsxd  rax, dword ptr [r12]
 * 0000000140339A3B: mov     [rsi+8F0h], rax
 * 0000000140339A42: mov     [rsi+8F8h], r13
 * 0000000140339A49: mov     [rsi+8D8h], r11d
 * 0000000140339A50: jmp     short loc_140339A6C
 * 0000000140339A52: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140339A5C: mov     r15, 0B3B74BDEE4453415h
 * 0000000140339A66: mov     r11d, 1
 * 0000000140339A6C: movzx   ecx, bl
 * 0000000140339A6F: mov     dl, r10b
 * 0000000140339A72: and     ecx, 7
 * 0000000140339A75: mov     r9b, r10b
 * 0000000140339A78: sub     ecx, 1
 * 0000000140339A7B: jz      short loc_140339ACD
 * 0000000140339A7D: cmp     ecx, 1
 * 0000000140339A80: jz      short loc_140339AC1
 * 0000000140339A82: test    bl, 7
 * 0000000140339A85: jz      short loc_140339ACF
 * 0000000140339A87: cmp     [rsi+8D8h], r10d
 * 0000000140339A8E: jnz     short loc_140339ACF
 * 0000000140339A90: lea     rax, [rsi+r8]
 * 0000000140339A94: mov     [rsi+8E0h], rax
 * 0000000140339A9B: lea     rax, [r12+r15]
 * 0000000140339A9F: mov     [rsi+8E8h], rax
 * 0000000140339AA6: movsxd  rax, dword ptr [r12]
 * 0000000140339AAA: mov     [rsi+8F0h], rax
 * 0000000140339AB1: mov     [rsi+8F8h], r13
 * 0000000140339AB8: mov     [rsi+8D8h], r11d
 * 0000000140339ABF: jmp     short loc_140339ACF
 * 0000000140339AC1: mov     eax, 10h
 * 0000000140339AC6: mov     dl, al
 * 0000000140339AC8: mov     r9b, al
 * 0000000140339ACB: jmp     short loc_140339ACF
 * 0000000140339ACD: mov     dl, 30h ; '0'
 * 0000000140339ACF: mov     r8, [rsi+5B8h]
 * 0000000140339AD6: movzx   ecx, bl
 * 0000000140339AD9: shr     rcx, 4
 * 0000000140339ADD: mov     al, [r8+rcx*2]
 * 0000000140339AE1: or      al, dl
 * 0000000140339AE3: mov     rdx, 0A3A03F5891C8B4E8h
 * 0000000140339AED: cmp     al, dil
 * 0000000140339AF0: jz      short loc_140339B2A
 * 0000000140339AF2: cmp     [rsi+8D8h], r10d
 * 0000000140339AF9: jnz     short loc_140339B2A
 * 0000000140339AFB: lea     rax, [rsi+rdx]
 * 0000000140339AFF: mov     [rsi+8E0h], rax
 * 0000000140339B06: lea     rax, [r12+r15]
 * 0000000140339B0A: mov     [rsi+8E8h], rax
 * 0000000140339B11: movsxd  rax, dword ptr [r12]
 * 0000000140339B15: mov     [rsi+8F0h], rax
 * 0000000140339B1C: mov     [rsi+8F8h], r13
 * 0000000140339B23: mov     [rsi+8D8h], r11d
 * 0000000140339B2A: mov     al, [r8+rcx*2+1]
 * 0000000140339B2F: or      al, r9b
 * 0000000140339B32: cmp     al, [rbp+20F0h+var_204F]
 * 0000000140339B38: jz      short loc_140339B72
 * 0000000140339B3A: cmp     [rsi+8D8h], r10d
 * 0000000140339B41: jnz     short loc_140339B72
 * 0000000140339B43: lea     rax, [rsi+rdx]
 * 0000000140339B47: mov     [rsi+8E0h], rax
 * 0000000140339B4E: lea     rax, [r12+r15]
 * 0000000140339B52: mov     [rsi+8E8h], rax
 * 0000000140339B59: movsxd  rax, dword ptr [r12]
 * 0000000140339B5D: mov     [rsi+8F0h], rax
 * 0000000140339B64: mov     [rsi+8F8h], r13
 * 0000000140339B6B: mov     [rsi+8D8h], r11d
 * 0000000140339B72: cmp     r13, [rsi+4D0h]
 * 0000000140339B79: jz      short loc_140339B92
 * 0000000140339B7B: mov     rax, [rsi+3D0h]
 * 0000000140339B82: mov     edx, r11d
 * 0000000140339B85: mov     rcx, r13
 * 0000000140339B88: call    KeGuardDispatchICall
 * 0000000140339B8D: mov     r15, rax
 * 0000000140339B90: jmp     short loc_140339B95
 * 0000000140339B92: mov     r15, r10
 * 0000000140339B95: mov     [rbp+20F0h+var_20D8], r15
 * 0000000140339B99: test    r15, r15
 * 0000000140339B9C: jz      loc_140339CE1
 * 0000000140339BA2: mov     rcx, [r15]
 * 0000000140339BA5: mov     rbx, r15
 * 0000000140339BA8: test    rcx, rcx
 * 0000000140339BAB: jz      loc_140339CD2
 * 0000000140339BB1: mov     r15, [rbp+20F0h+var_20C8]
 * 0000000140339BB5: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140339BB9: mov     [rbx], rcx
 * 0000000140339BBC: mov     rax, [rsi+1D8h]
 * 0000000140339BC3: call    KeGuardDispatchICall
 * 0000000140339BC8: mov     rcx, [rbx+8]
 * 0000000140339BCC: movzx   edx, [rbp+20F0h+var_204F]
 * 0000000140339BD3: mov     r12, rcx
 * 0000000140339BD6: movzx   eax, dil
 * 0000000140339BDA: and     r12, 0FFFFFFFFFFFF0000h
 * 0000000140339BE1: cmp     r12, r15
 * 0000000140339BE4: cmovz   edx, eax
 * 0000000140339BE7: mov     rax, [rsi+3F0h]
 * 0000000140339BEE: shr     rcx, 6
 * 0000000140339BF2: and     cl, 0Fh
 * 0000000140339BF5: call    KeGuardDispatchICall
 * 0000000140339BFA: xor     r9d, r9d
 * 0000000140339BFD: test    eax, eax
 * 0000000140339BFF: jnz     loc_140339CBE
 * 0000000140339C05: test    dword ptr [rsi+970h], 40000000h
 * 0000000140339C0F: lea     r10d, [r9+1]
 * 0000000140339C13: jz      short loc_140339C5D
 * 0000000140339C15: mov     rcx, [rsi+0A50h]
 * 0000000140339C1C: lea     edx, [rax+30h]
 * 0000000140339C1F: lea     r8d, [r9+6]
 * 0000000140339C23: mov     rax, [r14]
 * 0000000140339C26: add     edx, 0FFFFFFF8h
 * 0000000140339C29: mov     [rcx], rax
 * 0000000140339C2C: add     r14, 8
 * 0000000140339C30: add     rcx, 8
 * 0000000140339C34: sub     r8, r10
 * 0000000140339C37: jnz     short loc_140339C23
 * 0000000140339C39: test    edx, edx
 * 0000000140339C3B: jz      short loc_140339C56
 * 0000000140339C3D: mov     r9d, 0FFFFFFFFh
 * 0000000140339C43: mov     al, [r14]
 * 0000000140339C46: add     r14, r10
 * 0000000140339C49: mov     [rcx], al
 * 0000000140339C4B: add     rcx, r10
 * 0000000140339C4E: add     edx, r9d
 * 0000000140339C51: jnz     short loc_140339C43
 * 0000000140339C53: xor     r9d, r9d
 * 0000000140339C56: mov     r14, [rsi+0A50h]
 * 0000000140339C5D: mov     [r14+18h], r12
 * 0000000140339C61: mov     rax, [rbx]
 * 0000000140339C64: mov     [r14+20h], rax
 * 0000000140339C68: mov     eax, [rbx+8]
 * 0000000140339C6B: shr     rax, 6
 * 0000000140339C6F: and     al, 0Fh
 * 0000000140339C71: mov     [r14+28h], al
 * 0000000140339C75: cmp     [rsi+8D8h], r9d
 * 0000000140339C7C: jnz     short loc_140339CBE
 * 0000000140339C7E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339C88: add     rax, rsi
 * 0000000140339C8B: mov     [rsi+8E0h], rax
 * 0000000140339C92: mov     rax, 0B3B74BDEE4453415h
 * 0000000140339C9C: add     rax, r14
 * 0000000140339C9F: mov     [rsi+8E8h], rax
 * 0000000140339CA6: movsxd  rax, dword ptr [r14]
 * 0000000140339CA9: mov     [rsi+8F0h], rax
 * 0000000140339CB0: mov     [rsi+8F8h], r13
 * 0000000140339CB7: mov     [rsi+8D8h], r10d
 * 0000000140339CBE: add     rbx, 30h ; '0'
 * 0000000140339CC2: mov     rcx, [rbx]
 * 0000000140339CC5: test    rcx, rcx
 * 0000000140339CC8: jnz     loc_140339BB5
 * 0000000140339CCE: mov     r15, [rbp+20F0h+var_20D8]
 * 0000000140339CD2: mov     rax, [rsi+0F8h]
 * 0000000140339CD9: mov     rcx, r15
 * 0000000140339CDC: call    KeGuardDispatchICall
 * 0000000140339CE1: mov     rax, [rsi+3A0h]
 * 0000000140339CE8: mov     rcx, r13
 * 0000000140339CEB: call    KeGuardDispatchICall
 * 0000000140339CF0: mov     r15d, [rbp+20F0h+var_20E8]
 * 0000000140339CF4: mov     eax, 8000h
 * 0000000140339CF9: add     [rsi+810h], eax
 * 0000000140339CFF: mov     rbx, [rbp+20F0h+var_20F0]
 * 0000000140339D03: mov     r14d, 1
 * 0000000140339D09: mov     rax, [rsi+3A8h]
 * 0000000140339D10: add     r15d, r14d
 * 0000000140339D13: mov     rcx, r13
 * 0000000140339D16: mov     [rbp+20F0h+var_20E8], r15d
 * 0000000140339D1A: call    KeGuardDispatchICall
 * 0000000140339D1F: mov     r13, rax
 * 0000000140339D22: test    rax, rax
 * 0000000140339D25: jnz     loc_140339605
 * 0000000140339D2B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140339D32: mov     r12, [rsi+4D0h]
 * 0000000140339D39: mov     rax, [rsi+398h]
 * 0000000140339D40: mov     rcx, r12
 * 0000000140339D43: call    KeGuardDispatchICall
 * 0000000140339D48: xor     r10d, r10d
 * 0000000140339D4B: test    eax, eax
 * 0000000140339D4D: js      loc_14033A0CA
 * 0000000140339D53: mov     rax, [rsi+3D8h]
 * 0000000140339D5A: mov     rcx, r12
 * 0000000140339D5D: call    KeGuardDispatchICall
 * 0000000140339D62: mov     bl, al
 * 0000000140339D64: mov     byte ptr [rbp+20F0h+var_2044], al
 * 0000000140339D6A: mov     rax, [rsi+3E0h]
 * 0000000140339D71: lea     rdx, [rbp+20F0h+var_204E]
 * 0000000140339D78: mov     rcx, r12
 * 0000000140339D7B: call    KeGuardDispatchICall
 * 0000000140339D80: mov     r13b, al
 * 0000000140339D83: mov     rcx, r12
 * 0000000140339D86: mov     rax, [rsi+3E8h]
 * 0000000140339D8D: call    KeGuardDispatchICall
 * 0000000140339D92: xor     r11d, r11d
 * 0000000140339D95: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140339D99: cmp     bl, 72h ; 'r'
 * 0000000140339D9C: jz      short loc_140339E0B
 * 0000000140339D9E: mov     eax, [rsi+8D8h]
 * 0000000140339DA4: test    eax, eax
 * 0000000140339DA6: jnz     short loc_140339E0B
 * 0000000140339DA8: mov     rax, [rsi+580h]
 * 0000000140339DAF: movzx   ecx, bl
 * 0000000140339DB2: xor     rcx, 72h
 * 0000000140339DB6: mov     [rax+18h], rcx
 * 0000000140339DBA: mov     eax, [rsi+8D8h]
 * 0000000140339DC0: test    eax, eax
 * 0000000140339DC2: jnz     short loc_140339E0B
 * 0000000140339DC4: mov     r10, [rbp+20F0h+var_20D0]
 * 0000000140339DC8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339DD2: add     rax, rsi
 * 0000000140339DD5: mov     r8, 0B3B74BDEE4453415h
 * 0000000140339DDF: mov     [rsi+8E0h], rax
 * 0000000140339DE6: lea     rax, [r10+r8]
 * 0000000140339DEA: mov     [rsi+8E8h], rax
 * 0000000140339DF1: movsxd  rax, dword ptr [r10]
 * 0000000140339DF4: mov     [rsi+8F0h], rax
 * 0000000140339DFB: mov     [rsi+8F8h], r12
 * 0000000140339E02: mov     [rsi+8D8h], r14d
 * 0000000140339E09: jmp     short loc_140339E19
 * 0000000140339E0B: mov     r10, [rbp+20F0h+var_20D0]
 * 0000000140339E0F: mov     r8, 0B3B74BDEE4453415h
 * 0000000140339E19: movzx   ecx, bl
 * 0000000140339E1C: mov     dl, r11b
 * 0000000140339E1F: and     ecx, 7
 * 0000000140339E22: mov     r9b, r11b
 * 0000000140339E25: sub     ecx, 1
 * 0000000140339E28: jz      short loc_140339E82
 * 0000000140339E2A: cmp     ecx, 1
 * 0000000140339E2D: jz      short loc_140339E76
 * 0000000140339E2F: test    bl, 7
 * 0000000140339E32: jz      short loc_140339E84
 * 0000000140339E34: cmp     [rsi+8D8h], r11d
 * 0000000140339E3B: jnz     short loc_140339E84
 * 0000000140339E3D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140339E47: add     rax, rsi
 * 0000000140339E4A: mov     [rsi+8E0h], rax
 * 0000000140339E51: lea     rax, [r10+r8]
 * 0000000140339E55: mov     [rsi+8E8h], rax
 * 0000000140339E5C: movsxd  rax, dword ptr [r10]
 * 0000000140339E5F: mov     [rsi+8F0h], rax
 * 0000000140339E66: mov     [rsi+8F8h], r12
 * 0000000140339E6D: mov     [rsi+8D8h], r14d
 * 0000000140339E74: jmp     short loc_140339E84
 * 0000000140339E76: mov     eax, 10h
 * 0000000140339E7B: mov     dl, al
 * 0000000140339E7D: mov     r9b, al
 * 0000000140339E80: jmp     short loc_140339E84
 * 0000000140339E82: mov     dl, 30h ; '0'
 * 0000000140339E84: mov     r8, [rsi+5B8h]
 * 0000000140339E8B: movzx   ecx, bl
 * 0000000140339E8E: mov     rbx, 0A3A03F5891C8B4E8h
 * 0000000140339E98: shr     rcx, 4
 * 0000000140339E9C: mov     al, [r8+rcx*2]
 * 0000000140339EA0: or      al, dl
 * 0000000140339EA2: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140339EAC: cmp     al, r13b
 * 0000000140339EAF: jz      short loc_140339EE8
 * 0000000140339EB1: cmp     [rsi+8D8h], r11d
 * 0000000140339EB8: jnz     short loc_140339EE8
 * 0000000140339EBA: lea     rax, [rsi+rbx]
 * 0000000140339EBE: mov     [rsi+8E0h], rax
 * 0000000140339EC5: lea     rax, [r10+rdx]
 * 0000000140339EC9: mov     [rsi+8E8h], rax
 * 0000000140339ED0: movsxd  rax, dword ptr [r10]
 * 0000000140339ED3: mov     [rsi+8F0h], rax
 * 0000000140339EDA: mov     [rsi+8F8h], r12
 * 0000000140339EE1: mov     [rsi+8D8h], r14d
 * 0000000140339EE8: mov     al, [r8+rcx*2+1]
 * 0000000140339EED: or      al, r9b
 * 0000000140339EF0: cmp     al, [rbp+20F0h+var_204E]
 * 0000000140339EF6: jz      short loc_140339F2F
 * 0000000140339EF8: cmp     [rsi+8D8h], r11d
 * 0000000140339EFF: jnz     short loc_140339F2F
 * 0000000140339F01: lea     rax, [rsi+rbx]
 * 0000000140339F05: mov     [rsi+8E0h], rax
 * 0000000140339F0C: lea     rax, [r10+rdx]
 * 0000000140339F10: mov     [rsi+8E8h], rax
 * 0000000140339F17: movsxd  rax, dword ptr [r10]
 * 0000000140339F1A: mov     [rsi+8F0h], rax
 * 0000000140339F21: mov     [rsi+8F8h], r12
 * 0000000140339F28: mov     [rsi+8D8h], r14d
 * 0000000140339F2F: cmp     r12, [rsi+4D0h]
 * 0000000140339F36: jz      short loc_140339F4F
 * 0000000140339F38: mov     rax, [rsi+3D0h]
 * 0000000140339F3F: mov     edx, r14d
 * 0000000140339F42: mov     rcx, r12
 * 0000000140339F45: call    KeGuardDispatchICall
 * 0000000140339F4A: mov     r14, rax
 * 0000000140339F4D: jmp     short loc_140339F52
 * 0000000140339F4F: mov     r14, r11
 * 0000000140339F52: mov     [rbp+20F0h+var_20D8], r14
 * 0000000140339F56: test    r14, r14
 * 0000000140339F59: jz      loc_14033A0AD
 * 0000000140339F5F: mov     rcx, [r14]
 * 0000000140339F62: mov     rbx, r14
 * 0000000140339F65: test    rcx, rcx
 * 0000000140339F68: jz      loc_14033A09E
 * 0000000140339F6E: mov     rdi, [rbp+20F0h+var_20C8]
 * 0000000140339F72: mov     r14, [rbp+20F0h+var_20D0]
 * 0000000140339F76: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140339F7A: mov     [rbx], rcx
 * 0000000140339F7D: mov     rax, [rsi+1D8h]
 * 0000000140339F84: call    KeGuardDispatchICall
 * 0000000140339F89: mov     rcx, [rbx+8]
 * 0000000140339F8D: movzx   edx, [rbp+20F0h+var_204E]
 * 0000000140339F94: mov     r15, rcx
 * 0000000140339F97: movzx   eax, r13b
 * 0000000140339F9B: and     r15, 0FFFFFFFFFFFF0000h
 * 0000000140339FA2: cmp     r15, rdi
 * 0000000140339FA5: cmovz   edx, eax
 * 0000000140339FA8: mov     rax, [rsi+3F0h]
 * 0000000140339FAF: shr     rcx, 6
 * 0000000140339FB3: and     cl, 0Fh
 * 0000000140339FB6: call    KeGuardDispatchICall
 * 0000000140339FBB: xor     r9d, r9d
 * 0000000140339FBE: test    eax, eax
 * 0000000140339FC0: jnz     loc_14033A07F
 * 0000000140339FC6: test    dword ptr [rsi+970h], 40000000h
 * 0000000140339FD0: lea     r10d, [r9+1]
 * 0000000140339FD4: jz      short loc_14033A01E
 * 0000000140339FD6: mov     rcx, [rsi+0A50h]
 * 0000000140339FDD: lea     edx, [rax+30h]
 * 0000000140339FE0: lea     r8d, [r9+6]
 * 0000000140339FE4: mov     rax, [r14]
 * 0000000140339FE7: add     edx, 0FFFFFFF8h
 * 0000000140339FEA: mov     [rcx], rax
 * 0000000140339FED: add     r14, 8
 * 0000000140339FF1: add     rcx, 8
 * 0000000140339FF5: sub     r8, r10
 * 0000000140339FF8: jnz     short loc_140339FE4
 * 0000000140339FFA: test    edx, edx
 * 0000000140339FFC: jz      short loc_14033A017
 * 0000000140339FFE: mov     r9d, 0FFFFFFFFh
 * 000000014033A004: mov     al, [r14]
 * 000000014033A007: add     r14, r10
 * 000000014033A00A: mov     [rcx], al
 * 000000014033A00C: add     rcx, r10
 * 000000014033A00F: add     edx, r9d
 * 000000014033A012: jnz     short loc_14033A004
 * 000000014033A014: xor     r9d, r9d
 * 000000014033A017: mov     r14, [rsi+0A50h]
 * 000000014033A01E: mov     [r14+18h], r15
 * 000000014033A022: mov     rax, [rbx]
 * 000000014033A025: mov     [r14+20h], rax
 * 000000014033A029: mov     eax, [rbx+8]
 * 000000014033A02C: shr     rax, 6
 * 000000014033A030: and     al, 0Fh
 * 000000014033A032: mov     [r14+28h], al
 * 000000014033A036: cmp     [rsi+8D8h], r9d
 * 000000014033A03D: jnz     short loc_14033A07F
 * 000000014033A03F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033A049: add     rax, rsi
 * 000000014033A04C: mov     [rsi+8E0h], rax
 * 000000014033A053: mov     rax, 0B3B74BDEE4453415h
 * 000000014033A05D: add     rax, r14
 * 000000014033A060: mov     [rsi+8E8h], rax
 * 000000014033A067: movsxd  rax, dword ptr [r14]
 * 000000014033A06A: mov     [rsi+8F0h], rax
 * 000000014033A071: mov     [rsi+8F8h], r12
 * 000000014033A078: mov     [rsi+8D8h], r10d
 * 000000014033A07F: add     rbx, 30h ; '0'
 * 000000014033A083: mov     rcx, [rbx]
 * 000000014033A086: test    rcx, rcx
 * 000000014033A089: jnz     loc_140339F76
 * 000000014033A08F: mov     r14, [rbp+20F0h+var_20D8]
 * 000000014033A093: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033A09A: mov     r15d, [rbp+20F0h+var_20E8]
 * 000000014033A09E: mov     rax, [rsi+0F8h]
 * 000000014033A0A5: mov     rcx, r14
 * 000000014033A0A8: call    KeGuardDispatchICall
 * 000000014033A0AD: mov     rax, [rsi+3A0h]
 * 000000014033A0B4: mov     rcx, r12
 * 000000014033A0B7: call    KeGuardDispatchICall
 * 000000014033A0BC: mov     eax, 8000h
 * 000000014033A0C1: add     [rsi+810h], eax
 * 000000014033A0C7: xor     r10d, r10d
 * 000000014033A0CA: mov     rcx, [rbp+20F0h+var_20F0]
 * 000000014033A0CE: test    rcx, rcx
 * 000000014033A0D1: jz      short loc_14033A0E2
 * 000000014033A0D3: mov     rax, [rsi+1D8h]
 * 000000014033A0DA: call    KeGuardDispatchICall
 * 000000014033A0DF: xor     r10d, r10d
 * 000000014033A0E2: shl     r15d, 8
 * 000000014033A0E6: add     [rsi+810h], r15d
 * 000000014033A0ED: jmp     loc_140333625
 * 000000014033A0F2: test    [r13+2Ah], dl
 * 000000014033A0F6: jz      short loc_14033A136
 * 000000014033A0F8: xor     r10d, r10d
 * 000000014033A0FB: cmp     [rsi+960h], r10
 * 000000014033A102: jz      loc_14033A30C
 * 000000014033A108: mov     ecx, [rsi+974h]
 * 000000014033A10E: test    cl, 4
 * 000000014033A111: jnz     loc_14033A30C
 * 000000014033A117: cmp     [rsi+80Ch], r10d
 * 000000014033A11E: jnz     loc_14033A303
 * 000000014033A124: mov     eax, ecx
 * 000000014033A126: shl     eax, 3
 * 000000014033A129: xor     eax, ecx
 * 000000014033A12B: and     eax, 20h
 * 000000014033A12E: xor     eax, ecx
 * 000000014033A130: mov     [rsi+974h], eax
 * 000000014033A136: mov     r11, [r13+8]
 * 000000014033A13A: mov     r8d, [rsi+80Ch]
 * 000000014033A141: mov     [rbp+20F0h+var_2030], r11
 * 000000014033A148: lea     rax, [r8+r8*2]
 * 000000014033A14C: lea     rcx, [r11+rax*4]
 * 000000014033A150: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014033A15A: lea     r9, [rcx+0Ch]
 * 000000014033A15E: mov     [rbp+20F0h+var_20C8], rcx
 * 000000014033A162: mov     ecx, [r13+24h]
 * 000000014033A166: mul     rcx
 * 000000014033A169: mov     [rbp+20F0h+var_20D8], r9
 * 000000014033A16D: mov     r10, rdx
 * 000000014033A170: shr     r10, 3
 * 000000014033A174: mov     eax, r10d
 * 000000014033A177: mov     [rbp+20F0h+var_20B0], r10
 * 000000014033A17B: lea     rcx, [rax+rax*2]
 * 000000014033A17F: lea     rax, [r11+rcx*4]
 * 000000014033A183: lea     r11d, [r10-1]
 * 000000014033A187: mov     [rbp+20F0h+var_2080], rax
 * 000000014033A18B: lea     rax, [r13+30h]
 * 000000014033A18F: mov     edx, r11d
 * 000000014033A192: add     rdx, 7
 * 000000014033A196: mov     [rbp+20F0h+var_205C], r11d
 * 000000014033A19D: lea     r15, [r8+rax]
 * 000000014033A1A1: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 000000014033A1A5: add     rdx, rax
 * 000000014033A1A8: mov     [rbp+20F0h+var_20F0], r15
 * 000000014033A1AC: movzx   eax, word ptr [r13+28h]
 * 000000014033A1B1: mov     [rbp+20F0h+var_2000], rdx
 * 000000014033A1B8: lea     rcx, [rax+rax*2]
 * 000000014033A1BC: lea     rax, [rdx+rcx*8]
 * 000000014033A1C0: mov     ecx, 1
 * 000000014033A1C5: mov     [rbp+20F0h+var_2058], rax
 * 000000014033A1CC: cmp     r8d, r11d
 * 000000014033A1CF: jnb     loc_14033A479
 * 000000014033A1D5: mov     rdi, [rbp+20F0h+var_20C8]
 * 000000014033A1D9: xor     edx, edx
 * 000000014033A1DB: cmp     [r15], dl
 * 000000014033A1DE: jl      loc_14033A401
 * 000000014033A1E4: mov     eax, [rdi+4]
 * 000000014033A1E7: mov     r9d, [r9]
 * 000000014033A1EA: mov     r13d, eax
 * 000000014033A1ED: sub     r9d, eax
 * 000000014033A1F0: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033A1F4: mov     r12d, r9d
 * 000000014033A1F7: mov     [rbp+20F0h+var_20C8], r12
 * 000000014033A1FB: add     r13, [rax+18h]
 * 000000014033A1FF: add     [rsi+810h], r9d
 * 000000014033A206: mov     r10, r13
 * 000000014033A209: mov     ebx, [rsi+7FCh]
 * 000000014033A20F: mov     rax, r13
 * 000000014033A212: mov     r14, [rsi+800h]
 * 000000014033A219: lea     rcx, [r9+r13]
 * 000000014033A21D: mov     [rbp+20F0h+var_20A0], r13
 * 000000014033A221: cmp     r13, rcx
 * 000000014033A224: jnb     short loc_14033A237
 * 000000014033A226: mov     r8d, 40h ; '@'
 * 000000014033A22C: prefetchnta byte ptr [rax]
 * 000000014033A22F: add     rax, r8
 * 000000014033A232: cmp     rax, rcx
 * 000000014033A235: jb      short loc_14033A22C
 * 000000014033A237: mov     r11d, r9d
 * 000000014033A23A: mov     r8, r14
 * 000000014033A23D: shr     r11d, 7
 * 000000014033A241: test    r11d, r11d
 * 000000014033A244: jz      short loc_14033A2B4
 * 000000014033A246: mov     esi, 0FFFFFFFFh
 * 000000014033A24B: mov     r15d, 1
 * 000000014033A251: mov     r12, 7010008004002001h
 * 000000014033A25B: mov     eax, 8
 * 000000014033A260: xor     r8, [r10]
 * 000000014033A263: mov     ecx, ebx
 * 000000014033A265: rol     r8, cl
 * 000000014033A268: xor     r8, [r10+8]
 * 000000014033A26C: add     r10, 10h
 * 000000014033A270: rol     r8, cl
 * 000000014033A273: sub     rax, r15
 * 000000014033A276: jnz     short loc_14033A260
 * 000000014033A278: mov     rcx, r10
 * 000000014033A27B: sub     rcx, r13
 * 000000014033A27E: xor     rcx, r14
 * 000000014033A281: mov     rax, rcx
 * 000000014033A284: rol     rax, 11h
 * 000000014033A288: xor     rcx, rax
 * 000000014033A28B: mov     rax, r12
 * 000000014033A28E: mul     rcx
 * 000000014033A291: xor     ebx, eax
 * 000000014033A293: mov     [rbp+20F0h+var_1A90], rdx
 * 000000014033A29A: xor     ebx, edx
 * 000000014033A29C: and     ebx, 3Fh
 * 000000014033A29F: cmovz   ebx, r15d
 * 000000014033A2A3: add     r11d, esi
 * 000000014033A2A6: jnz     short loc_14033A25B
 * 000000014033A2A8: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033A2AC: mov     r12, [rbp+20F0h+var_20C8]
 * 000000014033A2B0: mov     r15, [rbp+20F0h+var_20F0]
 * 000000014033A2B4: and     r9d, 7Fh
 * 000000014033A2B8: mov     r11d, 1
 * 000000014033A2BE: cmp     r9d, 8
 * 000000014033A2C2: jb      short loc_14033A2E0
 * 000000014033A2C4: mov     eax, r9d
 * 000000014033A2C7: shr     rax, 3
 * 000000014033A2CB: xor     r8, [r10]
 * 000000014033A2CE: mov     ecx, ebx
 * 000000014033A2D0: rol     r8, cl
 * 000000014033A2D3: add     r10, 8
 * 000000014033A2D7: add     r9d, 0FFFFFFF8h
 * 000000014033A2DB: sub     rax, r11
 * 000000014033A2DE: jnz     short loc_14033A2CB
 * 000000014033A2E0: test    r9d, r9d
 * 000000014033A2E3: jz      short loc_14033A2FE
 * 000000014033A2E5: mov     edx, 0FFFFFFFFh
 * 000000014033A2EA: movzx   eax, byte ptr [r10]
 * 000000014033A2EE: mov     ecx, ebx
 * 000000014033A2F0: xor     r8, rax
 * 000000014033A2F3: add     r10, r11
 * 000000014033A2F6: rol     r8, cl
 * 000000014033A2F9: add     r9d, edx
 * 000000014033A2FC: jnz     short loc_14033A2EA
 * 000000014033A2FE: mov     rax, r8
 * 000000014033A301: jmp     short loc_14033A31B
 * 000000014033A303: test    cl, 20h
 * 000000014033A306: jz      loc_14033A136
 * 000000014033A30C: mov     [rsi+80Ch], r10d
 * 000000014033A313: jmp     loc_14033362F
 * 000000014033A318: xor     r8b, al
 * 000000014033A31B: shr     rax, 7
 * 000000014033A31F: test    rax, rax
 * 000000014033A322: jnz     short loc_14033A318
 * 000000014033A324: movzx   ecx, byte ptr [r15]
 * 000000014033A328: mov     eax, ecx
 * 000000014033A32A: movzx   edx, r8b
 * 000000014033A32E: and     edx, 7Fh
 * 000000014033A331: and     eax, 7Fh
 * 000000014033A334: mov     dword ptr [rbp+20F0h+var_20B8], edx
 * 000000014033A337: cmp     edx, eax
 * 000000014033A339: jz      loc_14033A3E2
 * 000000014033A33F: test    r12, r12
 * 000000014033A342: jz      loc_14033A609
 * 000000014033A348: mov     eax, [rsi+974h]
 * 000000014033A34E: mov     r8d, 40h ; '@'
 * 000000014033A354: test    r8b, al
 * 000000014033A357: jz      loc_14033A609
 * 000000014033A35D: mov     r15, cr8
 * 000000014033A361: lea     eax, [r8-3Eh]
 * 000000014033A365: mov     cr8, rax
 * 000000014033A369: mov     rbx, r13
 * 000000014033A36C: dec     r12
 * 000000014033A36F: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033A376: add     r13, r12
 * 000000014033A379: mov     eax, 0FFFh
 * 000000014033A37E: or      r13, rax
 * 000000014033A381: lea     r12, [rbx-1]
 * 000000014033A385: movzx   r14d, r15b
 * 000000014033A389: mov     rax, [rsi+460h]
 * 000000014033A390: xor     edx, edx
 * 000000014033A392: mov     rcx, rbx
 * 000000014033A395: call    KeGuardDispatchICall
 * 000000014033A39A: cmp     eax, 0C000022Dh
 * 000000014033A39F: jnz     short loc_14033A3C4
 * 000000014033A3A1: mov     eax, 1
 * 000000014033A3A6: cmp     r15b, al
 * 000000014033A3A9: ja      short loc_14033A3CE
 * 000000014033A3AB: movzx   r14d, r15b
 * 000000014033A3AF: mov     cr8, r14
 * 000000014033A3B3: mov     al, [rbx]
 * 000000014033A3B5: mov     rax, cr8
 * 000000014033A3B9: mov     eax, 2
 * 000000014033A3BE: mov     cr8, rax
 * 000000014033A3C2: jmp     short loc_14033A389
 * 000000014033A3C4: xor     ecx, ecx
 * 000000014033A3C6: test    eax, eax
 * 000000014033A3C8: js      loc_14033A5F8
 * 000000014033A3CE: mov     eax, 1000h
 * 000000014033A3D3: add     rbx, rax
 * 000000014033A3D6: add     r12, rax
 * 000000014033A3D9: cmp     r12, r13
 * 000000014033A3DC: jnz     short loc_14033A385
 * 000000014033A3DE: mov     cr8, r14
 * 000000014033A3E2: xor     edx, edx
 * 000000014033A3E4: mov     r15, [rbp+20F0h+var_20F0]
 * 000000014033A3E8: mov     eax, 40h ; '@'
 * 000000014033A3ED: add     [rsi+810h], eax
 * 000000014033A3F3: mov     r9, [rbp+20F0h+var_20D8]
 * 000000014033A3F7: mov     r12, [rbp+20F0h+var_2068]
 * 000000014033A3FE: lea     ecx, [rax-3Fh]
 * 000000014033A401: mov     eax, 0Ch
 * 000000014033A406: add     r15, rcx
 * 000000014033A409: add     r9, rax
 * 000000014033A40C: mov     [rbp+20F0h+var_20F0], r15
 * 000000014033A410: add     rdi, rax
 * 000000014033A413: mov     [rbp+20F0h+var_20D8], r9
 * 000000014033A417: cmp     r9, [rbp+20F0h+var_2080]
 * 000000014033A41B: jnb     short loc_14033A42D
 * 000000014033A41D: mov     eax, [r12]
 * 000000014033A421: cmp     [rsi+810h], eax
 * 000000014033A427: jl      loc_14033A1DB
 * 000000014033A42D: sub     rdi, [rbp+20F0h+var_2030]
 * 000000014033A434: mov     rax, 2AAAAAAAAAAAAAABh
 * 000000014033A43E: mov     r11d, [rbp+20F0h+var_205C]
 * 000000014033A445: mov     r10, [rbp+20F0h+var_20B0]
 * 000000014033A449: imul    rdi
 * 000000014033A44C: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033A453: sar     rdx, 1
 * 000000014033A456: mov     rax, rdx
 * 000000014033A459: shr     rax, 3Fh
 * 000000014033A45D: add     rdx, rax
 * 000000014033A460: mov     r8d, edx
 * 000000014033A463: mov     [rsi+80Ch], edx
 * 000000014033A469: mov     rdx, [rbp+20F0h+var_2000]
 * 000000014033A470: cmp     r8d, r11d
 * 000000014033A473: jb      loc_140333DB4
 * 000000014033A479: mov     eax, [rsi+814h]
 * 000000014033A47F: cmp     [rsi+810h], eax
 * 000000014033A485: jge     loc_140333DB4
 * 000000014033A48B: sub     r8d, r10d
 * 000000014033A48E: add     r8d, ecx
 * 000000014033A491: lea     rcx, [r8+r8*2]
 * 000000014033A495: lea     rcx, [rdx+rcx*8]
 * 000000014033A499: mov     [rbp+20F0h+var_20A0], rcx
 * 000000014033A49D: mov     rdi, [rbp+20F0h+var_20D0]
 * 000000014033A4A1: lea     rdx, [rcx+8]
 * 000000014033A4A5: mov     eax, 2
 * 000000014033A4AA: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014033A4AE: mov     r12d, eax
 * 000000014033A4B1: mov     [rbp+20F0h+var_20D8], rax
 * 000000014033A4B5: xor     r10d, r10d
 * 000000014033A4B8: lea     ebx, [rax-1]
 * 000000014033A4BB: lea     eax, [rbx+0Bh]
 * 000000014033A4BE: cmp     [rdx], r10d
 * 000000014033A4C1: jl      loc_14033A7F2
 * 000000014033A4C7: mov     eax, [rdx-8]
 * 000000014033A4CA: mov     r8d, [rdx-4]
 * 000000014033A4CE: mov     r13d, eax
 * 000000014033A4D1: add     r13, [rdi+18h]
 * 000000014033A4D5: sub     r8d, eax
 * 000000014033A4D8: add     [rsi+810h], r8d
 * 000000014033A4DF: mov     r9, r13
 * 000000014033A4E2: mov     r11d, [rsi+7FCh]
 * 000000014033A4E9: mov     rax, r13
 * 000000014033A4EC: mov     r14, [rsi+800h]
 * 000000014033A4F3: lea     rcx, [r8+r13]
 * 000000014033A4F7: mov     r15d, r8d
 * 000000014033A4FA: mov     [rbp+20F0h+var_2080], r13
 * 000000014033A4FE: mov     [rbp+20F0h+var_20C8], r15
 * 000000014033A502: cmp     r13, rcx
 * 000000014033A505: jnb     short loc_14033A518
 * 000000014033A507: mov     r10d, 40h ; '@'
 * 000000014033A50D: prefetchnta byte ptr [rax]
 * 000000014033A510: add     rax, r10
 * 000000014033A513: cmp     rax, rcx
 * 000000014033A516: jb      short loc_14033A50D
 * 000000014033A518: mov     r10d, r8d
 * 000000014033A51B: mov     rbx, r14
 * 000000014033A51E: shr     r10d, 7
 * 000000014033A522: test    r10d, r10d
 * 000000014033A525: jz      short loc_14033A59D
 * 000000014033A527: mov     esi, 0FFFFFFFFh
 * 000000014033A52C: mov     r12d, 1
 * 000000014033A532: mov     r15, 7010008004002001h
 * 000000014033A53C: mov     eax, 8
 * 000000014033A541: xor     rbx, [r9]
 * 000000014033A544: mov     ecx, r11d
 * 000000014033A547: rol     rbx, cl
 * 000000014033A54A: xor     rbx, [r9+8]
 * 000000014033A54E: add     r9, 10h
 * 000000014033A552: rol     rbx, cl
 * 000000014033A555: sub     rax, r12
 * 000000014033A558: jnz     short loc_14033A541
 * 000000014033A55A: mov     rcx, r9
 * 000000014033A55D: sub     rcx, r13
 * 000000014033A560: xor     rcx, r14
 * 000000014033A563: mov     rax, rcx
 * 000000014033A566: rol     rax, 11h
 * 000000014033A56A: xor     rcx, rax
 * 000000014033A56D: mov     rax, r15
 * 000000014033A570: mul     rcx
 * 000000014033A573: xor     r11d, eax
 * 000000014033A576: mov     [rbp+20F0h+var_1A88], rdx
 * 000000014033A57D: xor     r11d, edx
 * 000000014033A580: and     r11d, 3Fh
 * 000000014033A584: cmovz   r11d, r12d
 * 000000014033A588: add     r10d, esi
 * 000000014033A58B: jnz     short loc_14033A53C
 * 000000014033A58D: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033A591: mov     r15, [rbp+20F0h+var_20C8]
 * 000000014033A595: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033A599: mov     r12, [rbp+20F0h+var_20D8]
 * 000000014033A59D: and     r8d, 7Fh
 * 000000014033A5A1: mov     r14d, 1
 * 000000014033A5A7: cmp     r8d, 8
 * 000000014033A5AB: jb      short loc_14033A5CA
 * 000000014033A5AD: mov     eax, r8d
 * 000000014033A5B0: shr     rax, 3
 * 000000014033A5B4: xor     rbx, [r9]
 * 000000014033A5B7: mov     ecx, r11d
 * 000000014033A5BA: rol     rbx, cl
 * 000000014033A5BD: add     r9, 8
 * 000000014033A5C1: add     r8d, 0FFFFFFF8h
 * 000000014033A5C5: sub     rax, r14
 * 000000014033A5C8: jnz     short loc_14033A5B4
 * 000000014033A5CA: xor     r10d, r10d
 * 000000014033A5CD: test    r8d, r8d
 * 000000014033A5D0: jz      short loc_14033A5F0
 * 000000014033A5D2: mov     r10d, 0FFFFFFFFh
 * 000000014033A5D8: movzx   eax, byte ptr [r9]
 * 000000014033A5DC: mov     ecx, r11d
 * 000000014033A5DF: xor     rbx, rax
 * 000000014033A5E2: add     r9, r14
 * 000000014033A5E5: rol     rbx, cl
 * 000000014033A5E8: add     r8d, r10d
 * 000000014033A5EB: jnz     short loc_14033A5D8
 * 000000014033A5ED: xor     r10d, r10d
 * 000000014033A5F0: mov     rax, rbx
 * 000000014033A5F3: jmp     loc_14033A686
 * 000000014033A5F8: mov     cr8, r14
 * 000000014033A5FC: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033A600: mov     edx, dword ptr [rbp+20F0h+var_20B8]
 * 000000014033A603: mov     r13, [rbp+20F0h+var_20A0]
 * 000000014033A607: mov     cl, [rax]
 * 000000014033A609: movzx   eax, cl
 * 000000014033A60C: mov     ecx, [rsi+8D8h]
 * 000000014033A612: and     eax, 7Fh
 * 000000014033A615: test    ecx, ecx
 * 000000014033A617: jnz     short loc_14033A62F
 * 000000014033A619: mov     ecx, edx
 * 000000014033A61B: xor     rcx, rax
 * 000000014033A61E: mov     rax, [rsi+580h]
 * 000000014033A625: mov     [rax+18h], rcx
 * 000000014033A629: mov     ecx, [rsi+8D8h]
 * 000000014033A62F: xor     edx, edx
 * 000000014033A631: test    ecx, ecx
 * 000000014033A633: jnz     loc_14033A3E4
 * 000000014033A639: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033A63D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033A647: add     rax, rsi
 * 000000014033A64A: mov     [rsi+8E0h], rax
 * 000000014033A651: mov     rax, 0B3B74BDEE4453415h
 * 000000014033A65B: add     rax, rcx
 * 000000014033A65E: mov     [rsi+8E8h], rax
 * 000000014033A665: movsxd  rax, dword ptr [rcx]
 * 000000014033A668: mov     [rsi+8F0h], rax
 * 000000014033A66F: lea     eax, [rdx+1]
 * 000000014033A672: mov     [rsi+8F8h], r13
 * 000000014033A679: mov     [rsi+8D8h], eax
 * 000000014033A67F: jmp     loc_14033A3E4
 * 000000014033A684: xor     ebx, eax
 * 000000014033A686: shr     rax, 1Fh
 * 000000014033A68A: test    rax, rax
 * 000000014033A68D: jnz     short loc_14033A684
 * 000000014033A68F: mov     ecx, [rdx]
 * 000000014033A691: btr     ebx, 1Fh
 * 000000014033A695: mov     eax, ecx
 * 000000014033A697: btr     eax, 1Fh
 * 000000014033A69B: cmp     ebx, eax
 * 000000014033A69D: jz      loc_14033A7EA
 * 000000014033A6A3: test    r15, r15
 * 000000014033A6A6: jz      loc_14033A74F
 * 000000014033A6AC: mov     eax, [rsi+974h]
 * 000000014033A6B2: mov     r8d, 40h ; '@'
 * 000000014033A6B8: test    r8b, al
 * 000000014033A6BB: jz      loc_14033A74F
 * 000000014033A6C1: mov     r12, cr8
 * 000000014033A6C5: lea     eax, [r8-3Eh]
 * 000000014033A6C9: mov     cr8, rax
 * 000000014033A6CD: mov     r14, r13
 * 000000014033A6D0: lea     rax, [r13-1]
 * 000000014033A6D4: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033A6DB: add     rax, r15
 * 000000014033A6DE: mov     ecx, 0FFFh
 * 000000014033A6E3: or      rax, rcx
 * 000000014033A6E6: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033A6EA: lea     r13, [r14-1]
 * 000000014033A6EE: movzx   r15d, r12b
 * 000000014033A6F2: mov     rax, [rsi+460h]
 * 000000014033A6F9: xor     edx, edx
 * 000000014033A6FB: mov     rcx, r14
 * 000000014033A6FE: call    KeGuardDispatchICall
 * 000000014033A703: cmp     eax, 0C000022Dh
 * 000000014033A708: jnz     short loc_14033A732
 * 000000014033A70A: mov     eax, 1
 * 000000014033A70F: cmp     r12b, al
 * 000000014033A712: ja      loc_14033A7C5
 * 000000014033A718: movzx   r15d, r12b
 * 000000014033A71C: mov     cr8, r15
 * 000000014033A720: mov     al, [r14]
 * 000000014033A723: mov     rax, cr8
 * 000000014033A727: mov     eax, 2
 * 000000014033A72C: mov     cr8, rax
 * 000000014033A730: jmp     short loc_14033A6F2
 * 000000014033A732: xor     r10d, r10d
 * 000000014033A735: test    eax, eax
 * 000000014033A737: jns     loc_14033A7C8
 * 000000014033A73D: mov     cr8, r15
 * 000000014033A741: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033A745: mov     r13, [rbp+20F0h+var_2080]
 * 000000014033A749: mov     r12, [rbp+20F0h+var_20D8]
 * 000000014033A74D: mov     ecx, [rdx]
 * 000000014033A74F: mov     eax, ecx
 * 000000014033A751: mov     ecx, [rsi+8D8h]
 * 000000014033A757: btr     eax, 1Fh
 * 000000014033A75B: test    ecx, ecx
 * 000000014033A75D: jnz     loc_14033A7EA
 * 000000014033A763: mov     ecx, ebx
 * 000000014033A765: xor     rcx, rax
 * 000000014033A768: mov     rax, [rsi+580h]
 * 000000014033A76F: mov     [rax+18h], rcx
 * 000000014033A773: mov     ecx, [rsi+8D8h]
 * 000000014033A779: test    ecx, ecx
 * 000000014033A77B: jnz     short loc_14033A7EA
 * 000000014033A77D: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033A787: lea     ebx, [rcx+1]
 * 000000014033A78A: add     rax, rsi
 * 000000014033A78D: mov     r11, 0B3B74BDEE4453415h
 * 000000014033A797: mov     [rsi+8E0h], rax
 * 000000014033A79E: lea     rax, [rdi+r11]
 * 000000014033A7A2: mov     [rsi+8E8h], rax
 * 000000014033A7A9: movsxd  rax, dword ptr [rdi]
 * 000000014033A7AC: mov     [rsi+8F0h], rax
 * 000000014033A7B3: lea     eax, [rcx+0Ch]
 * 000000014033A7B6: mov     [rsi+8F8h], r13
 * 000000014033A7BD: mov     [rsi+8D8h], ebx
 * 000000014033A7C3: jmp     short loc_14033A7FC
 * 000000014033A7C5: xor     r10d, r10d
 * 000000014033A7C8: mov     r9d, 1000h
 * 000000014033A7CE: add     r14, r9
 * 000000014033A7D1: add     r13, r9
 * 000000014033A7D4: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033A7D8: jnz     loc_14033A6EE
 * 000000014033A7DE: mov     cr8, r15
 * 000000014033A7E2: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033A7E6: mov     r12, [rbp+20F0h+var_20D8]
 * 000000014033A7EA: mov     eax, 0Ch
 * 000000014033A7EF: lea     ebx, [rax-0Bh]
 * 000000014033A7F2: mov     r11, 0B3B74BDEE4453415h
 * 000000014033A7FC: add     rdx, rax
 * 000000014033A7FF: sub     r12, rbx
 * 000000014033A802: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014033A806: mov     [rbp+20F0h+var_20D8], r12
 * 000000014033A80A: jnz     loc_14033A4BE
 * 000000014033A810: mov     rcx, [rbp+20F0h+var_20A0]
 * 000000014033A814: mov     edx, 1
 * 000000014033A819: add     [rsi+80Ch], edx
 * 000000014033A81F: add     rcx, 18h
 * 000000014033A823: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033A82A: mov     [rbp+20F0h+var_20A0], rcx
 * 000000014033A82E: cmp     rcx, [rbp+20F0h+var_2058]
 * 000000014033A835: jz      loc_14033A30C
 * 000000014033A83B: mov     eax, [rsi+814h]
 * 000000014033A841: cmp     [rsi+810h], eax
 * 000000014033A847: jl      loc_14033A49D
 * 000000014033A84D: jmp     loc_14033362F
 * 000000014033A852: mov     r14, [r13+8]
 * 000000014033A856: mov     r8d, [r13+10h]
 * 000000014033A85A: mov     r9, r14
 * 000000014033A85D: add     [rsi+810h], r8d
 * 000000014033A864: mov     rax, r14
 * 000000014033A867: mov     r11d, [rsi+7FCh]
 * 000000014033A86E: mov     r15, [rsi+800h]
 * 000000014033A875: lea     rcx, [r14+r8]
 * 000000014033A879: cmp     r14, rcx
 * 000000014033A87C: jnb     short loc_14033A88F
 * 000000014033A87E: mov     r10d, 40h ; '@'
 * 000000014033A884: prefetchnta byte ptr [rax]
 * 000000014033A887: add     rax, r10
 * 000000014033A88A: cmp     rax, rcx
 * 000000014033A88D: jb      short loc_14033A884
 * 000000014033A88F: mov     r10d, r8d
 * 000000014033A892: mov     rbx, r15
 * 000000014033A895: shr     r10d, 7
 * 000000014033A899: mov     r12d, 0FFFFFFFFh
 * 000000014033A89F: test    r10d, r10d
 * 000000014033A8A2: jz      short loc_14033A90F
 * 000000014033A8A4: mov     rdi, 7010008004002001h
 * 000000014033A8AE: mov     eax, 8
 * 000000014033A8B3: xor     rbx, [r9]
 * 000000014033A8B6: mov     ecx, r11d
 * 000000014033A8B9: rol     rbx, cl
 * 000000014033A8BC: xor     rbx, [r9+8]
 * 000000014033A8C0: add     r9, 10h
 * 000000014033A8C4: rol     rbx, cl
 * 000000014033A8C7: sub     rax, rdx
 * 000000014033A8CA: jnz     short loc_14033A8B3
 * 000000014033A8CC: mov     rcx, r9
 * 000000014033A8CF: sub     rcx, r14
 * 000000014033A8D2: xor     rcx, r15
 * 000000014033A8D5: mov     rax, rcx
 * 000000014033A8D8: rol     rax, 11h
 * 000000014033A8DC: xor     rcx, rax
 * 000000014033A8DF: mov     rax, rdi
 * 000000014033A8E2: mul     rcx
 * 000000014033A8E5: xor     r11d, eax
 * 000000014033A8E8: mov     [rbp+20F0h+var_1A80], rdx
 * 000000014033A8EF: xor     r11d, edx
 * 000000014033A8F2: mov     edx, 1
 * 000000014033A8F7: and     r11d, 3Fh
 * 000000014033A8FB: cmovz   r11d, edx
 * 000000014033A8FF: add     r10d, r12d
 * 000000014033A902: jnz     short loc_14033A8AE
 * 000000014033A904: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033A908: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033A90F: and     r8d, 7Fh
 * 000000014033A913: cmp     r8d, 8
 * 000000014033A917: jb      short loc_14033A936
 * 000000014033A919: mov     eax, r8d
 * 000000014033A91C: shr     rax, 3
 * 000000014033A920: xor     rbx, [r9]
 * 000000014033A923: mov     ecx, r11d
 * 000000014033A926: rol     rbx, cl
 * 000000014033A929: add     r9, 8
 * 000000014033A92D: add     r8d, 0FFFFFFF8h
 * 000000014033A931: sub     rax, rdx
 * 000000014033A934: jnz     short loc_14033A920
 * 000000014033A936: xor     r10d, r10d
 * 000000014033A939: test    r8d, r8d
 * 000000014033A93C: jz      short loc_14033A953
 * 000000014033A93E: movzx   eax, byte ptr [r9]
 * 000000014033A942: mov     ecx, r11d
 * 000000014033A945: xor     rbx, rax
 * 000000014033A948: add     r9, rdx
 * 000000014033A94B: rol     rbx, cl
 * 000000014033A94E: add     r8d, r12d
 * 000000014033A951: jnz     short loc_14033A93E
 * 000000014033A953: mov     rax, rbx
 * 000000014033A956: jmp     short loc_14033A95A
 * 000000014033A958: xor     ebx, eax
 * 000000014033A95A: shr     rax, 1Fh
 * 000000014033A95E: test    rax, rax
 * 000000014033A961: jnz     short loc_14033A958
 * 000000014033A963: btr     ebx, 1Fh
 * 000000014033A967: mov     r12d, r10d
 * 000000014033A96A: cmp     ebx, [r13+14h]
 * 000000014033A96E: jz      loc_14033AA4D
 * 000000014033A974: cmp     [r13+0], r10d
 * 000000014033A978: jnz     short loc_14033A982
 * 000000014033A97A: cmp     [r13+18h], r10d
 * 000000014033A97E: cmovnz  r12d, edx
 * 000000014033A982: mov     ecx, [r13+10h]
 * 000000014033A986: mov     rdx, [r13+8]
 * 000000014033A98A: test    rcx, rcx
 * 000000014033A98D: jz      loc_14033AC05
 * 000000014033A993: mov     eax, [rsi+974h]
 * 000000014033A999: mov     r8d, 40h ; '@'
 * 000000014033A99F: test    r8b, al
 * 000000014033A9A2: jz      loc_14033AC05
 * 000000014033A9A8: mov     r13, cr8
 * 000000014033A9AC: lea     eax, [r8-3Eh]
 * 000000014033A9B0: mov     cr8, rax
 * 000000014033A9B4: lea     rax, [rcx-1]
 * 000000014033A9B8: mov     r14, rdx
 * 000000014033A9BB: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033A9C2: add     rax, rdx
 * 000000014033A9C5: mov     ecx, 0FFFh
 * 000000014033A9CA: or      rax, rcx
 * 000000014033A9CD: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033A9D1: lea     rax, [r14-1]
 * 000000014033A9D5: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033A9D9: movzx   r15d, r13b
 * 000000014033A9DD: mov     rax, [rsi+460h]
 * 000000014033A9E4: xor     edx, edx
 * 000000014033A9E6: mov     rcx, r14
 * 000000014033A9E9: call    KeGuardDispatchICall
 * 000000014033A9EE: xor     r10d, r10d
 * 000000014033A9F1: cmp     eax, 0C000022Dh
 * 000000014033A9F6: jnz     short loc_14033AA23
 * 000000014033A9F8: test    r12d, r12d
 * 000000014033A9FB: jnz     loc_14033ABFD
 * 000000014033AA01: lea     eax, [r10+1]
 * 000000014033AA05: cmp     r13b, al
 * 000000014033AA08: ja      short loc_14033AA2B
 * 000000014033AA0A: movzx   r15d, r13b
 * 000000014033AA0E: mov     cr8, r15
 * 000000014033AA12: mov     al, [r14]
 * 000000014033AA15: mov     rax, cr8
 * 000000014033AA19: lea     eax, [r10+2]
 * 000000014033AA1D: mov     cr8, rax
 * 000000014033AA21: jmp     short loc_14033A9DD
 * 000000014033AA23: test    eax, eax
 * 000000014033AA25: js      loc_14033ABFD
 * 000000014033AA2B: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033AA2F: mov     r9d, 1000h
 * 000000014033AA35: add     rax, r9
 * 000000014033AA38: add     r14, r9
 * 000000014033AA3B: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033AA3F: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033AA43: jnz     short loc_14033A9D9
 * 000000014033AA45: mov     cr8, r15
 * 000000014033AA49: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033AA4D: mov     r11, 0B3B74BDEE4453415h
 * 000000014033AA57: mov     ecx, 1
 * 000000014033AA5C: mov     eax, [r13+10h]
 * 000000014033AA60: mov     r12, [r13+8]
 * 000000014033AA64: shr     eax, 4
 * 000000014033AA67: mov     [rbp+20F0h+var_20F0], r12
 * 000000014033AA6B: test    eax, eax
 * 000000014033AA6D: jz      loc_14033362F
 * 000000014033AA73: mov     edi, eax
 * 000000014033AA75: mov     [rbp+20F0h+var_20D8], rdi
 * 000000014033AA79: mov     rax, [r12]
 * 000000014033AA7D: lea     rdx, [rbp+20F0h+var_1D90]
 * 000000014033AA84: mov     rbx, r13
 * 000000014033AA87: mov     r13d, ecx
 * 000000014033AA8A: mov     r15, [rax]
 * 000000014033AA8D: mov     [rbp+20F0h+var_1D90], r10
 * 000000014033AA94: mov     rcx, r15
 * 000000014033AA97: mov     rax, [rsi+308h]
 * 000000014033AA9E: call    KeGuardDispatchICall
 * 000000014033AAA3: xor     r10d, r10d
 * 000000014033AAA6: mov     r14, rax
 * 000000014033AAA9: test    rax, rax
 * 000000014033AAAC: jz      loc_14033ABD3
 * 000000014033AAB2: lea     edi, [r10+6]
 * 000000014033AAB6: mov     rax, [rsi+200h]
 * 000000014033AABD: lea     rdx, [rbp+20F0h+var_1A78]
 * 000000014033AAC4: mov     rcx, r14
 * 000000014033AAC7: inc     r13d
 * 000000014033AACA: call    KeGuardDispatchICall
 * 000000014033AACF: xor     r12d, r12d
 * 000000014033AAD2: test    rax, rax
 * 000000014033AAD5: jnz     loc_14033ABA6
 * 000000014033AADB: test    dword ptr [rsi+970h], 40000000h
 * 000000014033AAE5: lea     r9d, [r12+1]
 * 000000014033AAEA: jz      short loc_14033AB32
 * 000000014033AAEC: mov     rcx, [rsi+0A50h]
 * 000000014033AAF3: lea     edx, [rax+30h]
 * 000000014033AAF6: mov     r8, rdi
 * 000000014033AAF9: mov     rax, [rbx]
 * 000000014033AAFC: add     edx, 0FFFFFFF8h
 * 000000014033AAFF: mov     [rcx], rax
 * 000000014033AB02: add     rbx, 8
 * 000000014033AB06: add     rcx, 8
 * 000000014033AB0A: sub     r8, r9
 * 000000014033AB0D: jnz     short loc_14033AAF9
 * 000000014033AB0F: test    edx, edx
 * 000000014033AB11: jz      short loc_14033AB2B
 * 000000014033AB13: mov     r12d, 0FFFFFFFFh
 * 000000014033AB19: mov     al, [rbx]
 * 000000014033AB1B: add     rbx, r9
 * 000000014033AB1E: mov     [rcx], al
 * 000000014033AB20: add     rcx, r9
 * 000000014033AB23: add     edx, r12d
 * 000000014033AB26: jnz     short loc_14033AB19
 * 000000014033AB28: xor     r12d, r12d
 * 000000014033AB2B: mov     rbx, [rsi+0A50h]
 * 000000014033AB32: mov     [rbx+18h], r14
 * 000000014033AB36: mov     [rbx+20h], r15
 * 000000014033AB3A: mov     rax, [rsi+580h]
 * 000000014033AB41: mov     [rax], rbx
 * 000000014033AB44: mov     dword ptr [rax+10h], 30h ; '0'
 * 000000014033AB4B: mov     rax, [rsi+580h]
 * 000000014033AB52: mov     [rax+8], r14
 * 000000014033AB56: mov     dword ptr [rax+14h], 1000h
 * 000000014033AB5D: cmp     [rsi+8D8h], r12d
 * 000000014033AB64: jnz     short loc_14033ABA6
 * 000000014033AB66: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033AB70: add     rax, rsi
 * 000000014033AB73: mov     [rsi+8E0h], rax
 * 000000014033AB7A: mov     rax, 0B3B74BDEE4453415h
 * 000000014033AB84: add     rax, rbx
 * 000000014033AB87: mov     [rsi+8E8h], rax
 * 000000014033AB8E: movsxd  rax, dword ptr [rbx]
 * 000000014033AB91: mov     [rsi+8F0h], rax
 * 000000014033AB98: mov     [rsi+8F8h], rdi
 * 000000014033AB9F: mov     [rsi+8D8h], r9d
 * 000000014033ABA6: mov     rax, [rsi+308h]
 * 000000014033ABAD: lea     rdx, [rbp+20F0h+var_1D90]
 * 000000014033ABB4: mov     rcx, r15
 * 000000014033ABB7: call    KeGuardDispatchICall
 * 000000014033ABBC: xor     r10d, r10d
 * 000000014033ABBF: mov     r14, rax
 * 000000014033ABC2: test    rax, rax
 * 000000014033ABC5: jnz     loc_14033AAB6
 * 000000014033ABCB: mov     r12, [rbp+20F0h+var_20F0]
 * 000000014033ABCF: mov     rdi, [rbp+20F0h+var_20D8]
 * 000000014033ABD3: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033ABD7: add     r12, 10h
 * 000000014033ABDB: mov     ecx, 1
 * 000000014033ABE0: mov     [rbp+20F0h+var_20F0], r12
 * 000000014033ABE4: sub     rdi, rcx
 * 000000014033ABE7: mov     [rbp+20F0h+var_20D8], rdi
 * 000000014033ABEB: jnz     loc_14033AA79
 * 000000014033ABF1: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033ABF8: jmp     loc_140333625
 * 000000014033ABFD: mov     cr8, r15
 * 000000014033AC01: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033AC05: mov     eax, [rsi+8D8h]
 * 000000014033AC0B: mov     ecx, [r13+14h]
 * 000000014033AC0F: test    eax, eax
 * 000000014033AC11: jnz     short loc_14033AC29
 * 000000014033AC13: mov     eax, ebx
 * 000000014033AC15: xor     rcx, rax
 * 000000014033AC18: mov     rax, [rsi+580h]
 * 000000014033AC1F: mov     [rax+18h], rcx
 * 000000014033AC23: mov     eax, [rsi+8D8h]
 * 000000014033AC29: mov     rcx, [r13+8]
 * 000000014033AC2D: mov     r11, 0B3B74BDEE4453415h
 * 000000014033AC37: test    eax, eax
 * 000000014033AC39: jnz     loc_14033AA57
 * 000000014033AC3F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033AC49: add     rax, rsi
 * 000000014033AC4C: mov     [rsi+8E0h], rax
 * 000000014033AC53: lea     rax, [r11+r13]
 * 000000014033AC57: mov     [rsi+8E8h], rax
 * 000000014033AC5E: movsxd  rax, dword ptr [r13+0]
 * 000000014033AC62: mov     [rsi+8F0h], rax
 * 000000014033AC69: mov     [rsi+8F8h], rcx
 * 000000014033AC70: mov     ecx, 1
 * 000000014033AC75: mov     [rsi+8D8h], ecx
 * 000000014033AC7B: jmp     loc_14033AA5C
 * 000000014033AC80: mov     eax, [rsi+974h]
 * 000000014033AC86: mov     ecx, 2
 * 000000014033AC8B: test    cl, al
 * 000000014033AC8D: jnz     loc_140333318
 * 000000014033AC93: mov     rax, [rsi+420h]
 * 000000014033AC9A: call    KeGuardDispatchICall
 * 000000014033AC9F: xor     r10d, r10d
 * 000000014033ACA2: test    al, al
 * 000000014033ACA4: jz      loc_140333625
 * 000000014033ACAA: mov     r11, 0B3B74BDEE4453415h
 * 000000014033ACB4: mov     r14d, 8000h
 * 000000014033ACBA: cmp     [rsi+8D8h], r10d
 * 000000014033ACC1: jnz     loc_140333635
 * 000000014033ACC7: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033ACD1: add     rax, rsi
 * 000000014033ACD4: mov     [rsi+8E0h], rax
 * 000000014033ACDB: lea     rax, [r11+r13]
 * 000000014033ACDF: mov     [rsi+8E8h], rax
 * 000000014033ACE6: movsxd  rax, dword ptr [r13+0]
 * 000000014033ACEA: mov     [rsi+8F0h], rax
 * 000000014033ACF1: mov     [rsi+8F8h], r10
 * 000000014033ACF8: jmp     loc_14033479E
 * 000000014033ACFD: cmp     r14d, 26h ; '&'
 * 000000014033AD01: jz      loc_14033E1A5
 * 000000014033AD07: jle     loc_14033D4C6
 * 000000014033AD0D: cmp     r14d, 2Ah ; '*'
 * 000000014033AD11: jle     loc_14033D332
 * 000000014033AD17: cmp     r14d, 2Bh ; '+'
 * 000000014033AD1B: jz      loc_14033C2AB
 * 000000014033AD21: cmp     r14d, 2Ch ; ','
 * 000000014033AD25: jz      loc_14033B6FD
 * 000000014033AD2B: cmp     r14d, 2Eh ; '.'
 * 000000014033AD2F: jz      loc_14033B607
 * 000000014033AD35: cmp     r14d, 2Fh ; '/'
 * 000000014033AD39: jz      loc_14033B3A2
 * 000000014033AD3F: cmp     r14d, 30h ; '0'
 * 000000014033AD43: jnz     loc_14033D4C6
 * 000000014033AD49: xor     r10d, r10d
 * 000000014033AD4C: cmp     [r13+10h], r10d
 * 000000014033AD50: jz      loc_14033362F
 * 000000014033AD56: test    dword ptr [rsi+974h], 4000h
 * 000000014033AD60: jz      short loc_14033AD81
 * 000000014033AD62: mov     rcx, [rsi+4D0h]
 * 000000014033AD69: cli
 * 000000014033AD6A: mov     eax, [rsi+970h]
 * 000000014033AD70: shr     eax, 0Ah
 * 000000014033AD73: and     eax, 1Fh
 * 000000014033AD76: lock bts [rcx], eax
 * 000000014033AD7A: jnb     short loc_14033AD81
 * 000000014033AD7C: sti
 * 000000014033AD7D: pause
 * 000000014033AD7F: jmp     short loc_14033AD69
 * 000000014033AD81: mov     eax, [r13+18h]
 * 000000014033AD85: test    dl, al
 * 000000014033AD87: jnz     loc_14033B00E
 * 000000014033AD8D: mov     r14, [r13+8]
 * 000000014033AD91: mov     r8d, [r13+10h]
 * 000000014033AD95: mov     r9, r14
 * 000000014033AD98: add     [rsi+810h], r8d
 * 000000014033AD9F: mov     rax, r14
 * 000000014033ADA2: mov     r11d, [rsi+7FCh]
 * 000000014033ADA9: mov     r15, [rsi+800h]
 * 000000014033ADB0: lea     rcx, [r14+r8]
 * 000000014033ADB4: cmp     r14, rcx
 * 000000014033ADB7: jnb     short loc_14033ADCA
 * 000000014033ADB9: mov     r10d, 40h ; '@'
 * 000000014033ADBF: prefetchnta byte ptr [rax]
 * 000000014033ADC2: add     rax, r10
 * 000000014033ADC5: cmp     rax, rcx
 * 000000014033ADC8: jb      short loc_14033ADBF
 * 000000014033ADCA: mov     r10d, r8d
 * 000000014033ADCD: mov     rbx, r15
 * 000000014033ADD0: shr     r10d, 7
 * 000000014033ADD4: mov     r12d, 0FFFFFFFFh
 * 000000014033ADDA: test    r10d, r10d
 * 000000014033ADDD: jz      short loc_14033AE4A
 * 000000014033ADDF: mov     rdi, 7010008004002001h
 * 000000014033ADE9: mov     eax, 8
 * 000000014033ADEE: xor     rbx, [r9]
 * 000000014033ADF1: mov     ecx, r11d
 * 000000014033ADF4: rol     rbx, cl
 * 000000014033ADF7: xor     rbx, [r9+8]
 * 000000014033ADFB: add     r9, 10h
 * 000000014033ADFF: rol     rbx, cl
 * 000000014033AE02: sub     rax, rdx
 * 000000014033AE05: jnz     short loc_14033ADEE
 * 000000014033AE07: mov     rcx, r9
 * 000000014033AE0A: sub     rcx, r14
 * 000000014033AE0D: xor     rcx, r15
 * 000000014033AE10: mov     rax, rcx
 * 000000014033AE13: rol     rax, 11h
 * 000000014033AE17: xor     rcx, rax
 * 000000014033AE1A: mov     rax, rdi
 * 000000014033AE1D: mul     rcx
 * 000000014033AE20: xor     r11d, eax
 * 000000014033AE23: mov     [rbp+20F0h+var_1A70], rdx
 * 000000014033AE2A: xor     r11d, edx
 * 000000014033AE2D: mov     edx, 1
 * 000000014033AE32: and     r11d, 3Fh
 * 000000014033AE36: cmovz   r11d, edx
 * 000000014033AE3A: add     r10d, r12d
 * 000000014033AE3D: jnz     short loc_14033ADE9
 * 000000014033AE3F: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033AE43: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033AE4A: and     r8d, 7Fh
 * 000000014033AE4E: cmp     r8d, 8
 * 000000014033AE52: jb      short loc_14033AE71
 * 000000014033AE54: mov     eax, r8d
 * 000000014033AE57: shr     rax, 3
 * 000000014033AE5B: xor     rbx, [r9]
 * 000000014033AE5E: mov     ecx, r11d
 * 000000014033AE61: rol     rbx, cl
 * 000000014033AE64: add     r9, 8
 * 000000014033AE68: add     r8d, 0FFFFFFF8h
 * 000000014033AE6C: sub     rax, rdx
 * 000000014033AE6F: jnz     short loc_14033AE5B
 * 000000014033AE71: xor     r10d, r10d
 * 000000014033AE74: test    r8d, r8d
 * 000000014033AE77: jz      short loc_14033AE8E
 * 000000014033AE79: movzx   eax, byte ptr [r9]
 * 000000014033AE7D: mov     ecx, r11d
 * 000000014033AE80: xor     rbx, rax
 * 000000014033AE83: add     r9, rdx
 * 000000014033AE86: rol     rbx, cl
 * 000000014033AE89: add     r8d, r12d
 * 000000014033AE8C: jnz     short loc_14033AE79
 * 000000014033AE8E: mov     rax, rbx
 * 000000014033AE91: jmp     short loc_14033AE95
 * 000000014033AE93: xor     ebx, eax
 * 000000014033AE95: shr     rax, 1Fh
 * 000000014033AE99: test    rax, rax
 * 000000014033AE9C: jnz     short loc_14033AE93
 * 000000014033AE9E: mov     r8, [rbp+20F0h+var_20D0]
 * 000000014033AEA2: btr     ebx, 1Fh
 * 000000014033AEA6: mov     r13d, r10d
 * 000000014033AEA9: cmp     ebx, [r8+14h]
 * 000000014033AEAD: jz      loc_14033AF7F
 * 000000014033AEB3: cmp     [r8], r10d
 * 000000014033AEB6: jnz     short loc_14033AEC0
 * 000000014033AEB8: cmp     [r8+18h], r10d
 * 000000014033AEBC: cmovnz  r13d, edx
 * 000000014033AEC0: mov     ecx, [r8+10h]
 * 000000014033AEC4: mov     rdx, [r8+8]
 * 000000014033AEC8: test    rcx, rcx
 * 000000014033AECB: jz      loc_14033AF96
 * 000000014033AED1: mov     eax, [rsi+974h]
 * 000000014033AED7: mov     r9d, 40h ; '@'
 * 000000014033AEDD: test    r9b, al
 * 000000014033AEE0: jz      loc_14033AF96
 * 000000014033AEE6: mov     r12, cr8
 * 000000014033AEEA: lea     eax, [r9-3Eh]
 * 000000014033AEEE: mov     cr8, rax
 * 000000014033AEF2: lea     rax, [rcx-1]
 * 000000014033AEF6: mov     r14, rdx
 * 000000014033AEF9: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033AF00: add     rax, rdx
 * 000000014033AF03: mov     ecx, 0FFFh
 * 000000014033AF08: or      rax, rcx
 * 000000014033AF0B: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033AF0F: lea     rax, [r14-1]
 * 000000014033AF13: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033AF17: movzx   r15d, r12b
 * 000000014033AF1B: mov     rax, [rsi+460h]
 * 000000014033AF22: xor     edx, edx
 * 000000014033AF24: mov     rcx, r14
 * 000000014033AF27: call    KeGuardDispatchICall
 * 000000014033AF2C: xor     r10d, r10d
 * 000000014033AF2F: cmp     eax, 0C000022Dh
 * 000000014033AF34: jnz     short loc_14033AF5D
 * 000000014033AF36: test    r13d, r13d
 * 000000014033AF39: jnz     short loc_14033AF8E
 * 000000014033AF3B: lea     eax, [r10+1]
 * 000000014033AF3F: cmp     r12b, al
 * 000000014033AF42: ja      short loc_14033AF61
 * 000000014033AF44: movzx   r15d, r12b
 * 000000014033AF48: mov     cr8, r15
 * 000000014033AF4C: mov     al, [r14]
 * 000000014033AF4F: mov     rax, cr8
 * 000000014033AF53: lea     eax, [r10+2]
 * 000000014033AF57: mov     cr8, rax
 * 000000014033AF5B: jmp     short loc_14033AF1B
 * 000000014033AF5D: test    eax, eax
 * 000000014033AF5F: js      short loc_14033AF8E
 * 000000014033AF61: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033AF65: mov     r9d, 1000h
 * 000000014033AF6B: add     rax, r9
 * 000000014033AF6E: add     r14, r9
 * 000000014033AF71: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033AF75: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033AF79: jnz     short loc_14033AF17
 * 000000014033AF7B: mov     cr8, r15
 * 000000014033AF7F: mov     r11, 0B3B74BDEE4453415h
 * 000000014033AF89: jmp     loc_14033B368
 * 000000014033AF8E: mov     cr8, r15
 * 000000014033AF92: mov     r8, [rbp+20F0h+var_20D0]
 * 000000014033AF96: mov     eax, [rsi+8D8h]
 * 000000014033AF9C: mov     edx, [r8+14h]
 * 000000014033AFA0: test    eax, eax
 * 000000014033AFA2: jnz     short loc_14033AFBA
 * 000000014033AFA4: mov     rax, [rsi+580h]
 * 000000014033AFAB: mov     ecx, ebx
 * 000000014033AFAD: xor     rcx, rdx
 * 000000014033AFB0: mov     [rax+18h], rcx
 * 000000014033AFB4: mov     eax, [rsi+8D8h]
 * 000000014033AFBA: mov     rcx, [r8+8]
 * 000000014033AFBE: test    eax, eax
 * 000000014033AFC0: jnz     short loc_14033AF7F
 * 000000014033AFC2: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033AFCC: mov     r11, 0B3B74BDEE4453415h
 * 000000014033AFD6: add     rax, rsi
 * 000000014033AFD9: mov     [rsi+8E0h], rax
 * 000000014033AFE0: lea     rax, [r8+r11]
 * 000000014033AFE4: mov     [rsi+8E8h], rax
 * 000000014033AFEB: movsxd  rax, dword ptr [r8]
 * 000000014033AFEE: mov     [rsi+8F0h], rax
 * 000000014033AFF5: mov     r15d, 1
 * 000000014033AFFB: mov     [rsi+8F8h], rcx
 * 000000014033B002: mov     [rsi+8D8h], r15d
 * 000000014033B009: jmp     loc_14033B36E
 * 000000014033B00E: cmp     [rsi+960h], r10
 * 000000014033B015: jz      loc_14033B361
 * 000000014033B01B: mov     edx, [rsi+974h]
 * 000000014033B021: mov     ecx, edx
 * 000000014033B023: cmp     [rsi+80Ch], r10d
 * 000000014033B02A: jnz     short loc_14033B03E
 * 000000014033B02C: shl     ecx, 3
 * 000000014033B02F: xor     ecx, edx
 * 000000014033B031: and     ecx, 20h
 * 000000014033B034: xor     ecx, edx
 * 000000014033B036: mov     [rsi+974h], ecx
 * 000000014033B03C: jmp     short loc_14033B04D
 * 000000014033B03E: mov     eax, edx
 * 000000014033B040: shr     eax, 3
 * 000000014033B043: xor     eax, edx
 * 000000014033B045: test    al, 4
 * 000000014033B047: jnz     loc_14033B361
 * 000000014033B04D: test    cl, 4
 * 000000014033B050: jz      loc_14033B110
 * 000000014033B056: mov     rcx, [r13+8]
 * 000000014033B05A: mov     eax, 0FFFh
 * 000000014033B05F: mov     r14d, [r13+10h]
 * 000000014033B063: mov     rbx, rcx
 * 000000014033B066: add     r14, rax
 * 000000014033B069: and     rcx, rax
 * 000000014033B06C: add     r14, rcx
 * 000000014033B06F: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033B076: shr     r14, 0Ch
 * 000000014033B07A: test    r14, r14
 * 000000014033B07D: jz      loc_14033B368
 * 000000014033B083: mov     rdi, 0A3A03F5891C8B4E8h
 * 000000014033B08D: mov     r15d, 1
 * 000000014033B093: mov     rax, [rsi+2A8h]
 * 000000014033B09A: mov     rcx, rbx
 * 000000014033B09D: sub     r14, r15
 * 000000014033B0A0: call    KeGuardDispatchICall
 * 000000014033B0A5: xor     r10d, r10d
 * 000000014033B0A8: mov     r11, 0B3B74BDEE4453415h
 * 000000014033B0B2: test    al, al
 * 000000014033B0B4: jz      short loc_14033B0EE
 * 000000014033B0B6: cmp     [rsi+8D8h], r10d
 * 000000014033B0BD: jnz     short loc_14033B0EE
 * 000000014033B0BF: lea     rax, [rsi+rdi]
 * 000000014033B0C3: mov     [rsi+8E0h], rax
 * 000000014033B0CA: lea     rax, [r11+r13]
 * 000000014033B0CE: mov     [rsi+8E8h], rax
 * 000000014033B0D5: movsxd  rax, dword ptr [r13+0]
 * 000000014033B0D9: mov     [rsi+8F0h], rax
 * 000000014033B0E0: mov     [rsi+8F8h], rbx
 * 000000014033B0E7: mov     [rsi+8D8h], r15d
 * 000000014033B0EE: add     dword ptr [rsi+810h], 100h
 * 000000014033B0F8: add     rbx, 1000h
 * 000000014033B0FF: test    r14, r14
 * 000000014033B102: jnz     short loc_14033B093
 * 000000014033B104: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033B10B: jmp     loc_14033B36E
 * 000000014033B110: mov     r14, [r13+8]
 * 000000014033B114: mov     r8d, [r13+10h]
 * 000000014033B118: mov     r9, r14
 * 000000014033B11B: add     [rsi+810h], r8d
 * 000000014033B122: mov     rax, r14
 * 000000014033B125: mov     r11d, [rsi+7FCh]
 * 000000014033B12C: mov     r15, [rsi+800h]
 * 000000014033B133: lea     rcx, [r14+r8]
 * 000000014033B137: cmp     r14, rcx
 * 000000014033B13A: jnb     short loc_14033B14C
 * 000000014033B13C: mov     edx, 40h ; '@'
 * 000000014033B141: prefetchnta byte ptr [rax]
 * 000000014033B144: add     rax, rdx
 * 000000014033B147: cmp     rax, rcx
 * 000000014033B14A: jb      short loc_14033B141
 * 000000014033B14C: mov     r10d, r8d
 * 000000014033B14F: mov     rbx, r15
 * 000000014033B152: shr     r10d, 7
 * 000000014033B156: mov     r12d, 1
 * 000000014033B15C: test    r10d, r10d
 * 000000014033B15F: jz      short loc_14033B1CE
 * 000000014033B161: mov     rdi, 7010008004002001h
 * 000000014033B16B: mov     eax, 8
 * 000000014033B170: xor     rbx, [r9]
 * 000000014033B173: mov     ecx, r11d
 * 000000014033B176: rol     rbx, cl
 * 000000014033B179: xor     rbx, [r9+8]
 * 000000014033B17D: add     r9, 10h
 * 000000014033B181: rol     rbx, cl
 * 000000014033B184: sub     rax, r12
 * 000000014033B187: jnz     short loc_14033B170
 * 000000014033B189: mov     rcx, r9
 * 000000014033B18C: sub     rcx, r14
 * 000000014033B18F: xor     rcx, r15
 * 000000014033B192: mov     rax, rcx
 * 000000014033B195: rol     rax, 11h
 * 000000014033B199: xor     rcx, rax
 * 000000014033B19C: mov     rax, rdi
 * 000000014033B19F: mul     rcx
 * 000000014033B1A2: xor     r11d, eax
 * 000000014033B1A5: mov     [rbp+20F0h+var_1A68], rdx
 * 000000014033B1AC: xor     r11d, edx
 * 000000014033B1AF: mov     edx, 0FFFFFFFFh
 * 000000014033B1B4: and     r11d, 3Fh
 * 000000014033B1B8: cmovz   r11d, r12d
 * 000000014033B1BC: add     r10d, edx
 * 000000014033B1BF: jnz     short loc_14033B16B
 * 000000014033B1C1: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033B1C5: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033B1CC: jmp     short loc_14033B1D3
 * 000000014033B1CE: mov     edx, 0FFFFFFFFh
 * 000000014033B1D3: and     r8d, 7Fh
 * 000000014033B1D7: cmp     r8d, 8
 * 000000014033B1DB: jb      short loc_14033B1FA
 * 000000014033B1DD: mov     eax, r8d
 * 000000014033B1E0: shr     rax, 3
 * 000000014033B1E4: xor     rbx, [r9]
 * 000000014033B1E7: mov     ecx, r11d
 * 000000014033B1EA: rol     rbx, cl
 * 000000014033B1ED: add     r9, 8
 * 000000014033B1F1: add     r8d, 0FFFFFFF8h
 * 000000014033B1F5: sub     rax, r12
 * 000000014033B1F8: jnz     short loc_14033B1E4
 * 000000014033B1FA: xor     r10d, r10d
 * 000000014033B1FD: test    r8d, r8d
 * 000000014033B200: jz      short loc_14033B217
 * 000000014033B202: movzx   eax, byte ptr [r9]
 * 000000014033B206: mov     ecx, r11d
 * 000000014033B209: xor     rbx, rax
 * 000000014033B20C: add     r9, r12
 * 000000014033B20F: rol     rbx, cl
 * 000000014033B212: add     r8d, edx
 * 000000014033B215: jnz     short loc_14033B202
 * 000000014033B217: mov     rax, rbx
 * 000000014033B21A: jmp     short loc_14033B21E
 * 000000014033B21C: xor     ebx, eax
 * 000000014033B21E: shr     rax, 1Fh
 * 000000014033B222: test    rax, rax
 * 000000014033B225: jnz     short loc_14033B21C
 * 000000014033B227: mov     r8d, [r13+14h]
 * 000000014033B22B: btr     ebx, 1Fh
 * 000000014033B22F: cmp     ebx, r8d
 * 000000014033B232: jz      loc_14033AF7F
 * 000000014033B238: mov     ecx, [r13+10h]
 * 000000014033B23C: mov     rdx, [r13+8]
 * 000000014033B240: test    rcx, rcx
 * 000000014033B243: jz      loc_14033B2E2
 * 000000014033B249: mov     eax, [rsi+974h]
 * 000000014033B24F: mov     r9d, 40h ; '@'
 * 000000014033B255: test    r9b, al
 * 000000014033B258: jz      loc_14033B2E2
 * 000000014033B25E: mov     r12, cr8
 * 000000014033B262: lea     eax, [r9-3Eh]
 * 000000014033B266: mov     cr8, rax
 * 000000014033B26A: lea     rax, [rcx-1]
 * 000000014033B26E: mov     r14, rdx
 * 000000014033B271: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033B278: add     rax, rdx
 * 000000014033B27B: mov     ecx, 0FFFh
 * 000000014033B280: or      rax, rcx
 * 000000014033B283: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033B287: lea     r13, [r14-1]
 * 000000014033B28B: movzx   r15d, r12b
 * 000000014033B28F: mov     rax, [rsi+460h]
 * 000000014033B296: xor     edx, edx
 * 000000014033B298: mov     rcx, r14
 * 000000014033B29B: call    KeGuardDispatchICall
 * 000000014033B2A0: cmp     eax, 0C000022Dh
 * 000000014033B2A5: jnz     short loc_14033B2CF
 * 000000014033B2A7: mov     eax, 1
 * 000000014033B2AC: cmp     r12b, al
 * 000000014033B2AF: ja      loc_14033B343
 * 000000014033B2B5: movzx   r15d, r12b
 * 000000014033B2B9: mov     cr8, r15
 * 000000014033B2BD: mov     al, [r14]
 * 000000014033B2C0: mov     rax, cr8
 * 000000014033B2C4: mov     eax, 2
 * 000000014033B2C9: mov     cr8, rax
 * 000000014033B2CD: jmp     short loc_14033B28F
 * 000000014033B2CF: xor     r10d, r10d
 * 000000014033B2D2: test    eax, eax
 * 000000014033B2D4: jns     short loc_14033B346
 * 000000014033B2D6: mov     cr8, r15
 * 000000014033B2DA: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033B2DE: mov     r8d, [r13+14h]
 * 000000014033B2E2: mov     eax, [rsi+8D8h]
 * 000000014033B2E8: test    eax, eax
 * 000000014033B2EA: jnz     short loc_14033B305
 * 000000014033B2EC: mov     eax, ebx
 * 000000014033B2EE: mov     ecx, r8d
 * 000000014033B2F1: xor     rcx, rax
 * 000000014033B2F4: mov     rax, [rsi+580h]
 * 000000014033B2FB: mov     [rax+18h], rcx
 * 000000014033B2FF: mov     eax, [rsi+8D8h]
 * 000000014033B305: mov     rcx, [r13+8]
 * 000000014033B309: test    eax, eax
 * 000000014033B30B: jnz     loc_14033AF7F
 * 000000014033B311: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033B31B: mov     r11, 0B3B74BDEE4453415h
 * 000000014033B325: add     rax, rsi
 * 000000014033B328: mov     [rsi+8E0h], rax
 * 000000014033B32F: lea     rax, [r11+r13]
 * 000000014033B333: mov     [rsi+8E8h], rax
 * 000000014033B33A: movsxd  rax, dword ptr [r13+0]
 * 000000014033B33E: jmp     loc_14033AFEE
 * 000000014033B343: xor     r10d, r10d
 * 000000014033B346: mov     r9d, 1000h
 * 000000014033B34C: add     r14, r9
 * 000000014033B34F: add     r13, r9
 * 000000014033B352: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033B356: jnz     loc_14033B28B
 * 000000014033B35C: jmp     loc_14033AF7B
 * 000000014033B361: mov     [rsi+80Ch], r10d
 * 000000014033B368: mov     r15d, 1
 * 000000014033B36E: test    dword ptr [rsi+974h], 4000h
 * 000000014033B378: jz      loc_14033362F
 * 000000014033B37E: mov     ecx, [rsi+970h]
 * 000000014033B384: mov     edx, r15d
 * 000000014033B387: mov     r8, [rsi+4D0h]
 * 000000014033B38E: shr     ecx, 0Ah
 * 000000014033B391: and     ecx, 1Fh
 * 000000014033B394: shl     edx, cl
 * 000000014033B396: not     edx
 * 000000014033B398: lock and [r8], edx
 * 000000014033B39C: sti
 * 000000014033B39D: jmp     loc_14033362F
 * 000000014033B3A2: mov     rcx, gs:20h
 * 000000014033B3AB: mov     rax, [rsi+630h]
 * 000000014033B3B2: mov     rcx, [rax+rcx]
 * 000000014033B3B6: mov     rax, [rsi+670h]
 * 000000014033B3BD: add     rcx, [rsi+690h]
 * 000000014033B3C4: mov     rcx, [rcx+rax]
 * 000000014033B3C8: mov     [rbp+20F0h+var_2010], rcx
 * 000000014033B3CF: mov     rax, [rsi+488h]
 * 000000014033B3D6: call    KeGuardDispatchICall
 * 000000014033B3DB: mov     r12d, 0FFFFFFFFh
 * 000000014033B3E1: mov     r14, rax
 * 000000014033B3E4: cmp     rax, r12
 * 000000014033B3E7: jnz     loc_14033B545
 * 000000014033B3ED: xor     eax, eax
 * 000000014033B3EF: mov     [rbp+20F0h+var_2010], rax
 * 000000014033B3F6: mov     rcx, [rsi+968h]
 * 000000014033B3FD: test    rcx, rcx
 * 000000014033B400: jz      short loc_14033B431
 * 000000014033B402: mov     rax, [rsi+478h]
 * 000000014033B409: lea     rdx, [rbp+20F0h+var_2010]
 * 000000014033B410: call    KeGuardDispatchICall
 * 000000014033B415: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033B41C: xor     r10d, r10d
 * 000000014033B41F: test    eax, eax
 * 000000014033B421: cmovs   rcx, r10
 * 000000014033B425: mov     [rbp+20F0h+var_2010], rcx
 * 000000014033B42C: test    rcx, rcx
 * 000000014033B42F: jnz     short loc_14033B449
 * 000000014033B431: mov     rax, [rsi+3B8h]
 * 000000014033B438: xor     ecx, ecx
 * 000000014033B43A: call    KeGuardDispatchICall
 * 000000014033B43F: mov     [rbp+20F0h+var_2010], rax
 * 000000014033B446: xor     r10d, r10d
 * 000000014033B449: mov     [rsi+968h], r10
 * 000000014033B450: mov     ebx, r10d
 * 000000014033B453: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033B45A: test    rcx, rcx
 * 000000014033B45D: jz      loc_14033B537
 * 000000014033B463: mov     r15d, 1
 * 000000014033B469: mov     rax, [rsi+398h]
 * 000000014033B470: add     ebx, r15d
 * 000000014033B473: call    KeGuardDispatchICall
 * 000000014033B478: test    eax, eax
 * 000000014033B47A: js      short loc_14033B4D8
 * 000000014033B47C: mov     rax, [rsi+430h]
 * 000000014033B483: lea     rdx, [rbp+20F0h+var_15A0]
 * 000000014033B48A: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033B491: call    KeGuardDispatchICall
 * 000000014033B496: mov     rax, [rsi+488h]
 * 000000014033B49D: call    KeGuardDispatchICall
 * 000000014033B4A2: mov     r14, rax
 * 000000014033B4A5: lea     rcx, [rbp+20F0h+var_15A0]
 * 000000014033B4AC: mov     rax, [rsi+438h]
 * 000000014033B4B3: call    KeGuardDispatchICall
 * 000000014033B4B8: mov     rax, [rsi+3A0h]
 * 000000014033B4BF: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033B4C6: call    KeGuardDispatchICall
 * 000000014033B4CB: cmp     r14, r12
 * 000000014033B4CE: jnz     short loc_14033B502
 * 000000014033B4D0: cmp     ebx, 100h
 * 000000014033B4D6: ja      short loc_14033B502
 * 000000014033B4D8: mov     rax, [rsi+3B8h]
 * 000000014033B4DF: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033B4E6: call    KeGuardDispatchICall
 * 000000014033B4EB: xor     r10d, r10d
 * 000000014033B4EE: mov     [rbp+20F0h+var_2010], rax
 * 000000014033B4F5: mov     rcx, rax
 * 000000014033B4F8: test    rax, rax
 * 000000014033B4FB: jz      short loc_14033B537
 * 000000014033B4FD: jmp     loc_14033B469
 * 000000014033B502: mov     rax, [rsi+480h]
 * 000000014033B509: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033B510: call    KeGuardDispatchICall
 * 000000014033B515: mov     [rsi+968h], rax
 * 000000014033B51C: mov     rax, [rsi+1D8h]
 * 000000014033B523: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033B52A: call    KeGuardDispatchICall
 * 000000014033B52F: cmp     r14, r12
 * 000000014033B532: jnz     short loc_14033B54B
 * 000000014033B534: xor     r10d, r10d
 * 000000014033B537: shl     ebx, 0Ch
 * 000000014033B53A: add     [rsi+810h], ebx
 * 000000014033B540: jmp     loc_140333625
 * 000000014033B545: mov     r15d, 1
 * 000000014033B54B: test    dword ptr [rsi+970h], 40000000h
 * 000000014033B555: jz      short loc_14033B59F
 * 000000014033B557: mov     rcx, [rsi+0A50h]
 * 000000014033B55E: mov     edx, 30h ; '0'
 * 000000014033B563: lea     r8d, [rdx-2Ah]
 * 000000014033B567: mov     rax, [r13+0]
 * 000000014033B56B: add     edx, 0FFFFFFF8h
 * 000000014033B56E: mov     [rcx], rax
 * 000000014033B571: add     r13, 8
 * 000000014033B575: add     rcx, 8
 * 000000014033B579: sub     r8, r15
 * 000000014033B57C: jnz     short loc_14033B567
 * 000000014033B57E: xor     r10d, r10d
 * 000000014033B581: test    edx, edx
 * 000000014033B583: jz      short loc_14033B596
 * 000000014033B585: mov     al, [r13+0]
 * 000000014033B589: add     r13, r15
 * 000000014033B58C: mov     [rcx], al
 * 000000014033B58E: add     rcx, r15
 * 000000014033B591: add     edx, r12d
 * 000000014033B594: jnz     short loc_14033B585
 * 000000014033B596: mov     r13, [rsi+0A50h]
 * 000000014033B59D: jmp     short loc_14033B5A2
 * 000000014033B59F: xor     r10d, r10d
 * 000000014033B5A2: mov     [r13+18h], r14
 * 000000014033B5A6: mov     r11, 0B3B74BDEE4453415h
 * 000000014033B5B0: mov     r14d, 8000h
 * 000000014033B5B6: mov     rcx, [rbp+20F0h+var_2010]
 * 000000014033B5BD: cmp     [rsi+8D8h], r10d
 * 000000014033B5C4: jnz     loc_140333635
 * 000000014033B5CA: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033B5D4: add     rax, rsi
 * 000000014033B5D7: mov     [rsi+8E0h], rax
 * 000000014033B5DE: lea     rax, [r11+r13]
 * 000000014033B5E2: mov     [rsi+8E8h], rax
 * 000000014033B5E9: movsxd  rax, dword ptr [r13+0]
 * 000000014033B5ED: mov     [rsi+8F0h], rax
 * 000000014033B5F4: mov     [rsi+8F8h], rcx
 * 000000014033B5FB: mov     [rsi+8D8h], r15d
 * 000000014033B602: jmp     loc_140333635
 * 000000014033B607: mov     eax, [rsi+818h]
 * 000000014033B60D: test    dl, al
 * 000000014033B60F: jnz     loc_140333318
 * 000000014033B615: mov     r15, [rsi+538h]
 * 000000014033B61C: xor     eax, eax
 * 000000014033B61E: mov     r14d, eax
 * 000000014033B621: mov     rax, [rsi+170h]
 * 000000014033B628: call    KeGuardDispatchICall
 * 000000014033B62D: test    dword ptr [rsi+970h], 40000000h
 * 000000014033B637: jnz     short loc_14033B651
 * 000000014033B639: mov     ecx, [rsi+930h]
 * 000000014033B63F: cmp     ecx, 7
 * 000000014033B642: jnb     short loc_14033B651
 * 000000014033B644: mov     r12d, 1
 * 000000014033B64A: mov     ebx, r12d
 * 000000014033B64D: shl     bl, cl
 * 000000014033B64F: jmp     short loc_14033B66E
 * 000000014033B651: mov     rax, [rsi+120h]
 * 000000014033B658: xor     edx, edx
 * 000000014033B65A: mov     rcx, [rsi+9E0h]
 * 000000014033B661: call    KeGuardDispatchICall
 * 000000014033B666: mov     bl, 80h
 * 000000014033B668: mov     r12d, 1
 * 000000014033B66E: mov     rax, [rsi+130h]
 * 000000014033B675: xor     edx, edx
 * 000000014033B677: mov     rcx, r15
 * 000000014033B67A: call    KeGuardDispatchICall
 * 000000014033B67F: cmp     bl, 80h
 * 000000014033B682: jz      short loc_14033B6B7
 * 000000014033B684: mov     r8, [rsi+510h]
 * 000000014033B68B: mov     rdx, [r8]
 * 000000014033B68E: cmp     rdx, r8
 * 000000014033B691: jz      short loc_14033B6CC
 * 000000014033B693: not     bl
 * 000000014033B695: mov     rax, [rsi+6A0h]
 * 000000014033B69C: mov     rcx, rdx
 * 000000014033B69F: sub     rcx, [rsi+6B8h]
 * 000000014033B6A6: lock and [rcx+rax], bl
 * 000000014033B6AA: mov     rdx, [rdx]
 * 000000014033B6AD: add     r14d, r12d
 * 000000014033B6B0: cmp     rdx, r8
 * 000000014033B6B3: jnz     short loc_14033B695
 * 000000014033B6B5: jmp     short loc_14033B6CC
 * 000000014033B6B7: mov     rax, [rsi+128h]
 * 000000014033B6BE: xor     edx, edx
 * 000000014033B6C0: mov     rcx, [rsi+9E0h]
 * 000000014033B6C7: call    KeGuardDispatchICall
 * 000000014033B6CC: mov     rcx, [rsi+538h]
 * 000000014033B6D3: xor     edx, edx
 * 000000014033B6D5: mov     rax, [rsi+138h]
 * 000000014033B6DC: call    KeGuardDispatchICall
 * 000000014033B6E1: mov     rax, [rsi+178h]
 * 000000014033B6E8: call    KeGuardDispatchICall
 * 000000014033B6ED: shl     r14d, 7
 * 000000014033B6F1: add     [rsi+810h], r14d
 * 000000014033B6F8: jmp     loc_140333DB4
 * 000000014033B6FD: mov     ecx, [r13+20h]
 * 000000014033B701: mov     edx, 2
 * 000000014033B706: xor     r10d, r10d
 * 000000014033B709: mov     [rbp+20F0h+var_20B0], rsi
 * 000000014033B70D: test    dl, cl
 * 000000014033B70F: jz      loc_14033BB7F
 * 000000014033B715: cmp     [rsi+960h], r10
 * 000000014033B71C: jz      loc_14033A30C
 * 000000014033B722: mov     eax, [rsi+974h]
 * 000000014033B728: test    al, 4
 * 000000014033B72A: jnz     loc_14033A30C
 * 000000014033B730: test    dl, cl
 * 000000014033B732: jz      loc_14033BB7F
 * 000000014033B738: mov     edx, eax
 * 000000014033B73A: mov     ecx, eax
 * 000000014033B73C: cmp     [rsi+80Ch], r10d
 * 000000014033B743: jnz     short loc_14033B757
 * 000000014033B745: shl     ecx, 3
 * 000000014033B748: xor     ecx, eax
 * 000000014033B74A: and     ecx, 20h
 * 000000014033B74D: xor     ecx, eax
 * 000000014033B74F: mov     [rsi+974h], ecx
 * 000000014033B755: jmp     short loc_14033B766
 * 000000014033B757: mov     eax, edx
 * 000000014033B759: shr     eax, 3
 * 000000014033B75C: xor     eax, edx
 * 000000014033B75E: test    al, 4
 * 000000014033B760: jnz     loc_14033A30C
 * 000000014033B766: cmp     [rsi+960h], r10
 * 000000014033B76D: jz      loc_14033BB73
 * 000000014033B773: mov     edx, ecx
 * 000000014033B775: cmp     [rsi+80Ch], r10d
 * 000000014033B77C: jnz     short loc_14033B790
 * 000000014033B77E: shl     edx, 3
 * 000000014033B781: xor     edx, ecx
 * 000000014033B783: and     edx, 20h
 * 000000014033B786: xor     edx, ecx
 * 000000014033B788: mov     [rsi+974h], edx
 * 000000014033B78E: jmp     short loc_14033B79F
 * 000000014033B790: mov     eax, ecx
 * 000000014033B792: shr     eax, 3
 * 000000014033B795: xor     eax, ecx
 * 000000014033B797: test    al, 4
 * 000000014033B799: jnz     loc_14033BB73
 * 000000014033B79F: test    dl, 4
 * 000000014033B7A2: jz      loc_14033B867
 * 000000014033B7A8: mov     rcx, [r13+8]
 * 000000014033B7AC: mov     r14d, 0FFFh
 * 000000014033B7B2: mov     eax, [r13+10h]
 * 000000014033B7B6: and     r14, rcx
 * 000000014033B7B9: add     r14, 0FFFh
 * 000000014033B7C0: mov     rbx, rcx
 * 000000014033B7C3: add     r14, rax
 * 000000014033B7C6: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033B7CD: shr     r14, 0Ch
 * 000000014033B7D1: test    r14, r14
 * 000000014033B7D4: jz      loc_14033BAE1
 * 000000014033B7DA: mov     rdi, 0A3A03F5891C8B4E8h
 * 000000014033B7E4: mov     r15d, 1
 * 000000014033B7EA: mov     rax, [rsi+2A8h]
 * 000000014033B7F1: mov     rcx, rbx
 * 000000014033B7F4: sub     r14, r15
 * 000000014033B7F7: call    KeGuardDispatchICall
 * 000000014033B7FC: xor     r10d, r10d
 * 000000014033B7FF: mov     r11, 0B3B74BDEE4453415h
 * 000000014033B809: test    al, al
 * 000000014033B80B: jz      short loc_14033B845
 * 000000014033B80D: cmp     [rsi+8D8h], r10d
 * 000000014033B814: jnz     short loc_14033B845
 * 000000014033B816: lea     rax, [rsi+rdi]
 * 000000014033B81A: mov     [rsi+8E0h], rax
 * 000000014033B821: lea     rax, [r11+r13]
 * 000000014033B825: mov     [rsi+8E8h], rax
 * 000000014033B82C: movsxd  rax, dword ptr [r13+0]
 * 000000014033B830: mov     [rsi+8F0h], rax
 * 000000014033B837: mov     [rsi+8F8h], rbx
 * 000000014033B83E: mov     [rsi+8D8h], r15d
 * 000000014033B845: add     dword ptr [rsi+810h], 100h
 * 000000014033B84F: add     rbx, 1000h
 * 000000014033B856: test    r14, r14
 * 000000014033B859: jnz     short loc_14033B7EA
 * 000000014033B85B: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033B862: jmp     loc_14033BAE1
 * 000000014033B867: mov     r11, [r13+8]
 * 000000014033B86B: mov     r8d, [r13+10h]
 * 000000014033B86F: mov     r9, r11
 * 000000014033B872: add     [rsi+810h], r8d
 * 000000014033B879: mov     rax, r11
 * 000000014033B87C: mov     r14d, [rsi+7FCh]
 * 000000014033B883: mov     r15, [rsi+800h]
 * 000000014033B88A: lea     rcx, [r11+r8]
 * 000000014033B88E: cmp     r11, rcx
 * 000000014033B891: jnb     short loc_14033B8A3
 * 000000014033B893: mov     edx, 40h ; '@'
 * 000000014033B898: prefetchnta byte ptr [rax]
 * 000000014033B89B: add     rax, rdx
 * 000000014033B89E: cmp     rax, rcx
 * 000000014033B8A1: jb      short loc_14033B898
 * 000000014033B8A3: mov     r10d, r8d
 * 000000014033B8A6: mov     rbx, r15
 * 000000014033B8A9: shr     r10d, 7
 * 000000014033B8AD: test    r10d, r10d
 * 000000014033B8B0: jz      short loc_14033B921
 * 000000014033B8B2: mov     rsi, 7010008004002001h
 * 000000014033B8BC: mov     r12d, 1
 * 000000014033B8C2: mov     edx, 8
 * 000000014033B8C7: mov     rax, [r9]
 * 000000014033B8CA: mov     ecx, r14d
 * 000000014033B8CD: xor     rax, rbx
 * 000000014033B8D0: mov     rbx, [r9+8]
 * 000000014033B8D4: rol     rax, cl
 * 000000014033B8D7: add     r9, 10h
 * 000000014033B8DB: xor     rbx, rax
 * 000000014033B8DE: rol     rbx, cl
 * 000000014033B8E1: sub     rdx, r12
 * 000000014033B8E4: jnz     short loc_14033B8C7
 * 000000014033B8E6: mov     rcx, r9
 * 000000014033B8E9: sub     rcx, r11
 * 000000014033B8EC: xor     rcx, r15
 * 000000014033B8EF: mov     rax, rcx
 * 000000014033B8F2: rol     rax, 11h
 * 000000014033B8F6: xor     rcx, rax
 * 000000014033B8F9: mov     rax, rsi
 * 000000014033B8FC: mul     rcx
 * 000000014033B8FF: xor     eax, edx
 * 000000014033B901: mov     [rbp+20F0h+var_1A60], rdx
 * 000000014033B908: xor     r14d, eax
 * 000000014033B90B: mov     eax, 0FFFFFFFFh
 * 000000014033B910: and     r14d, 3Fh
 * 000000014033B914: cmovz   r14d, r12d
 * 000000014033B918: add     r10d, eax
 * 000000014033B91B: jnz     short loc_14033B8C2
 * 000000014033B91D: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033B921: and     r8d, 7Fh
 * 000000014033B925: mov     r11d, 1
 * 000000014033B92B: cmp     r8d, 8
 * 000000014033B92F: jb      short loc_14033B94E
 * 000000014033B931: mov     edx, r8d
 * 000000014033B934: shr     rdx, 3
 * 000000014033B938: xor     rbx, [r9]
 * 000000014033B93B: mov     ecx, r14d
 * 000000014033B93E: rol     rbx, cl
 * 000000014033B941: add     r9, 8
 * 000000014033B945: add     r8d, 0FFFFFFF8h
 * 000000014033B949: sub     rdx, r11
 * 000000014033B94C: jnz     short loc_14033B938
 * 000000014033B94E: xor     r10d, r10d
 * 000000014033B951: test    r8d, r8d
 * 000000014033B954: jz      short loc_14033B974
 * 000000014033B956: mov     r10d, 0FFFFFFFFh
 * 000000014033B95C: movzx   eax, byte ptr [r9]
 * 000000014033B960: mov     ecx, r14d
 * 000000014033B963: xor     rbx, rax
 * 000000014033B966: add     r9, r11
 * 000000014033B969: rol     rbx, cl
 * 000000014033B96C: add     r8d, r10d
 * 000000014033B96F: jnz     short loc_14033B95C
 * 000000014033B971: xor     r10d, r10d
 * 000000014033B974: mov     rax, rbx
 * 000000014033B977: jmp     short loc_14033B97B
 * 000000014033B979: xor     ebx, eax
 * 000000014033B97B: shr     rax, 1Fh
 * 000000014033B97F: test    rax, rax
 * 000000014033B982: jnz     short loc_14033B979
 * 000000014033B984: mov     r8d, [r13+14h]
 * 000000014033B988: btr     ebx, 1Fh
 * 000000014033B98C: cmp     ebx, r8d
 * 000000014033B98F: jz      loc_14033BAD7
 * 000000014033B995: mov     ecx, [r13+10h]
 * 000000014033B999: mov     rdx, [r13+8]
 * 000000014033B99D: test    rcx, rcx
 * 000000014033B9A0: jz      loc_14033BA43
 * 000000014033B9A6: mov     eax, [rsi+974h]
 * 000000014033B9AC: mov     r9d, 40h ; '@'
 * 000000014033B9B2: test    r9b, al
 * 000000014033B9B5: jz      loc_14033BA43
 * 000000014033B9BB: mov     r12, cr8
 * 000000014033B9BF: lea     eax, [r9-3Eh]
 * 000000014033B9C3: mov     cr8, rax
 * 000000014033B9C7: lea     rax, [rcx-1]
 * 000000014033B9CB: mov     r14, rdx
 * 000000014033B9CE: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033B9D5: add     rax, rdx
 * 000000014033B9D8: mov     ecx, 0FFFh
 * 000000014033B9DD: or      rax, rcx
 * 000000014033B9E0: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033B9E4: lea     r13, [r14-1]
 * 000000014033B9E8: movzx   r15d, r12b
 * 000000014033B9EC: mov     rax, [rsi+460h]
 * 000000014033B9F3: xor     edx, edx
 * 000000014033B9F5: mov     rcx, r14
 * 000000014033B9F8: call    KeGuardDispatchICall
 * 000000014033B9FD: cmp     eax, 0C000022Dh
 * 000000014033BA02: jnz     short loc_14033BA2C
 * 000000014033BA04: mov     eax, 1
 * 000000014033BA09: cmp     r12b, al
 * 000000014033BA0C: ja      loc_14033BAB6
 * 000000014033BA12: movzx   r15d, r12b
 * 000000014033BA16: mov     cr8, r15
 * 000000014033BA1A: mov     al, [r14]
 * 000000014033BA1D: mov     rax, cr8
 * 000000014033BA21: mov     eax, 2
 * 000000014033BA26: mov     cr8, rax
 * 000000014033BA2A: jmp     short loc_14033B9EC
 * 000000014033BA2C: xor     r10d, r10d
 * 000000014033BA2F: test    eax, eax
 * 000000014033BA31: jns     loc_14033BAB9
 * 000000014033BA37: mov     cr8, r15
 * 000000014033BA3B: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033BA3F: mov     r8d, [r13+14h]
 * 000000014033BA43: mov     eax, [rsi+8D8h]
 * 000000014033BA49: test    eax, eax
 * 000000014033BA4B: jnz     short loc_14033BA66
 * 000000014033BA4D: mov     eax, r8d
 * 000000014033BA50: mov     ecx, ebx
 * 000000014033BA52: xor     rcx, rax
 * 000000014033BA55: mov     rax, [rsi+580h]
 * 000000014033BA5C: mov     [rax+18h], rcx
 * 000000014033BA60: mov     eax, [rsi+8D8h]
 * 000000014033BA66: mov     rcx, [r13+8]
 * 000000014033BA6A: mov     r11, 0B3B74BDEE4453415h
 * 000000014033BA74: test    eax, eax
 * 000000014033BA76: jnz     short loc_14033BAE1
 * 000000014033BA78: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033BA82: add     rax, rsi
 * 000000014033BA85: mov     [rsi+8E0h], rax
 * 000000014033BA8C: lea     rax, [r11+r13]
 * 000000014033BA90: mov     [rsi+8E8h], rax
 * 000000014033BA97: movsxd  rax, dword ptr [r13+0]
 * 000000014033BA9B: mov     [rsi+8F0h], rax
 * 000000014033BAA2: mov     eax, 1
 * 000000014033BAA7: mov     [rsi+8F8h], rcx
 * 000000014033BAAE: mov     [rsi+8D8h], eax
 * 000000014033BAB4: jmp     short loc_14033BAE1
 * 000000014033BAB6: xor     r10d, r10d
 * 000000014033BAB9: mov     r9d, 1000h
 * 000000014033BABF: add     r14, r9
 * 000000014033BAC2: add     r13, r9
 * 000000014033BAC5: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033BAC9: jnz     loc_14033B9E8
 * 000000014033BACF: mov     cr8, r15
 * 000000014033BAD3: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033BAD7: mov     r11, 0B3B74BDEE4453415h
 * 000000014033BAE1: mov     eax, [r13+20h]
 * 000000014033BAE5: mov     r14d, 1
 * 000000014033BAEB: test    r14b, al
 * 000000014033BAEE: jz      loc_14033362F
 * 000000014033BAF4: mov     rbx, [r13+18h]
 * 000000014033BAF8: mov     rax, [rsi+1F0h]
 * 000000014033BAFF: mov     rcx, rbx
 * 000000014033BB02: mov     [rbp+20F0h+var_20F0], rbx
 * 000000014033BB06: call    KeGuardDispatchICall
 * 000000014033BB0B: movzx   r12d, word ptr [rax+14h]
 * 000000014033BB10: add     r12, 18h
 * 000000014033BB14: add     r12, rax
 * 000000014033BB17: movzx   eax, word ptr [rax+6]
 * 000000014033BB1B: lea     rcx, [rax+rax*4]
 * 000000014033BB1F: lea     rax, [r12+rcx*8]
 * 000000014033BB23: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033BB27: cmp     r12, rax
 * 000000014033BB2A: jz      loc_140333DB4
 * 000000014033BB30: mov     r15d, [rsi+80Ch]
 * 000000014033BB37: xor     edx, edx
 * 000000014033BB39: test    r15d, r15d
 * 000000014033BB3C: jnz     short loc_14033BB4E
 * 000000014033BB3E: mov     dword ptr [rsi+80Ch], 1000h
 * 000000014033BB48: mov     r15d, 1000h
 * 000000014033BB4E: mov     eax, r15d
 * 000000014033BB51: cmp     rbx, [rsi+5D8h]
 * 000000014033BB58: jz      loc_14033BDBA
 * 000000014033BB5E: cmp     rbx, [rsi+5E0h]
 * 000000014033BB65: jz      loc_14033BDBA
 * 000000014033BB6B: mov     dword ptr [rbp+20F0h+var_20B8], edx
 * 000000014033BB6E: jmp     loc_14033BDC1
 * 000000014033BB73: mov     [rsi+80Ch], r10d
 * 000000014033BB7A: jmp     loc_14033BAE1
 * 000000014033BB7F: mov     r11, [r13+8]
 * 000000014033BB83: mov     r8d, [r13+10h]
 * 000000014033BB87: mov     r9, r11
 * 000000014033BB8A: add     [rsi+810h], r8d
 * 000000014033BB91: mov     rax, r11
 * 000000014033BB94: mov     r14d, [rsi+7FCh]
 * 000000014033BB9B: mov     r15, [rsi+800h]
 * 000000014033BBA2: lea     rcx, [r11+r8]
 * 000000014033BBA6: cmp     r11, rcx
 * 000000014033BBA9: jnb     short loc_14033BBBB
 * 000000014033BBAB: mov     edx, 40h ; '@'
 * 000000014033BBB0: prefetchnta byte ptr [rax]
 * 000000014033BBB3: add     rax, rdx
 * 000000014033BBB6: cmp     rax, rcx
 * 000000014033BBB9: jb      short loc_14033BBB0
 * 000000014033BBBB: mov     r10d, r8d
 * 000000014033BBBE: mov     rbx, r15
 * 000000014033BBC1: shr     r10d, 7
 * 000000014033BBC5: mov     r13d, 1
 * 000000014033BBCB: mov     r12d, 0FFFFFFFFh
 * 000000014033BBD1: test    r10d, r10d
 * 000000014033BBD4: jz      short loc_14033BC3A
 * 000000014033BBD6: mov     rsi, 7010008004002001h
 * 000000014033BBE0: mov     edx, 8
 * 000000014033BBE5: mov     rax, [r9]
 * 000000014033BBE8: mov     ecx, r14d
 * 000000014033BBEB: xor     rax, rbx
 * 000000014033BBEE: mov     rbx, [r9+8]
 * 000000014033BBF2: rol     rax, cl
 * 000000014033BBF5: add     r9, 10h
 * 000000014033BBF9: xor     rbx, rax
 * 000000014033BBFC: rol     rbx, cl
 * 000000014033BBFF: sub     rdx, r13
 * 000000014033BC02: jnz     short loc_14033BBE5
 * 000000014033BC04: mov     rcx, r9
 * 000000014033BC07: sub     rcx, r11
 * 000000014033BC0A: xor     rcx, r15
 * 000000014033BC0D: mov     rax, rcx
 * 000000014033BC10: rol     rax, 11h
 * 000000014033BC14: xor     rcx, rax
 * 000000014033BC17: mov     rax, rsi
 * 000000014033BC1A: mul     rcx
 * 000000014033BC1D: xor     eax, edx
 * 000000014033BC1F: mov     [rbp+20F0h+var_1A58], rdx
 * 000000014033BC26: xor     r14d, eax
 * 000000014033BC29: and     r14d, 3Fh
 * 000000014033BC2D: cmovz   r14d, r13d
 * 000000014033BC31: add     r10d, r12d
 * 000000014033BC34: jnz     short loc_14033BBE0
 * 000000014033BC36: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033BC3A: and     r8d, 7Fh
 * 000000014033BC3E: cmp     r8d, 8
 * 000000014033BC42: jb      short loc_14033BC61
 * 000000014033BC44: mov     edx, r8d
 * 000000014033BC47: shr     rdx, 3
 * 000000014033BC4B: xor     rbx, [r9]
 * 000000014033BC4E: mov     ecx, r14d
 * 000000014033BC51: rol     rbx, cl
 * 000000014033BC54: add     r9, 8
 * 000000014033BC58: add     r8d, 0FFFFFFF8h
 * 000000014033BC5C: sub     rdx, r13
 * 000000014033BC5F: jnz     short loc_14033BC4B
 * 000000014033BC61: xor     r10d, r10d
 * 000000014033BC64: test    r8d, r8d
 * 000000014033BC67: jz      short loc_14033BC7E
 * 000000014033BC69: movzx   eax, byte ptr [r9]
 * 000000014033BC6D: mov     ecx, r14d
 * 000000014033BC70: xor     rbx, rax
 * 000000014033BC73: add     r9, r13
 * 000000014033BC76: rol     rbx, cl
 * 000000014033BC79: add     r8d, r12d
 * 000000014033BC7C: jnz     short loc_14033BC69
 * 000000014033BC7E: mov     rax, rbx
 * 000000014033BC81: jmp     short loc_14033BC85
 * 000000014033BC83: xor     ebx, eax
 * 000000014033BC85: shr     rax, 1Fh
 * 000000014033BC89: test    rax, rax
 * 000000014033BC8C: jnz     short loc_14033BC83
 * 000000014033BC8E: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033BC92: btr     ebx, 1Fh
 * 000000014033BC96: mov     r13d, r10d
 * 000000014033BC99: cmp     ebx, [rax+14h]
 * 000000014033BC9C: jz      loc_14033BAD3
 * 000000014033BCA2: cmp     [rax], r10d
 * 000000014033BCA5: jnz     short loc_14033BCB4
 * 000000014033BCA7: cmp     [rax+18h], r10d
 * 000000014033BCAB: mov     ecx, 1
 * 000000014033BCB0: cmovnz  r13d, ecx
 * 000000014033BCB4: mov     ecx, [rax+10h]
 * 000000014033BCB7: mov     rdx, [rax+8]
 * 000000014033BCBB: test    rcx, rcx
 * 000000014033BCBE: jz      loc_14033BD77
 * 000000014033BCC4: mov     eax, [rsi+974h]
 * 000000014033BCCA: mov     r8d, 40h ; '@'
 * 000000014033BCD0: test    r8b, al
 * 000000014033BCD3: jz      loc_14033BD77
 * 000000014033BCD9: mov     r12, cr8
 * 000000014033BCDD: lea     eax, [r8-3Eh]
 * 000000014033BCE1: mov     cr8, rax
 * 000000014033BCE5: lea     rax, [rcx-1]
 * 000000014033BCE9: mov     r14, rdx
 * 000000014033BCEC: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033BCF3: add     rax, rdx
 * 000000014033BCF6: mov     ecx, 0FFFh
 * 000000014033BCFB: or      rax, rcx
 * 000000014033BCFE: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033BD02: lea     rax, [r14-1]
 * 000000014033BD06: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033BD0A: movzx   r15d, r12b
 * 000000014033BD0E: mov     rax, [rsi+460h]
 * 000000014033BD15: xor     edx, edx
 * 000000014033BD17: mov     rcx, r14
 * 000000014033BD1A: call    KeGuardDispatchICall
 * 000000014033BD1F: xor     r10d, r10d
 * 000000014033BD22: cmp     eax, 0C000022Dh
 * 000000014033BD27: jnz     short loc_14033BD50
 * 000000014033BD29: test    r13d, r13d
 * 000000014033BD2C: jnz     short loc_14033BD73
 * 000000014033BD2E: lea     eax, [r10+1]
 * 000000014033BD32: cmp     r12b, al
 * 000000014033BD35: ja      short loc_14033BD54
 * 000000014033BD37: movzx   r15d, r12b
 * 000000014033BD3B: mov     cr8, r15
 * 000000014033BD3F: mov     al, [r14]
 * 000000014033BD42: mov     rax, cr8
 * 000000014033BD46: lea     eax, [r10+2]
 * 000000014033BD4A: mov     cr8, rax
 * 000000014033BD4E: jmp     short loc_14033BD0E
 * 000000014033BD50: test    eax, eax
 * 000000014033BD52: js      short loc_14033BD73
 * 000000014033BD54: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033BD58: mov     r9d, 1000h
 * 000000014033BD5E: add     rax, r9
 * 000000014033BD61: add     r14, r9
 * 000000014033BD64: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033BD68: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033BD6C: jnz     short loc_14033BD0A
 * 000000014033BD6E: jmp     loc_14033BACF
 * 000000014033BD73: mov     cr8, r15
 * 000000014033BD77: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033BD7B: mov     eax, [rsi+8D8h]
 * 000000014033BD81: mov     edx, [r13+14h]
 * 000000014033BD85: test    eax, eax
 * 000000014033BD87: jnz     short loc_14033BD9F
 * 000000014033BD89: mov     rax, [rsi+580h]
 * 000000014033BD90: mov     ecx, ebx
 * 000000014033BD92: xor     rcx, rdx
 * 000000014033BD95: mov     [rax+18h], rcx
 * 000000014033BD99: mov     eax, [rsi+8D8h]
 * 000000014033BD9F: mov     rcx, [r13+8]
 * 000000014033BDA3: test    eax, eax
 * 000000014033BDA5: jnz     loc_14033BAD7
 * 000000014033BDAB: mov     r11, 0B3B74BDEE4453415h
 * 000000014033BDB5: jmp     loc_14033BA78
 * 000000014033BDBA: mov     dword ptr [rbp+20F0h+var_20B8], r14d
 * 000000014033BDBE: mov     r15d, eax
 * 000000014033BDC1: mov     esi, dword ptr [rbp+20F0h+var_20B8]
 * 000000014033BDC4: mov     rdi, [rbp+20F0h+var_20C8]
 * 000000014033BDC8: mov     ecx, [r12+10h]
 * 000000014033BDCD: mov     eax, [r12+8]
 * 000000014033BDD2: cmp     ecx, eax
 * 000000014033BDD4: mov     r11d, [r12+0Ch]
 * 000000014033BDD9: cmovbe  ecx, eax
 * 000000014033BDDC: lea     r13d, [r11+0FFFh]
 * 000000014033BDE3: add     r13d, ecx
 * 000000014033BDE6: and     r13d, 0FFFFF000h
 * 000000014033BDED: cmp     r15d, r13d
 * 000000014033BDF0: jnb     loc_14033BF09
 * 000000014033BDF6: mov     eax, [r12+24h]
 * 000000014033BDFB: bt      eax, 19h
 * 000000014033BDFF: jb      loc_14033BF06
 * 000000014033BE05: mov     ecx, [r12]
 * 000000014033BE09: cmp     ecx, 54494E49h
 * 000000014033BE0F: jnz     short loc_14033BE20
 * 000000014033BE11: cmp     dword ptr [r12+4], 4742444Bh
 * 000000014033BE1A: jz      loc_14033BF06
 * 000000014033BE20: cmp     ecx, 45474150h
 * 000000014033BE26: jnz     short loc_14033BE5E
 * 000000014033BE28: movzx   eax, word ptr [r12+4]
 * 000000014033BE2E: mov     r8d, 7877h
 * 000000014033BE34: cmp     ax, r8w
 * 000000014033BE38: jz      loc_14033BF06
 * 000000014033BE3E: mov     r8d, 7277h
 * 000000014033BE44: cmp     ax, r8w
 * 000000014033BE48: jz      loc_14033BF06
 * 000000014033BE4E: mov     r8d, 7777h
 * 000000014033BE54: cmp     ax, r8w
 * 000000014033BE58: jz      loc_14033BF06
 * 000000014033BE5E: cmp     ecx, 41525245h
 * 000000014033BE64: jnz     short loc_14033BE77
 * 000000014033BE66: mov     eax, 4154h
 * 000000014033BE6B: cmp     [r12+4], ax
 * 000000014033BE71: jz      loc_14033BF06
 * 000000014033BE77: mov     rcx, [rbp+20F0h+var_20B0]
 * 000000014033BE7B: test    rcx, rcx
 * 000000014033BE7E: jz      short loc_14033BEBA
 * 000000014033BE80: mov     rax, [rcx+918h]
 * 000000014033BE87: mov     r8, [rcx+910h]
 * 000000014033BE8E: mov     qword ptr [rbp+20F0h+var_1D70+8], rax
 * 000000014033BE95: mov     rax, [rcx+920h]
 * 000000014033BE9C: mov     qword ptr [rbp+20F0h+var_1D60], rax
 * 000000014033BEA3: mov     rax, [rcx+928h]
 * 000000014033BEAA: mov     qword ptr [rbp+20F0h+var_1D60+8], rax
 * 000000014033BEB1: mov     qword ptr [rbp+20F0h+var_1D70], r8
 * 000000014033BEB8: jmp     short loc_14033BEDD
 * 000000014033BEBA: movups  xmm0, xmmword ptr cs:VfExcludeSections
 * 000000014033BEC1: movups  xmm1, xmmword ptr cs:off_140401D70; "INIT"
 * 000000014033BEC8: movups  [rbp+20F0h+var_1D70], xmm0
 * 000000014033BECF: mov     r8, qword ptr [rbp+20F0h+var_1D70]
 * 000000014033BED6: movups  [rbp+20F0h+var_1D60], xmm1
 * 000000014033BEDD: mov     r10d, 7
 * 000000014033BEE3: mov     r9, r12
 * 000000014033BEE6: mov     r14d, 0FFFFFFFFh
 * 000000014033BEEC: movzx   edx, byte ptr [r9]
 * 000000014033BEF0: inc     r9
 * 000000014033BEF3: movzx   eax, byte ptr [r8]
 * 000000014033BEF7: inc     r8
 * 000000014033BEFA: cmp     rdx, rax
 * 000000014033BEFD: jnz     short loc_14033BF46
 * 000000014033BEFF: add     r10d, r14d
 * 000000014033BF02: jnz     short loc_14033BEEC
 * 000000014033BF04: xor     edx, edx
 * 000000014033BF06: mov     r15d, r13d
 * 000000014033BF09: mov     r8, [rbp+20F0h+var_20B0]
 * 000000014033BF0D: add     r12, 28h ; '('
 * 000000014033BF11: cmp     r12, rdi
 * 000000014033BF14: jnz     loc_14033BDC8
 * 000000014033BF1A: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033BF1E: cmp     r12, rdi
 * 000000014033BF21: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033BF28: jnz     loc_14033C29F
 * 000000014033BF2E: cmp     r15d, r13d
 * 000000014033BF31: jb      loc_14033C29F
 * 000000014033BF37: xor     r10d, r10d
 * 000000014033BF3A: mov     [r8+80Ch], r10d
 * 000000014033BF41: jmp     loc_140333625
 * 000000014033BF46: mov     r9, qword ptr [rbp+20F0h+var_1D70+8]
 * 000000014033BF4D: mov     r8d, 8
 * 000000014033BF53: mov     r10, r12
 * 000000014033BF56: mov     rcx, [r10]
 * 000000014033BF59: add     r10, 8
 * 000000014033BF5D: mov     rax, [r9]
 * 000000014033BF60: add     r9, 8
 * 000000014033BF64: cmp     rcx, rax
 * 000000014033BF67: jnz     short loc_14033BF97
 * 000000014033BF69: add     r8d, 0FFFFFFF8h
 * 000000014033BF6D: cmp     r8d, 8
 * 000000014033BF71: jnb     short loc_14033BF56
 * 000000014033BF73: xor     edx, edx
 * 000000014033BF75: test    r8d, r8d
 * 000000014033BF78: jz      short loc_14033BF06
 * 000000014033BF7A: movzx   edx, byte ptr [r10]
 * 000000014033BF7E: inc     r10
 * 000000014033BF81: movzx   eax, byte ptr [r9]
 * 000000014033BF85: inc     r9
 * 000000014033BF88: cmp     rdx, rax
 * 000000014033BF8B: jnz     short loc_14033BF97
 * 000000014033BF8D: add     r8d, r14d
 * 000000014033BF90: jnz     short loc_14033BF7A
 * 000000014033BF92: jmp     loc_14033BF04
 * 000000014033BF97: mov     r8, qword ptr [rbp+20F0h+var_1D60]
 * 000000014033BF9E: mov     r10d, 4
 * 000000014033BFA4: mov     r9, r12
 * 000000014033BFA7: movzx   edx, byte ptr [r9]
 * 000000014033BFAB: inc     r9
 * 000000014033BFAE: movzx   eax, byte ptr [r8]
 * 000000014033BFB2: inc     r8
 * 000000014033BFB5: cmp     rdx, rax
 * 000000014033BFB8: jnz     short loc_14033BFC4
 * 000000014033BFBA: add     r10d, r14d
 * 000000014033BFBD: jnz     short loc_14033BFA7
 * 000000014033BFBF: jmp     loc_14033BF04
 * 000000014033BFC4: mov     r8, qword ptr [rbp+20F0h+var_1D60+8]
 * 000000014033BFCB: mov     r10d, 6
 * 000000014033BFD1: mov     r9, r12
 * 000000014033BFD4: movzx   edx, byte ptr [r9]
 * 000000014033BFD8: inc     r9
 * 000000014033BFDB: movzx   eax, byte ptr [r8]
 * 000000014033BFDF: inc     r8
 * 000000014033BFE2: cmp     rdx, rax
 * 000000014033BFE5: jnz     short loc_14033BFF1
 * 000000014033BFE7: add     r10d, r14d
 * 000000014033BFEA: jnz     short loc_14033BFD4
 * 000000014033BFEC: jmp     loc_14033BF04
 * 000000014033BFF1: mov     eax, [r12+24h]
 * 000000014033BFF6: xor     edx, edx
 * 000000014033BFF8: test    eax, eax
 * 000000014033BFFA: js      loc_14033BF06
 * 000000014033C000: bt      eax, 1Dh
 * 000000014033C004: jnb     loc_14033BF06
 * 000000014033C00A: lea     r9d, [rdx+1]
 * 000000014033C00E: mov     r14d, r9d
 * 000000014033C011: test    esi, esi
 * 000000014033C013: jz      short loc_14033C029
 * 000000014033C015: mov     eax, [r12]
 * 000000014033C019: cmp     eax, 2E656461h
 * 000000014033C01E: jz      short loc_14033C029
 * 000000014033C020: cmp     eax, 45474150h
 * 000000014033C025: cmovnz  r14d, edx
 * 000000014033C029: mov     r8, [rbp+20F0h+var_20B0]
 * 000000014033C02D: cmp     r15d, r11d
 * 000000014033C030: cmovnb  r11d, r15d
 * 000000014033C034: mov     r15d, r11d
 * 000000014033C037: mov     eax, r15d
 * 000000014033C03A: add     rbx, rax
 * 000000014033C03D: test    byte ptr [r8+863h], 4
 * 000000014033C045: jz      short loc_14033C0AC
 * 000000014033C047: mov     ecx, 0FFFFFFFFh
 * 000000014033C04C: mov     eax, ecx
 * 000000014033C04E: xbegin  $+6
 * 000000014033C054: cmp     eax, ecx
 * 000000014033C056: jnz     short loc_14033C05F
 * 000000014033C058: mov     al, [rbx]
 * 000000014033C05A: xend
 * 000000014033C05D: jmp     short loc_14033C093
 * 000000014033C05F: rdtsc
 * 000000014033C061: shl     rdx, 20h
 * 000000014033C065: or      rax, rdx
 * 000000014033C068: mov     rcx, rax
 * 000000014033C06B: ror     rax, 3
 * 000000014033C06F: xor     rcx, rax
 * 000000014033C072: mov     rax, 7010008004002001h
 * 000000014033C07C: mul     rcx
 * 000000014033C07F: mov     [rbp+20F0h+var_1A50], rdx
 * 000000014033C086: xor     dl, al
 * 000000014033C088: mov     eax, 0Fh
 * 000000014033C08D: test    al, dl
 * 000000014033C08F: jz      short loc_14033C0AA
 * 000000014033C091: xor     edx, edx
 * 000000014033C093: add     [r8+824h], r9d
 * 000000014033C09A: add     dword ptr [r8+810h], 100h
 * 000000014033C0A5: jmp     loc_14033C265
 * 000000014033C0AA: xor     edx, edx
 * 000000014033C0AC: test    r14d, r14d
 * 000000014033C0AF: jz      loc_14033C13E
 * 000000014033C0B5: mov     rax, [r8+448h]
 * 000000014033C0BC: lea     rcx, [rbp+20F0h+var_1B88]
 * 000000014033C0C3: mov     rdx, rbx
 * 000000014033C0C6: call    KeGuardDispatchICall
 * 000000014033C0CB: xor     edx, edx
 * 000000014033C0CD: test    eax, eax
 * 000000014033C0CF: jns     loc_14033C1BA
 * 000000014033C0D5: mov     r8, [rbp+20F0h+var_20B0]
 * 000000014033C0D9: lea     r9d, [rdx+1]
 * 000000014033C0DD: cmp     eax, 0C0000005h
 * 000000014033C0E2: jnz     loc_14033C265
 * 000000014033C0E8: cmp     [r8+8D8h], edx
 * 000000014033C0EF: jnz     loc_14033C265
 * 000000014033C0F5: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033C0F9: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033C103: add     rax, r8
 * 000000014033C106: mov     [r8+8E0h], rax
 * 000000014033C10D: mov     rax, 0B3B74BDEE4453415h
 * 000000014033C117: add     rax, rcx
 * 000000014033C11A: mov     [r8+8E8h], rax
 * 000000014033C121: movsxd  rax, dword ptr [rcx]
 * 000000014033C124: mov     [r8+8F0h], rax
 * 000000014033C12B: mov     [r8+8F8h], rbx
 * 000000014033C132: mov     [r8+8D8h], r9d
 * 000000014033C139: jmp     loc_14033C265
 * 000000014033C13E: mov     r9d, 0FFFh
 * 000000014033C144: mov     [rbp+20F0h+var_1B88], rdx
 * 000000014033C14B: movzx   eax, bx
 * 000000014033C14E: mov     [rbp+20F0h+var_1B7E], dx
 * 000000014033C155: and     ax, r9w
 * 000000014033C159: mov     [rbp+20F0h+var_1B60], 1000h
 * 000000014033C163: mov     ecx, 1FFFh
 * 000000014033C168: add     ax, cx
 * 000000014033C16B: mov     rcx, rbx
 * 000000014033C16E: shr     ax, 0Ch
 * 000000014033C172: add     ax, 6
 * 000000014033C176: shl     ax, 3
 * 000000014033C17A: mov     [rbp+20F0h+var_1B80], ax
 * 000000014033C181: mov     rax, rbx
 * 000000014033C184: and     rax, 0FFFFFFFFFFFFF000h
 * 000000014033C18A: mov     [rbp+20F0h+var_1B68], rax
 * 000000014033C191: mov     eax, ebx
 * 000000014033C193: and     eax, r9d
 * 000000014033C196: mov     [rbp+20F0h+var_1B5C], eax
 * 000000014033C19C: mov     rax, [r8+450h]
 * 000000014033C1A3: call    KeGuardDispatchICall
 * 000000014033C1A8: mov     [rbp+20F0h+var_1A48], rax
 * 000000014033C1AF: shr     rax, 0Ch
 * 000000014033C1B3: mov     [rbp+20F0h+var_1B58], rax
 * 000000014033C1BA: mov     rcx, [rbp+20F0h+var_20B0]
 * 000000014033C1BE: mov     eax, 1
 * 000000014033C1C3: add     [rcx+828h], eax
 * 000000014033C1C9: mov     eax, [rbp+20F0h+var_1B5C]
 * 000000014033C1CF: add     rax, [rbp+20F0h+var_1B68]
 * 000000014033C1D6: mov     [rcx+0A38h], rax
 * 000000014033C1DD: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033C1E1: mov     [rcx+0A30h], rax
 * 000000014033C1E8: mov     rbx, cr8
 * 000000014033C1EC: mov     eax, 2
 * 000000014033C1F1: mov     cr8, rax
 * 000000014033C1F5: mov     rax, [rcx+5E8h]
 * 000000014033C1FC: xor     r8d, r8d
 * 000000014033C1FF: add     rcx, 0A10h
 * 000000014033C206: mov     edx, [rax]
 * 000000014033C208: call    RtlInitMinimalBarrier
 * 000000014033C20D: mov     rdx, [rbp+20F0h+var_20B0]
 * 000000014033C211: mov     ecx, [rdx+7DCh]
 * 000000014033C217: mov     rax, [rdx+440h]
 * 000000014033C21E: add     rcx, rdx
 * 000000014033C221: call    KeGuardDispatchICall
 * 000000014033C226: mov     r8, rax
 * 000000014033C229: mov     [rbp+20F0h+var_20B0], rax
 * 000000014033C22D: movzx   eax, bl
 * 000000014033C230: mov     cr8, rax
 * 000000014033C234: xor     edx, edx
 * 000000014033C236: test    r14d, r14d
 * 000000014033C239: jz      short loc_14033C254
 * 000000014033C23B: mov     rax, [r8+458h]
 * 000000014033C242: lea     rcx, [rbp+20F0h+var_1B88]
 * 000000014033C249: call    KeGuardDispatchICall
 * 000000014033C24E: mov     r8, [rbp+20F0h+var_20B0]
 * 000000014033C252: xor     edx, edx
 * 000000014033C254: add     dword ptr [r8+810h], 14000h
 * 000000014033C25F: mov     r9d, 1
 * 000000014033C265: mov     eax, [r8+810h]
 * 000000014033C26C: add     r15d, 1000h
 * 000000014033C273: cmp     r15d, r13d
 * 000000014033C276: jnb     short loc_14033C289
 * 000000014033C278: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033C27C: cmp     eax, [r8+814h]
 * 000000014033C283: jl      loc_14033C037
 * 000000014033C289: cmp     eax, [r8+814h]
 * 000000014033C290: jge     loc_14033BF1A
 * 000000014033C296: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033C29A: jmp     loc_14033BF0D
 * 000000014033C29F: mov     [r8+80Ch], r15d
 * 000000014033C2A6: jmp     loc_140333DB4
 * 000000014033C2AB: mov     r8d, 0Ch
 * 000000014033C2B1: xor     eax, eax
 * 000000014033C2B3: cmp     r14d, r8d
 * 000000014033C2B6: jnz     loc_14033C5B9
 * 000000014033C2BC: cmp     [rsi+960h], rax
 * 000000014033C2C3: jz      loc_140333312
 * 000000014033C2C9: mov     edx, [rsi+974h]
 * 000000014033C2CF: mov     ecx, edx
 * 000000014033C2D1: cmp     [rsi+80Ch], eax
 * 000000014033C2D7: jnz     short loc_14033C2EB
 * 000000014033C2D9: shl     ecx, 3
 * 000000014033C2DC: xor     ecx, edx
 * 000000014033C2DE: and     ecx, 20h
 * 000000014033C2E1: xor     ecx, edx
 * 000000014033C2E3: mov     [rsi+974h], ecx
 * 000000014033C2E9: jmp     short loc_14033C2FC
 * 000000014033C2EB: mov     eax, edx
 * 000000014033C2ED: shr     eax, 3
 * 000000014033C2F0: xor     eax, edx
 * 000000014033C2F2: test    al, 4
 * 000000014033C2F4: jnz     loc_14033341D
 * 000000014033C2FA: xor     eax, eax
 * 000000014033C2FC: test    cl, 4
 * 000000014033C2FF: jz      loc_14033C5B4
 * 000000014033C305: mov     r15, [r13+20h]
 * 000000014033C309: xor     r10d, r10d
 * 000000014033C30C: mov     eax, [r13+28h]
 * 000000014033C310: test    r15, r15
 * 000000014033C313: jz      short loc_14033C33B
 * 000000014033C315: mov     ebx, [rsi+80Ch]
 * 000000014033C31B: mov     edx, 0FFFh
 * 000000014033C320: sub     eax, ebx
 * 000000014033C322: mov     r14d, eax
 * 000000014033C325: add     r14, rdx
 * 000000014033C328: lea     ecx, [r15+rbx]
 * 000000014033C32C: and     rcx, rdx
 * 000000014033C32F: add     r14, rcx
 * 000000014033C332: shr     r14, 0Ch
 * 000000014033C336: add     rbx, r15
 * 000000014033C339: jmp     short loc_14033C358
 * 000000014033C33B: mov     rbx, [r13+8]
 * 000000014033C33F: mov     eax, 0FFFh
 * 000000014033C344: mov     r14d, [r13+10h]
 * 000000014033C348: mov     rcx, rbx
 * 000000014033C34B: and     rcx, rax
 * 000000014033C34E: add     r14, rax
 * 000000014033C351: add     r14, rcx
 * 000000014033C354: shr     r14, 0Ch
 * 000000014033C358: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033C35F: test    r14, r14
 * 000000014033C362: jz      loc_14033C40B
 * 000000014033C368: mov     edi, 1
 * 000000014033C36D: mov     rax, [rsi+2A8h]
 * 000000014033C374: mov     rcx, rbx
 * 000000014033C377: sub     r14, rdi
 * 000000014033C37A: call    KeGuardDispatchICall
 * 000000014033C37F: xor     r10d, r10d
 * 000000014033C382: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C38C: test    al, al
 * 000000014033C38E: jz      short loc_14033C3D0
 * 000000014033C390: cmp     [rsi+8D8h], r10d
 * 000000014033C397: jnz     short loc_14033C3D0
 * 000000014033C399: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033C3A3: add     rax, rsi
 * 000000014033C3A6: mov     [rsi+8E0h], rax
 * 000000014033C3AD: lea     rax, [r11+r13]
 * 000000014033C3B1: mov     [rsi+8E8h], rax
 * 000000014033C3B8: movsxd  rax, dword ptr [r13+0]
 * 000000014033C3BC: mov     [rsi+8F0h], rax
 * 000000014033C3C3: mov     [rsi+8F8h], rbx
 * 000000014033C3CA: mov     [rsi+8D8h], edi
 * 000000014033C3D0: add     dword ptr [rsi+810h], 100h
 * 000000014033C3DA: mov     r8d, 1000h
 * 000000014033C3E0: add     rbx, r8
 * 000000014033C3E3: test    r15, r15
 * 000000014033C3E6: jz      short loc_14033C3FB
 * 000000014033C3E8: add     [rsi+80Ch], r8d
 * 000000014033C3EF: mov     eax, [r12]
 * 000000014033C3F3: cmp     [rsi+810h], eax
 * 000000014033C3F9: jge     short loc_14033C404
 * 000000014033C3FB: test    r14, r14
 * 000000014033C3FE: jnz     loc_14033C36D
 * 000000014033C404: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033C40B: test    r15, r15
 * 000000014033C40E: jz      short loc_14033C41C
 * 000000014033C410: test    r14, r14
 * 000000014033C413: jnz     short loc_14033C41C
 * 000000014033C415: mov     [rsi+80Ch], r10d
 * 000000014033C41C: cmp     [rsi+80Ch], r10d
 * 000000014033C423: jnz     loc_14033362F
 * 000000014033C429: mov     rcx, [rsi+530h]
 * 000000014033C430: mov     r15, cr8
 * 000000014033C434: mov     eax, 0Fh
 * 000000014033C439: mov     cr8, rax
 * 000000014033C43D: mov     rax, [rsi+148h]
 * 000000014033C444: call    KeGuardDispatchICall
 * 000000014033C449: mov     rax, [rsi+600h]
 * 000000014033C450: mov     r14, [rbp+20F0h+var_20D0]
 * 000000014033C454: mov     rcx, [rax]
 * 000000014033C457: mov     eax, [rcx]
 * 000000014033C459: lea     rbx, [rcx+10h]
 * 000000014033C45D: mov     r12b, [rcx+0Ch]
 * 000000014033C461: lea     rcx, [rax+rax*2]
 * 000000014033C465: lea     r13, [rbx+rcx*8]
 * 000000014033C469: mov     r8d, 18h
 * 000000014033C46F: lea     r9, [r14+18h]
 * 000000014033C473: mov     r10, rbx
 * 000000014033C476: mov     rcx, [r10]
 * 000000014033C479: add     r10, 8
 * 000000014033C47D: mov     rax, [r9]
 * 000000014033C480: add     r9, 8
 * 000000014033C484: cmp     rcx, rax
 * 000000014033C487: jnz     short loc_14033C4BD
 * 000000014033C489: add     r8d, 0FFFFFFF8h
 * 000000014033C48D: cmp     r8d, 8
 * 000000014033C491: jnb     short loc_14033C476
 * 000000014033C493: test    r8d, r8d
 * 000000014033C496: jz      short loc_14033C4C6
 * 000000014033C498: mov     r11d, 1
 * 000000014033C49E: movzx   edx, byte ptr [r10]
 * 000000014033C4A2: add     r10, r11
 * 000000014033C4A5: movzx   eax, byte ptr [r9]
 * 000000014033C4A9: add     r9, r11
 * 000000014033C4AC: cmp     rdx, rax
 * 000000014033C4AF: jnz     short loc_14033C4BD
 * 000000014033C4B1: mov     eax, 0FFFFFFFFh
 * 000000014033C4B6: add     r8d, eax
 * 000000014033C4B9: jz      short loc_14033C4C6
 * 000000014033C4BB: jmp     short loc_14033C49E
 * 000000014033C4BD: add     rbx, 18h
 * 000000014033C4C1: cmp     rbx, r13
 * 000000014033C4C4: jb      short loc_14033C469
 * 000000014033C4C6: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033C4CA: mov     rcx, [rsi+530h]
 * 000000014033C4D1: mov     rax, [rsi+188h]
 * 000000014033C4D8: call    KeGuardDispatchICall
 * 000000014033C4DD: movzx   eax, r15b
 * 000000014033C4E1: mov     cr8, rax
 * 000000014033C4E5: xor     r10d, r10d
 * 000000014033C4E8: lea     edx, [r10+1]
 * 000000014033C4EC: test    r12b, r12b
 * 000000014033C4EF: jz      short loc_14033C555
 * 000000014033C4F1: mov     eax, [rsi+974h]
 * 000000014033C4F7: lea     ecx, [rdx+0Fh]
 * 000000014033C4FA: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C504: test    cl, al
 * 000000014033C506: jz      short loc_14033C54B
 * 000000014033C508: cmp     [rsi+8D8h], r10d
 * 000000014033C50F: jnz     short loc_14033C54B
 * 000000014033C511: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033C515: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033C51F: add     rax, rsi
 * 000000014033C522: mov     [rsi+8E0h], rax
 * 000000014033C529: lea     rax, [rcx+r11]
 * 000000014033C52D: mov     [rsi+8E8h], rax
 * 000000014033C534: movsxd  rax, dword ptr [rcx]
 * 000000014033C537: mov     [rsi+8F0h], rax
 * 000000014033C53E: mov     [rsi+8F8h], rdx
 * 000000014033C545: mov     [rsi+8D8h], edx
 * 000000014033C54B: cmp     [r14+18h], rdx
 * 000000014033C54F: jz      loc_14033362F
 * 000000014033C555: cmp     rbx, r13
 * 000000014033C558: jnz     loc_140333625
 * 000000014033C55E: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C568: mov     r14d, 8000h
 * 000000014033C56E: cmp     [rsi+8D8h], r10d
 * 000000014033C575: jnz     loc_140333635
 * 000000014033C57B: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033C57F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033C589: add     rax, rsi
 * 000000014033C58C: mov     [rsi+8E0h], rax
 * 000000014033C593: lea     rax, [rcx+r11]
 * 000000014033C597: mov     [rsi+8E8h], rax
 * 000000014033C59E: movsxd  rax, dword ptr [rcx]
 * 000000014033C5A1: mov     [rsi+8F0h], rax
 * 000000014033C5A8: mov     [rsi+8F8h], rbx
 * 000000014033C5AF: jmp     loc_14033D52C
 * 000000014033C5B4: mov     edx, 1
 * 000000014033C5B9: cmp     [rsi+80Ch], eax
 * 000000014033C5BF: jnz     short loc_14033C5D9
 * 000000014033C5C1: cmp     r14d, r8d
 * 000000014033C5C4: jnz     loc_14033CACC
 * 000000014033C5CA: cmp     [rsi+960h], rax
 * 000000014033C5D1: jnz     short loc_14033C5E1
 * 000000014033C5D3: mov     [rsi+80Ch], eax
 * 000000014033C5D9: xor     r10d, r10d
 * 000000014033C5DC: jmp     loc_14033C934
 * 000000014033C5E1: mov     eax, [rsi+974h]
 * 000000014033C5E7: mov     ecx, eax
 * 000000014033C5E9: shl     ecx, 3
 * 000000014033C5EC: xor     ecx, eax
 * 000000014033C5EE: and     ecx, 20h
 * 000000014033C5F1: xor     ecx, eax
 * 000000014033C5F3: mov     [rsi+974h], ecx
 * 000000014033C5F9: test    cl, 4
 * 000000014033C5FC: jz      loc_14033C6BA
 * 000000014033C602: mov     rcx, [r13+8]
 * 000000014033C606: mov     r14d, 0FFFh
 * 000000014033C60C: mov     eax, [r13+10h]
 * 000000014033C610: and     r14, rcx
 * 000000014033C613: add     r14, 0FFFh
 * 000000014033C61A: mov     rbx, rcx
 * 000000014033C61D: add     r14, rax
 * 000000014033C620: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033C627: shr     r14, 0Ch
 * 000000014033C62B: xor     r10d, r10d
 * 000000014033C62E: test    r14, r14
 * 000000014033C631: jz      loc_14033C934
 * 000000014033C637: mov     rdi, 0A3A03F5891C8B4E8h
 * 000000014033C641: mov     rax, [rsi+2A8h]
 * 000000014033C648: mov     rcx, rbx
 * 000000014033C64B: sub     r14, rdx
 * 000000014033C64E: call    KeGuardDispatchICall
 * 000000014033C653: xor     r10d, r10d
 * 000000014033C656: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C660: lea     edx, [r10+1]
 * 000000014033C664: test    al, al
 * 000000014033C666: jz      short loc_14033C69F
 * 000000014033C668: cmp     [rsi+8D8h], r10d
 * 000000014033C66F: jnz     short loc_14033C69F
 * 000000014033C671: lea     rax, [rsi+rdi]
 * 000000014033C675: mov     [rsi+8E0h], rax
 * 000000014033C67C: lea     rax, [r11+r13]
 * 000000014033C680: mov     [rsi+8E8h], rax
 * 000000014033C687: movsxd  rax, dword ptr [r13+0]
 * 000000014033C68B: mov     [rsi+8F0h], rax
 * 000000014033C692: mov     [rsi+8F8h], rbx
 * 000000014033C699: mov     [rsi+8D8h], edx
 * 000000014033C69F: add     dword ptr [rsi+810h], 100h
 * 000000014033C6A9: add     rbx, 1000h
 * 000000014033C6B0: test    r14, r14
 * 000000014033C6B3: jnz     short loc_14033C641
 * 000000014033C6B5: jmp     loc_14033C934
 * 000000014033C6BA: mov     r11, [r13+8]
 * 000000014033C6BE: mov     r8d, [r13+10h]
 * 000000014033C6C2: mov     r9, r11
 * 000000014033C6C5: add     [rsi+810h], r8d
 * 000000014033C6CC: mov     rax, r11
 * 000000014033C6CF: mov     r14d, [rsi+7FCh]
 * 000000014033C6D6: mov     r15, [rsi+800h]
 * 000000014033C6DD: lea     rcx, [r11+r8]
 * 000000014033C6E1: cmp     r11, rcx
 * 000000014033C6E4: jnb     short loc_14033C6F7
 * 000000014033C6E6: mov     r10d, 40h ; '@'
 * 000000014033C6EC: prefetchnta byte ptr [rax]
 * 000000014033C6EF: add     rax, r10
 * 000000014033C6F2: cmp     rax, rcx
 * 000000014033C6F5: jb      short loc_14033C6EC
 * 000000014033C6F7: mov     r10d, r8d
 * 000000014033C6FA: mov     rbx, r15
 * 000000014033C6FD: shr     r10d, 7
 * 000000014033C701: mov     r12d, 0FFFFFFFFh
 * 000000014033C707: test    r10d, r10d
 * 000000014033C70A: jz      short loc_14033C776
 * 000000014033C70C: mov     rdi, 7010008004002001h
 * 000000014033C716: mov     edx, 8
 * 000000014033C71B: lea     esi, [rdx-7]
 * 000000014033C71E: mov     rax, [r9]
 * 000000014033C721: mov     ecx, r14d
 * 000000014033C724: xor     rax, rbx
 * 000000014033C727: mov     rbx, [r9+8]
 * 000000014033C72B: rol     rax, cl
 * 000000014033C72E: add     r9, 10h
 * 000000014033C732: xor     rbx, rax
 * 000000014033C735: rol     rbx, cl
 * 000000014033C738: sub     rdx, rsi
 * 000000014033C73B: jnz     short loc_14033C71E
 * 000000014033C73D: mov     rcx, r9
 * 000000014033C740: sub     rcx, r11
 * 000000014033C743: xor     rcx, r15
 * 000000014033C746: mov     rax, rcx
 * 000000014033C749: rol     rax, 11h
 * 000000014033C74D: xor     rcx, rax
 * 000000014033C750: mov     rax, rdi
 * 000000014033C753: mul     rcx
 * 000000014033C756: xor     eax, edx
 * 000000014033C758: mov     [rbp+20F0h+var_1A40], rdx
 * 000000014033C75F: xor     r14d, eax
 * 000000014033C762: mov     rdx, rsi
 * 000000014033C765: and     r14d, 3Fh
 * 000000014033C769: cmovz   r14d, edx
 * 000000014033C76D: add     r10d, r12d
 * 000000014033C770: jnz     short loc_14033C716
 * 000000014033C772: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033C776: and     r8d, 7Fh
 * 000000014033C77A: cmp     r8d, 8
 * 000000014033C77E: jb      short loc_14033C7AB
 * 000000014033C780: mov     edx, r8d
 * 000000014033C783: mov     esi, 1
 * 000000014033C788: shr     rdx, 3
 * 000000014033C78C: xor     rbx, [r9]
 * 000000014033C78F: mov     ecx, r14d
 * 000000014033C792: rol     rbx, cl
 * 000000014033C795: add     r9, 8
 * 000000014033C799: add     r8d, 0FFFFFFF8h
 * 000000014033C79D: sub     rdx, rsi
 * 000000014033C7A0: jnz     short loc_14033C78C
 * 000000014033C7A2: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033C7A6: mov     edx, 1
 * 000000014033C7AB: xor     r10d, r10d
 * 000000014033C7AE: test    r8d, r8d
 * 000000014033C7B1: jz      short loc_14033C7C8
 * 000000014033C7B3: movzx   eax, byte ptr [r9]
 * 000000014033C7B7: mov     ecx, r14d
 * 000000014033C7BA: xor     rbx, rax
 * 000000014033C7BD: add     r9, rdx
 * 000000014033C7C0: rol     rbx, cl
 * 000000014033C7C3: add     r8d, r12d
 * 000000014033C7C6: jnz     short loc_14033C7B3
 * 000000014033C7C8: mov     rax, rbx
 * 000000014033C7CB: jmp     short loc_14033C7CF
 * 000000014033C7CD: xor     ebx, eax
 * 000000014033C7CF: shr     rax, 1Fh
 * 000000014033C7D3: test    rax, rax
 * 000000014033C7D6: jnz     short loc_14033C7CD
 * 000000014033C7D8: mov     r8d, [r13+14h]
 * 000000014033C7DC: btr     ebx, 1Fh
 * 000000014033C7E0: cmp     ebx, r8d
 * 000000014033C7E3: jz      loc_14033C92A
 * 000000014033C7E9: mov     ecx, [r13+10h]
 * 000000014033C7ED: mov     rdx, [r13+8]
 * 000000014033C7F1: test    rcx, rcx
 * 000000014033C7F4: jz      loc_14033C897
 * 000000014033C7FA: mov     eax, [rsi+974h]
 * 000000014033C800: mov     r9d, 40h ; '@'
 * 000000014033C806: test    r9b, al
 * 000000014033C809: jz      loc_14033C897
 * 000000014033C80F: mov     r12, cr8
 * 000000014033C813: lea     eax, [r9-3Eh]
 * 000000014033C817: mov     cr8, rax
 * 000000014033C81B: lea     rax, [rcx-1]
 * 000000014033C81F: mov     r14, rdx
 * 000000014033C822: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033C829: add     rax, rdx
 * 000000014033C82C: mov     ecx, 0FFFh
 * 000000014033C831: or      rax, rcx
 * 000000014033C834: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033C838: lea     r13, [r14-1]
 * 000000014033C83C: movzx   r15d, r12b
 * 000000014033C840: mov     rax, [rsi+460h]
 * 000000014033C847: xor     edx, edx
 * 000000014033C849: mov     rcx, r14
 * 000000014033C84C: call    KeGuardDispatchICall
 * 000000014033C851: cmp     eax, 0C000022Dh
 * 000000014033C856: jnz     short loc_14033C880
 * 000000014033C858: mov     eax, 1
 * 000000014033C85D: cmp     r12b, al
 * 000000014033C860: ja      loc_14033C90A
 * 000000014033C866: movzx   r15d, r12b
 * 000000014033C86A: mov     cr8, r15
 * 000000014033C86E: mov     al, [r14]
 * 000000014033C871: mov     rax, cr8
 * 000000014033C875: mov     eax, 2
 * 000000014033C87A: mov     cr8, rax
 * 000000014033C87E: jmp     short loc_14033C840
 * 000000014033C880: xor     r10d, r10d
 * 000000014033C883: test    eax, eax
 * 000000014033C885: jns     loc_14033C90D
 * 000000014033C88B: mov     cr8, r15
 * 000000014033C88F: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033C893: mov     r8d, [r13+14h]
 * 000000014033C897: mov     eax, [rsi+8D8h]
 * 000000014033C89D: test    eax, eax
 * 000000014033C89F: jnz     short loc_14033C8BA
 * 000000014033C8A1: mov     eax, ebx
 * 000000014033C8A3: mov     ecx, r8d
 * 000000014033C8A6: xor     rcx, rax
 * 000000014033C8A9: mov     rax, [rsi+580h]
 * 000000014033C8B0: mov     [rax+18h], rcx
 * 000000014033C8B4: mov     eax, [rsi+8D8h]
 * 000000014033C8BA: mov     rcx, [r13+8]
 * 000000014033C8BE: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C8C8: test    eax, eax
 * 000000014033C8CA: jnz     short loc_14033C934
 * 000000014033C8CC: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033C8D6: add     rax, rsi
 * 000000014033C8D9: mov     [rsi+8E0h], rax
 * 000000014033C8E0: lea     rax, [r11+r13]
 * 000000014033C8E4: mov     [rsi+8E8h], rax
 * 000000014033C8EB: movsxd  rax, dword ptr [r13+0]
 * 000000014033C8EF: mov     [rsi+8F0h], rax
 * 000000014033C8F6: mov     eax, 1
 * 000000014033C8FB: mov     [rsi+8F8h], rcx
 * 000000014033C902: mov     [rsi+8D8h], eax
 * 000000014033C908: jmp     short loc_14033C934
 * 000000014033C90A: xor     r10d, r10d
 * 000000014033C90D: mov     eax, 1000h
 * 000000014033C912: add     r14, rax
 * 000000014033C915: add     r13, rax
 * 000000014033C918: cmp     r13, [rbp+20F0h+var_20C8]
 * 000000014033C91C: jnz     loc_14033C83C
 * 000000014033C922: mov     cr8, r15
 * 000000014033C926: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033C92A: mov     r11, 0B3B74BDEE4453415h
 * 000000014033C934: mov     r8d, [rsi+80Ch]
 * 000000014033C93B: mov     r9, [r13+8]
 * 000000014033C93F: mov     ecx, [r13+10h]
 * 000000014033C943: mov     edi, dword ptr [rbp+20F0h+var_20B8]
 * 000000014033C946: lea     rax, [r8+r8*2]
 * 000000014033C94A: mov     [rbp+20F0h+var_2030], r9
 * 000000014033C951: lea     r14, [r9+rax*4]
 * 000000014033C955: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014033C95F: mul     rcx
 * 000000014033C962: lea     r12, ds:30h[r8*4]
 * 000000014033C96A: mov     [rbp+20F0h+var_20A0], r14
 * 000000014033C96E: shr     rdx, 3
 * 000000014033C972: add     r12, r13
 * 000000014033C975: mov     [rbp+20F0h+var_2080], r12
 * 000000014033C979: lea     rax, [rdx+rdx*2]
 * 000000014033C97D: lea     rcx, [r9+rax*4]
 * 000000014033C981: mov     [rbp+20F0h+var_20D8], rcx
 * 000000014033C985: mov     r8, rcx
 * 000000014033C988: cmp     [r12], r10d
 * 000000014033C98C: jl      loc_14033D13B
 * 000000014033C992: mov     eax, [r14]
 * 000000014033C995: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033C999: mov     r13d, eax
 * 000000014033C99C: mov     r15d, [r14+4]
 * 000000014033C9A0: sub     r15d, eax
 * 000000014033C9A3: add     r13, [rcx+20h]
 * 000000014033C9A7: mov     [rbp+20F0h+var_20C8], r13
 * 000000014033C9AB: cmp     edi, 2Bh ; '+'
 * 000000014033C9AE: jz      loc_14033CD28
 * 000000014033C9B4: add     [rsi+810h], r15d
 * 000000014033C9BB: mov     r9, r13
 * 000000014033C9BE: mov     r10d, [rsi+7FCh]
 * 000000014033C9C5: mov     rax, r13
 * 000000014033C9C8: mov     r11, [rsi+800h]
 * 000000014033C9CF: mov     ecx, r15d
 * 000000014033C9D2: add     rcx, r13
 * 000000014033C9D5: cmp     r13, rcx
 * 000000014033C9D8: jnb     short loc_14033C9EA
 * 000000014033C9DA: mov     edx, 40h ; '@'
 * 000000014033C9DF: prefetchnta byte ptr [rax]
 * 000000014033C9E2: add     rax, rdx
 * 000000014033C9E5: cmp     rax, rcx
 * 000000014033C9E8: jb      short loc_14033C9DF
 * 000000014033C9EA: mov     r8d, r15d
 * 000000014033C9ED: mov     rbx, r11
 * 000000014033C9F0: shr     r8d, 7
 * 000000014033C9F4: test    r8d, r8d
 * 000000014033C9F7: jz      short loc_14033CA6D
 * 000000014033C9F9: mov     rsi, 7010008004002001h
 * 000000014033CA03: mov     edx, 8
 * 000000014033CA08: lea     r12d, [rdx-7]
 * 000000014033CA0C: mov     rax, [r9]
 * 000000014033CA0F: mov     ecx, r10d
 * 000000014033CA12: xor     rax, rbx
 * 000000014033CA15: mov     rbx, [r9+8]
 * 000000014033CA19: rol     rax, cl
 * 000000014033CA1C: add     r9, 10h
 * 000000014033CA20: xor     rbx, rax
 * 000000014033CA23: rol     rbx, cl
 * 000000014033CA26: sub     rdx, r12
 * 000000014033CA29: jnz     short loc_14033CA0C
 * 000000014033CA2B: mov     rcx, r9
 * 000000014033CA2E: sub     rcx, r13
 * 000000014033CA31: xor     rcx, r11
 * 000000014033CA34: mov     rax, rcx
 * 000000014033CA37: rol     rax, 11h
 * 000000014033CA3B: xor     rcx, rax
 * 000000014033CA3E: mov     rax, rsi
 * 000000014033CA41: mul     rcx
 * 000000014033CA44: xor     eax, edx
 * 000000014033CA46: mov     [rbp+20F0h+var_1A30], rdx
 * 000000014033CA4D: xor     r10d, eax
 * 000000014033CA50: mov     rax, r12
 * 000000014033CA53: and     r10d, 3Fh
 * 000000014033CA57: cmovz   r10d, eax
 * 000000014033CA5B: mov     eax, 0FFFFFFFFh
 * 000000014033CA60: add     r8d, eax
 * 000000014033CA63: jnz     short loc_14033CA03
 * 000000014033CA65: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033CA69: mov     r12, [rbp+20F0h+var_2080]
 * 000000014033CA6D: mov     edx, r15d
 * 000000014033CA70: mov     r11d, 1
 * 000000014033CA76: and     edx, 7Fh
 * 000000014033CA79: cmp     edx, 8
 * 000000014033CA7C: jb      short loc_14033CA9A
 * 000000014033CA7E: mov     r8d, edx
 * 000000014033CA81: shr     r8, 3
 * 000000014033CA85: xor     rbx, [r9]
 * 000000014033CA88: mov     ecx, r10d
 * 000000014033CA8B: rol     rbx, cl
 * 000000014033CA8E: add     r9, 8
 * 000000014033CA92: add     edx, 0FFFFFFF8h
 * 000000014033CA95: sub     r8, r11
 * 000000014033CA98: jnz     short loc_14033CA85
 * 000000014033CA9A: test    edx, edx
 * 000000014033CA9C: jz      short loc_14033CABD
 * 000000014033CA9E: mov     r12d, 0FFFFFFFFh
 * 000000014033CAA4: movzx   eax, byte ptr [r9]
 * 000000014033CAA8: mov     ecx, r10d
 * 000000014033CAAB: xor     rbx, rax
 * 000000014033CAAE: add     r9, r11
 * 000000014033CAB1: rol     rbx, cl
 * 000000014033CAB4: add     edx, r12d
 * 000000014033CAB7: jnz     short loc_14033CAA4
 * 000000014033CAB9: mov     r12, [rbp+20F0h+var_2080]
 * 000000014033CABD: mov     rax, rbx
 * 000000014033CAC0: shr     rax, 1Fh
 * 000000014033CAC4: xor     r10d, r10d
 * 000000014033CAC7: jmp     loc_14033CD16
 * 000000014033CACC: mov     r11, [r13+8]
 * 000000014033CAD0: mov     r8d, [r13+10h]
 * 000000014033CAD4: mov     r9, r11
 * 000000014033CAD7: add     [rsi+810h], r8d
 * 000000014033CADE: mov     rax, r11
 * 000000014033CAE1: mov     r14d, [rsi+7FCh]
 * 000000014033CAE8: mov     r15, [rsi+800h]
 * 000000014033CAEF: lea     rcx, [r11+r8]
 * 000000014033CAF3: cmp     r11, rcx
 * 000000014033CAF6: jnb     short loc_14033CB09
 * 000000014033CAF8: mov     r10d, 40h ; '@'
 * 000000014033CAFE: prefetchnta byte ptr [rax]
 * 000000014033CB01: add     rax, r10
 * 000000014033CB04: cmp     rax, rcx
 * 000000014033CB07: jb      short loc_14033CAFE
 * 000000014033CB09: mov     r10d, r8d
 * 000000014033CB0C: mov     rbx, r15
 * 000000014033CB0F: shr     r10d, 7
 * 000000014033CB13: mov     r12d, 0FFFFFFFFh
 * 000000014033CB19: test    r10d, r10d
 * 000000014033CB1C: jz      short loc_14033CB88
 * 000000014033CB1E: mov     rdi, 7010008004002001h
 * 000000014033CB28: mov     edx, 8
 * 000000014033CB2D: lea     esi, [rdx-7]
 * 000000014033CB30: mov     rax, [r9]
 * 000000014033CB33: mov     ecx, r14d
 * 000000014033CB36: xor     rax, rbx
 * 000000014033CB39: mov     rbx, [r9+8]
 * 000000014033CB3D: rol     rax, cl
 * 000000014033CB40: add     r9, 10h
 * 000000014033CB44: xor     rbx, rax
 * 000000014033CB47: rol     rbx, cl
 * 000000014033CB4A: sub     rdx, rsi
 * 000000014033CB4D: jnz     short loc_14033CB30
 * 000000014033CB4F: mov     rcx, r9
 * 000000014033CB52: sub     rcx, r11
 * 000000014033CB55: xor     rcx, r15
 * 000000014033CB58: mov     rax, rcx
 * 000000014033CB5B: rol     rax, 11h
 * 000000014033CB5F: xor     rcx, rax
 * 000000014033CB62: mov     rax, rdi
 * 000000014033CB65: mul     rcx
 * 000000014033CB68: xor     eax, edx
 * 000000014033CB6A: mov     [rbp+20F0h+var_1A38], rdx
 * 000000014033CB71: xor     r14d, eax
 * 000000014033CB74: mov     rdx, rsi
 * 000000014033CB77: and     r14d, 3Fh
 * 000000014033CB7B: cmovz   r14d, edx
 * 000000014033CB7F: add     r10d, r12d
 * 000000014033CB82: jnz     short loc_14033CB28
 * 000000014033CB84: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033CB88: and     r8d, 7Fh
 * 000000014033CB8C: cmp     r8d, 8
 * 000000014033CB90: jb      short loc_14033CBBD
 * 000000014033CB92: mov     edx, r8d
 * 000000014033CB95: mov     esi, 1
 * 000000014033CB9A: shr     rdx, 3
 * 000000014033CB9E: xor     rbx, [r9]
 * 000000014033CBA1: mov     ecx, r14d
 * 000000014033CBA4: rol     rbx, cl
 * 000000014033CBA7: add     r9, 8
 * 000000014033CBAB: add     r8d, 0FFFFFFF8h
 * 000000014033CBAF: sub     rdx, rsi
 * 000000014033CBB2: jnz     short loc_14033CB9E
 * 000000014033CBB4: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033CBB8: mov     edx, 1
 * 000000014033CBBD: xor     r10d, r10d
 * 000000014033CBC0: test    r8d, r8d
 * 000000014033CBC3: jz      short loc_14033CBDA
 * 000000014033CBC5: movzx   eax, byte ptr [r9]
 * 000000014033CBC9: mov     ecx, r14d
 * 000000014033CBCC: xor     rbx, rax
 * 000000014033CBCF: add     r9, rdx
 * 000000014033CBD2: rol     rbx, cl
 * 000000014033CBD5: add     r8d, r12d
 * 000000014033CBD8: jnz     short loc_14033CBC5
 * 000000014033CBDA: mov     rax, rbx
 * 000000014033CBDD: jmp     short loc_14033CBE1
 * 000000014033CBDF: xor     ebx, eax
 * 000000014033CBE1: shr     rax, 1Fh
 * 000000014033CBE5: test    rax, rax
 * 000000014033CBE8: jnz     short loc_14033CBDF
 * 000000014033CBEA: mov     rax, [rbp+20F0h+var_20D0]
 * 000000014033CBEE: btr     ebx, 1Fh
 * 000000014033CBF2: mov     r13d, r10d
 * 000000014033CBF5: cmp     ebx, [rax+14h]
 * 000000014033CBF8: jz      loc_14033C926
 * 000000014033CBFE: cmp     [rax], r10d
 * 000000014033CC01: jnz     short loc_14033CC0B
 * 000000014033CC03: cmp     [rax+18h], r10d
 * 000000014033CC07: cmovnz  r13d, edx
 * 000000014033CC0B: mov     ecx, [rax+10h]
 * 000000014033CC0E: mov     rdx, [rax+8]
 * 000000014033CC12: test    rcx, rcx
 * 000000014033CC15: jz      loc_14033CCCD
 * 000000014033CC1B: mov     eax, [rsi+974h]
 * 000000014033CC21: mov     r8d, 40h ; '@'
 * 000000014033CC27: test    r8b, al
 * 000000014033CC2A: jz      loc_14033CCCD
 * 000000014033CC30: mov     r12, cr8
 * 000000014033CC34: lea     eax, [r8-3Eh]
 * 000000014033CC38: mov     cr8, rax
 * 000000014033CC3C: lea     rax, [rcx-1]
 * 000000014033CC40: mov     r14, rdx
 * 000000014033CC43: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014033CC4A: add     rax, rdx
 * 000000014033CC4D: mov     ecx, 0FFFh
 * 000000014033CC52: or      rax, rcx
 * 000000014033CC55: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033CC59: lea     rax, [r14-1]
 * 000000014033CC5D: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033CC61: movzx   r15d, r12b
 * 000000014033CC65: mov     rax, [rsi+460h]
 * 000000014033CC6C: xor     edx, edx
 * 000000014033CC6E: mov     rcx, r14
 * 000000014033CC71: call    KeGuardDispatchICall
 * 000000014033CC76: xor     r10d, r10d
 * 000000014033CC79: cmp     eax, 0C000022Dh
 * 000000014033CC7E: jnz     short loc_14033CCA7
 * 000000014033CC80: test    r13d, r13d
 * 000000014033CC83: jnz     short loc_14033CCC9
 * 000000014033CC85: lea     eax, [r10+1]
 * 000000014033CC89: cmp     r12b, al
 * 000000014033CC8C: ja      short loc_14033CCAB
 * 000000014033CC8E: movzx   r15d, r12b
 * 000000014033CC92: mov     cr8, r15
 * 000000014033CC96: mov     al, [r14]
 * 000000014033CC99: mov     rax, cr8
 * 000000014033CC9D: lea     eax, [r10+2]
 * 000000014033CCA1: mov     cr8, rax
 * 000000014033CCA5: jmp     short loc_14033CC65
 * 000000014033CCA7: test    eax, eax
 * 000000014033CCA9: js      short loc_14033CCC9
 * 000000014033CCAB: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033CCAF: mov     ecx, 1000h
 * 000000014033CCB4: add     rax, rcx
 * 000000014033CCB7: add     r14, rcx
 * 000000014033CCBA: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033CCBE: cmp     rax, [rbp+20F0h+var_20C8]
 * 000000014033CCC2: jnz     short loc_14033CC61
 * 000000014033CCC4: jmp     loc_14033C922
 * 000000014033CCC9: mov     cr8, r15
 * 000000014033CCCD: mov     r13, [rbp+20F0h+var_20D0]
 * 000000014033CCD1: mov     eax, [rsi+8D8h]
 * 000000014033CCD7: mov     ecx, [r13+14h]
 * 000000014033CCDB: test    eax, eax
 * 000000014033CCDD: jnz     short loc_14033CCF5
 * 000000014033CCDF: mov     eax, ebx
 * 000000014033CCE1: xor     rcx, rax
 * 000000014033CCE4: mov     rax, [rsi+580h]
 * 000000014033CCEB: mov     [rax+18h], rcx
 * 000000014033CCEF: mov     eax, [rsi+8D8h]
 * 000000014033CCF5: mov     rcx, [r13+8]
 * 000000014033CCF9: test    eax, eax
 * 000000014033CCFB: jnz     loc_14033C92A
 * 000000014033CD01: mov     r11, 0B3B74BDEE4453415h
 * 000000014033CD0B: jmp     loc_14033C8CC
 * 000000014033CD10: xor     ebx, eax
 * 000000014033CD12: shr     rax, 1Fh
 * 000000014033CD16: test    rax, rax
 * 000000014033CD19: jnz     short loc_14033CD10
 * 000000014033CD1B: btr     ebx, 1Fh
 * 000000014033CD1F: mov     [rbp+20F0h+var_20F0], rbx
 * 000000014033CD23: jmp     loc_14033CFD0
 * 000000014033CD28: mov     r8d, r15d
 * 000000014033CD2B: mov     rdx, r13
 * 000000014033CD2E: mov     rcx, rsi
 * 000000014033CD31: call    sub_140348E50
 * 000000014033CD36: mov     ebx, eax
 * 000000014033CD38: xor     r10d, r10d
 * 000000014033CD3B: mov     eax, r15d
 * 000000014033CD3E: mov     [rbp+20F0h+var_20F0], rbx
 * 000000014033CD42: shl     eax, 3
 * 000000014033CD45: add     [rsi+810h], eax
 * 000000014033CD4B: mov     eax, [rsi+974h]
 * 000000014033CD51: bt      eax, 0Bh
 * 000000014033CD55: jnb     loc_14033CFD0
 * 000000014033CD5B: lea     rbx, [r13-6]
 * 000000014033CD5F: lea     r14, [rbx+5]
 * 000000014033CD63: mov     al, [r14]
 * 000000014033CD66: cmp     byte ptr [rbx], 4Ch ; 'L'
 * 000000014033CD69: jnz     loc_14033CF71
 * 000000014033CD6F: cmp     byte ptr [rbx+1], 87h
 * 000000014033CD73: jnz     loc_14033CF71
 * 000000014033CD79: cmp     [rbx+2], r10b
 * 000000014033CD7D: jnz     loc_14033CF71
 * 000000014033CD83: cmp     byte ptr [rbx+3], 98h
 * 000000014033CD87: jnz     loc_14033CF71
 * 000000014033CD8D: cmp     byte ptr [rbx+4], 0C3h
 * 000000014033CD91: jnz     loc_14033CF71
 * 000000014033CD97: cmp     al, 90h
 * 000000014033CD99: jz      short loc_14033CDA3
 * 000000014033CD9B: cmp     al, 0F1h
 * 000000014033CD9D: jnz     loc_14033CF71
 * 000000014033CDA3: mov     rcx, [rsi+4D0h]
 * 000000014033CDAA: cli
 * 000000014033CDAB: mov     eax, [rsi+970h]
 * 000000014033CDB1: shr     eax, 0Ah
 * 000000014033CDB4: and     eax, 1Fh
 * 000000014033CDB7: lock bts [rcx], eax
 * 000000014033CDBB: jnb     short loc_14033CDC2
 * 000000014033CDBD: sti
 * 000000014033CDBE: pause
 * 000000014033CDC0: jmp     short loc_14033CDAA
 * 000000014033CDC2: mov     edx, 26h ; '&'
 * 000000014033CDC7: lea     rax, [rbp+20F0h+var_1270]
 * 000000014033CDCE: mov     r9d, 130h
 * 000000014033CDD4: mov     ecx, r9d
 * 000000014033CDD7: lea     r8d, [rdx-25h]
 * 000000014033CDDB: mov     [rax], r10
 * 000000014033CDDE: add     ecx, 0FFFFFFF8h
 * 000000014033CDE1: add     rax, 8
 * 000000014033CDE5: sub     rdx, r8
 * 000000014033CDE8: jnz     short loc_14033CDDB
 * 000000014033CDEA: test    ecx, ecx
 * 000000014033CDEC: jz      short loc_14033CDFD
 * 000000014033CDEE: mov     edx, 0FFFFFFFFh
 * 000000014033CDF3: mov     [rax], r10b
 * 000000014033CDF6: add     rax, r8
 * 000000014033CDF9: add     ecx, edx
 * 000000014033CDFB: jnz     short loc_14033CDF3
 * 000000014033CDFD: movups  xmm0, xmmword ptr [rsi+830h]
 * 000000014033CE04: lea     rax, [rbp+20F0h+var_1270]
 * 000000014033CE0B: movdqu  [rbp+20F0h+var_1260], xmm0
 * 000000014033CE13: movups  xmm1, xmmword ptr [rsi+840h]
 * 000000014033CE1A: movdqu  [rbp+20F0h+var_1250], xmm1
 * 000000014033CE22: movups  xmm0, xmmword ptr [rsi+850h]
 * 000000014033CE29: mov     [rbp+20F0h+var_1D3E], rax
 * 000000014033CE30: lea     rax, [rsi+874h]
 * 000000014033CE37: mov     rcx, rax
 * 000000014033CE3A: mov     [rbp+20F0h+var_1A28], rax
 * 000000014033CE41: shr     rcx, 10h
 * 000000014033CE45: mov     word ptr [rbp+20F0h+var_1260], ax
 * 000000014033CE4C: shr     rax, 20h
 * 000000014033CE50: mov     dword ptr [rbp+20F0h+var_1260+8], eax
 * 000000014033CE56: movdqu  [rbp+20F0h+var_1150], xmm0
 * 000000014033CE5E: mov     word ptr [rbp+20F0h+var_1D40], r9w
 * 000000014033CE66: mov     word ptr [rbp+20F0h+var_1260+6], cx
 * 000000014033CE6D: sidt    fword ptr [rbp+20F0h+var_1BE0]
 * 000000014033CE74: lidt    fword ptr [rbp+20F0h+var_1D40]
 * 000000014033CE7B: mov     byte ptr [r14], 0F1h
 * 000000014033CE7F: mov     al, [r14]
 * 000000014033CE82: cmp     al, 0F1h
 * 000000014033CE84: jnz     loc_14033CF2C
 * 000000014033CE8A: test    dword ptr [rsi+974h], 20000h
 * 000000014033CE94: jnz     short loc_14033CEDC
 * 000000014033CE96: mov     rdx, gs:20h
 * 000000014033CE9F: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014033CEA9: mov     rax, [rsi+4B0h]
 * 000000014033CEB0: add     rcx, rsi
 * 000000014033CEB3: mov     [rax], rcx
 * 000000014033CEB6: lea     rcx, [rbx+6]
 * 000000014033CEBA: mov     rax, [rsi+4B8h]
 * 000000014033CEC1: mov     [rax], rdx
 * 000000014033CEC4: mov     rax, [rsi+4C0h]
 * 000000014033CECB: mov     [rax], rcx
 * 000000014033CECE: mov     rax, [rsi+4C8h]
 * 000000014033CED5: mov     qword ptr [rax], 113h
 * 000000014033CEDC: mov     rax, r14
 * 000000014033CEDF: call    KeGuardDispatchICall
 * 000000014033CEE4: xor     r10d, r10d
 * 000000014033CEE7: test    dword ptr [rsi+974h], 20000h
 * 000000014033CEF1: jnz     short loc_14033CF25
 * 000000014033CEF3: mov     rax, [rsi+4B0h]
 * 000000014033CEFA: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014033CF04: mov     [rax], rcx
 * 000000014033CF07: mov     rax, [rsi+4B8h]
 * 000000014033CF0E: mov     [rax], r10
 * 000000014033CF11: mov     rax, [rsi+4C0h]
 * 000000014033CF18: mov     [rax], r10
 * 000000014033CF1B: mov     rax, [rsi+4C8h]
 * 000000014033CF22: mov     [rax], r10
 * 000000014033CF25: mov     al, [r14]
 * 000000014033CF28: cmp     al, 0F1h
 * 000000014033CF2A: jz      short loc_14033CF31
 * 000000014033CF2C: mov     r9d, r10d
 * 000000014033CF2F: jmp     short loc_14033CF44
 * 000000014033CF31: mov     byte ptr [r14], 90h
 * 000000014033CF35: mov     r9d, 1
 * 000000014033CF3B: mov     al, [r14]
 * 000000014033CF3E: cmp     al, 90h
 * 000000014033CF40: cmovnz  r9d, r10d
 * 000000014033CF44: lidt    fword ptr [rbp+20F0h+var_1BE0]
 * 000000014033CF4B: mov     ecx, [rsi+970h]
 * 000000014033CF51: mov     edx, 1
 * 000000014033CF56: mov     r8, [rsi+4D0h]
 * 000000014033CF5D: shr     ecx, 0Ah
 * 000000014033CF60: and     ecx, 1Fh
 * 000000014033CF63: shl     edx, cl
 * 000000014033CF65: not     edx
 * 000000014033CF67: lock and [r8], edx
 * 000000014033CF6B: sti
 * 000000014033CF6C: test    r9d, r9d
 * 000000014033CF6F: jnz     short loc_14033CFC8
 * 000000014033CF71: mov     r14, [rbp+20F0h+var_20A0]
 * 000000014033CF75: cmp     [rsi+8D8h], r10d
 * 000000014033CF7C: jnz     short loc_14033CFCC
 * 000000014033CF7E: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033CF82: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033CF8C: add     rax, rsi
 * 000000014033CF8F: mov     [rsi+8E0h], rax
 * 000000014033CF96: mov     rax, 0B3B74BDEE4453415h
 * 000000014033CFA0: add     rax, rcx
 * 000000014033CFA3: mov     [rsi+8E8h], rax
 * 000000014033CFAA: movsxd  rax, dword ptr [rcx]
 * 000000014033CFAD: mov     [rsi+8F0h], rax
 * 000000014033CFB4: mov     eax, 1
 * 000000014033CFB9: mov     [rsi+8F8h], rbx
 * 000000014033CFC0: mov     [rsi+8D8h], eax
 * 000000014033CFC6: jmp     short loc_14033CFCC
 * 000000014033CFC8: mov     r14, [rbp+20F0h+var_20A0]
 * 000000014033CFCC: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033CFD0: mov     ecx, [r12]
 * 000000014033CFD4: mov     eax, ecx
 * 000000014033CFD6: btr     eax, 1Fh
 * 000000014033CFDA: cmp     ebx, eax
 * 000000014033CFDC: jz      loc_14033D12D
 * 000000014033CFE2: mov     edx, r15d
 * 000000014033CFE5: test    r15d, r15d
 * 000000014033CFE8: jz      loc_14033D08D
 * 000000014033CFEE: mov     eax, [rsi+974h]
 * 000000014033CFF4: mov     r8d, 40h ; '@'
 * 000000014033CFFA: test    r8b, al
 * 000000014033CFFD: jz      loc_14033D08D
 * 000000014033D003: mov     r15, cr8
 * 000000014033D007: lea     eax, [r8-3Eh]
 * 000000014033D00B: mov     cr8, rax
 * 000000014033D00F: mov     rbx, r13
 * 000000014033D012: mov     eax, 0FFFh
 * 000000014033D017: and     rbx, 0FFFFFFFFFFFFF000h
 * 000000014033D01E: dec     r13
 * 000000014033D021: add     r13, rdx
 * 000000014033D024: or      r13, rax
 * 000000014033D027: lea     r12, [rbx-1]
 * 000000014033D02B: movzx   r14d, r15b
 * 000000014033D02F: mov     rax, [rsi+460h]
 * 000000014033D036: xor     edx, edx
 * 000000014033D038: mov     rcx, rbx
 * 000000014033D03B: call    KeGuardDispatchICall
 * 000000014033D040: cmp     eax, 0C000022Dh
 * 000000014033D045: jnz     short loc_14033D06E
 * 000000014033D047: mov     eax, 1
 * 000000014033D04C: cmp     r15b, al
 * 000000014033D04F: ja      loc_14033D10A
 * 000000014033D055: movzx   r14d, r15b
 * 000000014033D059: mov     cr8, r14
 * 000000014033D05D: mov     al, [rbx]
 * 000000014033D05F: mov     rax, cr8
 * 000000014033D063: mov     eax, 2
 * 000000014033D068: mov     cr8, rax
 * 000000014033D06C: jmp     short loc_14033D02F
 * 000000014033D06E: xor     r10d, r10d
 * 000000014033D071: test    eax, eax
 * 000000014033D073: jns     loc_14033D10D
 * 000000014033D079: mov     cr8, r14
 * 000000014033D07D: mov     r12, [rbp+20F0h+var_2080]
 * 000000014033D081: mov     rbx, [rbp+20F0h+var_20F0]
 * 000000014033D085: mov     r13, [rbp+20F0h+var_20C8]
 * 000000014033D089: mov     ecx, [r12]
 * 000000014033D08D: mov     eax, ecx
 * 000000014033D08F: mov     ecx, [rsi+8D8h]
 * 000000014033D095: btr     eax, 1Fh
 * 000000014033D099: test    ecx, ecx
 * 000000014033D09B: jnz     loc_14033D129
 * 000000014033D0A1: mov     ecx, ebx
 * 000000014033D0A3: xor     rcx, rax
 * 000000014033D0A6: mov     rax, [rsi+580h]
 * 000000014033D0AD: mov     [rax+18h], rcx
 * 000000014033D0B1: mov     ecx, [rsi+8D8h]
 * 000000014033D0B7: test    ecx, ecx
 * 000000014033D0B9: jnz     short loc_14033D129
 * 000000014033D0BB: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033D0BF: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D0C9: mov     r14, [rbp+20F0h+var_20A0]
 * 000000014033D0CD: add     rax, rsi
 * 000000014033D0D0: mov     [rsi+8E0h], rax
 * 000000014033D0D7: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D0E1: lea     rax, [rcx+r11]
 * 000000014033D0E5: mov     [rsi+8E8h], rax
 * 000000014033D0EC: movsxd  rax, dword ptr [rcx]
 * 000000014033D0EF: mov     [rsi+8F0h], rax
 * 000000014033D0F6: mov     eax, 1
 * 000000014033D0FB: mov     [rsi+8F8h], r13
 * 000000014033D102: mov     [rsi+8D8h], eax
 * 000000014033D108: jmp     short loc_14033D137
 * 000000014033D10A: xor     r10d, r10d
 * 000000014033D10D: mov     eax, 1000h
 * 000000014033D112: add     rbx, rax
 * 000000014033D115: add     r12, rax
 * 000000014033D118: cmp     r12, r13
 * 000000014033D11B: jnz     loc_14033D02B
 * 000000014033D121: mov     cr8, r14
 * 000000014033D125: mov     r12, [rbp+20F0h+var_2080]
 * 000000014033D129: mov     r14, [rbp+20F0h+var_20A0]
 * 000000014033D12D: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D137: mov     r8, [rbp+20F0h+var_20D8]
 * 000000014033D13B: add     r12, 4
 * 000000014033D13F: add     r14, 0Ch
 * 000000014033D143: mov     [rbp+20F0h+var_2080], r12
 * 000000014033D147: mov     [rbp+20F0h+var_20A0], r14
 * 000000014033D14B: cmp     r14, r8
 * 000000014033D14E: jnb     short loc_14033D168
 * 000000014033D150: mov     rax, [rbp+20F0h+var_2068]
 * 000000014033D157: mov     eax, [rax]
 * 000000014033D159: cmp     [rsi+810h], eax
 * 000000014033D15F: jl      loc_14033C988
 * 000000014033D165: cmp     r14, r8
 * 000000014033D168: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033D16F: jnz     loc_14033D306
 * 000000014033D175: mov     rcx, [rsi+530h]
 * 000000014033D17C: mov     r15, cr8
 * 000000014033D180: mov     eax, 0Fh
 * 000000014033D185: mov     cr8, rax
 * 000000014033D189: mov     rax, [rsi+148h]
 * 000000014033D190: call    KeGuardDispatchICall
 * 000000014033D195: mov     rax, [rsi+600h]
 * 000000014033D19C: mov     r14, [rbp+20F0h+var_20D0]
 * 000000014033D1A0: mov     rcx, [rax]
 * 000000014033D1A3: mov     eax, [rcx]
 * 000000014033D1A5: lea     rbx, [rcx+10h]
 * 000000014033D1A9: mov     r12b, [rcx+0Ch]
 * 000000014033D1AD: lea     rcx, [rax+rax*2]
 * 000000014033D1B1: lea     r13, [rbx+rcx*8]
 * 000000014033D1B5: mov     r8d, 18h
 * 000000014033D1BB: lea     r9, [r14+18h]
 * 000000014033D1BF: mov     r10, rbx
 * 000000014033D1C2: mov     rcx, [r10]
 * 000000014033D1C5: add     r10, 8
 * 000000014033D1C9: mov     rax, [r9]
 * 000000014033D1CC: add     r9, 8
 * 000000014033D1D0: cmp     rcx, rax
 * 000000014033D1D3: jnz     short loc_14033D209
 * 000000014033D1D5: add     r8d, 0FFFFFFF8h
 * 000000014033D1D9: cmp     r8d, 8
 * 000000014033D1DD: jnb     short loc_14033D1C2
 * 000000014033D1DF: test    r8d, r8d
 * 000000014033D1E2: jz      short loc_14033D212
 * 000000014033D1E4: mov     r11d, 1
 * 000000014033D1EA: movzx   edx, byte ptr [r10]
 * 000000014033D1EE: add     r10, r11
 * 000000014033D1F1: movzx   eax, byte ptr [r9]
 * 000000014033D1F5: add     r9, r11
 * 000000014033D1F8: cmp     rdx, rax
 * 000000014033D1FB: jnz     short loc_14033D209
 * 000000014033D1FD: mov     eax, 0FFFFFFFFh
 * 000000014033D202: add     r8d, eax
 * 000000014033D205: jz      short loc_14033D212
 * 000000014033D207: jmp     short loc_14033D1EA
 * 000000014033D209: add     rbx, 18h
 * 000000014033D20D: cmp     rbx, r13
 * 000000014033D210: jb      short loc_14033D1B5
 * 000000014033D212: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033D216: mov     rcx, [rsi+530h]
 * 000000014033D21D: mov     rax, [rsi+188h]
 * 000000014033D224: call    KeGuardDispatchICall
 * 000000014033D229: movzx   eax, r15b
 * 000000014033D22D: mov     cr8, rax
 * 000000014033D231: xor     r10d, r10d
 * 000000014033D234: lea     edx, [r10+1]
 * 000000014033D238: test    r12b, r12b
 * 000000014033D23B: jz      short loc_14033D29C
 * 000000014033D23D: mov     eax, [rsi+974h]
 * 000000014033D243: lea     ecx, [rdx+0Fh]
 * 000000014033D246: test    cl, al
 * 000000014033D248: jz      short loc_14033D296
 * 000000014033D24A: cmp     [rsi+8D8h], r10d
 * 000000014033D251: jnz     short loc_14033D296
 * 000000014033D253: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033D257: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D261: add     rax, rsi
 * 000000014033D264: mov     [rsi+8E0h], rax
 * 000000014033D26B: mov     rax, 0B3B74BDEE4453415h
 * 000000014033D275: add     rax, rcx
 * 000000014033D278: mov     [rsi+8E8h], rax
 * 000000014033D27F: movsxd  rax, dword ptr [rcx]
 * 000000014033D282: mov     [rsi+8F0h], rax
 * 000000014033D289: mov     [rsi+8F8h], rdx
 * 000000014033D290: mov     [rsi+8D8h], edx
 * 000000014033D296: cmp     [r14+18h], rdx
 * 000000014033D29A: jz      short loc_14033D2F7
 * 000000014033D29C: cmp     rbx, r13
 * 000000014033D29F: jnz     short loc_14033D2F7
 * 000000014033D2A1: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D2AB: cmp     [rsi+8D8h], r10d
 * 000000014033D2B2: jnz     loc_14033A30C
 * 000000014033D2B8: mov     rcx, [rbp+20F0h+var_20D0]
 * 000000014033D2BC: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D2C6: add     rax, rsi
 * 000000014033D2C9: mov     [rsi+8E0h], rax
 * 000000014033D2D0: lea     rax, [rcx+r11]
 * 000000014033D2D4: mov     [rsi+8E8h], rax
 * 000000014033D2DB: movsxd  rax, dword ptr [rcx]
 * 000000014033D2DE: mov     [rsi+8F0h], rax
 * 000000014033D2E5: mov     [rsi+8F8h], rbx
 * 000000014033D2EC: mov     [rsi+8D8h], edx
 * 000000014033D2F2: jmp     loc_14033A30C
 * 000000014033D2F7: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D301: jmp     loc_14033A30C
 * 000000014033D306: sub     r14, [rbp+20F0h+var_2030]
 * 000000014033D30D: mov     rax, 2AAAAAAAAAAAAAABh
 * 000000014033D317: imul    r14
 * 000000014033D31A: sar     rdx, 1
 * 000000014033D31D: mov     rax, rdx
 * 000000014033D320: shr     rax, 3Fh
 * 000000014033D324: add     rdx, rax
 * 000000014033D327: mov     [rsi+80Ch], edx
 * 000000014033D32D: jmp     loc_14033362F
 * 000000014033D332: mov     eax, [r13+24h]
 * 000000014033D336: add     [rsi+810h], eax
 * 000000014033D33C: mov     r11d, [r13+20h]
 * 000000014033D340: mov     r9d, [r13+24h]
 * 000000014033D344: add     r11, rsi
 * 000000014033D347: mov     r14d, [rsi+7FCh]
 * 000000014033D34E: mov     r10, r11
 * 000000014033D351: mov     r15, [rsi+800h]
 * 000000014033D358: mov     rax, r11
 * 000000014033D35B: lea     rcx, [r11+r9]
 * 000000014033D35F: cmp     r11, rcx
 * 000000014033D362: jnb     short loc_14033D374
 * 000000014033D364: mov     edx, 40h ; '@'
 * 000000014033D369: prefetchnta byte ptr [rax]
 * 000000014033D36C: add     rax, rdx
 * 000000014033D36F: cmp     rax, rcx
 * 000000014033D372: jb      short loc_14033D369
 * 000000014033D374: mov     ebx, r9d
 * 000000014033D377: mov     r8, r15
 * 000000014033D37A: shr     ebx, 7
 * 000000014033D37D: test    ebx, ebx
 * 000000014033D37F: jz      short loc_14033D3F0
 * 000000014033D381: mov     rsi, 7010008004002001h
 * 000000014033D38B: mov     edx, 8
 * 000000014033D390: lea     r12d, [rdx-7]
 * 000000014033D394: mov     rax, [r10]
 * 000000014033D397: mov     ecx, r14d
 * 000000014033D39A: xor     rax, r8
 * 000000014033D39D: mov     r8, [r10+8]
 * 000000014033D3A1: rol     rax, cl
 * 000000014033D3A4: add     r10, 10h
 * 000000014033D3A8: xor     r8, rax
 * 000000014033D3AB: rol     r8, cl
 * 000000014033D3AE: sub     rdx, r12
 * 000000014033D3B1: jnz     short loc_14033D394
 * 000000014033D3B3: mov     rcx, r10
 * 000000014033D3B6: sub     rcx, r11
 * 000000014033D3B9: xor     rcx, r15
 * 000000014033D3BC: mov     rax, rcx
 * 000000014033D3BF: rol     rax, 11h
 * 000000014033D3C3: xor     rcx, rax
 * 000000014033D3C6: mov     rax, rsi
 * 000000014033D3C9: mul     rcx
 * 000000014033D3CC: xor     eax, edx
 * 000000014033D3CE: mov     [rbp+20F0h+var_1A20], rdx
 * 000000014033D3D5: xor     r14d, eax
 * 000000014033D3D8: mov     rax, r12
 * 000000014033D3DB: and     r14d, 3Fh
 * 000000014033D3DF: cmovz   r14d, eax
 * 000000014033D3E3: mov     eax, 0FFFFFFFFh
 * 000000014033D3E8: add     ebx, eax
 * 000000014033D3EA: jnz     short loc_14033D38B
 * 000000014033D3EC: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033D3F0: and     r9d, 7Fh
 * 000000014033D3F4: mov     r11d, 1
 * 000000014033D3FA: cmp     r9d, 8
 * 000000014033D3FE: jb      short loc_14033D41D
 * 000000014033D400: mov     edx, r9d
 * 000000014033D403: shr     rdx, 3
 * 000000014033D407: xor     r8, [r10]
 * 000000014033D40A: mov     ecx, r14d
 * 000000014033D40D: rol     r8, cl
 * 000000014033D410: add     r10, 8
 * 000000014033D414: add     r9d, 0FFFFFFF8h
 * 000000014033D418: sub     rdx, r11
 * 000000014033D41B: jnz     short loc_14033D407
 * 000000014033D41D: test    r9d, r9d
 * 000000014033D420: jz      short loc_14033D43D
 * 000000014033D422: mov     r12d, 0FFFFFFFFh
 * 000000014033D428: movzx   eax, byte ptr [r10]
 * 000000014033D42C: mov     ecx, r14d
 * 000000014033D42F: xor     r8, rax
 * 000000014033D432: add     r10, r11
 * 000000014033D435: rol     r8, cl
 * 000000014033D438: add     r9d, r12d
 * 000000014033D43B: jnz     short loc_14033D428
 * 000000014033D43D: mov     rcx, [r13+18h]
 * 000000014033D441: xor     r10d, r10d
 * 000000014033D444: cmp     r8, rcx
 * 000000014033D447: jz      loc_140333625
 * 000000014033D44D: mov     eax, [rsi+8D8h]
 * 000000014033D453: test    eax, eax
 * 000000014033D455: jnz     short loc_14033D46B
 * 000000014033D457: mov     rax, [rsi+580h]
 * 000000014033D45E: xor     rcx, r8
 * 000000014033D461: mov     [rax+18h], rcx
 * 000000014033D465: mov     eax, [rsi+8D8h]
 * 000000014033D46B: mov     ecx, [r13+20h]
 * 000000014033D46F: mov     r14d, 8000h
 * 000000014033D475: add     rcx, rsi
 * 000000014033D478: test    eax, eax
 * 000000014033D47A: jnz     loc_14033DB13
 * 000000014033D480: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D48A: add     rax, rsi
 * 000000014033D48D: mov     [rsi+8E0h], rax
 * 000000014033D494: mov     rax, 0B3B74BDEE4453415h
 * 000000014033D49E: add     rax, r13
 * 000000014033D4A1: mov     [rsi+8E8h], rax
 * 000000014033D4A8: movsxd  rax, dword ptr [r13+0]
 * 000000014033D4AC: mov     [rsi+8F0h], rax
 * 000000014033D4B3: mov     [rsi+8F8h], rcx
 * 000000014033D4BA: mov     [rsi+8D8h], r11d
 * 000000014033D4C1: jmp     loc_14033DB13
 * 000000014033D4C6: mov     ebx, 0Fh
 * 000000014033D4CB: sub     r14d, 2
 * 000000014033D4CF: jz      loc_14033DB22
 * 000000014033D4D5: sub     r14d, 1
 * 000000014033D4D9: jz      loc_14033D741
 * 000000014033D4DF: cmp     r14d, 14h
 * 000000014033D4E3: jz      short loc_14033D537
 * 000000014033D4E5: xor     r10d, r10d
 * 000000014033D4E8: mov     r14d, 8000h
 * 000000014033D4EE: cmp     [rsi+8D8h], r10d
 * 000000014033D4F5: jnz     loc_140333635
 * 000000014033D4FB: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033D505: add     rax, rsi
 * 000000014033D508: mov     [rsi+8E0h], rax
 * 000000014033D50F: lea     rax, [r11+r13]
 * 000000014033D513: mov     [rsi+8E8h], rax
 * 000000014033D51A: mov     qword ptr [rsi+8F0h], 101h
 * 000000014033D525: mov     [rsi+8F8h], r10
 * 000000014033D52C: mov     [rsi+8D8h], edx
 * 000000014033D532: jmp     loc_140333635
 * 000000014033D537: mov     edx, [r13+28h]
 * 000000014033D53B: lea     rcx, [rbp+20F0h+var_1760]
 * 000000014033D542: mov     rax, [rsi+198h]
 * 000000014033D549: call    KeGuardDispatchICall
 * 000000014033D54E: mov     rax, [rsi+1C8h]
 * 000000014033D555: lea     rdx, [rbp+20F0h+var_1750]
 * 000000014033D55C: lea     rcx, [rbp+20F0h+var_1760]
 * 000000014033D563: call    KeGuardDispatchICall
 * 000000014033D568: mov     r8, [rsi+9F0h]
 * 000000014033D56F: test    r8, r8
 * 000000014033D572: jz      short loc_14033D584
 * 000000014033D574: mov     ebx, [r8+320h]
 * 000000014033D57B: mov     r8, [rsi+9F0h]
 * 000000014033D582: jmp     short loc_14033D595
 * 000000014033D584: mov     ecx, 832h
 * 000000014033D589: rdmsr
 * 000000014033D58B: shl     rdx, 20h
 * 000000014033D58F: or      rax, rdx
 * 000000014033D592: mov     rbx, rax
 * 000000014033D595: test    r8, r8
 * 000000014033D598: jz      short loc_14033D5A3
 * 000000014033D59A: mov     r14d, [r8+340h]
 * 000000014033D5A1: jmp     short loc_14033D5B4
 * 000000014033D5A3: mov     ecx, 834h
 * 000000014033D5A8: rdmsr
 * 000000014033D5AA: shl     rdx, 20h
 * 000000014033D5AE: or      rax, rdx
 * 000000014033D5B1: mov     r14, rax
 * 000000014033D5B4: mov     rax, [rsi+190h]
 * 000000014033D5BB: lea     rcx, [rbp+20F0h+var_1750]
 * 000000014033D5C2: call    KeGuardDispatchICall
 * 000000014033D5C7: mov     eax, [r13+1Ch]
 * 000000014033D5CB: mov     r8d, [r13+18h]
 * 000000014033D5CF: and     eax, ebx
 * 000000014033D5D1: cmp     eax, r8d
 * 000000014033D5D4: jnz     short loc_14033D5F9
 * 000000014033D5D6: bt      ebx, 10h
 * 000000014033D5DA: jb      loc_14033D681
 * 000000014033D5E0: cmp     bl, 0D1h
 * 000000014033D5E3: jz      loc_14033D681
 * 000000014033D5E9: lea     eax, [rbx+3]
 * 000000014033D5EC: mov     ecx, 1
 * 000000014033D5F1: cmp     al, cl
 * 000000014033D5F3: jbe     loc_14033D681
 * 000000014033D5F9: mov     edx, [r13+28h]
 * 000000014033D5FD: mov     rax, 32000000000h
 * 000000014033D607: shl     rdx, 30h
 * 000000014033D60B: xor     r10d, r10d
 * 000000014033D60E: or      rdx, r8
 * 000000014033D611: or      rdx, rax
 * 000000014033D614: mov     eax, [rsi+8D8h]
 * 000000014033D61A: test    eax, eax
 * 000000014033D61C: jnz     short loc_14033D684
 * 000000014033D61E: mov     rax, [rsi+580h]
 * 000000014033D625: mov     ecx, ebx
 * 000000014033D627: xor     rcx, r8
 * 000000014033D62A: mov     [rax+18h], rcx
 * 000000014033D62E: mov     eax, [rsi+8D8h]
 * 000000014033D634: test    eax, eax
 * 000000014033D636: jnz     short loc_14033D684
 * 000000014033D638: mov     r9, 0A3A03F5891C8B4E8h
 * 000000014033D642: lea     r8d, [r10+1]
 * 000000014033D646: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D650: lea     rax, [rsi+r9]
 * 000000014033D654: mov     [rsi+8E0h], rax
 * 000000014033D65B: lea     rax, [r11+r13]
 * 000000014033D65F: mov     [rsi+8E8h], rax
 * 000000014033D666: movsxd  rax, dword ptr [r13+0]
 * 000000014033D66A: mov     [rsi+8F0h], rax
 * 000000014033D671: mov     [rsi+8F8h], rdx
 * 000000014033D678: mov     [rsi+8D8h], r8d
 * 000000014033D67F: jmp     short loc_14033D69E
 * 000000014033D681: xor     r10d, r10d
 * 000000014033D684: mov     r9, 0A3A03F5891C8B4E8h
 * 000000014033D68E: mov     r11, 0B3B74BDEE4453415h
 * 000000014033D698: mov     r8d, 1
 * 000000014033D69E: mov     eax, [r13+24h]
 * 000000014033D6A2: mov     ecx, [r13+20h]
 * 000000014033D6A6: and     eax, r14d
 * 000000014033D6A9: cmp     eax, ecx
 * 000000014033D6AB: jnz     short loc_14033D6C3
 * 000000014033D6AD: bt      r14d, 10h
 * 000000014033D6B2: jb      short loc_14033D72F
 * 000000014033D6B4: cmp     r14b, 0D1h
 * 000000014033D6B8: jz      short loc_14033D72F
 * 000000014033D6BA: lea     eax, [r14+3]
 * 000000014033D6BE: cmp     al, r8b
 * 000000014033D6C1: jbe     short loc_14033D72F
 * 000000014033D6C3: mov     edx, [r13+28h]
 * 000000014033D6C7: mov     rax, 34000000000h
 * 000000014033D6D1: shl     rdx, 30h
 * 000000014033D6D5: or      rdx, rcx
 * 000000014033D6D8: or      rdx, rax
 * 000000014033D6DB: mov     eax, [rsi+8D8h]
 * 000000014033D6E1: test    eax, eax
 * 000000014033D6E3: jnz     short loc_14033D72F
 * 000000014033D6E5: mov     eax, r14d
 * 000000014033D6E8: xor     rcx, rax
 * 000000014033D6EB: mov     rax, [rsi+580h]
 * 000000014033D6F2: mov     [rax+18h], rcx
 * 000000014033D6F6: mov     eax, [rsi+8D8h]
 * 000000014033D6FC: test    eax, eax
 * 000000014033D6FE: jnz     short loc_14033D72F
 * 000000014033D700: lea     rax, [rsi+r9]
 * 000000014033D704: mov     [rsi+8E0h], rax
 * 000000014033D70B: lea     rax, [r11+r13]
 * 000000014033D70F: mov     [rsi+8E8h], rax
 * 000000014033D716: movsxd  rax, dword ptr [r13+0]
 * 000000014033D71A: mov     [rsi+8F0h], rax
 * 000000014033D721: mov     [rsi+8F8h], rdx
 * 000000014033D728: mov     [rsi+8D8h], r8d
 * 000000014033D72F: mov     r14d, 8000h
 * 000000014033D735: add     [rsi+810h], r14d
 * 000000014033D73C: jmp     loc_140333635
 * 000000014033D741: mov     edx, [r13+28h]
 * 000000014033D745: lea     rcx, [rbp+20F0h+var_1740]
 * 000000014033D74C: mov     rax, [rsi+198h]
 * 000000014033D753: call    KeGuardDispatchICall
 * 000000014033D758: mov     rax, [rsi+1C8h]
 * 000000014033D75F: lea     rdx, [rbp+20F0h+var_1730]
 * 000000014033D766: lea     rcx, [rbp+20F0h+var_1740]
 * 000000014033D76D: call    KeGuardDispatchICall
 * 000000014033D772: lea     rdx, [rbp+20F0h+var_1678]
 * 000000014033D779: lea     rcx, [rbp+20F0h+var_1DC0]
 * 000000014033D780: call    KiGetGdtIdt
 * 000000014033D785: mov     r15, [rbp+20F0h+var_1DBE]
 * 000000014033D78C: mov     ecx, 2
 * 000000014033D791: mov     r14d, [r13+10h]
 * 000000014033D795: test    [rsi+863h], cl
 * 000000014033D79B: jz      loc_14033D8B1
 * 000000014033D7A1: mov     edx, 26h ; '&'
 * 000000014033D7A6: lea     rax, [rbp+20F0h+var_1570]
 * 000000014033D7AD: mov     r10d, 130h
 * 000000014033D7B3: xor     r8d, r8d
 * 000000014033D7B6: mov     ecx, r10d
 * 000000014033D7B9: lea     r9d, [rdx-25h]
 * 000000014033D7BD: mov     [rax], r8
 * 000000014033D7C0: add     ecx, 0FFFFFFF8h
 * 000000014033D7C3: add     rax, 8
 * 000000014033D7C7: sub     rdx, r9
 * 000000014033D7CA: jnz     short loc_14033D7BD
 * 000000014033D7CC: test    ecx, ecx
 * 000000014033D7CE: jz      short loc_14033D7DF
 * 000000014033D7D0: mov     edx, 0FFFFFFFFh
 * 000000014033D7D5: mov     [rax], r8b
 * 000000014033D7D8: add     rax, r9
 * 000000014033D7DB: add     ecx, edx
 * 000000014033D7DD: jnz     short loc_14033D7D5
 * 000000014033D7DF: movups  xmm0, xmmword ptr [rsi+830h]
 * 000000014033D7E6: lea     rax, [rbp+20F0h+var_1570]
 * 000000014033D7ED: movdqu  [rbp+20F0h+var_1560], xmm0
 * 000000014033D7F5: movups  xmm1, xmmword ptr [rsi+840h]
 * 000000014033D7FC: movdqu  [rbp+20F0h+var_1550], xmm1
 * 000000014033D804: movups  xmm0, xmmword ptr [rsi+850h]
 * 000000014033D80B: mov     [rbp+20F0h+var_1D2E], rax
 * 000000014033D812: lea     rax, [rsi+860h]
 * 000000014033D819: mov     rcx, rax
 * 000000014033D81C: mov     [rbp+20F0h+var_2070], rax
 * 000000014033D823: shr     rcx, 10h
 * 000000014033D827: mov     word ptr [rbp+20F0h+var_1560], ax
 * 000000014033D82E: shr     rax, 20h
 * 000000014033D832: mov     dword ptr [rbp+20F0h+var_1560+8], eax
 * 000000014033D838: movdqu  [rbp+20F0h+var_1450], xmm0
 * 000000014033D840: mov     word ptr [rbp+20F0h+var_1D30], r10w
 * 000000014033D848: mov     word ptr [rbp+20F0h+var_1560+6], cx
 * 000000014033D84F: cli
 * 000000014033D850: sidt    fword ptr [rbp+20F0h+var_1BD0]
 * 000000014033D857: lidt    fword ptr [rbp+20F0h+var_1D30]
 * 000000014033D85E: mov     dr7, r8
 * 000000014033D862: lea     rax, [rsi+866h]
 * 000000014033D869: mov     rcx, rax
 * 000000014033D86C: mov     [rbp+20F0h+var_2070], rax
 * 000000014033D873: mov     word ptr [rbp+20F0h+var_1560], ax
 * 000000014033D87A: shr     rcx, 10h
 * 000000014033D87E: shr     rax, 20h
 * 000000014033D882: mov     word ptr [rbp+20F0h+var_1560+6], cx
 * 000000014033D889: mov     dword ptr [rbp+20F0h+var_1560+8], eax
 * 000000014033D88F: call    KiErrata704Present
 * 000000014033D894: mov     [rsi+8C8h], rax
 * 000000014033D89B: mov     eax, gs:1A4h
 * 000000014033D8A3: mov     [rsi+8D0h], eax
 * 000000014033D8A9: lidt    fword ptr [rbp+20F0h+var_1BD0]
 * 000000014033D8B0: sti
 * 000000014033D8B1: call    KiGetLdtr
 * 000000014033D8B6: movzx   r12d, ax
 * 000000014033D8BA: call    KiGetTr
 * 000000014033D8BF: add     [rsi+810h], r14d
 * 000000014033D8C6: lea     rcx, [r15+r14]
 * 000000014033D8CA: mov     r10d, [rsi+7FCh]
 * 000000014033D8D1: movzx   r13d, ax
 * 000000014033D8D5: mov     r11, [rsi+800h]
 * 000000014033D8DC: mov     r8, r15
 * 000000014033D8DF: mov     rax, r15
 * 000000014033D8E2: cmp     r15, rcx
 * 000000014033D8E5: jnb     short loc_14033D8F7
 * 000000014033D8E7: mov     edx, 40h ; '@'
 * 000000014033D8EC: prefetchnta byte ptr [rax]
 * 000000014033D8EF: add     rax, rdx
 * 000000014033D8F2: cmp     rax, rcx
 * 000000014033D8F5: jb      short loc_14033D8EC
 * 000000014033D8F7: mov     r9d, r14d
 * 000000014033D8FA: mov     rbx, r11
 * 000000014033D8FD: shr     r9d, 7
 * 000000014033D901: test    r9d, r9d
 * 000000014033D904: jz      short loc_14033D97C
 * 000000014033D906: mov     rdi, 7010008004002001h
 * 000000014033D910: mov     edx, 8
 * 000000014033D915: lea     esi, [rdx-7]
 * 000000014033D918: mov     rax, [r8]
 * 000000014033D91B: mov     ecx, r10d
 * 000000014033D91E: xor     rax, rbx
 * 000000014033D921: mov     rbx, [r8+8]
 * 000000014033D925: rol     rax, cl
 * 000000014033D928: add     r8, 10h
 * 000000014033D92C: xor     rbx, rax
 * 000000014033D92F: rol     rbx, cl
 * 000000014033D932: sub     rdx, rsi
 * 000000014033D935: jnz     short loc_14033D918
 * 000000014033D937: mov     rcx, r8
 * 000000014033D93A: sub     rcx, r15
 * 000000014033D93D: xor     rcx, r11
 * 000000014033D940: mov     rax, rcx
 * 000000014033D943: rol     rax, 11h
 * 000000014033D947: xor     rcx, rax
 * 000000014033D94A: mov     rax, rdi
 * 000000014033D94D: mul     rcx
 * 000000014033D950: xor     eax, edx
 * 000000014033D952: mov     [rbp+20F0h+var_1A18], rdx
 * 000000014033D959: xor     r10d, eax
 * 000000014033D95C: mov     rax, rsi
 * 000000014033D95F: and     r10d, 3Fh
 * 000000014033D963: cmovz   r10d, eax
 * 000000014033D967: mov     eax, 0FFFFFFFFh
 * 000000014033D96C: add     r9d, eax
 * 000000014033D96F: jnz     short loc_14033D910
 * 000000014033D971: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033D975: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033D97C: and     r14d, 7Fh
 * 000000014033D980: mov     r9d, 1
 * 000000014033D986: cmp     r14d, 8
 * 000000014033D98A: jb      short loc_14033D9A9
 * 000000014033D98C: mov     edx, r14d
 * 000000014033D98F: shr     rdx, 3
 * 000000014033D993: xor     rbx, [r8]
 * 000000014033D996: mov     ecx, r10d
 * 000000014033D999: rol     rbx, cl
 * 000000014033D99C: add     r8, 8
 * 000000014033D9A0: add     r14d, 0FFFFFFF8h
 * 000000014033D9A4: sub     rdx, r9
 * 000000014033D9A7: jnz     short loc_14033D993
 * 000000014033D9A9: mov     r15d, 0FFFFFFFFh
 * 000000014033D9AF: test    r14d, r14d
 * 000000014033D9B2: jz      short loc_14033D9C9
 * 000000014033D9B4: movzx   eax, byte ptr [r8]
 * 000000014033D9B8: mov     ecx, r10d
 * 000000014033D9BB: xor     rbx, rax
 * 000000014033D9BE: add     r8, r9
 * 000000014033D9C1: rol     rbx, cl
 * 000000014033D9C4: add     r14d, r15d
 * 000000014033D9C7: jnz     short loc_14033D9B4
 * 000000014033D9C9: mov     rax, rbx
 * 000000014033D9CC: jmp     short loc_14033D9D0
 * 000000014033D9CE: xor     ebx, eax
 * 000000014033D9D0: shr     rax, 1Fh
 * 000000014033D9D4: test    rax, rax
 * 000000014033D9D7: jnz     short loc_14033D9CE
 * 000000014033D9D9: mov     rax, [rsi+190h]
 * 000000014033D9E0: lea     rcx, [rbp+20F0h+var_1730]
 * 000000014033D9E7: btr     ebx, 1Fh
 * 000000014033D9EB: call    KeGuardDispatchICall
 * 000000014033D9F0: mov     r9, [rbp+20F0h+var_20D0]
 * 000000014033D9F4: xor     r10d, r10d
 * 000000014033D9F7: lea     r14d, [r10+40h]
 * 000000014033D9FB: cmp     ebx, [r9+14h]
 * 000000014033D9FF: jnz     short loc_14033DA1F
 * 000000014033DA01: movzx   eax, word ptr [r9+2Ch]
 * 000000014033DA06: cmp     [rbp+20F0h+var_1DC0], ax
 * 000000014033DA0D: jnz     short loc_14033DA1F
 * 000000014033DA0F: test    r12w, r12w
 * 000000014033DA13: jnz     short loc_14033DA1F
 * 000000014033DA15: cmp     r13w, r14w
 * 000000014033DA19: jz      loc_14033DB06
 * 000000014033DA1F: test    dword ptr [rsi+970h], 40000000h
 * 000000014033DA29: mov     r11d, 1
 * 000000014033DA2F: jz      short loc_14033DA71
 * 000000014033DA31: mov     rcx, [rsi+0A50h]
 * 000000014033DA38: lea     edx, [r11+2Fh]
 * 000000014033DA3C: lea     r8d, [r11+5]
 * 000000014033DA40: mov     rax, [r9]
 * 000000014033DA43: add     edx, 0FFFFFFF8h
 * 000000014033DA46: mov     [rcx], rax
 * 000000014033DA49: add     r9, 8
 * 000000014033DA4D: add     rcx, 8
 * 000000014033DA51: sub     r8, r11
 * 000000014033DA54: jnz     short loc_14033DA40
 * 000000014033DA56: test    edx, edx
 * 000000014033DA58: jz      short loc_14033DA6A
 * 000000014033DA5A: mov     al, [r9]
 * 000000014033DA5D: add     r9, r11
 * 000000014033DA60: mov     [rcx], al
 * 000000014033DA62: add     rcx, r11
 * 000000014033DA65: add     edx, r15d
 * 000000014033DA68: jnz     short loc_14033DA5A
 * 000000014033DA6A: mov     r9, [rsi+0A50h]
 * 000000014033DA71: mov     rax, [rbp+20F0h+var_1DBE]
 * 000000014033DA78: mov     edx, ebx
 * 000000014033DA7A: mov     [r9+18h], rax
 * 000000014033DA7E: mov     [r9+20h], rdx
 * 000000014033DA82: test    r12w, r12w
 * 000000014033DA86: jz      short loc_14033DA8E
 * 000000014033DA88: movzx   eax, r12w
 * 000000014033DA8C: jmp     short loc_14033DA98
 * 000000014033DA8E: cmp     r13w, r14w
 * 000000014033DA92: jz      short loc_14033DA9C
 * 000000014033DA94: movzx   eax, r13w
 * 000000014033DA98: mov     [r9+18h], rax
 * 000000014033DA9C: mov     eax, [rsi+8D8h]
 * 000000014033DAA2: mov     ecx, [r9+14h]
 * 000000014033DAA6: test    eax, eax
 * 000000014033DAA8: jnz     short loc_14033DABE
 * 000000014033DAAA: mov     rax, [rsi+580h]
 * 000000014033DAB1: xor     rcx, rdx
 * 000000014033DAB4: mov     [rax+18h], rcx
 * 000000014033DAB8: mov     eax, [rsi+8D8h]
 * 000000014033DABE: mov     rcx, [r9+8]
 * 000000014033DAC2: test    eax, eax
 * 000000014033DAC4: jnz     short loc_14033DB06
 * 000000014033DAC6: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033DAD0: add     rax, rsi
 * 000000014033DAD3: mov     [rsi+8E0h], rax
 * 000000014033DADA: mov     rax, 0B3B74BDEE4453415h
 * 000000014033DAE4: add     rax, r9
 * 000000014033DAE7: mov     [rsi+8E8h], rax
 * 000000014033DAEE: movsxd  rax, dword ptr [r9]
 * 000000014033DAF1: mov     [rsi+8F0h], rax
 * 000000014033DAF8: mov     [rsi+8F8h], rcx
 * 000000014033DAFF: mov     [rsi+8D8h], r11d
 * 000000014033DB06: mov     r14d, 8000h
 * 000000014033DB0C: add     [rsi+810h], r14d
 * 000000014033DB13: mov     r11, 0B3B74BDEE4453415h
 * 000000014033DB1D: jmp     loc_140333635
 * 000000014033DB22: mov     edx, [r13+28h]
 * 000000014033DB26: lea     rcx, [rbp+20F0h+var_1720]
 * 000000014033DB2D: mov     rax, [rsi+198h]
 * 000000014033DB34: xor     r15d, r15d
 * 000000014033DB37: mov     [rbp+20F0h+var_2090], r15d
 * 000000014033DB3B: call    KeGuardDispatchICall
 * 000000014033DB40: mov     rax, [rsi+1C8h]
 * 000000014033DB47: lea     rdx, [rbp+20F0h+var_1710]
 * 000000014033DB4E: lea     rcx, [rbp+20F0h+var_1720]
 * 000000014033DB55: call    KeGuardDispatchICall
 * 000000014033DB5A: lea     rdx, [rbp+20F0h+var_1D20]
 * 000000014033DB61: lea     rcx, [rbp+20F0h+var_1668]
 * 000000014033DB68: call    KiGetGdtIdt
 * 000000014033DB6D: mov     rcx, [rbp+20F0h+var_1D1E]
 * 000000014033DB74: mov     edi, r15d
 * 000000014033DB77: mov     [rbp+20F0h+var_20C8], rcx
 * 000000014033DB7B: add     rcx, 4
 * 000000014033DB7F: mov     [rbp+20F0h+var_20F0], rcx
 * 000000014033DB83: mov     rax, [rsi+8B0h]
 * 000000014033DB8A: mov     r10, r15
 * 000000014033DB8D: mov     [rbp+20F0h+var_1F48], rax
 * 000000014033DB94: mov     r14, r15
 * 000000014033DB97: mov     r8, [rsi+8B8h]
 * 000000014033DB9E: mov     r12d, [rsi+894h]
 * 000000014033DBA5: mov     r13d, [rsi+898h]
 * 000000014033DBAC: mov     [rbp+20F0h+var_20D8], r8
 * 000000014033DBB0: mov     [rbp+20F0h+var_20B8], r15
 * 000000014033DBB4: mov     [rbp+20F0h+var_20A0], r15
 * 000000014033DBB8: mov     r15, cr8
 * 000000014033DBBC: mov     cr8, rbx
 * 000000014033DBC0: movzx   eax, word ptr [rcx-4]
 * 000000014033DBC4: movzx   r9d, word ptr [rcx]
 * 000000014033DBC8: mov     word ptr [rbp+20F0h+var_2088], ax
 * 000000014033DBCC: movzx   eax, word ptr [rcx+2]
 * 000000014033DBD0: mov     word ptr [rbp+20F0h+var_2088+2], ax
 * 000000014033DBD4: mov     eax, [rcx+4]
 * 000000014033DBD7: mov     rcx, [rsi+608h]
 * 000000014033DBDE: mov     dword ptr [rbp+20F0h+var_2088+4], eax
 * 000000014033DBE1: mov     rbx, [rbp+20F0h+var_2088]
 * 000000014033DBE5: mov     eax, edi
 * 000000014033DBE7: mov     word ptr [rbp+20F0h+var_2060], r9w
 * 000000014033DBEF: lea     rdx, [rcx+rax*8]
 * 000000014033DBF3: cmp     rbx, rdx
 * 000000014033DBF6: jnz     short loc_14033DC5F
 * 000000014033DBF8: mov     eax, 6000h
 * 000000014033DBFD: test    ax, r9w
 * 000000014033DC01: jz      short loc_14033DC13
 * 000000014033DC03: movzx   eax, r15b
 * 000000014033DC07: mov     cr8, rax
 * 000000014033DC0B: xor     r15d, r15d
 * 000000014033DC0E: jmp     loc_14033DFE9
 * 000000014033DC13: mov     rax, [rsi+468h]
 * 000000014033DC1A: mov     ecx, edi
 * 000000014033DC1C: call    KeGuardDispatchICall
 * 000000014033DC21: mov     r14, [rax]
 * 000000014033DC24: test    r14, r14
 * 000000014033DC27: jz      short loc_14033DC51
 * 000000014033DC29: mov     r12, [r12+r14]
 * 000000014033DC2D: mov     [rbp+20F0h+var_20B8], r12
 * 000000014033DC31: cmp     edi, 30h ; '0'
 * 000000014033DC34: jnb     short loc_14033DC46
 * 000000014033DC36: movzx   eax, r15b
 * 000000014033DC3A: mov     cr8, rax
 * 000000014033DC3E: xor     r15d, r15d
 * 000000014033DC41: jmp     loc_14033DFE5
 * 000000014033DC46: mov     r13, [r13+r14+0]
 * 000000014033DC4B: mov     r8, [rbp+20F0h+var_20D8]
 * 000000014033DC4F: jmp     short loc_14033DC66
 * 000000014033DC51: mov     r8, [rbp+20F0h+var_20D8]
 * 000000014033DC55: or      r14, 0FFFFFFFFFFFFFFFFh
 * 000000014033DC59: mov     r13, [rbp+20F0h+var_20A0]
 * 000000014033DC5D: jmp     short loc_14033DC62
 * 000000014033DC5F: mov     r13, r10
 * 000000014033DC62: mov     r12, [rbp+20F0h+var_20B8]
 * 000000014033DC66: movzx   eax, r15b
 * 000000014033DC6A: mov     cr8, rax
 * 000000014033DC6E: xor     r15d, r15d
 * 000000014033DC71: test    r14, r14
 * 000000014033DC74: jnz     short loc_14033DCBF
 * 000000014033DC76: mov     rdx, [rbp+20F0h+var_1F48]
 * 000000014033DC7D: cmp     rbx, rdx
 * 000000014033DC80: jb      loc_14033DFE5
 * 000000014033DC86: cmp     rbx, r8
 * 000000014033DC89: ja      loc_14033DFE5
 * 000000014033DC8F: mov     r8d, dword ptr [rbp+20F0h+var_2088]
 * 000000014033DC93: mov     rcx, [rsi+8C0h]
 * 000000014033DC9A: sub     r8d, edx
 * 000000014033DC9D: mov     rax, [rsi+208h]
 * 000000014033DCA4: call    KeGuardDispatchICall
 * 000000014033DCA9: test    rax, rax
 * 000000014033DCAC: jz      loc_14033DFE5
 * 000000014033DCB2: mov     eax, [rax+24h]
 * 000000014033DCB5: bt      eax, 19h
 * 000000014033DCB9: jb      loc_14033DFE5
 * 000000014033DCBF: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033DCC3: mov     ecx, 10h
 * 000000014033DCC8: cmp     [rax-2], cx
 * 000000014033DCCC: jnz     loc_14033DFE5
 * 000000014033DCD2: movzx   ecx, word ptr [rax]
 * 000000014033DCD5: mov     edx, 1F00h
 * 000000014033DCDA: movzx   eax, cx
 * 000000014033DCDD: and     ax, dx
 * 000000014033DCE0: mov     edx, 0E00h
 * 000000014033DCE5: cmp     ax, dx
 * 000000014033DCE8: jnz     loc_14033DFE5
 * 000000014033DCEE: mov     eax, 8000h
 * 000000014033DCF3: test    ax, cx
 * 000000014033DCF6: jz      loc_14033DFE5
 * 000000014033DCFC: mov     rax, [rsi+258h]
 * 000000014033DD03: lea     rdx, [rbp+20F0h+var_1F48]
 * 000000014033DD0A: xor     r8d, r8d
 * 000000014033DD0D: mov     rcx, rbx
 * 000000014033DD10: call    KeGuardDispatchICall
 * 000000014033DD15: test    rax, rax
 * 000000014033DD18: jz      loc_14033DF48
 * 000000014033DD1E: mov     eax, [rax]
 * 000000014033DD20: mov     rcx, [rbp+20F0h+var_1F48]
 * 000000014033DD27: add     rax, rcx
 * 000000014033DD2A: cmp     rax, rbx
 * 000000014033DD2D: jnz     loc_14033DF48
 * 000000014033DD33: cmp     rcx, [rsi+8B0h]
 * 000000014033DD3A: jnz     loc_14033DF48
 * 000000014033DD40: test    r14, r14
 * 000000014033DD43: jnz     loc_14033DF51
 * 000000014033DD49: mov     r13d, 1
 * 000000014033DD4F: mov     rcx, [rbp+20F0h+var_20F0]
 * 000000014033DD53: add     edi, r13d
 * 000000014033DD56: add     rcx, 10h
 * 000000014033DD5A: mov     ebx, 0Fh
 * 000000014033DD5F: mov     [rbp+20F0h+var_20F0], rcx
 * 000000014033DD63: cmp     edi, 0FFh
 * 000000014033DD69: jbe     loc_14033DB83
 * 000000014033DD6F: test    [rsi+863h], r13b
 * 000000014033DD76: jz      loc_14033DE4A
 * 000000014033DD7C: cli
 * 000000014033DD7D: mov     r14d, 0C0000082h
 * 000000014033DD83: mov     ecx, r14d
 * 000000014033DD86: rdmsr
 * 000000014033DD88: shl     rdx, 20h
 * 000000014033DD8C: or      rax, rdx
 * 000000014033DD8F: lea     rdx, [rsi+862h]
 * 000000014033DD96: mov     rbx, rax
 * 000000014033DD99: mov     rax, rdx
 * 000000014033DD9C: shr     rdx, 20h
 * 000000014033DDA0: wrmsr
 * 000000014033DDA2: test    dword ptr [rsi+974h], 20000h
 * 000000014033DDAC: jnz     short loc_14033DDF0
 * 000000014033DDAE: mov     rdx, gs:20h
 * 000000014033DDB7: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014033DDC1: mov     rax, [rsi+4B0h]
 * 000000014033DDC8: add     rcx, rsi
 * 000000014033DDCB: mov     [rax], rcx
 * 000000014033DDCE: mov     rax, [rsi+4B8h]
 * 000000014033DDD5: mov     [rax], rdx
 * 000000014033DDD8: mov     rax, [rsi+4C0h]
 * 000000014033DDDF: mov     [rax], r14
 * 000000014033DDE2: mov     rax, [rsi+4C8h]
 * 000000014033DDE9: mov     qword ptr [rax], 112h
 * 000000014033DDF0: lea     rax, [rsi+864h]
 * 000000014033DDF7: call    KeGuardDispatchICall
 * 000000014033DDFC: test    dword ptr [rsi+974h], 20000h
 * 000000014033DE06: jnz     short loc_14033DE3A
 * 000000014033DE08: mov     rax, [rsi+4B0h]
 * 000000014033DE0F: mov     rcx, 0A3A03F5891C8B4E8h
 * 000000014033DE19: mov     [rax], rcx
 * 000000014033DE1C: mov     rax, [rsi+4B8h]
 * 000000014033DE23: mov     [rax], r15
 * 000000014033DE26: mov     rax, [rsi+4C0h]
 * 000000014033DE2D: mov     [rax], r15
 * 000000014033DE30: mov     rax, [rsi+4C8h]
 * 000000014033DE37: mov     [rax], r15
 * 000000014033DE3A: mov     rdx, rbx
 * 000000014033DE3D: mov     rax, rbx
 * 000000014033DE40: shr     rdx, 20h
 * 000000014033DE44: mov     ecx, r14d
 * 000000014033DE47: wrmsr
 * 000000014033DE49: sti
 * 000000014033DE4A: mov     r15, [rbp+20F0h+var_20C8]
 * 000000014033DE4E: add     dword ptr [rsi+810h], 350h
 * 000000014033DE58: mov     r8, r15
 * 000000014033DE5B: mov     ebx, [rsi+810h]
 * 000000014033DE61: mov     rax, r15
 * 000000014033DE64: mov     r9d, [rsi+7FCh]
 * 000000014033DE6B: mov     r11, [rsi+800h]
 * 000000014033DE72: lea     rcx, [r15+350h]
 * 000000014033DE79: cmp     r15, rcx
 * 000000014033DE7C: jnb     short loc_14033DE8E
 * 000000014033DE7E: mov     edx, 40h ; '@'
 * 000000014033DE83: prefetchnta byte ptr [rax]
 * 000000014033DE86: add     rax, rdx
 * 000000014033DE89: cmp     rax, rcx
 * 000000014033DE8C: jb      short loc_14033DE83
 * 000000014033DE8E: mov     r14, r11
 * 000000014033DE91: mov     esi, 0FFFFFFFFh
 * 000000014033DE96: mov     rdi, 7010008004002001h
 * 000000014033DEA0: mov     r10d, 6
 * 000000014033DEA6: mov     eax, 8
 * 000000014033DEAB: xor     r14, [r8]
 * 000000014033DEAE: mov     ecx, r9d
 * 000000014033DEB1: rol     r14, cl
 * 000000014033DEB4: xor     r14, [r8+8]
 * 000000014033DEB8: add     r8, 10h
 * 000000014033DEBC: rol     r14, cl
 * 000000014033DEBF: sub     rax, r13
 * 000000014033DEC2: jnz     short loc_14033DEAB
 * 000000014033DEC4: mov     rcx, r8
 * 000000014033DEC7: sub     rcx, r15
 * 000000014033DECA: xor     rcx, r11
 * 000000014033DECD: mov     rax, rcx
 * 000000014033DED0: rol     rax, 11h
 * 000000014033DED4: xor     rcx, rax
 * 000000014033DED7: mov     rax, rdi
 * 000000014033DEDA: mul     rcx
 * 000000014033DEDD: xor     eax, edx
 * 000000014033DEDF: mov     [rbp+20F0h+var_1A10], rdx
 * 000000014033DEE6: xor     r9d, eax
 * 000000014033DEE9: and     r9d, 3Fh
 * 000000014033DEED: cmovz   r9d, r13d
 * 000000014033DEF1: add     r10d, esi
 * 000000014033DEF4: jnz     short loc_14033DEA6
 * 000000014033DEF6: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033DEFA: lea     edx, [r10+50h]
 * 000000014033DEFE: mov     r12d, [rbp+20F0h+var_2090]
 * 000000014033DF02: lea     eax, [rdx-46h]
 * 000000014033DF05: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033DF0C: xor     r14, [r8]
 * 000000014033DF0F: mov     ecx, r9d
 * 000000014033DF12: rol     r14, cl
 * 000000014033DF15: add     r8, 8
 * 000000014033DF19: add     edx, 0FFFFFFF8h
 * 000000014033DF1C: sub     rax, r13
 * 000000014033DF1F: jnz     short loc_14033DF0C
 * 000000014033DF21: test    edx, edx
 * 000000014033DF23: jz      short loc_14033DF40
 * 000000014033DF25: mov     r11d, 0FFFFFFFFh
 * 000000014033DF2B: movzx   eax, byte ptr [r8]
 * 000000014033DF2F: mov     ecx, r9d
 * 000000014033DF32: xor     r14, rax
 * 000000014033DF35: add     r8, r13
 * 000000014033DF38: rol     r14, cl
 * 000000014033DF3B: add     edx, r11d
 * 000000014033DF3E: jnz     short loc_14033DF2B
 * 000000014033DF40: mov     rax, r14
 * 000000014033DF43: jmp     loc_14033E023
 * 000000014033DF48: test    r14, r14
 * 000000014033DF4B: jz      loc_14033DFE5
 * 000000014033DF51: mov     eax, 6000h
 * 000000014033DF56: test    word ptr [rbp+20F0h+var_2060], ax
 * 000000014033DF5D: jnz     loc_14033DFE5
 * 000000014033DF63: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 000000014033DF67: jz      loc_14033DD49
 * 000000014033DF6D: mov     rax, [rsi+258h]
 * 000000014033DF74: lea     rdx, [rbp+20F0h+var_1F48]
 * 000000014033DF7B: xor     r8d, r8d
 * 000000014033DF7E: mov     rcx, r12
 * 000000014033DF81: call    KeGuardDispatchICall
 * 000000014033DF86: test    rax, rax
 * 000000014033DF89: jz      short loc_14033DFE5
 * 000000014033DF8B: mov     eax, [rax]
 * 000000014033DF8D: mov     rdx, [rbp+20F0h+var_1F48]
 * 000000014033DF94: add     rax, rdx
 * 000000014033DF97: cmp     rax, r12
 * 000000014033DF9A: jnz     short loc_14033DFE5
 * 000000014033DF9C: cmp     rdx, [rsi+8B0h]
 * 000000014033DFA3: jnz     short loc_14033DFE5
 * 000000014033DFA5: mov     rcx, [rsi+8C0h]
 * 000000014033DFAC: mov     r8d, r12d
 * 000000014033DFAF: mov     rax, [rsi+208h]
 * 000000014033DFB6: sub     r8d, edx
 * 000000014033DFB9: call    KeGuardDispatchICall
 * 000000014033DFBE: test    rax, rax
 * 000000014033DFC1: jz      short loc_14033DFE5
 * 000000014033DFC3: mov     eax, [rax+24h]
 * 000000014033DFC6: bt      eax, 19h
 * 000000014033DFCA: jb      short loc_14033DFE5
 * 000000014033DFCC: cmp     edi, 0FEh
 * 000000014033DFD2: jnz     loc_14033DD49
 * 000000014033DFD8: cmp     r13, [rsi+8A0h]
 * 000000014033DFDF: jz      loc_14033DD49
 * 000000014033DFE5: mov     r10, [rbp+20F0h+var_20B8]
 * 000000014033DFE9: mov     rax, [rsi+580h]
 * 000000014033DFF0: mov     [rax], rbx
 * 000000014033DFF3: mov     dword ptr [rax+10h], 80h
 * 000000014033DFFA: test    r10, r10
 * 000000014033DFFD: jz      short loc_14033E011
 * 000000014033DFFF: mov     rax, [rsi+580h]
 * 000000014033E006: mov     [rax+8], r10
 * 000000014033E00A: mov     dword ptr [rax+14h], 80h
 * 000000014033E011: mov     r13d, 1
 * 000000014033E017: mov     [rbp+20F0h+var_2090], r13d
 * 000000014033E01B: jmp     loc_14033DD4F
 * 000000014033E020: xor     r14d, eax
 * 000000014033E023: shr     rax, 1Fh
 * 000000014033E027: test    rax, rax
 * 000000014033E02A: jnz     short loc_14033E020
 * 000000014033E02C: lea     eax, [rbx+10h]
 * 000000014033E02F: btr     r14d, 1Fh
 * 000000014033E034: mov     [rsi+810h], eax
 * 000000014033E03A: lea     rdx, [r15+0E10h]
 * 000000014033E041: mov     r10d, [rsi+7FCh]
 * 000000014033E048: lea     rcx, [r15+0E20h]
 * 000000014033E04F: mov     rbx, [rsi+800h]
 * 000000014033E056: mov     rax, rdx
 * 000000014033E059: cmp     rdx, rcx
 * 000000014033E05C: jnb     short loc_14033E06F
 * 000000014033E05E: mov     r8d, 40h ; '@'
 * 000000014033E064: prefetchnta byte ptr [rax]
 * 000000014033E067: add     rax, r8
 * 000000014033E06A: cmp     rax, rcx
 * 000000014033E06D: jb      short loc_14033E064
 * 000000014033E06F: mov     r8d, 10h
 * 000000014033E075: lea     r9d, [r8-0Eh]
 * 000000014033E079: xor     rbx, [rdx]
 * 000000014033E07C: mov     ecx, r10d
 * 000000014033E07F: rol     rbx, cl
 * 000000014033E082: add     rdx, 8
 * 000000014033E086: add     r8d, 0FFFFFFF8h
 * 000000014033E08A: sub     r9, r13
 * 000000014033E08D: jnz     short loc_14033E079
 * 000000014033E08F: test    r8d, r8d
 * 000000014033E092: jz      short loc_14033E0AE
 * 000000014033E094: mov     r11d, 0FFFFFFFFh
 * 000000014033E09A: movzx   eax, byte ptr [rdx]
 * 000000014033E09D: mov     ecx, r10d
 * 000000014033E0A0: xor     rbx, rax
 * 000000014033E0A3: add     rdx, r13
 * 000000014033E0A6: rol     rbx, cl
 * 000000014033E0A9: add     r8d, r11d
 * 000000014033E0AC: jnz     short loc_14033E09A
 * 000000014033E0AE: mov     rax, rbx
 * 000000014033E0B1: jmp     short loc_14033E0B5
 * 000000014033E0B3: xor     ebx, eax
 * 000000014033E0B5: shr     rax, 1Fh
 * 000000014033E0B9: test    rax, rax
 * 000000014033E0BC: jnz     short loc_14033E0B3
 * 000000014033E0BE: mov     rax, [rsi+190h]
 * 000000014033E0C5: lea     rcx, [rbp+20F0h+var_1710]
 * 000000014033E0CC: btr     ebx, 1Fh
 * 000000014033E0D0: call    KeGuardDispatchICall
 * 000000014033E0D5: mov     r9, [rbp+20F0h+var_20D0]
 * 000000014033E0D9: xor     r10d, r10d
 * 000000014033E0DC: mov     r8d, [r9+14h]
 * 000000014033E0E0: cmp     r14d, r8d
 * 000000014033E0E3: jnz     short loc_14033E104
 * 000000014033E0E5: mov     eax, ebx
 * 000000014033E0E7: cmp     rax, [r9+18h]
 * 000000014033E0EB: jnz     short loc_14033E104
 * 000000014033E0ED: movzx   eax, word ptr [r9+2Ch]
 * 000000014033E0F2: cmp     [rbp+20F0h+var_1D20], ax
 * 000000014033E0F9: jnz     short loc_14033E104
 * 000000014033E0FB: test    r12d, r12d
 * 000000014033E0FE: jz      loc_14033E18C
 * 000000014033E104: test    r12d, r12d
 * 000000014033E107: jnz     short loc_14033E13C
 * 000000014033E109: mov     rdx, [r9+18h]
 * 000000014033E10D: mov     ecx, [rsi+8D8h]
 * 000000014033E113: mov     eax, ebx
 * 000000014033E115: cmp     rax, rdx
 * 000000014033E118: jnz     short loc_14033E126
 * 000000014033E11A: test    ecx, ecx
 * 000000014033E11C: jnz     short loc_14033E13C
 * 000000014033E11E: mov     rcx, r8
 * 000000014033E121: mov     eax, r14d
 * 000000014033E124: jmp     short loc_14033E12E
 * 000000014033E126: test    ecx, ecx
 * 000000014033E128: jnz     short loc_14033E13C
 * 000000014033E12A: mov     ecx, edx
 * 000000014033E12C: mov     eax, ebx
 * 000000014033E12E: xor     rcx, rax
 * 000000014033E131: mov     rax, [rsi+580h]
 * 000000014033E138: mov     [rax+18h], rcx
 * 000000014033E13C: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E146: mov     rcx, [r9+8]
 * 000000014033E14A: cmp     [rsi+8D8h], r10d
 * 000000014033E151: jnz     short loc_14033E196
 * 000000014033E153: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033E15D: add     rax, rsi
 * 000000014033E160: mov     [rsi+8E0h], rax
 * 000000014033E167: lea     rax, [r9+r11]
 * 000000014033E16B: mov     [rsi+8E8h], rax
 * 000000014033E172: movsxd  rax, dword ptr [r9]
 * 000000014033E175: mov     [rsi+8F0h], rax
 * 000000014033E17C: mov     [rsi+8F8h], rcx
 * 000000014033E183: mov     [rsi+8D8h], r13d
 * 000000014033E18A: jmp     short loc_14033E196
 * 000000014033E18C: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E196: add     dword ptr [rsi+810h], 10000h
 * 000000014033E1A0: jmp     loc_14033362F
 * 000000014033E1A5: mov     edx, [r13+2Ch]
 * 000000014033E1A9: lea     rcx, [rbp+20F0h+var_1700]
 * 000000014033E1B0: mov     rax, [rsi+198h]
 * 000000014033E1B7: call    KeGuardDispatchICall
 * 000000014033E1BC: mov     rax, [rsi+1C8h]
 * 000000014033E1C3: lea     rdx, [rbp+20F0h+var_16F0]
 * 000000014033E1CA: lea     rcx, [rbp+20F0h+var_1700]
 * 000000014033E1D1: call    KeGuardDispatchICall
 * 000000014033E1D6: xor     ecx, ecx
 * 000000014033E1D8: xgetbv
 * 000000014033E1DB: shl     rdx, 20h
 * 000000014033E1DF: lea     rcx, [rbp+20F0h+var_16F0]
 * 000000014033E1E6: or      rdx, rax
 * 000000014033E1E9: mov     rax, [rsi+190h]
 * 000000014033E1F0: mov     rbx, rdx
 * 000000014033E1F3: call    KeGuardDispatchICall
 * 000000014033E1F8: mov     r8, [r13+18h]
 * 000000014033E1FC: xor     r10d, r10d
 * 000000014033E1FF: mov     rdx, [r13+20h]
 * 000000014033E203: and     r8, rbx
 * 000000014033E206: cmp     r8, rdx
 * 000000014033E209: jz      loc_140333625
 * 000000014033E20F: mov     eax, [r13+28h]
 * 000000014033E213: mov     ecx, [r13+2Ch]
 * 000000014033E217: shl     rcx, 20h
 * 000000014033E21B: or      rcx, rax
 * 000000014033E21E: mov     eax, [rsi+8D8h]
 * 000000014033E224: test    eax, eax
 * 000000014033E226: jnz     loc_140333625
 * 000000014033E22C: mov     rax, [rsi+580h]
 * 000000014033E233: xor     rdx, r8
 * 000000014033E236: mov     [rax+18h], rdx
 * 000000014033E23A: mov     eax, [rsi+8D8h]
 * 000000014033E240: test    eax, eax
 * 000000014033E242: jnz     loc_140333625
 * 000000014033E248: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033E252: mov     r11, 0B3B74BDEE4453415h
 * 000000014033E25C: add     rax, rsi
 * 000000014033E25F: mov     [rsi+8E0h], rax
 * 000000014033E266: lea     rax, [r11+r13]
 * 000000014033E26A: mov     [rsi+8E8h], rax
 * 000000014033E271: movsxd  rax, dword ptr [r13+0]
 * 000000014033E275: mov     [rsi+8F0h], rax
 * 000000014033E27C: mov     [rsi+8F8h], rcx
 * 000000014033E283: jmp     loc_1403378DD
 * 000000014033E288: xor     r10d, r10d
 * 000000014033E28B: jmp     short loc_14033E290
 * 000000014033E28D: mov     r13, rdx
 * 000000014033E290: mov     [rsi+808h], ecx
 * 000000014033E296: cmp     [rbp+20F0h+var_2018], r10d
 * 000000014033E29D: jz      short loc_14033E30C
 * 000000014033E29F: mov     rcx, gs:20h
 * 000000014033E2A8: mov     rax, [rsi+630h]
 * 000000014033E2AF: mov     rdx, [rax+rcx]
 * 000000014033E2B3: lea     rcx, [rbp+20F0h+var_16E0]
 * 000000014033E2BA: mov     rax, [rsi+670h]
 * 000000014033E2C1: add     rdx, [rsi+690h]
 * 000000014033E2C8: mov     rbx, [rdx+rax]
 * 000000014033E2CC: mov     rax, [rsi+190h]
 * 000000014033E2D3: call    KeGuardDispatchICall
 * 000000014033E2D8: mov     rax, [rsi+438h]
 * 000000014033E2DF: lea     rcx, [rbp+20F0h+var_1B40]
 * 000000014033E2E6: call    KeGuardDispatchICall
 * 000000014033E2EB: mov     rax, [rsi+3A0h]
 * 000000014033E2F2: mov     rcx, rbx
 * 000000014033E2F5: call    KeGuardDispatchICall
 * 000000014033E2FA: mov     rax, [rsi+3B0h]
 * 000000014033E301: mov     rcx, rbx
 * 000000014033E304: call    KeGuardDispatchICall
 * 000000014033E309: xor     r10d, r10d
 * 000000014033E30C: cmp     [rbp+20F0h+var_20C0], r10d
 * 000000014033E310: jz      loc_14033E3B1
 * 000000014033E316: test    [rsi+970h], r14d
 * 000000014033E31D: jnz     short loc_14033E32C
 * 000000014033E31F: cmp     [rsi+8D8h], r10d
 * 000000014033E326: jnz     loc_14033E3B1
 * 000000014033E32C: mov     rbx, [rsi+960h]
 * 000000014033E333: lea     rdx, [rbp+20F0h+var_1B40]
 * 000000014033E33A: mov     [rsi+960h], r10
 * 000000014033E341: mov     rcx, rbx
 * 000000014033E344: mov     rax, [rsi+290h]
 * 000000014033E34B: call    KeGuardDispatchICall
 * 000000014033E350: mov     eax, [rsi+970h]
 * 000000014033E356: test    r13b, al
 * 000000014033E359: jz      short loc_14033E397
 * 000000014033E35B: and     eax, 0FFFFFFFEh
 * 000000014033E35E: mov     rcx, rbx
 * 000000014033E361: mov     [rsi+970h], eax
 * 000000014033E367: mov     rax, [rsi+278h]
 * 000000014033E36E: call    KeGuardDispatchICall
 * 000000014033E373: xor     r10d, r10d
 * 000000014033E376: mov     rbx, rax
 * 000000014033E379: test    rax, rax
 * 000000014033E37C: jz      loc_14033E54B
 * 000000014033E382: mov     rax, [rsi+298h]
 * 000000014033E389: mov     rcx, rbx
 * 000000014033E38C: call    KeGuardDispatchICall
 * 000000014033E391: mov     [rsi+950h], eax
 * 000000014033E397: xor     r10d, r10d
 * 000000014033E39A: test    rbx, rbx
 * 000000014033E39D: jz      short loc_14033E3B1
 * 000000014033E39F: mov     rax, [rsi+280h]
 * 000000014033E3A6: mov     rcx, rbx
 * 000000014033E3A9: call    KeGuardDispatchICall
 * 000000014033E3AE: xor     r10d, r10d
 * 000000014033E3B1: mov     eax, [rsi+970h]
 * 000000014033E3B7: mov     ecx, 800008h
 * 000000014033E3BC: and     eax, ecx
 * 000000014033E3BE: cmp     eax, ecx
 * 000000014033E3C0: jnz     loc_14033E7A9
 * 000000014033E3C6: mov     eax, [rsi+974h]
 * 000000014033E3CC: mov     r11d, [rsi+7F0h]
 * 000000014033E3D3: and     eax, r13d
 * 000000014033E3D6: mov     rax, [rsi+0A40h]
 * 000000014033E3DD: mov     r10d, [rsi+7CCh]
 * 000000014033E3E4: mov     r12, [rsi+9D8h]
 * 000000014033E3EB: mov     [rbp+20F0h+var_2070], rax
 * 000000014033E3F2: mov     [rbp+20F0h+var_20C0], r11d
 * 000000014033E3F6: jz      short loc_14033E3FF
 * 000000014033E3F8: mov     r12, [rsi+5C8h]
 * 000000014033E3FF: mov     rax, [rsi+158h]
 * 000000014033E406: mov     [rbp+20F0h+var_2088], rax
 * 000000014033E40A: mov     rax, [rsi+2C0h]
 * 000000014033E411: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033E415: mov     rax, [rsi+338h]
 * 000000014033E41C: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033E420: rdtsc
 * 000000014033E422: shl     rdx, 20h
 * 000000014033E426: mov     rbx, 7010008004002001h
 * 000000014033E430: or      rax, rdx
 * 000000014033E433: mov     r9, rdi
 * 000000014033E436: mov     rcx, rax
 * 000000014033E439: ror     rax, 3
 * 000000014033E43D: xor     rcx, rax
 * 000000014033E440: mov     rax, rbx
 * 000000014033E443: mul     rcx
 * 000000014033E446: mov     rcx, rdx
 * 000000014033E449: mov     [rbp+20F0h+var_1A08], rdx
 * 000000014033E450: xor     rcx, rax
 * 000000014033E453: mov     rax, 0ABCC77118461CEFDh
 * 000000014033E45D: mul     rcx
 * 000000014033E460: shr     rdx, 1Ah
 * 000000014033E464: imul    rax, rdx, 5F5E100h
 * 000000014033E46B: sub     rcx, rax
 * 000000014033E46E: sub     r9, rcx
 * 000000014033E471: mov     [rbp+20F0h+var_1ED8], r9
 * 000000014033E478: mov     r8d, [rsi+970h]
 * 000000014033E47F: bt      r8d, 1Ah
 * 000000014033E484: jnb     loc_14033E527
 * 000000014033E48A: rdtsc
 * 000000014033E48C: shl     rdx, 20h
 * 000000014033E490: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 000000014033E49A: or      rax, rdx
 * 000000014033E49D: mov     rcx, rax
 * 000000014033E4A0: ror     rax, 3
 * 000000014033E4A4: xor     rcx, rax
 * 000000014033E4A7: mov     rax, rbx
 * 000000014033E4AA: mul     rcx
 * 000000014033E4AD: mov     rcx, rdx
 * 000000014033E4B0: mov     [rbp+20F0h+var_1A00], rdx
 * 000000014033E4B7: xor     rcx, rax
 * 000000014033E4BA: mov     rax, r14
 * 000000014033E4BD: mul     rcx
 * 000000014033E4C0: shr     rdx, 3
 * 000000014033E4C4: lea     rax, [rdx+rdx*4]
 * 000000014033E4C8: add     rax, rax
 * 000000014033E4CB: sub     rcx, rax
 * 000000014033E4CE: mov     eax, 2
 * 000000014033E4D3: cmp     rcx, rax
 * 000000014033E4D6: jnb     short loc_14033E527
 * 000000014033E4D8: rdtsc
 * 000000014033E4DA: shl     rdx, 20h
 * 000000014033E4DE: or      rax, rdx
 * 000000014033E4E1: mov     rcx, rax
 * 000000014033E4E4: ror     rax, 3
 * 000000014033E4E8: xor     rcx, rax
 * 000000014033E4EB: mov     rax, rbx
 * 000000014033E4EE: mul     rcx
 * 000000014033E4F1: mov     rcx, rdx
 * 000000014033E4F4: mov     [rbp+20F0h+var_19F8], rdx
 * 000000014033E4FB: xor     rcx, rax
 * 000000014033E4FE: mov     rax, r14
 * 000000014033E501: mul     rcx
 * 000000014033E504: shr     rdx, 3
 * 000000014033E508: lea     rax, [rdx+rdx*4]
 * 000000014033E50C: add     rax, rax
 * 000000014033E50F: sub     rcx, rax
 * 000000014033E512: add     rcx, r13
 * 000000014033E515: imul    rcx, r9
 * 000000014033E519: mov     [rbp+20F0h+var_1ED8], rcx
 * 000000014033E520: mov     r8d, [rsi+970h]
 * 000000014033E527: xor     r9d, r9d
 * 000000014033E52A: mov     r14d, r11d
 * 000000014033E52D: mov     ebx, r9d
 * 000000014033E530: mov     r15d, r9d
 * 000000014033E533: lea     ecx, [r9+2]
 * 000000014033E537: test    cl, r8b
 * 000000014033E53A: cmovnz  r14d, r10d
 * 000000014033E53E: test    r8b, r8b
 * 000000014033E541: js      short loc_14033E55B
 * 000000014033E543: mov     r13d, r9d
 * 000000014033E546: jmp     loc_14033E624
 * 000000014033E54B: mov     eax, 0FFFFFFFFh
 * 000000014033E550: mov     [rsi+950h], eax
 * 000000014033E556: jmp     loc_14033E39A
 * 000000014033E55B: rdtsc
 * 000000014033E55D: shl     rdx, 20h
 * 000000014033E561: or      rax, rdx
 * 000000014033E564: mov     rcx, rax
 * 000000014033E567: ror     rax, 3
 * 000000014033E56B: xor     rcx, rax
 * 000000014033E56E: mov     rax, 7010008004002001h
 * 000000014033E578: mul     rcx
 * 000000014033E57B: mov     ecx, 14Eh
 * 000000014033E580: mov     rbx, rdx
 * 000000014033E583: mov     [rbp+20F0h+var_19F0], rdx
 * 000000014033E58A: xor     rbx, rax
 * 000000014033E58D: mov     edx, 1
 * 000000014033E592: mov     r15, rbx
 * 000000014033E595: lea     rax, [rsi+0A68h]
 * 000000014033E59C: xor     r15, rsi
 * 000000014033E59F: mov     r10, rbx
 * 000000014033E5A2: xor     [rax], r10
 * 000000014033E5A5: lea     rax, [rax-8]
 * 000000014033E5A9: ror     r10, cl
 * 000000014033E5AC: sub     ecx, edx
 * 000000014033E5AE: jnz     short loc_14033E5A2
 * 000000014033E5B0: lea     r8, [r11-0A70h]
 * 000000014033E5B7: shr     r8, 3
 * 000000014033E5BB: test    r8d, r8d
 * 000000014033E5BE: jz      short loc_14033E5F8
 * 000000014033E5C0: movsxd  r9, r8d
 * 000000014033E5C3: add     rsi, 0A68h
 * 000000014033E5CA: mov     rdi, rdx
 * 000000014033E5CD: lea     r9, [rsi+r9*8]
 * 000000014033E5D1: mov     rdx, [r9]
 * 000000014033E5D4: lea     rax, [r15+r15]
 * 000000014033E5D8: mov     ecx, r8d
 * 000000014033E5DB: lea     r9, [r9-8]
 * 000000014033E5DF: ror     rdx, cl
 * 000000014033E5E2: mov     r15, rdx
 * 000000014033E5E5: xor     r15, rax
 * 000000014033E5E8: sub     r8d, edi
 * 000000014033E5EB: jnz     short loc_14033E5D1
 * 000000014033E5ED: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033E5F1: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033E5F8: mov     ecx, r14d
 * 000000014033E5FB: lea     rdx, [r11+rsi]
 * 000000014033E5FF: sub     ecx, r11d
 * 000000014033E602: shr     ecx, 3
 * 000000014033E605: test    ecx, ecx
 * 000000014033E607: jz      short loc_14033E624
 * 000000014033E609: lea     rdx, [rdx+rcx*8]
 * 000000014033E60D: mov     eax, 1
 * 000000014033E612: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 000000014033E616: xor     [rdx], r10
 * 000000014033E619: lea     rdx, [rdx-8]
 * 000000014033E61D: ror     r10, cl
 * 000000014033E620: sub     ecx, eax
 * 000000014033E622: jnz     short loc_14033E616
 * 000000014033E624: mov     rax, [rbp+20F0h+var_2070]
 * 000000014033E62B: test    rax, rax
 * 000000014033E62E: jz      short loc_14033E651
 * 000000014033E630: mov     r9, [rbp+20F0h+var_2088]
 * 000000014033E634: lea     r8, [rbp+20F0h+var_1ED8]
 * 000000014033E63B: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 000000014033E640: mov     edx, r14d
 * 000000014033E643: mov     rax, [rbp+20F0h+var_20C8]
 * 000000014033E647: mov     rcx, rsi
 * 000000014033E64A: call    KeGuardDispatchICall
 * 000000014033E64F: jmp     short loc_14033E68A
 * 000000014033E651: xor     edx, edx
 * 000000014033E653: test    r12, r12
 * 000000014033E656: jnz     short loc_14033E66C
 * 000000014033E658: mov     rax, [rbp+20F0h+var_2088]
 * 000000014033E65C: lea     r8, [rbp+20F0h+var_1ED8]
 * 000000014033E663: xor     ecx, ecx
 * 000000014033E665: call    KeGuardDispatchICall
 * 000000014033E66A: jmp     short loc_14033E68A
 * 000000014033E66C: lea     rax, [rbp+20F0h+var_1ED8]
 * 000000014033E673: xor     r9d, r9d
 * 000000014033E676: mov     [rsp+10F0h+BugCheckParameter4], rax
 * 000000014033E67B: xor     r8d, r8d
 * 000000014033E67E: mov     rax, [rbp+20F0h+var_20F0]
 * 000000014033E682: mov     rcx, r12
 * 000000014033E685: call    KeGuardDispatchICall
 * 000000014033E68A: xor     r10d, r10d
 * 000000014033E68D: test    r13d, r13d
 * 000000014033E690: jz      loc_14033E7A9
 * 000000014033E696: mov     r9, rbx
 * 000000014033E699: lea     rax, [rsi+0A68h]
 * 000000014033E6A0: xor     r9, rsi
 * 000000014033E6A3: lea     r13d, [r10+1]
 * 000000014033E6A7: mov     ecx, 14Eh
 * 000000014033E6AC: xor     [rax], rbx
 * 000000014033E6AF: lea     rax, [rax-8]
 * 000000014033E6B3: ror     rbx, cl
 * 000000014033E6B6: sub     ecx, r13d
 * 000000014033E6B9: jnz     short loc_14033E6AC
 * 000000014033E6BB: mov     r12d, [rbp+20F0h+var_20C0]
 * 000000014033E6BF: mov     r11d, r12d
 * 000000014033E6C2: lea     r8, [r12-0A70h]
 * 000000014033E6CA: shr     r8, 3
 * 000000014033E6CE: test    r8d, r8d
 * 000000014033E6D1: jz      short loc_14033E703
 * 000000014033E6D3: movsxd  r10, r8d
 * 000000014033E6D6: add     r10, 14Dh
 * 000000014033E6DD: lea     r10, [rsi+r10*8]
 * 000000014033E6E1: mov     rdx, [r10]
 * 000000014033E6E4: lea     rax, [r9+r9]
 * 000000014033E6E8: mov     ecx, r8d
 * 000000014033E6EB: lea     r10, [r10-8]
 * 000000014033E6EF: ror     rdx, cl
 * 000000014033E6F2: mov     r9, rdx
 * 000000014033E6F5: xor     r9, rax
 * 000000014033E6F8: sub     r8d, r13d
 * 000000014033E6FB: jnz     short loc_14033E6E1
 * 000000014033E6FD: mov     r11, r12
 * 000000014033E700: xor     r10d, r10d
 * 000000014033E703: sub     r14d, r12d
 * 000000014033E706: lea     rcx, [r11+rsi]
 * 000000014033E70A: shr     r14d, 3
 * 000000014033E70E: test    r14d, r14d
 * 000000014033E711: jz      short loc_14033E72F
 * 000000014033E713: mov     edx, r14d
 * 000000014033E716: dec     rdx
 * 000000014033E719: lea     rdx, [rcx+rdx*8]
 * 000000014033E71D: xor     [rdx], rbx
 * 000000014033E720: mov     ecx, r14d
 * 000000014033E723: ror     rbx, cl
 * 000000014033E726: lea     rdx, [rdx-8]
 * 000000014033E72A: sub     r14d, r13d
 * 000000014033E72D: jnz     short loc_14033E71D
 * 000000014033E72F: cmp     r9, r15
 * 000000014033E732: jz      short loc_14033E7A9
 * 000000014033E734: mov     rax, [rsi+580h]
 * 000000014033E73B: mov     ecx, [rsi+7CCh]
 * 000000014033E741: mov     [rax], rsi
 * 000000014033E744: mov     [rax+10h], ecx
 * 000000014033E747: mov     eax, [rsi+8D8h]
 * 000000014033E74D: test    eax, eax
 * 000000014033E74F: jnz     short loc_14033E7A9
 * 000000014033E751: mov     rax, [rsi+580h]
 * 000000014033E758: mov     rcx, r9
 * 000000014033E75B: xor     rcx, r15
 * 000000014033E75E: mov     [rax+18h], rcx
 * 000000014033E762: mov     eax, [rsi+8D8h]
 * 000000014033E768: test    eax, eax
 * 000000014033E76A: jnz     short loc_14033E7A9
 * 000000014033E76C: mov     r13, 0A3A03F5891C8B4E8h
 * 000000014033E776: mov     r15d, 1
 * 000000014033E77C: lea     rax, [rsi+r13]
 * 000000014033E780: mov     [rsi+8E0h], rax
 * 000000014033E787: mov     [rsi+8E8h], r10
 * 000000014033E78E: mov     qword ptr [rsi+8F0h], 10Eh
 * 000000014033E799: mov     [rsi+8F8h], r9
 * 000000014033E7A0: mov     [rsi+8D8h], r15d
 * 000000014033E7A7: jmp     short loc_14033E7B9
 * 000000014033E7A9: mov     r13, 0A3A03F5891C8B4E8h
 * 000000014033E7B3: mov     r15d, 1
 * 000000014033E7B9: mov     eax, [rsi+934h]
 * 000000014033E7BF: cmp     eax, 0Bh
 * 000000014033E7C2: jz      loc_1403430C8
 * 000000014033E7C8: cmp     eax, r15d
 * 000000014033E7CB: jz      loc_1403430C8
 * 000000014033E7D1: cmp     [rsi+8D8h], r10d
 * 000000014033E7D8: jnz     loc_1403430CC
 * 000000014033E7DE: mov     rax, [rsi+940h]
 * 000000014033E7E5: mov     rcx, [rax]
 * 000000014033E7E8: cmp     rcx, [rsi+948h]
 * 000000014033E7EF: jz      loc_140342E91
 * 000000014033E7F5: mov     ecx, [rsi+950h]
 * 000000014033E7FB: mov     r12d, 0FFFFFFFFh
 * 000000014033E801: mov     rbx, rsi
 * 000000014033E804: mov     [rbp+20F0h+var_20A0], rbx
 * 000000014033E808: cmp     ecx, r12d
 * 000000014033E80B: jz      short loc_14033E81E
 * 000000014033E80D: mov     rax, [rsi+270h]
 * 000000014033E814: call    KeGuardDispatchICall
 * 000000014033E819: mov     r14, rax
 * 000000014033E81C: jmp     short loc_14033E821
 * 000000014033E81E: mov     r14, r10
 * 000000014033E821: test    r14, r14
 * 000000014033E824: jnz     short loc_14033E840
 * 000000014033E826: mov     rax, [rsi+278h]
 * 000000014033E82D: xor     ecx, ecx
 * 000000014033E82F: call    KeGuardDispatchICall
 * 000000014033E834: mov     r14, rax
 * 000000014033E837: test    rax, rax
 * 000000014033E83A: jz      loc_1403430C8
 * 000000014033E840: mov     rax, [rsi+288h]
 * 000000014033E847: lea     rdx, [rbp+20F0h+var_1B40]
 * 000000014033E84E: mov     rcx, r14
 * 000000014033E851: call    KeGuardDispatchICall
 * 000000014033E856: mov     r15d, eax
 * 000000014033E859: test    eax, eax
 * 000000014033E85B: jns     short loc_14033E86E
 * 000000014033E85D: mov     rax, [rsi+280h]
 * 000000014033E864: mov     rcx, r14
 * 000000014033E867: call    KeGuardDispatchICall
 * 000000014033E86C: jmp     short loc_14033E8D6
 * 000000014033E86E: mov     [rsi+960h], r14
 * 000000014033E875: mov     rax, [rsi+2B0h]
 * 000000014033E87C: call    KeGuardDispatchICall
 * 000000014033E881: mov     r14, rax
 * 000000014033E884: mov     rax, [rsi+2D0h]
 * 000000014033E88B: mov     rcx, r14
 * 000000014033E88E: call    KeGuardDispatchICall
 * 000000014033E893: xor     r10d, r10d
 * 000000014033E896: mov     rdx, rax
 * 000000014033E899: test    rax, rax
 * 000000014033E89C: jnz     short loc_14033E8A3
 * 000000014033E89E: lea     ecx, [rax+4]
 * 000000014033E8A1: jmp     short loc_14033E8B8
 * 000000014033E8A3: mov     rax, [rsi+2E0h]
 * 000000014033E8AA: mov     rcx, r14
 * 000000014033E8AD: call    KeGuardDispatchICall
 * 000000014033E8B2: xor     r10d, r10d
 * 000000014033E8B5: mov     ecx, r10d
 * 000000014033E8B8: mov     eax, [rsi+974h]
 * 000000014033E8BE: mov     r15d, r10d
 * 000000014033E8C1: and     eax, 0FFFFFFFBh
 * 000000014033E8C4: or      eax, ecx
 * 000000014033E8C6: mov     [rsi+974h], eax
 * 000000014033E8CC: add     dword ptr [rsi+810h], 10000h
 * 000000014033E8D6: test    r15d, r15d
 * 000000014033E8D9: js      loc_1403430C2
 * 000000014033E8DF: mov     rax, [rsi+298h]
 * 000000014033E8E6: mov     rcx, [rsi+960h]
 * 000000014033E8ED: call    KeGuardDispatchICall
 * 000000014033E8F2: xor     r10d, r10d
 * 000000014033E8F5: test    eax, eax
 * 000000014033E8F7: jnz     loc_140342E62
 * 000000014033E8FD: mov     rax, [rsi+568h]
 * 000000014033E904: lea     ecx, [r10+20h]
 * 000000014033E908: add     rax, rcx
 * 000000014033E90B: mov     [rbp+20F0h+var_2068], 2
 * 000000014033E916: mov     [rbp+20F0h+var_1C68], rax
 * 000000014033E91D: lea     rdi, [rbp+20F0h+var_1C68]
 * 000000014033E924: mov     rax, [rsi+560h]
 * 000000014033E92B: mov     r13d, r10d
 * 000000014033E92E: add     rax, rcx
 * 000000014033E931: mov     [rbp+20F0h+var_2080], rdi
 * 000000014033E935: mov     [rbp+20F0h+var_1C60], rax
 * 000000014033E93C: mov     rax, [rsi+940h]
 * 000000014033E943: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033E947: mov     rax, [rsi+948h]
 * 000000014033E94E: mov     rsi, [rbp+20F0h+var_20F0]
 * 000000014033E952: mov     rbx, rax
 * 000000014033E955: mov     [rbp+20F0h+var_2088], rax
 * 000000014033E959: mov     rdx, [rdi]
 * 000000014033E95C: mov     r12, rsi
 * 000000014033E95F: xor     r12, r13
 * 000000014033E962: mov     [rbp+20F0h+var_2070], rdx
 * 000000014033E969: mov     r11d, r12d
 * 000000014033E96C: and     r11d, 3Fh
 * 000000014033E970: mov     r8, [rdx]
 * 000000014033E973: mov     r15d, [rdx+10h]
 * 000000014033E977: mov     r9, r8
 * 000000014033E97A: mov     r10d, r15d
 * 000000014033E97D: mov     [rbp+20F0h+var_20D8], r8
 * 000000014033E981: shl     r10d, 2
 * 000000014033E985: mov     rax, r8
 * 000000014033E988: mov     ecx, r10d
 * 000000014033E98B: add     rcx, r8
 * 000000014033E98E: cmp     r8, rcx
 * 000000014033E991: jnb     short loc_14033E9A4
 * 000000014033E993: mov     r8d, 40h ; '@'
 * 000000014033E999: prefetchnta byte ptr [rax]
 * 000000014033E99C: add     rax, r8
 * 000000014033E99F: cmp     rax, rcx
 * 000000014033E9A2: jb      short loc_14033E999
 * 000000014033E9A4: mov     r14d, r10d
 * 000000014033E9A7: xor     r13d, r13d
 * 000000014033E9AA: shr     r14d, 7
 * 000000014033E9AE: mov     r8, r12
 * 000000014033E9B1: test    r14d, r14d
 * 000000014033E9B4: jz      short loc_14033EA33
 * 000000014033E9B6: mov     r13, r9
 * 000000014033E9B9: mov     esi, 1
 * 000000014033E9BE: mov     ebx, 0FFFFFFFFh
 * 000000014033E9C3: mov     rdi, 7010008004002001h
 * 000000014033E9CD: mov     eax, 8
 * 000000014033E9D2: xor     r8, [r9]
 * 000000014033E9D5: mov     ecx, r11d
 * 000000014033E9D8: rol     r8, cl
 * 000000014033E9DB: xor     r8, [r9+8]
 * 000000014033E9DF: add     r9, 10h
 * 000000014033E9E3: rol     r8, cl
 * 000000014033E9E6: sub     rax, rsi
 * 000000014033E9E9: jnz     short loc_14033E9D2
 * 000000014033E9EB: mov     rcx, r9
 * 000000014033E9EE: sub     rcx, r13
 * 000000014033E9F1: xor     rcx, r12
 * 000000014033E9F4: mov     rax, rcx
 * 000000014033E9F7: rol     rax, 11h
 * 000000014033E9FB: xor     rcx, rax
 * 000000014033E9FE: mov     rax, rdi
 * 000000014033EA01: mul     rcx
 * 000000014033EA04: xor     eax, edx
 * 000000014033EA06: mov     [rbp+20F0h+var_19E8], rdx
 * 000000014033EA0D: xor     r11d, eax
 * 000000014033EA10: and     r11d, 3Fh
 * 000000014033EA14: cmovz   r11d, esi
 * 000000014033EA18: add     r14d, ebx
 * 000000014033EA1B: jnz     short loc_14033E9CD
 * 000000014033EA1D: mov     rdx, [rbp+20F0h+var_2070]
 * 000000014033EA24: xor     r13d, r13d
 * 000000014033EA27: mov     rdi, [rbp+20F0h+var_2080]
 * 000000014033EA2B: mov     rsi, [rbp+20F0h+var_20F0]
 * 000000014033EA2F: mov     rbx, [rbp+20F0h+var_2088]
 * 000000014033EA33: and     r10d, 7Fh
 * 000000014033EA37: mov     r14d, 1
 * 000000014033EA3D: cmp     r10d, 8
 * 000000014033EA41: jb      short loc_14033EA60
 * 000000014033EA43: mov     eax, r10d
 * 000000014033EA46: shr     rax, 3
 * 000000014033EA4A: xor     r8, [r9]
 * 000000014033EA4D: mov     ecx, r11d
 * 000000014033EA50: rol     r8, cl
 * 000000014033EA53: add     r9, 8
 * 000000014033EA57: add     r10d, 0FFFFFFF8h
 * 000000014033EA5B: sub     rax, r14
 * 000000014033EA5E: jnz     short loc_14033EA4A
 * 000000014033EA60: test    r10d, r10d
 * 000000014033EA63: jz      short loc_14033EA83
 * 000000014033EA65: mov     ebx, 0FFFFFFFFh
 * 000000014033EA6A: movzx   eax, byte ptr [r9]
 * 000000014033EA6E: mov     ecx, r11d
 * 000000014033EA71: xor     r8, rax
 * 000000014033EA74: add     r9, r14
 * 000000014033EA77: rol     r8, cl
 * 000000014033EA7A: add     r10d, ebx
 * 000000014033EA7D: jnz     short loc_14033EA6A
 * 000000014033EA7F: mov     rbx, [rbp+20F0h+var_2088]
 * 000000014033EA83: mov     r14, [rdx+18h]
 * 000000014033EA87: xor     r8, rbx
 * 000000014033EA8A: mov     r10d, r8d
 * 000000014033EA8D: mov     r9, r14
 * 000000014033EA90: and     r10d, 3Fh
 * 000000014033EA94: mov     rax, r14
 * 000000014033EA97: mov     r12, r15
 * 000000014033EA9A: lea     rcx, [r14+r15]
 * 000000014033EA9E: cmp     r14, rcx
 * 000000014033EAA1: jnb     short loc_14033EAB3
 * 000000014033EAA3: mov     edx, 40h ; '@'
 * 000000014033EAA8: prefetchnta byte ptr [rax]
 * 000000014033EAAB: add     rax, rdx
 * 000000014033EAAE: cmp     rax, rcx
 * 000000014033EAB1: jb      short loc_14033EAA8
 * 000000014033EAB3: mov     r11d, r15d
 * 000000014033EAB6: mov     r13, r8
 * 000000014033EAB9: shr     r11d, 7
 * 000000014033EABD: mov     edx, 1
 * 000000014033EAC2: test    r11d, r11d
 * 000000014033EAC5: jz      short loc_14033EB36
 * 000000014033EAC7: mov     ebx, 0FFFFFFFFh
 * 000000014033EACC: mov     r12, 7010008004002001h
 * 000000014033EAD6: mov     eax, 8
 * 000000014033EADB: xor     r13, [r9]
 * 000000014033EADE: mov     ecx, r10d
 * 000000014033EAE1: rol     r13, cl
 * 000000014033EAE4: xor     r13, [r9+8]
 * 000000014033EAE8: add     r9, 10h
 * 000000014033EAEC: rol     r13, cl
 * 000000014033EAEF: sub     rax, rdx
 * 000000014033EAF2: jnz     short loc_14033EADB
 * 000000014033EAF4: mov     rcx, r9
 * 000000014033EAF7: sub     rcx, r14
 * 000000014033EAFA: xor     rcx, r8
 * 000000014033EAFD: mov     rax, rcx
 * 000000014033EB00: rol     rax, 11h
 * 000000014033EB04: xor     rcx, rax
 * 000000014033EB07: mov     rax, r12
 * 000000014033EB0A: mul     rcx
 * 000000014033EB0D: xor     eax, edx
 * 000000014033EB0F: mov     [rbp+20F0h+var_19E0], rdx
 * 000000014033EB16: xor     r10d, eax
 * 000000014033EB19: mov     edx, 1
 * 000000014033EB1E: and     r10d, 3Fh
 * 000000014033EB22: cmovz   r10d, edx
 * 000000014033EB26: add     r11d, ebx
 * 000000014033EB29: jnz     short loc_14033EAD6
 * 000000014033EB2B: mov     rsi, [rbp+20F0h+var_20F0]
 * 000000014033EB2F: mov     r12, r15
 * 000000014033EB32: mov     rbx, [rbp+20F0h+var_2088]
 * 000000014033EB36: and     r15d, 7Fh
 * 000000014033EB3A: cmp     r15d, 8
 * 000000014033EB3E: jb      short loc_14033EB5D
 * 000000014033EB40: mov     eax, r15d
 * 000000014033EB43: shr     rax, 3
 * 000000014033EB47: xor     r13, [r9]
 * 000000014033EB4A: mov     ecx, r10d
 * 000000014033EB4D: rol     r13, cl
 * 000000014033EB50: add     r9, 8
 * 000000014033EB54: add     r15d, 0FFFFFFF8h
 * 000000014033EB58: sub     rax, rdx
 * 000000014033EB5B: jnz     short loc_14033EB47
 * 000000014033EB5D: xor     r14d, r14d
 * 000000014033EB60: test    r15d, r15d
 * 000000014033EB63: jz      short loc_14033EB83
 * 000000014033EB65: mov     r14d, 0FFFFFFFFh
 * 000000014033EB6B: movzx   eax, byte ptr [r9]
 * 000000014033EB6F: mov     ecx, r10d
 * 000000014033EB72: xor     r13, rax
 * 000000014033EB75: add     r9, rdx
 * 000000014033EB78: rol     r13, cl
 * 000000014033EB7B: add     r15d, r14d
 * 000000014033EB7E: jnz     short loc_14033EB6B
 * 000000014033EB80: xor     r14d, r14d
 * 000000014033EB83: mov     rcx, [rbp+20F0h+var_20D8]
 * 000000014033EB87: xor     r13, r12
 * 000000014033EB8A: add     rdi, 8
 * 000000014033EB8E: xor     r13, rcx
 * 000000014033EB91: mov     r15d, 1
 * 000000014033EB97: mov     [rbp+20F0h+var_2080], rdi
 * 000000014033EB9B: sub     [rbp+20F0h+var_2068], r15
 * 000000014033EBA2: jnz     loc_14033E959
 * 000000014033EBA8: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033EBAC: lea     r8, [rbp+20F0h+var_1D10]
 * 000000014033EBB3: lea     rdx, [rbp+20F0h+var_1D08]
 * 000000014033EBBA: mov     [rbp+20F0h+var_2070], r13
 * 000000014033EBC1: mov     rax, [rsi+1F8h]
 * 000000014033EBC8: call    KeGuardDispatchICall
 * 000000014033EBCD: mov     rbx, [rbp+20F0h+var_20A0]
 * 000000014033EBD1: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033EBD8: test    rax, rax
 * 000000014033EBDB: jz      loc_14033F37F
 * 000000014033EBE1: rdtsc
 * 000000014033EBE3: shl     rdx, 20h
 * 000000014033EBE7: mov     r8, 7010008004002001h
 * 000000014033EBF1: or      rax, rdx
 * 000000014033EBF4: mov     rcx, rax
 * 000000014033EBF7: ror     rax, 3
 * 000000014033EBFB: xor     rcx, rax
 * 000000014033EBFE: mov     rax, r8
 * 000000014033EC01: mul     rcx
 * 000000014033EC04: mov     rcx, rdx
 * 000000014033EC07: mov     [rbp+20F0h+var_19D8], rdx
 * 000000014033EC0E: xor     rcx, rax
 * 000000014033EC11: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014033EC1B: mul     rcx
 * 000000014033EC1E: shr     rdx, 1
 * 000000014033EC21: imul    rax, rdx, 0Bh
 * 000000014033EC25: sub     rcx, rax
 * 000000014033EC28: lea     eax, [r15+4]
 * 000000014033EC2C: cmp     ecx, eax
 * 000000014033EC2E: ja      loc_14033ECEC
 * 000000014033EC34: jz      loc_14033ECD2
 * 000000014033EC3A: test    ecx, ecx
 * 000000014033EC3C: jz      short loc_14033ECB8
 * 000000014033EC3E: sub     ecx, r15d
 * 000000014033EC41: jz      short loc_14033EC9F
 * 000000014033EC43: sub     ecx, r15d
 * 000000014033EC46: jz      short loc_14033EC85
 * 000000014033EC48: cmp     ecx, r15d
 * 000000014033EC4B: jz      short loc_14033EC67
 * 000000014033EC4D: mov     [rbp+20F0h+var_1E8C], 67076494h
 * 000000014033EC57: mov     r9d, [rbp+20F0h+var_1E8C]
 * 000000014033EC5E: rol     r9d, 4
 * 000000014033EC62: jmp     loc_14033EE13
 * 000000014033EC67: mov     [rbp+20F0h+var_1E88], 0A8223938h
 * 000000014033EC71: mov     r9d, [rbp+20F0h+var_1E88]
 * 000000014033EC78: xor     r9d, 3
 * 000000014033EC7C: ror     r9d, 0Fh
 * 000000014033EC80: jmp     loc_14033EE13
 * 000000014033EC85: mov     [rbp+20F0h+var_1E84], 85B5910Dh
 * 000000014033EC8F: mov     r9d, [rbp+20F0h+var_1E84]
 * 000000014033EC96: ror     r9d, 2
 * 000000014033EC9A: jmp     loc_14033EE13
 * 000000014033EC9F: mov     [rbp+20F0h+var_1DF4], 0B2AD31A1h
 * 000000014033ECA9: mov     r9d, [rbp+20F0h+var_1DF4]
 * 000000014033ECB0: rol     r9d, 1
 * 000000014033ECB3: jmp     loc_14033EE13
 * 000000014033ECB8: mov     [rbp+20F0h+var_1DF8], 0D098D0D8h
 * 000000014033ECC2: mov     r9d, [rbp+20F0h+var_1DF8]
 * 000000014033ECC9: ror     r9d, 6
 * 000000014033ECCD: jmp     loc_14033EE13
 * 000000014033ECD2: mov     [rbp+20F0h+var_1E48], 288C49EDh
 * 000000014033ECDC: mov     r9d, [rbp+20F0h+var_1E48]
 * 000000014033ECE3: ror     r9d, 5
 * 000000014033ECE7: jmp     loc_14033EE13
 * 000000014033ECEC: mov     edx, 6
 * 000000014033ECF1: sub     ecx, edx
 * 000000014033ECF3: jz      loc_14033EDFB
 * 000000014033ECF9: sub     ecx, r15d
 * 000000014033ECFC: jz      loc_14033EDE4
 * 000000014033ED02: sub     ecx, r15d
 * 000000014033ED05: jz      loc_14033EDCD
 * 000000014033ED0B: cmp     ecx, r15d
 * 000000014033ED0E: jz      loc_14033EDB2
 * 000000014033ED14: rdtsc
 * 000000014033ED16: shl     rdx, 20h
 * 000000014033ED1A: mov     r10d, 4EC4EC4Fh
 * 000000014033ED20: or      rax, rdx
 * 000000014033ED23: mov     rcx, rax
 * 000000014033ED26: ror     rax, 3
 * 000000014033ED2A: xor     rcx, rax
 * 000000014033ED2D: mov     rax, r8
 * 000000014033ED30: mul     rcx
 * 000000014033ED33: mov     r9, rax
 * 000000014033ED36: mov     [rbp+20F0h+var_19D0], rdx
 * 000000014033ED3D: xor     r9d, edx
 * 000000014033ED40: mov     eax, r10d
 * 000000014033ED43: mul     r9d
 * 000000014033ED46: mov     ecx, r9d
 * 000000014033ED49: shr     r9d, 5
 * 000000014033ED4D: shr     edx, 3
 * 000000014033ED50: mov     r8d, r9d
 * 000000014033ED53: imul    eax, edx, 1Ah
 * 000000014033ED56: sub     ecx, eax
 * 000000014033ED58: mov     eax, r10d
 * 000000014033ED5B: mul     r9d
 * 000000014033ED5E: add     ecx, 61h ; 'a'
 * 000000014033ED61: shr     r9d, 5
 * 000000014033ED65: shl     ecx, 8
 * 000000014033ED68: shr     edx, 3
 * 000000014033ED6B: imul    eax, edx, 1Ah
 * 000000014033ED6E: sub     r8d, eax
 * 000000014033ED71: mov     eax, r10d
 * 000000014033ED74: mul     r9d
 * 000000014033ED77: add     r8d, 41h ; 'A'
 * 000000014033ED7B: or      r8d, ecx
 * 000000014033ED7E: shr     edx, 3
 * 000000014033ED81: imul    eax, edx, 1Ah
 * 000000014033ED84: mov     ecx, r9d
 * 000000014033ED87: shr     r9d, 5
 * 000000014033ED8B: shl     r8d, 8
 * 000000014033ED8F: sub     ecx, eax
 * 000000014033ED91: mov     eax, r10d
 * 000000014033ED94: mul     r9d
 * 000000014033ED97: add     ecx, 61h ; 'a'
 * 000000014033ED9A: shr     edx, 3
 * 000000014033ED9D: or      ecx, r8d
 * 000000014033EDA0: imul    eax, edx, 1Ah
 * 000000014033EDA3: shl     ecx, 8
 * 000000014033EDA6: sub     r9d, eax
 * 000000014033EDA9: add     r9d, 41h ; 'A'
 * 000000014033EDAD: or      r9d, ecx
 * 000000014033EDB0: jmp     short loc_14033EE13
 * 000000014033EDB2: mov     [rbp+20F0h+var_1E4C], 0B0869E85h
 * 000000014033EDBC: mov     r9d, [rbp+20F0h+var_1E4C]
 * 000000014033EDC3: xor     r9d, 9
 * 000000014033EDC7: ror     r9d, 21h
 * 000000014033EDCB: jmp     short loc_14033EE13
 * 000000014033EDCD: mov     [rbp+20F0h+var_1E50], 64664142h
 * 000000014033EDD7: mov     r9d, [rbp+20F0h+var_1E50]
 * 000000014033EDDE: ror     r9d, 8
 * 000000014033EDE2: jmp     short loc_14033EE13
 * 000000014033EDE4: mov     [rbp+20F0h+var_1E58], 82C6A6D8h
 * 000000014033EDEE: mov     r9d, [rbp+20F0h+var_1E58]
 * 000000014033EDF5: rol     r9d, 7
 * 000000014033EDF9: jmp     short loc_14033EE13
 * 000000014033EDFB: mov     [rbp+20F0h+var_1E5C], 4E574672h
 * 000000014033EE05: mov     r9d, [rbp+20F0h+var_1E5C]
 * 000000014033EE0C: xor     r9d, edx
 * 000000014033EE0F: ror     r9d, 18h
 * 000000014033EE13: mov     rax, [rsi+0F0h]
 * 000000014033EE1A: mov     r14d, 80h
 * 000000014033EE20: mov     edx, r14d
 * 000000014033EE23: mov     r8d, r9d
 * 000000014033EE26: mov     ecx, 200h
 * 000000014033EE2B: call    KeGuardDispatchICall
 * 000000014033EE30: xor     r10d, r10d
 * 000000014033EE33: mov     [rbp+20F0h+var_20D8], rax
 * 000000014033EE37: mov     r12, rax
 * 000000014033EE3A: test    rax, rax
 * 000000014033EE3D: jz      loc_1403406ED
 * 000000014033EE43: mov     ecx, r14d
 * 000000014033EE46: lea     edx, [r14-70h]
 * 000000014033EE4A: mov     [rax], r10
 * 000000014033EE4D: add     ecx, 0FFFFFFF8h
 * 000000014033EE50: add     rax, 8
 * 000000014033EE54: sub     rdx, r15
 * 000000014033EE57: jnz     short loc_14033EE4A
 * 000000014033EE59: test    ecx, ecx
 * 000000014033EE5B: jz      short loc_14033EE6C
 * 000000014033EE5D: mov     edx, 0FFFFFFFFh
 * 000000014033EE62: mov     [rax], r10b
 * 000000014033EE65: add     rax, r15
 * 000000014033EE68: add     ecx, edx
 * 000000014033EE6A: jnz     short loc_14033EE62
 * 000000014033EE6C: mov     rax, [rbp+20F0h+var_1D08]
 * 000000014033EE73: mov     rcx, r10
 * 000000014033EE76: mov     [rbp+20F0h+var_1F50], rax
 * 000000014033EE7D: mov     [r12], rax
 * 000000014033EE81: mov     rax, r13
 * 000000014033EE84: mov     [rbp+20F0h+var_2088], rax
 * 000000014033EE88: mov     [rbp+20F0h+var_20E8], r10d
 * 000000014033EE8C: mov     [rbp+20F0h+var_2080], rcx
 * 000000014033EE90: mov     rcx, [r12+rcx*8]
 * 000000014033EE94: mov     [rbp+20F0h+var_1F50], rcx
 * 000000014033EE9B: test    rcx, rcx
 * 000000014033EE9E: jz      loc_14033F34F
 * 000000014033EEA4: and     eax, 3Fh
 * 000000014033EEA7: mov     [rbp+20F0h+var_2094], eax
 * 000000014033EEAA: mov     rax, [rsi+1F0h]
 * 000000014033EEB1: call    KeGuardDispatchICall
 * 000000014033EEB6: xor     r10d, r10d
 * 000000014033EEB9: mov     [rbp+20F0h+var_20C8], rax
 * 000000014033EEBD: test    rax, rax
 * 000000014033EEC0: jz      loc_14033F302
 * 000000014033EEC6: movzx   r11d, word ptr [rax+14h]
 * 000000014033EECB: mov     ebx, [rbp+20F0h+var_2094]
 * 000000014033EECE: add     r11, 18h
 * 000000014033EED2: mov     rdi, [rbp+20F0h+var_2088]
 * 000000014033EED6: add     r11, rax
 * 000000014033EED9: movzx   eax, word ptr [rax+6]
 * 000000014033EEDD: lea     rcx, [rax+rax*4]
 * 000000014033EEE1: lea     rax, [r11+rcx*8]
 * 000000014033EEE5: mov     [rbp+20F0h+var_20F0], rax
 * 000000014033EEE9: mov     r13, rax
 * 000000014033EEEC: mov     eax, [r11+24h]
 * 000000014033EEF0: mov     [rbp+20F0h+var_2094], r10d
 * 000000014033EEF4: bt      eax, 19h
 * 000000014033EEF8: jb      loc_14033EFA6
 * 000000014033EEFE: mov     ecx, [r11]
 * 000000014033EF01: cmp     ecx, 54494E49h
 * 000000014033EF07: jnz     short loc_14033EF17
 * 000000014033EF09: cmp     dword ptr [r11+4], 4742444Bh
 * 000000014033EF11: jz      loc_14033EFA6
 * 000000014033EF17: cmp     ecx, 45474150h
 * 000000014033EF1D: jnz     short loc_14033EF42
 * 000000014033EF1F: movzx   eax, word ptr [r11+4]
 * 000000014033EF24: mov     edx, 7877h
 * 000000014033EF29: cmp     ax, dx
 * 000000014033EF2C: jz      short loc_14033EFA6
 * 000000014033EF2E: mov     edx, 7277h
 * 000000014033EF33: cmp     ax, dx
 * 000000014033EF36: jz      short loc_14033EFA6
 * 000000014033EF38: mov     edx, 7777h
 * 000000014033EF3D: cmp     ax, dx
 * 000000014033EF40: jz      short loc_14033EFA6
 * 000000014033EF42: cmp     ecx, 41525245h
 * 000000014033EF48: jnz     short loc_14033EF56
 * 000000014033EF4A: mov     eax, 4154h
 * 000000014033EF4F: cmp     [r11+4], ax
 * 000000014033EF54: jz      short loc_14033EFA6
 * 000000014033EF56: mov     r8, [rsi+910h]
 * 000000014033EF5D: mov     r9, r11
 * 000000014033EF60: mov     r10, [rsi+918h]
 * 000000014033EF67: sub     r9, r8
 * 000000014033EF6A: mov     r14, [rsi+920h]
 * 000000014033EF71: mov     r15d, 7
 * 000000014033EF77: mov     r12, [rsi+928h]
 * 000000014033EF7E: movzx   edx, byte ptr [r8+r9]
 * 000000014033EF83: movzx   eax, byte ptr [r8]
 * 000000014033EF87: inc     r8
 * 000000014033EF8A: cmp     rdx, rax
 * 000000014033EF8D: jnz     loc_14033F1D8
 * 000000014033EF93: mov     eax, 0FFFFFFFFh
 * 000000014033EF98: add     r15d, eax
 * 000000014033EF9B: jnz     short loc_14033EF7E
 * 000000014033EF9D: mov     r15d, 1
 * 000000014033EFA3: xor     r10d, r10d
 * 000000014033EFA6: mov     ecx, r15d
 * 000000014033EFA9: cmp     [r11+24h], r10d
 * 000000014033EFAD: mov     eax, [r11+8]
 * 000000014033EFB1: mov     r8d, [r11+10h]
 * 000000014033EFB5: cmovl   ecx, r15d
 * 000000014033EFB9: cmp     r8d, eax
 * 000000014033EFBC: cmovbe  r8d, eax
 * 000000014033EFC0: mov     eax, [r11+0Ch]
 * 000000014033EFC4: test    ecx, ecx
 * 000000014033EFC6: jnz     loc_14033F0D4
 * 000000014033EFCC: mov     r15d, eax
 * 000000014033EFCF: mov     ecx, r8d
 * 000000014033EFD2: add     r15, [rbp+20F0h+var_1F50]
 * 000000014033EFD9: mov     r14d, ebx
 * 000000014033EFDC: add     rcx, r15
 * 000000014033EFDF: mov     r10, r15
 * 000000014033EFE2: mov     rax, r15
 * 000000014033EFE5: cmp     r15, rcx
 * 000000014033EFE8: jnb     short loc_14033EFFA
 * 000000014033EFEA: mov     edx, 40h ; '@'
 * 000000014033EFEF: prefetchnta byte ptr [rax]
 * 000000014033EFF2: add     rax, rdx
 * 000000014033EFF5: cmp     rax, rcx
 * 000000014033EFF8: jb      short loc_14033EFEF
 * 000000014033EFFA: mov     r12d, r8d
 * 000000014033EFFD: mov     r9, rdi
 * 000000014033F000: shr     r12d, 7
 * 000000014033F004: test    r12d, r12d
 * 000000014033F007: jz      short loc_14033F07E
 * 000000014033F009: mov     rsi, 7010008004002001h
 * 000000014033F013: mov     edx, 8
 * 000000014033F018: lea     r13d, [rdx-7]
 * 000000014033F01C: mov     rax, [r10]
 * 000000014033F01F: mov     ecx, r14d
 * 000000014033F022: xor     rax, r9
 * 000000014033F025: mov     r9, [r10+8]
 * 000000014033F029: rol     rax, cl
 * 000000014033F02C: add     r10, 10h
 * 000000014033F030: xor     r9, rax
 * 000000014033F033: rol     r9, cl
 * 000000014033F036: sub     rdx, r13
 * 000000014033F039: jnz     short loc_14033F01C
 * 000000014033F03B: mov     rcx, r10
 * 000000014033F03E: sub     rcx, r15
 * 000000014033F041: xor     rcx, rdi
 * 000000014033F044: mov     rax, rcx
 * 000000014033F047: rol     rax, 11h
 * 000000014033F04B: xor     rcx, rax
 * 000000014033F04E: mov     rax, rsi
 * 000000014033F051: mul     rcx
 * 000000014033F054: xor     r14d, eax
 * 000000014033F057: mov     [rbp+20F0h+var_19C8], rdx
 * 000000014033F05E: xor     r14d, edx
 * 000000014033F061: mov     rax, r13
 * 000000014033F064: and     r14d, 3Fh
 * 000000014033F068: cmovz   r14d, eax
 * 000000014033F06C: mov     eax, 0FFFFFFFFh
 * 000000014033F071: add     r12d, eax
 * 000000014033F074: jnz     short loc_14033F013
 * 000000014033F076: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033F07A: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014033F07E: and     r8d, 7Fh
 * 000000014033F082: mov     r15d, 1
 * 000000014033F088: cmp     r8d, 8
 * 000000014033F08C: jb      short loc_14033F0AB
 * 000000014033F08E: mov     edx, r8d
 * 000000014033F091: shr     rdx, 3
 * 000000014033F095: xor     r9, [r10]
 * 000000014033F098: mov     ecx, r14d
 * 000000014033F09B: rol     r9, cl
 * 000000014033F09E: add     r10, 8
 * 000000014033F0A2: add     r8d, 0FFFFFFF8h
 * 000000014033F0A6: sub     rdx, r15
 * 000000014033F0A9: jnz     short loc_14033F095
 * 000000014033F0AB: test    r8d, r8d
 * 000000014033F0AE: jz      short loc_14033F0CE
 * 000000014033F0B0: mov     esi, 0FFFFFFFFh
 * 000000014033F0B5: movzx   eax, byte ptr [r10]
 * 000000014033F0B9: mov     ecx, r14d
 * 000000014033F0BC: xor     r9, rax
 * 000000014033F0BF: add     r10, r15
 * 000000014033F0C2: rol     r9, cl
 * 000000014033F0C5: add     r8d, esi
 * 000000014033F0C8: jnz     short loc_14033F0B5
 * 000000014033F0CA: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033F0CE: mov     rdi, r9
 * 000000014033F0D1: xor     r10d, r10d
 * 000000014033F0D4: add     r11, 28h ; '('
 * 000000014033F0D8: cmp     r11, r13
 * 000000014033F0DB: jnz     loc_14033EEEC
 * 000000014033F0E1: mov     r8d, [rbp+20F0h+var_20E8]
 * 000000014033F0E5: mov     r13, [rbp+20F0h+var_2070]
 * 000000014033F0EC: mov     [rbp+20F0h+var_2088], rdi
 * 000000014033F0F0: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033F0F7: test    r8d, r8d
 * 000000014033F0FA: jnz     loc_14033F2D7
 * 000000014033F100: mov     rax, [rbp+20F0h+var_20C8]
 * 000000014033F104: mov     rdx, [rbp+20F0h+var_1F50]
 * 000000014033F10B: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014033F10F: mov     ecx, [rax+94h]
 * 000000014033F115: cmp     ecx, 14h
 * 000000014033F118: jb      loc_14033F2D7
 * 000000014033F11E: mov     eax, [rax+90h]
 * 000000014033F124: lea     r15, [rdx+rcx]
 * 000000014033F128: add     r15, rax
 * 000000014033F12B: lea     r14, [rdx+rax]
 * 000000014033F12F: cmp     r14, r15
 * 000000014033F132: jz      loc_14033F2D1
 * 000000014033F138: cmp     [r14+0Ch], r10d
 * 000000014033F13C: jz      loc_14033F2CD
 * 000000014033F142: mov     eax, [r14+10h]
 * 000000014033F146: test    eax, eax
 * 000000014033F148: jz      loc_14033F2CD
 * 000000014033F14E: mov     r12, [rax+rdx]
 * 000000014033F152: test    r12, r12
 * 000000014033F155: jz      loc_14033F2AE
 * 000000014033F15B: mov     rax, [rsi+2A0h]
 * 000000014033F162: mov     rcx, r12
 * 000000014033F165: call    KeGuardDispatchICall
 * 000000014033F16A: xor     r10d, r10d
 * 000000014033F16D: test    eax, eax
 * 000000014033F16F: jz      loc_14033F2AA
 * 000000014033F175: mov     rax, [rsi+1F8h]
 * 000000014033F17C: lea     r8, [rbp+20F0h+var_1C90]
 * 000000014033F183: lea     rdx, [rbp+20F0h+var_1F50]
 * 000000014033F18A: mov     rcx, r12
 * 000000014033F18D: call    KeGuardDispatchICall
 * 000000014033F192: xor     r10d, r10d
 * 000000014033F195: lea     r9d, [r10+10h]
 * 000000014033F199: test    rax, rax
 * 000000014033F19C: jz      loc_14033F2A4
 * 000000014033F1A2: mov     r12, [rbp+20F0h+var_20D8]
 * 000000014033F1A6: mov     ecx, r10d
 * 000000014033F1A9: mov     r8, [rbp+20F0h+var_1F50]
 * 000000014033F1B0: mov     rax, r12
 * 000000014033F1B3: mov     rdx, [rax]
 * 000000014033F1B6: cmp     rdx, r8
 * 000000014033F1B9: jz      loc_14033F29B
 * 000000014033F1BF: test    rdx, rdx
 * 000000014033F1C2: jz      loc_14033F295
 * 000000014033F1C8: inc     ecx
 * 000000014033F1CA: add     rax, 8
 * 000000014033F1CE: cmp     ecx, r9d
 * 000000014033F1D1: jb      short loc_14033F1B3
 * 000000014033F1D3: jmp     loc_14033F29B
 * 000000014033F1D8: mov     r8d, 8
 * 000000014033F1DE: mov     r9, r11
 * 000000014033F1E1: mov     rcx, [r9]
 * 000000014033F1E4: add     r9, 8
 * 000000014033F1E8: mov     rax, [r10]
 * 000000014033F1EB: add     r10, 8
 * 000000014033F1EF: cmp     rcx, rax
 * 000000014033F1F2: jnz     short loc_14033F22F
 * 000000014033F1F4: add     r8d, 0FFFFFFF8h
 * 000000014033F1F8: cmp     r8d, 8
 * 000000014033F1FC: jnb     short loc_14033F1E1
 * 000000014033F1FE: test    r8d, r8d
 * 000000014033F201: jz      loc_14033EF9D
 * 000000014033F207: mov     r15d, 1
 * 000000014033F20D: movzx   edx, byte ptr [r9]
 * 000000014033F211: add     r9, r15
 * 000000014033F214: movzx   eax, byte ptr [r10]
 * 000000014033F218: add     r10, r15
 * 000000014033F21B: cmp     rdx, rax
 * 000000014033F21E: jnz     short loc_14033F235
 * 000000014033F220: mov     eax, 0FFFFFFFFh
 * 000000014033F225: add     r8d, eax
 * 000000014033F228: jnz     short loc_14033F20D
 * 000000014033F22A: jmp     loc_14033EFA3
 * 000000014033F22F: mov     r15d, 1
 * 000000014033F235: mov     r8, r11
 * 000000014033F238: mov     r9d, 4
 * 000000014033F23E: sub     r8, r14
 * 000000014033F241: mov     r10d, 0FFFFFFFFh
 * 000000014033F247: movzx   edx, byte ptr [r14+r8]
 * 000000014033F24C: movzx   eax, byte ptr [r14]
 * 000000014033F250: add     r14, r15
 * 000000014033F253: cmp     rdx, rax
 * 000000014033F256: jnz     short loc_14033F262
 * 000000014033F258: add     r9d, r10d
 * 000000014033F25B: jnz     short loc_14033F247
 * 000000014033F25D: jmp     loc_14033EFA3
 * 000000014033F262: mov     r8, r11
 * 000000014033F265: mov     r9d, 6
 * 000000014033F26B: sub     r8, r12
 * 000000014033F26E: movzx   edx, byte ptr [r12+r8]
 * 000000014033F273: movzx   eax, byte ptr [r12]
 * 000000014033F278: add     r12, r15
 * 000000014033F27B: cmp     rdx, rax
 * 000000014033F27E: jnz     short loc_14033F28A
 * 000000014033F280: add     r9d, r10d
 * 000000014033F283: jnz     short loc_14033F26E
 * 000000014033F285: jmp     loc_14033EFA3
 * 000000014033F28A: mov     ecx, [rbp+20F0h+var_2094]
 * 000000014033F28D: xor     r10d, r10d
 * 000000014033F290: jmp     loc_14033EFA9
 * 000000014033F295: mov     eax, ecx
 * 000000014033F297: mov     [r12+rax*8], r8
 * 000000014033F29B: cmp     ecx, r9d
 * 000000014033F29E: jz      loc_14033F345
 * 000000014033F2A4: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033F2A8: jmp     short loc_14033F2B4
 * 000000014033F2AA: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014033F2AE: mov     r9d, 10h
 * 000000014033F2B4: add     r14, 14h
 * 000000014033F2B8: cmp     r14, r15
 * 000000014033F2BB: jnz     loc_14033F138
 * 000000014033F2C1: mov     r8d, [rbp+20F0h+var_20E8]
 * 000000014033F2C5: mov     r15d, 1
 * 000000014033F2CB: jmp     short loc_14033F2DD
 * 000000014033F2CD: mov     r8d, [rbp+20F0h+var_20E8]
 * 000000014033F2D1: mov     r15d, 1
 * 000000014033F2D7: mov     r9d, 10h
 * 000000014033F2DD: mov     rcx, [rbp+20F0h+var_2080]
 * 000000014033F2E1: add     r8d, r15d
 * 000000014033F2E4: mov     rax, [rbp+20F0h+var_2088]
 * 000000014033F2E8: add     rcx, r15
 * 000000014033F2EB: mov     r12, [rbp+20F0h+var_20D8]
 * 000000014033F2EF: mov     [rbp+20F0h+var_20E8], r8d
 * 000000014033F2F3: mov     [rbp+20F0h+var_2080], rcx
 * 000000014033F2F7: cmp     r8d, r9d
 * 000000014033F2FA: jb      loc_14033EE90
 * 000000014033F300: jmp     short loc_14033F34F
 * 000000014033F302: cmp     [rsi+8D8h], r10d
 * 000000014033F309: jnz     short loc_14033F352
 * 000000014033F30B: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033F315: add     rax, rsi
 * 000000014033F318: mov     [rsi+8E0h], rax
 * 000000014033F31F: mov     [rsi+8E8h], r10
 * 000000014033F326: mov     qword ptr [rsi+8F0h], 102h
 * 000000014033F331: mov     qword ptr [rsi+8F8h], 0FFFFFFFFC000007Bh
 * 000000014033F33C: mov     [rsi+8D8h], r15d
 * 000000014033F343: jmp     short loc_14033F352
 * 000000014033F345: mov     rax, [rbp+20F0h+var_2088]
 * 000000014033F349: mov     r15d, 1
 * 000000014033F34F: mov     r13, rax
 * 000000014033F352: cmp     r13, [rsi+948h]
 * 000000014033F359: jz      short loc_14033F360
 * 000000014033F35B: test    r13, r13
 * 000000014033F35E: jnz     short loc_14033F36D
 * 000000014033F360: mov     rax, 95EA5DE843D5D824h
 * 000000014033F36A: xor     r13, rax
 * 000000014033F36D: mov     rax, [rsi+0F8h]
 * 000000014033F374: mov     rcx, r12
 * 000000014033F377: call    KeGuardDispatchICall
 * 000000014033F37C: xor     r14d, r14d
 * 000000014033F37F: mov     rax, [rsi+940h]
 * 000000014033F386: mov     rcx, [rax]
 * 000000014033F389: cmp     r13, rcx
 * 000000014033F38C: jz      short loc_14033F400
 * 000000014033F38E: mov     eax, [rsi+974h]
 * 000000014033F394: mov     ecx, 40h ; '@'
 * 000000014033F399: test    cl, al
 * 000000014033F39B: jnz     short loc_14033F400
 * 000000014033F39D: mov     rax, [rsi+940h]
 * 000000014033F3A4: mov     rdx, [rax]
 * 000000014033F3A7: mov     eax, [rsi+8D8h]
 * 000000014033F3AD: test    eax, eax
 * 000000014033F3AF: jnz     short loc_14033F400
 * 000000014033F3B1: mov     rax, [rsi+580h]
 * 000000014033F3B8: mov     rcx, r13
 * 000000014033F3BB: xor     rcx, rdx
 * 000000014033F3BE: mov     [rax+18h], rcx
 * 000000014033F3C2: mov     eax, [rsi+8D8h]
 * 000000014033F3C8: test    eax, eax
 * 000000014033F3CA: jnz     short loc_14033F400
 * 000000014033F3CC: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033F3D6: add     rax, rsi
 * 000000014033F3D9: mov     [rsi+8E0h], rax
 * 000000014033F3E0: mov     [rsi+8E8h], r14
 * 000000014033F3E7: mov     qword ptr [rsi+8F0h], 102h
 * 000000014033F3F2: mov     [rsi+8F8h], r13
 * 000000014033F3F9: mov     [rsi+8D8h], r15d
 * 000000014033F400: mov     r10d, r14d
 * 000000014033F403: lea     r15, [rbp+20F0h+var_1C60]
 * 000000014033F40A: mov     r12d, 2
 * 000000014033F410: mov     esi, 0FFFFFFFFh
 * 000000014033F415: mov     rax, [r15]
 * 000000014033F418: mov     r9d, r14d
 * 000000014033F41B: mov     r11, [rax]
 * 000000014033F41E: mov     r13d, [rax+10h]
 * 000000014033F422: lea     r8d, [r11+r10]
 * 000000014033F426: add     r8d, eax
 * 000000014033F429: test    r13d, r13d
 * 000000014033F42C: jz      short loc_14033F457
 * 000000014033F42E: mov     r14, r11
 * 000000014033F431: movsxd  rdx, dword ptr [r14]
 * 000000014033F434: inc     r9d
 * 000000014033F437: mov     rax, rdx
 * 000000014033F43A: lea     r14, [r14+4]
 * 000000014033F43E: sar     rax, 4
 * 000000014033F442: mov     ecx, [rax+r11]
 * 000000014033F446: add     ecx, edx
 * 000000014033F448: xor     r8d, ecx
 * 000000014033F44B: imul    r8d, r9d
 * 000000014033F44F: cmp     r9d, r13d
 * 000000014033F452: jb      short loc_14033F431
 * 000000014033F454: xor     r14d, r14d
 * 000000014033F457: lea     r10d, [r10+r8*2]
 * 000000014033F45B: sub     r15, 8
 * 000000014033F45F: add     r8d, r8d
 * 000000014033F462: add     r12d, esi
 * 000000014033F465: jnz     short loc_14033F415
 * 000000014033F467: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014033F46B: mov     rbx, [rbp+20F0h+var_20A0]
 * 000000014033F46F: mov     rax, [rsi+588h]
 * 000000014033F476: mov     r9d, [rax]
 * 000000014033F479: cmp     r10d, r9d
 * 000000014033F47C: jz      short loc_14033F4EF
 * 000000014033F47E: xor     r10d, r10d
 * 000000014033F481: test    dword ptr [rsi+970h], 20000h
 * 000000014033F48B: jz      short loc_14033F4F2
 * 000000014033F48D: mov     eax, [rsi+8D8h]
 * 000000014033F493: test    eax, eax
 * 000000014033F495: jnz     short loc_14033F4AE
 * 000000014033F497: mov     rdx, [rsi+580h]
 * 000000014033F49E: mov     ecx, r8d
 * 000000014033F4A1: xor     rcx, r9
 * 000000014033F4A4: mov     [rdx+18h], rcx
 * 000000014033F4A8: mov     eax, [rsi+8D8h]
 * 000000014033F4AE: mov     ecx, r8d
 * 000000014033F4B1: test    eax, eax
 * 000000014033F4B3: jnz     short loc_14033F4F2
 * 000000014033F4B5: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014033F4BF: add     rax, rsi
 * 000000014033F4C2: mov     [rsi+8E0h], rax
 * 000000014033F4C9: mov     eax, 1
 * 000000014033F4CE: mov     [rsi+8E8h], r10
 * 000000014033F4D5: mov     qword ptr [rsi+8F0h], 107h
 * 000000014033F4E0: mov     [rsi+8F8h], rcx
 * 000000014033F4E7: mov     [rsi+8D8h], eax
 * 000000014033F4ED: jmp     short loc_14033F4F2
 * 000000014033F4EF: xor     r10d, r10d
 * 000000014033F4F2: mov     eax, [rsi+934h]
 * 000000014033F4F8: cmp     eax, 7
 * 000000014033F4FB: jl      short loc_14033F51A
 * 000000014033F4FD: jz      loc_14034069D
 * 000000014033F503: cmp     eax, 8
 * 000000014033F506: jz      loc_140342747
 * 000000014033F50C: cmp     eax, 9
 * 000000014033F50F: jz      loc_140342963
 * 000000014033F515: jmp     loc_140342DFD
 * 000000014033F51A: mov     rdx, [rsi+568h]
 * 000000014033F521: mov     rcx, [rsi+560h]
 * 000000014033F528: mov     [rbp+20F0h+var_20D8], rdx
 * 000000014033F52C: add     rdx, 20h ; ' '
 * 000000014033F530: mov     [rbp+20F0h+var_20F0], rdx
 * 000000014033F534: mov     edx, 2
 * 000000014033F539: mov     [rbp+20F0h+var_2088], rcx
 * 000000014033F53D: lea     r13, [rcx+20h]
 * 000000014033F541: mov     [rbp+20F0h+var_20C8], r13
 * 000000014033F545: cmp     eax, edx
 * 000000014033F547: jge     loc_14033F7FF
 * 000000014033F54D: mov     r12, [r13+0]
 * 000000014033F551: mov     r13d, [rsi+7CCh]
 * 000000014033F558: mov     r15d, [rcx+30h]
 * 000000014033F55C: mov     r8d, [rsi+904h]
 * 000000014033F563: shl     r15d, 2
 * 000000014033F567: lea     eax, [r13+30h]
 * 000000014033F56B: cmp     eax, [rsi+9FCh]
 * 000000014033F571: jbe     loc_14033F653
 * 000000014033F577: mov     edx, eax
 * 000000014033F579: mov     rcx, rsi
 * 000000014033F57C: call    sub_1403485B4
 * 000000014033F581: xor     r10d, r10d
 * 000000014033F584: mov     r14, rax
 * 000000014033F587: test    rax, rax
 * 000000014033F58A: jz      loc_140340681
 * 000000014033F590: mov     ecx, [rsi+970h]
 * 000000014033F596: test    cl, 4
 * 000000014033F599: jnz     loc_14033F649
 * 000000014033F59F: mov     eax, [rsi+7CCh]
 * 000000014033F5A5: lea     r9d, [r10+1]
 * 000000014033F5A9: mov     r8, [rsi+7B0h]
 * 000000014033F5B0: and     ecx, 20000000h
 * 000000014033F5B6: neg     ecx
 * 000000014033F5B8: sbb     edx, edx
 * 000000014033F5BA: and     edx, [rsi+904h]
 * 000000014033F5C0: cmp     eax, 8
 * 000000014033F5C3: jb      short loc_14033F5DA
 * 000000014033F5C5: mov     ecx, eax
 * 000000014033F5C7: shr     rcx, 3
 * 000000014033F5CB: mov     [rsi], r10
 * 000000014033F5CE: add     eax, 0FFFFFFF8h
 * 000000014033F5D1: add     rsi, 8
 * 000000014033F5D5: sub     rcx, r9
 * 000000014033F5D8: jnz     short loc_14033F5CB
 * 000000014033F5DA: test    eax, eax
 * 000000014033F5DC: jz      short loc_14033F5ED
 * 000000014033F5DE: mov     ecx, 0FFFFFFFFh
 * 000000014033F5E3: mov     [rsi], r10b
 * 000000014033F5E6: add     rsi, r9
 * 000000014033F5E9: add     eax, ecx
 * 000000014033F5EB: jnz     short loc_14033F5E3
 * 000000014033F5ED: mov     ebx, [r14+904h]
 * 000000014033F5F4: mov     [r14+904h], edx
 * 000000014033F5FB: cmp     edx, 3
 * 000000014033F5FE: jz      short loc_14033F633
 * 000000014033F600: test    dword ptr [r14+970h], 10000000h
 * 000000014033F60B: mov     ecx, r10d
 * 000000014033F60E: cmovz   ecx, edx
 * 000000014033F611: test    ecx, ecx
 * 000000014033F613: jz      short loc_14033F62A
 * 000000014033F615: mov     rax, [r14+220h]
 * 000000014033F61C: lea     rcx, [r8-8]
 * 000000014033F620: mov     rdx, [rcx]
 * 000000014033F623: call    KeGuardDispatchICall
 * 000000014033F628: jmp     short loc_14033F642
 * 000000014033F62A: mov     rax, [r14+0F8h]
 * 000000014033F631: jmp     short loc_14033F63A
 * 000000014033F633: mov     rax, [r14+360h]
 * 000000014033F63A: mov     rcx, r8
 * 000000014033F63D: call    KeGuardDispatchICall
 * 000000014033F642: mov     [r14+904h], ebx
 * 000000014033F649: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 000000014033F651: jmp     short loc_14033F65C
 * 000000014033F653: mov     r14, rsi
 * 000000014033F656: mov     [rsi+7CCh], eax
 * 000000014033F65C: lea     rbx, [r14+r13]
 * 000000014033F660: mov     r8d, 1
 * 000000014033F666: add     [r14+7F4h], r8d
 * 000000014033F66D: mov     rax, rbx
 * 000000014033F670: mov     [rbp+20F0h+var_2070], rbx
 * 000000014033F677: xor     r13d, r13d
 * 000000014033F67A: mov     [rbp+20F0h+var_19C0], rbx
 * 000000014033F681: lea     ecx, [r8+2Fh]
 * 000000014033F685: lea     edx, [rcx-2Ah]
 * 000000014033F688: mov     [rax], r13
 * 000000014033F68B: add     ecx, 0FFFFFFF8h
 * 000000014033F68E: add     rax, 8
 * 000000014033F692: sub     rdx, r8
 * 000000014033F695: jnz     short loc_14033F688
 * 000000014033F697: test    ecx, ecx
 * 000000014033F699: jz      short loc_14033F6AA
 * 000000014033F69B: mov     edx, 0FFFFFFFFh
 * 000000014033F6A0: mov     [rax], r13b
 * 000000014033F6A3: add     rax, r8
 * 000000014033F6A6: add     ecx, edx
 * 000000014033F6A8: jnz     short loc_14033F6A0
 * 000000014033F6AA: mov     dword ptr [rbx], 0Bh
 * 000000014033F6B0: mov     r9, r12
 * 000000014033F6B3: mov     [rbx+8], r12
 * 000000014033F6B7: mov     rax, r12
 * 000000014033F6BA: mov     [rbx+10h], r15d
 * 000000014033F6BE: add     [r14+810h], r15d
 * 000000014033F6C5: mov     r10d, [r14+7FCh]
 * 000000014033F6CC: mov     rsi, [r14+800h]
 * 000000014033F6D3: mov     ecx, r15d
 * 000000014033F6D6: add     rcx, r12
 * 000000014033F6D9: cmp     r12, rcx
 * 000000014033F6DC: jnb     short loc_14033F6EE
 * 000000014033F6DE: mov     edx, 40h ; '@'
 * 000000014033F6E3: prefetchnta byte ptr [rax]
 * 000000014033F6E6: add     rax, rdx
 * 000000014033F6E9: cmp     rax, rcx
 * 000000014033F6EC: jb      short loc_14033F6E3
 * 000000014033F6EE: mov     r11d, r15d
 * 000000014033F6F1: mov     r8, rsi
 * 000000014033F6F4: shr     r11d, 7
 * 000000014033F6F8: test    r11d, r11d
 * 000000014033F6FB: jz      short loc_14033F774
 * 000000014033F6FD: mov     edi, 1
 * 000000014033F702: mov     rbx, 7010008004002001h
 * 000000014033F70C: mov     r13d, 0FFFFFFFFh
 * 000000014033F712: mov     eax, 8
 * 000000014033F717: xor     r8, [r9]
 * 000000014033F71A: mov     ecx, r10d
 * 000000014033F71D: rol     r8, cl
 * 000000014033F720: xor     r8, [r9+8]
 * 000000014033F724: add     r9, 10h
 * 000000014033F728: rol     r8, cl
 * 000000014033F72B: sub     rax, rdi
 * 000000014033F72E: jnz     short loc_14033F717
 * 000000014033F730: mov     rcx, r9
 * 000000014033F733: sub     rcx, r12
 * 000000014033F736: xor     rcx, rsi
 * 000000014033F739: mov     rax, rcx
 * 000000014033F73C: rol     rax, 11h
 * 000000014033F740: xor     rcx, rax
 * 000000014033F743: mov     rax, rbx
 * 000000014033F746: mul     rcx
 * 000000014033F749: xor     r10d, eax
 * 000000014033F74C: mov     [rbp+20F0h+var_19B8], rdx
 * 000000014033F753: xor     r10d, edx
 * 000000014033F756: and     r10d, 3Fh
 * 000000014033F75A: cmovz   r10d, edi
 * 000000014033F75E: add     r11d, r13d
 * 000000014033F761: jnz     short loc_14033F712
 * 000000014033F763: mov     rbx, [rbp+20F0h+var_2070]
 * 000000014033F76A: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033F771: xor     r13d, r13d
 * 000000014033F774: mov     edx, r15d
 * 000000014033F777: mov     r11d, 1
 * 000000014033F77D: and     edx, 7Fh
 * 000000014033F780: cmp     edx, 8
 * 000000014033F783: jb      short loc_14033F7A0
 * 000000014033F785: mov     eax, edx
 * 000000014033F787: shr     rax, 3
 * 000000014033F78B: xor     r8, [r9]
 * 000000014033F78E: mov     ecx, r10d
 * 000000014033F791: rol     r8, cl
 * 000000014033F794: add     r9, 8
 * 000000014033F798: add     edx, 0FFFFFFF8h
 * 000000014033F79B: sub     rax, r11
 * 000000014033F79E: jnz     short loc_14033F78B
 * 000000014033F7A0: test    edx, edx
 * 000000014033F7A2: jz      short loc_14033F7C4
 * 000000014033F7A4: mov     edi, 0FFFFFFFFh
 * 000000014033F7A9: movzx   eax, byte ptr [r9]
 * 000000014033F7AD: mov     ecx, r10d
 * 000000014033F7B0: xor     r8, rax
 * 000000014033F7B3: add     r9, r11
 * 000000014033F7B6: rol     r8, cl
 * 000000014033F7B9: add     edx, edi
 * 000000014033F7BB: jnz     short loc_14033F7A9
 * 000000014033F7BD: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033F7C4: mov     rax, r8
 * 000000014033F7C7: shr     rax, 1Fh
 * 000000014033F7CB: xor     r10d, r10d
 * 000000014033F7CE: jmp     short loc_14033F7D7
 * 000000014033F7D0: xor     r8d, eax
 * 000000014033F7D3: shr     rax, 1Fh
 * 000000014033F7D7: test    rax, rax
 * 000000014033F7DA: jnz     short loc_14033F7D0
 * 000000014033F7DC: mov     r13, [rbp+20F0h+var_20C8]
 * 000000014033F7E0: btr     r8d, 1Fh
 * 000000014033F7E5: mov     [rbx+14h], r8d
 * 000000014033F7E9: mov     eax, 2
 * 000000014033F7EE: add     [r14+810h], r15d
 * 000000014033F7F5: mov     rbx, r14
 * 000000014033F7F8: mov     [r14+934h], eax
 * 000000014033F7FF: cmp     dword ptr [rbx+934h], 3
 * 000000014033F806: jge     loc_14033FA3F
 * 000000014033F80C: mov     r14d, [rbx+7CCh]
 * 000000014033F813: mov     r15d, 20h ; ' '
 * 000000014033F819: mov     r12d, [rbx+820h]
 * 000000014033F820: cmp     r12d, 7
 * 000000014033F824: mov     r8d, [rbx+904h]
 * 000000014033F82B: cmovnz  r15d, r10d
 * 000000014033F82F: lea     eax, [r14+30h]
 * 000000014033F833: cmp     eax, [rbx+9FCh]
 * 000000014033F839: jbe     loc_14033F919
 * 000000014033F83F: mov     edx, eax
 * 000000014033F841: mov     rcx, rbx
 * 000000014033F844: call    sub_1403485B4
 * 000000014033F849: xor     r10d, r10d
 * 000000014033F84C: mov     rsi, rax
 * 000000014033F84F: test    rax, rax
 * 000000014033F852: jz      loc_140340681
 * 000000014033F858: mov     ecx, [rbx+970h]
 * 000000014033F85E: test    cl, 4
 * 000000014033F861: jnz     loc_14033F910
 * 000000014033F867: mov     eax, [rbx+7CCh]
 * 000000014033F86D: lea     r9d, [r10+1]
 * 000000014033F871: mov     r8, [rbx+7B0h]
 * 000000014033F878: and     ecx, 20000000h
 * 000000014033F87E: neg     ecx
 * 000000014033F880: sbb     edx, edx
 * 000000014033F882: and     edx, [rbx+904h]
 * 000000014033F888: cmp     eax, 8
 * 000000014033F88B: jb      short loc_14033F8A2
 * 000000014033F88D: mov     ecx, eax
 * 000000014033F88F: shr     rcx, 3
 * 000000014033F893: mov     [rbx], r10
 * 000000014033F896: add     eax, 0FFFFFFF8h
 * 000000014033F899: add     rbx, 8
 * 000000014033F89D: sub     rcx, r9
 * 000000014033F8A0: jnz     short loc_14033F893
 * 000000014033F8A2: test    eax, eax
 * 000000014033F8A4: jz      short loc_14033F8B5
 * 000000014033F8A6: mov     ecx, 0FFFFFFFFh
 * 000000014033F8AB: mov     [rbx], r10b
 * 000000014033F8AE: add     rbx, r9
 * 000000014033F8B1: add     eax, ecx
 * 000000014033F8B3: jnz     short loc_14033F8AB
 * 000000014033F8B5: mov     ebx, [rsi+904h]
 * 000000014033F8BB: mov     [rsi+904h], edx
 * 000000014033F8C1: cmp     edx, 3
 * 000000014033F8C4: jz      short loc_14033F8F8
 * 000000014033F8C6: test    dword ptr [rsi+970h], 10000000h
 * 000000014033F8D0: mov     ecx, r10d
 * 000000014033F8D3: cmovz   ecx, edx
 * 000000014033F8D6: test    ecx, ecx
 * 000000014033F8D8: jz      short loc_14033F8EF
 * 000000014033F8DA: mov     rax, [rsi+220h]
 * 000000014033F8E1: lea     rcx, [r8-8]
 * 000000014033F8E5: mov     rdx, [rcx]
 * 000000014033F8E8: call    KeGuardDispatchICall
 * 000000014033F8ED: jmp     short loc_14033F907
 * 000000014033F8EF: mov     rax, [rsi+0F8h]
 * 000000014033F8F6: jmp     short loc_14033F8FF
 * 000000014033F8F8: mov     rax, [rsi+360h]
 * 000000014033F8FF: mov     rcx, r8
 * 000000014033F902: call    KeGuardDispatchICall
 * 000000014033F907: mov     [rsi+904h], ebx
 * 000000014033F90D: xor     r10d, r10d
 * 000000014033F910: and     dword ptr [rsi+970h], 0FFFFFFFBh
 * 000000014033F917: jmp     short loc_14033F922
 * 000000014033F919: mov     rsi, rbx
 * 000000014033F91C: mov     [rbx+7CCh], eax
 * 000000014033F922: mov     eax, 1
 * 000000014033F927: lea     rbx, [rsi+r14]
 * 000000014033F92B: add     [rsi+7F4h], eax
 * 000000014033F931: mov     [rbp+20F0h+var_19B0], rbx
 * 000000014033F938: lea     ecx, [rax+2Fh]
 * 000000014033F93B: mov     rax, rbx
 * 000000014033F93E: lea     edx, [rcx-2Ah]
 * 000000014033F941: lea     r14d, [rcx-2Fh]
 * 000000014033F945: mov     [rax], r10
 * 000000014033F948: add     ecx, 0FFFFFFF8h
 * 000000014033F94B: add     rax, 8
 * 000000014033F94F: sub     rdx, r14
 * 000000014033F952: jnz     short loc_14033F945
 * 000000014033F954: test    ecx, ecx
 * 000000014033F956: jz      short loc_14033F967
 * 000000014033F958: mov     edx, 0FFFFFFFFh
 * 000000014033F95D: mov     [rax], r10b
 * 000000014033F960: add     rax, r14
 * 000000014033F963: add     ecx, edx
 * 000000014033F965: jnz     short loc_14033F95D
 * 000000014033F967: mov     [rbx], r15d
 * 000000014033F96A: mov     [rbx+8], r13
 * 000000014033F96E: cmp     r12d, 7
 * 000000014033F972: jnz     short loc_14033F988
 * 000000014033F974: lea     r9, [rbx+18h]
 * 000000014033F978: mov     rdx, r13
 * 000000014033F97B: lea     r8d, [r12+19h]
 * 000000014033F980: mov     rcx, rsi
 * 000000014033F983: call    sub_1401AD8FC
 * 000000014033F988: mov     rcx, [rbp+20F0h+var_2088]
 * 000000014033F98C: mov     r11d, 20h ; ' '
 * 000000014033F992: mov     [rbx+10h], r11d
 * 000000014033F996: add     rcx, 40h ; '@'
 * 000000014033F99A: add     [rsi+810h], r11d
 * 000000014033F9A1: mov     r8, r13
 * 000000014033F9A4: mov     r10d, [rsi+7FCh]
 * 000000014033F9AB: mov     rax, r13
 * 000000014033F9AE: mov     rdx, [rsi+800h]
 * 000000014033F9B5: cmp     r13, rcx
 * 000000014033F9B8: jnb     short loc_14033F9C9
 * 000000014033F9BA: lea     r9d, [r11+20h]
 * 000000014033F9BE: prefetchnta byte ptr [rax]
 * 000000014033F9C1: add     rax, r9
 * 000000014033F9C4: cmp     rax, rcx
 * 000000014033F9C7: jb      short loc_14033F9BE
 * 000000014033F9C9: mov     r9d, r11d
 * 000000014033F9CC: mov     eax, 4
 * 000000014033F9D1: xor     rdx, [r8]
 * 000000014033F9D4: mov     ecx, r10d
 * 000000014033F9D7: rol     rdx, cl
 * 000000014033F9DA: add     r8, 8
 * 000000014033F9DE: add     r9d, 0FFFFFFF8h
 * 000000014033F9E2: sub     rax, r14
 * 000000014033F9E5: jnz     short loc_14033F9D1
 * 000000014033F9E7: test    r9d, r9d
 * 000000014033F9EA: jz      short loc_14033FA0D
 * 000000014033F9EC: mov     edi, 0FFFFFFFFh
 * 000000014033F9F1: movzx   eax, byte ptr [r8]
 * 000000014033F9F5: mov     ecx, r10d
 * 000000014033F9F8: xor     rdx, rax
 * 000000014033F9FB: add     r8, r14
 * 000000014033F9FE: rol     rdx, cl
 * 000000014033FA01: add     r9d, edi
 * 000000014033FA04: jnz     short loc_14033F9F1
 * 000000014033FA06: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033FA0D: mov     rax, rdx
 * 000000014033FA10: shr     rax, 1Fh
 * 000000014033FA14: xor     r10d, r10d
 * 000000014033FA17: jmp     short loc_14033FA1F
 * 000000014033FA19: xor     edx, eax
 * 000000014033FA1B: shr     rax, 1Fh
 * 000000014033FA1F: test    rax, rax
 * 000000014033FA22: jnz     short loc_14033FA19
 * 000000014033FA24: btr     edx, 1Fh
 * 000000014033FA28: mov     [rbx+14h], edx
 * 000000014033FA2B: mov     rbx, rsi
 * 000000014033FA2E: add     [rsi+810h], r11d
 * 000000014033FA35: mov     dword ptr [rsi+934h], 3
 * 000000014033FA3F: cmp     dword ptr [rbx+934h], 4
 * 000000014033FA46: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014033FA4A: jge     loc_14033FCFD
 * 000000014033FA50: mov     rax, [rbp+20F0h+var_20D8]
 * 000000014033FA54: mov     r14d, [rbx+7CCh]
 * 000000014033FA5B: mov     r12, [r13+0]
 * 000000014033FA5F: mov     r8d, [rbx+904h]
 * 000000014033FA66: mov     r15d, [rax+30h]
 * 000000014033FA6A: shl     r15d, 2
 * 000000014033FA6E: lea     eax, [r14+30h]
 * 000000014033FA72: cmp     eax, [rbx+9FCh]
 * 000000014033FA78: jbe     loc_14033FB55
 * 000000014033FA7E: mov     edx, eax
 * 000000014033FA80: mov     rcx, rbx
 * 000000014033FA83: call    sub_1403485B4
 * 000000014033FA88: xor     r10d, r10d
 * 000000014033FA8B: mov     rsi, rax
 * 000000014033FA8E: test    rax, rax
 * 000000014033FA91: jz      loc_140340681
 * 000000014033FA97: mov     ecx, [rbx+970h]
 * 000000014033FA9D: test    cl, 4
 * 000000014033FAA0: jnz     loc_14033FB4C
 * 000000014033FAA6: mov     eax, [rbx+7CCh]
 * 000000014033FAAC: lea     r9d, [r10+1]
 * 000000014033FAB0: mov     r8, [rbx+7B0h]
 * 000000014033FAB7: and     ecx, 20000000h
 * 000000014033FABD: neg     ecx
 * 000000014033FABF: sbb     edx, edx
 * 000000014033FAC1: and     edx, [rbx+904h]
 * 000000014033FAC7: cmp     eax, 8
 * 000000014033FACA: jb      short loc_14033FAE1
 * 000000014033FACC: mov     ecx, eax
 * 000000014033FACE: shr     rcx, 3
 * 000000014033FAD2: mov     [rbx], r10
 * 000000014033FAD5: add     eax, 0FFFFFFF8h
 * 000000014033FAD8: add     rbx, 8
 * 000000014033FADC: sub     rcx, r9
 * 000000014033FADF: jnz     short loc_14033FAD2
 * 000000014033FAE1: test    eax, eax
 * 000000014033FAE3: jz      short loc_14033FAF4
 * 000000014033FAE5: mov     ecx, 0FFFFFFFFh
 * 000000014033FAEA: mov     [rbx], r10b
 * 000000014033FAED: add     rbx, r9
 * 000000014033FAF0: add     eax, ecx
 * 000000014033FAF2: jnz     short loc_14033FAEA
 * 000000014033FAF4: mov     ebx, [rsi+904h]
 * 000000014033FAFA: mov     [rsi+904h], edx
 * 000000014033FB00: cmp     edx, 3
 * 000000014033FB03: jz      short loc_14033FB37
 * 000000014033FB05: test    dword ptr [rsi+970h], 10000000h
 * 000000014033FB0F: mov     ecx, r10d
 * 000000014033FB12: cmovz   ecx, edx
 * 000000014033FB15: test    ecx, ecx
 * 000000014033FB17: jz      short loc_14033FB2E
 * 000000014033FB19: mov     rax, [rsi+220h]
 * 000000014033FB20: lea     rcx, [r8-8]
 * 000000014033FB24: mov     rdx, [rcx]
 * 000000014033FB27: call    KeGuardDispatchICall
 * 000000014033FB2C: jmp     short loc_14033FB46
 * 000000014033FB2E: mov     rax, [rsi+0F8h]
 * 000000014033FB35: jmp     short loc_14033FB3E
 * 000000014033FB37: mov     rax, [rsi+360h]
 * 000000014033FB3E: mov     rcx, r8
 * 000000014033FB41: call    KeGuardDispatchICall
 * 000000014033FB46: mov     [rsi+904h], ebx
 * 000000014033FB4C: and     dword ptr [rsi+970h], 0FFFFFFFBh
 * 000000014033FB53: jmp     short loc_14033FB5E
 * 000000014033FB55: mov     rsi, rbx
 * 000000014033FB58: mov     [rbx+7CCh], eax
 * 000000014033FB5E: lea     rbx, [rsi+r14]
 * 000000014033FB62: mov     r9d, 1
 * 000000014033FB68: add     [rsi+7F4h], r9d
 * 000000014033FB6F: mov     rax, rbx
 * 000000014033FB72: mov     [rbp+20F0h+var_2070], rbx
 * 000000014033FB79: xor     r8d, r8d
 * 000000014033FB7C: mov     [rbp+20F0h+var_19A8], rbx
 * 000000014033FB83: lea     ecx, [r9+2Fh]
 * 000000014033FB87: lea     edx, [rcx-2Ah]
 * 000000014033FB8A: mov     [rax], r8
 * 000000014033FB8D: add     ecx, 0FFFFFFF8h
 * 000000014033FB90: add     rax, 8
 * 000000014033FB94: sub     rdx, r9
 * 000000014033FB97: jnz     short loc_14033FB8A
 * 000000014033FB99: test    ecx, ecx
 * 000000014033FB9B: jz      short loc_14033FBAD
 * 000000014033FB9D: mov     r8d, 0FFFFFFFFh
 * 000000014033FBA3: mov     [rax], dl
 * 000000014033FBA5: add     rax, r9
 * 000000014033FBA8: add     ecx, r8d
 * 000000014033FBAB: jnz     short loc_14033FBA3
 * 000000014033FBAD: mov     dword ptr [rbx], 0Bh
 * 000000014033FBB3: mov     r9, r12
 * 000000014033FBB6: mov     [rbx+8], r12
 * 000000014033FBBA: mov     rax, r12
 * 000000014033FBBD: mov     [rbx+10h], r15d
 * 000000014033FBC1: add     [rsi+810h], r15d
 * 000000014033FBC8: mov     r10d, [rsi+7FCh]
 * 000000014033FBCF: mov     r14, [rsi+800h]
 * 000000014033FBD6: mov     ecx, r15d
 * 000000014033FBD9: add     rcx, r12
 * 000000014033FBDC: cmp     r12, rcx
 * 000000014033FBDF: jnb     short loc_14033FBF2
 * 000000014033FBE1: mov     r8d, 40h ; '@'
 * 000000014033FBE7: prefetchnta byte ptr [rax]
 * 000000014033FBEA: add     rax, r8
 * 000000014033FBED: cmp     rax, rcx
 * 000000014033FBF0: jb      short loc_14033FBE7
 * 000000014033FBF2: mov     r11d, r15d
 * 000000014033FBF5: mov     r8, r14
 * 000000014033FBF8: shr     r11d, 7
 * 000000014033FBFC: test    r11d, r11d
 * 000000014033FBFF: jz      short loc_14033FC79
 * 000000014033FC01: mov     edi, 0FFFFFFFFh
 * 000000014033FC06: mov     rbx, 7010008004002001h
 * 000000014033FC10: mov     r13d, 1
 * 000000014033FC16: mov     eax, 8
 * 000000014033FC1B: xor     r8, [r9]
 * 000000014033FC1E: mov     ecx, r10d
 * 000000014033FC21: rol     r8, cl
 * 000000014033FC24: xor     r8, [r9+8]
 * 000000014033FC28: add     r9, 10h
 * 000000014033FC2C: rol     r8, cl
 * 000000014033FC2F: sub     rax, r13
 * 000000014033FC32: jnz     short loc_14033FC1B
 * 000000014033FC34: mov     rcx, r9
 * 000000014033FC37: sub     rcx, r12
 * 000000014033FC3A: xor     rcx, r14
 * 000000014033FC3D: mov     rax, rcx
 * 000000014033FC40: rol     rax, 11h
 * 000000014033FC44: xor     rcx, rax
 * 000000014033FC47: mov     rax, rbx
 * 000000014033FC4A: mul     rcx
 * 000000014033FC4D: xor     r10d, eax
 * 000000014033FC50: mov     [rbp+20F0h+var_19A0], rdx
 * 000000014033FC57: xor     r10d, edx
 * 000000014033FC5A: and     r10d, 3Fh
 * 000000014033FC5E: cmovz   r10d, r13d
 * 000000014033FC62: add     r11d, edi
 * 000000014033FC65: jnz     short loc_14033FC16
 * 000000014033FC67: mov     rbx, [rbp+20F0h+var_2070]
 * 000000014033FC6E: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033FC75: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014033FC79: mov     edx, r15d
 * 000000014033FC7C: mov     r11d, 1
 * 000000014033FC82: and     edx, 7Fh
 * 000000014033FC85: cmp     edx, 8
 * 000000014033FC88: jb      short loc_14033FCA5
 * 000000014033FC8A: mov     eax, edx
 * 000000014033FC8C: shr     rax, 3
 * 000000014033FC90: xor     r8, [r9]
 * 000000014033FC93: mov     ecx, r10d
 * 000000014033FC96: rol     r8, cl
 * 000000014033FC99: add     r9, 8
 * 000000014033FC9D: add     edx, 0FFFFFFF8h
 * 000000014033FCA0: sub     rax, r11
 * 000000014033FCA3: jnz     short loc_14033FC90
 * 000000014033FCA5: test    edx, edx
 * 000000014033FCA7: jz      short loc_14033FCC8
 * 000000014033FCA9: mov     r13d, 0FFFFFFFFh
 * 000000014033FCAF: movzx   eax, byte ptr [r9]
 * 000000014033FCB3: mov     ecx, r10d
 * 000000014033FCB6: xor     r8, rax
 * 000000014033FCB9: add     r9, r11
 * 000000014033FCBC: rol     r8, cl
 * 000000014033FCBF: add     edx, r13d
 * 000000014033FCC2: jnz     short loc_14033FCAF
 * 000000014033FCC4: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014033FCC8: mov     rax, r8
 * 000000014033FCCB: shr     rax, 1Fh
 * 000000014033FCCF: xor     r10d, r10d
 * 000000014033FCD2: jmp     short loc_14033FCDB
 * 000000014033FCD4: xor     r8d, eax
 * 000000014033FCD7: shr     rax, 1Fh
 * 000000014033FCDB: test    rax, rax
 * 000000014033FCDE: jnz     short loc_14033FCD4
 * 000000014033FCE0: btr     r8d, 1Fh
 * 000000014033FCE5: mov     [rbx+14h], r8d
 * 000000014033FCE9: mov     rbx, rsi
 * 000000014033FCEC: add     [rsi+810h], r15d
 * 000000014033FCF3: mov     dword ptr [rsi+934h], 4
 * 000000014033FCFD: cmp     dword ptr [rbx+934h], 5
 * 000000014033FD04: jge     loc_14033FF37
 * 000000014033FD0A: mov     r14d, [rbx+7CCh]
 * 000000014033FD11: mov     r15d, 20h ; ' '
 * 000000014033FD17: mov     r12d, [rbx+820h]
 * 000000014033FD1E: cmp     r12d, 7
 * 000000014033FD22: mov     r8d, [rbx+904h]
 * 000000014033FD29: cmovnz  r15d, r10d
 * 000000014033FD2D: lea     eax, [r14+30h]
 * 000000014033FD31: cmp     eax, [rbx+9FCh]
 * 000000014033FD37: jbe     loc_14033FE17
 * 000000014033FD3D: mov     edx, eax
 * 000000014033FD3F: mov     rcx, rbx
 * 000000014033FD42: call    sub_1403485B4
 * 000000014033FD47: xor     r10d, r10d
 * 000000014033FD4A: mov     rsi, rax
 * 000000014033FD4D: test    rax, rax
 * 000000014033FD50: jz      loc_140340681
 * 000000014033FD56: mov     ecx, [rbx+970h]
 * 000000014033FD5C: test    cl, 4
 * 000000014033FD5F: jnz     loc_14033FE0E
 * 000000014033FD65: mov     eax, [rbx+7CCh]
 * 000000014033FD6B: lea     r9d, [r10+1]
 * 000000014033FD6F: mov     r8, [rbx+7B0h]
 * 000000014033FD76: and     ecx, 20000000h
 * 000000014033FD7C: neg     ecx
 * 000000014033FD7E: sbb     edx, edx
 * 000000014033FD80: and     edx, [rbx+904h]
 * 000000014033FD86: cmp     eax, 8
 * 000000014033FD89: jb      short loc_14033FDA0
 * 000000014033FD8B: mov     ecx, eax
 * 000000014033FD8D: shr     rcx, 3
 * 000000014033FD91: mov     [rbx], r10
 * 000000014033FD94: add     eax, 0FFFFFFF8h
 * 000000014033FD97: add     rbx, 8
 * 000000014033FD9B: sub     rcx, r9
 * 000000014033FD9E: jnz     short loc_14033FD91
 * 000000014033FDA0: test    eax, eax
 * 000000014033FDA2: jz      short loc_14033FDB3
 * 000000014033FDA4: mov     ecx, 0FFFFFFFFh
 * 000000014033FDA9: mov     [rbx], r10b
 * 000000014033FDAC: add     rbx, r9
 * 000000014033FDAF: add     eax, ecx
 * 000000014033FDB1: jnz     short loc_14033FDA9
 * 000000014033FDB3: mov     ebx, [rsi+904h]
 * 000000014033FDB9: mov     [rsi+904h], edx
 * 000000014033FDBF: cmp     edx, 3
 * 000000014033FDC2: jz      short loc_14033FDF6
 * 000000014033FDC4: test    dword ptr [rsi+970h], 10000000h
 * 000000014033FDCE: mov     ecx, r10d
 * 000000014033FDD1: cmovz   ecx, edx
 * 000000014033FDD4: test    ecx, ecx
 * 000000014033FDD6: jz      short loc_14033FDED
 * 000000014033FDD8: mov     rax, [rsi+220h]
 * 000000014033FDDF: lea     rcx, [r8-8]
 * 000000014033FDE3: mov     rdx, [rcx]
 * 000000014033FDE6: call    KeGuardDispatchICall
 * 000000014033FDEB: jmp     short loc_14033FE05
 * 000000014033FDED: mov     rax, [rsi+0F8h]
 * 000000014033FDF4: jmp     short loc_14033FDFD
 * 000000014033FDF6: mov     rax, [rsi+360h]
 * 000000014033FDFD: mov     rcx, r8
 * 000000014033FE00: call    KeGuardDispatchICall
 * 000000014033FE05: mov     [rsi+904h], ebx
 * 000000014033FE0B: xor     r10d, r10d
 * 000000014033FE0E: and     dword ptr [rsi+970h], 0FFFFFFFBh
 * 000000014033FE15: jmp     short loc_14033FE20
 * 000000014033FE17: mov     rsi, rbx
 * 000000014033FE1A: mov     [rbx+7CCh], eax
 * 000000014033FE20: mov     r8d, 1
 * 000000014033FE26: lea     rbx, [rsi+r14]
 * 000000014033FE2A: add     [rsi+7F4h], r8d
 * 000000014033FE31: mov     rax, rbx
 * 000000014033FE34: mov     [rbp+20F0h+var_1998], rbx
 * 000000014033FE3B: lea     ecx, [r8+2Fh]
 * 000000014033FE3F: lea     edx, [rcx-2Ah]
 * 000000014033FE42: mov     [rax], r10
 * 000000014033FE45: add     ecx, 0FFFFFFF8h
 * 000000014033FE48: add     rax, 8
 * 000000014033FE4C: sub     rdx, r8
 * 000000014033FE4F: jnz     short loc_14033FE42
 * 000000014033FE51: test    ecx, ecx
 * 000000014033FE53: jz      short loc_14033FE64
 * 000000014033FE55: mov     edx, 0FFFFFFFFh
 * 000000014033FE5A: mov     [rax], r10b
 * 000000014033FE5D: add     rax, r8
 * 000000014033FE60: add     ecx, edx
 * 000000014033FE62: jnz     short loc_14033FE5A
 * 000000014033FE64: mov     [rbx], r15d
 * 000000014033FE67: mov     r14d, 20h ; ' '
 * 000000014033FE6D: mov     [rbx+8], r13
 * 000000014033FE71: cmp     r12d, 7
 * 000000014033FE75: jnz     short loc_14033FE89
 * 000000014033FE77: lea     r9, [rbx+18h]
 * 000000014033FE7B: mov     r8d, r14d
 * 000000014033FE7E: mov     rdx, r13
 * 000000014033FE81: mov     rcx, rsi
 * 000000014033FE84: call    sub_1401AD8FC
 * 000000014033FE89: mov     rcx, [rbp+20F0h+var_20D8]
 * 000000014033FE8D: mov     r8, r13
 * 000000014033FE90: mov     [rbx+10h], r14d
 * 000000014033FE94: add     rcx, 40h ; '@'
 * 000000014033FE98: add     [rsi+810h], r14d
 * 000000014033FE9F: mov     rax, r13
 * 000000014033FEA2: mov     r11d, [rsi+7FCh]
 * 000000014033FEA9: mov     rdx, [rsi+800h]
 * 000000014033FEB0: cmp     r13, rcx
 * 000000014033FEB3: jnb     short loc_14033FEC6
 * 000000014033FEB5: mov     r9d, 40h ; '@'
 * 000000014033FEBB: prefetchnta byte ptr [rax]
 * 000000014033FEBE: add     rax, r9
 * 000000014033FEC1: cmp     rax, rcx
 * 000000014033FEC4: jb      short loc_14033FEBB
 * 000000014033FEC6: mov     r10d, 4
 * 000000014033FECC: mov     r9d, r14d
 * 000000014033FECF: lea     r15d, [r10-3]
 * 000000014033FED3: xor     rdx, [r8]
 * 000000014033FED6: mov     ecx, r11d
 * 000000014033FED9: rol     rdx, cl
 * 000000014033FEDC: add     r8, 8
 * 000000014033FEE0: add     r9d, 0FFFFFFF8h
 * 000000014033FEE4: sub     r10, r15
 * 000000014033FEE7: jnz     short loc_14033FED3
 * 000000014033FEE9: test    r9d, r9d
 * 000000014033FEEC: jz      short loc_14033FF0C
 * 000000014033FEEE: mov     r10d, 0FFFFFFFFh
 * 000000014033FEF4: movzx   eax, byte ptr [r8]
 * 000000014033FEF8: mov     ecx, r11d
 * 000000014033FEFB: xor     rdx, rax
 * 000000014033FEFE: add     r8, r15
 * 000000014033FF01: rol     rdx, cl
 * 000000014033FF04: add     r9d, r10d
 * 000000014033FF07: jnz     short loc_14033FEF4
 * 000000014033FF09: xor     r10d, r10d
 * 000000014033FF0C: mov     rax, rdx
 * 000000014033FF0F: jmp     short loc_14033FF13
 * 000000014033FF11: xor     edx, eax
 * 000000014033FF13: shr     rax, 1Fh
 * 000000014033FF17: test    rax, rax
 * 000000014033FF1A: jnz     short loc_14033FF11
 * 000000014033FF1C: btr     edx, 1Fh
 * 000000014033FF20: mov     [rbx+14h], edx
 * 000000014033FF23: mov     rbx, rsi
 * 000000014033FF26: add     [rsi+810h], r14d
 * 000000014033FF2D: mov     dword ptr [rsi+934h], 5
 * 000000014033FF37: mov     eax, [rbx+934h]
 * 000000014033FF3D: mov     r12d, 6
 * 000000014033FF43: mov     rsi, rbx
 * 000000014033FF46: mov     r14, rbx
 * 000000014033FF49: cmp     eax, r12d
 * 000000014033FF4C: jge     loc_140340322
 * 000000014033FF52: test    dword ptr [rbx+970h], 40000000h
 * 000000014033FF5C: mov     r13d, r10d
 * 000000014033FF5F: mov     r15, [rbp+20F0h+var_2088]
 * 000000014033FF63: mov     rax, [r15+20h]
 * 000000014033FF67: mov     [rbp+20F0h+var_20A0], rax
 * 000000014033FF6B: jnz     loc_14034030A
 * 000000014033FF71: mov     ebx, r10d
 * 000000014033FF74: cmp     [r15+30h], r10d
 * 000000014033FF78: jbe     loc_14034030A
 * 000000014033FF7E: mov     rdi, rax
 * 000000014033FF81: mov     eax, ebx
 * 000000014033FF83: lea     rdx, [rbp+20F0h+var_1CF8]
 * 000000014033FF8A: xor     r8d, r8d
 * 000000014033FF8D: movsxd  rcx, dword ptr [rdi+rax*4]
 * 000000014033FF91: mov     rax, [rsi+258h]
 * 000000014033FF98: sar     rcx, 4
 * 000000014033FF9C: add     rcx, rdi
 * 000000014033FF9F: call    KeGuardDispatchICall
 * 000000014033FFA4: xor     r10d, r10d
 * 000000014033FFA7: lea     r9d, [r10+1]
 * 000000014033FFAB: test    rax, rax
 * 000000014033FFAE: jnz     short loc_14033FFB3
 * 000000014033FFB0: add     r13d, r9d
 * 000000014033FFB3: add     ebx, r9d
 * 000000014033FFB6: cmp     ebx, [r15+30h]
 * 000000014033FFBA: jb      short loc_14033FF81
 * 000000014033FFBC: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014033FFC3: test    r13d, r13d
 * 000000014033FFC6: jz      loc_14034030A
 * 000000014033FFCC: mov     r14d, [rsi+7CCh]
 * 000000014033FFD3: mov     ecx, r13d
 * 000000014033FFD6: mov     r8d, [rsi+904h]
 * 000000014033FFDD: shl     ecx, 4
 * 000000014033FFE0: add     ecx, 30h ; '0'
 * 000000014033FFE3: add     ecx, r14d
 * 000000014033FFE6: cmp     ecx, [rsi+9FCh]
 * 000000014033FFEC: jbe     loc_1403400DF
 * 000000014033FFF2: mov     edx, ecx
 * 000000014033FFF4: mov     rcx, rsi
 * 000000014033FFF7: call    sub_1403485B4
 * 000000014033FFFC: xor     r10d, r10d
 * 000000014033FFFF: mov     rbx, rax
 * 0000000140340002: test    rax, rax
 * 0000000140340005: jz      loc_1403400D2
 * 000000014034000B: mov     ecx, [rsi+970h]
 * 0000000140340011: test    cl, 4
 * 0000000140340014: jnz     loc_1403400C3
 * 000000014034001A: mov     eax, [rsi+7CCh]
 * 0000000140340020: lea     r9d, [r10+1]
 * 0000000140340024: mov     r8, [rsi+7B0h]
 * 000000014034002B: and     ecx, 20000000h
 * 0000000140340031: neg     ecx
 * 0000000140340033: sbb     edx, edx
 * 0000000140340035: and     edx, [rsi+904h]
 * 000000014034003B: cmp     eax, 8
 * 000000014034003E: jb      short loc_140340055
 * 0000000140340040: mov     ecx, eax
 * 0000000140340042: shr     rcx, 3
 * 0000000140340046: mov     [rsi], r10
 * 0000000140340049: add     eax, 0FFFFFFF8h
 * 000000014034004C: add     rsi, 8
 * 0000000140340050: sub     rcx, r9
 * 0000000140340053: jnz     short loc_140340046
 * 0000000140340055: test    eax, eax
 * 0000000140340057: jz      short loc_140340068
 * 0000000140340059: mov     ecx, 0FFFFFFFFh
 * 000000014034005E: mov     [rsi], r10b
 * 0000000140340061: add     rsi, r9
 * 0000000140340064: add     eax, ecx
 * 0000000140340066: jnz     short loc_14034005E
 * 0000000140340068: mov     esi, [rbx+904h]
 * 000000014034006E: mov     [rbx+904h], edx
 * 0000000140340074: cmp     edx, 3
 * 0000000140340077: jz      short loc_1403400AB
 * 0000000140340079: test    dword ptr [rbx+970h], 10000000h
 * 0000000140340083: mov     ecx, r10d
 * 0000000140340086: cmovz   ecx, edx
 * 0000000140340089: test    ecx, ecx
 * 000000014034008B: jz      short loc_1403400A2
 * 000000014034008D: mov     rax, [rbx+220h]
 * 0000000140340094: lea     rcx, [r8-8]
 * 0000000140340098: mov     rdx, [rcx]
 * 000000014034009B: call    KeGuardDispatchICall
 * 00000001403400A0: jmp     short loc_1403400BA
 * 00000001403400A2: mov     rax, [rbx+0F8h]
 * 00000001403400A9: jmp     short loc_1403400B2
 * 00000001403400AB: mov     rax, [rbx+360h]
 * 00000001403400B2: mov     rcx, r8
 * 00000001403400B5: call    KeGuardDispatchICall
 * 00000001403400BA: mov     [rbx+904h], esi
 * 00000001403400C0: xor     r10d, r10d
 * 00000001403400C3: and     dword ptr [rbx+970h], 0FFFFFFFBh
 * 00000001403400CA: mov     r9d, 1
 * 00000001403400D0: jmp     short loc_1403400E8
 * 00000001403400D2: mov     eax, 0C000022Dh
 * 00000001403400D7: mov     r14, rsi
 * 00000001403400DA: jmp     loc_14034030D
 * 00000001403400DF: mov     rbx, rsi
 * 00000001403400E2: mov     [rsi+7CCh], ecx
 * 00000001403400E8: add     [rbx+7F4h], r9d
 * 00000001403400EF: lea     rcx, [rbx+r14]
 * 00000001403400F3: mov     [rbp+20F0h+var_1D00], rcx
 * 00000001403400FA: mov     rax, rcx
 * 00000001403400FD: mov     edx, 30h ; '0'
 * 0000000140340102: mov     r8, r12
 * 0000000140340105: mov     [rax], r10
 * 0000000140340108: add     edx, 0FFFFFFF8h
 * 000000014034010B: add     rax, 8
 * 000000014034010F: sub     r8, r9
 * 0000000140340112: jnz     short loc_140340105
 * 0000000140340114: test    edx, edx
 * 0000000140340116: jz      short loc_140340129
 * 0000000140340118: mov     r8d, 0FFFFFFFFh
 * 000000014034011E: mov     [rax], r10b
 * 0000000140340121: add     rax, r9
 * 0000000140340124: add     edx, r8d
 * 0000000140340127: jnz     short loc_14034011E
 * 0000000140340129: mov     dword ptr [rcx], 0Ah
 * 000000014034012F: mov     [rcx+8], r10
 * 0000000140340133: mov     [rcx+10h], r10d
 * 0000000140340137: mov     rdx, [rbx+800h]
 * 000000014034013E: mov     rax, rdx
 * 0000000140340141: jmp     short loc_140340145
 * 0000000140340143: xor     edx, eax
 * 0000000140340145: shr     rax, 1Fh
 * 0000000140340149: test    rax, rax
 * 000000014034014C: jnz     short loc_140340143
 * 000000014034014E: btr     edx, 1Fh
 * 0000000140340152: mov     r14, rbx
 * 0000000140340155: mov     [rcx+14h], edx
 * 0000000140340158: mov     r12d, r10d
 * 000000014034015B: mov     rax, [rbp+20F0h+var_1D00]
 * 0000000140340162: mov     [rbp+20F0h+var_1E20], rax
 * 0000000140340169: mov     [rax+18h], r9d
 * 000000014034016D: mov     rax, [rbp+20F0h+var_1E20]
 * 0000000140340174: mov     r9, [rbp+20F0h+var_2088]
 * 0000000140340178: mov     [rax+1Ch], r13d
 * 000000014034017C: mov     rcx, [rbp+20F0h+var_1E20]
 * 0000000140340183: lea     r15, [rcx+30h]
 * 0000000140340187: cmp     [r9+30h], r10d
 * 000000014034018B: jbe     loc_140340293
 * 0000000140340191: mov     rcx, [rbp+20F0h+var_20A0]
 * 0000000140340195: lea     rdx, [rbp+20F0h+var_1CF8]
 * 000000014034019C: mov     eax, r12d
 * 000000014034019F: xor     r8d, r8d
 * 00000001403401A2: movsxd  rsi, dword ptr [rcx+rax*4]
 * 00000001403401A6: mov     rax, [rbx+258h]
 * 00000001403401AD: sar     rsi, 4
 * 00000001403401B1: add     rsi, rcx
 * 00000001403401B4: mov     rcx, rsi
 * 00000001403401B7: mov     [rbp+20F0h+var_2070], rsi
 * 00000001403401BE: call    KeGuardDispatchICall
 * 00000001403401C3: xor     r10d, r10d
 * 00000001403401C6: test    rax, rax
 * 00000001403401C9: jnz     loc_140340273
 * 00000001403401CF: lea     r11d, [r10+4]
 * 00000001403401D3: mov     r8, rsi
 * 00000001403401D6: add     [rbx+810h], r11d
 * 00000001403401DD: lea     rcx, [rsi+4]
 * 00000001403401E1: mov     r10d, [rbx+7FCh]
 * 00000001403401E8: mov     rax, rsi
 * 00000001403401EB: mov     rdx, [rbx+800h]
 * 00000001403401F2: cmp     rsi, rcx
 * 00000001403401F5: jnb     short loc_140340206
 * 00000001403401F7: lea     r9d, [r11+3Ch]
 * 00000001403401FB: prefetchnta byte ptr [rax]
 * 00000001403401FE: add     rax, r9
 * 0000000140340201: cmp     rax, rcx
 * 0000000140340204: jb      short loc_1403401FB
 * 0000000140340206: mov     r9d, r11d
 * 0000000140340209: mov     edi, 1
 * 000000014034020E: mov     esi, 0FFFFFFFFh
 * 0000000140340213: movzx   eax, byte ptr [r8]
 * 0000000140340217: mov     ecx, r10d
 * 000000014034021A: xor     rdx, rax
 * 000000014034021D: add     r8, rdi
 * 0000000140340220: rol     rdx, cl
 * 0000000140340223: add     r9d, esi
 * 0000000140340226: jnz     short loc_140340213
 * 0000000140340228: mov     rsi, [rbp+20F0h+var_2070]
 * 000000014034022F: mov     rax, rdx
 * 0000000140340232: shr     rax, 1Fh
 * 0000000140340236: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034023D: xor     r10d, r10d
 * 0000000140340240: jmp     short loc_140340248
 * 0000000140340242: xor     edx, eax
 * 0000000140340244: shr     rax, 1Fh
 * 0000000140340248: test    rax, rax
 * 000000014034024B: jnz     short loc_140340242
 * 000000014034024D: mov     eax, [r15]
 * 0000000140340250: xor     eax, edx
 * 0000000140340252: btr     eax, 1Fh
 * 0000000140340256: xor     [r15], eax
 * 0000000140340259: mov     eax, 0FFFFFFFFh
 * 000000014034025E: mov     [r15+4], r11d
 * 0000000140340262: mov     [r15+8], rsi
 * 0000000140340266: add     r15, 10h
 * 000000014034026A: add     r13d, eax
 * 000000014034026D: jz      loc_140340304
 * 0000000140340273: mov     rax, [rbp+20F0h+var_2088]
 * 0000000140340277: mov     r9d, 1
 * 000000014034027D: add     r12d, r9d
 * 0000000140340280: cmp     r12d, [rax+30h]
 * 0000000140340284: jb      loc_140340191
 * 000000014034028A: mov     rcx, [rbp+20F0h+var_1E20]
 * 0000000140340291: jmp     short loc_140340299
 * 0000000140340293: mov     r9d, 1
 * 0000000140340299: test    r13d, r13d
 * 000000014034029C: jz      short loc_140340304
 * 000000014034029E: cmp     [rbx+8D8h], r10d
 * 00000001403402A5: jnz     loc_140340681
 * 00000001403402AB: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403402B5: add     rax, rbx
 * 00000001403402B8: mov     [rbx+8E0h], rax
 * 00000001403402BF: test    rcx, rcx
 * 00000001403402C2: jz      short loc_1403402D3
 * 00000001403402C4: mov     rax, 0B3B74BDEE4453415h
 * 00000001403402CE: add     rax, rcx
 * 00000001403402D1: jmp     short loc_1403402D6
 * 00000001403402D3: mov     rax, r10
 * 00000001403402D6: mov     [rbx+8E8h], rax
 * 00000001403402DD: test    rcx, rcx
 * 00000001403402E0: jz      short loc_1403402E7
 * 00000001403402E2: movsxd  rax, dword ptr [rcx]
 * 00000001403402E5: jmp     short loc_1403402EA
 * 00000001403402E7: mov     rax, r10
 * 00000001403402EA: mov     [rbx+8F0h], rax
 * 00000001403402F1: mov     [rbx+8F8h], r10
 * 00000001403402F8: mov     [rbx+8D8h], r9d
 * 00000001403402FF: jmp     loc_140340681
 * 0000000140340304: mov     r12d, 6
 * 000000014034030A: mov     eax, r10d
 * 000000014034030D: mov     rbx, r14
 * 0000000140340310: test    eax, eax
 * 0000000140340312: js      loc_140340681
 * 0000000140340318: mov     [r14+934h], r12d
 * 000000014034031F: mov     eax, r12d
 * 0000000140340322: cmp     eax, 7
 * 0000000140340325: jge     loc_140340693
 * 000000014034032B: test    dword ptr [r14+970h], 40000000h
 * 0000000140340336: mov     r13d, r10d
 * 0000000140340339: mov     rdx, [rbp+20F0h+var_20F0]
 * 000000014034033D: mov     rsi, [rdx]
 * 0000000140340340: mov     [rbp+20F0h+var_2088], rsi
 * 0000000140340344: jnz     loc_140340677
 * 000000014034034A: mov     rax, [rbp+20F0h+var_20D8]
 * 000000014034034E: mov     ebx, r10d
 * 0000000140340351: cmp     [rax+30h], r10d
 * 0000000140340355: jbe     loc_140340677
 * 000000014034035B: mov     rdi, rax
 * 000000014034035E: mov     eax, ebx
 * 0000000140340360: lea     rdx, [rbp+20F0h+var_1CE8]
 * 0000000140340367: xor     r8d, r8d
 * 000000014034036A: movsxd  rcx, dword ptr [rsi+rax*4]
 * 000000014034036E: mov     rax, [r14+258h]
 * 0000000140340375: sar     rcx, 4
 * 0000000140340379: add     rcx, rsi
 * 000000014034037C: call    KeGuardDispatchICall
 * 0000000140340381: xor     r10d, r10d
 * 0000000140340384: lea     r9d, [r10+1]
 * 0000000140340388: test    rax, rax
 * 000000014034038B: jnz     short loc_140340390
 * 000000014034038D: add     r13d, r9d
 * 0000000140340390: add     ebx, r9d
 * 0000000140340393: cmp     ebx, [rdi+30h]
 * 0000000140340396: jb      short loc_14034035E
 * 0000000140340398: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034039F: test    r13d, r13d
 * 00000001403403A2: jz      loc_140340677
 * 00000001403403A8: mov     r15d, [r14+7CCh]
 * 00000001403403AF: mov     ecx, r13d
 * 00000001403403B2: mov     r8d, [r14+904h]
 * 00000001403403B9: shl     ecx, 4
 * 00000001403403BC: add     ecx, 30h ; '0'
 * 00000001403403BF: add     ecx, r15d
 * 00000001403403C2: cmp     ecx, [r14+9FCh]
 * 00000001403403C9: jbe     loc_1403404C0
 * 00000001403403CF: mov     edx, ecx
 * 00000001403403D1: mov     rcx, r14
 * 00000001403403D4: call    sub_1403485B4
 * 00000001403403D9: xor     r10d, r10d
 * 00000001403403DC: mov     rbx, rax
 * 00000001403403DF: test    rax, rax
 * 00000001403403E2: jz      loc_1403404B6
 * 00000001403403E8: mov     ecx, [r14+970h]
 * 00000001403403EF: test    cl, 4
 * 00000001403403F2: jnz     loc_1403404A7
 * 00000001403403F8: mov     eax, [r14+7CCh]
 * 00000001403403FF: lea     r9d, [r10+1]
 * 0000000140340403: mov     r8, [r14+7B0h]
 * 000000014034040A: and     ecx, 20000000h
 * 0000000140340410: neg     ecx
 * 0000000140340412: sbb     edx, edx
 * 0000000140340414: and     edx, [r14+904h]
 * 000000014034041B: cmp     eax, 8
 * 000000014034041E: jb      short loc_140340435
 * 0000000140340420: mov     ecx, eax
 * 0000000140340422: shr     rcx, 3
 * 0000000140340426: mov     [r14], r10
 * 0000000140340429: add     eax, 0FFFFFFF8h
 * 000000014034042C: add     r14, 8
 * 0000000140340430: sub     rcx, r9
 * 0000000140340433: jnz     short loc_140340426
 * 0000000140340435: test    eax, eax
 * 0000000140340437: jz      short loc_140340448
 * 0000000140340439: mov     ecx, 0FFFFFFFFh
 * 000000014034043E: mov     [r14], r10b
 * 0000000140340441: add     r14, r9
 * 0000000140340444: add     eax, ecx
 * 0000000140340446: jnz     short loc_14034043E
 * 0000000140340448: mov     esi, [rbx+904h]
 * 000000014034044E: mov     [rbx+904h], edx
 * 0000000140340454: cmp     edx, 3
 * 0000000140340457: jz      short loc_14034048B
 * 0000000140340459: test    dword ptr [rbx+970h], 10000000h
 * 0000000140340463: mov     ecx, r10d
 * 0000000140340466: cmovz   ecx, edx
 * 0000000140340469: test    ecx, ecx
 * 000000014034046B: jz      short loc_140340482
 * 000000014034046D: mov     rax, [rbx+220h]
 * 0000000140340474: lea     rcx, [r8-8]
 * 0000000140340478: mov     rdx, [rcx]
 * 000000014034047B: call    KeGuardDispatchICall
 * 0000000140340480: jmp     short loc_14034049A
 * 0000000140340482: mov     rax, [rbx+0F8h]
 * 0000000140340489: jmp     short loc_140340492
 * 000000014034048B: mov     rax, [rbx+360h]
 * 0000000140340492: mov     rcx, r8
 * 0000000140340495: call    KeGuardDispatchICall
 * 000000014034049A: mov     [rbx+904h], esi
 * 00000001403404A0: xor     r10d, r10d
 * 00000001403404A3: mov     rsi, [rbp+20F0h+var_2088]
 * 00000001403404A7: and     dword ptr [rbx+970h], 0FFFFFFFBh
 * 00000001403404AE: mov     r9d, 1
 * 00000001403404B4: jmp     short loc_1403404CA
 * 00000001403404B6: mov     eax, 0C000022Dh
 * 00000001403404BB: jmp     loc_14034067A
 * 00000001403404C0: mov     rbx, r14
 * 00000001403404C3: mov     [r14+7CCh], ecx
 * 00000001403404CA: add     [rbx+7F4h], r9d
 * 00000001403404D1: lea     rcx, [rbx+r15]
 * 00000001403404D5: mov     [rbp+20F0h+var_1CF0], rcx
 * 00000001403404DC: mov     rax, rcx
 * 00000001403404DF: mov     edx, 30h ; '0'
 * 00000001403404E4: mov     r8, r12
 * 00000001403404E7: mov     [rax], r10
 * 00000001403404EA: add     edx, 0FFFFFFF8h
 * 00000001403404ED: add     rax, 8
 * 00000001403404F1: sub     r8, r9
 * 00000001403404F4: jnz     short loc_1403404E7
 * 00000001403404F6: test    edx, edx
 * 00000001403404F8: jz      short loc_14034050B
 * 00000001403404FA: mov     r8d, 0FFFFFFFFh
 * 0000000140340500: mov     [rax], r10b
 * 0000000140340503: add     rax, r9
 * 0000000140340506: add     edx, r8d
 * 0000000140340509: jnz     short loc_140340500
 * 000000014034050B: mov     dword ptr [rcx], 0Ah
 * 0000000140340511: mov     [rcx+8], r10
 * 0000000140340515: mov     [rcx+10h], r10d
 * 0000000140340519: mov     rdx, [rbx+800h]
 * 0000000140340520: mov     rax, rdx
 * 0000000140340523: jmp     short loc_140340527
 * 0000000140340525: xor     edx, eax
 * 0000000140340527: shr     rax, 1Fh
 * 000000014034052B: test    rax, rax
 * 000000014034052E: jnz     short loc_140340525
 * 0000000140340530: btr     edx, 1Fh
 * 0000000140340534: mov     r14, rbx
 * 0000000140340537: mov     [rcx+14h], edx
 * 000000014034053A: mov     r12d, r10d
 * 000000014034053D: mov     rax, [rbp+20F0h+var_1CF0]
 * 0000000140340544: mov     [rbp+20F0h+var_1E18], rax
 * 000000014034054B: mov     [rax+18h], r9d
 * 000000014034054F: mov     rax, [rbp+20F0h+var_1E18]
 * 0000000140340556: mov     [rax+1Ch], r13d
 * 000000014034055A: mov     rax, [rbp+20F0h+var_20D8]
 * 000000014034055E: mov     rcx, [rbp+20F0h+var_1E18]
 * 0000000140340565: lea     r15, [rcx+30h]
 * 0000000140340569: cmp     [rax+30h], r10d
 * 000000014034056D: jbe     loc_14034066E
 * 0000000140340573: mov     eax, r12d
 * 0000000140340576: lea     rdx, [rbp+20F0h+var_1CE8]
 * 000000014034057D: xor     r8d, r8d
 * 0000000140340580: movsxd  rsi, dword ptr [rsi+rax*4]
 * 0000000140340584: mov     rax, [rbx+258h]
 * 000000014034058B: sar     rsi, 4
 * 000000014034058F: add     rsi, [rbp+20F0h+var_2088]
 * 0000000140340593: mov     rcx, rsi
 * 0000000140340596: mov     [rbp+20F0h+var_2070], rsi
 * 000000014034059D: call    KeGuardDispatchICall
 * 00000001403405A2: xor     r10d, r10d
 * 00000001403405A5: test    rax, rax
 * 00000001403405A8: jnz     loc_14034064C
 * 00000001403405AE: lea     r11d, [r10+4]
 * 00000001403405B2: mov     r8, rsi
 * 00000001403405B5: add     [rbx+810h], r11d
 * 00000001403405BC: lea     rcx, [rsi+4]
 * 00000001403405C0: mov     r10d, [rbx+7FCh]
 * 00000001403405C7: mov     rax, rsi
 * 00000001403405CA: mov     rdx, [rbx+800h]
 * 00000001403405D1: cmp     rsi, rcx
 * 00000001403405D4: jnb     short loc_1403405E5
 * 00000001403405D6: lea     r9d, [r11+3Ch]
 * 00000001403405DA: prefetchnta byte ptr [rax]
 * 00000001403405DD: add     rax, r9
 * 00000001403405E0: cmp     rax, rcx
 * 00000001403405E3: jb      short loc_1403405DA
 * 00000001403405E5: mov     r9d, r11d
 * 00000001403405E8: mov     edi, 1
 * 00000001403405ED: mov     esi, 0FFFFFFFFh
 * 00000001403405F2: movzx   eax, byte ptr [r8]
 * 00000001403405F6: mov     ecx, r10d
 * 00000001403405F9: xor     rdx, rax
 * 00000001403405FC: add     r8, rdi
 * 00000001403405FF: rol     rdx, cl
 * 0000000140340602: add     r9d, esi
 * 0000000140340605: jnz     short loc_1403405F2
 * 0000000140340607: mov     rsi, [rbp+20F0h+var_2070]
 * 000000014034060E: mov     rax, rdx
 * 0000000140340611: shr     rax, 1Fh
 * 0000000140340615: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034061C: xor     r10d, r10d
 * 000000014034061F: jmp     short loc_140340627
 * 0000000140340621: xor     edx, eax
 * 0000000140340623: shr     rax, 1Fh
 * 0000000140340627: test    rax, rax
 * 000000014034062A: jnz     short loc_140340621
 * 000000014034062C: xor     edx, [r15]
 * 000000014034062F: mov     eax, 0FFFFFFFFh
 * 0000000140340634: btr     edx, 1Fh
 * 0000000140340638: xor     [r15], edx
 * 000000014034063B: mov     [r15+4], r11d
 * 000000014034063F: mov     [r15+8], rsi
 * 0000000140340643: add     r15, 10h
 * 0000000140340647: add     r13d, eax
 * 000000014034064A: jz      short loc_140340677
 * 000000014034064C: mov     rax, [rbp+20F0h+var_20D8]
 * 0000000140340650: mov     r9d, 1
 * 0000000140340656: mov     rsi, [rbp+20F0h+var_2088]
 * 000000014034065A: add     r12d, r9d
 * 000000014034065D: cmp     r12d, [rax+30h]
 * 0000000140340661: jb      loc_140340573
 * 0000000140340667: mov     rcx, [rbp+20F0h+var_1E18]
 * 000000014034066E: test    r13d, r13d
 * 0000000140340671: jnz     loc_14034029E
 * 0000000140340677: mov     eax, r10d
 * 000000014034067A: mov     rbx, r14
 * 000000014034067D: test    eax, eax
 * 000000014034067F: jns     short loc_140340688
 * 0000000140340681: mov     eax, 0C000022Dh
 * 0000000140340686: jmp     short loc_140340696
 * 0000000140340688: mov     dword ptr [r14+934h], 7
 * 0000000140340693: mov     eax, r10d
 * 0000000140340696: mov     rsi, rbx
 * 0000000140340699: test    eax, eax
 * 000000014034069B: js      short loc_1403406E7
 * 000000014034069D: mov     rax, [rbx+560h]
 * 00000001403406A4: lea     r8, [rbp+20F0h+var_1E80]
 * 00000001403406AB: lea     rdx, [rbp+20F0h+var_1F00]
 * 00000001403406B2: mov     [rbp+20F0h+var_20E0], rbx
 * 00000001403406B6: mov     rsi, rbx
 * 00000001403406B9: mov     [rbp+20F0h+var_1FF8], rbx
 * 00000001403406C0: mov     rcx, [rax+20h]
 * 00000001403406C4: mov     rax, [rbx+1F8h]
 * 00000001403406CB: mov     [rbp+20F0h+var_2088], rcx
 * 00000001403406CF: call    KeGuardDispatchICall
 * 00000001403406D4: xor     r10d, r10d
 * 00000001403406D7: mov     [rbp+20F0h+var_20C8], rax
 * 00000001403406DB: mov     r12, rax
 * 00000001403406DE: test    rax, rax
 * 00000001403406E1: jnz     loc_14034077E
 * 00000001403406E7: mov     r15d, 1
 * 00000001403406ED: mov     r12d, 0FFFFFFFFh
 * 00000001403406F3: mov     ecx, 8000h
 * 00000001403406F8: test    [rbx+970h], ecx
 * 00000001403406FE: jnz     short loc_14034070D
 * 0000000140340700: cmp     [rbx+8D8h], r10d
 * 0000000140340707: jnz     loc_1403430C8
 * 000000014034070D: mov     r14, [rbx+960h]
 * 0000000140340714: lea     rdx, [rbp+20F0h+var_1B40]
 * 000000014034071B: mov     [rbx+960h], r10
 * 0000000140340722: mov     rcx, r14
 * 0000000140340725: mov     rax, [rbx+290h]
 * 000000014034072C: call    KeGuardDispatchICall
 * 0000000140340731: mov     eax, [rbx+970h]
 * 0000000140340737: test    r15b, al
 * 000000014034073A: jz      loc_140342E74
 * 0000000140340740: and     eax, 0FFFFFFFEh
 * 0000000140340743: mov     rcx, r14
 * 0000000140340746: mov     [rbx+970h], eax
 * 000000014034074C: mov     rax, [rbx+278h]
 * 0000000140340753: call    KeGuardDispatchICall
 * 0000000140340758: mov     r14, rax
 * 000000014034075B: test    rax, rax
 * 000000014034075E: jz      loc_140342E6D
 * 0000000140340764: mov     rax, [rbx+298h]
 * 000000014034076B: mov     rcx, r14
 * 000000014034076E: call    KeGuardDispatchICall
 * 0000000140340773: mov     [rbx+950h], eax
 * 0000000140340779: jmp     loc_140342E74
 * 000000014034077E: mov     eax, [rbp+20F0h+var_1E80]
 * 0000000140340784: mov     ecx, 4
 * 0000000140340789: mov     r13, [rbp+20F0h+var_1F00]
 * 0000000140340790: mov     r8d, 0FFFFFFFFh
 * 0000000140340796: mov     [rbp+20F0h+var_20A8], eax
 * 0000000140340799: lea     rax, [rbp+20F0h+var_1F28]
 * 00000001403407A0: mov     [rbp+20F0h+var_20F0], r13
 * 00000001403407A4: lea     edx, [rcx-3]
 * 00000001403407A7: mov     [rbp+20F0h+var_1F30], r10
 * 00000001403407AE: mov     [rax], r10b
 * 00000001403407B1: add     rax, rdx
 * 00000001403407B4: add     ecx, r8d
 * 00000001403407B7: jnz     short loc_1403407AE
 * 00000001403407B9: mov     r15d, r10d
 * 00000001403407BC: mov     [rbp+20F0h+var_20C0], r10d
 * 00000001403407C0: cmp     [rbx+7F4h], r10d
 * 00000001403407C7: jbe     loc_1403409BD
 * 00000001403407CD: mov     ecx, [rbp+20F0h+var_1F28]
 * 00000001403407D3: mov     r9d, dword ptr [rbp+20F0h+var_1F30+4]
 * 00000001403407DA: mov     r11d, dword ptr [rbp+20F0h+var_1F30]
 * 00000001403407E1: mov     rax, [rbx+0A48h]
 * 00000001403407E8: mov     r14, rbx
 * 00000001403407EB: test    rax, rax
 * 00000001403407EE: cmovnz  r14, rax
 * 00000001403407F2: mov     [rbp+20F0h+var_2070], r14
 * 00000001403407F9: mov     r8d, [r14+7F0h]
 * 0000000140340800: add     r8, r14
 * 0000000140340803: test    r11d, r11d
 * 0000000140340806: jz      short loc_140340816
 * 0000000140340808: cmp     r9d, r15d
 * 000000014034080B: ja      short loc_140340816
 * 000000014034080D: mov     r8d, ecx
 * 0000000140340810: mov     r10d, r9d
 * 0000000140340813: add     r8, r14
 * 0000000140340816: cmp     r10d, r15d
 * 0000000140340819: jz      loc_14034094E
 * 000000014034081F: mov     eax, r15d
 * 0000000140340822: mov     esi, 2
 * 0000000140340827: sub     eax, r10d
 * 000000014034082A: mov     r14d, 0FFFh
 * 0000000140340830: add     r10d, eax
 * 0000000140340833: mov     r9d, eax
 * 0000000140340836: mov     [rbp+20F0h+var_2094], r10d
 * 000000014034083A: mov     r10, 0AAAAAAAAAAAAAAABh
 * 0000000140340844: lea     r12d, [rsi-1]
 * 0000000140340848: lea     r15d, [rsi+0Ah]
 * 000000014034084C: mov     ecx, [r8]
 * 000000014034084F: cmp     ecx, r15d
 * 0000000140340852: jg      short loc_140340893
 * 0000000140340854: jz      short loc_1403408AC
 * 0000000140340856: sub     ecx, r12d
 * 0000000140340859: jz      short loc_1403408AC
 * 000000014034085B: sub     ecx, 6
 * 000000014034085E: jz      short loc_140340882
 * 0000000140340860: sub     ecx, r12d
 * 0000000140340863: jz      short loc_140340878
 * 0000000140340865: cmp     ecx, esi
 * 0000000140340867: jnz     short loc_1403408E4
 * 0000000140340869: mov     eax, [r8+1Ch]
 * 000000014034086D: add     eax, 3
 * 0000000140340870: shl     eax, 4
 * 0000000140340873: jmp     loc_14034091C
 * 0000000140340878: movzx   eax, word ptr [r8+20h]
 * 000000014034087D: jmp     loc_140340916
 * 0000000140340882: mov     eax, [r8+18h]
 * 0000000140340886: add     eax, esi
 * 0000000140340888: lea     eax, [rax+rax*2]
 * 000000014034088B: shl     eax, 3
 * 000000014034088E: jmp     loc_14034091C
 * 0000000140340893: cmp     ecx, 1Ch
 * 0000000140340896: jz      short loc_140340911
 * 0000000140340898: cmp     ecx, 1Eh
 * 000000014034089B: jz      short loc_1403408EB
 * 000000014034089D: cmp     ecx, 20h ; ' '
 * 00000001403408A0: jle     short loc_1403408E4
 * 00000001403408A2: cmp     ecx, 22h ; '"'
 * 00000001403408A5: jle     short loc_1403408C3
 * 00000001403408A7: cmp     ecx, 2Bh ; '+'
 * 00000001403408AA: jnz     short loc_1403408E4
 * 00000001403408AC: mov     ecx, [r8+10h]
 * 00000001403408B0: mov     rax, r10
 * 00000001403408B3: mul     rcx
 * 00000001403408B6: shr     rdx, 3
 * 00000001403408BA: lea     eax, ds:30h[rdx*4]
 * 00000001403408C1: jmp     short loc_14034091C
 * 00000001403408C3: mov     ecx, [r8+20h]
 * 00000001403408C7: mov     edx, [r8+28h]
 * 00000001403408CB: and     rcx, r14
 * 00000001403408CE: add     rdx, r14
 * 00000001403408D1: add     rdx, rcx
 * 00000001403408D4: shr     rdx, 0Ch
 * 00000001403408D8: lea     eax, [rdx+rdx*4]
 * 00000001403408DB: lea     eax, ds:30h[rax*4]
 * 00000001403408E2: jmp     short loc_14034091C
 * 00000001403408E4: mov     eax, 30h ; '0'
 * 00000001403408E9: jmp     short loc_14034091C
 * 00000001403408EB: mov     ecx, [r8+24h]
 * 00000001403408EF: mov     rax, r10
 * 00000001403408F2: sub     ecx, r12d
 * 00000001403408F5: mul     rcx
 * 00000001403408F8: movzx   eax, word ptr [r8+28h]
 * 00000001403408FD: shr     rdx, 3
 * 0000000140340901: add     edx, 7
 * 0000000140340904: and     edx, 0FFFFFFF8h
 * 0000000140340907: add     eax, esi
 * 0000000140340909: lea     eax, [rax+rax*2]
 * 000000014034090C: lea     eax, [rdx+rax*8]
 * 000000014034090F: jmp     short loc_14034091C
 * 0000000140340911: movzx   eax, word ptr [r8+28h]
 * 0000000140340916: add     eax, 37h ; '7'
 * 0000000140340919: and     eax, 0FFFFFFF8h
 * 000000014034091C: add     r8, rax
 * 000000014034091F: sub     r9, r12
 * 0000000140340922: jnz     loc_14034084C
 * 0000000140340928: mov     rsi, [rbp+20F0h+var_20E0]
 * 000000014034092C: lea     edx, [r9+1]
 * 0000000140340930: mov     r10d, [rbp+20F0h+var_2094]
 * 0000000140340934: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034093B: mov     r14, [rbp+20F0h+var_2070]
 * 0000000140340942: mov     r15d, [rbp+20F0h+var_20C0]
 * 0000000140340946: mov     r12, [rbp+20F0h+var_20C8]
 * 000000014034094A: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014034094E: mov     ecx, r8d
 * 0000000140340951: mov     dword ptr [rbp+20F0h+var_1F30], edx
 * 0000000140340957: sub     ecx, r14d
 * 000000014034095A: mov     dword ptr [rbp+20F0h+var_1F30+4], r10d
 * 0000000140340961: mov     [rbp+20F0h+var_1F28], ecx
 * 0000000140340967: mov     r11d, edx
 * 000000014034096A: movsxd  rdx, dword ptr [r8]
 * 000000014034096D: mov     r9d, r10d
 * 0000000140340970: cmp     edx, 2Bh ; '+'
 * 0000000140340973: ja      short loc_140340994
 * 0000000140340975: mov     r10, 80000001002h
 * 000000014034097F: bt      r10, rdx
 * 0000000140340983: jnb     short loc_140340994
 * 0000000140340985: cmp     [r8+8], r12
 * 0000000140340989: jnz     short loc_140340994
 * 000000014034098B: mov     eax, [rbp+20F0h+var_20A8]
 * 000000014034098E: cmp     [r8+10h], eax
 * 0000000140340992: jz      short loc_1403409C0
 * 0000000140340994: lea     eax, [rdx-21h]
 * 0000000140340997: mov     edx, 1
 * 000000014034099C: cmp     eax, edx
 * 000000014034099E: ja      short loc_1403409A6
 * 00000001403409A0: cmp     [r8+20h], r13
 * 00000001403409A4: jz      short loc_1403409C0
 * 00000001403409A6: add     r15d, edx
 * 00000001403409A9: xor     r10d, r10d
 * 00000001403409AC: mov     [rbp+20F0h+var_20C0], r15d
 * 00000001403409B0: cmp     r15d, [rbx+7F4h]
 * 00000001403409B7: jb      loc_1403407E1
 * 00000001403409BD: mov     r8, r10
 * 00000001403409C0: test    r8, r8
 * 00000001403409C3: jz      short loc_1403409CD
 * 00000001403409C5: mov     rsi, rbx
 * 00000001403409C8: jmp     loc_1403426E5
 * 00000001403409CD: mov     rax, [rbx+1F8h]
 * 00000001403409D4: lea     r8, [rbp+20F0h+var_2048]
 * 00000001403409DB: mov     rcx, [rbp+20F0h+var_2088]
 * 00000001403409DF: lea     rdx, [rbp+20F0h+var_2020]
 * 00000001403409E6: mov     [rbp+20F0h+var_1FE8], rbx
 * 00000001403409ED: call    KeGuardDispatchICall
 * 00000001403409F2: xor     edx, edx
 * 00000001403409F4: mov     [rbp+20F0h+var_20B0], rax
 * 00000001403409F8: test    rax, rax
 * 00000001403409FB: jnz     short loc_140340A0F
 * 00000001403409FD: mov     [rbp+20F0h+var_2098], 0C000007Bh
 * 0000000140340A04: mov     r13d, 80000000h
 * 0000000140340A0A: jmp     loc_140342622
 * 0000000140340A0F: mov     r12, [rbp+20F0h+var_2020]
 * 0000000140340A16: lea     rax, [rbp+20F0h+var_1F08]
 * 0000000140340A1D: mov     r13d, [rbp+20F0h+var_2048]
 * 0000000140340A24: mov     ecx, 4
 * 0000000140340A29: mov     [rbp+20F0h+var_20A8], r13d
 * 0000000140340A2D: mov     r9d, 0FFFFFFFFh
 * 0000000140340A33: mov     [rbp+20F0h+var_20C8], r12
 * 0000000140340A37: mov     [rbp+20F0h+var_1F10], rdx
 * 0000000140340A3E: lea     r8d, [rcx-3]
 * 0000000140340A42: mov     [rax], dl
 * 0000000140340A44: add     rax, r8
 * 0000000140340A47: add     ecx, r9d
 * 0000000140340A4A: jnz     short loc_140340A42
 * 0000000140340A4C: mov     r15d, edx
 * 0000000140340A4F: mov     [rbp+20F0h+var_20C0], edx
 * 0000000140340A52: cmp     [rbx+7F4h], edx
 * 0000000140340A58: jbe     loc_140340C5A
 * 0000000140340A5E: mov     ecx, [rbp+20F0h+var_1F08]
 * 0000000140340A64: mov     r9d, dword ptr [rbp+20F0h+var_1F10+4]
 * 0000000140340A6B: mov     r11d, dword ptr [rbp+20F0h+var_1F10]
 * 0000000140340A72: mov     rax, [rbx+0A48h]
 * 0000000140340A79: mov     r14, rbx
 * 0000000140340A7C: test    rax, rax
 * 0000000140340A7F: mov     r10d, edx
 * 0000000140340A82: cmovnz  r14, rax
 * 0000000140340A86: mov     [rbp+20F0h+var_2070], r14
 * 0000000140340A8D: mov     r8d, [r14+7F0h]
 * 0000000140340A94: add     r8, r14
 * 0000000140340A97: test    r11d, r11d
 * 0000000140340A9A: jz      short loc_140340AAA
 * 0000000140340A9C: cmp     r9d, r15d
 * 0000000140340A9F: ja      short loc_140340AAA
 * 0000000140340AA1: mov     r8d, ecx
 * 0000000140340AA4: mov     r10d, r9d
 * 0000000140340AA7: add     r8, r14
 * 0000000140340AAA: cmp     r10d, r15d
 * 0000000140340AAD: jz      loc_140340BE0
 * 0000000140340AB3: mov     eax, r15d
 * 0000000140340AB6: mov     esi, 2
 * 0000000140340ABB: sub     eax, r10d
 * 0000000140340ABE: mov     r14d, 0FFFh
 * 0000000140340AC4: add     r10d, eax
 * 0000000140340AC7: mov     r9d, eax
 * 0000000140340ACA: mov     [rbp+20F0h+var_2094], r10d
 * 0000000140340ACE: mov     r10, 0AAAAAAAAAAAAAAABh
 * 0000000140340AD8: lea     r15d, [rsi+0Ah]
 * 0000000140340ADC: mov     ecx, [r8]
 * 0000000140340ADF: cmp     ecx, r15d
 * 0000000140340AE2: jg      short loc_140340B23
 * 0000000140340AE4: jz      short loc_140340B3C
 * 0000000140340AE6: sub     ecx, 1
 * 0000000140340AE9: jz      short loc_140340B3C
 * 0000000140340AEB: sub     ecx, 6
 * 0000000140340AEE: jz      short loc_140340B12
 * 0000000140340AF0: sub     ecx, 1
 * 0000000140340AF3: jz      short loc_140340B08
 * 0000000140340AF5: cmp     ecx, esi
 * 0000000140340AF7: jnz     short loc_140340B74
 * 0000000140340AF9: mov     eax, [r8+1Ch]
 * 0000000140340AFD: add     eax, 3
 * 0000000140340B00: shl     eax, 4
 * 0000000140340B03: jmp     loc_140340BAB
 * 0000000140340B08: movzx   eax, word ptr [r8+20h]
 * 0000000140340B0D: jmp     loc_140340BA5
 * 0000000140340B12: mov     eax, [r8+18h]
 * 0000000140340B16: add     eax, esi
 * 0000000140340B18: lea     eax, [rax+rax*2]
 * 0000000140340B1B: shl     eax, 3
 * 0000000140340B1E: jmp     loc_140340BAB
 * 0000000140340B23: cmp     ecx, 1Ch
 * 0000000140340B26: jz      short loc_140340BA0
 * 0000000140340B28: cmp     ecx, 1Eh
 * 0000000140340B2B: jz      short loc_140340B7B
 * 0000000140340B2D: cmp     ecx, 20h ; ' '
 * 0000000140340B30: jle     short loc_140340B74
 * 0000000140340B32: cmp     ecx, 22h ; '"'
 * 0000000140340B35: jle     short loc_140340B53
 * 0000000140340B37: cmp     ecx, 2Bh ; '+'
 * 0000000140340B3A: jnz     short loc_140340B74
 * 0000000140340B3C: mov     ecx, [r8+10h]
 * 0000000140340B40: mov     rax, r10
 * 0000000140340B43: mul     rcx
 * 0000000140340B46: shr     rdx, 3
 * 0000000140340B4A: lea     eax, ds:30h[rdx*4]
 * 0000000140340B51: jmp     short loc_140340BAB
 * 0000000140340B53: mov     ecx, [r8+20h]
 * 0000000140340B57: mov     edx, [r8+28h]
 * 0000000140340B5B: and     rcx, r14
 * 0000000140340B5E: add     rdx, r14
 * 0000000140340B61: add     rdx, rcx
 * 0000000140340B64: shr     rdx, 0Ch
 * 0000000140340B68: lea     eax, [rdx+rdx*4]
 * 0000000140340B6B: lea     eax, ds:30h[rax*4]
 * 0000000140340B72: jmp     short loc_140340BAB
 * 0000000140340B74: mov     eax, 30h ; '0'
 * 0000000140340B79: jmp     short loc_140340BAB
 * 0000000140340B7B: mov     ecx, [r8+24h]
 * 0000000140340B7F: mov     rax, r10
 * 0000000140340B82: dec     ecx
 * 0000000140340B84: mul     rcx
 * 0000000140340B87: movzx   eax, word ptr [r8+28h]
 * 0000000140340B8C: shr     rdx, 3
 * 0000000140340B90: add     edx, 7
 * 0000000140340B93: and     edx, 0FFFFFFF8h
 * 0000000140340B96: add     eax, esi
 * 0000000140340B98: lea     eax, [rax+rax*2]
 * 0000000140340B9B: lea     eax, [rdx+rax*8]
 * 0000000140340B9E: jmp     short loc_140340BAB
 * 0000000140340BA0: movzx   eax, word ptr [r8+28h]
 * 0000000140340BA5: add     eax, 37h ; '7'
 * 0000000140340BA8: and     eax, 0FFFFFFF8h
 * 0000000140340BAB: add     r8, rax
 * 0000000140340BAE: mov     eax, 1
 * 0000000140340BB3: sub     r9, rax
 * 0000000140340BB6: jnz     loc_140340ADC
 * 0000000140340BBC: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140340BC0: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140340BC7: mov     r10d, [rbp+20F0h+var_2094]
 * 0000000140340BCB: mov     r14, [rbp+20F0h+var_2070]
 * 0000000140340BD2: mov     r15d, [rbp+20F0h+var_20C0]
 * 0000000140340BD6: mov     r12, [rbp+20F0h+var_20C8]
 * 0000000140340BDA: mov     r13d, [rbp+20F0h+var_20A8]
 * 0000000140340BDE: jmp     short loc_140340BE5
 * 0000000140340BE0: mov     eax, 1
 * 0000000140340BE5: mov     ecx, r8d
 * 0000000140340BE8: mov     dword ptr [rbp+20F0h+var_1F10], eax
 * 0000000140340BEE: sub     ecx, r14d
 * 0000000140340BF1: mov     dword ptr [rbp+20F0h+var_1F10+4], r10d
 * 0000000140340BF8: mov     [rbp+20F0h+var_1F08], ecx
 * 0000000140340BFE: mov     r11d, eax
 * 0000000140340C01: movsxd  rdx, dword ptr [r8]
 * 0000000140340C04: mov     r9d, r10d
 * 0000000140340C07: cmp     edx, 2Bh ; '+'
 * 0000000140340C0A: ja      short loc_140340C2C
 * 0000000140340C0C: mov     r10, 80000001002h
 * 0000000140340C16: bt      r10, rdx
 * 0000000140340C1A: jnb     short loc_140340C2C
 * 0000000140340C1C: mov     rax, [rbp+20F0h+var_20B0]
 * 0000000140340C20: cmp     [r8+8], rax
 * 0000000140340C24: jnz     short loc_140340C2C
 * 0000000140340C26: cmp     [r8+10h], r13d
 * 0000000140340C2A: jz      short loc_140340C55
 * 0000000140340C2C: lea     eax, [rdx-21h]
 * 0000000140340C2F: mov     edx, 1
 * 0000000140340C34: cmp     eax, edx
 * 0000000140340C36: ja      short loc_140340C3E
 * 0000000140340C38: cmp     [r8+20h], r12
 * 0000000140340C3C: jz      short loc_140340C55
 * 0000000140340C3E: add     r15d, edx
 * 0000000140340C41: mov     [rbp+20F0h+var_20C0], r15d
 * 0000000140340C45: cmp     r15d, [rbx+7F4h]
 * 0000000140340C4C: jnb     short loc_140340C5A
 * 0000000140340C4E: xor     edx, edx
 * 0000000140340C50: jmp     loc_140340A72
 * 0000000140340C55: xor     r12d, r12d
 * 0000000140340C58: jmp     short loc_140340C60
 * 0000000140340C5A: xor     r12d, r12d
 * 0000000140340C5D: mov     r8d, r12d
 * 0000000140340C60: mov     [rbp+20F0h+var_1F88], r8
 * 0000000140340C67: test    r8, r8
 * 0000000140340C6A: jnz     loc_14034262D
 * 0000000140340C70: mov     rax, [rbx+2A0h]
 * 0000000140340C77: mov     rcx, [rbp+20F0h+var_2088]
 * 0000000140340C7B: call    KeGuardDispatchICall
 * 0000000140340C80: mov     ecx, [rbp+20F0h+var_2048]
 * 0000000140340C86: mov     dword ptr [rbp+20F0h+var_20B8], ecx
 * 0000000140340C89: mov     [rbp+20F0h+var_20C0], eax
 * 0000000140340C8C: test    eax, eax
 * 0000000140340C8E: jz      loc_14034262D
 * 0000000140340C94: test    dword ptr [rbx+970h], 40000000h
 * 0000000140340C9E: jz      short loc_140340CCA
 * 0000000140340CA0: mov     rdx, [rbp+20F0h+var_2020]
 * 0000000140340CA7: lea     rcx, [rbp+20F0h+var_1FF8]
 * 0000000140340CAE: mov     r8d, 0Fh
 * 0000000140340CB4: call    sub_14098EFA4
 * 0000000140340CB9: mov     rsi, [rbp+20F0h+var_1FF8]
 * 0000000140340CC0: mov     ecx, eax
 * 0000000140340CC2: mov     [rbp+20F0h+var_2098], eax
 * 0000000140340CC5: jmp     loc_140342608
 * 0000000140340CCA: mov     rax, [rbx+1E8h]
 * 0000000140340CD1: lea     r9, [rbp+20F0h+var_2048]
 * 0000000140340CD8: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140340CDF: xor     r8d, r8d
 * 0000000140340CE2: mov     [rbp+20F0h+var_1BF0], r12
 * 0000000140340CE9: mov     [rbp+20F0h+var_1DE0], r12d
 * 0000000140340CF0: lea     r15d, [r8+1]
 * 0000000140340CF4: mov     dl, r15b
 * 0000000140340CF7: call    KeGuardDispatchICall
 * 0000000140340CFC: mov     rdx, rax
 * 0000000140340CFF: lea     r8d, [r15+0Bh]
 * 0000000140340D03: neg     rax
 * 0000000140340D06: mov     [rbp+20F0h+var_1C08], rdx
 * 0000000140340D0D: lea     r9, [rbp+20F0h+var_2048]
 * 0000000140340D14: mov     dl, r15b
 * 0000000140340D17: sbb     ecx, ecx
 * 0000000140340D19: and     ecx, [rbp+20F0h+var_2048]
 * 0000000140340D1F: mov     [rbp+20F0h+var_2048], ecx
 * 0000000140340D25: mov     rax, [rbx+1E8h]
 * 0000000140340D2C: mov     [rbp+20F0h+var_1DEC], ecx
 * 0000000140340D32: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140340D39: call    KeGuardDispatchICall
 * 0000000140340D3E: mov     rdx, rax
 * 0000000140340D41: mov     [rbp+20F0h+var_20A0], rax
 * 0000000140340D45: neg     rax
 * 0000000140340D48: mov     [rbp+20F0h+var_1C00], rdx
 * 0000000140340D4F: lea     r8d, [r15+9]
 * 0000000140340D53: mov     dl, r15b
 * 0000000140340D56: sbb     ecx, ecx
 * 0000000140340D58: lea     r9, [rbp+20F0h+var_2048]
 * 0000000140340D5F: and     ecx, [rbp+20F0h+var_2048]
 * 0000000140340D65: mov     [rbp+20F0h+var_2048], ecx
 * 0000000140340D6B: mov     rax, [rbx+1E8h]
 * 0000000140340D72: mov     [rbp+20F0h+var_20A8], ecx
 * 0000000140340D75: mov     [rbp+20F0h+var_1DE8], ecx
 * 0000000140340D7B: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140340D82: call    KeGuardDispatchICall
 * 0000000140340D87: mov     rdx, rax
 * 0000000140340D8A: neg     rax
 * 0000000140340D8D: mov     [rbp+20F0h+var_1BF8], rdx
 * 0000000140340D94: sbb     ecx, ecx
 * 0000000140340D96: and     ecx, [rbp+20F0h+var_2048]
 * 0000000140340D9C: mov     [rbp+20F0h+var_2048], ecx
 * 0000000140340DA2: mov     rax, [rbx+1F0h]
 * 0000000140340DA9: mov     [rbp+20F0h+var_1DE4], ecx
 * 0000000140340DAF: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140340DB6: call    KeGuardDispatchICall
 * 0000000140340DBB: mov     r14, rax
 * 0000000140340DBE: test    rax, rax
 * 0000000140340DC1: jz      loc_1403409FD
 * 0000000140340DC7: mov     rax, [rbx+490h]
 * 0000000140340DCE: lea     rdx, [rbp+20F0h+var_1CC0]
 * 0000000140340DD5: mov     rcx, [rbp+20F0h+var_2020]
 * 0000000140340DDC: call    KeGuardDispatchICall
 * 0000000140340DE1: mov     r15d, [rbx+7CCh]
 * 0000000140340DE8: mov     r8d, [rbx+904h]
 * 0000000140340DEF: mov     [rbp+20F0h+var_1BE8], rax
 * 0000000140340DF6: mov     eax, [rbp+20F0h+var_1CC0]
 * 0000000140340DFC: mov     [rbp+20F0h+var_1DDC], eax
 * 0000000140340E02: mov     rax, [rbp+20F0h+var_2020]
 * 0000000140340E09: mov     [rbp+20F0h+var_1C10], rax
 * 0000000140340E10: mov     eax, [r14+54h]
 * 0000000140340E14: mov     [rbp+20F0h+var_1DF0], eax
 * 0000000140340E1A: lea     eax, [r15+120h]
 * 0000000140340E21: cmp     eax, [rbx+9FCh]
 * 0000000140340E27: jbe     loc_140340F18
 * 0000000140340E2D: mov     edx, eax
 * 0000000140340E2F: mov     rcx, rbx
 * 0000000140340E32: call    sub_1403485B4
 * 0000000140340E37: mov     [rbp+20F0h+var_2088], rax
 * 0000000140340E3B: mov     r14, rax
 * 0000000140340E3E: test    rax, rax
 * 0000000140340E41: jz      loc_140340F0C
 * 0000000140340E47: mov     ecx, [rbx+970h]
 * 0000000140340E4D: test    cl, 4
 * 0000000140340E50: jnz     loc_140340F02
 * 0000000140340E56: mov     eax, [rbx+7CCh]
 * 0000000140340E5C: and     ecx, 20000000h
 * 0000000140340E62: mov     r8, [rbx+7B0h]
 * 0000000140340E69: neg     ecx
 * 0000000140340E6B: mov     r9d, 1
 * 0000000140340E71: sbb     edx, edx
 * 0000000140340E73: and     edx, [rbx+904h]
 * 0000000140340E79: cmp     eax, 8
 * 0000000140340E7C: jb      short loc_140340E93
 * 0000000140340E7E: mov     ecx, eax
 * 0000000140340E80: shr     rcx, 3
 * 0000000140340E84: mov     [rbx], r12
 * 0000000140340E87: add     eax, 0FFFFFFF8h
 * 0000000140340E8A: add     rbx, 8
 * 0000000140340E8E: sub     rcx, r9
 * 0000000140340E91: jnz     short loc_140340E84
 * 0000000140340E93: test    eax, eax
 * 0000000140340E95: jz      short loc_140340EA6
 * 0000000140340E97: mov     ecx, 0FFFFFFFFh
 * 0000000140340E9C: mov     [rbx], r12b
 * 0000000140340E9F: add     rbx, r9
 * 0000000140340EA2: add     eax, ecx
 * 0000000140340EA4: jnz     short loc_140340E9C
 * 0000000140340EA6: mov     ebx, [r14+904h]
 * 0000000140340EAD: mov     [r14+904h], edx
 * 0000000140340EB4: cmp     edx, 3
 * 0000000140340EB7: jz      short loc_140340EEC
 * 0000000140340EB9: test    dword ptr [r14+970h], 10000000h
 * 0000000140340EC4: mov     ecx, r12d
 * 0000000140340EC7: cmovz   ecx, edx
 * 0000000140340ECA: test    ecx, ecx
 * 0000000140340ECC: jz      short loc_140340EE3
 * 0000000140340ECE: mov     rax, [r14+220h]
 * 0000000140340ED5: lea     rcx, [r8-8]
 * 0000000140340ED9: mov     rdx, [rcx]
 * 0000000140340EDC: call    KeGuardDispatchICall
 * 0000000140340EE1: jmp     short loc_140340EFB
 * 0000000140340EE3: mov     rax, [r14+0F8h]
 * 0000000140340EEA: jmp     short loc_140340EF3
 * 0000000140340EEC: mov     rax, [r14+360h]
 * 0000000140340EF3: mov     rcx, r8
 * 0000000140340EF6: call    KeGuardDispatchICall
 * 0000000140340EFB: mov     [r14+904h], ebx
 * 0000000140340F02: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140340F0A: jmp     short loc_140340F25
 * 0000000140340F0C: mov     [rbp+20F0h+var_1FE8], r12
 * 0000000140340F13: jmp     loc_140340A04
 * 0000000140340F18: mov     r14, rbx
 * 0000000140340F1B: mov     [rbp+20F0h+var_2088], rbx
 * 0000000140340F1F: mov     [rbx+7CCh], eax
 * 0000000140340F25: mov     eax, 6
 * 0000000140340F2A: lea     r10, [r14+r15]
 * 0000000140340F2E: add     [r14+7F4h], eax
 * 0000000140340F35: lea     r13, [rbp+20F0h+var_1C10]
 * 0000000140340F3C: mov     [rbp+20F0h+var_1D88], r10
 * 0000000140340F43: lea     rdi, [rbp+20F0h+var_1DF0]
 * 0000000140340F4A: mov     [rbp+20F0h+var_1F88], r10
 * 0000000140340F51: mov     [rbp+20F0h+var_20F0], r13
 * 0000000140340F55: mov     [rbp+20F0h+var_20D8], rax
 * 0000000140340F59: mov     r15d, [rdi]
 * 0000000140340F5C: mov     ecx, 30h ; '0'
 * 0000000140340F61: mov     rsi, [r13+0]
 * 0000000140340F65: mov     rdx, rax
 * 0000000140340F68: mov     [rbp+20F0h+var_2094], r15d
 * 0000000140340F6C: mov     rax, r10
 * 0000000140340F6F: lea     r8d, [rcx-2Fh]
 * 0000000140340F73: mov     [rax], r12
 * 0000000140340F76: add     ecx, 0FFFFFFF8h
 * 0000000140340F79: add     rax, 8
 * 0000000140340F7D: sub     rdx, r8
 * 0000000140340F80: jnz     short loc_140340F73
 * 0000000140340F82: mov     rdx, r8
 * 0000000140340F85: test    ecx, ecx
 * 0000000140340F87: jz      short loc_140340F9A
 * 0000000140340F89: mov     r8d, 0FFFFFFFFh
 * 0000000140340F8F: mov     [rax], r12b
 * 0000000140340F92: add     rax, rdx
 * 0000000140340F95: add     ecx, r8d
 * 0000000140340F98: jnz     short loc_140340F8F
 * 0000000140340F9A: mov     dword ptr [r10], 0Bh
 * 0000000140340FA1: lea     rcx, [rsi+r15]
 * 0000000140340FA5: mov     [r10+8], rsi
 * 0000000140340FA9: mov     r9, rsi
 * 0000000140340FAC: mov     [r10+10h], r15d
 * 0000000140340FB0: mov     rax, rsi
 * 0000000140340FB3: add     [r14+810h], r15d
 * 0000000140340FBA: mov     r11d, [r14+7FCh]
 * 0000000140340FC1: mov     r12, [r14+800h]
 * 0000000140340FC8: cmp     rsi, rcx
 * 0000000140340FCB: jnb     short loc_140340FDE
 * 0000000140340FCD: mov     r8d, 40h ; '@'
 * 0000000140340FD3: prefetchnta byte ptr [rax]
 * 0000000140340FD6: add     rax, r8
 * 0000000140340FD9: cmp     rax, rcx
 * 0000000140340FDC: jb      short loc_140340FD3
 * 0000000140340FDE: mov     ebx, r15d
 * 0000000140340FE1: mov     r8, r12
 * 0000000140340FE4: shr     ebx, 7
 * 0000000140340FE7: test    ebx, ebx
 * 0000000140340FE9: jz      short loc_14034105D
 * 0000000140340FEB: mov     r15d, 0FFFFFFFFh
 * 0000000140340FF1: mov     r13, 7010008004002001h
 * 0000000140340FFB: mov     eax, 8
 * 0000000140341000: xor     r8, [r9]
 * 0000000140341003: mov     ecx, r11d
 * 0000000140341006: rol     r8, cl
 * 0000000140341009: xor     r8, [r9+8]
 * 000000014034100D: add     r9, 10h
 * 0000000140341011: rol     r8, cl
 * 0000000140341014: sub     rax, rdx
 * 0000000140341017: jnz     short loc_140341000
 * 0000000140341019: mov     rcx, r9
 * 000000014034101C: sub     rcx, rsi
 * 000000014034101F: xor     rcx, r12
 * 0000000140341022: mov     rax, rcx
 * 0000000140341025: rol     rax, 11h
 * 0000000140341029: xor     rcx, rax
 * 000000014034102C: mov     rax, r13
 * 000000014034102F: mul     rcx
 * 0000000140341032: xor     r11d, eax
 * 0000000140341035: mov     [rbp+20F0h+var_1990], rdx
 * 000000014034103C: xor     r11d, edx
 * 000000014034103F: mov     edx, 1
 * 0000000140341044: and     r11d, 3Fh
 * 0000000140341048: cmovz   r11d, edx
 * 000000014034104C: add     ebx, r15d
 * 000000014034104F: jnz     short loc_140340FFB
 * 0000000140341051: mov     r14, [rbp+20F0h+var_2088]
 * 0000000140341055: mov     r15d, [rbp+20F0h+var_2094]
 * 0000000140341059: mov     r13, [rbp+20F0h+var_20F0]
 * 000000014034105D: mov     edx, r15d
 * 0000000140341060: mov     ebx, 1
 * 0000000140341065: and     edx, 7Fh
 * 0000000140341068: cmp     edx, 8
 * 000000014034106B: jb      short loc_140341088
 * 000000014034106D: mov     eax, edx
 * 000000014034106F: shr     rax, 3
 * 0000000140341073: xor     r8, [r9]
 * 0000000140341076: mov     ecx, r11d
 * 0000000140341079: rol     r8, cl
 * 000000014034107C: add     r9, 8
 * 0000000140341080: add     edx, 0FFFFFFF8h
 * 0000000140341083: sub     rax, rbx
 * 0000000140341086: jnz     short loc_140341073
 * 0000000140341088: xor     r12d, r12d
 * 000000014034108B: test    edx, edx
 * 000000014034108D: jz      short loc_1403410AD
 * 000000014034108F: mov     r12d, 0FFFFFFFFh
 * 0000000140341095: movzx   eax, byte ptr [r9]
 * 0000000140341099: mov     ecx, r11d
 * 000000014034109C: xor     r8, rax
 * 000000014034109F: add     r9, rbx
 * 00000001403410A2: rol     r8, cl
 * 00000001403410A5: add     edx, r12d
 * 00000001403410A8: jnz     short loc_140341095
 * 00000001403410AA: xor     r12d, r12d
 * 00000001403410AD: mov     rax, r8
 * 00000001403410B0: jmp     short loc_1403410B5
 * 00000001403410B2: xor     r8d, eax
 * 00000001403410B5: shr     rax, 1Fh
 * 00000001403410B9: test    rax, rax
 * 00000001403410BC: jnz     short loc_1403410B2
 * 00000001403410BE: btr     r8d, 1Fh
 * 00000001403410C3: add     r13, 8
 * 00000001403410C7: mov     [r10+14h], r8d
 * 00000001403410CB: add     rdi, 4
 * 00000001403410CF: add     [r14+810h], r15d
 * 00000001403410D6: lea     r15d, [rax+1]
 * 00000001403410DA: mov     r10, [rbp+20F0h+var_1D88]
 * 00000001403410E1: lea     eax, [r15+5]
 * 00000001403410E5: add     r10, 30h ; '0'
 * 00000001403410E9: mov     [rbp+20F0h+var_20F0], r13
 * 00000001403410ED: sub     [rbp+20F0h+var_20D8], r15
 * 00000001403410F1: mov     [rbp+20F0h+var_1D88], r10
 * 00000001403410F8: jnz     loc_140340F59
 * 00000001403410FE: mov     rax, [rbp+20F0h+var_2020]
 * 0000000140341105: mov     rsi, r14
 * 0000000140341108: mov     rcx, [rbp+20F0h+var_1F88]
 * 000000014034110F: mov     r8d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140341113: mov     rdx, [rbp+20F0h+var_20B0]
 * 0000000140341117: mov     [rbp+20F0h+var_1FE8], r14
 * 000000014034111E: mov     dword ptr [rcx], 2Ch ; ','
 * 0000000140341124: mov     [rcx+18h], rax
 * 0000000140341128: lea     eax, [r15+1]
 * 000000014034112C: or      [rcx+20h], eax
 * 000000014034112F: lea     rax, [rbp+20F0h+var_1E78]
 * 0000000140341136: mov     r9, [rbp+20F0h+var_2020]
 * 000000014034113D: lea     rcx, [rbp+20F0h+var_1FE8]
 * 0000000140341144: mov     [rsp+10F0h+var_10B8], rax
 * 0000000140341149: lea     rax, [rbp+20F0h+var_1F40]
 * 0000000140341150: mov     [rsp+10F0h+var_10C0], rax
 * 0000000140341155: lea     eax, [r15+0Eh]
 * 0000000140341159: mov     dword ptr [rsp+10F0h+var_10C8], eax
 * 000000014034115D: mov     eax, [rbp+20F0h+var_20C0]
 * 0000000140341160: mov     dword ptr [rsp+10F0h+BugCheckParameter4], eax
 * 0000000140341164: mov     [rbp+20F0h+var_1FF8], r14
 * 000000014034116B: call    sub_140347B4C
 * 0000000140341170: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140341177: test    eax, eax
 * 0000000140341179: jns     short loc_140341185
 * 000000014034117B: mov     ecx, eax
 * 000000014034117D: mov     [rbp+20F0h+var_2098], eax
 * 0000000140341180: jmp     loc_140342608
 * 0000000140341185: mov     rsi, [rbp+20F0h+var_1FE8]
 * 000000014034118C: mov     rcx, [rbp+20F0h+var_1F88]
 * 0000000140341193: mov     rax, rsi
 * 0000000140341196: mov     r9d, [rbp+20F0h+var_1E78]
 * 000000014034119D: sub     rax, r14
 * 00000001403411A0: sub     r9d, [rbp+20F0h+var_1F40]
 * 00000001403411A7: add     rcx, rax
 * 00000001403411AA: mov     ebx, [rbp+20F0h+var_1F40]
 * 00000001403411B0: add     rbx, [rbp+20F0h+var_2020]
 * 00000001403411B7: mov     [rbp+20F0h+var_1F88], rcx
 * 00000001403411BE: xor     r8d, r8d
 * 00000001403411C1: lea     r12, [rcx+0C0h]
 * 00000001403411C8: mov     [rbp+20F0h+var_1FF8], rsi
 * 00000001403411CF: mov     ecx, 30h ; '0'
 * 00000001403411D4: mov     [rbp+20F0h+var_2094], r9d
 * 00000001403411D8: mov     [rbp+20F0h+var_2070], r12
 * 00000001403411DF: mov     rax, r12
 * 00000001403411E2: lea     r13d, [rcx-2Ah]
 * 00000001403411E6: mov     edx, r13d
 * 00000001403411E9: mov     [rax], r8
 * 00000001403411EC: add     ecx, 0FFFFFFF8h
 * 00000001403411EF: add     rax, 8
 * 00000001403411F3: sub     rdx, r15
 * 00000001403411F6: jnz     short loc_1403411E9
 * 00000001403411F8: test    ecx, ecx
 * 00000001403411FA: jz      short loc_14034120C
 * 00000001403411FC: mov     r8d, 0FFFFFFFFh
 * 0000000140341202: mov     [rax], dl
 * 0000000140341204: add     rax, r15
 * 0000000140341207: add     ecx, r8d
 * 000000014034120A: jnz     short loc_140341202
 * 000000014034120C: mov     dword ptr [r12], 0Bh
 * 0000000140341214: mov     r10, rbx
 * 0000000140341217: mov     [r12+8], rbx
 * 000000014034121C: mov     rax, rbx
 * 000000014034121F: mov     [r12+10h], r9d
 * 0000000140341224: add     [rsi+810h], r9d
 * 000000014034122B: mov     r11d, [rsi+7FCh]
 * 0000000140341232: mov     r15, [rsi+800h]
 * 0000000140341239: mov     ecx, r9d
 * 000000014034123C: add     rcx, rbx
 * 000000014034123F: cmp     rbx, rcx
 * 0000000140341242: jnb     short loc_140341255
 * 0000000140341244: mov     r8d, 40h ; '@'
 * 000000014034124A: prefetchnta byte ptr [rax]
 * 000000014034124D: add     rax, r8
 * 0000000140341250: cmp     rax, rcx
 * 0000000140341253: jb      short loc_14034124A
 * 0000000140341255: mov     r14d, r9d
 * 0000000140341258: mov     r8, r15
 * 000000014034125B: shr     r14d, 7
 * 000000014034125F: test    r14d, r14d
 * 0000000140341262: jz      short loc_1403412DC
 * 0000000140341264: mov     edi, 1
 * 0000000140341269: mov     r12d, 0FFFFFFFFh
 * 000000014034126F: mov     r9, 7010008004002001h
 * 0000000140341279: mov     eax, 8
 * 000000014034127E: xor     r8, [r10]
 * 0000000140341281: mov     ecx, r11d
 * 0000000140341284: rol     r8, cl
 * 0000000140341287: xor     r8, [r10+8]
 * 000000014034128B: add     r10, 10h
 * 000000014034128F: rol     r8, cl
 * 0000000140341292: sub     rax, rdi
 * 0000000140341295: jnz     short loc_14034127E
 * 0000000140341297: mov     rcx, r10
 * 000000014034129A: sub     rcx, rbx
 * 000000014034129D: xor     rcx, r15
 * 00000001403412A0: mov     rax, rcx
 * 00000001403412A3: rol     rax, 11h
 * 00000001403412A7: xor     rcx, rax
 * 00000001403412AA: mov     rax, r9
 * 00000001403412AD: mul     rcx
 * 00000001403412B0: xor     r11d, eax
 * 00000001403412B3: mov     [rbp+20F0h+var_1988], rdx
 * 00000001403412BA: xor     r11d, edx
 * 00000001403412BD: and     r11d, 3Fh
 * 00000001403412C1: cmovz   r11d, edi
 * 00000001403412C5: add     r14d, r12d
 * 00000001403412C8: jnz     short loc_140341279
 * 00000001403412CA: mov     r9d, [rbp+20F0h+var_2094]
 * 00000001403412CE: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403412D5: mov     r12, [rbp+20F0h+var_2070]
 * 00000001403412DC: and     r9d, 7Fh
 * 00000001403412E0: mov     r15d, 1
 * 00000001403412E6: cmp     r9d, 8
 * 00000001403412EA: jb      short loc_140341309
 * 00000001403412EC: mov     eax, r9d
 * 00000001403412EF: shr     rax, 3
 * 00000001403412F3: xor     r8, [r10]
 * 00000001403412F6: mov     ecx, r11d
 * 00000001403412F9: rol     r8, cl
 * 00000001403412FC: add     r10, 8
 * 0000000140341300: add     r9d, 0FFFFFFF8h
 * 0000000140341304: sub     rax, r15
 * 0000000140341307: jnz     short loc_1403412F3
 * 0000000140341309: test    r9d, r9d
 * 000000014034130C: jz      short loc_14034132F
 * 000000014034130E: mov     edi, 0FFFFFFFFh
 * 0000000140341313: movzx   eax, byte ptr [r10]
 * 0000000140341317: mov     ecx, r11d
 * 000000014034131A: xor     r8, rax
 * 000000014034131D: add     r10, r15
 * 0000000140341320: rol     r8, cl
 * 0000000140341323: add     r9d, edi
 * 0000000140341326: jnz     short loc_140341313
 * 0000000140341328: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034132F: mov     rax, r8
 * 0000000140341332: shr     rax, 1Fh
 * 0000000140341336: xor     r11d, r11d
 * 0000000140341339: jmp     short loc_140341342
 * 000000014034133B: xor     r8d, eax
 * 000000014034133E: shr     rax, 1Fh
 * 0000000140341342: test    rax, rax
 * 0000000140341345: jnz     short loc_14034133B
 * 0000000140341347: btr     r8d, 1Fh
 * 000000014034134C: mov     [r12+14h], r8d
 * 0000000140341351: mov     rax, [rbp+20F0h+var_1F88]
 * 0000000140341358: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140341362: cmp     [rax+100h], r11d
 * 0000000140341369: jz      short loc_140341372
 * 000000014034136B: or      [rax+108h], r15d
 * 0000000140341372: mov     rax, [rbp+20F0h+var_1F88]
 * 0000000140341379: add     rax, 60h ; '`'
 * 000000014034137D: mov     [rbp+20F0h+var_1FF8], rsi
 * 0000000140341384: mov     [rbp+20F0h+var_1EF8], rax
 * 000000014034138B: jnz     loc_140341622
 * 0000000140341391: mov     r14d, [rsi+7CCh]
 * 0000000140341398: mov     r8d, [rsi+904h]
 * 000000014034139F: lea     eax, [r14+30h]
 * 00000001403413A3: cmp     eax, [rsi+9FCh]
 * 00000001403413A9: jbe     loc_14034149B
 * 00000001403413AF: mov     edx, eax
 * 00000001403413B1: mov     rcx, rsi
 * 00000001403413B4: call    sub_1403485B4
 * 00000001403413B9: xor     r11d, r11d
 * 00000001403413BC: mov     rbx, rax
 * 00000001403413BF: test    rax, rax
 * 00000001403413C2: jz      loc_140341485
 * 00000001403413C8: mov     ecx, [rsi+970h]
 * 00000001403413CE: test    cl, 4
 * 00000001403413D1: jnz     loc_14034147C
 * 00000001403413D7: mov     eax, [rsi+7CCh]
 * 00000001403413DD: and     ecx, 20000000h
 * 00000001403413E3: mov     r8, [rsi+7B0h]
 * 00000001403413EA: neg     ecx
 * 00000001403413EC: sbb     edx, edx
 * 00000001403413EE: and     edx, [rsi+904h]
 * 00000001403413F4: cmp     eax, 8
 * 00000001403413F7: jb      short loc_14034140E
 * 00000001403413F9: mov     ecx, eax
 * 00000001403413FB: shr     rcx, 3
 * 00000001403413FF: mov     [rsi], r11
 * 0000000140341402: add     eax, 0FFFFFFF8h
 * 0000000140341405: add     rsi, 8
 * 0000000140341409: sub     rcx, r15
 * 000000014034140C: jnz     short loc_1403413FF
 * 000000014034140E: test    eax, eax
 * 0000000140341410: jz      short loc_140341421
 * 0000000140341412: mov     ecx, 0FFFFFFFFh
 * 0000000140341417: mov     [rsi], r11b
 * 000000014034141A: add     rsi, r15
 * 000000014034141D: add     eax, ecx
 * 000000014034141F: jnz     short loc_140341417
 * 0000000140341421: mov     esi, [rbx+904h]
 * 0000000140341427: mov     [rbx+904h], edx
 * 000000014034142D: cmp     edx, 3
 * 0000000140341430: jz      short loc_140341464
 * 0000000140341432: test    dword ptr [rbx+970h], 10000000h
 * 000000014034143C: mov     ecx, r11d
 * 000000014034143F: cmovz   ecx, edx
 * 0000000140341442: test    ecx, ecx
 * 0000000140341444: jz      short loc_14034145B
 * 0000000140341446: mov     rax, [rbx+220h]
 * 000000014034144D: lea     rcx, [r8-8]
 * 0000000140341451: mov     rdx, [rcx]
 * 0000000140341454: call    KeGuardDispatchICall
 * 0000000140341459: jmp     short loc_140341473
 * 000000014034145B: mov     rax, [rbx+0F8h]
 * 0000000140341462: jmp     short loc_14034146B
 * 0000000140341464: mov     rax, [rbx+360h]
 * 000000014034146B: mov     rcx, r8
 * 000000014034146E: call    KeGuardDispatchICall
 * 0000000140341473: mov     [rbx+904h], esi
 * 0000000140341479: xor     r11d, r11d
 * 000000014034147C: and     dword ptr [rbx+970h], 0FFFFFFFBh
 * 0000000140341483: jmp     short loc_1403414A4
 * 0000000140341485: mov     [rbp+20F0h+var_1FE8], r11
 * 000000014034148C: mov     rbx, rsi
 * 000000014034148F: mov     [rbp+20F0h+var_2098], 0C000009Ah
 * 0000000140341496: jmp     loc_140340A04
 * 000000014034149B: mov     rbx, rsi
 * 000000014034149E: mov     [rsi+7CCh], eax
 * 00000001403414A4: add     [rbx+7F4h], r15d
 * 00000001403414AB: lea     rsi, [rbx+r14]
 * 00000001403414AF: mov     [rbp+20F0h+var_1CE0], rsi
 * 00000001403414B6: mov     rax, rsi
 * 00000001403414B9: mov     ecx, 30h ; '0'
 * 00000001403414BE: mov     rdx, r13
 * 00000001403414C1: mov     [rax], r11
 * 00000001403414C4: add     ecx, 0FFFFFFF8h
 * 00000001403414C7: add     rax, 8
 * 00000001403414CB: sub     rdx, r15
 * 00000001403414CE: jnz     short loc_1403414C1
 * 00000001403414D0: test    ecx, ecx
 * 00000001403414D2: jz      short loc_1403414E3
 * 00000001403414D4: mov     edx, 0FFFFFFFFh
 * 00000001403414D9: mov     [rax], r11b
 * 00000001403414DC: add     rax, r15
 * 00000001403414DF: add     ecx, edx
 * 00000001403414E1: jnz     short loc_1403414D9
 * 00000001403414E3: mov     r12, [rbp+20F0h+var_20A0]
 * 00000001403414E7: mov     r15d, [rbp+20F0h+var_20A8]
 * 00000001403414EB: mov     r9, r12
 * 00000001403414EE: mov     dword ptr [rsi], 0Eh
 * 00000001403414F4: mov     [rsi+8], r12
 * 00000001403414F8: mov     [rsi+10h], r15d
 * 00000001403414FC: add     [rbx+810h], r15d
 * 0000000140341503: lea     rcx, [r12+r15]
 * 0000000140341507: mov     r10d, [rbx+7FCh]
 * 000000014034150E: mov     r14, [rbx+800h]
 * 0000000140341515: cmp     r12, rcx
 * 0000000140341518: jnb     short loc_14034152D
 * 000000014034151A: mov     rax, r12
 * 000000014034151D: mov     edx, 40h ; '@'
 * 0000000140341522: prefetchnta byte ptr [rax]
 * 0000000140341525: add     rax, rdx
 * 0000000140341528: cmp     rax, rcx
 * 000000014034152B: jb      short loc_140341522
 * 000000014034152D: mov     r11d, r15d
 * 0000000140341530: mov     r8, r14
 * 0000000140341533: shr     r11d, 7
 * 0000000140341537: mov     r13d, 1
 * 000000014034153D: test    r11d, r11d
 * 0000000140341540: jz      short loc_1403415AB
 * 0000000140341542: mov     r15, 7010008004002001h
 * 000000014034154C: mov     edx, 8
 * 0000000140341551: mov     rax, [r9]
 * 0000000140341554: mov     ecx, r10d
 * 0000000140341557: xor     rax, r8
 * 000000014034155A: mov     r8, [r9+8]
 * 000000014034155E: rol     rax, cl
 * 0000000140341561: add     r9, 10h
 * 0000000140341565: xor     r8, rax
 * 0000000140341568: rol     r8, cl
 * 000000014034156B: sub     rdx, r13
 * 000000014034156E: jnz     short loc_140341551
 * 0000000140341570: mov     rcx, r9
 * 0000000140341573: sub     rcx, r12
 * 0000000140341576: xor     rcx, r14
 * 0000000140341579: mov     rax, rcx
 * 000000014034157C: rol     rax, 11h
 * 0000000140341580: xor     rcx, rax
 * 0000000140341583: mov     rax, r15
 * 0000000140341586: mul     rcx
 * 0000000140341589: xor     eax, edx
 * 000000014034158B: mov     [rbp+20F0h+var_1980], rdx
 * 0000000140341592: xor     r10d, eax
 * 0000000140341595: mov     eax, 0FFFFFFFFh
 * 000000014034159A: and     r10d, 3Fh
 * 000000014034159E: cmovz   r10d, r13d
 * 00000001403415A2: add     r11d, eax
 * 00000001403415A5: jnz     short loc_14034154C
 * 00000001403415A7: mov     r15d, [rbp+20F0h+var_20A8]
 * 00000001403415AB: mov     edx, r15d
 * 00000001403415AE: and     edx, 7Fh
 * 00000001403415B1: cmp     edx, 8
 * 00000001403415B4: jb      short loc_1403415D2
 * 00000001403415B6: mov     r11d, edx
 * 00000001403415B9: shr     r11, 3
 * 00000001403415BD: xor     r8, [r9]
 * 00000001403415C0: mov     ecx, r10d
 * 00000001403415C3: rol     r8, cl
 * 00000001403415C6: add     r9, 8
 * 00000001403415CA: add     edx, 0FFFFFFF8h
 * 00000001403415CD: sub     r11, r13
 * 00000001403415D0: jnz     short loc_1403415BD
 * 00000001403415D2: test    edx, edx
 * 00000001403415D4: jz      short loc_1403415F1
 * 00000001403415D6: mov     r11d, 0FFFFFFFFh
 * 00000001403415DC: movzx   eax, byte ptr [r9]
 * 00000001403415E0: mov     ecx, r10d
 * 00000001403415E3: xor     r8, rax
 * 00000001403415E6: add     r9, r13
 * 00000001403415E9: rol     r8, cl
 * 00000001403415EC: add     edx, r11d
 * 00000001403415EF: jnz     short loc_1403415DC
 * 00000001403415F1: mov     rax, r8
 * 00000001403415F4: jmp     short loc_1403415F9
 * 00000001403415F6: xor     r8d, eax
 * 00000001403415F9: shr     rax, 1Fh
 * 00000001403415FD: test    rax, rax
 * 0000000140341600: jnz     short loc_1403415F6
 * 0000000140341602: btr     r8d, 1Fh
 * 0000000140341607: mov     [rsi+14h], r8d
 * 000000014034160B: mov     rax, [rbp+20F0h+var_1CE0]
 * 0000000140341612: mov     [rbp+20F0h+var_1EF8], rax
 * 0000000140341619: add     [rbx+810h], r15d
 * 0000000140341620: jmp     short loc_140341633
 * 0000000140341622: mov     r15d, [rbp+20F0h+var_20A8]
 * 0000000140341626: mov     rbx, rsi
 * 0000000140341629: mov     r12, [rbp+20F0h+var_20A0]
 * 000000014034162D: mov     dword ptr [rax], 0Eh
 * 0000000140341633: test    dword ptr [rbx+970h], 40000000h
 * 000000014034163D: jz      short loc_14034165D
 * 000000014034163F: test    r15d, r15d
 * 0000000140341642: jz      short loc_14034165D
 * 0000000140341644: mov     r9, [rbp+20F0h+var_1EF8]
 * 000000014034164B: mov     r8d, r15d
 * 000000014034164E: add     r9, 1Ch
 * 0000000140341652: mov     rdx, r12
 * 0000000140341655: mov     rcx, rbx
 * 0000000140341658: call    sub_1401AD8FC
 * 000000014034165D: mov     rax, [rbp+20F0h+var_1EF8]
 * 0000000140341664: xor     r12d, r12d
 * 0000000140341667: mov     rsi, rbx
 * 000000014034166A: mov     [rbp+20F0h+var_1FF8], rbx
 * 0000000140341671: mov     [rax+18h], r12d
 * 0000000140341675: lea     ecx, [r12+1]
 * 000000014034167A: mov     rax, [rbp+20F0h+var_1EF8]
 * 0000000140341681: or      [rax+18h], ecx
 * 0000000140341684: mov     r14, [rbp+20F0h+var_1F88]
 * 000000014034168B: mov     r15, [rbp+20F0h+var_2020]
 * 0000000140341692: mov     dword ptr [r14+90h], 23h ; '#'
 * 000000014034169D: or      [r14+0B8h], ecx
 * 00000001403416A4: cmp     dword ptr [r14+0A0h], 94h
 * 00000001403416AF: jb      loc_140341735
 * 00000001403416B5: mov     rax, [rbx+1F0h]
 * 00000001403416BC: mov     rcx, r15
 * 00000001403416BF: mov     r13, [r14+98h]
 * 00000001403416C6: call    KeGuardDispatchICall
 * 00000001403416CB: test    rax, rax
 * 00000001403416CE: jnz     short loc_1403416E3
 * 00000001403416D0: mov     [rbp+20F0h+var_1FE8], r12
 * 00000001403416D7: mov     [rbp+20F0h+var_2098], 0C000009Ah
 * 00000001403416DE: jmp     loc_140340A04
 * 00000001403416E3: mov     ecx, [rax+50h]
 * 00000001403416E6: mov     eax, 2
 * 00000001403416EB: or      [r14+0B8h], eax
 * 00000001403416F2: add     rcx, r15
 * 00000001403416F5: mov     rax, [r13+70h]
 * 00000001403416F9: cmp     rax, r15
 * 00000001403416FC: jb      short loc_140341715
 * 00000001403416FE: cmp     rax, rcx
 * 0000000140341701: jnb     short loc_140341715
 * 0000000140341703: mov     rax, [rax]
 * 0000000140341706: mov     [r14+0A8h], rax
 * 000000014034170D: or      dword ptr [r14+0B8h], 4
 * 0000000140341715: mov     rax, [r13+78h]
 * 0000000140341719: cmp     rax, r15
 * 000000014034171C: jb      short loc_140341735
 * 000000014034171E: cmp     rax, rcx
 * 0000000140341721: jnb     short loc_140341735
 * 0000000140341723: mov     rax, [rax]
 * 0000000140341726: mov     [r14+0B0h], rax
 * 000000014034172D: or      dword ptr [r14+0B8h], 8
 * 0000000140341735: test    dword ptr [rbx+970h], 400000h
 * 000000014034173F: mov     r15, [rbp+20F0h+var_2020]
 * 0000000140341746: mov     [rbp+20F0h+var_20E0], r15
 * 000000014034174A: mov     [rbp+20F0h+var_1FE8], rbx
 * 0000000140341751: mov     [rbp+20F0h+var_1FF8], rbx
 * 0000000140341758: jz      loc_1403425F8
 * 000000014034175E: mov     rax, [rbx+1F0h]
 * 0000000140341765: mov     rcx, r15
 * 0000000140341768: call    KeGuardDispatchICall
 * 000000014034176D: mov     [rbp+20F0h+var_2070], rax
 * 0000000140341774: mov     r13, rax
 * 0000000140341777: test    rax, rax
 * 000000014034177A: jnz     short loc_140341786
 * 000000014034177C: mov     ecx, 0C000007Bh
 * 0000000140341781: jmp     loc_140342605
 * 0000000140341786: movzx   r10d, word ptr [r13+6]
 * 000000014034178B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140341795: mov     ecx, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140341798: mul     rcx
 * 000000014034179B: mov     [rbp+20F0h+var_2044], r10w
 * 00000001403417A3: mov     r9, rdx
 * 00000001403417A6: shr     r9, 3
 * 00000001403417AA: mov     [rbp+20F0h+var_2088], r9
 * 00000001403417AE: test    r10w, r10w
 * 00000001403417B2: jnz     short loc_14034180A
 * 00000001403417B4: test    dword ptr [rbx+970h], 200000h
 * 00000001403417BE: jz      loc_1403456CB
 * 00000001403417C4: cmp     [rbx+8D8h], r12d
 * 00000001403417CB: jnz     short loc_14034177C
 * 00000001403417CD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403417D7: add     rax, rbx
 * 00000001403417DA: mov     [rbx+8E0h], rax
 * 00000001403417E1: mov     eax, 1
 * 00000001403417E6: mov     [rbx+8E8h], r12
 * 00000001403417ED: mov     qword ptr [rbx+8F0h], 10Fh
 * 00000001403417F8: mov     [rbx+8F8h], r15
 * 00000001403417FF: mov     [rbx+8D8h], eax
 * 0000000140341805: jmp     loc_14034177C
 * 000000014034180A: mov     r14, [rbp+20F0h+var_20B0]
 * 000000014034180E: lea     r8, [r13+18h]
 * 0000000140341812: mov     eax, r9d
 * 0000000140341815: mov     ecx, r12d
 * 0000000140341818: mov     [rbp+20F0h+var_20E8], ecx
 * 000000014034181B: lea     rax, [rax+rax*2]
 * 000000014034181F: shl     rax, 2
 * 0000000140341823: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140341827: add     rax, r14
 * 000000014034182A: mov     [rbp+20F0h+var_2058], rax
 * 0000000140341831: movzx   eax, word ptr [r13+14h]
 * 0000000140341836: mov     r11, [rbp+20F0h+var_2058]
 * 000000014034183D: add     r8, rax
 * 0000000140341840: movzx   eax, r10w
 * 0000000140341844: mov     [rbp+20F0h+var_20D8], r8
 * 0000000140341848: test    eax, eax
 * 000000014034184A: jz      loc_140341A86
 * 0000000140341850: lea     r13, [r8+8]
 * 0000000140341854: xor     r9d, r9d
 * 0000000140341857: mov     r12d, [r13+8]
 * 000000014034185B: mov     eax, [r13+0]
 * 000000014034185F: cmp     r12d, eax
 * 0000000140341862: mov     edx, [r13+4]
 * 0000000140341866: cmovbe  r12d, eax
 * 000000014034186A: mov     [rbp+20F0h+var_20A8], edx
 * 000000014034186D: add     r12d, edx
 * 0000000140341870: test    ecx, ecx
 * 0000000140341872: jz      short loc_140341889
 * 0000000140341874: lea     eax, [rcx-1]
 * 0000000140341877: lea     rax, [rax+rax*4]
 * 000000014034187B: cmp     r12d, [r8+rax*8+0Ch]
 * 0000000140341880: jb      loc_140341A5C
 * 0000000140341886: mov     ecx, [rbp+20F0h+var_20E8]
 * 0000000140341889: cmp     r14, r11
 * 000000014034188C: jz      loc_140341A32
 * 0000000140341892: mov     ecx, [r14]
 * 0000000140341895: mov     eax, [r14+4]
 * 0000000140341899: cmp     ecx, r12d
 * 000000014034189C: jnb     loc_140341A1C
 * 00000001403418A2: cmp     eax, edx
 * 00000001403418A4: jbe     loc_140341A1C
 * 00000001403418AA: cmp     ecx, edx
 * 00000001403418AC: jb      loc_140341A74
 * 00000001403418B2: cmp     eax, r12d
 * 00000001403418B5: ja      loc_140341A74
 * 00000001403418BB: mov     eax, [r14+8]
 * 00000001403418BF: mov     ecx, 1
 * 00000001403418C4: test    cl, al
 * 00000001403418C6: jnz     short loc_1403418D4
 * 00000001403418C8: mov     al, [rax+r15]
 * 00000001403418CC: test    al, 20h
 * 00000001403418CE: jz      loc_140341A0B
 * 00000001403418D4: mov     eax, [r13+0]
 * 00000001403418D8: mov     ecx, [r13+4]
 * 00000001403418DC: mov     r15d, [r13+8]
 * 00000001403418E0: cmp     r15d, eax
 * 00000001403418E3: mov     rdx, [rbp+20F0h+var_20E0]
 * 00000001403418E7: cmovbe  r15d, eax
 * 00000001403418EB: mov     [rbp+20F0h+var_20C0], ecx
 * 00000001403418EE: mov     rax, [rbx+410h]
 * 00000001403418F5: add     r15d, ecx
 * 00000001403418F8: mov     rcx, r14
 * 00000001403418FB: call    KeGuardDispatchICall
 * 0000000140341900: mov     rcx, rax
 * 0000000140341903: mov     eax, [rbp+20F0h+var_20C0]
 * 0000000140341906: cmp     [rcx], eax
 * 0000000140341908: jb      short loc_140341910
 * 000000014034190A: cmp     [rcx+4], r15d
 * 000000014034190E: jbe     short loc_140341972
 * 0000000140341910: mov     r10, [rbp+20F0h+var_20E0]
 * 0000000140341914: mov     edx, ecx
 * 0000000140341916: sub     edx, r10d
 * 0000000140341919: mov     eax, 80000000h
 * 000000014034191E: or      edx, eax
 * 0000000140341920: test    dword ptr [rbx+970h], 200000h
 * 000000014034192A: jz      loc_140345747
 * 0000000140341930: xor     edx, edx
 * 0000000140341932: cmp     [rbx+8D8h], edx
 * 0000000140341938: jnz     short loc_140341976
 * 000000014034193A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140341944: add     rax, rbx
 * 0000000140341947: mov     [rbx+8E0h], rax
 * 000000014034194E: lea     eax, [rdx+1]
 * 0000000140341951: mov     [rbx+8E8h], rdx
 * 0000000140341958: mov     qword ptr [rbx+8F0h], 10Fh
 * 0000000140341963: mov     [rbx+8F8h], r10
 * 000000014034196A: mov     [rbx+8D8h], eax
 * 0000000140341970: jmp     short loc_140341976
 * 0000000140341972: mov     r10, [rbp+20F0h+var_20E0]
 * 0000000140341976: mov     r8d, [rcx]
 * 0000000140341979: mov     rdx, r10
 * 000000014034197C: mov     rax, [rbx+418h]
 * 0000000140341983: add     r8, r10
 * 0000000140341986: call    KeGuardDispatchICall
 * 000000014034198B: mov     rdx, rax
 * 000000014034198E: mov     eax, [rbp+20F0h+var_20C0]
 * 0000000140341991: cmp     [rdx], eax
 * 0000000140341993: jb      short loc_14034199B
 * 0000000140341995: cmp     [rdx+4], r15d
 * 0000000140341999: jbe     short loc_140341A01
 * 000000014034199B: mov     r15, [rbp+20F0h+var_20E0]
 * 000000014034199F: mov     eax, 80000000h
 * 00000001403419A4: sub     edx, r15d
 * 00000001403419A7: or      edx, eax
 * 00000001403419A9: test    dword ptr [rbx+970h], 200000h
 * 00000001403419B3: jz      loc_14034571E
 * 00000001403419B9: mov     edx, [rbp+20F0h+var_20A8]
 * 00000001403419BC: xor     r9d, r9d
 * 00000001403419BF: cmp     [rbx+8D8h], r9d
 * 00000001403419C6: jnz     short loc_140341A0B
 * 00000001403419C8: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403419D2: add     rax, rbx
 * 00000001403419D5: mov     [rbx+8E0h], rax
 * 00000001403419DC: lea     eax, [r9+1]
 * 00000001403419E0: mov     [rbx+8E8h], r9
 * 00000001403419E7: mov     qword ptr [rbx+8F0h], 10Fh
 * 00000001403419F2: mov     [rbx+8F8h], r15
 * 00000001403419F9: mov     [rbx+8D8h], eax
 * 00000001403419FF: jmp     short loc_140341A0B
 * 0000000140341A01: mov     edx, [rbp+20F0h+var_20A8]
 * 0000000140341A04: xor     r9d, r9d
 * 0000000140341A07: mov     r15, [rbp+20F0h+var_20E0]
 * 0000000140341A0B: add     r14, 0Ch
 * 0000000140341A0F: cmp     r14, [rbp+20F0h+var_2058]
 * 0000000140341A16: jnz     loc_140341892
 * 0000000140341A1C: mov     ecx, [rbp+20F0h+var_20E8]
 * 0000000140341A1F: movzx   r10d, [rbp+20F0h+var_2044]
 * 0000000140341A27: mov     r8, [rbp+20F0h+var_20D8]
 * 0000000140341A2B: mov     r11, [rbp+20F0h+var_2058]
 * 0000000140341A32: mov     edx, 1
 * 0000000140341A37: movzx   eax, r10w
 * 0000000140341A3B: add     ecx, edx
 * 0000000140341A3D: add     r13, 28h ; '('
 * 0000000140341A41: mov     [rbp+20F0h+var_20E8], ecx
 * 0000000140341A44: cmp     ecx, eax
 * 0000000140341A46: jb      loc_140341857
 * 0000000140341A4C: mov     r9, [rbp+20F0h+var_2088]
 * 0000000140341A50: xor     r12d, r12d
 * 0000000140341A53: mov     r13, [rbp+20F0h+var_2070]
 * 0000000140341A5A: jmp     short loc_140341A8B
 * 0000000140341A5C: test    dword ptr [rbx+970h], 200000h
 * 0000000140341A66: jz      loc_1403456F3
 * 0000000140341A6C: xor     r12d, r12d
 * 0000000140341A6F: jmp     loc_1403417C4
 * 0000000140341A74: test    dword ptr [rbx+970h], 200000h
 * 0000000140341A7E: jz      loc_140345770
 * 0000000140341A84: jmp     short loc_140341A6C
 * 0000000140341A86: mov     edx, 1
 * 0000000140341A8B: cmp     r14, r11
 * 0000000140341A8E: jz      short loc_140341AE5
 * 0000000140341A90: test    dword ptr [rbx+970h], 200000h
 * 0000000140341A9A: jz      loc_14034579B
 * 0000000140341AA0: cmp     [rbx+8D8h], r12d
 * 0000000140341AA7: jnz     loc_14034177C
 * 0000000140341AAD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140341AB7: add     rax, rbx
 * 0000000140341ABA: mov     [rbx+8E0h], rax
 * 0000000140341AC1: mov     [rbx+8E8h], r12
 * 0000000140341AC8: mov     qword ptr [rbx+8F0h], 10Fh
 * 0000000140341AD3: mov     [rbx+8F8h], r15
 * 0000000140341ADA: mov     [rbx+8D8h], edx
 * 0000000140341AE0: jmp     loc_14034177C
 * 0000000140341AE5: mov     r12d, [rbx+7CCh]
 * 0000000140341AEC: lea     eax, [rax+rax*2]
 * 0000000140341AEF: mov     r8d, [rbx+904h]
 * 0000000140341AF6: lea     eax, [rax+6]
 * 0000000140341AF9: lea     ecx, [r9+6]
 * 0000000140341AFD: and     ecx, 0FFFFFFF8h
 * 0000000140341B00: lea     eax, [rcx+rax*8]
 * 0000000140341B03: add     eax, r12d
 * 0000000140341B06: cmp     eax, [rbx+9FCh]
 * 0000000140341B0C: jbe     loc_140341C0B
 * 0000000140341B12: mov     edx, eax
 * 0000000140341B14: mov     rcx, rbx
 * 0000000140341B17: call    sub_1403485B4
 * 0000000140341B1C: xor     r9d, r9d
 * 0000000140341B1F: mov     [rbp+20F0h+var_2080], rax
 * 0000000140341B23: mov     r14, rax
 * 0000000140341B26: test    rax, rax
 * 0000000140341B29: jz      loc_140341BFE
 * 0000000140341B2F: mov     ecx, [rbx+970h]
 * 0000000140341B35: test    cl, 4
 * 0000000140341B38: jnz     loc_140341BE8
 * 0000000140341B3E: mov     eax, [rbx+7CCh]
 * 0000000140341B44: lea     r10d, [r9+1]
 * 0000000140341B48: mov     r8, [rbx+7B0h]
 * 0000000140341B4F: and     ecx, 20000000h
 * 0000000140341B55: neg     ecx
 * 0000000140341B57: sbb     edx, edx
 * 0000000140341B59: and     edx, [rbx+904h]
 * 0000000140341B5F: cmp     eax, 8
 * 0000000140341B62: jb      short loc_140341B79
 * 0000000140341B64: mov     ecx, eax
 * 0000000140341B66: shr     rcx, 3
 * 0000000140341B6A: mov     [rbx], r9
 * 0000000140341B6D: add     eax, 0FFFFFFF8h
 * 0000000140341B70: add     rbx, 8
 * 0000000140341B74: sub     rcx, r10
 * 0000000140341B77: jnz     short loc_140341B6A
 * 0000000140341B79: test    eax, eax
 * 0000000140341B7B: jz      short loc_140341B8C
 * 0000000140341B7D: mov     ecx, 0FFFFFFFFh
 * 0000000140341B82: mov     [rbx], r9b
 * 0000000140341B85: add     rbx, r10
 * 0000000140341B88: add     eax, ecx
 * 0000000140341B8A: jnz     short loc_140341B82
 * 0000000140341B8C: mov     ebx, [r14+904h]
 * 0000000140341B93: mov     [r14+904h], edx
 * 0000000140341B9A: cmp     edx, 3
 * 0000000140341B9D: jz      short loc_140341BD2
 * 0000000140341B9F: test    dword ptr [r14+970h], 10000000h
 * 0000000140341BAA: mov     ecx, r9d
 * 0000000140341BAD: cmovz   ecx, edx
 * 0000000140341BB0: test    ecx, ecx
 * 0000000140341BB2: jz      short loc_140341BC9
 * 0000000140341BB4: mov     rax, [r14+220h]
 * 0000000140341BBB: lea     rcx, [r8-8]
 * 0000000140341BBF: mov     rdx, [rcx]
 * 0000000140341BC2: call    KeGuardDispatchICall
 * 0000000140341BC7: jmp     short loc_140341BE1
 * 0000000140341BC9: mov     rax, [r14+0F8h]
 * 0000000140341BD0: jmp     short loc_140341BD9
 * 0000000140341BD2: mov     rax, [r14+360h]
 * 0000000140341BD9: mov     rcx, r8
 * 0000000140341BDC: call    KeGuardDispatchICall
 * 0000000140341BE1: mov     [r14+904h], ebx
 * 0000000140341BE8: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140341BF0: mov     r9, [rbp+20F0h+var_2088]
 * 0000000140341BF4: movzx   r10d, [rbp+20F0h+var_2044]
 * 0000000140341BFC: jmp     short loc_140341C18
 * 0000000140341BFE: mov     ecx, 0C000009Ah
 * 0000000140341C03: xor     r12d, r12d
 * 0000000140341C06: jmp     loc_140342605
 * 0000000140341C0B: mov     r14, rbx
 * 0000000140341C0E: mov     [rbp+20F0h+var_2080], rbx
 * 0000000140341C12: mov     [rbx+7CCh], eax
 * 0000000140341C18: mov     r11d, 1
 * 0000000140341C1E: lea     rcx, [r14+r12]
 * 0000000140341C22: add     [r14+7F4h], r11d
 * 0000000140341C29: mov     rax, rcx
 * 0000000140341C2C: mov     [rbp+20F0h+var_1CD8], rcx
 * 0000000140341C33: xor     r12d, r12d
 * 0000000140341C36: lea     edx, [r11+2Fh]
 * 0000000140341C3A: lea     r8d, [r11+5]
 * 0000000140341C3E: mov     [rax], r12
 * 0000000140341C41: add     edx, 0FFFFFFF8h
 * 0000000140341C44: add     rax, 8
 * 0000000140341C48: sub     r8, r11
 * 0000000140341C4B: jnz     short loc_140341C3E
 * 0000000140341C4D: test    edx, edx
 * 0000000140341C4F: jz      short loc_140341C62
 * 0000000140341C51: mov     r8d, 0FFFFFFFFh
 * 0000000140341C57: mov     [rax], r12b
 * 0000000140341C5A: add     rax, r11
 * 0000000140341C5D: add     edx, r8d
 * 0000000140341C60: jnz     short loc_140341C57
 * 0000000140341C62: mov     rsi, [rbp+20F0h+var_20B0]
 * 0000000140341C66: mov     dword ptr [rcx], 1Eh
 * 0000000140341C6C: mov     [rcx+8], rsi
 * 0000000140341C70: mov     [rcx+10h], r12d
 * 0000000140341C74: mov     rdx, [r14+800h]
 * 0000000140341C7B: mov     rax, rdx
 * 0000000140341C7E: jmp     short loc_140341C82
 * 0000000140341C80: xor     edx, eax
 * 0000000140341C82: shr     rax, 1Fh
 * 0000000140341C86: test    rax, rax
 * 0000000140341C89: jnz     short loc_140341C80
 * 0000000140341C8B: btr     edx, 1Fh
 * 0000000140341C8F: mov     rbx, r14
 * 0000000140341C92: mov     [rcx+14h], edx
 * 0000000140341C95: mov     rax, [rbp+20F0h+var_1CD8]
 * 0000000140341C9C: mov     [rbp+20F0h+var_1F58], rax
 * 0000000140341CA3: mov     [rbp+20F0h+var_1FE8], rbx
 * 0000000140341CAA: mov     [rax+18h], r15
 * 0000000140341CAE: mov     ecx, [r13+50h]
 * 0000000140341CB2: mov     rax, [rbp+20F0h+var_1F58]
 * 0000000140341CB9: mov     [rax+20h], ecx
 * 0000000140341CBC: mov     rax, [rbp+20F0h+var_1F58]
 * 0000000140341CC3: mov     ecx, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140341CC6: mov     [rax+24h], ecx
 * 0000000140341CC9: mov     rax, [rbp+20F0h+var_1F58]
 * 0000000140341CD0: mov     [rax+28h], r10w
 * 0000000140341CD5: mov     rax, [rbp+20F0h+var_1F58]
 * 0000000140341CDC: or      [rax+2Ah], r11w
 * 0000000140341CE1: lea     r11d, [r9-1]
 * 0000000140341CE5: mov     rcx, [rbp+20F0h+var_1F58]
 * 0000000140341CEC: add     r11, 7
 * 0000000140341CF0: and     r11, 0FFFFFFFFFFFFFFF8h
 * 0000000140341CF4: movzx   eax, word ptr [rcx+28h]
 * 0000000140341CF8: lea     rdx, [rcx+30h]
 * 0000000140341CFC: add     r11, rdx
 * 0000000140341CFF: mov     [rbp+20F0h+var_20A0], rdx
 * 0000000140341D03: test    r9d, r9d
 * 0000000140341D06: mov     [rbp+20F0h+var_2068], r11
 * 0000000140341D0D: mov     r9d, 1
 * 0000000140341D13: lea     rcx, [rax+rax*2]
 * 0000000140341D17: lea     r8, [r11+rcx*8]
 * 0000000140341D1B: mov     ecx, 0Ch
 * 0000000140341D20: cmovz   rcx, [rbp+20F0h+var_20C8]
 * 0000000140341D25: add     rcx, rsi
 * 0000000140341D28: mov     [rbp+20F0h+var_2030], r8
 * 0000000140341D2F: mov     [rbp+20F0h+var_20F0], rcx
 * 0000000140341D33: cmp     r12w, r10w
 * 0000000140341D37: jnb     short loc_140341D6E
 * 0000000140341D39: movzx   edx, r10w
 * 0000000140341D3D: lea     rax, [r11+8]
 * 0000000140341D41: lea     r10d, [r9+0Bh]
 * 0000000140341D45: mov     r13d, 80000000h
 * 0000000140341D4B: lea     r15d, [r9+1]
 * 0000000140341D4F: mov     rcx, r15
 * 0000000140341D52: mov     [rax-8], r12d
 * 0000000140341D56: mov     [rax-4], r12d
 * 0000000140341D5A: mov     [rax], r13d
 * 0000000140341D5D: add     rax, r10
 * 0000000140341D60: sub     rcx, r9
 * 0000000140341D63: jnz     short loc_140341D52
 * 0000000140341D65: sub     rdx, r9
 * 0000000140341D68: jnz     short loc_140341D4F
 * 0000000140341D6A: mov     r15, [rbp+20F0h+var_20E0]
 * 0000000140341D6E: cmp     r11, r8
 * 0000000140341D71: jz      loc_1403425F8
 * 0000000140341D77: mov     r13, [rbp+20F0h+var_20D8]
 * 0000000140341D7B: mov     eax, [r13+24h]
 * 0000000140341D7F: bt      eax, 19h
 * 0000000140341D83: jb      loc_140341EE2
 * 0000000140341D89: mov     ecx, [r13+0]
 * 0000000140341D8D: cmp     ecx, 54494E49h
 * 0000000140341D93: jnz     short loc_140341DA3
 * 0000000140341D95: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140341D9D: jz      loc_140341EE2
 * 0000000140341DA3: cmp     ecx, 45474150h
 * 0000000140341DA9: jnz     short loc_140341DDA
 * 0000000140341DAB: movzx   eax, word ptr [r13+4]
 * 0000000140341DB0: mov     edx, 7877h
 * 0000000140341DB5: cmp     ax, dx
 * 0000000140341DB8: jz      loc_140341EE2
 * 0000000140341DBE: mov     edx, 7277h
 * 0000000140341DC3: cmp     ax, dx
 * 0000000140341DC6: jz      loc_140341EE2
 * 0000000140341DCC: mov     edx, 7777h
 * 0000000140341DD1: cmp     ax, dx
 * 0000000140341DD4: jz      loc_140341EE2
 * 0000000140341DDA: cmp     ecx, 41525245h
 * 0000000140341DE0: jnz     short loc_140341DF2
 * 0000000140341DE2: mov     eax, 4154h
 * 0000000140341DE7: cmp     [r13+4], ax
 * 0000000140341DEC: jz      loc_140341EE2
 * 0000000140341DF2: mov     r8, [r14+910h]
 * 0000000140341DF9: mov     r9, r13
 * 0000000140341DFC: mov     r10, [r14+918h]
 * 0000000140341E03: sub     r9, r8
 * 0000000140341E06: mov     r11, [r14+920h]
 * 0000000140341E0D: mov     esi, 7
 * 0000000140341E12: mov     rbx, [r14+928h]
 * 0000000140341E19: movzx   edx, byte ptr [r8+r9]
 * 0000000140341E1E: movzx   eax, byte ptr [r8]
 * 0000000140341E22: inc     r8
 * 0000000140341E25: cmp     rdx, rax
 * 0000000140341E28: jnz     short loc_140341E38
 * 0000000140341E2A: mov     eax, 0FFFFFFFFh
 * 0000000140341E2F: add     esi, eax
 * 0000000140341E31: jnz     short loc_140341E19
 * 0000000140341E33: jmp     loc_140341ED7
 * 0000000140341E38: mov     r8d, 8
 * 0000000140341E3E: mov     r9, r13
 * 0000000140341E41: mov     rcx, [r9]
 * 0000000140341E44: add     r9, 8
 * 0000000140341E48: mov     rax, [r10]
 * 0000000140341E4B: add     r10, 8
 * 0000000140341E4F: cmp     rcx, rax
 * 0000000140341E52: jnz     short loc_140341E87
 * 0000000140341E54: add     r8d, 0FFFFFFF8h
 * 0000000140341E58: cmp     r8d, 8
 * 0000000140341E5C: jnb     short loc_140341E41
 * 0000000140341E5E: test    r8d, r8d
 * 0000000140341E61: jz      short loc_140341ED7
 * 0000000140341E63: mov     esi, 1
 * 0000000140341E68: movzx   edx, byte ptr [r9]
 * 0000000140341E6C: add     r9, rsi
 * 0000000140341E6F: movzx   eax, byte ptr [r10]
 * 0000000140341E73: add     r10, rsi
 * 0000000140341E76: cmp     rdx, rax
 * 0000000140341E79: jnz     short loc_140341E8C
 * 0000000140341E7B: mov     eax, 0FFFFFFFFh
 * 0000000140341E80: add     r8d, eax
 * 0000000140341E83: jnz     short loc_140341E68
 * 0000000140341E85: jmp     short loc_140341ED7
 * 0000000140341E87: mov     esi, 1
 * 0000000140341E8C: mov     r8, r13
 * 0000000140341E8F: mov     r9d, 4
 * 0000000140341E95: sub     r8, r11
 * 0000000140341E98: mov     r10d, 0FFFFFFFFh
 * 0000000140341E9E: movzx   edx, byte ptr [r11+r8]
 * 0000000140341EA3: movzx   eax, byte ptr [r11]
 * 0000000140341EA7: add     r11, rsi
 * 0000000140341EAA: cmp     rdx, rax
 * 0000000140341EAD: jnz     short loc_140341EB6
 * 0000000140341EAF: add     r9d, r10d
 * 0000000140341EB2: jnz     short loc_140341E9E
 * 0000000140341EB4: jmp     short loc_140341ED7
 * 0000000140341EB6: mov     r8, r13
 * 0000000140341EB9: mov     r9d, 6
 * 0000000140341EBF: sub     r8, rbx
 * 0000000140341EC2: movzx   edx, byte ptr [rbx+r8]
 * 0000000140341EC7: movzx   eax, byte ptr [rbx]
 * 0000000140341ECA: add     rbx, rsi
 * 0000000140341ECD: cmp     rdx, rax
 * 0000000140341ED0: jnz     short loc_140341EE7
 * 0000000140341ED2: add     r9d, r10d
 * 0000000140341ED5: jnz     short loc_140341EC2
 * 0000000140341ED7: mov     r9d, 1
 * 0000000140341EDD: mov     r12d, r9d
 * 0000000140341EE0: jmp     short loc_140341EED
 * 0000000140341EE2: mov     r12d, r9d
 * 0000000140341EE5: jmp     short loc_140341EF8
 * 0000000140341EE7: mov     r9d, 1
 * 0000000140341EED: mov     rsi, [rbp+20F0h+var_20B0]
 * 0000000140341EF1: mov     r11, [rbp+20F0h+var_2068]
 * 0000000140341EF8: mov     ecx, [r13+24h]
 * 0000000140341EFC: xor     r10d, r10d
 * 0000000140341EFF: test    ecx, ecx
 * 0000000140341F01: cmovs   r12d, r9d
 * 0000000140341F05: mov     [rbp+20F0h+var_2098], r12d
 * 0000000140341F09: test    r12d, r12d
 * 0000000140341F0C: jz      short loc_140341F35
 * 0000000140341F0E: cmp     dword ptr [r13+0], 54494E49h
 * 0000000140341F16: jnz     short loc_140341F35
 * 0000000140341F18: cmp     dword ptr [r13+4], 4742444Bh
 * 0000000140341F20: jnz     short loc_140341F35
 * 0000000140341F22: test    dword ptr [r14+974h], 2000h
 * 0000000140341F2D: cmovnz  r12d, r10d
 * 0000000140341F31: mov     [rbp+20F0h+var_2098], r12d
 * 0000000140341F35: test    dword ptr [r14+974h], 4000h
 * 0000000140341F40: jz      short loc_140341F61
 * 0000000140341F42: bt      ecx, 1Dh
 * 0000000140341F46: jnb     short loc_140341F61
 * 0000000140341F48: cmp     r15, [r14+5D8h]
 * 0000000140341F4F: jz      short loc_140341F5A
 * 0000000140341F51: cmp     r15, [r14+5E0h]
 * 0000000140341F58: jnz     short loc_140341F61
 * 0000000140341F5A: mov     r12d, r9d
 * 0000000140341F5D: mov     [rbp+20F0h+var_2098], r9d
 * 0000000140341F61: mov     ecx, [r13+10h]
 * 0000000140341F65: mov     eax, [r13+8]
 * 0000000140341F69: cmp     ecx, eax
 * 0000000140341F6B: mov     edx, [r13+0Ch]
 * 0000000140341F6F: mov     r8, [rbp+20F0h+var_2058]
 * 0000000140341F76: cmovbe  ecx, eax
 * 0000000140341F79: add     ecx, edx
 * 0000000140341F7B: mov     dword ptr [rbp+20F0h+var_20B8], edx
 * 0000000140341F7E: mov     [rbp+20F0h+var_20E8], ecx
 * 0000000140341F81: cmp     rsi, r8
 * 0000000140341F84: jz      short loc_140341F8F
 * 0000000140341F86: mov     r15d, [rsi]
 * 0000000140341F89: mov     r13d, [rsi+4]
 * 0000000140341F8D: jmp     short loc_140341F95
 * 0000000140341F8F: mov     r15d, r10d
 * 0000000140341F92: mov     r13d, r10d
 * 0000000140341F95: mov     [rbp+20F0h+var_20C0], r13d
 * 0000000140341F99: mov     [rbp+20F0h+var_20A8], edx
 * 0000000140341F9C: cmp     rsi, r8
 * 0000000140341F9F: jz      loc_14034214C
 * 0000000140341FA5: cmp     r15d, edx
 * 0000000140341FA8: jbe     loc_14034214C
 * 0000000140341FAE: cmp     r13d, ecx
 * 0000000140341FB1: ja      loc_14034214C
 * 0000000140341FB7: test    r12d, r12d
 * 0000000140341FBA: jnz     loc_14034214C
 * 0000000140341FC0: mov     [r11], edx
 * 0000000140341FC3: lea     rcx, [rbp+20F0h+var_1DF0]
 * 0000000140341FCA: mov     [r11+4], r15d
 * 0000000140341FCE: lea     rdx, [rbp+20F0h+var_1C10]
 * 0000000140341FD5: mov     eax, [r11]
 * 0000000140341FD8: mov     r9d, r15d
 * 0000000140341FDB: mov     r11, [rbp+20F0h+var_20E0]
 * 0000000140341FDF: sub     r9d, eax
 * 0000000140341FE2: mov     esi, r9d
 * 0000000140341FE5: mov     r8d, r10d
 * 0000000140341FE8: mov     [rbp+20F0h+var_20A8], r15d
 * 0000000140341FEC: lea     rbx, [r11+rax]
 * 0000000140341FF0: add     rsi, rbx
 * 0000000140341FF3: mov     r10, [rdx]
 * 0000000140341FF6: mov     eax, [rcx]
 * 0000000140341FF8: add     rax, r10
 * 0000000140341FFB: cmp     rbx, rax
 * 0000000140341FFE: jnb     short loc_140342009
 * 0000000140342000: cmp     rsi, r10
 * 0000000140342003: ja      loc_140342152
 * 0000000140342009: inc     r8d
 * 000000014034200C: add     rdx, 8
 * 0000000140342010: add     rcx, 4
 * 0000000140342014: cmp     r8d, 6
 * 0000000140342018: jb      short loc_140341FF3
 * 000000014034201A: add     [r14+810h], r9d
 * 0000000140342021: mov     r10, rbx
 * 0000000140342024: mov     r11d, [r14+7FCh]
 * 000000014034202B: mov     rax, rbx
 * 000000014034202E: mov     r12, [r14+800h]
 * 0000000140342035: cmp     rbx, rsi
 * 0000000140342038: jnb     short loc_14034204A
 * 000000014034203A: mov     ecx, 40h ; '@'
 * 000000014034203F: prefetchnta byte ptr [rax]
 * 0000000140342042: add     rax, rcx
 * 0000000140342045: cmp     rax, rsi
 * 0000000140342048: jb      short loc_14034203F
 * 000000014034204A: mov     esi, r9d
 * 000000014034204D: mov     r8, r12
 * 0000000140342050: shr     esi, 7
 * 0000000140342053: test    esi, esi
 * 0000000140342055: jz      short loc_1403420CC
 * 0000000140342057: mov     edi, 1
 * 000000014034205C: mov     r14d, 0FFFFFFFFh
 * 0000000140342062: mov     r13, 7010008004002001h
 * 000000014034206C: mov     eax, 8
 * 0000000140342071: xor     r8, [r10]
 * 0000000140342074: mov     ecx, r11d
 * 0000000140342077: rol     r8, cl
 * 000000014034207A: xor     r8, [r10+8]
 * 000000014034207E: add     r10, 10h
 * 0000000140342082: rol     r8, cl
 * 0000000140342085: sub     rax, rdi
 * 0000000140342088: jnz     short loc_140342071
 * 000000014034208A: mov     rcx, r10
 * 000000014034208D: sub     rcx, rbx
 * 0000000140342090: xor     rcx, r12
 * 0000000140342093: mov     rax, rcx
 * 0000000140342096: rol     rax, 11h
 * 000000014034209A: xor     rcx, rax
 * 000000014034209D: mov     rax, r13
 * 00000001403420A0: mul     rcx
 * 00000001403420A3: xor     r11d, eax
 * 00000001403420A6: mov     [rbp+20F0h+var_1978], rdx
 * 00000001403420AD: xor     r11d, edx
 * 00000001403420B0: and     r11d, 3Fh
 * 00000001403420B4: cmovz   r11d, edi
 * 00000001403420B8: add     esi, r14d
 * 00000001403420BB: jnz     short loc_14034206C
 * 00000001403420BD: mov     r14, [rbp+20F0h+var_2080]
 * 00000001403420C1: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403420C8: mov     r13d, [rbp+20F0h+var_20C0]
 * 00000001403420CC: and     r9d, 7Fh
 * 00000001403420D0: mov     ebx, 1
 * 00000001403420D5: cmp     r9d, 8
 * 00000001403420D9: jb      short loc_1403420F8
 * 00000001403420DB: mov     eax, r9d
 * 00000001403420DE: shr     rax, 3
 * 00000001403420E2: xor     r8, [r10]
 * 00000001403420E5: mov     ecx, r11d
 * 00000001403420E8: rol     r8, cl
 * 00000001403420EB: add     r10, 8
 * 00000001403420EF: add     r9d, 0FFFFFFF8h
 * 00000001403420F3: sub     rax, rbx
 * 00000001403420F6: jnz     short loc_1403420E2
 * 00000001403420F8: test    r9d, r9d
 * 00000001403420FB: jz      short loc_14034211E
 * 00000001403420FD: mov     edi, 0FFFFFFFFh
 * 0000000140342102: movzx   eax, byte ptr [r10]
 * 0000000140342106: mov     ecx, r11d
 * 0000000140342109: xor     r8, rax
 * 000000014034210C: add     r10, rbx
 * 000000014034210F: rol     r8, cl
 * 0000000140342112: add     r9d, edi
 * 0000000140342115: jnz     short loc_140342102
 * 0000000140342117: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034211E: mov     rax, r8
 * 0000000140342121: shr     rax, 1Fh
 * 0000000140342125: xor     r10d, r10d
 * 0000000140342128: jmp     short loc_140342131
 * 000000014034212A: xor     r8d, eax
 * 000000014034212D: shr     rax, 1Fh
 * 0000000140342131: test    rax, rax
 * 0000000140342134: jnz     short loc_14034212A
 * 0000000140342136: mov     rax, [rbp+20F0h+var_2068]
 * 000000014034213D: btr     r8d, 1Fh
 * 0000000140342142: mov     r11, [rbp+20F0h+var_20E0]
 * 0000000140342146: mov     [rax+8], r8d
 * 000000014034214A: jmp     short loc_140342155
 * 000000014034214C: mov     r11, [rbp+20F0h+var_20E0]
 * 0000000140342150: jmp     short loc_14034216C
 * 0000000140342152: xor     r10d, r10d
 * 0000000140342155: mov     rsi, [rbp+20F0h+var_20B0]
 * 0000000140342159: mov     r9d, 1
 * 000000014034215F: mov     r8, [rbp+20F0h+var_2058]
 * 0000000140342166: mov     edx, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140342169: mov     ecx, [rbp+20F0h+var_20E8]
 * 000000014034216C: cmp     r15d, edx
 * 000000014034216F: jb      loc_1403423E4
 * 0000000140342175: cmp     r13d, ecx
 * 0000000140342178: mov     r13d, [rbp+20F0h+var_2098]
 * 000000014034217C: ja      loc_1403423E8
 * 0000000140342182: cmp     rsi, r8
 * 0000000140342185: jz      loc_1403423E8
 * 000000014034218B: mov     r15, [rbp+20F0h+var_20F0]
 * 000000014034218F: mov     r12d, [r15+4]
 * 0000000140342193: cmp     r12d, ecx
 * 0000000140342196: ja      loc_1403423E8
 * 000000014034219C: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403421A0: mov     edx, 0Ch
 * 00000001403421A5: cmp     r15, r8
 * 00000001403421A8: jz      loc_1403423E8
 * 00000001403421AE: test    r13d, r13d
 * 00000001403421B1: jz      short loc_1403421BB
 * 00000001403421B3: mov     r8b, 80h
 * 00000001403421B6: jmp     loc_1403423AD
 * 00000001403421BB: mov     edx, [r15]
 * 00000001403421BE: mov     ecx, [rsi+4]
 * 00000001403421C1: mov     [rbp+20F0h+var_20A8], edx
 * 00000001403421C4: cmp     edx, ecx
 * 00000001403421C6: jnb     short loc_140342216
 * 00000001403421C8: test    dword ptr [r14+970h], 200000h
 * 00000001403421D3: jz      loc_1403457C6
 * 00000001403421D9: cmp     [r14+8D8h], r10d
 * 00000001403421E0: jnz     short loc_140342216
 * 00000001403421E2: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403421EC: add     rax, r14
 * 00000001403421EF: mov     [r14+8E0h], rax
 * 00000001403421F6: mov     [r14+8E8h], r10
 * 00000001403421FD: mov     qword ptr [r14+8F0h], 10Fh
 * 0000000140342208: mov     [r14+8F8h], r11
 * 000000014034220F: mov     [r14+8D8h], r9d
 * 0000000140342216: mov     r9d, edx
 * 0000000140342219: lea     rbx, [r11+rcx]
 * 000000014034221D: sub     r9d, ecx
 * 0000000140342220: lea     rdx, [rbp+20F0h+var_1C10]
 * 0000000140342227: mov     esi, r9d
 * 000000014034222A: lea     rcx, [rbp+20F0h+var_1DF0]
 * 0000000140342231: add     rsi, rbx
 * 0000000140342234: mov     r8d, r10d
 * 0000000140342237: mov     r10, [rdx]
 * 000000014034223A: mov     eax, [rcx]
 * 000000014034223C: add     rax, r10
 * 000000014034223F: cmp     rbx, rax
 * 0000000140342242: jnb     short loc_14034224D
 * 0000000140342244: cmp     rsi, r10
 * 0000000140342247: ja      loc_140342392
 * 000000014034224D: mov     eax, 4
 * 0000000140342252: inc     r8d
 * 0000000140342255: add     rcx, rax
 * 0000000140342258: add     rdx, 8
 * 000000014034225C: cmp     r8d, 6
 * 0000000140342260: jb      short loc_140342237
 * 0000000140342262: cmp     r9d, eax
 * 0000000140342265: jb      loc_140342392
 * 000000014034226B: add     [r14+810h], r9d
 * 0000000140342272: mov     r10, rbx
 * 0000000140342275: mov     r11d, [r14+7FCh]
 * 000000014034227C: mov     rax, rbx
 * 000000014034227F: mov     r15, [r14+800h]
 * 0000000140342286: cmp     rbx, rsi
 * 0000000140342289: jnb     short loc_14034229B
 * 000000014034228B: mov     ecx, 40h ; '@'
 * 0000000140342290: prefetchnta byte ptr [rax]
 * 0000000140342293: add     rax, rcx
 * 0000000140342296: cmp     rax, rsi
 * 0000000140342299: jb      short loc_140342290
 * 000000014034229B: mov     esi, r9d
 * 000000014034229E: mov     r8, r15
 * 00000001403422A1: shr     esi, 7
 * 00000001403422A4: test    esi, esi
 * 00000001403422A6: jz      short loc_14034231C
 * 00000001403422A8: mov     edi, 0FFFFFFFFh
 * 00000001403422AD: mov     r13d, 1
 * 00000001403422B3: mov     r14, 7010008004002001h
 * 00000001403422BD: mov     eax, 8
 * 00000001403422C2: xor     r8, [r10]
 * 00000001403422C5: mov     ecx, r11d
 * 00000001403422C8: rol     r8, cl
 * 00000001403422CB: xor     r8, [r10+8]
 * 00000001403422CF: add     r10, 10h
 * 00000001403422D3: rol     r8, cl
 * 00000001403422D6: sub     rax, r13
 * 00000001403422D9: jnz     short loc_1403422C2
 * 00000001403422DB: mov     rcx, r10
 * 00000001403422DE: sub     rcx, rbx
 * 00000001403422E1: xor     rcx, r15
 * 00000001403422E4: mov     rax, rcx
 * 00000001403422E7: rol     rax, 11h
 * 00000001403422EB: xor     rcx, rax
 * 00000001403422EE: mov     rax, r14
 * 00000001403422F1: mul     rcx
 * 00000001403422F4: xor     r11d, eax
 * 00000001403422F7: mov     [rbp+20F0h+var_1970], rdx
 * 00000001403422FE: xor     r11d, edx
 * 0000000140342301: and     r11d, 3Fh
 * 0000000140342305: cmovz   r11d, r13d
 * 0000000140342309: add     esi, edi
 * 000000014034230B: jnz     short loc_1403422BD
 * 000000014034230D: mov     r14, [rbp+20F0h+var_2080]
 * 0000000140342311: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140342318: mov     r13d, [rbp+20F0h+var_2098]
 * 000000014034231C: and     r9d, 7Fh
 * 0000000140342320: mov     ebx, 1
 * 0000000140342325: cmp     r9d, 8
 * 0000000140342329: jb      short loc_140342348
 * 000000014034232B: mov     eax, r9d
 * 000000014034232E: shr     rax, 3
 * 0000000140342332: xor     r8, [r10]
 * 0000000140342335: mov     ecx, r11d
 * 0000000140342338: rol     r8, cl
 * 000000014034233B: add     r10, 8
 * 000000014034233F: add     r9d, 0FFFFFFF8h
 * 0000000140342343: sub     rax, rbx
 * 0000000140342346: jnz     short loc_140342332
 * 0000000140342348: test    r9d, r9d
 * 000000014034234B: jz      short loc_14034236C
 * 000000014034234D: mov     r13d, 0FFFFFFFFh
 * 0000000140342353: movzx   eax, byte ptr [r10]
 * 0000000140342357: mov     ecx, r11d
 * 000000014034235A: xor     r8, rax
 * 000000014034235D: add     r10, rbx
 * 0000000140342360: rol     r8, cl
 * 0000000140342363: add     r9d, r13d
 * 0000000140342366: jnz     short loc_140342353
 * 0000000140342368: mov     r13d, [rbp+20F0h+var_2098]
 * 000000014034236C: mov     rax, r8
 * 000000014034236F: shr     rax, 7
 * 0000000140342373: xor     r10d, r10d
 * 0000000140342376: jmp     short loc_14034237F
 * 0000000140342378: xor     r8b, al
 * 000000014034237B: shr     rax, 7
 * 000000014034237F: test    rax, rax
 * 0000000140342382: jnz     short loc_140342378
 * 0000000140342384: mov     r11, [rbp+20F0h+var_20E0]
 * 0000000140342388: and     r8b, 7Fh
 * 000000014034238C: mov     r15, [rbp+20F0h+var_20F0]
 * 0000000140342390: jmp     short loc_140342398
 * 0000000140342392: xor     r10d, r10d
 * 0000000140342395: mov     r8b, 80h
 * 0000000140342398: mov     rsi, [rbp+20F0h+var_20B0]
 * 000000014034239C: mov     r9d, 1
 * 00000001403423A2: mov     ecx, [rbp+20F0h+var_20E8]
 * 00000001403423A5: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403423A9: lea     edx, [r9+0Bh]
 * 00000001403423AD: mov     [rax], r8b
 * 00000001403423B0: add     rsi, rdx
 * 00000001403423B3: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403423B7: add     r15, rdx
 * 00000001403423BA: mov     r8, [rbp+20F0h+var_2058]
 * 00000001403423C1: add     rax, r9
 * 00000001403423C4: mov     [rbp+20F0h+var_20B0], rsi
 * 00000001403423C8: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403423CC: mov     [rbp+20F0h+var_20F0], r15
 * 00000001403423D0: cmp     r15, r8
 * 00000001403423D3: jz      short loc_1403423D9
 * 00000001403423D5: mov     r12d, [r15+4]
 * 00000001403423D9: cmp     r12d, ecx
 * 00000001403423DC: jbe     loc_1403421A5
 * 00000001403423E2: jmp     short loc_1403423E8
 * 00000001403423E4: mov     r13d, [rbp+20F0h+var_2098]
 * 00000001403423E8: mov     r11, [rbp+20F0h+var_2068]
 * 00000001403423EF: xor     r12d, r12d
 * 00000001403423F2: mov     r15, [rbp+20F0h+var_20E0]
 * 00000001403423F6: test    r13d, r13d
 * 00000001403423F9: jnz     loc_14034257A
 * 00000001403423FF: mov     eax, [rbp+20F0h+var_20A8]
 * 0000000140342402: cmp     eax, ecx
 * 0000000140342404: jz      loc_14034257A
 * 000000014034240A: mov     [r11+0Ch], eax
 * 000000014034240E: lea     rdx, [rbp+20F0h+var_1C10]
 * 0000000140342415: mov     [r11+10h], ecx
 * 0000000140342419: lea     r13d, [r12+1]
 * 000000014034241E: mov     eax, [r11+0Ch]
 * 0000000140342422: mov     r9d, ecx
 * 0000000140342425: sub     r9d, eax
 * 0000000140342428: lea     rcx, [rbp+20F0h+var_1DF0]
 * 000000014034242F: mov     esi, r9d
 * 0000000140342432: mov     r8d, r12d
 * 0000000140342435: lea     rbx, [r15+rax]
 * 0000000140342439: add     rsi, rbx
 * 000000014034243C: mov     r10, [rdx]
 * 000000014034243F: mov     eax, [rcx]
 * 0000000140342441: add     rax, r10
 * 0000000140342444: cmp     rbx, rax
 * 0000000140342447: jnb     short loc_140342452
 * 0000000140342449: cmp     rsi, r10
 * 000000014034244C: ja      loc_140342576
 * 0000000140342452: add     r8d, r13d
 * 0000000140342455: add     rdx, 8
 * 0000000140342459: add     rcx, 4
 * 000000014034245D: cmp     r8d, 6
 * 0000000140342461: jb      short loc_14034243C
 * 0000000140342463: add     [r14+810h], r9d
 * 000000014034246A: mov     r10, rbx
 * 000000014034246D: mov     r11d, [r14+7FCh]
 * 0000000140342474: mov     rax, rbx
 * 0000000140342477: mov     r15, [r14+800h]
 * 000000014034247E: cmp     rbx, rsi
 * 0000000140342481: jnb     short loc_140342493
 * 0000000140342483: mov     ecx, 40h ; '@'
 * 0000000140342488: prefetchnta byte ptr [rax]
 * 000000014034248B: add     rax, rcx
 * 000000014034248E: cmp     rax, rsi
 * 0000000140342491: jb      short loc_140342488
 * 0000000140342493: mov     esi, r9d
 * 0000000140342496: mov     r8, r15
 * 0000000140342499: shr     esi, 7
 * 000000014034249C: test    esi, esi
 * 000000014034249E: jz      short loc_140342507
 * 00000001403424A0: mov     r12, 7010008004002001h
 * 00000001403424AA: mov     edx, 8
 * 00000001403424AF: mov     rax, [r10]
 * 00000001403424B2: mov     ecx, r11d
 * 00000001403424B5: xor     rax, r8
 * 00000001403424B8: mov     r8, [r10+8]
 * 00000001403424BC: rol     rax, cl
 * 00000001403424BF: add     r10, 10h
 * 00000001403424C3: xor     r8, rax
 * 00000001403424C6: rol     r8, cl
 * 00000001403424C9: sub     rdx, r13
 * 00000001403424CC: jnz     short loc_1403424AF
 * 00000001403424CE: mov     rcx, r10
 * 00000001403424D1: sub     rcx, rbx
 * 00000001403424D4: xor     rcx, r15
 * 00000001403424D7: mov     rax, rcx
 * 00000001403424DA: rol     rax, 11h
 * 00000001403424DE: xor     rcx, rax
 * 00000001403424E1: mov     rax, r12
 * 00000001403424E4: mul     rcx
 * 00000001403424E7: xor     eax, edx
 * 00000001403424E9: mov     [rbp+20F0h+var_1968], rdx
 * 00000001403424F0: xor     r11d, eax
 * 00000001403424F3: mov     eax, 0FFFFFFFFh
 * 00000001403424F8: and     r11d, 3Fh
 * 00000001403424FC: cmovz   r11d, r13d
 * 0000000140342500: add     esi, eax
 * 0000000140342502: jnz     short loc_1403424AA
 * 0000000140342504: xor     r12d, r12d
 * 0000000140342507: and     r9d, 7Fh
 * 000000014034250B: cmp     r9d, 8
 * 000000014034250F: jb      short loc_14034252E
 * 0000000140342511: mov     edx, r9d
 * 0000000140342514: shr     rdx, 3
 * 0000000140342518: xor     r8, [r10]
 * 000000014034251B: mov     ecx, r11d
 * 000000014034251E: rol     r8, cl
 * 0000000140342521: add     r10, 8
 * 0000000140342525: add     r9d, 0FFFFFFF8h
 * 0000000140342529: sub     rdx, r13
 * 000000014034252C: jnz     short loc_140342518
 * 000000014034252E: test    r9d, r9d
 * 0000000140342531: jz      short loc_140342551
 * 0000000140342533: mov     r12d, 0FFFFFFFFh
 * 0000000140342539: movzx   eax, byte ptr [r10]
 * 000000014034253D: mov     ecx, r11d
 * 0000000140342540: xor     r8, rax
 * 0000000140342543: add     r10, r13
 * 0000000140342546: rol     r8, cl
 * 0000000140342549: add     r9d, r12d
 * 000000014034254C: jnz     short loc_140342539
 * 000000014034254E: xor     r12d, r12d
 * 0000000140342551: mov     rax, r8
 * 0000000140342554: jmp     short loc_140342559
 * 0000000140342556: xor     r8d, eax
 * 0000000140342559: shr     rax, 1Fh
 * 000000014034255D: test    rax, rax
 * 0000000140342560: jnz     short loc_140342556
 * 0000000140342562: mov     r11, [rbp+20F0h+var_2068]
 * 0000000140342569: btr     r8d, 1Fh
 * 000000014034256E: mov     r15, [rbp+20F0h+var_20E0]
 * 0000000140342572: mov     [r11+14h], r8d
 * 0000000140342576: mov     rsi, [rbp+20F0h+var_20B0]
 * 000000014034257A: mov     rdx, [rbp+20F0h+var_2058]
 * 0000000140342581: cmp     rsi, rdx
 * 0000000140342584: jz      short loc_1403425C6
 * 0000000140342586: mov     eax, [rsi]
 * 0000000140342588: mov     ecx, [rsi+4]
 * 000000014034258B: cmp     eax, dword ptr [rbp+20F0h+var_20B8]
 * 000000014034258E: jb      short loc_1403425C6
 * 0000000140342590: cmp     ecx, [rbp+20F0h+var_20E8]
 * 0000000140342593: ja      short loc_1403425C6
 * 0000000140342595: mov     rcx, [rbp+20F0h+var_20F0]
 * 0000000140342599: cmp     rcx, rdx
 * 000000014034259C: jz      short loc_1403425BA
 * 000000014034259E: mov     rax, [rbp+20F0h+var_20A0]
 * 00000001403425A2: mov     byte ptr [rax], 80h
 * 00000001403425A5: inc     rax
 * 00000001403425A8: mov     [rbp+20F0h+var_20A0], rax
 * 00000001403425AC: mov     eax, 0Ch
 * 00000001403425B1: add     rcx, rax
 * 00000001403425B4: mov     [rbp+20F0h+var_20F0], rcx
 * 00000001403425B8: jmp     short loc_1403425BF
 * 00000001403425BA: mov     eax, 0Ch
 * 00000001403425BF: add     rsi, rax
 * 00000001403425C2: mov     [rbp+20F0h+var_20B0], rsi
 * 00000001403425C6: mov     r13, [rbp+20F0h+var_20D8]
 * 00000001403425CA: add     r11, 18h
 * 00000001403425CE: add     r13, 28h ; '('
 * 00000001403425D2: mov     [rbp+20F0h+var_2068], r11
 * 00000001403425D9: mov     [rbp+20F0h+var_20D8], r13
 * 00000001403425DD: cmp     r11, [rbp+20F0h+var_2030]
 * 00000001403425E4: jz      short loc_1403425F1
 * 00000001403425E6: mov     r9d, 1
 * 00000001403425EC: jmp     loc_140341D7B
 * 00000001403425F1: mov     rbx, [rbp+20F0h+var_1FE8]
 * 00000001403425F8: mov     rsi, rbx
 * 00000001403425FB: mov     [rbp+20F0h+var_1FF8], rbx
 * 0000000140342602: mov     ecx, r12d
 * 0000000140342605: mov     [rbp+20F0h+var_2098], ecx
 * 0000000140342608: mov     r13d, 80000000h
 * 000000014034260E: mov     rbx, rsi
 * 0000000140342611: lea     eax, [rcx+r13]
 * 0000000140342615: test    r13d, eax
 * 0000000140342618: jnz     short loc_140342633
 * 000000014034261A: cmp     ecx, 0C000010Eh
 * 0000000140342620: jz      short loc_140342633
 * 0000000140342622: mov     ecx, [rbp+20F0h+var_2098]
 * 0000000140342625: xor     r10d, r10d
 * 0000000140342628: jmp     loc_1403426D0
 * 000000014034262D: mov     r13d, 80000000h
 * 0000000140342633: mov     rax, [rsi+1F0h]
 * 000000014034263A: mov     rcx, [rbp+20F0h+var_1F00]
 * 0000000140342641: call    KeGuardDispatchICall
 * 0000000140342646: mov     ecx, [rax+94h]
 * 000000014034264C: cmp     ecx, 14h
 * 000000014034264F: jb      loc_1403409C5
 * 0000000140342655: mov     eax, [rax+90h]
 * 000000014034265B: mov     r15d, ecx
 * 000000014034265E: mov     rcx, [rbp+20F0h+var_1F00]
 * 0000000140342665: add     r15, rcx
 * 0000000140342668: add     r15, rax
 * 000000014034266B: lea     r14, [rcx+rax]
 * 000000014034266F: cmp     r14, r15
 * 0000000140342672: jz      short loc_1403426CA
 * 0000000140342674: cmp     [r14+0Ch], r12d
 * 0000000140342678: jz      short loc_1403426CA
 * 000000014034267A: mov     eax, [r14+10h]
 * 000000014034267E: test    eax, eax
 * 0000000140342680: jz      short loc_1403426CA
 * 0000000140342682: mov     rdx, [rax+rcx]
 * 0000000140342686: test    rdx, rdx
 * 0000000140342689: jz      short loc_1403426C4
 * 000000014034268B: mov     r8d, 8000000Fh
 * 0000000140342691: lea     rcx, [rbp+20F0h+var_1FF8]
 * 0000000140342698: call    sub_140345BE8
 * 000000014034269D: mov     rsi, [rbp+20F0h+var_1FF8]
 * 00000001403426A4: mov     ecx, eax
 * 00000001403426A6: add     eax, r13d
 * 00000001403426A9: mov     rbx, rsi
 * 00000001403426AC: test    r13d, eax
 * 00000001403426AF: jnz     short loc_1403426BD
 * 00000001403426B1: cmp     ecx, 0C000010Eh
 * 00000001403426B7: jnz     loc_140342625
 * 00000001403426BD: mov     rcx, [rbp+20F0h+var_1F00]
 * 00000001403426C4: add     r14, 14h
 * 00000001403426C8: jmp     short loc_14034266F
 * 00000001403426CA: xor     r10d, r10d
 * 00000001403426CD: mov     ecx, r10d
 * 00000001403426D0: lea     eax, [rcx+r13]
 * 00000001403426D4: test    r13d, eax
 * 00000001403426D7: jnz     short loc_1403426E5
 * 00000001403426D9: cmp     ecx, 0C000010Eh
 * 00000001403426DF: jnz     loc_1403406E7
 * 00000001403426E5: mov     rax, [rbx+560h]
 * 00000001403426EC: lea     r14, [rbx+958h]
 * 00000001403426F3: lea     r8, [rbp+20F0h+var_1CA0]
 * 00000001403426FA: mov     rdx, r14
 * 00000001403426FD: mov     rcx, [rax+20h]
 * 0000000140342701: mov     rax, [rbx+1F8h]
 * 0000000140342708: call    KeGuardDispatchICall
 * 000000014034270D: xor     r10d, r10d
 * 0000000140342710: test    rax, rax
 * 0000000140342713: jz      loc_140342E0C
 * 0000000140342719: mov     rax, [rbx+1F0h]
 * 0000000140342720: mov     rcx, [r14]
 * 0000000140342723: call    KeGuardDispatchICall
 * 0000000140342728: xor     r10d, r10d
 * 000000014034272B: test    rax, rax
 * 000000014034272E: jz      loc_140342E0C
 * 0000000140342734: mov     eax, [rax+50h]
 * 0000000140342737: mov     [rbx+954h], eax
 * 000000014034273D: mov     dword ptr [rbx+934h], 8
 * 0000000140342747: mov     r15, [rbx+5F0h]
 * 000000014034274E: test    r15, r15
 * 0000000140342751: jz      loc_140342959
 * 0000000140342757: cmp     [r15], r10
 * 000000014034275A: jz      loc_140342959
 * 0000000140342760: mov     r9d, [rbx+820h]
 * 0000000140342767: mov     r12d, 20h ; ' '
 * 000000014034276D: mov     r13d, [rbx+7CCh]
 * 0000000140342774: cmp     r9d, 7
 * 0000000140342778: mov     r8d, [rbx+904h]
 * 000000014034277F: cmovnz  r12d, r10d
 * 0000000140342783: mov     [rbp+20F0h+var_2094], r9d
 * 0000000140342787: lea     eax, [r13+30h]
 * 000000014034278B: cmp     eax, [rbx+9FCh]
 * 0000000140342791: jbe     loc_140342882
 * 0000000140342797: mov     edx, eax
 * 0000000140342799: mov     rcx, rbx
 * 000000014034279C: call    sub_1403485B4
 * 00000001403427A1: xor     r10d, r10d
 * 00000001403427A4: mov     r14, rax
 * 00000001403427A7: test    rax, rax
 * 00000001403427AA: jz      loc_14034287A
 * 00000001403427B0: mov     ecx, [rbx+970h]
 * 00000001403427B6: test    cl, 4
 * 00000001403427B9: jnz     loc_14034286C
 * 00000001403427BF: mov     eax, [rbx+7CCh]
 * 00000001403427C5: lea     r9d, [r10+1]
 * 00000001403427C9: mov     r8, [rbx+7B0h]
 * 00000001403427D0: and     ecx, 20000000h
 * 00000001403427D6: neg     ecx
 * 00000001403427D8: sbb     edx, edx
 * 00000001403427DA: and     edx, [rbx+904h]
 * 00000001403427E0: cmp     eax, 8
 * 00000001403427E3: jb      short loc_1403427FA
 * 00000001403427E5: mov     ecx, eax
 * 00000001403427E7: shr     rcx, 3
 * 00000001403427EB: mov     [rbx], r10
 * 00000001403427EE: add     eax, 0FFFFFFF8h
 * 00000001403427F1: add     rbx, 8
 * 00000001403427F5: sub     rcx, r9
 * 00000001403427F8: jnz     short loc_1403427EB
 * 00000001403427FA: test    eax, eax
 * 00000001403427FC: jz      short loc_14034280D
 * 00000001403427FE: mov     ecx, 0FFFFFFFFh
 * 0000000140342803: mov     [rbx], r10b
 * 0000000140342806: add     rbx, r9
 * 0000000140342809: add     eax, ecx
 * 000000014034280B: jnz     short loc_140342803
 * 000000014034280D: mov     ebx, [r14+904h]
 * 0000000140342814: mov     [r14+904h], edx
 * 000000014034281B: cmp     edx, 3
 * 000000014034281E: jz      short loc_140342853
 * 0000000140342820: test    dword ptr [r14+970h], 10000000h
 * 000000014034282B: mov     ecx, r10d
 * 000000014034282E: cmovz   ecx, edx
 * 0000000140342831: test    ecx, ecx
 * 0000000140342833: jz      short loc_14034284A
 * 0000000140342835: mov     rax, [r14+220h]
 * 000000014034283C: lea     rcx, [r8-8]
 * 0000000140342840: mov     rdx, [rcx]
 * 0000000140342843: call    KeGuardDispatchICall
 * 0000000140342848: jmp     short loc_140342862
 * 000000014034284A: mov     rax, [r14+0F8h]
 * 0000000140342851: jmp     short loc_14034285A
 * 0000000140342853: mov     rax, [r14+360h]
 * 000000014034285A: mov     rcx, r8
 * 000000014034285D: call    KeGuardDispatchICall
 * 0000000140342862: mov     [r14+904h], ebx
 * 0000000140342869: xor     r10d, r10d
 * 000000014034286C: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140342874: mov     r9d, [rbp+20F0h+var_2094]
 * 0000000140342878: jmp     short loc_14034288B
 * 000000014034287A: mov     rbx, rsi
 * 000000014034287D: jmp     loc_1403406E7
 * 0000000140342882: mov     r14, rbx
 * 0000000140342885: mov     [rbx+7CCh], eax
 * 000000014034288B: mov     r8d, 1
 * 0000000140342891: lea     rbx, [r14+r13]
 * 0000000140342895: add     [r14+7F4h], r8d
 * 000000014034289C: mov     rax, rbx
 * 000000014034289F: mov     [rbp+20F0h+var_1960], rbx
 * 00000001403428A6: lea     ecx, [r8+2Fh]
 * 00000001403428AA: lea     edx, [rcx-2Ah]
 * 00000001403428AD: mov     [rax], r10
 * 00000001403428B0: add     ecx, 0FFFFFFF8h
 * 00000001403428B3: add     rax, 8
 * 00000001403428B7: sub     rdx, r8
 * 00000001403428BA: jnz     short loc_1403428AD
 * 00000001403428BC: test    ecx, ecx
 * 00000001403428BE: jz      short loc_1403428CF
 * 00000001403428C0: mov     edx, 0FFFFFFFFh
 * 00000001403428C5: mov     [rax], r10b
 * 00000001403428C8: add     rax, r8
 * 00000001403428CB: add     ecx, edx
 * 00000001403428CD: jnz     short loc_1403428C5
 * 00000001403428CF: mov     [rbx], r12d
 * 00000001403428D2: mov     [rbx+8], r15
 * 00000001403428D6: cmp     r9d, 7
 * 00000001403428DA: jnz     short loc_1403428F4
 * 00000001403428DC: lea     r9, [rbx+18h]
 * 00000001403428E0: mov     r8d, 8
 * 00000001403428E6: mov     rdx, r15
 * 00000001403428E9: mov     rcx, r14
 * 00000001403428EC: call    sub_1401AD8FC
 * 00000001403428F1: xor     r10d, r10d
 * 00000001403428F4: mov     dword ptr [rbx+10h], 8
 * 00000001403428FB: lea     r8, [r15+8]
 * 00000001403428FF: add     dword ptr [r14+810h], 8
 * 0000000140342907: mov     rdx, r15
 * 000000014034290A: mov     ecx, [r14+7FCh]
 * 0000000140342911: mov     rax, [r14+800h]
 * 0000000140342918: cmp     r15, r8
 * 000000014034291B: jnb     short loc_14034292E
 * 000000014034291D: mov     r9d, 40h ; '@'
 * 0000000140342923: prefetchnta byte ptr [rdx]
 * 0000000140342926: add     rdx, r9
 * 0000000140342929: cmp     rdx, r8
 * 000000014034292C: jb      short loc_140342923
 * 000000014034292E: xor     rax, [r15]
 * 0000000140342931: rol     rax, cl
 * 0000000140342934: mov     rcx, rax
 * 0000000140342937: jmp     short loc_14034293B
 * 0000000140342939: xor     eax, ecx
 * 000000014034293B: shr     rcx, 1Fh
 * 000000014034293F: test    rcx, rcx
 * 0000000140342942: jnz     short loc_140342939
 * 0000000140342944: btr     eax, 1Fh
 * 0000000140342948: mov     rsi, r14
 * 000000014034294B: mov     [rbx+14h], eax
 * 000000014034294E: mov     rbx, r14
 * 0000000140342951: add     dword ptr [r14+810h], 8
 * 0000000140342959: mov     dword ptr [rbx+934h], 9
 * 0000000140342963: mov     r15, [rbx+5F0h]
 * 000000014034296A: test    r15, r15
 * 000000014034296D: jz      loc_140342DF3
 * 0000000140342973: mov     r15, [r15]
 * 0000000140342976: test    r15, r15
 * 0000000140342979: jz      loc_140342DF3
 * 000000014034297F: lock or [rsp+10F0h+var_10F0], r10d
 * 0000000140342984: mov     r12d, [r15+7CCh]
 * 000000014034298B: mov     r9, r15
 * 000000014034298E: mov     r10d, [r15+7FCh]
 * 0000000140342995: mov     rax, r15
 * 0000000140342998: mov     r14, [r15+800h]
 * 000000014034299F: lea     rcx, [r15+r12]
 * 00000001403429A3: cmp     r15, rcx
 * 00000001403429A6: jnb     short loc_1403429B8
 * 00000001403429A8: mov     edx, 40h ; '@'
 * 00000001403429AD: prefetchnta byte ptr [rax]
 * 00000001403429B0: add     rax, rdx
 * 00000001403429B3: cmp     rax, rcx
 * 00000001403429B6: jb      short loc_1403429AD
 * 00000001403429B8: mov     r11d, r12d
 * 00000001403429BB: xor     r13d, r13d
 * 00000001403429BE: shr     r11d, 7
 * 00000001403429C2: mov     r8, r14
 * 00000001403429C5: test    r11d, r11d
 * 00000001403429C8: jz      short loc_140342A40
 * 00000001403429CA: mov     rdi, 7010008004002001h
 * 00000001403429D4: mov     edx, 8
 * 00000001403429D9: lea     r13d, [rdx-7]
 * 00000001403429DD: mov     rax, [r9]
 * 00000001403429E0: mov     ecx, r10d
 * 00000001403429E3: xor     rax, r8
 * 00000001403429E6: mov     r8, [r9+8]
 * 00000001403429EA: rol     rax, cl
 * 00000001403429ED: add     r9, 10h
 * 00000001403429F1: xor     r8, rax
 * 00000001403429F4: rol     r8, cl
 * 00000001403429F7: sub     rdx, r13
 * 00000001403429FA: jnz     short loc_1403429DD
 * 00000001403429FC: mov     rcx, r9
 * 00000001403429FF: sub     rcx, r15
 * 0000000140342A02: xor     rcx, r14
 * 0000000140342A05: mov     rax, rcx
 * 0000000140342A08: rol     rax, 11h
 * 0000000140342A0C: xor     rcx, rax
 * 0000000140342A0F: mov     rax, rdi
 * 0000000140342A12: mul     rcx
 * 0000000140342A15: xor     eax, edx
 * 0000000140342A17: mov     [rbp+20F0h+var_1958], rdx
 * 0000000140342A1E: xor     r10d, eax
 * 0000000140342A21: mov     rax, r13
 * 0000000140342A24: and     r10d, 3Fh
 * 0000000140342A28: cmovz   r10d, eax
 * 0000000140342A2C: mov     eax, 0FFFFFFFFh
 * 0000000140342A31: add     r11d, eax
 * 0000000140342A34: jnz     short loc_1403429D4
 * 0000000140342A36: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140342A3D: xor     r13d, r13d
 * 0000000140342A40: mov     edx, r12d
 * 0000000140342A43: mov     r14d, 1
 * 0000000140342A49: and     edx, 7Fh
 * 0000000140342A4C: cmp     edx, 8
 * 0000000140342A4F: jb      short loc_140342A6D
 * 0000000140342A51: mov     r11d, edx
 * 0000000140342A54: shr     r11, 3
 * 0000000140342A58: xor     r8, [r9]
 * 0000000140342A5B: mov     ecx, r10d
 * 0000000140342A5E: rol     r8, cl
 * 0000000140342A61: add     r9, 8
 * 0000000140342A65: add     edx, 0FFFFFFF8h
 * 0000000140342A68: sub     r11, r14
 * 0000000140342A6B: jnz     short loc_140342A58
 * 0000000140342A6D: test    edx, edx
 * 0000000140342A6F: jz      short loc_140342A91
 * 0000000140342A71: mov     edi, 0FFFFFFFFh
 * 0000000140342A76: movzx   eax, byte ptr [r9]
 * 0000000140342A7A: mov     ecx, r10d
 * 0000000140342A7D: xor     r8, rax
 * 0000000140342A80: add     r9, r14
 * 0000000140342A83: rol     r8, cl
 * 0000000140342A86: add     edx, edi
 * 0000000140342A88: jnz     short loc_140342A76
 * 0000000140342A8A: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140342A91: mov     rax, [rbx+5F8h]
 * 0000000140342A98: cmp     r8, [rax]
 * 0000000140342A9B: jz      loc_140342B23
 * 0000000140342AA1: mov     rax, [rbx+580h]
 * 0000000140342AA8: xor     r10d, r10d
 * 0000000140342AAB: mov     [rax], r15
 * 0000000140342AAE: mov     [rax+10h], r12d
 * 0000000140342AB2: mov     rax, [rbx+5F8h]
 * 0000000140342AB9: mov     rcx, [rax]
 * 0000000140342ABC: mov     eax, [rbx+8D8h]
 * 0000000140342AC2: test    eax, eax
 * 0000000140342AC4: jnz     loc_1403406E7
 * 0000000140342ACA: mov     rax, [rbx+580h]
 * 0000000140342AD1: xor     rcx, r8
 * 0000000140342AD4: mov     [rax+18h], rcx
 * 0000000140342AD8: mov     eax, [rbx+8D8h]
 * 0000000140342ADE: test    eax, eax
 * 0000000140342AE0: jnz     loc_1403406E7
 * 0000000140342AE6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140342AF0: lea     r15d, [r10+1]
 * 0000000140342AF4: add     rax, rbx
 * 0000000140342AF7: mov     [rbx+8E0h], rax
 * 0000000140342AFE: mov     [rbx+8E8h], r10
 * 0000000140342B05: mov     qword ptr [rbx+8F0h], 111h
 * 0000000140342B10: mov     [rbx+8F8h], r8
 * 0000000140342B17: mov     [rbx+8D8h], r15d
 * 0000000140342B1E: jmp     loc_1403406ED
 * 0000000140342B23: mov     r9d, [rbx+820h]
 * 0000000140342B2A: mov     r13d, 20h ; ' '
 * 0000000140342B30: mov     eax, [rbx+7CCh]
 * 0000000140342B36: cmp     r9d, 7
 * 0000000140342B3A: mov     r8d, [rbx+904h]
 * 0000000140342B41: mov     [rbp+20F0h+var_20C0], eax
 * 0000000140342B44: lea     r10d, [r13-20h]
 * 0000000140342B48: mov     [rbp+20F0h+var_2094], r9d
 * 0000000140342B4C: cmovnz  r13d, r10d
 * 0000000140342B50: add     eax, 30h ; '0'
 * 0000000140342B53: cmp     eax, [rbx+9FCh]
 * 0000000140342B59: jbe     loc_140342C42
 * 0000000140342B5F: mov     edx, eax
 * 0000000140342B61: mov     rcx, rbx
 * 0000000140342B64: call    sub_1403485B4
 * 0000000140342B69: xor     r10d, r10d
 * 0000000140342B6C: mov     r14, rax
 * 0000000140342B6F: test    rax, rax
 * 0000000140342B72: jz      loc_14034287A
 * 0000000140342B78: mov     ecx, [rbx+970h]
 * 0000000140342B7E: test    cl, 4
 * 0000000140342B81: jnz     loc_140342C34
 * 0000000140342B87: mov     eax, [rbx+7CCh]
 * 0000000140342B8D: lea     r9d, [r10+1]
 * 0000000140342B91: mov     r8, [rbx+7B0h]
 * 0000000140342B98: and     ecx, 20000000h
 * 0000000140342B9E: neg     ecx
 * 0000000140342BA0: sbb     edx, edx
 * 0000000140342BA2: and     edx, [rbx+904h]
 * 0000000140342BA8: cmp     eax, 8
 * 0000000140342BAB: jb      short loc_140342BC2
 * 0000000140342BAD: mov     ecx, eax
 * 0000000140342BAF: shr     rcx, 3
 * 0000000140342BB3: mov     [rbx], r10
 * 0000000140342BB6: add     eax, 0FFFFFFF8h
 * 0000000140342BB9: add     rbx, 8
 * 0000000140342BBD: sub     rcx, r9
 * 0000000140342BC0: jnz     short loc_140342BB3
 * 0000000140342BC2: test    eax, eax
 * 0000000140342BC4: jz      short loc_140342BD5
 * 0000000140342BC6: mov     ecx, 0FFFFFFFFh
 * 0000000140342BCB: mov     [rbx], r10b
 * 0000000140342BCE: add     rbx, r9
 * 0000000140342BD1: add     eax, ecx
 * 0000000140342BD3: jnz     short loc_140342BCB
 * 0000000140342BD5: mov     ebx, [r14+904h]
 * 0000000140342BDC: mov     [r14+904h], edx
 * 0000000140342BE3: cmp     edx, 3
 * 0000000140342BE6: jz      short loc_140342C1B
 * 0000000140342BE8: test    dword ptr [r14+970h], 10000000h
 * 0000000140342BF3: mov     ecx, r10d
 * 0000000140342BF6: cmovz   ecx, edx
 * 0000000140342BF9: test    ecx, ecx
 * 0000000140342BFB: jz      short loc_140342C12
 * 0000000140342BFD: mov     rax, [r14+220h]
 * 0000000140342C04: lea     rcx, [r8-8]
 * 0000000140342C08: mov     rdx, [rcx]
 * 0000000140342C0B: call    KeGuardDispatchICall
 * 0000000140342C10: jmp     short loc_140342C2A
 * 0000000140342C12: mov     rax, [r14+0F8h]
 * 0000000140342C19: jmp     short loc_140342C22
 * 0000000140342C1B: mov     rax, [r14+360h]
 * 0000000140342C22: mov     rcx, r8
 * 0000000140342C25: call    KeGuardDispatchICall
 * 0000000140342C2A: mov     [r14+904h], ebx
 * 0000000140342C31: xor     r10d, r10d
 * 0000000140342C34: and     dword ptr [r14+970h], 0FFFFFFFBh
 * 0000000140342C3C: mov     r9d, [rbp+20F0h+var_2094]
 * 0000000140342C40: jmp     short loc_140342C4B
 * 0000000140342C42: mov     r14, rbx
 * 0000000140342C45: mov     [rbx+7CCh], eax
 * 0000000140342C4B: mov     ebx, [rbp+20F0h+var_20C0]
 * 0000000140342C4E: mov     r8d, 1
 * 0000000140342C54: add     [r14+7F4h], r8d
 * 0000000140342C5B: add     rbx, r14
 * 0000000140342C5E: mov     [rbp+20F0h+var_1950], rbx
 * 0000000140342C65: mov     rax, rbx
 * 0000000140342C68: lea     ecx, [r8+2Fh]
 * 0000000140342C6C: lea     edx, [rcx-2Ah]
 * 0000000140342C6F: mov     [rax], r10
 * 0000000140342C72: add     ecx, 0FFFFFFF8h
 * 0000000140342C75: add     rax, 8
 * 0000000140342C79: sub     rdx, r8
 * 0000000140342C7C: jnz     short loc_140342C6F
 * 0000000140342C7E: test    ecx, ecx
 * 0000000140342C80: jz      short loc_140342C91
 * 0000000140342C82: mov     edx, 0FFFFFFFFh
 * 0000000140342C87: mov     [rax], r10b
 * 0000000140342C8A: add     rax, r8
 * 0000000140342C8D: add     ecx, edx
 * 0000000140342C8F: jnz     short loc_140342C87
 * 0000000140342C91: mov     [rbx], r13d
 * 0000000140342C94: mov     [rbx+8], r15
 * 0000000140342C98: cmp     r9d, 7
 * 0000000140342C9C: jnz     short loc_140342CB5
 * 0000000140342C9E: test    r12d, r12d
 * 0000000140342CA1: jz      short loc_140342CB5
 * 0000000140342CA3: lea     r9, [rbx+18h]
 * 0000000140342CA7: mov     r8d, r12d
 * 0000000140342CAA: mov     rdx, r15
 * 0000000140342CAD: mov     rcx, r14
 * 0000000140342CB0: call    sub_1401AD8FC
 * 0000000140342CB5: mov     [rbx+10h], r12d
 * 0000000140342CB9: lea     rcx, [r15+r12]
 * 0000000140342CBD: add     [r14+810h], r12d
 * 0000000140342CC4: mov     r9, r15
 * 0000000140342CC7: mov     r10d, [r14+7FCh]
 * 0000000140342CCE: mov     rax, r15
 * 0000000140342CD1: mov     rsi, [r14+800h]
 * 0000000140342CD8: cmp     r15, rcx
 * 0000000140342CDB: jnb     short loc_140342CED
 * 0000000140342CDD: mov     edx, 40h ; '@'
 * 0000000140342CE2: prefetchnta byte ptr [rax]
 * 0000000140342CE5: add     rax, rdx
 * 0000000140342CE8: cmp     rax, rcx
 * 0000000140342CEB: jb      short loc_140342CE2
 * 0000000140342CED: mov     r11d, r12d
 * 0000000140342CF0: xor     r13d, r13d
 * 0000000140342CF3: shr     r11d, 7
 * 0000000140342CF7: mov     r8, rsi
 * 0000000140342CFA: test    r11d, r11d
 * 0000000140342CFD: jz      short loc_140342D75
 * 0000000140342CFF: mov     rdi, 7010008004002001h
 * 0000000140342D09: mov     edx, 8
 * 0000000140342D0E: lea     r13d, [rdx-7]
 * 0000000140342D12: mov     rax, [r9]
 * 0000000140342D15: mov     ecx, r10d
 * 0000000140342D18: xor     rax, r8
 * 0000000140342D1B: mov     r8, [r9+8]
 * 0000000140342D1F: rol     rax, cl
 * 0000000140342D22: add     r9, 10h
 * 0000000140342D26: xor     r8, rax
 * 0000000140342D29: rol     r8, cl
 * 0000000140342D2C: sub     rdx, r13
 * 0000000140342D2F: jnz     short loc_140342D12
 * 0000000140342D31: mov     rcx, r9
 * 0000000140342D34: sub     rcx, r15
 * 0000000140342D37: xor     rcx, rsi
 * 0000000140342D3A: mov     rax, rcx
 * 0000000140342D3D: rol     rax, 11h
 * 0000000140342D41: xor     rcx, rax
 * 0000000140342D44: mov     rax, rdi
 * 0000000140342D47: mul     rcx
 * 0000000140342D4A: xor     eax, edx
 * 0000000140342D4C: mov     [rbp+20F0h+var_1948], rdx
 * 0000000140342D53: xor     r10d, eax
 * 0000000140342D56: mov     rax, r13
 * 0000000140342D59: and     r10d, 3Fh
 * 0000000140342D5D: cmovz   r10d, eax
 * 0000000140342D61: mov     eax, 0FFFFFFFFh
 * 0000000140342D66: add     r11d, eax
 * 0000000140342D69: jnz     short loc_140342D09
 * 0000000140342D6B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140342D72: xor     r13d, r13d
 * 0000000140342D75: mov     edx, r12d
 * 0000000140342D78: mov     esi, 1
 * 0000000140342D7D: and     edx, 7Fh
 * 0000000140342D80: cmp     edx, 8
 * 0000000140342D83: jb      short loc_140342DA1
 * 0000000140342D85: mov     r11d, edx
 * 0000000140342D88: shr     r11, 3
 * 0000000140342D8C: xor     r8, [r9]
 * 0000000140342D8F: mov     ecx, r10d
 * 0000000140342D92: rol     r8, cl
 * 0000000140342D95: add     r9, 8
 * 0000000140342D99: add     edx, 0FFFFFFF8h
 * 0000000140342D9C: sub     r11, rsi
 * 0000000140342D9F: jnz     short loc_140342D8C
 * 0000000140342DA1: test    edx, edx
 * 0000000140342DA3: jz      short loc_140342DC5
 * 0000000140342DA5: mov     edi, 0FFFFFFFFh
 * 0000000140342DAA: movzx   eax, byte ptr [r9]
 * 0000000140342DAE: mov     ecx, r10d
 * 0000000140342DB1: xor     r8, rax
 * 0000000140342DB4: add     r9, rsi
 * 0000000140342DB7: rol     r8, cl
 * 0000000140342DBA: add     edx, edi
 * 0000000140342DBC: jnz     short loc_140342DAA
 * 0000000140342DBE: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140342DC5: mov     rax, r8
 * 0000000140342DC8: shr     rax, 1Fh
 * 0000000140342DCC: xor     r10d, r10d
 * 0000000140342DCF: jmp     short loc_140342DD8
 * 0000000140342DD1: xor     r8d, eax
 * 0000000140342DD4: shr     rax, 1Fh
 * 0000000140342DD8: test    rax, rax
 * 0000000140342DDB: jnz     short loc_140342DD1
 * 0000000140342DDD: btr     r8d, 1Fh
 * 0000000140342DE2: mov     rsi, r14
 * 0000000140342DE5: mov     [rbx+14h], r8d
 * 0000000140342DE9: mov     rbx, r14
 * 0000000140342DEC: add     [r14+810h], r12d
 * 0000000140342DF3: mov     dword ptr [rbx+934h], 0Ah
 * 0000000140342DFD: mov     dword ptr [rbx+934h], 0Bh
 * 0000000140342E07: jmp     loc_1403406E7
 * 0000000140342E0C: mov     r15d, 1
 * 0000000140342E12: mov     r12d, 0FFFFFFFFh
 * 0000000140342E18: cmp     [rbx+8D8h], r10d
 * 0000000140342E1F: jnz     loc_1403406F3
 * 0000000140342E25: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140342E2F: add     rax, rbx
 * 0000000140342E32: mov     [rbx+8E0h], rax
 * 0000000140342E39: mov     [rbx+8E8h], r10
 * 0000000140342E40: mov     qword ptr [rbx+8F0h], 105h
 * 0000000140342E4B: mov     qword ptr [rbx+8F8h], 0FFFFFFFFC000007Bh
 * 0000000140342E56: mov     [rbx+8D8h], r15d
 * 0000000140342E5D: jmp     loc_1403406F3
 * 0000000140342E62: mov     r15d, 1
 * 0000000140342E68: jmp     loc_1403406F3
 * 0000000140342E6D: mov     [rbx+950h], r12d
 * 0000000140342E74: test    r14, r14
 * 0000000140342E77: jz      loc_1403430C8
 * 0000000140342E7D: mov     rax, [rbx+280h]
 * 0000000140342E84: mov     rcx, r14
 * 0000000140342E87: call    KeGuardDispatchICall
 * 0000000140342E8C: jmp     loc_1403430C8
 * 0000000140342E91: mov     eax, [rsi+818h]
 * 0000000140342E97: test    r15b, al
 * 0000000140342E9A: jz      loc_1403430C8
 * 0000000140342EA0: mov     ecx, [rsi+950h]
 * 0000000140342EA6: mov     r12d, 0FFFFFFFFh
 * 0000000140342EAC: cmp     ecx, r12d
 * 0000000140342EAF: jz      short loc_140342EC2
 * 0000000140342EB1: mov     rax, [rsi+270h]
 * 0000000140342EB8: call    KeGuardDispatchICall
 * 0000000140342EBD: mov     rbx, rax
 * 0000000140342EC0: jmp     short loc_140342EC5
 * 0000000140342EC2: mov     rbx, r10
 * 0000000140342EC5: test    rbx, rbx
 * 0000000140342EC8: jnz     short loc_140342EE4
 * 0000000140342ECA: mov     rax, [rsi+278h]
 * 0000000140342ED1: xor     ecx, ecx
 * 0000000140342ED3: call    KeGuardDispatchICall
 * 0000000140342ED8: mov     rbx, rax
 * 0000000140342EDB: test    rax, rax
 * 0000000140342EDE: jz      loc_1403430C8
 * 0000000140342EE4: mov     rax, [rsi+288h]
 * 0000000140342EEB: lea     rdx, [rbp+20F0h+var_1B40]
 * 0000000140342EF2: mov     rcx, rbx
 * 0000000140342EF5: call    KeGuardDispatchICall
 * 0000000140342EFA: mov     r14d, eax
 * 0000000140342EFD: test    eax, eax
 * 0000000140342EFF: jns     short loc_140342F15
 * 0000000140342F01: mov     rax, [rsi+280h]
 * 0000000140342F08: mov     rcx, rbx
 * 0000000140342F0B: call    KeGuardDispatchICall
 * 0000000140342F10: xor     r10d, r10d
 * 0000000140342F13: jmp     short loc_140342F7D
 * 0000000140342F15: mov     [rsi+960h], rbx
 * 0000000140342F1C: mov     rax, [rsi+2B0h]
 * 0000000140342F23: call    KeGuardDispatchICall
 * 0000000140342F28: mov     rbx, rax
 * 0000000140342F2B: mov     rax, [rsi+2D0h]
 * 0000000140342F32: mov     rcx, rbx
 * 0000000140342F35: call    KeGuardDispatchICall
 * 0000000140342F3A: xor     r10d, r10d
 * 0000000140342F3D: mov     rdx, rax
 * 0000000140342F40: test    rax, rax
 * 0000000140342F43: jnz     short loc_140342F4A
 * 0000000140342F45: lea     ecx, [rax+4]
 * 0000000140342F48: jmp     short loc_140342F5F
 * 0000000140342F4A: mov     rax, [rsi+2E0h]
 * 0000000140342F51: mov     rcx, rbx
 * 0000000140342F54: call    KeGuardDispatchICall
 * 0000000140342F59: xor     r10d, r10d
 * 0000000140342F5C: mov     ecx, r10d
 * 0000000140342F5F: mov     eax, [rsi+974h]
 * 0000000140342F65: mov     r14d, r10d
 * 0000000140342F68: and     eax, 0FFFFFFFBh
 * 0000000140342F6B: or      eax, ecx
 * 0000000140342F6D: mov     [rsi+974h], eax
 * 0000000140342F73: add     dword ptr [rsi+810h], 10000h
 * 0000000140342F7D: test    r14d, r14d
 * 0000000140342F80: js      loc_1403430C8
 * 0000000140342F86: mov     rax, [rsi+940h]
 * 0000000140342F8D: mov     rcx, [rax]
 * 0000000140342F90: cmp     rcx, [rsi+948h]
 * 0000000140342F97: jnz     loc_140343027
 * 0000000140342F9D: mov     rax, [rsi+560h]
 * 0000000140342FA4: cmp     [rax+30h], r10d
 * 0000000140342FA8: jz      short loc_140343027
 * 0000000140342FAA: lock or [rsp+10F0h+var_10F0], r10d
 * 0000000140342FAF: mov     rax, [rsi+940h]
 * 0000000140342FB6: mov     rcx, [rax]
 * 0000000140342FB9: cmp     rcx, [rsi+948h]
 * 0000000140342FC0: jnz     short loc_140343027
 * 0000000140342FC2: mov     rax, [rsi+940h]
 * 0000000140342FC9: mov     rdx, [rax]
 * 0000000140342FCC: mov     eax, [rsi+8D8h]
 * 0000000140342FD2: mov     rcx, [rsi+948h]
 * 0000000140342FD9: test    eax, eax
 * 0000000140342FDB: jnz     short loc_140343027
 * 0000000140342FDD: mov     rax, [rsi+580h]
 * 0000000140342FE4: xor     rcx, rdx
 * 0000000140342FE7: mov     [rax+18h], rcx
 * 0000000140342FEB: mov     eax, [rsi+8D8h]
 * 0000000140342FF1: mov     rcx, [rsi+948h]
 * 0000000140342FF8: test    eax, eax
 * 0000000140342FFA: jnz     short loc_140343027
 * 0000000140342FFC: lea     rax, [rsi+r13]
 * 0000000140343000: mov     [rsi+8E0h], rax
 * 0000000140343007: mov     [rsi+8E8h], r10
 * 000000014034300E: mov     qword ptr [rsi+8F0h], 103h
 * 0000000140343019: mov     [rsi+8F8h], rcx
 * 0000000140343020: mov     [rsi+8D8h], r15d
 * 0000000140343027: mov     ecx, 8000h
 * 000000014034302C: test    [rsi+970h], ecx
 * 0000000140343032: jnz     short loc_140343041
 * 0000000140343034: cmp     [rsi+8D8h], r10d
 * 000000014034303B: jnz     loc_1403430C8
 * 0000000140343041: mov     rbx, [rsi+960h]
 * 0000000140343048: lea     rdx, [rbp+20F0h+var_1B40]
 * 000000014034304F: mov     [rsi+960h], r10
 * 0000000140343056: mov     rcx, rbx
 * 0000000140343059: mov     rax, [rsi+290h]
 * 0000000140343060: call    KeGuardDispatchICall
 * 0000000140343065: mov     eax, [rsi+970h]
 * 000000014034306B: test    r15b, al
 * 000000014034306E: jz      short loc_1403430AE
 * 0000000140343070: and     eax, 0FFFFFFFEh
 * 0000000140343073: mov     rcx, rbx
 * 0000000140343076: mov     [rsi+970h], eax
 * 000000014034307C: mov     rax, [rsi+278h]
 * 0000000140343083: call    KeGuardDispatchICall
 * 0000000140343088: mov     rbx, rax
 * 000000014034308B: test    rax, rax
 * 000000014034308E: jz      short loc_1403430A7
 * 0000000140343090: mov     rax, [rsi+298h]
 * 0000000140343097: mov     rcx, rbx
 * 000000014034309A: call    KeGuardDispatchICall
 * 000000014034309F: mov     [rsi+950h], eax
 * 00000001403430A5: jmp     short loc_1403430AE
 * 00000001403430A7: mov     [rsi+950h], r12d
 * 00000001403430AE: test    rbx, rbx
 * 00000001403430B1: jz      short loc_1403430C8
 * 00000001403430B3: mov     rax, [rsi+280h]
 * 00000001403430BA: mov     rcx, rbx
 * 00000001403430BD: jmp     loc_140342E87
 * 00000001403430C2: mov     r15d, 1
 * 00000001403430C8: mov     [rbp+20F0h+var_20E0], rsi
 * 00000001403430CC: test    dword ptr [rsi+970h], 2000000h
 * 00000001403430D6: jz      short loc_14034314C
 * 00000001403430D8: mov     rbx, [rsi+978h]
 * 00000001403430DF: mov     rax, [rsi+388h]
 * 00000001403430E6: mov     rcx, rbx
 * 00000001403430E9: call    KeGuardDispatchICall
 * 00000001403430EE: xor     ecx, ecx
 * 00000001403430F0: test    eax, eax
 * 00000001403430F2: jz      short loc_140343130
 * 00000001403430F4: cmp     [rsi+8D8h], ecx
 * 00000001403430FA: jnz     short loc_140343130
 * 00000001403430FC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140343106: add     rax, rsi
 * 0000000140343109: mov     [rsi+8E0h], rax
 * 0000000140343110: mov     [rsi+8E8h], rcx
 * 0000000140343117: mov     qword ptr [rsi+8F0h], 110h
 * 0000000140343122: mov     [rsi+8F8h], rcx
 * 0000000140343129: mov     [rsi+8D8h], r15d
 * 0000000140343130: mov     rax, [rsi+380h]
 * 0000000140343137: lea     rdx, sub_14034A750
 * 000000014034313E: xor     r9d, r9d
 * 0000000140343141: mov     r8, rsi
 * 0000000140343144: mov     rcx, rbx
 * 0000000140343147: call    KeGuardDispatchICall
 * 000000014034314C: test    dword ptr [rsi+974h], 100h
 * 0000000140343156: jz      short loc_140343167
 * 0000000140343158: mov     rax, [rbp+20F0h+var_2038]
 * 000000014034315F: mov     [rsp+10F8h], rax
 * 0000000140343167: mov     r9d, [rsi+970h]
 * 000000014034316E: xor     r11d, r11d
 * 0000000140343171: mov     r8d, r9d
 * 0000000140343174: bt      r9d, 12h
 * 0000000140343179: jnb     loc_14034320D
 * 000000014034317F: rdtsc
 * 0000000140343181: shl     rdx, 20h
 * 0000000140343185: or      rax, rdx
 * 0000000140343188: mov     rcx, rax
 * 000000014034318B: ror     rax, 3
 * 000000014034318F: xor     rcx, rax
 * 0000000140343192: mov     rax, 7010008004002001h
 * 000000014034319C: mul     rcx
 * 000000014034319F: mov     rcx, rdx
 * 00000001403431A2: mov     [rbp+20F0h+var_1940], rdx
 * 00000001403431A9: xor     rcx, rax
 * 00000001403431AC: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001403431B6: mul     rcx
 * 00000001403431B9: shr     rdx, 3
 * 00000001403431BD: lea     rax, [rdx+rdx*4]
 * 00000001403431C1: add     rax, rax
 * 00000001403431C4: sub     rcx, rax
 * 00000001403431C7: lea     eax, [r11+2]
 * 00000001403431CB: cmp     rcx, rax
 * 00000001403431CE: jnb     short loc_14034320D
 * 00000001403431D0: cmp     [rsi+8D8h], r11d
 * 00000001403431D7: jnz     short loc_14034320D
 * 00000001403431D9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403431E3: add     rax, rsi
 * 00000001403431E6: mov     [rsi+8E0h], rax
 * 00000001403431ED: mov     [rsi+8E8h], r11
 * 00000001403431F4: mov     qword ptr [rsi+8F0h], 108h
 * 00000001403431FF: mov     [rsi+8F8h], r11
 * 0000000140343206: mov     [rsi+8D8h], r15d
 * 000000014034320D: mov     r10d, 8000h
 * 0000000140343213: bt      r8d, 1Eh
 * 0000000140343218: jb      short loc_14034328A
 * 000000014034321A: test    r10d, r8d
 * 000000014034321D: jnz     short loc_140343228
 * 000000014034321F: cmp     [rsi+8D8h], r11d
 * 0000000140343226: jnz     short loc_14034328A
 * 0000000140343228: mov     rcx, [rsp+10F0h+arg_0]
 * 0000000140343230: test    [rcx+970h], r10d
 * 0000000140343237: jnz     short loc_14034328A
 * 0000000140343239: add     rcx, 8D8h
 * 0000000140343240: cmp     [rcx], r11d
 * 0000000140343243: jz      short loc_14034328A
 * 0000000140343245: mov     r8d, 28h ; '('
 * 000000014034324B: lea     rdx, [rsi+8D8h]
 * 0000000140343252: lea     r9d, [r8-23h]
 * 0000000140343256: mov     rax, [rdx]
 * 0000000140343259: add     r8d, 0FFFFFFF8h
 * 000000014034325D: mov     [rcx], rax
 * 0000000140343260: add     rdx, 8
 * 0000000140343264: add     rcx, 8
 * 0000000140343268: sub     r9, r15
 * 000000014034326B: jnz     short loc_140343256
 * 000000014034326D: test    r8d, r8d
 * 0000000140343270: jz      short loc_14034328A
 * 0000000140343272: mov     r11d, 0FFFFFFFFh
 * 0000000140343278: mov     al, [rdx]
 * 000000014034327A: add     rdx, r15
 * 000000014034327D: mov     [rcx], al
 * 000000014034327F: add     rcx, r15
 * 0000000140343282: add     r8d, r11d
 * 0000000140343285: jnz     short loc_140343278
 * 0000000140343287: xor     r11d, r11d
 * 000000014034328A: test    [rsi+970h], r10d
 * 0000000140343291: jnz     short loc_1403432A0
 * 0000000140343293: cmp     [rsi+8D8h], r11d
 * 000000014034329A: jnz     loc_140343E44
 * 00000001403432A0: mov     eax, [rsi+0A08h]
 * 00000001403432A6: test    eax, eax
 * 00000001403432A8: jz      loc_140343E44
 * 00000001403432AE: lea     r14, [rsi+rax]
 * 00000001403432B2: xor     r13d, r13d
 * 00000001403432B5: mov     r11, [r14+8]
 * 00000001403432B9: mov     [rbp+20F0h+var_20B0], r14
 * 00000001403432BD: test    r11, r11
 * 00000001403432C0: jz      loc_140343581
 * 00000001403432C6: mov     r9d, [r14+10h]
 * 00000001403432CA: mov     r8, r11
 * 00000001403432CD: add     [rsi+810h], r9d
 * 00000001403432D4: mov     rax, r11
 * 00000001403432D7: mov     r10d, [rsi+7FCh]
 * 00000001403432DE: mov     r12, [rsi+800h]
 * 00000001403432E5: lea     rcx, [r11+r9]
 * 00000001403432E9: cmp     r11, rcx
 * 00000001403432EC: jnb     short loc_1403432FD
 * 00000001403432EE: lea     edx, [r13+40h]
 * 00000001403432F2: prefetchnta byte ptr [rax]
 * 00000001403432F5: add     rax, rdx
 * 00000001403432F8: cmp     rax, rcx
 * 00000001403432FB: jb      short loc_1403432F2
 * 00000001403432FD: mov     r15d, r9d
 * 0000000140343300: mov     rbx, r12
 * 0000000140343303: shr     r15d, 7
 * 0000000140343307: mov     edx, 1
 * 000000014034330C: test    r15d, r15d
 * 000000014034330F: jz      short loc_140343380
 * 0000000140343311: mov     rdi, 7010008004002001h
 * 000000014034331B: mov     r13d, 0FFFFFFFFh
 * 0000000140343321: mov     eax, 8
 * 0000000140343326: xor     rbx, [r8]
 * 0000000140343329: mov     ecx, r10d
 * 000000014034332C: rol     rbx, cl
 * 000000014034332F: xor     rbx, [r8+8]
 * 0000000140343333: add     r8, 10h
 * 0000000140343337: rol     rbx, cl
 * 000000014034333A: sub     rax, rdx
 * 000000014034333D: jnz     short loc_140343326
 * 000000014034333F: mov     rcx, r8
 * 0000000140343342: sub     rcx, r11
 * 0000000140343345: xor     rcx, r12
 * 0000000140343348: mov     rax, rcx
 * 000000014034334B: rol     rax, 11h
 * 000000014034334F: xor     rcx, rax
 * 0000000140343352: mov     rax, rdi
 * 0000000140343355: mul     rcx
 * 0000000140343358: xor     eax, edx
 * 000000014034335A: mov     [rbp+20F0h+var_1938], rdx
 * 0000000140343361: xor     r10d, eax
 * 0000000140343364: mov     edx, 1
 * 0000000140343369: and     r10d, 3Fh
 * 000000014034336D: cmovz   r10d, edx
 * 0000000140343371: add     r15d, r13d
 * 0000000140343374: jnz     short loc_140343321
 * 0000000140343376: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034337D: xor     r13d, r13d
 * 0000000140343380: and     r9d, 7Fh
 * 0000000140343384: cmp     r9d, 8
 * 0000000140343388: jb      short loc_1403433A7
 * 000000014034338A: mov     eax, r9d
 * 000000014034338D: shr     rax, 3
 * 0000000140343391: xor     rbx, [r8]
 * 0000000140343394: mov     ecx, r10d
 * 0000000140343397: rol     rbx, cl
 * 000000014034339A: add     r8, 8
 * 000000014034339E: add     r9d, 0FFFFFFF8h
 * 00000001403433A2: sub     rax, rdx
 * 00000001403433A5: jnz     short loc_140343391
 * 00000001403433A7: test    r9d, r9d
 * 00000001403433AA: jz      short loc_1403433CA
 * 00000001403433AC: mov     r13d, 0FFFFFFFFh
 * 00000001403433B2: movzx   eax, byte ptr [r8]
 * 00000001403433B6: mov     ecx, r10d
 * 00000001403433B9: xor     rbx, rax
 * 00000001403433BC: add     r8, rdx
 * 00000001403433BF: rol     rbx, cl
 * 00000001403433C2: add     r9d, r13d
 * 00000001403433C5: jnz     short loc_1403433B2
 * 00000001403433C7: xor     r13d, r13d
 * 00000001403433CA: mov     rax, rbx
 * 00000001403433CD: jmp     short loc_1403433D1
 * 00000001403433CF: xor     ebx, eax
 * 00000001403433D1: shr     rax, 1Fh
 * 00000001403433D5: test    rax, rax
 * 00000001403433D8: jnz     short loc_1403433CF
 * 00000001403433DA: btr     ebx, 1Fh
 * 00000001403433DE: mov     r12d, r13d
 * 00000001403433E1: cmp     ebx, [r14+14h]
 * 00000001403433E5: jz      loc_140343547
 * 00000001403433EB: cmp     [r14], r13d
 * 00000001403433EE: jnz     short loc_1403433F8
 * 00000001403433F0: cmp     [r14+18h], r13d
 * 00000001403433F4: cmovnz  r12d, edx
 * 00000001403433F8: mov     ecx, [r14+10h]
 * 00000001403433FC: mov     rdx, [r14+8]
 * 0000000140343400: test    rcx, rcx
 * 0000000140343403: jz      loc_1403434D7
 * 0000000140343409: mov     eax, [rsi+974h]
 * 000000014034340F: mov     r8d, 40h ; '@'
 * 0000000140343415: test    r8b, al
 * 0000000140343418: jz      loc_1403434D7
 * 000000014034341E: mov     rax, cr8
 * 0000000140343422: mov     [rbp+20F0h+var_2038], rax
 * 0000000140343429: mov     r8d, 2
 * 000000014034342F: mov     cr8, r8
 * 0000000140343433: mov     r15, rdx
 * 0000000140343436: dec     rdx
 * 0000000140343439: add     rcx, rdx
 * 000000014034343C: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140343443: mov     edx, 0FFFh
 * 0000000140343448: or      rcx, rdx
 * 000000014034344B: mov     [rbp+20F0h+var_2070], rcx
 * 0000000140343452: lea     rcx, [r15-1]
 * 0000000140343456: mov     [rbp+20F0h+var_2088], rcx
 * 000000014034345A: movzx   r13d, al
 * 000000014034345E: mov     rax, [rsi+460h]
 * 0000000140343465: xor     edx, edx
 * 0000000140343467: mov     rcx, r15
 * 000000014034346A: call    KeGuardDispatchICall
 * 000000014034346F: cmp     eax, 0C000022Dh
 * 0000000140343474: jnz     short loc_1403434A3
 * 0000000140343476: test    r12d, r12d
 * 0000000140343479: jnz     short loc_1403434D0
 * 000000014034347B: mov     rax, [rbp+20F0h+var_2038]
 * 0000000140343482: lea     ecx, [r12+1]
 * 0000000140343487: cmp     al, cl
 * 0000000140343489: ja      short loc_1403434AE
 * 000000014034348B: movzx   r13d, al
 * 000000014034348F: mov     cr8, r13
 * 0000000140343493: mov     al, [r15]
 * 0000000140343496: mov     rax, cr8
 * 000000014034349A: lea     eax, [rcx+1]
 * 000000014034349D: mov     cr8, rax
 * 00000001403434A1: jmp     short loc_14034345E
 * 00000001403434A3: test    eax, eax
 * 00000001403434A5: js      short loc_1403434D0
 * 00000001403434A7: mov     rax, [rbp+20F0h+var_2038]
 * 00000001403434AE: mov     rcx, [rbp+20F0h+var_2088]
 * 00000001403434B2: mov     edx, 1000h
 * 00000001403434B7: add     rcx, rdx
 * 00000001403434BA: add     r15, rdx
 * 00000001403434BD: mov     [rbp+20F0h+var_2088], rcx
 * 00000001403434C1: cmp     rcx, [rbp+20F0h+var_2070]
 * 00000001403434C8: jnz     short loc_14034345A
 * 00000001403434CA: mov     cr8, r13
 * 00000001403434CE: jmp     short loc_140343547
 * 00000001403434D0: mov     cr8, r13
 * 00000001403434D4: xor     r13d, r13d
 * 00000001403434D7: mov     eax, [rsi+8D8h]
 * 00000001403434DD: mov     ecx, [r14+14h]
 * 00000001403434E1: test    eax, eax
 * 00000001403434E3: jnz     short loc_1403434FB
 * 00000001403434E5: mov     eax, ebx
 * 00000001403434E7: xor     rcx, rax
 * 00000001403434EA: mov     rax, [rsi+580h]
 * 00000001403434F1: mov     [rax+18h], rcx
 * 00000001403434F5: mov     eax, [rsi+8D8h]
 * 00000001403434FB: mov     rcx, [r14+8]
 * 00000001403434FF: test    eax, eax
 * 0000000140343501: jnz     short loc_140343547
 * 0000000140343503: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014034350D: add     rax, rsi
 * 0000000140343510: mov     [rsi+8E0h], rax
 * 0000000140343517: mov     rax, 0B3B74BDEE4453415h
 * 0000000140343521: add     rax, r14
 * 0000000140343524: mov     [rsi+8E8h], rax
 * 000000014034352B: movsxd  rax, dword ptr [r14]
 * 000000014034352E: mov     [rsi+8F0h], rax
 * 0000000140343535: mov     eax, 1
 * 000000014034353A: mov     [rsi+8F8h], rcx
 * 0000000140343541: mov     [rsi+8D8h], eax
 * 0000000140343547: mov     rcx, [r14+18h]
 * 000000014034354B: mov     rax, [rsi+0F8h]
 * 0000000140343552: call    KeGuardDispatchICall
 * 0000000140343557: xor     r11d, r11d
 * 000000014034355A: mov     [r14+8], r11
 * 000000014034355E: mov     [r14+10h], r11d
 * 0000000140343562: mov     rcx, [rsi+800h]
 * 0000000140343569: mov     rax, rcx
 * 000000014034356C: jmp     short loc_140343570
 * 000000014034356E: xor     ecx, eax
 * 0000000140343570: shr     rax, 1Fh
 * 0000000140343574: test    rax, rax
 * 0000000140343577: jnz     short loc_14034356E
 * 0000000140343579: btr     ecx, 1Fh
 * 000000014034357D: mov     [r14+14h], ecx
 * 0000000140343581: rdtsc
 * 0000000140343583: shl     rdx, 20h
 * 0000000140343587: mov     r9, 7010008004002001h
 * 0000000140343591: or      rax, rdx
 * 0000000140343594: mov     rcx, rax
 * 0000000140343597: ror     rax, 3
 * 000000014034359B: xor     rcx, rax
 * 000000014034359E: mov     rax, r9
 * 00000001403435A1: mul     rcx
 * 00000001403435A4: mov     rcx, rdx
 * 00000001403435A7: mov     [rbp+20F0h+var_1930], rdx
 * 00000001403435AE: xor     rcx, rax
 * 00000001403435B1: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001403435BB: mul     rcx
 * 00000001403435BE: shr     rdx, 1
 * 00000001403435C1: lea     rax, [rdx+rdx*2]
 * 00000001403435C5: cmp     rcx, rax
 * 00000001403435C8: jnz     loc_140343E4E
 * 00000001403435CE: lea     r12, [r14+18h]
 * 00000001403435D2: mov     r8d, [rsi+7F8h]
 * 00000001403435D9: rdtsc
 * 00000001403435DB: shl     rdx, 20h
 * 00000001403435DF: or      rax, rdx
 * 00000001403435E2: mov     rcx, rax
 * 00000001403435E5: ror     rax, 3
 * 00000001403435E9: xor     rcx, rax
 * 00000001403435EC: mov     rax, r9
 * 00000001403435EF: mul     rcx
 * 00000001403435F2: mov     rbx, rax
 * 00000001403435F5: mov     [rbp+20F0h+var_1928], rdx
 * 00000001403435FC: xor     ebx, edx
 * 00000001403435FE: and     ebx, 7FFh
 * 0000000140343604: rdtsc
 * 0000000140343606: shl     rdx, 20h
 * 000000014034360A: or      rax, rdx
 * 000000014034360D: mov     rcx, rax
 * 0000000140343610: ror     rax, 3
 * 0000000140343614: xor     rcx, rax
 * 0000000140343617: mov     rax, r9
 * 000000014034361A: mul     rcx
 * 000000014034361D: mov     ecx, [rsi+970h]
 * 0000000140343623: lea     r9d, [rbx+1]
 * 0000000140343627: xor     rax, rdx
 * 000000014034362A: mov     [rbp+20F0h+var_1920], rdx
 * 0000000140343631: xor     edx, edx
 * 0000000140343633: shr     ecx, 13h
 * 0000000140343636: div     r9
 * 0000000140343639: mov     rax, [rsi+0F0h]
 * 0000000140343640: and     ecx, 200h
 * 0000000140343646: mov     r15, rdx
 * 0000000140343649: lea     edx, [rbx+0A70h]
 * 000000014034364F: call    KeGuardDispatchICall
 * 0000000140343654: xor     r13d, r13d
 * 0000000140343657: mov     r11, rax
 * 000000014034365A: test    rax, rax
 * 000000014034365D: jnz     short loc_140343679
 * 000000014034365F: lea     r12d, [rax+1]
 * 0000000140343663: add     [rsi+9F8h], r12d
 * 000000014034366A: mov     r9, 7010008004002001h
 * 0000000140343674: jmp     loc_140343E54
 * 0000000140343679: mov     r9d, r15d
 * 000000014034367C: mov     r8, r11
 * 000000014034367F: cmp     r15d, 8
 * 0000000140343683: jb      short loc_1403436D6
 * 0000000140343685: mov     r10d, r15d
 * 0000000140343688: mov     r13d, 1
 * 000000014034368E: shr     r10, 3
 * 0000000140343692: mov     r14, 7010008004002001h
 * 000000014034369C: rdtsc
 * 000000014034369E: shl     rdx, 20h
 * 00000001403436A2: add     r9d, 0FFFFFFF8h
 * 00000001403436A6: or      rax, rdx
 * 00000001403436A9: mov     rcx, rax
 * 00000001403436AC: ror     rax, 3
 * 00000001403436B0: xor     rcx, rax
 * 00000001403436B3: mov     rax, r14
 * 00000001403436B6: mul     rcx
 * 00000001403436B9: mov     [rbp+20F0h+var_1918], rdx
 * 00000001403436C0: xor     rdx, rax
 * 00000001403436C3: mov     [r8], rdx
 * 00000001403436C6: add     r8, 8
 * 00000001403436CA: sub     r10, r13
 * 00000001403436CD: jnz     short loc_14034369C
 * 00000001403436CF: mov     r14, [rbp+20F0h+var_20B0]
 * 00000001403436D3: xor     r13d, r13d
 * 00000001403436D6: test    r9d, r9d
 * 00000001403436D9: jz      short loc_14034371E
 * 00000001403436DB: rdtsc
 * 00000001403436DD: shl     rdx, 20h
 * 00000001403436E1: or      rax, rdx
 * 00000001403436E4: mov     rcx, rax
 * 00000001403436E7: ror     rax, 3
 * 00000001403436EB: xor     rcx, rax
 * 00000001403436EE: mov     rax, 7010008004002001h
 * 00000001403436F8: mul     rcx
 * 00000001403436FB: mov     ecx, 0FFFFFFFFh
 * 0000000140343700: mov     [rbp+20F0h+var_1910], rdx
 * 0000000140343707: xor     rdx, rax
 * 000000014034370A: mov     eax, 1
 * 000000014034370F: mov     [r8], dl
 * 0000000140343712: add     r8, rax
 * 0000000140343715: shr     rdx, 8
 * 0000000140343719: add     r9d, ecx
 * 000000014034371C: jnz     short loc_14034370F
 * 000000014034371E: mov     r8d, r15d
 * 0000000140343721: sub     ebx, r15d
 * 0000000140343724: add     r8, r11
 * 0000000140343727: mov     r15d, 1
 * 000000014034372D: lea     r9, [r8+0A70h]
 * 0000000140343734: cmp     ebx, 8
 * 0000000140343737: jb      short loc_14034377F
 * 0000000140343739: mov     r10d, ebx
 * 000000014034373C: mov     r13, 7010008004002001h
 * 0000000140343746: shr     r10, 3
 * 000000014034374A: rdtsc
 * 000000014034374C: shl     rdx, 20h
 * 0000000140343750: add     ebx, 0FFFFFFF8h
 * 0000000140343753: or      rax, rdx
 * 0000000140343756: mov     rcx, rax
 * 0000000140343759: ror     rax, 3
 * 000000014034375D: xor     rcx, rax
 * 0000000140343760: mov     rax, r13
 * 0000000140343763: mul     rcx
 * 0000000140343766: mov     [rbp+20F0h+var_1908], rdx
 * 000000014034376D: xor     rdx, rax
 * 0000000140343770: mov     [r9], rdx
 * 0000000140343773: add     r9, 8
 * 0000000140343777: sub     r10, r15
 * 000000014034377A: jnz     short loc_14034374A
 * 000000014034377C: xor     r13d, r13d
 * 000000014034377F: test    ebx, ebx
 * 0000000140343781: jz      short loc_1403437C0
 * 0000000140343783: rdtsc
 * 0000000140343785: shl     rdx, 20h
 * 0000000140343789: or      rax, rdx
 * 000000014034378C: mov     rcx, rax
 * 000000014034378F: ror     rax, 3
 * 0000000140343793: xor     rcx, rax
 * 0000000140343796: mov     rax, 7010008004002001h
 * 00000001403437A0: mul     rcx
 * 00000001403437A3: mov     [rbp+20F0h+var_17E0], rdx
 * 00000001403437AA: xor     rdx, rax
 * 00000001403437AD: mov     eax, 0FFFFFFFFh
 * 00000001403437B2: mov     [r9], dl
 * 00000001403437B5: add     r9, r15
 * 00000001403437B8: shr     rdx, 8
 * 00000001403437BC: add     ebx, eax
 * 00000001403437BE: jnz     short loc_1403437B2
 * 00000001403437C0: test    r12, r12
 * 00000001403437C3: jz      short loc_1403437C9
 * 00000001403437C5: mov     [r12], r11
 * 00000001403437C9: xor     r11d, r11d
 * 00000001403437CC: test    r8, r8
 * 00000001403437CF: jz      loc_140343E44
 * 00000001403437D5: mov     r10d, 0A70h
 * 00000001403437DB: mov     [r14+8], r8
 * 00000001403437DF: mov     [r14+10h], r10d
 * 00000001403437E3: mov     r9d, r10d
 * 00000001403437E6: mov     r14d, 14Eh
 * 00000001403437EC: mov     rcx, rsi
 * 00000001403437EF: mov     rdx, r8
 * 00000001403437F2: mov     rax, [rcx]
 * 00000001403437F5: add     r9d, 0FFFFFFF8h
 * 00000001403437F9: mov     [rdx], rax
 * 00000001403437FC: add     rcx, 8
 * 0000000140343800: add     rdx, 8
 * 0000000140343804: sub     r14, r15
 * 0000000140343807: jnz     short loc_1403437F2
 * 0000000140343809: test    r9d, r9d
 * 000000014034380C: jz      short loc_140343829
 * 000000014034380E: mov     r10d, 0FFFFFFFFh
 * 0000000140343814: mov     al, [rcx]
 * 0000000140343816: add     rcx, r15
 * 0000000140343819: mov     [rdx], al
 * 000000014034381B: add     rdx, r15
 * 000000014034381E: add     r9d, r10d
 * 0000000140343821: jnz     short loc_140343814
 * 0000000140343823: mov     r10d, 0A70h
 * 0000000140343829: bts     dword ptr [r8+970h], 13h
 * 0000000140343832: mov     [r8+7CCh], r10d
 * 0000000140343839: mov     [r8+7F0h], r10d
 * 0000000140343840: mov     eax, [r8+970h]
 * 0000000140343847: and     eax, 0FFFFFFFDh
 * 000000014034384A: mov     [r8+970h], eax
 * 0000000140343851: mov     r12d, [r8+7F0h]
 * 0000000140343858: mov     dword ptr [rbp+20F0h+var_20B8], eax
 * 000000014034385B: sub     r12d, 0C8h
 * 0000000140343862: mov     rax, [r8+4D8h]
 * 0000000140343869: shr     r12d, 3
 * 000000014034386D: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140343871: mov     rax, [r8+5B0h]
 * 0000000140343878: mov     [rbp+20F0h+var_20A8], r12d
 * 000000014034387C: mov     [r8+0C4h], r12d
 * 0000000140343883: mov     [rbp+20F0h+var_2088], rax
 * 0000000140343887: rdtsc
 * 0000000140343889: shl     rdx, 20h
 * 000000014034388D: lea     r13, [r8+780h]
 * 0000000140343894: or      rax, rdx
 * 0000000140343897: mov     r15d, 20h ; ' '
 * 000000014034389D: mov     rcx, rax
 * 00000001403438A0: mov     r9d, r15d
 * 00000001403438A3: ror     rax, 3
 * 00000001403438A7: xor     rcx, rax
 * 00000001403438AA: mov     rax, 7010008004002001h
 * 00000001403438B4: mul     rcx
 * 00000001403438B7: lea     r11d, [r15-1Ch]
 * 00000001403438BB: mov     rcx, r13
 * 00000001403438BE: mov     rbx, rdx
 * 00000001403438C1: mov     [rbp+20F0h+var_18F8], rdx
 * 00000001403438C8: xor     rbx, rax
 * 00000001403438CB: lea     rdx, [rbp+20F0h+var_15C0]
 * 00000001403438D2: mov     rax, [r8+7A0h]
 * 00000001403438D9: lea     r14d, [r15-1Fh]
 * 00000001403438DD: mov     [rbp+20F0h+var_2038], rax
 * 00000001403438E4: mov     r10d, r11d
 * 00000001403438E7: mov     eax, [r8+810h]
 * 00000001403438EE: mov     [rbp+20F0h+var_2094], eax
 * 00000001403438F1: mov     [rbp+20F0h+var_20C8], rbx
 * 00000001403438F5: mov     rax, [rcx]
 * 00000001403438F8: add     r9d, 0FFFFFFF8h
 * 00000001403438FC: mov     [rdx], rax
 * 00000001403438FF: add     rcx, 8
 * 0000000140343903: add     rdx, 8
 * 0000000140343907: sub     r10, r14
 * 000000014034390A: jnz     short loc_1403438F5
 * 000000014034390C: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140343910: test    r9d, r9d
 * 0000000140343913: jz      short loc_140343937
 * 0000000140343915: mov     r10d, 1
 * 000000014034391B: mov     r12d, 0FFFFFFFFh
 * 0000000140343921: mov     al, [rcx]
 * 0000000140343923: add     rcx, r10
 * 0000000140343926: mov     [rdx], al
 * 0000000140343928: add     rdx, r10
 * 000000014034392B: add     r9d, r12d
 * 000000014034392E: jnz     short loc_140343921
 * 0000000140343930: mov     r12d, [rbp+20F0h+var_20A8]
 * 0000000140343934: xor     r10d, r10d
 * 0000000140343937: mov     [r8+7A0h], r10
 * 000000014034393E: mov     ecx, r15d
 * 0000000140343941: mov     [r8+810h], r10d
 * 0000000140343948: mov     rax, r13
 * 000000014034394B: mov     rdx, r11
 * 000000014034394E: mov     r9d, 1
 * 0000000140343954: mov     [rax], r10
 * 0000000140343957: add     ecx, 0FFFFFFF8h
 * 000000014034395A: add     rax, 8
 * 000000014034395E: sub     rdx, r9
 * 0000000140343961: jnz     short loc_140343954
 * 0000000140343963: test    ecx, ecx
 * 0000000140343965: jz      short loc_140343976
 * 0000000140343967: mov     edx, 0FFFFFFFFh
 * 000000014034396C: mov     [rax], r10b
 * 000000014034396F: add     rax, r9
 * 0000000140343972: add     ecx, edx
 * 0000000140343974: jnz     short loc_14034396C
 * 0000000140343976: mov     eax, [r8+7CCh]
 * 000000014034397D: mov     r10, r8
 * 0000000140343980: add     [r8+810h], eax
 * 0000000140343987: mov     rax, r8
 * 000000014034398A: mov     r11d, [r8+7CCh]
 * 0000000140343991: mov     r15d, [r8+7FCh]
 * 0000000140343998: mov     r9, [r8+800h]
 * 000000014034399F: lea     rcx, [r8+r11]
 * 00000001403439A3: cmp     r8, rcx
 * 00000001403439A6: jnb     short loc_1403439B8
 * 00000001403439A8: mov     edx, 40h ; '@'
 * 00000001403439AD: prefetchnta byte ptr [rax]
 * 00000001403439B0: add     rax, rdx
 * 00000001403439B3: cmp     rax, rcx
 * 00000001403439B6: jb      short loc_1403439AD
 * 00000001403439B8: mov     eax, r11d
 * 00000001403439BB: shr     eax, 7
 * 00000001403439BE: mov     [rbp+20F0h+var_20C0], eax
 * 00000001403439C1: test    eax, eax
 * 00000001403439C3: jz      short loc_140343A42
 * 00000001403439C5: mov     rdi, r9
 * 00000001403439C8: mov     rbx, 7010008004002001h
 * 00000001403439D2: mov     r14d, 1
 * 00000001403439D8: mov     r12d, 0FFFFFFFFh
 * 00000001403439DE: mov     eax, 8
 * 00000001403439E3: xor     r9, [r10]
 * 00000001403439E6: mov     ecx, r15d
 * 00000001403439E9: rol     r9, cl
 * 00000001403439EC: xor     r9, [r10+8]
 * 00000001403439F0: add     r10, 10h
 * 00000001403439F4: rol     r9, cl
 * 00000001403439F7: sub     rax, r14
 * 00000001403439FA: jnz     short loc_1403439E3
 * 00000001403439FC: mov     rcx, r10
 * 00000001403439FF: sub     rcx, r8
 * 0000000140343A02: xor     rcx, rdi
 * 0000000140343A05: mov     rax, rcx
 * 0000000140343A08: rol     rax, 11h
 * 0000000140343A0C: xor     rcx, rax
 * 0000000140343A0F: mov     rax, rbx
 * 0000000140343A12: mul     rcx
 * 0000000140343A15: xor     eax, edx
 * 0000000140343A17: mov     [rbp+20F0h+var_18F0], rdx
 * 0000000140343A1E: xor     r15d, eax
 * 0000000140343A21: and     r15d, 3Fh
 * 0000000140343A25: cmovz   r15d, r14d
 * 0000000140343A29: add     [rbp+20F0h+var_20C0], r12d
 * 0000000140343A2D: jnz     short loc_1403439DE
 * 0000000140343A2F: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140343A33: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140343A3A: mov     rbx, [rbp+20F0h+var_20C8]
 * 0000000140343A3E: mov     r12d, [rbp+20F0h+var_20A8]
 * 0000000140343A42: and     r11d, 7Fh
 * 0000000140343A46: cmp     r11d, 8
 * 0000000140343A4A: jb      short loc_140343A6E
 * 0000000140343A4C: mov     eax, r11d
 * 0000000140343A4F: mov     edx, 1
 * 0000000140343A54: shr     rax, 3
 * 0000000140343A58: xor     r9, [r10]
 * 0000000140343A5B: mov     ecx, r15d
 * 0000000140343A5E: rol     r9, cl
 * 0000000140343A61: add     r10, 8
 * 0000000140343A65: add     r11d, 0FFFFFFF8h
 * 0000000140343A69: sub     rax, rdx
 * 0000000140343A6C: jnz     short loc_140343A58
 * 0000000140343A6E: test    r11d, r11d
 * 0000000140343A71: jz      short loc_140343A9C
 * 0000000140343A73: mov     r14d, 1
 * 0000000140343A79: mov     r12d, 0FFFFFFFFh
 * 0000000140343A7F: movzx   eax, byte ptr [r10]
 * 0000000140343A83: mov     ecx, r15d
 * 0000000140343A86: xor     r9, rax
 * 0000000140343A89: add     r10, r14
 * 0000000140343A8C: rol     r9, cl
 * 0000000140343A8F: add     r11d, r12d
 * 0000000140343A92: jnz     short loc_140343A7F
 * 0000000140343A94: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140343A98: mov     r12d, [rbp+20F0h+var_20A8]
 * 0000000140343A9C: mov     rax, [rbp+20F0h+var_2038]
 * 0000000140343AA3: lea     rcx, [rbp+20F0h+var_15C0]
 * 0000000140343AAA: mov     edx, 20h ; ' '
 * 0000000140343AAF: mov     [r8+7A0h], rax
 * 0000000140343AB6: mov     eax, [rbp+20F0h+var_2094]
 * 0000000140343AB9: add     [r8+810h], eax
 * 0000000140343AC0: lea     r11d, [rdx-1Ch]
 * 0000000140343AC4: mov     r10d, r11d
 * 0000000140343AC7: lea     r15d, [rdx-1Fh]
 * 0000000140343ACB: mov     rax, [rcx]
 * 0000000140343ACE: add     edx, 0FFFFFFF8h
 * 0000000140343AD1: mov     [r13+0], rax
 * 0000000140343AD5: add     rcx, 8
 * 0000000140343AD9: add     r13, 8
 * 0000000140343ADD: sub     r10, r15
 * 0000000140343AE0: jnz     short loc_140343ACB
 * 0000000140343AE2: test    edx, edx
 * 0000000140343AE4: jz      short loc_140343B01
 * 0000000140343AE6: mov     r14d, 0FFFFFFFFh
 * 0000000140343AEC: mov     al, [rcx]
 * 0000000140343AEE: add     rcx, r15
 * 0000000140343AF1: mov     [r13+0], al
 * 0000000140343AF5: add     r13, r15
 * 0000000140343AF8: add     edx, r14d
 * 0000000140343AFB: jnz     short loc_140343AEC
 * 0000000140343AFD: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140343B01: xor     r13d, r13d
 * 0000000140343B04: mov     [r8+7A0h], r9
 * 0000000140343B0B: test    dword ptr [r8+970h], 40000000h
 * 0000000140343B16: jnz     loc_140343D12
 * 0000000140343B1C: mov     rcx, r8
 * 0000000140343B1F: mov     eax, r13d
 * 0000000140343B22: xor     [rcx], rbx
 * 0000000140343B25: add     eax, r15d
 * 0000000140343B28: lea     rcx, [rcx+8]
 * 0000000140343B2C: cmp     eax, 19h
 * 0000000140343B2F: jb      short loc_140343B22
 * 0000000140343B31: mov     [rbp+20F0h+var_1E10], rbx
 * 0000000140343B38: test    rbx, rbx
 * 0000000140343B3B: jz      short loc_140343B7C
 * 0000000140343B3D: test    r12d, r12d
 * 0000000140343B40: jz      short loc_140343B7C
 * 0000000140343B42: mov     edx, r12d
 * 0000000140343B45: dec     rdx
 * 0000000140343B48: lea     rdx, [rcx+rdx*8]
 * 0000000140343B4C: xor     [rdx], rbx
 * 0000000140343B4F: lea     rax, [rbp+20F0h+var_1E10]
 * 0000000140343B56: mov     ecx, r12d
 * 0000000140343B59: lea     rdx, [rdx-8]
 * 0000000140343B5D: ror     rbx, cl
 * 0000000140343B60: mov     [rbp+20F0h+var_1E10], rbx
 * 0000000140343B67: and     ebx, 3Fh
 * 0000000140343B6A: btc     [rax], rbx
 * 0000000140343B6E: sub     r12d, r15d
 * 0000000140343B71: jz      short loc_140343B7C
 * 0000000140343B73: mov     rbx, [rbp+20F0h+var_1E10]
 * 0000000140343B7A: jmp     short loc_140343B4C
 * 0000000140343B7C: mov     r12d, dword ptr [rbp+20F0h+var_20B8]
 * 0000000140343B80: bt      r12d, 13h
 * 0000000140343B85: jnb     short loc_140343BD2
 * 0000000140343B87: rdtsc
 * 0000000140343B89: shl     rdx, 20h
 * 0000000140343B8D: or      rax, rdx
 * 0000000140343B90: mov     rcx, rax
 * 0000000140343B93: ror     rax, 3
 * 0000000140343B97: xor     rcx, rax
 * 0000000140343B9A: mov     rax, 7010008004002001h
 * 0000000140343BA4: mul     rcx
 * 0000000140343BA7: mov     rcx, rdx
 * 0000000140343BAA: mov     [rbp+20F0h+var_18E8], rdx
 * 0000000140343BB1: xor     rcx, rax
 * 0000000140343BB4: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140343BBE: mul     rcx
 * 0000000140343BC1: shr     rdx, 1
 * 0000000140343BC4: lea     rax, [rdx+rdx*2]
 * 0000000140343BC8: cmp     rcx, rax
 * 0000000140343BCB: jz      short loc_140343BDD
 * 0000000140343BCD: jmp     loc_140343D12
 * 0000000140343BD2: bt      r12d, 8
 * 0000000140343BD7: jb      loc_140343D12
 * 0000000140343BDD: mov     rdi, [rbp+20F0h+var_2088]
 * 0000000140343BE1: mov     eax, 2
 * 0000000140343BE6: mov     [rbp+20F0h+var_1FB3], al
 * 0000000140343BEC: mov     ecx, r8d
 * 0000000140343BEF: mov     eax, 0Ch
 * 0000000140343BF4: mov     [rbp+20F0h+var_1FB5], r15b
 * 0000000140343BFB: mov     [rbp+20F0h+var_1FB7], al
 * 0000000140343C01: mov     r10, r8
 * 0000000140343C04: mov     eax, 0Fh
 * 0000000140343C09: mov     [rbp+20F0h+var_1FB8], r13b
 * 0000000140343C10: mov     [rbp+20F0h+var_1FB2], r11b
 * 0000000140343C17: mov     ebx, r13d
 * 0000000140343C1A: mov     r15, r13
 * 0000000140343C1D: mov     [rbp+20F0h+var_1FB0], 3
 * 0000000140343C24: mov     r13, [rbp+20F0h+var_20F0]
 * 0000000140343C28: mov     r11, r8
 * 0000000140343C2B: lea     esi, [rax+1]
 * 0000000140343C2E: mov     [rbp+20F0h+var_1FAF], 5
 * 0000000140343C35: mov     [rbp+20F0h+var_1FAC], 6
 * 0000000140343C3C: mov     [rbp+20F0h+var_1FB1], 7
 * 0000000140343C43: mov     [rbp+20F0h+var_1FAB], 8
 * 0000000140343C4A: mov     [rbp+20F0h+var_1FAE], 9
 * 0000000140343C51: mov     [rbp+20F0h+var_1FAA], 0Ah
 * 0000000140343C58: mov     [rbp+20F0h+var_1FB4], 0Bh
 * 0000000140343C5F: mov     [rbp+20F0h+var_1FA9], 0Dh
 * 0000000140343C66: mov     [rbp+20F0h+var_1FAD], 0Eh
 * 0000000140343C6D: mov     [rbp+20F0h+var_1FB6], al
 * 0000000140343C73: ror     r10, cl
 * 0000000140343C76: mov     r9, [r11]
 * 0000000140343C79: mov     r14d, 1
 * 0000000140343C7F: mov     rdx, rsi
 * 0000000140343C82: lea     r12d, [r14+0Eh]
 * 0000000140343C86: movzx   eax, byte ptr [r11]
 * 0000000140343C8A: and     r9, 0FFFFFFFFFFFFFFF0h
 * 0000000140343C8E: and     rax, r12
 * 0000000140343C91: movzx   ecx, [rbp+rax+20F0h+var_1FB8]
 * 0000000140343C99: or      r9, rcx
 * 0000000140343C9C: ror     r9, 4
 * 0000000140343CA0: mov     [r11], r9
 * 0000000140343CA3: sub     rdx, r14
 * 0000000140343CA6: jnz     short loc_140343C86
 * 0000000140343CA8: sub     r9, r15
 * 0000000140343CAB: test    dword ptr [rbp+20F0h+var_20B8], 200h
 * 0000000140343CB2: mov     [r11], r9
 * 0000000140343CB5: jnz     short loc_140343CCA
 * 0000000140343CB7: xor     r9, r13
 * 0000000140343CBA: mov     ecx, edi
 * 0000000140343CBC: bswap   r9
 * 0000000140343CBF: xor     r9, r10
 * 0000000140343CC2: ror     r9, cl
 * 0000000140343CC5: xor     r9, rdi
 * 0000000140343CC8: jmp     short loc_140343CCD
 * 0000000140343CCA: xor     r9, r10
 * 0000000140343CCD: mov     edx, 0C8h
 * 0000000140343CD2: mov     [r11], r9
 * 0000000140343CD5: sub     edx, ebx
 * 0000000140343CD7: mov     ecx, r9d
 * 0000000140343CDA: imul    edx, ebx
 * 0000000140343CDD: not     ecx
 * 0000000140343CDF: add     r11, 8
 * 0000000140343CE3: inc     ebx
 * 0000000140343CE5: add     r15, r8
 * 0000000140343CE8: ror     rdx, cl
 * 0000000140343CEB: mov     ecx, r9d
 * 0000000140343CEE: xor     r10, rdx
 * 0000000140343CF1: rol     r10, cl
 * 0000000140343CF4: add     r10, r8
 * 0000000140343CF7: cmp     ebx, 19h
 * 0000000140343CFA: jb      loc_140343C76
 * 0000000140343D00: mov     rsi, [rbp+20F0h+var_20E0]
 * 0000000140343D04: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140343D0B: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140343D0F: xor     r13d, r13d
 * 0000000140343D12: mov     r15, [r14+8]
 * 0000000140343D16: mov     r10d, [r14+10h]
 * 0000000140343D1A: mov     r9, r15
 * 0000000140343D1D: add     [rsi+810h], r10d
 * 0000000140343D24: mov     rax, r15
 * 0000000140343D27: mov     r11d, [rsi+7FCh]
 * 0000000140343D2E: mov     r12, [rsi+800h]
 * 0000000140343D35: lea     rcx, [r15+r10]
 * 0000000140343D39: cmp     r15, rcx
 * 0000000140343D3C: jnb     short loc_140343D4E
 * 0000000140343D3E: mov     edx, 40h ; '@'
 * 0000000140343D43: prefetchnta byte ptr [rax]
 * 0000000140343D46: add     rax, rdx
 * 0000000140343D49: cmp     rax, rcx
 * 0000000140343D4C: jb      short loc_140343D43
 * 0000000140343D4E: mov     ebx, r10d
 * 0000000140343D51: mov     r8, r12
 * 0000000140343D54: shr     ebx, 7
 * 0000000140343D57: test    ebx, ebx
 * 0000000140343D59: jz      short loc_140343DCD
 * 0000000140343D5B: mov     r14, 7010008004002001h
 * 0000000140343D65: mov     edx, 8
 * 0000000140343D6A: lea     r13d, [rdx-7]
 * 0000000140343D6E: mov     rax, [r9]
 * 0000000140343D71: mov     ecx, r11d
 * 0000000140343D74: xor     rax, r8
 * 0000000140343D77: mov     r8, [r9+8]
 * 0000000140343D7B: rol     rax, cl
 * 0000000140343D7E: add     r9, 10h
 * 0000000140343D82: xor     r8, rax
 * 0000000140343D85: rol     r8, cl
 * 0000000140343D88: sub     rdx, r13
 * 0000000140343D8B: jnz     short loc_140343D6E
 * 0000000140343D8D: mov     rcx, r9
 * 0000000140343D90: sub     rcx, r15
 * 0000000140343D93: xor     rcx, r12
 * 0000000140343D96: mov     rax, rcx
 * 0000000140343D99: rol     rax, 11h
 * 0000000140343D9D: xor     rcx, rax
 * 0000000140343DA0: mov     rax, r14
 * 0000000140343DA3: mul     rcx
 * 0000000140343DA6: xor     eax, edx
 * 0000000140343DA8: mov     [rbp+20F0h+var_18E0], rdx
 * 0000000140343DAF: xor     r11d, eax
 * 0000000140343DB2: mov     rax, r13
 * 0000000140343DB5: and     r11d, 3Fh
 * 0000000140343DB9: cmovz   r11d, eax
 * 0000000140343DBD: mov     eax, 0FFFFFFFFh
 * 0000000140343DC2: add     ebx, eax
 * 0000000140343DC4: jnz     short loc_140343D65
 * 0000000140343DC6: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140343DCA: xor     r13d, r13d
 * 0000000140343DCD: and     r10d, 7Fh
 * 0000000140343DD1: mov     r12d, 1
 * 0000000140343DD7: cmp     r10d, 8
 * 0000000140343DDB: jb      short loc_140343DFA
 * 0000000140343DDD: mov     edx, r10d
 * 0000000140343DE0: shr     rdx, 3
 * 0000000140343DE4: xor     r8, [r9]
 * 0000000140343DE7: mov     ecx, r11d
 * 0000000140343DEA: rol     r8, cl
 * 0000000140343DED: add     r9, 8
 * 0000000140343DF1: add     r10d, 0FFFFFFF8h
 * 0000000140343DF5: sub     rdx, r12
 * 0000000140343DF8: jnz     short loc_140343DE4
 * 0000000140343DFA: test    r10d, r10d
 * 0000000140343DFD: jz      short loc_140343E1E
 * 0000000140343DFF: mov     r14d, 0FFFFFFFFh
 * 0000000140343E05: movzx   eax, byte ptr [r9]
 * 0000000140343E09: mov     ecx, r11d
 * 0000000140343E0C: xor     r8, rax
 * 0000000140343E0F: add     r9, r12
 * 0000000140343E12: rol     r8, cl
 * 0000000140343E15: add     r10d, r14d
 * 0000000140343E18: jnz     short loc_140343E05
 * 0000000140343E1A: mov     r14, [rbp+20F0h+var_20B0]
 * 0000000140343E1E: mov     rax, r8
 * 0000000140343E21: shr     rax, 1Fh
 * 0000000140343E25: xor     r11d, r11d
 * 0000000140343E28: jmp     short loc_140343E31
 * 0000000140343E2A: xor     r8d, eax
 * 0000000140343E2D: shr     rax, 1Fh
 * 0000000140343E31: test    rax, rax
 * 0000000140343E34: jnz     short loc_140343E2A
 * 0000000140343E36: btr     r8d, 1Fh
 * 0000000140343E3B: mov     [r14+14h], r8d
 * 0000000140343E3F: jmp     loc_14034366A
 * 0000000140343E44: mov     r9, 7010008004002001h
 * 0000000140343E4E: mov     r12d, 1
 * 0000000140343E54: mov     r13d, [rsi+970h]
 * 0000000140343E5B: mov     [rbp+20F0h+var_20C0], r11d
 * 0000000140343E5F: mov     [rbp+20F0h+var_20F0], r11
 * 0000000140343E63: mov     [rbp+20F0h+var_2040], r13d
 * 0000000140343E6A: bt      r13d, 1Eh
 * 0000000140343E6F: jb      loc_1403445AD
 * 0000000140343E75: mov     r14, [rsp+10F0h+arg_0]
 * 0000000140343E7D: cmp     rsi, r14
 * 0000000140343E80: jnz     loc_1403446C0
 * 0000000140343E86: mov     eax, 8000h
 * 0000000140343E8B: test    eax, r13d
 * 0000000140343E8E: jnz     short loc_140343E9D
 * 0000000140343E90: cmp     [rsi+8D8h], r11d
 * 0000000140343E97: jnz     loc_140344370
 * 0000000140343E9D: mov     r8d, [r14+904h]
 * 0000000140343EA4: mov     rcx, r14
 * 0000000140343EA7: mov     edx, [r14+7CCh]
 * 0000000140343EAE: call    sub_1403485B4
 * 0000000140343EB3: mov     rsi, rax
 * 0000000140343EB6: test    rax, rax
 * 0000000140343EB9: jz      loc_140344370
 * 0000000140343EBF: mov     rax, [rax+7B0h]
 * 0000000140343EC6: mov     ecx, 2
 * 0000000140343ECB: mov     [rbp+20F0h+var_20F0], rax
 * 0000000140343ECF: mov     eax, [rsi+970h]
 * 0000000140343ED5: mov     [rbp+20F0h+var_20A8], eax
 * 0000000140343ED8: test    cl, al
 * 0000000140343EDA: jz      short loc_140343EE5
 * 0000000140343EDC: mov     r14d, [rsi+7CCh]
 * 0000000140343EE3: jmp     short loc_140343EEC
 * 0000000140343EE5: mov     r14d, [rsi+7F0h]
 * 0000000140343EEC: mov     rax, [rsi+4D8h]
 * 0000000140343EF3: add     r14d, 0FFFFFF38h
 * 0000000140343EFA: shr     r14d, 3
 * 0000000140343EFE: mov     [rbp+20F0h+var_2038], rax
 * 0000000140343F05: mov     rax, [rsi+5B0h]
 * 0000000140343F0C: mov     [rbp+20F0h+var_20C8], rax
 * 0000000140343F10: mov     [rbp+20F0h+var_20C0], r14d
 * 0000000140343F14: mov     [rsi+0C4h], r14d
 * 0000000140343F1B: rdtsc
 * 0000000140343F1D: shl     rdx, 20h
 * 0000000140343F21: lea     r15, [rsi+780h]
 * 0000000140343F28: or      rax, rdx
 * 0000000140343F2B: mov     ebx, 20h ; ' '
 * 0000000140343F30: mov     rcx, rax
 * 0000000140343F33: mov     r8d, ebx
 * 0000000140343F36: ror     rax, 3
 * 0000000140343F3A: mov     r13d, 0FFFFFFF8h
 * 0000000140343F40: xor     rcx, rax
 * 0000000140343F43: mov     rax, 7010008004002001h
 * 0000000140343F4D: mul     rcx
 * 0000000140343F50: lea     r11d, [rbx-1Ch]
 * 0000000140343F54: mov     rcx, r15
 * 0000000140343F57: mov     r10, rdx
 * 0000000140343F5A: mov     [rbp+20F0h+var_18D8], rdx
 * 0000000140343F61: xor     r10, rax
 * 0000000140343F64: lea     rdx, [rbp+20F0h+var_1640]
 * 0000000140343F6B: mov     rax, [rsi+7A0h]
 * 0000000140343F72: mov     r9d, r11d
 * 0000000140343F75: mov     [rbp+20F0h+var_2070], rax
 * 0000000140343F7C: mov     eax, [rsi+810h]
 * 0000000140343F82: mov     [rbp+20F0h+var_2094], eax
 * 0000000140343F85: mov     rax, [rcx]
 * 0000000140343F88: add     r8d, r13d
 * 0000000140343F8B: mov     [rdx], rax
 * 0000000140343F8E: add     rcx, 8
 * 0000000140343F92: add     rdx, 8
 * 0000000140343F96: sub     r9, r12
 * 0000000140343F99: jnz     short loc_140343F85
 * 0000000140343F9B: test    r8d, r8d
 * 0000000140343F9E: jz      short loc_140343FB8
 * 0000000140343FA0: mov     r9d, 0FFFFFFFFh
 * 0000000140343FA6: mov     al, [rcx]
 * 0000000140343FA8: add     rcx, r12
 * 0000000140343FAB: mov     [rdx], al
 * 0000000140343FAD: add     rdx, r12
 * 0000000140343FB0: add     r8d, r9d
 * 0000000140343FB3: jnz     short loc_140343FA6
 * 0000000140343FB5: xor     r9d, r9d
 * 0000000140343FB8: mov     [rsi+7A0h], r9
 * 0000000140343FBF: mov     ecx, ebx
 * 0000000140343FC1: mov     [rsi+810h], r9d
 * 0000000140343FC8: mov     rax, r15
 * 0000000140343FCB: mov     rdx, r11
 * 0000000140343FCE: mov     [rax], r9
 * 0000000140343FD1: add     ecx, r13d
 * 0000000140343FD4: add     rax, 8
 * 0000000140343FD8: sub     rdx, r12
 * 0000000140343FDB: jnz     short loc_140343FCE
 * 0000000140343FDD: mov     edx, 0FFFFFFFFh
 * 0000000140343FE2: test    ecx, ecx
 * 0000000140343FE4: jz      short loc_140343FF0
 * 0000000140343FE6: mov     [rax], r9b
 * 0000000140343FE9: add     rax, r12
 * 0000000140343FEC: add     ecx, edx
 * 0000000140343FEE: jnz     short loc_140343FE6
 * 0000000140343FF0: mov     eax, [rsi+7CCh]
 * 0000000140343FF6: mov     r9, rsi
 * 0000000140343FF9: add     [rsi+810h], eax
 * 0000000140343FFF: mov     rax, rsi
 * 0000000140344002: mov     r11d, [rsi+7CCh]
 * 0000000140344009: mov     ebx, [rsi+7FCh]
 * 000000014034400F: mov     r13, [rsi+800h]
 * 0000000140344016: lea     rcx, [rsi+r11]
 * 000000014034401A: cmp     rsi, rcx
 * 000000014034401D: jnb     short loc_140344030
 * 000000014034401F: mov     r8d, 40h ; '@'
 * 0000000140344025: prefetchnta byte ptr [rax]
 * 0000000140344028: add     rax, r8
 * 000000014034402B: cmp     rax, rcx
 * 000000014034402E: jb      short loc_140344025
 * 0000000140344030: mov     r12d, r11d
 * 0000000140344033: mov     r8, r13
 * 0000000140344036: shr     r12d, 7
 * 000000014034403A: test    r12d, r12d
 * 000000014034403D: jz      short loc_1403440B1
 * 000000014034403F: mov     r14, 7010008004002001h
 * 0000000140344049: mov     edx, 8
 * 000000014034404E: lea     edi, [rdx-7]
 * 0000000140344051: mov     rax, [r9]
 * 0000000140344054: mov     ecx, ebx
 * 0000000140344056: xor     rax, r8
 * 0000000140344059: mov     r8, [r9+8]
 * 000000014034405D: rol     rax, cl
 * 0000000140344060: add     r9, 10h
 * 0000000140344064: xor     r8, rax
 * 0000000140344067: rol     r8, cl
 * 000000014034406A: sub     rdx, rdi
 * 000000014034406D: jnz     short loc_140344051
 * 000000014034406F: mov     rcx, r9
 * 0000000140344072: sub     rcx, rsi
 * 0000000140344075: xor     rcx, r13
 * 0000000140344078: mov     rax, rcx
 * 000000014034407B: rol     rax, 11h
 * 000000014034407F: xor     rcx, rax
 * 0000000140344082: mov     rax, r14
 * 0000000140344085: mul     rcx
 * 0000000140344088: xor     ebx, edx
 * 000000014034408A: mov     [rbp+20F0h+var_18D0], rdx
 * 0000000140344091: xor     ebx, eax
 * 0000000140344093: mov     edx, 0FFFFFFFFh
 * 0000000140344098: and     ebx, 3Fh
 * 000000014034409B: mov     rax, rdi
 * 000000014034409E: cmovz   ebx, eax
 * 00000001403440A1: add     r12d, edx
 * 00000001403440A4: jnz     short loc_140344049
 * 00000001403440A6: mov     r14d, [rbp+20F0h+var_20C0]
 * 00000001403440AA: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403440B1: and     r11d, 7Fh
 * 00000001403440B5: mov     r13d, 1
 * 00000001403440BB: cmp     r11d, 8
 * 00000001403440BF: jb      short loc_1403440E2
 * 00000001403440C1: mov     edx, r11d
 * 00000001403440C4: shr     rdx, 3
 * 00000001403440C8: xor     r8, [r9]
 * 00000001403440CB: mov     ecx, ebx
 * 00000001403440CD: rol     r8, cl
 * 00000001403440D0: add     r9, 8
 * 00000001403440D4: add     r11d, 0FFFFFFF8h
 * 00000001403440D8: sub     rdx, r13
 * 00000001403440DB: jnz     short loc_1403440C8
 * 00000001403440DD: mov     edx, 0FFFFFFFFh
 * 00000001403440E2: test    r11d, r11d
 * 00000001403440E5: jz      short loc_1403440FB
 * 00000001403440E7: movzx   eax, byte ptr [r9]
 * 00000001403440EB: mov     ecx, ebx
 * 00000001403440ED: xor     r8, rax
 * 00000001403440F0: add     r9, r13
 * 00000001403440F3: rol     r8, cl
 * 00000001403440F6: add     r11d, edx
 * 00000001403440F9: jnz     short loc_1403440E7
 * 00000001403440FB: mov     rax, [rbp+20F0h+var_2070]
 * 0000000140344102: lea     rcx, [rbp+20F0h+var_1640]
 * 0000000140344109: mov     r9d, 4
 * 000000014034410F: mov     [rsi+7A0h], rax
 * 0000000140344116: mov     eax, [rbp+20F0h+var_2094]
 * 0000000140344119: mov     edx, r9d
 * 000000014034411C: add     [rsi+810h], eax
 * 0000000140344122: lea     r11d, [r9+1Ch]
 * 0000000140344126: mov     rax, [rcx]
 * 0000000140344129: add     r11d, 0FFFFFFF8h
 * 000000014034412D: mov     [r15], rax
 * 0000000140344130: add     rcx, 8
 * 0000000140344134: add     r15, 8
 * 0000000140344138: sub     rdx, r13
 * 000000014034413B: jnz     short loc_140344126
 * 000000014034413D: test    r11d, r11d
 * 0000000140344140: jz      short loc_14034415C
 * 0000000140344142: mov     r14d, 0FFFFFFFFh
 * 0000000140344148: mov     al, [rcx]
 * 000000014034414A: add     rcx, r13
 * 000000014034414D: mov     [r15], al
 * 0000000140344150: add     r15, r13
 * 0000000140344153: add     r11d, r14d
 * 0000000140344156: jnz     short loc_140344148
 * 0000000140344158: mov     r14d, [rbp+20F0h+var_20C0]
 * 000000014034415C: xor     r11d, r11d
 * 000000014034415F: mov     [rsi+7A0h], r8
 * 0000000140344166: test    dword ptr [rsi+970h], 40000000h
 * 0000000140344170: jnz     loc_140344365
 * 0000000140344176: mov     rcx, rsi
 * 0000000140344179: lea     r12d, [r11+19h]
 * 000000014034417D: mov     eax, r11d
 * 0000000140344180: xor     [rcx], r10
 * 0000000140344183: add     eax, r13d
 * 0000000140344186: lea     rcx, [rcx+8]
 * 000000014034418A: cmp     eax, r12d
 * 000000014034418D: jb      short loc_140344180
 * 000000014034418F: mov     [rbp+20F0h+var_1E08], r10
 * 0000000140344196: test    r10, r10
 * 0000000140344199: jz      short loc_1403441DB
 * 000000014034419B: test    r14d, r14d
 * 000000014034419E: jz      short loc_1403441DB
 * 00000001403441A0: mov     edx, r14d
 * 00000001403441A3: dec     rdx
 * 00000001403441A6: lea     rdx, [rcx+rdx*8]
 * 00000001403441AA: xor     [rdx], r10
 * 00000001403441AD: lea     rax, [rbp+20F0h+var_1E08]
 * 00000001403441B4: mov     ecx, r14d
 * 00000001403441B7: lea     rdx, [rdx-8]
 * 00000001403441BB: ror     r10, cl
 * 00000001403441BE: mov     [rbp+20F0h+var_1E08], r10
 * 00000001403441C5: and     r10d, 3Fh
 * 00000001403441C9: btc     [rax], r10
 * 00000001403441CD: sub     r14d, r13d
 * 00000001403441D0: jz      short loc_1403441DB
 * 00000001403441D2: mov     r10, [rbp+20F0h+var_1E08]
 * 00000001403441D9: jmp     short loc_1403441AA
 * 00000001403441DB: mov     r14d, [rbp+20F0h+var_20A8]
 * 00000001403441DF: bt      r14d, 13h
 * 00000001403441E4: jnb     short loc_140344231
 * 00000001403441E6: rdtsc
 * 00000001403441E8: shl     rdx, 20h
 * 00000001403441EC: or      rax, rdx
 * 00000001403441EF: mov     rcx, rax
 * 00000001403441F2: ror     rax, 3
 * 00000001403441F6: xor     rcx, rax
 * 00000001403441F9: mov     rax, 7010008004002001h
 * 0000000140344203: mul     rcx
 * 0000000140344206: mov     rcx, rdx
 * 0000000140344209: mov     [rbp+20F0h+var_18C8], rdx
 * 0000000140344210: xor     rcx, rax
 * 0000000140344213: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014034421D: mul     rcx
 * 0000000140344220: shr     rdx, 1
 * 0000000140344223: lea     rax, [rdx+rdx*2]
 * 0000000140344227: cmp     rcx, rax
 * 000000014034422A: jz      short loc_14034423C
 * 000000014034422C: jmp     loc_140344365
 * 0000000140344231: bt      r14d, 8
 * 0000000140344236: jb      loc_140344365
 * 000000014034423C: mov     rdi, [rbp+20F0h+var_20C8]
 * 0000000140344240: mov     eax, 2
 * 0000000140344245: mov     r15, [rbp+20F0h+var_2038]
 * 000000014034424C: mov     ecx, esi
 * 000000014034424E: mov     [rbp+20F0h+var_1FC3], al
 * 0000000140344254: mov     r10, rsi
 * 0000000140344257: mov     eax, 0Ch
 * 000000014034425C: mov     [rbp+20F0h+var_1FC2], r9b
 * 0000000140344263: mov     [rbp+20F0h+var_1FC7], al
 * 0000000140344269: mov     r9, rsi
 * 000000014034426C: mov     eax, 0Fh
 * 0000000140344271: ror     r9, cl
 * 0000000140344274: mov     [rbp+20F0h+var_1FC6], al
 * 000000014034427A: xor     eax, eax
 * 000000014034427C: mov     ebx, eax
 * 000000014034427E: mov     [rbp+20F0h+var_1FC8], r11b
 * 0000000140344285: mov     [rbp+20F0h+var_1FC5], r13b
 * 000000014034428C: mov     [rbp+20F0h+var_1FC0], 3
 * 0000000140344293: mov     [rbp+20F0h+var_1FBF], 5
 * 000000014034429A: mov     [rbp+20F0h+var_1FBC], 6
 * 00000001403442A1: mov     [rbp+20F0h+var_1FC1], 7
 * 00000001403442A8: mov     [rbp+20F0h+var_1FBB], 8
 * 00000001403442AF: mov     [rbp+20F0h+var_1FBE], 9
 * 00000001403442B6: mov     [rbp+20F0h+var_1FBA], 0Ah
 * 00000001403442BD: mov     [rbp+20F0h+var_1FC4], 0Bh
 * 00000001403442C4: mov     [rbp+20F0h+var_1FB9], 0Dh
 * 00000001403442CB: mov     [rbp+20F0h+var_1FBD], 0Eh
 * 00000001403442D2: mov     r8, [r10]
 * 00000001403442D5: mov     edx, 10h
 * 00000001403442DA: lea     r14d, [rdx-1]
 * 00000001403442DE: movzx   eax, byte ptr [r10]
 * 00000001403442E2: and     r8, 0FFFFFFFFFFFFFFF0h
 * 00000001403442E6: and     rax, r14
 * 00000001403442E9: movzx   ecx, [rbp+rax+20F0h+var_1FC8]
 * 00000001403442F1: or      r8, rcx
 * 00000001403442F4: ror     r8, 4
 * 00000001403442F8: mov     [r10], r8
 * 00000001403442FB: sub     rdx, r13
 * 00000001403442FE: jnz     short loc_1403442DE
 * 0000000140344300: sub     r8, rbx
 * 0000000140344303: test    [rbp+20F0h+var_20A8], 200h
 * 000000014034430A: mov     [r10], r8
 * 000000014034430D: jnz     short loc_140344322
 * 000000014034430F: xor     r8, r15
 * 0000000140344312: mov     ecx, edi
 * 0000000140344314: bswap   r8
 * 0000000140344317: xor     r8, r9
 * 000000014034431A: ror     r8, cl
 * 000000014034431D: xor     r8, rdi
 * 0000000140344320: jmp     short loc_140344325
 * 0000000140344322: xor     r8, r9
 * 0000000140344325: mov     edx, 0C8h
 * 000000014034432A: mov     [r10], r8
 * 000000014034432D: sub     edx, r11d
 * 0000000140344330: mov     ecx, r8d
 * 0000000140344333: imul    edx, r11d
 * 0000000140344337: not     ecx
 * 0000000140344339: add     r10, 8
 * 000000014034433D: add     r11d, r13d
 * 0000000140344340: add     rbx, rsi
 * 0000000140344343: ror     rdx, cl
 * 0000000140344346: mov     ecx, r8d
 * 0000000140344349: xor     r9, rdx
 * 000000014034434C: rol     r9, cl
 * 000000014034434F: add     r9, rsi
 * 0000000140344352: cmp     r11d, r12d
 * 0000000140344355: jb      loc_1403442D2
 * 000000014034435B: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140344362: xor     r11d, r11d
 * 0000000140344365: mov     r12d, 1
 * 000000014034436B: jmp     loc_140344B6E
 * 0000000140344370: mov     r11d, 20h ; ' '
 * 0000000140344376: mov     [r14+0C4h], r12d
 * 000000014034437D: mov     r12, [r14+7A0h]
 * 0000000140344384: lea     rbx, [r14+780h]
 * 000000014034438B: mov     r13d, [r14+810h]
 * 0000000140344392: lea     rdx, [rbp+20F0h+var_1620]
 * 0000000140344399: mov     rsi, r14
 * 000000014034439C: mov     [rbp+20F0h+var_2070], r12
 * 00000001403443A3: lea     r10d, [r11-1Ch]
 * 00000001403443A7: mov     r8d, r11d
 * 00000001403443AA: mov     r9d, r10d
 * 00000001403443AD: lea     r15d, [r11-1Fh]
 * 00000001403443B1: mov     rcx, rbx
 * 00000001403443B4: mov     rax, [rcx]
 * 00000001403443B7: add     r8d, 0FFFFFFF8h
 * 00000001403443BB: mov     [rdx], rax
 * 00000001403443BE: add     rcx, 8
 * 00000001403443C2: add     rdx, 8
 * 00000001403443C6: sub     r9, r15
 * 00000001403443C9: jnz     short loc_1403443B4
 * 00000001403443CB: xor     r15d, r15d
 * 00000001403443CE: lea     r9d, [r15+1]
 * 00000001403443D2: test    r8d, r8d
 * 00000001403443D5: jz      short loc_1403443EF
 * 00000001403443D7: mov     r15d, 0FFFFFFFFh
 * 00000001403443DD: mov     al, [rcx]
 * 00000001403443DF: add     rcx, r9
 * 00000001403443E2: mov     [rdx], al
 * 00000001403443E4: add     rdx, r9
 * 00000001403443E7: add     r8d, r15d
 * 00000001403443EA: jnz     short loc_1403443DD
 * 00000001403443EC: xor     r15d, r15d
 * 00000001403443EF: mov     [r14+7A0h], r15
 * 00000001403443F6: mov     ecx, r11d
 * 00000001403443F9: mov     [r14+810h], r15d
 * 0000000140344400: mov     rax, rbx
 * 0000000140344403: mov     rdx, r10
 * 0000000140344406: mov     [rax], r15
 * 0000000140344409: add     ecx, 0FFFFFFF8h
 * 000000014034440C: add     rax, 8
 * 0000000140344410: sub     rdx, r9
 * 0000000140344413: jnz     short loc_140344406
 * 0000000140344415: mov     edx, 0FFFFFFFFh
 * 000000014034441A: test    ecx, ecx
 * 000000014034441C: jz      short loc_140344428
 * 000000014034441E: mov     [rax], r15b
 * 0000000140344421: add     rax, r9
 * 0000000140344424: add     ecx, edx
 * 0000000140344426: jnz     short loc_14034441E
 * 0000000140344428: mov     eax, [r14+7CCh]
 * 000000014034442F: mov     r9, r14
 * 0000000140344432: add     [r14+810h], eax
 * 0000000140344439: mov     rax, r14
 * 000000014034443C: mov     r10d, [r14+7CCh]
 * 0000000140344443: mov     r11d, [r14+7FCh]
 * 000000014034444A: mov     r15, [r14+800h]
 * 0000000140344451: lea     rcx, [r14+r10]
 * 0000000140344455: cmp     r14, rcx
 * 0000000140344458: jnb     short loc_14034446B
 * 000000014034445A: mov     r8d, 40h ; '@'
 * 0000000140344460: prefetchnta byte ptr [rax]
 * 0000000140344463: add     rax, r8
 * 0000000140344466: cmp     rax, rcx
 * 0000000140344469: jb      short loc_140344460
 * 000000014034446B: mov     r14d, r10d
 * 000000014034446E: mov     r8, r15
 * 0000000140344471: shr     r14d, 7
 * 0000000140344475: test    r14d, r14d
 * 0000000140344478: jz      short loc_1403444F9
 * 000000014034447A: mov     r12, 7010008004002001h
 * 0000000140344484: mov     edx, 8
 * 0000000140344489: lea     edi, [rdx-7]
 * 000000014034448C: mov     rax, [r9]
 * 000000014034448F: mov     ecx, r11d
 * 0000000140344492: xor     rax, r8
 * 0000000140344495: mov     r8, [r9+8]
 * 0000000140344499: rol     rax, cl
 * 000000014034449C: add     r9, 10h
 * 00000001403444A0: xor     r8, rax
 * 00000001403444A3: rol     r8, cl
 * 00000001403444A6: sub     rdx, rdi
 * 00000001403444A9: jnz     short loc_14034448C
 * 00000001403444AB: mov     rcx, r9
 * 00000001403444AE: sub     rcx, [rsp+10F0h+arg_0]
 * 00000001403444B6: xor     rcx, r15
 * 00000001403444B9: mov     rax, rcx
 * 00000001403444BC: rol     rax, 11h
 * 00000001403444C0: xor     rcx, rax
 * 00000001403444C3: mov     rax, r12
 * 00000001403444C6: mul     rcx
 * 00000001403444C9: xor     r11d, edx
 * 00000001403444CC: mov     [rbp+20F0h+var_18C0], rdx
 * 00000001403444D3: xor     r11d, eax
 * 00000001403444D6: mov     edx, 0FFFFFFFFh
 * 00000001403444DB: and     r11d, 3Fh
 * 00000001403444DF: mov     rax, rdi
 * 00000001403444E2: cmovz   r11d, eax
 * 00000001403444E6: add     r14d, edx
 * 00000001403444E9: jnz     short loc_140344484
 * 00000001403444EB: mov     r12, [rbp+20F0h+var_2070]
 * 00000001403444F2: mov     rdi, 0FFFFFFFFB8797400h
 * 00000001403444F9: and     r10d, 7Fh
 * 00000001403444FD: mov     r14d, 1
 * 0000000140344503: cmp     r10d, 8
 * 0000000140344507: jb      short loc_14034452B
 * 0000000140344509: mov     edx, r10d
 * 000000014034450C: shr     rdx, 3
 * 0000000140344510: xor     r8, [r9]
 * 0000000140344513: mov     ecx, r11d
 * 0000000140344516: rol     r8, cl
 * 0000000140344519: add     r9, 8
 * 000000014034451D: add     r10d, 0FFFFFFF8h
 * 0000000140344521: sub     rdx, r14
 * 0000000140344524: jnz     short loc_140344510
 * 0000000140344526: mov     edx, 0FFFFFFFFh
 * 000000014034452B: test    r10d, r10d
 * 000000014034452E: jz      short loc_140344545
 * 0000000140344530: movzx   eax, byte ptr [r9]
 * 0000000140344534: mov     ecx, r11d
 * 0000000140344537: xor     r8, rax
 * 000000014034453A: add     r9, r14
 * 000000014034453D: rol     r8, cl
 * 0000000140344540: add     r10d, edx
 * 0000000140344543: jnz     short loc_140344530
 * 0000000140344545: mov     r9, [rsp+10F0h+arg_0]
 * 000000014034454D: lea     rcx, [rbp+20F0h+var_1620]
 * 0000000140344554: mov     edx, 4
 * 0000000140344559: mov     [r9+7A0h], r12
 * 0000000140344560: add     [r9+810h], r13d
 * 0000000140344567: lea     r12d, [rdx-3]
 * 000000014034456B: lea     r10d, [rdx+1Ch]
 * 000000014034456F: mov     rax, [rcx]
 * 0000000140344572: add     r10d, 0FFFFFFF8h
 * 0000000140344576: mov     [rbx], rax
 * 0000000140344579: add     rcx, 8
 * 000000014034457D: add     rbx, 8
 * 0000000140344581: sub     rdx, r12
 * 0000000140344584: jnz     short loc_14034456F
 * 0000000140344586: xor     r11d, r11d
 * 0000000140344589: test    r10d, r10d
 * 000000014034458C: jz      short loc_1403445A6
 * 000000014034458E: mov     r11d, 0FFFFFFFFh
 * 0000000140344594: mov     al, [rcx]
 * 0000000140344596: add     rcx, r12
 * 0000000140344599: mov     [rbx], al
 * 000000014034459B: add     rbx, r12
 * 000000014034459E: add     r10d, r11d
 * 00000001403445A1: jnz     short loc_140344594
 * 00000001403445A3: xor     r11d, r11d
 * 00000001403445A6: mov     [r9+7A0h], r8
 * 00000001403445AD: mov     ebx, [rsi+970h]
 * 00000001403445B3: mov     r15, r11
 * 00000001403445B6: mov     [rbp+20F0h+var_20C8], r11
 * 00000001403445BA: bt      ebx, 1Eh
 * 00000001403445BE: jb      loc_140344C0D
 * 00000001403445C4: bt      ebx, 8
 * 00000001403445C8: jb      loc_140344BF7
 * 00000001403445CE: mov     r12, [rsi+5B0h]
 * 00000001403445D5: mov     edi, 1
 * 00000001403445DA: mov     r13, [rsi+4D8h]
 * 00000001403445E1: mov     ecx, esi
 * 00000001403445E3: mov     r9, rsi
 * 00000001403445E6: mov     [rbp+20F0h+var_1FD8], r11b
 * 00000001403445ED: ror     r9, cl
 * 00000001403445F0: mov     r10, rsi
 * 00000001403445F3: lea     eax, [rdi+1]
 * 00000001403445F6: mov     [rbp+20F0h+var_1FD5], dil
 * 00000001403445FD: mov     [rbp+20F0h+var_1FD3], al
 * 0000000140344603: lea     r15d, [rdi+0Eh]
 * 0000000140344607: lea     eax, [rdi+0Bh]
 * 000000014034460A: mov     [rbp+20F0h+var_1FD0], 3
 * 0000000140344611: mov     [rbp+20F0h+var_1FD7], al
 * 0000000140344617: lea     eax, [rdi+0Eh]
 * 000000014034461A: mov     [rbp+20F0h+var_1FD6], al
 * 0000000140344620: xor     eax, eax
 * 0000000140344622: mov     r14d, eax
 * 0000000140344625: mov     [rbp+20F0h+var_1FD2], 4
 * 000000014034462C: mov     [rbp+20F0h+var_1FCF], 5
 * 0000000140344633: mov     [rbp+20F0h+var_1FCC], 6
 * 000000014034463A: mov     [rbp+20F0h+var_1FD1], 7
 * 0000000140344641: mov     [rbp+20F0h+var_1FCB], 8
 * 0000000140344648: mov     [rbp+20F0h+var_1FCE], 9
 * 000000014034464F: mov     [rbp+20F0h+var_1FCA], 0Ah
 * 0000000140344656: mov     [rbp+20F0h+var_1FD4], 0Bh
 * 000000014034465D: mov     [rbp+20F0h+var_1FC9], 0Dh
 * 0000000140344664: mov     [rbp+20F0h+var_1FCD], 0Eh
 * 000000014034466B: mov     rdx, [r10]
 * 000000014034466E: mov     r8d, 10h
 * 0000000140344674: movzx   eax, byte ptr [r10]
 * 0000000140344678: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014034467C: and     rax, r15
 * 000000014034467F: movzx   ecx, [rbp+rax+20F0h+var_1FD8]
 * 0000000140344687: or      rdx, rcx
 * 000000014034468A: ror     rdx, 4
 * 000000014034468E: mov     [r10], rdx
 * 0000000140344691: sub     r8, rdi
 * 0000000140344694: jnz     short loc_140344674
 * 0000000140344696: sub     rdx, r14
 * 0000000140344699: mov     [r10], rdx
 * 000000014034469C: bt      ebx, 9
 * 00000001403446A0: jb      loc_140344BA4
 * 00000001403446A6: mov     r8, r13
 * 00000001403446A9: mov     ecx, r12d
 * 00000001403446AC: xor     r8, rdx
 * 00000001403446AF: bswap   r8
 * 00000001403446B2: xor     r8, r9
 * 00000001403446B5: ror     r8, cl
 * 00000001403446B8: xor     r8, r12
 * 00000001403446BB: jmp     loc_140344BAA
 * 00000001403446C0: mov     rax, [rsi+7B0h]
 * 00000001403446C7: mov     [rbp+20F0h+var_20F0], rax
 * 00000001403446CB: mov     eax, 2
 * 00000001403446D0: test    al, r13b
 * 00000001403446D3: jz      short loc_1403446DE
 * 00000001403446D5: mov     r14d, [rsi+7CCh]
 * 00000001403446DC: jmp     short loc_1403446E5
 * 00000001403446DE: mov     r14d, [rsi+7F0h]
 * 00000001403446E5: mov     rax, [rsi+4D8h]
 * 00000001403446EC: add     r14d, 0FFFFFF38h
 * 00000001403446F3: shr     r14d, 3
 * 00000001403446F7: mov     [rbp+20F0h+var_20D8], rax
 * 00000001403446FB: mov     rax, [rsi+5B0h]
 * 0000000140344702: mov     [rbp+20F0h+var_2088], rax
 * 0000000140344706: mov     [rbp+20F0h+var_2094], r14d
 * 000000014034470A: mov     [rsi+0C4h], r14d
 * 0000000140344711: rdtsc
 * 0000000140344713: shl     rdx, 20h
 * 0000000140344717: lea     r15, [rsi+780h]
 * 000000014034471E: or      rax, rdx
 * 0000000140344721: mov     ebx, 20h ; ' '
 * 0000000140344726: mov     rcx, rax
 * 0000000140344729: mov     r8d, ebx
 * 000000014034472C: ror     rax, 3
 * 0000000140344730: xor     rcx, rax
 * 0000000140344733: mov     rax, r9
 * 0000000140344736: mul     rcx
 * 0000000140344739: lea     r11d, [rbx-1Ch]
 * 000000014034473D: mov     rcx, r15
 * 0000000140344740: mov     r10, rdx
 * 0000000140344743: mov     [rbp+20F0h+var_18B8], rdx
 * 000000014034474A: xor     r10, rax
 * 000000014034474D: lea     rdx, [rbp+20F0h+var_1600]
 * 0000000140344754: mov     rax, [rsi+7A0h]
 * 000000014034475B: mov     r9d, r11d
 * 000000014034475E: mov     [rbp+20F0h+var_2038], rax
 * 0000000140344765: mov     eax, [rsi+810h]
 * 000000014034476B: mov     [rbp+20F0h+var_20C0], eax
 * 000000014034476E: mov     [rbp+20F0h+var_20C8], r10
 * 0000000140344772: mov     rax, [rcx]
 * 0000000140344775: add     r8d, 0FFFFFFF8h
 * 0000000140344779: mov     [rdx], rax
 * 000000014034477C: add     rcx, 8
 * 0000000140344780: add     rdx, 8
 * 0000000140344784: sub     r9, r12
 * 0000000140344787: jnz     short loc_140344772
 * 0000000140344789: test    r8d, r8d
 * 000000014034478C: jz      short loc_1403447A6
 * 000000014034478E: mov     r9d, 0FFFFFFFFh
 * 0000000140344794: mov     al, [rcx]
 * 0000000140344796: add     rcx, r12
 * 0000000140344799: mov     [rdx], al
 * 000000014034479B: add     rdx, r12
 * 000000014034479E: add     r8d, r9d
 * 00000001403447A1: jnz     short loc_140344794
 * 00000001403447A3: xor     r9d, r9d
 * 00000001403447A6: mov     [rsi+7A0h], r9
 * 00000001403447AD: mov     ecx, ebx
 * 00000001403447AF: mov     [rsi+810h], r9d
 * 00000001403447B6: mov     rax, r15
 * 00000001403447B9: mov     rdx, r11
 * 00000001403447BC: mov     [rax], r9
 * 00000001403447BF: add     ecx, 0FFFFFFF8h
 * 00000001403447C2: add     rax, 8
 * 00000001403447C6: sub     rdx, r12
 * 00000001403447C9: jnz     short loc_1403447BC
 * 00000001403447CB: test    ecx, ecx
 * 00000001403447CD: jz      short loc_1403447DE
 * 00000001403447CF: mov     edx, 0FFFFFFFFh
 * 00000001403447D4: mov     [rax], r9b
 * 00000001403447D7: add     rax, r12
 * 00000001403447DA: add     ecx, edx
 * 00000001403447DC: jnz     short loc_1403447D4
 * 00000001403447DE: mov     eax, [rsi+7CCh]
 * 00000001403447E4: mov     r9, rsi
 * 00000001403447E7: add     [rsi+810h], eax
 * 00000001403447ED: mov     r11d, [rsi+7CCh]
 * 00000001403447F4: mov     ebx, [rsi+7FCh]
 * 00000001403447FA: mov     r8, [rsi+800h]
 * 0000000140344801: lea     rcx, [rsi+r11]
 * 0000000140344805: cmp     rsi, rcx
 * 0000000140344808: jnb     short loc_14034481D
 * 000000014034480A: mov     rax, rsi
 * 000000014034480D: mov     edx, 40h ; '@'
 * 0000000140344812: prefetchnta byte ptr [rax]
 * 0000000140344815: add     rax, rdx
 * 0000000140344818: cmp     rax, rcx
 * 000000014034481B: jb      short loc_140344812
 * 000000014034481D: mov     r12d, r11d
 * 0000000140344820: shr     r12d, 7
 * 0000000140344824: test    r12d, r12d
 * 0000000140344827: jz      short loc_1403448A5
 * 0000000140344829: mov     rdi, r8
 * 000000014034482C: mov     r13d, 1
 * 0000000140344832: mov     r14d, 0FFFFFFFFh
 * 0000000140344838: mov     r10, 7010008004002001h
 * 0000000140344842: mov     eax, 8
 * 0000000140344847: xor     r8, [r9]
 * 000000014034484A: mov     ecx, ebx
 * 000000014034484C: rol     r8, cl
 * 000000014034484F: xor     r8, [r9+8]
 * 0000000140344853: add     r9, 10h
 * 0000000140344857: rol     r8, cl
 * 000000014034485A: sub     rax, r13
 * 000000014034485D: jnz     short loc_140344847
 * 000000014034485F: mov     rcx, r9
 * 0000000140344862: sub     rcx, rsi
 * 0000000140344865: xor     rcx, rdi
 * 0000000140344868: mov     rax, rcx
 * 000000014034486B: rol     rax, 11h
 * 000000014034486F: xor     rcx, rax
 * 0000000140344872: mov     rax, r10
 * 0000000140344875: mul     rcx
 * 0000000140344878: xor     ebx, edx
 * 000000014034487A: mov     [rbp+20F0h+var_18B0], rdx
 * 0000000140344881: xor     ebx, eax
 * 0000000140344883: and     ebx, 3Fh
 * 0000000140344886: cmovz   ebx, r13d
 * 000000014034488A: add     r12d, r14d
 * 000000014034488D: jnz     short loc_140344842
 * 000000014034488F: mov     r10, [rbp+20F0h+var_20C8]
 * 0000000140344893: mov     rdi, 0FFFFFFFFB8797400h
 * 000000014034489A: mov     r14d, [rbp+20F0h+var_2094]
 * 000000014034489E: mov     r13d, [rbp+20F0h+var_2040]
 * 00000001403448A5: and     r11d, 7Fh
 * 00000001403448A9: mov     r12d, 1
 * 00000001403448AF: cmp     r11d, 8
 * 00000001403448B3: jb      short loc_1403448D1
 * 00000001403448B5: mov     eax, r11d
 * 00000001403448B8: shr     rax, 3
 * 00000001403448BC: xor     r8, [r9]
 * 00000001403448BF: mov     ecx, ebx
 * 00000001403448C1: rol     r8, cl
 * 00000001403448C4: add     r9, 8
 * 00000001403448C8: add     r11d, 0FFFFFFF8h
 * 00000001403448CC: sub     rax, r12
 * 00000001403448CF: jnz     short loc_1403448BC
 * 00000001403448D1: test    r11d, r11d
 * 00000001403448D4: jz      short loc_1403448F7
 * 00000001403448D6: mov     r13d, 0FFFFFFFFh
 * 00000001403448DC: movzx   eax, byte ptr [r9]
 * 00000001403448E0: mov     ecx, ebx
 * 00000001403448E2: xor     r8, rax
 * 00000001403448E5: add     r9, r12
 * 00000001403448E8: rol     r8, cl
 * 00000001403448EB: add     r11d, r13d
 * 00000001403448EE: jnz     short loc_1403448DC
 * 00000001403448F0: mov     r13d, [rbp+20F0h+var_2040]
 * 00000001403448F7: mov     rax, [rbp+20F0h+var_2038]
 * 00000001403448FE: lea     rcx, [rbp+20F0h+var_1600]
 * 0000000140344905: mov     r9d, 4
 * 000000014034490B: mov     [rsi+7A0h], rax
 * 0000000140344912: mov     eax, [rbp+20F0h+var_20C0]
 * 0000000140344915: mov     edx, r9d
 * 0000000140344918: add     [rsi+810h], eax
 * 000000014034491E: lea     r11d, [r9+1Ch]
 * 0000000140344922: mov     rax, [rcx]
 * 0000000140344925: add     r11d, 0FFFFFFF8h
 * 0000000140344929: mov     [r15], rax
 * 000000014034492C: add     rcx, 8
 * 0000000140344930: add     r15, 8
 * 0000000140344934: sub     rdx, r12
 * 0000000140344937: jnz     short loc_140344922
 * 0000000140344939: test    r11d, r11d
 * 000000014034493C: jz      short loc_14034495B
 * 000000014034493E: mov     r13d, 0FFFFFFFFh
 * 0000000140344944: mov     al, [rcx]
 * 0000000140344946: add     rcx, r12
 * 0000000140344949: mov     [r15], al
 * 000000014034494C: add     r15, r12
 * 000000014034494F: add     r11d, r13d
 * 0000000140344952: jnz     short loc_140344944
 * 0000000140344954: mov     r13d, [rbp+20F0h+var_2040]
 * 000000014034495B: xor     r11d, r11d
 * 000000014034495E: mov     [rsi+7A0h], r8
 * 0000000140344965: test    dword ptr [rsi+970h], 40000000h
 * 000000014034496F: jnz     loc_140344B6E
 * 0000000140344975: mov     rcx, rsi
 * 0000000140344978: lea     r12d, [r11+19h]
 * 000000014034497C: mov     eax, r11d
 * 000000014034497F: lea     r15d, [r11+1]
 * 0000000140344983: xor     [rcx], r10
 * 0000000140344986: add     eax, r15d
 * 0000000140344989: lea     rcx, [rcx+8]
 * 000000014034498D: cmp     eax, r12d
 * 0000000140344990: jb      short loc_140344983
 * 0000000140344992: mov     [rbp+20F0h+var_1E00], r10
 * 0000000140344999: test    r10, r10
 * 000000014034499C: jz      short loc_1403449DE
 * 000000014034499E: test    r14d, r14d
 * 00000001403449A1: jz      short loc_1403449DE
 * 00000001403449A3: mov     edx, r14d
 * 00000001403449A6: dec     rdx
 * 00000001403449A9: lea     rdx, [rcx+rdx*8]
 * 00000001403449AD: xor     [rdx], r10
 * 00000001403449B0: lea     rax, [rbp+20F0h+var_1E00]
 * 00000001403449B7: mov     ecx, r14d
 * 00000001403449BA: lea     rdx, [rdx-8]
 * 00000001403449BE: ror     r10, cl
 * 00000001403449C1: mov     [rbp+20F0h+var_1E00], r10
 * 00000001403449C8: and     r10d, 3Fh
 * 00000001403449CC: btc     [rax], r10
 * 00000001403449D0: sub     r14d, r15d
 * 00000001403449D3: jz      short loc_1403449DE
 * 00000001403449D5: mov     r10, [rbp+20F0h+var_1E00]
 * 00000001403449DC: jmp     short loc_1403449AD
 * 00000001403449DE: bt      r13d, 13h
 * 00000001403449E3: jnb     short loc_140344A30
 * 00000001403449E5: rdtsc
 * 00000001403449E7: shl     rdx, 20h
 * 00000001403449EB: or      rax, rdx
 * 00000001403449EE: mov     rcx, rax
 * 00000001403449F1: ror     rax, 3
 * 00000001403449F5: xor     rcx, rax
 * 00000001403449F8: mov     rax, 7010008004002001h
 * 0000000140344A02: mul     rcx
 * 0000000140344A05: mov     rcx, rdx
 * 0000000140344A08: mov     [rbp+20F0h+var_18A8], rdx
 * 0000000140344A0F: xor     rcx, rax
 * 0000000140344A12: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140344A1C: mul     rcx
 * 0000000140344A1F: shr     rdx, 1
 * 0000000140344A22: lea     rax, [rdx+rdx*2]
 * 0000000140344A26: cmp     rcx, rax
 * 0000000140344A29: jz      short loc_140344A3B
 * 0000000140344A2B: jmp     loc_140344B6B
 * 0000000140344A30: bt      r13d, 8
 * 0000000140344A35: jb      loc_140344B6B
 * 0000000140344A3B: mov     rdi, [rbp+20F0h+var_2088]
 * 0000000140344A3F: mov     eax, 2
 * 0000000140344A44: mov     r14, [rbp+20F0h+var_20D8]
 * 0000000140344A48: mov     ecx, esi
 * 0000000140344A4A: mov     [rbp+20F0h+var_1FA3], al
 * 0000000140344A50: mov     r10, rsi
 * 0000000140344A53: mov     eax, 0Ch
 * 0000000140344A58: mov     [rbp+20F0h+var_1FA2], r9b
 * 0000000140344A5F: mov     [rbp+20F0h+var_1FA7], al
 * 0000000140344A65: mov     r9, rsi
 * 0000000140344A68: mov     eax, 0Fh
 * 0000000140344A6D: ror     r9, cl
 * 0000000140344A70: mov     [rbp+20F0h+var_1FA6], al
 * 0000000140344A76: xor     eax, eax
 * 0000000140344A78: mov     ebx, eax
 * 0000000140344A7A: mov     [rbp+20F0h+var_1FA8], r11b
 * 0000000140344A81: mov     [rbp+20F0h+var_1FA5], r15b
 * 0000000140344A88: mov     [rbp+20F0h+var_1FA0], 3
 * 0000000140344A8F: mov     [rbp+20F0h+var_1F9F], 5
 * 0000000140344A96: mov     [rbp+20F0h+var_1F9C], 6
 * 0000000140344A9D: mov     [rbp+20F0h+var_1FA1], 7
 * 0000000140344AA4: mov     [rbp+20F0h+var_1F9B], 8
 * 0000000140344AAB: mov     [rbp+20F0h+var_1F9E], 9
 * 0000000140344AB2: mov     [rbp+20F0h+var_1F9A], 0Ah
 * 0000000140344AB9: mov     [rbp+20F0h+var_1FA4], 0Bh
 * 0000000140344AC0: mov     [rbp+20F0h+var_1F99], 0Dh
 * 0000000140344AC7: mov     [rbp+20F0h+var_1F9D], 0Eh
 * 0000000140344ACE: mov     rdx, [r10]
 * 0000000140344AD1: mov     r8d, 10h
 * 0000000140344AD7: lea     r13d, [r8-1]
 * 0000000140344ADB: movzx   eax, byte ptr [r10]
 * 0000000140344ADF: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140344AE3: and     rax, r13
 * 0000000140344AE6: movzx   ecx, [rbp+rax+20F0h+var_1FA8]
 * 0000000140344AEE: or      rdx, rcx
 * 0000000140344AF1: ror     rdx, 4
 * 0000000140344AF5: mov     [r10], rdx
 * 0000000140344AF8: sub     r8, r15
 * 0000000140344AFB: jnz     short loc_140344ADB
 * 0000000140344AFD: sub     rdx, rbx
 * 0000000140344B00: test    [rbp+20F0h+var_2040], 200h
 * 0000000140344B0A: mov     [r10], rdx
 * 0000000140344B0D: jnz     short loc_140344B25
 * 0000000140344B0F: mov     r8, r14
 * 0000000140344B12: mov     ecx, edi
 * 0000000140344B14: xor     r8, rdx
 * 0000000140344B17: bswap   r8
 * 0000000140344B1A: xor     r8, r9
 * 0000000140344B1D: ror     r8, cl
 * 0000000140344B20: xor     r8, rdi
 * 0000000140344B23: jmp     short loc_140344B2B
 * 0000000140344B25: mov     r8, r9
 * 0000000140344B28: xor     r8, rdx
 * 0000000140344B2B: mov     edx, 0C8h
 * 0000000140344B30: mov     [r10], r8
 * 0000000140344B33: sub     edx, r11d
 * 0000000140344B36: mov     ecx, r8d
 * 0000000140344B39: imul    edx, r11d
 * 0000000140344B3D: not     ecx
 * 0000000140344B3F: add     r10, 8
 * 0000000140344B43: add     r11d, r15d
 * 0000000140344B46: add     rbx, rsi
 * 0000000140344B49: ror     rdx, cl
 * 0000000140344B4C: mov     ecx, r8d
 * 0000000140344B4F: xor     r9, rdx
 * 0000000140344B52: rol     r9, cl
 * 0000000140344B55: add     r9, rsi
 * 0000000140344B58: cmp     r11d, r12d
 * 0000000140344B5B: jb      loc_140344ACE
 * 0000000140344B61: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140344B68: xor     r11d, r11d
 * 0000000140344B6B: mov     r12, r15
 * 0000000140344B6E: rdtsc
 * 0000000140344B70: shl     rdx, 20h
 * 0000000140344B74: mov     r9, 7010008004002001h
 * 0000000140344B7E: or      rax, rdx
 * 0000000140344B81: mov     [rbp+20F0h+var_20C0], r12d
 * 0000000140344B85: mov     rcx, rax
 * 0000000140344B88: ror     rax, 3
 * 0000000140344B8C: xor     rcx, rax
 * 0000000140344B8F: mov     rax, r9
 * 0000000140344B92: mul     rcx
 * 0000000140344B95: mov     r15, rax
 * 0000000140344B98: mov     [rbp+20F0h+var_18A0], rdx
 * 0000000140344B9F: xor     r15, rdx
 * 0000000140344BA2: jmp     short loc_140344C17
 * 0000000140344BA4: mov     r8, r9
 * 0000000140344BA7: xor     r8, rdx
 * 0000000140344BAA: mov     edx, 0C8h
 * 0000000140344BAF: mov     [r10], r8
 * 0000000140344BB2: sub     edx, r11d
 * 0000000140344BB5: mov     ecx, r8d
 * 0000000140344BB8: imul    edx, r11d
 * 0000000140344BBC: not     ecx
 * 0000000140344BBE: add     r10, 8
 * 0000000140344BC2: inc     r11d
 * 0000000140344BC5: add     r14, rsi
 * 0000000140344BC8: mov     edi, 1
 * 0000000140344BCD: ror     rdx, cl
 * 0000000140344BD0: mov     ecx, r8d
 * 0000000140344BD3: xor     r9, rdx
 * 0000000140344BD6: rol     r9, cl
 * 0000000140344BD9: add     r9, rsi
 * 0000000140344BDC: cmp     r11d, 19h
 * 0000000140344BE0: jb      loc_14034466B
 * 0000000140344BE6: mov     r15, [rbp+20F0h+var_20C8]
 * 0000000140344BEA: mov     rdi, 0FFFFFFFFB8797400h
 * 0000000140344BF1: mov     r12d, 1
 * 0000000140344BF7: mov     rax, [rsi+260h]
 * 0000000140344BFE: lea     rcx, [rsi+7E8h]
 * 0000000140344C05: call    KeGuardDispatchICall
 * 0000000140344C0A: xor     r11d, r11d
 * 0000000140344C0D: mov     r9, 7010008004002001h
 * 0000000140344C17: mov     r13, [rsp+10F0h+arg_0]
 * 0000000140344C1F: test    dword ptr [r13+970h], 10000000h
 * 0000000140344C2A: mov     r14, [r13+7C0h]
 * 0000000140344C31: jz      short loc_140344C68
 * 0000000140344C33: rdtsc
 * 0000000140344C35: shl     rdx, 20h
 * 0000000140344C39: or      rax, rdx
 * 0000000140344C3C: mov     rcx, rax
 * 0000000140344C3F: ror     rax, 3
 * 0000000140344C43: xor     rcx, rax
 * 0000000140344C46: mov     rax, r9
 * 0000000140344C49: mul     rcx
 * 0000000140344C4C: mov     r14, rdx
 * 0000000140344C4F: mov     [rbp+20F0h+var_1898], rdx
 * 0000000140344C56: xor     r14, rax
 * 0000000140344C59: and     r14, 0Fh
 * 0000000140344C5D: shl     r14, 4
 * 0000000140344C61: add     r14, [r13+5C0h]
 * 0000000140344C68: mov     r8d, 28h ; '('
 * 0000000140344C6E: lea     rbx, [r13+8D8h]
 * 0000000140344C75: mov     rcx, rbx
 * 0000000140344C78: lea     rdx, [rbp+20F0h+var_1BB0]
 * 0000000140344C7F: lea     r9d, [r8-23h]
 * 0000000140344C83: mov     rax, [rcx]
 * 0000000140344C86: add     r8d, 0FFFFFFF8h
 * 0000000140344C8A: mov     [rdx], rax
 * 0000000140344C8D: add     rcx, 8
 * 0000000140344C91: add     rdx, 8
 * 0000000140344C95: sub     r9, r12
 * 0000000140344C98: jnz     short loc_140344C83
 * 0000000140344C9A: test    r8d, r8d
 * 0000000140344C9D: jz      short loc_140344CB7
 * 0000000140344C9F: mov     r11d, 0FFFFFFFFh
 * 0000000140344CA5: mov     al, [rcx]
 * 0000000140344CA7: add     rcx, r12
 * 0000000140344CAA: mov     [rdx], al
 * 0000000140344CAC: add     rdx, r12
 * 0000000140344CAF: add     r8d, r11d
 * 0000000140344CB2: jnz     short loc_140344CA5
 * 0000000140344CB4: xor     r11d, r11d
 * 0000000140344CB7: mov     eax, [r13+970h]
 * 0000000140344CBE: mov     ecx, 8000h
 * 0000000140344CC3: test    ecx, eax
 * 0000000140344CC5: jnz     short loc_140344CD0
 * 0000000140344CC7: cmp     [rbx], r11d
 * 0000000140344CCA: jnz     loc_140345329
 * 0000000140344CD0: bt      eax, 1Eh
 * 0000000140344CD4: jb      loc_14034552F
 * 0000000140344CDA: mov     al, [r13+900h]
 * 0000000140344CE1: mov     r8, r15
 * 0000000140344CE4: sub     al, r12b
 * 0000000140344CE7: xor     r8, rsi
 * 0000000140344CEA: movzx   r10d, al
 * 0000000140344CEE: mov     r11d, 3Fh ; '?'
 * 0000000140344CF4: sub     r11d, r10d
 * 0000000140344CF7: rdtsc
 * 0000000140344CF9: shl     rdx, 20h
 * 0000000140344CFD: mov     rsi, 7010008004002001h
 * 0000000140344D07: or      rax, rdx
 * 0000000140344D0A: mov     rcx, rax
 * 0000000140344D0D: ror     rax, 3
 * 0000000140344D11: xor     rcx, rax
 * 0000000140344D14: mov     rax, rsi
 * 0000000140344D17: mul     rcx
 * 0000000140344D1A: mov     [rbp+20F0h+var_1890], rdx
 * 0000000140344D21: xor     rax, rdx
 * 0000000140344D24: xor     edx, edx
 * 0000000140344D26: div     r11
 * 0000000140344D29: lea     r9d, [r10+rdx]
 * 0000000140344D2D: rdtsc
 * 0000000140344D2F: shl     rdx, 20h
 * 0000000140344D33: or      rax, rdx
 * 0000000140344D36: mov     rcx, rax
 * 0000000140344D39: ror     rax, 3
 * 0000000140344D3D: xor     rcx, rax
 * 0000000140344D40: mov     rax, rsi
 * 0000000140344D43: mul     rcx
 * 0000000140344D46: xor     rax, rdx
 * 0000000140344D49: mov     [rbp+20F0h+var_1888], rdx
 * 0000000140344D50: xor     edx, edx
 * 0000000140344D52: div     r11
 * 0000000140344D55: add     edx, r10d
 * 0000000140344D58: cmp     edx, r9d
 * 0000000140344D5B: jz      short loc_140344D2D
 * 0000000140344D5D: mov     rsi, [r13+778h]
 * 0000000140344D64: xor     r11d, r11d
 * 0000000140344D67: mov     r12, [r13+770h]
 * 0000000140344D6E: mov     eax, r9d
 * 0000000140344D71: bts     r8, rax
 * 0000000140344D75: mov     eax, edx
 * 0000000140344D77: btr     r8, rax
 * 0000000140344D7B: cmp     dword ptr [r13+904h], 3
 * 0000000140344D83: jnz     loc_140344F24
 * 0000000140344D89: mov     r13, [rbp+20F0h+var_20F0]
 * 0000000140344D8D: test    r13, r13
 * 0000000140344D90: jz      loc_140344F1C
 * 0000000140344D96: mov     rcx, [rsp+10F0h+arg_0]
 * 0000000140344D9E: lea     edx, [r11+1]
 * 0000000140344DA2: mov     rax, [rcx+368h]
 * 0000000140344DA9: mov     byte ptr [rsi], 13h
 * 0000000140344DAC: mov     [rsi+1], dl
 * 0000000140344DAF: mov     [rsi+2], r11w
 * 0000000140344DB4: mov     [rsi+18h], rax
 * 0000000140344DB8: mov     [rsi+20h], r13
 * 0000000140344DBC: mov     [rsi+38h], r11
 * 0000000140344DC0: mov     [rsi+10h], r11
 * 0000000140344DC4: mov     [rsi+28h], r8
 * 0000000140344DC8: mov     rax, [rcx+358h]
 * 0000000140344DCF: mov     rcx, [r13+8]
 * 0000000140344DD3: mov     r8, [r13+0]
 * 0000000140344DD7: mov     edx, [r13+10h]
 * 0000000140344DDB: call    KeGuardDispatchICall
 * 0000000140344DE0: mov     r9, [r13+0]
 * 0000000140344DE4: mov     rcx, r13
 * 0000000140344DE7: rol     rcx, 11h
 * 0000000140344DEB: mov     rax, 7010008004002001h
 * 0000000140344DF5: xor     rcx, r13
 * 0000000140344DF8: mov     r10d, 4
 * 0000000140344DFE: mul     rcx
 * 0000000140344E01: mov     [rbp+20F0h+var_1880], rdx
 * 0000000140344E08: xor     rdx, rax
 * 0000000140344E0B: lea     rax, [r13+18h]
 * 0000000140344E0F: mov     r8, rdx
 * 0000000140344E12: xor     r11d, r11d
 * 0000000140344E15: lea     r13d, [r10-3]
 * 0000000140344E19: xor     [rax], r8
 * 0000000140344E1C: mov     ecx, r10d
 * 0000000140344E1F: rol     r8, cl
 * 0000000140344E22: lea     rax, [rax-8]
 * 0000000140344E26: sub     r10d, r13d
 * 0000000140344E29: jnz     short loc_140344E19
 * 0000000140344E2B: and     dl, 0Fh
 * 0000000140344E2E: cmp     dl, 7
 * 0000000140344E31: jnb     short loc_140344EA0
 * 0000000140344E33: mov     rcx, r9
 * 0000000140344E36: mov     rax, 7010008004002001h
 * 0000000140344E40: rol     rcx, 11h
 * 0000000140344E44: mov     r10d, 6
 * 0000000140344E4A: xor     rcx, r9
 * 0000000140344E4D: mul     rcx
 * 0000000140344E50: mov     [rbp+20F0h+var_1878], rdx
 * 0000000140344E57: xor     rdx, rax
 * 0000000140344E5A: add     r8, rdx
 * 0000000140344E5D: lea     rax, [r9+28h]
 * 0000000140344E61: movsx   edx, word ptr [r9+8]
 * 0000000140344E66: xor     [rax], r8
 * 0000000140344E69: mov     ecx, r10d
 * 0000000140344E6C: rol     r8, cl
 * 0000000140344E6F: lea     rax, [rax-8]
 * 0000000140344E73: sub     r10d, r13d
 * 0000000140344E76: jnz     short loc_140344E66
 * 0000000140344E78: sub     rdx, 30h ; '0'
 * 0000000140344E7C: shr     rdx, 3
 * 0000000140344E80: test    edx, edx
 * 0000000140344E82: jz      short loc_140344EA0
 * 0000000140344E84: movsxd  r10, edx
 * 0000000140344E87: add     r10, 5
 * 0000000140344E8B: lea     r10, [r9+r10*8]
 * 0000000140344E8F: xor     [r10], r8
 * 0000000140344E92: mov     ecx, edx
 * 0000000140344E94: rol     r8, cl
 * 0000000140344E97: lea     r10, [r10-8]
 * 0000000140344E9B: sub     edx, r13d
 * 0000000140344E9E: jnz     short loc_140344E8F
 * 0000000140344EA0: mov     r13, [rsp+10F0h+arg_0]
 * 0000000140344EA8: mov     r10d, 1
 * 0000000140344EAE: mov     [rsi+40h], r15
 * 0000000140344EB2: test    dword ptr [r13+970h], 100h
 * 0000000140344EBD: jz      loc_140344F4B
 * 0000000140344EC3: lea     r9, [r14-48h]
 * 0000000140344EC7: mov     [r9+40h], rsi
 * 0000000140344ECB: rdtsc
 * 0000000140344ECD: shl     rdx, 20h
 * 0000000140344ED1: mov     r14, 7010008004002001h
 * 0000000140344EDB: or      rax, rdx
 * 0000000140344EDE: mov     r8d, 19h
 * 0000000140344EE4: mov     rcx, rax
 * 0000000140344EE7: ror     rax, 3
 * 0000000140344EEB: xor     rcx, rax
 * 0000000140344EEE: mov     rax, r14
 * 0000000140344EF1: mul     rcx
 * 0000000140344EF4: mov     [rbp+20F0h+var_1870], rdx
 * 0000000140344EFB: xor     rdx, rax
 * 0000000140344EFE: lea     rax, [r9+48h]
 * 0000000140344F02: xor     [rax], rdx
 * 0000000140344F05: lea     rax, [rax+8]
 * 0000000140344F09: sub     r8, r10
 * 0000000140344F0C: jnz     short loc_140344F02
 * 0000000140344F0E: mov     dword ptr [r9+48h], 48513148h
 * 0000000140344F16: mov     [r9+20h], rdx
 * 0000000140344F1A: jmp     short loc_140344F58
 * 0000000140344F1C: mov     r13, [rsp+10F0h+arg_0]
 * 0000000140344F24: mov     byte ptr [rsi], 13h
 * 0000000140344F27: mov     r10d, 1
 * 0000000140344F2D: mov     [rsi+1], r10b
 * 0000000140344F31: mov     [rsi+2], r11w
 * 0000000140344F36: mov     [rsi+18h], r14
 * 0000000140344F3A: mov     [rsi+20h], r8
 * 0000000140344F3E: mov     [rsi+38h], r11
 * 0000000140344F42: mov     [rsi+10h], r11
 * 0000000140344F46: jmp     loc_140344EAE
 * 0000000140344F4B: mov     r9, rsi
 * 0000000140344F4E: mov     r14, 7010008004002001h
 * 0000000140344F58: mov     r8, [r13+0A68h]
 * 0000000140344F5F: test    r8, r8
 * 0000000140344F62: jz      loc_140344FE9
 * 0000000140344F68: mov     r8, [r8+20h]
 * 0000000140344F6C: mov     r15d, 0Fh
 * 0000000140344F72: mov     rcx, r8
 * 0000000140344F75: shr     rcx, 4
 * 0000000140344F79: xor     rcx, r8
 * 0000000140344F7C: shr     rcx, 4
 * 0000000140344F80: xor     rcx, [r13+580h]
 * 0000000140344F87: mov     al, cl
 * 0000000140344F89: mov     r11, rcx
 * 0000000140344F8C: and     al, r15b
 * 0000000140344F8F: movzx   r10d, al
 * 0000000140344F93: lea     eax, [r15-0Eh]
 * 0000000140344F97: cmovz   r10d, eax
 * 0000000140344F9B: xor     eax, eax
 * 0000000140344F9D: mov     edx, eax
 * 0000000140344F9F: test    r10b, r10b
 * 0000000140344FA2: jz      short loc_140344FC7
 * 0000000140344FA4: mov     rdx, rcx
 * 0000000140344FA7: and     rdx, r15
 * 0000000140344FAA: add     rdx, r8
 * 0000000140344FAD: mov     r8, [rdx]
 * 0000000140344FB0: mov     rax, r8
 * 0000000140344FB3: shr     rax, 4
 * 0000000140344FB7: xor     rax, r8
 * 0000000140344FBA: shr     rax, 4
 * 0000000140344FBE: xor     rcx, rax
 * 0000000140344FC1: add     r10b, 0FFh
 * 0000000140344FC5: jnz     short loc_140344FA4
 * 0000000140344FC7: mov     rax, r11
 * 0000000140344FCA: mov     rcx, r9
 * 0000000140344FCD: xor     rcx, r11
 * 0000000140344FD0: and     eax, 1000h
 * 0000000140344FD5: xor     r11d, r11d
 * 0000000140344FD8: test    rax, rax
 * 0000000140344FDB: cmovz   rcx, r9
 * 0000000140344FDF: mov     [rdx], rcx
 * 0000000140344FE2: mov     r9, [r13+0A68h]
 * 0000000140344FE9: lock or [rsp+10F0h+var_10F0], r11d
 * 0000000140344FEE: mov     ecx, [r13+820h]
 * 0000000140344FF5: test    ecx, ecx
 * 0000000140344FF7: jz      loc_140345279
 * 0000000140344FFD: sub     ecx, 1
 * 0000000140345000: jz      loc_140345262
 * 0000000140345006: sub     ecx, 1
 * 0000000140345009: jz      loc_14034524F
 * 000000014034500F: sub     ecx, 1
 * 0000000140345012: jz      loc_140345197
 * 0000000140345018: cmp     ecx, 1
 * 000000014034501B: jz      loc_1403450A2
 * 0000000140345021: mov     r8, [r13+978h]
 * 0000000140345028: mov     [r8+48h], r9
 * 000000014034502C: lock or [rsp+10F0h+var_10F0], r11d
 * 0000000140345031: rdtsc
 * 0000000140345033: shl     rdx, 20h
 * 0000000140345037: or      rax, rdx
 * 000000014034503A: mov     rcx, rax
 * 000000014034503D: mov     rdx, rax
 * 0000000140345040: ror     rcx, 3
 * 0000000140345044: mov     rax, r14
 * 0000000140345047: xor     rdx, rcx
 * 000000014034504A: mul     rdx
 * 000000014034504D: mov     rcx, rdx
 * 0000000140345050: mov     [rbp+20F0h+var_1868], rdx
 * 0000000140345057: xor     rcx, rax
 * 000000014034505A: mov     rax, 0ABCC77118461CEFDh
 * 0000000140345064: mul     rcx
 * 0000000140345067: shr     rdx, 1Ah
 * 000000014034506B: imul    rax, rdx, 5F5E100h
 * 0000000140345072: sub     rcx, rax
 * 0000000140345075: mov     rax, 0D6BF94D5E57A42BDh
 * 000000014034507F: add     rcx, 47868C00h
 * 0000000140345086: imul    rcx
 * 0000000140345089: add     rdx, rcx
 * 000000014034508C: sar     rdx, 17h
 * 0000000140345090: mov     rax, rdx
 * 0000000140345093: shr     rax, 3Fh
 * 0000000140345097: add     rdx, rax
 * 000000014034509A: mov     [r8], edx
 * 000000014034509D: jmp     loc_140345324
 * 00000001403450A2: mov     r8, [r13+9C0h]
 * 00000001403450A9: xor     r9d, r9d
 * 00000001403450AC: mov     rcx, [r13+9D0h]
 * 00000001403450B3: mov     rdx, rsi
 * 00000001403450B6: mov     rax, [r13+9C8h]
 * 00000001403450BD: mov     rdi, [r13+978h]
 * 00000001403450C4: mov     byte ptr [r8], 12h
 * 00000001403450C8: mov     byte ptr [r8+2], 58h ; 'X'
 * 00000001403450CD: mov     [r8+50h], r11b
 * 00000001403450D1: mov     [r8+8], rdi
 * 00000001403450D5: mov     [r8+20h], rax
 * 00000001403450D9: mov     [r8+28h], r11
 * 00000001403450DD: mov     [r8+30h], rcx
 * 00000001403450E1: mov     [r8+51h], r11b
 * 00000001403450E5: mov     [r8+38h], r11
 * 00000001403450E9: mov     [r8+52h], r11b
 * 00000001403450ED: xor     r8d, r8d
 * 00000001403450F0: mov     rax, [r13+2B8h]
 * 00000001403450F7: mov     rcx, [r13+9C0h]
 * 00000001403450FE: call    KeGuardDispatchICall
 * 0000000140345103: xor     r11d, r11d
 * 0000000140345106: test    al, al
 * 0000000140345108: jnz     loc_140345324
 * 000000014034510E: lea     r12d, [r11+1]
 * 0000000140345112: cmp     [rbx], r11d
 * 0000000140345115: jnz     short loc_140345147
 * 0000000140345117: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140345121: add     rax, r13
 * 0000000140345124: mov     [r13+8E0h], rax
 * 000000014034512B: mov     [r13+8E8h], r11
 * 0000000140345132: mov     qword ptr [r13+8F0h], 104h
 * 000000014034513D: mov     [r13+8F8h], rdi
 * 0000000140345144: mov     [rbx], r12d
 * 0000000140345147: mov     edx, 28h ; '('
 * 000000014034514C: lea     rcx, [rbp+20F0h+var_1BB0]
 * 0000000140345153: lea     r13d, [rdx-23h]
 * 0000000140345157: mov     rax, [rbx]
 * 000000014034515A: add     edx, 0FFFFFFF8h
 * 000000014034515D: mov     [rcx], rax
 * 0000000140345160: add     rbx, 8
 * 0000000140345164: add     rcx, 8
 * 0000000140345168: sub     r13, r12
 * 000000014034516B: jnz     short loc_140345157
 * 000000014034516D: mov     r13, [rsp+10F0h+arg_0]
 * 0000000140345175: test    edx, edx
 * 0000000140345177: jz      loc_140345324
 * 000000014034517D: mov     r11d, 0FFFFFFFFh
 * 0000000140345183: mov     al, [rbx]
 * 0000000140345185: add     rbx, r12
 * 0000000140345188: mov     [rcx], al
 * 000000014034518A: add     rcx, r12
 * 000000014034518D: add     edx, r11d
 * 0000000140345190: jnz     short loc_140345183
 * 0000000140345192: jmp     loc_140345321
 * 0000000140345197: mov     rdx, [r13+978h]
 * 000000014034519E: mov     rax, [r13+680h]
 * 00000001403451A5: mov     rcx, [rdx+rax]
 * 00000001403451A9: test    rcx, rcx
 * 00000001403451AC: jz      loc_14034523A
 * 00000001403451B2: mov     r12d, 1
 * 00000001403451B8: cmp     [rbx], r11d
 * 00000001403451BB: jnz     short loc_1403451ED
 * 00000001403451BD: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001403451C7: add     rax, r13
 * 00000001403451CA: mov     [r13+8E0h], rax
 * 00000001403451D1: mov     [r13+8E8h], r11
 * 00000001403451D8: mov     qword ptr [r13+8F0h], 104h
 * 00000001403451E3: mov     [r13+8F8h], rcx
 * 00000001403451EA: mov     [rbx], r12d
 * 00000001403451ED: mov     r8d, 28h ; '('
 * 00000001403451F3: lea     rcx, [rbp+20F0h+var_1BB0]
 * 00000001403451FA: lea     r13d, [r8-23h]
 * 00000001403451FE: mov     rax, [rbx]
 * 0000000140345201: add     r8d, 0FFFFFFF8h
 * 0000000140345205: mov     [rcx], rax
 * 0000000140345208: add     rbx, 8
 * 000000014034520C: add     rcx, 8
 * 0000000140345210: sub     r13, r12
 * 0000000140345213: jnz     short loc_1403451FE
 * 0000000140345215: mov     r13, [rsp+10F0h+arg_0]
 * 000000014034521D: test    r8d, r8d
 * 0000000140345220: jz      short loc_14034523A
 * 0000000140345222: mov     r11d, 0FFFFFFFFh
 * 0000000140345228: mov     al, [rbx]
 * 000000014034522A: add     rbx, r12
 * 000000014034522D: mov     [rcx], al
 * 000000014034522F: add     rcx, r12
 * 0000000140345232: add     r8d, r11d
 * 0000000140345235: jnz     short loc_140345228
 * 0000000140345237: xor     r11d, r11d
 * 000000014034523A: lock or [rsp+10F0h+var_10F0], r11d
 * 000000014034523F: mov     rax, [r13+680h]
 * 0000000140345246: mov     [rdx+rax], rsi
 * 000000014034524A: jmp     loc_140345324
 * 000000014034524F: mov     rax, [r13+7A8h]
 * 0000000140345256: mov     [rax+80h], r9
 * 000000014034525D: jmp     loc_140345324
 * 0000000140345262: mov     rcx, [r13+7A8h]
 * 0000000140345269: mov     rax, [r13+618h]
 * 0000000140345270: mov     [rcx+rax], r9
 * 0000000140345274: jmp     loc_140345324
 * 0000000140345279: rdtsc
 * 000000014034527B: shl     rdx, 20h
 * 000000014034527F: or      rax, rdx
 * 0000000140345282: mov     rcx, rax
 * 0000000140345285: mov     rdx, rax
 * 0000000140345288: ror     rcx, 3
 * 000000014034528C: mov     rax, r14
 * 000000014034528F: xor     rdx, rcx
 * 0000000140345292: mul     rdx
 * 0000000140345295: mov     r8, rax
 * 0000000140345298: mov     [rbp+20F0h+var_1860], rdx
 * 000000014034529F: xor     r8, rdx
 * 00000001403452A2: mov     rax, 0ABCC77118461CEFDh
 * 00000001403452AC: mul     r8
 * 00000001403452AF: shr     rdx, 1Ah
 * 00000001403452B3: imul    rcx, rdx, 5F5E100h
 * 00000001403452BA: sub     r8, rcx
 * 00000001403452BD: sub     rdi, r8
 * 00000001403452C0: rdtsc
 * 00000001403452C2: shl     rdx, 20h
 * 00000001403452C6: or      rax, rdx
 * 00000001403452C9: mov     [rsp+10F0h+BugCheckParameter4], r9
 * 00000001403452CE: mov     rcx, rax
 * 00000001403452D1: mov     rdx, rax
 * 00000001403452D4: ror     rcx, 3
 * 00000001403452D8: mov     rax, r14
 * 00000001403452DB: xor     rdx, rcx
 * 00000001403452DE: mov     rcx, r12
 * 00000001403452E1: mul     rdx
 * 00000001403452E4: mov     r8, rdx
 * 00000001403452E7: mov     [rbp+20F0h+var_1858], rdx
 * 00000001403452EE: xor     r8, rax
 * 00000001403452F1: mov     rax, 346DC5D63886594Bh
 * 00000001403452FB: mul     r8
 * 00000001403452FE: shr     rdx, 0Bh
 * 0000000140345302: imul    rax, rdx, 2710h
 * 0000000140345309: mov     rdx, rdi
 * 000000014034530C: sub     r8, rax
 * 000000014034530F: mov     rax, [r13+1D0h]
 * 0000000140345316: mov     r9d, r8d
 * 0000000140345319: xor     r8d, r8d
 * 000000014034531C: call    KeGuardDispatchICall
 * 0000000140345321: xor     r11d, r11d
 * 0000000140345324: mov     ecx, 8000h
 * 0000000140345329: cmp     [rbp+20F0h+var_1BB0], r11d
 * 0000000140345330: jz      loc_14034552F
 * 0000000140345336: test    [r13+970h], ecx
 * 000000014034533D: jnz     loc_14034552F
 * 0000000140345343: mov     r13, [rbp+20F0h+var_1B98]
 * 000000014034534A: mov     rbx, [rbp+20F0h+var_1B90]
 * 0000000140345351: mov     rdi, [rbp+20F0h+var_1BA0]
 * 0000000140345358: mov     r14, [rbp+20F0h+var_1BA8]
 * 000000014034535F: mov     rax, [rsp+10F0h+arg_0]
 * 0000000140345367: mov     [rbp+20F0h+var_2038], r13
 * 000000014034536E: mov     [rbp+20F0h+var_20C8], rbx
 * 0000000140345372: mov     [rbp+20F0h+var_2088], rdi
 * 0000000140345376: mov     [rbp+20F0h+var_20F0], r14
 * 000000014034537A: mov     [rbp+20F0h+var_2008], rax
 * 0000000140345381: mov     rax, cr8
 * 0000000140345385: mov     r8d, 2
 * 000000014034538B: cmp     al, r8b
 * 000000014034538E: jnb     short loc_140345398
 * 0000000140345390: mov     rax, cr8
 * 0000000140345394: mov     cr8, r8
 * 0000000140345398: mov     rdx, gs:20h
 * 00000001403453A1: mov     rax, [rbp+20F0h+var_2008]
 * 00000001403453A8: mov     rcx, [rax+620h]
 * 00000001403453AF: mov     rsi, [rdx+rcx]
 * 00000001403453B3: mov     rcx, gs:20h
 * 00000001403453BC: mov     r9, [rbp+20F0h+var_2008]
 * 00000001403453C3: mov     rax, [r9+630h]
 * 00000001403453CA: mov     r15, [rcx+rax]
 * 00000001403453CE: mov     rax, [r9+628h]
 * 00000001403453D5: mov     [rbp+20F0h+var_2070], r15
 * 00000001403453DC: cmp     [rdx+rax], r11b
 * 00000001403453E0: jz      short loc_140345401
 * 00000001403453E2: lea     rax, [rbp+20F0h+var_2008]
 * 00000001403453E9: cmp     rax, rsi
 * 00000001403453EC: ja      short loc_140345401
 * 00000001403453EE: lea     rax, [rsi-6000h]
 * 00000001403453F5: lea     rcx, [rbp+20F0h+var_2008]
 * 00000001403453FC: cmp     rcx, rax
 * 00000001403453FF: jnb     short loc_140345413
 * 0000000140345401: mov     rax, [rbp+20F0h+var_2008]
 * 0000000140345408: mov     rcx, [rax+660h]
 * 000000014034540F: mov     rsi, [r15+rcx]
 * 0000000140345413: mov     r9, [rbp+20F0h+var_2008]
 * 000000014034541A: test    dword ptr [r9+970h], 8000000h
 * 0000000140345425: jnz     loc_140345822
 * 000000014034542B: mov     r12, cr0
 * 000000014034542F: mov     rax, r12
 * 0000000140345432: btr     rax, 10h
 * 0000000140345437: mov     cr0, rax
 * 000000014034543A: mov     eax, [r9+0A70h]
 * 0000000140345441: lea     r14, [r9+0A78h]
 * 0000000140345448: shl     rax, 4
 * 000000014034544C: lea     r10, [r9+0A78h]
 * 0000000140345453: add     r14, rax
 * 0000000140345456: mov     r8d, r11d
 * 0000000140345459: mov     rdx, r14
 * 000000014034545C: cmp     [r9+0A74h], r11d
 * 0000000140345463: jbe     short loc_1403454B4
 * 0000000140345465: mov     r11d, 1
 * 000000014034546B: lea     r13d, [r11+0Fh]
 * 000000014034546F: mov     rcx, [rdx]
 * 0000000140345472: mov     rax, [rdx+8]
 * 0000000140345476: mov     [rcx], rax
 * 0000000140345479: mov     rcx, cr4
 * 000000014034547C: test    rcx, 20080h
 * 0000000140345483: jz      short loc_140345495
 * 0000000140345485: mov     rax, rcx
 * 0000000140345488: btc     rax, 7
 * 000000014034548D: mov     cr4, rax
 * 0000000140345490: mov     cr4, rcx
 * 0000000140345493: jmp     short loc_14034549B
 * 0000000140345495: mov     rax, cr3
 * 0000000140345498: mov     cr3, rax
 * 000000014034549B: add     rdx, r13
 * 000000014034549E: add     r8d, r11d
 * 00000001403454A1: cmp     r8d, [r9+0A74h]
 * 00000001403454A8: jb      short loc_14034546F
 * 00000001403454AA: mov     r13, [rbp+20F0h+var_2038]
 * 00000001403454B1: xor     r11d, r11d
 * 00000001403454B4: cmp     r10, r14
 * 00000001403454B7: jnb     loc_14034580A
 * 00000001403454BD: xor     r13d, r13d
 * 00000001403454C0: mov     r15d, 0FFFFFFFFh
 * 00000001403454C6: mov     edi, [r10+8]
 * 00000001403454CA: mov     rcx, rdx
 * 00000001403454CD: mov     r8, [r10]
 * 00000001403454D0: mov     r11d, edi
 * 00000001403454D3: cmp     edi, 8
 * 00000001403454D6: jb      short loc_1403454FE
 * 00000001403454D8: mov     ebx, edi
 * 00000001403454DA: mov     r13d, 1
 * 00000001403454E0: shr     rbx, 3
 * 00000001403454E4: mov     rax, [rcx]
 * 00000001403454E7: add     r11d, 0FFFFFFF8h
 * 00000001403454EB: mov     [r8], rax
 * 00000001403454EE: add     rcx, 8
 * 00000001403454F2: add     r8, 8
 * 00000001403454F6: sub     rbx, r13
 * 00000001403454F9: jnz     short loc_1403454E4
 * 00000001403454FB: xor     r13d, r13d
 * 00000001403454FE: test    r11d, r11d
 * 0000000140345501: jz      short loc_14034551D
 * 0000000140345503: sub     r8, rcx
 * 0000000140345506: mov     r13d, 1
 * 000000014034550C: mov     al, [rcx]
 * 000000014034550E: mov     [rcx+r8], al
 * 0000000140345512: add     rcx, r13
 * 0000000140345515: add     r11d, r15d
 * 0000000140345518: jnz     short loc_14034550C
 * 000000014034551A: xor     r13d, r13d
 * 000000014034551D: add     rdx, rdi
 * 0000000140345520: add     r10, 10h
 * 0000000140345524: cmp     r10, r14
 * 0000000140345527: jnb     loc_1403457F1
 * 000000014034552D: jmp     short loc_1403454C6
 * 000000014034552F: test    dword ptr [r13+970h], 40000000h
 * 000000014034553A: jnz     short loc_140345586
 * 000000014034553C: cmp     [rbp+20F0h+var_20C0], r11d
 * 0000000140345540: jz      short loc_140345586
 * 0000000140345542: mov     ecx, [r13+904h]
 * 0000000140345549: sub     ecx, 1
 * 000000014034554C: jz      short loc_140345560
 * 000000014034554E: mov     eax, 2
 * 0000000140345553: cmp     ecx, eax
 * 0000000140345555: jnz     short loc_140345586
 * 0000000140345557: mov     rax, [r13+360h]
 * 000000014034555E: jmp     short loc_14034557F
 * 0000000140345560: add     qword ptr [r13+7B0h], 0FFFFFFFFFFFFFFF8h
 * 0000000140345568: mov     rax, [r13+7B0h]
 * 000000014034556F: mov     ecx, [rax]
 * 0000000140345571: mov     [r13+7B8h], ecx
 * 0000000140345578: mov     rax, [r13+220h]
 * 000000014034557F: mov     [r13+0F8h], rax
 * 0000000140345586: mov     rax, r13
 * 0000000140345589: lea     r11, [rsp+10F0h+var_20]
 * 0000000140345591: mov     rbx, [r11+38h]
 * 0000000140345595: mov     rsi, [r11+40h]
 * 0000000140345599: mov     rdi, [r11+48h]
 * 000000014034559D: mov     rsp, r11
 * 00000001403455A0: pop     r15
 * 00000001403455A2: pop     r14
 * 00000001403455A4: pop     r13
 * 00000001403455A6: pop     r12
 * 00000001403455A8: pop     rbp
 * 00000001403455A9: retn
 * 00000001403455AA: xor     r9d, r9d; BugCheckParameter3
 * 00000001403455AD: mov     [rbp+20F0h+var_1EA4], 4F400000h
 * 00000001403455B7: mov     ecx, [rbp+20F0h+var_1EA4]
 * 00000001403455BD: mov     r8, r14; BugCheckParameter2
 * 00000001403455C0: rol     ecx, 0Ah; BugCheckCode
 * 00000001403455C3: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001403455C8: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001403455CC: call    KeBugCheckEx
 * 00000001403455D2: mov     [rbp+20F0h+var_1EA0], 4F400000h
 * 00000001403455DC: mov     r8, r14; BugCheckParameter2
 * 00000001403455DF: mov     ecx, [rbp+20F0h+var_1EA0]
 * 00000001403455E5: mov     edx, 0Ah; BugCheckParameter1
 * 00000001403455EA: rol     ecx, 0Ah; BugCheckCode
 * 00000001403455ED: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001403455F2: call    KeBugCheckEx
 * 00000001403455F8: mov     [rbp+20F0h+var_1E60], 4F400000h
 * 0000000140345602: mov     r8, r14; BugCheckParameter2
 * 0000000140345605: mov     ecx, [rbp+20F0h+var_1E60]
 * 000000014034560B: mov     r9d, edx; BugCheckParameter3
 * 000000014034560E: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140345613: rol     ecx, 0Ah; BugCheckCode
 * 0000000140345616: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014034561B: call    KeBugCheckEx
 * 0000000140345621: mov     [rbp+20F0h+var_1E9C], 4F400000h
 * 000000014034562B: mov     r8, r10; BugCheckParameter2
 * 000000014034562E: mov     ecx, [rbp+20F0h+var_1E9C]
 * 0000000140345634: mov     r9d, edx; BugCheckParameter3
 * 0000000140345637: mov     edx, 0Ah; BugCheckParameter1
 * 000000014034563C: rol     ecx, 0Ah; BugCheckCode
 * 000000014034563F: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140345644: call    KeBugCheckEx
 * 000000014034564A: mov     r9d, 2; BugCheckParameter3
 * 0000000140345650: mov     [rbp+20F0h+var_1E98], 4F400000h
 * 000000014034565A: mov     ecx, [rbp+20F0h+var_1E98]
 * 0000000140345660: mov     r8, r14; BugCheckParameter2
 * 0000000140345663: rol     ecx, 0Ah; BugCheckCode
 * 0000000140345666: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014034566B: lea     edx, [r9+8]; BugCheckParameter1
 * 000000014034566F: call    KeBugCheckEx
 * 0000000140345675: mov     r9d, 3; BugCheckParameter3
 * 000000014034567B: mov     [rbp+20F0h+var_1E94], 4F400000h
 * 0000000140345685: mov     ecx, [rbp+20F0h+var_1E94]
 * 000000014034568B: mov     r8, r14; BugCheckParameter2
 * 000000014034568E: mov     [rsp+10F0h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140345693: rol     ecx, 0Ah; BugCheckCode
 * 0000000140345696: lea     edx, [r9+7]; BugCheckParameter1
 * 000000014034569A: call    KeBugCheckEx
 * 00000001403456A0: mov     [rsp+10F0h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001403456A5: mov     r8, r15; BugCheckParameter2
 * 00000001403456A8: mov     r9d, 6; BugCheckParameter3
 * 00000001403456AE: mov     [rbp+20F0h+var_1E90], 4F400000h
 * 00000001403456B8: mov     ecx, [rbp+20F0h+var_1E90]
 * 00000001403456BE: rol     ecx, 0Ah; BugCheckCode
 * 00000001403456C1: lea     edx, [r9+4]; BugCheckParameter1
 * 00000001403456C5: call    KeBugCheckEx
 * 00000001403456CB: xor     r9d, r9d; BugCheckParameter3
 * 00000001403456CE: mov     [rbp+20F0h+var_1E7C], 4F400000h
 * 00000001403456D8: mov     ecx, [rbp+20F0h+var_1E7C]
 * 00000001403456DE: mov     r8, r15; BugCheckParameter2
 * 00000001403456E1: rol     ecx, 0Ah; BugCheckCode
 * 00000001403456E4: mov     [rsp+10F0h+BugCheckParameter4], r12; BugCheckParameter4
 * 00000001403456E9: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001403456ED: call    KeBugCheckEx
 * 00000001403456F3: mov     [rsp+10F0h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001403456F8: mov     r8, r15; BugCheckParameter2
 * 00000001403456FB: mov     r9d, 1; BugCheckParameter3
 * 0000000140345701: mov     [rbp+20F0h+var_1E54], 4F400000h
 * 000000014034570B: mov     ecx, [rbp+20F0h+var_1E54]
 * 0000000140345711: rol     ecx, 0Ah; BugCheckCode
 * 0000000140345714: lea     edx, [r9+9]; BugCheckParameter1
 * 0000000140345718: call    KeBugCheckEx
 * 000000014034571E: xor     eax, eax
 * 0000000140345720: mov     [rbp+20F0h+var_1E64], 4F400000h
 * 000000014034572A: mov     ecx, [rbp+20F0h+var_1E64]
 * 0000000140345730: mov     r8, r15; BugCheckParameter2
 * 0000000140345733: mov     r9d, edx; BugCheckParameter3
 * 0000000140345736: rol     ecx, 0Ah; BugCheckCode
 * 0000000140345739: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 000000014034573C: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140345741: call    KeBugCheckEx
 * 0000000140345747: xor     eax, eax
 * 0000000140345749: mov     [rbp+20F0h+var_1E68], 4F400000h
 * 0000000140345753: mov     ecx, [rbp+20F0h+var_1E68]
 * 0000000140345759: mov     r8, r10; BugCheckParameter2
 * 000000014034575C: mov     r9d, edx; BugCheckParameter3
 * 000000014034575F: rol     ecx, 0Ah; BugCheckCode
 * 0000000140345762: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140345765: mov     [rsp+10F0h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014034576A: call    KeBugCheckEx
 * 0000000140345770: mov     [rsp+10F0h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140345775: mov     r8, r15; BugCheckParameter2
 * 0000000140345778: mov     r9d, 2; BugCheckParameter3
 * 000000014034577E: mov     [rbp+20F0h+var_1E6C], 4F400000h
 * 0000000140345788: mov     ecx, [rbp+20F0h+var_1E6C]
 * 000000014034578E: rol     ecx, 0Ah; BugCheckCode
 * 0000000140345791: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140345795: call    KeBugCheckEx
 * 000000014034579B: mov     r9d, 3; BugCheckParameter3
 * 00000001403457A1: mov     [rbp+20F0h+var_1E70], 4F400000h
 * 00000001403457AB: mov     ecx, [rbp+20F0h+var_1E70]
 * 00000001403457B1: mov     r8, r15; BugCheckParameter2
 * 00000001403457B4: rol     ecx, 0Ah; BugCheckCode
 * 00000001403457B7: mov     [rsp+10F0h+BugCheckParameter4], r12; BugCheckParameter4
 * 00000001403457BC: lea     edx, [r9+7]; BugCheckParameter1
 * 00000001403457C0: call    KeBugCheckEx
 * 00000001403457C6: mov     r9d, 6; BugCheckParameter3
 * 00000001403457CC: mov     [rbp+20F0h+var_1E74], 4F400000h
 * 00000001403457D6: mov     ecx, [rbp+20F0h+var_1E74]
 * 00000001403457DC: mov     r8, r11; BugCheckParameter2
 * 00000001403457DF: rol     ecx, 0Ah; BugCheckCode
 * 00000001403457E2: mov     [rsp+10F0h+BugCheckParameter4], r10; BugCheckParameter4
 * 00000001403457E7: lea     edx, [r9+4]; BugCheckParameter1
 * 00000001403457EB: call    KeBugCheckEx
 * 00000001403457F1: mov     r15, [rbp+20F0h+var_2070]
 * 00000001403457F8: xor     r11d, r11d
 * 00000001403457FB: mov     r13, [rbp+20F0h+var_2038]
 * 0000000140345802: mov     rbx, [rbp+20F0h+var_20C8]
 * 0000000140345806: mov     rdi, [rbp+20F0h+var_2088]
 * 000000014034580A: mov     rax, [r9+210h]
 * 0000000140345811: mov     byte ptr [rax], 0C3h
 * 0000000140345814: mov     cr0, r12
 * 0000000140345818: mov     r14, [rbp+20F0h+var_20F0]
 * 000000014034581C: mov     r8d, 2
 * 0000000140345822: mov     r9, [rbp+20F0h+var_2008]
 * 0000000140345829: mov     ecx, [r9+908h]
 * 0000000140345830: test    ecx, ecx
 * 0000000140345832: jz      loc_140345918
 * 0000000140345838: mov     rax, cr8
 * 000000014034583C: cmp     al, r8b
 * 000000014034583F: jnb     short loc_140345850
 * 0000000140345841: mov     rax, cr8
 * 0000000140345845: mov     cr8, r8
 * 0000000140345849: mov     ecx, [r9+908h]
 * 0000000140345850: test    ecx, ecx
 * 0000000140345852: jz      loc_140345918
 * 0000000140345858: sub     ecx, 1
 * 000000014034585B: jz      loc_14034590B
 * 0000000140345861: sub     ecx, 1
 * 0000000140345864: jz      loc_140345902
 * 000000014034586A: sub     ecx, 1
 * 000000014034586D: jz      loc_1403458F9
 * 0000000140345873: sub     ecx, 1
 * 0000000140345876: jz      short loc_1403458BD
 * 0000000140345878: cmp     ecx, 1
 * 000000014034587B: jz      short loc_140345896
 * 000000014034587D: mov     rax, [r9+5A8h]
 * 0000000140345884: mov     ecx, 1
 * 0000000140345889: lock or [rax+340h], rcx
 * 0000000140345891: jmp     loc_140345918
 * 0000000140345896: mov     rcx, gs:20h
 * 000000014034589F: mov     rax, [r9+630h]
 * 00000001403458A6: mov     edx, [r9+970h]
 * 00000001403458AD: shr     edx, 0Ah
 * 00000001403458B0: and     edx, 1Fh
 * 00000001403458B3: mov     rcx, [rax+rcx]
 * 00000001403458B7: lock bts [rcx], edx
 * 00000001403458BB: jmp     short loc_140345918
 * 00000001403458BD: mov     rcx, gs:20h
 * 00000001403458C6: mov     rax, [r9+630h]
 * 00000001403458CD: mov     r8d, [r9+970h]
 * 00000001403458D4: shr     r8d, 0Ah
 * 00000001403458D8: and     r8d, 1Fh
 * 00000001403458DC: mov     rcx, [rax+rcx]
 * 00000001403458E0: add     rcx, [r9+690h]
 * 00000001403458E7: mov     rax, [r9+670h]
 * 00000001403458EE: mov     rdx, [rcx+rax]
 * 00000001403458F2: lock bts [rdx], r8d
 * 00000001403458F7: jmp     short loc_140345918
 * 00000001403458F9: mov     rax, [r9+550h]
 * 0000000140345900: jmp     short loc_140345912
 * 0000000140345902: mov     rax, [r9+548h]
 * 0000000140345909: jmp     short loc_140345912
 * 000000014034590B: mov     rax, [r9+538h]
 * 0000000140345912: lock bts qword ptr [rax], 0
 * 0000000140345918: mov     rax, [rbp+20F0h+var_2008]
 * 000000014034591F: mov     rcx, [rax+678h]
 * 0000000140345926: mov     [r15+rcx], r11
 * 000000014034592A: mov     rax, [rbp+20F0h+var_2008]
 * 0000000140345931: mov     r10, [rax+688h]
 * 0000000140345938: mov     [r15+r10], r11
 * 000000014034593C: mov     rcx, [rbp+20F0h+var_2008]
 * 0000000140345943: mov     rcx, [rcx+150h]; Target
 * 000000014034594A: call    KeGuardCheckICall
 * 000000014034594F: mov     rax, [rbp+20F0h+var_2008]
 * 0000000140345956: mov     r9, rbx
 * 0000000140345959: mov     [rsp+10F0h+var_10C0], rsi
 * 000000014034595E: mov     r8, rdi
 * 0000000140345961: mov     rdx, r14
 * 0000000140345964: mov     ecx, 109h
 * 0000000140345969: mov     r10, [rax+150h]
 * 0000000140345970: mov     [rsp+10F0h+var_10C8], r10
 * 0000000140345975: mov     [rsp+10F0h+BugCheckParameter4], r13
 * 000000014034597A: call    SdbpCheckDll
 */
