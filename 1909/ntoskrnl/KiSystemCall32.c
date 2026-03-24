/*
 * XREFs of KiSystemCall32 @ 0x1401D55C0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1401D55C0 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1401D55C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401D55C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D55C0: swapgs
 * 00000001401D55C3: mov     gs:10h, rsp
 * 00000001401D55CC: mov     rsp, gs:1A8h
 * 00000001401D55D5: push    2Bh ; '+'
 * 00000001401D55D7: push    qword ptr gs:10h
 * 00000001401D55DF: push    r11
 * 00000001401D55E1: push    23h ; '#'
 * 00000001401D55E3: push    rcx
 * 00000001401D55E4: swapgs
 * 00000001401D55E7: lfence
 * 00000001401D55EA: sub     rsp, 8
 * 00000001401D55EE: push    rbp
 * 00000001401D55EF: sub     rsp, 158h
 * 00000001401D55F6: lea     rbp, [rsp+190h+var_110]
 * 00000001401D55FE: mov     byte ptr [rbp-55h], 1
 * 00000001401D5602: mov     [rbp-50h], rax
 * 00000001401D5606: mov     [rbp-48h], rcx
 * 00000001401D560A: mov     [rbp-40h], rdx
 * 00000001401D560E: mov     [rbp-38h], r8
 * 00000001401D5612: mov     [rbp-30h], r9
 * 00000001401D5616: mov     [rbp-28h], r10
 * 00000001401D561A: mov     [rbp-20h], r11
 * 00000001401D561E: test    byte ptr [rbp+0F0h], 1
 * 00000001401D5625: jnz     short loc_1401D5654
 * 00000001401D5627: lfence
 * 00000001401D562A: test    byte ptr gs:278h, 1
 * 00000001401D5633: jnz     short loc_1401D563D
 * 00000001401D5635: lfence
 * 00000001401D5638: jmp     loc_1401D5899
 * 00000001401D563D: movzx   eax, byte ptr gs:27Ah
 * 00000001401D5646: mov     ecx, 48h ; 'H'
 * 00000001401D564B: xor     edx, edx
 * 00000001401D564D: wrmsr
 * 00000001401D564F: jmp     loc_1401D5899
 * 00000001401D5654: test    cs:KiKvaShadow, 1
 * 00000001401D565B: jnz     short loc_1401D5660
 * 00000001401D565D: swapgs
 * 00000001401D5660: lfence
 * 00000001401D5663: mov     r10, gs:188h
 * 00000001401D566C: mov     rcx, gs:188h
 * 00000001401D5675: mov     rcx, [rcx+220h]
 * 00000001401D567C: mov     rcx, [rcx+860h]
 * 00000001401D5683: mov     gs:270h, rcx
 * 00000001401D568C: mov     cl, gs:850h
 * 00000001401D5694: mov     gs:851h, cl
 * 00000001401D569C: mov     cl, gs:278h
 * 00000001401D56A4: mov     gs:852h, cl
 * 00000001401D56AC: movzx   eax, byte ptr gs:27Bh
 * 00000001401D56B5: cmp     gs:27Ah, al
 * 00000001401D56BD: jz      short loc_1401D56D0
 * 00000001401D56BF: mov     gs:27Ah, al
 * 00000001401D56C7: mov     ecx, 48h ; 'H'
 * 00000001401D56CC: xor     edx, edx
 * 00000001401D56CE: wrmsr
 * 00000001401D56D0: movzx   edx, byte ptr gs:278h
 * 00000001401D56D9: test    edx, 8
 * 00000001401D56DF: jz      short loc_1401D56F4
 * 00000001401D56E1: mov     eax, 1
 * 00000001401D56E6: xor     edx, edx
 * 00000001401D56E8: mov     ecx, 49h ; 'I'
 * 00000001401D56ED: wrmsr
 * 00000001401D56EF: jmp     loc_1401D5832
 * 00000001401D56F4: test    edx, 2
 * 00000001401D56FA: jz      loc_1401D582F
 * 00000001401D5700: test    byte ptr gs:279h, 4
 * 00000001401D5709: jnz     loc_1401D582F
 * 00000001401D570F: call    loc_1401D5822
 * 00000001401D5714: add     rsp, 8
 * 00000001401D5718: call    loc_1401D582B
 * 00000001401D571D: add     rsp, 8
 * 00000001401D5721: call    loc_1401D5714
 * 00000001401D5726: add     rsp, 8
 * 00000001401D572A: call    loc_1401D571D
 * 00000001401D572F: add     rsp, 8
 * 00000001401D5733: call    loc_1401D5726
 * 00000001401D5738: add     rsp, 8
 * 00000001401D573C: call    loc_1401D572F
 * 00000001401D5741: add     rsp, 8
 * 00000001401D5745: call    loc_1401D5738
 * 00000001401D574A: add     rsp, 8
 * 00000001401D574E: call    loc_1401D5741
 * 00000001401D5753: add     rsp, 8
 * 00000001401D5757: call    loc_1401D574A
 * 00000001401D575C: add     rsp, 8
 * 00000001401D5760: call    loc_1401D5753
 * 00000001401D5765: add     rsp, 8
 * 00000001401D5769: call    loc_1401D575C
 * 00000001401D576E: add     rsp, 8
 * 00000001401D5772: call    loc_1401D5765
 * 00000001401D5777: add     rsp, 8
 * 00000001401D577B: call    loc_1401D576E
 * 00000001401D5780: add     rsp, 8
 * 00000001401D5784: call    loc_1401D5777
 * 00000001401D5789: add     rsp, 8
 * 00000001401D578D: call    loc_1401D5780
 * 00000001401D5792: add     rsp, 8
 * 00000001401D5796: call    loc_1401D5789
 * 00000001401D579B: add     rsp, 8
 * 00000001401D579F: call    loc_1401D5792
 * 00000001401D57A4: add     rsp, 8
 * 00000001401D57A8: call    loc_1401D579B
 * 00000001401D57AD: add     rsp, 8
 * 00000001401D57B1: call    loc_1401D57A4
 * 00000001401D57B6: add     rsp, 8
 * 00000001401D57BA: call    loc_1401D57AD
 * 00000001401D57BF: add     rsp, 8
 * 00000001401D57C3: call    loc_1401D57B6
 * 00000001401D57C8: add     rsp, 8
 * 00000001401D57CC: call    loc_1401D57BF
 * 00000001401D57D1: add     rsp, 8
 * 00000001401D57D5: call    loc_1401D57C8
 * 00000001401D57DA: add     rsp, 8
 * 00000001401D57DE: call    loc_1401D57D1
 * 00000001401D57E3: add     rsp, 8
 * 00000001401D57E7: call    loc_1401D57DA
 * 00000001401D57EC: add     rsp, 8
 * 00000001401D57F0: call    loc_1401D57E3
 * 00000001401D57F5: add     rsp, 8
 * 00000001401D57F9: call    loc_1401D57EC
 * 00000001401D57FE: add     rsp, 8
 * 00000001401D5802: call    loc_1401D57F5
 * 00000001401D5807: add     rsp, 8
 * 00000001401D580B: call    loc_1401D57FE
 * 00000001401D5810: add     rsp, 8
 * 00000001401D5814: call    loc_1401D5807
 * 00000001401D5819: add     rsp, 8
 * 00000001401D581D: call    loc_1401D5810
 * 00000001401D5822: add     rsp, 8
 * 00000001401D5826: call    loc_1401D5819
 * 00000001401D582B: add     rsp, 8
 * 00000001401D582F: lfence
 * 00000001401D5832: mov     byte ptr gs:853h, 0
 * 00000001401D583B: test    byte ptr [r10+3], 80h
 * 00000001401D5840: jz      short loc_1401D5884
 * 00000001401D5842: mov     ecx, 0C0000102h
 * 00000001401D5847: rdmsr
 * 00000001401D5849: shl     rdx, 20h
 * 00000001401D584D: or      rax, rdx
 * 00000001401D5850: cmp     rax, cs:MmUserProbeAddress
 * 00000001401D5857: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401D585F: cmp     [r10+0F0h], rax
 * 00000001401D5866: jz      short loc_1401D5884
 * 00000001401D5868: mov     rdx, [r10+1F0h]
 * 00000001401D586F: bts     dword ptr [r10+74h], 8
 * 00000001401D5875: dec     word ptr [r10+1E6h]
 * 00000001401D587D: mov     [rdx+80h], rax
 * 00000001401D5884: test    byte ptr [r10+3], 3
 * 00000001401D5889: mov     word ptr [rbp+80h], 0
 * 00000001401D5892: jz      short loc_1401D5899
 * 00000001401D5894: call    KiSaveDebugRegisterState
 * 00000001401D5899: cld
 * 00000001401D589A: stmxcsr dword ptr [rbp-54h]
 * 00000001401D589E: ldmxcsr dword ptr gs:180h
 * 00000001401D58A7: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401D58AB: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401D58AF: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401D58B3: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401D58B7: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401D58BB: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401D58BF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401D58C6: jz      short loc_1401D58D4
 * 00000001401D58C8: test    byte ptr [rbp+0F0h], 1
 * 00000001401D58CF: jz      short loc_1401D58D4
 * 00000001401D58D1: stac
 * 00000001401D58D4: sub     qword ptr [rbp+0E8h], 2
 * 00000001401D58DC: and     dword ptr [rbp+0ECh], 0
 * 00000001401D58E3: sti
 * 00000001401D58E4: mov     ecx, 0C000001Dh
 * 00000001401D58E9: xor     edx, edx
 * 00000001401D58EB: mov     r8, [rbp+0E8h]
 * 00000001401D58F2: call    KiExceptionDispatch
 * 00000001401D58F7: nop
 * 00000001401D58F8: retn
 */
