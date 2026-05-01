/*
 * XREFs of ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x180067AF4
 * Callers:
 *     HamRpcSrvResetExternalResourcePriority @ 0x18006BF60 (HamRpcSrvResetExternalResourcePriority.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A9D4 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x18006CA4C (-HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z.c)
 */

__int64 __fastcall HamSrvResetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned __int8 a3)
{
  struct _HAM_ACTIVITY *v4; // rbx
  struct _HAM_ACTIVITY *v5; // rax
  DWORD v6; // ebx
  int v7; // edx
  unsigned __int8 v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v13; // [rsp+E0h] [rbp-20h] BYREF
  int *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]
  int v16; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  int v19; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int8 *v20; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+128h] [rbp+28h]
  int v22; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v11 = a2;
  v9 = a3;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A2F5, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v4 = 0LL;
  if ( (unsigned int)v9 - 3 > 0x2D )
  {
    v10 = -1073741583;
  }
  else
  {
    v5 = HampActFindForClient(a1, v11);
    v4 = v5;
    if ( !v5 )
    {
      v10 = -1073741275;
      goto LABEL_11;
    }
    v10 = HampActResetExternalResourcePriority(v5, v9);
    if ( v10 >= 0 )
      v10 = 0;
  }
  if ( v4 )
    CemRcObjectDereference(v4);
LABEL_11:
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = &v10;
    v17 = &v11;
    v20 = &v9;
    v15 = 4;
    v18 = v7;
    v21 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A147, 0LL, 0LL, 5u, &v13);
  }
  return (unsigned int)v10;
}
