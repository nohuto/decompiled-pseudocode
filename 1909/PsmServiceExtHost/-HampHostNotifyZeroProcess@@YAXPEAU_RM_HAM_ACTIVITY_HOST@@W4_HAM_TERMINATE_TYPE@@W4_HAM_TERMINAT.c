/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000E2C0
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000DA90 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002F2C8 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18000A9EC (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18000DEEC (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E664 (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E6A0 (-HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000E708 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18000E7AC (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18000F2FC (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800130CC (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800131F0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013534 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013580 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostNotifyZeroProcess(__int64 a1, int a2, unsigned int a3, int a4, _DWORD *a5)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int128 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r11
  unsigned __int64 v15; // rax
  __int64 v17; // rbx
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+31h] [rbp-CFh] BYREF
  char v20; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h]
  unsigned int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  char *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  char *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  unsigned int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  char *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  __int64 *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  WCHAR pwsz[136]; // [rsp+140h] [rbp+40h] BYREF

  v22 = a2;
  if ( (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 968);
    if ( (int)HampUtilQueryHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, &v26) < 0
      || (v9 = v26, v26 == -1LL) )
    {
      v9 = v8;
    }
    HampUtilSaveHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, (v8 >> 1) + (v9 >> 1));
    if ( *(_DWORD *)(a1 + 560) == 2 )
      HampAppSaveTerminateReason(*(_QWORD *)(a1 + 776), a3);
    HampHostUpdateUsageInfoProcesses((struct _RM_HAM_ACTIVITY_HOST *)a1);
  }
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v10 = *(_QWORD *)(a1 + 800) + 1LL;
  HampHostInvalidateActivities((struct _RM_HAM_ACTIVITY_HOST *)a1, a3, v10, 0);
  if ( (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 )
  {
    *a5 = 1;
    if ( *(_DWORD *)(a1 + 836) )
    {
      RtlQueryUnbiasedInterruptTime(&v27);
      v11 = v27 * (unsigned __int128)0x346DC5D63886594BuLL;
      v12 = v27 / 0x2710 - *(_DWORD *)(a1 + 836);
    }
    else
    {
      v12 = 0;
    }
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1800AB2C0, BYTE8(v11), 0LL) )
    {
      v21 = 130;
      HampUtilGetAumidFromPsmKey((const unsigned __int16 *)(a1 + 24), &v21, pwsz);
      if ( dword_1800AB2C0 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
        {
          TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 24));
          v13 = *(_QWORD *)(a1 - 32);
          v33 = &v28;
          v18 = *(_BYTE *)(a1 + 560);
          v35 = &v18;
          v19 = v22;
          v37 = &v19;
          v39 = &v23;
          v41 = &v24;
          v43 = &v25;
          v20 = (unsigned __int64)*(unsigned int *)(a1 + 648) >> 18;
          v45 = &v20;
          v29 = v10 - 1;
          v28 = v13;
          v47 = &v29;
          v34 = 8LL;
          v36 = 1LL;
          v38 = 1LL;
          v23 = a3;
          v40 = v14;
          v24 = v12;
          v42 = v14;
          v25 = a4;
          v44 = v14;
          v46 = 1LL;
          v48 = 8LL;
          TlgCreateWsz(&v49, pwsz);
          v30 = 0x1000000LL;
          v50 = &v30;
          v51 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800986B4, 0LL, 0LL, 0xDu, &pData);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 560) == 2 )
    {
      v17 = *(_QWORD *)(a1 + 776);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v17);
      *(_WORD *)(v17 + 608) = a3;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v17);
    }
  }
  else
  {
    *a5 = 0;
  }
  *(_QWORD *)(a1 + 648) &= 0xFFFFFFFFFFFCFFFFuLL;
  *(_QWORD *)(a1 + 832) = 0LL;
  *(_WORD *)(a1 + 648) = 0;
  v15 = *(_QWORD *)(a1 + 648) & 0xFFEDFFFFFD97FFFFuLL;
  *(_QWORD *)(a1 + 800) = v10;
  *(_QWORD *)(a1 + 952) = 0LL;
  *(_QWORD *)(a1 + 648) = v15 | 0x1940000;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_DWORD *)(a1 + 840) = 0;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)a1);
  HampHostCheckCancelCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RtlWakeAddressAll(a1 + 800);
  HampHostCheckQueueDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)a1);
  return HampHostChangeApplicationExecutionState(a1, 3LL);
}
