/*
 * XREFs of ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007BF60
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800308B4 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180030900 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x180072F1C (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076684 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180076A64 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18007BC84 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 */

void __fastcall HampPdcWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  unsigned int v4; // edi
  DWORD CurrentThreadId; // eax
  struct _HOST_ACTIVITY_MANAGER *v6; // rcx
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // rdx
  struct _HOST_ACTIVITY_MANAGER *v10; // rcx
  char v11; // r8
  unsigned int v12; // edx
  unsigned int v13; // edx
  const struct _TlgProvider_t *v14; // rcx
  struct _HOST_ACTIVITY_MANAGER *v15; // rcx
  DWORD v16; // ebx
  const struct _TlgProvider_t *v17; // rcx
  _QWORD v18[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  char v21[144]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD *v23; // [rsp+108h] [rbp+0h]
  int v24; // [rsp+110h] [rbp+8h]
  int v25; // [rsp+114h] [rbp+Ch]
  __int64 *v26; // [rsp+118h] [rbp+10h]
  int v27; // [rsp+120h] [rbp+18h]
  int v28; // [rsp+124h] [rbp+1Ch]

  v4 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099EC4, 0LL, 0LL, 2u, &pData);
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  CurrentThreadId = GetCurrentThreadId();
  v6 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 8) = CurrentThreadId;
  HampManagerReleaseLockExclusive(v6);
  v8 = 0;
  while ( 1 )
  {
    HampManagerAcquireLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v7);
    if ( !*((_DWORD *)a2 + 11) )
      break;
    RtlQueryUnbiasedInterruptTime(v18);
    v10 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
    v19 = *((_QWORD *)a2 + 6);
    v4 = v18[0] / 0x2710uLL - *((_DWORD *)a2 + 11);
    HampManagerReleaseLockShared(v10, (v18[0] * (unsigned __int128)0x346DC5D63886594BuLL) >> 64);
    if ( v8 || v4 <= 0x3A980 )
    {
      v11 = 0;
    }
    else
    {
      v8 = 1;
      v11 = 1;
    }
    if ( !(unsigned int)HampPdcUpdateState((struct _HAM_PDC_CONTEXT *)a2, v4, v11) )
      goto LABEL_16;
    v12 = *((_DWORD *)a2 + 9);
    if ( v4 >= v12 && (v12 = *((_DWORD *)a2 + 10), v4 >= v12) )
      v13 = 0;
    else
      v13 = v12 - v4;
    v18[1] = -10000LL * v13;
    RtlWaitOnAddress(a2 + 48, &v19, 8LL);
  }
  HampManagerReleaseLockShared(*(struct _HOST_ACTIVITY_MANAGER **)a2, v9);
LABEL_16:
  HampSystemNotificationClientAcknowledge(*((void **)a2 + 1));
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
  {
    v25 = 0;
    v28 = 0;
    v23 = v18;
    v26 = &v20;
    LODWORD(v18[0]) = v4;
    v24 = 4;
    v20 = 0x1000000LL;
    v27 = 8;
    TlgWrite(v14, &unk_180099F3B, 0LL, 0LL, 4u, &pData);
  }
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a2);
  v15 = *(struct _HOST_ACTIVITY_MANAGER **)a2;
  *((_DWORD *)a2 + 8) = 0;
  HampManagerReleaseLockExclusive(v15);
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v16, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    TlgWrite(v17, &unk_18009A053, 0LL, 0LL, 2u, &pData);
}
