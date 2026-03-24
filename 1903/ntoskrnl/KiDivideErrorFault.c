/*
 * XREFs of KiDivideErrorFault @ 0x1401CE400
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140350100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401C4070 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x1401CE400 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x1401D5940 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x1401CE400
 * Reason: Hex-Rays returned no pseudocode for 0x1401CE400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CE400: sub     rsp, 8
 * 00000001401CE404: push    rbp
 * 00000001401CE405: sub     rsp, 158h
 * 00000001401CE40C: lea     rbp, [rsp+80h]
 * 00000001401CE414: mov     [rbp+0E8h+var_13D], 1
 * 00000001401CE418: mov     [rbp+0E8h+var_138], rax
 * 00000001401CE41C: mov     [rbp+0E8h+var_130], rcx
 * 00000001401CE420: mov     [rbp+0E8h+var_128], rdx
 * 00000001401CE424: mov     [rbp+0E8h+var_120], r8
 * 00000001401CE428: mov     [rbp+0E8h+var_118], r9
 * 00000001401CE42C: mov     [rbp+0E8h+var_110], r10
 * 00000001401CE430: mov     [rbp+0E8h+var_108], r11
 * 00000001401CE434: test    [rbp+0E8h+arg_0], 1
 * 00000001401CE43B: jnz     short loc_1401CE46A
 * 00000001401CE43D: lfence
 * 00000001401CE440: test    byte ptr gs:278h, 1
 * 00000001401CE449: jnz     short loc_1401CE453
 * 00000001401CE44B: lfence
 * 00000001401CE44E: jmp     loc_1401CE6AF
 * 00000001401CE453: movzx   eax, byte ptr gs:27Ah
 * 00000001401CE45C: mov     ecx, 48h ; 'H'
 * 00000001401CE461: xor     edx, edx
 * 00000001401CE463: wrmsr
 * 00000001401CE465: jmp     loc_1401CE6AF
 * 00000001401CE46A: test    cs:KiKvaShadow, 1
 * 00000001401CE471: jnz     short loc_1401CE476
 * 00000001401CE473: swapgs
 * 00000001401CE476: lfence
 * 00000001401CE479: mov     r10, gs:188h
 * 00000001401CE482: mov     rcx, gs:188h
 * 00000001401CE48B: mov     rcx, [rcx+220h]
 * 00000001401CE492: mov     rcx, [rcx+860h]
 * 00000001401CE499: mov     gs:270h, rcx
 * 00000001401CE4A2: mov     cl, gs:850h
 * 00000001401CE4AA: mov     gs:851h, cl
 * 00000001401CE4B2: mov     cl, gs:278h
 * 00000001401CE4BA: mov     gs:852h, cl
 * 00000001401CE4C2: movzx   eax, byte ptr gs:27Bh
 * 00000001401CE4CB: cmp     gs:27Ah, al
 * 00000001401CE4D3: jz      short loc_1401CE4E6
 * 00000001401CE4D5: mov     gs:27Ah, al
 * 00000001401CE4DD: mov     ecx, 48h ; 'H'
 * 00000001401CE4E2: xor     edx, edx
 * 00000001401CE4E4: wrmsr
 * 00000001401CE4E6: movzx   edx, byte ptr gs:278h
 * 00000001401CE4EF: test    edx, 8
 * 00000001401CE4F5: jz      short loc_1401CE50A
 * 00000001401CE4F7: mov     eax, 1
 * 00000001401CE4FC: xor     edx, edx
 * 00000001401CE4FE: mov     ecx, 49h ; 'I'
 * 00000001401CE503: wrmsr
 * 00000001401CE505: jmp     loc_1401CE648
 * 00000001401CE50A: test    edx, 2
 * 00000001401CE510: jz      loc_1401CE645
 * 00000001401CE516: test    byte ptr gs:279h, 4
 * 00000001401CE51F: jnz     loc_1401CE645
 * 00000001401CE525: call    loc_1401CE638
 * 00000001401CE52A: add     rsp, 8
 * 00000001401CE52E: call    loc_1401CE641
 * 00000001401CE533: add     rsp, 8
 * 00000001401CE537: call    loc_1401CE52A
 * 00000001401CE53C: add     rsp, 8
 * 00000001401CE540: call    loc_1401CE533
 * 00000001401CE545: add     rsp, 8
 * 00000001401CE549: call    loc_1401CE53C
 * 00000001401CE54E: add     rsp, 8
 * 00000001401CE552: call    loc_1401CE545
 * 00000001401CE557: add     rsp, 8
 * 00000001401CE55B: call    loc_1401CE54E
 * 00000001401CE560: add     rsp, 8
 * 00000001401CE564: call    loc_1401CE557
 * 00000001401CE569: add     rsp, 8
 * 00000001401CE56D: call    loc_1401CE560
 * 00000001401CE572: add     rsp, 8
 * 00000001401CE576: call    loc_1401CE569
 * 00000001401CE57B: add     rsp, 8
 * 00000001401CE57F: call    loc_1401CE572
 * 00000001401CE584: add     rsp, 8
 * 00000001401CE588: call    loc_1401CE57B
 * 00000001401CE58D: add     rsp, 8
 * 00000001401CE591: call    loc_1401CE584
 * 00000001401CE596: add     rsp, 8
 * 00000001401CE59A: call    loc_1401CE58D
 * 00000001401CE59F: add     rsp, 8
 * 00000001401CE5A3: call    loc_1401CE596
 * 00000001401CE5A8: add     rsp, 8
 * 00000001401CE5AC: call    loc_1401CE59F
 * 00000001401CE5B1: add     rsp, 8
 * 00000001401CE5B5: call    loc_1401CE5A8
 * 00000001401CE5BA: add     rsp, 8
 * 00000001401CE5BE: call    loc_1401CE5B1
 * 00000001401CE5C3: add     rsp, 8
 * 00000001401CE5C7: call    loc_1401CE5BA
 * 00000001401CE5CC: add     rsp, 8
 * 00000001401CE5D0: call    loc_1401CE5C3
 * 00000001401CE5D5: add     rsp, 8
 * 00000001401CE5D9: call    loc_1401CE5CC
 * 00000001401CE5DE: add     rsp, 8
 * 00000001401CE5E2: call    loc_1401CE5D5
 * 00000001401CE5E7: add     rsp, 8
 * 00000001401CE5EB: call    loc_1401CE5DE
 * 00000001401CE5F0: add     rsp, 8
 * 00000001401CE5F4: call    loc_1401CE5E7
 * 00000001401CE5F9: add     rsp, 8
 * 00000001401CE5FD: call    loc_1401CE5F0
 * 00000001401CE602: add     rsp, 8
 * 00000001401CE606: call    loc_1401CE5F9
 * 00000001401CE60B: add     rsp, 8
 * 00000001401CE60F: call    loc_1401CE602
 * 00000001401CE614: add     rsp, 8
 * 00000001401CE618: call    loc_1401CE60B
 * 00000001401CE61D: add     rsp, 8
 * 00000001401CE621: call    loc_1401CE614
 * 00000001401CE626: add     rsp, 8
 * 00000001401CE62A: call    loc_1401CE61D
 * 00000001401CE62F: add     rsp, 8
 * 00000001401CE633: call    loc_1401CE626
 * 00000001401CE638: add     rsp, 8
 * 00000001401CE63C: call    loc_1401CE62F
 * 00000001401CE641: add     rsp, 8
 * 00000001401CE645: lfence
 * 00000001401CE648: mov     byte ptr gs:853h, 0
 * 00000001401CE651: test    byte ptr [r10+3], 80h
 * 00000001401CE656: jz      short loc_1401CE69A
 * 00000001401CE658: mov     ecx, 0C0000102h
 * 00000001401CE65D: rdmsr
 * 00000001401CE65F: shl     rdx, 20h
 * 00000001401CE663: or      rax, rdx
 * 00000001401CE666: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CE66D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CE675: cmp     [r10+0F0h], rax
 * 00000001401CE67C: jz      short loc_1401CE69A
 * 00000001401CE67E: mov     rdx, [r10+1F0h]
 * 00000001401CE685: bts     dword ptr [r10+74h], 8
 * 00000001401CE68B: dec     word ptr [r10+1E6h]
 * 00000001401CE693: mov     [rdx+80h], rax
 * 00000001401CE69A: test    byte ptr [r10+3], 3
 * 00000001401CE69F: mov     [rbp+0E8h+var_68], 0
 * 00000001401CE6A8: jz      short loc_1401CE6AF
 * 00000001401CE6AA: call    KiSaveDebugRegisterState
 * 00000001401CE6AF: cld
 * 00000001401CE6B0: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401CE6B4: ldmxcsr dword ptr gs:180h
 * 00000001401CE6BD: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401CE6C1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401CE6C5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401CE6C9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401CE6CD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401CE6D1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401CE6D5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001401CE6DC: jz      short loc_1401CE6EA
 * 00000001401CE6DE: test    [rbp+0E8h+arg_0], 1
 * 00000001401CE6E5: jz      short loc_1401CE6EA
 * 00000001401CE6E7: stac
 * 00000001401CE6EA: test    [rbp+0E8h+arg_8], 200h
 * 00000001401CE6F4: jz      short loc_1401CE6F7
 * 00000001401CE6F6: sti
 * 00000001401CE6F7: mov     ecx, 10000003h
 * 00000001401CE6FC: xor     edx, edx
 * 00000001401CE6FE: mov     r8, [rbp+0E8h]
 * 00000001401CE705: call    KiExceptionDispatch
 * 00000001401CE70A: nop
 * 00000001401CE70B: retn
 */
