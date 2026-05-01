/*
 * XREFs of ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180066D48
 * Callers:
 *     HamRpcSrvGetInterruptiveUIStateForAumid @ 0x18006BEB0 (HamRpcSrvGetInterruptiveUIStateForAumid.c)
 * Callees:
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180001724 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180007D50 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x18006B990 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 */

__int64 __fastcall HamSrvGetInterruptiveUIStateForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        LPCWSTR pwsz,
        SID *SourceSid,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  struct _HAM_PACKAGE *v10; // rax
  struct _HAM_PACKAGE *v11; // rbx
  int v12; // r9d
  int v13; // r9d
  DWORD v14; // ebx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+38h] [rbp-C8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21[26]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[144]; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v24; // [rsp+1D0h] [rbp+D0h]
  int v25; // [rsp+1D8h] [rbp+D8h]
  int v26; // [rsp+1DCh] [rbp+DCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int *v29; // [rsp+200h] [rbp+100h]
  int v30; // [rsp+208h] [rbp+108h]
  int v31; // [rsp+20Ch] [rbp+10Ch]
  char *v32; // [rsp+210h] [rbp+110h]
  int v33; // [rsp+218h] [rbp+118h]
  int v34; // [rsp+21Ch] [rbp+11Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+240h] [rbp+140h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+2D0h] [rbp+1D0h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800896AF, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         pwsz,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v17 = -1073741585;
  }
  else
  {
    v17 = CempUtilValidateAndCapturePackageInfoWithFamilyName(packageFamilyName, SourceSid, a4, a5, (__int64)v21);
    if ( v17 >= 0 )
    {
      v10 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v21);
      v11 = v10;
      if ( v10 )
      {
        v17 = 0;
        *a6 = HampPkgGetInterruptiveUIState(v10, packageRelativeApplicationId);
        CemRcObjectDereference(v11);
      }
      else
      {
        v17 = -1073741275;
      }
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v26 = 0;
    v24 = &v17;
    v25 = v12;
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateSid(&v28, SourceSid);
    v31 = 0;
    v34 = 0;
    v29 = &v20;
    v16 = *(_BYTE *)a6;
    v32 = &v16;
    v20 = a5;
    v30 = v13;
    v33 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089853, 0LL, 0LL, 7u, &v23);
  }
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  return (unsigned int)v17;
}
