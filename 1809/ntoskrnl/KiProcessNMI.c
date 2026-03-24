/*
 * XREFs of KiProcessNMI @ 0x14028D890
 * Callers:
 *     KxNmiInterrupt @ 0x1401C8AC0 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14011BAD4 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     KiFlushCurrentRsb @ 0x1401D1380 (KiFlushCurrentRsb.c)
 *     KiCheckForFreezeExecution @ 0x14028D658 (KiCheckForFreezeExecution.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x14028D890
 * Reason: Hex-Rays returned no pseudocode for 0x14028D890
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028D890: mov     [rsp+arg_0], rbx
 * 000000014028D895: mov     [rsp+arg_8], rbp
 * 000000014028D89A: mov     [rsp+arg_18], rsi
 * 000000014028D89F: push    rdi
 * 000000014028D8A0: push    r12
 * 000000014028D8A2: push    r13
 * 000000014028D8A4: push    r14
 * 000000014028D8A6: push    r15
 * 000000014028D8A8: sub     rsp, 20h
 * 000000014028D8AC: mov     rax, cs:off_1403FE6B8
 * 000000014028D8B3: mov     r14, rcx
 * 000000014028D8B6: xor     ecx, ecx
 * 000000014028D8B8: mov     rbp, rdx
 * 000000014028D8BB: call    _guard_dispatch_icall
 * 000000014028D8C0: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014028D8C7: mov     ebx, 1
 * 000000014028D8CC: shr     rax, 29h
 * 000000014028D8D0: and     al, bl
 * 000000014028D8D2: jz      short loc_14028D8D9
 * 000000014028D8D4: call    KiFlushCurrentRsb
 * 000000014028D8D9: lfence
 * 000000014028D8DC: mov     rdx, rbp
 * 000000014028D8DF: mov     rcx, r14
 * 000000014028D8E2: call    KiCheckForFreezeExecution
 * 000000014028D8E7: xor     r12d, r12d
 * 000000014028D8EA: test    al, al
 * 000000014028D8EC: jnz     loc_14028DA03
 * 000000014028D8F2: mov     rax, gs:20h
 * 000000014028D8FB: lea     r13, cs:140000000h
 * 000000014028D902: mov     r8, rbx
 * 000000014028D905: mov     ecx, [rax+24h]
 * 000000014028D908: mov     r15d, ecx
 * 000000014028D90B: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 000000014028D913: mov     ecx, eax
 * 000000014028D915: mov     edx, eax
 * 000000014028D917: and     ecx, 3Fh
 * 000000014028D91A: shr     rdx, 6
 * 000000014028D91E: shl     r8, cl
 * 000000014028D921: prefetchw byte ptr ds:rva qword_140403E28[r13+rdx*8]
 * 000000014028D92A: mov     rax, ds:rva qword_140403E28[r13+rdx*8]
 * 000000014028D932: mov     rcx, rax
 * 000000014028D935: or      rcx, r8
 * 000000014028D938: lock cmpxchg ds:rva qword_140403E28[r13+rdx*8], rcx
 * 000000014028D942: jnz     short loc_14028D932
 * 000000014028D944: test    rax, r8
 * 000000014028D947: jnz     loc_14028DA03
 * 000000014028D94D: mov     rax, cs:off_1403FE6B8
 * 000000014028D954: mov     ecx, ebx
 * 000000014028D956: call    _guard_dispatch_icall
 * 000000014028D95B: mov     rdi, cs:KiNmiCallbackListHead
 * 000000014028D962: mov     sil, r12b
 * 000000014028D965: test    rdi, rdi
 * 000000014028D968: jz      short loc_14028D98A
 * 000000014028D96A: mov     rax, [rdi+8]
 * 000000014028D96E: mov     dl, sil
 * 000000014028D971: mov     rcx, [rdi+10h]
 * 000000014028D975: call    _guard_dispatch_icall
 * 000000014028D97A: mov     rdi, [rdi]
 * 000000014028D97D: or      sil, al
 * 000000014028D980: test    rdi, rdi
 * 000000014028D983: jnz     short loc_14028D96A
 * 000000014028D985: test    sil, sil
 * 000000014028D988: jnz     short loc_14028D9E1
 * 000000014028D98A: lea     rdi, KiNMILock
 * 000000014028D991: jmp     short loc_14028D9AA
 * 000000014028D993: mov     rdx, rbp
 * 000000014028D996: mov     rcx, r14
 * 000000014028D999: call    KiCheckForFreezeExecution
 * 000000014028D99E: mov     rax, cs:KiNMILock
 * 000000014028D9A5: test    rax, rax
 * 000000014028D9A8: jnz     short loc_14028D993
 * 000000014028D9AA: mov     rcx, rdi
 * 000000014028D9AD: call    KxTryToAcquireSpinLock
 * 000000014028D9B2: test    al, al
 * 000000014028D9B4: jz      short loc_14028D993
 * 000000014028D9B6: xor     eax, eax
 * 000000014028D9B8: lock cmpxchg cs:KiBugCheckActive, ebx
 * 000000014028D9C0: xor     ecx, ecx
 * 000000014028D9C2: call    cs:__imp_HalHandleNMI
 * 000000014028D9C9: nop     dword ptr [rax+rax+00h]
 * 000000014028D9CE: mov     eax, ebx
 * 000000014028D9D0: lock cmpxchg cs:KiBugCheckActive, r12d
 * 000000014028D9D9: mov     rcx, rdi; SpinLock
 * 000000014028D9DC: call    KxReleaseSpinLock
 * 000000014028D9E1: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 000000014028D9E9: mov     ecx, edx
 * 000000014028D9EB: mov     eax, edx
 * 000000014028D9ED: and     ecx, 3Fh
 * 000000014028D9F0: shl     rbx, cl
 * 000000014028D9F3: not     rbx
 * 000000014028D9F6: shr     rax, 6
 * 000000014028D9FA: lock and ds:rva qword_140403E28[r13+rax*8], rbx
 * 000000014028DA03: mov     rbx, [rsp+48h+arg_0]
 * 000000014028DA08: mov     rbp, [rsp+48h+arg_8]
 * 000000014028DA0D: mov     rsi, [rsp+48h+arg_18]
 * 000000014028DA12: add     rsp, 20h
 * 000000014028DA16: pop     r15
 * 000000014028DA18: pop     r14
 * 000000014028DA1A: pop     r13
 * 000000014028DA1C: pop     r12
 * 000000014028DA1E: pop     rdi
 * 000000014028DA1F: retn
 */
