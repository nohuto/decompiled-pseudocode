/*
 * XREFs of KiOverflowTrap @ 0x1401CF440
 * Callers:
 *     KiOverflowTrapShadow @ 0x140350300 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x1401CF440 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x1401CF440
 * Reason: Hex-Rays returned no pseudocode for 0x1401CF440
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CF440: sub     rsp, 8
 * 00000001401CF444: push    rbp
 * 00000001401CF445: sub     rsp, 158h
 * 00000001401CF44C: lea     rbp, [rsp+80h]
 * 00000001401CF454: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CF458: mov     [rbp+0E8h+var_138], rax
 * 00000001401CF45C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CF460: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CF464: mov     [rbp+0E8h+var_120], r8
 * 00000001401CF468: mov     [rbp+0E8h+var_118], r9
 * 00000001401CF46C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CF470: mov     [rbp+0E8h+var_108], r11
 * 00000001401CF474: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF47B: jnz     short loc_1401CF4AA
 * 00000001401CF47D: lfence
 * 00000001401CF480: test    byte ptr gs:278h, 1
 * 00000001401CF489: jnz     short loc_1401CF493
 * 00000001401CF48B: lfence
 * 00000001401CF48E: jmp     loc_1401CF6EF
 * 00000001401CF493: movzx   eax, byte ptr gs:27Ah
 * 00000001401CF49C: mov     ecx, 48h ; 'H'
 * 00000001401CF4A1: xor     edx, edx
 * 00000001401CF4A3: wrmsr
 * 00000001401CF4A5: jmp     loc_1401CF6EF
 * 00000001401CF4AA: test    cs:KiKvaShadow, 1
 * 00000001401CF4B1: jnz     short loc_1401CF4B6
 * 00000001401CF4B3: swapgs
 * 00000001401CF4B6: lfence
 * 00000001401CF4B9: mov     r10, gs:188h
 * 00000001401CF4C2: mov     rcx, gs:188h
 * 00000001401CF4CB: mov     rcx, [rcx+220h]
 * 00000001401CF4D2: mov     rcx, [rcx+860h]
 * 00000001401CF4D9: mov     gs:270h, rcx
 * 00000001401CF4E2: mov     cl, gs:850h
 * 00000001401CF4EA: mov     gs:851h, cl
 * 00000001401CF4F2: mov     cl, gs:278h
 * 00000001401CF4FA: mov     gs:852h, cl
 * 00000001401CF502: movzx   eax, byte ptr gs:27Bh
 * 00000001401CF50B: cmp     gs:27Ah, al
 * 00000001401CF513: jz      short loc_1401CF526
 * 00000001401CF515: mov     gs:27Ah, al
 * 00000001401CF51D: mov     ecx, 48h ; 'H'
 * 00000001401CF522: xor     edx, edx
 * 00000001401CF524: wrmsr
 * 00000001401CF526: movzx   edx, byte ptr gs:278h
 * 00000001401CF52F: test    edx, 8
 * 00000001401CF535: jz      short loc_1401CF54A
 * 00000001401CF537: mov     eax, 1
 * 00000001401CF53C: xor     edx, edx
 * 00000001401CF53E: mov     ecx, 49h ; 'I'
 * 00000001401CF543: wrmsr
 * 00000001401CF545: jmp     loc_1401CF688
 * 00000001401CF54A: test    edx, 2
 * 00000001401CF550: jz      loc_1401CF685
 * 00000001401CF556: test    byte ptr gs:279h, 4
 * 00000001401CF55F: jnz     loc_1401CF685
 * 00000001401CF565: call    loc_1401CF678
 * 00000001401CF56A: add     rsp, 8
 * 00000001401CF56E: call    loc_1401CF681
 * 00000001401CF573: add     rsp, 8
 * 00000001401CF577: call    loc_1401CF56A
 * 00000001401CF57C: add     rsp, 8
 * 00000001401CF580: call    loc_1401CF573
 * 00000001401CF585: add     rsp, 8
 * 00000001401CF589: call    loc_1401CF57C
 * 00000001401CF58E: add     rsp, 8
 * 00000001401CF592: call    loc_1401CF585
 * 00000001401CF597: add     rsp, 8
 * 00000001401CF59B: call    loc_1401CF58E
 * 00000001401CF5A0: add     rsp, 8
 * 00000001401CF5A4: call    loc_1401CF597
 * 00000001401CF5A9: add     rsp, 8
 * 00000001401CF5AD: call    loc_1401CF5A0
 * 00000001401CF5B2: add     rsp, 8
 * 00000001401CF5B6: call    loc_1401CF5A9
 * 00000001401CF5BB: add     rsp, 8
 * 00000001401CF5BF: call    loc_1401CF5B2
 * 00000001401CF5C4: add     rsp, 8
 * 00000001401CF5C8: call    loc_1401CF5BB
 * 00000001401CF5CD: add     rsp, 8
 * 00000001401CF5D1: call    loc_1401CF5C4
 * 00000001401CF5D6: add     rsp, 8
 * 00000001401CF5DA: call    loc_1401CF5CD
 * 00000001401CF5DF: add     rsp, 8
 * 00000001401CF5E3: call    loc_1401CF5D6
 * 00000001401CF5E8: add     rsp, 8
 * 00000001401CF5EC: call    loc_1401CF5DF
 * 00000001401CF5F1: add     rsp, 8
 * 00000001401CF5F5: call    loc_1401CF5E8
 * 00000001401CF5FA: add     rsp, 8
 * 00000001401CF5FE: call    loc_1401CF5F1
 * 00000001401CF603: add     rsp, 8
 * 00000001401CF607: call    loc_1401CF5FA
 * 00000001401CF60C: add     rsp, 8
 * 00000001401CF610: call    loc_1401CF603
 * 00000001401CF615: add     rsp, 8
 * 00000001401CF619: call    loc_1401CF60C
 * 00000001401CF61E: add     rsp, 8
 * 00000001401CF622: call    loc_1401CF615
 * 00000001401CF627: add     rsp, 8
 * 00000001401CF62B: call    loc_1401CF61E
 * 00000001401CF630: add     rsp, 8
 * 00000001401CF634: call    loc_1401CF627
 * 00000001401CF639: add     rsp, 8
 * 00000001401CF63D: call    loc_1401CF630
 * 00000001401CF642: add     rsp, 8
 * 00000001401CF646: call    loc_1401CF639
 * 00000001401CF64B: add     rsp, 8
 * 00000001401CF64F: call    loc_1401CF642
 * 00000001401CF654: add     rsp, 8
 * 00000001401CF658: call    loc_1401CF64B
 * 00000001401CF65D: add     rsp, 8
 * 00000001401CF661: call    loc_1401CF654
 * 00000001401CF666: add     rsp, 8
 * 00000001401CF66A: call    loc_1401CF65D
 * 00000001401CF66F: add     rsp, 8
 * 00000001401CF673: call    loc_1401CF666
 * 00000001401CF678: add     rsp, 8
 * 00000001401CF67C: call    loc_1401CF66F
 * 00000001401CF681: add     rsp, 8
 * 00000001401CF685: lfence
 * 00000001401CF688: mov     byte ptr gs:853h, 0
 * 00000001401CF691: test    byte ptr [r10+3], 80h
 * 00000001401CF696: jz      short loc_1401CF6DA
 * 00000001401CF698: mov     ecx, 0C0000102h
 * 00000001401CF69D: rdmsr
 * 00000001401CF69F: shl     rdx, 20h
 * 00000001401CF6A3: or      rax, rdx
 * 00000001401CF6A6: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CF6AD: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CF6B5: cmp     [r10+0F0h], rax
 * 00000001401CF6BC: jz      short loc_1401CF6DA
 * 00000001401CF6BE: mov     rdx, [r10+1F0h]
 * 00000001401CF6C5: bts     dword ptr [r10+74h], 8
 * 00000001401CF6CB: dec     word ptr [r10+1E6h]
 * 00000001401CF6D3: mov     [rdx+80h], rax
 * 00000001401CF6DA: test    byte ptr [r10+3], 3
 * 00000001401CF6DF: mov     [rbp+0E8h+var_68], 0
 * 00000001401CF6E8: jz      short loc_1401CF6EF
 * 00000001401CF6EA: call    KiSaveDebugRegisterState
 * 00000001401CF6EF: cld
 * 00000001401CF6F0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CF6F4: ldmxcsr dword ptr gs:180h
 * 00000001401CF6FD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CF701: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CF705: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CF709: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CF70D: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CF711: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CF715: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CF71C: jz      short loc_1401CF72A
 * 00000001401CF71E: test    [rbp+0E8h+arg_0], 1
 * 00000001401CF725: jz      short loc_1401CF72A
 * 00000001401CF727: stac
 * 00000001401CF72A: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CF734: jz      short loc_1401CF737
 * 00000001401CF736: sti
 * 00000001401CF737: mov     ecx, 0C0000095h
 * 00000001401CF73C: xor     edx, edx
 * 00000001401CF73E: mov     r8, [rbp+0E8h]
 * 00000001401CF745: dec     r8
 * 00000001401CF748: call    KiExceptionDispatch
 * 00000001401CF74D: nop
 * 00000001401CF74E: retn
 */
