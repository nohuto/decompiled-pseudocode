/*
 * XREFs of PopPepUpdateIdleState @ 0x1400FFFE4
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x1400FFEC0 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1400FFF30 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x1401722B4 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140172460 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x1402DCBB4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402DCC98 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402DCD8C (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DD280 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1400FFD98 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140100044 (PopPepGetComponentPreferedIdleState.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1, result);
  }
  return result;
}
