/*
 * XREFs of McGenEventRegister @ 0x180060E68
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180060BE0 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister @ 0x180060E68
 * Reason: Hex-Rays returned no pseudocode for 0x180060E68
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180060E68: sub     rsp, 28h
 * 0000000180060E6C: xor     eax, eax
 * 0000000180060E6E: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 0000000180060E75: jnz     short loc_180060E95
 * 0000000180060E77: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 0000000180060E7E: mov     r9, r8
 * 0000000180060E81: lea     rdx, McGenControlCallbackV2
 * 0000000180060E88: lea     rcx, AUDIO_EVENT_PROVIDER
 * 0000000180060E8F: call    cs:__imp_EtwEventRegister
 * 0000000180060E95: add     rsp, 28h
 * 0000000180060E99: retn
 */
