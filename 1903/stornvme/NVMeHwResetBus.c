/*
 * XREFs of NVMeHwResetBus @ 0x1C00087A0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerAsyncReset @ 0x1C000AA0C (NVMeControllerAsyncReset.c)
 *     NVMeControllerReset @ 0x1C000B7AC (NVMeControllerReset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeHwResetBus @ 0x1C00087A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00087A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00087A0: push    rbx
 * 00000001C00087A2: sub     rsp, 20h
 * 00000001C00087A6: cmp     byte ptr [rcx+10h], 0
 * 00000001C00087AA: mov     rbx, rcx
 * 00000001C00087AD: jz      short loc_1C00087B3
 * 00000001C00087AF: mov     al, 1
 * 00000001C00087B1: jmp     short loc_1C00087CE
 * 00000001C00087B3: xor     r9d, r9d
 * 00000001C00087B6: xor     r8d, r8d
 * 00000001C00087B9: xor     edx, edx
 * 00000001C00087BB: call    NVMeControllerAsyncReset
 * 00000001C00087C0: test    al, al
 * 00000001C00087C2: jnz     short loc_1C00087CE
 * 00000001C00087C4: xor     edx, edx
 * 00000001C00087C6: mov     rcx, rbx; int
 * 00000001C00087C9: call    NVMeControllerReset
 * 00000001C00087CE: add     rsp, 20h
 * 00000001C00087D2: pop     rbx
 * 00000001C00087D3: retn
 */
