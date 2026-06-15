/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$0 @ 0x14005EEAB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::~shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>(a2 + 40);
}
