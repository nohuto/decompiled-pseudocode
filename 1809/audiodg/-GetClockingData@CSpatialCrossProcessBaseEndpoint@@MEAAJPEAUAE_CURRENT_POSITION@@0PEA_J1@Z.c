/*
 * XREFs of ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14005DD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@XZ @ 0x14005D360 (--1ReadAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicObj@UC.c)
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x14005D73C (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x14005F314 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 *a4,
        __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+28h] [rbp-30h] BYREF

  v8 = -2005139387;
  if ( CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
         this,
         (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v14) )
  {
    util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadAccess(
      *(_QWORD *)(v9 + 312),
      (__int64)v15);
    v10 = v15[0];
    if ( v15[0] )
    {
      v11 = v14 & 0x10;
      *(_OWORD *)&a2->u64DevicePosition = *(_OWORD *)(v15[0] + 40LL);
      *(_OWORD *)&a2->u64PaddingFrames = *(_OWORD *)(v10 + 56);
      *(_QWORD *)&a2->f32FramesPerSecond = *(_QWORD *)(v10 + 72);
      *(_OWORD *)&a3->u64DevicePosition = *(_OWORD *)v10;
      *(_OWORD *)&a3->u64PaddingFrames = *(_OWORD *)(v10 + 16);
      *(_QWORD *)&a3->f32FramesPerSecond = *(_QWORD *)(v10 + 32);
      if ( v11 )
      {
        *a4 = 0LL;
        v12 = 0LL;
      }
      else
      {
        *a4 = *(_QWORD *)(v10 + 88);
        v12 = *(_QWORD *)(v10 + 80);
      }
      v8 = 0;
      *a5 = v12;
    }
    util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadAccess::~ReadAccess((__int64)v15);
  }
  return v8;
}
