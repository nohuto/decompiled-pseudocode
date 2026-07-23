/*
 * XREFs of PopPepTryPowerUpComponent @ 0x140100130
 * Callers:
 *     PopPepTriggerComponentActivatingActivity @ 0x1400FFEC0 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepTriggerComponentIdleStateChangeActivity @ 0x140177750 (PopPepTriggerComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1400FFD98 (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepTryPowerUpComponent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 4);
  if ( (result & 2) == 0 )
  {
    *(_DWORD *)(a2 + 4) = result | 2;
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 140));
    if ( (_DWORD)result == 1 && !*(_BYTE *)(a1 + 136) )
    {
      result = *(_QWORD *)(a1 + 72);
      if ( !*(_DWORD *)result )
        return PopPepTriggerActivity(a1, 0LL, 0, 0);
    }
  }
  return result;
}
