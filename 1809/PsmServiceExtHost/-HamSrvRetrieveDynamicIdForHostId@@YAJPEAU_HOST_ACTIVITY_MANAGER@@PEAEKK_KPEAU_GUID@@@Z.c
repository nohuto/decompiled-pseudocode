/*
 * XREFs of ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x180067C80
 * Callers:
 *     HamRpcSrvRetrieveDynamicIdForHostId @ 0x18006BFF0 (HamRpcSrvRetrieveDynamicIdForHostId.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z @ 0x18006D9B8 (-HampHostIdStoreRetrieveDynamicId@@YAJPEAU_HAM_HOSTID_STORE@@PEAT_RM_SID@@K_KPEAU_GUID@@@Z.c)
 *     CempUtilValidateAndCaptureSid @ 0x1800710D4 (CempUtilValidateAndCaptureSid.c)
 */

__int64 __fastcall HamSrvRetrieveDynamicIdForHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _GUID *a6)
{
  struct _GUID *v6; // r15
  const SID *v10; // rdi
  int DynamicId; // eax
  DWORD v12; // ebx
  __int64 v13; // rdx
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v17[80]; // [rsp+40h] [rbp-C0h] BYREF
  char v18[144]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v20; // [rsp+140h] [rbp+40h]
  __int64 v21; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v22; // [rsp+150h] [rbp+50h]
  __int64 v23; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  unsigned int *v25; // [rsp+170h] [rbp+70h]
  __int64 v26; // [rsp+178h] [rbp+78h]
  struct _GUID *v27; // [rsp+180h] [rbp+80h]
  __int64 v28; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF

  v6 = a6;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008914C, 0LL, 0LL, 2u, &pData);
  if ( (int)CempUtilValidateAndCaptureSid(a2) >= 0 )
  {
    v10 = (const SID *)v17;
    DynamicId = HampHostIdStoreRetrieveDynamicId(
                  (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 624),
                  (union _RM_SID *)v17,
                  a4,
                  a5,
                  v6);
    if ( DynamicId >= 0 )
      DynamicId = 0;
    v15 = DynamicId;
  }
  else
  {
    v15 = -1073741585;
    v10 = (const SID *)((char *)a1 + 940);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v23 = v13;
    v20 = &v15;
    v21 = 4LL;
    v22 = &a5;
    TlgCreateSid(&pDesc, v10);
    v16 = a4;
    v25 = &v16;
    v26 = 4LL;
    v27 = v6;
    v28 = 16LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089BA7, 0LL, 0LL, 7u, &v19);
  }
  return v15;
}
