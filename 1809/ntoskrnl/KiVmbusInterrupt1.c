/*
 * XREFs of KiVmbusInterrupt1 @ 0x1401C1740
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x14032F080 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x1401C1740 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293C90 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x1401C1740
 * Reason: Hex-Rays returned no pseudocode for 0x1401C1740
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C1740: push    2
 * 00000001401C1742: push    rbp
 * 00000001401C1743: push    rsi
 * 00000001401C1744: sub     rsp, 150h
 * 00000001401C174B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C1753: mov     byte ptr [rbp-55h], 0
 * 00000001401C1757: mov     [rbp-50h], rax
 * 00000001401C175B: mov     [rbp-48h], rcx
 * 00000001401C175F: mov     [rbp-40h], rdx
 * 00000001401C1763: mov     [rbp-38h], r8
 * 00000001401C1767: mov     [rbp-30h], r9
 * 00000001401C176B: mov     [rbp-28h], r10
 * 00000001401C176F: mov     [rbp-20h], r11
 * 00000001401C1773: test    byte ptr [rbp+0F0h], 1
 * 00000001401C177A: jnz     short loc_1401C17AB
 * 00000001401C177C: lfence
 * 00000001401C177F: test    word ptr gs:860h, 1
 * 00000001401C178A: jnz     short loc_1401C1794
 * 00000001401C178C: lfence
 * 00000001401C178F: jmp     loc_1401C19B4
 * 00000001401C1794: movzx   eax, word ptr gs:864h
 * 00000001401C179D: mov     ecx, 48h ; 'H'
 * 00000001401C17A2: xor     edx, edx
 * 00000001401C17A4: wrmsr
 * 00000001401C17A6: jmp     loc_1401C19B4
 * 00000001401C17AB: test    cs:KiKvaShadow, 1
 * 00000001401C17B2: jnz     short loc_1401C17B7
 * 00000001401C17B4: swapgs
 * 00000001401C17B7: lfence
 * 00000001401C17BA: mov     r10, gs:188h
 * 00000001401C17C3: mov     rcx, gs:188h
 * 00000001401C17CC: mov     rcx, [rcx+220h]
 * 00000001401C17D3: mov     rcx, [rcx+830h]
 * 00000001401C17DA: mov     gs:858h, rcx
 * 00000001401C17E3: mov     cx, gs:850h
 * 00000001401C17EC: mov     gs:852h, cx
 * 00000001401C17F5: mov     cx, gs:860h
 * 00000001401C17FE: mov     gs:854h, cx
 * 00000001401C1807: movzx   eax, word ptr gs:866h
 * 00000001401C1810: cmp     gs:864h, ax
 * 00000001401C1819: jz      short loc_1401C182D
 * 00000001401C181B: mov     gs:864h, ax
 * 00000001401C1824: mov     ecx, 48h ; 'H'
 * 00000001401C1829: xor     edx, edx
 * 00000001401C182B: wrmsr
 * 00000001401C182D: movzx   edx, word ptr gs:860h
 * 00000001401C1836: test    edx, 8
 * 00000001401C183C: jz      short loc_1401C1855
 * 00000001401C183E: mov     eax, 1
 * 00000001401C1843: xor     edx, edx
 * 00000001401C1845: mov     ecx, 49h ; 'I'
 * 00000001401C184A: wrmsr
 * 00000001401C184C: movzx   edx, word ptr gs:860h
 * 00000001401C1855: test    edx, 2
 * 00000001401C185B: jz      loc_1401C1986
 * 00000001401C1861: call    loc_1401C1974
 * 00000001401C1866: add     rsp, 8
 * 00000001401C186A: call    loc_1401C197D
 * 00000001401C186F: add     rsp, 8
 * 00000001401C1873: call    loc_1401C1866
 * 00000001401C1878: add     rsp, 8
 * 00000001401C187C: call    loc_1401C186F
 * 00000001401C1881: add     rsp, 8
 * 00000001401C1885: call    loc_1401C1878
 * 00000001401C188A: add     rsp, 8
 * 00000001401C188E: call    loc_1401C1881
 * 00000001401C1893: add     rsp, 8
 * 00000001401C1897: call    loc_1401C188A
 * 00000001401C189C: add     rsp, 8
 * 00000001401C18A0: call    loc_1401C1893
 * 00000001401C18A5: add     rsp, 8
 * 00000001401C18A9: call    loc_1401C189C
 * 00000001401C18AE: add     rsp, 8
 * 00000001401C18B2: call    loc_1401C18A5
 * 00000001401C18B7: add     rsp, 8
 * 00000001401C18BB: call    loc_1401C18AE
 * 00000001401C18C0: add     rsp, 8
 * 00000001401C18C4: call    loc_1401C18B7
 * 00000001401C18C9: add     rsp, 8
 * 00000001401C18CD: call    loc_1401C18C0
 * 00000001401C18D2: add     rsp, 8
 * 00000001401C18D6: call    loc_1401C18C9
 * 00000001401C18DB: add     rsp, 8
 * 00000001401C18DF: call    loc_1401C18D2
 * 00000001401C18E4: add     rsp, 8
 * 00000001401C18E8: call    loc_1401C18DB
 * 00000001401C18ED: add     rsp, 8
 * 00000001401C18F1: call    loc_1401C18E4
 * 00000001401C18F6: add     rsp, 8
 * 00000001401C18FA: call    loc_1401C18ED
 * 00000001401C18FF: add     rsp, 8
 * 00000001401C1903: call    loc_1401C18F6
 * 00000001401C1908: add     rsp, 8
 * 00000001401C190C: call    loc_1401C18FF
 * 00000001401C1911: add     rsp, 8
 * 00000001401C1915: call    loc_1401C1908
 * 00000001401C191A: add     rsp, 8
 * 00000001401C191E: call    loc_1401C1911
 * 00000001401C1923: add     rsp, 8
 * 00000001401C1927: call    loc_1401C191A
 * 00000001401C192C: add     rsp, 8
 * 00000001401C1930: call    loc_1401C1923
 * 00000001401C1935: add     rsp, 8
 * 00000001401C1939: call    loc_1401C192C
 * 00000001401C193E: add     rsp, 8
 * 00000001401C1942: call    loc_1401C1935
 * 00000001401C1947: add     rsp, 8
 * 00000001401C194B: call    loc_1401C193E
 * 00000001401C1950: add     rsp, 8
 * 00000001401C1954: call    loc_1401C1947
 * 00000001401C1959: add     rsp, 8
 * 00000001401C195D: call    loc_1401C1950
 * 00000001401C1962: add     rsp, 8
 * 00000001401C1966: call    loc_1401C1959
 * 00000001401C196B: add     rsp, 8
 * 00000001401C196F: call    loc_1401C1962
 * 00000001401C1974: add     rsp, 8
 * 00000001401C1978: call    loc_1401C196B
 * 00000001401C197D: add     rsp, 8
 * 00000001401C1981: mov     eax, 0DADAh
 * 00000001401C1986: test    edx, 200h
 * 00000001401C198C: jz      short loc_1401C1993
 * 00000001401C198E: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C1993: lfence
 * 00000001401C1996: mov     byte ptr gs:856h, 0
 * 00000001401C199F: test    byte ptr [r10+3], 3
 * 00000001401C19A4: mov     word ptr [rbp+80h], 0
 * 00000001401C19AD: jz      short loc_1401C19B4
 * 00000001401C19AF: call    KiSaveDebugRegisterState
 * 00000001401C19B4: cld
 * 00000001401C19B5: stmxcsr dword ptr [rbp-54h]
 * 00000001401C19B9: ldmxcsr dword ptr gs:180h
 * 00000001401C19C2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C19C6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C19CA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C19CE: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C19D2: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C19D6: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C19DA: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C19E3: jz      short loc_1401C19EA
 * 00000001401C19E5: call    KeWakeProcessor
 * 00000001401C19EA: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C19F1: cmp     rax, [rbp+0E8h]
 * 00000001401C19F8: jnb     short loc_1401C1A13
 * 00000001401C19FA: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1A01: cmp     rax, [rbp+0E8h]
 * 00000001401C1A08: jb      short loc_1401C1A13
 * 00000001401C1A0A: lea     rcx, [rbp-80h]
 * 00000001401C1A0E: call    KiCheckForSListAddress
 * 00000001401C1A13: xor     esi, esi
 * 00000001401C1A15: inc     dword ptr gs:5D00h
 * 00000001401C1A1D: jmp     KiVmbusInterruptDispatch
 */
