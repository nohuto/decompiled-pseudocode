/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180030C80
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180031080 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        int *a5)
{
  DWORD v7; // edi
  int v8; // eax
  char v9; // cl
  char i; // cl
  int v11; // r14d
  char v12; // cl
  unsigned int v13; // ebx
  bool v15; // al
  void *v16; // r14
  char v17; // al
  char v18; // al
  __int64 v19; // rcx
  DWORD v20; // ebx
  bool v22; // cl
  char v23; // dl
  int v24; // eax
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  void *v30; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-B0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h]
  struct _WNF_STATE_NAME v34; // [rsp+78h] [rbp-90h]
  __int64 v35; // [rsp+80h] [rbp-88h]
  struct _WNF_STATE_NAME v36; // [rsp+88h] [rbp-80h]
  _BYTE TlsValue[144]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+128h] [rbp+20h] BYREF
  void *v39; // [rsp+138h] [rbp+30h]
  int v40; // [rsp+140h] [rbp+38h]
  int v41; // [rsp+144h] [rbp+3Ch]
  unsigned int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  int *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  int *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  __int64 *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  int *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]

  v30 = 0LL;
  memset_0(TlsValue, 0, 0x88uLL);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, TlsValue);
  }
  RtlAcquireSRWLockExclusive(a4 + 148);
  v34 = a1;
  a4[162] = GetCurrentThreadId();
  v33 = WNF_SHEL_FOCUS_CHANGE;
  if ( a1 == WNF_SHEL_FOCUS_CHANGE )
  {
    if ( a5 )
      v8 = *a5;
    else
      v8 = 0;
    if ( v8 != a4[156] )
    {
      a4[156] = v8;
LABEL_10:
      *((_BYTE *)a4 + 644) |= 1u;
    }
  }
  else
  {
    v35 = WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE;
    v36 = a1;
    if ( a1 == WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE )
    {
      v22 = a5 && *a5 == 1;
      v23 = *((_BYTE *)a4 + 644);
      if ( v22 != ((v23 & 4) != 0) )
        *((_BYTE *)a4 + 644) = (4 * v22) | v23 & 0xFB | 1;
    }
    else
    {
      if ( a5 )
        v24 = a5[4];
      else
        v24 = 0;
      if ( v24 != a4[157] )
      {
        a4[157] = v24;
        goto LABEL_10;
      }
    }
  }
  v9 = *((_BYTE *)a4 + 644);
  if ( (v9 & 3) == 1 )
  {
    for ( i = v9 | 2; (i & 1) != 0; i = *((_BYTE *)a4 + 644) )
    {
      v11 = a4[160];
      v12 = i & 0xFE;
      *((_BYTE *)a4 + 644) = v12;
      if ( (v12 & 4) != 0 )
        v13 = a4[157];
      else
        v13 = a4[156];
      if ( v13 != v11 )
      {
        if ( v13 && (int)RmpSystemOpenProcess(&v30, 0x2000u, v13) < 0 )
          v13 = 0;
        if ( v13 != v11 )
        {
          if ( hProvider > 5u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
          {
            v26 = v13;
            v42 = &v26;
            v27 = a4[160];
            v44 = &v27;
            v28 = a4[156];
            v46 = &v28;
            LODWORD(v29) = a4[157];
            v48 = &v29;
            v15 = (a4[161] & 4) != 0;
            v43 = 4LL;
            LOBYTE(v25) = v15;
            v50 = &v25;
            v45 = 4LL;
            v47 = 4LL;
            v49 = 4LL;
            v51 = 1LL;
            *(_DWORD *)&EventDescriptor.Level = 5;
            UserData.Ptr = (ULONGLONG)off_1800AB288;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            EventDescriptor.Keyword = 1LL;
            UserData.Size = *(unsigned __int16 *)off_1800AB288;
            UserData.Reserved = 2;
            v39 = &unk_180094BF9;
            v40 = 104;
            v41 = 1;
            v31 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
          }
          v16 = (void *)*((_QWORD *)a4 + 79);
          *((_QWORD *)a4 + 79) = v30;
          a4[160] = v13;
          a4[162] = 0;
          v30 = 0LL;
          RtlReleaseSRWLockExclusive(a4 + 148);
          if ( v16 )
            NtClose(v16);
          RtlAcquireSRWLockExclusive(a4 + 382);
          a4[384] = GetCurrentThreadId();
          v17 = *((_BYTE *)a4 + 1604);
          if ( (v17 & 4) == 0 )
          {
            v18 = v17 | 1;
            *((_BYTE *)a4 + 1604) = v18;
            if ( (v18 & 2) == 0 )
            {
              v19 = *((_QWORD *)a4 + 190);
              *((_BYTE *)a4 + 1604) = v18 | 2;
              TpPostWork(v19);
            }
          }
          a4[384] = 0;
          RtlReleaseSRWLockExclusive(a4 + 382);
          RtlAcquireSRWLockExclusive(a4 + 148);
          a4[162] = GetCurrentThreadId();
        }
      }
    }
    *((_BYTE *)a4 + 644) = i & 0xFD;
  }
  a4[162] = 0;
  RtlReleaseSRWLockExclusive(a4 + 148);
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v20, 0LL);
  }
  return 0LL;
}
