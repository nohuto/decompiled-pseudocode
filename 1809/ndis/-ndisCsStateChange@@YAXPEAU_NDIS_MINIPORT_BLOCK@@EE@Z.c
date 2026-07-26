/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0077B80
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0051300 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C0043040 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ndisNicAutoPowerSaverResetTelemetryData @ 0x1C0074D80 (ndisNicAutoPowerSaverResetTelemetryData.c)
 *     ndisTraceNicAutoPowerSaver @ 0x1C00766E4 (ndisTraceNicAutoPowerSaver.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00779E8 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00794A8 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     McTemplateK0qxxq @ 0x1C0079B28 (McTemplateK0qxxq.c)
 *     McTemplateK0ujjp @ 0x1C0079D34 (McTemplateK0ujjp.c)
 *     McTemplateK0ujqzr2jx @ 0x1C0079DD4 (McTemplateK0ujqzr2jx.c)
 *     McTemplateK0xqx @ 0x1C0079FB0 (McTemplateK0xqx.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@4@Z @ 0x1C007D270 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007E138 (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z @ 0x1C00FCE6C (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C00FCFD4 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIO.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00FD078 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00FD5B8 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned __int8 v3; // r14
  unsigned __int8 v4; // r13
  unsigned int CsSurpriseWakes; // r15d
  int v6; // r9d
  int *ComponentRefCounts; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  unsigned __int64 *p_CurrentRefStartTime; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  bool v17; // zf
  __int128 v18; // xmm1
  unsigned int WakeReasonWwanUSSDReceive; // eax
  unsigned int LastUnknownWakeReason; // eax
  __int128 v21; // xmm0
  int CsPowerTransitions; // eax
  unsigned int i; // r14d
  unsigned __int64 TotalRefTime; // rcx
  wchar_t *v25; // rdx
  int v26; // r8d
  unsigned __int64 TotalCsResiliencyTime; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // [rsp+28h] [rbp-E0h]
  unsigned __int8 NewIrql; // [rsp+58h] [rbp-B0h]
  KIRQL NewIrql_1; // [rsp+59h] [rbp-AFh]
  unsigned __int64 v33; // [rsp+5Ch] [rbp-ACh]
  int v34; // [rsp+64h] [rbp-A4h]
  wchar_t *v35; // [rsp+70h] [rbp-98h]
  struct _GUID InterfaceGuid; // [rsp+78h] [rbp-90h] BYREF
  GUID v37; // [rsp+88h] [rbp-80h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX v38; // [rsp+98h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS v39; // [rsp+B0h] [rbp-58h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS v40; // [rsp+E0h] [rbp-28h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS v41; // [rsp+110h] [rbp+8h] BYREF

  AoAc = a1->AoAc;
  v3 = ndisConnectedStandby;
  v4 = ndisLastCsScenarioInstanceId;
  NewIrql = ndisConnectedStandby;
  memset(&v41, 0, sizeof(v41));
  memset(&v40, 0, sizeof(v40));
  v33 = 0LL;
  CsSurpriseWakes = 0;
  *(_QWORD *)&InterfaceGuid.Data1 = 0LL;
  *(_QWORD *)InterfaceGuid.Data4 = 0LL;
  memset(&v39, 0, sizeof(v39));
  memset(&v38, 0, sizeof(v38));
  NewIrql_1 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ndisAoAcWriteRefcountRundown(a1, AoAc);
  if ( v3 )
  {
    ndisTraceNicAutoPowerSaver(a1, 1u);
    ComponentRefCounts = AoAc->ComponentRefCounts;
    v8 = 576LL;
    v9 = 17LL;
    v10 = MEMORY[0xFFFFF78000000008];
    do
    {
      *(_QWORD *)((char *)AoAc + v8 - 8) = 0LL;
      v11 = 0LL;
      if ( *ComponentRefCounts++ > 0 )
        v11 = v10;
      *(unsigned __int64 *)((char *)&AoAc->Lock + v8) = v11;
      v8 += 16LL;
      --v9;
    }
    while ( v9 );
    AoAc->TotalCsActiveTime = 0LL;
    AoAc->CsPowerTransitions = 0;
    *(_QWORD *)&AoAc->CsSurpriseWakes = 0LL;
    AoAc->TotalCsResiliencyTime = 0LL;
    AoAc->CurrentActiveStartTime = 0LL;
    AoAc->CurrentCsResiliencyStartTime = 0LL;
    AoAc->WakeIrpCount = 0;
    AoAc->WakeIrpStartTime = 0LL;
    AoAc->LastWakeIrpLatencyMs = 0LL;
    AoAc->MaxWakeIrpLatencyMs = 0LL;
    AoAc->TotalWakeIrpLatencyMs = 0LL;
    AoAc->SetPowerOidCount = 0;
    AoAc->LastSetPowerOidLatencyMs = 0LL;
    AoAc->MaxSetPowerOidLatencyMs = 0LL;
    AoAc->TotalSetPowerOidLatencyMs = 0LL;
    memset(&AoAc->CsTrafficStats[1], 0, 0xA0uLL);
    ActiveState = AoAc->ActiveState;
    if ( (ActiveState & 0xFFFFFFFC) == 0 && ActiveState != NdisNicQuiet )
      AoAc->CurrentActiveStartTime = v10;
  }
  else
  {
    p_CurrentRefStartTime = &AoAc->CsRefTimes[0].CurrentRefStartTime;
    v15 = 17LL;
    do
    {
      if ( *p_CurrentRefStartTime )
      {
        *(p_CurrentRefStartTime - 1) += MEMORY[0xFFFFF78000000008] - *p_CurrentRefStartTime;
        *p_CurrentRefStartTime = 0LL;
      }
      p_CurrentRefStartTime += 2;
      --v15;
    }
    while ( v15 );
    if ( AoAc->CurrentCsResiliencyStartTime )
    {
      AoAc->TotalCsResiliencyTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentCsResiliencyStartTime;
      AoAc->CurrentCsResiliencyStartTime = 0LL;
    }
    if ( AoAc->CurrentActiveStartTime )
    {
      AoAc->TotalCsActiveTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentActiveStartTime;
      AoAc->CurrentActiveStartTime = 0LL;
    }
    v16 = -444972355;
    if ( (byte_1C00A2083 & 4) != 0 )
      McTemplateK0qxxq(
        -444972355,
        AoAc->TotalCsActiveTime / 0x989680,
        (_DWORD)a1 + 4040,
        a1->IfIndex,
        a1->NetLuid.Value,
        AoAc->TotalCsActiveTime / 0x989680,
        AoAc->CsPowerTransitions);
    v41 = AoAc->CsTrafficStats[1];
    v40 = AoAc->CsTrafficStats[2];
    InterfaceGuid = a1->InterfaceGuid;
    v17 = AoAc->TotalCsResiliencyTime == 0;
    v18 = *(_OWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonWlanNLODiscovery;
    CsSurpriseWakes = AoAc->CsSurpriseWakes;
    HIDWORD(v33) = AoAc->CsSpuriousWakes;
    WakeReasonWwanUSSDReceive = AoAc->CsSpuriousWakeStats.WakeReasonWwanUSSDReceive;
    *(_OWORD *)&v39.WakeReasonUnspec = *(_OWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonUnspec;
    v39.WakeReasonWwanUSSDReceive = WakeReasonWwanUSSDReceive;
    LastUnknownWakeReason = AoAc->CsSpuriousWakeStatsEx.LastUnknownWakeReason;
    *(_QWORD *)&v39.WakeReasonWwanRegisterState = *(_QWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonWwanRegisterState;
    v21 = *(_OWORD *)&AoAc->CsSpuriousWakeStatsEx.WakeReasonBadIndication;
    v38.LastUnknownWakeReason = LastUnknownWakeReason;
    CsPowerTransitions = AoAc->CsPowerTransitions;
    *(_OWORD *)&v38.WakeReasonBadIndication = v21;
    *(_OWORD *)&v39.WakeReasonWlanNLODiscovery = v18;
    LODWORD(v33) = CsPowerTransitions;
    if ( !v17 )
    {
      v37 = (GUID)0LL;
      if ( (byte_1C00A2085 & 0x10) != 0 )
      {
        LOBYTE(v6) = v4;
        McTemplateK0ujjp(
          v16,
          v15,
          (_DWORD)a1 + 4040,
          v6,
          v30,
          (__int64)&a1->InterfaceGuid,
          (char)a1->PhysicalDeviceObject);
      }
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      {
        LOBYTE(v6) = v4;
        McTemplateK0ujqzr2jx(
          a1->pAdapterInstanceName,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (_DWORD)a1 + 4040,
          v6,
          (__int64)&GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (__int64)a1->pAdapterInstanceName->Buffer,
          (__int64)&a1->InterfaceGuid,
          AoAc->TotalCsResiliencyTime);
      }
      for ( i = 0; i < 0x11; ++i )
      {
        TotalRefTime = AoAc->CsRefTimes[i].TotalRefTime;
        if ( TotalRefTime )
        {
          v37 = GUID_CS_BLOCKER_GEN;
          v37.Data4[0] = i;
          v25 = (&off_1C00870C0)[2 * (int)i];
          v26 = *((_DWORD *)&off_1C00870C0 + 4 * (int)i + 2);
          v37.Data3 = a1->IfIndex;
          TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime;
          v35 = v25;
          v34 = v26;
          if ( TotalRefTime > TotalCsResiliencyTime )
          {
            AoAc->CsRefTimes[i].TotalRefTime = TotalCsResiliencyTime;
            TotalRefTime = TotalCsResiliencyTime;
          }
          if ( (byte_1C00A2083 & 4) != 0 )
          {
            McTemplateK0xqx(
              TotalRefTime,
              TotalRefTime / 0x989680,
              (_DWORD)a1 + 4040,
              a1->NetLuid.Value,
              i,
              TotalRefTime / 0x989680);
            v25 = v35;
            v26 = v34;
          }
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          {
            LOBYTE(v6) = v4;
            McTemplateK0ujqzr2jx(
              TotalRefTime,
              (_DWORD)v25,
              (_DWORD)a1 + 4040,
              v6,
              (__int64)&a1->InterfaceGuid,
              v26,
              (__int64)v25,
              (__int64)&v37,
              AoAc->CsRefTimes[i].TotalRefTime);
          }
        }
      }
      v3 = NewIrql;
    }
    ndisTraceNicAutoPowerSaver(a1, 0);
    NdisTraceLoggingPowerOnStatistics(a1);
    NdisTraceLoggingCsStateChange(a1, AoAc, v4, &v39, &v38, &v41, &v40);
  }
  KeReleaseSpinLock(&AoAc->Lock, NewIrql_1);
  if ( v3 )
  {
    ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficLatest);
  }
  else
  {
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Power Transitions", (unsigned int)v33);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Surprise Wakes", CsSurpriseWakes);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Spurious Wakes", HIDWORD(v33));
    ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(v4, &InterfaceGuid, &v39, &v38);
    ndisPublishSleepStudyCustomDataCsTraffic(v4, &InterfaceGuid, &v41, &v40);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Last Wake IRP Latency (ms)", AoAc->LastWakeIrpLatencyMs);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Max Wake IRP Latency (ms)", AoAc->MaxWakeIrpLatencyMs);
    v28 = ComputeRoundedAverage(AoAc->TotalWakeIrpLatencyMs, AoAc->WakeIrpCount);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Avg Wake IRP Latency (ms)", v28);
    ndisPublishSleepStudyCustomData(
      v4,
      &InterfaceGuid,
      L"Last SetPowerOid Latency (ms)",
      AoAc->LastSetPowerOidLatencyMs);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Max SetPowerOid Latency (ms)", AoAc->MaxSetPowerOidLatencyMs);
    v29 = ComputeRoundedAverage(AoAc->TotalSetPowerOidLatencyMs, AoAc->SetPowerOidCount);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Avg SetPowerOid Latency (ms)", v29);
    ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v4, &InterfaceGuid);
  }
  ndisNicAutoPowerSaverResetTelemetryData((__int64)a1);
}
