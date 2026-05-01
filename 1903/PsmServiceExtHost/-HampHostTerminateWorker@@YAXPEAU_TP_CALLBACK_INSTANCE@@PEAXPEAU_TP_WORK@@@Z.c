/*
 * XREFs of ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DA90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18000D648 (-HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REAS.c)
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000D7B4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000DE78 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18000DEEC (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000DF90 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E230 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000E2C0 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012D40 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018884 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180022100 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002BED0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampHostTerminateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  int v4; // edi
  unsigned __int64 v5; // r12
  unsigned int v6; // r15d
  __int64 v7; // r14
  unsigned int v8; // esi
  unsigned int v9; // r13d
  unsigned int v10; // edx
  int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int IsSuspendWaiter; // eax
  unsigned int v15; // edx
  bool v16; // zf
  __int64 v17; // rdx
  DWORD v18; // ebx
  char v19; // al
  char v20; // [rsp+38h] [rbp-D0h] BYREF
  char v21; // [rsp+39h] [rbp-CFh] BYREF
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v25[144]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-10h]
  _QWORD *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  char *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v32; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+148h] [rbp+40h] BYREF
  _QWORD *v34; // [rsp+158h] [rbp+50h]
  int v35; // [rsp+160h] [rbp+58h]
  int v36; // [rsp+164h] [rbp+5Ch]
  char *v37; // [rsp+168h] [rbp+60h]
  int v38; // [rsp+170h] [rbp+68h]
  int v39; // [rsp+174h] [rbp+6Ch]
  char *v40; // [rsp+178h] [rbp+70h]
  int v41; // [rsp+180h] [rbp+78h]
  int v42; // [rsp+184h] [rbp+7Ch]
  unsigned __int64 *v43; // [rsp+188h] [rbp+80h]
  int v44; // [rsp+190h] [rbp+88h]
  int v45; // [rsp+194h] [rbp+8Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800987AD, 0LL, 0LL, 2u, &pData);
  v4 = 0;
  v24[0] = *((_QWORD *)a2 - 4);
  v22 = 0;
  RtlQueryUnbiasedInterruptTime(&v23);
  pData.Ptr = 0LL;
  v5 = v23 / 0x2710;
  *(_QWORD *)&pData.Size = 0LL;
  v27 = 0LL;
  RmpAcquireGlobalLock();
  v6 = RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)a2);
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  v7 = *((_QWORD *)a2 + 81) >> 16;
  v8 = (unsigned __int16)*((_DWORD *)a2 + 162);
  v9 = WORD1(*((_QWORD *)a2 + 81)) & 3;
  HampHostStartProcessPresenceChange((struct _RM_HAM_ACTIVITY_HOST *)a2);
  if ( v6 && HampHostShouldTerminate((struct _RM_HAM_ACTIVITY_HOST *)a2) )
  {
    v11 = 1;
    if ( (v8 & 0xFFFFFF00) == 0x700 )
      HampHostInvalidateActivities(a2, v8, 0LL, 1LL);
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, v10);
    if ( (*((_QWORD *)a2 + 81) & 0x2000000000000LL) == 0
      || (int)RmHamHostGetProcessesInfo(
                (struct _RM_ACTIVITY_HOST *)(a2 - 64),
                0x1000u,
                1u,
                (struct _HAM_PROCESS_SNAPSHOT *)&pData) >= 0
      && (v12 = HampHostQueryAndLogTerminatingProcessCount((__int64)&pData, v8), (unsigned int)v27 <= v12) )
    {
      if ( dword_1800AB2C0 > 4u )
      {
        TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 12);
        v19 = a2[560];
        v36 = 0;
        v39 = 0;
        v42 = 0;
        v45 = 0;
        v21 = v19;
        v37 = &v21;
        v40 = &v20;
        v43 = &v23;
        v34 = v24;
        v35 = 8;
        v38 = 1;
        v20 = v7 & 3;
        v41 = 1;
        LODWORD(v23) = v8;
        v44 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800989C0, 0LL, 0LL, 7u, &v32);
      }
      v11 = 0;
    }
    HampHostTerminateWithProcessBoost((HANDLE *)a2, (struct _HAM_PROCESS_SNAPSHOT *)&pData);
    RtlQueryUnbiasedInterruptTime(&v23);
    HampHostNotifyZeroProcess(
      a2,
      v11 != 0 ? v9 : 0,
      v11 != 0 ? v8 : 0,
      (unsigned int)(v23 / 0x2710) - (unsigned int)v5,
      &v22);
    v4 = v22;
  }
  *((_QWORD *)a2 + 81) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable(a2 + 680);
  IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a2, v13);
  *((_QWORD *)a2 + 81) &= ~0x800000000uLL;
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a2, IsSuspendWaiter);
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, v15);
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&pData);
  if ( v4 )
  {
    RmpAcquireGlobalLock();
    v16 = (*((_QWORD *)a2 + 74))-- == 1LL;
    if ( v16 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(a2 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v16 = (*((_QWORD *)a2 + 74))-- == 1LL;
    if ( v16 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(a2 - 64));
    RmpReleaseGlobalLock();
  }
  RmpObjectRelease(a2 - 64);
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v29 = v17;
    v28 = v24;
    v30 = &v20;
    v20 = v6;
    v31 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098C63, 0LL, 0LL, 4u, &pData);
  }
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
}
