/*
 * XREFs of ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18002EF9C
 * Callers:
 *     PsmHamRegisterProcess @ 0x18003CF40 (PsmHamRegisterProcess.c)
 * Callees:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180012D8C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A75C (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACT.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x18003C434 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z @ 0x18003C8AC (-HampSystemQueryProcessAppSessionGuid@@YAXPEAXPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRegisterProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v10; // esi
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
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v26; // [rsp+68h] [rbp-98h] BYREF
  char v27[144]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t pszDest[280]; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+340h] [rbp+240h] BYREF
  int *v30; // [rsp+360h] [rbp+260h]
  __int64 v31; // [rsp+368h] [rbp+268h]
  DWORD *v32; // [rsp+370h] [rbp+270h]
  __int64 v33; // [rsp+378h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+380h] [rbp+280h] BYREF
  unsigned __int64 *v35; // [rsp+390h] [rbp+290h]
  __int64 v36; // [rsp+398h] [rbp+298h]
  int *v37; // [rsp+3A0h] [rbp+2A0h]
  __int64 v38; // [rsp+3A8h] [rbp+2A8h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+3B0h] [rbp+2B0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v40; // [rsp+3C0h] [rbp+2C0h]
  __int64 v41; // [rsp+3C8h] [rbp+2C8h]
  struct _GUID *v42; // [rsp+3D0h] [rbp+2D0h]
  __int64 v43; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 *v44; // [rsp+3E0h] [rbp+2E0h]
  __int64 v45; // [rsp+3E8h] [rbp+2E8h]
  __int64 *v46; // [rsp+3F0h] [rbp+2F0h]
  __int64 v47; // [rsp+3F8h] [rbp+2F8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+400h] [rbp+300h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009765D, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
  v21 = 0LL;
  v24 = -1LL;
  HampSystemQueryProcessAppSessionGuid(a2, &v26);
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
    v14 = HampHostFindOrCreate(a1, (struct _RM_PSM_HOST_INFO *)pszDest, 0, &v21);
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
      if ( (*((_QWORD *)v15 + 74))-- == 1LL )
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
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
  {
    v31 = 4LL;
    v30 = &v20;
    ProcessId = GetProcessId(a2);
    v33 = 4LL;
    v22 = ProcessId;
    v32 = &v22;
    TlgCreateWsz(&pDesc, (LPCWSTR)a4 + 4);
    v23 = *(_DWORD *)a4;
    v35 = &a5;
    v37 = &v23;
    v36 = 8LL;
    v38 = 4LL;
    TlgCreateSid(&v39, (const SID *)((char *)a4 + 472));
    LODWORD(v21) = v10;
    v40 = &v21;
    v42 = &v26;
    v44 = &v24;
    v46 = &v25;
    v41 = 4LL;
    v43 = 16LL;
    v45 = 8LL;
    v25 = 0x1000000LL;
    v47 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097C28, 0LL, 0LL, 0xCu, &v29);
    return (unsigned int)v20;
  }
  return (unsigned int)v13;
}
