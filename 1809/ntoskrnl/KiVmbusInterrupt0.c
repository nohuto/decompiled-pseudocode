/*
 * XREFs of KiVmbusInterrupt0 @ 0x1401C15B0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140330000 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x1401C15B0 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1401C15B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C15B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C15B0: push    1
 * 00000001401C15B2: push    rbp
 * 00000001401C15B3: push    rsi
 * 00000001401C15B4: sub     rsp, 150h
 * 00000001401C15BB: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C15C3: mov     byte ptr [rbp-55h], 0
 * 00000001401C15C7: mov     [rbp-50h], rax
 * 00000001401C15CB: mov     [rbp-48h], rcx
 * 00000001401C15CF: mov     [rbp-40h], rdx
 * 00000001401C15D3: mov     [rbp-38h], r8
 * 00000001401C15D7: mov     [rbp-30h], r9
 * 00000001401C15DB: mov     [rbp-28h], r10
 * 00000001401C15DF: mov     [rbp-20h], r11
 * 00000001401C15E3: test    byte ptr [rbp+0F0h], 1
 * 00000001401C15EA: jnz     short loc_1401C161B
 * 00000001401C15EC: lfence
 * 00000001401C15EF: test    word ptr gs:860h, 1
 * 00000001401C15FA: jnz     short loc_1401C1604
 * 00000001401C15FC: lfence
 * 00000001401C15FF: jmp     loc_1401C1824
 * 00000001401C1604: movzx   eax, word ptr gs:864h
 * 00000001401C160D: mov     ecx, 48h ; 'H'
 * 00000001401C1612: xor     edx, edx
 * 00000001401C1614: wrmsr
 * 00000001401C1616: jmp     loc_1401C1824
 * 00000001401C161B: test    cs:KiKvaShadow, 1
 * 00000001401C1622: jnz     short loc_1401C1627
 * 00000001401C1624: swapgs
 * 00000001401C1627: lfence
 * 00000001401C162A: mov     r10, gs:188h
 * 00000001401C1633: mov     rcx, gs:188h
 * 00000001401C163C: mov     rcx, [rcx+220h]
 * 00000001401C1643: mov     rcx, [rcx+830h]
 * 00000001401C164A: mov     gs:858h, rcx
 * 00000001401C1653: mov     cx, gs:850h
 * 00000001401C165C: mov     gs:852h, cx
 * 00000001401C1665: mov     cx, gs:860h
 * 00000001401C166E: mov     gs:854h, cx
 * 00000001401C1677: movzx   eax, word ptr gs:866h
 * 00000001401C1680: cmp     gs:864h, ax
 * 00000001401C1689: jz      short loc_1401C169D
 * 00000001401C168B: mov     gs:864h, ax
 * 00000001401C1694: mov     ecx, 48h ; 'H'
 * 00000001401C1699: xor     edx, edx
 * 00000001401C169B: wrmsr
 * 00000001401C169D: movzx   edx, word ptr gs:860h
 * 00000001401C16A6: test    edx, 8
 * 00000001401C16AC: jz      short loc_1401C16C5
 * 00000001401C16AE: mov     eax, 1
 * 00000001401C16B3: xor     edx, edx
 * 00000001401C16B5: mov     ecx, 49h ; 'I'
 * 00000001401C16BA: wrmsr
 * 00000001401C16BC: movzx   edx, word ptr gs:860h
 * 00000001401C16C5: test    edx, 2
 * 00000001401C16CB: jz      loc_1401C17F6
 * 00000001401C16D1: call    loc_1401C17E4
 * 00000001401C16D6: add     rsp, 8
 * 00000001401C16DA: call    loc_1401C17ED
 * 00000001401C16DF: add     rsp, 8
 * 00000001401C16E3: call    loc_1401C16D6
 * 00000001401C16E8: add     rsp, 8
 * 00000001401C16EC: call    loc_1401C16DF
 * 00000001401C16F1: add     rsp, 8
 * 00000001401C16F5: call    loc_1401C16E8
 * 00000001401C16FA: add     rsp, 8
 * 00000001401C16FE: call    loc_1401C16F1
 * 00000001401C1703: add     rsp, 8
 * 00000001401C1707: call    loc_1401C16FA
 * 00000001401C170C: add     rsp, 8
 * 00000001401C1710: call    loc_1401C1703
 * 00000001401C1715: add     rsp, 8
 * 00000001401C1719: call    loc_1401C170C
 * 00000001401C171E: add     rsp, 8
 * 00000001401C1722: call    loc_1401C1715
 * 00000001401C1727: add     rsp, 8
 * 00000001401C172B: call    loc_1401C171E
 * 00000001401C1730: add     rsp, 8
 * 00000001401C1734: call    loc_1401C1727
 * 00000001401C1739: add     rsp, 8
 * 00000001401C173D: call    loc_1401C1730
 * 00000001401C1742: add     rsp, 8
 * 00000001401C1746: call    loc_1401C1739
 * 00000001401C174B: add     rsp, 8
 * 00000001401C174F: call    loc_1401C1742
 * 00000001401C1754: add     rsp, 8
 * 00000001401C1758: call    loc_1401C174B
 * 00000001401C175D: add     rsp, 8
 * 00000001401C1761: call    loc_1401C1754
 * 00000001401C1766: add     rsp, 8
 * 00000001401C176A: call    loc_1401C175D
 * 00000001401C176F: add     rsp, 8
 * 00000001401C1773: call    loc_1401C1766
 * 00000001401C1778: add     rsp, 8
 * 00000001401C177C: call    loc_1401C176F
 * 00000001401C1781: add     rsp, 8
 * 00000001401C1785: call    loc_1401C1778
 * 00000001401C178A: add     rsp, 8
 * 00000001401C178E: call    loc_1401C1781
 * 00000001401C1793: add     rsp, 8
 * 00000001401C1797: call    loc_1401C178A
 * 00000001401C179C: add     rsp, 8
 * 00000001401C17A0: call    loc_1401C1793
 * 00000001401C17A5: add     rsp, 8
 * 00000001401C17A9: call    loc_1401C179C
 * 00000001401C17AE: add     rsp, 8
 * 00000001401C17B2: call    loc_1401C17A5
 * 00000001401C17B7: add     rsp, 8
 * 00000001401C17BB: call    loc_1401C17AE
 * 00000001401C17C0: add     rsp, 8
 * 00000001401C17C4: call    loc_1401C17B7
 * 00000001401C17C9: add     rsp, 8
 * 00000001401C17CD: call    loc_1401C17C0
 * 00000001401C17D2: add     rsp, 8
 * 00000001401C17D6: call    loc_1401C17C9
 * 00000001401C17DB: add     rsp, 8
 * 00000001401C17DF: call    loc_1401C17D2
 * 00000001401C17E4: add     rsp, 8
 * 00000001401C17E8: call    loc_1401C17DB
 * 00000001401C17ED: add     rsp, 8
 * 00000001401C17F1: mov     eax, 0DADAh
 * 00000001401C17F6: test    edx, 200h
 * 00000001401C17FC: jz      short loc_1401C1803
 * 00000001401C17FE: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C1803: lfence
 * 00000001401C1806: mov     byte ptr gs:856h, 0
 * 00000001401C180F: test    byte ptr [r10+3], 3
 * 00000001401C1814: mov     word ptr [rbp+80h], 0
 * 00000001401C181D: jz      short loc_1401C1824
 * 00000001401C181F: call    KiSaveDebugRegisterState
 * 00000001401C1824: cld
 * 00000001401C1825: stmxcsr dword ptr [rbp-54h]
 * 00000001401C1829: ldmxcsr dword ptr gs:180h
 * 00000001401C1832: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C1836: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C183A: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C183E: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C1842: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C1846: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C184A: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C1853: jz      short loc_1401C185A
 * 00000001401C1855: call    KeWakeProcessor
 * 00000001401C185A: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C1861: cmp     rax, [rbp+0E8h]
 * 00000001401C1868: jnb     short loc_1401C1883
 * 00000001401C186A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1871: cmp     rax, [rbp+0E8h]
 * 00000001401C1878: jb      short loc_1401C1883
 * 00000001401C187A: lea     rcx, [rbp-80h]
 * 00000001401C187E: call    KiCheckForSListAddress
 * 00000001401C1883: xor     esi, esi
 * 00000001401C1885: inc     dword ptr gs:5D00h
 * 00000001401C188D: jmp     KiVmbusInterruptDispatch
 */
