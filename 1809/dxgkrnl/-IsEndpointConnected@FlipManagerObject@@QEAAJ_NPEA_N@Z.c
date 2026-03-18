/*
 * XREFs of ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C0057788
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00148E0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     NtFlipObjectQueryEndpointConnected @ 0x1C00588F0 (NtFlipObjectQueryEndpointConnected.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::IsEndpointConnected(FlipManagerObject *this, char a2, bool *a3)
{
  int v6; // ebx
  char *v7; // rdx

  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v7 = (char *)this + 72;
    if ( !a2 )
      v7 = (char *)this + 80;
    *a3 = *(_QWORD *)v7 != 0LL;
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v6;
}
