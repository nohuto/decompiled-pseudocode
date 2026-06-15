/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14005EEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@XZ @ 0x14005D3E0 (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x14005D828 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$At.c)
 *     ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAAXXZ @ 0x14005DA14 (-Commit@ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$At.c)
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005F314 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct AE_CURRENT_POSITION *a2,
        int a3)
{
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  if ( (a2->Flag & 4) == 0 && a2->Flag )
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 110) + 8LL), a2->hnsQPCPosition);
  if ( CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
         this,
         (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v10) )
  {
    v7 = v10;
    if ( (v10 & 2) != 0 )
    {
      util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
        *(_QWORD *)(v6 + 312),
        (__int64)v9);
      v8 = v9[0];
      if ( v9[0] )
      {
        *(_OWORD *)v9[0] = *(_OWORD *)&a2->u64DevicePosition;
        *(_OWORD *)(v8 + 16) = *(_OWORD *)&a2->u64PaddingFrames;
        *(_QWORD *)(v8 + 32) = *(_QWORD *)&a2->f32FramesPerSecond;
        if ( (v7 & 0x10) != 0 )
        {
          *(_QWORD *)(v8 + 88) = 0LL;
          *(_QWORD *)(v8 + 80) = 0LL;
          _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 110) + 72LL), 0xFFFFFFEF);
          v7 = v10;
          v8 = v9[0];
        }
        if ( (v7 & 8) == 0 )
        {
          *(_QWORD *)(v8 + 88) = *(_QWORD *)(v8 + 80);
          *(_OWORD *)(v8 + 40) = *(_OWORD *)&a2->u64DevicePosition;
          *(_OWORD *)(v8 + 56) = *(_OWORD *)&a2->u64PaddingFrames;
          *(_QWORD *)(v8 + 72) = *(_QWORD *)&a2->f32FramesPerSecond;
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 110) + 72LL), 0xCu);
          v8 = v9[0];
        }
        *(_DWORD *)(v8 + 96) = a3;
        util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(v9);
      }
      util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(v9);
    }
  }
}
