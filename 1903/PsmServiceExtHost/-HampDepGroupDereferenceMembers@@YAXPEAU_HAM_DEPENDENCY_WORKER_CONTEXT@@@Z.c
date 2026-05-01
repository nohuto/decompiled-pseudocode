/*
 * XREFs of ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180029AE0
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C380 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800778EC (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180078718 (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180078BCC (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampDepGroupDereferenceMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  DWORD v1; // esi
  _QWORD *Value; // rbx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v4; // rbx
  DWORD v5; // r14d
  char *v6; // rsi
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v11; // rax
  _QWORD *v12; // rax

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v1) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800AC208 = GetCurrentThreadId();
  while ( 1 )
  {
    v4 = *a1;
    if ( *a1 == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1 )
      break;
    v5 = HampLockTrackerId;
    v6 = (char *)v4 - 728;
    if ( HampLockTrackerId != -1 )
    {
      v7 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v7 |= 2uLL;
      ++v7[2];
    }
    RtlAcquireSRWLockExclusive((char *)v4 - 728);
    *((_DWORD *)v6 + 2) = GetCurrentThreadId();
    HampHostCheckQueueStateWorker((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v4 - 728), 0);
    if ( HampLockTrackerId != -1 )
    {
      v8 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v8 & 2) == 0 )
        __int2c();
      v9 = v8[2]-- == 1LL;
      if ( v9 )
        *v8 &= ~2uLL;
    }
    *((_DWORD *)v6 + 2) = 0;
    RtlReleaseSRWLockExclusive((char *)v4 - 728);
    v10 = *(_QWORD *)v4;
    if ( *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)(*(_QWORD *)v4 + 8LL) != v4
      || (v11 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)v4 + 1), *v11 != v4) )
    {
      __fastfail(3u);
    }
    *v11 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 1) = 0LL;
    v9 = (*((_QWORD *)v6 + 74))-- == 1LL;
    *((_DWORD *)v6 + 192) = 0;
    if ( v9 )
      RmpActivityHostCheckQueueDelete((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v4 - 792));
  }
  dword_1800AC208 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v12 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v12 & 1) == 0 )
      __int2c();
    v9 = v12[1]-- == 1LL;
    if ( v9 )
      *v12 &= ~1uLL;
  }
}
