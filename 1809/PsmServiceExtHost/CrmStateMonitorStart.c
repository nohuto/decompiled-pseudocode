/*
 * XREFs of CrmStateMonitorStart @ 0x180042CE8
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     CrmStateMonitorListenerAdd @ 0x1800335A0 (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorWNFStart @ 0x180042FD8 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180043090 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180043128 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x1800431C4 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18004334C (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x1800433B0 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180043414 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x1800434BC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180043520 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180043584 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180043668 (CrmStateMonitorTimeSinceLogonStart.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180070B8C (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x180070E30 (CrmStateMonitorTestStart.c)
 */

__int64 __fastcall CrmStateMonitorStart(char *CallerContext, __int64 a2, __int64 a3)
{
  int v5; // ecx
  int ready; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  GUID *v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  unsigned __int16 v19; // ax
  int v20; // r9d
  unsigned int v22; // eax
  const void *v23; // rdx
  unsigned int v24; // r9d
  unsigned __int16 v25; // r10
  unsigned int v26; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v27[3]; // [rsp+34h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  UUID *v29; // [rsp+60h] [rbp-29h]
  int v30; // [rsp+68h] [rbp-21h]
  int v31; // [rsp+6Ch] [rbp-1Dh]
  unsigned int *v32; // [rsp+70h] [rbp-19h]
  int v33; // [rsp+78h] [rbp-11h]
  int v34; // [rsp+7Ch] [rbp-Dh]
  int *v35; // [rsp+80h] [rbp-9h]
  int v36; // [rsp+88h] [rbp-1h]
  int v37; // [rsp+8Ch] [rbp+3h]
  int *v38; // [rsp+90h] [rbp+7h]
  int v39; // [rsp+98h] [rbp+Fh] BYREF
  int v40; // [rsp+9Ch] [rbp+13h]
  unsigned int *v41; // [rsp+A0h] [rbp+17h]
  int v42; // [rsp+A8h] [rbp+1Fh] BYREF
  int v43; // [rsp+ACh] [rbp+23h]
  _BYTE v44[16]; // [rsp+B0h] [rbp+27h] BYREF

  v5 = *(_DWORD *)CallerContext;
  if ( v5 > 14 )
  {
    if ( v5 > 21 )
    {
      v13 = v5 - 22;
      if ( !v13 )
      {
        v17 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
        goto LABEL_33;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        v17 = WNF_SHEL_LOCKSTATE;
        goto LABEL_33;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        ready = CrmStateMonitorCPUUsageStart(CallerContext, v44);
        goto LABEL_34;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        ready = CrmStateMonitorSystemDiskUsageStart(CallerContext, v44);
        goto LABEL_34;
      }
      if ( v16 == 1 )
      {
        ready = CrmStateMonitorCsAcDcStart(CallerContext, v44);
        goto LABEL_34;
      }
    }
    else
    {
      if ( v5 == 21 )
      {
        ready = CrmStateMonitorPowerConstrainedStart(CallerContext, v44);
        goto LABEL_34;
      }
      v7 = v5 - 15;
      if ( !v7 )
      {
        v17 = WNF_SEB_IP_ADDRESS_AVAILABLE;
        goto LABEL_33;
      }
      v8 = v7 - 1;
      if ( !v8 )
      {
        v17 = WNF_XBOX_SYSTEM_CONSTRAINED_MODE_STATUS_CHANGED;
        goto LABEL_33;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v17 = WNF_CNET_NON_CELLULAR_CONNECTED;
        goto LABEL_33;
      }
      v10 = v9 - 1;
      if ( !v10 )
      {
        ready = CrmStateMonitorNetworkStart(CallerContext, v44);
        goto LABEL_34;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        ready = CrmStateMonitorPostShellReadyStart(CallerContext, v44);
        goto LABEL_34;
      }
      if ( v11 == 1 )
      {
        ready = CrmStateMonitorPostResumeStart(CallerContext, v44);
        goto LABEL_34;
      }
    }
  }
  else
  {
    if ( v5 == 14 )
    {
      v17 = WNF_SEB_FREE_NETWORK_PRESENT;
      goto LABEL_33;
    }
    if ( v5 > 7 )
    {
      if ( v5 != 8 )
      {
        if ( v5 != 9 )
        {
          if ( v5 == 10 )
          {
            *((_DWORD *)CallerContext + 14) = 0;
            *((_QWORD *)CallerContext + 5) = CallerContext + 56;
            v22 = CrmStateMonitorStateSizeGet(10);
            memcpy_0(v44, v23, v22);
LABEL_35:
            CrmStateMonitorListenerAdd((unsigned int *)CallerContext, a2);
            v18 = 0;
            goto LABEL_36;
          }
          if ( v5 != 11 )
          {
            if ( v5 == 12 )
            {
              ready = CrmStateMonitorTimeSinceLogonStart(CallerContext, v44);
              goto LABEL_34;
            }
            v17 = WNF_SEB_INTERNET_PRESENT;
            goto LABEL_33;
          }
          ready = CrmStateMonitorTimeSinceBootStart(CallerContext, v44);
LABEL_34:
          v18 = ready;
          if ( ready < 0 )
            goto LABEL_36;
          goto LABEL_35;
        }
        v17 = WNF_RM_GAME_MODE_ACTIVE;
LABEL_33:
        ready = CrmStateMonitorWNFStart(CallerContext, v17, v44);
        goto LABEL_34;
      }
      v12 = &GUID_LOW_POWER_EPOCH;
LABEL_25:
      ready = CrmStateMonitorPowerSettingsStart(CallerContext, v12, a3, v44);
      goto LABEL_34;
    }
    if ( v5 == 7 )
    {
      v12 = &GUID_POWER_SAVING_STATUS;
      goto LABEL_25;
    }
    if ( v5 >= 0 )
    {
      if ( v5 <= 1 )
      {
        ready = CrmStateMonitorTestStart(CallerContext);
        goto LABEL_34;
      }
      switch ( v5 )
      {
        case 3:
          v12 = &GUID_GLOBAL_USER_PRESENCE;
          break;
        case 4:
          v12 = &GUID_ACDC_POWER_SOURCE;
          break;
        case 5:
          v12 = &GUID_BATTERY_PERCENTAGE_REMAINING;
          break;
        case 2:
          ready = CrmStateMonitorCompositeTestStart(CallerContext, v44);
          goto LABEL_34;
        default:
          v12 = &GUID_CONSOLE_DISPLAY_STATE;
          break;
      }
      goto LABEL_25;
    }
  }
  v18 = -1073741822;
LABEL_36:
  v19 = CrmStateMonitorStateSizeGet(*(_DWORD *)CallerContext);
  if ( v20 <= 2 )
  {
    if ( dword_18009B128 > 5u )
    {
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v29 = &Uuid;
      v32 = v27;
      v35 = &v39;
      v38 = (int *)v44;
      v39 = v19;
      v41 = &v26;
      v27[0] = v20;
      v26 = v18;
      v30 = 16;
      v33 = 4;
      v36 = 2;
      v42 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D26A, 0LL, 0LL, 7u, &pData);
    }
  }
  else if ( dword_18009B128 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL) )
  {
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v29 = &Uuid;
    v32 = &v26;
    v35 = v27;
    v38 = &v42;
    v41 = (unsigned int *)v44;
    v42 = v25;
    v26 = v24;
    v27[0] = v18;
    v30 = 16;
    v33 = 4;
    v36 = 4;
    v39 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D2B7, 0LL, 0LL, 7u, &pData);
  }
  return v18;
}
