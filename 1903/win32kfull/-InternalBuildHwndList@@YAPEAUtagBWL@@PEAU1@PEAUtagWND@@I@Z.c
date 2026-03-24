/*
 * XREFs of ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700
 * Callers:
 *     _FindWindowEx @ 0x1C00CB8F0 (_FindWindowEx.c)
 *     NtUserBuildHwndList @ 0x1C00CBEB0 (NtUserBuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00CC700
 * Reason: Hex-Rays returned no pseudocode for 0x1C00CC700
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00CC700: mov     [rsp+arg_10], rbx
 * 00000001C00CC705: mov     [rsp+arg_18], rsi
 * 00000001C00CC70A: push    rdi
 * 00000001C00CC70B: sub     rsp, 20h
 * 00000001C00CC70F: mov     esi, r8d
 * 00000001C00CC712: mov     rdi, rdx
 * 00000001C00CC715: mov     rbx, rcx
 * 00000001C00CC718: test    rdx, rdx
 * 00000001C00CC71B: jz      loc_1C00CC805
 * 00000001C00CC721: mov     [rsp+28h+arg_0], rbp
 * 00000001C00CC726: mov     [rsp+28h+arg_8], r14
 * 00000001C00CC72B: mov     r14d, r8d
 * 00000001C00CC72E: and     r14d, 20h
 * 00000001C00CC732: mov     rbp, [rbx+18h]
 * 00000001C00CC736: test    r14d, r14d
 * 00000001C00CC739: jnz     loc_1C01A1672
 * 00000001C00CC73F: test    sil, 40h
 * 00000001C00CC743: jnz     loc_1C01A16A5
 * 00000001C00CC749: test    rbp, rbp
 * 00000001C00CC74C: jnz     short loc_1C00CC7BF
 * 00000001C00CC74E: mov     rcx, [rbx+8]
 * 00000001C00CC752: mov     rax, [rdi]
 * 00000001C00CC755: mov     [rcx], rax
 * 00000001C00CC758: add     qword ptr [rbx+8], 8
 * 00000001C00CC75D: mov     rbp, [rbx+8]
 * 00000001C00CC761: cmp     rbp, [rbx+10h]
 * 00000001C00CC765: jz      short loc_1C00CC7C7
 * 00000001C00CC767: test    sil, 1
 * 00000001C00CC76B: jz      short loc_1C00CC776
 * 00000001C00CC76D: mov     rdx, [rdi+70h]; struct tagWND *
 * 00000001C00CC771: test    rdx, rdx
 * 00000001C00CC774: jnz     short loc_1C00CC7A2
 * 00000001C00CC776: test    sil, 2
 * 00000001C00CC77A: jz      short loc_1C00CC785
 * 00000001C00CC77C: mov     rdi, [rdi+58h]
 * 00000001C00CC780: test    rdi, rdi
 * 00000001C00CC783: jnz     short loc_1C00CC732
 * 00000001C00CC785: mov     rbp, [rsp+28h+arg_0]
 * 00000001C00CC78A: mov     rax, rbx
 * 00000001C00CC78D: mov     r14, [rsp+28h+arg_8]
 * 00000001C00CC792: mov     rbx, [rsp+28h+arg_10]
 * 00000001C00CC797: mov     rsi, [rsp+28h+arg_18]
 * 00000001C00CC79C: add     rsp, 20h
 * 00000001C00CC7A0: pop     rdi
 * 00000001C00CC7A1: retn
 * 00000001C00CC7A2: mov     r8d, 3; unsigned int
 * 00000001C00CC7A8: mov     rcx, rbx; struct tagBWL *
 * 00000001C00CC7AB: call    ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z; InternalBuildHwndList(tagBWL *,tagWND *,uint)
 * 00000001C00CC7B0: mov     rbx, rax
 * 00000001C00CC7B3: mov     rax, [rax+10h]
 * 00000001C00CC7B7: cmp     [rbx+8], rax
 * 00000001C00CC7BB: jb      short loc_1C00CC776
 * 00000001C00CC7BD: jmp     short loc_1C00CC785
 * 00000001C00CC7BF: cmp     rbp, [rdi+10h]
 * 00000001C00CC7C3: jz      short loc_1C00CC74E
 * 00000001C00CC7C5: jmp     short loc_1C00CC767
 * 00000001C00CC7C7: sub     rbp, rbx
 * 00000001C00CC7CA: mov     r9d, 6C777355h
 * 00000001C00CC7D0: mov     edx, ebp
 * 00000001C00CC7D2: mov     rcx, rbx
 * 00000001C00CC7D5: lea     r8, [rdx+48h]
 * 00000001C00CC7D9: add     rdx, 8
 * 00000001C00CC7DD: call    cs:__imp_UserReAllocPool
 * 00000001C00CC7E4: nop     dword ptr [rax+rax+00h]
 * 00000001C00CC7E9: test    rax, rax
 * 00000001C00CC7EC: jz      short loc_1C00CC785
 * 00000001C00CC7EE: add     rbp, rax
 * 00000001C00CC7F1: mov     rbx, rax
 * 00000001C00CC7F4: mov     [rax+8], rbp
 * 00000001C00CC7F8: lea     rcx, [rbp+40h]
 * 00000001C00CC7FC: mov     [rax+10h], rcx
 * 00000001C00CC800: jmp     loc_1C00CC767
 * 00000001C00CC805: mov     rbx, [rsp+28h+arg_10]
 * 00000001C00CC80A: mov     rax, rcx
 * 00000001C00CC80D: mov     rsi, [rsp+28h+arg_18]
 * 00000001C00CC812: add     rsp, 20h
 * 00000001C00CC816: pop     rdi
 * 00000001C00CC817: retn
 * 00000001C01A1672: mov     rcx, rdi
 * 00000001C01A1675: call    IsNonImmersiveBand
 * 00000001C01A167A: test    eax, eax
 * 00000001C01A167C: jnz     loc_1C00CC73F
 * 00000001C01A1682: test    sil, 10h
 * 00000001C01A1686: jz      loc_1C00CC767
 * 00000001C01A168C: mov     rax, [rdi+28h]
 * 00000001C01A1690: test    dword ptr [rax+0E8h], 1000000h
 * 00000001C01A169A: jz      loc_1C00CC767
 * 00000001C01A16A0: jmp     loc_1C00CC73F
 * 00000001C01A16A5: mov     rcx, [rdi+28h]
 * 00000001C01A16A9: movzx   eax, byte ptr [rcx+1Fh]
 * 00000001C01A16AD: and     al, 11h
 * 00000001C01A16AF: cmp     al, 10h
 * 00000001C01A16B1: jnz     loc_1C00CC749
 * 00000001C01A16B7: test    byte ptr [rcx+14h], 40h
 * 00000001C01A16BB: jnz     loc_1C00CC749
 * 00000001C01A16C1: mov     edx, 0FFh; unsigned int
 * 00000001C01A16C6: mov     rcx, rdi; struct tagWND *
 * 00000001C01A16C9: call    ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z; IsWindowSubjectToShellWindowBehavior(tagWND *,ulong)
 * 00000001C01A16CE: test    al, al
 * 00000001C01A16D0: jnz     loc_1C00CC767
 * 00000001C01A16D6: jmp     loc_1C00CC749
 */
