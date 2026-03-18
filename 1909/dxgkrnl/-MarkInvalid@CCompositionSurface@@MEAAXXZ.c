/*
 * XREFs of ?MarkInvalid@CCompositionSurface@@MEAAXXZ @ 0x1C0010330
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0012334 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurface::MarkInvalid(CCompositionSurface *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionSurface *))this)(this) )
  {
    CPushLock::AcquireLockExclusive((CCompositionSurface *)((char *)this + 8));
    *((_BYTE *)this + 32) = 0;
    CPushLock::ReleaseLock((CCompositionSurface *)((char *)this + 8));
  }
}
