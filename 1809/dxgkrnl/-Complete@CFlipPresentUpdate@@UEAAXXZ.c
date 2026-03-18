/*
 * XREFs of ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C005CFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005A81C (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipPresentUpdate::Complete(CFlipPresentUpdate *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40)) >= 0 )
  {
    CFlipManager::ProcessCompletedProducerPresentUpdate((CFlipManager *)(v1 + 32), this);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
  ObfDereferenceObject((PVOID)v1);
}
