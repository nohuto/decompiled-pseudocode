/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x14069DBA8
 * Callers:
 *     PopUmpoProcessMessage @ 0x14069DA6C (PopUmpoProcessMessage.c)
 * Callees:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400D88B0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14015E1F8 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14030396C (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PopSetNewPolicyValue @ 0x14069DC08 (PopSetNewPolicyValue.c)
 *     PopPowerRequestOverrideInitialize @ 0x14078C2F0 (PopPowerRequestOverrideInitialize.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) && *(_DWORD *)(a1 + 12) == 18 )
        PfPowerActionNotify(5, 1LL, 0);
      break;
    case 8:
      PopProcessPowerRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      PopPowerRequestOverrideInitialize();
      break;
    case 0xE:
      v2 = *(_DWORD *)(a1 + 8);
      PopAcquirePolicyLock();
      dword_140442F30 = v2;
      if ( byte_140442F51 )
      {
        PopIdleCancelAoAcDozeS4Timer(4u);
        PopIdleArmAoAcDozeS4Timer();
      }
      PopReleasePolicyLock();
      break;
  }
  return 0LL;
}
