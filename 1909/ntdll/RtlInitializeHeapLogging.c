/*
 * XREFs of RtlInitializeHeapLogging @ 0x1800098D0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180007DE8 (TraceLoggingRegisterEx.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 */

/*
 * Hex-Rays decompilation failed for RtlInitializeHeapLogging @ 0x1800098D0
 * Reason: Hex-Rays returned no pseudocode for 0x1800098D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800098D0: push    rbx
 * 00000001800098D2: sub     rsp, 20h
 * 00000001800098D6: lea     r9, RtlpHpStackTraceProviderHandle
 * 00000001800098DD: xor     r8d, r8d
 * 00000001800098E0: lea     rdx, RtlpHpStackTraceEtwCallback
 * 00000001800098E7: lea     rcx, WindowsHeapSnapshotProvider
 * 00000001800098EE: call    EtwEventRegister
 * 00000001800098F3: test    cs:RtlpHpHeapFeatures, 8
 * 00000001800098FA: mov     ebx, eax
 * 00000001800098FC: jnz     loc_1800A99DA
 * 0000000180009902: mov     eax, ebx
 * 0000000180009904: add     rsp, 20h
 * 0000000180009908: pop     rbx
 * 0000000180009909: retn
 * 00000001800A99DA: lea     rcx, dword_18015F5C8; hProvider
 * 00000001800A99E1: call    TraceLoggingRegisterEx
 * 00000001800A99E6: nop
 * 00000001800A99E7: jmp     loc_180009902
 */
