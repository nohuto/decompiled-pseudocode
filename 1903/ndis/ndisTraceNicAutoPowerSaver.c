/*
 * XREFs of ndisTraceNicAutoPowerSaver @ 0x1C00BA188
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00BB8C4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisNicAutoPowerInsertIntoSortedArray @ 0x1C00B5AE4 (ndisNicAutoPowerInsertIntoSortedArray.c)
 *     WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1C00B70C4 (WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD.c)
 *     WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI @ 0x1C00B75EC (WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI.c)
 *     WPP_RECORDER_SF__guid_ZDIDIII @ 0x1C00B7BD8 (WPP_RECORDER_SF__guid_ZDIDIII.c)
 *     ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C00C2BC8 (-NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K11KPEAU_NDIS_NAPS_TELEMETR.c)
 */

__int64 __fastcall ndisTraceNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  struct _NDIS_NAPS_TELEMETRY_OID_DATA *ReasonOids; // r14
  unsigned int v6; // r13d
  unsigned __int64 v7; // r12
  __int64 v8; // rdx
  _NDIS_NAPS_TELEMETRY_REASON_DATA *Reasons; // r15
  unsigned int v10; // ebp
  _NDIS_NAPS_TELEMETRY_REASON_DATA *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  _GUID *p_InterfaceGuid; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // [rsp+20h] [rbp-1E8h]
  unsigned int v19; // [rsp+20h] [rbp-1E8h]
  unsigned int v20; // [rsp+38h] [rbp-1D0h]
  char Oid; // [rsp+38h] [rbp-1D0h]
  char WakeCount; // [rsp+40h] [rbp-1C8h]
  unsigned int v23; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v25; // [rsp+128h] [rbp-E0h]
  char v26[8]; // [rsp+130h] [rbp-D8h]
  __int64 v27; // [rsp+138h] [rbp-D0h]
  struct _NDIS_NAPS_TELEMETRY_REASON_DATA v28[8]; // [rsp+140h] [rbp-C8h] BYREF

  result = a1->PMHardwareCapabilities.Flags & 6;
  if ( (a1->PMHardwareCapabilities.Flags & 6) != 0 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    if ( SelectiveSuspend )
    {
      ReasonOids = SelectiveSuspend->TelemetryData.ReasonOids;
      memset(v28, 0, sizeof(v28));
      v6 = SelectiveSuspend->SuspendCount - SelectiveSuspend->TelemetryData.StartingSuspendCount;
      v7 = SelectiveSuspend->TotalResumeLatencyMs - SelectiveSuspend->TelemetryData.StartingResumeLatencyMs;
      v8 = (unsigned __int128)((MEMORY[0xFFFFF78000000014] - SelectiveSuspend->TelemetryData.StartTime.QuadPart)
                             * (__int128)0x346DC5D63886594BLL) >> 64;
      v27 = (MEMORY[0xFFFFF78000000014] - SelectiveSuspend->TelemetryData.StartTime.QuadPart) / 10000;
      v25 = SelectiveSuspend->TotalSuspendedTimeMs - SelectiveSuspend->TelemetryData.StartingSuspendTimeMs;
      *(_QWORD *)v26 = SelectiveSuspend->LastResumeLatencyMs;
      if ( v6 > 1 )
      {
        v8 = (v7 + ((unsigned __int64)v6 >> 1)) % v6;
        v7 = (v7 + ((unsigned __int64)v6 >> 1)) / v6;
      }
      Reasons = SelectiveSuspend->TelemetryData.Reasons;
      v10 = 0;
      v11 = SelectiveSuspend->TelemetryData.Reasons;
      do
      {
        if ( v11->WakeCount + v11->BusyCount )
          ndisNicAutoPowerInsertIntoSortedArray(&Reasons[v10].WakeCount, v8, &v28[0].WakeCount);
        ++v10;
        ++v11;
      }
      while ( v10 < 0x31 );
      NdisTraceLoggingNicAutoPowerSaver(a1, a2, v27, v25, v6, v7, v26[0], v20, v28, v23, ReasonOids);
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        p_InterfaceGuid = &a1->InterfaceGuid;
      }
      else
      {
        if ( a2 )
          v14 = 0LL;
        else
          v14 = a1->AoAc->TotalCsActiveTime / 0x2710;
        p_InterfaceGuid = &a1->InterfaceGuid;
        WPP_RECORDER_SF__guid_ZDIDIII(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          v12,
          v13,
          v18,
          (__int64)&a1->InterfaceGuid,
          &a1->pAdapterInstanceName->Length);
        result = (__int64)&WPP_RECORDER_INITIALIZED;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v28[0].BusyCount,
          v28[0].WakeCount,
          v13,
          v18,
          (__int64)p_InterfaceGuid,
          &a1->pAdapterInstanceName->Length,
          v28[0].Reason.StopReason,
          v28[0].WakeCount,
          v28[0].BusyCount,
          v28[0].TotalTimeMs,
          v28[0].Reason.StopReason,
          v28[0].WakeCount,
          v28[0].BusyCount,
          v28[0].TotalTimeMs,
          v28[0].Reason.StopReason,
          v28[0].WakeCount,
          v28[0].BusyCount,
          v28[0].TotalTimeMs,
          v28[0].Reason.StopReason,
          v28[0].WakeCount,
          v28[0].BusyCount,
          v28[0].TotalTimeMs,
          v28[0].Reason.StopReason,
          v28[0].WakeCount,
          v28[0].BusyCount,
          v28[0].TotalTimeMs,
          v28[0].Reason.StopReason,
          v28[0].WakeCount,
          v28[0].BusyCount,
          v28[0].TotalTimeMs,
          v28[0].Reason.StopReason,
          v28[0].WakeCount,
          v28[0].BusyCount,
          v28[0].TotalTimeMs);
        result = (__int64)&WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WakeCount = ReasonOids->WakeCount;
          Oid = ReasonOids->Oid;
          return WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                   ReasonOids->BusyCount,
                   v16,
                   v17,
                   v19,
                   (__int64)p_InterfaceGuid,
                   &a1->pAdapterInstanceName->Length,
                   Oid,
                   WakeCount,
                   ReasonOids->BusyCount,
                   Oid,
                   WakeCount,
                   ReasonOids->BusyCount,
                   Oid,
                   WakeCount,
                   ReasonOids->BusyCount,
                   Oid,
                   WakeCount,
                   ReasonOids->BusyCount,
                   Oid,
                   WakeCount,
                   ReasonOids->BusyCount,
                   Oid,
                   WakeCount,
                   ReasonOids->BusyCount,
                   Oid,
                   WakeCount,
                   ReasonOids->BusyCount,
                   Oid,
                   WakeCount,
                   ReasonOids->BusyCount);
        }
      }
    }
  }
  return result;
}
