/*
 * XREFs of McGenEventRegister @ 0x180051700
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180051304 (Pdcv2ActivationClientRegister.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800514CC (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister @ 0x180051700
 * Reason: Hex-Rays returned no pseudocode for 0x180051700
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180051700: sub     rsp, 28h
 * 0000000180051704: xor     eax, eax
 * 0000000180051706: cmp     [r9], rax
 * 0000000180051709: jnz     short loc_180051718
 * 000000018005170B: lea     rdx, McGenControlCallbackV2
 * 0000000180051712: call    cs:__imp_EtwEventRegister
 * 0000000180051718: add     rsp, 28h
 * 000000018005171C: retn
 */
