/*
 * XREFs of ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4
 * Callers:
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005844 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180011058 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800223C0 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002A330 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800472C0 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180069B28 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x180069D38 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069E78 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069FAC (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18006A3CC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x18006B658 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18006BA6C (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180005A94 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x180014374 (RmpWnfPublishMessageToClientStateName.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HampActRequestStop(__int64 a1, unsigned int a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  int v9; // esi
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v15; // [rsp+30h] [rbp-99h] BYREF
  char v16; // [rsp+31h] [rbp-98h] BYREF
  int v17; // [rsp+34h] [rbp-95h] BYREF
  int v18; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-89h] BYREF
  int v20; // [rsp+50h] [rbp-79h]
  unsigned int v21; // [rsp+58h] [rbp-71h]
  int v22; // [rsp+5Ch] [rbp-6Dh]
  int v23; // [rsp+60h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-49h] BYREF
  _QWORD *v25; // [rsp+A0h] [rbp-29h]
  __int64 v26; // [rsp+A8h] [rbp-21h]
  int *v27; // [rsp+B0h] [rbp-19h]
  __int64 v28; // [rsp+B8h] [rbp-11h]
  char *v29; // [rsp+C0h] [rbp-9h]
  __int64 v30; // [rsp+C8h] [rbp-1h]
  char *v31; // [rsp+D0h] [rbp+7h]
  __int64 v32; // [rsp+D8h] [rbp+Fh]

  v18 = a4;
  if ( a6 )
    v9 = *(_DWORD *)(a6 + 136);
  else
    v9 = 0;
  if ( a5 )
    HampActCheckSetExpiration((struct _HAM_ACTIVITY *)a1, a5);
  v10 = *(_DWORD *)(a1 + 544);
  v11 = (unsigned __int8)v10 >> 6;
  if ( v11 >= a2 )
  {
    if ( hProvider > 5u )
    {
      v26 = 8LL;
      v25 = (_QWORD *)(a1 + 40);
      v27 = &v17;
      v29 = &v15;
      v17 = v9;
      v28 = 4LL;
      v15 = a2;
      v30 = 1LL;
      LOBYTE(v11) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BD41, 0LL, 0LL, 5u, &pData);
    }
  }
  else
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
    {
      v26 = v12;
      v25 = (_QWORD *)(a1 + 40);
      v27 = &v17;
      v29 = &v15;
      v31 = &v16;
      v17 = v9;
      v28 = 4LL;
      v15 = a2;
      v30 = 1LL;
      v16 = a3;
      v32 = 1LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BE11, 0LL, 0LL, 6u, &pData);
      v10 = *(_DWORD *)(a1 + 544);
    }
    v13 = *(_QWORD *)(a1 + 64);
    v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)((_BYTE)a2 << 6)) & 0xC0;
    *(_DWORD *)(a1 + 544) = v11;
    if ( v13 )
    {
      memset_0(v19, 0, 0x40uLL);
      v19[0] = *(_QWORD *)(a1 + 40);
      v23 = v18;
      v19[1] = 0LL;
      v20 = 1;
      v21 = a2;
      v22 = a3;
      if ( (*(_BYTE *)(v13 + 128) & 2) != 0 )
      {
        LOBYTE(v11) = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v13 + 104))(v19, *(_QWORD *)(v13 + 120));
      }
      else
      {
        v11 = RmpWnfPublishMessageToClientStateName(v13 + 104, v19, 64LL, *(_QWORD *)(v13 + 112));
        if ( v11 < 0 && hProvider > 4u )
        {
          LOBYTE(v11) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL);
          if ( (_BYTE)v11 )
          {
            v26 = 8LL;
            v25 = v19;
            v18 = v20;
            v27 = &v18;
            v28 = 4LL;
            LOBYTE(v11) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088BA2, 0LL, 0LL, 4u, &pData);
          }
        }
      }
    }
  }
  return v11;
}
