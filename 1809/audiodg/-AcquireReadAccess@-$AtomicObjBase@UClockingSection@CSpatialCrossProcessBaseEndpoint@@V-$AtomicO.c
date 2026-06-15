/*
 * XREFs of ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x14005D73C
 * Callers:
 *     ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14005DD40 (-GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x14005AEE4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@$0A@@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAA@AEBV?$weak_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@1@@Z @ 0x14005CF9C (--$-0V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@ut.c)
 *     ?Acquire@ReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005D5E8 (-Acquire@ReadAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$Atomic.c)
 */

__int64 __fastcall util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadAccess(
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
    v3 = std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>(
           v9,
           (_QWORD *)(a1 + 64));
    v4 = v3;
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 24) = -2147467259;
    *(_BYTE *)(a2 + 28) = 0;
    v5 = v3[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v3[1];
    }
    v8[0] = *v3;
    v8[1] = v5;
    util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadAccess::Acquire(
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
    *(_BYTE *)(a2 + 28) = 0;
  }
  return result;
}
