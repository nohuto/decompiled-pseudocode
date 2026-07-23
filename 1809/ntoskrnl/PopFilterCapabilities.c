/*
 * XREFs of PopFilterCapabilities @ 0x1405B1968
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1402E4E1C (PopIdleArmAoAcDozeS4Timer.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopPolicySystemIdle @ 0x1405B14E0 (PopPolicySystemIdle.c)
 *     PopVerifyPowerActionPolicy @ 0x14071AC78 (PopVerifyPowerActionPolicy.c)
 *     PopInitSIdle @ 0x14071D85C (PopInitSIdle.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EmClientQueryRuleState @ 0x1405663B0 (EmClientQueryRuleState.c)
 *     PopLogDisabledSleepReason @ 0x1405B1874 (PopLogDisabledSleepReason.c)
 *     PopCheckDisabledState @ 0x1405B1AB4 (PopCheckDisabledState.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1405B1AE4 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1405B1B64 (IoGetLegacyVetoList.c)
 *     PopLogSleepDisabled @ 0x14070BCD4 (PopLogSleepDisabled.c)
 */

__int64 __fastcall PopFilterCapabilities(__int64 a1, __int64 a2)
{
  char v3; // di
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r9d
  char v20; // al
  __int64 v22; // r9
  char *v23; // rcx
  __int64 v24; // rax
  int v25; // [rsp+40h] [rbp+8h] BYREF
  int v26; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 72);
  if ( (int)IoGetLegacyVetoList(&P, &v26) < 0 )
    goto LABEL_6;
  if ( v26 )
  {
    v3 = 1;
    v22 = 0LL;
    v23 = (char *)P;
    if ( *(_WORD *)P )
    {
      do
      {
        v24 = -1LL;
        do
          ++v24;
        while ( *(_WORD *)&v23[2 * v24] );
        v22 += 2 * v24 + 2;
        v23 = (char *)P + v22;
      }
      while ( *(_WORD *)((char *)P + v22) );
    }
    PopLogSleepDisabled(4LL, 31LL, P, v22 + 2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !v3 )
LABEL_6:
    PopRemoveReasonRecordByReasonCode(4LL);
  v25 = 1;
  EmClientQueryRuleState(EM_RULE_DISABLE_FASTS4_GUID, &v25);
  if ( v25 == 2 )
    PopLogSleepDisabled(7LL, 16LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(7LL);
  if ( byte_14041919D )
    PopLogSleepDisabled(14LL, 7LL, 0LL, 0LL);
  else
    PopRemoveReasonRecordByReasonCode(14LL);
  v4 = PopLogDisabledSleepReason();
  if ( (unsigned __int8)PopCheckDisabledState(0LL, v5, v6, v4) )
    *(_BYTE *)(a2 + 3) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(1LL, v7, v8, v9) )
    *(_BYTE *)(a2 + 4) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(2LL, v10, v11, v12) )
    *(_BYTE *)(a2 + 5) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(3LL, v13, v14, v15) )
    *(_BYTE *)(a2 + 6) = 0;
  if ( (unsigned __int8)PopCheckDisabledState(6LL, v16, v17, v18) )
    *(_BYTE *)(a2 + 17) = 0;
  v20 = *(_BYTE *)(a2 + 6);
  if ( !*(_BYTE *)(a2 + 5) || !v20 )
  {
    *(_BYTE *)(a2 + 17) = 0;
    if ( !v20 )
      *(_BYTE *)(a2 + 18) = 0;
  }
  return v19;
}
