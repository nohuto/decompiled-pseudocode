/*
 * XREFs of ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C011CEA0
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00BB8C4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ndisGetTimeInterval @ 0x1C0013CF0 (ndisGetTimeInterval.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McTemplateK0ujqzr2jx @ 0x1C00BDE2C (McTemplateK0ujqzr2jx.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C011CA40 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C011CC48 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C011CD54 (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverStats(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        const struct _GUID *a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned __int64 TimeInterval; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  ULONGLONG v10; // r14
  unsigned int v11; // r15d
  ULONGLONG v12; // r12
  ULONGLONG LastResumeLatencyMs; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-59h]
  __int64 v16; // [rsp+20h] [rbp-59h]
  int v17; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-11h]
  ULONGLONG v20; // [rsp+70h] [rbp-9h]
  _QWORD v21[2]; // [rsp+78h] [rbp-1h] BYREF
  GUID v22; // [rsp+88h] [rbp+Fh] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  if ( SelectiveSuspend )
  {
    v22 = GUID_CS_BLOCKER_GEN;
    TimeInterval = ndisGetTimeInterval((_LARGE_INTEGER *)&SelectiveSuspend->TelemetryData.StartTime.QuadPart);
    v10 = SelectiveSuspend->TotalSuspendedTimeMs - SelectiveSuspend->TelemetryData.StartingSuspendTimeMs;
    v11 = SelectiveSuspend->SuspendCount - SelectiveSuspend->TelemetryData.StartingSuspendCount;
    v12 = SelectiveSuspend->TotalResumeLatencyMs - SelectiveSuspend->TelemetryData.StartingResumeLatencyMs;
    LastResumeLatencyMs = SelectiveSuspend->LastResumeLatencyMs;
    v19 = TimeInterval;
    v20 = LastResumeLatencyMs;
    if ( ndisEnableNicAutoPowerSaverInSleepStudy == 1 )
    {
      v21[1] = 25LL;
      a3 = &v22;
      v18[1] = 36LL;
      v21[0] = L"Events preventing Nic Dx";
      v18[0] = L"Breakdown of OIDs preventing Nic Dx";
      v22.Data3 = a1->IfIndex;
      v17 = 1;
      v22.Data4[0] = 0x80;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0ujqzr2jx(
          (__int64)L"Nic Auto Power Saver",
          v8,
          &a1->InterfaceGuid,
          a2,
          v9,
          21,
          (__int64)L"Nic Auto Power Saver",
          (__int64)&v22,
          0);
      LOBYTE(v8) = a2;
      ndisPublishSleepStudyNapsCustomData(
        (__int64)a1,
        v8,
        (__int64)&v22,
        (__int64)v21,
        v15,
        (__int64)SelectiveSuspend->TelemetryData.Reasons,
        (char *)&v17);
      LOBYTE(v14) = a2;
      ndisPublishSleepStudyNapsOidCustomData(
        (__int64)a1,
        v14,
        (__int64)&v22,
        (__int64)v18,
        v16,
        (__int64)SelectiveSuspend->TelemetryData.ReasonOids,
        &v17);
      TimeInterval = v19;
      LastResumeLatencyMs = v20;
    }
    ndisPublishSleepStudyNicAutoPowerSaverCustomData(
      (__int64)a1,
      a2,
      a3,
      TimeInterval,
      LastResumeLatencyMs,
      v10,
      v11,
      v12);
  }
}
