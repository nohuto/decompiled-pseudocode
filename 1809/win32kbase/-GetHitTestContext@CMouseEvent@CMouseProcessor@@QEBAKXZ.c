/*
 * XREFs of ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0031CBC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CMouseEvent::GetHitTestContext(CMouseProcessor::CMouseEvent *this)
{
  if ( *(_DWORD *)(*(_QWORD *)this + 124LL) == 2 )
    return *(unsigned int *)(*(_QWORD *)this + 128LL);
  else
    return 0LL;
}
