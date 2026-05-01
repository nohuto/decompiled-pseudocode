/*
 * XREFs of ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x1800743DC
 * Callers:
 *     HamRpcSrvIsHostBeingDebugged @ 0x180079DF0 (HamRpcSrvIsHostBeingDebugged.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AACC (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180037D44 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x18003C434 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
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
  unsigned __int8 *v8; // rsi
  char v13; // di
  unsigned int v14; // r9d
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rbx
  int IsDebugEnabled; // eax
  DWORD v19; // ebx
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // r10
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v26; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v27; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[144]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[280]; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+320h] [rbp+220h] BYREF
  int *v31; // [rsp+340h] [rbp+240h]
  __int64 v32; // [rsp+348h] [rbp+248h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+350h] [rbp+250h] BYREF
  unsigned int *v34; // [rsp+360h] [rbp+260h]
  __int64 v35; // [rsp+368h] [rbp+268h]
  unsigned __int64 *v36; // [rsp+370h] [rbp+270h]
  __int64 v37; // [rsp+378h] [rbp+278h]
  char *v38; // [rsp+380h] [rbp+280h]
  __int64 v39; // [rsp+388h] [rbp+288h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+390h] [rbp+290h] BYREF

  v8 = a8;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800972F9, 0LL, 0LL, 2u, &pData);
  v13 = 0;
  v27 = 0LL;
  v26 = 0;
  v25 = HampUtilValidateAndCapturePsmInformation(pszDest, a2, a3, a4, a5, a6, a7);
  v14 = v25;
  if ( v25 >= 0 )
  {
    HostWithFullInfo = RmHamFindHostWithFullInfo(*a1, (struct _RM_PSM_HOST_INFO *)pszDest, &v27);
    v16 = v27;
    v14 = HostWithFullInfo;
    v25 = HostWithFullInfo;
    if ( HostWithFullInfo >= 0 )
    {
      IsDebugEnabled = HampHostQueryIsDebugEnabled(v27, &v26);
      v13 = v26;
      v14 = IsDebugEnabled;
      v25 = IsDebugEnabled;
      if ( IsDebugEnabled >= 0 )
      {
        v25 = 0;
        v14 = 0;
        *v8 = v26 != 0;
      }
    }
    if ( v16 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v16 + 74))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v16 - 64));
      RmpReleaseGlobalLock();
      v14 = v25;
    }
  }
  v19 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v19, 0LL);
    v14 = v25;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v32 = v20;
    v31 = &v25;
    TlgCreateWsz(&pDesc, a2);
    v26 = a6;
    v34 = &v26;
    v36 = &a7;
    v38 = &v24;
    v35 = v21;
    v37 = v22;
    v24 = v13;
    v39 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097A26, 0LL, 0LL, 7u, &v30);
    return (unsigned int)v25;
  }
  return v14;
}
