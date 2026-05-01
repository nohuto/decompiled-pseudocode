/*
 * XREFs of ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006801C
 * Callers:
 *     HamRpcSrvDebugSuspendPackage @ 0x18006C070 (HamRpcSrvDebugSuspendPackage.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180014888 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x18006BBD8 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_EXTERNAL_APPLICATION_ST.c)
 */

__int64 __fastcall HamSrvSuspendPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        enum _HAM_EXTERNAL_APPLICATION_STATE *a3)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v5; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v6; // rbx
  DWORD v7; // ebx
  int v8; // edx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int *v15; // [rsp+F0h] [rbp-10h]
  int v16; // [rsp+F8h] [rbp-8h]
  int v17; // [rsp+FCh] [rbp-4h]
  unsigned __int64 *v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+10Ch] [rbp+Ch]

  v12 = a2;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A493, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  v5 = HampClientPkgFindByPackageHandle(a1, v12);
  v6 = v5;
  if ( v5 )
  {
    v10 = HampPkgSuspend(*((struct _HAM_PACKAGE **)v5 + 7), a1, (enum _HAM_EXTERNAL_APPLICATION_STATE *)&v11);
    if ( v10 >= 0 )
    {
      v10 = 0;
      *(_DWORD *)a3 = v11;
    }
    CemRcObjectDereference(v6);
  }
  else
  {
    v10 = -1073741275;
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v10;
    v18 = &v12;
    v16 = 4;
    v19 = v8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A029, 0LL, 0LL, 4u, &pData);
  }
  return (unsigned int)v10;
}
