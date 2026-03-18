/*
 * XREFs of PopPepUpdateIdleState @ 0x1400FFF44
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x1400FFE20 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1400FFE90 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x140172194 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140172340 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x1402DC8C4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402DC9A8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402DCA9C (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DCF90 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1400FFCF8 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1400FFFA4 (PopPepGetComponentPreferedIdleState.c)
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
