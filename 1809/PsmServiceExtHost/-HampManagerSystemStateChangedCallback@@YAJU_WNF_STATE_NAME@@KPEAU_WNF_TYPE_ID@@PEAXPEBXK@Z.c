/*
 * XREFs of ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800472C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     CemRcTableGetNext @ 0x18000858C (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18000BA38 (CemRcTableGetFirst.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FAC0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FB0C (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z @ 0x18006CC10 (-HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z.c)
 */

__int64 __fastcall HampManagerSystemStateChangedCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _HOST_ACTIVITY_MANAGER *a4,
        unsigned int *a5)
{
  __int64 i; // rax
  __int64 v7; // rbx
  DWORD v8; // ebx
  unsigned int v9; // eax
  unsigned int v11[4]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-48h] BYREF
  unsigned int *v14; // [rsp+F0h] [rbp-28h]
  int v15; // [rsp+F8h] [rbp-20h]
  int v16; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A9DD, 0LL, 0LL, 2u, &pData);
  HampManagerAcquireLockExclusive(a4);
  *((_DWORD *)a4 + 86) = *a5;
  HampManagerReleaseLockExclusive(a4);
  for ( i = CemRcTableGetFirst((__int64)a4 + 216); ; i = CemRcTableGetNext((_QWORD *)v7) )
  {
    v7 = i;
    if ( !i )
      break;
    HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(i + 80), 0);
    if ( HampActShouldBeRevoked((struct _HAM_ACTIVITY *)v7, v11) )
      HampActRequestStop(v7, 3u, 3, 6656, v11[0], 0LL);
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(v7 + 80));
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v9 = *a5;
    v16 = 0;
    v11[0] = v9;
    v14 = v11;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A88F, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
