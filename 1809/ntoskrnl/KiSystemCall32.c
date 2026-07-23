/*
 * XREFs of KiSystemCall32 @ 0x1401CED40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC270 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1401CED40 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1401CED40
 * Reason: Hex-Rays returned no pseudocode for 0x1401CED40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CED40: swapgs
 * 00000001401CED43: mov     gs:10h, rsp
 * 00000001401CED4C: mov     rsp, gs:1A8h
 * 00000001401CED55: push    2Bh ; '+'
 * 00000001401CED57: push    qword ptr gs:10h
 * 00000001401CED5F: push    r11
 * 00000001401CED61: push    23h ; '#'
 * 00000001401CED63: push    rcx
 * 00000001401CED64: swapgs
 * 00000001401CED67: lfence
 * 00000001401CED6A: sub     rsp, 8
 * 00000001401CED6E: push    rbp
 * 00000001401CED6F: sub     rsp, 158h
 * 00000001401CED76: lea     rbp, [rsp+190h+var_110]
 * 00000001401CED7E: mov     byte ptr [rbp-55h], 1
 * 00000001401CED82: mov     [rbp-50h], rax
 * 00000001401CED86: mov     [rbp-48h], rcx
 * 00000001401CED8A: mov     [rbp-40h], rdx
 * 00000001401CED8E: mov     [rbp-38h], r8
 * 00000001401CED92: mov     [rbp-30h], r9
 * 00000001401CED96: mov     [rbp-28h], r10
 * 00000001401CED9A: mov     [rbp-20h], r11
 * 00000001401CED9E: test    byte ptr [rbp+0F0h], 1
 * 00000001401CEDA5: jnz     short loc_1401CEDD6
 * 00000001401CEDA7: lfence
 * 00000001401CEDAA: test    word ptr gs:860h, 1
 * 00000001401CEDB5: jnz     short loc_1401CEDBF
 * 00000001401CEDB7: lfence
 * 00000001401CEDBA: jmp     loc_1401CF028
 * 00000001401CEDBF: movzx   eax, word ptr gs:864h
 * 00000001401CEDC8: mov     ecx, 48h ; 'H'
 * 00000001401CEDCD: xor     edx, edx
 * 00000001401CEDCF: wrmsr
 * 00000001401CEDD1: jmp     loc_1401CF028
 * 00000001401CEDD6: test    cs:KiKvaShadow, 1
 * 00000001401CEDDD: jnz     short loc_1401CEDE2
 * 00000001401CEDDF: swapgs
 * 00000001401CEDE2: lfence
 * 00000001401CEDE5: mov     r10, gs:188h
 * 00000001401CEDEE: mov     rcx, gs:188h
 * 00000001401CEDF7: mov     rcx, [rcx+220h]
 * 00000001401CEDFE: mov     rcx, [rcx+830h]
 * 00000001401CEE05: mov     gs:858h, rcx
 * 00000001401CEE0E: mov     cx, gs:850h
 * 00000001401CEE17: mov     gs:852h, cx
 * 00000001401CEE20: mov     cx, gs:860h
 * 00000001401CEE29: mov     gs:854h, cx
 * 00000001401CEE32: movzx   eax, word ptr gs:866h
 * 00000001401CEE3B: cmp     gs:864h, ax
 * 00000001401CEE44: jz      short loc_1401CEE58
 * 00000001401CEE46: mov     gs:864h, ax
 * 00000001401CEE4F: mov     ecx, 48h ; 'H'
 * 00000001401CEE54: xor     edx, edx
 * 00000001401CEE56: wrmsr
 * 00000001401CEE58: movzx   edx, word ptr gs:860h
 * 00000001401CEE61: test    edx, 8
 * 00000001401CEE67: jz      short loc_1401CEE80
 * 00000001401CEE69: mov     eax, 1
 * 00000001401CEE6E: xor     edx, edx
 * 00000001401CEE70: mov     ecx, 49h ; 'I'
 * 00000001401CEE75: wrmsr
 * 00000001401CEE77: movzx   edx, word ptr gs:860h
 * 00000001401CEE80: test    edx, 2
 * 00000001401CEE86: jz      loc_1401CEFB1
 * 00000001401CEE8C: call    loc_1401CEF9F
 * 00000001401CEE91: add     rsp, 8
 * 00000001401CEE95: call    loc_1401CEFA8
 * 00000001401CEE9A: add     rsp, 8
 * 00000001401CEE9E: call    loc_1401CEE91
 * 00000001401CEEA3: add     rsp, 8
 * 00000001401CEEA7: call    loc_1401CEE9A
 * 00000001401CEEAC: add     rsp, 8
 * 00000001401CEEB0: call    loc_1401CEEA3
 * 00000001401CEEB5: add     rsp, 8
 * 00000001401CEEB9: call    loc_1401CEEAC
 * 00000001401CEEBE: add     rsp, 8
 * 00000001401CEEC2: call    loc_1401CEEB5
 * 00000001401CEEC7: add     rsp, 8
 * 00000001401CEECB: call    loc_1401CEEBE
 * 00000001401CEED0: add     rsp, 8
 * 00000001401CEED4: call    loc_1401CEEC7
 * 00000001401CEED9: add     rsp, 8
 * 00000001401CEEDD: call    loc_1401CEED0
 * 00000001401CEEE2: add     rsp, 8
 * 00000001401CEEE6: call    loc_1401CEED9
 * 00000001401CEEEB: add     rsp, 8
 * 00000001401CEEEF: call    loc_1401CEEE2
 * 00000001401CEEF4: add     rsp, 8
 * 00000001401CEEF8: call    loc_1401CEEEB
 * 00000001401CEEFD: add     rsp, 8
 * 00000001401CEF01: call    loc_1401CEEF4
 * 00000001401CEF06: add     rsp, 8
 * 00000001401CEF0A: call    loc_1401CEEFD
 * 00000001401CEF0F: add     rsp, 8
 * 00000001401CEF13: call    loc_1401CEF06
 * 00000001401CEF18: add     rsp, 8
 * 00000001401CEF1C: call    loc_1401CEF0F
 * 00000001401CEF21: add     rsp, 8
 * 00000001401CEF25: call    loc_1401CEF18
 * 00000001401CEF2A: add     rsp, 8
 * 00000001401CEF2E: call    loc_1401CEF21
 * 00000001401CEF33: add     rsp, 8
 * 00000001401CEF37: call    loc_1401CEF2A
 * 00000001401CEF3C: add     rsp, 8
 * 00000001401CEF40: call    loc_1401CEF33
 * 00000001401CEF45: add     rsp, 8
 * 00000001401CEF49: call    loc_1401CEF3C
 * 00000001401CEF4E: add     rsp, 8
 * 00000001401CEF52: call    loc_1401CEF45
 * 00000001401CEF57: add     rsp, 8
 * 00000001401CEF5B: call    loc_1401CEF4E
 * 00000001401CEF60: add     rsp, 8
 * 00000001401CEF64: call    loc_1401CEF57
 * 00000001401CEF69: add     rsp, 8
 * 00000001401CEF6D: call    loc_1401CEF60
 * 00000001401CEF72: add     rsp, 8
 * 00000001401CEF76: call    loc_1401CEF69
 * 00000001401CEF7B: add     rsp, 8
 * 00000001401CEF7F: call    loc_1401CEF72
 * 00000001401CEF84: add     rsp, 8
 * 00000001401CEF88: call    loc_1401CEF7B
 * 00000001401CEF8D: add     rsp, 8
 * 00000001401CEF91: call    loc_1401CEF84
 * 00000001401CEF96: add     rsp, 8
 * 00000001401CEF9A: call    loc_1401CEF8D
 * 00000001401CEF9F: add     rsp, 8
 * 00000001401CEFA3: call    loc_1401CEF96
 * 00000001401CEFA8: add     rsp, 8
 * 00000001401CEFAC: mov     eax, 0DADAh
 * 00000001401CEFB1: test    edx, 200h
 * 00000001401CEFB7: jz      short loc_1401CEFBE
 * 00000001401CEFB9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CEFBE: lfence
 * 00000001401CEFC1: mov     byte ptr gs:856h, 0
 * 00000001401CEFCA: test    byte ptr [r10+3], 80h
 * 00000001401CEFCF: jz      short loc_1401CF013
 * 00000001401CEFD1: mov     ecx, 0C0000102h
 * 00000001401CEFD6: rdmsr
 * 00000001401CEFD8: shl     rdx, 20h
 * 00000001401CEFDC: or      rax, rdx
 * 00000001401CEFDF: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CEFE6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CEFEE: cmp     [r10+0F0h], rax
 * 00000001401CEFF5: jz      short loc_1401CF013
 * 00000001401CEFF7: mov     rdx, [r10+1F0h]
 * 00000001401CEFFE: bts     dword ptr [r10+74h], 8
 * 00000001401CF004: dec     word ptr [r10+1E6h]
 * 00000001401CF00C: mov     [rdx+80h], rax
 * 00000001401CF013: test    byte ptr [r10+3], 3
 * 00000001401CF018: mov     word ptr [rbp+80h], 0
 * 00000001401CF021: jz      short loc_1401CF028
 * 00000001401CF023: call    KiSaveDebugRegisterState
 * 00000001401CF028: cld
 * 00000001401CF029: stmxcsr dword ptr [rbp-54h]
 * 00000001401CF02D: ldmxcsr dword ptr gs:180h
 * 00000001401CF036: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CF03A: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CF03E: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CF042: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CF046: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CF04A: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CF04E: sub     qword ptr [rbp+0E8h], 2
 * 00000001401CF056: and     dword ptr [rbp+0ECh], 0
 * 00000001401CF05D: sti
 * 00000001401CF05E: mov     ecx, 0C000001Dh
 * 00000001401CF063: xor     edx, edx
 * 00000001401CF065: mov     r8, [rbp+0E8h]
 * 00000001401CF06C: call    KiExceptionDispatch
 * 00000001401CF071: nop
 * 00000001401CF072: retn
 */
