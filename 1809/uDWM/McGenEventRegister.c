/*
 * XREFs of McGenEventRegister @ 0x18003B86C
 * Callers:
 *     DllMain @ 0x18004D90C (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister @ 0x18003B86C
 * Reason: Hex-Rays returned no pseudocode for 0x18003B86C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018003B86C: sub     rsp, 28h
 * 000000018003B870: xor     eax, eax
 * 000000018003B872: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 000000018003B879: jnz     short loc_18003B899
 * 000000018003B87B: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 000000018003B882: mov     r9, r8
 * 000000018003B885: lea     rdx, McGenControlCallbackV2
 * 000000018003B88C: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 000000018003B893: call    cs:__imp_EtwEventRegister
 * 000000018003B899: add     rsp, 28h
 * 000000018003B89D: retn
 */
