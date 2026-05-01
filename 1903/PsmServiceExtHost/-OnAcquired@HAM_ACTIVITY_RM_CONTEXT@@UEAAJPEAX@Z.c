/*
 * XREFs of ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18002DB40
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180028200 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::OnAcquired(HAM_ACTIVITY_RM_CONTEXT *this, void *a2)
{
  __int64 v4; // rax
  DWORD v5; // edi
  __int64 v6; // r14
  _QWORD *Value; // rbx
  __int64 v8; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  int v10; // eax
  int v11; // edi
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v15; // rcx
  char v17; // [rsp+30h] [rbp-99h] BYREF
  char v18; // [rsp+31h] [rbp-98h] BYREF
  char v19; // [rsp+32h] [rbp-97h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-95h]
  void *v21; // [rsp+38h] [rbp-91h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DESCRIPTOR v23; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  void *v25; // [rsp+70h] [rbp-59h]
  int v26; // [rsp+78h] [rbp-51h]
  int v27; // [rsp+7Ch] [rbp-4Dh]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+80h] [rbp-49h] BYREF
  void *v29; // [rsp+90h] [rbp-39h]
  int v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+9Ch] [rbp-2Dh]
  __int64 v32; // [rsp+A0h] [rbp-29h]
  __int64 v33; // [rsp+A8h] [rbp-21h]
  char *v34; // [rsp+B0h] [rbp-19h]
  __int64 v35; // [rsp+B8h] [rbp-11h]
  char *v36; // [rsp+C0h] [rbp-9h]
  __int64 v37; // [rsp+C8h] [rbp-1h]
  char *v38; // [rsp+D0h] [rbp+7h]
  __int64 v39; // [rsp+D8h] [rbp+Fh]
  void **v40; // [rsp+E0h] [rbp+17h]
  __int64 v41; // [rsp+E8h] [rbp+1Fh]

  if ( dword_1800AB2C0 > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v25 = &unk_1800997E3;
    UserData.Reserved = 2;
    v26 = 30;
    v27 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *((_QWORD *)this + 1);
  v5 = HampLockTrackerId;
  v21 = a2;
  v6 = *(_QWORD *)(v4 + 80);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v6);
  *(_DWORD *)(v6 + 8) = GetCurrentThreadId();
  if ( v21 == *((void **)this + 2) )
  {
    v8 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v8 + 548) == 2 )
    {
      RtlQueryPerformanceCounter(*(_QWORD *)(v8 + 520) + 8LL);
      v9 = *(struct _RM_HAM_ACTIVITY_HOST **)(v8 + 80);
      *(_BYTE *)(v8 + 549) = 1;
      HampHostUpdateActivityState(v9);
      v10 = HampActTryStart(v8);
      v11 = v10;
      if ( v10 )
      {
        if ( (unsigned int)(v10 - 8) <= 6 )
          HampHostCheckQueueStateWorker(*(struct _RM_HAM_ACTIVITY_HOST **)(v8 + 80), 0);
      }
      else
      {
        v11 = 0;
      }
      if ( !v11 )
        LOBYTE(v11) = 0;
    }
    else
    {
      LOBYTE(v11) = 4;
    }
  }
  else
  {
    LOBYTE(v11) = 1;
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 1) + 80LL);
  if ( HampLockTrackerId != -1 )
  {
    v13 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v13 & 2) == 0 )
      __int2c();
    if ( v13[2]-- == 1LL )
      *v13 &= ~2uLL;
  }
  *(_DWORD *)(v12 + 8) = 0;
  RtlReleaseSRWLockExclusive(v12);
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v15 = *((_QWORD *)this + 1);
    v33 = 8LL;
    v17 = v11;
    v35 = 1LL;
    v32 = v15 + 40;
    v34 = &v17;
    v18 = *(_BYTE *)(v15 + 548);
    v36 = &v18;
    v37 = 1LL;
    v19 = *(_BYTE *)(v15 + 549);
    v38 = &v19;
    v40 = &v21;
    v39 = 1LL;
    v41 = 8LL;
    *(_DWORD *)&v23.Level = 516;
    v28.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&v23.Id = 184549376;
    v23.Keyword = 8LL;
    v28.Size = *(unsigned __int16 *)off_1800AB2C8;
    v29 = &unk_1800996F8;
    v28.Reserved = 2;
    v30 = 92;
    v31 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v23, 0LL, 0LL, 7u, &v28);
  }
  return 0LL;
}
