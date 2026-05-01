/*
 * XREFs of ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800741DC
 * Callers:
 *     HamRpcSrvGetPackageInterruptiveUIState @ 0x180079DA0 (HamRpcSrvGetPackageInterruptiveUIState.c)
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

__int64 __fastcall HamSrvGetPackageInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int16 *a2,
        SID *SourceSid,
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
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20[26]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[144]; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v23; // [rsp+1C0h] [rbp+C0h]
  __int64 v24; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int *v27; // [rsp+1F0h] [rbp+F0h]
  __int64 v28; // [rsp+1F8h] [rbp+F8h]
  char *v29; // [rsp+200h] [rbp+100h]
  __int64 v30; // [rsp+208h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+210h] [rbp+110h] BYREF

  v6 = 0;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800973DE, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  v18 = CempUtilValidateAndCapturePackageInfoWithFamilyName(a2, SourceSid, (__int64)v20);
  if ( v18 >= 0 )
  {
    v10 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v20);
    v11 = v10;
    if ( v10 )
    {
      InterruptiveUIState = HampPkgGetInterruptiveUIState(v10, 0LL);
      v6 = InterruptiveUIState;
      *a6 = InterruptiveUIState;
      v18 = 0;
      CemRcObjectDereference(v11);
    }
    else
    {
      v18 = -1073741275;
    }
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v24 = v13;
    v23 = &v18;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v26, SourceSid);
    v19 = a5;
    v27 = &v19;
    v29 = &v17;
    v28 = v14;
    v17 = v6;
    v30 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097BB5, 0LL, 0LL, 7u, &v22);
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v15, 0LL);
  }
  return (unsigned int)v18;
}
