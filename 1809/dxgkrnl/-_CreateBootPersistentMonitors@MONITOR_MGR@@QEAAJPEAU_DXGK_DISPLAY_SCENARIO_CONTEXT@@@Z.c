/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146FCC
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146F54 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00E23D0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0147060 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C028F8B8 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  ULONG v9; // esi
  _DWORD *v10; // rdi
  WCHAR *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // r15
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rax
  NTSTATUS v22; // eax
  __int64 v23; // rax
  __int64 v24; // r14
  int IsTargetForcable; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  WCHAR *v32; // rdi
  unsigned int v33; // edx
  __int64 v34; // rcx
  int SimulatedMonitor; // esi
  __int64 v36; // rax
  NTSTATUS v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int8 v41[8]; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  __int64 v44; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v48; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = -1;
    v10 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      ++v9;
      if ( !v10 )
      {
        v10 = operator new(0x60uLL, 0x4D677844u, PagedPool);
        if ( !v10 )
        {
          v13 = WdLogNewEntry5_WdLowResource(v12);
          WdLogEvent5_WdLowResource(v13);
          return 3221225495LL;
        }
      }
      v10[2] = -1;
      v14 = v10 + 3;
      v15 = ZwEnumerateValueKey(KeyHandle, v9, KeyValueBasicInformation, v10 + 3, 0x4Eu, &ResultLength);
      v20 = v15;
      if ( v15 == -2147483622 )
      {
        v31 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
        *(_QWORD *)(v31 + 24) = v9;
        *(_QWORD *)(v31 + 32) = this;
        operator delete[](v10);
        while ( v11 )
        {
          v32 = v11;
          v11 = *(WCHAR **)v11;
          v33 = *((_DWORD *)v32 + 2);
          if ( v33 == -1 )
          {
            v37 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v32 + 12);
            v39 = v37;
            if ( v37 < 0 )
            {
              v40 = WdLogNewEntry5_WdError(v38);
              *(_QWORD *)(v40 + 24) = v39;
              WdLogEvent5_WdError(v40);
            }
          }
          else
          {
            v44 = 0LL;
            SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                                 this,
                                 v33,
                                 2,
                                 0LL,
                                 (struct DXGMONITOR *)&v44,
                                 (__int64)a2);
            if ( SimulatedMonitor >= 0 && !v44 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v34);
              WdLogEvent5_WdAssertion(v36);
            }
            MONITOR_MGR::_LogMonitorPresentEvent((__int64)this, 1073741825, *((_DWORD *)v32 + 2), SimulatedMonitor, 0LL);
          }
          operator delete[](v32);
        }
        ZwClose(KeyHandle);
        return 0LL;
      }
      if ( v15 < 0 )
        goto LABEL_13;
      *((_WORD *)v14 + ((unsigned __int64)(unsigned int)v10[5] >> 1) + 6) = 0;
      *(_QWORD *)v10 = v11;
      v11 = (WCHAR *)v10;
      v10 = 0LL;
      if ( v14[1] != 4 )
      {
        v21 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v21 + 24) = v9;
        *(_QWORD *)(v21 + 32) = (unsigned int)v14[1];
        goto LABEL_15;
      }
      v22 = ZwEnumerateValueKey(KeyHandle, v9, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v20 = v22;
      if ( v22 == -2147483622 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( (int)v20 < 0 )
      {
LABEL_13:
        v21 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v21 + 24) = v9;
        *(_QWORD *)(v21 + 32) = v20;
        goto LABEL_15;
      }
      v24 = v48;
      v41[0] = 0;
      IsTargetForcable = DmmIsTargetForcable(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), v48, v41, 0);
      if ( IsTargetForcable < 0 )
      {
        if ( IsTargetForcable == -1071774971 )
          goto LABEL_25;
      }
      else if ( v41[0] )
      {
        if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v24, SourceString) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v14 + 6);
          RtlInitUnicodeString(&String2, SourceString);
          if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
          {
            v21 = WdLogNewEntry5_WdWarning(v29, v28, v30);
            goto LABEL_15;
          }
          *((_DWORD *)v11 + 2) = v24;
        }
      }
      else
      {
LABEL_25:
        v21 = WdLogNewEntry5_WdWarning(0LL, v26, v27);
        *(_QWORD *)(v21 + 24) = v24;
LABEL_15:
        WdLogEvent5_WdWarning(v21);
      }
    }
  }
  return 0LL;
}
