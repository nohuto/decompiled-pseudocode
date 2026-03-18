/*
 * XREFs of ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0109608
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0020520 (HmgShareLockCheckIgnoreStockBit.c)
 *     EngLockSurface @ 0x1C0021210 (EngLockSurface.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0023880 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023910 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0023928 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     hdevEnumerate @ 0x1C003F2B0 (hdevEnumerate.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003F3D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C006A85C (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C0109BD0 (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C0109DCC (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned __int8 a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // r13
  signed __int64 v5; // rbp
  char v6; // r15
  __int64 v7; // rsi
  signed __int64 v8; // rdi
  char v9; // r14
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *PoolWithTag; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v11; // rcx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v12; // r14
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer ***v13; // rax
  volatile signed __int64 v14; // rax
  __int64 v15; // rbp
  NSInstrumentation::CPrioritizedWriterLock *v16; // rdi
  __int64 v17; // rax
  int v18; // ecx
  unsigned __int16 CurrentThreadId; // ax
  __int16 v20; // cx
  PVOID BackTrace[27]; // [rsp+30h] [rbp-D8h] BYREF

  v4 = this;
  v5 = _InterlockedIncrement64((volatile signed __int64 *)a2 + 5);
  v6 = 0;
  v7 = v5 / 1011;
  if ( v5 && v5 == 1011 * (v5 / 1011) )
  {
    --v7;
    v6 = 1;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 >= 0 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v8 = -v8;
  }
  if ( v8 != v7 )
  {
    do
    {
      KeWaitForSingleObject(*((PVOID *)a2 + 2), UserRequest, 0, 0, 0LL);
      v8 = *((_QWORD *)a2 + 4);
      if ( v8 >= 0 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        v8 = -v8;
      }
    }
    while ( v8 != v7 );
    v4 = this;
  }
  if ( v6 )
  {
    KeWaitForSingleObject(*((PVOID *)a2 + 3), UserRequest, 0, 0, 0LL);
    KeClearEvent(*((PRKEVENT *)a2 + 3));
    if ( !v9 )
    {
      PoolWithTag = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)ExAllocatePoolWithTag(PagedPoolSession, 0x1000uLL, 0x62497355u);
      if ( PoolWithTag )
      {
        v11 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
        if ( *v11 != a2 )
          goto LABEL_27;
        *(_QWORD *)PoolWithTag = a2;
        *((_QWORD *)PoolWithTag + 1) = v11;
        *v11 = PoolWithTag;
        *((_QWORD *)a2 + 1) = PoolWithTag;
      }
      else
      {
        *((_QWORD *)a2 + 4) = -v7;
      }
    }
    if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 == a2 )
    {
LABEL_24:
      _InterlockedExchange((volatile __int32 *)a2 + 12, 0);
      if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, ++v7, v8) )
        _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, -v7, -v8);
      KeSetEvent(*((PRKEVENT *)a2 + 2), 0, 0);
      goto LABEL_28;
    }
    v12 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
    if ( *v12 == a2 )
    {
      v13 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer ***)v12[1];
      if ( *v13 == v12 )
      {
        *((_QWORD *)a2 + 1) = v13;
        *v13 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2;
        memmove((char *)v12 + 52, (char *)a2 + 52, 0xFCCuLL);
        v14 = *(_QWORD *)a2;
        if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(*(_QWORD *)a2 + 8LL) == a2 )
        {
          *v12 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v14;
          v12[1] = a2;
          *(_QWORD *)(v14 + 8) = v12;
          *(_QWORD *)a2 = v12;
          goto LABEL_24;
        }
      }
    }
LABEL_27:
    __fastfail(3u);
  }
LABEL_28:
  v15 = v5 % 1011;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  v16 = (NSInstrumentation::CPrioritizedWriterLock *)*((_QWORD *)v4 + 4);
  v17 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
          v16,
          (struct NSInstrumentation::CBackTrace *)BackTrace);
  if ( v17
    || (v17 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
                v16,
                (struct NSInstrumentation::CBackTrace *)BackTrace)) != 0 )
  {
    v18 = *(_DWORD *)(v17 + 180);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)a2 + 4, -v7);
    LOWORD(v18) = -1;
  }
  *((_WORD *)a2 + 2 * v15 + 26) = (2 * v18) | *((_WORD *)a2 + 2 * v15 + 26) & 1;
  CurrentThreadId = (unsigned __int16)PsGetCurrentThreadId();
  v20 = *((_WORD *)a2 + 2 * v15 + 26);
  *((_WORD *)a2 + 2 * v15 + 27) = CurrentThreadId;
  *((_WORD *)a2 + 2 * v15 + 26) = a3 | v20 & 0xFFFE;
  if ( _InterlockedIncrement((volatile signed __int32 *)a2 + 12) == 1011 )
    KeSetEvent(*((PRKEVENT *)a2 + 3), 0, 0);
}
