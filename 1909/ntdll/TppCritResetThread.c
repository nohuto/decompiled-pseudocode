/*
 * XREFs of TppCritResetThread @ 0x18007EEC0
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtSetInformationObject @ 0x18009DA00 (NtSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for TppCritResetThread @ 0x18007EEC0
 * Reason: Hex-Rays returned no pseudocode for 0x18007EEC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018007EEC0: test    rcx, rcx
 * 000000018007EEC3: jnz     short loc_18007EEC6
 * 000000018007EEC5: retn
 * 000000018007EEC6: mov     [rsp+arg_18], rdi
 * 000000018007EECB: mov     [rsp+Handle], rcx
 * 000000018007EED0: push    r14
 * 000000018007EED2: sub     rsp, 20h
 * 000000018007EED6: xor     r14d, r14d
 * 000000018007EED9: lea     r8, [rsp+28h+Handle]
 * 000000018007EEDE: lea     rdi, [r14-2]
 * 000000018007EEE2: mov     rcx, rdi
 * 000000018007EEE5: lea     r9d, [r14+8]
 * 000000018007EEE9: lea     edx, [r14+5]
 * 000000018007EEED: call    NtSetInformationThread
 * 000000018007EEF2: lea     r9d, [r14+4]
 * 000000018007EEF6: mov     [rsp+28h+arg_10], r14d
 * 000000018007EEFB: lea     r8, [rsp+28h+arg_10]
 * 000000018007EF00: mov     rcx, rdi
 * 000000018007EF03: lea     edx, [rdi+14h]
 * 000000018007EF06: call    NtSetInformationThread
 * 000000018007EF0B: mov     rcx, [rsp+28h+Handle]
 * 000000018007EF10: lea     r9d, [r14+2]
 * 000000018007EF14: lea     r8, [rsp+28h+arg_8]
 * 000000018007EF19: mov     [rsp+28h+arg_8], r14w
 * 000000018007EF1F: lea     edx, [rdi+6]
 * 000000018007EF22: call    NtSetInformationObject
 * 000000018007EF27: mov     rcx, [rsp+28h+Handle]; Handle
 * 000000018007EF2C: call    NtClose
 * 000000018007EF31: lea     r9d, [r14+8]
 * 000000018007EF35: mov     [rsp+28h+Handle], r14
 * 000000018007EF3A: lea     r8, [rsp+28h+Handle]
 * 000000018007EF3F: mov     rcx, rdi
 * 000000018007EF42: lea     edx, [rdi+7]
 * 000000018007EF45: call    NtSetInformationThread
 * 000000018007EF4A: mov     rdi, [rsp+28h+arg_18]
 * 000000018007EF4F: add     rsp, 20h
 * 000000018007EF53: pop     r14
 * 000000018007EF55: retn
 */
