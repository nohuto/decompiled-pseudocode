/*
 * XREFs of PopNetInitialize @ 0x140A061C0
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x14018B924 (PopInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x14061ACF0 (RtlLengthRequiredSid.c)
 *     ExSubscribeWnfStateChange @ 0x14063F220 (ExSubscribeWnfStateChange.c)
 *     RtlInitializeSid @ 0x1406810A0 (RtlInitializeSid.c)
 *     PopNetSetConnectivityConstraint @ 0x14075AEE4 (PopNetSetConnectivityConstraint.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x140784824 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetPublishWnfStateUpdate @ 0x140784978 (PopNetPublishWnfStateUpdate.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  int v1; // ecx
  NTSTATUS v2; // edi
  _DWORD *v3; // rbx
  ULONG v5; // edi
  _DWORD *PoolWithTag; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  int ExplicitScope; // [rsp+20h] [rbp-28h]
  int ExplicitScopea; // [rsp+20h] [rbp-28h]
  LOGICAL CheckStamp; // [rsp+30h] [rbp-18h]
  LOGICAL CheckStampa; // [rsp+30h] [rbp-18h]
  char Buffer; // [rsp+50h] [rbp+8h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Buffer = 0;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      if ( PopNetDeferLogRequest )
        PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
      if ( PopEnforceDisconnectedStandby )
      {
        v1 = 2;
      }
      else
      {
        if ( PopNetStandbyStateMask )
        {
LABEL_10:
          ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
          if ( PopPlatformAoAc && !PopEnforceDisconnectedStandby )
            ExSubscribeWnfStateChange(
              (int)&IdentifierAuthority,
              (int)&WNF_SEB_SYSTEM_LPE,
              1,
              0,
              (__int64)PopNetWnfLowPowerEpochCallback,
              0LL);
          goto LABEL_11;
        }
        if ( PopPlatformAoAc )
        {
          if ( !PopNetStandbyStatePublished && !PopNetStandbyState )
            PopNetPublishWnfStateUpdate(1);
          goto LABEL_10;
        }
        v1 = 6;
      }
      PopNetSetConnectivityConstraint(v1);
      goto LABEL_10;
    }
LABEL_11:
    v2 = 0;
    v3 = 0LL;
    goto LABEL_12;
  }
  v5 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x74654E50u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, v5);
  v2 = RtlInitializeSid(v3, &IdentifierAuthority, 6u);
  if ( v2 >= 0 )
  {
    v3[2] = 80;
    v3[3] = 1988685059;
    v3[4] = 1921232356;
    v3[5] = 378231328;
    v3[6] = -1590824699;
    v3[7] = 890457928;
    PopNetBIServiceSid = v3;
    PopInitializeIRTimer(
      (__int64)&PopNetEvaluationTimer,
      (__int64)PopNetEvaluationTimerCallback,
      v7,
      (__int64)PopNetEvaluationWorkerCallback,
      ExplicitScope,
      0,
      CheckStamp);
    PopInitializeIRTimer(
      (__int64)&PopNetRefreshTimer,
      (__int64)PopNetRefreshTimerCallback,
      v8,
      (__int64)PopNetRefreshTimerWorkerCallback,
      ExplicitScopea,
      5,
      CheckStampa);
    goto LABEL_11;
  }
LABEL_12:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74654E50u);
  return (unsigned int)v2;
}
