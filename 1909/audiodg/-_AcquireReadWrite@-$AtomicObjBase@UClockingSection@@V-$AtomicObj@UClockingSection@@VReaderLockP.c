/*
 * XREFs of ?_AcquireReadWrite@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEAUClockingSection@@@Z @ 0x14005D540
 * Callers:
 *     ?Acquire@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B4F4 (-Acquire@ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReade.c)
 * Callees:
 *     ?GetCopyIndexes@AtomicObjState@util@@QEAA_NAEAUatomicStorage@12@AEAI1@Z @ 0x14005BDC4 (-GetCopyIndexes@AtomicObjState@util@@QEAA_NAEAUatomicStorage@12@AEAI1@Z.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireReadWrite(
        struct util::AtomicObjState::atomicStorage **a1,
        _QWORD *a2)
{
  unsigned int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  if ( util::AtomicObjState::GetCopyIndexes((util::AtomicObjState *)a1, a1[7], &v9, &v10) )
  {
    v5 = *(_QWORD *)(v4 + 56);
    v6 = 100LL * v9;
    v7 = 100LL * v10;
    *(_OWORD *)(v6 + v5 + 4) = *(_OWORD *)(v7 + v5 + 4);
    *(_OWORD *)(v6 + v5 + 20) = *(_OWORD *)(v7 + v5 + 20);
    *(_OWORD *)(v6 + v5 + 36) = *(_OWORD *)(v7 + v5 + 36);
    *(_OWORD *)(v6 + v5 + 52) = *(_OWORD *)(v7 + v5 + 52);
    *(_OWORD *)(v6 + v5 + 68) = *(_OWORD *)(v7 + v5 + 68);
    *(_OWORD *)(v6 + v5 + 84) = *(_OWORD *)(v7 + v5 + 84);
    *(_DWORD *)(v6 + v5 + 100) = *(_DWORD *)(v7 + v5 + 100);
    *a2 = *(_QWORD *)(v4 + 56) + v6 + 4;
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
