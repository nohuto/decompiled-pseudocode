/*
 * XREFs of sqrt @ 0x18002C1C0
 * Callers:
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800B5DFC (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?NormalizedDotProduct@MagnifierRecognizer@@AEAANUtagPOINT@@0@Z @ 0x180106520 (-NormalizedDotProduct@MagnifierRecognizer@@AEAANUtagPOINT@@0@Z.c)
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013A510 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sqrt(double X)
{
  return _o_sqrt(X);
}
