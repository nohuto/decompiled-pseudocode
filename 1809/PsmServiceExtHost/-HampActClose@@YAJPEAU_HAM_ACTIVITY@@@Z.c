/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20
 * Callers:
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A730 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B9B0 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000F7F0 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002D5E4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FAC0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FB0C (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800185D4 (-HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B140 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B450 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180020460 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002BEC8 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18002BEF0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002C334 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x1800350B0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180039618 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003B2C8 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampActClose(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  int v3; // r13d
  __int64 v4; // r14
  DWORD v5; // esi
  _QWORD *Value; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r12d
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  void *v25; // rcx
  DWORD v26; // esi
  __int64 v27; // r14
  _QWORD *v28; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  struct _HAM_DEPENDENCY_GROUP *v32; // r15
  int v33; // r14d
  struct _HAM_HOST_DEPENDENCY *v34; // rsi
  __int64 v35; // rdi
  _QWORD *v36; // rax
  unsigned __int64 v37; // rsi
  struct _HOST_ACTIVITY_MANAGER *v38; // rcx
  DWORD v39; // r15d
  __int64 v40; // rsi
  _QWORD *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  DWORD v45; // r14d
  _QWORD *v46; // rdi
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  int v50; // [rsp+30h] [rbp-99h] BYREF
  __int64 v51; // [rsp+38h] [rbp-91h] BYREF
  __int64 v52; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  void *v55; // [rsp+70h] [rbp-59h]
  int v56; // [rsp+78h] [rbp-51h]
  int v57; // [rsp+7Ch] [rbp-4Dh]
  char *v58; // [rsp+80h] [rbp-49h]
  __int64 v59; // [rsp+88h] [rbp-41h]
  __int64 *v60; // [rsp+90h] [rbp-39h]
  __int64 v61; // [rsp+98h] [rbp-31h]
  char *v62; // [rsp+A0h] [rbp-29h]
  __int64 v63; // [rsp+A8h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+C0h] [rbp-9h] BYREF
  int *v66; // [rsp+D0h] [rbp+7h]
  __int64 v67; // [rsp+D8h] [rbp+Fh]
  __int64 *v68; // [rsp+E0h] [rbp+17h]
  __int64 v69; // [rsp+E8h] [rbp+1Fh]

  LOBYTE(a2) = 4;
  v3 = HampActBeginStateChange(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v4 = *((_QWORD *)a1 + 8);
  if ( v4 )
  {
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        __int2c();
      *Value |= 0x200uLL;
      ++Value[10];
    }
    RtlAcquireSRWLockExclusive(v4 + 24);
    *(_DWORD *)(v4 + 32) = GetCurrentThreadId();
    v7 = (_QWORD *)((char *)a1 + 48);
    v8 = *((_QWORD *)a1 + 6);
    if ( *(struct _HAM_ACTIVITY **)(v8 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 48)
      || (v9 = (_QWORD *)*((_QWORD *)a1 + 7), (_QWORD *)*v9 != v7) )
    {
LABEL_92:
      __fastfail(3u);
    }
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = 0LL;
    *((_QWORD *)a1 + 7) = 0LL;
    if ( HampLockTrackerId != -1 )
    {
      v10 = TlsGetValue(HampLockTrackerId);
      if ( (*(_DWORD *)v10 & 0x200LL) == 0 )
        __int2c();
      v11 = v10[10]-- == 1LL;
      if ( v11 )
        *v10 &= ~0x200uLL;
    }
    *(_DWORD *)(v4 + 32) = 0;
    RtlReleaseSRWLockExclusive(v4 + 24);
  }
  v12 = *((_QWORD *)a1 + 12);
  v13 = (_QWORD *)((char *)a1 + 96);
  if ( *(struct _HAM_ACTIVITY **)(v12 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 96) )
    goto LABEL_92;
  v14 = (_QWORD *)*((_QWORD *)a1 + 13);
  if ( (_QWORD *)*v14 != v13 )
    goto LABEL_92;
  *v14 = v12;
  *(_QWORD *)(v12 + 8) = v14;
  *v13 = 0LL;
  *((_QWORD *)a1 + 13) = 0LL;
  v15 = *((_QWORD *)a1 + 10);
  HampHostCheckSetCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)v15);
  HampActCancelExpirationTimer(a1);
  if ( *(struct _HAM_ACTIVITY **)(v15 + 976) == a1 )
    *(_QWORD *)(v15 + 976) = 0LL;
  HampHostUpdateActivityState((struct _RM_HAM_ACTIVITY_HOST *)v15);
  v16 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v17 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v17 & 2) == 0 )
      __int2c();
    v11 = v17[2]-- == 1LL;
    if ( v11 )
      *v17 &= ~2uLL;
  }
  *(_DWORD *)(v16 + 8) = 0;
  RtlReleaseSRWLockExclusive(v16);
  v18 = *((_QWORD *)a1 + 9);
  if ( v18 )
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 24LL);
  else
    v19 = -1LL;
  v20 = 1;
  v52 = v19;
  if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
  {
    v59 = 8LL;
    v58 = (char *)a1 + 40;
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 10) - 32LL);
    v60 = &v51;
    v51 = v21;
    v62 = (char *)a1 + 512;
    v61 = 8LL;
    v63 = 8LL;
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 62);
    TlgCreateWsz(&v65, (LPCWSTR)a1 + 126);
    v22 = *((_DWORD *)a1 + 28);
    v66 = &v50;
    v68 = &v52;
    v50 = v22;
    v67 = 4LL;
    v69 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008BC8F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v55 = &unk_18008BC9A;
    UserData.Reserved = 2;
    v56 = 106;
    v57 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v23 = *((_QWORD *)a1 + 11);
  v24 = *(_QWORD *)(v23 + 16);
  if ( v24 != -1LL )
  {
    RmSrvResourceSetReleaseResources(RmSvcGlobals, v24, 0);
    *(_QWORD *)(v23 + 16) = -1LL;
  }
  v25 = (void *)*((_QWORD *)a1 + 63);
  if ( v25 )
  {
    HampSystemActivationClientDeactivate(v25);
    *((_QWORD *)a1 + 63) = 0LL;
  }
  v26 = HampLockTrackerId;
  v27 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v28 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v26) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v28 |= 2uLL;
    ++v28[2];
  }
  RtlAcquireSRWLockExclusive(v27);
  *(_DWORD *)(v27 + 8) = GetCurrentThreadId();
  v29 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_DWORD *)a1 + 136) &= ~1u;
  HampHostUpdateActivityState(v29);
  v30 = *((_BYTE *)a1 + 548);
  if ( v30 != 4 && v30 != 1 || (*((_BYTE *)a1 + 120) & 0xC) == 0 && (*((_DWORD *)a1 + 28) & 0x4000) == 0 )
    v20 = 0;
  v31 = *((_QWORD *)a1 + 10);
  v32 = *(struct _HAM_DEPENDENCY_GROUP **)(v31 + 664);
  if ( v32 )
  {
    HampActCheckEnterDependencyWorker(a1);
    v33 = (*((_DWORD *)a1 + 136) >> 1) & 1;
    *((_DWORD *)a1 + 136) &= ~2u;
  }
  else
  {
    v33 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v31, 0);
  }
  if ( !v33 )
    v32 = 0LL;
  if ( *((_BYTE *)a1 + 548) == 4 )
  {
    v34 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 9);
    *((_QWORD *)a1 + 9) = 0LL;
  }
  else
  {
    v34 = 0LL;
  }
  v35 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v36 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v36 & 2) == 0 )
      __int2c();
    v11 = v36[2]-- == 1LL;
    if ( v11 )
      *v36 &= ~2uLL;
  }
  *(_DWORD *)(v35 + 8) = 0;
  RtlReleaseSRWLockExclusive(v35);
  if ( v34 )
    HampHostDepDestroy(v34);
  if ( v20 )
  {
    v37 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 136;
    HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)v37);
    v38 = *(struct _HOST_ACTIVITY_MANAGER **)v37;
    if ( *(_DWORD *)(v37 + 44) )
    {
      ++*(_QWORD *)(v37 + 48);
      HampManagerReleaseLockExclusive(v38);
      RtlWakeAddressAll(v37 + 48);
    }
    else
    {
      HampManagerReleaseLockExclusive(v38);
    }
  }
  if ( v33 )
    HampDepGroupRunStateChangeWorker(v32);
  v39 = HampLockTrackerId;
  v40 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v41 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v39) )
      __int2c();
    *v41 |= 1uLL;
    ++v41[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_18009BF18 = GetCurrentThreadId();
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)(v40 - 64), 2);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)(v40 - 64), 2);
  QueryUnbiasedInterruptTime((PULONGLONG)(v40 + 1336));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)(v40 - 64)) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v40 - 8) + 88LL));
  v42 = *(_QWORD *)(v40 - 16);
  *(_QWORD *)(v40 + 1088) = 0LL;
  v43 = *(_QWORD *)(v42 + 2688);
  v44 = *(_DWORD *)(v43 + 184);
  if ( (v44 & 3) == 0 )
  {
    *(_DWORD *)(v43 + 184) = v44 | 1;
    TpPostWork(*(_QWORD *)(v43 + 168));
  }
  v45 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v46 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v46 |= 2uLL;
    ++v46[2];
  }
  RtlAcquireSRWLockExclusive(v40);
  *(_DWORD *)(v40 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v40, 0);
  if ( HampLockTrackerId != -1 )
  {
    v47 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v47 & 2) == 0 )
      __int2c();
    v11 = v47[2]-- == 1LL;
    if ( v11 )
      *v47 &= ~2uLL;
  }
  *(_DWORD *)(v40 + 8) = 0;
  RtlReleaseSRWLockExclusive(v40);
  dword_18009BF18 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v48 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v48 & 1) == 0 )
      __int2c();
    v11 = v48[1]-- == 1LL;
    if ( v11 )
      *v48 &= ~1uLL;
  }
  if ( *((_QWORD *)a1 + 8) )
    CemRcObjectDereference(a1);
  CemRcObjectDereference(a1);
  return (unsigned int)v3;
}
