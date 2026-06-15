/*
 * XREFs of ?_AcquireRead@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEBUClockingSection@@AEA_N@Z @ 0x14005D5A0
 * Callers:
 *     ?Acquire@ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B508 (-Acquire@ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLock.c)
 * Callees:
 *     ?GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z @ 0x14005C70C (-GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireRead(
        __int64 a1,
        _QWORD *a2,
        bool *a3)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  *a2 = *(_QWORD *)(a1 + 56)
      + 4LL
      + 100LL
      * (unsigned int)util::AtomicObjState::GetReadIndex(
                        (util::AtomicObjState *)(a1 + 48),
                        *(struct util::AtomicObjState::atomicStorage **)(a1 + 56),
                        a3);
  return 0LL;
}
