/*
 * XREFs of ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000425C
 * Callers:
 *     HamRpcSrvServicingEnableServicing @ 0x180004250 (HamRpcSrvServicingEnableServicing.c)
 * Callees:
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800043B0 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180014888 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvEnableServicing(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v3; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v4; // rbx
  int v5; // eax
  DWORD v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v13; // [rsp+F0h] [rbp-10h]
  __int64 v14; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v15; // [rsp+100h] [rbp+0h]
  __int64 v16; // [rsp+108h] [rbp+8h]

  v10 = a2;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A66D, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v3 = HampClientPkgFindByPackageHandle(a1, v10);
  v4 = v3;
  if ( v3 )
  {
    v5 = HampClientPkgEnableServicing(v3, a1);
    if ( v5 >= 0 )
      v5 = 0;
    v9 = v5;
    CemRcObjectDereference(v4);
  }
  else
  {
    v9 = -1073741275;
  }
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v14 = 4LL;
    v13 = &v9;
    v15 = &v10;
    v16 = v7;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800899E9, 0LL, 0LL, 4u, &pData);
  }
  return v9;
}
