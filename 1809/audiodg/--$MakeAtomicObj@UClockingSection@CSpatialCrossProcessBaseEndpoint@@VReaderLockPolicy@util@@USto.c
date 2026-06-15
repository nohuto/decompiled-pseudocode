/*
 * XREFs of ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005D010
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005E7E8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005EC04 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400055A0 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x14005AEE4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$reset@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@Z @ 0x14005D25C (--$reset@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall util::MakeAtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
        _QWORD *a1,
        __int64 a2)
{
  char *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  std::_Ref_count_base *v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h]

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2 )
  {
    v4 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      *(_QWORD *)v4 = &util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::`vftable';
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 8));
      *((_DWORD *)v4 + 12) = 0;
      *((_DWORD *)v4 + 13) = 0;
      *((_QWORD *)v4 + 7) = a2;
      *((_QWORD *)v4 + 8) = 0LL;
      *((_QWORD *)v4 + 9) = 0LL;
      *(_QWORD *)v4 = &util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::reset<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>(
      a1,
      v4);
    if ( *a1 )
    {
      v5 = (volatile signed __int32 *)a1[1];
      if ( v5 )
      {
        _InterlockedIncrement(v5 + 3);
        v5 = (volatile signed __int32 *)a1[1];
      }
      v6 = *a1;
      v10 = *a1;
      v7 = (_QWORD *)(*a1 + 64LL);
      if ( v5 )
      {
        _InterlockedIncrement(v5 + 3);
        v6 = v10;
      }
      *v7 = v6;
      v8 = (std::_Ref_count_base *)v7[1];
      v7[1] = v5;
      if ( v8 )
        std::_Ref_count_base::_Decwref(v8);
      if ( v5 )
        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v5);
    }
  }
  return a1;
}
