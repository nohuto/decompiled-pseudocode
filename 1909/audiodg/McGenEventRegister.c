/*
 * XREFs of McGenEventRegister @ 0x14002BD48
 * Callers:
 *     WinMain @ 0x14002C0BC (WinMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister @ 0x14002BD48
 * Reason: Hex-Rays returned no pseudocode for 0x14002BD48
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002BD48: sub     rsp, 28h
 * 000000014002BD4C: xor     eax, eax
 * 000000014002BD4E: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 000000014002BD55: jnz     short loc_14002BD75
 * 000000014002BD57: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 000000014002BD5E: mov     r9, r8
 * 000000014002BD61: lea     rdx, McGenControlCallbackV2
 * 000000014002BD68: lea     rcx, AUDIO_EVENT_PROVIDER
 * 000000014002BD6F: call    cs:__imp_EtwEventRegister
 * 000000014002BD75: add     rsp, 28h
 * 000000014002BD79: retn
 */
