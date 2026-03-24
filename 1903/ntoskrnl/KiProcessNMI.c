/*
 * XREFs of KiProcessNMI @ 0x1402A43C0
 * Callers:
 *     KxNmiInterrupt @ 0x1401CF000 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KiCheckForFreezeExecution @ 0x1402A419C (KiCheckForFreezeExecution.c)
 *     KxTryToAcquireSpinLock @ 0x1402A7AB8 (KxTryToAcquireSpinLock.c)
 *     KiFlushCurrentRsb @ 0x140353600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x1402A43C0
 * Reason: Hex-Rays returned no pseudocode for 0x1402A43C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A43C0: mov     [rsp+arg_0], rbx
 * 00000001402A43C5: mov     [rsp+arg_8], rbp
 * 00000001402A43CA: mov     [rsp+arg_18], rsi
 * 00000001402A43CF: push    rdi
 * 00000001402A43D0: push    r12
 * 00000001402A43D2: push    r13
 * 00000001402A43D4: push    r14
 * 00000001402A43D6: push    r15
 * 00000001402A43D8: sub     rsp, 20h
 * 00000001402A43DC: mov     rax, cs:off_1404246B8
 * 00000001402A43E3: mov     r14, rcx
 * 00000001402A43E6: xor     ecx, ecx
 * 00000001402A43E8: mov     rbp, rdx
 * 00000001402A43EB: call    _guard_dispatch_icall
 * 00000001402A43F0: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402A43F6: mov     ebx, 1
 * 00000001402A43FB: shr     eax, 19h
 * 00000001402A43FE: and     al, bl
 * 00000001402A4400: jz      short loc_1402A4407
 * 00000001402A4402: call    KiFlushCurrentRsb
 * 00000001402A4407: lfence
 * 00000001402A440A: mov     rdx, rbp
 * 00000001402A440D: mov     rcx, r14
 * 00000001402A4410: call    KiCheckForFreezeExecution
 * 00000001402A4415: xor     r12d, r12d
 * 00000001402A4418: test    al, al
 * 00000001402A441A: jnz     loc_1402A4531
 * 00000001402A4420: mov     rax, gs:20h
 * 00000001402A4429: lea     r13, cs:140000000h
 * 00000001402A4430: mov     r8, rbx
 * 00000001402A4433: mov     ecx, [rax+24h]
 * 00000001402A4436: mov     r15d, ecx
 * 00000001402A4439: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 00000001402A4441: mov     ecx, eax
 * 00000001402A4443: mov     edx, eax
 * 00000001402A4445: and     ecx, 3Fh
 * 00000001402A4448: shr     rdx, 6
 * 00000001402A444C: shl     r8, cl
 * 00000001402A444F: prefetchw byte ptr ds:rva qword_14042B4F8[r13+rdx*8]
 * 00000001402A4458: mov     rax, ds:rva qword_14042B4F8[r13+rdx*8]
 * 00000001402A4460: mov     rcx, rax
 * 00000001402A4463: or      rcx, r8
 * 00000001402A4466: lock cmpxchg ds:rva qword_14042B4F8[r13+rdx*8], rcx
 * 00000001402A4470: jnz     short loc_1402A4460
 * 00000001402A4472: test    rax, r8
 * 00000001402A4475: jnz     loc_1402A4531
 * 00000001402A447B: mov     rax, cs:off_1404246B8
 * 00000001402A4482: mov     ecx, ebx
 * 00000001402A4484: call    _guard_dispatch_icall
 * 00000001402A4489: mov     rdi, cs:KiNmiCallbackListHead
 * 00000001402A4490: mov     sil, r12b
 * 00000001402A4493: test    rdi, rdi
 * 00000001402A4496: jz      short loc_1402A44B8
 * 00000001402A4498: mov     rax, [rdi+8]
 * 00000001402A449C: mov     dl, sil
 * 00000001402A449F: mov     rcx, [rdi+10h]
 * 00000001402A44A3: call    _guard_dispatch_icall
 * 00000001402A44A8: mov     rdi, [rdi]
 * 00000001402A44AB: or      sil, al
 * 00000001402A44AE: test    rdi, rdi
 * 00000001402A44B1: jnz     short loc_1402A4498
 * 00000001402A44B3: test    sil, sil
 * 00000001402A44B6: jnz     short loc_1402A450F
 * 00000001402A44B8: lea     rdi, KiNMILock
 * 00000001402A44BF: jmp     short loc_1402A44D8
 * 00000001402A44C1: mov     rdx, rbp
 * 00000001402A44C4: mov     rcx, r14
 * 00000001402A44C7: call    KiCheckForFreezeExecution
 * 00000001402A44CC: mov     rax, cs:KiNMILock
 * 00000001402A44D3: test    rax, rax
 * 00000001402A44D6: jnz     short loc_1402A44C1
 * 00000001402A44D8: mov     rcx, rdi
 * 00000001402A44DB: call    KxTryToAcquireSpinLock
 * 00000001402A44E0: test    al, al
 * 00000001402A44E2: jz      short loc_1402A44C1
 * 00000001402A44E4: xor     eax, eax
 * 00000001402A44E6: lock cmpxchg cs:KiBugCheckActive, ebx
 * 00000001402A44EE: xor     ecx, ecx
 * 00000001402A44F0: call    cs:__imp_HalHandleNMI
 * 00000001402A44F7: nop     dword ptr [rax+rax+00h]
 * 00000001402A44FC: mov     eax, ebx
 * 00000001402A44FE: lock cmpxchg cs:KiBugCheckActive, r12d
 * 00000001402A4507: mov     rcx, rdi; SpinLock
 * 00000001402A450A: call    KxReleaseSpinLock
 * 00000001402A450F: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 00000001402A4517: mov     ecx, edx
 * 00000001402A4519: mov     eax, edx
 * 00000001402A451B: and     ecx, 3Fh
 * 00000001402A451E: shl     rbx, cl
 * 00000001402A4521: not     rbx
 * 00000001402A4524: shr     rax, 6
 * 00000001402A4528: lock and ds:rva qword_14042B4F8[r13+rax*8], rbx
 * 00000001402A4531: mov     rbx, [rsp+48h+arg_0]
 * 00000001402A4536: mov     rbp, [rsp+48h+arg_8]
 * 00000001402A453B: mov     rsi, [rsp+48h+arg_18]
 * 00000001402A4540: add     rsp, 20h
 * 00000001402A4544: pop     r15
 * 00000001402A4546: pop     r14
 * 00000001402A4548: pop     r13
 * 00000001402A454A: pop     r12
 * 00000001402A454C: pop     rdi
 * 00000001402A454D: retn
 */
