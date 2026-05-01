/*
 * XREFs of ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180066B74
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x18006BFD0 (HamRpcSrvFindOrCreateHostId.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18006D2F0 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 */

__int64 __fastcall HamSrvFindOrCreateHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  int IdForKey; // eax
  DWORD v7; // edi
  __int64 v8; // r9
  int v9; // edx
  UINT32 cData; // r9d
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v16; // [rsp+F0h] [rbp-10h]
  __int64 v17; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 *v20; // [rsp+120h] [rbp+20h]
  __int64 v21; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+130h] [rbp+30h] BYREF
  int *v23; // [rsp+140h] [rbp+40h]
  __int64 v24; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089CFA, 0LL, 0LL, 2u, &pData);
  if ( (unsigned __int8)PsmIsValidKey(a2)
    && wcsnlen((const wchar_t *)a2 + 268, 0x100uLL) != 256
    && RtlValidSid((char *)a2 + 464) )
  {
    IdForKey = HampHostIdStoreFindOrCreateIdForKey((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 624), a2, a3);
    if ( IdForKey >= 0 )
      IdForKey = 0;
    v12 = IdForKey;
  }
  else
  {
    *((_WORD *)a2 + 231) = 0;
    *((_WORD *)a2 + 523) = 0;
    v12 = -1073741585;
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
    v17 = 4LL;
    v16 = &v12;
    TlgCreateWsz(&pDesc, (LPCWSTR)a2);
    TlgCreateWsz(&v19, (LPCWSTR)a2 + 268);
    v20 = a3;
    v21 = v8;
    TlgCreateSid(&v22, (const SID *)((char *)a2 + 464));
    v9 = *((_DWORD *)a2 + 133);
    v23 = &v13;
    v13 = v9;
    v24 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800892DD, 0LL, 0LL, cData, &v15);
  }
  return v12;
}
