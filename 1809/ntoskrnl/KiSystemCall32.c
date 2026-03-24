/*
 * XREFs of KiSystemCall32 @ 0x1401CEC40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401BC110 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1401CEC40 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1401CEC40
 * Reason: Hex-Rays returned no pseudocode for 0x1401CEC40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CEC40: swapgs
 * 00000001401CEC43: mov     gs:10h, rsp
 * 00000001401CEC4C: mov     rsp, gs:1A8h
 * 00000001401CEC55: push    2Bh ; '+'
 * 00000001401CEC57: push    qword ptr gs:10h
 * 00000001401CEC5F: push    r11
 * 00000001401CEC61: push    23h ; '#'
 * 00000001401CEC63: push    rcx
 * 00000001401CEC64: swapgs
 * 00000001401CEC67: lfence
 * 00000001401CEC6A: sub     rsp, 8
 * 00000001401CEC6E: push    rbp
 * 00000001401CEC6F: sub     rsp, 158h
 * 00000001401CEC76: lea     rbp, [rsp+190h+var_110]
 * 00000001401CEC7E: mov     byte ptr [rbp-55h], 1
 * 00000001401CEC82: mov     [rbp-50h], rax
 * 00000001401CEC86: mov     [rbp-48h], rcx
 * 00000001401CEC8A: mov     [rbp-40h], rdx
 * 00000001401CEC8E: mov     [rbp-38h], r8
 * 00000001401CEC92: mov     [rbp-30h], r9
 * 00000001401CEC96: mov     [rbp-28h], r10
 * 00000001401CEC9A: mov     [rbp-20h], r11
 * 00000001401CEC9E: test    byte ptr [rbp+0F0h], 1
 * 00000001401CECA5: jnz     short loc_1401CECD6
 * 00000001401CECA7: lfence
 * 00000001401CECAA: test    word ptr gs:860h, 1
 * 00000001401CECB5: jnz     short loc_1401CECBF
 * 00000001401CECB7: lfence
 * 00000001401CECBA: jmp     loc_1401CEF28
 * 00000001401CECBF: movzx   eax, word ptr gs:864h
 * 00000001401CECC8: mov     ecx, 48h ; 'H'
 * 00000001401CECCD: xor     edx, edx
 * 00000001401CECCF: wrmsr
 * 00000001401CECD1: jmp     loc_1401CEF28
 * 00000001401CECD6: test    cs:KiKvaShadow, 1
 * 00000001401CECDD: jnz     short loc_1401CECE2
 * 00000001401CECDF: swapgs
 * 00000001401CECE2: lfence
 * 00000001401CECE5: mov     r10, gs:188h
 * 00000001401CECEE: mov     rcx, gs:188h
 * 00000001401CECF7: mov     rcx, [rcx+220h]
 * 00000001401CECFE: mov     rcx, [rcx+830h]
 * 00000001401CED05: mov     gs:858h, rcx
 * 00000001401CED0E: mov     cx, gs:850h
 * 00000001401CED17: mov     gs:852h, cx
 * 00000001401CED20: mov     cx, gs:860h
 * 00000001401CED29: mov     gs:854h, cx
 * 00000001401CED32: movzx   eax, word ptr gs:866h
 * 00000001401CED3B: cmp     gs:864h, ax
 * 00000001401CED44: jz      short loc_1401CED58
 * 00000001401CED46: mov     gs:864h, ax
 * 00000001401CED4F: mov     ecx, 48h ; 'H'
 * 00000001401CED54: xor     edx, edx
 * 00000001401CED56: wrmsr
 * 00000001401CED58: movzx   edx, word ptr gs:860h
 * 00000001401CED61: test    edx, 8
 * 00000001401CED67: jz      short loc_1401CED80
 * 00000001401CED69: mov     eax, 1
 * 00000001401CED6E: xor     edx, edx
 * 00000001401CED70: mov     ecx, 49h ; 'I'
 * 00000001401CED75: wrmsr
 * 00000001401CED77: movzx   edx, word ptr gs:860h
 * 00000001401CED80: test    edx, 2
 * 00000001401CED86: jz      loc_1401CEEB1
 * 00000001401CED8C: call    loc_1401CEE9F
 * 00000001401CED91: add     rsp, 8
 * 00000001401CED95: call    loc_1401CEEA8
 * 00000001401CED9A: add     rsp, 8
 * 00000001401CED9E: call    loc_1401CED91
 * 00000001401CEDA3: add     rsp, 8
 * 00000001401CEDA7: call    loc_1401CED9A
 * 00000001401CEDAC: add     rsp, 8
 * 00000001401CEDB0: call    loc_1401CEDA3
 * 00000001401CEDB5: add     rsp, 8
 * 00000001401CEDB9: call    loc_1401CEDAC
 * 00000001401CEDBE: add     rsp, 8
 * 00000001401CEDC2: call    loc_1401CEDB5
 * 00000001401CEDC7: add     rsp, 8
 * 00000001401CEDCB: call    loc_1401CEDBE
 * 00000001401CEDD0: add     rsp, 8
 * 00000001401CEDD4: call    loc_1401CEDC7
 * 00000001401CEDD9: add     rsp, 8
 * 00000001401CEDDD: call    loc_1401CEDD0
 * 00000001401CEDE2: add     rsp, 8
 * 00000001401CEDE6: call    loc_1401CEDD9
 * 00000001401CEDEB: add     rsp, 8
 * 00000001401CEDEF: call    loc_1401CEDE2
 * 00000001401CEDF4: add     rsp, 8
 * 00000001401CEDF8: call    loc_1401CEDEB
 * 00000001401CEDFD: add     rsp, 8
 * 00000001401CEE01: call    loc_1401CEDF4
 * 00000001401CEE06: add     rsp, 8
 * 00000001401CEE0A: call    loc_1401CEDFD
 * 00000001401CEE0F: add     rsp, 8
 * 00000001401CEE13: call    loc_1401CEE06
 * 00000001401CEE18: add     rsp, 8
 * 00000001401CEE1C: call    loc_1401CEE0F
 * 00000001401CEE21: add     rsp, 8
 * 00000001401CEE25: call    loc_1401CEE18
 * 00000001401CEE2A: add     rsp, 8
 * 00000001401CEE2E: call    loc_1401CEE21
 * 00000001401CEE33: add     rsp, 8
 * 00000001401CEE37: call    loc_1401CEE2A
 * 00000001401CEE3C: add     rsp, 8
 * 00000001401CEE40: call    loc_1401CEE33
 * 00000001401CEE45: add     rsp, 8
 * 00000001401CEE49: call    loc_1401CEE3C
 * 00000001401CEE4E: add     rsp, 8
 * 00000001401CEE52: call    loc_1401CEE45
 * 00000001401CEE57: add     rsp, 8
 * 00000001401CEE5B: call    loc_1401CEE4E
 * 00000001401CEE60: add     rsp, 8
 * 00000001401CEE64: call    loc_1401CEE57
 * 00000001401CEE69: add     rsp, 8
 * 00000001401CEE6D: call    loc_1401CEE60
 * 00000001401CEE72: add     rsp, 8
 * 00000001401CEE76: call    loc_1401CEE69
 * 00000001401CEE7B: add     rsp, 8
 * 00000001401CEE7F: call    loc_1401CEE72
 * 00000001401CEE84: add     rsp, 8
 * 00000001401CEE88: call    loc_1401CEE7B
 * 00000001401CEE8D: add     rsp, 8
 * 00000001401CEE91: call    loc_1401CEE84
 * 00000001401CEE96: add     rsp, 8
 * 00000001401CEE9A: call    loc_1401CEE8D
 * 00000001401CEE9F: add     rsp, 8
 * 00000001401CEEA3: call    loc_1401CEE96
 * 00000001401CEEA8: add     rsp, 8
 * 00000001401CEEAC: mov     eax, 0DADAh
 * 00000001401CEEB1: test    edx, 200h
 * 00000001401CEEB7: jz      short loc_1401CEEBE
 * 00000001401CEEB9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401CEEBE: lfence
 * 00000001401CEEC1: mov     byte ptr gs:856h, 0
 * 00000001401CEECA: test    byte ptr [r10+3], 80h
 * 00000001401CEECF: jz      short loc_1401CEF13
 * 00000001401CEED1: mov     ecx, 0C0000102h
 * 00000001401CEED6: rdmsr
 * 00000001401CEED8: shl     rdx, 20h
 * 00000001401CEEDC: or      rax, rdx
 * 00000001401CEEDF: cmp     rax, cs:MmUserProbeAddress
 * 00000001401CEEE6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401CEEEE: cmp     [r10+0F0h], rax
 * 00000001401CEEF5: jz      short loc_1401CEF13
 * 00000001401CEEF7: mov     rdx, [r10+1F0h]
 * 00000001401CEEFE: bts     dword ptr [r10+74h], 8
 * 00000001401CEF04: dec     word ptr [r10+1E6h]
 * 00000001401CEF0C: mov     [rdx+80h], rax
 * 00000001401CEF13: test    byte ptr [r10+3], 3
 * 00000001401CEF18: mov     word ptr [rbp+80h], 0
 * 00000001401CEF21: jz      short loc_1401CEF28
 * 00000001401CEF23: call    KiSaveDebugRegisterState
 * 00000001401CEF28: cld
 * 00000001401CEF29: stmxcsr dword ptr [rbp-54h]
 * 00000001401CEF2D: ldmxcsr dword ptr gs:180h
 * 00000001401CEF36: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401CEF3A: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001401CEF3E: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001401CEF42: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001401CEF46: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001401CEF4A: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001401CEF4E: sub     qword ptr [rbp+0E8h], 2
 * 00000001401CEF56: and     dword ptr [rbp+0ECh], 0
 * 00000001401CEF5D: sti
 * 00000001401CEF5E: mov     ecx, 0C000001Dh
 * 00000001401CEF63: xor     edx, edx
 * 00000001401CEF65: mov     r8, [rbp+0E8h]
 * 00000001401CEF6C: call    KiExceptionDispatch
 * 00000001401CEF71: nop
 * 00000001401CEF72: retn
 */
