/*
 * XREFs of ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027E60
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013534 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013580 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180024030 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800246B0 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B8A8 (-HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B8E0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BCDC (-HampSystemSuspendStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003DA58 (-HampSystemRundownStoreLicense@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18004936C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007933C (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800793D8 (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCheckDowngradeLicense(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned int *v8; // r14
  unsigned int v9; // r12d
  int v10; // r13d
  struct _RM_HAM_ACTIVITY_HOST *v11; // rdx
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // rsi
  unsigned int v13; // edx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rdx
  __int64 v15; // rdx
  __int64 v17; // rdx
  int v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  int v20[4]; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v22; // [rsp+70h] [rbp-19h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  __int64 *v25; // [rsp+90h] [rbp+7h]
  __int64 v26; // [rsp+98h] [rbp+Fh]

  if ( (*((_BYTE *)a2 + 772) & 1) == 0 )
    return 0LL;
  if ( *((_QWORD *)a2 + 81) >> 62 )
    return 0LL;
  RmHamHostGetCurrentState(a2, (union _RM_OPTIMIZATION_STATE *)v20, (union _RM_OPTIMIZATION_STATE *)&v19);
  if ( (v20[0] & 0x100) == 0 || (v19 & 0x100) != 0 )
    return 0LL;
  v5 = *((_QWORD *)a2 + 82);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      v6 = *((_QWORD *)a2 + 81);
      if ( (v6 & 0x2000000000000LL) == 0 )
        goto LABEL_11;
    }
    return 0LL;
  }
  v6 = *((_QWORD *)a2 + 81);
LABEL_11:
  v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)a2 + 82) = v7;
  if ( (v6 & 0x2000000000000LL) == 0 )
    *((_QWORD *)a2 + 82) = v7 & 0xFFFFFFFFFFFFFFFDuLL;
  HampHostReleaseLockExclusiveEx(a2, v6);
  RmpReleaseGlobalLock();
  HampAppAcquireLockExclusive(a1);
  v8 = (unsigned int *)((char *)a1 + 608);
  v9 = *((_DWORD *)a1 + 152);
  if ( (v9 & 0x100000) != 0 )
  {
    do
    {
      HampAppTraceWaitForLicenseWorkerForHost(a2);
      HampAppWaitForFlagChange(a1);
      v9 = *v8;
    }
    while ( (*v8 & 0x100000) != 0 );
  }
  *v8 = v9 & 0xFE0FFFFF | 0x100000;
  HampAppReleaseLockExclusive(a1);
  v10 = 0;
  FirstHost = HampAppGetFirstHost(a1);
  if ( FirstHost )
  {
    while ( 1 )
    {
      HampHostAcquireLockExclusiveEx(FirstHost, 0);
      if ( *((_QWORD *)FirstHost + 81) >= 0x4000000000000000uLL || HampHostIsRunnable(FirstHost) )
        break;
      v10 |= (*((_QWORD *)FirstHost + 81) >> 49) & 1;
      HampHostReleaseLockExclusiveEx(FirstHost, v13);
      FirstHost = HampAppGetNextHost(FirstHost);
      if ( !FirstHost )
        goto LABEL_18;
    }
    HampHostReleaseLockExclusiveEx(FirstHost, v13);
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)FirstHost + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)FirstHost - 64));
    RmpReleaseGlobalLock();
    HampAppAcquireLockExclusive(a1);
    *v8 = v9 & 0x600000 | *v8 & 0xFE1FFFFF | v9 & 0x1800000;
    HampAppReleaseLockExclusive(a1);
  }
  else
  {
LABEL_18:
    v18 = HampSystemSuspendStoreLicense(a1, v11);
    if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    {
      v23 = 4LL;
      v22 = &v18;
      TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 12);
      v15 = *((_QWORD *)a2 - 4);
      v25 = &v19;
      v19 = v15;
      v26 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800996AA, 0LL, 0LL, 5u, &pData);
    }
    if ( !v10 )
    {
      v18 = HampSystemRundownStoreLicense(a1, v14);
      if ( dword_1800AB2C0 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
        {
          v23 = 4LL;
          v22 = &v18;
          TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 12);
          v17 = *((_QWORD *)a2 - 4);
          v25 = &v19;
          v19 = v17;
          v26 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800994D6, 0LL, 0LL, 5u, &pData);
        }
      }
    }
    HampAppCheckQueueHostWorkersPostLicensing(a1, a2);
  }
  HampAppAcquireLockExclusive(a1);
  *v8 &= ~0x100000u;
  RtlWakeAddressAll((char *)a1 + 608);
  HampAppReleaseLockExclusive(a1);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a2, 0);
  return 1LL;
}
