/*
 * XREFs of KiHvInterrupt @ 0x1401C1160
 * Callers:
 *     KiHvInterruptShadow @ 0x14032EF80 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140107D40 (KiCheckForSListAddress.c)
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x1401C1160 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140293C90 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1401C1160
 * Reason: Hex-Rays returned no pseudocode for 0x1401C1160
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C1160: push    0
 * 00000001401C1162: push    rbp
 * 00000001401C1163: push    rsi
 * 00000001401C1164: sub     rsp, 150h
 * 00000001401C116B: lea     rbp, [rsp+168h+var_E8]
 * 00000001401C1173: mov     byte ptr [rbp-55h], 0
 * 00000001401C1177: mov     [rbp-50h], rax
 * 00000001401C117B: mov     [rbp-48h], rcx
 * 00000001401C117F: mov     [rbp-40h], rdx
 * 00000001401C1183: mov     [rbp-38h], r8
 * 00000001401C1187: mov     [rbp-30h], r9
 * 00000001401C118B: mov     [rbp-28h], r10
 * 00000001401C118F: mov     [rbp-20h], r11
 * 00000001401C1193: test    byte ptr [rbp+0F0h], 1
 * 00000001401C119A: jnz     short loc_1401C11CB
 * 00000001401C119C: lfence
 * 00000001401C119F: test    word ptr gs:860h, 1
 * 00000001401C11AA: jnz     short loc_1401C11B4
 * 00000001401C11AC: lfence
 * 00000001401C11AF: jmp     loc_1401C13D4
 * 00000001401C11B4: movzx   eax, word ptr gs:864h
 * 00000001401C11BD: mov     ecx, 48h ; 'H'
 * 00000001401C11C2: xor     edx, edx
 * 00000001401C11C4: wrmsr
 * 00000001401C11C6: jmp     loc_1401C13D4
 * 00000001401C11CB: test    cs:KiKvaShadow, 1
 * 00000001401C11D2: jnz     short loc_1401C11D7
 * 00000001401C11D4: swapgs
 * 00000001401C11D7: lfence
 * 00000001401C11DA: mov     r10, gs:188h
 * 00000001401C11E3: mov     rcx, gs:188h
 * 00000001401C11EC: mov     rcx, [rcx+220h]
 * 00000001401C11F3: mov     rcx, [rcx+830h]
 * 00000001401C11FA: mov     gs:858h, rcx
 * 00000001401C1203: mov     cx, gs:850h
 * 00000001401C120C: mov     gs:852h, cx
 * 00000001401C1215: mov     cx, gs:860h
 * 00000001401C121E: mov     gs:854h, cx
 * 00000001401C1227: movzx   eax, word ptr gs:866h
 * 00000001401C1230: cmp     gs:864h, ax
 * 00000001401C1239: jz      short loc_1401C124D
 * 00000001401C123B: mov     gs:864h, ax
 * 00000001401C1244: mov     ecx, 48h ; 'H'
 * 00000001401C1249: xor     edx, edx
 * 00000001401C124B: wrmsr
 * 00000001401C124D: movzx   edx, word ptr gs:860h
 * 00000001401C1256: test    edx, 8
 * 00000001401C125C: jz      short loc_1401C1275
 * 00000001401C125E: mov     eax, 1
 * 00000001401C1263: xor     edx, edx
 * 00000001401C1265: mov     ecx, 49h ; 'I'
 * 00000001401C126A: wrmsr
 * 00000001401C126C: movzx   edx, word ptr gs:860h
 * 00000001401C1275: test    edx, 2
 * 00000001401C127B: jz      loc_1401C13A6
 * 00000001401C1281: call    loc_1401C1394
 * 00000001401C1286: add     rsp, 8
 * 00000001401C128A: call    loc_1401C139D
 * 00000001401C128F: add     rsp, 8
 * 00000001401C1293: call    loc_1401C1286
 * 00000001401C1298: add     rsp, 8
 * 00000001401C129C: call    loc_1401C128F
 * 00000001401C12A1: add     rsp, 8
 * 00000001401C12A5: call    loc_1401C1298
 * 00000001401C12AA: add     rsp, 8
 * 00000001401C12AE: call    loc_1401C12A1
 * 00000001401C12B3: add     rsp, 8
 * 00000001401C12B7: call    loc_1401C12AA
 * 00000001401C12BC: add     rsp, 8
 * 00000001401C12C0: call    loc_1401C12B3
 * 00000001401C12C5: add     rsp, 8
 * 00000001401C12C9: call    loc_1401C12BC
 * 00000001401C12CE: add     rsp, 8
 * 00000001401C12D2: call    loc_1401C12C5
 * 00000001401C12D7: add     rsp, 8
 * 00000001401C12DB: call    loc_1401C12CE
 * 00000001401C12E0: add     rsp, 8
 * 00000001401C12E4: call    loc_1401C12D7
 * 00000001401C12E9: add     rsp, 8
 * 00000001401C12ED: call    loc_1401C12E0
 * 00000001401C12F2: add     rsp, 8
 * 00000001401C12F6: call    loc_1401C12E9
 * 00000001401C12FB: add     rsp, 8
 * 00000001401C12FF: call    loc_1401C12F2
 * 00000001401C1304: add     rsp, 8
 * 00000001401C1308: call    loc_1401C12FB
 * 00000001401C130D: add     rsp, 8
 * 00000001401C1311: call    loc_1401C1304
 * 00000001401C1316: add     rsp, 8
 * 00000001401C131A: call    loc_1401C130D
 * 00000001401C131F: add     rsp, 8
 * 00000001401C1323: call    loc_1401C1316
 * 00000001401C1328: add     rsp, 8
 * 00000001401C132C: call    loc_1401C131F
 * 00000001401C1331: add     rsp, 8
 * 00000001401C1335: call    loc_1401C1328
 * 00000001401C133A: add     rsp, 8
 * 00000001401C133E: call    loc_1401C1331
 * 00000001401C1343: add     rsp, 8
 * 00000001401C1347: call    loc_1401C133A
 * 00000001401C134C: add     rsp, 8
 * 00000001401C1350: call    loc_1401C1343
 * 00000001401C1355: add     rsp, 8
 * 00000001401C1359: call    loc_1401C134C
 * 00000001401C135E: add     rsp, 8
 * 00000001401C1362: call    loc_1401C1355
 * 00000001401C1367: add     rsp, 8
 * 00000001401C136B: call    loc_1401C135E
 * 00000001401C1370: add     rsp, 8
 * 00000001401C1374: call    loc_1401C1367
 * 00000001401C1379: add     rsp, 8
 * 00000001401C137D: call    loc_1401C1370
 * 00000001401C1382: add     rsp, 8
 * 00000001401C1386: call    loc_1401C1379
 * 00000001401C138B: add     rsp, 8
 * 00000001401C138F: call    loc_1401C1382
 * 00000001401C1394: add     rsp, 8
 * 00000001401C1398: call    loc_1401C138B
 * 00000001401C139D: add     rsp, 8
 * 00000001401C13A1: mov     eax, 0DADAh
 * 00000001401C13A6: test    edx, 200h
 * 00000001401C13AC: jz      short loc_1401C13B3
 * 00000001401C13AE: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401C13B3: lfence
 * 00000001401C13B6: mov     byte ptr gs:856h, 0
 * 00000001401C13BF: test    byte ptr [r10+3], 3
 * 00000001401C13C4: mov     word ptr [rbp+80h], 0
 * 00000001401C13CD: jz      short loc_1401C13D4
 * 00000001401C13CF: call    KiSaveDebugRegisterState
 * 00000001401C13D4: cld
 * 00000001401C13D5: stmxcsr dword ptr [rbp-54h]
 * 00000001401C13D9: ldmxcsr dword ptr gs:180h
 * 00000001401C13E2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401C13E6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401C13EA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401C13EE: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401C13F2: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401C13F6: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401C13FA: cmp     byte ptr gs:5D1Ah, 0
 * 00000001401C1403: jz      short loc_1401C140A
 * 00000001401C1405: call    KeWakeProcessor
 * 00000001401C140A: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401C1411: cmp     rax, [rbp+0E8h]
 * 00000001401C1418: jnb     short loc_1401C1433
 * 00000001401C141A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401C1421: cmp     rax, [rbp+0E8h]
 * 00000001401C1428: jb      short loc_1401C1433
 * 00000001401C142A: lea     rcx, [rbp-80h]
 * 00000001401C142E: call    KiCheckForSListAddress
 * 00000001401C1433: xor     esi, esi
 * 00000001401C1435: inc     dword ptr gs:5D00h
 * 00000001401C143D: jmp     KiHvInterruptDispatch
 */
