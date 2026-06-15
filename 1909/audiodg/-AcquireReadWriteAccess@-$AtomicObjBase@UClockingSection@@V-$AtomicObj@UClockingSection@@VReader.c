/*
 * XREFs of ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x14005B688
 * Callers:
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14005CE60 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z.c)
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x14005CF90 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140058F54 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@$0A@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@AEBV?$weak_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@1@@Z @ 0x14005AD54 (--$-0V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@$0A@@-$shared_ptr@V-$AtomicOb.c)
 *     ?Acquire@ReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B4F4 (-Acquire@ReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReade.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rsi
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-20h] BYREF

  try
  {
    v3 = std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
           v9,
           (_QWORD *)(a1 + 64));
    v4 = v3;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 24) = -2147467259;
    v5 = v3[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v3[1];
    }
    v8[0] = *v3;
    v8[1] = v5;
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Acquire(
      a2,
      v8);
    v6 = (volatile signed __int32 *)v4[1];
    if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
    }
    result = a2;
  }
  catch ( std::bad_weak_ptr )
  {
    result = a2;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 24) = -2147467259;
  }
  return result;
}
