/*
 * XREFs of ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C00944E4
 * Callers:
 *     ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0030EDC (-CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C003CF50 (PhysicalToLogicalDPIPoint.c)
 */

struct tagPOINT __fastcall CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(
        CMouseProcessor *this,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v5; // r10d
  int v6; // ecx
  int v7; // r9d

  *(_QWORD *)a2 = 0LL;
  v5 = *((_DWORD *)this + 21);
  if ( (((unsigned __int16)(a3 >> 8) ^ (unsigned __int16)(v5 >> 8)) & 0x1FF) != 0 )
    goto LABEL_13;
  v6 = 1;
  v7 = (a3 & 0xF) == 2 && (a3 & 0x20000000) != 0;
  if ( (v5 & 0xF) != 2 || (v5 & 0x20000000) == 0 )
    v6 = 0;
  if ( v7 != v6 )
  {
LABEL_13:
    PhysicalToLogicalDPIPoint(a2, (__int64)gpsi + 4960, a3, 0LL);
  }
  else
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 19);
    *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 20);
  }
  return (struct tagPOINT)a2;
}
