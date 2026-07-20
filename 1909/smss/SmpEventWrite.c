/*
 * XREFs of SmpEventWrite @ 0x1400095B4
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400082A0 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140008BE8 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x140008D24 (SmpNtSerializeBoot.c)
 *     SmpLoadDataFromRegistry @ 0x140008D5C (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x1400095B4
 * Reason: Hex-Rays returned no pseudocode for 0x1400095B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400095B4: push    rbx
 * 00000001400095B6: sub     rsp, 20h
 * 00000001400095BA: mov     rbx, rcx
 * 00000001400095BD: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 00000001400095C4: test    rcx, rcx
 * 00000001400095C7: jz      short loc_1400095DA
 * 00000001400095C9: mov     rdx, rbx; EventDescriptor
 * 00000001400095CC: call    cs:__imp_EtwEventEnabled
 * 00000001400095D2: test    al, al
 * 00000001400095D4: jnz     loc_14000F112
 * 00000001400095DA: add     rsp, 20h
 * 00000001400095DE: pop     rbx
 * 00000001400095DF: retn
 * 000000014000F112: mov     rcx, cs:SmpTraceHandle
 * 000000014000F119: xor     r9d, r9d
 * 000000014000F11C: xor     r8d, r8d
 * 000000014000F11F: mov     rdx, rbx
 * 000000014000F122: call    cs:__imp_EtwEventWrite
 * 000000014000F128: nop
 * 000000014000F129: jmp     loc_1400095DA
 */
