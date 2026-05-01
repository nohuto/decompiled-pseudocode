/*
 * XREFs of _WindowEventDispatcher::AppViewRemoved_::_1_::dtor$3 @ 0x1800AB610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewRemoved_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::shared_ptr<PeoplePaneViewInfo>::~shared_ptr<PeoplePaneViewInfo>(a2 + 64);
}
