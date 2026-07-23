/*
 * XREFs of PopNetInitialize @ 0x1409B3AB4
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x14017DDE4 (PopInitializeIRTimer.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x1405BE5C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 *     ExSubscribeWnfStateChange @ 0x1406BD710 (ExSubscribeWnfStateChange.c)
 *     PopNetSetConnectivityConstraint @ 0x14072AA94 (PopNetSetConnectivityConstraint.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x14075ECE4 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetPublishWnfStateUpdate @ 0x14075EE14 (PopNetPublishWnfStateUpdate.c)
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
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  if ( a1 )
  {
    if ( a1 != 3 )
      goto LABEL_13;
    if ( PopNetDeferLogRequest )
      PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
    if ( PopEnforceDisconnectedStandby )
    {
      v1 = 2;
    }
    else
    {
      if ( PopNetStandbyStateMask )
        goto LABEL_11;
      if ( PopPlatformAoAc )
      {
        if ( PopNetStandbyStatePublished || PopNetStandbyState )
        {
LABEL_11:
          if ( PopPlatformAoAc )
            ExSubscribeWnfStateChange(
              (__int64)&IdentifierAuthority,
              (__int64)&WNF_SEB_SYSTEM_LPE,
              1,
              0,
              (__int64)PopNetWnfLowPowerEpochCallback,
              0LL);
          goto LABEL_13;
        }
        PopNetPublishWnfStateUpdate(1);
        goto LABEL_10;
      }
      v1 = 6;
    }
    PopNetSetConnectivityConstraint(v1);
LABEL_10:
    if ( !PopEnforceDisconnectedStandby )
      goto LABEL_11;
LABEL_13:
    v2 = 0;
    v3 = 0LL;
    goto LABEL_14;
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
      v9,
      0,
      v11);
    PopInitializeIRTimer(
      (__int64)&PopNetRefreshTimer,
      (__int64)PopNetRefreshTimerCallback,
      v8,
      (__int64)PopNetRefreshTimerWorkerCallback,
      v10,
      5,
      v12);
    goto LABEL_13;
  }
LABEL_14:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74654E50u);
  return (unsigned int)v2;
}
