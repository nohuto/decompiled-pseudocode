/*
 * XREFs of ??1?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@XZ @ 0x140057AFC
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x1400574CB (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 *     _util::MakeAtomicObj_ClockingSection_util::ReaderLockPolicy_util::AtomicObjBase_ClockingSection_util::AtomicObj_ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::Storage__::_1_::dtor$0 @ 0x14005AEC5 (_util--MakeAtomicObj_ClockingSection_util--ReaderLockPolicy_util--AtomicObjBase_ClockingSection_.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$2 @ 0x14005CAEE (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$2.c)
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$1 @ 0x14005CE3C (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140058F54 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::~shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v1);
    }
  }
}
