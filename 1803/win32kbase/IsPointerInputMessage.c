/*
 * XREFs of IsPointerInputMessage @ 0x1C011F640
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C011741C (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C011F670 (IsPointerInputMessageWithState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 3 || (unsigned int)(a1 - 581) <= 0x12 && a1 != 589;
}
