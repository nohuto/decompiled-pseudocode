/*
 * XREFs of McGenEventRegister @ 0x14002BE08
 * Callers:
 *     WinMain @ 0x14002C17C (WinMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister @ 0x14002BE08
 * Reason: Hex-Rays returned no pseudocode for 0x14002BE08
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002BE08: sub     rsp, 28h
 * 000000014002BE0C: xor     eax, eax
 * 000000014002BE0E: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 000000014002BE15: jnz     short loc_14002BE35
 * 000000014002BE17: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 000000014002BE1E: mov     r9, r8
 * 000000014002BE21: lea     rdx, McGenControlCallbackV2
 * 000000014002BE28: lea     rcx, AUDIO_EVENT_PROVIDER
 * 000000014002BE2F: call    cs:__imp_EtwEventRegister
 * 000000014002BE35: add     rsp, 28h
 * 000000014002BE39: retn
 */
