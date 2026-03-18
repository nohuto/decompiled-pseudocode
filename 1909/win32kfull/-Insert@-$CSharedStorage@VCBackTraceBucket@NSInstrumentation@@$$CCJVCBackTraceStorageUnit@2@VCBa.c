/*
 * XREFs of ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C02D34B4
 * Callers:
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02D32DC (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00EDD28 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ @ 0x1C02D331C (-ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ.c)
 *     ?Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1C02D35FC (-Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
        NSInstrumentation::CPrioritizedWriterLock *this,
        const __m128i *a2)
{
  int v4; // eax
  struct NSInstrumentation::CBackTraceStorageUnit *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  NSInstrumentation::CBackTraceBucket *PoolWithTag; // rax
  __int64 v11; // rbp

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0LL;
  while ( v4 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL, v6, v7);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v4 = *((_DWORD *)this + 7);
  }
  v8 = NSInstrumentation::CBackTrace::ComputeHash(a2);
  v9 = *((_QWORD *)this + 6) + 16 * (v8 % *((unsigned int *)this + 8));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  PoolWithTag = *(NSInstrumentation::CBackTraceBucket **)(v9 + 8);
  if ( PoolWithTag )
    goto LABEL_7;
  v11 = *((_QWORD *)this + 5);
  PoolWithTag = (NSInstrumentation::CBackTraceBucket *)ExAllocatePoolWithTag(PagedPoolSession, 0x10uLL, 0x31497355u);
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = v11;
    ++*((_DWORD *)this + 9);
    *(_QWORD *)(v9 + 8) = PoolWithTag;
LABEL_7:
    v5 = NSInstrumentation::CBackTraceBucket::Insert(
           PoolWithTag,
           v8,
           (const struct NSInstrumentation::CBackTrace *const)a2);
  }
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
