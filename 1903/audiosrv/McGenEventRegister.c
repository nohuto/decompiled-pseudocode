/*
 * XREFs of McGenEventRegister @ 0x180052758
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800524D0 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister @ 0x180052758
 * Reason: Hex-Rays returned no pseudocode for 0x180052758
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180052758: sub     rsp, 28h
 * 000000018005275C: xor     eax, eax
 * 000000018005275E: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 0000000180052765: jnz     short loc_180052785
 * 0000000180052767: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 000000018005276E: mov     r9, r8
 * 0000000180052771: lea     rdx, McGenControlCallbackV2
 * 0000000180052778: lea     rcx, AUDIO_EVENT_PROVIDER
 * 000000018005277F: call    cs:__imp_EtwEventRegister
 * 0000000180052785: add     rsp, 28h
 * 0000000180052789: retn
 */
