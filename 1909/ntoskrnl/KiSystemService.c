/*
 * XREFs of KiSystemService @ 0x1401D5380
 * Callers:
 *     KiSystemServiceShadow @ 0x140350E80 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x1401D5380 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x1401D5380
 * Reason: Hex-Rays returned no pseudocode for 0x1401D5380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D5380: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401D5386: jz      KiSystemService32User
 * 00000001401D538C: test    cs:KiKvaShadow, 1
 * 00000001401D5393: jnz     short loc_1401D5398
 * 00000001401D5395: swapgs
 * 00000001401D5398: lfence
 * 00000001401D539B: mov     rcx, r10
 * 00000001401D539E: sub     rsp, 8
 * 00000001401D53A2: push    rbp
 * 00000001401D53A3: sub     rsp, 158h
 * 00000001401D53AA: lea     rbp, [rsp+168h+var_E8]
 * 00000001401D53B2: mov     [rbp+0C0h], rbx
 * 00000001401D53B9: mov     [rbp+0C8h], rdi
 * 00000001401D53C0: mov     [rbp+0D0h], rsi
 * 00000001401D53C7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D53CE: jz      short loc_1401D53DC
 * 00000001401D53D0: test    byte ptr [rbp+0F0h], 1
 * 00000001401D53D7: jz      short loc_1401D53DC
 * 00000001401D53D9: stac
 * 00000001401D53DC: mov     [rbp-50h], rax
 * 00000001401D53E0: mov     [rbp-48h], rcx
 * 00000001401D53E4: mov     [rbp-40h], rdx
 * 00000001401D53E8: mov     rcx, gs:188h
 * 00000001401D53F1: mov     rcx, [rcx+220h]
 * 00000001401D53F8: mov     rcx, [rcx+860h]
 * 00000001401D53FF: mov     gs:270h, rcx
 * 00000001401D5408: mov     cl, gs:850h
 * 00000001401D5410: mov     gs:851h, cl
 * 00000001401D5418: mov     cl, gs:278h
 * 00000001401D5420: mov     gs:852h, cl
 * 00000001401D5428: movzx   eax, byte ptr gs:27Bh
 * 00000001401D5431: cmp     gs:27Ah, al
 * 00000001401D5439: jz      short loc_1401D544C
 * 00000001401D543B: mov     gs:27Ah, al
 * 00000001401D5443: mov     ecx, 48h ; 'H'
 * 00000001401D5448: xor     edx, edx
 * 00000001401D544A: wrmsr
 * 00000001401D544C: movzx   edx, byte ptr gs:278h
 * 00000001401D5455: test    edx, 8
 * 00000001401D545B: jz      short loc_1401D5470
 * 00000001401D545D: mov     eax, 1
 * 00000001401D5462: xor     edx, edx
 * 00000001401D5464: mov     ecx, 49h ; 'I'
 * 00000001401D5469: wrmsr
 * 00000001401D546B: jmp     loc_1401D55AE
 * 00000001401D5470: test    edx, 2
 * 00000001401D5476: jz      loc_1401D55AB
 * 00000001401D547C: test    byte ptr gs:279h, 4
 * 00000001401D5485: jnz     loc_1401D55AB
 * 00000001401D548B: call    loc_1401D559E
 * 00000001401D5490: add     rsp, 8
 * 00000001401D5494: call    loc_1401D55A7
 * 00000001401D5499: add     rsp, 8
 * 00000001401D549D: call    loc_1401D5490
 * 00000001401D54A2: add     rsp, 8
 * 00000001401D54A6: call    loc_1401D5499
 * 00000001401D54AB: add     rsp, 8
 * 00000001401D54AF: call    loc_1401D54A2
 * 00000001401D54B4: add     rsp, 8
 * 00000001401D54B8: call    loc_1401D54AB
 * 00000001401D54BD: add     rsp, 8
 * 00000001401D54C1: call    loc_1401D54B4
 * 00000001401D54C6: add     rsp, 8
 * 00000001401D54CA: call    loc_1401D54BD
 * 00000001401D54CF: add     rsp, 8
 * 00000001401D54D3: call    loc_1401D54C6
 * 00000001401D54D8: add     rsp, 8
 * 00000001401D54DC: call    loc_1401D54CF
 * 00000001401D54E1: add     rsp, 8
 * 00000001401D54E5: call    loc_1401D54D8
 * 00000001401D54EA: add     rsp, 8
 * 00000001401D54EE: call    loc_1401D54E1
 * 00000001401D54F3: add     rsp, 8
 * 00000001401D54F7: call    loc_1401D54EA
 * 00000001401D54FC: add     rsp, 8
 * 00000001401D5500: call    loc_1401D54F3
 * 00000001401D5505: add     rsp, 8
 * 00000001401D5509: call    loc_1401D54FC
 * 00000001401D550E: add     rsp, 8
 * 00000001401D5512: call    loc_1401D5505
 * 00000001401D5517: add     rsp, 8
 * 00000001401D551B: call    loc_1401D550E
 * 00000001401D5520: add     rsp, 8
 * 00000001401D5524: call    loc_1401D5517
 * 00000001401D5529: add     rsp, 8
 * 00000001401D552D: call    loc_1401D5520
 * 00000001401D5532: add     rsp, 8
 * 00000001401D5536: call    loc_1401D5529
 * 00000001401D553B: add     rsp, 8
 * 00000001401D553F: call    loc_1401D5532
 * 00000001401D5544: add     rsp, 8
 * 00000001401D5548: call    loc_1401D553B
 * 00000001401D554D: add     rsp, 8
 * 00000001401D5551: call    loc_1401D5544
 * 00000001401D5556: add     rsp, 8
 * 00000001401D555A: call    loc_1401D554D
 * 00000001401D555F: add     rsp, 8
 * 00000001401D5563: call    loc_1401D5556
 * 00000001401D5568: add     rsp, 8
 * 00000001401D556C: call    loc_1401D555F
 * 00000001401D5571: add     rsp, 8
 * 00000001401D5575: call    loc_1401D5568
 * 00000001401D557A: add     rsp, 8
 * 00000001401D557E: call    loc_1401D5571
 * 00000001401D5583: add     rsp, 8
 * 00000001401D5587: call    loc_1401D557A
 * 00000001401D558C: add     rsp, 8
 * 00000001401D5590: call    loc_1401D5583
 * 00000001401D5595: add     rsp, 8
 * 00000001401D5599: call    loc_1401D558C
 * 00000001401D559E: add     rsp, 8
 * 00000001401D55A2: call    loc_1401D5595
 * 00000001401D55A7: add     rsp, 8
 * 00000001401D55AB: lfence
 * 00000001401D55AE: mov     byte ptr gs:853h, 0
 * 00000001401D55B7: jmp     KiSystemServiceUser
 * 00000001401D55BC: retn
 */
