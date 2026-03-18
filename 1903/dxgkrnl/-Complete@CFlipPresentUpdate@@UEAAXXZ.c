/*
 * XREFs of ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0064220
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0061840 (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipPresentUpdate::Complete(CFlipPresentUpdate *this)
{
  PRKEVENT *v1; // rbx

  v1 = (PRKEVENT *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 5)) >= 0 )
  {
    CFlipManager::ProcessCompletedProducerPresentUpdate(v1 + 4, this);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 5));
  }
  ObfDereferenceObject(v1);
}
