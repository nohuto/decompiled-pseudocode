/*
 * XREFs of KxDebugTrapOrFault @ 0x1401CF400
 * Callers:
 *     KiDebugTrapOrFault @ 0x1401CF340 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1401CF400 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1401CF400
 * Reason: Hex-Rays returned no pseudocode for 0x1401CF400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CF400: sub     rsp, 8
 * 00000001401CF404: push    rbp
 * 00000001401CF405: sub     rsp, 158h
 * 00000001401CF40C: lea     rbp, [rsp+80h]
 * 00000001401CF414: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CF418: mov     [rbp+0E8h+var_138], rax
 * 00000001401CF41C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CF420: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CF424: mov     [rbp+0E8h+var_120], r8
 * 00000001401CF428: mov     [rbp+0E8h+var_118], r9
 * 00000001401CF42C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CF430: mov     [rbp+0E8h+var_108], r11
 * 00000001401CF434: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF43B: jnz     short loc_1401CF46A
 * 00000001401CF43D: lfence
 * 00000001401CF440: test    byte ptr gs:278h, 1
 * 00000001401CF449: jnz     short loc_1401CF453
 * 00000001401CF44B: lfence
 * 00000001401CF44E: jmp     loc_1401CF6AF
 * 00000001401CF453: movzx   eax, byte ptr gs:27Ah
 * 00000001401CF45C: mov     ecx, 48h ; 'H'
 * 00000001401CF461: xor     edx, edx
 * 00000001401CF463: wrmsr
 * 00000001401CF465: jmp     loc_1401CF6AF
 * 00000001401CF46A: test    cs:KiKvaShadow, 1
 * 00000001401CF471: jnz     short loc_1401CF476
 * 00000001401CF473: swapgs
 * 00000001401CF476: lfence
 * 00000001401CF479: mov     r10, gs:188h
 * 00000001401CF482: mov     rcx, gs:188h
 * 00000001401CF48B: mov     rcx, [rcx+220h]
 * 00000001401CF492: mov     rcx, [rcx+860h]
 * 00000001401CF499: mov     gs:270h, rcx
 * 00000001401CF4A2: mov     cl, gs:850h
 * 00000001401CF4AA: mov     gs:851h, cl
 * 00000001401CF4B2: mov     cl, gs:278h
 * 00000001401CF4BA: mov     gs:852h, cl
 * 00000001401CF4C2: movzx   eax, byte ptr gs:27Bh
 * 00000001401CF4CB: cmp     gs:27Ah, al
 * 00000001401CF4D3: jz      short loc_1401CF4E6
 * 00000001401CF4D5: mov     gs:27Ah, al
 * 00000001401CF4DD: mov     ecx, 48h ; 'H'
 * 00000001401CF4E2: xor     edx, edx
 * 00000001401CF4E4: wrmsr
 * 00000001401CF4E6: movzx   edx, byte ptr gs:278h
 * 00000001401CF4EF: test    edx, 8
 * 00000001401CF4F5: jz      short loc_1401CF50A
 * 00000001401CF4F7: mov     eax, 1
 * 00000001401CF4FC: xor     edx, edx
 * 00000001401CF4FE: mov     ecx, 49h ; 'I'
 * 00000001401CF503: wrmsr
 * 00000001401CF505: jmp     loc_1401CF648
 * 00000001401CF50A: test    edx, 2
 * 00000001401CF510: jz      loc_1401CF645
 * 00000001401CF516: test    byte ptr gs:279h, 4
 * 00000001401CF51F: jnz     loc_1401CF645
 * 00000001401CF525: call    loc_1401CF638
 * 00000001401CF52A: add     rsp, 8
 * 00000001401CF52E: call    loc_1401CF641
 * 00000001401CF533: add     rsp, 8
 * 00000001401CF537: call    loc_1401CF52A
 * 00000001401CF53C: add     rsp, 8
 * 00000001401CF540: call    loc_1401CF533
 * 00000001401CF545: add     rsp, 8
 * 00000001401CF549: call    loc_1401CF53C
 * 00000001401CF54E: add     rsp, 8
 * 00000001401CF552: call    loc_1401CF545
 * 00000001401CF557: add     rsp, 8
 * 00000001401CF55B: call    loc_1401CF54E
 * 00000001401CF560: add     rsp, 8
 * 00000001401CF564: call    loc_1401CF557
 * 00000001401CF569: add     rsp, 8
 * 00000001401CF56D: call    loc_1401CF560
 * 00000001401CF572: add     rsp, 8
 * 00000001401CF576: call    loc_1401CF569
 * 00000001401CF57B: add     rsp, 8
 * 00000001401CF57F: call    loc_1401CF572
 * 00000001401CF584: add     rsp, 8
 * 00000001401CF588: call    loc_1401CF57B
 * 00000001401CF58D: add     rsp, 8
 * 00000001401CF591: call    loc_1401CF584
 * 00000001401CF596: add     rsp, 8
 * 00000001401CF59A: call    loc_1401CF58D
 * 00000001401CF59F: add     rsp, 8
 * 00000001401CF5A3: call    loc_1401CF596
 * 00000001401CF5A8: add     rsp, 8
 * 00000001401CF5AC: call    loc_1401CF59F
 * 00000001401CF5B1: add     rsp, 8
 * 00000001401CF5B5: call    loc_1401CF5A8
 * 00000001401CF5BA: add     rsp, 8
 * 00000001401CF5BE: call    loc_1401CF5B1
 * 00000001401CF5C3: add     rsp, 8
 * 00000001401CF5C7: call    loc_1401CF5BA
 * 00000001401CF5CC: add     rsp, 8
 * 00000001401CF5D0: call    loc_1401CF5C3
 * 00000001401CF5D5: add     rsp, 8
 * 00000001401CF5D9: call    loc_1401CF5CC
 * 00000001401CF5DE: add     rsp, 8
 * 00000001401CF5E2: call    loc_1401CF5D5
 * 00000001401CF5E7: add     rsp, 8
 * 00000001401CF5EB: call    loc_1401CF5DE
 * 00000001401CF5F0: add     rsp, 8
 * 00000001401CF5F4: call    loc_1401CF5E7
 * 00000001401CF5F9: add     rsp, 8
 * 00000001401CF5FD: call    loc_1401CF5F0
 * 00000001401CF602: add     rsp, 8
 * 00000001401CF606: call    loc_1401CF5F9
 * 00000001401CF60B: add     rsp, 8
 * 00000001401CF60F: call    loc_1401CF602
 * 00000001401CF614: add     rsp, 8
 * 00000001401CF618: call    loc_1401CF60B
 * 00000001401CF61D: add     rsp, 8
 * 00000001401CF621: call    loc_1401CF614
 * 00000001401CF626: add     rsp, 8
 * 00000001401CF62A: call    loc_1401CF61D
 * 00000001401CF62F: add     rsp, 8
 * 00000001401CF633: call    loc_1401CF626
 * 00000001401CF638: add     rsp, 8
 * 00000001401CF63C: call    loc_1401CF62F
 * 00000001401CF641: add     rsp, 8
 * 00000001401CF645: lfence
 * 00000001401CF648: mov     byte ptr gs:853h, 0
 * 00000001401CF651: test    byte ptr [r10+3], 80h
 * 00000001401CF656: jz      short loc_1401CF69A
 * 00000001401CF658: mov     ecx, 0C0000102h
 * 00000001401CF65D: rdmsr
 * 00000001401CF65F: shl     rdx, 20h
 * 00000001401CF663: or      rax, rdx
 * 00000001401CF666: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CF66D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CF675: cmp     [r10+0F0h], rax
 * 00000001401CF67C: jz      short loc_1401CF69A
 * 00000001401CF67E: mov     rdx, [r10+1F0h]
 * 00000001401CF685: bts     dword ptr [r10+74h], 8
 * 00000001401CF68B: dec     word ptr [r10+1E6h]
 * 00000001401CF693: mov     [rdx+80h], rax
 * 00000001401CF69A: test    byte ptr [r10+3], 3
 * 00000001401CF69F: mov     [rbp+0E8h+var_68], 0
 * 00000001401CF6A8: jz      short loc_1401CF6AF
 * 00000001401CF6AA: call    KiSaveDebugRegisterState
 * 00000001401CF6AF: cld
 * 00000001401CF6B0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CF6B4: ldmxcsr dword ptr gs:180h
 * 00000001401CF6BD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CF6C1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CF6C5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CF6C9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CF6CD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CF6D1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CF6D5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CF6DC: jz      short loc_1401CF6EA
 * 00000001401CF6DE: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF6E5: jz      short loc_1401CF6EA
 * 00000001401CF6E7: stac
 * 00000001401CF6EA: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CF6F4: jz      short loc_1401CF6F7
 * 00000001401CF6F6: sti
 * 00000001401CF6F7: test    cs:KiCpuTracingFlags, 2
 * 00000001401CF701: jz      short loc_1401CF716
 * 00000001401CF703: mov     ecx, 1D9h
 * 00000001401CF708: rdmsr
 * 00000001401CF70A: or      eax, 1
 * 00000001401CF70D: wrmsr
 * 00000001401CF70F: xor     edx, edx
 * 00000001401CF711: jmp     loc_1401CF7E5
 * 00000001401CF716: xor     edx, edx
 * 00000001401CF718: test    [rbp+0E8h+arg_8], 100h
 * 00000001401CF722: jz      loc_1401CF7E5
 * 00000001401CF728: test    byte ptr gs:6422h, 2
 * 00000001401CF731: jz      loc_1401CF7E5
 * 00000001401CF737: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF73E: jnz     short loc_1401CF797
 * 00000001401CF740: mov     rax, dr7
 * 00000001401CF743: test    ax, 200h
 * 00000001401CF747: jz      loc_1401CF7E5
 * 00000001401CF74D: test    ax, 100h
 * 00000001401CF751: jz      loc_1401CF7E5
 * 00000001401CF757: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001401CF75E: or      r8d, r8d
 * 00000001401CF761: jz      short loc_1401CF76B
 * 00000001401CF763: mov     ecx, r8d
 * 00000001401CF766: rdmsr
 * 00000001401CF768: mov     r8d, eax
 * 00000001401CF76B: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001401CF771: add     ecx, r8d
 * 00000001401CF774: rdmsr
 * 00000001401CF776: mov     r9d, eax
 * 00000001401CF779: shl     rdx, 20h
 * 00000001401CF77D: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001401CF783: or      r9, rdx
 * 00000001401CF786: add     ecx, r8d
 * 00000001401CF789: rdmsr
 * 00000001401CF78B: mov     r10d, eax
 * 00000001401CF78E: shl     rdx, 20h
 * 00000001401CF792: or      r10, rdx
 * 00000001401CF795: jmp     short loc_1401CF7E0
 * 00000001401CF797: test    [rbp+0E8h+var_68], 200h
 * 00000001401CF7A0: jz      short loc_1401CF7E5
 * 00000001401CF7A2: test    [rbp+0E8h+var_68], 100h
 * 00000001401CF7AB: jz      short loc_1401CF7E5
 * 00000001401CF7AD: and     [rbp+0E8h+var_40], 0
 * 00000001401CF7B5: and     [rbp+0E8h+var_48], 0
 * 00000001401CF7BD: mov     rcx, cs:MmUserProbeAddress
 * 00000001401CF7C4: mov     r9, [rbp+0E8h+var_50]
 * 00000001401CF7CB: cmp     r9, rcx
 * 00000001401CF7CE: cmovnb  r9, rcx
 * 00000001401CF7D2: mov     r10, [rbp+0E8h+var_58]
 * 00000001401CF7D9: cmp     r10, rcx
 * 00000001401CF7DC: cmovnb  r10, rcx
 * 00000001401CF7E0: mov     edx, 2
 * 00000001401CF7E5: mov     ecx, 80000004h
 * 00000001401CF7EA: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001401CF7F4: mov     r8, [rbp+0E8h]
 * 00000001401CF7FB: call    KiExceptionDispatch
 * 00000001401CF800: nop
 * 00000001401CF801: retn
 */
