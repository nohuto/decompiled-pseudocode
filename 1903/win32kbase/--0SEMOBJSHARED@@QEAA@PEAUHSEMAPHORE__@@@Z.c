/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005009C
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C004FFF4 (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C00A2620 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007A110 (EtwTraceGreLockAcquireSemaphoreShared.c)
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
