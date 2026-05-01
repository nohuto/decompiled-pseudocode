/*
 * XREFs of ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000EE8C
 * Callers:
 *     PsmHamRegisterProcess @ 0x18000CDB0 (PsmHamRegisterProcess.c)
 * Callees:
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x18000CDEC (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x18000CE6C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C34 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x1800145EC (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRegisterProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v10; // edi
  unsigned int v11; // ebx
  ULONG v12; // eax
  int v13; // r9d
  int v14; // eax
  struct _RM_HAM_ACTIVITY_HOST *v15; // rbx
  DWORD v17; // ebx
  DWORD ProcessId; // eax
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v25; // [rsp+60h] [rbp-A0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t pszDest[280]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+330h] [rbp+230h] BYREF
  int *v29; // [rsp+350h] [rbp+250h]
  __int64 v30; // [rsp+358h] [rbp+258h]
  DWORD *v31; // [rsp+360h] [rbp+260h]
  __int64 v32; // [rsp+368h] [rbp+268h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+370h] [rbp+270h] BYREF
  unsigned __int64 *v34; // [rsp+380h] [rbp+280h]
  __int64 v35; // [rsp+388h] [rbp+288h]
  int *v36; // [rsp+390h] [rbp+290h]
  __int64 v37; // [rsp+398h] [rbp+298h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+3A0h] [rbp+2A0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v39; // [rsp+3B0h] [rbp+2B0h]
  __int64 v40; // [rsp+3B8h] [rbp+2B8h]
  struct _GUID *v41; // [rsp+3C0h] [rbp+2C0h]
  __int64 v42; // [rsp+3C8h] [rbp+2C8h]
  unsigned __int64 *v43; // [rsp+3D0h] [rbp+2D0h]
  __int64 v44; // [rsp+3D8h] [rbp+2D8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+3E0h] [rbp+2E0h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800898C5, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  v21 = 0LL;
  v24 = -1LL;
  HampSystemQueryProcessAppSessionGuid(a2, &v25);
  v10 = a6;
  if ( (a6 & 4) != 0 )
    v11 = 8;
  else
    v11 = (a6 & 8) != 0 ? 4 : 2;
  v12 = RtlLengthSid((char *)a4 + 472);
  v20 = HampUtilValidateAndCapturePsmInformation(
          pszDest,
          (STRSAFE_PCNZWCH)a4 + 4,
          (char *)a4 + 472,
          v12,
          *(_DWORD *)a4,
          v11,
          a5);
  v13 = v20;
  if ( v20 >= 0 )
  {
    v14 = HampHostFindOrCreate(a1, (struct _RM_PSM_HOST_INFO *)pszDest, &v21);
    v15 = v21;
    v20 = v14;
    v13 = v14;
    if ( v14 >= 0 )
    {
      v13 = HampHostRegisterProcess(v21, a2, a3, a4, a5, v10, &v24);
      if ( v13 >= 0 )
        v13 = 0;
      v20 = v13;
    }
    if ( v15 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v15 + 72))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v15 - 64));
      RmpReleaseGlobalLock();
      v13 = v20;
    }
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
    v13 = v20;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
  {
    v30 = 4LL;
    v29 = &v20;
    ProcessId = GetProcessId(a2);
    v32 = 4LL;
    v22 = ProcessId;
    v31 = &v22;
    TlgCreateWsz(&pDesc, (LPCWSTR)a4 + 4);
    v23 = *(_DWORD *)a4;
    v34 = &a5;
    v36 = &v23;
    v35 = 8LL;
    v37 = 4LL;
    TlgCreateSid(&v38, (const SID *)((char *)a4 + 472));
    LODWORD(v21) = v10;
    v39 = &v21;
    v41 = &v25;
    v43 = &v24;
    v40 = 4LL;
    v42 = 16LL;
    v44 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A09F, 0LL, 0LL, 0xBu, &v28);
    return (unsigned int)v20;
  }
  return (unsigned int)v13;
}
