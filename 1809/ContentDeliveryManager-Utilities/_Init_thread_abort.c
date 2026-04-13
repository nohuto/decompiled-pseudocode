/*
 * XREFs of _Init_thread_abort @ 0x1800C6F38
 * Callers:
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::dtor$11 @ 0x1800CDB2E (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_abort(_DWORD *a1)
{
  AcquireSRWLockExclusive(&stru_180184BC0);
  *a1 = 0;
  ReleaseSRWLockExclusive(&stru_180184BC0);
  WakeAllConditionVariable(&ConditionVariable);
}
