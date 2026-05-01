/*
 * XREFs of ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800132C0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013534 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampAppInterruptiveUIChangeWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // esi
  _QWORD *Value; // rdi
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  DWORD v11; // ebx
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v17; // [rsp+F0h] [rbp-10h]
  int v18; // [rsp+F8h] [rbp-8h]
  int v19; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+110h] [rbp+10h] BYREF
  _DWORD *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]
  char *v25; // [rsp+130h] [rbp+30h]
  int v26; // [rsp+138h] [rbp+38h]
  int v27; // [rsp+13Ch] [rbp+3Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  while ( 1 )
  {
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(a2 + 576);
    *((_DWORD *)a2 + 146) = GetCurrentThreadId();
    v6 = *((_DWORD *)a2 + 152);
    v7 = (v6 >> 18) & 1;
    if ( ((v6 >> 17) & 1) == v7 )
      break;
    *((_DWORD *)a2 + 152) = v6 & 0xFFFDFFFF | (v7 << 17);
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
    if ( dword_1800AB2C0 > 4u )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 48);
      TlgCreateSid(&v21, (const SID *)(*((_QWORD *)a2 + 11) + 228LL));
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 88LL) + 160LL) + 88LL);
      v24 = 0;
      v27 = 0;
      v13[0] = v8;
      v22 = v13;
      v25 = &v12;
      v23 = 4;
      v12 = v7;
      v26 = 1;
      EventDescriptor.Keyword = 0LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800AB2C8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
      v17 = &unk_180099436;
      UserData.Reserved = 2;
      v18 = 93;
      v19 = 1;
      v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    v9 = *((_QWORD *)a2 + 11);
    v10 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(v10 - 1104) & 1) != 0 )
      RmRpsNotifyApplicationInterruptiveUIChange(
        *(_QWORD *)(v10 - 1112),
        a2 + 96,
        v9 + 228,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 88) + 160LL) + 88LL),
        v7);
  }
  *((_DWORD *)a2 + 152) = v6 & 0xFFF7FFFF;
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
  CemRcObjectDereference(a2);
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
}
