/*
 * XREFs of McGenEventRegister @ 0x18003D8F4
 * Callers:
 *     DllMain @ 0x18004F77C (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister @ 0x18003D8F4
 * Reason: Hex-Rays returned no pseudocode for 0x18003D8F4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018003D8F4: sub     rsp, 28h
 * 000000018003D8F8: xor     eax, eax
 * 000000018003D8FA: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 000000018003D901: jnz     short loc_18003D921
 * 000000018003D903: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 000000018003D90A: mov     r9, r8
 * 000000018003D90D: lea     rdx, McGenControlCallbackV2
 * 000000018003D914: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 000000018003D91B: call    cs:__imp_EtwEventRegister
 * 000000018003D921: add     rsp, 28h
 * 000000018003D925: retn
 */
