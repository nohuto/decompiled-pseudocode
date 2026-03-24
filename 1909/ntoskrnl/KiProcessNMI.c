/*
 * XREFs of KiProcessNMI @ 0x1402A4120
 * Callers:
 *     KxNmiInterrupt @ 0x1401CFC00 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiCheckForFreezeExecution @ 0x1402A3EFC (KiCheckForFreezeExecution.c)
 *     KxTryToAcquireSpinLock @ 0x1402A7818 (KxTryToAcquireSpinLock.c)
 *     KiFlushCurrentRsb @ 0x140353600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x1402A4120
 * Reason: Hex-Rays returned no pseudocode for 0x1402A4120
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A4120: mov     [rsp+arg_0], rbx
 * 00000001402A4125: mov     [rsp+arg_8], rbp
 * 00000001402A412A: mov     [rsp+arg_18], rsi
 * 00000001402A412F: push    rdi
 * 00000001402A4130: push    r12
 * 00000001402A4132: push    r13
 * 00000001402A4134: push    r14
 * 00000001402A4136: push    r15
 * 00000001402A4138: sub     rsp, 20h
 * 00000001402A413C: mov     rax, cs:off_1404246B8
 * 00000001402A4143: mov     r14, rcx
 * 00000001402A4146: xor     ecx, ecx
 * 00000001402A4148: mov     rbp, rdx
 * 00000001402A414B: call    _guard_dispatch_icall
 * 00000001402A4150: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402A4156: mov     ebx, 1
 * 00000001402A415B: shr     eax, 19h
 * 00000001402A415E: and     al, bl
 * 00000001402A4160: jz      short loc_1402A4167
 * 00000001402A4162: call    KiFlushCurrentRsb
 * 00000001402A4167: lfence
 * 00000001402A416A: mov     rdx, rbp
 * 00000001402A416D: mov     rcx, r14
 * 00000001402A4170: call    KiCheckForFreezeExecution
 * 00000001402A4175: xor     r12d, r12d
 * 00000001402A4178: test    al, al
 * 00000001402A417A: jnz     loc_1402A4291
 * 00000001402A4180: mov     rax, gs:20h
 * 00000001402A4189: lea     r13, cs:140000000h
 * 00000001402A4190: mov     r8, rbx
 * 00000001402A4193: mov     ecx, [rax+24h]
 * 00000001402A4196: mov     r15d, ecx
 * 00000001402A4199: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 00000001402A41A1: mov     ecx, eax
 * 00000001402A41A3: mov     edx, eax
 * 00000001402A41A5: and     ecx, 3Fh
 * 00000001402A41A8: shr     rdx, 6
 * 00000001402A41AC: shl     r8, cl
 * 00000001402A41AF: prefetchw byte ptr ds:rva qword_14042B4F8[r13+rdx*8]
 * 00000001402A41B8: mov     rax, ds:rva qword_14042B4F8[r13+rdx*8]
 * 00000001402A41C0: mov     rcx, rax
 * 00000001402A41C3: or      rcx, r8
 * 00000001402A41C6: lock cmpxchg ds:rva qword_14042B4F8[r13+rdx*8], rcx
 * 00000001402A41D0: jnz     short loc_1402A41C0
 * 00000001402A41D2: test    rax, r8
 * 00000001402A41D5: jnz     loc_1402A4291
 * 00000001402A41DB: mov     rax, cs:off_1404246B8
 * 00000001402A41E2: mov     ecx, ebx
 * 00000001402A41E4: call    _guard_dispatch_icall
 * 00000001402A41E9: mov     rdi, cs:KiNmiCallbackListHead
 * 00000001402A41F0: mov     sil, r12b
 * 00000001402A41F3: test    rdi, rdi
 * 00000001402A41F6: jz      short loc_1402A4218
 * 00000001402A41F8: mov     rax, [rdi+8]
 * 00000001402A41FC: mov     dl, sil
 * 00000001402A41FF: mov     rcx, [rdi+10h]
 * 00000001402A4203: call    _guard_dispatch_icall
 * 00000001402A4208: mov     rdi, [rdi]
 * 00000001402A420B: or      sil, al
 * 00000001402A420E: test    rdi, rdi
 * 00000001402A4211: jnz     short loc_1402A41F8
 * 00000001402A4213: test    sil, sil
 * 00000001402A4216: jnz     short loc_1402A426F
 * 00000001402A4218: lea     rdi, KiNMILock
 * 00000001402A421F: jmp     short loc_1402A4238
 * 00000001402A4221: mov     rdx, rbp
 * 00000001402A4224: mov     rcx, r14
 * 00000001402A4227: call    KiCheckForFreezeExecution
 * 00000001402A422C: mov     rax, cs:KiNMILock
 * 00000001402A4233: test    rax, rax
 * 00000001402A4236: jnz     short loc_1402A4221
 * 00000001402A4238: mov     rcx, rdi
 * 00000001402A423B: call    KxTryToAcquireSpinLock
 * 00000001402A4240: test    al, al
 * 00000001402A4242: jz      short loc_1402A4221
 * 00000001402A4244: xor     eax, eax
 * 00000001402A4246: lock cmpxchg cs:KiBugCheckActive, ebx
 * 00000001402A424E: xor     ecx, ecx
 * 00000001402A4250: call    cs:__imp_HalHandleNMI
 * 00000001402A4257: nop     dword ptr [rax+rax+00h]
 * 00000001402A425C: mov     eax, ebx
 * 00000001402A425E: lock cmpxchg cs:KiBugCheckActive, r12d
 * 00000001402A4267: mov     rcx, rdi; SpinLock
 * 00000001402A426A: call    KxReleaseSpinLock
 * 00000001402A426F: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 00000001402A4277: mov     ecx, edx
 * 00000001402A4279: mov     eax, edx
 * 00000001402A427B: and     ecx, 3Fh
 * 00000001402A427E: shl     rbx, cl
 * 00000001402A4281: not     rbx
 * 00000001402A4284: shr     rax, 6
 * 00000001402A4288: lock and ds:rva qword_14042B4F8[r13+rax*8], rbx
 * 00000001402A4291: mov     rbx, [rsp+48h+arg_0]
 * 00000001402A4296: mov     rbp, [rsp+48h+arg_8]
 * 00000001402A429B: mov     rsi, [rsp+48h+arg_18]
 * 00000001402A42A0: add     rsp, 20h
 * 00000001402A42A4: pop     r15
 * 00000001402A42A6: pop     r14
 * 00000001402A42A8: pop     r13
 * 00000001402A42AA: pop     r12
 * 00000001402A42AC: pop     rdi
 * 00000001402A42AD: retn
 */
