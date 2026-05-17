/*
 * XREFs of LdrGetDllHandleByMapping @ 0x180076EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180026B34 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByMapping @ 0x180076F60 (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x1800D78AC (LdrpFatalExceptionFilter.c)
 */

/*
 * Hex-Rays decompilation failed for LdrGetDllHandleByMapping @ 0x180076EB0
 * Reason: Hex-Rays returned no pseudocode for 0x180076EB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180076EB0: mov     [rsp+arg_0], rbx
 * 0000000180076EB5: mov     [rsp+arg_8], rsi
 * 0000000180076EBA: push    rdi
 * 0000000180076EBB: sub     rsp, 30h
 * 0000000180076EBF: mov     rsi, rdx
 * 0000000180076EC2: mov     rdi, rcx
 * 0000000180076EC5: lea     r9, [rsp+38h+var_10]
 * 0000000180076ECA: xor     r8d, r8d
 * 0000000180076ECD: mov     rdx, rcx
 * 0000000180076ED0: lea     ecx, [r8+1]
 * 0000000180076ED4: call    RtlImageNtHeaderEx
 * 0000000180076ED9: mov     ebx, eax
 * 0000000180076EDB: mov     [rsp+38h+var_18], eax
 * 0000000180076EDF: test    eax, eax
 * 0000000180076EE1: js      short loc_180076F47
 * 0000000180076EE3: lea     r9, [rsp+38h+arg_10]
 * 0000000180076EE8: lea     r8, [rsp+38h+arg_18]
 * 0000000180076EED: mov     rdx, [rsp+38h+var_10]
 * 0000000180076EF2: mov     rcx, rdi
 * 0000000180076EF5: call    LdrpFindLoadedDllByMapping
 * 0000000180076EFA: mov     ebx, eax
 * 0000000180076EFC: mov     [rsp+38h+var_18], eax
 * 0000000180076F00: test    eax, eax
 * 0000000180076F02: js      short loc_180076F41
 * 0000000180076F04: cmp     [rsp+38h+arg_10], 7
 * 0000000180076F09: jge     short loc_180076F1B
 * 0000000180076F0B: mov     ebx, 0C0000135h
 * 0000000180076F10: mov     [rsp+38h+var_18], ebx
 * 0000000180076F14: mov     rdi, [rsp+38h+arg_18]
 * 0000000180076F19: jmp     short loc_180076F39
 * 0000000180076F1B: mov     rdi, [rsp+38h+arg_18]
 * 0000000180076F20: mov     rcx, rdi
 * 0000000180076F23: call    LdrpIncrementModuleLoadCount
 * 0000000180076F28: mov     ebx, eax
 * 0000000180076F2A: mov     [rsp+38h+var_18], eax
 * 0000000180076F2E: test    eax, eax
 * 0000000180076F30: js      short loc_180076F39
 * 0000000180076F32: mov     rax, [rdi+30h]
 * 0000000180076F36: mov     [rsi], rax
 * 0000000180076F39: mov     rcx, rdi
 * 0000000180076F3C: call    LdrpDereferenceModule
 * 0000000180076F41: jmp     short loc_180076F47
 * 0000000180076F43: mov     ebx, [rsp+38h+var_18]
 * 0000000180076F47: mov     eax, ebx
 * 0000000180076F49: mov     rbx, [rsp+38h+arg_0]
 * 0000000180076F4E: mov     rsi, [rsp+38h+arg_8]
 * 0000000180076F53: add     rsp, 30h
 * 0000000180076F57: pop     rdi
 * 0000000180076F58: retn
 * 00000001800A915D: push    rbp
 * 00000001800A915F: sub     rsp, 20h
 * 00000001800A9163: mov     rbp, rdx
 * 00000001800A9166: call    LdrpFatalExceptionFilter
 * 00000001800A916B: nop
 * 00000001800A916C: add     rsp, 20h
 * 00000001800A9170: pop     rbp
 * 00000001800A9171: retn
 */
