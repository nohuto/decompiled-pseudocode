/*
 * XREFs of SendMessageTo @ 0x1C004A490
 * Callers:
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C009CFBC (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0173DD8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

/*
 * Hex-Rays decompilation failed for SendMessageTo @ 0x1C004A490
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A490
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A490: sub     rsp, 28h
 * 00000001C004A494: mov     r9d, r8d
 * 00000001C004A497: mov     r8, rdx
 * 00000001C004A49A: mov     edx, ecx
 * 00000001C004A49C: call    ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z; InputExtensibilityCallout::CoreMsgSendMessage(_MIT_ENDPOINT,void const *,uint)
 * 00000001C004A4A1: add     rsp, 28h
 * 00000001C004A4A5: retn
 */
