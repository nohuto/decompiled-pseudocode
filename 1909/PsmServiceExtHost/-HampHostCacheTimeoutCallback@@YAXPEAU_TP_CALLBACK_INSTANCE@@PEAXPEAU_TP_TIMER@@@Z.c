/*
 * XREFs of ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E6D8 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampHostCacheTimeoutCallback(struct _TP_CALLBACK_INSTANCE *a1, void *a2, struct _TP_TIMER *a3)
{
  int v4; // edi
  unsigned int v5; // edx
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rax
  DWORD v9; // ebx
  __int64 v10; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v13; // [rsp+F0h] [rbp-28h]
  int v14; // [rsp+F8h] [rbp-20h]
  int v15; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v4 = 0;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098BE0, 0LL, 0LL, 2u, &pData);
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  if ( HampHostIsCached((struct _RM_HAM_ACTIVITY_HOST *)a2) )
    v4 = HampHostQueueTerminateEx(v6, 1LL, 2560LL, 0LL, 1, 0);
  *((_QWORD *)a2 + 81) &= ~0x4000000000000uLL;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, v5);
  if ( v4 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a2 + 86));
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v8 = *((_QWORD *)a2 - 4);
    v15 = 0;
    v10 = v8;
    v13 = &v10;
    v14 = v7;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098CE5, 0LL, 0LL, 3u, &pData);
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v9, 0LL);
  }
}
