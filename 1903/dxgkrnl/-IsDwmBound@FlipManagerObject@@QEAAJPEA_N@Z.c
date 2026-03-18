/*
 * XREFs of ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C0060490
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C000E840 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00602E4 (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_N1_KIPEAUFlipPropertyItem@@PEAUFlipManagerToke.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::IsDwmBound(FlipManagerObject *this, bool *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    *a2 = *((_QWORD *)this + 10) == 1LL;
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
