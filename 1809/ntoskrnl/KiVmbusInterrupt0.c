/*
 * XREFs of KiVmbusInterrupt0 @ 0x1401C1450
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x14032F000 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x1401C1450 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293C90 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1401C1450
 * Reason: Hex-Rays returned no pseudocode for 0x1401C1450
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C1450: push    1
 * 00000001401C1452: push    rbp
 * 00000001401C1453: push    rsi
 * 00000001401C1454: sub     rsp, 150h
 * 00000001401C145B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C1463: mov     byte ptr [rbp-55h], 0
 * 00000001401C1467: mov     [rbp-50h], rax
 * 00000001401C146B: mov     [rbp-48h], rcx
 * 00000001401C146F: mov     [rbp-40h], rdx
 * 00000001401C1473: mov     [rbp-38h], r8
 * 00000001401C1477: mov     [rbp-30h], r9
 * 00000001401C147B: mov     [rbp-28h], r10
 * 00000001401C147F: mov     [rbp-20h], r11
 * 00000001401C1483: test    byte ptr [rbp+0F0h], 1
 * 00000001401C148A: jnz     short loc_1401C14BB
 * 00000001401C148C: lfence
 * 00000001401C148F: test    word ptr gs:860h, 1
 * 00000001401C149A: jnz     short loc_1401C14A4
 * 00000001401C149C: lfence
 * 00000001401C149F: jmp     loc_1401C16C4
 * 00000001401C14A4: movzx   eax, word ptr gs:864h
 * 00000001401C14AD: mov     ecx, 48h ; 'H'
 * 00000001401C14B2: xor     edx, edx
 * 00000001401C14B4: wrmsr
 * 00000001401C14B6: jmp     loc_1401C16C4
 * 00000001401C14BB: test    cs:KiKvaShadow, 1
 * 00000001401C14C2: jnz     short loc_1401C14C7
 * 00000001401C14C4: swapgs
 * 00000001401C14C7: lfence
 * 00000001401C14CA: mov     r10, gs:188h
 * 00000001401C14D3: mov     rcx, gs:188h
 * 00000001401C14DC: mov     rcx, [rcx+220h]
 * 00000001401C14E3: mov     rcx, [rcx+830h]
 * 00000001401C14EA: mov     gs:858h, rcx
 * 00000001401C14F3: mov     cx, gs:850h
 * 00000001401C14FC: mov     gs:852h, cx
 * 00000001401C1505: mov     cx, gs:860h
 * 00000001401C150E: mov     gs:854h, cx
 * 00000001401C1517: movzx   eax, word ptr gs:866h
 * 00000001401C1520: cmp     gs:864h, ax
 * 00000001401C1529: jz      short loc_1401C153D
 * 00000001401C152B: mov     gs:864h, ax
 * 00000001401C1534: mov     ecx, 48h ; 'H'
 * 00000001401C1539: xor     edx, edx
 * 00000001401C153B: wrmsr
 * 00000001401C153D: movzx   edx, word ptr gs:860h
 * 00000001401C1546: test    edx, 8
 * 00000001401C154C: jz      short loc_1401C1565
 * 00000001401C154E: mov     eax, 1
 * 00000001401C1553: xor     edx, edx
 * 00000001401C1555: mov     ecx, 49h ; 'I'
 * 00000001401C155A: wrmsr
 * 00000001401C155C: movzx   edx, word ptr gs:860h
 * 00000001401C1565: test    edx, 2
 * 00000001401C156B: jz      loc_1401C1696
 * 00000001401C1571: call    loc_1401C1684
 * 00000001401C1576: add     rsp, 8
 * 00000001401C157A: call    loc_1401C168D
 * 00000001401C157F: add     rsp, 8
 * 00000001401C1583: call    loc_1401C1576
 * 00000001401C1588: add     rsp, 8
 * 00000001401C158C: call    loc_1401C157F
 * 00000001401C1591: add     rsp, 8
 * 00000001401C1595: call    loc_1401C1588
 * 00000001401C159A: add     rsp, 8
 * 00000001401C159E: call    loc_1401C1591
 * 00000001401C15A3: add     rsp, 8
 * 00000001401C15A7: call    loc_1401C159A
 * 00000001401C15AC: add     rsp, 8
 * 00000001401C15B0: call    loc_1401C15A3
 * 00000001401C15B5: add     rsp, 8
 * 00000001401C15B9: call    loc_1401C15AC
 * 00000001401C15BE: add     rsp, 8
 * 00000001401C15C2: call    loc_1401C15B5
 * 00000001401C15C7: add     rsp, 8
 * 00000001401C15CB: call    loc_1401C15BE
 * 00000001401C15D0: add     rsp, 8
 * 00000001401C15D4: call    loc_1401C15C7
 * 00000001401C15D9: add     rsp, 8
 * 00000001401C15DD: call    loc_1401C15D0
 * 00000001401C15E2: add     rsp, 8
 * 00000001401C15E6: call    loc_1401C15D9
 * 00000001401C15EB: add     rsp, 8
 * 00000001401C15EF: call    loc_1401C15E2
 * 00000001401C15F4: add     rsp, 8
 * 00000001401C15F8: call    loc_1401C15EB
 * 00000001401C15FD: add     rsp, 8
 * 00000001401C1601: call    loc_1401C15F4
 * 00000001401C1606: add     rsp, 8
 * 00000001401C160A: call    loc_1401C15FD
 * 00000001401C160F: add     rsp, 8
 * 00000001401C1613: call    loc_1401C1606
 * 00000001401C1618: add     rsp, 8
 * 00000001401C161C: call    loc_1401C160F
 * 00000001401C1621: add     rsp, 8
 * 00000001401C1625: call    loc_1401C1618
 * 00000001401C162A: add     rsp, 8
 * 00000001401C162E: call    loc_1401C1621
 * 00000001401C1633: add     rsp, 8
 * 00000001401C1637: call    loc_1401C162A
 * 00000001401C163C: add     rsp, 8
 * 00000001401C1640: call    loc_1401C1633
 * 00000001401C1645: add     rsp, 8
 * 00000001401C1649: call    loc_1401C163C
 * 00000001401C164E: add     rsp, 8
 * 00000001401C1652: call    loc_1401C1645
 * 00000001401C1657: add     rsp, 8
 * 00000001401C165B: call    loc_1401C164E
 * 00000001401C1660: add     rsp, 8
 * 00000001401C1664: call    loc_1401C1657
 * 00000001401C1669: add     rsp, 8
 * 00000001401C166D: call    loc_1401C1660
 * 00000001401C1672: add     rsp, 8
 * 00000001401C1676: call    loc_1401C1669
 * 00000001401C167B: add     rsp, 8
 * 00000001401C167F: call    loc_1401C1672
 * 00000001401C1684: add     rsp, 8
 * 00000001401C1688: call    loc_1401C167B
 * 00000001401C168D: add     rsp, 8
 * 00000001401C1691: mov     eax, 0DADAh
 * 00000001401C1696: test    edx, 200h
 * 00000001401C169C: jz      short loc_1401C16A3
 * 00000001401C169E: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C16A3: lfence
 * 00000001401C16A6: mov     byte ptr gs:856h, 0
 * 00000001401C16AF: test    byte ptr [r10+3], 3
 * 00000001401C16B4: mov     word ptr [rbp+80h], 0
 * 00000001401C16BD: jz      short loc_1401C16C4
 * 00000001401C16BF: call    KiSaveDebugRegisterState
 * 00000001401C16C4: cld
 * 00000001401C16C5: stmxcsr dword ptr [rbp-54h]
 * 00000001401C16C9: ldmxcsr dword ptr gs:180h
 * 00000001401C16D2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C16D6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C16DA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C16DE: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C16E2: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C16E6: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C16EA: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C16F3: jz      short loc_1401C16FA
 * 00000001401C16F5: call    KeWakeProcessor
 * 00000001401C16FA: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C1701: cmp     rax, [rbp+0E8h]
 * 00000001401C1708: jnb     short loc_1401C1723
 * 00000001401C170A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1711: cmp     rax, [rbp+0E8h]
 * 00000001401C1718: jb      short loc_1401C1723
 * 00000001401C171A: lea     rcx, [rbp-80h]
 * 00000001401C171E: call    KiCheckForSListAddress
 * 00000001401C1723: xor     esi, esi
 * 00000001401C1725: inc     dword ptr gs:5D00h
 * 00000001401C172D: jmp     KiVmbusInterruptDispatch
 */
