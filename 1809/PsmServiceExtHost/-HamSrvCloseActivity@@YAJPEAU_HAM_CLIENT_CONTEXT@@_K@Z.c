/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A730
 * Callers:
 *     HamRpcSrvCloseActivity @ 0x180008980 (HamRpcSrvCloseActivity.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000A30C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A9D4 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CempLockTrackerIsSetForThread @ 0x180015B0C (CempLockTrackerIsSetForThread.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  DWORD v3; // edi
  int v4; // edi
  struct _HAM_ACTIVITY *v5; // rax
  struct _HAM_ACTIVITY *v6; // rbx
  unsigned int v7; // edx
  DWORD v8; // ebx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v13; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  int v18; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+110h] [rbp+10h] BYREF
  void *v20; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+128h] [rbp+28h]
  int v22; // [rsp+12Ch] [rbp+2Ch]
  int *v23; // [rsp+130h] [rbp+30h]
  __int64 v24; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v25; // [rsp+140h] [rbp+40h]
  __int64 v26; // [rsp+148h] [rbp+48h]

  v11 = a2;
  if ( hProvider > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180089527 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v16 = &unk_180089532;
    UserData.Reserved = 2;
    v17 = 18;
    v18 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
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
  v5 = HampActFindForClient(a1, v11);
  v6 = v5;
  if ( v5 )
  {
    v10 = HampActClose(v5);
    if ( v10 >= 0 )
      v10 = 0;
    CemRcObjectDereference(v6);
    v7 = v10;
  }
  else
  {
    v7 = -1073741275;
    v10 = -1073741275;
  }
  if ( v4 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v8, 0LL);
      v7 = v10;
    }
  }
  if ( hProvider <= 4u || (byte_18009B100 & 8) == 0 || (qword_18009B108 & 8) != qword_18009B108 )
    return v7;
  v24 = 4LL;
  v23 = &v10;
  v25 = &v11;
  v26 = 8LL;
  *(_DWORD *)&v13.Level = 516;
  v19.Ptr = (ULONGLONG)off_18009B0F8;
  *(_DWORD *)&v13.Id = ((unsigned int)&unk_180089203 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  v13.Keyword = 8LL;
  v19.Size = *(unsigned __int16 *)off_18009B0F8;
  v20 = &unk_18008920E;
  v19.Reserved = 2;
  v21 = 39;
  v22 = 1;
  EventWriteTransfer(RegHandle, &v13, 0LL, 0LL, 4u, &v19);
  return (unsigned int)v10;
}
