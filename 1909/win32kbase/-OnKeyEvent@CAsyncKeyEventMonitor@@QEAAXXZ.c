/*
 * XREFs of ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C011F5D0
 * Callers:
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 * Callees:
 *     ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1C011F748 (-ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z.c)
 */

void __fastcall CAsyncKeyEventMonitor::OnKeyEvent(CAsyncKeyEventMonitor *this)
{
  PREGHANDLE v1; // rbx
  unsigned __int64 v2; // rdx

  v1 = gpAsyncKeyEventMonitor;
  ExAcquirePushLockExclusiveEx(gpAsyncKeyEventMonitor + 12, 0LL);
  if ( *(_DWORD *)v1 && *((_BYTE *)v1 + 88) )
    CAsyncKeyEventMonitor::ReportGetAsyncKeyStateAnomaly(
      (CAsyncKeyEventMonitor *)v1,
      ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)v1);
  v2 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  *((_BYTE *)v1 + 88) = 0;
  *(_DWORD *)v1 = v2 >> 24;
  ExReleasePushLockExclusiveEx(v1 + 12, 0LL);
}
