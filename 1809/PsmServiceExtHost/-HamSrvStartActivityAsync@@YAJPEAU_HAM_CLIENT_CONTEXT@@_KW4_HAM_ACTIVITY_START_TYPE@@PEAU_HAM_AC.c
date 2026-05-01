/*
 * XREFs of ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180035E50
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800233D0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     HamRpcSrvStartExtendedExecutionAsync @ 0x180035E20 (HamRpcSrvStartExtendedExecutionAsync.c)
 *     HamRpcSrvStartActivityAsync @ 0x180035E40 (HamRpcSrvStartActivityAsync.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     CempLockTrackerIsSetForThread @ 0x180015B0C (CempLockTrackerIsSetForThread.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180024040 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x1800379F0 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HamSrvStartActivityAsync(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  DWORD v7; // ebx
  int v8; // r14d
  unsigned int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // edi
  int v15; // eax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  DWORD v18; // ebx
  int started; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v28; // [rsp+70h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  void *v31; // [rsp+128h] [rbp+20h]
  int v32; // [rsp+130h] [rbp+28h]
  int v33; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+138h] [rbp+30h] BYREF
  void *v35; // [rsp+148h] [rbp+40h]
  int v36; // [rsp+150h] [rbp+48h]
  int v37; // [rsp+154h] [rbp+4Ch]
  int *p_started; // [rsp+158h] [rbp+50h]
  __int64 v39; // [rsp+160h] [rbp+58h]
  __int64 *v40; // [rsp+168h] [rbp+60h]
  __int64 v41; // [rsp+170h] [rbp+68h]
  int *v42; // [rsp+178h] [rbp+70h]
  __int64 v43; // [rsp+180h] [rbp+78h]
  __int64 *v44; // [rsp+188h] [rbp+80h]
  __int64 v45; // [rsp+190h] [rbp+88h]
  int *v46; // [rsp+198h] [rbp+90h]
  __int64 v47; // [rsp+1A0h] [rbp+98h]

  v24 = a2;
  if ( hProvider > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180089DF7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v31 = &unk_180089E02;
    UserData.Reserved = 2;
    v32 = 23;
    v33 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v25 = 0LL;
  if ( CempLockTrackerIsSetForThread() )
  {
    v8 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, TlsValue);
    }
    v8 = 1;
  }
  v22 = 0;
  if ( a4 )
  {
    v9 = -1073741822;
LABEL_40:
    started = v9;
    goto LABEL_41;
  }
  if ( a3 > 1 )
  {
    v9 = -1073741583;
    goto LABEL_40;
  }
  v10 = *a1 + 216LL;
  v26 = v24;
  v11 = v10 + 16;
  RtlAcquireSRWLockShared(v10 + 16);
  v12 = *(_QWORD *)(v10 + 8);
  v13 = *(_QWORD *)v10;
  if ( (v12 & 1) != 0 )
  {
    if ( v13 )
      v13 ^= v10;
    else
      v13 = 0LL;
  }
  v14 = v12 & 1;
  while ( v13 )
  {
    v15 = HampActCompareByHandle(&v26, (void *)v13);
    if ( v15 >= 0 )
    {
      if ( v15 <= 0 )
        break;
      v16 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      v16 = *(_QWORD *)v13;
    }
    if ( v14 && v16 )
      v13 ^= v16;
    else
      v13 = v16;
  }
  v17 = (_QWORD *)v13;
  if ( v13 )
  {
    if ( *(_QWORD *)(v13 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v17 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v11);
  if ( !v17 )
  {
LABEL_38:
    v9 = -1073741275;
    goto LABEL_40;
  }
  if ( (_QWORD *)v17[8] != a1 )
  {
    CemRcObjectDereference(v17);
    goto LABEL_38;
  }
  started = HampActStartAsync((__int64)v17, a3, &v22, &v25);
  if ( started >= 0 )
    started = 0;
  CemRcObjectDereference(v17);
  v9 = started;
LABEL_41:
  if ( v8 )
  {
    v18 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v18, 0LL);
      v9 = started;
    }
  }
  if ( hProvider <= 4u || (byte_18009B100 & 8) == 0 || (qword_18009B108 & 8) != qword_18009B108 )
    return v9;
  v39 = 4LL;
  p_started = &started;
  v40 = &v24;
  v23 = v22;
  v42 = &v23;
  v44 = &v25;
  v46 = &v21;
  v41 = 8LL;
  v43 = 4LL;
  v45 = 8LL;
  LOBYTE(v21) = a3;
  v47 = 1LL;
  *(_DWORD *)&v28.Level = 516;
  v34.Ptr = (ULONGLONG)off_18009B0F8;
  *(_DWORD *)&v28.Id = ((unsigned int)&unk_180089B47 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  v28.Keyword = 8LL;
  v34.Size = *(unsigned __int16 *)off_18009B0F8;
  v35 = &unk_180089B52;
  v34.Reserved = 2;
  v36 = 84;
  v37 = 1;
  EventWriteTransfer(RegHandle, &v28, 0LL, 0LL, 7u, &v34);
  return (unsigned int)started;
}
