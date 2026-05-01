/*
 * XREFs of CrmStateMonitorStart @ 0x180003A80
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 *     CrmActivityStart @ 0x180032860 (CrmActivityStart.c)
 * Callees:
 *     CrmStateMonitorGPUUsageStart @ 0x1800034F0 (CrmStateMonitorGPUUsageStart.c)
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     CrmStateMonitorListenerAdd @ 0x180004968 (CrmStateMonitorListenerAdd.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmStateMonitorWNFStart @ 0x180045834 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180045C34 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180046460 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180046AE4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180046C50 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180046DB8 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180046EF0 (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180046FA4 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180047010 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180047074 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180047120 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180047184 (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x1800471E8 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18007E3DC (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x18007E760 (CrmStateMonitorTestStart.c)
 */

__int64 __fastcall CrmStateMonitorStart(_QWORD *CallerContext, __int64 a2, __int64 a3, __int64 a4)
{
  int ready; // eax
  __int64 v7; // rdx
  int v8; // edi
  GUID *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  const void *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int16 v16; // ax
  int v17; // r8d
  int v18; // [rsp+30h] [rbp-59h] BYREF
  int v19; // [rsp+34h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  UUID *v21; // [rsp+60h] [rbp-29h]
  int v22; // [rsp+68h] [rbp-21h]
  int v23; // [rsp+6Ch] [rbp-1Dh]
  int *v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+78h] [rbp-11h]
  int v26; // [rsp+7Ch] [rbp-Dh]
  _DWORD *v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]
  _BYTE *v30; // [rsp+90h] [rbp+7h]
  _DWORD v31[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v32; // [rsp+A0h] [rbp+17h]
  int v33; // [rsp+A8h] [rbp+1Fh]
  int v34; // [rsp+ACh] [rbp+23h]
  _BYTE v35[16]; // [rsp+B0h] [rbp+27h] BYREF

  CallerContext[6] = MEMORY[0x7FFE0008];
  switch ( *(_DWORD *)CallerContext )
  {
    case 0:
    case 1:
      ready = CrmStateMonitorTestStart(CallerContext);
      goto LABEL_5;
    case 2:
      ready = CrmStateMonitorCompositeTestStart(CallerContext, v35);
      goto LABEL_5;
    case 3:
      v10 = &GUID_GLOBAL_USER_PRESENCE;
      goto LABEL_11;
    case 4:
      v10 = &GUID_ACDC_POWER_SOURCE;
      goto LABEL_11;
    case 5:
      v10 = &GUID_BATTERY_PERCENTAGE_REMAINING;
      goto LABEL_11;
    case 6:
      v10 = &GUID_CONSOLE_DISPLAY_STATE;
      goto LABEL_11;
    case 7:
      v10 = &GUID_POWER_SAVING_STATUS;
      goto LABEL_11;
    case 8:
      v10 = &GUID_LOW_POWER_EPOCH;
LABEL_11:
      ready = CrmStateMonitorPowerSettingsStart(CallerContext, v10, a3, v35);
      goto LABEL_5;
    case 9:
      v7 = WNF_RM_GAME_MODE_ACTIVE;
      goto LABEL_4;
    case 0xA:
      v11 = 10LL;
      goto LABEL_13;
    case 0xB:
      ready = CrmStateMonitorTimeSinceBootStart(CallerContext, v35);
      goto LABEL_5;
    case 0xC:
      ready = CrmStateMonitorTimeSinceLogonStart(CallerContext, v35);
      goto LABEL_5;
    case 0xD:
      v7 = WNF_SEB_INTERNET_PRESENT;
      goto LABEL_4;
    case 0xE:
      v7 = WNF_SEB_FREE_NETWORK_PRESENT;
      goto LABEL_4;
    case 0xF:
      v7 = WNF_SEB_IP_ADDRESS_AVAILABLE;
      goto LABEL_4;
    case 0x10:
      v7 = WNF_XBOX_SYSTEM_CONSTRAINED_MODE_STATUS_CHANGED;
      goto LABEL_4;
    case 0x11:
      v7 = WNF_CNET_NON_CELLULAR_CONNECTED;
      goto LABEL_4;
    case 0x12:
      ready = CrmStateMonitorNetworkStart(CallerContext, v35);
      goto LABEL_5;
    case 0x13:
      ready = CrmStateMonitorPostShellReadyStart(CallerContext, v35);
      goto LABEL_5;
    case 0x14:
      ready = CrmStateMonitorPostResumeStart(CallerContext, v35);
      goto LABEL_5;
    case 0x15:
      ready = CrmStateMonitorPowerConstrainedStart(CallerContext, v35);
      goto LABEL_5;
    case 0x16:
      v7 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
      goto LABEL_4;
    case 0x17:
      v7 = WNF_SHEL_LOCKSTATE;
      goto LABEL_4;
    case 0x18:
      ready = CrmStateMonitorCPUUsageStart(CallerContext, v35);
      goto LABEL_5;
    case 0x19:
      ready = CrmStateMonitorSystemDiskUsageStart(CallerContext, v35);
      goto LABEL_5;
    case 0x1A:
      ready = CrmStateMonitorCsAcDcStart(CallerContext, v35);
      goto LABEL_5;
    case 0x1B:
      ready = CrmStateMonitorDelayedAcStart(CallerContext, v35);
      goto LABEL_5;
    case 0x1C:
      v11 = 28LL;
LABEL_13:
      *((_DWORD *)CallerContext + 14) = 0;
      CallerContext[5] = CallerContext + 7;
      v12 = CrmStateMonitorStateSizeGet(v11, CallerContext + 7, a3, a4);
      memcpy_0(v35, v13, v12);
      goto LABEL_7;
    case 0x1D:
      ready = CrmStateMonitorGPUUsageStart((unsigned int *)CallerContext, (__int64)v35, a3);
      goto LABEL_5;
    case 0x1E:
      v7 = WNF_SEB_NETWORK_CONNECTIVITY_IN_STANDBY;
      goto LABEL_4;
    case 0x1F:
      ready = CrmStateMonitorDisconnectedStandbyStart(CallerContext, v35);
      goto LABEL_5;
    case 0x20:
      v7 = WNF_SEB_AUDIO_ACTIVITY;
LABEL_4:
      ready = CrmStateMonitorWNFStart(CallerContext, v7, v35);
LABEL_5:
      v8 = ready;
      break;
    default:
      v8 = -1073741822;
      break;
  }
  if ( v8 >= 0 )
  {
LABEL_7:
    CrmStateMonitorListenerAdd(CallerContext, a2, 0LL);
    v8 = 0;
  }
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 8uLL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v21 = &Uuid;
    v24 = &v18;
    v27 = v31;
    v30 = v35;
    v18 = v15;
    v19 = v8;
    v22 = 16;
    v25 = v14 - 4;
    v28 = 2;
    v16 = CrmStateMonitorStateSizeGet((unsigned int)v15, v14, (unsigned int)(v14 - 4), v15);
    v31[1] = 0;
    v34 = 0;
    v32 = &v19;
    v31[0] = v16;
    v33 = v17;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009AF57, 0LL, 0LL, 7u, &pData);
  }
  return (unsigned int)v8;
}
