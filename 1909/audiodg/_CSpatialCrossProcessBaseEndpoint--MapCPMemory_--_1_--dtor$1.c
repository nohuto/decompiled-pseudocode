/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$1 @ 0x14005CE3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::~shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(a2 + 48);
}
