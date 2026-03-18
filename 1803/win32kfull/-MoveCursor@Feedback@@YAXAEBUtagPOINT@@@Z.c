/*
 * XREFs of ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01A7CA8
 * Callers:
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01A7E90 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     UpdateCursorImageForMonitorDpi @ 0x1C006A0F8 (UpdateCursorImageForMonitorDpi.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
 */

void __fastcall Feedback::MoveCursor(Feedback *this, const struct tagPOINT *a2)
{
  __int64 v3; // rbx
  unsigned __int16 v4; // si
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v3 = 0LL;
  v4 = 0;
  GreMovePointer(*(_DWORD **)(gpDispInfo + 40LL), *(unsigned int *)this, *((_DWORD *)this + 1), 8);
  EnterCrit(0LL, 1LL);
  v5 = ValidateHmonitorNoRip(ghCursorMonitor);
  if ( v5 )
    v4 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( MonitorFromPoint(*(_QWORD *)this, 0LL, 18LL, v6) )
    v3 = *(_QWORD *)MonitorFromPoint(*(_QWORD *)this, 0LL, 18LL, v7);
  ghCursorMonitor = v3;
  UpdateCursorImageForMonitorDpi(v4);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
}
