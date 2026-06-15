/*
 * XREFs of _AudioJournal::AudioJournal_::_1_::dtor$2 @ 0x180071D84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioJournal::AudioJournal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<_RecurringTask>::~unique_ptr<_RecurringTask>(*(_QWORD *)(a2 + 64) + 216LL);
}
