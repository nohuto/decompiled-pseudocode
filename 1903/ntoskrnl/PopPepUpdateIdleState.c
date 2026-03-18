/*
 * XREFs of PopPepUpdateIdleState @ 0x1400B0724
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x1400B0600 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1400B0670 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepUpdateConstraints @ 0x14017B5BC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14017B770 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x1402F91B0 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1402F9294 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1402F9388 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402F9840 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepGetComponentPreferedIdleState @ 0x1400B0784 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x1400B25E8 (PopPepTriggerActivity.c)
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
