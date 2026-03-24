/*
 * XREFs of KiSystemService @ 0x1401D4780
 * Callers:
 *     KiSystemServiceShadow @ 0x140350E80 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x1401D4780 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x1401D4780
 * Reason: Hex-Rays returned no pseudocode for 0x1401D4780
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D4780: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401D4786: jz      KiSystemService32User
 * 00000001401D478C: test    cs:KiKvaShadow, 1
 * 00000001401D4793: jnz     short loc_1401D4798
 * 00000001401D4795: swapgs
 * 00000001401D4798: lfence
 * 00000001401D479B: mov     rcx, r10
 * 00000001401D479E: sub     rsp, 8
 * 00000001401D47A2: push    rbp
 * 00000001401D47A3: sub     rsp, 158h
 * 00000001401D47AA: lea     rbp, [rsp+168h+var_E8]
 * 00000001401D47B2: mov     [rbp+0C0h], rbx
 * 00000001401D47B9: mov     [rbp+0C8h], rdi
 * 00000001401D47C0: mov     [rbp+0D0h], rsi
 * 00000001401D47C7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D47CE: jz      short loc_1401D47DC
 * 00000001401D47D0: test    byte ptr [rbp+0F0h], 1
 * 00000001401D47D7: jz      short loc_1401D47DC
 * 00000001401D47D9: stac
 * 00000001401D47DC: mov     [rbp-50h], rax
 * 00000001401D47E0: mov     [rbp-48h], rcx
 * 00000001401D47E4: mov     [rbp-40h], rdx
 * 00000001401D47E8: mov     rcx, gs:188h
 * 00000001401D47F1: mov     rcx, [rcx+220h]
 * 00000001401D47F8: mov     rcx, [rcx+860h]
 * 00000001401D47FF: mov     gs:270h, rcx
 * 00000001401D4808: mov     cl, gs:850h
 * 00000001401D4810: mov     gs:851h, cl
 * 00000001401D4818: mov     cl, gs:278h
 * 00000001401D4820: mov     gs:852h, cl
 * 00000001401D4828: movzx   eax, byte ptr gs:27Bh
 * 00000001401D4831: cmp     gs:27Ah, al
 * 00000001401D4839: jz      short loc_1401D484C
 * 00000001401D483B: mov     gs:27Ah, al
 * 00000001401D4843: mov     ecx, 48h ; 'H'
 * 00000001401D4848: xor     edx, edx
 * 00000001401D484A: wrmsr
 * 00000001401D484C: movzx   edx, byte ptr gs:278h
 * 00000001401D4855: test    edx, 8
 * 00000001401D485B: jz      short loc_1401D4870
 * 00000001401D485D: mov     eax, 1
 * 00000001401D4862: xor     edx, edx
 * 00000001401D4864: mov     ecx, 49h ; 'I'
 * 00000001401D4869: wrmsr
 * 00000001401D486B: jmp     loc_1401D49AE
 * 00000001401D4870: test    edx, 2
 * 00000001401D4876: jz      loc_1401D49AB
 * 00000001401D487C: test    byte ptr gs:279h, 4
 * 00000001401D4885: jnz     loc_1401D49AB
 * 00000001401D488B: call    loc_1401D499E
 * 00000001401D4890: add     rsp, 8
 * 00000001401D4894: call    loc_1401D49A7
 * 00000001401D4899: add     rsp, 8
 * 00000001401D489D: call    loc_1401D4890
 * 00000001401D48A2: add     rsp, 8
 * 00000001401D48A6: call    loc_1401D4899
 * 00000001401D48AB: add     rsp, 8
 * 00000001401D48AF: call    loc_1401D48A2
 * 00000001401D48B4: add     rsp, 8
 * 00000001401D48B8: call    loc_1401D48AB
 * 00000001401D48BD: add     rsp, 8
 * 00000001401D48C1: call    loc_1401D48B4
 * 00000001401D48C6: add     rsp, 8
 * 00000001401D48CA: call    loc_1401D48BD
 * 00000001401D48CF: add     rsp, 8
 * 00000001401D48D3: call    loc_1401D48C6
 * 00000001401D48D8: add     rsp, 8
 * 00000001401D48DC: call    loc_1401D48CF
 * 00000001401D48E1: add     rsp, 8
 * 00000001401D48E5: call    loc_1401D48D8
 * 00000001401D48EA: add     rsp, 8
 * 00000001401D48EE: call    loc_1401D48E1
 * 00000001401D48F3: add     rsp, 8
 * 00000001401D48F7: call    loc_1401D48EA
 * 00000001401D48FC: add     rsp, 8
 * 00000001401D4900: call    loc_1401D48F3
 * 00000001401D4905: add     rsp, 8
 * 00000001401D4909: call    loc_1401D48FC
 * 00000001401D490E: add     rsp, 8
 * 00000001401D4912: call    loc_1401D4905
 * 00000001401D4917: add     rsp, 8
 * 00000001401D491B: call    loc_1401D490E
 * 00000001401D4920: add     rsp, 8
 * 00000001401D4924: call    loc_1401D4917
 * 00000001401D4929: add     rsp, 8
 * 00000001401D492D: call    loc_1401D4920
 * 00000001401D4932: add     rsp, 8
 * 00000001401D4936: call    loc_1401D4929
 * 00000001401D493B: add     rsp, 8
 * 00000001401D493F: call    loc_1401D4932
 * 00000001401D4944: add     rsp, 8
 * 00000001401D4948: call    loc_1401D493B
 * 00000001401D494D: add     rsp, 8
 * 00000001401D4951: call    loc_1401D4944
 * 00000001401D4956: add     rsp, 8
 * 00000001401D495A: call    loc_1401D494D
 * 00000001401D495F: add     rsp, 8
 * 00000001401D4963: call    loc_1401D4956
 * 00000001401D4968: add     rsp, 8
 * 00000001401D496C: call    loc_1401D495F
 * 00000001401D4971: add     rsp, 8
 * 00000001401D4975: call    loc_1401D4968
 * 00000001401D497A: add     rsp, 8
 * 00000001401D497E: call    loc_1401D4971
 * 00000001401D4983: add     rsp, 8
 * 00000001401D4987: call    loc_1401D497A
 * 00000001401D498C: add     rsp, 8
 * 00000001401D4990: call    loc_1401D4983
 * 00000001401D4995: add     rsp, 8
 * 00000001401D4999: call    loc_1401D498C
 * 00000001401D499E: add     rsp, 8
 * 00000001401D49A2: call    loc_1401D4995
 * 00000001401D49A7: add     rsp, 8
 * 00000001401D49AB: lfence
 * 00000001401D49AE: mov     byte ptr gs:853h, 0
 * 00000001401D49B7: jmp     KiSystemServiceUser
 * 00000001401D49BC: retn
 */
