/*
 * XREFs of ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D104 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180012790 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C14 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C878 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002CAF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18002E36C (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18002E7D4 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18003B718 (-HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostTerminateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  int v4; // r14d
  unsigned __int64 v5; // r12
  unsigned int v6; // r15d
  unsigned int v7; // edi
  unsigned int v8; // r13d
  int v9; // esi
  int v10; // edi
  unsigned int v11; // edx
  unsigned int IsSuspendWaiter; // eax
  bool v13; // zf
  __int64 v14; // rdx
  DWORD v15; // ebx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v18[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  char v22[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  char *v27; // [rsp+120h] [rbp+20h]
  __int64 v28; // [rsp+128h] [rbp+28h]
  char *v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h]
  unsigned int *v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008AB9E, 0LL, 0LL, 2u, &pData);
  v4 = 0;
  v21 = *((_QWORD *)a2 - 4);
  v19 = 0;
  RtlQueryUnbiasedInterruptTime(v18);
  v5 = *(_QWORD *)v18 / 0x2710uLL;
  RmpAcquireGlobalLock();
  v6 = RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)a2);
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  v7 = (unsigned __int16)*((_DWORD *)a2 + 158);
  v8 = v7;
  v9 = HIWORD(*((_DWORD *)a2 + 158)) & 3;
  HampHostStartProcessPresenceChange((struct _RM_HAM_ACTIVITY_HOST *)a2);
  if ( v6 && HampHostShouldTerminate((struct _RM_HAM_ACTIVITY_HOST *)a2) )
  {
    if ( (v7 & 0xFFFFFF00) == 0x700 )
      HampHostInvalidateActivities(a2, v7, 0LL, 1LL);
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2);
    if ( (*((_QWORD *)a2 + 79) & 0x2000000000000LL) != 0
      && ((int)HampHostQueryProcessCount((struct _RM_HAM_ACTIVITY_HOST *)a2, &v20, v18) < 0 || v18[0] > v20) )
    {
      if ( v9 == 3 )
        RmHamHostActOnProcesses(
          (struct _RM_ACTIVITY_HOST *)(a2 - 64),
          0,
          1u,
          (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpLogTerminationForWerCallback,
          0LL);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 112LL))(*((_QWORD *)a2 + 135));
      v10 = 1;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 112LL))(*((_QWORD *)a2 + 135));
      if ( hProvider > 4u )
      {
        TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 12);
        v17 = a2[560];
        v27 = &v17;
        v29 = &v16;
        v31 = v18;
        v25 = &v21;
        v26 = 8LL;
        v28 = 1LL;
        v16 = v9;
        v30 = 1LL;
        v18[0] = v7;
        v32 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B212, 0LL, 0LL, 7u, &pData);
      }
      v10 = 0;
    }
    RtlQueryUnbiasedInterruptTime(v18);
    HampHostNotifyZeroProcess(
      a2,
      v9 & (unsigned int)-(v10 != 0),
      v10 != 0 ? v8 : 0,
      (unsigned int)(*(_QWORD *)v18 / 0x2710uLL) - (unsigned int)v5,
      &v19);
    v4 = v19;
  }
  *((_QWORD *)a2 + 79) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable(a2 + 656);
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a2, v11);
  *((_QWORD *)a2 + 79) &= ~0x800000000uLL;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a2, IsSuspendWaiter);
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2);
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v13 = (*((_QWORD *)a2 + 72))-- == 1LL;
    if ( v13 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(a2 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v13 = (*((_QWORD *)a2 + 72))-- == 1LL;
    if ( v13 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(a2 - 64));
    RmpReleaseGlobalLock();
  }
  RmpObjectRelease((struct _RM_OBJECT_HEADER *)(a2 - 64));
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    *(_QWORD *)&pDesc.Size = v14;
    pDesc.Ptr = (ULONGLONG)&v21;
    v25 = (__int64 *)&v16;
    v16 = v6;
    v26 = 1LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008ADE2, 0LL, 0LL, 4u, &pData);
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
}
