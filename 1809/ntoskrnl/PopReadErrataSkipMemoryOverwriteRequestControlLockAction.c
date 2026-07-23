/*
 * XREFs of PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x1409E03CC
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     EmClientRuleEvaluate @ 0x1405664A0 (EmClientRuleEvaluate.c)
 */

__int64 PopReadErrataSkipMemoryOverwriteRequestControlLockAction()
{
  __int64 result; // rax
  GUID *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+40h] [rbp+8h] BYREF
  GUID **v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = 16;
  v1 = &GUID_EM_RULE_SKIP_MEMORY_OVERWRITE_REQUEST_CONTROL_LOCK_ACTION;
  v3 = 1;
  v4 = &v1;
  PopErrataSkipMemoryOverwriteRequestControlLockAction = 0;
  result = EmClientRuleEvaluate(
             &GUID_EM_RULE_SKIP_MEMORY_OVERWRITE_REQUEST_CONTROL_LOCK_ACTION_QUERY,
             (__int64)&v4,
             1,
             &v3);
  if ( v3 == 2 )
    PopErrataSkipMemoryOverwriteRequestControlLockAction = 1;
  return result;
}
