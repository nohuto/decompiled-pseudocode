/*
 * XREFs of ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015B90
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015E08 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
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
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v17; // [rsp+F0h] [rbp-10h]
  int v18; // [rsp+F8h] [rbp-8h]
  int v19; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+110h] [rbp+10h] BYREF
  int *v22; // [rsp+120h] [rbp+20h]
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
    v7 = (v6 >> 21) & 1;
    if ( ((v6 >> 20) & 1) == v7 )
      break;
    *((_DWORD *)a2 + 152) = v6 & 0xFFEFFFFF | (v7 << 20);
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2);
    if ( hProvider > 4u )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 48);
      TlgCreateSid(&v21, (const SID *)(*((_QWORD *)a2 + 11) + 228LL));
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 88LL) + 160LL) + 88LL);
      v24 = 0;
      v27 = 0;
      v13 = v8;
      v22 = &v13;
      v25 = &v12;
      v23 = 4;
      v12 = v7;
      v26 = 1;
      EventDescriptor.Keyword = 0LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18009B0F8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008B8CA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      UserData.Size = *(unsigned __int16 *)off_18009B0F8;
      v17 = &unk_18008B8D5;
      UserData.Reserved = 2;
      v18 = 93;
      v19 = 1;
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
  *((_DWORD *)a2 + 152) = v6 & 0xFFBFFFFF;
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
