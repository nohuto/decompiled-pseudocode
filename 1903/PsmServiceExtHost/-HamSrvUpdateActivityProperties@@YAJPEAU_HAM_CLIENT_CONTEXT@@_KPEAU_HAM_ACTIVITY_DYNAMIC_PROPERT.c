/*
 * XREFs of ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800358C0
 * Callers:
 *     HamRpcSrvUpdateActivityProperties @ 0x1800358B0 (HamRpcSrvUpdateActivityProperties.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180024350 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180035ED0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall HamSrvUpdateActivityProperties(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a3)
{
  int v5; // esi
  DWORD v6; // ebx
  int v7; // eax
  int v8; // edx
  unsigned __int16 v9; // ax
  struct _HAM_ACTIVITY *v10; // rax
  struct _HAM_ACTIVITY *v11; // rbx
  unsigned int v12; // edx
  DWORD v13; // ebx
  int updated; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-B8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  int v26; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+120h] [rbp+20h] BYREF
  void *v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+13Ch] [rbp+3Ch]
  int *p_updated; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h]
  int *v35; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h]
  unsigned int *v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]

  v18 = a2;
  if ( dword_1800AB2C0 > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v24 = &unk_1800983B4;
    UserData.Reserved = 2;
    v25 = 29;
    v26 = 1;
    v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = 0;
  memset_0(TlsValue, 0, 0x88uLL);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, TlsValue);
  }
  v7 = *(_DWORD *)a3;
  if ( (unsigned __int16)*(_DWORD *)a3 >= 0x10u
    || HIWORD(v7) >= 8u
    || (v7 & 0x10000) == 0 && (v7 & 1) != 0
    || (v7 & 0x20000) == 0 && (v7 & 6) != 0
    || (v7 & 0x40000) == 0 && (v7 & 8) != 0 )
  {
    goto LABEL_34;
  }
  if ( HIWORD(v7) )
    v5 = 1;
  if ( (v7 & 6u) >= 6
    || (v8 = *((_DWORD *)a3 + 1), v9 = v8, (v8 & 1) == 0) && (v9 = *((_DWORD *)a3 + 1), v8)
    || v9 >= 0x1000u
    || ((v9 & 0xE) == 0) != ((v9 & 0x30) == 0)
    || HIBYTE(v8)
    || (v8 & 1) == 0 && !v5 )
  {
LABEL_34:
    v12 = -1073741583;
LABEL_43:
    updated = v12;
    goto LABEL_25;
  }
  v10 = HampActFindForClient(a1, v18);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741275;
    goto LABEL_43;
  }
  updated = HampActUpdateProperties(v10, a3);
  if ( updated >= 0 )
    updated = 0;
  CemRcObjectDereference(v11);
  v12 = updated;
LABEL_25:
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
    v12 = updated;
  }
  if ( dword_1800AB2C0 <= 4u || (byte_1800AB2D0 & 8) == 0 || (qword_1800AB2D8 & 8) != qword_1800AB2D8 )
    return v12;
  v32 = 4LL;
  p_updated = &updated;
  v33 = &v18;
  v17 = *(_DWORD *)a3;
  v35 = &v17;
  v16 = *((_DWORD *)a3 + 1);
  v37 = &v16;
  v34 = 8LL;
  v36 = 4LL;
  v38 = 4LL;
  *(_DWORD *)&v21.Level = 516;
  v27.Ptr = (ULONGLONG)off_1800AB2C8;
  *(_DWORD *)&v21.Id = 184549376;
  v21.Keyword = 8LL;
  v27.Size = *(unsigned __int16 *)off_1800AB2C8;
  v28 = &unk_180097617;
  v27.Reserved = 2;
  v29 = 69;
  v30 = 1;
  v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
  EventWriteTransfer(RegHandle, &v21, 0LL, 0LL, 6u, &v27);
  return (unsigned int)updated;
}
