/*
 * XREFs of ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C0191C48
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0190680 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0192750 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01917CC (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1C0191C0C (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 */

char __fastcall CMouseProcessor::HittestWheelRoutingRequested(CMouseProcessor *this)
{
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  char v2; // dl

  MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
  v2 = 0;
  if ( MouseWheelForegroundThread )
    return anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting((__int64)MouseWheelForegroundThread) != 0;
  return v2;
}
