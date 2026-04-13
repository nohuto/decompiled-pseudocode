/*
 * XREFs of _Init_thread_abort @ 0x1800CAEC8
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$11 @ 0x1800D1C88 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_abort(_DWORD *a1)
{
  AcquireSRWLockExclusive(&stru_18018EC30);
  *a1 = 0;
  ReleaseSRWLockExclusive(&stru_18018EC30);
  WakeAllConditionVariable(&ConditionVariable);
}
