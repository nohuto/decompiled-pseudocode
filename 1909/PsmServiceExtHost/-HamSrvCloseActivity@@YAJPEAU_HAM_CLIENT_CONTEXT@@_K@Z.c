/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180035C40
 * Callers:
 *     HamRpcSrvCloseActivity @ 0x180035820 (HamRpcSrvCloseActivity.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003582C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     CempLockTrackerIsSetForThread @ 0x1800156DC (CempLockTrackerIsSetForThread.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180035ED0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  DWORD v3; // esi
  int v4; // esi
  struct _HAM_ACTIVITY *v5; // rax
  __int64 v6; // rdx
  struct _HAM_ACTIVITY *v7; // rbx
  unsigned int v8; // edx
  DWORD v9; // ebx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+110h] [rbp+10h] BYREF
  void *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]
  int *v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v27; // [rsp+140h] [rbp+40h]
  __int64 v28; // [rsp+148h] [rbp+48h]

  v13 = a2;
  if ( dword_1800AB2C0 > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v18 = &unk_1800972E6;
    UserData.Reserved = 2;
    v19 = 18;
    v20 = 1;
    v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( CempLockTrackerIsSetForThread() )
  {
    v4 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v3 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v3, TlsValue);
    }
    v4 = 1;
  }
  v5 = HampActFindForClient(a1, v13);
  v7 = v5;
  if ( v5 )
  {
    v11 = HampActClose(v5, v6);
    if ( v11 >= 0 )
      v11 = 0;
    CemRcObjectDereference(v7);
    v8 = v11;
  }
  else
  {
    v8 = -1073741275;
    v11 = -1073741275;
  }
  if ( v4 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v9, 0LL);
      v8 = v11;
    }
  }
  if ( dword_1800AB2C0 <= 4u || (byte_1800AB2D0 & 8) == 0 || (qword_1800AB2D8 & 8) != qword_1800AB2D8 )
    return v8;
  v26 = 4LL;
  v25 = &v11;
  v27 = &v13;
  v28 = 8LL;
  *(_DWORD *)&v15.Level = 516;
  v21.Ptr = (ULONGLONG)off_1800AB2C8;
  *(_DWORD *)&v15.Id = 184549376;
  v15.Keyword = 8LL;
  v21.Size = *(unsigned __int16 *)off_1800AB2C8;
  v22 = &unk_180096F07;
  v21.Reserved = 2;
  v23 = 39;
  v24 = 1;
  v12 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  EventWriteTransfer(RegHandle, &v15, 0LL, 0LL, 4u, &v21);
  return (unsigned int)v11;
}
