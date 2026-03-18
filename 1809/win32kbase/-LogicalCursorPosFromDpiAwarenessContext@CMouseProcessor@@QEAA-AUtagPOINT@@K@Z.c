/*
 * XREFs of ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0073D88
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0073D0C (-CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C0039790 (PhysicalToLogicalDPIPoint.c)
 */

struct tagPOINT __fastcall CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(
        CMouseProcessor *this,
        __int64 a2,
        unsigned int a3)
{
  *(_QWORD *)a2 = 0LL;
  if ( (((unsigned __int16)(a3 >> 8) ^ (unsigned __int16)(*((_DWORD *)this + 23) >> 8)) & 0x1FF) != 0 )
  {
    PhysicalToLogicalDPIPoint(a2, (__int64)gpsi + 4960, a3, 0LL);
  }
  else
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 21);
    *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 22);
  }
  return (struct tagPOINT)a2;
}
