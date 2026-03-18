/*
 * XREFs of IsPointerInputMessage @ 0x1C0147CAC
 * Callers:
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0135190 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0139C04 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C013F070 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0147CDC (IsPointerInputMessageWithState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 3 || (unsigned int)(a1 - 581) <= 0x12 && a1 != 589;
}
