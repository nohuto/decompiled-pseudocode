/*
 * XREFs of ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00765A0
 * Callers:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00764E8 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     Win32FreeToPagedLookasideListImpl @ 0x1C00F22B0 (Win32FreeToPagedLookasideListImpl.c)
 *     Win32FreePoolImpl @ 0x1C00F2660 (Win32FreePoolImpl.c)
 *     ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1C012EFA0 (-_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0138AA8 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C02D31D8 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02D4344 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C01139D8 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Remove(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  char v6; // si
  int v7; // eax
  char v8; // di
  unsigned __int64 v9; // rdx
  unsigned int v10; // r9d
  unsigned int v11; // r10d
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r11
  __int64 v15; // r8

  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  v7 = *((_DWORD *)this + 7);
  v8 = 0;
  while ( v7 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
    v7 = *((_DWORD *)this + 7);
  }
  if ( *((_DWORD *)this + 12)
    && ((v9 = 0x9E3779B97F34A803uLL * (a2 >> 4), (*((_BYTE *)this + 52) & 1) == 0) || *(_QWORD *)a2 == v9) )
  {
    v10 = *((_DWORD *)this + 10);
    v11 = 0;
    v12 = v9 >> (64 - *((_BYTE *)this + 44));
    while ( 1 )
    {
      v13 = v12;
      if ( (unsigned int)v12 < v10 )
        break;
LABEL_10:
      ++v11;
      v10 = v12;
      LODWORD(v12) = 0;
      if ( v11 >= 2 )
        goto LABEL_14;
    }
    v14 = *((_QWORD *)this + 4);
    while ( *(_QWORD *)(v14 + 16LL * v13) != a2 )
    {
      if ( ++v13 >= v10 )
        goto LABEL_10;
    }
    v15 = 2LL * v13;
    *a3 = *(void **)(v14 + 16LL * v13 + 8);
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v15) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v15 + 8) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)this + 12);
  }
  else
  {
    v6 = 0;
  }
  v8 = v6;
LABEL_14:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v8;
}
