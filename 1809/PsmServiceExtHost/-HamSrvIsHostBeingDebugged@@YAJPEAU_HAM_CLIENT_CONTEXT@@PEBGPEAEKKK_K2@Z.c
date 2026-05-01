/*
 * XREFs of ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180067184
 * Callers:
 *     HamRpcSrvIsHostBeingDebugged @ 0x18006BF50 (HamRpcSrvIsHostBeingDebugged.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800109AC (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F4C (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x1800145EC (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvIsHostBeingDebugged(
        struct _HOST_ACTIVITY_MANAGER **a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // r14
  unsigned int v13; // r9d
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  DWORD v17; // ebx
  int v18; // r11d
  int v19; // r11d
  int v20; // r10d
  int IsDebugEnabled; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v23; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v24[144]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszDest[280]; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+310h] [rbp+210h] BYREF
  int *p_IsDebugEnabled; // [rsp+330h] [rbp+230h]
  int v28; // [rsp+338h] [rbp+238h]
  int v29; // [rsp+33Ch] [rbp+23Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+340h] [rbp+240h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v31; // [rsp+350h] [rbp+250h]
  int v32; // [rsp+358h] [rbp+258h]
  int v33; // [rsp+35Ch] [rbp+25Ch]
  unsigned __int64 *v34; // [rsp+360h] [rbp+260h]
  int v35; // [rsp+368h] [rbp+268h]
  int v36; // [rsp+36Ch] [rbp+26Ch]
  unsigned __int8 *v37; // [rsp+370h] [rbp+270h]
  int v38; // [rsp+378h] [rbp+278h]
  int v39; // [rsp+37Ch] [rbp+27Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF

  v8 = a8;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800895CE, 0LL, 0LL, 2u, &pData);
  v23 = 0LL;
  IsDebugEnabled = HampUtilValidateAndCapturePsmInformation(pszDest, a2, a3, a4, a5, a6, a7);
  v13 = IsDebugEnabled;
  if ( IsDebugEnabled >= 0 )
  {
    HostWithFullInfo = RmHamFindHostWithFullInfo(*a1, (struct _RM_PSM_HOST_INFO *)pszDest, &v23);
    v15 = v23;
    v13 = HostWithFullInfo;
    IsDebugEnabled = HostWithFullInfo;
    if ( HostWithFullInfo >= 0 )
    {
      IsDebugEnabled = HampHostQueryIsDebugEnabled(v23, (unsigned int *)&v23);
      v13 = IsDebugEnabled;
      if ( IsDebugEnabled >= 0 )
      {
        v13 = 0;
        IsDebugEnabled = 0;
        *v8 = (_DWORD)v23 != 0;
      }
    }
    if ( v15 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v15 + 72))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v15 - 64));
      RmpReleaseGlobalLock();
      v13 = IsDebugEnabled;
    }
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
    v13 = IsDebugEnabled;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v29 = 0;
    p_IsDebugEnabled = &IsDebugEnabled;
    v28 = v18;
    TlgCreateWsz(&pDesc, a2);
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v31 = &v23;
    v34 = &a7;
    LODWORD(v23) = a6;
    v32 = v19;
    v35 = v20;
    v37 = v8;
    v38 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089D1D, 0LL, 0LL, 7u, &v26);
    return (unsigned int)IsDebugEnabled;
  }
  return v13;
}
