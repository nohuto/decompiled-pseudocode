/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178E88
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178E10 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0100818 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0145694 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C0178F1C (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7F50 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C02C8B0C (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rax
  ULONG v7; // esi
  _DWORD *v8; // rdi
  WCHAR *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _DWORD *v15; // r15
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rax
  NTSTATUS v22; // eax
  __int64 v23; // rax
  __int64 v24; // r14
  int IsTargetForceable; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  WCHAR *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int SimulatedMonitor; // esi
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int8 v44[8]; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  __int64 v47; // [rsp+48h] [rbp-71h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v51; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      v6 = WdLogNewEntry5_WdAssertion(v4, v3);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = -1;
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      ++v7;
      if ( !v8 )
      {
        v8 = operator new[](0x60uLL, 0x4D677844u, PagedPool);
        if ( !v8 )
        {
          v14 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
          WdLogEvent5_WdLowResource(v14);
          return 3221225495LL;
        }
      }
      v8[2] = -1;
      v15 = v8 + 3;
      v16 = ZwEnumerateValueKey(KeyHandle, v7, KeyValueBasicInformation, v8 + 3, 0x4Eu, &ResultLength);
      v20 = v16;
      if ( v16 == -2147483622 )
      {
        v31 = WdLogNewEntry5_WdTrace(v18, v17);
        *(_QWORD *)(v31 + 24) = v7;
        *(_QWORD *)(v31 + 32) = this;
        operator delete[](v8);
        while ( v9 )
        {
          v32 = v9;
          v9 = *(WCHAR **)v9;
          v33 = *((unsigned int *)v32 + 2);
          if ( (_DWORD)v33 == -1 )
          {
            v38 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v32 + 12);
            v42 = v38;
            if ( v38 < 0 )
            {
              v43 = WdLogNewEntry5_WdError(v40, v39, v41);
              *(_QWORD *)(v43 + 24) = v42;
              WdLogEvent5_WdError(v43);
            }
          }
          else
          {
            v47 = 0LL;
            SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v33, 2LL);
            if ( SimulatedMonitor >= 0 && !v47 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v35, v34);
              WdLogEvent5_WdAssertion(v37);
            }
            MONITOR_MGR::_LogMonitorPresentEvent(
              (__int64)this,
              1073741825LL,
              *((_DWORD *)v32 + 2),
              SimulatedMonitor,
              0LL);
          }
          operator delete[](v32);
        }
        ZwClose(KeyHandle);
        return 0LL;
      }
      if ( v16 < 0 )
        goto LABEL_13;
      *((_WORD *)v15 + ((unsigned __int64)(unsigned int)v8[5] >> 1) + 6) = 0;
      *(_QWORD *)v8 = v9;
      v9 = (WCHAR *)v8;
      v8 = 0LL;
      if ( v15[1] != 4 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v7;
        *(_QWORD *)(v21 + 32) = (unsigned int)v15[1];
        goto LABEL_15;
      }
      v22 = ZwEnumerateValueKey(KeyHandle, v7, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v20 = v22;
      if ( v22 == -2147483622 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( (int)v20 < 0 )
      {
LABEL_13:
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v7;
        *(_QWORD *)(v21 + 32) = v20;
        goto LABEL_15;
      }
      v24 = v51;
      v44[0] = 0;
      IsTargetForceable = DmmIsTargetForceable(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v51, v44, 0);
      if ( IsTargetForceable < 0 )
      {
        if ( IsTargetForceable == -1071774971 )
          goto LABEL_25;
      }
      else if ( v44[0] )
      {
        if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v24, SourceString) >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          *(_QWORD *)&String2.Length = 0LL;
          String2.Buffer = 0LL;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v15 + 6);
          RtlInitUnicodeString(&String2, SourceString);
          if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
          {
            v21 = WdLogNewEntry5_WdWarning(v29, v28, v30);
            goto LABEL_15;
          }
          *((_DWORD *)v9 + 2) = v24;
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
