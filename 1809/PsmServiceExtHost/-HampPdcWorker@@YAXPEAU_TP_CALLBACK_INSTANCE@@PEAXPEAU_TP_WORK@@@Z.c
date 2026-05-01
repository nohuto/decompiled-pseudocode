/*
 * XREFs of ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006E140
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FAC0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FB0C (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x180065E20 (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068BA0 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180068F94 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18006DF64 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 */

void __fastcall HampPdcWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  unsigned int v4; // edi
  DWORD CurrentThreadId; // eax
  struct _HOST_ACTIVITY_MANAGER *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct _HOST_ACTIVITY_MANAGER *v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // edx
  const struct _TlgProvider_t *v12; // rcx
  struct _HOST_ACTIVITY_MANAGER *v13; // rcx
  DWORD v14; // ebx
  const struct _TlgProvider_t *v15; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD *v20; // [rsp+100h] [rbp+0h]
  int v21; // [rsp+108h] [rbp+8h]
  int v22; // [rsp+10Ch] [rbp+Ch]

  v4 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BFCE, 0LL, 0LL, 2u, &pData);
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 8) = CurrentThreadId;
  HampManagerReleaseLockExclusive(v6);
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v7);
    if ( !*((_DWORD *)a2 + 11) )
      break;
    RtlQueryUnbiasedInterruptTime(v16);
    v9 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
    v17 = *((_QWORD *)a2 + 6);
    v4 = v16[0] / 0x2710uLL - *((_DWORD *)a2 + 11);
    HampManagerReleaseLockShared(v9, (v16[0] * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
    if ( !(unsigned int)HampPdcUpdateState((struct _HAM_PDC_CONTEXT *)a2, v4) )
      goto LABEL_12;
    v10 = *((_DWORD *)a2 + 9);
    if ( v4 >= v10 && (v10 = *((_DWORD *)a2 + 10), v4 >= v10) )
      v11 = 0;
    else
      v11 = v10 - v4;
    v16[1] = -10000LL * v11;
    RtlWaitOnAddress(a2 + 48, &v17, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v8);
LABEL_12:
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 1));
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
  {
    v22 = 0;
    v20 = v16;
    LODWORD(v16[0]) = v4;
    v21 = 4;
    TlgWrite(v12, &unk_18008C11B, 0LL, 0LL, 3u, &pData);
  }
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v13 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 8) = 0;
  HampManagerReleaseLockExclusive(v13);
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
    TlgWrite(v15, &unk_18008C14D, 0LL, 0LL, 2u, &pData);
}
