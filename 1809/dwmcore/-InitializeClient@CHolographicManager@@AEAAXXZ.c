/*
 * XREFs of ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x18020B47C
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x18020A548 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x18020BC10 (-SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x18020CE14 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::InitializeClient(CHolographicManager *this)
{
  unsigned int i; // ebx
  __int64 v3; // rdx
  unsigned int j; // ebx
  __int64 v5; // rdx
  _QWORD *k; // rbx
  struct IUnknown *v7; // rsi
  unsigned int m; // esi

  AcquireSRWLockShared((PSRWLOCK)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 28); ++i )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * i);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      6u,
      (struct IUnknown *)((v3 + 64) & -(__int64)(v3 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( j = 0; j < *((_DWORD *)this + 50); ++j )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * j);
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      0x18u,
      (struct IUnknown *)((v5 + 56) & -(__int64)(v5 != 0)),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( k = (_QWORD *)*((_QWORD *)this + 15); k != *((_QWORD **)this + 16); ++k )
  {
    v7 = (struct IUnknown *)((*k + 64LL) & -(__int64)(*k != 0LL));
    CHolographicInteropTaskQueue::PostMessageW(*((CHolographicInteropTaskQueue **)this + 5), 2u, v7, 0LL, 0LL, 0LL, 0LL);
    CHolographicInteropTaskQueue::PostMessageW(*((CHolographicInteropTaskQueue **)this + 5), 1u, v7, 0LL, 0LL, 0LL, 0LL);
  }
  for ( m = 0; m < *((_DWORD *)this + 42); ++m )
  {
    CHolographicInteropTaskQueue::PostMessageW(
      *((CHolographicInteropTaskQueue **)this + 5),
      0xCu,
      *(struct IUnknown **)(*((_QWORD *)this + 18) + 8LL * m),
      0LL,
      0LL,
      0LL,
      0LL);
    CHolographicExclusiveView::PublishPresentData(*(CHolographicExclusiveView **)(*((_QWORD *)this + 18) + 8LL * m));
  }
  CHolographicManager::SetActiveExclusiveView(this, *((_DWORD *)this + 18));
  CHolographicInteropTaskQueue::PostMessageW(
    *((CHolographicInteropTaskQueue **)this + 5),
    0x1Bu,
    0LL,
    (void *)*((unsigned __int8 *)this + 217),
    0LL,
    0LL,
    0LL);
  ReleaseSRWLockShared((PSRWLOCK)this + 10);
}
