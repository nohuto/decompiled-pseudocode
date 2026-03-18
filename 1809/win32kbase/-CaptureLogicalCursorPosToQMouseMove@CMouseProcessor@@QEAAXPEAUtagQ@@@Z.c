/*
 * XREFs of ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0073D0C
 * Callers:
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0073CD0 (CaptureLogicalCursorPosToQMouseMove.c)
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0073D88 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 */

void __fastcall CMouseProcessor::CaptureLogicalCursorPosToQMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  __int64 v3; // rax
  __int64 v4; // xmm0_8
  int v5; // edi
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a2 + 13);
  if ( v3 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 424LL) + 280LL);
    CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)&v6);
    v4 = v6;
  }
  else
  {
    v4 = *(_QWORD *)((char *)this + 84);
    v5 = *((_DWORD *)this + 23);
  }
  *((_QWORD *)a2 + 23) = v4;
  *((_DWORD *)a2 + 48) = v5;
}
