/*
 * XREFs of ?HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180075F04
 * Callers:
 *     HamRpcSrvFullTrustTerminatePackage @ 0x180079D40 (HamRpcSrvFullTrustTerminatePackage.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180079AA8 (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18007A244 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 */

__int64 __fastcall HamSrvTerminatePackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v7; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v8; // rbx
  int v9; // eax
  DWORD v10; // ebx
  __int64 v11; // rdx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v17; // [rsp+F0h] [rbp-10h]
  __int64 v18; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v19; // [rsp+100h] [rbp+0h]
  __int64 v20; // [rsp+108h] [rbp+8h]

  v14 = a2;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097272, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  v7 = HampClientPkgFindByPackageHandle(a1, v14);
  v8 = v7;
  if ( v7 )
  {
    v9 = HampPkgTerminate(*((_QWORD *)v7 + 7), a3, a4, a1, -1);
    if ( v9 >= 0 )
      v9 = 0;
    v13 = v9;
    CemRcObjectDereference(v8);
  }
  else
  {
    v13 = -1073741275;
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v10, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v18 = 4LL;
    v17 = &v13;
    v19 = &v14;
    v20 = v11;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096E68, 0LL, 0LL, 4u, &pData);
  }
  return v13;
}
