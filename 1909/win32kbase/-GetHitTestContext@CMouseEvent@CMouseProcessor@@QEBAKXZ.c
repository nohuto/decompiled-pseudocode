/*
 * XREFs of ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C004E948
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CMouseEvent::GetHitTestContext(CMouseProcessor::CMouseEvent *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v1 + 140) == 2 )
    return *(unsigned int *)(v1 + 144);
  else
    return 0LL;
}
