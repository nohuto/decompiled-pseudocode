/*
 * XREFs of PopFilterCapabilities @ 0x1406A2194
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402FC0EC (PopCaptureSleepStudyStatistics.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140303EBC (PopIdleArmAoAcDozeS4Timer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPolicySystemIdle @ 0x1406A1D00 (PopPolicySystemIdle.c)
 *     PopVerifyPowerActionPolicy @ 0x140742F14 (PopVerifyPowerActionPolicy.c)
 *     PopInitSIdle @ 0x140745314 (PopInitSIdle.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1408ABB18 (PoTtmInitiatePowerStateTransition.c)
 *     PopUpdateSystemIdleContext @ 0x1408B34D8 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x1405957C0 (EmClientQueryRuleState.c)
 *     PopLogDisabledSleepReason @ 0x1406A209C (PopLogDisabledSleepReason.c)
 *     PopCheckDisabledState @ 0x1406A22F4 (PopCheckDisabledState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1406A2324 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1406A23A4 (IoGetLegacyVetoList.c)
 *     PopLogSleepDisabled @ 0x140736600 (PopLogSleepDisabled.c)
 */

__int64 __fastcall PopFilterCapabilities(__int64 a1, __int64 a2)
{
  char v3; // di
  char v4; // r9
  char v5; // r10
  unsigned int v6; // r11d
  __int64 v8; // r9
  char *v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  if ( (int)IoGetLegacyVetoList(&P, &v12) < 0 )
    goto LABEL_6;
  if ( v12 )
  {
    v3 = 1;
    v8 = 0LL;
    v9 = (char *)P;
    if ( *(_WORD *)P )
    {
      do
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)&v9[2 * v10] );
        v8 += 2 * v10 + 2;
        v9 = (char *)P + v8;
      }
      while ( *(_WORD *)((char *)P + v8) );
    }
    PopLogSleepDisabled(4LL, 31LL, P, v8 + 2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !v3 )
LABEL_6:
    PopRemoveReasonRecordByReasonCode(4LL);
  v11 = 1;
  EmClientQueryRuleState(EM_RULE_DISABLE_FASTS4_GUID, &v11);
  if ( v11 == 2 )
    PopLogSleepDisabled(7LL, 16LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(7LL);
  if ( byte_140443ADD )
    PopLogSleepDisabled(14LL, 7LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(14LL);
  PopLogDisabledSleepReason();
  if ( (unsigned __int8)PopCheckDisabledState(0LL) )
    *(_BYTE *)(a2 + 3) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(1LL) )
    *(_BYTE *)(a2 + 4) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(2LL) )
    *(_BYTE *)(a2 + 5) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(3LL) )
    *(_BYTE *)(a2 + 6) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(6LL) )
    *(_BYTE *)(a2 + 17) = 0;
  if ( !*(_BYTE *)(a2 + 5) || (v5 = v4) == 0 )
  {
    *(_BYTE *)(a2 + 17) = 0;
    if ( !v5 )
      *(_BYTE *)(a2 + 18) = 0;
  }
  return v6;
}
