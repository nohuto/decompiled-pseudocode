/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C010A100
 * Callers:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C0109478 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C0109318 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C010A308 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C010A538 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C010A63C (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

bool __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  int i; // eax
  int inserted; // edi
  bool v8; // zf
  bool v9; // al

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( inserted == 2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this, 0LL);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 7);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement((volatile signed __int32 *)this + 7);
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
LABEL_17:
    v8 = inserted == 1;
    return !v8;
  }
  v8 = inserted == 1;
  if ( inserted == 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this, 0LL);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 7);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    v9 = NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement((volatile signed __int32 *)this + 7);
    if ( !v9 )
    {
      ExReleasePushLockExclusiveEx(this, 0LL);
      KeLeaveCriticalRegion();
      return 0;
    }
    ExReleasePushLockExclusiveEx(this, 0LL);
    while ( 1 )
    {
      KeLeaveCriticalRegion();
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      if ( !*((_DWORD *)this + 7) )
        break;
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(this, 0LL);
      ExReleasePushLockSharedEx(this, 0LL);
    }
    inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    goto LABEL_17;
  }
  return !v8;
}
