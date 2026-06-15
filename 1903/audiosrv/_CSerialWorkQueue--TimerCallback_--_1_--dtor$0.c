/*
 * XREFs of _CSerialWorkQueue::TimerCallback_::_1_::dtor$0 @ 0x180072CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::TimerCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(a2 + 72);
}
