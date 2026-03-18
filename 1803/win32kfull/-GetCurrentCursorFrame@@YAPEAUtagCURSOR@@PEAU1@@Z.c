/*
 * XREFs of ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00C0B10
 * Callers:
 *     UpdateCursorImageForMonitorDpi @ 0x1C006A0F8 (UpdateCursorImageForMonitorDpi.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 * Callees:
 *     GetAnimatedCursorFrame @ 0x1C001C38C (GetAnimatedCursorFrame.c)
 */

struct tagCURSOR *__fastcall GetCurrentCursorFrame(struct tagCURSOR *a1)
{
  if ( a1 && (*((_DWORD *)a1 + 20) & 8) != 0 )
    return (struct tagCURSOR *)GetAnimatedCursorFrame((__int64)a1, *((_DWORD *)a1 + 30));
  return a1;
}
