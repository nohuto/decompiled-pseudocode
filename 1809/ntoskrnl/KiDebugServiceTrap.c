/*
 * XREFs of KiDebugServiceTrap @ 0x1401CE6C0
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x14032EE00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1401CE6C0 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1401CE6C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CE6C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CE6C0: inc     qword ptr [rsp+0]
 * 00000001401CE6C4: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001401CE6CA: jnz     short loc_1401CE6D1
 * 00000001401CE6CC: and     dword ptr [rsp+4], 0
 * 00000001401CE6D1: sub     rsp, 8
 * 00000001401CE6D5: push    rbp
 * 00000001401CE6D6: sub     rsp, 158h
 * 00000001401CE6DD: lea     rbp, [rsp+168h+var_E8]
 * 00000001401CE6E5: mov     byte ptr [rbp-55h], 1
 * 00000001401CE6E9: mov     [rbp-50h], rax
 * 00000001401CE6ED: mov     [rbp-48h], rcx
 * 00000001401CE6F1: mov     [rbp-40h], rdx
 * 00000001401CE6F5: mov     [rbp-38h], r8
 * 00000001401CE6F9: mov     [rbp-30h], r9
 * 00000001401CE6FD: mov     [rbp-28h], r10
 * 00000001401CE701: mov     [rbp-20h], r11
 * 00000001401CE705: test    byte ptr [rbp+0F0h], 1
 * 00000001401CE70C: jnz     short loc_1401CE73D
 * 00000001401CE70E: lfence
 * 00000001401CE711: test    word ptr gs:860h, 1
 * 00000001401CE71C: jnz     short loc_1401CE726
 * 00000001401CE71E: lfence
 * 00000001401CE721: jmp     loc_1401CE98F
 * 00000001401CE726: movzx   eax, word ptr gs:864h
 * 00000001401CE72F: mov     ecx, 48h ; 'H'
 * 00000001401CE734: xor     edx, edx
 * 00000001401CE736: wrmsr
 * 00000001401CE738: jmp     loc_1401CE98F
 * 00000001401CE73D: test    cs:KiKvaShadow, 1
 * 00000001401CE744: jnz     short loc_1401CE749
 * 00000001401CE746: swapgs
 * 00000001401CE749: lfence
 * 00000001401CE74C: mov     r10, gs:188h
 * 00000001401CE755: mov     rcx, gs:188h
 * 00000001401CE75E: mov     rcx, [rcx+220h]
 * 00000001401CE765: mov     rcx, [rcx+830h]
 * 00000001401CE76C: mov     gs:858h, rcx
 * 00000001401CE775: mov     cx, gs:850h
 * 00000001401CE77E: mov     gs:852h, cx
 * 00000001401CE787: mov     cx, gs:860h
 * 00000001401CE790: mov     gs:854h, cx
 * 00000001401CE799: movzx   eax, word ptr gs:866h
 * 00000001401CE7A2: cmp     gs:864h, ax
 * 00000001401CE7AB: jz      short loc_1401CE7BF
 * 00000001401CE7AD: mov     gs:864h, ax
 * 00000001401CE7B6: mov     ecx, 48h ; 'H'
 * 00000001401CE7BB: xor     edx, edx
 * 00000001401CE7BD: wrmsr
 * 00000001401CE7BF: movzx   edx, word ptr gs:860h
 * 00000001401CE7C8: test    edx, 8
 * 00000001401CE7CE: jz      short loc_1401CE7E7
 * 00000001401CE7D0: mov     eax, 1
 * 00000001401CE7D5: xor     edx, edx
 * 00000001401CE7D7: mov     ecx, 49h ; 'I'
 * 00000001401CE7DC: wrmsr
 * 00000001401CE7DE: movzx   edx, word ptr gs:860h
 * 00000001401CE7E7: test    edx, 2
 * 00000001401CE7ED: jz      loc_1401CE918
 * 00000001401CE7F3: call    loc_1401CE906
 * 00000001401CE7F8: add     rsp, 8
 * 00000001401CE7FC: call    loc_1401CE90F
 * 00000001401CE801: add     rsp, 8
 * 00000001401CE805: call    loc_1401CE7F8
 * 00000001401CE80A: add     rsp, 8
 * 00000001401CE80E: call    loc_1401CE801
 * 00000001401CE813: add     rsp, 8
 * 00000001401CE817: call    loc_1401CE80A
 * 00000001401CE81C: add     rsp, 8
 * 00000001401CE820: call    loc_1401CE813
 * 00000001401CE825: add     rsp, 8
 * 00000001401CE829: call    loc_1401CE81C
 * 00000001401CE82E: add     rsp, 8
 * 00000001401CE832: call    loc_1401CE825
 * 00000001401CE837: add     rsp, 8
 * 00000001401CE83B: call    loc_1401CE82E
 * 00000001401CE840: add     rsp, 8
 * 00000001401CE844: call    loc_1401CE837
 * 00000001401CE849: add     rsp, 8
 * 00000001401CE84D: call    loc_1401CE840
 * 00000001401CE852: add     rsp, 8
 * 00000001401CE856: call    loc_1401CE849
 * 00000001401CE85B: add     rsp, 8
 * 00000001401CE85F: call    loc_1401CE852
 * 00000001401CE864: add     rsp, 8
 * 00000001401CE868: call    loc_1401CE85B
 * 00000001401CE86D: add     rsp, 8
 * 00000001401CE871: call    loc_1401CE864
 * 00000001401CE876: add     rsp, 8
 * 00000001401CE87A: call    loc_1401CE86D
 * 00000001401CE87F: add     rsp, 8
 * 00000001401CE883: call    loc_1401CE876
 * 00000001401CE888: add     rsp, 8
 * 00000001401CE88C: call    loc_1401CE87F
 * 00000001401CE891: add     rsp, 8
 * 00000001401CE895: call    loc_1401CE888
 * 00000001401CE89A: add     rsp, 8
 * 00000001401CE89E: call    loc_1401CE891
 * 00000001401CE8A3: add     rsp, 8
 * 00000001401CE8A7: call    loc_1401CE89A
 * 00000001401CE8AC: add     rsp, 8
 * 00000001401CE8B0: call    loc_1401CE8A3
 * 00000001401CE8B5: add     rsp, 8
 * 00000001401CE8B9: call    loc_1401CE8AC
 * 00000001401CE8BE: add     rsp, 8
 * 00000001401CE8C2: call    loc_1401CE8B5
 * 00000001401CE8C7: add     rsp, 8
 * 00000001401CE8CB: call    loc_1401CE8BE
 * 00000001401CE8D0: add     rsp, 8
 * 00000001401CE8D4: call    loc_1401CE8C7
 * 00000001401CE8D9: add     rsp, 8
 * 00000001401CE8DD: call    loc_1401CE8D0
 * 00000001401CE8E2: add     rsp, 8
 * 00000001401CE8E6: call    loc_1401CE8D9
 * 00000001401CE8EB: add     rsp, 8
 * 00000001401CE8EF: call    loc_1401CE8E2
 * 00000001401CE8F4: add     rsp, 8
 * 00000001401CE8F8: call    loc_1401CE8EB
 * 00000001401CE8FD: add     rsp, 8
 * 00000001401CE901: call    loc_1401CE8F4
 * 00000001401CE906: add     rsp, 8
 * 00000001401CE90A: call    loc_1401CE8FD
 * 00000001401CE90F: add     rsp, 8
 * 00000001401CE913: mov     eax, 0DADAh
 * 00000001401CE918: test    edx, 200h
 * 00000001401CE91E: jz      short loc_1401CE925
 * 00000001401CE920: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CE925: lfence
 * 00000001401CE928: mov     byte ptr gs:856h, 0
 * 00000001401CE931: test    byte ptr [r10+3], 80h
 * 00000001401CE936: jz      short loc_1401CE97A
 * 00000001401CE938: mov     ecx, 0C0000102h
 * 00000001401CE93D: rdmsr
 * 00000001401CE93F: shl     rdx, 20h
 * 00000001401CE943: or      rax, rdx
 * 00000001401CE946: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CE94D: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CE955: cmp     [r10+0F0h], rax
 * 00000001401CE95C: jz      short loc_1401CE97A
 * 00000001401CE95E: mov     rdx, [r10+1F0h]
 * 00000001401CE965: bts     dword ptr [r10+74h], 8
 * 00000001401CE96B: dec     word ptr [r10+1E6h]
 * 00000001401CE973: mov     [rdx+80h], rax
 * 00000001401CE97A: test    byte ptr [r10+3], 3
 * 00000001401CE97F: mov     word ptr [rbp+80h], 0
 * 00000001401CE988: jz      short loc_1401CE98F
 * 00000001401CE98A: call    KiSaveDebugRegisterState
 * 00000001401CE98F: cld
 * 00000001401CE990: stmxcsr dword ptr [rbp-54h]
 * 00000001401CE994: ldmxcsr dword ptr gs:180h
 * 00000001401CE99D: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CE9A1: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CE9A5: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CE9A9: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CE9AD: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CE9B1: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CE9B5: test    dword ptr [rbp+0F8h], 200h
 * 00000001401CE9BF: jz      short loc_1401CE9C2
 * 00000001401CE9C1: sti
 * 00000001401CE9C2: mov     ecx, 80000003h
 * 00000001401CE9C7: mov     edx, 1
 * 00000001401CE9CC: mov     r9, [rbp-50h]
 * 00000001401CE9D0: mov     r8, [rbp+0E8h]
 * 00000001401CE9D7: call    KiExceptionDispatch
 * 00000001401CE9DC: nop
 * 00000001401CE9DD: retn
 */
