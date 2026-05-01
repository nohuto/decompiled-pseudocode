/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800116A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180012314 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
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
  char v10; // cl
  int v11; // r14d
  char v12; // cl
  unsigned int v13; // ebx
  void *v14; // r14
  char v15; // al
  char v16; // al
  __int64 v17; // rcx
  DWORD v18; // ebx
  bool v21; // al
  bool v22; // cl
  char v23; // dl
  int v24; // eax
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  void *v30; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  void *v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+110h] [rbp+8h]
  int v36; // [rsp+114h] [rbp+Ch]
  unsigned int *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  int *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]
  int *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  __int64 *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  int *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]

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
  a4[162] = GetCurrentThreadId();
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
  else if ( a1 == WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE )
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
  v9 = *((_BYTE *)a4 + 644);
  if ( (v9 & 3) == 1 )
  {
    v10 = v9 | 2;
    for ( *((_BYTE *)a4 + 644) = v10; (v10 & 1) != 0; v10 = *((_BYTE *)a4 + 644) )
    {
      v11 = a4[160];
      v12 = v10 & 0xFE;
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
          if ( dword_18009B0B0 > 5u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
          {
            v26 = v13;
            v37 = &v26;
            v27 = a4[160];
            v39 = &v27;
            v28 = a4[156];
            v41 = &v28;
            LODWORD(v29) = a4[157];
            v43 = &v29;
            v21 = (a4[161] & 4) != 0;
            v38 = 4LL;
            LOBYTE(v25) = v21;
            v45 = &v25;
            v40 = 4LL;
            v42 = 4LL;
            v44 = 4LL;
            v46 = 1LL;
            *(_DWORD *)&EventDescriptor.Level = 5;
            *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180086E11 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            UserData.Ptr = (ULONGLONG)off_18009B0B8;
            EventDescriptor.Keyword = 1LL;
            UserData.Size = *(unsigned __int16 *)off_18009B0B8;
            UserData.Reserved = 2;
            v34 = &unk_180086E1C;
            v35 = 104;
            v36 = 1;
            EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
          }
          v14 = (void *)*((_QWORD *)a4 + 79);
          *((_QWORD *)a4 + 79) = v30;
          a4[160] = v13;
          a4[162] = 0;
          v30 = 0LL;
          RtlReleaseSRWLockExclusive(a4 + 148);
          if ( v14 )
            NtClose(v14);
          RtlAcquireSRWLockExclusive(a4 + 382);
          a4[384] = GetCurrentThreadId();
          v15 = *((_BYTE *)a4 + 1604);
          if ( (v15 & 4) == 0 )
          {
            v16 = v15 | 1;
            *((_BYTE *)a4 + 1604) = v16;
            if ( (v16 & 2) == 0 )
            {
              v17 = *((_QWORD *)a4 + 190);
              *((_BYTE *)a4 + 1604) = v16 | 2;
              TpPostWork(v17);
            }
          }
          a4[384] = 0;
          RtlReleaseSRWLockExclusive(a4 + 382);
          RtlAcquireSRWLockExclusive(a4 + 148);
          a4[162] = GetCurrentThreadId();
        }
      }
    }
    *((_BYTE *)a4 + 644) = v10 & 0xFD;
  }
  a4[162] = 0;
  RtlReleaseSRWLockExclusive(a4 + 148);
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
  return 0LL;
}
