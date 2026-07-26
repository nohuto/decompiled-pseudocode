/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00BBA94
 * Callers:
 *     ?ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C007D2A0 (-ndisWnfPdcCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C00683C8 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ndisNicAutoPowerSaverResetTelemetryData @ 0x1C00B87A4 (ndisNicAutoPowerSaverResetTelemetryData.c)
 *     ndisTraceNicAutoPowerSaver @ 0x1C00BA358 (ndisTraceNicAutoPowerSaver.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BB900 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD598 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     McTemplateK0qxxq @ 0x1C00BDD50 (McTemplateK0qxxq.c)
 *     McTemplateK0ujjp @ 0x1C00BDF5C (McTemplateK0ujjp.c)
 *     McTemplateK0ujqzr2jx @ 0x1C00BDFFC (McTemplateK0ujqzr2jx.c)
 *     McTemplateK0xqx @ 0x1C00BE1D8 (McTemplateK0xqx.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@4@Z @ 0x1C00C265C (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C351C (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z @ 0x1C011C748 (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C011C8B4 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIO.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C011C958 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C011CEA0 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
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
  _GUID InterfaceGuid; // xmm0
  bool v18; // zf
  __int128 v19; // xmm1
  unsigned int WakeReasonWwanUSSDReceive; // eax
  unsigned int LastUnknownWakeReason; // eax
  __int128 v22; // xmm0
  int CsPowerTransitions; // eax
  unsigned int i; // r14d
  unsigned __int64 TotalRefTime; // rcx
  wchar_t *v26; // rdx
  int v27; // r8d
  unsigned __int64 TotalCsResiliencyTime; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // [rsp+28h] [rbp-E0h]
  unsigned __int8 NewIrql; // [rsp+58h] [rbp-B0h]
  KIRQL NewIrql_1; // [rsp+59h] [rbp-AFh]
  unsigned __int64 v34; // [rsp+5Ch] [rbp-ACh]
  int v35; // [rsp+64h] [rbp-A4h]
  wchar_t *v36; // [rsp+70h] [rbp-98h]
  struct _GUID v37; // [rsp+78h] [rbp-90h] BYREF
  GUID v38; // [rsp+88h] [rbp-80h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX v39; // [rsp+98h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS v40; // [rsp+B0h] [rbp-58h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS v41; // [rsp+E0h] [rbp-28h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS v42; // [rsp+110h] [rbp+8h] BYREF

  AoAc = a1->AoAc;
  v3 = ndisConnectedStandby;
  v4 = ndisLastCsScenarioInstanceId;
  NewIrql = ndisConnectedStandby;
  memset(&v42, 0, sizeof(v42));
  memset(&v41, 0, sizeof(v41));
  v34 = 0LL;
  CsSurpriseWakes = 0;
  *(_QWORD *)&v37.Data1 = 0LL;
  *(_QWORD *)v37.Data4 = 0LL;
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
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
    if ( (byte_1C00E8083 & 4) != 0 )
      McTemplateK0qxxq(
        -444972355,
        AoAc->TotalCsActiveTime / 0x989680,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        AoAc->TotalCsActiveTime / 0x989680,
        AoAc->CsPowerTransitions);
    v42 = AoAc->CsTrafficStats[1];
    *(_OWORD *)&v41.IfInUnicastPackets = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInUnicastPackets;
    *(_OWORD *)&v41.IfInMulticastPackets = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInMulticastPackets;
    InterfaceGuid = a1->InterfaceGuid;
    *(_OWORD *)&v41.IfInBroadcastPackets = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInBroadcastPackets;
    v37 = InterfaceGuid;
    v18 = AoAc->TotalCsResiliencyTime == 0;
    v19 = *(_OWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonWlanNLODiscovery;
    CsSurpriseWakes = AoAc->CsSurpriseWakes;
    HIDWORD(v34) = AoAc->CsSpuriousWakes;
    WakeReasonWwanUSSDReceive = AoAc->CsSpuriousWakeStats.WakeReasonWwanUSSDReceive;
    *(_OWORD *)&v40.WakeReasonUnspec = *(_OWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonUnspec;
    v40.WakeReasonWwanUSSDReceive = WakeReasonWwanUSSDReceive;
    LastUnknownWakeReason = AoAc->CsSpuriousWakeStatsEx.LastUnknownWakeReason;
    *(_QWORD *)&v40.WakeReasonWwanRegisterState = *(_QWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonWwanRegisterState;
    v22 = *(_OWORD *)&AoAc->CsSpuriousWakeStatsEx.WakeReasonBadIndication;
    v39.LastUnknownWakeReason = LastUnknownWakeReason;
    CsPowerTransitions = AoAc->CsPowerTransitions;
    *(_OWORD *)&v39.WakeReasonBadIndication = v22;
    *(_OWORD *)&v40.WakeReasonWlanNLODiscovery = v19;
    LODWORD(v34) = CsPowerTransitions;
    if ( !v18 )
    {
      v38 = (GUID)0LL;
      if ( (byte_1C00E8085 & 0x10) != 0 )
      {
        LOBYTE(v6) = v4;
        McTemplateK0ujjp(
          v16,
          v15,
          (_DWORD)a1 + 4008,
          v6,
          v31,
          (__int64)&a1->InterfaceGuid,
          (char)a1->PhysicalDeviceObject);
      }
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      {
        LOBYTE(v6) = v4;
        McTemplateK0ujqzr2jx(
          a1->pAdapterInstanceName,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (_DWORD)a1 + 4008,
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
          v38 = GUID_CS_BLOCKER_GEN;
          v38.Data4[0] = i;
          v26 = (&off_1C00CC0B0)[2 * (int)i];
          v27 = *((_DWORD *)&off_1C00CC0B0 + 4 * (int)i + 2);
          v38.Data3 = a1->IfIndex;
          TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime;
          v36 = v26;
          v35 = v27;
          if ( TotalRefTime > TotalCsResiliencyTime )
          {
            AoAc->CsRefTimes[i].TotalRefTime = TotalCsResiliencyTime;
            TotalRefTime = TotalCsResiliencyTime;
          }
          if ( (byte_1C00E8083 & 4) != 0 )
          {
            McTemplateK0xqx(
              TotalRefTime,
              TotalRefTime / 0x989680,
              (_DWORD)a1 + 4008,
              a1->NetLuid.Value,
              i,
              TotalRefTime / 0x989680);
            v26 = v36;
            v27 = v35;
          }
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          {
            LOBYTE(v6) = v4;
            McTemplateK0ujqzr2jx(
              TotalRefTime,
              (_DWORD)v26,
              (_DWORD)a1 + 4008,
              v6,
              (__int64)&a1->InterfaceGuid,
              v27,
              (__int64)v26,
              (__int64)&v38,
              AoAc->CsRefTimes[i].TotalRefTime);
          }
        }
      }
      v3 = NewIrql;
    }
    ndisTraceNicAutoPowerSaver(a1, 0);
    NdisTraceLoggingPowerOnStatistics(a1);
    NdisTraceLoggingCsStateChange(a1, AoAc, v4, &v40, &v39, &v42, &v41);
  }
  KeReleaseSpinLock(&AoAc->Lock, NewIrql_1);
  if ( v3 )
  {
    ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficLatest);
  }
  else
  {
    ndisPublishSleepStudyCustomData(v4, &v37, L"Power Transitions", (unsigned int)v34);
    ndisPublishSleepStudyCustomData(v4, &v37, L"Surprise Wakes", CsSurpriseWakes);
    ndisPublishSleepStudyCustomData(v4, &v37, L"Spurious Wakes", HIDWORD(v34));
    ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(v4, &v37, &v40, &v39);
    ndisPublishSleepStudyCustomDataCsTraffic(v4, &v37, &v42, &v41);
    ndisPublishSleepStudyCustomData(v4, &v37, L"Last Wake IRP Latency (ms)", AoAc->LastWakeIrpLatencyMs);
    ndisPublishSleepStudyCustomData(v4, &v37, L"Max Wake IRP Latency (ms)", AoAc->MaxWakeIrpLatencyMs);
    v29 = ComputeRoundedAverage(AoAc->TotalWakeIrpLatencyMs, AoAc->WakeIrpCount);
    ndisPublishSleepStudyCustomData(v4, &v37, L"Avg Wake IRP Latency (ms)", v29);
    ndisPublishSleepStudyCustomData(v4, &v37, L"Last SetPowerOid Latency (ms)", AoAc->LastSetPowerOidLatencyMs);
    ndisPublishSleepStudyCustomData(v4, &v37, L"Max SetPowerOid Latency (ms)", AoAc->MaxSetPowerOidLatencyMs);
    v30 = ComputeRoundedAverage(AoAc->TotalSetPowerOidLatencyMs, AoAc->SetPowerOidCount);
    ndisPublishSleepStudyCustomData(v4, &v37, L"Avg SetPowerOid Latency (ms)", v30);
    ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v4, &v37);
  }
  ndisNicAutoPowerSaverResetTelemetryData((__int64)a1);
}
