/*
 * XREFs of ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18002ACA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800248E0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
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
  __int64 v15; // rax
  char v16; // cl
  char v18; // [rsp+30h] [rbp-99h] BYREF
  char v19; // [rsp+31h] [rbp-98h] BYREF
  void *v20; // [rsp+38h] [rbp-91h] BYREF
  void *v21; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-81h] BYREF
  EVENT_DESCRIPTOR v23; // [rsp+58h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-61h] BYREF
  void *v25; // [rsp+78h] [rbp-51h]
  int v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+84h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp-39h] BYREF
  void *v29; // [rsp+A0h] [rbp-29h]
  int v30; // [rsp+A8h] [rbp-21h]
  int v31; // [rsp+ACh] [rbp-1Dh]
  char *v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  char *v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]
  void **v36; // [rsp+D0h] [rbp+7h]
  __int64 v37; // [rsp+D8h] [rbp+Fh]
  void **v38; // [rsp+E0h] [rbp+17h]
  __int64 v39; // [rsp+E8h] [rbp+1Fh]

  if ( hProvider > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008B8A0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v25 = &unk_18008B8AB;
    UserData.Reserved = 2;
    v26 = 30;
    v27 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *((_QWORD *)this + 1);
  v5 = HampLockTrackerId;
  v20 = a2;
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
  v21 = (void *)*((_QWORD *)this + 2);
  if ( v20 == v21 )
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
        if ( (unsigned int)(v10 - 8) <= 5 )
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
  if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
  {
    v18 = v11;
    v32 = &v18;
    v15 = *((_QWORD *)this + 1);
    v33 = 1LL;
    v16 = *(_BYTE *)(v15 + 548);
    v34 = &v19;
    v36 = &v20;
    v38 = &v21;
    v19 = v16;
    v35 = 1LL;
    v37 = 8LL;
    v39 = 8LL;
    *(_DWORD *)&v23.Level = 516;
    v28.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&v23.Id = ((unsigned int)&unk_18008B7BD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v23.Keyword = 8LL;
    v28.Size = *(unsigned __int16 *)off_18009B0F8;
    v29 = &unk_18008B7C8;
    v28.Reserved = 2;
    v30 = 84;
    v31 = 1;
    EventWriteTransfer(RegHandle, &v23, 0LL, 0LL, 6u, &v28);
  }
  return 0LL;
}
