/*
 * XREFs of ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180034FC0
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800262D0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180034DA0 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180003184 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180035448 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampActBeginStateChange(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // esi
  __int64 v4; // r14
  _QWORD *Value; // rdi
  struct _HAM_DEPENDENCY_GROUP *v7; // r12
  int v8; // r8d
  unsigned int v9; // edi
  int v10; // eax
  int v11; // esi
  int v13; // r8d
  __int64 v14; // rdi
  DWORD v15; // r15d
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  int v20; // r15d
  _QWORD *v21; // rax
  unsigned int v24; // ebx
  unsigned __int8 v25; // [rsp+30h] [rbp-69h] BYREF
  char v26; // [rsp+31h] [rbp-68h] BYREF
  char v27; // [rsp+32h] [rbp-67h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-65h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-61h] BYREF
  int v30; // [rsp+48h] [rbp-51h]
  __int64 v31; // [rsp+4Ch] [rbp-4Dh]
  int v32; // [rsp+54h] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v34; // [rsp+70h] [rbp-29h]
  int v35; // [rsp+78h] [rbp-21h]
  int v36; // [rsp+7Ch] [rbp-1Dh]
  __int64 v37; // [rsp+80h] [rbp-19h]
  __int64 v38; // [rsp+88h] [rbp-11h]
  char *v39; // [rsp+90h] [rbp-9h]
  __int64 v40; // [rsp+98h] [rbp-1h]
  char *v41; // [rsp+A0h] [rbp+7h]
  __int64 v42; // [rsp+A8h] [rbp+Fh]
  char *v43; // [rsp+B0h] [rbp+17h]
  __int64 v44; // [rsp+B8h] [rbp+1Fh]

  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 72) && *(_QWORD *)(a1 + 64) )
    v7 = HampHostCheckWaitEnterDependencyStateChange((struct _RM_HAM_ACTIVITY_HOST *)v4);
  else
    v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 544);
  if ( (v8 & 1) != 0 )
  {
    v24 = -1073740682;
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 548);
    v30 = 12;
    v31 = 2LL;
    v32 = 14;
    v10 = *((_DWORD *)&EventDescriptor.Keyword + a2 + 1);
    if ( _bittest(&v10, v9) )
    {
      v11 = 1;
      if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
      {
        v38 = 8LL;
        v37 = a1 + 40;
        v39 = (char *)&v25;
        v41 = &v26;
        v27 = *(_BYTE *)(a1 + 549);
        v43 = &v27;
        v25 = a2;
        v40 = 1LL;
        v26 = v9;
        v42 = 1LL;
        v44 = 1LL;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_1800AB2C8;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 8LL;
        UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
        v34 = &unk_180099B19;
        UserData.Reserved = 2;
        v35 = 66;
        v36 = 1;
        v28 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
        v8 = *(_DWORD *)(a1 + 544);
      }
      v13 = v8 | 1;
      *(_BYTE *)(a1 + 548) = a2;
      *(_DWORD *)(a1 + 544) = v13;
      if ( (_BYTE)v9 != 1 )
      {
        if ( (_BYTE)v9 == 2 )
        {
          HampActSetPendState(a1, 6u);
          goto LABEL_17;
        }
        if ( (unsigned __int8)v9 <= 2u || (unsigned __int8)v9 > 4u )
          goto LABEL_17;
      }
      *(_DWORD *)(a1 + 544) = v13 & 0xFFFFFFEF;
LABEL_17:
      if ( v7 )
      {
        *(_DWORD *)(a1 + 544) |= 2u;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 688LL);
        if ( v14 && !*(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 544) & 2) == 0 )
        {
          v15 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v16 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v15) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
              __int2c();
            *v16 |= 8uLL;
            ++v16[4];
          }
          RtlAcquireSRWLockExclusive(v14 + 8);
          *(_DWORD *)(v14 + 16) = GetCurrentThreadId();
          v17 = *(_QWORD *)(a1 + 80);
          v18 = *(_QWORD *)(v14 + 112) + 1LL;
          *(_QWORD *)(v14 + 112) = v18;
          v19 = (__int64 *)(v17 + 616);
          if ( v19 )
            *v19 = v18;
          if ( *(_DWORD *)(v14 + 128) )
          {
            v20 = 0;
          }
          else
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 96)) <= 1 )
              __fastfail(0xEu);
            *(_DWORD *)(v14 + 128) = GetCurrentThreadId();
            v20 = 1;
          }
          if ( *(_DWORD *)(v14 + 128) != GetCurrentThreadId() )
            v11 = 0;
          if ( v20 != v11 )
            __int2c();
          *(_DWORD *)(a1 + 544) &= ~2u;
          *(_DWORD *)(a1 + 544) |= 2 * v20;
          *(_DWORD *)(v14 + 16) = 0;
          RtlReleaseSRWLockExclusive(v14 + 8);
          if ( HampLockTrackerId != -1 )
          {
            v21 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v21 & 8) == 0 )
              __int2c();
            if ( v21[4]-- == 1LL )
              *v21 &= ~8uLL;
          }
        }
      }
      return 0LL;
    }
    v24 = -1073700861;
  }
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4);
  if ( v7 )
    HampDepGroupRunStateChangeWorker(v7);
  return v24;
}
