/*
 * XREFs of ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x180002BEC
 * Callers:
 *     HamRpcSrvRetrieveDynamicIdForHostId @ 0x180002BD0 (HamRpcSrvRetrieveDynamicIdForHostId.c)
 * Callees:
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x180002DE8 (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 *     CempUtilValidateAndCaptureSid @ 0x180002E98 (CempUtilValidateAndCaptureSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRetrieveDynamicIdForHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _GUID *a6)
{
  struct _GUID *v6; // rsi
  SID *p_pSid; // rdi
  unsigned int v11; // r9d
  DWORD v12; // ebx
  __int64 v13; // rdx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  struct _GUID v17; // [rsp+38h] [rbp-C8h] BYREF
  SID pSid; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR v20; // [rsp+130h] [rbp+30h] BYREF
  int *v21; // [rsp+150h] [rbp+50h]
  __int64 v22; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v23; // [rsp+160h] [rbp+60h]
  __int64 v24; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+170h] [rbp+70h] BYREF
  unsigned int *v26; // [rsp+180h] [rbp+80h]
  __int64 v27; // [rsp+188h] [rbp+88h]
  struct _GUID *v28; // [rsp+190h] [rbp+90h]
  __int64 v29; // [rsp+198h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF

  v6 = a6;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096EA5, 0LL, 0LL, 2u, &pData);
  *(_QWORD *)&v17.Data1 = 0LL;
  *(_QWORD *)v17.Data4 = 0LL;
  if ( (int)CempUtilValidateAndCaptureSid(a2) < 0 )
  {
    v11 = -1073741585;
    p_pSid = (SID *)((char *)a1 + 940);
    v15 = -1073741585;
  }
  else
  {
    p_pSid = &pSid;
    v15 = HampHostIdStoreRetrieveDynamicId(
            (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 608),
            (union _RM_SID *)&pSid,
            a4,
            a5,
            &v17);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v11 = 0;
      v15 = 0;
      *v6 = v17;
    }
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
    v11 = v15;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v24 = v13;
    v21 = &v15;
    v22 = 4LL;
    v23 = &a5;
    TlgCreateSid(&pDesc, p_pSid);
    v16 = a4;
    v26 = &v16;
    v28 = &v17;
    v27 = 4LL;
    v29 = 16LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800978DD, 0LL, 0LL, 7u, &v20);
    return (unsigned int)v15;
  }
  return v11;
}
