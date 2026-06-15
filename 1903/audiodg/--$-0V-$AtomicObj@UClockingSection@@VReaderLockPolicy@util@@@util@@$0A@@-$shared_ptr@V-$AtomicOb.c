/*
 * XREFs of ??$?0V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@$0A@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@AEBV?$weak_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@1@@Z @ 0x14005AE14
 * Callers:
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x14005B65C (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x14005B748 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x140017D57 (_CxxThrowException_0.c)
 */

_QWORD *__fastcall std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  signed __int32 v3; // eax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( !v2 )
  {
LABEL_2:
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v3 = *(_DWORD *)(v2 + 8);
    if ( !v3 )
      goto LABEL_2;
  }
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) );
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
