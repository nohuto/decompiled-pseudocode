/*
 * XREFs of ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18002E36C
 * Callers:
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EBC8 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FDD0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000CB60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampHostChangeApplicationExternalState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180013DA4 (-HampHostChangeApplicationExternalState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_EXTERNAL_APPLICATI.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015E08 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E708 (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E744 (-HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18002E7D4 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002E858 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18002E8FC (-HampUtilSaveHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18002F4EC (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18002F614 (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostNotifyZeroProcess(__int64 a1, int a2, unsigned int a3, int a4, _DWORD *a5)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int128 v11; // rax
  int v12; // ebx
  __int64 v13; // r9
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+120h] [rbp+20h] BYREF
  WCHAR pwsz[136]; // [rsp+130h] [rbp+30h] BYREF

  v22 = a2;
  if ( (*(_QWORD *)(a1 + 632) & 0x2000000000000LL) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 944);
    if ( (int)HampUtilQueryHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, &v26) < 0
      || (v9 = v26, v26 == -1LL) )
    {
      v9 = v8;
    }
    HampUtilSaveHostHistoricCommitUse((struct _RM_HAM_ACTIVITY_HOST *)a1, (v8 >> 1) + (v9 >> 1));
    if ( *(_DWORD *)(a1 + 560) == 2 )
      HampAppSaveTerminateReason(*(_QWORD *)(a1 + 752), a3);
  }
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v10 = *(_QWORD *)(a1 + 776) + 1LL;
  HampHostInvalidateActivities(a1, a3, v10, 0LL);
  if ( (*(_QWORD *)(a1 + 632) & 0x2000000000000LL) != 0 )
  {
    *a5 = 1;
    if ( *(_DWORD *)(a1 + 812) )
    {
      RtlQueryUnbiasedInterruptTime(&v27);
      v11 = v27 * (unsigned __int128)0x346DC5D63886594BuLL;
      v12 = v27 / 0x2710 - *(_DWORD *)(a1 + 812);
    }
    else
    {
      v12 = 0;
    }
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, BYTE8(v11), 0LL) )
    {
      v21 = 130;
      HampUtilGetAumidFromPsmKey((const unsigned __int16 *)(a1 + 24), &v21, pwsz);
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
        {
          TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 24));
          v13 = *(_QWORD *)(a1 - 32);
          v32 = &v28;
          v18 = *(_BYTE *)(a1 + 560);
          v34 = &v18;
          v19 = v22;
          v36 = &v19;
          v38 = (int *)&v23;
          v40 = &v24;
          v42 = &v25;
          v20 = (unsigned __int64)*(unsigned int *)(a1 + 632) >> 18;
          v44 = &v20;
          v29 = v10 - 1;
          v46 = &v29;
          v28 = v13;
          v33 = 8LL;
          v35 = 1LL;
          v37 = 1LL;
          v23 = a3;
          v39 = v14;
          v24 = v12;
          v41 = v14;
          v25 = a4;
          v43 = v14;
          v45 = 1LL;
          v47 = 8LL;
          TlgCreateWsz(&v48, pwsz);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008AAB5, 0LL, 0LL, 0xCu, &pData);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 560) == 2 )
    {
      v17 = *(_QWORD *)(a1 + 752);
      HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v17);
      *(_DWORD *)(v17 + 608) &= 0xFFF80007;
      *(_DWORD *)(v17 + 608) |= 8 * (unsigned __int16)a3;
      HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v17);
    }
  }
  else
  {
    *a5 = 0;
  }
  *(_QWORD *)(a1 + 632) &= 0xFFFFFFFFFFFCFFFFuLL;
  *(_QWORD *)(a1 + 808) = 0LL;
  *(_WORD *)(a1 + 632) = 0;
  v15 = *(_QWORD *)(a1 + 632) & 0xFFEDFFFFFD97FFFFuLL;
  *(_QWORD *)(a1 + 776) = v10;
  *(_QWORD *)(a1 + 928) = 0LL;
  *(_QWORD *)(a1 + 632) = v15 | 0x1940000;
  *(_QWORD *)(a1 + 944) = 0LL;
  *(_DWORD *)(a1 + 816) = 0;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)a1);
  HampHostCheckCancelCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)a1);
  RtlWakeAddressAll(a1 + 776);
  HampHostCheckQueueDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)a1);
  return HampHostChangeApplicationExternalState(a1, 3u);
}
