/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDD0
 * Callers:
 *     _FindWindowEx @ 0x1C006CFC0 (_FindWindowEx.c)
 *     NtUserBuildHwndList @ 0x1C006D580 (NtUserBuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDD0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 */

/*
 * Hex-Rays decompilation failed for ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C006DDD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006DDD0: mov     [rsp+arg_10], rbx
 * 00000001C006DDD5: mov     [rsp+arg_18], rsi
 * 00000001C006DDDA: push    rdi
 * 00000001C006DDDB: sub     rsp, 20h
 * 00000001C006DDDF: mov     esi, r8d
 * 00000001C006DDE2: mov     rdi, rdx
 * 00000001C006DDE5: mov     rbx, rcx
 * 00000001C006DDE8: test    rdx, rdx
 * 00000001C006DDEB: jz      loc_1C006DED5
 * 00000001C006DDF1: mov     [rsp+28h+arg_0], rbp
 * 00000001C006DDF6: mov     [rsp+28h+arg_8], r14
 * 00000001C006DDFB: mov     r14d, r8d
 * 00000001C006DDFE: and     r14d, 20h
 * 00000001C006DE02: mov     rbp, [rbx+18h]
 * 00000001C006DE06: test    r14d, r14d
 * 00000001C006DE09: jnz     loc_1C0180186
 * 00000001C006DE0F: test    sil, 40h
 * 00000001C006DE13: jnz     loc_1C01801B9
 * 00000001C006DE19: test    rbp, rbp
 * 00000001C006DE1C: jnz     short loc_1C006DE8F
 * 00000001C006DE1E: mov     rcx, [rbx+8]
 * 00000001C006DE22: mov     rax, [rdi]
 * 00000001C006DE25: mov     [rcx], rax
 * 00000001C006DE28: add     qword ptr [rbx+8], 8
 * 00000001C006DE2D: mov     rbp, [rbx+8]
 * 00000001C006DE31: cmp     rbp, [rbx+10h]
 * 00000001C006DE35: jz      short loc_1C006DE97
 * 00000001C006DE37: test    sil, 1
 * 00000001C006DE3B: jz      short loc_1C006DE46
 * 00000001C006DE3D: mov     rdx, [rdi+70h]; struct tagWND *
 * 00000001C006DE41: test    rdx, rdx
 * 00000001C006DE44: jnz     short loc_1C006DE72
 * 00000001C006DE46: test    sil, 2
 * 00000001C006DE4A: jz      short loc_1C006DE55
 * 00000001C006DE4C: mov     rdi, [rdi+58h]
 * 00000001C006DE50: test    rdi, rdi
 * 00000001C006DE53: jnz     short loc_1C006DE02
 * 00000001C006DE55: mov     rbp, [rsp+28h+arg_0]
 * 00000001C006DE5A: mov     rax, rbx
 * 00000001C006DE5D: mov     r14, [rsp+28h+arg_8]
 * 00000001C006DE62: mov     rbx, [rsp+28h+arg_10]
 * 00000001C006DE67: mov     rsi, [rsp+28h+arg_18]
 * 00000001C006DE6C: add     rsp, 20h
 * 00000001C006DE70: pop     rdi
 * 00000001C006DE71: retn
 * 00000001C006DE72: mov     r8d, 3; unsigned int
 * 00000001C006DE78: mov     rcx, rbx; struct tagBWL *
 * 00000001C006DE7B: call    ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z; InternalBuildHwndList(tagBWL *,tagWND *,uint)
 * 00000001C006DE80: mov     rbx, rax
 * 00000001C006DE83: mov     rax, [rax+10h]
 * 00000001C006DE87: cmp     [rbx+8], rax
 * 00000001C006DE8B: jb      short loc_1C006DE46
 * 00000001C006DE8D: jmp     short loc_1C006DE55
 * 00000001C006DE8F: cmp     rbp, [rdi+10h]
 * 00000001C006DE93: jz      short loc_1C006DE1E
 * 00000001C006DE95: jmp     short loc_1C006DE37
 * 00000001C006DE97: sub     rbp, rbx
 * 00000001C006DE9A: mov     r9d, 6C777355h
 * 00000001C006DEA0: mov     edx, ebp
 * 00000001C006DEA2: mov     rcx, rbx
 * 00000001C006DEA5: lea     r8, [rdx+48h]
 * 00000001C006DEA9: add     rdx, 8
 * 00000001C006DEAD: call    cs:__imp_UserReAllocPool
 * 00000001C006DEB4: nop     dword ptr [rax+rax+00h]
 * 00000001C006DEB9: test    rax, rax
 * 00000001C006DEBC: jz      short loc_1C006DE55
 * 00000001C006DEBE: add     rbp, rax
 * 00000001C006DEC1: mov     rbx, rax
 * 00000001C006DEC4: mov     [rax+8], rbp
 * 00000001C006DEC8: lea     rcx, [rbp+40h]
 * 00000001C006DECC: mov     [rax+10h], rcx
 * 00000001C006DED0: jmp     loc_1C006DE37
 * 00000001C006DED5: mov     rbx, [rsp+28h+arg_10]
 * 00000001C006DEDA: mov     rax, rcx
 * 00000001C006DEDD: mov     rsi, [rsp+28h+arg_18]
 * 00000001C006DEE2: add     rsp, 20h
 * 00000001C006DEE6: pop     rdi
 * 00000001C006DEE7: retn
 * 00000001C0180186: mov     rcx, rdi
 * 00000001C0180189: call    IsNonImmersiveBand
 * 00000001C018018E: test    eax, eax
 * 00000001C0180190: jnz     loc_1C006DE0F
 * 00000001C0180196: test    sil, 10h
 * 00000001C018019A: jz      loc_1C006DE37
 * 00000001C01801A0: mov     rax, [rdi+28h]
 * 00000001C01801A4: test    dword ptr [rax+0E8h], 1000000h
 * 00000001C01801AE: jz      loc_1C006DE37
 * 00000001C01801B4: jmp     loc_1C006DE0F
 * 00000001C01801B9: mov     rcx, [rdi+28h]
 * 00000001C01801BD: movzx   eax, byte ptr [rcx+1Fh]
 * 00000001C01801C1: and     al, 11h
 * 00000001C01801C3: cmp     al, 10h
 * 00000001C01801C5: jnz     loc_1C006DE19
 * 00000001C01801CB: test    byte ptr [rcx+14h], 40h
 * 00000001C01801CF: jnz     loc_1C006DE19
 * 00000001C01801D5: mov     edx, 0FFh; unsigned int
 * 00000001C01801DA: mov     rcx, rdi; struct tagWND *
 * 00000001C01801DD: call    ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z; IsWindowSubjectToShellWindowBehavior(tagWND *,ulong)
 * 00000001C01801E2: test    al, al
 * 00000001C01801E4: jnz     loc_1C006DE37
 * 00000001C01801EA: jmp     loc_1C006DE19
 */
