/*
 * XREFs of ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C003D268
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C003D204 (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJSHARED::~SEMOBJSHARED(PERESOURCE *this)
{
  EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion();
  }
}
