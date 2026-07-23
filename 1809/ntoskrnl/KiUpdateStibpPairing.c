/*
 * XREFs of KiUpdateStibpPairing @ 0x1400F8C70
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400F83B0 (KiUpdateSpeculationControl.c)
 *     NtContinue @ 0x1401BC450 (NtContinue.c)
 *     NtRaiseException @ 0x1401BC870 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401BCEC0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401BD360 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDCD0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BE0B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE490 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE870 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEC50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401C0BD0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1401C2170 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2560 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1401C3320 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401C4E10 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401C6100 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1401C9340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401C99C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401CB600 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1401CCB00 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1401CDB40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1401CF200 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401D0800 (KiUmsFastReturnToUser.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140295780 (KePrepareToDispatchVirtualProcessor.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401D1480 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x1400F8C70
 * Reason: Hex-Rays returned no pseudocode for 0x1400F8C70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400F8C70: mov     [rsp+arg_10], rbx
 * 00000001400F8C75: push    rbp
 * 00000001400F8C76: push    rsi
 * 00000001400F8C77: push    rdi
 * 00000001400F8C78: push    r12
 * 00000001400F8C7A: push    r13
 * 00000001400F8C7C: push    r14
 * 00000001400F8C7E: push    r15
 * 00000001400F8C80: sub     rsp, 20h
 * 00000001400F8C84: mov     rbx, gs:20h
 * 00000001400F8C8D: xor     r14d, r14d
 * 00000001400F8C90: mov     r11d, 1
 * 00000001400F8C96: mov     r12d, r14d
 * 00000001400F8C99: mov     esi, r11d
 * 00000001400F8C9C: test    rcx, rcx
 * 00000001400F8C9F: jnz     short loc_1400F8CB4
 * 00000001400F8CA1: mov     rax, gs:188h
 * 00000001400F8CAA: mov     esi, r14d
 * 00000001400F8CAD: mov     rcx, [rax+220h]
 * 00000001400F8CB4: mov     ebp, [rcx+6CCh]
 * 00000001400F8CBA: mov     r13d, r14d
 * 00000001400F8CBD: mov     r15, [rcx+830h]
 * 00000001400F8CC4: mov     eax, ebp
 * 00000001400F8CC6: mov     rdi, [rbx+2DB0h]
 * 00000001400F8CCD: shr     eax, 16h
 * 00000001400F8CD0: and     eax, r11d
 * 00000001400F8CD3: mov     [rsp+58h+arg_8], eax
 * 00000001400F8CD7: mov     eax, ebp
 * 00000001400F8CD9: shr     eax, 17h
 * 00000001400F8CDC: and     ebp, 0C00000h
 * 00000001400F8CE2: and     eax, r11d
 * 00000001400F8CE5: mov     [rsp+58h+arg_0], eax
 * 00000001400F8CE9: test    esi, esi
 * 00000001400F8CEB: jnz     loc_1400F8D7D
 * 00000001400F8CF1: mov     rax, [rbx+6D8h]
 * 00000001400F8CF8: cmp     r15, rax
 * 00000001400F8CFB: jz      short loc_1400F8D2F
 * 00000001400F8CFD: mov     eax, 20h ; ' '
 * 00000001400F8D02: lock or [rdi+6ECh], ax
 * 00000001400F8D0A: mov     [rbx+6D8h], r15
 * 00000001400F8D11: mov     r12d, r11d
 * 00000001400F8D14: or      word ptr [rbx+6E0h], 4
 * 00000001400F8D1C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8D23: test    al, 8
 * 00000001400F8D25: jnz     short loc_1400F8D2F
 * 00000001400F8D27: or      word ptr [rbx+6E0h], 20h
 * 00000001400F8D2F: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8D36: test    al, 4
 * 00000001400F8D38: jz      short loc_1400F8D59
 * 00000001400F8D3A: mov     eax, r11d
 * 00000001400F8D3D: xor     edx, edx
 * 00000001400F8D3F: mov     ecx, 49h ; 'I'
 * 00000001400F8D44: wrmsr
 * 00000001400F8D46: mov     ecx, 0FFFBh
 * 00000001400F8D4B: and     [rbx+6E0h], cx
 * 00000001400F8D52: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8D59: test    al, 20h
 * 00000001400F8D5B: jz      loc_1400F8E11
 * 00000001400F8D61: call    KiFlushCurrentRsb
 * 00000001400F8D66: mov     eax, 0FFDFh
 * 00000001400F8D6B: mov     r11d, 1
 * 00000001400F8D71: and     [rbx+6E0h], ax
 * 00000001400F8D78: jmp     loc_1400F8E11
 * 00000001400F8D7D: cmp     [rsp+58h+arg_8], r12d
 * 00000001400F8D82: jz      loc_1400F8E11
 * 00000001400F8D88: mov     rax, [rbx+6D8h]
 * 00000001400F8D8F: test    rax, rax
 * 00000001400F8D92: jz      short loc_1400F8E11
 * 00000001400F8D94: mov     eax, r11d
 * 00000001400F8D97: xor     edx, edx
 * 00000001400F8D99: mov     ecx, 49h ; 'I'
 * 00000001400F8D9E: wrmsr
 * 00000001400F8DA0: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8DA7: test    al, 8
 * 00000001400F8DA9: jnz     short loc_1400F8DCE
 * 00000001400F8DAB: call    KiFlushCurrentRsb
 * 00000001400F8DB0: mov     eax, 0FFDFh
 * 00000001400F8DB5: mov     ecx, 0FFBFh
 * 00000001400F8DBA: and     [rbx+6E0h], ax
 * 00000001400F8DC1: mov     r11d, 1
 * 00000001400F8DC7: and     [rbx+6D4h], cx
 * 00000001400F8DCE: movzx   eax, word ptr [rbx+6E0h]
 * 00000001400F8DD5: mov     ecx, 0FFFBh
 * 00000001400F8DDA: and     ax, cx
 * 00000001400F8DDD: mov     [rbx+6E0h], ax
 * 00000001400F8DE4: mov     eax, 20h ; ' '
 * 00000001400F8DE9: lock or [rdi+6ECh], ax
 * 00000001400F8DF1: mov     [rbx+6D8h], r15
 * 00000001400F8DF8: mov     eax, 0FFEFh
 * 00000001400F8DFD: or      byte ptr [rbx+6D6h], 2
 * 00000001400F8E04: mov     r12d, r11d
 * 00000001400F8E07: and     [rbx+6D4h], ax
 * 00000001400F8E0E: mov     r13d, r11d
 * 00000001400F8E11: mov     edx, 2
 * 00000001400F8E16: cmp     ebp, 400000h
 * 00000001400F8E1C: jz      short loc_1400F8E61
 * 00000001400F8E1E: cmp     [rsp+58h+arg_0], r14d
 * 00000001400F8E23: jnz     short loc_1400F8E54
 * 00000001400F8E25: mov     ecx, 0FFFFFEFFh
 * 00000001400F8E2A: nop     word ptr [rax+rax+00h]
 * 00000001400F8E30: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8E37: movzx   r8d, ax
 * 00000001400F8E3B: and     r8w, cx
 * 00000001400F8E3F: or      r8w, dx
 * 00000001400F8E43: lock cmpxchg [rbx+6ECh], r8w
 * 00000001400F8E4D: jnz     short loc_1400F8E30
 * 00000001400F8E4F: mov     r15, rdx
 * 00000001400F8E52: jmp     short loc_1400F8EBA
 * 00000001400F8E54: movzx   r8d, word ptr [rbx+6ECh]
 * 00000001400F8E5C: mov     r15, rdx
 * 00000001400F8E5F: jmp     short loc_1400F8EBA
 * 00000001400F8E61: mov     edx, 0FFFFFEFDh
 * 00000001400F8E66: prefetchw byte ptr [rbx+6ECh]
 * 00000001400F8E6D: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F8E74: test    esi, esi
 * 00000001400F8E76: jz      short loc_1400F8EA0
 * 00000001400F8E78: nop     dword ptr [rax+rax+00000000h]
 * 00000001400F8E80: movzx   ecx, ax
 * 00000001400F8E83: and     cx, dx
 * 00000001400F8E86: lock cmpxchg [rbx+6ECh], cx
 * 00000001400F8E8F: jnz     short loc_1400F8E80
 * 00000001400F8E91: jmp     short loc_1400F8EB1
 * 00000001400F8EA0: movzx   ecx, ax
 * 00000001400F8EA3: and     cx, dx
 * 00000001400F8EA6: lock cmpxchg [rbx+6ECh], cx
 * 00000001400F8EAF: jnz     short loc_1400F8EA0
 * 00000001400F8EB1: mov     edx, 2
 * 00000001400F8EB6: movzx   r8d, ax
 * 00000001400F8EBA: mov     rax, [rdi+6D8h]
 * 00000001400F8EC1: mov     r10d, r14d
 * 00000001400F8EC4: test    rax, rax
 * 00000001400F8EC7: jnz     short loc_1400F8EDA
 * 00000001400F8EC9: test    r8b, 10h
 * 00000001400F8ECD: jz      short loc_1400F8EDA
 * 00000001400F8ECF: mov     rax, r11
 * 00000001400F8ED2: lock or [rbx+6ECh], dx
 * 00000001400F8EDA: mov     esi, 100h
 * 00000001400F8EDF: cmp     r15, rax
 * 00000001400F8EE2: jz      short loc_1400F8EEE
 * 00000001400F8EE4: test    r8b, 8
 * 00000001400F8EE8: jz      loc_1400F8F6F
 * 00000001400F8EEE: movzx   r9d, r8w
 * 00000001400F8EF2: and     r9w, 1
 * 00000001400F8EF7: nop     word ptr [rax+rax+00000000h]
 * 00000001400F8F00: movzx   edx, word ptr [rdi+6ECh]
 * 00000001400F8F07: movzx   ecx, dx
 * 00000001400F8F0A: and     cx, 0FFEFh
 * 00000001400F8F0E: movzx   eax, cx
 * 00000001400F8F11: or      ax, 1
 * 00000001400F8F15: test    r15, r15
 * 00000001400F8F18: jz      short loc_1400F8F21
 * 00000001400F8F1A: movzx   eax, cx
 * 00000001400F8F1D: or      ax, 11h
 * 00000001400F8F21: movzx   ecx, ax
 * 00000001400F8F24: or      cx, 2
 * 00000001400F8F28: test    r9w, r9w
 * 00000001400F8F2C: cmovnz  cx, ax
 * 00000001400F8F30: test    si, cx
 * 00000001400F8F33: jnz     short loc_1400F8F48
 * 00000001400F8F35: cmp     cx, dx
 * 00000001400F8F38: jz      short loc_1400F8F48
 * 00000001400F8F3A: movzx   eax, dx
 * 00000001400F8F3D: lock cmpxchg [rdi+6ECh], cx
 * 00000001400F8F46: jnz     short loc_1400F8F00
 * 00000001400F8F48: test    si, dx
 * 00000001400F8F4B: jnz     short loc_1400F8F6C
 * 00000001400F8F4D: mov     rax, [rdi+6D8h]
 * 00000001400F8F54: test    rax, rax
 * 00000001400F8F57: jnz     short loc_1400F8F6F
 * 00000001400F8F59: test    r8b, 10h
 * 00000001400F8F5D: jz      short loc_1400F8F6F
 * 00000001400F8F5F: mov     ecx, 2
 * 00000001400F8F64: lock or [rbx+6ECh], cx
 * 00000001400F8F6C: mov     rax, r11
 * 00000001400F8F6F: mov     r11d, 0FFFDh
 * 00000001400F8F75: cmp     rax, r15
 * 00000001400F8F78: jz      short loc_1400F8F80
 * 00000001400F8F7A: test    r8b, 8
 * 00000001400F8F7E: jz      short loc_1400F8FC0
 * 00000001400F8F80: cmp     [rsp+58h+arg_0], r10d
 * 00000001400F8F85: jnz     short loc_1400F8FC0
 * 00000001400F8F87: cmp     rax, 1
 * 00000001400F8F8B: jz      short loc_1400F8FC0
 * 00000001400F8F8D: and     [rbx+6EAh], r11w
 * 00000001400F8F95: mov     r9, 20000000000h
 * 00000001400F8F9F: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F8FA6: test    r9, rax
 * 00000001400F8FA9: jz      short loc_1400F8FB3
 * 00000001400F8FAB: and     [rbx+6E6h], r11w
 * 00000001400F8FB3: mov     edx, 1
 * 00000001400F8FB8: mov     r10d, edx
 * 00000001400F8FBB: jmp     short loc_1400F9013
 * 00000001400F8FC0: movzx   eax, word ptr [rdi+6ECh]
 * 00000001400F8FC7: movzx   ecx, r8b
 * 00000001400F8FCB: or      cl, al
 * 00000001400F8FCD: test    cl, 1
 * 00000001400F8FD0: jz      short loc_1400F8FE8
 * 00000001400F8FD2: movzx   ecx, ax
 * 00000001400F8FD5: and     cx, 0FFEEh
 * 00000001400F8FD9: or      cx, 2
 * 00000001400F8FDD: lock cmpxchg [rdi+6ECh], cx
 * 00000001400F8FE6: jnz     short loc_1400F8FC0
 * 00000001400F8FE8: or      word ptr [rbx+6EAh], 2
 * 00000001400F8FF0: mov     r9, 20000000000h
 * 00000001400F8FFA: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F9001: mov     edx, 1
 * 00000001400F9006: test    r9, rax
 * 00000001400F9009: jz      short loc_1400F9013
 * 00000001400F900B: or      word ptr [rbx+6E6h], 2
 * 00000001400F9013: test    r12d, r12d
 * 00000001400F9016: jz      short loc_1400F903D
 * 00000001400F9018: nop     dword ptr [rax+rax+00000000h]
 * 00000001400F9020: movzx   eax, word ptr [rdi+6ECh]
 * 00000001400F9027: movzx   ecx, ax
 * 00000001400F902A: and     cx, 0FFDFh
 * 00000001400F902E: or      cx, 2
 * 00000001400F9032: lock cmpxchg [rdi+6ECh], cx
 * 00000001400F903B: jnz     short loc_1400F9020
 * 00000001400F903D: test    r10d, r10d
 * 00000001400F9040: jnz     short loc_1400F9077
 * 00000001400F9042: cmp     [rsp+58h+arg_0], r14d
 * 00000001400F9047: jz      short loc_1400F9077
 * 00000001400F9049: prefetchw byte ptr [rbx+6ECh]
 * 00000001400F9050: movzx   eax, word ptr [rbx+6ECh]
 * 00000001400F9057: nop     word ptr [rax+rax+00000000h]
 * 00000001400F9060: movzx   ecx, ax
 * 00000001400F9063: or      cx, si
 * 00000001400F9066: lock cmpxchg [rbx+6ECh], cx
 * 00000001400F906F: jnz     short loc_1400F9060
 * 00000001400F9071: test    al, 1
 * 00000001400F9073: cmovnz  r14d, edx
 * 00000001400F9077: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F907E: movzx   edx, word ptr [rbx+6E6h]
 * 00000001400F9085: test    r9, rax
 * 00000001400F9088: jz      short loc_1400F9091
 * 00000001400F908A: movzx   edx, word ptr [rbx+6D0h]
 * 00000001400F9091: test    r15, r15
 * 00000001400F9094: jnz     short loc_1400F90F6
 * 00000001400F9096: test    r8b, 10h
 * 00000001400F909A: jnz     short loc_1400F90E8
 * 00000001400F909C: mov     eax, 0FFFCh
 * 00000001400F90A1: and     dx, ax
 * 00000001400F90A4: mov     [rbx+6D0h], dx
 * 00000001400F90AB: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F90B2: test    r9, rax
 * 00000001400F90B5: jz      short loc_1400F90D0
 * 00000001400F90B7: and     [rbx+6E6h], r11w
 * 00000001400F90BF: and     [rbx+6EAh], r11w
 * 00000001400F90C7: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F90CE: jmp     short loc_1400F911D
 * 00000001400F90D0: and     [rbx+6EAh], r11w
 * 00000001400F90D8: mov     [rbx+6E6h], dx
 * 00000001400F90DF: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001400F90E6: jmp     short loc_1400F911D
 * 00000001400F90E8: mov     eax, 0FFFEh
 * 00000001400F90ED: and     dx, ax
 * 00000001400F90F0: or      dx, 2
 * 00000001400F90F4: jmp     short loc_1400F9116
 * 00000001400F90F6: test    dl, 3
 * 00000001400F90F9: jnz     short loc_1400F911D
 * 00000001400F90FB: and     dx, r11w
 * 00000001400F90FF: or      dx, 1
 * 00000001400F9103: mov     [rbx+6D0h], dx
 * 00000001400F910A: mov     rcx, qword ptr cs:KiSpeculationFeatures
 * 00000001400F9111: test    r9, rcx
 * 00000001400F9114: jnz     short loc_1400F911D
 * 00000001400F9116: mov     [rbx+6E6h], dx
 * 00000001400F911D: test    r13d, r13d
 * 00000001400F9120: jz      short loc_1400F9135
 * 00000001400F9122: mov     eax, 0FFEFh
 * 00000001400F9127: mov     [rbx+6D2h], dx
 * 00000001400F912E: and     [rbx+6D4h], ax
 * 00000001400F9135: mov     eax, r14d
 * 00000001400F9138: mov     rbx, [rsp+58h+arg_10]
 * 00000001400F913D: add     rsp, 20h
 * 00000001400F9141: pop     r15
 * 00000001400F9143: pop     r14
 * 00000001400F9145: pop     r13
 * 00000001400F9147: pop     r12
 * 00000001400F9149: pop     rdi
 * 00000001400F914A: pop     rsi
 * 00000001400F914B: pop     rbp
 * 00000001400F914C: retn
 */
