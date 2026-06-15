/*
 * XREFs of ?_Destroy@?$_Ref_count@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@EEAAXXZ @ 0x14005F6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::_Destroy(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 16);
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
