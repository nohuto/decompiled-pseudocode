/*
 * XREFs of ??0REMOTE_VSYNC@@QEAA@XZ @ 0x1C015A004
 * Callers:
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C01599C4 (--0DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

REMOTE_VSYNC *__fastcall REMOTE_VSYNC::REMOTE_VSYNC(REMOTE_VSYNC *this)
{
  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 14) = -1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 16), NotificationEvent, 0);
  return this;
}
