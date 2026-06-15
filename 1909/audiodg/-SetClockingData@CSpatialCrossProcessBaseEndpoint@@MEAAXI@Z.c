/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x14005CF90
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x14005B248 (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x14005B688 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 *     ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAXXZ @ 0x14005B988 (-Commit@ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(CSpatialCrossProcessBaseEndpoint *this, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
      *((_QWORD *)this + 42),
      (__int64)v6);
    v3 = v6[0];
    if ( v6[0] )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 112) + 40LL);
      *(_QWORD *)(v6[0] + 80LL) += *(unsigned int *)(v6[0] + 96LL);
      v5 = *(_QWORD *)(v3 + 80);
      if ( v5 > v4 )
        v5 = v4;
      *(_QWORD *)(v3 + 80) = v5;
      util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(v6);
    }
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(v6);
  }
}
