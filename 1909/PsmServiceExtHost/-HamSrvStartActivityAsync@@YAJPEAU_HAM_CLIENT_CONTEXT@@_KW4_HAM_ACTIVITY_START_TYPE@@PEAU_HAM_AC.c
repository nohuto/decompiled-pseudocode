/*
 * XREFs of ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180036CC0
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800248E0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     HamRpcSrvStartExtendedExecutionAsync @ 0x180036C90 (HamRpcSrvStartExtendedExecutionAsync.c)
 *     HamRpcSrvStartActivityAsync @ 0x180036CB0 (HamRpcSrvStartActivityAsync.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     CempLockTrackerIsSetForThread @ 0x1800156DC (CempLockTrackerIsSetForThread.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180038180 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HamSrvStartActivityAsync(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  DWORD v7; // ebx
  int v8; // r14d
  __int64 *v9; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // edx
  DWORD v17; // ebx
  int started; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v21; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v27; // [rsp+70h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  void *v30; // [rsp+128h] [rbp+20h]
  int v31; // [rsp+130h] [rbp+28h]
  int v32; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+138h] [rbp+30h] BYREF
  void *v34; // [rsp+148h] [rbp+40h]
  int v35; // [rsp+150h] [rbp+48h]
  int v36; // [rsp+154h] [rbp+4Ch]
  int *p_started; // [rsp+158h] [rbp+50h]
  __int64 v38; // [rsp+160h] [rbp+58h]
  __int64 *v39; // [rsp+168h] [rbp+60h]
  __int64 v40; // [rsp+170h] [rbp+68h]
  unsigned int *v41; // [rsp+178h] [rbp+70h]
  __int64 v42; // [rsp+180h] [rbp+78h]
  __int64 *v43; // [rsp+188h] [rbp+80h]
  __int64 v44; // [rsp+190h] [rbp+88h]
  int *v45; // [rsp+198h] [rbp+90h]
  __int64 v46; // [rsp+1A0h] [rbp+98h]

  v23 = a2;
  if ( dword_1800AB2C0 > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v30 = &unk_180097ACF;
    UserData.Reserved = 2;
    v31 = 23;
    v32 = 1;
    v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v24 = 0LL;
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
  v21 = 0;
  if ( a4 )
  {
    v16 = -1073741822;
LABEL_52:
    started = v16;
    goto LABEL_35;
  }
  if ( a3 > 1 )
  {
    v16 = -1073741583;
    goto LABEL_52;
  }
  v9 = (__int64 *)(*a1 + 216LL);
  v25 = v23;
  v10 = v9 + 2;
  RtlAcquireSRWLockShared(v9 + 2);
  v11 = v9[1];
  v12 = *v9;
  if ( (v11 & 1) != 0 && v12 )
    v12 ^= (unsigned __int64)v9;
  v13 = v11 & 1;
  if ( !v12 )
    goto LABEL_15;
  while ( 1 )
  {
    v14 = HampActCompareByHandle(&v25, (void *)v12);
    if ( v14 < 0 )
    {
      v15 = *(_QWORD *)v12;
      if ( v13 && v15 )
        goto LABEL_27;
      goto LABEL_19;
    }
    if ( v14 <= 0 )
      break;
    v15 = *(_QWORD *)(v12 + 8);
    if ( v13 && v15 )
    {
LABEL_27:
      v12 ^= v15;
      goto LABEL_20;
    }
LABEL_19:
    v12 = v15;
LABEL_20:
    if ( !v12 )
      goto LABEL_30;
  }
  if ( !*(_QWORD *)(v12 + 24) )
  {
LABEL_15:
    v12 = 0LL;
    goto LABEL_30;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_30:
  RtlReleaseSRWLockShared(v10);
  if ( !v12 )
  {
    v12 = 0LL;
    goto LABEL_48;
  }
  if ( *(_QWORD **)(v12 + 64) != a1 )
  {
LABEL_48:
    if ( v12 )
      CemRcObjectDereference((_QWORD *)v12);
    v16 = -1073741275;
    goto LABEL_52;
  }
  started = HampActStartAsync(v12, a3, (int *)&v21, &v24);
  if ( started >= 0 )
    started = 0;
  CemRcObjectDereference((_QWORD *)v12);
  v16 = started;
LABEL_35:
  if ( v8 )
  {
    v17 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v17, 0LL);
      v16 = started;
    }
  }
  if ( dword_1800AB2C0 <= 4u || (byte_1800AB2D0 & 8) == 0 || (qword_1800AB2D8 & 8) != qword_1800AB2D8 )
    return v16;
  v38 = 4LL;
  p_started = &started;
  v39 = &v23;
  v22 = v21;
  v41 = &v22;
  v43 = &v24;
  v45 = &v20;
  v40 = 8LL;
  v42 = 4LL;
  v44 = 8LL;
  LOBYTE(v20) = a3;
  v46 = 1LL;
  *(_DWORD *)&v27.Level = 516;
  v33.Ptr = (ULONGLONG)off_1800AB2C8;
  *(_DWORD *)&v27.Id = 184549376;
  v27.Keyword = 8LL;
  v33.Size = *(unsigned __int16 *)off_1800AB2C8;
  v34 = &unk_180097861;
  v33.Reserved = 2;
  v35 = 84;
  v36 = 1;
  v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  EventWriteTransfer(RegHandle, &v27, 0LL, 0LL, 7u, &v33);
  return (unsigned int)started;
}
