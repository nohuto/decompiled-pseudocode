/*
 * XREFs of KiGeneralProtectionFault @ 0x1401D14C0
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140350780 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x1401D14C0 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x1401D14C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401D14C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D14C0: push    rbp
 * 00000001401D14C1: sub     rsp, 158h
 * 00000001401D14C8: lea     rbp, [rsp+80h]
 * 00000001401D14D0: mov     [rbp+0D8h+var_12D], 1
 * 00000001401D14D4: mov     [rbp+0D8h+var_128], rax
 * 00000001401D14D8: mov     [rbp+0D8h+var_120], rcx
 * 00000001401D14DC: mov     [rbp+0D8h+var_118], rdx
 * 00000001401D14E0: mov     [rbp+0D8h+var_110], r8
 * 00000001401D14E4: mov     [rbp+0D8h+var_108], r9
 * 00000001401D14E8: mov     [rbp+0D8h+var_100], r10
 * 00000001401D14EC: mov     [rbp+0D8h+var_F8], r11
 * 00000001401D14F0: test    [rbp+0D8h+arg_8], 1
 * 00000001401D14F7: jnz     short loc_1401D1526
 * 00000001401D14F9: lfence
 * 00000001401D14FC: test    byte ptr gs:278h, 1
 * 00000001401D1505: jnz     short loc_1401D150F
 * 00000001401D1507: lfence
 * 00000001401D150A: jmp     loc_1401D176B
 * 00000001401D150F: movzx   eax, byte ptr gs:27Ah
 * 00000001401D1518: mov     ecx, 48h ; 'H'
 * 00000001401D151D: xor     edx, edx
 * 00000001401D151F: wrmsr
 * 00000001401D1521: jmp     loc_1401D176B
 * 00000001401D1526: test    cs:KiKvaShadow, 1
 * 00000001401D152D: jnz     short loc_1401D1532
 * 00000001401D152F: swapgs
 * 00000001401D1532: lfence
 * 00000001401D1535: mov     r10, gs:188h
 * 00000001401D153E: mov     rcx, gs:188h
 * 00000001401D1547: mov     rcx, [rcx+220h]
 * 00000001401D154E: mov     rcx, [rcx+860h]
 * 00000001401D1555: mov     gs:270h, rcx
 * 00000001401D155E: mov     cl, gs:850h
 * 00000001401D1566: mov     gs:851h, cl
 * 00000001401D156E: mov     cl, gs:278h
 * 00000001401D1576: mov     gs:852h, cl
 * 00000001401D157E: movzx   eax, byte ptr gs:27Bh
 * 00000001401D1587: cmp     gs:27Ah, al
 * 00000001401D158F: jz      short loc_1401D15A2
 * 00000001401D1591: mov     gs:27Ah, al
 * 00000001401D1599: mov     ecx, 48h ; 'H'
 * 00000001401D159E: xor     edx, edx
 * 00000001401D15A0: wrmsr
 * 00000001401D15A2: movzx   edx, byte ptr gs:278h
 * 00000001401D15AB: test    edx, 8
 * 00000001401D15B1: jz      short loc_1401D15C6
 * 00000001401D15B3: mov     eax, 1
 * 00000001401D15B8: xor     edx, edx
 * 00000001401D15BA: mov     ecx, 49h ; 'I'
 * 00000001401D15BF: wrmsr
 * 00000001401D15C1: jmp     loc_1401D1704
 * 00000001401D15C6: test    edx, 2
 * 00000001401D15CC: jz      loc_1401D1701
 * 00000001401D15D2: test    byte ptr gs:279h, 4
 * 00000001401D15DB: jnz     loc_1401D1701
 * 00000001401D15E1: call    loc_1401D16F4
 * 00000001401D15E6: add     rsp, 8
 * 00000001401D15EA: call    loc_1401D16FD
 * 00000001401D15EF: add     rsp, 8
 * 00000001401D15F3: call    loc_1401D15E6
 * 00000001401D15F8: add     rsp, 8
 * 00000001401D15FC: call    loc_1401D15EF
 * 00000001401D1601: add     rsp, 8
 * 00000001401D1605: call    loc_1401D15F8
 * 00000001401D160A: add     rsp, 8
 * 00000001401D160E: call    loc_1401D1601
 * 00000001401D1613: add     rsp, 8
 * 00000001401D1617: call    loc_1401D160A
 * 00000001401D161C: add     rsp, 8
 * 00000001401D1620: call    loc_1401D1613
 * 00000001401D1625: add     rsp, 8
 * 00000001401D1629: call    loc_1401D161C
 * 00000001401D162E: add     rsp, 8
 * 00000001401D1632: call    loc_1401D1625
 * 00000001401D1637: add     rsp, 8
 * 00000001401D163B: call    loc_1401D162E
 * 00000001401D1640: add     rsp, 8
 * 00000001401D1644: call    loc_1401D1637
 * 00000001401D1649: add     rsp, 8
 * 00000001401D164D: call    loc_1401D1640
 * 00000001401D1652: add     rsp, 8
 * 00000001401D1656: call    loc_1401D1649
 * 00000001401D165B: add     rsp, 8
 * 00000001401D165F: call    loc_1401D1652
 * 00000001401D1664: add     rsp, 8
 * 00000001401D1668: call    loc_1401D165B
 * 00000001401D166D: add     rsp, 8
 * 00000001401D1671: call    loc_1401D1664
 * 00000001401D1676: add     rsp, 8
 * 00000001401D167A: call    loc_1401D166D
 * 00000001401D167F: add     rsp, 8
 * 00000001401D1683: call    loc_1401D1676
 * 00000001401D1688: add     rsp, 8
 * 00000001401D168C: call    loc_1401D167F
 * 00000001401D1691: add     rsp, 8
 * 00000001401D1695: call    loc_1401D1688
 * 00000001401D169A: add     rsp, 8
 * 00000001401D169E: call    loc_1401D1691
 * 00000001401D16A3: add     rsp, 8
 * 00000001401D16A7: call    loc_1401D169A
 * 00000001401D16AC: add     rsp, 8
 * 00000001401D16B0: call    loc_1401D16A3
 * 00000001401D16B5: add     rsp, 8
 * 00000001401D16B9: call    loc_1401D16AC
 * 00000001401D16BE: add     rsp, 8
 * 00000001401D16C2: call    loc_1401D16B5
 * 00000001401D16C7: add     rsp, 8
 * 00000001401D16CB: call    loc_1401D16BE
 * 00000001401D16D0: add     rsp, 8
 * 00000001401D16D4: call    loc_1401D16C7
 * 00000001401D16D9: add     rsp, 8
 * 00000001401D16DD: call    loc_1401D16D0
 * 00000001401D16E2: add     rsp, 8
 * 00000001401D16E6: call    loc_1401D16D9
 * 00000001401D16EB: add     rsp, 8
 * 00000001401D16EF: call    loc_1401D16E2
 * 00000001401D16F4: add     rsp, 8
 * 00000001401D16F8: call    loc_1401D16EB
 * 00000001401D16FD: add     rsp, 8
 * 00000001401D1701: lfence
 * 00000001401D1704: mov     byte ptr gs:853h, 0
 * 00000001401D170D: test    byte ptr [r10+3], 80h
 * 00000001401D1712: jz      short loc_1401D1756
 * 00000001401D1714: mov     ecx, 0C0000102h
 * 00000001401D1719: rdmsr
 * 00000001401D171B: shl     rdx, 20h
 * 00000001401D171F: or      rax, rdx
 * 00000001401D1722: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D1729: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D1731: cmp     [r10+0F0h], rax
 * 00000001401D1738: jz      short loc_1401D1756
 * 00000001401D173A: mov     rdx, [r10+1F0h]
 * 00000001401D1741: bts     dword ptr [r10+74h], 8
 * 00000001401D1747: dec     word ptr [r10+1E6h]
 * 00000001401D174F: mov     [rdx+80h], rax
 * 00000001401D1756: test    byte ptr [r10+3], 3
 * 00000001401D175B: mov     [rbp+0D8h+var_58], 0
 * 00000001401D1764: jz      short loc_1401D176B
 * 00000001401D1766: call    KiSaveDebugRegisterState
 * 00000001401D176B: cld
 * 00000001401D176C: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401D1770: ldmxcsr dword ptr gs:180h
 * 00000001401D1779: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401D177D: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401D1781: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401D1785: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401D1789: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401D178D: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401D1791: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D1798: jz      short loc_1401D17A6
 * 00000001401D179A: test    [rbp+0D8h+arg_8], 1
 * 00000001401D17A1: jz      short loc_1401D17A6
 * 00000001401D17A3: stac
 * 00000001401D17A6: mov     eax, [rbp+0E0h]
 * 00000001401D17AC: test    [rbp+0D8h+arg_10], 200h
 * 00000001401D17B6: jz      short loc_1401D17B9
 * 00000001401D17B8: sti
 * 00000001401D17B9: mov     ecx, 10000001h
 * 00000001401D17BE: mov     edx, 2
 * 00000001401D17C3: mov     r9d, [rbp+0E0h]
 * 00000001401D17CA: and     r9d, 0FFFFh
 * 00000001401D17D1: xor     r10, r10
 * 00000001401D17D4: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401D17DB: call    KiExceptionDispatch
 * 00000001401D17E0: nop
 * 00000001401D17E1: retn
 */
