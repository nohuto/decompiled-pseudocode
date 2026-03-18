/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003D2AC
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C003D204 (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(a2);
    a2 = *(HSEMAPHORE *)this;
  }
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", a2);
  return this;
}
