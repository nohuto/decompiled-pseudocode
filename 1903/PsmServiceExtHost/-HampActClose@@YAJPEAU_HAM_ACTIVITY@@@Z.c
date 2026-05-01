/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000CAC8 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18002FE54 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180034C30 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180035C40 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B024 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AFE0 (-HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024190 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800308B4 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180030900 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180034F98 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180034FC0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18003538C (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180036200 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x18003E878 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
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
  int v22; // edx
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
  _DWORD v40[2]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v41; // [rsp+38h] [rbp-91h] BYREF
  __int64 v42; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  void *v45; // [rsp+70h] [rbp-59h]
  int v46; // [rsp+78h] [rbp-51h]
  int v47; // [rsp+7Ch] [rbp-4Dh]
  char *v48; // [rsp+80h] [rbp-49h]
  __int64 v49; // [rsp+88h] [rbp-41h]
  __int64 *v50; // [rsp+90h] [rbp-39h]
  __int64 v51; // [rsp+98h] [rbp-31h]
  char *v52; // [rsp+A0h] [rbp-29h]
  __int64 v53; // [rsp+A8h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD *v56; // [rsp+D0h] [rbp+7h]
  __int64 v57; // [rsp+D8h] [rbp+Fh]
  __int64 *v58; // [rsp+E0h] [rbp+17h]
  __int64 v59; // [rsp+E8h] [rbp+1Fh]

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
LABEL_70:
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
    goto LABEL_70;
  v14 = (_QWORD *)*((_QWORD *)a1 + 13);
  if ( (_QWORD *)*v14 != v13 )
    goto LABEL_70;
  *v14 = v12;
  *(_QWORD *)(v12 + 8) = v14;
  *v13 = 0LL;
  *((_QWORD *)a1 + 13) = 0LL;
  v15 = *((_QWORD *)a1 + 10);
  HampHostCheckSetCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)v15);
  HampActCancelExpirationTimer(a1);
  if ( *(struct _HAM_ACTIVITY **)(v15 + 1000) == a1 )
    *(_QWORD *)(v15 + 1000) = 0LL;
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
  v42 = v19;
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v49 = 8LL;
    v48 = (char *)a1 + 40;
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 10) - 32LL);
    v50 = &v41;
    v41 = v21;
    v52 = (char *)a1 + 512;
    v51 = 8LL;
    v53 = 8LL;
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 62);
    TlgCreateWsz(&v55, (LPCWSTR)a1 + 126);
    v22 = *((_DWORD *)a1 + 28);
    v56 = v40;
    v58 = &v42;
    v40[0] = v22;
    v57 = 4LL;
    v59 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v45 = &unk_180099BE6;
    UserData.Reserved = 2;
    v46 = 106;
    v47 = 1;
    v40[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
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
  v32 = *(struct _HAM_DEPENDENCY_GROUP **)(v31 + 688);
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
    v37 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)(v37 + 120));
    v38 = *(struct _HOST_ACTIVITY_MANAGER **)(v37 + 120);
    if ( *(_DWORD *)(v37 + 164) )
    {
      ++*(_QWORD *)(v37 + 168);
      HampManagerReleaseLockExclusive(v38);
      RtlWakeAddressAll(v37 + 168);
    }
    else
    {
      HampManagerReleaseLockExclusive(v38);
    }
  }
  if ( v33 )
    HampDepGroupRunStateChangeWorker(v32);
  RmHamHostUpdateSettings(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  if ( *((_QWORD *)a1 + 8) )
    CemRcObjectDereference(a1);
  CemRcObjectDereference(a1);
  return (unsigned int)v3;
}
