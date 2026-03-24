/*
 * XREFs of NVMeHwResetBus @ 0x1C00085F0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerAsyncReset @ 0x1C000A85C (NVMeControllerAsyncReset.c)
 *     NVMeControllerReset @ 0x1C000B6BC (NVMeControllerReset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeHwResetBus @ 0x1C00085F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00085F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00085F0: push    rbx
 * 00000001C00085F2: sub     rsp, 20h
 * 00000001C00085F6: cmp     byte ptr [rcx+10h], 0
 * 00000001C00085FA: mov     rbx, rcx
 * 00000001C00085FD: jz      short loc_1C0008603
 * 00000001C00085FF: mov     al, 1
 * 00000001C0008601: jmp     short loc_1C000861E
 * 00000001C0008603: xor     r9d, r9d
 * 00000001C0008606: xor     r8d, r8d
 * 00000001C0008609: xor     edx, edx
 * 00000001C000860B: call    NVMeControllerAsyncReset
 * 00000001C0008610: test    al, al
 * 00000001C0008612: jnz     short loc_1C000861E
 * 00000001C0008614: xor     edx, edx
 * 00000001C0008616: mov     rcx, rbx; int
 * 00000001C0008619: call    NVMeControllerReset
 * 00000001C000861E: add     rsp, 20h
 * 00000001C0008622: pop     rbx
 * 00000001C0008623: retn
 */
