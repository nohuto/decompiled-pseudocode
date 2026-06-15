/*
 * XREFs of ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x1400104A4
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140010110 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x1400389F0 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::DurationTracker::Start(LARGE_INTEGER *this)
{
  if ( !LOBYTE(this->LowPart) )
  {
    QueryPerformanceCounter(this + 2);
    LOBYTE(this->LowPart) = 1;
  }
}
