/*
 * XREFs of ??$Enumerate@P6AXPEAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02D31C8
 * Callers:
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C02D2B48 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00EDD28 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?WriteBackTraceDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z @ 0x1C02D3A90 (-WriteBackTraceDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z.c)
 */

void __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Enumerate<void (*)(void *,void *,void *)>(
        NSInstrumentation::CPrioritizedWriterLock *this,
        __int64 a2,
        void *a3)
{
  int i; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int j; // ebp
  __int64 v9; // rsi
  __int64 v10; // r8
  void *v11; // r9
  __int64 *v12; // rdi

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL, v6, v7);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  for ( j = 0; j < *((_DWORD *)this + 8); ++j )
  {
    v9 = *((_QWORD *)this + 6) + 16LL * j;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v9, 0LL);
    v12 = *(__int64 **)(v9 + 8);
    if ( v12 )
    {
      while ( 1 )
      {
        v12 = (__int64 *)*v12;
        if ( !v12 )
          break;
        NSInstrumentation::WriteBackTraceDumpBufferCallback((NSInstrumentation *)v12, v12 + 2, a3, v11);
      }
    }
    ExReleasePushLockSharedEx(v9, 0LL, v10, v11);
    KeLeaveCriticalRegion();
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
}
