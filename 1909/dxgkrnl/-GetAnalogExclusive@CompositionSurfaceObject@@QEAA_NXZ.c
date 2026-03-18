/*
 * XREFs of ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C000FF54
 * Callers:
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C000FED0 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00123F0 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

char __fastcall CompositionSurfaceObject::GetAnalogExclusive(CompositionSurfaceObject *this)
{
  CPushLock *v1; // rsi
  char v3; // di
  char v4; // bl

  v1 = (CompositionSurfaceObject *)((char *)this + 48);
  v3 = 0;
  if ( (int)CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48)) >= 0 )
  {
    v4 = *((_BYTE *)this + 128);
    CPushLock::ReleaseLock(v1);
    return v4 != 0;
  }
  return v3;
}
