/*
 * XREFs of ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C02D36B0
 * Callers:
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02D32DC (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00EDD28 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ @ 0x1C02D331C (-ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ.c)
 *     ?Lookup@CBackTraceBucket@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@_K@Z @ 0x1C02D37C4 (-Lookup@CBackTraceBucket@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@_K@.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
        NSInstrumentation::CPrioritizedWriterLock *this,
        const __m128i *a2)
{
  int v4; // eax
  struct NSInstrumentation::CBackTraceStorageUnit *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  NSInstrumentation::CBackTraceBucket *v12; // rcx

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
  ExAcquirePushLockSharedEx(v9, 0LL);
  v12 = *(NSInstrumentation::CBackTraceBucket **)(v9 + 8);
  if ( v12 )
    v5 = NSInstrumentation::CBackTraceBucket::Lookup(v12, (const struct NSInstrumentation::CBackTrace *const)a2, v8);
  ExReleasePushLockSharedEx(v9, 0LL, v10, v11);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
