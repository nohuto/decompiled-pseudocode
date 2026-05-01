/*
 * XREFs of ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180015760
 * Callers:
 *     HamRpcSrvFindOrCreateHostId @ 0x1800153C0 (HamRpcSrvFindOrCreateHostId.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180017988 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvFindOrCreateHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // edx
  DWORD v7; // edi
  __int64 v8; // r9
  unsigned int v9; // ecx
  ULONGLONG UserDataCount; // r9
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v17; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v20; // [rsp+110h] [rbp+10h]
  int v21; // [rsp+118h] [rbp+18h]
  int v22; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+120h] [rbp+20h] BYREF
  void *v24; // [rsp+130h] [rbp+30h]
  int v25; // [rsp+138h] [rbp+38h]
  int v26; // [rsp+13Ch] [rbp+3Ch]
  int *v27; // [rsp+140h] [rbp+40h]
  __int64 v28; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 *v31; // [rsp+170h] [rbp+70h]
  __int64 v32; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+180h] [rbp+80h] BYREF
  unsigned int *v34; // [rsp+190h] [rbp+90h]
  __int64 v35; // [rsp+198h] [rbp+98h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  if ( dword_1800AB2C0 > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v20 = &unk_18009798F;
    UserData.Reserved = 2;
    v21 = 23;
    v22 = 1;
    v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v14 = -1LL;
  if ( (unsigned __int8)PsmIsValidKey(a2)
    && wcsnlen((const wchar_t *)a2 + 268, 0x100uLL) != 256
    && RtlValidSid((char *)a2 + 464) )
  {
    v12 = HampHostIdStoreFindOrCreateIdForKey((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 608), a2, &v14);
    v6 = v12;
    if ( v12 < 0 )
      goto LABEL_9;
    v6 = 0;
    *a3 = v14;
  }
  else
  {
    *((_WORD *)a2 + 231) = 0;
    v6 = -1073741585;
    *((_WORD *)a2 + 523) = 0;
  }
  v12 = v6;
LABEL_9:
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
    v6 = v12;
  }
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v28 = 4LL;
    v27 = &v12;
    TlgCreateWsz(&pDesc, (LPCWSTR)a2);
    TlgCreateWsz(&v30, (LPCWSTR)a2 + 268);
    v32 = v8;
    v31 = &v14;
    TlgCreateSid(&v33, (const SID *)((char *)a2 + 464));
    v9 = *((_DWORD *)a2 + 133);
    v34 = &v13;
    v13 = v9;
    v35 = 4LL;
    *(_DWORD *)&v17.Level = 516;
    v23.Ptr = (ULONGLONG)off_1800AB2C8;
    v17.Keyword = UserDataCount;
    *(_DWORD *)&v17.Id = 184549376;
    v23.Size = *(unsigned __int16 *)off_1800AB2C8;
    v24 = &unk_180097021;
    v23.Reserved = 2;
    v25 = 83;
    v26 = 1;
    v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v17, 0LL, 0LL, UserDataCount, &v23);
    return (unsigned int)v12;
  }
  return v6;
}
