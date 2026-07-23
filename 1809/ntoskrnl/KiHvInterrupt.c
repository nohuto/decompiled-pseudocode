/*
 * XREFs of KiHvInterrupt @ 0x1401C12C0
 * Callers:
 *     KiHvInterruptShadow @ 0x14032FF80 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x1401C12C0 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293E80 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1401C12C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C12C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C12C0: push    0
 * 00000001401C12C2: push    rbp
 * 00000001401C12C3: push    rsi
 * 00000001401C12C4: sub     rsp, 150h
 * 00000001401C12CB: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C12D3: mov     byte ptr [rbp-55h], 0
 * 00000001401C12D7: mov     [rbp-50h], rax
 * 00000001401C12DB: mov     [rbp-48h], rcx
 * 00000001401C12DF: mov     [rbp-40h], rdx
 * 00000001401C12E3: mov     [rbp-38h], r8
 * 00000001401C12E7: mov     [rbp-30h], r9
 * 00000001401C12EB: mov     [rbp-28h], r10
 * 00000001401C12EF: mov     [rbp-20h], r11
 * 00000001401C12F3: test    byte ptr [rbp+0F0h], 1
 * 00000001401C12FA: jnz     short loc_1401C132B
 * 00000001401C12FC: lfence
 * 00000001401C12FF: test    word ptr gs:860h, 1
 * 00000001401C130A: jnz     short loc_1401C1314
 * 00000001401C130C: lfence
 * 00000001401C130F: jmp     loc_1401C1534
 * 00000001401C1314: movzx   eax, word ptr gs:864h
 * 00000001401C131D: mov     ecx, 48h ; 'H'
 * 00000001401C1322: xor     edx, edx
 * 00000001401C1324: wrmsr
 * 00000001401C1326: jmp     loc_1401C1534
 * 00000001401C132B: test    cs:KiKvaShadow, 1
 * 00000001401C1332: jnz     short loc_1401C1337
 * 00000001401C1334: swapgs
 * 00000001401C1337: lfence
 * 00000001401C133A: mov     r10, gs:188h
 * 00000001401C1343: mov     rcx, gs:188h
 * 00000001401C134C: mov     rcx, [rcx+220h]
 * 00000001401C1353: mov     rcx, [rcx+830h]
 * 00000001401C135A: mov     gs:858h, rcx
 * 00000001401C1363: mov     cx, gs:850h
 * 00000001401C136C: mov     gs:852h, cx
 * 00000001401C1375: mov     cx, gs:860h
 * 00000001401C137E: mov     gs:854h, cx
 * 00000001401C1387: movzx   eax, word ptr gs:866h
 * 00000001401C1390: cmp     gs:864h, ax
 * 00000001401C1399: jz      short loc_1401C13AD
 * 00000001401C139B: mov     gs:864h, ax
 * 00000001401C13A4: mov     ecx, 48h ; 'H'
 * 00000001401C13A9: xor     edx, edx
 * 00000001401C13AB: wrmsr
 * 00000001401C13AD: movzx   edx, word ptr gs:860h
 * 00000001401C13B6: test    edx, 8
 * 00000001401C13BC: jz      short loc_1401C13D5
 * 00000001401C13BE: mov     eax, 1
 * 00000001401C13C3: xor     edx, edx
 * 00000001401C13C5: mov     ecx, 49h ; 'I'
 * 00000001401C13CA: wrmsr
 * 00000001401C13CC: movzx   edx, word ptr gs:860h
 * 00000001401C13D5: test    edx, 2
 * 00000001401C13DB: jz      loc_1401C1506
 * 00000001401C13E1: call    loc_1401C14F4
 * 00000001401C13E6: add     rsp, 8
 * 00000001401C13EA: call    loc_1401C14FD
 * 00000001401C13EF: add     rsp, 8
 * 00000001401C13F3: call    loc_1401C13E6
 * 00000001401C13F8: add     rsp, 8
 * 00000001401C13FC: call    loc_1401C13EF
 * 00000001401C1401: add     rsp, 8
 * 00000001401C1405: call    loc_1401C13F8
 * 00000001401C140A: add     rsp, 8
 * 00000001401C140E: call    loc_1401C1401
 * 00000001401C1413: add     rsp, 8
 * 00000001401C1417: call    loc_1401C140A
 * 00000001401C141C: add     rsp, 8
 * 00000001401C1420: call    loc_1401C1413
 * 00000001401C1425: add     rsp, 8
 * 00000001401C1429: call    loc_1401C141C
 * 00000001401C142E: add     rsp, 8
 * 00000001401C1432: call    loc_1401C1425
 * 00000001401C1437: add     rsp, 8
 * 00000001401C143B: call    loc_1401C142E
 * 00000001401C1440: add     rsp, 8
 * 00000001401C1444: call    loc_1401C1437
 * 00000001401C1449: add     rsp, 8
 * 00000001401C144D: call    loc_1401C1440
 * 00000001401C1452: add     rsp, 8
 * 00000001401C1456: call    loc_1401C1449
 * 00000001401C145B: add     rsp, 8
 * 00000001401C145F: call    loc_1401C1452
 * 00000001401C1464: add     rsp, 8
 * 00000001401C1468: call    loc_1401C145B
 * 00000001401C146D: add     rsp, 8
 * 00000001401C1471: call    loc_1401C1464
 * 00000001401C1476: add     rsp, 8
 * 00000001401C147A: call    loc_1401C146D
 * 00000001401C147F: add     rsp, 8
 * 00000001401C1483: call    loc_1401C1476
 * 00000001401C1488: add     rsp, 8
 * 00000001401C148C: call    loc_1401C147F
 * 00000001401C1491: add     rsp, 8
 * 00000001401C1495: call    loc_1401C1488
 * 00000001401C149A: add     rsp, 8
 * 00000001401C149E: call    loc_1401C1491
 * 00000001401C14A3: add     rsp, 8
 * 00000001401C14A7: call    loc_1401C149A
 * 00000001401C14AC: add     rsp, 8
 * 00000001401C14B0: call    loc_1401C14A3
 * 00000001401C14B5: add     rsp, 8
 * 00000001401C14B9: call    loc_1401C14AC
 * 00000001401C14BE: add     rsp, 8
 * 00000001401C14C2: call    loc_1401C14B5
 * 00000001401C14C7: add     rsp, 8
 * 00000001401C14CB: call    loc_1401C14BE
 * 00000001401C14D0: add     rsp, 8
 * 00000001401C14D4: call    loc_1401C14C7
 * 00000001401C14D9: add     rsp, 8
 * 00000001401C14DD: call    loc_1401C14D0
 * 00000001401C14E2: add     rsp, 8
 * 00000001401C14E6: call    loc_1401C14D9
 * 00000001401C14EB: add     rsp, 8
 * 00000001401C14EF: call    loc_1401C14E2
 * 00000001401C14F4: add     rsp, 8
 * 00000001401C14F8: call    loc_1401C14EB
 * 00000001401C14FD: add     rsp, 8
 * 00000001401C1501: mov     eax, 0DADAh
 * 00000001401C1506: test    edx, 200h
 * 00000001401C150C: jz      short loc_1401C1513
 * 00000001401C150E: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C1513: lfence
 * 00000001401C1516: mov     byte ptr gs:856h, 0
 * 00000001401C151F: test    byte ptr [r10+3], 3
 * 00000001401C1524: mov     word ptr [rbp+80h], 0
 * 00000001401C152D: jz      short loc_1401C1534
 * 00000001401C152F: call    KiSaveDebugRegisterState
 * 00000001401C1534: cld
 * 00000001401C1535: stmxcsr dword ptr [rbp-54h]
 * 00000001401C1539: ldmxcsr dword ptr gs:180h
 * 00000001401C1542: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C1546: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C154A: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C154E: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C1552: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C1556: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C155A: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C1563: jz      short loc_1401C156A
 * 00000001401C1565: call    KeWakeProcessor
 * 00000001401C156A: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C1571: cmp     rax, [rbp+0E8h]
 * 00000001401C1578: jnb     short loc_1401C1593
 * 00000001401C157A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1581: cmp     rax, [rbp+0E8h]
 * 00000001401C1588: jb      short loc_1401C1593
 * 00000001401C158A: lea     rcx, [rbp-80h]
 * 00000001401C158E: call    KiCheckForSListAddress
 * 00000001401C1593: xor     esi, esi
 * 00000001401C1595: inc     dword ptr gs:5D00h
 * 00000001401C159D: jmp     KiHvInterruptDispatch
 */
