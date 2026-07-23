/*
 * XREFs of KiProcessNMI @ 0x14028DA80
 * Callers:
 *     KxNmiInterrupt @ 0x1401C8BC0 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14011BB44 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiFlushCurrentRsb @ 0x1401D1480 (KiFlushCurrentRsb.c)
 *     KiCheckForFreezeExecution @ 0x14028D848 (KiCheckForFreezeExecution.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x14028DA80
 * Reason: Hex-Rays returned no pseudocode for 0x14028DA80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028DA80: mov     [rsp+arg_0], rbx
 * 000000014028DA85: mov     [rsp+arg_8], rbp
 * 000000014028DA8A: mov     [rsp+arg_18], rsi
 * 000000014028DA8F: push    rdi
 * 000000014028DA90: push    r12
 * 000000014028DA92: push    r13
 * 000000014028DA94: push    r14
 * 000000014028DA96: push    r15
 * 000000014028DA98: sub     rsp, 20h
 * 000000014028DA9C: mov     rax, cs:off_1403FF6B8
 * 000000014028DAA3: mov     r14, rcx
 * 000000014028DAA6: xor     ecx, ecx
 * 000000014028DAA8: mov     rbp, rdx
 * 000000014028DAAB: call    _guard_dispatch_icall
 * 000000014028DAB0: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014028DAB7: mov     ebx, 1
 * 000000014028DABC: shr     rax, 29h
 * 000000014028DAC0: and     al, bl
 * 000000014028DAC2: jz      short loc_14028DAC9
 * 000000014028DAC4: call    KiFlushCurrentRsb
 * 000000014028DAC9: lfence
 * 000000014028DACC: mov     rdx, rbp
 * 000000014028DACF: mov     rcx, r14
 * 000000014028DAD2: call    KiCheckForFreezeExecution
 * 000000014028DAD7: xor     r12d, r12d
 * 000000014028DADA: test    al, al
 * 000000014028DADC: jnz     loc_14028DBF3
 * 000000014028DAE2: mov     rax, gs:20h
 * 000000014028DAEB: lea     r13, cs:140000000h
 * 000000014028DAF2: mov     r8, rbx
 * 000000014028DAF5: mov     ecx, [rax+24h]
 * 000000014028DAF8: mov     r15d, ecx
 * 000000014028DAFB: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 000000014028DB03: mov     ecx, eax
 * 000000014028DB05: mov     edx, eax
 * 000000014028DB07: and     ecx, 3Fh
 * 000000014028DB0A: shr     rdx, 6
 * 000000014028DB0E: shl     r8, cl
 * 000000014028DB11: prefetchw byte ptr ds:rva qword_140404E28[r13+rdx*8]
 * 000000014028DB1A: mov     rax, ds:rva qword_140404E28[r13+rdx*8]
 * 000000014028DB22: mov     rcx, rax
 * 000000014028DB25: or      rcx, r8
 * 000000014028DB28: lock cmpxchg ds:rva qword_140404E28[r13+rdx*8], rcx
 * 000000014028DB32: jnz     short loc_14028DB22
 * 000000014028DB34: test    rax, r8
 * 000000014028DB37: jnz     loc_14028DBF3
 * 000000014028DB3D: mov     rax, cs:off_1403FF6B8
 * 000000014028DB44: mov     ecx, ebx
 * 000000014028DB46: call    _guard_dispatch_icall
 * 000000014028DB4B: mov     rdi, cs:KiNmiCallbackListHead
 * 000000014028DB52: mov     sil, r12b
 * 000000014028DB55: test    rdi, rdi
 * 000000014028DB58: jz      short loc_14028DB7A
 * 000000014028DB5A: mov     rax, [rdi+8]
 * 000000014028DB5E: mov     dl, sil
 * 000000014028DB61: mov     rcx, [rdi+10h]
 * 000000014028DB65: call    _guard_dispatch_icall
 * 000000014028DB6A: mov     rdi, [rdi]
 * 000000014028DB6D: or      sil, al
 * 000000014028DB70: test    rdi, rdi
 * 000000014028DB73: jnz     short loc_14028DB5A
 * 000000014028DB75: test    sil, sil
 * 000000014028DB78: jnz     short loc_14028DBD1
 * 000000014028DB7A: lea     rdi, KiNMILock
 * 000000014028DB81: jmp     short loc_14028DB9A
 * 000000014028DB83: mov     rdx, rbp
 * 000000014028DB86: mov     rcx, r14
 * 000000014028DB89: call    KiCheckForFreezeExecution
 * 000000014028DB8E: mov     rax, cs:KiNMILock
 * 000000014028DB95: test    rax, rax
 * 000000014028DB98: jnz     short loc_14028DB83
 * 000000014028DB9A: mov     rcx, rdi
 * 000000014028DB9D: call    KxTryToAcquireSpinLock
 * 000000014028DBA2: test    al, al
 * 000000014028DBA4: jz      short loc_14028DB83
 * 000000014028DBA6: xor     eax, eax
 * 000000014028DBA8: lock cmpxchg cs:KiBugCheckActive, ebx
 * 000000014028DBB0: xor     ecx, ecx
 * 000000014028DBB2: call    cs:__imp_HalHandleNMI
 * 000000014028DBB9: nop     dword ptr [rax+rax+00h]
 * 000000014028DBBE: mov     eax, ebx
 * 000000014028DBC0: lock cmpxchg cs:KiBugCheckActive, r12d
 * 000000014028DBC9: mov     rcx, rdi; SpinLock
 * 000000014028DBCC: call    KxReleaseSpinLock
 * 000000014028DBD1: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 000000014028DBD9: mov     ecx, edx
 * 000000014028DBDB: mov     eax, edx
 * 000000014028DBDD: and     ecx, 3Fh
 * 000000014028DBE0: shl     rbx, cl
 * 000000014028DBE3: not     rbx
 * 000000014028DBE6: shr     rax, 6
 * 000000014028DBEA: lock and ds:rva qword_140404E28[r13+rax*8], rbx
 * 000000014028DBF3: mov     rbx, [rsp+48h+arg_0]
 * 000000014028DBF8: mov     rbp, [rsp+48h+arg_8]
 * 000000014028DBFD: mov     rsi, [rsp+48h+arg_18]
 * 000000014028DC02: add     rsp, 20h
 * 000000014028DC06: pop     r15
 * 000000014028DC08: pop     r14
 * 000000014028DC0A: pop     r13
 * 000000014028DC0C: pop     r12
 * 000000014028DC0E: pop     rdi
 * 000000014028DC0F: retn
 */
