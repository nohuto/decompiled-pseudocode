/*
 * XREFs of ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18007606C
 * Callers:
 *     PsmHamTerminatePackage @ 0x180061170 (PsmHamTerminatePackage.c)
 * Callees:
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x180010EF4 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180011880 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180079AA8 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 */

__int64 __fastcall HamSrvTerminatePackageForBi(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        SID *a3,
        int a4,
        unsigned int a5)
{
  struct _HAM_PACKAGE *v9; // rax
  struct _HAM_PACKAGE *v10; // rbx
  int v11; // eax
  DWORD v12; // ebx
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[208]; // [rsp+40h] [rbp-C0h] BYREF
  char v18[144]; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int *v20; // [rsp+1C0h] [rbp+C0h]
  __int64 v21; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v23; // [rsp+1E0h] [rbp+E0h]
  __int64 v24; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+1F0h] [rbp+F0h] BYREF
  char *v26; // [rsp+200h] [rbp+100h]
  __int64 v27; // [rsp+208h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+210h] [rbp+110h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097386, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  HampPkgInfoInitialize(a2, a3, a4, (struct _HAM_PACKAGE_INFO *)v17);
  v9 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v17);
  v10 = v9;
  if ( v9 )
  {
    v11 = HampPkgTerminate(v9, 3LL, a5, 0LL, 4000);
    if ( v11 >= 0 )
      v11 = 0;
    v15 = v11;
    CemRcObjectDereference(v10);
  }
  else
  {
    v15 = -1073741275;
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v12, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v21 = 4LL;
    v20 = &v15;
    TlgCreateWsz(&pDesc, a2);
    v16 = a4;
    v23 = &v16;
    v24 = 4LL;
    TlgCreateSid(&v25, a3);
    v14 = a5;
    v26 = &v14;
    v27 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009751D, 0LL, 0LL, 7u, &v19);
  }
  return v15;
}
