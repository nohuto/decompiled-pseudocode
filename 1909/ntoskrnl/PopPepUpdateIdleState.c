/*
 * XREFs of PopPepUpdateIdleState @ 0x1400E0814
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x1400E06F0 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1400E0760 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x14017BCAC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14017BE60 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x1402F8C60 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402F8D44 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402F8E38 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402F92F0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepGetComponentPreferedIdleState @ 0x1400E0874 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x1400E26D0 (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1LL, (unsigned int)result);
  }
  return result;
}
