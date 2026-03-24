/*
 * XREFs of SendMessageTo @ 0x1C0055E90
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

/*
 * Hex-Rays decompilation failed for SendMessageTo @ 0x1C0055E90
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055E90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055E90: sub     rsp, 28h
 * 00000001C0055E94: mov     r9d, r8d
 * 00000001C0055E97: mov     r8, rdx
 * 00000001C0055E9A: mov     edx, ecx
 * 00000001C0055E9C: call    ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z; InputExtensibilityCallout::CoreMsgSendMessage(_MIT_ENDPOINT,void const *,uint)
 * 00000001C0055EA1: add     rsp, 28h
 * 00000001C0055EA5: retn
 */
