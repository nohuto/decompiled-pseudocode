/*
 * XREFs of ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C001D6F0
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C000F810 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0017DD0 (-Confirm@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C001D784 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::ConfirmIndependentFlipEntry(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  int v11; // ebx

  v11 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 48));
  if ( v11 >= 0 )
  {
    CCompositionSurface::ConfirmIndependentFlipEntry(
      (CompositionSurfaceObject *)((char *)this + 40),
      a2,
      a3,
      a4,
      a5,
      a6,
      a7);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v11;
}
