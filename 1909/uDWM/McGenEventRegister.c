/*
 * XREFs of McGenEventRegister @ 0x18003D184
 * Callers:
 *     DllMain @ 0x18004F64C (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister @ 0x18003D184
 * Reason: Hex-Rays returned no pseudocode for 0x18003D184
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018003D184: sub     rsp, 28h
 * 000000018003D188: xor     eax, eax
 * 000000018003D18A: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 000000018003D191: jnz     short loc_18003D1B1
 * 000000018003D193: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 000000018003D19A: mov     r9, r8
 * 000000018003D19D: lea     rdx, McGenControlCallbackV2
 * 000000018003D1A4: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 000000018003D1AB: call    cs:__imp_EtwEventRegister
 * 000000018003D1B1: add     rsp, 28h
 * 000000018003D1B5: retn
 */
