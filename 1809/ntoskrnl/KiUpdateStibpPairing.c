/*
 * XREFs of KiUpdateStibpPairing @ 0x1400F8BF0
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400F8330 (KiUpdateSpeculationControl.c)
 *     NtContinue @ 0x1401BC2F0 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC710 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401BCD60 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401BD200 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDB70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF50 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE330 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE710 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEAF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0A70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C2010 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2400 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2AA0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C31C0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3800 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401C4CB0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C5FA0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401C9240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C98C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB500 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCA00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD400 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDA40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFE80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D02C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0700 (KiUmsFastReturnToUser.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140295590 (KePrepareToDispatchVirtualProcessor.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401D1380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x1400F8BF0
 * Reason: Hex-Rays returned no pseudocode for 0x1400F8BF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400F8BF0: mov     [rsp+arg_10], rbx
 * 00000001400F8BF5: push    rbp
 * 00000001400F8BF6: push    rsi
 * 00000001400F8BF7: push    rdi
 * 00000001400F8BF8: push    r12
 * 00000001400F8BFA: push    r13
 * 00000001400F8BFC: push    r14
 * 00000001400F8BFE: push    r15
 * 00000001400F8C00: sub     rsp, 20h
 * 00000001400F8C04: mov     rbx, gs:20h
 * 00000001400F8C0D: xor     r14d, r14d
 * 00000001400F8C10: mov     r11d, 1
 * 00000001400F8C16: mov     r12d, r14d
 * 00000001400F8C19: mov     esi, r11d
 * 00000001400F8C1C: test    rcx, rcx
 * 00000001400F8C1F: jnz     short loc_1400F8C34
 * 00000001400F8C21: mov     rax, gs:188h
 * 00000001400F8C2A: mov     esi, r14d
 * 00000001400F8C2D: mov     rcx, [rax+220h]
 * 00000001400F8C34: mov     ebp, [rcx+6CCh]
 * 00000001400F8C3A: mov     r13d, r14d
 * 00000001400F8C3D: mov     r15, [rcx+830h]
 * 00000001400F8C44: mov     eax, ebp
 * 00000001400F8C46: mov     rdi, [rbx+2DB0h]
 * 00000001400F8C4D: shr     eax, 16h
 * 00000001400F8C50: and     eax, r11d
 * 00000001400F8C53: mov     [rsp+58h+arg_8], eax
 * 00000001400F8C57: mov     eax, ebp
 * 00000001400F8C59: shr     eax, 17h
 * 00000001400F8C5C: and     ebp, 0C00000h
 * 00000001400F8C62: and     eax, r11d
 * 00000001400F8C65: mov     [rsp+58h+arg_0], eax
 * 00000001400F8C69: test    esi, esi
 * 00000001400F8C6B: jnz     loc_1400F8CFD
 * 00000001400F8C71: mov     rax, [rbx+6D8h]
 * 00000001400F8C78: cmp     r15, rax
 * 00000001400F8C7B: jz      short loc_1400F8CAF
 * 00000001400F8C7D: mov     eax, 20h ; ' '
 * 00000001400F8C82: lock or [rdi+6ECh], ax
 * 00000001400F8C8A: mov     [rbx+6D8h], r15
 * 00000001400F8C91: mov     r12d, r11d
 * 00000001400F8C94: or      word ptr [rbx+6E0h], 4
 * 00000001400F8C9C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8CA3: test    al, 8
 * 00000001400F8CA5: jnz     short loc_1400F8CAF
 * 00000001400F8CA7: or      word ptr [rbx+6E0h], 20h
 * 00000001400F8CAF: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8CB6: test    al, 4
 * 00000001400F8CB8: jz      short loc_1400F8CD9
 * 00000001400F8CBA: mov     eax, r11d
 * 00000001400F8CBD: xor     edx, edx
 * 00000001400F8CBF: mov     ecx, 49h ; 'I'
 * 00000001400F8CC4: wrmsr
 * 00000001400F8CC6: mov     ecx, 0FFFBh
 * 00000001400F8CCB: and     [rbx+6E0h], cx
 * 00000001400F8CD2: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8CD9: test    al, 20h
 * 00000001400F8CDB: jz      loc_1400F8D91
 * 00000001400F8CE1: call    KiFlushCurrentRsb
 * 00000001400F8CE6: mov     eax, 0FFDFh
 * 00000001400F8CEB: mov     r11d, 1
 * 00000001400F8CF1: and     [rbx+6E0h], ax
 * 00000001400F8CF8: jmp     loc_1400F8D91
 * 00000001400F8CFD: cmp     [rsp+58h+arg_8], r12d
 * 00000001400F8D02: jz      loc_1400F8D91
 * 00000001400F8D08: mov     rax, [rbx+6D8h]
 * 00000001400F8D0F: test    rax, rax
 * 00000001400F8D12: jz      short loc_1400F8D91
 * 00000001400F8D14: mov     eax, r11d
 * 00000001400F8D17: xor     edx, edx
 * 00000001400F8D19: mov     ecx, 49h ; 'I'
 * 00000001400F8D1E: wrmsr
 * 00000001400F8D20: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8D27: test    al, 8
 * 00000001400F8D29: jnz     short loc_1400F8D4E
 * 00000001400F8D2B: call    KiFlushCurrentRsb
 * 00000001400F8D30: mov     eax, 0FFDFh
 * 00000001400F8D35: mov     ecx, 0FFBFh
 * 00000001400F8D3A: and     [rbx+6E0h], ax
 * 00000001400F8D41: mov     r11d, 1
 * 00000001400F8D47: and     [rbx+6D4h], cx
 * 00000001400F8D4E: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8D55: mov     ecx, 0FFFBh
 * 00000001400F8D5A: and     ax, cx
 * 00000001400F8D5D: mov     [rbx+6E0h], ax
 * 00000001400F8D64: mov     eax, 20h ; ' '
 * 00000001400F8D69: lock or [rdi+6ECh], ax
 * 00000001400F8D71: mov     [rbx+6D8h], r15
 * 00000001400F8D78: mov     eax, 0FFEFh
 * 00000001400F8D7D: or      byte ptr [rbx+6D6h], 2
 * 00000001400F8D84: mov     r12d, r11d
 * 00000001400F8D87: and     [rbx+6D4h], ax
 * 00000001400F8D8E: mov     r13d, r11d
 * 00000001400F8D91: mov     edx, 2
 * 00000001400F8D96: cmp     ebp, 400000h
 * 00000001400F8D9C: jz      short loc_1400F8DE1
 * 00000001400F8D9E: cmp     [rsp+58h+arg_0], r14d
 * 00000001400F8DA3: jnz     short loc_1400F8DD4
 * 00000001400F8DA5: mov     ecx, 0FFFFFEFFh
 * 00000001400F8DAA: nop     word ptr [rax+rax+00h]
 * 00000001400F8DB0: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8DB7: movzx   r8d, ax
 * 00000001400F8DBB: and     r8w, cx
 * 00000001400F8DBF: or      r8w, dx
 * 00000001400F8DC3: lock cmpxchg [rbx+6ECh], r8w
 * 00000001400F8DCD: jnz     short loc_1400F8DB0
 * 00000001400F8DCF: mov     r15, rdx
 * 00000001400F8DD2: jmp     short loc_1400F8E3A
 * 00000001400F8DD4: movzx   r8d, word ptr [rbx+6ECh]
 * 00000001400F8DDC: mov     r15, rdx
 * 00000001400F8DDF: jmp     short loc_1400F8E3A
 * 00000001400F8DE1: mov     edx, 0FFFFFEFDh
 * 00000001400F8DE6: prefetchw byte ptr [rbx+6ECh]
 * 00000001400F8DED: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8DF4: test    esi, esi
 * 00000001400F8DF6: jz      short loc_1400F8E20
 * 00000001400F8DF8: nop     dword ptr [rax+rax+00000000h]
 * 00000001400F8E00: movzx   ecx, ax
 * 00000001400F8E03: and     cx, dx
 * 00000001400F8E06: lock cmpxchg [rbx+6ECh], cx
 * 00000001400F8E0F: jnz     short loc_1400F8E00
 * 00000001400F8E11: jmp     short loc_1400F8E31
 * 00000001400F8E20: movzx   ecx, ax
 * 00000001400F8E23: and     cx, dx
 * 00000001400F8E26: lock cmpxchg [rbx+6ECh], cx
 * 00000001400F8E2F: jnz     short loc_1400F8E20
 * 00000001400F8E31: mov     edx, 2
 * 00000001400F8E36: movzx   r8d, ax
 * 00000001400F8E3A: mov     rax, [rdi+6D8h]
 * 00000001400F8E41: mov     r10d, r14d
 * 00000001400F8E44: test    rax, rax
 * 00000001400F8E47: jnz     short loc_1400F8E5A
 * 00000001400F8E49: test    r8b, 10h
 * 00000001400F8E4D: jz      short loc_1400F8E5A
 * 00000001400F8E4F: mov     rax, r11
 * 00000001400F8E52: lock or [rbx+6ECh], dx
 * 00000001400F8E5A: mov     esi, 100h
 * 00000001400F8E5F: cmp     r15, rax
 * 00000001400F8E62: jz      short loc_1400F8E6E
 * 00000001400F8E64: test    r8b, 8
 * 00000001400F8E68: jz      loc_1400F8EEF
 * 00000001400F8E6E: movzx   r9d, r8w
 * 00000001400F8E72: and     r9w, 1
 * 00000001400F8E77: nop     word ptr [rax+rax+00000000h]
 * 00000001400F8E80: movzx   edx, word ptr [rdi+6ECh]
 * 00000001400F8E87: movzx   ecx, dx
 * 00000001400F8E8A: and     cx, 0FFEFh
 * 00000001400F8E8E: movzx   eax, cx
 * 00000001400F8E91: or      ax, 1
 * 00000001400F8E95: test    r15, r15
 * 00000001400F8E98: jz      short loc_1400F8EA1
 * 00000001400F8E9A: movzx   eax, cx
 * 00000001400F8E9D: or      ax, 11h
 * 00000001400F8EA1: movzx   ecx, ax
 * 00000001400F8EA4: or      cx, 2
 * 00000001400F8EA8: test    r9w, r9w
 * 00000001400F8EAC: cmovnz  cx, ax
 * 00000001400F8EB0: test    si, cx
 * 00000001400F8EB3: jnz     short loc_1400F8EC8
 * 00000001400F8EB5: cmp     cx, dx
 * 00000001400F8EB8: jz      short loc_1400F8EC8
 * 00000001400F8EBA: movzx   eax, dx
 * 00000001400F8EBD: lock cmpxchg [rdi+6ECh], cx
 * 00000001400F8EC6: jnz     short loc_1400F8E80
 * 00000001400F8EC8: test    si, dx
 * 00000001400F8ECB: jnz     short loc_1400F8EEC
 * 00000001400F8ECD: mov     rax, [rdi+6D8h]
 * 00000001400F8ED4: test    rax, rax
 * 00000001400F8ED7: jnz     short loc_1400F8EEF
 * 00000001400F8ED9: test    r8b, 10h
 * 00000001400F8EDD: jz      short loc_1400F8EEF
 * 00000001400F8EDF: mov     ecx, 2
 * 00000001400F8EE4: lock or [rbx+6ECh], cx
 * 00000001400F8EEC: mov     rax, r11
 * 00000001400F8EEF: mov     r11d, 0FFFDh
 * 00000001400F8EF5: cmp     rax, r15
 * 00000001400F8EF8: jz      short loc_1400F8F00
 * 00000001400F8EFA: test    r8b, 8
 * 00000001400F8EFE: jz      short loc_1400F8F40
 * 00000001400F8F00: cmp     [rsp+58h+arg_0], r10d
 * 00000001400F8F05: jnz     short loc_1400F8F40
 * 00000001400F8F07: cmp     rax, 1
 * 00000001400F8F0B: jz      short loc_1400F8F40
 * 00000001400F8F0D: and     [rbx+6EAh], r11w
 * 00000001400F8F15: mov     r9, 20000000000h
 * 00000001400F8F1F: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8F26: test    r9, rax
 * 00000001400F8F29: jz      short loc_1400F8F33
 * 00000001400F8F2B: and     [rbx+6E6h], r11w
 * 00000001400F8F33: mov     edx, 1
 * 00000001400F8F38: mov     r10d, edx
 * 00000001400F8F3B: jmp     short loc_1400F8F93
 * 00000001400F8F40: movzx   eax, word ptr [rdi+6ECh]
 * 00000001400F8F47: movzx   ecx, r8b
 * 00000001400F8F4B: or      cl, al
 * 00000001400F8F4D: test    cl, 1
 * 00000001400F8F50: jz      short loc_1400F8F68
 * 00000001400F8F52: movzx   ecx, ax
 * 00000001400F8F55: and     cx, 0FFEEh
 * 00000001400F8F59: or      cx, 2
 * 00000001400F8F5D: lock cmpxchg [rdi+6ECh], cx
 * 00000001400F8F66: jnz     short loc_1400F8F40
 * 00000001400F8F68: or      word ptr [rbx+6EAh], 2
 * 00000001400F8F70: mov     r9, 20000000000h
 * 00000001400F8F7A: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8F81: mov     edx, 1
 * 00000001400F8F86: test    r9, rax
 * 00000001400F8F89: jz      short loc_1400F8F93
 * 00000001400F8F8B: or      word ptr [rbx+6E6h], 2
 * 00000001400F8F93: test    r12d, r12d
 * 00000001400F8F96: jz      short loc_1400F8FBD
 * 00000001400F8F98: nop     dword ptr [rax+rax+00000000h]
 * 00000001400F8FA0: movzx   eax, word ptr [rdi+6ECh]
 * 00000001400F8FA7: movzx   ecx, ax
 * 00000001400F8FAA: and     cx, 0FFDFh
 * 00000001400F8FAE: or      cx, 2
 * 00000001400F8FB2: lock cmpxchg [rdi+6ECh], cx
 * 00000001400F8FBB: jnz     short loc_1400F8FA0
 * 00000001400F8FBD: test    r10d, r10d
 * 00000001400F8FC0: jnz     short loc_1400F8FF7
 * 00000001400F8FC2: cmp     [rsp+58h+arg_0], r14d
 * 00000001400F8FC7: jz      short loc_1400F8FF7
 * 00000001400F8FC9: prefetchw byte ptr [rbx+6ECh]
 * 00000001400F8FD0: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8FD7: nop     word ptr [rax+rax+00000000h]
 * 00000001400F8FE0: movzx   ecx, ax
 * 00000001400F8FE3: or      cx, si
 * 00000001400F8FE6: lock cmpxchg [rbx+6ECh], cx
 * 00000001400F8FEF: jnz     short loc_1400F8FE0
 * 00000001400F8FF1: test    al, 1
 * 00000001400F8FF3: cmovnz  r14d, edx
 * 00000001400F8FF7: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8FFE: movzx   edx, word ptr [rbx+6E6h]
 * 00000001400F9005: test    r9, rax
 * 00000001400F9008: jz      short loc_1400F9011
 * 00000001400F900A: movzx   edx, word ptr [rbx+6D0h]
 * 00000001400F9011: test    r15, r15
 * 00000001400F9014: jnz     short loc_1400F9076
 * 00000001400F9016: test    r8b, 10h
 * 00000001400F901A: jnz     short loc_1400F9068
 * 00000001400F901C: mov     eax, 0FFFCh
 * 00000001400F9021: and     dx, ax
 * 00000001400F9024: mov     [rbx+6D0h], dx
 * 00000001400F902B: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F9032: test    r9, rax
 * 00000001400F9035: jz      short loc_1400F9050
 * 00000001400F9037: and     [rbx+6E6h], r11w
 * 00000001400F903F: and     [rbx+6EAh], r11w
 * 00000001400F9047: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F904E: jmp     short loc_1400F909D
 * 00000001400F9050: and     [rbx+6EAh], r11w
 * 00000001400F9058: mov     [rbx+6E6h], dx
 * 00000001400F905F: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F9066: jmp     short loc_1400F909D
 * 00000001400F9068: mov     eax, 0FFFEh
 * 00000001400F906D: and     dx, ax
 * 00000001400F9070: or      dx, 2
 * 00000001400F9074: jmp     short loc_1400F9096
 * 00000001400F9076: test    dl, 3
 * 00000001400F9079: jnz     short loc_1400F909D
 * 00000001400F907B: and     dx, r11w
 * 00000001400F907F: or      dx, 1
 * 00000001400F9083: mov     [rbx+6D0h], dx
 * 00000001400F908A: mov     rcx, qword ptr cs:KiSpeculationFeatures
 * 00000001400F9091: test    r9, rcx
 * 00000001400F9094: jnz     short loc_1400F909D
 * 00000001400F9096: mov     [rbx+6E6h], dx
 * 00000001400F909D: test    r13d, r13d
 * 00000001400F90A0: jz      short loc_1400F90B5
 * 00000001400F90A2: mov     eax, 0FFEFh
 * 00000001400F90A7: mov     [rbx+6D2h], dx
 * 00000001400F90AE: and     [rbx+6D4h], ax
 * 00000001400F90B5: mov     eax, r14d
 * 00000001400F90B8: mov     rbx, [rsp+58h+arg_10]
 * 00000001400F90BD: add     rsp, 20h
 * 00000001400F90C1: pop     r15
 * 00000001400F90C3: pop     r14
 * 00000001400F90C5: pop     r13
 * 00000001400F90C7: pop     r12
 * 00000001400F90C9: pop     rdi
 * 00000001400F90CA: pop     rsi
 * 00000001400F90CB: pop     rbp
 * 00000001400F90CC: retn
 */
