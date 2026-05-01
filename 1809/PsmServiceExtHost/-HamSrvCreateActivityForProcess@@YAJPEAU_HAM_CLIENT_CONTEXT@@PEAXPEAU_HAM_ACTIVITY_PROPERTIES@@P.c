/*
 * XREFs of ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18000D62C
 * Callers:
 *     HamRpcSrvCreateActivityForProcess @ 0x180009E10 (HamRpcSrvCreateActivityForProcess.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009A80 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009E1C (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800101B0 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F4C (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019E60 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     HamOptInIsPsmKeyEnabledEx @ 0x18003931C (HamOptInIsPsmKeyEnabledEx.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCreateActivityForProcess(
        struct _HOST_ACTIVITY_MANAGER **a1,
        HANDLE Process,
        wchar_t *a3,
        unsigned __int64 *a4,
        unsigned __int8 *a5)
{
  DWORD v9; // r12d
  const WCHAR *v10; // r13
  DWORD ProcessId; // eax
  __int64 v12; // rdx
  DWORD LastError; // r9d
  int IsPsmKeyEnabled; // eax
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rbx
  int v17; // eax
  struct _HAM_ACTIVITY *v18; // rcx
  DWORD v20; // ebx
  int v21; // r10d
  int v22; // r11d
  int v23; // r11d
  int v24; // r10d
  int v25; // r9d
  int v26; // r11d
  int ProcessPsmInfo; // [rsp+30h] [rbp-D0h] BYREF
  char v29[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_ACTIVITY *v31; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v35[536]; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+278h] [rbp+178h]
  __int64 v37; // [rsp+280h] [rbp+180h]
  _BYTE v38[144]; // [rsp+290h] [rbp+190h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+320h] [rbp+220h] BYREF
  int *p_ProcessPsmInfo; // [rsp+340h] [rbp+240h]
  int v41; // [rsp+348h] [rbp+248h]
  int v42; // [rsp+34Ch] [rbp+24Ch]
  unsigned __int64 *v43; // [rsp+350h] [rbp+250h]
  int v44; // [rsp+358h] [rbp+258h]
  int v45; // [rsp+35Ch] [rbp+25Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+360h] [rbp+260h] BYREF
  int *v47; // [rsp+370h] [rbp+270h]
  int v48; // [rsp+378h] [rbp+278h]
  int v49; // [rsp+37Ch] [rbp+27Ch]
  __int64 *v50; // [rsp+380h] [rbp+280h]
  int v51; // [rsp+388h] [rbp+288h]
  int v52; // [rsp+38Ch] [rbp+28Ch]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+390h] [rbp+290h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+3A0h] [rbp+2A0h] BYREF
  struct _HAM_ACTIVITY **v55; // [rsp+3B0h] [rbp+2B0h]
  int v56; // [rsp+3B8h] [rbp+2B8h]
  int v57; // [rsp+3BCh] [rbp+2BCh]
  struct _RM_HAM_ACTIVITY_HOST **v58; // [rsp+3C0h] [rbp+2C0h]
  int v59; // [rsp+3C8h] [rbp+2C8h]
  int v60; // [rsp+3CCh] [rbp+2CCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3D0h] [rbp+2D0h] BYREF

  v33 = -1LL;
  v31 = 0LL;
  v29[0] = 1;
  v32 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v30 = 0;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A000, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v38);
  if ( !(unsigned int)HampUtilCheckAndSanitizeActivityProperties(a3) )
    goto LABEL_29;
  ProcessId = GetProcessId(Process);
  v9 = ProcessId;
  if ( !ProcessId )
  {
    if ( (int)GetLastError() <= 0 )
    {
      LastError = GetLastError();
      goto LABEL_31;
    }
    LOWORD(IsPsmKeyEnabled) = GetLastError();
LABEL_35:
    LastError = (unsigned __int16)IsPsmKeyEnabled | 0xC0070000;
    goto LABEL_31;
  }
  ProcessPsmInfo = RmpSystemGetProcessPsmInfo(ProcessId, (struct _RM_PSM_HOST_INFO *)v35);
  LastError = ProcessPsmInfo;
  if ( ProcessPsmInfo < 0 )
    goto LABEL_21;
  v10 = (const WCHAR *)v35;
  v30 = v36;
  v33 = v37;
  if ( !a5 )
    goto LABEL_9;
  IsPsmKeyEnabled = HamOptInIsPsmKeyEnabledEx(v35, v12, v29, (unsigned int)ProcessPsmInfo);
  LastError = IsPsmKeyEnabled;
  if ( IsPsmKeyEnabled )
  {
    if ( IsPsmKeyEnabled <= 0 )
      goto LABEL_31;
    goto LABEL_35;
  }
  if ( !v29[0] )
  {
    *a4 = -1LL;
    LastError = 0;
    *a5 = 0;
    goto LABEL_31;
  }
LABEL_9:
  if ( !(unsigned int)HampUtilAreActivityPropertiesValid(
                        (struct _RM_PSM_HOST_INFO *)v35,
                        (struct _HAM_ACTIVITY_PROPERTIES *)a3) )
  {
LABEL_29:
    LastError = -1073741583;
LABEL_31:
    ProcessPsmInfo = LastError;
    goto LABEL_21;
  }
  HostWithFullInfo = RmHamFindHostWithFullInfo(*a1, (struct _RM_PSM_HOST_INFO *)v35, &v32);
  v16 = v32;
  LastError = HostWithFullInfo;
  ProcessPsmInfo = HostWithFullInfo;
  if ( HostWithFullInfo >= 0 )
  {
    v17 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, *a1, v32, (struct _HAM_ACTIVITY_PROPERTIES *)a3, 0, &v31);
    v18 = v31;
    LastError = v17;
    ProcessPsmInfo = v17;
    if ( v17 >= 0 )
    {
      v34 = *((_QWORD *)v31 + 5);
      *a4 = v34;
      if ( a5 )
        *a5 = 1;
      LastError = 0;
      ProcessPsmInfo = 0;
    }
    if ( v18 )
    {
      CemRcObjectDereference(v18);
      LastError = ProcessPsmInfo;
    }
  }
  if ( v16 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v16 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v16 - 64));
    RmpReleaseGlobalLock();
    LastError = ProcessPsmInfo;
  }
LABEL_21:
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v20, 0LL);
    LastError = ProcessPsmInfo;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v42 = 0;
    v45 = 0;
    p_ProcessPsmInfo = &ProcessPsmInfo;
    v41 = v22;
    v43 = &v34;
    v44 = v21;
    TlgCreateWsz(&pDesc, v10);
    v49 = 0;
    v52 = 0;
    v47 = &v30;
    v50 = &v33;
    v48 = v23;
    v51 = v24;
    TlgCreateWsz(&v53, a3 + 6);
    TlgCreateWsz(&v54, a3 + 70);
    v57 = 0;
    v25 = *(_DWORD *)a3;
    v60 = 0;
    v55 = &v31;
    v58 = &v32;
    LODWORD(v31) = v25;
    v56 = v26;
    LODWORD(v32) = v9;
    v59 = v26;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A1A8, 0LL, 0LL, 0xBu, &v39);
    return (DWORD)ProcessPsmInfo;
  }
  return LastError;
}
