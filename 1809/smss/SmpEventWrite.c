/*
 * XREFs of SmpEventWrite @ 0x14000A740
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400082D0 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x140009F00 (SmpNtSerializeBoot.c)
 *     SmpLoadDataFromRegistry @ 0x140009F38 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x14000A740
 * Reason: Hex-Rays returned no pseudocode for 0x14000A740
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000A740: push    rbx
 * 000000014000A742: sub     rsp, 20h
 * 000000014000A746: mov     rbx, rcx
 * 000000014000A749: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 000000014000A750: test    rcx, rcx
 * 000000014000A753: jz      short loc_14000A766
 * 000000014000A755: mov     rdx, rbx; EventDescriptor
 * 000000014000A758: call    cs:__imp_EtwEventEnabled
 * 000000014000A75E: test    al, al
 * 000000014000A760: jnz     loc_140011D9A
 * 000000014000A766: add     rsp, 20h
 * 000000014000A76A: pop     rbx
 * 000000014000A76B: retn
 * 0000000140011D9A: mov     rcx, cs:SmpTraceHandle
 * 0000000140011DA1: xor     r9d, r9d
 * 0000000140011DA4: xor     r8d, r8d
 * 0000000140011DA7: mov     rdx, rbx
 * 0000000140011DAA: call    cs:__imp_EtwEventWrite
 * 0000000140011DB0: nop
 * 0000000140011DB1: jmp     loc_14000A766
 */
