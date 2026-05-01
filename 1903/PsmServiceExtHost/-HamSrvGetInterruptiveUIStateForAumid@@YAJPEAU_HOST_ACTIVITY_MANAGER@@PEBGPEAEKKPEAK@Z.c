/*
 * XREFs of ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180073F8C
 * Callers:
 *     HamRpcSrvGetInterruptiveUIStateForAumid @ 0x180079D50 (HamRpcSrvGetInterruptiveUIStateForAumid.c)
 * Callees:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180011880 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180079704 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x18007EB68 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 */

void __fastcall __noreturn HamSrvGetInterruptiveUIStateForAumid(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        SID *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v6; // di
  struct _HAM_PACKAGE *v10; // rax
  struct _HAM_PACKAGE *v11; // rbx
  unsigned int InterruptiveUIState; // eax
  __int64 v13; // r9
  __int64 v14; // r9
  DWORD v15; // ebx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+38h] [rbp-C8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21[26]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[144]; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v24; // [rsp+1D0h] [rbp+D0h]
  __int64 v25; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int *v28; // [rsp+200h] [rbp+100h]
  __int64 v29; // [rsp+208h] [rbp+108h]
  char *v30; // [rsp+210h] [rbp+110h]
  __int64 v31; // [rsp+218h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+240h] [rbp+140h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v6 = 0;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097429, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         a2,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v17 = -1073741585;
  }
  else
  {
    v17 = CempUtilValidateAndCapturePackageInfoWithFamilyName(packageFamilyName, a3, (__int64)v21);
    if ( v17 >= 0 )
    {
      v10 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v21);
      v11 = v10;
      if ( v10 )
      {
        InterruptiveUIState = HampPkgGetInterruptiveUIState(v10, packageRelativeApplicationId);
        v6 = InterruptiveUIState;
        *a6 = InterruptiveUIState;
        v17 = 0;
        CemRcObjectDereference(v11);
      }
      else
      {
        v17 = -1073741275;
      }
    }
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v25 = v13;
    v24 = &v17;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v27, a3);
    v20 = a5;
    v28 = &v20;
    v30 = &v16;
    v29 = v14;
    v16 = v6;
    v31 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097571, 0LL, 0LL, 7u, &v23);
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v15, 0LL);
  }
}
