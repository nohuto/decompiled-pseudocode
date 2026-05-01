/*
 * XREFs of ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180074D90
 * Callers:
 *     HamRpcSrvDebugQueryPackageState @ 0x180079F20 (HamRpcSrvDebugQueryPackageState.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037DFC (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180079904 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18007A244 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 */

__int64 __fastcall HamSrvQueryPackageState(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  int v3; // edi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v6; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v7; // rsi
  __int64 v8; // rbx
  DWORD v9; // ebx
  int v10; // edx
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v17; // [rsp+F0h] [rbp-10h]
  int v18; // [rsp+F8h] [rbp-8h]
  int v19; // [rsp+FCh] [rbp-4h]
  unsigned __int64 *v20; // [rsp+100h] [rbp+0h]
  int v21; // [rsp+108h] [rbp+8h]
  int v22; // [rsp+10Ch] [rbp+Ch]
  char *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  LOBYTE(v3) = 4;
  v14 = a2;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097407, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  v6 = HampClientPkgFindByPackageHandle(a1, v14);
  v7 = v6;
  if ( v6 )
  {
    v8 = *((_QWORD *)v6 + 7);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v8);
    v3 = (*(_DWORD *)(v8 + 344) >> 5) & 7;
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v8);
    *(_DWORD *)a3 = v3;
    v13 = 0;
    CemRcObjectDereference(v7);
  }
  else
  {
    v13 = -1073741275;
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v9, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v13;
    v20 = &v14;
    v23 = &v12;
    v18 = 4;
    v21 = v10;
    v12 = v3;
    v24 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097FA1, 0LL, 0LL, 5u, &v16);
  }
  return v13;
}
