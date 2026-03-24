/*
 * XREFs of KiStackFault @ 0x1401D1180
 * Callers:
 *     KiStackFaultShadow @ 0x140350700 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x1401D1180 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x1401D1180
 * Reason: Hex-Rays returned no pseudocode for 0x1401D1180
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D1180: push    rbp
 * 00000001401D1181: sub     rsp, 158h
 * 00000001401D1188: lea     rbp, [rsp+80h]
 * 00000001401D1190: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D1194: mov     [rbp+0D8h+var_128], rax
 * 00000001401D1198: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D119C: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D11A0: mov     [rbp+0D8h+var_110], r8
 * 00000001401D11A4: mov     [rbp+0D8h+var_108], r9
 * 00000001401D11A8: mov     [rbp+0D8h+var_100], r10
 * 00000001401D11AC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D11B0: test    [rbp+0D8h+arg_8], 1
 * 00000001401D11B7: jnz     short loc_1401D11E6
 * 00000001401D11B9: lfence
 * 00000001401D11BC: test    byte ptr gs:278h, 1
 * 00000001401D11C5: jnz     short loc_1401D11CF
 * 00000001401D11C7: lfence
 * 00000001401D11CA: jmp     loc_1401D142B
 * 00000001401D11CF: movzx   eax, byte ptr gs:27Ah
 * 00000001401D11D8: mov     ecx, 48h ; 'H'
 * 00000001401D11DD: xor     edx, edx
 * 00000001401D11DF: wrmsr
 * 00000001401D11E1: jmp     loc_1401D142B
 * 00000001401D11E6: test    cs:KiKvaShadow, 1
 * 00000001401D11ED: jnz     short loc_1401D11F2
 * 00000001401D11EF: swapgs
 * 00000001401D11F2: lfence
 * 00000001401D11F5: mov     r10, gs:188h
 * 00000001401D11FE: mov     rcx, gs:188h
 * 00000001401D1207: mov     rcx, [rcx+220h]
 * 00000001401D120E: mov     rcx, [rcx+860h]
 * 00000001401D1215: mov     gs:270h, rcx
 * 00000001401D121E: mov     cl, gs:850h
 * 00000001401D1226: mov     gs:851h, cl
 * 00000001401D122E: mov     cl, gs:278h
 * 00000001401D1236: mov     gs:852h, cl
 * 00000001401D123E: movzx   eax, byte ptr gs:27Bh
 * 00000001401D1247: cmp     gs:27Ah, al
 * 00000001401D124F: jz      short loc_1401D1262
 * 00000001401D1251: mov     gs:27Ah, al
 * 00000001401D1259: mov     ecx, 48h ; 'H'
 * 00000001401D125E: xor     edx, edx
 * 00000001401D1260: wrmsr
 * 00000001401D1262: movzx   edx, byte ptr gs:278h
 * 00000001401D126B: test    edx, 8
 * 00000001401D1271: jz      short loc_1401D1286
 * 00000001401D1273: mov     eax, 1
 * 00000001401D1278: xor     edx, edx
 * 00000001401D127A: mov     ecx, 49h ; 'I'
 * 00000001401D127F: wrmsr
 * 00000001401D1281: jmp     loc_1401D13C4
 * 00000001401D1286: test    edx, 2
 * 00000001401D128C: jz      loc_1401D13C1
 * 00000001401D1292: test    byte ptr gs:279h, 4
 * 00000001401D129B: jnz     loc_1401D13C1
 * 00000001401D12A1: call    loc_1401D13B4
 * 00000001401D12A6: add     rsp, 8
 * 00000001401D12AA: call    loc_1401D13BD
 * 00000001401D12AF: add     rsp, 8
 * 00000001401D12B3: call    loc_1401D12A6
 * 00000001401D12B8: add     rsp, 8
 * 00000001401D12BC: call    loc_1401D12AF
 * 00000001401D12C1: add     rsp, 8
 * 00000001401D12C5: call    loc_1401D12B8
 * 00000001401D12CA: add     rsp, 8
 * 00000001401D12CE: call    loc_1401D12C1
 * 00000001401D12D3: add     rsp, 8
 * 00000001401D12D7: call    loc_1401D12CA
 * 00000001401D12DC: add     rsp, 8
 * 00000001401D12E0: call    loc_1401D12D3
 * 00000001401D12E5: add     rsp, 8
 * 00000001401D12E9: call    loc_1401D12DC
 * 00000001401D12EE: add     rsp, 8
 * 00000001401D12F2: call    loc_1401D12E5
 * 00000001401D12F7: add     rsp, 8
 * 00000001401D12FB: call    loc_1401D12EE
 * 00000001401D1300: add     rsp, 8
 * 00000001401D1304: call    loc_1401D12F7
 * 00000001401D1309: add     rsp, 8
 * 00000001401D130D: call    loc_1401D1300
 * 00000001401D1312: add     rsp, 8
 * 00000001401D1316: call    loc_1401D1309
 * 00000001401D131B: add     rsp, 8
 * 00000001401D131F: call    loc_1401D1312
 * 00000001401D1324: add     rsp, 8
 * 00000001401D1328: call    loc_1401D131B
 * 00000001401D132D: add     rsp, 8
 * 00000001401D1331: call    loc_1401D1324
 * 00000001401D1336: add     rsp, 8
 * 00000001401D133A: call    loc_1401D132D
 * 00000001401D133F: add     rsp, 8
 * 00000001401D1343: call    loc_1401D1336
 * 00000001401D1348: add     rsp, 8
 * 00000001401D134C: call    loc_1401D133F
 * 00000001401D1351: add     rsp, 8
 * 00000001401D1355: call    loc_1401D1348
 * 00000001401D135A: add     rsp, 8
 * 00000001401D135E: call    loc_1401D1351
 * 00000001401D1363: add     rsp, 8
 * 00000001401D1367: call    loc_1401D135A
 * 00000001401D136C: add     rsp, 8
 * 00000001401D1370: call    loc_1401D1363
 * 00000001401D1375: add     rsp, 8
 * 00000001401D1379: call    loc_1401D136C
 * 00000001401D137E: add     rsp, 8
 * 00000001401D1382: call    loc_1401D1375
 * 00000001401D1387: add     rsp, 8
 * 00000001401D138B: call    loc_1401D137E
 * 00000001401D1390: add     rsp, 8
 * 00000001401D1394: call    loc_1401D1387
 * 00000001401D1399: add     rsp, 8
 * 00000001401D139D: call    loc_1401D1390
 * 00000001401D13A2: add     rsp, 8
 * 00000001401D13A6: call    loc_1401D1399
 * 00000001401D13AB: add     rsp, 8
 * 00000001401D13AF: call    loc_1401D13A2
 * 00000001401D13B4: add     rsp, 8
 * 00000001401D13B8: call    loc_1401D13AB
 * 00000001401D13BD: add     rsp, 8
 * 00000001401D13C1: lfence
 * 00000001401D13C4: mov     byte ptr gs:853h, 0
 * 00000001401D13CD: test    byte ptr [r10+3], 80h
 * 00000001401D13D2: jz      short loc_1401D1416
 * 00000001401D13D4: mov     ecx, 0C0000102h
 * 00000001401D13D9: rdmsr
 * 00000001401D13DB: shl     rdx, 20h
 * 00000001401D13DF: or      rax, rdx
 * 00000001401D13E2: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D13E9: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D13F1: cmp     [r10+0F0h], rax
 * 00000001401D13F8: jz      short loc_1401D1416
 * 00000001401D13FA: mov     rdx, [r10+1F0h]
 * 00000001401D1401: bts     dword ptr [r10+74h], 8
 * 00000001401D1407: dec     word ptr [r10+1E6h]
 * 00000001401D140F: mov     [rdx+80h], rax
 * 00000001401D1416: test    byte ptr [r10+3], 3
 * 00000001401D141B: mov     [rbp+0D8h+var_58], 0
 * 00000001401D1424: jz      short loc_1401D142B
 * 00000001401D1426: call    KiSaveDebugRegisterState
 * 00000001401D142B: cld
 * 00000001401D142C: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D1430: ldmxcsr dword ptr gs:180h
 * 00000001401D1439: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D143D: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D1441: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D1445: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D1449: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D144D: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D1451: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D1458: jz      short loc_1401D1466
 * 00000001401D145A: test    [rbp+0D8h+arg_8], 1
 * 00000001401D1461: jz      short loc_1401D1466
 * 00000001401D1463: stac
 * 00000001401D1466: mov     eax, [rbp+0E0h]
 * 00000001401D146C: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D1476: jz      short loc_1401D1479
 * 00000001401D1478: sti
 * 00000001401D1479: mov     ecx, 0C0000005h
 * 00000001401D147E: mov     edx, 2
 * 00000001401D1483: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D148A: mov     r9d, [rbp+0E0h]
 * 00000001401D1491: or      r9d, 3
 * 00000001401D1495: and     r9d, 0FFFFh
 * 00000001401D149C: test    [rbp+0D8h+arg_8], 1
 * 00000001401D14A3: jnz     short loc_1401D14A9
 * 00000001401D14A5: or      r9, 0FFFFFFFFFFFFFFFFh
 * 00000001401D14A9: xor     r10, r10
 * 00000001401D14AC: call    KiExceptionDispatch
 * 00000001401D14B1: nop
 * 00000001401D14B2: retn
 */
